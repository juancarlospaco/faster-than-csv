/* Generated by Nim Compiler v1.2.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -fPIC  -I/home/juan/.choosenim/toolchains/nim-1.2.0/lib -I/home/juan/code/faster-than-csv/src -o /home/juan/code/faster-than-csv/dist/lin/stdlib_unicode.nim.c.o /home/juan/code/faster-than-csv/dist/lin/stdlib_unicode.nim.c */
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
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c);
static N_INLINE(NIM_BOOL, lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem)(NI32 x, NI32 y);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
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
N_LIB_PRIVATE N_NIMCALL(NI, nucruneLen)(NimStringDesc* s) {
	NI result;
	NI i;
	nimfr_("runeLen", "unicode.nim");
	result = (NI)0;
	nimln_(41, "unicode.nim");
	i = ((NI) 0);
	{
		nimln_(42, "unicode.nim");
		while (1) {
			NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_9;
			if (!(i < (s ? s->Sup.len : 0))) goto LA2;
			nimln_(43, "unicode.nim");
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU64)(((NU) (((NU8)(s->data[i]))))) <= (NU64)(((NU) 127)))) goto LA5_;
				if (nimAddInt(i, ((NI) 1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_2);
			}
			goto LA3_;
			LA5_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3;
				nimln_(44, "unicode.nim");
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 5))) == ((NU) 6))) goto LA8_;
				if (nimAddInt(i, ((NI) 2), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_3);
			}
			goto LA3_;
			LA8_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_4;
				nimln_(45, "unicode.nim");
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 4))) == ((NU) 14))) goto LA11_;
				if (nimAddInt(i, ((NI) 3), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_4)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_4);
			}
			goto LA3_;
			LA11_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_5;
				nimln_(46, "unicode.nim");
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 3))) == ((NU) 30))) goto LA14_;
				if (nimAddInt(i, ((NI) 4), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_5)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_5);
			}
			goto LA3_;
			LA14_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_6;
				nimln_(47, "unicode.nim");
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 2))) == ((NU) 62))) goto LA17_;
				if (nimAddInt(i, ((NI) 5), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_6)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_6);
			}
			goto LA3_;
			LA17_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_7;
				nimln_(48, "unicode.nim");
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				if (!((NU)((NU64)(((NU) (((NU8)(s->data[i]))))) >> (NU64)(((NI) 1))) == ((NU) 126))) goto LA20_;
				if (nimAddInt(i, ((NI) 6), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_7)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_7);
			}
			goto LA3_;
			LA20_: ;
			{
				NI TM__e1RUVS0Bw7xmj9cnDPXLJMQ_8;
				nimln_(49, "unicode.nim");
				if (nimAddInt(i, ((NI) 1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_8)) { raiseOverflow(); };
				i = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_8);
			}
			LA3_: ;
			nimln_(50, "unicode.nim");
			if (nimAddInt(result, ((NI) 1), &TM__e1RUVS0Bw7xmj9cnDPXLJMQ_9)) { raiseOverflow(); };
			result = (NI)(TM__e1RUVS0Bw7xmj9cnDPXLJMQ_9);
		} LA2: ;
	}
	popFrame();
	return result;
}
static N_INLINE(NIM_BOOL, lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem)(NI32 x, NI32 y) {
	NIM_BOOL result;
	nimfr_("<=%", "comparisons.nim");
	result = (NIM_BOOL)0;
	nimln_(184, "comparisons.nim");
	result = ((NU32)(((NU32) (x))) <= (NU32)(((NU32) (y))));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nuctoUTF8)(NI32 c) {
	NimStringDesc* result;
	NI32 iX60gensym27520461_;
	nimfr_("toUTF8", "unicode.nim");
	result = (NimStringDesc*)0;
	nimln_(264, "unicode.nim");
	result = ((NimStringDesc*) NIM_NIL);
	nimln_(209, "unicode.nim");
	iX60gensym27520461_ = c;
	nimln_(265, "unicode.nim");
	{
		NIM_BOOL T3_;
		nimln_(210, "unicode.nim");
		T3_ = (NIM_BOOL)0;
		T3_ = lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem(iX60gensym27520461_, ((NI32) 127));
		if (!T3_) goto LA4_;
		nimln_(211, "unicode.nim");
		result = setLengthStr(result, ((NI) 1));
		if ((NU)(((NI) 0)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 0),(result ? result->Sup.len : 0)-1); }
		nimln_(212, "unicode.nim");
		if ((iX60gensym27520461_) < ((NI) 0) || (iX60gensym27520461_) > ((NI) 255)){ raiseRangeErrorI(iX60gensym27520461_, ((NI) 0), ((NI) 255)); }
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) (iX60gensym27520461_))));
	}
	goto LA1_;
	LA4_: ;
	{
		NIM_BOOL T7_;
		nimln_(214, "unicode.nim");
		T7_ = (NIM_BOOL)0;
		T7_ = lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem(iX60gensym27520461_, ((NI32) 2047));
		if (!T7_) goto LA8_;
		nimln_(215, "unicode.nim");
		result = setLengthStr(result, ((NI) 2));
		if ((NU)(((NI) 0)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 0),(result ? result->Sup.len : 0)-1); }
		nimln_(216, "unicode.nim");
		if (((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) | ((NI32) 192))) < ((NI) 0) || ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) | ((NI32) 192))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) | ((NI32) 192)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) | ((NI32) 192))))));
		if ((NU)(((NI) 1)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 1),(result ? result->Sup.len : 0)-1); }
		nimln_(217, "unicode.nim");
		if (((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA8_: ;
	{
		NIM_BOOL T11_;
		nimln_(219, "unicode.nim");
		T11_ = (NIM_BOOL)0;
		T11_ = lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem(iX60gensym27520461_, ((NI32) 65535));
		if (!T11_) goto LA12_;
		nimln_(220, "unicode.nim");
		result = setLengthStr(result, ((NI) 3));
		if ((NU)(((NI) 0)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 0),(result ? result->Sup.len : 0)-1); }
		nimln_(221, "unicode.nim");
		if (((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) | ((NI32) 224))) < ((NI) 0) || ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) | ((NI32) 224))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) | ((NI32) 224)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) | ((NI32) 224))))));
		if ((NU)(((NI) 1)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 1),(result ? result->Sup.len : 0)-1); }
		nimln_(222, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 2)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 2),(result ? result->Sup.len : 0)-1); }
		nimln_(223, "unicode.nim");
		if (((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA12_: ;
	{
		NIM_BOOL T15_;
		nimln_(225, "unicode.nim");
		T15_ = (NIM_BOOL)0;
		T15_ = lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem(iX60gensym27520461_, ((NI32) 2097151));
		if (!T15_) goto LA16_;
		nimln_(226, "unicode.nim");
		result = setLengthStr(result, ((NI) 4));
		if ((NU)(((NI) 0)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 0),(result ? result->Sup.len : 0)-1); }
		nimln_(227, "unicode.nim");
		if (((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) | ((NI32) 240))) < ((NI) 0) || ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) | ((NI32) 240))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) | ((NI32) 240)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) | ((NI32) 240))))));
		if ((NU)(((NI) 1)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 1),(result ? result->Sup.len : 0)-1); }
		nimln_(228, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 2)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 2),(result ? result->Sup.len : 0)-1); }
		nimln_(229, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 3)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 3),(result ? result->Sup.len : 0)-1); }
		nimln_(230, "unicode.nim");
		if (((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA16_: ;
	{
		NIM_BOOL T19_;
		nimln_(232, "unicode.nim");
		T19_ = (NIM_BOOL)0;
		T19_ = lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem(iX60gensym27520461_, ((NI32) 67108863));
		if (!T19_) goto LA20_;
		nimln_(233, "unicode.nim");
		result = setLengthStr(result, ((NI) 5));
		if ((NU)(((NI) 0)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 0),(result ? result->Sup.len : 0)-1); }
		nimln_(234, "unicode.nim");
		if (((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) | ((NI32) 248))) < ((NI) 0) || ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) | ((NI32) 248))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) | ((NI32) 248)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) | ((NI32) 248))))));
		if ((NU)(((NI) 1)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 1),(result ? result->Sup.len : 0)-1); }
		nimln_(235, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 2)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 2),(result ? result->Sup.len : 0)-1); }
		nimln_(236, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 3)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 3),(result ? result->Sup.len : 0)-1); }
		nimln_(237, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 4)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 4),(result ? result->Sup.len : 0)-1); }
		nimln_(238, "unicode.nim");
		if (((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA20_: ;
	{
		NIM_BOOL T23_;
		nimln_(240, "unicode.nim");
		T23_ = (NIM_BOOL)0;
		T23_ = lteqpercent___x8ObPz55IkLprSyPyqBSRAsystem(iX60gensym27520461_, ((NI32) 2147483647));
		if (!T23_) goto LA24_;
		nimln_(241, "unicode.nim");
		result = setLengthStr(result, ((NI) 6));
		if ((NU)(((NI) 0)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 0),(result ? result->Sup.len : 0)-1); }
		nimln_(242, "unicode.nim");
		if (((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 30))) | ((NI32) 252))) < ((NI) 0) || ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 30))) | ((NI32) 252))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 30))) | ((NI32) 252)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 0)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 30))) | ((NI32) 252))))));
		if ((NU)(((NI) 1)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 1),(result ? result->Sup.len : 0)-1); }
		nimln_(243, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 1)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 24))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 2)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 2),(result ? result->Sup.len : 0)-1); }
		nimln_(244, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 2)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 18))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 3)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 3),(result ? result->Sup.len : 0)-1); }
		nimln_(245, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 3)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 12))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 4)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 4),(result ? result->Sup.len : 0)-1); }
		nimln_(246, "unicode.nim");
		if (((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 4)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)((NI32)((NI64)(iX60gensym27520461_) >> (NU64)(((NI) 6))) & ((NI32) 63)) | ((NI32) 128))))));
		if ((NU)(((NI) 5)) >= (NU)(result ? result->Sup.len : 0)){ raiseIndexError2(((NI) 5),(result ? result->Sup.len : 0)-1); }
		nimln_(247, "unicode.nim");
		if (((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) < ((NI) 0) || ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))) > ((NI) 255)){ raiseRangeErrorI((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128)), ((NI) 0), ((NI) 255)); }
		result->data[((NI) 5)] = ((NIM_CHAR) (((NI) ((NI32)((NI32)(iX60gensym27520461_ & ((NI32) 63)) | ((NI32) 128))))));
	}
	goto LA1_;
	LA24_: ;
	{
	}
	LA1_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___o9bkGgwDwjPpBbWEBHUdmsw)(NI32 rune) {
	NimStringDesc* result;
	nimfr_("$", "unicode.nim");
	result = (NimStringDesc*)0;
	nimln_(279, "unicode.nim");
	nimln_(284, "unicode.nim");
	result = nuctoUTF8(rune);
	popFrame();
	return result;
}
