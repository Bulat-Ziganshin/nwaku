## Waku Store protocol for historical messaging support.
## See spec for more details:
## https://github.com/vacp2p/specs/blob/master/specs/waku/v2/waku-store.md

import
  std/[tables, times, sequtils, algorithm, options],
  bearssl,
  chronos, chronicles, metrics, stew/[results, byteutils, endians2],
  libp2p/crypto/crypto,
  libp2p/protocols/protocol,
  libp2p/protobuf/minprotobuf,
  libp2p/stream/connection,
  ../message_notifier,
  ../../node/storage/message/message_store,
  ../waku_swap/waku_swap,
  ./waku_store_types,
  ../../utils/requests,
  ../../node/peer_manager/peer_manager

export waku_store_types

declarePublicGauge waku_store_messages, "number of historical messages", ["type"]
declarePublicGauge waku_store_peers, "number of store peers"
declarePublicGauge waku_store_errors, "number of store protocol errors", ["type"]

logScope:
  topics = "wakustore"

const
  WakuStoreCodec* = "/vac/waku/store/2.0.0-beta1"

# Error types (metric label values)
const
  dialFailure = "dial_failure"
  decodeRpcFailure = "decode_rpc_failure"

# TODO Move serialization function to separate file, too noisy
# TODO Move pagination to separate file, self-contained logic

proc computeIndex*(msg: WakuMessage): Index =
  ## Takes a WakuMessage and returns its Index
  var ctx: sha256
  ctx.init()
  ctx.update(msg.contentTopic.toBytes()) # converts the contentTopic to bytes
  ctx.update(msg.payload)
  let digest = ctx.finish() # computes the hash
  ctx.clear()
  result.digest = digest
  result.receivedTime = epochTime() # gets the unix timestamp

proc encode*(index: Index): ProtoBuffer =
  ## encodes an Index object into a ProtoBuffer
  ## returns the resultant ProtoBuffer

  # intiate a ProtoBuffer
  result = initProtoBuffer()

  # encodes index
  result.write(1, index.digest.data)
  result.write(2, index.receivedTime)

proc encode*(pinfo: PagingInfo): ProtoBuffer =
  ## encodes a PagingInfo object into a ProtoBuffer
  ## returns the resultant ProtoBuffer

  # intiate a ProtoBuffer
  result = initProtoBuffer()

  # encodes pinfo
  result.write(1, pinfo.pageSize)
  result.write(2, pinfo.cursor.encode())
  result.write(3, uint32(ord(pinfo.direction)))

proc init*(T: type Index, buffer: seq[byte]): ProtoResult[T] =
  ## creates and returns an Index object out of buffer
  var index = Index()
  let pb = initProtoBuffer(buffer)

  var data: seq[byte]
  discard ? pb.getField(1, data)

  # create digest from data
  index.digest = MDigest[256]()
  for count, b in data:
    index.digest.data[count] = b

  # read the receivedTime
  var receivedTime: float64
  discard ? pb.getField(2, receivedTime)
  index.receivedTime = receivedTime

  ok(index) 

proc init*(T: type PagingInfo, buffer: seq[byte]): ProtoResult[T] =
  ## creates and returns a PagingInfo object out of buffer
  var pagingInfo = PagingInfo()
  let pb = initProtoBuffer(buffer)

  var pageSize: uint64
  discard ? pb.getField(1, pageSize)
  pagingInfo.pageSize = pageSize


  var cursorBuffer: seq[byte]
  discard ? pb.getField(2, cursorBuffer)
  pagingInfo.cursor = ? Index.init(cursorBuffer)

  var direction: uint32
  discard ? pb.getField(3, direction)
  pagingInfo.direction = PagingDirection(direction)

  ok(pagingInfo) 

proc init*(T: type HistoryContentFilter, buffer: seq[byte]): ProtoResult[T] =
  let pb = initProtoBuffer(buffer)

  # ContentTopic corresponds to the contentTopic field of waku message (not to be confused with pubsub topic)
  var contentTopic: ContentTopic
  discard ? pb.getField(1, contentTopic)

  ok(HistoryContentFilter(contentTopic: contentTopic))

proc init*(T: type HistoryQuery, buffer: seq[byte]): ProtoResult[T] =
  var msg = HistoryQuery()
  let pb = initProtoBuffer(buffer)


  var buffs: seq[seq[byte]]
  discard ? pb.getRepeatedField(2, buffs)
  
  for buf in buffs:
    msg.contentFilters.add(? HistoryContentFilter.init(buf))

  discard ? pb.getField(3, msg.pubsubTopic)

  var pagingInfoBuffer: seq[byte]
  discard ? pb.getField(4, pagingInfoBuffer)

  msg.pagingInfo = ? PagingInfo.init(pagingInfoBuffer)

  discard ? pb.getField(5, msg.startTime)
  discard ? pb.getField(6, msg.endTime)


  ok(msg)

proc init*(T: type HistoryResponse, buffer: seq[byte]): ProtoResult[T] =
  var msg = HistoryResponse()
  let pb = initProtoBuffer(buffer)

  var messages: seq[seq[byte]]
  discard ? pb.getRepeatedField(1, messages)

  for buf in messages:
    msg.messages.add(? WakuMessage.init(buf))

  var pagingInfoBuffer: seq[byte]
  discard ? pb.getField(2,pagingInfoBuffer)
  msg.pagingInfo= ? PagingInfo.init(pagingInfoBuffer)

  ok(msg)

proc init*(T: type HistoryRPC, buffer: seq[byte]): ProtoResult[T] =
  var rpc = HistoryRPC()
  let pb = initProtoBuffer(buffer)

  discard ? pb.getField(1, rpc.requestId)

  var queryBuffer: seq[byte]
  discard ? pb.getField(2, queryBuffer)

  rpc.query = ? HistoryQuery.init(queryBuffer)

  var responseBuffer: seq[byte]
  discard ? pb.getField(3, responseBuffer)

  rpc.response = ? HistoryResponse.init(responseBuffer)

  ok(rpc)

proc encode*(filter: HistoryContentFilter): ProtoBuffer =
  result = initProtoBuffer()
  result.write(1, filter.contentTopic)

proc encode*(query: HistoryQuery): ProtoBuffer =
  result = initProtoBuffer()

  for filter in query.contentFilters:
    result.write(2, filter.encode())
  result.write(3, query.pubsubTopic)

  result.write(4, query.pagingInfo.encode())

  result.write(5, query.startTime)
  result.write(6, query.endTime)


proc encode*(response: HistoryResponse): ProtoBuffer =
  result = initProtoBuffer()

  for msg in response.messages:
    result.write(1, msg.encode())

  result.write(2, response.pagingInfo.encode())

proc encode*(rpc: HistoryRPC): ProtoBuffer =
  result = initProtoBuffer()

  result.write(1, rpc.requestId)
  result.write(2, rpc.query.encode())
  result.write(3, rpc.response.encode())

proc indexComparison* (x, y: Index): int =
  ## compares x and y
  ## returns 0 if they are equal 
  ## returns -1 if x < y
  ## returns 1 if x > y
  let 
    timecmp = system.cmp(x.receivedTime, y.receivedTime)
    digestcm = system.cmp(x.digest.data, y.digest.data)
  if timecmp != 0: # timestamp has a higher priority for comparison
    return timecmp
  return digestcm

proc indexedWakuMessageComparison*(x, y: IndexedWakuMessage): int =
  ## compares x and y
  ## returns 0 if they are equal 
  ## returns -1 if x < y
  ## returns 1 if x > y
  result = indexComparison(x.index, y.index)

proc findIndex*(msgList: seq[IndexedWakuMessage], index: Index): Option[int] =
  ## returns the position of an IndexedWakuMessage in msgList whose index value matches the given index
  ## returns none if no match is found
  for i, indexedWakuMessage in msgList:
    if indexedWakuMessage.index == index:
      return some(i)
  return none(int)

proc paginateWithIndex*(list: seq[IndexedWakuMessage], pinfo: PagingInfo): (seq[IndexedWakuMessage], PagingInfo) =
  ## takes list, and performs paging based on pinfo 
  ## returns the page i.e, a sequence of IndexedWakuMessage and the new paging info to be used for the next paging request
  var
    cursor = pinfo.cursor
    pageSize = pinfo.pageSize
    dir = pinfo.direction

  if pageSize == uint64(0): # pageSize being zero indicates that no pagination is required
    return (list, pinfo)

  if list.len == 0: # no pagination is needed for an empty list
    return (list, PagingInfo(pageSize: 0, cursor:pinfo.cursor, direction: pinfo.direction))

  var msgList = list # makes a copy of the list
  # sorts msgList based on the custom comparison proc indexedWakuMessageComparison
  msgList.sort(indexedWakuMessageComparison) 
  
  var initQuery = false
  if cursor == Index(): 
    initQuery = true # an empty cursor means it is an initial query
    case dir
      of PagingDirection.FORWARD: 
        cursor = msgList[0].index # perform paging from the begining of the list
      of PagingDirection.BACKWARD: 
        cursor = msgList[list.len - 1].index # perform paging from the end of the list
  var foundIndexOption = msgList.findIndex(cursor) 
  # echo "foundIndexOption", foundIndexOption.get()
  if foundIndexOption.isNone: # the cursor is not valid
    return (@[], PagingInfo(pageSize: 0, cursor:pinfo.cursor, direction: pinfo.direction))
  var foundIndex = uint64(foundIndexOption.get())
  var retrievedPageSize, s, e: uint64
  var newCursor: Index # to be returned as part of the new paging info
  case dir
    of PagingDirection.FORWARD: # forward pagination
      # the message that is pointed by the cursor is excluded for the retrieved list, this is because this message has already been retrieved by the querier in its prior request
      var remainingMessages= uint64(msgList.len) - uint64(foundIndex) - 1 
      if initQuery:  remainingMessages = remainingMessages + 1
      # the number of queried messages cannot exceed the MaxPageSize and the total remaining messages i.e., msgList.len-foundIndex
      retrievedPageSize = min(uint64(pageSize), MaxPageSize).min(remainingMessages)  
      if initQuery : foundIndex = foundIndex - 1
      s = foundIndex + 1  # non inclusive
      e = foundIndex + retrievedPageSize 
      newCursor = msgList[e].index # the new cursor points to the end of the page
    of PagingDirection.BACKWARD: # backward pagination
      var remainingMessages = foundIndex 
      if initQuery:  remainingMessages = remainingMessages + 1
      # the number of queried messages cannot exceed the MaxPageSize and the total remaining messages i.e., foundIndex-0
      retrievedPageSize = min(uint64(pageSize), MaxPageSize).min(remainingMessages) 
      if initQuery : foundIndex = foundIndex + 1
      s = foundIndex - retrievedPageSize 
      e = foundIndex - 1
      newCursor = msgList[s].index # the new cursor points to the begining of the page

  if (retrievedPageSize == 0):
    return (@[], PagingInfo(pageSize: 0, cursor:pinfo.cursor, direction: pinfo.direction))

  # retrieve the messages
  for i in s..e:
    result[0].add(msgList[i])
  result[1] = PagingInfo(pageSize : retrievedPageSize, cursor : newCursor, direction : pinfo.direction)

proc paginateWithoutIndex(list: seq[IndexedWakuMessage], pinfo: PagingInfo): (seq[WakuMessage], PagingInfo) =
  ## takes list, and perfomrs paging based on pinfo 
  ## returns the page i.e, a sequence of WakuMessage and the new paging info to be used for the next paging request  
  var (indexedData, updatedPagingInfo) = paginateWithIndex(list,pinfo)
  for indexedMsg in indexedData:
    result[0].add(indexedMsg.msg)
  result[1] = updatedPagingInfo

proc findMessages(w: WakuStore, query: HistoryQuery): HistoryResponse =
  result = HistoryResponse(messages: newSeq[WakuMessage]())
  # data holds IndexedWakuMessage whose content topics match the query
  var data : seq[IndexedWakuMessage] = @[]
  for filter in query.contentFilters:
    var matched = w.messages.filterIt(it.msg.contentTopic  == filter.contentTopic)  
    # TODO remove duplicates from data 
    data.add(matched)

  # filter based on pubsub topic
  # an empty pubsub topic means no pubsub topic filter is requested
  if ((query.pubsubTopic).len != 0):
    data = data.filterIt(it.pubsubTopic == query.pubsubTopic)

  # temporal filtering   
  # check whether the history query contains a time filter
  if (query.endTime != float64(0) and query.startTime != float64(0)):
    # for a valid time query, select messages whose sender generated timestamps fall bw the queried start time and end time
    data = data.filterIt(it.msg.timestamp <= query.endTime and it.msg.timestamp >= query.startTime)

  
  # perform pagination
  (result.messages, result.pagingInfo)= paginateWithoutIndex(data, query.pagingInfo)


method init*(ws: WakuStore) =
  proc handle(conn: Connection, proto: string) {.async, gcsafe, closure.} =
    var message = await conn.readLp(64*1024)
    var res = HistoryRPC.init(message)
    if res.isErr:
      error "failed to decode rpc"
      waku_store_errors.inc(labelValues = [decodeRpcFailure])
      return

    info "received query"

    let value = res.value
    let response = ws.findMessages(res.value.query)

    # TODO Do accounting here, response is HistoryResponse
    # How do we get node or swap context?
    if not ws.wakuSwap.isNil:
      info "handle store swap test", text=ws.wakuSwap.text
      # NOTE Perform accounting operation
      let peerId = conn.peerInfo.peerId
      let messages = response.messages
      ws.wakuSwap.credit(peerId, messages.len)
    else:
      info "handle store swap is nil"

    await conn.writeLp(HistoryRPC(requestId: value.requestId,
        response: response).encode().buffer)

  ws.handler = handle
  ws.codec = WakuStoreCodec

  if ws.store.isNil:
    return

  proc onData(timestamp: uint64, msg: WakuMessage, pubsubTopic:  string) =
    # TODO index should not be recalculated
    ws.messages.add(IndexedWakuMessage(msg: msg, index: msg.computeIndex(), pubsubTopic: pubsubTopic))

  let res = ws.store.getAll(onData)
  if res.isErr:
    warn "failed to load messages from store", err = res.error
    waku_store_errors.inc(labelValues = ["store_load_failure"])
  
  waku_store_messages.set(ws.messages.len.int64, labelValues = ["stored"])

proc init*(T: type WakuStore, peerManager: PeerManager, rng: ref BrHmacDrbgContext,
                   store: MessageStore = nil, wakuSwap: WakuSwap = nil): T =
  new result
  result.rng = rng
  result.peerManager = peerManager
  result.store = store
  result.wakuSwap = wakuSwap
  result.init()

# @TODO THIS SHOULD PROBABLY BE AN ADD FUNCTION AND APPEND THE PEER TO AN ARRAY
proc setPeer*(ws: WakuStore, peer: PeerInfo) =
  ws.peerManager.addPeer(peer, WakuStoreCodec)
  waku_store_peers.inc()

proc subscription*(proto: WakuStore): MessageNotificationSubscription =
  ## The filter function returns the pubsub filter for the node.
  ## This is used to pipe messages into the storage, therefore
  ## the filter should be used by the component that receives
  ## new messages.
  proc handle(topic: string, msg: WakuMessage) {.async.} =
    let index = msg.computeIndex()
    proto.messages.add(IndexedWakuMessage(msg: msg, index: index, pubsubTopic: topic))
    waku_store_messages.inc(labelValues = ["stored"])
    if proto.store.isNil:
      return
  
    let res = proto.store.put(index, msg, topic)
    if res.isErr:
      warn "failed to store messages", err = res.error
      waku_store_errors.inc(labelValues = ["store_failure"])

  result = MessageNotificationSubscription.init(@[], handle)

proc query*(w: WakuStore, query: HistoryQuery, handler: QueryHandlerFunc) {.async, gcsafe.} =
  # @TODO We need to be more stratigic about which peers we dial. Right now we just set one on the service.
  # Ideally depending on the query and our set  of peers we take a subset of ideal peers.
  # This will require us to check for various factors such as:
  #  - which topics they track
  #  - latency?
  #  - default store peer?

  let peerOpt = w.peerManager.selectPeer(WakuStoreCodec)

  if peerOpt.isNone():
    error "no suitable remote peers"
    waku_store_errors.inc(labelValues = [dialFailure])
    return

  let connOpt = await w.peerManager.dialPeer(peerOpt.get(), WakuStoreCodec)

  if connOpt.isNone():
    # @TODO more sophisticated error handling here
    error "failed to connect to remote peer"
    waku_store_errors.inc(labelValues = [dialFailure])
    return

  await connOpt.get().writeLP(HistoryRPC(requestId: generateRequestId(w.rng),
      query: query).encode().buffer)

  var message = await connOpt.get().readLp(64*1024)
  let response = HistoryRPC.init(message)

  if response.isErr:
    error "failed to decode response"
    waku_store_errors.inc(labelValues = [decodeRpcFailure])
    return

  waku_store_messages.set(response.value.response.messages.len.int64, labelValues = ["retrieved"])

  handler(response.value.response)

# NOTE: Experimental, maybe incorporate as part of query call
proc queryWithAccounting*(ws: WakuStore, query: HistoryQuery, handler: QueryHandlerFunc) {.async, gcsafe.} =
  # @TODO We need to be more stratigic about which peers we dial. Right now we just set one on the service.
  # Ideally depending on the query and our set  of peers we take a subset of ideal peers.
  # This will require us to check for various factors such as:
  #  - which topics they track
  #  - latency?
  #  - default store peer?

  let peerOpt = ws.peerManager.selectPeer(WakuStoreCodec)

  if peerOpt.isNone():
    error "no suitable remote peers"
    waku_store_errors.inc(labelValues = [dialFailure])
    return

  let connOpt = await ws.peerManager.dialPeer(peerOpt.get(), WakuStoreCodec)

  if connOpt.isNone():
    # @TODO more sophisticated error handling here
    error "failed to connect to remote peer"
    waku_store_errors.inc(labelValues = [dialFailure])
    return

  await connOpt.get().writeLP(HistoryRPC(requestId: generateRequestId(ws.rng),
      query: query).encode().buffer)

  var message = await connOpt.get().readLp(64*1024)
  let response = HistoryRPC.init(message)

  if response.isErr:
    error "failed to decode response"
    waku_store_errors.inc(labelValues = [decodeRpcFailure])
    return

  # NOTE Perform accounting operation
  # Assumes wakuSwap protocol is mounted
  let peerId = peerOpt.get().peerId
  let messages = response.value.response.messages
  ws.wakuSwap.debit(peerId, messages.len)

  waku_store_messages.set(response.value.response.messages.len.int64, labelValues = ["retrieved"])

  handler(response.value.response)
