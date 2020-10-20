/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

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

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimTypeV2 TNimTypeV2;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content tySequence__uB9b75OUPRENsBAu4AnoePA_Content;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
struct TNimTypeV2 {
void* destructor;
NI size;
NI align;
NCSTRING name;
void* traceImpl;
void* disposeImpl;
void* typeInfoV1;
};
struct RootObj {
TNimTypeV2* m_type;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  NI len; tySequence__uB9b75OUPRENsBAu4AnoePA_Content* p;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringV2 message;
tySequence__uB9b75OUPRENsBAu4AnoePA trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NI tyArray__9cc9aPiDa8VaWjVcFLabEDZQ[256];
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  NI len; tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content* p;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};


#ifndef tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
#define tySequence__uB9b75OUPRENsBAu4AnoePA_Content_PP
struct tySequence__uB9b75OUPRENsBAu4AnoePA_Content { NI cap; tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      

#ifndef tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
#define tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content_PP
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content { NI cap; NimStringV2 data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_NIMCALL(NimStringV2, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, nsuAddf)(NimStringV2* s, NimStringV2 formatstr, NimStringV2* a, NI aLen_0);
N_LIB_PRIVATE N_NOINLINE(void, invalidFormatString__8vOMwvNB8blLQSoRXfInAg)(void);
N_LIB_PRIVATE N_NIMCALL(void*, nimNewObj)(NI size);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(void, prepareAdd)(NimStringV2* s, NI addlen);
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, findNormalized__7LxW6wQxHkQGOeaPw6nEjQ)(NimStringV2 x, NimStringV2* inArray, NI inArrayLen_0);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringV2 a, NimStringV2 b);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringV2 s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, eqsink___aBBXmHFBEivKqERloP6zmA)(NimStringV2* dest, NimStringV2 src);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindCharSet)(NimStringV2 s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStr)(NimStringV2 s, NimStringV2 sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringV2 s, NIM_CHAR sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(void, nsuInitSkipTable)(NI* a, NimStringV2 sub);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStrA)(tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a, NimStringV2 s, NimStringV2 sub, NI start, NI last);
N_NIMCALL(NimStringV2, mnewString)(NI len);
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(void, nimPrepareStrMutationImpl__C0YoABEefTaYbWLv9aVOzZA)(NimStringV2* s);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NimStringV2 s, NI* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToUpperAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(void*, newSeqPayload)(NI cap, NI elemSize, NI elemAlign);
N_LIB_PRIVATE N_NIMCALL(void, add__dK9ajFgX5RSWQx0eHjjpjSQ)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* x, NimStringV2 value);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseFloat)(NimStringV2 s, NF* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHexImpl__izPdbsQUP8KddbeBZ2srrw)(NU64 x, NI len, NIM_BOOL handleNegative);
N_LIB_PRIVATE N_NIMCALL(void, X5BX5Deq___nzw30OOxYaJmEInmJdKSvg)(NimStringV2* s, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA x, NimStringV2 b);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(void, eqcopy___aBBXmHFBEivKqERloP6zmA_2)(NimStringV2* dest, NimStringV2 src);

/* section: NIM_merge_DATA */
extern TNimTypeV2 NTIv2__yoNlBGx0D2tRizIdhQuENw_;
static const struct {
  NI cap; NIM_CHAR data[21+1];
} TM__JGc9b9bh2D3nTdUR7TGyq8aA_2 = { 21 | NIM_STRLIT_FLAG, "invalid format string" };
static const NimStringV2 TM__JGc9b9bh2D3nTdUR7TGyq8aA_3 = {21, (NimStrPayload*)&TM__JGc9b9bh2D3nTdUR7TGyq8aA_2};
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__JGc9b9bh2D3nTdUR7TGyq8aA_4 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__JGc9b9bh2D3nTdUR7TGyq8aA_5 = {0, (NimStrPayload*)&TM__JGc9b9bh2D3nTdUR7TGyq8aA_4};
static const struct {
  NI cap; NIM_CHAR data[17+1];
} TM__JGc9b9bh2D3nTdUR7TGyq8aA_6 = { 17 | NIM_STRLIT_FLAG, "invalid integer: " };
static const NimStringV2 TM__JGc9b9bh2D3nTdUR7TGyq8aA_7 = {17, (NimStrPayload*)&TM__JGc9b9bh2D3nTdUR7TGyq8aA_6};
static const struct {
  NI cap; NIM_CHAR data[15+1];
} TM__JGc9b9bh2D3nTdUR7TGyq8aA_8 = { 15 | NIM_STRLIT_FLAG, "invalid float: " };
static const NimStringV2 TM__JGc9b9bh2D3nTdUR7TGyq8aA_9 = {15, (NimStrPayload*)&TM__JGc9b9bh2D3nTdUR7TGyq8aA_8};
static const struct {
  NI cap; NIM_CHAR data[16+1];
} TM__JGc9b9bh2D3nTdUR7TGyq8aA_10 = { 16 | NIM_STRLIT_FLAG, "0123456789ABCDEF" };
static const NimStringV2 TM__JGc9b9bh2D3nTdUR7TGyq8aA_11 = {16, (NimStrPayload*)&TM__JGc9b9bh2D3nTdUR7TGyq8aA_10};

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s.len == ((NI) 0))) goto LA3_;
		result = "";
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NCSTRING) ((*s.p).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringV2 s, NIM_CHAR sub, NI start, NI last) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	NI last_2;
	NI L;
{	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		if (!(last == ((NI) 0))) goto LA3_;
		colontmpD_ = (s.len-1);
		last_2 = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = last;
		last_2 = colontmpD__2;
	}
	LA1_: ;
	L = (NI)((NI)(last_2 - ((NI) (start))) + ((NI) 1));
	{
		void* found;
		if (!(((NI) 0) < L)) goto LA8_;
		found = memchr(((void*) ((&s.p->data[start]))), sub, ((size_t) (L)));
		{
			if (!!((found == 0))) goto LA12_;
			result = minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system(((NI) (ptrdiff_t) (found)), ((NI) (nimToCStringConv(s))));
			goto BeforeRet_;
		}
		LA12_: ;
	}
	LA8_: ;
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, invalidFormatString__8vOMwvNB8blLQSoRXfInAg)(void) {
	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T1_;
{	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) nimNewObj(sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTIv2__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	(*T1_).Sup.Sup.message = TM__JGc9b9bh2D3nTdUR7TGyq8aA_3;
	(*T1_).Sup.Sup.parent = NIM_NIL;
	raiseExceptionEx((Exception*)T1_, "ValueError", "invalidFormatString", "strutils.nim", 2759);
	goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size) {
	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringV2* dest, NimStringV2 src) {
	{
		void* T5_;
		void* T6_;
		if (!(((NI) 0) < src.len)) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*(*dest).p).data[(*dest).len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((&(*src.p).data[((NI) 0)])));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)(src.len + ((NI) 1)))));
		(*dest).len += src.len;
	}
	LA3_: ;
}
static N_INLINE(void, nimAddCharV1)(NimStringV2* s, NIM_CHAR c) {
	prepareAdd(s, ((NI) 1));
	(*(*s).p).data[(*s).len] = c;
	(*(*s).p).data[(NI)((*s).len + ((NI) 1))] = 0;
	(*s).len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		result = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) + ((NI) 32))))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = c;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringV2 a, NimStringV2 b) {
	NI result;
	NI i;
	NI j;
{	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	{
		while (1) {
			NIM_CHAR colontmpD_;
			NIM_CHAR colontmpD__2;
			NIM_CHAR colontmpD__3;
			NIM_CHAR colontmpD__4;
			NIM_CHAR aa;
			NIM_CHAR bb;
			colontmpD_ = (NIM_CHAR)0;
			colontmpD__2 = (NIM_CHAR)0;
			colontmpD__3 = (NIM_CHAR)0;
			colontmpD__4 = (NIM_CHAR)0;
			{
				while (1) {
					NIM_BOOL T5_;
					T5_ = (NIM_BOOL)0;
					T5_ = (i < a.len);
					if (!(T5_)) goto LA6_;
					T5_ = ((NU8)(a.p->data[i]) == (NU8)(95));
					LA6_: ;
					if (!T5_) goto LA4;
					i += ((NI) 1);
				} LA4: ;
			}
			{
				while (1) {
					NIM_BOOL T9_;
					T9_ = (NIM_BOOL)0;
					T9_ = (j < b.len);
					if (!(T9_)) goto LA10_;
					T9_ = ((NU8)(b.p->data[j]) == (NU8)(95));
					LA10_: ;
					if (!T9_) goto LA8;
					j += ((NI) 1);
				} LA8: ;
			}
			{
				if (!(i < a.len)) goto LA13_;
				colontmpD_ = nsuToLowerAsciiChar(a.p->data[i]);
				aa = colontmpD_;
			}
			goto LA11_;
			LA13_: ;
			{
				colontmpD__2 = 0;
				aa = colontmpD__2;
			}
			LA11_: ;
			{
				if (!(j < b.len)) goto LA18_;
				colontmpD__3 = nsuToLowerAsciiChar(b.p->data[j]);
				bb = colontmpD__3;
			}
			goto LA16_;
			LA18_: ;
			{
				colontmpD__4 = 0;
				bb = colontmpD__4;
			}
			LA16_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				if (!!((result == ((NI) 0)))) goto LA23_;
				goto BeforeRet_;
			}
			LA23_: ;
			{
				if (!(a.len <= i)) goto LA27_;
				{
					if (!(b.len <= j)) goto LA31_;
					result = ((NI) 0);
					goto BeforeRet_;
				}
				LA31_: ;
				result = ((NI) -1);
				goto BeforeRet_;
			}
			goto LA25_;
			LA27_: ;
			{
				if (!(b.len <= j)) goto LA34_;
				result = ((NI) 1);
				goto BeforeRet_;
			}
			goto LA25_;
			LA34_: ;
			LA25_: ;
			i += ((NI) 1);
			j += ((NI) 1);
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, findNormalized__7LxW6wQxHkQGOeaPw6nEjQ)(NimStringV2 x, NimStringV2* inArray, NI inArrayLen_0) {
	NI result;
	NI i;
{	result = (NI)0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (inArrayLen_0-1))) goto LA2;
			{
				NI T5_;
				T5_ = (NI)0;
				T5_ = nsuCmpIgnoreStyle(x, inArray[i]);
				if (!(T5_ == ((NI) 0))) goto LA6_;
				result = i;
				goto BeforeRet_;
			}
			LA6_: ;
			i += ((NI) 2);
		} LA2: ;
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nsuAddf)(NimStringV2* s, NimStringV2 formatstr, NimStringV2* a, NI aLen_0) {
	NI i;
	NI num;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	i = ((NI) 0);
	num = ((NI) 0);
	{
		while (1) {
			if (!(i < formatstr.len)) goto LA2;
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = ((NU8)(formatstr.p->data[i]) == (NU8)(36));
				if (!(T5_)) goto LA6_;
				T5_ = ((NI)(i + ((NI) 1)) < formatstr.len);
				LA6_: ;
				if (!T5_) goto LA7_;
				switch (((NU8)(formatstr.p->data[(NI)(i + ((NI) 1))]))) {
				case 35:
				{
					{
						if (!((aLen_0-1) < num)) goto LA12_;
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA12_: ;
					prepareAdd((&(*s)), a[num].len + 0);
appendString((&(*s)), a[num]);
					i += ((NI) 2);
					num += ((NI) 1);
				}
				break;
				case 36:
				{
					nimAddCharV1((&(*s)), 36);
					i += ((NI) 2);
				}
				break;
				case 49 ... 57:
				case 45:
				{
					NI colontmpD_;
					NI colontmpD__2;
					NI j;
					NIM_BOOL negative;
					NI idx;
					colontmpD_ = (NI)0;
					colontmpD__2 = (NI)0;
					j = ((NI) 0);
					i += ((NI) 1);
					negative = ((NU8)(formatstr.p->data[i]) == (NU8)(45));
					{
						if (!negative) goto LA18_;
						i += ((NI) 1);
					}
					LA18_: ;
					{
						while (1) {
							NIM_BOOL T22_;
							T22_ = (NIM_BOOL)0;
							T22_ = (i < formatstr.len);
							if (!(T22_)) goto LA23_;
							T22_ = (((NU8)(formatstr.p->data[i])) >= ((NU8)(48)) && ((NU8)(formatstr.p->data[i])) <= ((NU8)(57)));
							LA23_: ;
							if (!T22_) goto LA21;
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NU8)(formatstr.p->data[i]))) - ((NI) 48));
							i += ((NI) 1);
						} LA21: ;
					}
					{
						if (!!(negative)) goto LA26_;
						colontmpD_ = (NI)(j - ((NI) 1));
						idx = colontmpD_;
					}
					goto LA24_;
					LA26_: ;
					{
						colontmpD__2 = (NI)(aLen_0 - j);
						idx = colontmpD__2;
					}
					LA24_: ;
					{
						NIM_BOOL T31_;
						T31_ = (NIM_BOOL)0;
						T31_ = (idx < ((NI) 0));
						if (T31_) goto LA32_;
						T31_ = ((aLen_0-1) < idx);
						LA32_: ;
						if (!T31_) goto LA33_;
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA33_: ;
					prepareAdd((&(*s)), a[idx].len + 0);
appendString((&(*s)), a[idx]);
				}
				break;
				case 123:
				{
					NI j_2;
					NI k;
					NIM_BOOL negative_2;
					NI isNumber;
					j_2 = (NI)(i + ((NI) 2));
					k = ((NI) 0);
					negative_2 = ((NU8)(formatstr.p->data[j_2]) == (NU8)(45));
					{
						if (!negative_2) goto LA38_;
						j_2 += ((NI) 1);
					}
					LA38_: ;
					isNumber = ((NI) 0);
					{
						while (1) {
							NIM_BOOL T42_;
							T42_ = (NIM_BOOL)0;
							T42_ = (j_2 < formatstr.len);
							if (!(T42_)) goto LA43_;
							T42_ = !((((NU8)(formatstr.p->data[j_2])) == ((NU8)(0)) || ((NU8)(formatstr.p->data[j_2])) == ((NU8)(125))));
							LA43_: ;
							if (!T42_) goto LA41;
							{
								if (!(((NU8)(formatstr.p->data[j_2])) >= ((NU8)(48)) && ((NU8)(formatstr.p->data[j_2])) <= ((NU8)(57)))) goto LA46_;
								k = (NI)((NI)((NI)(k * ((NI) 10)) + ((NU8)(formatstr.p->data[j_2]))) - ((NI) 48));
								{
									if (!(isNumber == ((NI) 0))) goto LA50_;
									isNumber = ((NI) 1);
								}
								LA50_: ;
							}
							goto LA44_;
							LA46_: ;
							{
								isNumber = ((NI) -1);
							}
							LA44_: ;
							j_2 += ((NI) 1);
						} LA41: ;
					}
					{
						NI colontmpD__3;
						NI colontmpD__4;
						NI idx_2;
						if (!(isNumber == ((NI) 1))) goto LA55_;
						colontmpD__3 = (NI)0;
						colontmpD__4 = (NI)0;
						{
							if (!!(negative_2)) goto LA59_;
							colontmpD__3 = (NI)(k - ((NI) 1));
							idx_2 = colontmpD__3;
						}
						goto LA57_;
						LA59_: ;
						{
							colontmpD__4 = (NI)(aLen_0 - k);
							idx_2 = colontmpD__4;
						}
						LA57_: ;
						{
							NIM_BOOL T64_;
							T64_ = (NIM_BOOL)0;
							T64_ = (idx_2 < ((NI) 0));
							if (T64_) goto LA65_;
							T64_ = ((aLen_0-1) < idx_2);
							LA65_: ;
							if (!T64_) goto LA66_;
							invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						}
						LA66_: ;
						prepareAdd((&(*s)), a[idx_2].len + 0);
appendString((&(*s)), a[idx_2]);
					}
					goto LA53_;
					LA55_: ;
					{
						NimStringV2 colontmpD__5;
						NI x;
						colontmpD__5.len = 0; colontmpD__5.p = NIM_NIL;
						colontmpD__5 = substr__2yh9cer0ymNRHlOOg8P7IuA(formatstr, (NI)(i + ((NI) 2)), (NI)(j_2 - ((NI) 1)));
						x = findNormalized__7LxW6wQxHkQGOeaPw6nEjQ(colontmpD__5, a, aLen_0);
						{
							NIM_BOOL T72_;
							T72_ = (NIM_BOOL)0;
							T72_ = (((NI) 0) <= x);
							if (!(T72_)) goto LA73_;
							T72_ = (x < (aLen_0-1));
							LA73_: ;
							if (!T72_) goto LA74_;
							prepareAdd((&(*s)), a[(NI)(x + ((NI) 1))].len + 0);
appendString((&(*s)), a[(NI)(x + ((NI) 1))]);
						}
						goto LA70_;
						LA74_: ;
						{
							invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
							if (NIM_UNLIKELY(*nimErr_)) goto LA69_;
						}
						LA70_: ;
						{
							LA69_:;
						}
						{
							eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD__5));
						}
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA53_: ;
					i = (NI)(j_2 + ((NI) 1));
				}
				break;
				case 97 ... 122:
				case 65 ... 90:
				case 128 ... 255:
				case 95:
				{
					NimStringV2 colontmpD__6;
					NI j_3;
					NI x_2;
					colontmpD__6.len = 0; colontmpD__6.p = NIM_NIL;
					j_3 = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL T83_;
							T83_ = (NIM_BOOL)0;
							T83_ = (j_3 < formatstr.len);
							if (!(T83_)) goto LA84_;
							T83_ = (((NU8)(formatstr.p->data[j_3])) >= ((NU8)(97)) && ((NU8)(formatstr.p->data[j_3])) <= ((NU8)(122)) || ((NU8)(formatstr.p->data[j_3])) >= ((NU8)(65)) && ((NU8)(formatstr.p->data[j_3])) <= ((NU8)(90)) || ((NU8)(formatstr.p->data[j_3])) >= ((NU8)(48)) && ((NU8)(formatstr.p->data[j_3])) <= ((NU8)(57)) || ((NU8)(formatstr.p->data[j_3])) >= ((NU8)(128)) && ((NU8)(formatstr.p->data[j_3])) <= ((NU8)(255)) || ((NU8)(formatstr.p->data[j_3])) == ((NU8)(95)));
							LA84_: ;
							if (!T83_) goto LA82;
							j_3 += ((NI) 1);
						} LA82: ;
					}
					colontmpD__6 = substr__2yh9cer0ymNRHlOOg8P7IuA(formatstr, (NI)(i + ((NI) 1)), (NI)(j_3 - ((NI) 1)));
					x_2 = findNormalized__7LxW6wQxHkQGOeaPw6nEjQ(colontmpD__6, a, aLen_0);
					{
						NIM_BOOL T87_;
						T87_ = (NIM_BOOL)0;
						T87_ = (((NI) 0) <= x_2);
						if (!(T87_)) goto LA88_;
						T87_ = (x_2 < (aLen_0-1));
						LA88_: ;
						if (!T87_) goto LA89_;
						prepareAdd((&(*s)), a[(NI)(x_2 + ((NI) 1))].len + 0);
appendString((&(*s)), a[(NI)(x_2 + ((NI) 1))]);
					}
					goto LA85_;
					LA89_: ;
					{
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						if (NIM_UNLIKELY(*nimErr_)) goto LA80_;
					}
					LA85_: ;
					i = j_3;
					{
						LA80_:;
					}
					{
						eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD__6));
					}
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				break;
				default:
				{
					invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				break;
				}
			}
			goto LA3_;
			LA7_: ;
			{
				nimAddCharV1((&(*s)), formatstr.p->data[i]);
				i += ((NI) 1);
			}
			LA3_: ;
		} LA2: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuFormatOpenArray)(NimStringV2 formatstr, NimStringV2* a, NI aLen_0) {
	NimStringV2 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result = rawNewString(((NI) ((NI)(formatstr.len + (NI)((NU64)(aLen_0) << (NU64)(((NI) 4)))))));
	nsuAddf((&result), formatstr, a, aLen_0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringV2 s, NimStringV2 prefix) {
	NIM_BOOL result;
	NI i;
{	result = (NIM_BOOL)0;
	i = ((NI) 0);
	{
		while (1) {
			{
				if (!(prefix.len <= i)) goto LA5_;
				result = NIM_TRUE;
				goto BeforeRet_;
			}
			LA5_: ;
			{
				NIM_BOOL T9_;
				T9_ = (NIM_BOOL)0;
				T9_ = (s.len <= i);
				if (T9_) goto LA10_;
				T9_ = !(((NU8)(s.p->data[i]) == (NU8)(prefix.p->data[i])));
				LA10_: ;
				if (!T9_) goto LA11_;
				result = NIM_FALSE;
				goto BeforeRet_;
			}
			LA11_: ;
			i += ((NI) 1);
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuJoinSep)(NimStringV2* a, NI aLen_0, NimStringV2 sep) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	{
		NI L;
		if (!(((NI) 0) < aLen_0)) goto LA3_;
		L = (NI)(sep.len * (NI)(aLen_0 - ((NI) 1)));
		{
			NI i;
			NI colontmp_;
			NI res;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (aLen_0-1);
			res = ((NI) 0);
			{
				while (1) {
					if (!(res <= colontmp_)) goto LA7;
					i = res;
					L += a[i].len;
					res += ((NI) 1);
				} LA7: ;
			}
		}
		result = rawNewString(((NI) (L)));
		prepareAdd((&result), a[((NI) 0)].len + 0);
appendString((&result), a[((NI) 0)]);
		{
			NI i_2;
			NI colontmp__2;
			NI res_2;
			i_2 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (aLen_0-1);
			res_2 = ((NI) 1);
			{
				while (1) {
					if (!(res_2 <= colontmp__2)) goto LA10;
					i_2 = res_2;
					prepareAdd((&result), sep.len + 0);
appendString((&result), sep);
					prepareAdd((&result), a[i_2].len + 0);
appendString((&result), a[i_2]);
					res_2 += ((NI) 1);
				} LA10: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		eqsink___aBBXmHFBEivKqERloP6zmA((&result), TM__JGc9b9bh2D3nTdUR7TGyq8aA_5);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindCharSet)(NimStringV2 s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars, NI start, NI last) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	NI last_2;
{	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		if (!(last == ((NI) 0))) goto LA3_;
		colontmpD_ = (s.len-1);
		last_2 = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = last;
		last_2 = colontmpD__2;
	}
	LA1_: ;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = ((NI) (start));
		res = colontmp_;
		{
			while (1) {
				if (!(res <= last_2)) goto LA8;
				i = res;
				{
					if (!((chars[(NU)(((NU8)(s.p->data[i])))>>3] &(1U<<((NU)(((NU8)(s.p->data[i])))&7U)))!=0)) goto LA11_;
					result = i;
					goto BeforeRet_;
				}
				LA11_: ;
				res += ((NI) 1);
			} LA8: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__wAzSnEu9cCHHjvPQlWBZUeQ)(NimStringV2 s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = nsuFindCharSet(s, chars, ((NI) 0), ((NI) 0));
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringV2 a, NimStringV2 b) {
	NI result;
	NI i;
	NI m;
{	result = (NI)0;
	i = ((NI) 0);
	m = ((a.len <= b.len) ? a.len : b.len);
	{
		while (1) {
			NIM_CHAR T3_;
			NIM_CHAR T4_;
			if (!(i < m)) goto LA2;
			T3_ = (NIM_CHAR)0;
			T3_ = nsuToLowerAsciiChar(a.p->data[i]);
			T4_ = (NIM_CHAR)0;
			T4_ = nsuToLowerAsciiChar(b.p->data[i]);
			result = (NI)(((NU8)(T3_)) - ((NU8)(T4_)));
			{
				if (!!((result == ((NI) 0)))) goto LA7_;
				goto BeforeRet_;
			}
			LA7_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	result = (NI)(a.len - b.len);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nsuInitSkipTable)(NI* a, NimStringV2 sub) {
	NI m;
	NI i;
	m = sub.len;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i <= ((NI) 248))) goto LA2;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 0)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 1)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 2)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 3)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 4)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 5)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 6)))))))))- 0] = m;
			a[(((NU8)(((NIM_CHAR) (((NI) ((NI)(i + ((NI) 7)))))))))- 0] = m;
			i += ((NI) 8);
		} LA2: ;
	}
	{
		NI i_2;
		NI colontmp_;
		NI i_3;
		i_2 = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(m - ((NI) 1));
		i_3 = ((NI) 0);
		{
			while (1) {
				if (!(i_3 < colontmp_)) goto LA5;
				i_2 = i_3;
				a[(((NU8)(sub.p->data[i_2])))- 0] = (NI)((NI)(m - ((NI) 1)) - i_2);
				i_3 += ((NI) 1);
			} LA5: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStrA)(tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a, NimStringV2 s, NimStringV2 sub, NI start, NI last) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	NI last_2;
	NI subLast;
	NI skip;
{	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		if (!(last == ((NI) 0))) goto LA3_;
		colontmpD_ = (s.len-1);
		last_2 = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = last;
		last_2 = colontmpD__2;
	}
	LA1_: ;
	subLast = (NI)(sub.len - ((NI) 1));
	{
		if (!(subLast == ((NI) -1))) goto LA8_;
		result = ((NI) (start));
		goto BeforeRet_;
	}
	LA8_: ;
	skip = start;
	{
		while (1) {
			NI i;
			if (!(subLast <= (NI)(last_2 - ((NI) (skip))))) goto LA11;
			i = subLast;
			{
				while (1) {
					if (!((NU8)(s.p->data[(NI)(((NI) (skip)) + i)]) == (NU8)(sub.p->data[i]))) goto LA13;
					{
						if (!(i == ((NI) 0))) goto LA16_;
						result = ((NI) (skip));
						goto BeforeRet_;
					}
					LA16_: ;
					i -= ((NI) 1);
				} LA13: ;
			}
			skip += a[(((NU8)(s.p->data[(NI)(((NI) (skip)) + subLast)])))- 0];
		} LA11: ;
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStr)(NimStringV2 s, NimStringV2 sub, NI start, NI last) {
	NI result;
	tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a;
{	result = (NI)0;
	{
		if (!(s.len < sub.len)) goto LA3_;
		result = ((NI) -1);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!(sub.len == ((NI) 1))) goto LA7_;
		result = nsuFindChar(s, sub.p->data[((NI) 0)], start, last);
		goto BeforeRet_;
	}
	LA7_: ;
	nsuInitSkipTable(a, sub);
	result = nsuFindStrA(a, s, sub, start, last);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__KV0xCsBzaN9coqb7PG9au0oQ)(NimStringV2 s, NimStringV2 sub) {
	NIM_BOOL result;
	NI T1_;
{	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = nsuFindStr(s, sub, ((NI) 0), ((NI) 0));
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToUpperAsciiChar)(NIM_CHAR c) {
	NIM_CHAR result;
	result = (NIM_CHAR)0;
	{
		if (!(((NU8)(c)) >= ((NU8)(97)) && ((NU8)(c)) <= ((NU8)(122)))) goto LA3_;
		result = ((NIM_CHAR) (((NI) ((NI)(((NU8)(c)) - ((NI) 32))))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = c;
	}
	LA1_: ;
	return result;
}
static N_INLINE(void, nimPrepareStrMutationV2)(NimStringV2* s) {
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = !(((*s).p == NIM_NIL));
		if (!(T3_)) goto LA4_;
		T3_ = ((NI)((*(*s).p).cap & ((NI) IL64(4611686018427387904))) == ((NI) IL64(4611686018427387904)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimPrepareStrMutationImpl__C0YoABEefTaYbWLv9aVOzZA(s);
	}
	LA5_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuToLowerAsciiStr)(NimStringV2 s) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(((NI) (s.len)));
	{
		NI iX60gensym7_;
		NI colontmp_;
		NI res;
		iX60gensym7_ = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(s.len - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				iX60gensym7_ = res;
				nimPrepareStrMutationV2((&result));
				result.p->data[iX60gensym7_] = nsuToLowerAsciiChar(s.p->data[iX60gensym7_]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseInt)(NimStringV2 s) {
	NI result;
	NI L;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = ((NI) 0);
	L = npuParseInt(s, (&result), ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T7_;
		NimStringV2 T8_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((L == s.len));
		if (T3_) goto LA4_;
		T3_ = (L == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		T7_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T7_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) nimNewObj(sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T7_).Sup.Sup.Sup.m_type = (&NTIv2__yoNlBGx0D2tRizIdhQuENw_);
		(*T7_).Sup.Sup.name = "ValueError";
		T8_.len = 0; T8_.p = NIM_NIL;
		T8_ = rawNewString(s.len + 17);
appendString((&T8_), TM__JGc9b9bh2D3nTdUR7TGyq8aA_7);
appendString((&T8_), s);
		(*T7_).Sup.Sup.message = T8_;
		(*T7_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T7_, "ValueError", "parseInt", "strutils.nim", 1129);
		goto BeforeRet_;
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuToUpperAsciiStr)(NimStringV2 s) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(((NI) (s.len)));
	{
		NI iX60gensym11_;
		NI colontmp_;
		NI res;
		iX60gensym11_ = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(s.len - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				iX60gensym11_ = res;
				nimPrepareStrMutationV2((&result));
				result.p->data[iX60gensym11_] = nsuToUpperAsciiChar(s.p->data[iX60gensym11_]);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuStrip)(NimStringV2 s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars) {
	NimStringV2 result;
	NI first;
	NI last;
	result.len = 0; result.p = NIM_NIL;
	first = ((NI) 0);
	last = (NI)(s.len - ((NI) 1));
	{
		if (!leading) goto LA3_;
		{
			while (1) {
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (first <= last);
				if (!(T7_)) goto LA8_;
				T7_ = ((chars[(NU)(((NU8)(s.p->data[first])))>>3] &(1U<<((NU)(((NU8)(s.p->data[first])))&7U)))!=0);
				LA8_: ;
				if (!T7_) goto LA6;
				first += ((NI) 1);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		if (!trailing) goto LA11_;
		{
			while (1) {
				NIM_BOOL T15_;
				T15_ = (NIM_BOOL)0;
				T15_ = (((NI) 0) <= last);
				if (!(T15_)) goto LA16_;
				T15_ = ((chars[(NU)(((NU8)(s.p->data[last])))>>3] &(1U<<((NU)(((NU8)(s.p->data[last])))&7U)))!=0);
				LA16_: ;
				if (!T15_) goto LA14;
				last -= ((NI) 1);
			} LA14: ;
		}
	}
	LA11_: ;
	result = substr__2yh9cer0ymNRHlOOg8P7IuA(s, first, last);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tySequence__sM4lkSb7zS6F7OVMvW9cffQ, nsuSplitChar)(NimStringV2 s, NIM_CHAR sep, NI maxsplit) {
	tySequence__sM4lkSb7zS6F7OVMvW9cffQ result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result.len = 0; result.p = NIM_NIL;
	result.len = 0; result.p = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ_Content*) newSeqPayload(0, sizeof(NimStringV2), NIM_ALIGNOF(NimStringV2));
	{
		NimStringV2 xX60gensym59_;
		NI lastX60gensym26_;
		NI splitsX60gensym26_;
		xX60gensym59_.len = 0; xX60gensym59_.p = NIM_NIL;
		lastX60gensym26_ = ((NI) 0);
		splitsX60gensym26_ = maxsplit;
		{
			while (1) {
				NI firstX60gensym26_;
				NimStringV2 T13_;
				NimStringV2 blitTmp;
				if (!(lastX60gensym26_ <= s.len)) goto LA4;
				firstX60gensym26_ = lastX60gensym26_;
				{
					while (1) {
						NIM_BOOL T7_;
						T7_ = (NIM_BOOL)0;
						T7_ = (lastX60gensym26_ < s.len);
						if (!(T7_)) goto LA8_;
						T7_ = !(((NU8)(s.p->data[lastX60gensym26_]) == (NU8)(sep)));
						LA8_: ;
						if (!T7_) goto LA6;
						lastX60gensym26_ += ((NI) 1);
					} LA6: ;
				}
				{
					if (!(splitsX60gensym26_ == ((NI) 0))) goto LA11_;
					lastX60gensym26_ = s.len;
				}
				LA11_: ;
				T13_.len = 0; T13_.p = NIM_NIL;
				T13_ = substr__2yh9cer0ymNRHlOOg8P7IuA(s, firstX60gensym26_, (NI)(lastX60gensym26_ - ((NI) 1)));
				eqsink___aBBXmHFBEivKqERloP6zmA((&xX60gensym59_), T13_);
				blitTmp = xX60gensym59_;
				xX60gensym59_.len = 0; xX60gensym59_.p = NIM_NIL;
				add__dK9ajFgX5RSWQx0eHjjpjSQ((&result), blitTmp);
				{
					if (!(splitsX60gensym26_ == ((NI) 0))) goto LA16_;
					goto LA3;
				}
				LA16_: ;
				splitsX60gensym26_ -= ((NI) 1);
				lastX60gensym26_ += ((NI) 1);
			} LA4: ;
		} LA3: ;
		{
			LA2_:;
		}
		{
			eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&xX60gensym59_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NF, nsuParseFloat)(NimStringV2 s) {
	NF result;
	NI L;
{	result = (NF)0;
	result = 0.0;
	L = npuParseFloat(s, (&result), ((NI) 0));
	{
		NIM_BOOL T3_;
		tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T7_;
		NimStringV2 T8_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((L == s.len));
		if (T3_) goto LA4_;
		T3_ = (L == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		T7_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T7_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) nimNewObj(sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T7_).Sup.Sup.Sup.m_type = (&NTIv2__yoNlBGx0D2tRizIdhQuENw_);
		(*T7_).Sup.Sup.name = "ValueError";
		T8_.len = 0; T8_.p = NIM_NIL;
		T8_ = rawNewString(s.len + 15);
appendString((&T8_), TM__JGc9b9bh2D3nTdUR7TGyq8aA_9);
appendString((&T8_), s);
		(*T7_).Sup.Sup.message = T8_;
		(*T7_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T7_, "ValueError", "parseFloat", "strutils.nim", 1173);
		goto BeforeRet_;
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuRepeatChar)(NIM_CHAR c, NI count) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(count);
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(((NI) (count)) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				nimPrepareStrMutationV2((&result));
				result.p->data[i] = c;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, toHexImpl__izPdbsQUP8KddbeBZ2srrw)(NU64 x, NI len, NIM_BOOL handleNegative) {
	NimStringV2 result;
	NU64 n;
	result.len = 0; result.p = NIM_NIL;
	n = x;
	result = mnewString(((NI) (len)));
	{
		NI j;
		NI colontmp_;
		NI res;
		j = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)(((NI) (len)) - ((NI) 1));
		res = colontmp_;
		{
			while (1) {
				if (!(((NI) 0) <= res)) goto LA3;
				j = res;
				nimPrepareStrMutationV2((&result));
				result.p->data[j] = TM__JGc9b9bh2D3nTdUR7TGyq8aA_11.p->data[(NU64)(n & 15ULL)];
				n = (NU64)((NU64)(n) >> (NU64)(((NI) 4)));
				{
					NIM_BOOL T6_;
					T6_ = (NIM_BOOL)0;
					T6_ = (n == 0ULL);
					if (!(T6_)) goto LA7_;
					T6_ = handleNegative;
					LA7_: ;
					if (!T6_) goto LA8_;
					n = 18446744073709551615ULL;
				}
				LA8_: ;
				res -= ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuToHex)(NI64 x, NI len) {
	NimStringV2 result;
	NU64 T1_;
	result.len = 0; result.p = NIM_NIL;
	T1_ = (NU64)0;
	T1_ = ((NU64) (x));
	result = toHexImpl__izPdbsQUP8KddbeBZ2srrw(T1_, len, (x < IL64(0)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuRepeatStr)(NimStringV2 s, NI n) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	result = rawNewString(((NI) ((NI)(((NI) (n)) * s.len))));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = ((NI) (n));
		res = ((NI) 1);
		{
			while (1) {
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				prepareAdd((&result), s.len + 0);
appendString((&result), s);
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b) {
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, alignLeft__J6nzJGsekGLihvDbS6XWDA)(NimStringV2 s, NI count, NIM_CHAR padding) {
	NimStringV2 result;
	result.len = 0; result.p = NIM_NIL;
	{
		if (!(s.len < ((NI) (count)))) goto LA3_;
		result = mnewString(count);
		{
			tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T9_;
			if (!(((NI) 0) < s.len)) goto LA7_;
			T9_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(((NI) 0), (NI)(s.len - ((NI) 1)));
			X5BX5Deq___nzw30OOxYaJmEInmJdKSvg((&result), T9_, s);
		}
		LA7_: ;
		{
			NI i;
			NI colontmp_;
			NI colontmp__2;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp__2 = (NI)0;
			colontmp_ = s.len;
			colontmp__2 = ((NI) (count));
			i_2 = colontmp_;
			{
				while (1) {
					if (!(i_2 < colontmp__2)) goto LA12;
					i = i_2;
					nimPrepareStrMutationV2((&result));
					result.p->data[i] = padding;
					i_2 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		eqcopy___aBBXmHFBEivKqERloP6zmA_2((&result), s);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringV2, nsuReplaceChar)(NimStringV2 s, NIM_CHAR sub, NIM_CHAR by) {
	NimStringV2 result;
	NI i;
	result.len = 0; result.p = NIM_NIL;
	result = mnewString(((NI) (s.len)));
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < s.len)) goto LA2;
			{
				if (!((NU8)(s.p->data[i]) == (NU8)(sub))) goto LA5_;
				nimPrepareStrMutationV2((&result));
				result.p->data[i] = by;
			}
			goto LA3_;
			LA5_: ;
			{
				nimPrepareStrMutationV2((&result));
				result.p->data[i] = s.p->data[i];
			}
			LA3_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}
