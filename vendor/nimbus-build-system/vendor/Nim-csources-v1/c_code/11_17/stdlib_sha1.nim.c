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
typedef struct tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef NU8 tyArray__YtcvxHNKV4YiecPE9ap1mcA[20];
typedef NU32 tyArray__xsE8WL1yT5DKfrMdYB89bYA[5];
typedef NU8 tyArray__w5VB8h5K8DB3oWrO5U2wqg[64];
struct tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow {
NI count;
tyArray__xsE8WL1yT5DKfrMdYB89bYA state;
tyArray__w5VB8h5K8DB3oWrO5U2wqg buf;
};
typedef NU32 tyArray__BhDmUZcWSpYFIy5J8Xi8mQ[80];
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NIM_CHAR tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ[8];
N_LIB_PRIVATE N_NIMCALL(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow, newSha1State__BLt9c9b0RROKqDtPYlXNikjw)(void);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, update__ax6Yc9cnMbhcQo7mOcM7vow)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, transform__nXAytAbJFaZ9aeQhbOWq40w)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx);
static N_INLINE(void, bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians)(void* outp, void* inp);
static N_INLINE(void, swapEndian32__Y7K2twSvEFXjEQtANWmrhg_2endians)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(void, finalize__oGD3DkWwC5i1VP9b2FaR3OA)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result);
static N_INLINE(void, bigEndian64__Y7K2twSvEFXjEQtANWmrhg_3endians)(void* outp, void* inp);
static N_INLINE(void, swapEndian64__Y7K2twSvEFXjEQtANWmrhg_4endians)(void* outp, void* inp);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, secureHash__qi7bJ7Ntyvry4psMKnopTA)(NIM_CHAR* str, NI strLen_0, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile__4PGnM9bWmsH0Nu7dnr3XzgA)(NimStringDesc* filename);
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseHexInt)(NimStringDesc* s);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___PwqVAsfJ49cJp2hIm2xHpPQ)(tyArray__YtcvxHNKV4YiecPE9ap1mcA x, tyArray__YtcvxHNKV4YiecPE9ap1mcA y);
STRING_LITERAL(TM__SpWH4VocI3fFoiOGE4MzWw_2, "\200", 1);
STRING_LITERAL(TM__SpWH4VocI3fFoiOGE4MzWw_3, "\000", 1);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow, newSha1State__BLt9c9b0RROKqDtPYlXNikjw)(void) {	tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow));
	result.count = ((NI) 0);
	result.state[(((NI) 0))- 0] = ((NU32) 1732584193);
	result.state[(((NI) 1))- 0] = ((NU32) IL64(4023233417));
	result.state[(((NI) 2))- 0] = ((NU32) IL64(2562383102));
	result.state[(((NI) 3))- 0] = ((NU32) 271733878);
	result.state[(((NI) 4))- 0] = ((NU32) IL64(3285377520));
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
static N_INLINE(void, swapEndian32__Y7K2twSvEFXjEQtANWmrhg_2endians)(void* outp, void* inp) {	NU32 tmpX60gensym422247_;
	tmpX60gensym422247_ = (NU32)0;
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&tmpX60gensym422247_))), inp, ((NI) 4));
	tmpX60gensym422247_ = __builtin_bswap32(tmpX60gensym422247_);
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(outp, ((void*) ((&tmpX60gensym422247_))), ((NI) 4));
}
static N_INLINE(void, bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians)(void* outp, void* inp) {	swapEndian32__Y7K2twSvEFXjEQtANWmrhg_2endians(outp, inp);
}
N_LIB_PRIVATE N_NIMCALL(void, transform__nXAytAbJFaZ9aeQhbOWq40w)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx) {	tyArray__BhDmUZcWSpYFIy5J8Xi8mQ w;
	NU32 a;
	NU32 b;
	NU32 c;
	NU32 d;
	NU32 e;
	NI t;
	nimZeroMem((void*)w, sizeof(tyArray__BhDmUZcWSpYFIy5J8Xi8mQ));
	a = (NU32)0;
	b = (NU32)0;
	c = (NU32)0;
	d = (NU32)0;
	e = (NU32)0;
	t = ((NI) 0);
	a = (*ctx).state[(((NI) 0))- 0];
	b = (*ctx).state[(((NI) 1))- 0];
	c = (*ctx).state[(((NI) 2))- 0];
	d = (*ctx).state[(((NI) 3))- 0];
	e = (*ctx).state[(((NI) 4))- 0];
	{
		while (1) {
			if (!(t < ((NI) 15))) goto LA2;
			bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&w[((NI)(t + ((NI) 0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 0)) * ((NI) 4)))- 0]))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)(d ^ (NU32)(b & (NU32)(c ^ d)))))) + (NU32)(((NU32) 1518500249)));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&w[((NI)(t + ((NI) 1)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 1)) * ((NI) 4)))- 0]))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)(c ^ (NU32)(a & (NU32)(b ^ c)))))) + (NU32)(((NU32) 1518500249)));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&w[((NI)(t + ((NI) 2)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 2)) * ((NI) 4)))- 0]))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)(b ^ (NU32)(e & (NU32)(a ^ b)))))) + (NU32)(((NU32) 1518500249)));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&w[((NI)(t + ((NI) 3)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 3)) * ((NI) 4)))- 0]))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)(a ^ (NU32)(d & (NU32)(e ^ a)))))) + (NU32)(((NU32) 1518500249)));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&w[((NI)(t + ((NI) 4)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 4)) * ((NI) 4)))- 0]))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)(e ^ (NU32)(c & (NU32)(d ^ e)))))) + (NU32)(((NU32) 1518500249)));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA2: ;
	}
	bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&w[((NI)(t + ((NI) 0)))- 0]))), ((void*) ((&(*ctx).buf[((NI)((NI)(t + ((NI) 0)) * ((NI) 4)))- 0]))));
	e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)(d ^ (NU32)(b & (NU32)(c ^ d)))))) + (NU32)(((NU32) 1518500249)));
	b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)(c ^ (NU32)(a & (NU32)(b ^ c)))))) + (NU32)(((NU32) 1518500249)));
	a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)(b ^ (NU32)(e & (NU32)(a ^ b)))))) + (NU32)(((NU32) 1518500249)));
	e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)(a ^ (NU32)(d & (NU32)(e ^ a)))))) + (NU32)(((NU32) 1518500249)));
	d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
	w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
	a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)(e ^ (NU32)(c & (NU32)(d ^ e)))))) + (NU32)(((NU32) 1518500249)));
	c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
	t = ((NI) 20);
	{
		while (1) {
			if (!(t < ((NI) 40))) goto LA4;
			w[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(((NU32) 1859775393)));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(a ^ b) ^ c)))) + (NU32)(((NU32) 1859775393)));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(e ^ a) ^ b)))) + (NU32)(((NU32) 1859775393)));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(d ^ e) ^ a)))) + (NU32)(((NU32) 1859775393)));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(c ^ d) ^ e)))) + (NU32)(((NU32) 1859775393)));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA4: ;
	}
	{
		while (1) {
			if (!(t < ((NI) 60))) goto LA6;
			w[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(b & c) | (NU32)(d & (NU32)(b | c)))))) + (NU32)(((NU32) IL64(2400959708))));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(a & b) | (NU32)(c & (NU32)(a | b)))))) + (NU32)(((NU32) IL64(2400959708))));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(e & a) | (NU32)(b & (NU32)(e | a)))))) + (NU32)(((NU32) IL64(2400959708))));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(d & e) | (NU32)(a & (NU32)(d | e)))))) + (NU32)(((NU32) IL64(2400959708))));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(c & d) | (NU32)(e & (NU32)(c | d)))))) + (NU32)(((NU32) IL64(2400959708))));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA6: ;
	}
	{
		while (1) {
			if (!(t < ((NI) 80))) goto LA8;
			w[((NI)(t + ((NI) 0)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 0)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 0)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			e += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 27))) | (NU32)((NU64)(a) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 0)))- 0]))) + (NU32)((NU32)((NU32)(b ^ c) ^ d)))) + (NU32)(((NU32) IL64(3395469782))));
			b = (NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 2))) | (NU32)((NU64)(b) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 1)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 1)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 1)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			d += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 27))) | (NU32)((NU64)(e) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 1)))- 0]))) + (NU32)((NU32)((NU32)(a ^ b) ^ c)))) + (NU32)(((NU32) IL64(3395469782))));
			a = (NU32)((NU32)((NU32)(a) >> (NU64)(((NI) 2))) | (NU32)((NU64)(a) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 2)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 2)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 2)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			c += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 27))) | (NU32)((NU64)(d) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 2)))- 0]))) + (NU32)((NU32)((NU32)(e ^ a) ^ b)))) + (NU32)(((NU32) IL64(3395469782))));
			e = (NU32)((NU32)((NU32)(e) >> (NU64)(((NI) 2))) | (NU32)((NU64)(e) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 3)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 3)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 3)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			b += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 27))) | (NU32)((NU64)(c) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 3)))- 0]))) + (NU32)((NU32)((NU32)(d ^ e) ^ a)))) + (NU32)(((NU32) IL64(3395469782))));
			d = (NU32)((NU32)((NU32)(d) >> (NU64)(((NI) 2))) | (NU32)((NU64)(d) << (NU64)(((NI) 30))));
			w[((NI)(t + ((NI) 4)))- 0] = (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) >> (NU64)(((NI) 31))) | (NU32)((NU64)((NU32)((NU32)((NU32)(w[((NI)((NI)(t + ((NI) 4)) - ((NI) 3)))- 0] ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 8)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 14)))- 0]) ^ w[((NI)((NI)(t + ((NI) 4)) - ((NI) 16)))- 0])) << (NU64)(((NI) 1))));
			a += (NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)((NU32)(b) >> (NU64)(((NI) 27))) | (NU32)((NU64)(b) << (NU64)(((NI) 5))))) + (NU32)(w[((NI)(t + ((NI) 4)))- 0]))) + (NU32)((NU32)((NU32)(c ^ d) ^ e)))) + (NU32)(((NU32) IL64(3395469782))));
			c = (NU32)((NU32)((NU32)(c) >> (NU64)(((NI) 2))) | (NU32)((NU64)(c) << (NU64)(((NI) 30))));
			t += ((NI) 5);
		} LA8: ;
	}
	(*ctx).state[(((NI) 0))- 0] += a;
	(*ctx).state[(((NI) 1))- 0] += b;
	(*ctx).state[(((NI) 2))- 0] += c;
	(*ctx).state[(((NI) 3))- 0] += d;
	(*ctx).state[(((NI) 4))- 0] += e;
}
N_LIB_PRIVATE N_NIMCALL(void, update__ax6Yc9cnMbhcQo7mOcM7vow)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, NIM_CHAR* data, NI dataLen_0) {	NI i;
	NI j;
	NI len;
	i = (NI)((*ctx).count % ((NI) 64));
	j = ((NI) 0);
	len = dataLen_0;
	{
		if (!((NI)(((NI) 64) - i) < len)) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*ctx).buf[(i)- 0]))), ((void*) ((&data[j]))), ((NI) ((NI)(((NI) 64) - i))));
		len -= (NI)(((NI) 64) - i);
		j += (NI)(((NI) 64) - i);
		transform__nXAytAbJFaZ9aeQhbOWq40w(ctx);
		i = ((NI) 0);
	}
	LA3_: ;
	{
		while (1) {
			if (!(((NI) 64) <= len)) goto LA6;
			copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*ctx).buf[(((NI) 0))- 0]))), ((void*) ((&data[j]))), ((NI) 64));
			len -= ((NI) 64);
			j += ((NI) 64);
			transform__nXAytAbJFaZ9aeQhbOWq40w(ctx);
		} LA6: ;
	}
	{
		while (1) {
			if (!(((NI) 0) < len)) goto LA8;
			len -= ((NI) 1);
			(*ctx).buf[(i)- 0] = ((NU8) (((NU8)(data[j]))));
			i += ((NI) 1);
			j += ((NI) 1);
			{
				if (!(i == ((NI) 64))) goto LA11_;
				transform__nXAytAbJFaZ9aeQhbOWq40w(ctx);
				i = ((NI) 0);
			}
			LA11_: ;
		} LA8: ;
	}
	(*ctx).count += dataLen_0;
}
static N_INLINE(void, swapEndian64__Y7K2twSvEFXjEQtANWmrhg_4endians)(void* outp, void* inp) {	NU64 tmpX60gensym422216_;
	tmpX60gensym422216_ = (NU64)0;
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&tmpX60gensym422216_))), inp, ((NI) 8));
	tmpX60gensym422216_ = __builtin_bswap64(tmpX60gensym422216_);
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(outp, ((void*) ((&tmpX60gensym422216_))), ((NI) 8));
}
static N_INLINE(void, bigEndian64__Y7K2twSvEFXjEQtANWmrhg_3endians)(void* outp, void* inp) {	swapEndian64__Y7K2twSvEFXjEQtANWmrhg_4endians(outp, inp);
}
N_LIB_PRIVATE N_NIMCALL(void, finalize__oGD3DkWwC5i1VP9b2FaR3OA)(tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow* ctx, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {	NU64 cnt;
	tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ tmp;
	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	cnt = ((NU64) ((NI)((*ctx).count * ((NI) 8))));
	update__ax6Yc9cnMbhcQo7mOcM7vow(ctx, ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_2)->data, (((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_2) ? ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_2)->Sup.len : 0));
	{
		while (1) {
			if (!!(((NI)((*ctx).count % ((NI) 64)) == ((NI) 56)))) goto LA2;
			update__ax6Yc9cnMbhcQo7mOcM7vow(ctx, ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_3)->data, (((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_3) ? ((NimStringDesc*) &TM__SpWH4VocI3fFoiOGE4MzWw_3)->Sup.len : 0));
		} LA2: ;
	}
	nimZeroMem((void*)tmp, sizeof(tyArray__1NlJ8ipZDU6GZ9bDFAyQjfQ));
	bigEndian64__Y7K2twSvEFXjEQtANWmrhg_3endians(((void*) ((&tmp[(((NI) 0))- 0]))), ((void*) ((&cnt))));
	update__ax6Yc9cnMbhcQo7mOcM7vow(ctx, tmp, 8);
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				if (!(i_2 < ((NI) 5))) goto LA5;
				i = i_2;
				bigEndian32__Y7K2twSvEFXjEQtANWmrhgendians(((void*) ((&(*ctx).state[(i)- 0]))), ((void*) ((&(*ctx).state[(i)- 0]))));
				i_2 += ((NI) 1);
			} LA5: ;
		}
	}
	copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&Result[(((NI) 0))- 0]))), ((void*) ((&(*ctx).state[(((NI) 0))- 0]))), ((NI) 20));
}
N_LIB_PRIVATE N_NIMCALL(void, secureHash__qi7bJ7Ntyvry4psMKnopTA)(NIM_CHAR* str, NI strLen_0, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {	tyObject_Sha1State__cBZm1tX9aK4Wngq1jVLZUow state;
	state = newSha1State__BLt9c9b0RROKqDtPYlXNikjw();
	update__ax6Yc9cnMbhcQo7mOcM7vow((&state), str, strLen_0);
	finalize__oGD3DkWwC5i1VP9b2FaR3OA((&state), Result);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___2r9adABFqPoalSCAWfm1KJQ)(tyArray__YtcvxHNKV4YiecPE9ap1mcA self) {	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	{
		NU8 v;
		tyArray__YtcvxHNKV4YiecPE9ap1mcA colontmp_;
		NI i;
		v = (NU8)0;
		nimZeroMem((void*)colontmp_, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		nimCopyMem((void*)colontmp_, (NIM_CONST void*)self, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
		i = ((NI) 0);
		{
			if (!(((NI) (i)) <= ((NI) 19))) goto LA4_;
			{
				while (1) {
					NimStringDesc* T8_;
					v = colontmp_[(i)- 0];
					T8_ = (NimStringDesc*)0;
					T8_ = nsuToHex(((NI64) (((NI) (v)))), ((NI) 2));
					result = resizeString(result, (T8_ ? T8_->Sup.len : 0) + 0);
appendString(result, T8_);
					{
						if (!(((NI) 19) <= ((NI) (i)))) goto LA11_;
						goto LA6;
					}
					LA11_: ;
					i += ((NI) 1);
				}
			} LA6: ;
		}
		LA4_: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, secureHashFile__EWwG0WuhtSH9c26DD9b9a6DLw)(NimStringDesc* filename, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {	NimStringDesc* T1_;
	T1_ = (NimStringDesc*)0;
	T1_ = readFile__4PGnM9bWmsH0Nu7dnr3XzgA(filename);
	secureHash__qi7bJ7Ntyvry4psMKnopTA(T1_->data, (T1_ ? T1_->Sup.len : 0), Result);
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, parseSecureHash__S6VQ00WVRv4bBNU469arlSA)(NimStringDesc* hash, tyArray__YtcvxHNKV4YiecPE9ap1mcA Result) {	nimZeroMem((void*)Result, sizeof(tyArray__YtcvxHNKV4YiecPE9ap1mcA));
	{
		NI i;
		NI i_2;
		i = (NI)0;
		i_2 = ((NI) 0);
		{
			while (1) {
				NimStringDesc* T4_;
				NI T5_;
				if (!(i_2 < ((NI) 20))) goto LA3;
				i = i_2;
				T4_ = (NimStringDesc*)0;
				T4_ = rawNewString(2);
appendChar(T4_, hash->data[(NI)(i * ((NI) 2))]);
appendChar(T4_, hash->data[(NI)((NI)(i * ((NI) 2)) + ((NI) 1))]);
				T5_ = (NI)0;
				T5_ = nsuParseHexInt(T4_);
				Result[(i)- 0] = ((NU8) (T5_));
				i_2 += ((NI) 1);
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, eqeq___gecBgtI3c7HdE9cwshfzHjQ)(tyArray__YtcvxHNKV4YiecPE9ap1mcA a, tyArray__YtcvxHNKV4YiecPE9ap1mcA b) {	NIM_BOOL result;
	result = (NIM_BOOL)0;
	result = eqeq___PwqVAsfJ49cJp2hIm2xHpPQ(a, b);
	return result;
}
