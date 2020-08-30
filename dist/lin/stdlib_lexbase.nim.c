/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -fmax-errors=3  -fPIC  -I'/home/juan/.choosenim/toolchains/nim-#devel/lib' -I/home/juan/code/faster-than-csv/src -o /home/juan/code/faster-than-csv/dist/lin/stdlib_lexbase.nim.c.o /home/juan/code/faster-than-csv/dist/lin/stdlib_lexbase.nim.c */
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
  #  define nimfr_(proc, file) \
      TFrame FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = 0; nimFrame(&FR_);

  #  define nimfrs_(proc, file, slots, length) \
      struct {TFrame* prev;NCSTRING procname;NI line;NCSTRING filename; NI len; VarSlot s[slots];} FR_; \
      FR_.procname = proc; FR_.filename = file; FR_.line = 0; FR_.len = length; nimFrame((TFrame*)&FR_);

  #  define nimln_(n, file) \
      FR_.line = n; FR_.filename = file;
  
/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;

/* section: NIM_merge_TYPES */
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(void, moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(NI, readDataStr__78VQwN48e7jIIL2Q9bINIFw_2)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s, NimStringDesc** buffer, tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA, dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a, NI b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(void, close__y1KA3B0U09bKtU09am9a9avRYQ_3)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_3, "lexbase.nim(137, 9) `bufLen > 0` ", 33);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_4, "lexbase.nim(138, 9) `input != nil` ", 35);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_7, "lexbase.nim(51, 9) `L.sentinel + 1 <= L.buf.len` ", 49);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_10, "lexbase.nim(53, 9) `toCopy >= 0` ", 33);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_18, "lexbase.nim(75, 13) `s < L.buf.len` ", 36);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_27, "lexbase.nim(107, 9) `L.buf[pos] == \'\\c\'` ", 41);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_29, "lexbase.nim(94, 9) `pos <= L.sentinel` ", 39);
STRING_LITERAL(TM__k6p5NxDJat9aTyZxfZjCDJQ_32, "lexbase.nim(118, 9) `L.buf[pos] == \'\\n\'` ", 41);
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__MAw8rJZtJ279bVV3TWMtXSg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__1G0jiQbe7KwD5ADza5AZaw_;
extern TNimType NTI__nmiMWKVIe46vacnhAFrQvw_;
N_LIB_PRIVATE TNimType NTI__HDqWPvEAxZK51ZcfaeQEdg_;

/* section: NIM_merge_VARS */
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;
extern TFrame* framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw;

/* section: NIM_merge_PROCS */
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
		if (!((*s).calldepth == ((NI16) 2000))) goto LA8_;
		callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw();
	}
	LA8_: ;
}
static N_INLINE(void, popFrame)(void) {
	framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr__HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_2;
	nimfr_("getColNumber", "lexbase.nim");
	result = (NI)0;
	nimln_(152, "lexbase.nim");
	if (nimSubInt(pos, (*L).lineStart, &TM__k6p5NxDJat9aTyZxfZjCDJQ_2)) { raiseOverflow(); };
	if ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2) == (IL64(-9223372036854775807) - IL64(1))){ raiseOverflow(); }
	result = ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2) > 0? ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2)) : -((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_2)));
	popFrame();
	return result;
}
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest, void* source, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memmove(dest, source, ((size_t) (size)));
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
	nimfr_("..", "system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	nimln_(474, "system.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
	result.a = a;
	result.b = b;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	NI charsRead;
	NI toCopy;
	NI s;
	NI oldBufLen;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_8;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_9;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T14_;
	NI T15_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_12;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_13;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_14;
	tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T16_;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_15;
	nimfr_("fillBuffer", "lexbase.nim");
	charsRead = (NI)0;
	toCopy = (NI)0;
	s = (NI)0;
	oldBufLen = (NI)0;
	nimln_(51, "lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_6;
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_6)) { raiseOverflow(); };
		if (!!(((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_6) <= ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_7));
	}
	LA3_: ;
	nimln_(52, "lexbase.nim");
	if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_8)) { raiseOverflow(); };
	if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_8), &TM__k6p5NxDJat9aTyZxfZjCDJQ_9)) { raiseOverflow(); };
	toCopy = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_9);
	nimln_(53, "lexbase.nim");
	{
		if (!!((((NI) 0) <= toCopy))) goto LA7_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_10));
	}
	LA7_: ;
	nimln_(54, "lexbase.nim");
	{
		void* T13_;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_11;
		if (!(((NI) 0) < toCopy)) goto LA11_;
		nimln_(65, "lexbase.nim");
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T13_ = (void*)0;
		T13_ = ((void*) ((&(*L).buf->data[((NI) 0)])));
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_11)) { raiseOverflow(); };
		if ((NU)((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if ((toCopy) < ((NI) 0) || (toCopy) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(toCopy, ((NI) 0), ((NI) IL64(9223372036854775807))); }
		moveMem__i80o3k0SgEI5gTRCzYdyWA_2system(T13_, ((void*) ((&(*L).buf->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_11)]))), ((NI) (toCopy)));
	}
	LA11_: ;
	nimln_(66, "lexbase.nim");
	T14_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
	T14_ = (*L).input;
	T15_ = (NI)0;
	T15_ = toCopy;
	nimln_(2427, "system.nim");
	nimln_(66, "lexbase.nim");
	if (nimAddInt(toCopy, (*L).sentinel, &TM__k6p5NxDJat9aTyZxfZjCDJQ_12)) { raiseOverflow(); };
	if (nimAddInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_12), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_13)) { raiseOverflow(); };
	if (nimSubInt((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_13), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_14)) { raiseOverflow(); };
	T16_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(T15_, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_14));
	charsRead = readDataStr__78VQwN48e7jIIL2Q9bINIFw_2(T14_, (&(*L).buf), T16_);
	nimln_(67, "lexbase.nim");
	if (nimAddInt(toCopy, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_15)) { raiseOverflow(); };
	s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_15);
	nimln_(68, "lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_16;
		if (nimAddInt((*L).sentinel, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_16)) { raiseOverflow(); };
		if (!(charsRead < (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_16))) goto LA19_;
		if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		nimln_(69, "lexbase.nim");
		(*L).buf->data[s] = 0;
		nimln_(70, "lexbase.nim");
		(*L).sentinel = s;
	}
	goto LA17_;
	LA19_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_17;
		nimln_(73, "lexbase.nim");
		if (nimSubInt(s, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_17)) { raiseOverflow(); };
		s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_17);
		{
			nimln_(74, "lexbase.nim");
			while (1) {
				nimln_(75, "lexbase.nim");
				{
					if (!!((s < ((*L).buf ? (*L).buf->Sup.len : 0)))) goto LA26_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_18));
				}
				LA26_: ;
				{
					nimln_(76, "lexbase.nim");
					while (1) {
						NIM_BOOL T30_;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_19;
						T30_ = (NIM_BOOL)0;
						T30_ = (((NI) 0) <= s);
						if (!(T30_)) goto LA31_;
						if ((NU)(s) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(s,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
						T30_ = !((((*L).refillChars[(NU)(((NU8)((*L).buf->data[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf->data[s])))&7U)))!=0));
						LA31_: ;
						if (!T30_) goto LA29;
						if (nimSubInt(s, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_19)) { raiseOverflow(); };
						s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_19);
					} LA29: ;
				}
				nimln_(77, "lexbase.nim");
				{
					if (!(((NI) 0) <= s)) goto LA34_;
					nimln_(79, "lexbase.nim");
					(*L).sentinel = s;
					nimln_(80, "lexbase.nim");
					goto LA22;
				}
				goto LA32_;
				LA34_: ;
				{
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_20;
					tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T37_;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_21;
					tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T38_;
					NI TM__k6p5NxDJat9aTyZxfZjCDJQ_24;
					nimln_(84, "lexbase.nim");
					oldBufLen = ((*L).buf ? (*L).buf->Sup.len : 0);
					nimln_(85, "lexbase.nim");
					if (nimMulInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 2), &TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) { raiseOverflow(); };
					if (((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) < ((NI) 0) || ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20)) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20), ((NI) 0), ((NI) IL64(9223372036854775807))); }
					(*L).buf = setLengthStr((*L).buf, ((NI) ((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_20))));
					nimln_(86, "lexbase.nim");
					T37_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
					T37_ = (*L).input;
					nimln_(2427, "system.nim");
					nimln_(86, "lexbase.nim");
					if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_21)) { raiseOverflow(); };
					T38_ = dotdot___BokNSDrKN1xmV1nA01G9brAsystem(oldBufLen, (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_21));
					charsRead = readDataStr__78VQwN48e7jIIL2Q9bINIFw_2(T37_, (&(*L).buf), T38_);
					nimln_(87, "lexbase.nim");
					{
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_22;
						NI TM__k6p5NxDJat9aTyZxfZjCDJQ_23;
						if (!(charsRead < oldBufLen)) goto LA41_;
						nimln_(88, "lexbase.nim");
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_22)) { raiseOverflow(); };
						if ((NU)((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2((NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
						(*L).buf->data[(NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_22)] = 0;
						nimln_(89, "lexbase.nim");
						if (nimAddInt(oldBufLen, charsRead, &TM__k6p5NxDJat9aTyZxfZjCDJQ_23)) { raiseOverflow(); };
						(*L).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_23);
						nimln_(90, "lexbase.nim");
						goto LA22;
					}
					LA41_: ;
					nimln_(91, "lexbase.nim");
					if (nimSubInt(((*L).buf ? (*L).buf->Sup.len : 0), ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_24)) { raiseOverflow(); };
					s = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_24);
				}
				LA32_: ;
			}
		} LA22: ;
	}
	LA17_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	nimfr_("skipUtf8Bom", "lexbase.nim");
	nimln_(130, "lexbase.nim");
	{
		NIM_BOOL T3_;
		NIM_BOOL T4_;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_25;
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_26;
		T3_ = (NIM_BOOL)0;
		T4_ = (NIM_BOOL)0;
		if ((NU)(((NI) 0)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 0),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T4_ = ((NU8)((*L).buf->data[((NI) 0)]) == (NU8)(239));
		if (!(T4_)) goto LA5_;
		if ((NU)(((NI) 1)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 1),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T4_ = ((NU8)((*L).buf->data[((NI) 1)]) == (NU8)(187));
		LA5_: ;
		T3_ = T4_;
		if (!(T3_)) goto LA6_;
		if ((NU)(((NI) 2)) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(((NI) 2),((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		T3_ = ((NU8)((*L).buf->data[((NI) 2)]) == (NU8)(191));
		LA6_: ;
		if (!T3_) goto LA7_;
		nimln_(131, "lexbase.nim");
		if (nimAddInt((*L).bufpos, ((NI) 3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_25)) { raiseOverflow(); };
		(*L).bufpos = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_25);
		nimln_(132, "lexbase.nim");
		if (nimAddInt((*L).lineStart, ((NI) 3), &TM__k6p5NxDJat9aTyZxfZjCDJQ_26)) { raiseOverflow(); };
		(*L).lineStart = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_26);
	}
	LA7_: ;
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, open__P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars) {
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_5;
	nimfr_("open", "lexbase.nim");
	nimln_(137, "lexbase.nim");
	{
		if (!!((((NI) 0) < bufLen))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_3));
	}
	LA3_: ;
	nimln_(138, "lexbase.nim");
	{
		if (!!(!((input == NIM_NIL)))) goto LA7_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_4));
	}
	LA7_: ;
	nimln_(139, "lexbase.nim");
	(*L).input = input;
	nimln_(140, "lexbase.nim");
	(*L).bufpos = ((NI) 0);
	nimln_(141, "lexbase.nim");
	(*L).offsetBase = ((NI) 0);
	nimln_(142, "lexbase.nim");
	nimCopyMem((void*)(*L).refillChars, (NIM_CONST void*)refillChars, 32);
	nimln_(143, "lexbase.nim");
	if ((bufLen) < ((NI) 0) || (bufLen) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(bufLen, ((NI) 0), ((NI) IL64(9223372036854775807))); }
	(*L).buf = mnewString(((NI) (bufLen)));
	nimln_(144, "lexbase.nim");
	if (nimSubInt(bufLen, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_5)) { raiseOverflow(); };
	(*L).sentinel = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_5);
	nimln_(145, "lexbase.nim");
	(*L).lineStart = ((NI) 0);
	nimln_(146, "lexbase.nim");
	(*L).lineNumber = ((NI) 1);
	nimln_(147, "lexbase.nim");
	fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
	nimln_(148, "lexbase.nim");
	skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2(L);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(NI, fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	nimfr_("fillBaseLexer", "lexbase.nim");
	result = (NI)0;
	nimln_(94, "lexbase.nim");
	{
		if (!!((pos <= (*L).sentinel))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_29));
	}
	LA3_: ;
	nimln_(95, "lexbase.nim");
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_30;
		if (!(pos < (*L).sentinel)) goto LA7_;
		nimln_(96, "lexbase.nim");
		if (nimAddInt(pos, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_30)) { raiseOverflow(); };
		result = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_30);
	}
	goto LA5_;
	LA7_: ;
	{
		NI TM__k6p5NxDJat9aTyZxfZjCDJQ_31;
		nimln_(98, "lexbase.nim");
		fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
		nimln_(99, "lexbase.nim");
		if (nimAddInt((*L).offsetBase, pos, &TM__k6p5NxDJat9aTyZxfZjCDJQ_31)) { raiseOverflow(); };
		(*L).offsetBase = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_31);
		nimln_(100, "lexbase.nim");
		(*L).bufpos = ((NI) 0);
		nimln_(101, "lexbase.nim");
		result = ((NI) 0);
	}
	LA5_: ;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_28;
	nimfr_("handleCR", "lexbase.nim");
	result = (NI)0;
	nimln_(107, "lexbase.nim");
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(13)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_27));
	}
	LA3_: ;
	nimln_(108, "lexbase.nim");
	if (nimAddInt((*L).lineNumber, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_28)) { raiseOverflow(); };
	(*L).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_28);
	nimln_(109, "lexbase.nim");
	result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	nimln_(110, "lexbase.nim");
	{
		if ((NU)(result) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(result,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (!((NU8)((*L).buf->data[result]) == (NU8)(10))) goto LA7_;
		nimln_(111, "lexbase.nim");
		result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, result);
	}
	LA7_: ;
	nimln_(112, "lexbase.nim");
	(*L).lineStart = result;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos) {
	NI result;
	NI TM__k6p5NxDJat9aTyZxfZjCDJQ_33;
	nimfr_("handleLF", "lexbase.nim");
	result = (NI)0;
	nimln_(118, "lexbase.nim");
	{
		if ((NU)(pos) >= (NU)((*L).buf ? (*L).buf->Sup.len : 0)){ raiseIndexError2(pos,((*L).buf ? (*L).buf->Sup.len : 0)-1); }
		if (!!(((NU8)((*L).buf->data[pos]) == (NU8)(10)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__k6p5NxDJat9aTyZxfZjCDJQ_32));
	}
	LA3_: ;
	nimln_(119, "lexbase.nim");
	if (nimAddInt((*L).lineNumber, ((NI) 1), &TM__k6p5NxDJat9aTyZxfZjCDJQ_33)) { raiseOverflow(); };
	(*L).lineNumber = (NI)(TM__k6p5NxDJat9aTyZxfZjCDJQ_33);
	nimln_(120, "lexbase.nim");
	result = fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L, pos);
	nimln_(121, "lexbase.nim");
	(*L).lineStart = result;
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__m9bpQUVeRkyuyv4zAGVgY9bw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L) {
	nimfr_("close", "lexbase.nim");
	nimln_(41, "lexbase.nim");
	close__y1KA3B0U09bKtU09am9a9avRYQ_3((*L).input);
	popFrame();
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_lexbaseDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[8];
static TNimNode TM__k6p5NxDJat9aTyZxfZjCDJQ_0[10];

/* section: NIM_merge_TYPE_INIT3 */
NTI__MAw8rJZtJ279bVV3TWMtXSg_.size = sizeof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTI__MAw8rJZtJ279bVV3TWMtXSg_.align = NIM_ALIGNOF(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTI__MAw8rJZtJ279bVV3TWMtXSg_.kind = 17;
NTI__MAw8rJZtJ279bVV3TWMtXSg_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[0] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, bufpos);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].name = "bufpos";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[1] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, buf);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].name = "buf";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[2] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, input);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ = (&NTI__1G0jiQbe7KwD5ADza5AZaw_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].name = "input";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[3] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, lineNumber);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].name = "lineNumber";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[4] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, sentinel);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].name = "sentinel";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[5] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, lineStart);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].name = "lineStart";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[6] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, offsetBase);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].name = "offsetBase";
TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[7] = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8];
NTI__HDqWPvEAxZK51ZcfaeQEdg_.size = sizeof(tySet_tyChar__nmiMWKVIe46vacnhAFrQvw);
NTI__HDqWPvEAxZK51ZcfaeQEdg_.align = NIM_ALIGNOF(tySet_tyChar__nmiMWKVIe46vacnhAFrQvw);
NTI__HDqWPvEAxZK51ZcfaeQEdg_.kind = 19;
NTI__HDqWPvEAxZK51ZcfaeQEdg_.base = (&NTI__nmiMWKVIe46vacnhAFrQvw_);
NTI__HDqWPvEAxZK51ZcfaeQEdg_.flags = 3;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9].len = 0; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9].kind = 0;
NTI__HDqWPvEAxZK51ZcfaeQEdg_.node = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind = 1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset = offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg, refillChars);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ = (&NTI__HDqWPvEAxZK51ZcfaeQEdg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].name = "refillChars";
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].len = 8; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind = 2; TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons = &TM__k6p5NxDJat9aTyZxfZjCDJQ_34_8[0];
NTI__MAw8rJZtJ279bVV3TWMtXSg_.node = &TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0];
}

