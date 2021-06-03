{.used.}

import
  std/[unittest, options, tables, sets, times],
  chronos, chronicles,
  ../../waku/v2/node/storage/message/waku_message_store,
  ../../waku/v2/protocol/waku_store/waku_store,
  ./utils

suite "Message Store":
  test "set and get works":
    let 
      database = SqliteDatabase.init("", inMemory = true)[]
      store = WakuMessageStore.init(database)[]
      topic = ContentTopic("/waku/2/default-content/proto")
      pubsubTopic =  "/waku/2/default-waku/proto"

      t1 = epochTime()
      t2 = epochTime()
      t3 = high(float64)
    var msgs = @[
      WakuMessage(payload: @[byte 1, 2, 3], contentTopic: topic, version: uint32(0), timestamp: t1),
      WakuMessage(payload: @[byte 1, 2, 3, 4], contentTopic: topic, version: uint32(1), timestamp: t2),
      WakuMessage(payload: @[byte 1, 2, 3, 4, 5], contentTopic: topic, version: high(uint32), timestamp: t3),
    ]

    defer: store.close()

    var indexes: seq[Index] = @[]
    for msg in msgs:
      var index = computeIndex(msg)
      let output = store.put(index, msg, pubsubTopic)
      indexes.add(index)
      check output.isOk

    var v0Flag, v1Flag, vMaxFlag: bool = false
    var t1Flag, t2Flag, t3Flag: bool = false
    var rt1Flag, rt2Flag, rt3Flag: bool = false

    var responseCount = 0
    proc data(receiverTimestamp: float64, msg: WakuMessage, psTopic: string) =
      responseCount += 1
      check msg in msgs
      check psTopic == pubsubTopic

      # check the correct retrieval of versions
      if msg.version == uint32(0): v0Flag = true
      if msg.version == uint32(1): v1Flag = true
      # high(uint32) is the largest value that fits in uint32, this is to make sure there is no overflow in the storage
      if msg.version == high(uint32): vMaxFlag = true

      # check correct retrieval of sender timestamps
      if msg.timestamp == t1: t1Flag = true
      if msg.timestamp == t2: t2Flag = true
      if msg.timestamp == t3: t3Flag = true

      # check correct retrieval of receiver timestamps
      if receiverTimestamp == indexes[0].receivedTime: rt1Flag = true
      if receiverTimestamp == indexes[1].receivedTime: rt2Flag = true
      if receiverTimestamp == indexes[2].receivedTime: rt3Flag = true


    let res = store.getAll(data)
    
    check:
      res.isErr == false
      responseCount == 3
      # check version
      v0Flag == true
      v1Flag == true
      vMaxFlag == true
      # check sender timestamp
      t1Flag == true
      t2Flag == true
      t3Flag == true
      # check receiver timestamp
      rt1Flag == true
      rt2Flag == true
      rt3Flag == true


