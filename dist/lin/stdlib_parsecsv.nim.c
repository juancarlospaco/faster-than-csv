/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <stdio.h>
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
typedef struct tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ;
typedef struct tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg;
typedef struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
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
struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw {
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
};
struct tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw {
  tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw Sup;
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
struct tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw {
  tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg Sup;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* row;
NimStringDesc* filename;
NIM_CHAR sep;
NIM_CHAR quote;
NIM_CHAR esc;
NIM_BOOL skipWhite;
NI currRow;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* headers;
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
struct tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ {
  tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ Sup;
FILE* f;
};
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA {
NI a;
NI b;
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ*, newFileStream__cwYJiP3D7DOTCJxCdBqBZQ)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, error__f9crHXb9bbHrCy0OT6soYNKg)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI pos, NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, raiseEInvalidCsv__oc6YUSPHm4LfyH6RkE9c7Mw)(NimStringDesc* filename, NI line, NI col, NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__iCpSBrfwInduIhD9a0cvmIw)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(NI, getColNumber__KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void, open__u368GCTtl0rTy2J0zni8uw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NimStringDesc* filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace);
N_LIB_PRIVATE N_NIMCALL(void, open__P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NI bufLen, tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readRow__b09aWQWdQLmOgKmRBW0eKTQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI columns);
N_LIB_PRIVATE N_NIMCALL(NI, handleCR__sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(NI, handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L, NI pos);
N_LIB_PRIVATE N_NIMCALL(TGenericSeq*, setLengthSeqV2)(TGenericSeq* s, TNimType* typ, NI newLen);
N_LIB_PRIVATE N_NIMCALL(void, parseField__6mfYg4gHtbgPqGUu2wyijQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringDesc** a);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(void, genericSeqAssign)(void* dest, void* src, TNimType* mt);
static N_INLINE(NI, find__ZFKPMFh1RWpGOSS69c9a5CHAsystem)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a, NimStringDesc* item);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size);
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size);
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
N_LIB_PRIVATE TNimType NTI__F6ONStXzG2u7i8uj6UG9aiw_;
N_LIB_PRIVATE TNimType NTI__iCpSBrfwInduIhD9a0cvmIw_;
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_2, "Error: ", 7);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_3, "(", 1);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_4, ", ", 2);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_5, ") Error: ", 9);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_6, "cannot open: ", 13);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__3rBY6NOHI29c34PPPPzLAdQ_7 = {
0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
;
extern TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_8, " expected", 9);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_9, "\012", 1);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_10, " columns expected, but found ", 29);
STRING_LITERAL(TM__3rBY6NOHI29c34PPPPzLAdQ_11, " columns", 8);
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
static N_NIMCALL(void, Marker_tyRef__iCpSBrfwInduIhD9a0cvmIw)(void* p, NI op) {
	tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw* a;
	a = (tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw*)p;
	nimGCvisit((void*)(*a).Sup.Sup.Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.message, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.trace, op);
	nimGCvisit((void*)(*a).Sup.Sup.Sup.up, op);
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
N_LIB_PRIVATE N_NIMCALL(void, raiseEInvalidCsv__oc6YUSPHm4LfyH6RkE9c7Mw)(NimStringDesc* filename, NI line, NI col, NimStringDesc* msg) {
	tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw* e;
{	e = (tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw*)0;
	e = (tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw*) newObj((&NTI__iCpSBrfwInduIhD9a0cvmIw_), sizeof(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw));
	(*e).Sup.Sup.Sup.Sup.m_type = (&NTI__F6ONStXzG2u7i8uj6UG9aiw_);
	(*e).Sup.Sup.Sup.name = "CsvError";
	{
		NimStringDesc* T5_;
		if (!((filename ? filename->Sup.len : 0) == ((NI) 0))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = rawNewString((msg ? msg->Sup.len : 0) + 7);
appendString(T5_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_2));
appendString(T5_, msg);
		(*e).Sup.Sup.Sup.message = T5_;
	}
	goto LA1_;
	LA3_: ;
	{
		NimStringDesc* T7_;
		NimStringDesc* T8_;
		NimStringDesc* T9_;
		T7_ = (NimStringDesc*)0;
		T8_ = (NimStringDesc*)0;
		T8_ = nimIntToStr(line);
		T9_ = (NimStringDesc*)0;
		T9_ = nimIntToStr(col);
		T7_ = rawNewString((filename ? filename->Sup.len : 0) + (T8_ ? T8_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + (msg ? msg->Sup.len : 0) + 12);
appendString(T7_, filename);
appendString(T7_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_3));
appendString(T7_, T8_);
appendString(T7_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_4));
appendString(T7_, T9_);
appendString(T7_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_5));
appendString(T7_, msg);
		(*e).Sup.Sup.Sup.message = T7_;
	}
	LA1_: ;
	raiseExceptionEx((Exception*)e, "CsvError", "raiseEInvalidCsv", "parsecsv.nim", 98);
	goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, error__f9crHXb9bbHrCy0OT6soYNKg)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI pos, NimStringDesc* msg) {
	NI T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (NI)0;
	T1_ = getColNumber__KUMaHICF9bUPO7tt6hrBs3g((&(*my).Sup), pos);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	raiseEInvalidCsv__oc6YUSPHm4LfyH6RkE9c7Mw((*my).filename, (*my).Sup.lineNumber, T1_, msg);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__u368GCTtl0rTy2J0zni8uw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input, NimStringDesc* filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace) {
	tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	T1_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
	T1_ = &my->Sup;
	open__P89aGatd6bDNJ0Ak5E9cQgWw(T1_, input, ((NI) 8192), TM__3rBY6NOHI29c34PPPPzLAdQ_7);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*my).filename = copyString(filename);
	(*my).sep = separator;
	(*my).quote = quote;
	(*my).esc = escape;
	(*my).skipWhite = skipInitialSpace;
	(*my).row = NIM_NIL;
	(*my).currRow = ((NI) 0);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, open__Vgw0zlgAfMha09cLjvmwOUg)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringDesc* filename, NIM_CHAR separator, NIM_CHAR quote, NIM_CHAR escape, NIM_BOOL skipInitialSpace) {
	tyObject_FileStreamObj__9bEVSsOIpkY9cf5lCtaS39bPQ* s;
	tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	s = newFileStream__cwYJiP3D7DOTCJxCdBqBZQ(filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NimStringDesc* T5_;
		if (!(s == NIM_NIL)) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T5_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_6));
appendString(T5_, filename);
		error__f9crHXb9bbHrCy0OT6soYNKg((&(*my)), ((NI) 0), T5_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	T6_ = (tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
	T6_ = &s->Sup;
	open__u368GCTtl0rTy2J0zni8uw(my, T6_, filename, separator, quote, escape, skipInitialSpace);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {
	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(void, parseField__6mfYg4gHtbgPqGUu2wyijQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringDesc** a) {
	NI pos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	pos = (*my).Sup.bufpos;
	{
		if (!(*my).skipWhite) goto LA3_;
		{
			while (1) {
				if (!(((NU8)((*my).Sup.buf->data[pos])) == ((NU8)(32)) || ((NU8)((*my).Sup.buf->data[pos])) == ((NU8)(9)))) goto LA6;
				pos += ((NI) 1);
			} LA6: ;
		}
	}
	LA3_: ;
	(*a) = setLengthStr((*a), ((NI) 0));
	{
		NIM_BOOL T9_;
		T9_ = (NIM_BOOL)0;
		T9_ = ((NU8)((*my).Sup.buf->data[pos]) == (NU8)((*my).quote));
		if (!(T9_)) goto LA10_;
		T9_ = !(((NU8)((*my).quote) == (NU8)(0)));
		LA10_: ;
		if (!T9_) goto LA11_;
		pos += ((NI) 1);
		{
			while (1) {
				NIM_CHAR c;
				c = (*my).Sup.buf->data[pos];
				{
					NimStringDesc* T19_;
					if (!((NU8)(c) == (NU8)(0))) goto LA17_;
					(*my).Sup.bufpos = pos;
					T19_ = (NimStringDesc*)0;
					T19_ = rawNewString(10);
appendChar(T19_, (*my).quote);
appendString(T19_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_8));
					error__f9crHXb9bbHrCy0OT6soYNKg((&(*my)), pos, T19_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					goto LA13;
				}
				goto LA15_;
				LA17_: ;
				{
					if (!((NU8)(c) == (NU8)((*my).quote))) goto LA21_;
					{
						NIM_BOOL T25_;
						T25_ = (NIM_BOOL)0;
						T25_ = ((NU8)((*my).esc) == (NU8)(0));
						if (!(T25_)) goto LA26_;
						T25_ = ((NU8)((*my).Sup.buf->data[(NI)(pos + ((NI) 1))]) == (NU8)((*my).quote));
						LA26_: ;
						if (!T25_) goto LA27_;
						(*a) = addChar((*a), (*my).quote);
						pos += ((NI) 2);
					}
					goto LA23_;
					LA27_: ;
					{
						pos += ((NI) 1);
						goto LA13;
					}
					LA23_: ;
				}
				goto LA15_;
				LA21_: ;
				{
					if (!((NU8)(c) == (NU8)((*my).esc))) goto LA31_;
					(*a) = addChar((*a), (*my).Sup.buf->data[(NI)(pos + ((NI) 1))]);
					pos += ((NI) 2);
				}
				goto LA15_;
				LA31_: ;
				{
					switch (((NU8)(c))) {
					case 13:
					{
						tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T35_;
						T35_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
						T35_ = &my->Sup;
						pos = handleCR__sLQC1Z9cokufE3lZEw9b42Cw(T35_, pos);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						(*a) = resizeString((*a), 1);
appendString((*a), ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_9));
					}
					break;
					case 10:
					{
						tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T37_;
						T37_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
						T37_ = &my->Sup;
						pos = handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3(T37_, pos);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						(*a) = resizeString((*a), 1);
appendString((*a), ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_9));
					}
					break;
					default:
					{
						(*a) = addChar((*a), c);
						pos += ((NI) 1);
					}
					break;
					}
				}
				LA15_: ;
			}
		} LA13: ;
	}
	goto LA7_;
	LA11_: ;
	{
		{
			while (1) {
				NIM_CHAR c_2;
				c_2 = (*my).Sup.buf->data[pos];
				{
					if (!((NU8)(c_2) == (NU8)((*my).sep))) goto LA44_;
					goto LA40;
				}
				LA44_: ;
				{
					if (!(((NU8)(c_2)) == ((NU8)(13)) || ((NU8)(c_2)) == ((NU8)(10)) || ((NU8)(c_2)) == ((NU8)(0)))) goto LA48_;
					goto LA40;
				}
				LA48_: ;
				(*a) = addChar((*a), c_2);
				pos += ((NI) 1);
			}
		} LA40: ;
	}
	LA7_: ;
	(*my).Sup.bufpos = pos;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readRow__b09aWQWdQLmOgKmRBW0eKTQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NI columns) {
	NIM_BOOL result;
	NI col;
	NI oldpos;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	col = ((NI) 0);
	oldpos = (*my).Sup.bufpos;
	{
		while (1) {
			switch (((NU8)((*my).Sup.buf->data[(*my).Sup.bufpos]))) {
			case 13:
			{
				tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T4_;
				NI T5_;
				T4_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
				T4_ = &my->Sup;
				T5_ = (NI)0;
				T5_ = handleCR__sLQC1Z9cokufE3lZEw9b42Cw(T4_, (*my).Sup.bufpos);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				(*my).Sup.bufpos = T5_;
			}
			break;
			case 10:
			{
				tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T7_;
				NI T8_;
				T7_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
				T7_ = &my->Sup;
				T8_ = (NI)0;
				T8_ = handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3(T7_, (*my).Sup.bufpos);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				(*my).Sup.bufpos = T8_;
			}
			break;
			default:
			{
				goto LA1;
			}
			break;
			}
		}
	} LA1: ;
	{
		while (1) {
			NI oldlen;
			NI T12_;
			if (!!(((NU8)((*my).Sup.buf->data[(*my).Sup.bufpos]) == (NU8)(0)))) goto LA11;
			T12_ = ((*my).row ? (*my).row->Sup.len : 0);
			oldlen = T12_;
			{
				if (!(oldlen < (NI)(col + ((NI) 1)))) goto LA15_;
				(*my).row = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) setLengthSeqV2(&((*my).row)->Sup, (&NTI__sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) ((NI)(col + ((NI) 1)))));
				(*my).row->data[col] = ((NimStringDesc*) NIM_NIL);
			}
			LA15_: ;
			parseField__6mfYg4gHtbgPqGUu2wyijQ(my, (&(*my).row->data[col]));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			col += ((NI) 1);
			{
				if (!((NU8)((*my).Sup.buf->data[(*my).Sup.bufpos]) == (NU8)((*my).sep))) goto LA19_;
				(*my).Sup.bufpos += ((NI) 1);
			}
			goto LA17_;
			LA19_: ;
			{
				switch (((NU8)((*my).Sup.buf->data[(*my).Sup.bufpos]))) {
				case 13:
				case 10:
				{
					{
						while (1) {
							switch (((NU8)((*my).Sup.buf->data[(*my).Sup.bufpos]))) {
							case 13:
							{
								tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T26_;
								NI T27_;
								T26_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
								T26_ = &my->Sup;
								T27_ = (NI)0;
								T27_ = handleCR__sLQC1Z9cokufE3lZEw9b42Cw(T26_, (*my).Sup.bufpos);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								(*my).Sup.bufpos = T27_;
							}
							break;
							case 10:
							{
								tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* T29_;
								NI T30_;
								T29_ = (tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg*)0;
								T29_ = &my->Sup;
								T30_ = (NI)0;
								T30_ = handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3(T29_, (*my).Sup.bufpos);
								if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
								(*my).Sup.bufpos = T30_;
							}
							break;
							default:
							{
								goto LA23;
							}
							break;
							}
						}
					} LA23: ;
				}
				break;
				case 0:
				{
				}
				break;
				default:
				{
					NimStringDesc* T34_;
					T34_ = (NimStringDesc*)0;
					T34_ = rawNewString(10);
appendChar(T34_, (*my).sep);
appendString(T34_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_8));
					error__f9crHXb9bbHrCy0OT6soYNKg((&(*my)), (*my).Sup.bufpos, T34_);
					if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				}
				break;
				}
				goto LA10;
			}
			LA17_: ;
		} LA11: ;
	} LA10: ;
	(*my).row = (tySequence__sM4lkSb7zS6F7OVMvW9cffQ*) setLengthSeqV2(&((*my).row)->Sup, (&NTI__sM4lkSb7zS6F7OVMvW9cffQ_), ((NI) (col)));
	result = (((NI) 0) < col);
	{
		NIM_BOOL T37_;
		NIM_BOOL T38_;
		NimStringDesc* T43_;
		NimStringDesc* T44_;
		NimStringDesc* T45_;
		T37_ = (NIM_BOOL)0;
		T38_ = (NIM_BOOL)0;
		T38_ = result;
		if (!(T38_)) goto LA39_;
		T38_ = !((col == columns));
		LA39_: ;
		T37_ = T38_;
		if (!(T37_)) goto LA40_;
		T37_ = (((NI) 0) < columns);
		LA40_: ;
		if (!T37_) goto LA41_;
		T43_ = (NimStringDesc*)0;
		T44_ = (NimStringDesc*)0;
		T44_ = nimIntToStr(columns);
		T45_ = (NimStringDesc*)0;
		T45_ = nimIntToStr(col);
		T43_ = rawNewString((T44_ ? T44_->Sup.len : 0) + (T45_ ? T45_->Sup.len : 0) + 37);
appendString(T43_, T44_);
appendString(T43_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_10));
appendString(T43_, T45_);
appendString(T43_, ((NimStringDesc*) &TM__3rBY6NOHI29c34PPPPzLAdQ_11));
		error__f9crHXb9bbHrCy0OT6soYNKg((&(*my)), (NI)(oldpos + ((NI) 1)), T43_);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA41_: ;
	(*my).currRow += ((NI) 1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, readHeaderRow__09aUIMwOh18Laer41V7EdAw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my) {
	NIM_BOOL present;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	present = readRow__b09aWQWdQLmOgKmRBW0eKTQ(my, ((NI) 0));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		if (!present) goto LA3_;
		genericSeqAssign((&(*my).headers), (*my).row, (&NTI__sM4lkSb7zS6F7OVMvW9cffQ_));
	}
	LA3_: ;
	}BeforeRet_: ;
}
static N_INLINE(int, nimCmpMem)(void* a, void* b, NI size) {
	int result;
	result = (int)0;
	result = memcmp(a, b, ((size_t) (size)));
	return result;
}
static N_INLINE(NIM_BOOL, equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem)(void* a, void* b, NI size) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = nimCmpMem(a, b, size);
	result = (T1_ == ((NI32) 0));
	return result;
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NI alen;
	NI blen;
{	result = (NIM_BOOL)0;
	alen = (a ? a->Sup.len : 0);
	blen = (b ? b->Sup.len : 0);
	{
		if (!(alen == blen)) goto LA3_;
		{
			if (!(alen == ((NI) 0))) goto LA7_;
			result = NIM_TRUE;
			goto BeforeRet_;
		}
		LA7_: ;
		result = equalMem__9bGgqEk7RXXl6eqM9c1HdELAsystem(((void*) ((&a->data[((NI) 0)]))), ((void*) ((&b->data[((NI) 0)]))), ((NI) (alen)));
		goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NI, find__ZFKPMFh1RWpGOSS69c9a5CHAsystem)(tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a, NimStringDesc* item) {
	NI result;
{	result = (NI)0;
	{
		NimStringDesc* i;
		NI i_2;
		NI L;
		NI T2_;
		i = (NimStringDesc*)0;
		i_2 = ((NI) 0);
		T2_ = (a ? a->Sup.len : 0);
		L = T2_;
		{
			while (1) {
				if (!(i_2 < L)) goto LA4;
				i = a->data[i_2];
				{
					if (!eqStrings(i, item)) goto LA7_;
					goto BeforeRet_;
				}
				LA7_: ;
				result += ((NI) 1);
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
	result = ((NI) -1);
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc**, rowEntry__iSnSJzyyzosqzYvzg3RnzQ)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my, NimStringDesc* entry) {
	NimStringDesc** result;
	NI index;
	result = (NimStringDesc**)0;
	index = find__ZFKPMFh1RWpGOSS69c9a5CHAsystem((*my).headers, entry);
	{
		if (!(((NI) 0) <= index)) goto LA3_;
		result = (&(*my).row->data[index]);
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, processedRows__00gniKnRH4BwlOFNHExbvw)(tyObject_CsvParser__Db2TWjG9cPe5dYnhFvawyIw* my) {
	NI result;
{	result = (NI)0;
	result = (*my).currRow;
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_parsecsvDatInit000)(void) {
static TNimNode TM__3rBY6NOHI29c34PPPPzLAdQ_0[1];
NTI__F6ONStXzG2u7i8uj6UG9aiw_.size = sizeof(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw);
NTI__F6ONStXzG2u7i8uj6UG9aiw_.kind = 17;
NTI__F6ONStXzG2u7i8uj6UG9aiw_.base = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
TM__3rBY6NOHI29c34PPPPzLAdQ_0[0].len = 0; TM__3rBY6NOHI29c34PPPPzLAdQ_0[0].kind = 2;
NTI__F6ONStXzG2u7i8uj6UG9aiw_.node = &TM__3rBY6NOHI29c34PPPPzLAdQ_0[0];
NTI__iCpSBrfwInduIhD9a0cvmIw_.size = sizeof(tyObject_CsvError__F6ONStXzG2u7i8uj6UG9aiw*);
NTI__iCpSBrfwInduIhD9a0cvmIw_.kind = 22;
NTI__iCpSBrfwInduIhD9a0cvmIw_.base = (&NTI__F6ONStXzG2u7i8uj6UG9aiw_);
NTI__iCpSBrfwInduIhD9a0cvmIw_.marker = Marker_tyRef__iCpSBrfwInduIhD9a0cvmIw;
}

