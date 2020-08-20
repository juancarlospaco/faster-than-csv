/* Generated by Nim Compiler v1.2.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -fPIC  -I/home/juan/.choosenim/toolchains/nim-1.2.0/lib -I/home/juan/code/faster-than-csv/src -o /home/juan/code/faster-than-csv/dist/lin/stdlib_pathnorm.nim.c.o /home/juan/code/faster-than-csv/dist/lin/stdlib_pathnorm.nim.c */
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
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg {
NI i;
NI prev;
NIM_BOOL notFirst;
};
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__am1q4dBd9cls9au5CcmkX5oA)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__Sl9c33djPmHfV9bnZbQf0QBw)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s, NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__Sl9c33djPmHfV9bnZbQf0QBw_2)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, substr__2yh9cer0ymNRHlOOg8P7IuA)(NimStringDesc* s, NI first, NI last);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__Sl9c33djPmHfV9bnZbQf0QBw_3)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__bx9csIXjBBeHkYSkIUixO1g)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep);
STRING_LITERAL(TM__DfU0iuayCGwHDN1Exp9cbKg_16, ".", 1);
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	{
		if (!(framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA3_;
		(*s).calldepth = ((NI16) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		(*s).calldepth = (NI16)((*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1));
	}
	LA1_: ;
	(*s).prev = framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) (((NI) 2000))))) goto LA8_;
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it, NimStringDesc* x) {
	NIM_BOOL result;
	nimfr_("hasNext", "pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(25, "pathnorm.nim");
	result = (it.i < (x ? x->Sup.len : 0));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, next__am1q4dBd9cls9au5CcmkX5oA)(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg* it, NimStringDesc* x) {
	tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ result;
	nimfr_("next", "pathnorm.nim");
	nimZeroMem((void*)(&result), sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ));
	nimln_(28, "pathnorm.nim");
	(*it).prev = (*it).i;
	nimln_(29, "pathnorm.nim");
	{
		NIM_BOOL T3_;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_3;
		T3_ = (NIM_BOOL)0;
		T3_ = !((*it).notFirst);
		if (!(T3_)) goto LA4_;
		if ((NU)((*it).i) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
		T3_ = (((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
		LA4_: ;
		if (!T3_) goto LA5_;
		nimln_(31, "pathnorm.nim");
		if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_3)) { raiseOverflow(); };
		(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_3);
	}
	goto LA1_;
	LA5_: ;
	{
		{
			nimln_(37, "pathnorm.nim");
			while (1) {
				NIM_BOOL T10_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_4;
				T10_ = (NIM_BOOL)0;
				T10_ = ((*it).i < (x ? x->Sup.len : 0));
				if (!(T10_)) goto LA11_;
				if ((NU)((*it).i) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
				T10_ = !((((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47))));
				LA11_: ;
				if (!T10_) goto LA9;
				if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_4)) { raiseOverflow(); };
				(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_4);
			} LA9: ;
		}
	}
	LA1_: ;
	nimln_(38, "pathnorm.nim");
	{
		NI colontmp_;
		NI colontmp__2;
		NI TM__DfU0iuayCGwHDN1Exp9cbKg_5;
		if (!((*it).prev < (*it).i)) goto LA14_;
		nimln_(39, "pathnorm.nim");
		colontmp_ = (*it).prev;
		if (nimSubInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_5)) { raiseOverflow(); };
		colontmp__2 = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_5);
		result.Field0 = colontmp_;
		result.Field1 = colontmp__2;
	}
	goto LA12_;
	LA14_: ;
	{
		NIM_BOOL T17_;
		nimln_(40, "pathnorm.nim");
		T17_ = (NIM_BOOL)0;
		T17_ = hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ((*it), x);
		if (!T17_) goto LA18_;
		nimln_(41, "pathnorm.nim");
		result = next__am1q4dBd9cls9au5CcmkX5oA(it, x);
	}
	goto LA12_;
	LA18_: ;
	LA12_: ;
	{
		nimln_(43, "pathnorm.nim");
		while (1) {
			NIM_BOOL T22_;
			NI TM__DfU0iuayCGwHDN1Exp9cbKg_6;
			T22_ = (NIM_BOOL)0;
			T22_ = ((*it).i < (x ? x->Sup.len : 0));
			if (!(T22_)) goto LA23_;
			if ((NU)((*it).i) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2((*it).i,(x ? x->Sup.len : 0)-1); }
			T22_ = (((NU8)(x->data[(*it).i])) == ((NU8)(47)) || ((NU8)(x->data[(*it).i])) == ((NU8)(47)));
			LA23_: ;
			if (!T22_) goto LA21;
			if (nimAddInt((*it).i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_6)) { raiseOverflow(); };
			(*it).i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_6);
		} LA21: ;
	}
	nimln_(44, "pathnorm.nim");
	(*it).notFirst = NIM_TRUE;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isSlash__Sl9c33djPmHfV9bnZbQf0QBw)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isSlash", "pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(57, "pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	if ((NU)(bounds.Field0) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2(bounds.Field0,(x ? x->Sup.len : 0)-1); }
	T1_ = (((NU8)(x->data[bounds.Field0])) == ((NU8)(47)) || ((NU8)(x->data[bounds.Field0])) == ((NU8)(47)));
	LA2_: ;
	result = T1_;
	popFrame();
	return result;
}
static N_INLINE(NIM_CHAR, X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s, NI i) {
	NIM_CHAR result;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_7;
	nimfr_("[]", "system.nim");
	result = (NIM_CHAR)0;
	nimln_(2519, "system.nim");
	if (nimSubInt((s ? s->Sup.len : 0), i, &TM__DfU0iuayCGwHDN1Exp9cbKg_7)) { raiseOverflow(); };
	if ((NU)((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7),(s ? s->Sup.len : 0)-1); }
	result = s->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_7)];
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDotDot__Sl9c33djPmHfV9bnZbQf0QBw_2)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	NIM_BOOL T2_;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_8;
	NI TM__DfU0iuayCGwHDN1Exp9cbKg_9;
	nimfr_("isDotDot", "pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(54, "pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T2_ = (NIM_BOOL)0;
	if (nimAddInt(bounds.Field0, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_8)) { raiseOverflow(); };
	T2_ = (bounds.Field1 == (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_8));
	if (!(T2_)) goto LA3_;
	if ((NU)(bounds.Field0) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2(bounds.Field0,(x ? x->Sup.len : 0)-1); }
	T2_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA3_: ;
	T1_ = T2_;
	if (!(T1_)) goto LA4_;
	if (nimAddInt(bounds.Field0, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_9)) { raiseOverflow(); };
	if ((NU)((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_9)) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_9),(x ? x->Sup.len : 0)-1); }
	T1_ = ((NU8)(x->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_9)]) == (NU8)(46));
	LA4_: ;
	result = T1_;
	popFrame();
	return result;
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
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isDot__Sl9c33djPmHfV9bnZbQf0QBw_3)(NimStringDesc* x, tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ bounds) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	nimfr_("isDot", "pathnorm.nim");
	result = (NIM_BOOL)0;
	nimln_(51, "pathnorm.nim");
	T1_ = (NIM_BOOL)0;
	T1_ = (bounds.Field1 == bounds.Field0);
	if (!(T1_)) goto LA2_;
	if ((NU)(bounds.Field0) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2(bounds.Field0,(x ? x->Sup.len : 0)-1); }
	T1_ = ((NU8)(x->data[bounds.Field0]) == (NU8)(46));
	LA2_: ;
	result = T1_;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addNormalizePath__bx9csIXjBBeHkYSkIUixO1g)(NimStringDesc* x, NimStringDesc** result, NI* state, NIM_CHAR dirSep) {
	tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg it;
	nimfr_("addNormalizePath", "pathnorm.nim");
	nimZeroMem((void*)(&it), sizeof(tyObject_PathIter__tllF14xUpDWpqG9ci5sg9bMg));
	nimln_(66, "pathnorm.nim");
	it.notFirst = (((NI) 0) < (NI)((NI64)((*state)) >> (NU64)(((NI) 1))));
	nimln_(67, "pathnorm.nim");
	{
		if (!it.notFirst) goto LA3_;
		{
			nimln_(68, "pathnorm.nim");
			while (1) {
				NIM_BOOL T7_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_2;
				T7_ = (NIM_BOOL)0;
				T7_ = (it.i < (x ? x->Sup.len : 0));
				if (!(T7_)) goto LA8_;
				if ((NU)(it.i) >= (NU)(x ? x->Sup.len : 0)){ raiseIndexError2(it.i,(x ? x->Sup.len : 0)-1); }
				T7_ = (((NU8)(x->data[it.i])) == ((NU8)(47)) || ((NU8)(x->data[it.i])) == ((NU8)(47)));
				LA8_: ;
				if (!T7_) goto LA6;
				if (nimAddInt(it.i, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_2)) { raiseOverflow(); };
				it.i = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_2);
			} LA6: ;
		}
	}
	LA3_: ;
	{
		nimln_(69, "pathnorm.nim");
		while (1) {
			NIM_BOOL T11_;
			tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ b;
			T11_ = (NIM_BOOL)0;
			T11_ = hasNext__ecfBf9bSnUlnf5OQ0NQMxpQ(it, x);
			if (!T11_) goto LA10;
			nimln_(70, "pathnorm.nim");
			b = next__am1q4dBd9cls9au5CcmkX5oA((&it), x);
			nimln_(71, "pathnorm.nim");
			{
				NIM_BOOL T14_;
				T14_ = (NIM_BOOL)0;
				T14_ = ((NI)((NI64)((*state)) >> (NU64)(((NI) 1))) == ((NI) 0));
				if (!(T14_)) goto LA15_;
				T14_ = isSlash__Sl9c33djPmHfV9bnZbQf0QBw(x, b);
				LA15_: ;
				if (!T14_) goto LA16_;
				nimln_(72, "pathnorm.nim");
				{
					NIM_BOOL T20_;
					NIM_CHAR T22_;
					T20_ = (NIM_BOOL)0;
					T20_ = (((*result) ? (*result)->Sup.len : 0) == ((NI) 0));
					if (T20_) goto LA21_;
					T22_ = (NIM_CHAR)0;
					T22_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
					T20_ = !((((NU8)(T22_)) == ((NU8)(47)) || ((NU8)(T22_)) == ((NU8)(47))));
					LA21_: ;
					if (!T20_) goto LA23_;
					nimln_(73, "pathnorm.nim");
					(*result) = addChar((*result), dirSep);
				}
				LA23_: ;
				nimln_(74, "pathnorm.nim");
				(*state) = (NI)((*state) | ((NI) 1));
			}
			goto LA12_;
			LA16_: ;
			{
				NIM_BOOL T26_;
				nimln_(75, "pathnorm.nim");
				T26_ = (NIM_BOOL)0;
				T26_ = isDotDot__Sl9c33djPmHfV9bnZbQf0QBw_2(x, b);
				if (!T26_) goto LA27_;
				nimln_(76, "pathnorm.nim");
				{
					NI d;
					if (!(((NI) 1) <= (NI)((NI64)((*state)) >> (NU64)(((NI) 1))))) goto LA31_;
					nimln_(77, "pathnorm.nim");
					d = ((*result) ? (*result)->Sup.len : 0);
					{
						nimln_(84, "pathnorm.nim");
						while (1) {
							NIM_BOOL T35_;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_10;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_11;
							NI TM__DfU0iuayCGwHDN1Exp9cbKg_12;
							T35_ = (NIM_BOOL)0;
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_10)) { raiseOverflow(); };
							T35_ = ((NI)((*state) & ((NI) 1)) < (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_10));
							if (!(T35_)) goto LA36_;
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_11)) { raiseOverflow(); };
							if ((NU)((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11)) >= (NU)((*result) ? (*result)->Sup.len : 0)){ raiseIndexError2((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11),((*result) ? (*result)->Sup.len : 0)-1); }
							T35_ = !((((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11)])) == ((NU8)(47)) || ((NU8)((*result)->data[(NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_11)])) == ((NU8)(47))));
							LA36_: ;
							if (!T35_) goto LA34;
							nimln_(85, "pathnorm.nim");
							if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_12)) { raiseOverflow(); };
							d = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_12);
						} LA34: ;
					}
					nimln_(86, "pathnorm.nim");
					{
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_13;
						NI TM__DfU0iuayCGwHDN1Exp9cbKg_14;
						if (!(((NI) 0) < d)) goto LA39_;
						nimln_(87, "pathnorm.nim");
						if (nimSubInt(d, ((NI) 1), &TM__DfU0iuayCGwHDN1Exp9cbKg_13)) { raiseOverflow(); };
						if (((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13)) < ((NI) 0) || ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13), ((NI) 0), ((NI) IL64(9223372036854775807))); }
						(*result) = setLengthStr((*result), ((NI) ((NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_13))));
						nimln_(88, "pathnorm.nim");
						if (nimSubInt((*state), ((NI) 2), &TM__DfU0iuayCGwHDN1Exp9cbKg_14)) { raiseOverflow(); };
						(*state) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_14);
					}
					LA39_: ;
				}
				goto LA29_;
				LA31_: ;
				{
					NimStringDesc* T49_;
					nimln_(90, "pathnorm.nim");
					{
						NIM_BOOL T44_;
						NIM_CHAR T46_;
						T44_ = (NIM_BOOL)0;
						T44_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
						if (!(T44_)) goto LA45_;
						T46_ = (NIM_CHAR)0;
						T46_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
						T44_ = !((((NU8)(T46_)) == ((NU8)(47)) || ((NU8)(T46_)) == ((NU8)(47))));
						LA45_: ;
						if (!T44_) goto LA47_;
						nimln_(91, "pathnorm.nim");
						(*result) = addChar((*result), dirSep);
					}
					LA47_: ;
					nimln_(92, "pathnorm.nim");
					T49_ = (NimStringDesc*)0;
					T49_ = substr__2yh9cer0ymNRHlOOg8P7IuA(x, b.Field0, b.Field1);
					(*result) = resizeString((*result), (T49_ ? T49_->Sup.len : 0) + 0);
appendString((*result), T49_);
				}
				LA29_: ;
			}
			goto LA12_;
			LA27_: ;
			{
				NIM_BOOL T51_;
				nimln_(93, "pathnorm.nim");
				T51_ = (NIM_BOOL)0;
				T51_ = isDot__Sl9c33djPmHfV9bnZbQf0QBw_3(x, b);
				if (!T51_) goto LA52_;
			}
			goto LA12_;
			LA52_: ;
			{
				NimStringDesc* T64_;
				NI TM__DfU0iuayCGwHDN1Exp9cbKg_15;
				nimln_(95, "pathnorm.nim");
				if (!(b.Field0 <= b.Field1)) goto LA55_;
				nimln_(96, "pathnorm.nim");
				{
					NIM_BOOL T59_;
					NIM_CHAR T61_;
					T59_ = (NIM_BOOL)0;
					T59_ = (((NI) 0) < ((*result) ? (*result)->Sup.len : 0));
					if (!(T59_)) goto LA60_;
					T61_ = (NIM_CHAR)0;
					T61_ = X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*result), ((NI) 1));
					T59_ = !((((NU8)(T61_)) == ((NU8)(47)) || ((NU8)(T61_)) == ((NU8)(47))));
					LA60_: ;
					if (!T59_) goto LA62_;
					nimln_(97, "pathnorm.nim");
					(*result) = addChar((*result), dirSep);
				}
				LA62_: ;
				nimln_(98, "pathnorm.nim");
				T64_ = (NimStringDesc*)0;
				T64_ = substr__2yh9cer0ymNRHlOOg8P7IuA(x, b.Field0, b.Field1);
				(*result) = resizeString((*result), (T64_ ? T64_->Sup.len : 0) + 0);
appendString((*result), T64_);
				nimln_(99, "pathnorm.nim");
				if (nimAddInt((*state), ((NI) 2), &TM__DfU0iuayCGwHDN1Exp9cbKg_15)) { raiseOverflow(); };
				(*state) = (NI)(TM__DfU0iuayCGwHDN1Exp9cbKg_15);
			}
			goto LA12_;
			LA55_: ;
			LA12_: ;
		} LA10: ;
	}
	nimln_(100, "pathnorm.nim");
	{
		NIM_BOOL T67_;
		T67_ = (NIM_BOOL)0;
		T67_ = (((*result) ? (*result)->Sup.len : 0) == 0);
		if (!(T67_)) goto LA68_;
		T67_ = !(((x ? x->Sup.len : 0) == 0));
		LA68_: ;
		if (!T67_) goto LA69_;
		(*result) = copyString(((NimStringDesc*) &TM__DfU0iuayCGwHDN1Exp9cbKg_16));
	}
	LA69_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, normalizePath__gol9aBbIZpJYUPc6xBOBJDQ)(NimStringDesc* path, NIM_CHAR dirSep) {
	NimStringDesc* result;
	NI state;
	nimfr_("normalizePath", "pathnorm.nim");
	result = (NimStringDesc*)0;
	nimln_(112, "pathnorm.nim");
	if (((path ? path->Sup.len : 0)) < ((NI) 0) || ((path ? path->Sup.len : 0)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((path ? path->Sup.len : 0), ((NI) 0), ((NI) IL64(9223372036854775807))); }
	result = rawNewString(((NI) ((path ? path->Sup.len : 0))));
	nimln_(113, "pathnorm.nim");
	state = ((NI) 0);
	nimln_(114, "pathnorm.nim");
	addNormalizePath__bx9csIXjBBeHkYSkIUixO1g(path, (&result), (&state), dirSep);
	popFrame();
	return result;
}