/* Generated by Nim Compiler v1.2.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w  -fPIC  -I/home/juan/.choosenim/toolchains/nim-1.2.0/lib -I/home/juan/code/faster-than-csv/src -o /home/juan/code/faster-than-csv/dist/lin/stdlib_monotimes.nim.c.o /home/juan/code/faster-than-csv/dist/lin/stdlib_monotimes.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#include <time.h>
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
  typedef struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw;
struct tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w {
NI64 ticks;
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
struct tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw {
NI64 seconds;
NI nanosecond;
};
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, callDepthLimitReached__mMRdr4sgmnykA9aWeM9aDZlw)(void);
static N_INLINE(void, popFrame)(void);
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, initDuration__wcR3zetvspAUsyuvWZ07Xg)(NI64 nanoseconds, NI64 microseconds, NI64 milliseconds, NI64 seconds, NI64 minutes, NI64 hours, NI64 days, NI64 weeks);
N_LIB_PRIVATE TNimType NTI__FEvFMlkqJiSSGVO6HgTv8w_;
extern TNimType NTI__Aav8dQoMlCFnZRxA0IhTHQ_;
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
N_LIB_PRIVATE N_NIMCALL(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w, getMonoTime__QkEugs2Q2iFK9b83sl2B6wA)(void) {
	tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w result;
	struct timespec ts;
	int T1_;
	NI64 TM__IP4V1hRabVpf8OnX9bWuPxw_2;
	NI64 TM__IP4V1hRabVpf8OnX9bWuPxw_3;
	nimfr_("getMonoTime", "monotimes.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w));
	nimZeroMem((void*)(&ts), sizeof(struct timespec));
	nimln_(104, "monotimes.nim");
	T1_ = (int)0;
	T1_ = clock_gettime(((int) 1), (&ts));
	(void)(T1_);
	nimln_(105, "monotimes.nim");
	chckNil((void*)(&result));
	nimZeroMem((void*)(&result), sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w));
	if (nimMulInt64(((NI64) (ts.tv_sec)), IL64(1000000000), &TM__IP4V1hRabVpf8OnX9bWuPxw_2)) { raiseOverflow(); };
	if (nimAddInt64((NI64)(TM__IP4V1hRabVpf8OnX9bWuPxw_2), ((NI64) (ts.tv_nsec)), &TM__IP4V1hRabVpf8OnX9bWuPxw_3)) { raiseOverflow(); };
	result.ticks = (NI64)(TM__IP4V1hRabVpf8OnX9bWuPxw_3);
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw, minus___p9cBm7joedh4BwcboQ3HMVQ)(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w a, tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w b) {
	tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw result;
	NI64 TM__IP4V1hRabVpf8OnX9bWuPxw_4;
	nimfr_("-", "monotimes.nim");
	nimZeroMem((void*)(&result), sizeof(tyObject_Duration__lj9ar6Co3fgk6NgGnVaNpJw));
	nimln_(125, "monotimes.nim");
	nimln_(126, "monotimes.nim");
	if (nimSubInt64(a.ticks, b.ticks, &TM__IP4V1hRabVpf8OnX9bWuPxw_4)) { raiseOverflow(); };
	result = initDuration__wcR3zetvspAUsyuvWZ07Xg((NI64)(TM__IP4V1hRabVpf8OnX9bWuPxw_4), IL64(0), IL64(0), IL64(0), IL64(0), IL64(0), IL64(0), IL64(0));
	popFrame();
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_monotimesDatInit000)(void) {
static TNimNode TM__IP4V1hRabVpf8OnX9bWuPxw_0[1];
NTI__FEvFMlkqJiSSGVO6HgTv8w_.size = sizeof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w);
NTI__FEvFMlkqJiSSGVO6HgTv8w_.kind = 18;
NTI__FEvFMlkqJiSSGVO6HgTv8w_.base = 0;
NTI__FEvFMlkqJiSSGVO6HgTv8w_.flags = 3;
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].kind = 1;
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].offset = offsetof(tyObject_MonoTime__FEvFMlkqJiSSGVO6HgTv8w, ticks);
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].typ = (&NTI__Aav8dQoMlCFnZRxA0IhTHQ_);
TM__IP4V1hRabVpf8OnX9bWuPxw_0[0].name = "ticks";
NTI__FEvFMlkqJiSSGVO6HgTv8w_.node = &TM__IP4V1hRabVpf8OnX9bWuPxw_0[0];
}

