/* Generated by Nim Compiler v1.3.5 */
/*  (c)2020 Andreas Rumpf */
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
#define nimfr_(x,y)
#define nimln_(x,y)
/* section: NIM_merge_FORWARD_TYPES */
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA;
typedef struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;
/* section: NIM_merge_TYPES */
struct TGenericSeq{
NI len;
NI reserved;};
struct NimStringDesc{
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void,tyProc__ojoeKfW4VYIm36I9cpDTQIg)(void* p,NI op);
typedef N_NIMCALL_PTR(void*,tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ)(void* p);
struct TNimType{
NI size;
NI align;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode{
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;};
typedef N_NIMCALL_PTR(void,tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ)(void);
struct RootObj{
TNimType* m_type;};
struct Exception{
  RootObj Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
tySequence__uB9b75OUPRENsBAu4AnoePA* trace;
Exception* up;};
struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA{
  Exception Sup;};
struct tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA{
  tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA Sup;
NI32 errorCode;};
typedef N_STDCALL_PTR(NI32,tyProc__aO673xGTLLxou7P7GxoCXA)(NI32 dwFlags,void* lpSource,NI32 dwMessageId,NI32 dwLanguageId,void* lpBuffer,NI32 nSize,void* arguments);
typedef N_STDCALL_PTR(void,tyProc__im9buRnIvptJfzdASYMEbBA)(void* p);
typedef N_STDCALL_PTR(NI32,tyProc__9bXer9a4ps9aSGctILcxWReVw)(void);
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw{
NI32 dwLowDateTime;
NI32 dwHighDateTime;};
typedef NI16 tyArray__EKfNt9b8uxndgFbu2Ky3XAQ[260];
typedef NI16 tyArray__Get9cpRTS5VjGKP6CDsI9bYA[14];
struct tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA{
NI32 dwFileAttributes;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftCreationTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastAccessTime;
tyObject_FILETIME__bs4NMleDDVF7xsEK0SGLBw ftLastWriteTime;
NI32 nFileSizeHigh;
NI32 nFileSizeLow;
NI32 dwReserved0;
NI32 dwReserved1;
tyArray__EKfNt9b8uxndgFbu2Ky3XAQ cFileName;
tyArray__Get9cpRTS5VjGKP6CDsI9bYA cAlternateFileName;};
typedef N_STDCALL_PTR(NI,tyProc__lLim4ugM6CVjiaTaa7eXVA)(NI16* lpFileName,tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* lpFindFileData);
typedef N_STDCALL_PTR(void,tyProc__ofoySXaAAlxxs9bQS9a1etlg)(NI hFindFile);
typedef N_STDCALL_PTR(NI32,tyProc__2Dt6vzy4xOVEtn3qjtrTDQ)(NI16* lpFileName);
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA{
NCSTRING procname;
NI line;
NCSTRING filename;};
/* section: NIM_merge_SEQ_TYPES */
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ{
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];};
struct tySequence__uB9b75OUPRENsBAu4AnoePA{
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];};
/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void,nimGCvisit)(void* d,NI op);
static N_NIMCALL(void,Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p,NI op);
static N_NIMCALL(void,TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void);
N_LIB_PRIVATE N_NIMCALL(void,nimRegisterThreadLocalMarker)(tyProc__T4eqaYlFJYZUv9aG9b1TV0bQ markerProc);
static N_NIMCALL(void,TM__yu6cxgKBBXbNsTkT9cyMd4g_3)(void);
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*,newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode,NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(void*,newObj)(TNimType* typ,NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,dollar___NleKxkskBzDhxdrvP1WL7A)(NI16* s);
static N_INLINE(NIM_BOOL*,nimErrorFlag)(void);
static N_INLINE(NIM_CHAR,X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s,NI i);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,addChar)(NimStringDesc* s,NIM_CHAR c);
static N_INLINE(void,appendString)(NimStringDesc* dest,NimStringDesc* src);
static N_INLINE(void,copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest,void* source,NI size);
static N_INLINE(void,nimCopyMem)(void* dest,void* source,NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,resizeString)(NimStringDesc* dest,NI addlen);
N_LIB_PRIVATE N_NIMCALL(void,addQuoted__45fPtFhY4FavRaYwDhRfuA)(NimStringDesc** s,NimStringDesc* x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void,raiseExceptionEx)(Exception* e,NCSTRING ename,NCSTRING procname,NCSTRING filename,NI line);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,nospquoteShellWindows)(NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL,contains__wAzSnEu9cCHHjvPQlWBZUeQ)(NimStringDesc* s,tySet_tyChar__nmiMWKVIe46vacnhAFrQvw chars);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,setLengthStr)(NimStringDesc* s,NI newLen);
static N_INLINE(void,nimZeroMem)(void* p,NI size);
static N_INLINE(void,nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a,int v,NI size);
N_LIB_PRIVATE N_NIMCALL(NI,findFirstFile__p19a4B9bdPpNH4m9crzgIRxwQ)(NimStringDesc* a,tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* b);
N_LIB_PRIVATE N_NIMCALL(NI16*,newWideCString__rFkWhJjmVi0m0Hc9agVEZIQ)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void,raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode,NimStringDesc* additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32,osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
N_LIB_PRIVATE N_NIMCALL(NI64,rdFileSize__K9a4TDWuOfvg9cCJzFh9c9cB9bQ)(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* f);
/* section: NIM_merge_DATA */
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__sM4lkSb7zS6F7OVMvW9cffQ_;
extern TNimType NTI__9clYsYwyjCqe2PFTuCI3Ubg_;
extern TNimType NTI__BeJgrOdDsczOwEWOZbRfKA_;
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_4,"Additional info: ",17);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_5,"unknown OS error",16);
static NIM_CONST tySet_tyChar__nmiMWKVIe46vacnhAFrQvw TM__yu6cxgKBBXbNsTkT9cyMd4g_6={
0x00,0x02,0x00,0x00,0x01,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}
;
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_7,"\"",1);
STRING_LITERAL(TM__yu6cxgKBBXbNsTkT9cyMd4g_8,"\\\"",2);
/* section: NIM_merge_VARS */
N_LIB_PRIVATE NIM_BOOL envComputed__LLyFo9bsdu1ZXMDvAe8DhrQ;
N_LIB_PRIVATE tySequence__sM4lkSb7zS6F7OVMvW9cffQ* environment__mlhK49b6YMgc9cgrcYkKq9a3g;
N_LIB_PRIVATE tySequence__sM4lkSb7zS6F7OVMvW9cffQ* ownArgv__WVJ54JSHy7VxacV39bwBPFA;
N_LIB_PRIVATE NIM_BOOL ownParsedArgv__9btHydaUC5pNXxitEZsyzIg;
extern tyProc__aO673xGTLLxou7P7GxoCXA Dl_14076835_;
extern tyProc__im9buRnIvptJfzdASYMEbBA Dl_14077001_;
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
extern tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_14076830_;
extern tyProc__lLim4ugM6CVjiaTaa7eXVA Dl_14077456_;
extern tyProc__ofoySXaAAlxxs9bQS9a1etlg Dl_14077614_;
extern tyProc__2Dt6vzy4xOVEtn3qjtrTDQ Dl_14077624_;
/* section: NIM_merge_PROCS */
static N_NIMCALL(void,Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ)(void* p,NI op){
 tySequence__sM4lkSb7zS6F7OVMvW9cffQ* a;
 NI T1_;
 a=(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*)p;
 T1_=(NI)0;
 for(T1_=0;T1_<(a ? a->Sup.len : 0);T1_++){
 nimGCvisit((void*)a->data[T1_],op);
 }
}
static N_NIMCALL(void,TM__yu6cxgKBBXbNsTkT9cyMd4g_2)(void){
 nimGCvisit((void*)environment__mlhK49b6YMgc9cgrcYkKq9a3g,0);}
static N_NIMCALL(void,TM__yu6cxgKBBXbNsTkT9cyMd4g_3)(void){
 nimGCvisit((void*)ownArgv__WVJ54JSHy7VxacV39bwBPFA,0);}
static N_INLINE(NIM_BOOL*,nimErrorFlag)(void){
 NIM_BOOL* result;
 result=(NIM_BOOL*)0;
 result=(&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
 return result;}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode){
 NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NimStringDesc*)0;
 result=((NimStringDesc*)NIM_NIL);
 {
  NI16* msgbuf;
  if(!!((errorCode==((NI32)0))))goto LA3_;
  msgbuf=(NI16*)0;
  {
   NI32 T7_;
   T7_=(NI32)0;
   T7_=Dl_14076835_(((NI32)4864),NIM_NIL,errorCode,((NI32)0),((void*)(&msgbuf)),((NI32)0),NIM_NIL);
   if(!!((T7_==((NI32)0))))goto LA8_;
   result=dollar___NleKxkskBzDhxdrvP1WL7A(msgbuf);
   if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
   {
    if(!!((msgbuf==NIM_NIL)))goto LA12_;
    Dl_14077001_(((void*)(msgbuf)));
   }
   LA12_: ;
  }
  LA8_: ;
 }
 LA3_: ;
 }BeforeRet_: ;
 return result;}
static N_INLINE(NIM_CHAR,X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem)(NimStringDesc* s,NI i){
 NIM_CHAR result;
 result=(NIM_CHAR)0;
 result=s->data[(NI)((s ? s->Sup.len : 0)- i)];
 return result;}
static N_INLINE(void,nimCopyMem)(void* dest,void* source,NI size){
 void* T1_;
 T1_=(void*)0;
 T1_=memcpy(dest,source,((size_t)(size)));}
static N_INLINE(void,copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest,void* source,NI size){
 nimCopyMem(dest,source,size);}
static N_INLINE(void,appendString)(NimStringDesc* dest,NimStringDesc* src){
 {
  void* T5_;
  void* T6_;
  if(!!((src==NIM_NIL)))goto LA3_;
  T5_=(void*)0;
  T5_=((void*)((&(*dest).data[(*dest).Sup.len])));
  T6_=(void*)0;
  T6_=((void*)((*src).data));
  copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_,T6_,((NI)((NI)((*src).Sup.len+((NI)1)))));
  (*dest).Sup.len+=(*src).Sup.len;
 }
 LA3_: ;}
N_LIB_PRIVATE N_NOINLINE(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*,newOSError__JXEuze9ctNbkn51HYBflQLg)(NI32 errorCode,NimStringDesc* additionalInfo){
 tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* result;
 tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* e;
 NimStringDesc* T1_;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
 e=(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
 e=(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)newObj((&NTI__9clYsYwyjCqe2PFTuCI3Ubg_),sizeof(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA));
 (*e).Sup.Sup.Sup.m_type=(&NTI__BeJgrOdDsczOwEWOZbRfKA_);
 (*e).Sup.Sup.name="OSError";
 (*e).errorCode=errorCode;
 T1_=(NimStringDesc*)0;
 T1_=osErrorMsg__33xViSVWAmDrexoKkLfMhg(errorCode);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 (*e).Sup.Sup.message=T1_;
 {
  if(!(((NI)0)<(additionalInfo ? additionalInfo->Sup.len : 0)))goto LA4_;
  {
   NIM_BOOL T8_;
   NIM_CHAR T10_;
   T8_=(NIM_BOOL)0;
   T8_=(((NI)0)<((*e).Sup.Sup.message ?(*e).Sup.Sup.message->Sup.len : 0));
   if(!(T8_))goto LA9_;
   T10_=(NIM_CHAR)0;
   T10_=X5BX5D___okzHJ6GE9cv0bYG3b4r5KCAsystem((*e).Sup.Sup.message,((NI)1));
   T8_=!(((NU8)(T10_)==(NU8)(10)));
   LA9_: ;
   if(!T8_)goto LA11_;
   (*e).Sup.Sup.message=addChar((*e).Sup.Sup.message,10);
  }
  LA11_: ;
  (*e).Sup.Sup.message=resizeString((*e).Sup.Sup.message,17);
appendString((*e).Sup.Sup.message,((NimStringDesc*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_4));
  addQuoted__45fPtFhY4FavRaYwDhRfuA((&(*e).Sup.Sup.message),additionalInfo);
 }
 LA4_: ;
 {
  if(!(((*e).Sup.Sup.message ?(*e).Sup.Sup.message->Sup.len : 0)== 0))goto LA15_;
  (*e).Sup.Sup.message=copyString(((NimStringDesc*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_5));
 }
 LA15_: ;
 result=e;
 goto BeforeRet_;
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NOINLINE(void,raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode,NimStringDesc* additionalInfo){
 tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA* T1_;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 T1_=(tyObject_OSError__BeJgrOdDsczOwEWOZbRfKA*)0;
 T1_=newOSError__JXEuze9ctNbkn51HYBflQLg(errorCode,additionalInfo);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 raiseExceptionEx((Exception*)T1_,"OSError","raiseOSError","oserr.nim",94);
 goto BeforeRet_;
 }BeforeRet_: ;}
N_LIB_PRIVATE N_NIMCALL(NI32,osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void){
 NI32 result;
 result=(NI32)0;
 result=Dl_14076830_();
 return result;}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,nospquoteShellWindows)(NimStringDesc* s){
 NimStringDesc* result;
 NIM_BOOL needQuote;
 NIM_BOOL T1_;
 NimStringDesc* backslashBuff;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NimStringDesc*)0;
 T1_=(NIM_BOOL)0;
 T1_=contains__wAzSnEu9cCHHjvPQlWBZUeQ(s,TM__yu6cxgKBBXbNsTkT9cyMd4g_6);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 if(T1_)goto LA2_;
 T1_=((s ? s->Sup.len : 0)==((NI)0));
 LA2_: ;
 needQuote=T1_;
 result=((NimStringDesc*)NIM_NIL);
 backslashBuff=((NimStringDesc*)NIM_NIL);
 {
  if(!needQuote)goto LA5_;
  result=resizeString(result,1);
appendString(result,((NimStringDesc*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_7));
 }
 LA5_: ;
 {
  NIM_CHAR c;
  NI i;
  NI L;
  c=(NIM_CHAR)0;
  i=((NI)0);
  L=(s ? s->Sup.len : 0);
  {
   while(1){
    if(!(i<L))goto LA9;
    c=s->data[i];
    {
     if(!((NU8)(c)==(NU8)(92)))goto LA12_;
     backslashBuff=addChar(backslashBuff,c);
    }
    goto LA10_;
    LA12_: ;
    {
     if(!((NU8)(c)==(NU8)(34)))goto LA15_;
     result=resizeString(result,(backslashBuff ? backslashBuff->Sup.len : 0)+ 0);
appendString(result,backslashBuff);
     result=resizeString(result,(backslashBuff ? backslashBuff->Sup.len : 0)+ 0);
appendString(result,backslashBuff);
     backslashBuff=setLengthStr(backslashBuff,((NI)0));
     result=resizeString(result,2);
appendString(result,((NimStringDesc*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_8));
    }
    goto LA10_;
    LA15_: ;
    {
     {
      if(!!(((backslashBuff ? backslashBuff->Sup.len : 0)==((NI)0))))goto LA20_;
      result=resizeString(result,(backslashBuff ? backslashBuff->Sup.len : 0)+ 0);
appendString(result,backslashBuff);
      backslashBuff=setLengthStr(backslashBuff,((NI)0));
     }
     LA20_: ;
     result=addChar(result,c);
    }
    LA10_: ;
    i+=((NI)1);
   }LA9: ;
  }
 }
 {
  if(!needQuote)goto LA24_;
  result=resizeString(result,1);
appendString(result,((NimStringDesc*)&TM__yu6cxgKBBXbNsTkT9cyMd4g_7));
 }
 LA24_: ;
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,nospquoteShell)(NimStringDesc* s){
 NimStringDesc* result;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NimStringDesc*)0;
 result=nospquoteShellWindows(s);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 goto BeforeRet_;
 }BeforeRet_: ;
 return result;}
static N_INLINE(void,nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a,int v,NI size){
 void* T1_;
 T1_=(void*)0;
 T1_=memset(a,v,((size_t)(size)));}
static N_INLINE(void,nimZeroMem)(void* p,NI size){
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p,((int)0),size);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 }BeforeRet_: ;}
N_LIB_PRIVATE N_NIMCALL(NI,findFirstFile__p19a4B9bdPpNH4m9crzgIRxwQ)(NimStringDesc* a,tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA* b){
 NI result;
 NI16* T1_;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NI)0;
 T1_=(NI16*)0;
 T1_=newWideCString__rFkWhJjmVi0m0Hc9agVEZIQ(a);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 result=Dl_14077456_(T1_,b);
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(NI64,nosgetFileSize)(NimStringDesc* file){
 NI64 result;
 tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA a;
 NI resA;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NI64)0;
 nimZeroMem((void*)(&a),sizeof(tyObject_WIN32_FIND_DATA__aYwmSz9bIz0JHAL9ciwIrnhA));
 resA=findFirstFile__p19a4B9bdPpNH4m9crzgIRxwQ(file,(&a));
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 {
  NI32 T5_;
  if(!(resA==((NI)-1)))goto LA3_;
  T5_=(NI32)0;
  T5_=osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
  if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
  raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T5_,file);
  if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 }
 LA3_: ;
 result=rdFileSize__K9a4TDWuOfvg9cCJzFh9c9cB9bQ((&a));
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 Dl_14077614_(resA);
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL,nosfileExists)(NimStringDesc* filename){
 NIM_BOOL result;
 NI32 a;
 NI16* T1_;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NIM_BOOL)0;
 T1_=(NI16*)0;
 T1_=newWideCString__rFkWhJjmVi0m0Hc9agVEZIQ(filename);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 a=Dl_14077624_(T1_);
 {
  if(!!((a==((NI32)-1))))goto LA4_;
  result=((NI32)(a&((NI32)16))==((NI32)0));
 }
 LA4_: ;
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(void,stdlib_osInit000)(void){
{
 nimRegisterThreadLocalMarker(TM__yu6cxgKBBXbNsTkT9cyMd4g_2);

 nimRegisterThreadLocalMarker(TM__yu6cxgKBBXbNsTkT9cyMd4g_3);
}
}
N_LIB_PRIVATE N_NIMCALL(void,stdlib_osDatInit000)(void){
/* section: NIM_merge_TYPE_INIT3 */
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.size=sizeof(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.align=NIM_ALIGNOF(tySequence__sM4lkSb7zS6F7OVMvW9cffQ*);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.kind=24;
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.base=(&NTI__77mFvmsOLKik79ci2hXkHEg_);
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.flags=2;
NTI__sM4lkSb7zS6F7OVMvW9cffQ_.marker=Marker_tySequence__sM4lkSb7zS6F7OVMvW9cffQ;}