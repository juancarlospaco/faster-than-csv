/* Generated by Nim Compiler v1.4.2 */
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
typedef struct tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw;
typedef struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw;

/* section: NIM_merge_TYPES */
struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw {
NI64 seconds;
NI nanosecond;
};
typedef NU8 tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ;
typedef NI64 tyArray__pDfjTbtkTNjmi9bTcaNV32Q[8];

/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity);
static N_INLINE(NI, convert__vsrmXCcg8GubJb67VXeq4wtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity);
static N_INLINE(NI, convert__bBJ7N1GpubC85YlnXz3nHgtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, ntAddDuration)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, normalize__JK8O6vJVu4WsESmu0kL4aQ)(NI64 seconds, NI64 nanoseconds);

/* section: NIM_merge_DATA */
N_LIB_PRIVATE NIM_CONST tyArray__pDfjTbtkTNjmi9bTcaNV32Q unitWeights__cpugRVHYEC9bUpLa71eZMsQ = {IL64(1),
IL64(1000),
IL64(1000000),
IL64(1000000000),
IL64(60000000000),
IL64(3600000000000),
IL64(86400000000000),
IL64(604800000000000)}
;

/* section: NIM_merge_VARS */
N_LIB_PRIVATE tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* utcInstance__oeKVHn4dFpBJO35HhEkelw;
N_LIB_PRIVATE tyObject_TimezonecolonObjectType___F8OvqlxXyGXRSiK9c1fCDVw* localInstance__cLtN9cK9bCe6IPhJ3UFNLNKA;

/* section: NIM_merge_PROCS */
static N_INLINE(NI64, convert__2z1a0DRE31bT73xgVvBfQAtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI64 quantity) {
	NI64 result;
	NI64 colontmpD_;
	NI64 colontmpD__2;
	result = (NI64)0;
	colontmpD_ = (NI64)0;
	colontmpD__2 = (NI64)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		colontmpD_ = (NI64)(quantity / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]));
		result = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = (NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * quantity);
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, convert__vsrmXCcg8GubJb67VXeq4wtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		colontmpD_ = ((NI) ((NI64)(((NI64) (quantity)) / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]))));
		result = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = ((NI) ((NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * ((NI64) (quantity)))));
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
static N_INLINE(NI, convert__bBJ7N1GpubC85YlnXz3nHgtimes)(tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitFrom, tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ unitTo, NI quantity) {
	NI result;
	NI colontmpD_;
	NI colontmpD__2;
	result = (NI)0;
	colontmpD_ = (NI)0;
	colontmpD__2 = (NI)0;
	{
		if (!(unitFrom < unitTo)) goto LA3_;
		colontmpD_ = ((NI) ((NI64)(((NI64) (quantity)) / (NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0]))));
		result = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = ((NI) ((NI64)((NI64)(unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitFrom)- 0] / unitWeights__cpugRVHYEC9bUpLa71eZMsQ[(unitTo)- 0]) * ((NI64) (quantity)))));
		result = colontmpD__2;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, inMilliseconds__df0d89cDnRIju9aB6p1W1qVA)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur) {
	NI64 result;
	NI64 colontmpD_;
	NI64 colontmpD__2;
	NIM_BOOL correctionX60gensym23_;
	NIM_BOOL T1_;
	result = (NI64)0;
	colontmpD_ = (NI64)0;
	colontmpD__2 = (NI64)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (dur.seconds < IL64(0));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) 0) < ((NI) (dur.nanosecond)));
	LA2_: ;
	correctionX60gensym23_ = T1_;
	{
		NI64 T7_;
		NI T8_;
		NI T9_;
		if (!correctionX60gensym23_) goto LA5_;
		T7_ = (NI64)0;
		T7_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), (NI64)(dur.seconds + IL64(1)));
		T8_ = (NI)0;
		T8_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
		T9_ = (NI)0;
		T9_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), (NI)(T8_ - ((NI) (dur.nanosecond))));
		colontmpD_ = (NI64)(T7_ - ((NI64) (T9_)));
		result = colontmpD_;
	}
	goto LA3_;
	LA5_: ;
	{
		NI64 T11_;
		NI T12_;
		T11_ = (NI64)0;
		T11_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), dur.seconds);
		T12_ = (NI)0;
		T12_ = convert__bBJ7N1GpubC85YlnXz3nHgtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), dur.nanosecond);
		colontmpD__2 = (NI64)(T11_ + ((NI64) (T12_)));
		result = colontmpD__2;
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
	NI64 nanosecond;
	NI T2_;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), nanoseconds);
	result.seconds = (NI64)(seconds + T1_);
	T2_ = (NI)0;
	T2_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
	nanosecond = (NI64)(nanoseconds % ((NI64) (T2_)));
	{
		NI T7_;
		if (!(nanosecond < IL64(0))) goto LA5_;
		T7_ = (NI)0;
		T7_ = convert__vsrmXCcg8GubJb67VXeq4wtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((NI) 1));
		nanosecond += ((NI64) (T7_));
		result.seconds -= ((NI) 1);
	}
	LA5_: ;
	result.nanosecond = ((NI) (((NI) (nanosecond))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, ntAddDuration)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw a, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw b) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 T1_;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = (NI64)(a.seconds + b.seconds);
	result = normalize__JK8O6vJVu4WsESmu0kL4aQ(T1_, ((NI64) ((NI)(((NI) (a.nanosecond)) + ((NI) (b.nanosecond))))));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, pluseq___x4VoYzJQBbk9bAft9bFS7fyA)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw* d1, tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw d2) {
	(*d1) = ntAddDuration((*d1), d2);
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, initDuration__wcR3zetvspAUsyuvWZ07Xg)(NI64 nanoseconds, NI64 microseconds, NI64 milliseconds, NI64 seconds, NI64 minutes, NI64 hours, NI64 days, NI64 weeks) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 seconds_2;
	NI64 T1_;
	NI64 T2_;
	NI64 T3_;
	NI64 T4_;
	NI64 T5_;
	NI64 T6_;
	NI64 T7_;
	NI64 T8_;
	NI nanoseconds_2;
	NI64 T9_;
	NI64 T10_;
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	T1_ = (NI64)0;
	T1_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 7), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), weeks);
	T2_ = (NI64)0;
	T2_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 6), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), days);
	T3_ = (NI64)0;
	T3_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 4), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), minutes);
	T4_ = (NI64)0;
	T4_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 5), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), hours);
	T5_ = (NI64)0;
	T5_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), seconds);
	T6_ = (NI64)0;
	T6_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), milliseconds);
	T7_ = (NI64)0;
	T7_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 1), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), microseconds);
	T8_ = (NI64)0;
	T8_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), nanoseconds);
	seconds_2 = (NI64)((NI64)((NI64)((NI64)((NI64)((NI64)((NI64)(T1_ + T2_) + T3_) + T4_) + T5_) + T6_) + T7_) + T8_);
	T9_ = (NI64)0;
	T9_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 2), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), (NI64)(milliseconds % IL64(1000)));
	T10_ = (NI64)0;
	T10_ = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 1), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 0), (NI64)(microseconds % IL64(1000000)));
	nanoseconds_2 = ((NI) ((NI64)((NI64)(T9_ + T10_) + (NI64)(nanoseconds % IL64(1000000000)))));
	result = normalize__JK8O6vJVu4WsESmu0kL4aQ(seconds_2, ((NI64) (nanoseconds_2)));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, inSeconds__df0d89cDnRIju9aB6p1W1qVA_2)(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw dur) {
	NI64 result;
	NIM_BOOL correctionX60gensym20_;
	NIM_BOOL T1_;
	result = (NI64)0;
	T1_ = (NIM_BOOL)0;
	T1_ = (dur.seconds < IL64(0));
	if (!(T1_)) goto LA2_;
	T1_ = (((NI) 0) < ((NI) (dur.nanosecond)));
	LA2_: ;
	correctionX60gensym20_ = T1_;
	result = convert__2z1a0DRE31bT73xgVvBfQAtimes(((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), ((tyEnum_TimeUnit__52alPn04ElUUbqLeok9b3PQ) 3), (NI64)(dur.seconds + ((NI64) (correctionX60gensym20_))));
	return result;
}
