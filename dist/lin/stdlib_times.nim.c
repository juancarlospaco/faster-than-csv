/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing -fno-ident -fPIC  -I/home/runner/work/faster-than-csv/faster-than-csv/Nim/lib -I/home/runner/work/faster-than-csv/faster-than-csv/src -o /home/runner/work/faster-than-csv/faster-than-csv/dist/lin/stdlib_times.nim.c.o /home/runner/work/faster-than-csv/faster-than-csv/dist/lin/stdlib_times.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <time.h>
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
typedef struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw;
typedef struct tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ;
typedef struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A tyTuple__JfHvHzMrhKkWAUvQKe0i1A;
typedef struct tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg;
typedef struct RootObj RootObj;
typedef struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw;
struct tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q {
NI64 seconds;
NI nanosecond;
};
struct tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ {
tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q time;
NI utcOffset;
NIM_BOOL isDst;
};
typedef struct {
N_NIMCALL_PTR(tyObject_ZonedTime__WigfH9apQAxJ69bBPh3wB8RQ, ClP_0) (tyObject_Time__3y2ZpqsTJLqdZvpC9a0rU2Q x, void* ClE_0);
void* ClE_0;
} tyProc__bs1dgeTxHIjPGTR9axkkHbg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw {
tyProc__bs1dgeTxHIjPGTR9axkkHbg zonedTimeFromTimeImpl;
tyProc__bs1dgeTxHIjPGTR9axkkHbg zonedTimeFromAdjTimeImpl;
NimStringDesc* name;
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
struct tyTuple__JfHvHzMrhKkWAUvQKe0i1A {
void* Field0;
tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg* Field1;
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
struct RootObj {
TNimType* m_type;
};
struct tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg {
  RootObj Sup;
};
typedef N_NIMCALL_PTR(void, tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ) (void);
struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw {
NI64 seconds;
NI nanosecond;
};
typedef NU8 tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ;
typedef NI64 tyArray__pDfjTbtkTNjmi9bTcaNV32Q[8];
static N_NIMCALL(void, Marker_tyRef__HsJiUUcO9cHBdUCi0HwkSTA)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tyRef__9a5v4OQPlGqsA25ioN8hFYA)(void* p, NI op);
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_4)(void);
N_LIB_PRIVATE N_NIMCALL(void, nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_5)(void);
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity);
N_LIB_PRIVATE N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NIM_BOOL, nimDivInt64)(NI64 a, NI64 b, NI64* res);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, convert__vsrmXCcg8GubJb67VXeq4wtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity);
static N_INLINE(NI, convert__bBJ7N1GpubC85YlnXz3nHgtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, ntAddDuration)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, normalize__JK8O6vJVu4WsESmu0kL4aQ)(NI64 seconds, NI64 nanoseconds);
N_LIB_PRIVATE TNimType NTI__F8OvqlxXyGXRSiK9c1fCDVw_;
N_LIB_PRIVATE TNimType NTI__bs1dgeTxHIjPGTR9axkkHbg_;
N_LIB_PRIVATE TNimType NTI__vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__diB2NTuAIWY0FO9c5IUJRGg_;
N_LIB_PRIVATE TNimType NTI__HsJiUUcO9cHBdUCi0HwkSTA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__9a5v4OQPlGqsA25ioN8hFYA_;
N_LIB_PRIVATE NIM_CONST tyArray__pDfjTbtkTNjmi9bTcaNV32Q unitWeights__cpugRVHYEC9bUpLa71eZMsQ = {IL64(1),
IL64(1000),
IL64(1000000),
IL64(1000000000),
IL64(60000000000),
IL64(3600000000000),
IL64(86400000000000),
IL64(604800000000000)}
;
N_LIB_PRIVATE tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* utcInstance__oeKVHn4dFpBJO35HhEkelw;
N_LIB_PRIVATE tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA;
static N_NIMCALL(void, Marker_tyRef__HsJiUUcO9cHBdUCi0HwkSTA)(void* p, NI op) {
	tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg* a;
	a = (tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg*)p;
}
static N_NIMCALL(void, Marker_tyRef__9a5v4OQPlGqsA25ioN8hFYA)(void* p, NI op) {
	tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* a;
	a = (tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw*)p;
	nimGCvisit((void*)(*a).zonedTimeFromTimeImpl.ClE_0, op);
	nimGCvisit((void*)(*a).zonedTimeFromAdjTimeImpl.ClE_0, op);
	nimGCvisit((void*)(*a).name, op);
}
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_4)(void) {
	nimGCvisit((void*)utcInstance__oeKVHn4dFpBJO35HhEkelw, 0);
}
static N_NIMCALL(void, TM__6NbDwwj5FY059b1gz2AsAZQ_5)(void) {
	nimGCvisit((void*)localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA, 0);
}
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
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity) {
	NI64 result;
	result = (NI64)0;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_6;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_7;
		if (!(unitFrom < unitTo)) goto LA3_;
		if (unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] == 0){ raiseDivByZero(); }
		if (nimDivInt64(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0], unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0], &TM__6NbDwwj5FY059b1gz2AsAZQ_6)) { raiseOverflow(); };
		if ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_6) == 0){ raiseDivByZero(); }
		if (nimDivInt64(quantity, (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_6), &TM__6NbDwwj5FY059b1gz2AsAZQ_7)) { raiseOverflow(); };
		result = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_7);
	}
	goto LA1_;
	LA3_: ;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_8;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_9;
		if (unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] == 0){ raiseDivByZero(); }
		if (nimDivInt64(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0], unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0], &TM__6NbDwwj5FY059b1gz2AsAZQ_8)) { raiseOverflow(); };
		if (nimMulInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_8), quantity, &TM__6NbDwwj5FY059b1gz2AsAZQ_9)) { raiseOverflow(); };
		result = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_9);
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, convert__vsrmXCcg8GubJb67VXeq4wtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity) {
	NI result;
	result = (NI)0;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_11;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_12;
		if (!(unitFrom < unitTo)) goto LA3_;
		if (unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] == 0){ raiseDivByZero(); }
		if (nimDivInt64(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0], unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0], &TM__6NbDwwj5FY059b1gz2AsAZQ_11)) { raiseOverflow(); };
		if ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_11) == 0){ raiseDivByZero(); }
		if (nimDivInt64(((NI64) (quantity)), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_11), &TM__6NbDwwj5FY059b1gz2AsAZQ_12)) { raiseOverflow(); };
		result = ((NI) ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_12)));
	}
	goto LA1_;
	LA3_: ;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_13;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_14;
		if (unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] == 0){ raiseDivByZero(); }
		if (nimDivInt64(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0], unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0], &TM__6NbDwwj5FY059b1gz2AsAZQ_13)) { raiseOverflow(); };
		if (nimMulInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_13), ((NI64) (quantity)), &TM__6NbDwwj5FY059b1gz2AsAZQ_14)) { raiseOverflow(); };
		result = ((NI) ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_14)));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, convert__bBJ7N1GpubC85YlnXz3nHgtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity) {
	NI result;
	result = (NI)0;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_17;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_18;
		if (!(unitFrom < unitTo)) goto LA3_;
		if (unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] == 0){ raiseDivByZero(); }
		if (nimDivInt64(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0], unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0], &TM__6NbDwwj5FY059b1gz2AsAZQ_17)) { raiseOverflow(); };
		if ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_17) == 0){ raiseDivByZero(); }
		if (nimDivInt64(((NI64) (quantity)), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_17), &TM__6NbDwwj5FY059b1gz2AsAZQ_18)) { raiseOverflow(); };
		if (((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_18)) < ((NI) 0) || ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_18)) > ((NI) 999999999)){ raiseRangeErrorI((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_18), ((NI) 0), ((NI) 999999999)); }
		result = ((NI) ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_18)));
	}
	goto LA1_;
	LA3_: ;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_19;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_20;
		if (unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] == 0){ raiseDivByZero(); }
		if (nimDivInt64(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0], unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0], &TM__6NbDwwj5FY059b1gz2AsAZQ_19)) { raiseOverflow(); };
		if (nimMulInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_19), ((NI64) (quantity)), &TM__6NbDwwj5FY059b1gz2AsAZQ_20)) { raiseOverflow(); };
		if (((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_20)) < ((NI) 0) || ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_20)) > ((NI) 999999999)){ raiseRangeErrorI((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_20), ((NI) 0), ((NI) 999999999)); }
		result = ((NI) ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_20)));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, inMilliseconds__df0d89cDnRIju9aB6p1W1qVA)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur) {
	NI64 result;
	NIM_BOOL correctionX60gensym14525230_;
	NIM_BOOL T1_;
	result = (NI64)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (dur.seconds < IL64(0));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) 0) < ((NI) (dur.nanosecond)));
	LA2_: ;
	correctionX60gensym14525230_ = T1_;
	{
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_10;
		NI64 T7_;
		NI T8_;
		NI TM__6NbDwwj5FY059b1gz2AsAZQ_15;
		NI T9_;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_16;
		if (!correctionX60gensym14525230_) goto LA5_;
		if (nimAddInt64(dur.seconds, IL64(1), &TM__6NbDwwj5FY059b1gz2AsAZQ_10)) { raiseOverflow(); };
		T7_ = (NI64)0;
		T7_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_10));
		T8_ = (NI)0;
		T8_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
		if (nimSubInt(T8_, ((NI) (dur.nanosecond)), &TM__6NbDwwj5FY059b1gz2AsAZQ_15)) { raiseOverflow(); };
		T9_ = (NI)0;
		T9_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), (NI)(TM__6NbDwwj5FY059b1gz2AsAZQ_15));
		if (nimSubInt64(T7_, ((NI64) (T9_)), &TM__6NbDwwj5FY059b1gz2AsAZQ_16)) { raiseOverflow(); };
		result = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_16);
	}
	goto LA3_;
	LA5_: ;
	{
		NI64 T11_;
		NI T12_;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_21;
		T11_ = (NI64)0;
		T11_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), dur.seconds);
		T12_ = (NI)0;
		T12_ = convert__bBJ7N1GpubC85YlnXz3nHgtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), dur.nanosecond);
		if (nimAddInt64(T11_, ((NI64) (T12_)), &TM__6NbDwwj5FY059b1gz2AsAZQ_21)) { raiseOverflow(); };
		result = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_21);
	}
	LA3_: ;
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
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, normalize__JK8O6vJVu4WsESmu0kL4aQ)(NI64 seconds, NI64 nanoseconds) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 T1_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_22;
	NI64 nanosecond;
	NI T2_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_23;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), nanoseconds);
	if (nimAddInt64(seconds, T1_, &TM__6NbDwwj5FY059b1gz2AsAZQ_22)) { raiseOverflow(); };
	result.seconds = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_22);
	T2_ = (NI)0;
	T2_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
	if (((NI64) (T2_)) == 0){ raiseDivByZero(); }
	if (nimModInt64(nanoseconds, ((NI64) (T2_)), &TM__6NbDwwj5FY059b1gz2AsAZQ_23)) { raiseOverflow(); };
	nanosecond = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_23);
	{
		NI T7_;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_24;
		NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_25;
		if (!(nanosecond < IL64(0))) goto LA5_;
		T7_ = (NI)0;
		T7_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
		if (nimAddInt64(nanosecond, ((NI64) (T7_)), &TM__6NbDwwj5FY059b1gz2AsAZQ_24)) { raiseOverflow(); };
		nanosecond = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_24);
		if (nimSubInt64(result.seconds, ((NI) 1), &TM__6NbDwwj5FY059b1gz2AsAZQ_25)) { raiseOverflow(); };
		result.seconds = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_25);
	}
	LA5_: ;
	if ((((NI) (nanosecond))) < ((NI) 0) || (((NI) (nanosecond))) > ((NI) 999999999)){ raiseRangeErrorI(((NI) (nanosecond)), ((NI) 0), ((NI) 999999999)); }
	result.nanosecond = ((NI) (((NI) (nanosecond))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, ntAddDuration)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_26;
	NI TM__6NbDwwj5FY059b1gz2AsAZQ_27;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	if (nimAddInt64(a.seconds, b.seconds, &TM__6NbDwwj5FY059b1gz2AsAZQ_26)) { raiseOverflow(); };
	if (nimAddInt(((NI) (a.nanosecond)), ((NI) (b.nanosecond)), &TM__6NbDwwj5FY059b1gz2AsAZQ_27)) { raiseOverflow(); };
	result = normalize__JK8O6vJVu4WsESmu0kL4aQ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_26), ((NI64) ((NI)(TM__6NbDwwj5FY059b1gz2AsAZQ_27))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, pluseq___dXIPb9c601v9bvWo9b9abEUKmA)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw* a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b) {
	(*a) = ntAddDuration((*a), b);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, initDuration__wcR3zetvspAUsyuvWZ07Xg)(NI64 nanoseconds, NI64 microseconds, NI64 milliseconds, NI64 seconds, NI64 minutes, NI64 hours, NI64 days, NI64 weeks) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 seconds_2;
	NI64 T1_;
	NI64 T2_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_28;
	NI64 T3_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_29;
	NI64 T4_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_30;
	NI64 T5_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_31;
	NI64 T6_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_32;
	NI64 T7_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_33;
	NI64 T8_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_34;
	NI nanoseconds_2;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_35;
	NI64 T9_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_36;
	NI64 T10_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_37;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_38;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_39;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 7), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), weeks);
	T2_ = (NI64)0;
	T2_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 6), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), days);
	if (nimAddInt64(T1_, T2_, &TM__6NbDwwj5FY059b1gz2AsAZQ_28)) { raiseOverflow(); };
	T3_ = (NI64)0;
	T3_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 4), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), minutes);
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_28), T3_, &TM__6NbDwwj5FY059b1gz2AsAZQ_29)) { raiseOverflow(); };
	T4_ = (NI64)0;
	T4_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 5), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), hours);
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_29), T4_, &TM__6NbDwwj5FY059b1gz2AsAZQ_30)) { raiseOverflow(); };
	T5_ = (NI64)0;
	T5_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), seconds);
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_30), T5_, &TM__6NbDwwj5FY059b1gz2AsAZQ_31)) { raiseOverflow(); };
	T6_ = (NI64)0;
	T6_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), milliseconds);
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_31), T6_, &TM__6NbDwwj5FY059b1gz2AsAZQ_32)) { raiseOverflow(); };
	T7_ = (NI64)0;
	T7_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 1), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), microseconds);
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_32), T7_, &TM__6NbDwwj5FY059b1gz2AsAZQ_33)) { raiseOverflow(); };
	T8_ = (NI64)0;
	T8_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), nanoseconds);
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_33), T8_, &TM__6NbDwwj5FY059b1gz2AsAZQ_34)) { raiseOverflow(); };
	seconds_2 = (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_34);
	if (IL64(1000) == 0){ raiseDivByZero(); }
	if (nimModInt64(milliseconds, IL64(1000), &TM__6NbDwwj5FY059b1gz2AsAZQ_35)) { raiseOverflow(); };
	T9_ = (NI64)0;
	T9_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_35));
	if (IL64(1000000) == 0){ raiseDivByZero(); }
	if (nimModInt64(microseconds, IL64(1000000), &TM__6NbDwwj5FY059b1gz2AsAZQ_36)) { raiseOverflow(); };
	T10_ = (NI64)0;
	T10_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 1), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_36));
	if (nimAddInt64(T9_, T10_, &TM__6NbDwwj5FY059b1gz2AsAZQ_37)) { raiseOverflow(); };
	if (IL64(1000000000) == 0){ raiseDivByZero(); }
	if (nimModInt64(nanoseconds, IL64(1000000000), &TM__6NbDwwj5FY059b1gz2AsAZQ_38)) { raiseOverflow(); };
	if (nimAddInt64((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_37), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_38), &TM__6NbDwwj5FY059b1gz2AsAZQ_39)) { raiseOverflow(); };
	nanoseconds_2 = ((NI) ((NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_39)));
	result = normalize__JK8O6vJVu4WsESmu0kL4aQ(seconds_2, ((NI64) (nanoseconds_2)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, inSeconds__df0d89cDnRIju9aB6p1W1qVA_2)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur) {
	NI64 result;
	NIM_BOOL correctionX60gensym14510230_;
	NIM_BOOL T1_;
	NI64 TM__6NbDwwj5FY059b1gz2AsAZQ_40;
	result = (NI64)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (dur.seconds < IL64(0));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) 0) < ((NI) (dur.nanosecond)));
	LA2_: ;
	correctionX60gensym14510230_ = T1_;
	if (nimAddInt64(dur.seconds, ((NI64) (correctionX60gensym14510230_)), &TM__6NbDwwj5FY059b1gz2AsAZQ_40)) { raiseOverflow(); };
	result = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), (NI64)(TM__6NbDwwj5FY059b1gz2AsAZQ_40));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesInit000)(void) {
{

	nimRegisterThreadLocalMarker(TM__6NbDwwj5FY059b1gz2AsAZQ_4);


	nimRegisterThreadLocalMarker(TM__6NbDwwj5FY059b1gz2AsAZQ_5);

	tzset();
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_timesDatInit000)(void) {
static TNimNode* TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[3];
static TNimNode* TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[2];
static TNimNode TM__6NbDwwj5FY059b1gz2AsAZQ_0[8];
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.size = sizeof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw);
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.kind = 18;
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.base = 0;
TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[0] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[1];
NTI__bs1dgeTxHIjPGTR9axkkHbg_.size = sizeof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A);
NTI__bs1dgeTxHIjPGTR9axkkHbg_.kind = 18;
NTI__bs1dgeTxHIjPGTR9axkkHbg_.base = 0;
TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[0] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[3];
NTI__vr5DoT1jILTGdRlYv1OYpw_.size = sizeof(void*);
NTI__vr5DoT1jILTGdRlYv1OYpw_.kind = 26;
NTI__vr5DoT1jILTGdRlYv1OYpw_.base = 0;
NTI__vr5DoT1jILTGdRlYv1OYpw_.flags = 3;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field0);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].typ = (&NTI__vr5DoT1jILTGdRlYv1OYpw_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[3].name = "Field0";
TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[1] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[4];
NTI__diB2NTuAIWY0FO9c5IUJRGg_.size = sizeof(tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg);
NTI__diB2NTuAIWY0FO9c5IUJRGg_.kind = 17;
NTI__diB2NTuAIWY0FO9c5IUJRGg_.base = (&NTI__ytyiCJqK439aF9cIibuRVpAg_);
NTI__diB2NTuAIWY0FO9c5IUJRGg_.flags = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[5].len = 0; TM__6NbDwwj5FY059b1gz2AsAZQ_0[5].kind = 2;
NTI__diB2NTuAIWY0FO9c5IUJRGg_.node = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[5];
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.size = sizeof(tyObject_Env_timesdotnim___diB2NTuAIWY0FO9c5IUJRGg*);
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.kind = 22;
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.base = (&NTI__diB2NTuAIWY0FO9c5IUJRGg_);
NTI__HsJiUUcO9cHBdUCi0HwkSTA_.marker = Marker_tyRef__HsJiUUcO9cHBdUCi0HwkSTA;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].offset = offsetof(tyTuple__JfHvHzMrhKkWAUvQKe0i1A, Field1);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].typ = (&NTI__HsJiUUcO9cHBdUCi0HwkSTA_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[4].name = "Field1";
TM__6NbDwwj5FY059b1gz2AsAZQ_0[2].len = 2; TM__6NbDwwj5FY059b1gz2AsAZQ_0[2].kind = 2; TM__6NbDwwj5FY059b1gz2AsAZQ_0[2].sons = &TM__6NbDwwj5FY059b1gz2AsAZQ_3_2[0];
NTI__bs1dgeTxHIjPGTR9axkkHbg_.node = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[2];
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].offset = offsetof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw, zonedTimeFromTimeImpl);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].typ = (&NTI__bs1dgeTxHIjPGTR9axkkHbg_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[1].name = "zonedTimeFromTimeImpl";
TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[1] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[6];
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].offset = offsetof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw, zonedTimeFromAdjTimeImpl);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].typ = (&NTI__bs1dgeTxHIjPGTR9axkkHbg_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[6].name = "zonedTimeFromAdjTimeImpl";
TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[2] = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[7];
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].kind = 1;
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].offset = offsetof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw, name);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__6NbDwwj5FY059b1gz2AsAZQ_0[7].name = "name";
TM__6NbDwwj5FY059b1gz2AsAZQ_0[0].len = 3; TM__6NbDwwj5FY059b1gz2AsAZQ_0[0].kind = 2; TM__6NbDwwj5FY059b1gz2AsAZQ_0[0].sons = &TM__6NbDwwj5FY059b1gz2AsAZQ_2_3[0];
NTI__F8OvqlxXyGXRSiK9c1fCDVw_.node = &TM__6NbDwwj5FY059b1gz2AsAZQ_0[0];
NTI__9a5v4OQPlGqsA25ioN8hFYA_.size = sizeof(tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw*);
NTI__9a5v4OQPlGqsA25ioN8hFYA_.kind = 22;
NTI__9a5v4OQPlGqsA25ioN8hFYA_.base = (&NTI__F8OvqlxXyGXRSiK9c1fCDVw_);
NTI__9a5v4OQPlGqsA25ioN8hFYA_.marker = Marker_tyRef__9a5v4OQPlGqsA25ioN8hFYA;
}

