/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

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

/* section: NIM_merge_FRAME_DEFINES */
#define nimfr_(x, y)
#define nimln_(x, y)

/* section: NIM_merge_FORWARD_TYPES */
typedef struct tyObject_HashSet__bGAilYs5sUICRbD13gZaFg tyObject_HashSet__bGAilYs5sUICRbD13gZaFg;
typedef struct tySequence__8Np6tlClE5az1CyqZdN19bQ tySequence__8Np6tlClE5az1CyqZdN19bQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ;
typedef struct TGenericSeq TGenericSeq;

/* section: NIM_merge_TYPES */
struct tyObject_HashSet__bGAilYs5sUICRbD13gZaFg {
tySequence__8Np6tlClE5az1CyqZdN19bQ* data;
NI counter;
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
struct tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ {
NI Field0;
NI Field1;
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

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__8Np6tlClE5az1CyqZdN19bQ {
  TGenericSeq Sup;
  tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
static N_NIMCALL(void, Marker_tySequence__8Np6tlClE5az1CyqZdN19bQ)(void* p, NI op);
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(void, init__lLmKmim2oV7RbhI6dBjLlA)(tyObject_HashSet__bGAilYs5sUICRbD13gZaFg* s, NI initialSize);
static N_INLINE(NI, slotsNeeded__55NBUXYG2CAhm9b85URNhoAsets)(NI count);
N_LIB_PRIVATE N_NIMCALL(NI, nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A)(NI x);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE TNimType NTI__bGAilYs5sUICRbD13gZaFg_;
N_LIB_PRIVATE TNimType NTI__1v9bKyksXWMsm0vNwmZ4EuQ_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTI__8Np6tlClE5az1CyqZdN19bQ_;

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
static N_NIMCALL(void, Marker_tySequence__8Np6tlClE5az1CyqZdN19bQ)(void* p, NI op) {
	tySequence__8Np6tlClE5az1CyqZdN19bQ* a;
	NI T1_;
	a = (tySequence__8Np6tlClE5az1CyqZdN19bQ*)p;
	T1_ = (NI)0;
}
static N_INLINE(void, unsureAsgnRef)(void** dest, void* src) {
	(*dest) = src;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
static N_INLINE(NI, slotsNeeded__55NBUXYG2CAhm9b85URNhoAsets)(NI count) {
	NI result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	result = nextPowerOfTwo__v2qC0V55wqa9bmqc7eHTz8A((NI)((NI)((NI)(((NI) (count)) * ((NI) 3)) / ((NI) 2)) + ((NI) 4)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, init__lLmKmim2oV7RbhI6dBjLlA)(tyObject_HashSet__bGAilYs5sUICRbD13gZaFg* s, NI initialSize) {
	NI correctSizeX60gensym84_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	correctSizeX60gensym84_ = slotsNeeded__55NBUXYG2CAhm9b85URNhoAsets(((NI) (initialSize)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	(*s).counter = ((NI) 0);
	(*s).data = (tySequence__8Np6tlClE5az1CyqZdN19bQ*) newSeq((&NTI__8Np6tlClE5az1CyqZdN19bQ_), ((NI) (correctSizeX60gensym84_)));
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, initHashSet__rkx2SGa9c4bJGzaJP7jTaxg)(NI initialSize, tyObject_HashSet__bGAilYs5sUICRbD13gZaFg* Result) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	unsureAsgnRef((void**)&(*Result).data, NIM_NIL);
	(*Result).counter = 0;
	init__lLmKmim2oV7RbhI6dBjLlA(Result, initialSize);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_setsDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__0JXiWyhP5OCO8jWMA6sb1w_2_2[2];
static TNimNode* TM__0JXiWyhP5OCO8jWMA6sb1w_3_2[2];
static TNimNode TM__0JXiWyhP5OCO8jWMA6sb1w_0[6];

/* section: NIM_merge_TYPE_INIT3 */
NTI__bGAilYs5sUICRbD13gZaFg_.size = sizeof(tyObject_HashSet__bGAilYs5sUICRbD13gZaFg);
NTI__bGAilYs5sUICRbD13gZaFg_.align = NIM_ALIGNOF(tyObject_HashSet__bGAilYs5sUICRbD13gZaFg);
NTI__bGAilYs5sUICRbD13gZaFg_.kind = 18;
NTI__bGAilYs5sUICRbD13gZaFg_.base = 0;
NTI__bGAilYs5sUICRbD13gZaFg_.flags = 2;
TM__0JXiWyhP5OCO8jWMA6sb1w_2_2[0] = &TM__0JXiWyhP5OCO8jWMA6sb1w_0[1];
NTI__1v9bKyksXWMsm0vNwmZ4EuQ_.size = sizeof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ);
NTI__1v9bKyksXWMsm0vNwmZ4EuQ_.align = NIM_ALIGNOF(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ);
NTI__1v9bKyksXWMsm0vNwmZ4EuQ_.kind = 18;
NTI__1v9bKyksXWMsm0vNwmZ4EuQ_.base = 0;
NTI__1v9bKyksXWMsm0vNwmZ4EuQ_.flags = 3;
TM__0JXiWyhP5OCO8jWMA6sb1w_3_2[0] = &TM__0JXiWyhP5OCO8jWMA6sb1w_0[3];
TM__0JXiWyhP5OCO8jWMA6sb1w_0[3].kind = 1;
TM__0JXiWyhP5OCO8jWMA6sb1w_0[3].offset = offsetof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, Field0);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[3].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[3].name = "Field0";
TM__0JXiWyhP5OCO8jWMA6sb1w_3_2[1] = &TM__0JXiWyhP5OCO8jWMA6sb1w_0[4];
TM__0JXiWyhP5OCO8jWMA6sb1w_0[4].kind = 1;
TM__0JXiWyhP5OCO8jWMA6sb1w_0[4].offset = offsetof(tyTuple__1v9bKyksXWMsm0vNwmZ4EuQ, Field1);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[4].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[4].name = "Field1";
TM__0JXiWyhP5OCO8jWMA6sb1w_0[2].len = 2; TM__0JXiWyhP5OCO8jWMA6sb1w_0[2].kind = 2; TM__0JXiWyhP5OCO8jWMA6sb1w_0[2].sons = &TM__0JXiWyhP5OCO8jWMA6sb1w_3_2[0];
NTI__1v9bKyksXWMsm0vNwmZ4EuQ_.node = &TM__0JXiWyhP5OCO8jWMA6sb1w_0[2];
NTI__8Np6tlClE5az1CyqZdN19bQ_.size = sizeof(tySequence__8Np6tlClE5az1CyqZdN19bQ*);
NTI__8Np6tlClE5az1CyqZdN19bQ_.align = NIM_ALIGNOF(tySequence__8Np6tlClE5az1CyqZdN19bQ*);
NTI__8Np6tlClE5az1CyqZdN19bQ_.kind = 24;
NTI__8Np6tlClE5az1CyqZdN19bQ_.base = (&NTI__1v9bKyksXWMsm0vNwmZ4EuQ_);
NTI__8Np6tlClE5az1CyqZdN19bQ_.flags = 2;
NTI__8Np6tlClE5az1CyqZdN19bQ_.marker = Marker_tySequence__8Np6tlClE5az1CyqZdN19bQ;
TM__0JXiWyhP5OCO8jWMA6sb1w_0[1].kind = 1;
TM__0JXiWyhP5OCO8jWMA6sb1w_0[1].offset = offsetof(tyObject_HashSet__bGAilYs5sUICRbD13gZaFg, data);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[1].typ = (&NTI__8Np6tlClE5az1CyqZdN19bQ_);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[1].name = "data";
TM__0JXiWyhP5OCO8jWMA6sb1w_2_2[1] = &TM__0JXiWyhP5OCO8jWMA6sb1w_0[5];
TM__0JXiWyhP5OCO8jWMA6sb1w_0[5].kind = 1;
TM__0JXiWyhP5OCO8jWMA6sb1w_0[5].offset = offsetof(tyObject_HashSet__bGAilYs5sUICRbD13gZaFg, counter);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[5].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__0JXiWyhP5OCO8jWMA6sb1w_0[5].name = "counter";
TM__0JXiWyhP5OCO8jWMA6sb1w_0[0].len = 2; TM__0JXiWyhP5OCO8jWMA6sb1w_0[0].kind = 2; TM__0JXiWyhP5OCO8jWMA6sb1w_0[0].sons = &TM__0JXiWyhP5OCO8jWMA6sb1w_2_2[0];
NTI__bGAilYs5sUICRbD13gZaFg_.node = &TM__0JXiWyhP5OCO8jWMA6sb1w_0[0];
}

