/* Generated by Nim Compiler v1.2.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   /usr/bin/x86_64-w64-mingw32-gcc -c  -w -mno-ms-bitfields -DWIN32_LEAN_AND_MEAN   -I/home/juan/.choosenim/toolchains/nim-1.2.0/lib -I/home/juan/code/faster-than-csv/src -o /home/juan/code/faster-than-csv/dist/win/stdlib_parseutils.nim.c.o /home/juan/code/faster-than-csv/dist/win/stdlib_parseutils.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
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
typedef struct tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
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
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start);
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__oz568vhg7PZ19ak9aiwQxGYw)(NimStringDesc* s, NI64* b, NI start);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt64)(NI64 a, NI64 b, NI64* res);
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NIM_CHAR, toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils)(NIM_CHAR c);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
extern TNimType NTI__Ie1m0dv1ZHg72IgPRr1cDw_;
extern TNimType NTI__yoNlBGx0D2tRizIdhQuENw_;
STRING_LITERAL(TM__vI9aZNKIcImom6dDyKXW1ZA_9, "Parsed integer outside of valid range", 37);
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
static N_INLINE(NIM_BOOL, nimDivInt64)(NI64 a, NI64 b, NI64* res) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(T3_)) goto LA4_;
		T3_ = (b == IL64(-1));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA5_: ;
	{
		(*res) = (NI64)(a / b);
	}
	LA1_: ;
	return result;
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
N_LIB_PRIVATE N_NOINLINE(void, integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig)(void) {
	tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw* T1_;
	nimfr_("integerOutOfRangeError", "parseutils.nim");
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*)0;
	T1_ = (tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw*) newObj((&NTI__Ie1m0dv1ZHg72IgPRr1cDw_), sizeof(tyObject_ValueError__yoNlBGx0D2tRizIdhQuENw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTI__yoNlBGx0D2tRizIdhQuENw_);
	(*T1_).Sup.Sup.name = "ValueError";
	(*T1_).Sup.Sup.message = copyString(((NimStringDesc*) &TM__vI9aZNKIcImom6dDyKXW1ZA_9));
	(*T1_).Sup.Sup.parent = NIM_NIL;
	nimln_(397, "parseutils.nim");
	raiseExceptionEx((Exception*)T1_, "ValueError", "integerOutOfRangeError", "parseutils.nim", 397);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, rawParseInt__oz568vhg7PZ19ak9aiwQxGYw)(NimStringDesc* s, NI64* b, NI start) {
	NI result;
	NI64 sign;
	NI i;
	nimfr_("rawParseInt", "parseutils.nim");
	result = (NI)0;
	nimln_(405, "parseutils.nim");
	sign = IL64(-1);
	nimln_(406, "parseutils.nim");
	i = start;
	nimln_(407, "parseutils.nim");
	{
		if (!(i < (s ? s->Sup.len : 0))) goto LA3_;
		nimln_(408, "parseutils.nim");
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_2;
			if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
			if (!((NU8)(s->data[i]) == (NU8)(43))) goto LA7_;
			if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_2)) { raiseOverflow(); };
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_2);
		}
		goto LA5_;
		LA7_: ;
		{
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_3;
			nimln_(409, "parseutils.nim");
			if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
			if (!((NU8)(s->data[i]) == (NU8)(45))) goto LA10_;
			nimln_(410, "parseutils.nim");
			if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_3)) { raiseOverflow(); };
			i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_3);
			nimln_(411, "parseutils.nim");
			sign = IL64(1);
		}
		goto LA5_;
		LA10_: ;
		LA5_: ;
	}
	LA3_: ;
	nimln_(412, "parseutils.nim");
	{
		NIM_BOOL T14_;
		T14_ = (NIM_BOOL)0;
		T14_ = (i < (s ? s->Sup.len : 0));
		if (!(T14_)) goto LA15_;
		if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
		T14_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
		LA15_: ;
		if (!T14_) goto LA16_;
		nimln_(413, "parseutils.nim");
		(*b) = IL64(0);
		{
			nimln_(414, "parseutils.nim");
			while (1) {
				NIM_BOOL T20_;
				NI c;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_4;
				NI TM__vI9aZNKIcImom6dDyKXW1ZA_10;
				T20_ = (NIM_BOOL)0;
				T20_ = (i < (s ? s->Sup.len : 0));
				if (!(T20_)) goto LA21_;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				T20_ = (((NU8)(s->data[i])) >= ((NU8)(48)) && ((NU8)(s->data[i])) <= ((NU8)(57)));
				LA21_: ;
				if (!T20_) goto LA19;
				nimln_(415, "parseutils.nim");
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (nimSubInt(((NU8)(s->data[i])), ((NI) 48), &TM__vI9aZNKIcImom6dDyKXW1ZA_4)) { raiseOverflow(); };
				c = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_4);
				nimln_(416, "parseutils.nim");
				{
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_5;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_6;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_7;
					NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_8;
					if (nimAddInt64((IL64(-9223372036854775807) - IL64(1)), ((NI64) (c)), &TM__vI9aZNKIcImom6dDyKXW1ZA_5)) { raiseOverflow(); };
					if (IL64(10) == 0){ raiseDivByZero(); }
					if (nimDivInt64((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_5), IL64(10), &TM__vI9aZNKIcImom6dDyKXW1ZA_6)) { raiseOverflow(); };
					if (!((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_6) <= (*b))) goto LA24_;
					nimln_(417, "parseutils.nim");
					if (nimMulInt64((*b), IL64(10), &TM__vI9aZNKIcImom6dDyKXW1ZA_7)) { raiseOverflow(); };
					if (nimSubInt64((NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_7), ((NI64) (c)), &TM__vI9aZNKIcImom6dDyKXW1ZA_8)) { raiseOverflow(); };
					(*b) = (NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_8);
				}
				goto LA22_;
				LA24_: ;
				{
					nimln_(419, "parseutils.nim");
					integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
				}
				LA22_: ;
				nimln_(420, "parseutils.nim");
				if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_10)) { raiseOverflow(); };
				i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_10);
				{
					nimln_(421, "parseutils.nim");
					while (1) {
						NIM_BOOL T29_;
						NI TM__vI9aZNKIcImom6dDyKXW1ZA_11;
						T29_ = (NIM_BOOL)0;
						T29_ = (i < (s ? s->Sup.len : 0));
						if (!(T29_)) goto LA30_;
						if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
						T29_ = ((NU8)(s->data[i]) == (NU8)(95));
						LA30_: ;
						if (!T29_) goto LA28;
						if (nimAddInt(i, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_11)) { raiseOverflow(); };
						i = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_11);
					} LA28: ;
				}
			} LA19: ;
		}
		nimln_(422, "parseutils.nim");
		{
			NIM_BOOL T33_;
			T33_ = (NIM_BOOL)0;
			T33_ = (sign == IL64(-1));
			if (!(T33_)) goto LA34_;
			T33_ = ((*b) == (IL64(-9223372036854775807) - IL64(1)));
			LA34_: ;
			if (!T33_) goto LA35_;
			nimln_(423, "parseutils.nim");
			integerOutOfRangeError__urgsblG9a8f3sSX4FE53fig();
		}
		goto LA31_;
		LA35_: ;
		{
			NI64 TM__vI9aZNKIcImom6dDyKXW1ZA_12;
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_13;
			nimln_(425, "parseutils.nim");
			if (nimMulInt64((*b), sign, &TM__vI9aZNKIcImom6dDyKXW1ZA_12)) { raiseOverflow(); };
			(*b) = (NI64)(TM__vI9aZNKIcImom6dDyKXW1ZA_12);
			nimln_(426, "parseutils.nim");
			if (nimSubInt(i, start, &TM__vI9aZNKIcImom6dDyKXW1ZA_13)) { raiseOverflow(); };
			result = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_13);
		}
		LA31_: ;
	}
	LA16_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseBiggestInt)(NimStringDesc* s, NI64* number, NI start) {
	NI result;
	NI64 res;
	nimfr_("parseBiggestInt", "parseutils.nim");
	result = (NI)0;
	res = (NI64)0;
	nimln_(443, "parseutils.nim");
	result = rawParseInt__oz568vhg7PZ19ak9aiwQxGYw(s, (&res), start);
	nimln_(444, "parseutils.nim");
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		nimln_(445, "parseutils.nim");
		(*number) = res;
	}
	LA3_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, npuParseInt)(NimStringDesc* s, NI* number, NI start) {
	NI result;
	NI64 res;
	nimfr_("parseInt", "parseutils.nim");
	result = (NI)0;
	res = (NI64)0;
	nimln_(459, "parseutils.nim");
	result = npuParseBiggestInt(s, (&res), start);
	nimln_(463, "parseutils.nim");
	{
		if (!!((result == ((NI) 0)))) goto LA3_;
		nimln_(464, "parseutils.nim");
		(*number) = ((NI) (res));
	}
	LA3_: ;
	popFrame();
	return result;
}
static N_INLINE(NIM_CHAR, toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils)(NIM_CHAR c) {
	NIM_CHAR result;
	nimfr_("toLower", "parseutils.nim");
	result = (NIM_CHAR)0;
	nimln_(60, "parseutils.nim");
	{
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_15;
		NI TM__vI9aZNKIcImom6dDyKXW1ZA_16;
		if (!(((NU8)(c)) >= ((NU8)(65)) && ((NU8)(c)) <= ((NU8)(90)))) goto LA3_;
		if (nimSubInt(((NU8)(c)), ((NI) 65), &TM__vI9aZNKIcImom6dDyKXW1ZA_15)) { raiseOverflow(); };
		if (nimAddInt((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_15), ((NI) 97), &TM__vI9aZNKIcImom6dDyKXW1ZA_16)) { raiseOverflow(); };
		if (((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_16)) < ((NI) 0) || ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_16)) > ((NI) 255)){ raiseRangeErrorI((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_16), ((NI) 0), ((NI) 255)); }
		result = ((NIM_CHAR) (((NI) ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_16)))));
	}
	goto LA1_;
	LA3_: ;
	{
		result = c;
	}
	LA1_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, skipIgnoreCase__Z630VYBL4pZDWlOyn05K5w)(NimStringDesc* s, NimStringDesc* token, NI start) {
	NI result;
	nimfr_("skipIgnoreCase", "parseutils.nim");
	result = (NI)0;
	{
		nimln_(273, "parseutils.nim");
		while (1) {
			NIM_BOOL T3_;
			NIM_BOOL T4_;
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_14;
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_17;
			NIM_CHAR T7_;
			NIM_CHAR T8_;
			NI TM__vI9aZNKIcImom6dDyKXW1ZA_18;
			T3_ = (NIM_BOOL)0;
			T4_ = (NIM_BOOL)0;
			if (nimAddInt(start, result, &TM__vI9aZNKIcImom6dDyKXW1ZA_14)) { raiseOverflow(); };
			T4_ = ((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_14) < (s ? s->Sup.len : 0));
			if (!(T4_)) goto LA5_;
			T4_ = (result < (token ? token->Sup.len : 0));
			LA5_: ;
			T3_ = T4_;
			if (!(T3_)) goto LA6_;
			nimln_(274, "parseutils.nim");
			if (nimAddInt(result, start, &TM__vI9aZNKIcImom6dDyKXW1ZA_17)) { raiseOverflow(); };
			if ((NU)((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_17)) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2((NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_17),(s ? s->Sup.len : 0)-1); }
			T7_ = (NIM_CHAR)0;
			T7_ = toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils(s->data[(NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_17)]);
			if ((NU)(result) >= (NU)(token ? token->Sup.len : 0)){ raiseIndexError2(result,(token ? token->Sup.len : 0)-1); }
			T8_ = (NIM_CHAR)0;
			T8_ = toLower__eK9b2e49aPf4wAIdUwhbmZsQparseutils(token->data[result]);
			T3_ = ((NU8)(T7_) == (NU8)(T8_));
			LA6_: ;
			if (!T3_) goto LA2;
			if (nimAddInt(result, ((NI) 1), &TM__vI9aZNKIcImom6dDyKXW1ZA_18)) { raiseOverflow(); };
			result = (NI)(TM__vI9aZNKIcImom6dDyKXW1ZA_18);
		} LA2: ;
	}
	nimln_(275, "parseutils.nim");
	{
		if (!!((result == (token ? token->Sup.len : 0)))) goto LA11_;
		result = ((NI) 0);
	}
	LA11_: ;
	popFrame();
	return result;
}