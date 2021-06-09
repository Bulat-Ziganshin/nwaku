/* Generated by Nim Compiler v1.0.11 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct RootObj RootObj;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct RootObj {
TNimType* m_type;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg {
  RootObj Sup;
NI bufpos;
NimStringDesc* buf;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;
};
typedef N_NIMCALL_PTR(void, tyProc__JQrsH08b4uPTH9cyFPlVOZg) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__9bmhFrLahRsL2hltfRDVtlQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void, tyProc__3svSoGIUJIsHkaBL7q4DAQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NI pos);
typedef N_NIMCALL_PTR(NI, tyProc__xflqkf2D1uVClg70czEDHA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI, tyProc__c9c0f59ak4YGQ6neEym8LPKw) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL, tyProc__7jFfqMk9ajToCz6Hv9atCA4A) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** line);
typedef N_NIMCALL_PTR(NI, tyProc__2VVzVL9bOnKhj1eZKkf9cEuA) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
typedef N_NIMCALL_PTR(void, tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ) (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, void* buffer, NI bufLen);
struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ {
  RootObj Sup;
tyProc__JQrsH08b4uPTH9cyFPlVOZg closeImpl;
tyProc__9bmhFrLahRsL2hltfRDVtlQ atEndImpl;
tyProc__3svSoGIUJIsHkaBL7q4DAQ setPositionImpl;
tyProc__xflqkf2D1uVClg70czEDHA getPositionImpl;
tyProc__c9c0f59ak4YGQ6neEym8LPKw readDataStrImpl;
tyProc__7jFfqMk9ajToCz6Hv9atCA4A readLineImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA readDataImpl;
tyProc__2VVzVL9bOnKhj1eZKkf9cEuA peekDataImpl;
tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ writeDataImpl;
tyProc__JQrsH08b4uPTH9cyFPlVOZg flushImpl;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(void, moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__78VQwN48e7jIIL2Q9bINIFw)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, close__y1KA3B0U09bKtU09am9a9avRYQ)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
TNimType NTI__MAw8rJZtJ279bVV3TWMtXSg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__1G0jiQbe7KwD5ADza5AZaw_;
extern TNimType NTI__HDqWPvEAxZK51ZcfaeQEdg_;
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T5_;
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	toCopy = (NI)(((*L).buf ? (*L).buf->Sup.len : 0) - (NI)((*L).sentinel + ((NI) 1)));
	{
		if (!(((NI) 0) < toCopy)) goto LA3_;
		moveMem__i80o3k0SgEI5gTRCzYdyWA_2system(((void*) ((&(*L).buf->data[((NI) 0)]))), ((void*) ((&(*L).buf->data[(NI)((*L).sentinel + ((NI) 1))]))), ((NI) (toCopy)));
	}
	LA3_: ;
	T5_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(toCopy, (NI)((NI)((NI)(toCopy + (*L).sentinel) + ((NI) 1)) - ((NI) 1)));
	charsRead = readDataStr__78VQwN48e7jIIL2Q9bINIFw((*L).input, (&(*L).buf), T5_);
	s = (NI)(toCopy + charsRead);
	{
		if (!(charsRead < (NI)((*L).sentinel + ((NI) 1)))) goto LA8_;
		(*L).buf->data[s] = 0;
		(*L).sentinel = s;
	}
	goto LA6_;
	LA8_: ;
	{
		s -= ((NI) 1);
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL T15_;
						T15_ = (NIM_BOOL)0;
						T15_ = (((NI) 0) <= s);
						if (!(T15_)) goto LA16_;
						T15_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf->data[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf->data[s])))&7U)))!=0));
						LA16_: ;
						if (!T15_) goto LA14;
						s -= ((NI) 1);
					} LA14: ;
				}
				{
					if (!(((NI) 0) <= s)) goto LA19_;
					(*L).sentinel = s;
					goto LA11;
				}
				goto LA17_;
				LA19_: ;
				{
					tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T22_;
					oldBufLen = ((*L).buf ? (*L).buf->Sup.len : 0);
					unsureAsgnRef((void**) (&(*L).buf), setLengthStr((*L).buf, ((NI) ((NI)(((*L).buf ? (*L).buf->Sup.len : 0) * ((NI) 2))))));
					T22_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(oldBufLen, (NI)(((*L).buf ? (*L).buf->Sup.len : 0) - ((NI) 1)));
					charsRead = readDataStr__78VQwN48e7jIIL2Q9bINIFw((*L).input, (&(*L).buf), T22_);
					{
						if (!(charsRead < oldBufLen)) goto LA25_;
						(*L).buf->data[(NI)(oldBufLen + charsRead)] = 0;
						(*L).sentinel = (NI)(oldBufLen + charsRead);
						goto LA11;
					}
					LA25_: ;
					s = (NI)(((*L).buf ? (*L).buf->Sup.len : 0) - ((NI) 1));
				}
				LA17_: ;
			}
		} LA11: ;
	}
	LA6_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		T4_ = ((NU8)((*L).buf->data[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		T4_ = ((NU8)((*L).buf->data[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		T3_ = ((NU8)((*L).buf->data[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		(*L).bufpos += ((NI) 3);
		(*L).lineStart += ((NI) 3);
	}
	LA7_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars) {	unsureAsgnRef((void**) (&(*L).input), input);
	(*L).bufpos = ((NI) 0);
	(*L).offsetBase = ((NI) 0);
	nimCopyMem((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	unsureAsgnRef((void**) (&(*L).buf), mnewString(((NI) (bufLen))));
	(*L).sentinel = (NI)(bufLen - ((NI) 1));
	(*L).lineStart = ((NI) 0);
	(*L).lineNumber = ((NI) 1);
	fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
	skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2(L);
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {	NI result;
	result = (NI)0;
	{
		if (!(pos < (*L).sentinel)) goto LA3_;
		result = (NI)(pos + ((NI) 1));
	}
	goto LA1_;
	LA3_: ;
	{
		fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
		(*L).offsetBase += pos;
		(*L).bufpos = ((NI) 0);
		result = ((NI) 0);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {	NI result;
	result = (NI)0;
	(*L).lineNumber += ((NI) 1);
	result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	{
		if (!((NU8)((*L).buf->data[result]) == (NU8)(10))) goto LA3_;
		result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, result);
	}
	LA3_: ;
	(*L).lineStart = result;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {	NI result;
	result = (NI)0;
	(*L).lineNumber += ((NI) 1);
	result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	(*L).lineStart = result;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {	NI result;
	result = (NI)0;
	result = ((NI)(pos - (*L).lineStart) > 0? ((NI)(pos - (*L).lineStart)) : -((NI)(pos - (*L).lineStart)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__m9bpQUVeRkyuyv4zAGVgY9bw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {	close__y1KA3B0U09bKtU09am9a9avRYQ((*L).input);
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_lexbaseDatInit000)(void) {
static TNimNode* TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[8];
static TNimNode TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9];
NTI__MAw8rJZtJ279bVV3TWMtXSg_.size = sizeof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTI__MAw8rJZtJ279bVV3TWMtXSg_.kind = 17;
NTI__MAw8rJZtJ279bVV3TWMtXSg_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[0] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, bufpos);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].name = "bufpos";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[1] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, buf);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].name = "buf";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[2] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, input);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ = (&NTI__1G0jiQbe7KwD5ADza5AZaw_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].name = "input";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[3] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, lineNumber);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].name = "lineNumber";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[4] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, sentinel);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].name = "sentinel";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[5] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, lineStart);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].name = "lineStart";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[6] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, offsetBase);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].name = "offsetBase";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[7] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, refillChars);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ = (&NTI__HDqWPvEAxZK51ZcfaeQEdg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].name = "refillChars";
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].len = 8; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind = 2; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons = &TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[0];
NTI__MAw8rJZtJ279bVV3TWMtXSg_.node = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0];
}

