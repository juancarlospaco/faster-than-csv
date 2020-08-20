/* Generated by Nim Compiler v1.2.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -fPIC  -I/home/juan/.choosenim/toolchains/nim-1.2.0/lib -I/home/juan/code/faster-than-csv/src -o /home/juan/code/faster-than-csv/dist/lin/stdlib_heapqueue.nim.c.o /home/juan/code/faster-than-csv/dist/lin/stdlib_heapqueue.nim.c */
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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ;
typedef struct tySequence__oKfdUHDH0q5oP14wOM6kug tySequence__oKfdUHDH0q5oP14wOM6kug;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyTuple__5aoVPIWYzahUyBc9bMm0M5w tyTuple__5aoVPIWYzahUyBc9bMm0M5w;
typedef struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w;
typedef struct tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w;
struct tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ {
tySequence__oKfdUHDH0q5oP14wOM6kug* data;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct TGenericSeq {
NI len;
NI reserved;
};
struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w {
NI64 ticks;
};
struct tyTuple__5aoVPIWYzahUyBc9bMm0M5w {
tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w Field0;
tyObject_FuturecolonObjectType___te3W2Tqi7xuJ7rlPtg9al5w* Field1;
};
struct tySequence__oKfdUHDH0q5oP14wOM6kug {
  TGenericSeq Sup;
  tyTuple__5aoVPIWYzahUyBc9bMm0M5w data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__oKfdUHDH0q5oP14wOM6kug)(void* p, NI op);
N_LIB_PRIVATE TNimType NTI__mgfFdry9aKsRMW9au5u9bSpOQ_;
extern TNimType NTI__5aoVPIWYzahUyBc9bMm0M5w_;
N_LIB_PRIVATE TNimType NTI__oKfdUHDH0q5oP14wOM6kug_;
static N_NIMCALL(void, Marker_tySequence__oKfdUHDH0q5oP14wOM6kug)(void* p, NI op) {
	tySequence__oKfdUHDH0q5oP14wOM6kug* a;
	NI T1_;
	a = (tySequence__oKfdUHDH0q5oP14wOM6kug*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_].Field1, op);
	}
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_heapqueueDatInit000)(void) {
static TNimNode TM__f2bNHCHm2LvO7iSrwQtdiQ_0[1];
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.size = sizeof(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ);
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.kind = 18;
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.base = 0;
NTI__oKfdUHDH0q5oP14wOM6kug_.size = sizeof(tySequence__oKfdUHDH0q5oP14wOM6kug*);
NTI__oKfdUHDH0q5oP14wOM6kug_.kind = 24;
NTI__oKfdUHDH0q5oP14wOM6kug_.base = (&NTI__5aoVPIWYzahUyBc9bMm0M5w_);
NTI__oKfdUHDH0q5oP14wOM6kug_.marker = Marker_tySequence__oKfdUHDH0q5oP14wOM6kug;
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].kind = 1;
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].offset = offsetof(tyObject_HeapQueue__mgfFdry9aKsRMW9au5u9bSpOQ, data);
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].typ = (&NTI__oKfdUHDH0q5oP14wOM6kug_);
TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0].name = "data";
NTI__mgfFdry9aKsRMW9au5u9bSpOQ_.node = &TM__f2bNHCHm2LvO7iSrwQtdiQ_0[0];
}

