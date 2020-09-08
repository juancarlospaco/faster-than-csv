/* Generated by Nim Compiler v1.3.5 */
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct Exception {
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;
};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA {
  Exception Sup;
};
struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
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
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
typedef NI tyArray__9cc9aPiDa8VaWjVcFLabEDZQ[256];
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, nsuAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
N_LIB_PRIVATE N_NOINLINE(void, invalidFormatString__8vOMwvNB8blLQSoRXfInAg)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NI, findNormalized__7LxW6wQxHkQGOeaPw6nEjQ)(NimStringDesc* x, NimStringDesc** inArray, NI inArrayLen_0);
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToLowerAsciiChar)(NIM_CHAR c);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStr)(NimStringDesc* s, NimStringDesc* sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last);
N_LIB_PRIVATE N_NIMCALL(void, nsuInitSkipTable)(NI* a, NimStringDesc* sub);
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStrA)(tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a, NimStringDesc* s, NimStringDesc* sub, NI start, NI last);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NIM_CHAR, nsuToUpperAsciiChar)(NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHexImpl__izPdbsQUP8KddbeBZ2srrw)(NU64 x, NI len, NIM_BOOL handleNegative);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__iGg0RIKceRvsmvq8FUHOEw)(NimStringDesc* s, NI first);

/* section: NIM_merge_DATA */
extern TNimType NTI__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__JGc9b9bh2D3nTdUR7TGyq8aA_2, "invalid format string", 21);
STRING_LITERAL(TM__JGc9b9bh2D3nTdUR7TGyq8aA_3, "invalid integer: ", 17);
STRING_LITERAL(TM__JGc9b9bh2D3nTdUR7TGyq8aA_4, "0123456789ABCDEF", 16);

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_INLINE(NI, minuspercent___dgYAo7RfdUVVpvkfKDym8w_2system)(NI x, NI y) {
	NI result;
	result = (NI)0;
	result = ((NI) ((NU)((NU64)(((NU) (x))) - (NU64)(((NU) (y))))));
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last) {
	NI result;
	NI last_2;
	NI L;
{	result = (NI)0;
	{
		if (!(last == ((NI) 0))) goto LA3_;
		last_2 = ((s ? s->Sup.len : 0)-1);
	}
	goto LA1_;
	LA3_: ;
	{
		last_2 = last;
	}
	LA1_: ;
	L = (NI)((NI)(last_2 - ((NI) (start))) + ((NI) 1));
	{
		void* found;
		if (!(((NI) 0) < L)) goto LA8_;
		found = memchr(((void*) ((&s->data[start]))), sub, ((size_t) (L)));
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
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	(*T1_).Sup.Sup.message = copyString(((NimStringDesc*) &TM__JGc9b9bh2D3nTdUR7TGyq8aA_2));
	(*T1_).Sup.Sup.parent = NIM_NIL;
	raiseExceptionEx((Exception*)T1_, "ValueError", "invalidFormatString", "strutils.nim", 2735);
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
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	{
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
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
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	NI i;
	NI j;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	i = ((NI) 0);
	j = ((NI) 0);
	{
		while (1) {
			NIM_CHAR aa;
			NIM_CHAR bb;
			{
				while (1) {
					NIM_BOOL T5_;
					T5_ = (NIM_BOOL)0;
					T5_ = (i < (a ? a->Sup.len : 0));
					if (!(T5_)) goto LA6_;
					T5_ = ((NU8)(a->data[i]) == (NU8)(95));
					LA6_: ;
					if (!T5_) goto LA4;
					i += ((NI) 1);
				} LA4: ;
			}
			{
				while (1) {
					NIM_BOOL T9_;
					T9_ = (NIM_BOOL)0;
					T9_ = (j < (b ? b->Sup.len : 0));
					if (!(T9_)) goto LA10_;
					T9_ = ((NU8)(b->data[j]) == (NU8)(95));
					LA10_: ;
					if (!T9_) goto LA8;
					j += ((NI) 1);
				} LA8: ;
			}
			{
				if (!(i < (a ? a->Sup.len : 0))) goto LA13_;
				aa = nsuToLowerAsciiChar(a->data[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			goto LA11_;
			LA13_: ;
			{
				aa = 0;
			}
			LA11_: ;
			{
				if (!(j < (b ? b->Sup.len : 0))) goto LA18_;
				bb = nsuToLowerAsciiChar(b->data[j]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			}
			goto LA16_;
			LA18_: ;
			{
				bb = 0;
			}
			LA16_: ;
			result = (NI)(((NU8)(aa)) - ((NU8)(bb)));
			{
				if (!!((result == ((NI) 0)))) goto LA23_;
				goto BeforeRet_;
			}
			LA23_: ;
			{
				if (!((a ? a->Sup.len : 0) <= i)) goto LA27_;
				{
					if (!((b ? b->Sup.len : 0) <= j)) goto LA31_;
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
				if (!((b ? b->Sup.len : 0) <= j)) goto LA34_;
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
N_LIB_PRIVATE N_NIMCALL(NI, findNormalized__7LxW6wQxHkQGOeaPw6nEjQ)(NimStringDesc* x, NimStringDesc** inArray, NI inArrayLen_0) {
	NI result;
	NI i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (inArrayLen_0-1))) goto LA2;
			{
				NI T5_;
				T5_ = (NI)0;
				T5_ = nsuCmpIgnoreStyle(x, inArray[i]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(void, nsuAddf)(NimStringDesc** s, NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0) {
	NI i;
	NI num;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	i = ((NI) 0);
	num = ((NI) 0);
	{
		while (1) {
			if (!(i < (formatstr ? formatstr->Sup.len : 0))) goto LA2;
			{
				NIM_BOOL T5_;
				T5_ = (NIM_BOOL)0;
				T5_ = ((NU8)(formatstr->data[i]) == (NU8)(36));
				if (!(T5_)) goto LA6_;
				T5_ = ((NI)(i + ((NI) 1)) < (formatstr ? formatstr->Sup.len : 0));
				LA6_: ;
				if (!T5_) goto LA7_;
				switch (((NU8)(formatstr->data[(NI)(i + ((NI) 1))]))) {
				case 35:
				{
					{
						if (!((aLen_0-1) < num)) goto LA12_;
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA12_: ;
					(*s) = resizeString((*s), (a[num] ? a[num]->Sup.len : 0) + 0);
appendString((*s), a[num]);
					i += ((NI) 2);
					num += ((NI) 1);
				}
				break;
				case 36:
				{
					(*s) = addChar((*s), 36);
					i += ((NI) 2);
				}
				break;
				case 49 ... 57:
				case 45:
				{
					NI j;
					NIM_BOOL negative;
					NI idx;
					j = ((NI) 0);
					i += ((NI) 1);
					negative = ((NU8)(formatstr->data[i]) == (NU8)(45));
					{
						if (!negative) goto LA18_;
						i += ((NI) 1);
					}
					LA18_: ;
					{
						while (1) {
							NIM_BOOL T22_;
							T22_ = (NIM_BOOL)0;
							T22_ = (i < (formatstr ? formatstr->Sup.len : 0));
							if (!(T22_)) goto LA23_;
							T22_ = (((NU8)(formatstr->data[i])) >= ((NU8)(48)) && ((NU8)(formatstr->data[i])) <= ((NU8)(57)));
							LA23_: ;
							if (!T22_) goto LA21;
							j = (NI)((NI)((NI)(j * ((NI) 10)) + ((NU8)(formatstr->data[i]))) - ((NI) 48));
							i += ((NI) 1);
						} LA21: ;
					}
					{
						if (!!(negative)) goto LA26_;
						idx = (NI)(j - ((NI) 1));
					}
					goto LA24_;
					LA26_: ;
					{
						idx = (NI)(aLen_0 - j);
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
					(*s) = resizeString((*s), (a[idx] ? a[idx]->Sup.len : 0) + 0);
appendString((*s), a[idx]);
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
					negative_2 = ((NU8)(formatstr->data[j_2]) == (NU8)(45));
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
							T42_ = (j_2 < (formatstr ? formatstr->Sup.len : 0));
							if (!(T42_)) goto LA43_;
							T42_ = !((((NU8)(formatstr->data[j_2])) == ((NU8)(0)) || ((NU8)(formatstr->data[j_2])) == ((NU8)(125))));
							LA43_: ;
							if (!T42_) goto LA41;
							{
								if (!(((NU8)(formatstr->data[j_2])) >= ((NU8)(48)) && ((NU8)(formatstr->data[j_2])) <= ((NU8)(57)))) goto LA46_;
								k = (NI)((NI)((NI)(k * ((NI) 10)) + ((NU8)(formatstr->data[j_2]))) - ((NI) 48));
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
						NI idx_2;
						if (!(isNumber == ((NI) 1))) goto LA55_;
						{
							if (!!(negative_2)) goto LA59_;
							idx_2 = (NI)(k - ((NI) 1));
						}
						goto LA57_;
						LA59_: ;
						{
							idx_2 = (NI)(aLen_0 - k);
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
						(*s) = resizeString((*s), (a[idx_2] ? a[idx_2]->Sup.len : 0) + 0);
appendString((*s), a[idx_2]);
					}
					goto LA53_;
					LA55_: ;
					{
						NI x;
						NimStringDesc* T69_;
						T69_ = (NimStringDesc*)0;
						T69_ = substr__2yh9cer0ymNRHlOOg8P7IuA(formatstr, (NI)(i + ((NI) 2)), (NI)(j_2 - ((NI) 1)));
						x = findNormalized__7LxW6wQxHkQGOeaPw6nEjQ(T69_, a, aLen_0);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						{
							NIM_BOOL T72_;
							T72_ = (NIM_BOOL)0;
							T72_ = (((NI) 0) <= x);
							if (!(T72_)) goto LA73_;
							T72_ = (x < (aLen_0-1));
							LA73_: ;
							if (!T72_) goto LA74_;
							(*s) = resizeString((*s), (a[(NI)(x + ((NI) 1))] ? a[(NI)(x + ((NI) 1))]->Sup.len : 0) + 0);
appendString((*s), a[(NI)(x + ((NI) 1))]);
						}
						goto LA70_;
						LA74_: ;
						{
							invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
							if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						}
						LA70_: ;
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
					NI j_3;
					NI x_2;
					NimStringDesc* T82_;
					j_3 = (NI)(i + ((NI) 1));
					{
						while (1) {
							NIM_BOOL T80_;
							T80_ = (NIM_BOOL)0;
							T80_ = (j_3 < (formatstr ? formatstr->Sup.len : 0));
							if (!(T80_)) goto LA81_;
							T80_ = (((NU8)(formatstr->data[j_3])) >= ((NU8)(97)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(122)) || ((NU8)(formatstr->data[j_3])) >= ((NU8)(65)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(90)) || ((NU8)(formatstr->data[j_3])) >= ((NU8)(48)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(57)) || ((NU8)(formatstr->data[j_3])) >= ((NU8)(128)) && ((NU8)(formatstr->data[j_3])) <= ((NU8)(255)) || ((NU8)(formatstr->data[j_3])) == ((NU8)(95)));
							LA81_: ;
							if (!T80_) goto LA79;
							j_3 += ((NI) 1);
						} LA79: ;
					}
					T82_ = (NimStringDesc*)0;
					T82_ = substr__2yh9cer0ymNRHlOOg8P7IuA(formatstr, (NI)(i + ((NI) 1)), (NI)(j_3 - ((NI) 1)));
					x_2 = findNormalized__7LxW6wQxHkQGOeaPw6nEjQ(T82_, a, aLen_0);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					{
						NIM_BOOL T85_;
						T85_ = (NIM_BOOL)0;
						T85_ = (((NI) 0) <= x_2);
						if (!(T85_)) goto LA86_;
						T85_ = (x_2 < (aLen_0-1));
						LA86_: ;
						if (!T85_) goto LA87_;
						(*s) = resizeString((*s), (a[(NI)(x_2 + ((NI) 1))] ? a[(NI)(x_2 + ((NI) 1))]->Sup.len : 0) + 0);
appendString((*s), a[(NI)(x_2 + ((NI) 1))]);
					}
					goto LA83_;
					LA87_: ;
					{
						invalidFormatString__8vOMwvNB8blLQSoRXfInAg();
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA83_: ;
					i = j_3;
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
				(*s) = addChar((*s), formatstr->data[i]);
				i += ((NI) 1);
			}
			LA3_: ;
		} LA2: ;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0) {
	NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((NI)((formatstr ? formatstr->Sup.len : 0) + (NI)((NU64)(aLen_0) << (NU64)(((NI) 4)))))));
	nsuAddf((&result), formatstr, a, aLen_0);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, nsuStartsWith)(NimStringDesc* s, NimStringDesc* prefix) {
	NIM_BOOL result;
	NI i;
{	result = (NIM_BOOL)0;
	i = ((NI) 0);
	{
		while (1) {
			{
				if (!((prefix ? prefix->Sup.len : 0) <= i)) goto LA5_;
				result = NIM_TRUE;
				goto BeforeRet_;
			}
			LA5_: ;
			{
				NIM_BOOL T9_;
				T9_ = (NIM_BOOL)0;
				T9_ = ((s ? s->Sup.len : 0) <= i);
				if (T9_) goto LA10_;
				T9_ = !(((NU8)(s->data[i]) == (NU8)(prefix->data[i])));
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuJoinSep)(NimStringDesc** a, NI aLen_0, NimStringDesc* sep) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	{
		NI L;
		if (!(((NI) 0) < aLen_0)) goto LA3_;
		L = (NI)((sep ? sep->Sup.len : 0) * (NI)(aLen_0 - ((NI) 1)));
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
					L += (a[i] ? a[i]->Sup.len : 0);
					res += ((NI) 1);
				} LA7: ;
			}
		}
		result = rawNewString(((NI) (L)));
		result = resizeString(result, (a[((NI) 0)] ? a[((NI) 0)]->Sup.len : 0) + 0);
appendString(result, a[((NI) 0)]);
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
					result = resizeString(result, (sep ? sep->Sup.len : 0) + 0);
appendString(result, sep);
					result = resizeString(result, (a[i_2] ? a[i_2]->Sup.len : 0) + 0);
appendString(result, a[i_2]);
					res_2 += ((NI) 1);
				} LA10: ;
			}
		}
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NimStringDesc*) NIM_NIL);
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindCharSet)(NimStringDesc* s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars, NI start, NI last) {
	NI result;
	NI last_2;
{	result = (NI)0;
	{
		if (!(last == ((NI) 0))) goto LA3_;
		last_2 = ((s ? s->Sup.len : 0)-1);
	}
	goto LA1_;
	LA3_: ;
	{
		last_2 = last;
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
					if (!((chars[(NU)(((NU8)(s->data[i])))>>3] &(1U<<((NU)(((NU8)(s->data[i])))&7U)))!=0)) goto LA11_;
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
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__wAzSnEu9cCHHjvPQlWBZUeQ)(NimStringDesc* s, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars) {
	NIM_BOOL result;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = nsuFindCharSet(s, chars, ((NI) 0), ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = (((NI) 0) <= T1_);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuCmpIgnoreCase)(NimStringDesc* a, NimStringDesc* b) {
	NI result;
	NI i;
	NI m;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	i = ((NI) 0);
	m = (((a ? a->Sup.len : 0) <= (b ? b->Sup.len : 0)) ? (a ? a->Sup.len : 0) : (b ? b->Sup.len : 0));
	{
		while (1) {
			NIM_CHAR T3_;
			NIM_CHAR T4_;
			if (!(i < m)) goto LA2;
			T3_ = (NIM_CHAR)0;
			T3_ = nsuToLowerAsciiChar(a->data[i]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T4_ = (NIM_CHAR)0;
			T4_ = nsuToLowerAsciiChar(b->data[i]);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			result = (NI)(((NU8)(T3_)) - ((NU8)(T4_)));
			{
				if (!!((result == ((NI) 0)))) goto LA7_;
				goto BeforeRet_;
			}
			LA7_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	result = (NI)((a ? a->Sup.len : 0) - (b ? b->Sup.len : 0));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, nsuInitSkipTable)(NI* a, NimStringDesc* sub) {
	NI m;
	NI i;
	m = (sub ? sub->Sup.len : 0);
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
				a[(((NU8)(sub->data[i_2])))- 0] = (NI)((NI)(m - ((NI) 1)) - i_2);
				i_3 += ((NI) 1);
			} LA5: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStrA)(tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a, NimStringDesc* s, NimStringDesc* sub, NI start, NI last) {
	NI result;
	NI last_2;
	NI subLast;
	NI skip;
{	result = (NI)0;
	{
		if (!(last == ((NI) 0))) goto LA3_;
		last_2 = ((s ? s->Sup.len : 0)-1);
	}
	goto LA1_;
	LA3_: ;
	{
		last_2 = last;
	}
	LA1_: ;
	subLast = (NI)((sub ? sub->Sup.len : 0) - ((NI) 1));
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
					if (!((NU8)(s->data[(NI)(((NI) (skip)) + i)]) == (NU8)(sub->data[i]))) goto LA13;
					{
						if (!(i == ((NI) 0))) goto LA16_;
						result = ((NI) (skip));
						goto BeforeRet_;
					}
					LA16_: ;
					i -= ((NI) 1);
				} LA13: ;
			}
			skip += a[(((NU8)(s->data[(NI)(((NI) (skip)) + subLast)])))- 0];
		} LA11: ;
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuFindStr)(NimStringDesc* s, NimStringDesc* sub, NI start, NI last) {
	NI result;
	tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	{
		if (!((s ? s->Sup.len : 0) < (sub ? sub->Sup.len : 0))) goto LA3_;
		result = ((NI) -1);
		goto BeforeRet_;
	}
	LA3_: ;
	{
		if (!((sub ? sub->Sup.len : 0) == ((NI) 1))) goto LA7_;
		result = nsuFindChar(s, sub->data[((NI) 0)], start, last);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		goto BeforeRet_;
	}
	LA7_: ;
	nsuInitSkipTable(a, sub);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = nsuFindStrA(a, s, sub, start, last);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, contains__KV0xCsBzaN9coqb7PG9au0oQ)(NimStringDesc* s, NimStringDesc* sub) {
	NIM_BOOL result;
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (NI)0;
	T1_ = nsuFindStr(s, sub, ((NI) 0), ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToLowerAsciiStr)(NimStringDesc* s) {
	NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	{
		NI iX60gensym7_;
		NI colontmp_;
		NI res;
		iX60gensym7_ = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				NIM_CHAR T4_;
				if (!(res <= colontmp_)) goto LA3;
				iX60gensym7_ = res;
				T4_ = (NIM_CHAR)0;
				T4_ = nsuToLowerAsciiChar(s->data[iX60gensym7_]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				result->data[iX60gensym7_] = T4_;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuParseInt)(NimStringDesc* s) {
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
		NimStringDesc* T8_;
		T3_ = (NIM_BOOL)0;
		T3_ = !((L == (s ? s->Sup.len : 0)));
		if (T3_) goto LA4_;
		T3_ = (L == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		T7_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
		T7_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
		(*T7_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
		(*T7_).Sup.Sup.name = "ValueError";
		T8_ = (NimStringDesc*)0;
		T8_ = rawNewString((s ? s->Sup.len : 0) + 17);
appendString(T8_, ((NimStringDesc*) &TM__JGc9b9bh2D3nTdUR7TGyq8aA_3));
appendString(T8_, s);
		(*T7_).Sup.Sup.message = T8_;
		(*T7_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T7_, "ValueError", "parseInt", "strutils.nim", 1128);
		goto BeforeRet_;
	}
	LA5_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToUpperAsciiStr)(NimStringDesc* s) {
	NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	{
		NI iX60gensym11_;
		NI colontmp_;
		NI res;
		iX60gensym11_ = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
		res = ((NI) 0);
		{
			while (1) {
				NIM_CHAR T4_;
				if (!(res <= colontmp_)) goto LA3;
				iX60gensym11_ = res;
				T4_ = (NIM_CHAR)0;
				T4_ = nsuToUpperAsciiChar(s->data[iX60gensym11_]);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				result->data[iX60gensym11_] = T4_;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuStrip)(NimStringDesc* s, NIM_BOOL leading, NIM_BOOL trailing, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars) {
	NimStringDesc* result;
	NI first;
	NI last;
	result = (NimStringDesc*)0;
	first = ((NI) 0);
	last = (NI)((s ? s->Sup.len : 0) - ((NI) 1));
	{
		if (!leading) goto LA3_;
		{
			while (1) {
				NIM_BOOL T7_;
				T7_ = (NIM_BOOL)0;
				T7_ = (first <= last);
				if (!(T7_)) goto LA8_;
				T7_ = ((chars[(NU)(((NU8)(s->data[first])))>>3] &(1U<<((NU)(((NU8)(s->data[first])))&7U)))!=0);
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
				T15_ = ((chars[(NU)(((NU8)(s->data[last])))>>3] &(1U<<((NU)(((NU8)(s->data[last])))&7U)))!=0);
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuRepeatChar)(NIM_CHAR c, NI count) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
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
				result->data[i] = c;
				res += ((NI) 1);
			} LA3: ;
		}
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, toHexImpl__izPdbsQUP8KddbeBZ2srrw)(NU64 x, NI len, NIM_BOOL handleNegative) {
	NimStringDesc* result;
	NU64 n;
	result = (NimStringDesc*)0;
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
				result->data[j] = ((NimStringDesc*) &TM__JGc9b9bh2D3nTdUR7TGyq8aA_4)->data[(NU64)(n & 15ULL)];
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
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len) {
	NimStringDesc* result;
	NU64 T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	T1_ = (NU64)0;
	T1_ = ((NU64) (x));
	result = toHexImpl__izPdbsQUP8KddbeBZ2srrw(T1_, len, (x < IL64(0)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, nsuRFindChar)(NimStringDesc* s, NIM_CHAR sub, NI start, NI last) {
	NI result;
	NI last_2;
{	result = (NI)0;
	{
		if (!(last == ((NI) -1))) goto LA3_;
		last_2 = ((s ? s->Sup.len : 0)-1);
	}
	goto LA1_;
	LA3_: ;
	{
		last_2 = last;
	}
	LA1_: ;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = ((NI) (start));
		res = last_2;
		{
			while (1) {
				if (!(colontmp_ <= res)) goto LA8;
				i = res;
				{
					if (!((NU8)(sub) == (NU8)(s->data[i]))) goto LA11_;
					result = i;
					goto BeforeRet_;
				}
				LA11_: ;
				res -= ((NI) 1);
			} LA8: ;
		}
	}
	result = ((NI) -1);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceChar)(NimStringDesc* s, NIM_CHAR sub, NIM_CHAR by) {
	NimStringDesc* result;
	NI i;
	result = (NimStringDesc*)0;
	result = mnewString(((NI) ((s ? s->Sup.len : 0))));
	i = ((NI) 0);
	{
		while (1) {
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			{
				if (!((NU8)(s->data[i]) == (NU8)(sub))) goto LA5_;
				result->data[i] = by;
			}
			goto LA3_;
			LA5_: ;
			{
				result->data[i] = s->data[i];
			}
			LA3_: ;
			i += ((NI) 1);
		} LA2: ;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuReplaceStr)(NimStringDesc* s, NimStringDesc* sub, NimStringDesc* by) {
	NimStringDesc* result;
	NI subLen;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	subLen = (sub ? sub->Sup.len : 0);
	{
		if (!(subLen == ((NI) 0))) goto LA3_;
		result = copyString(s);
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_CHAR c;
		NI last;
		NI i;
		NimStringDesc* T15_;
		if (!(subLen == ((NI) 1))) goto LA6_;
		c = sub->data[((NI) 0)];
		last = ((s ? s->Sup.len : 0)-1);
		i = ((NI) 0);
		{
			while (1) {
				NI j;
				NimStringDesc* T14_;
				j = nsuFindChar(s, c, ((NI) (i)), last);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					if (!(j < ((NI) 0))) goto LA12_;
					goto LA8;
				}
				LA12_: ;
				T14_ = (NimStringDesc*)0;
				T14_ = substr__2yh9cer0ymNRHlOOg8P7IuA(s, i, (NI)(j - ((NI) 1)));
				result = resizeString(result, (T14_ ? T14_->Sup.len : 0) + 0);
appendString(result, T14_);
				result = resizeString(result, (by ? by->Sup.len : 0) + 0);
appendString(result, by);
				i = (NI)(j + subLen);
			}
		} LA8: ;
		T15_ = (NimStringDesc*)0;
		T15_ = substr__iGg0RIKceRvsmvq8FUHOEw(s, i);
		result = resizeString(result, (T15_ ? T15_->Sup.len : 0) + 0);
appendString(result, T15_);
	}
	goto LA1_;
	LA6_: ;
	{
		tyArray__9cc9aPiDa8VaWjVcFLabEDZQ a;
		NI last_2;
		NI i_2;
		NimStringDesc* T24_;
		nsuInitSkipTable(a, sub);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		last_2 = ((s ? s->Sup.len : 0)-1);
		i_2 = ((NI) 0);
		{
			while (1) {
				NI j_2;
				NimStringDesc* T23_;
				j_2 = nsuFindStrA(a, s, sub, ((NI) (i_2)), last_2);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					if (!(j_2 < ((NI) 0))) goto LA21_;
					goto LA17;
				}
				LA21_: ;
				T23_ = (NimStringDesc*)0;
				T23_ = substr__2yh9cer0ymNRHlOOg8P7IuA(s, i_2, (NI)(j_2 - ((NI) 1)));
				result = resizeString(result, (T23_ ? T23_->Sup.len : 0) + 0);
appendString(result, T23_);
				result = resizeString(result, (by ? by->Sup.len : 0) + 0);
appendString(result, by);
				i_2 = (NI)(j_2 + subLen);
			}
		} LA17: ;
		T24_ = (NimStringDesc*)0;
		T24_ = substr__iGg0RIKceRvsmvq8FUHOEw(s, i_2);
		result = resizeString(result, (T24_ ? T24_->Sup.len : 0) + 0);
appendString(result, T24_);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
