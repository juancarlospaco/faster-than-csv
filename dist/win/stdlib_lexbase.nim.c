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
struct RootObj{
TNimType* m_type;};
struct TGenericSeq{
NI len;
NI reserved;};
struct NimStringDesc{
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];};
typedef NU8 tySet_tyChar__nmiMWKVIe46vacnhAFrQvw[32];
struct tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg{
  RootObj Sup;
NI bufpos;
NimStringDesc* buf;
tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input;
NI lineNumber;
NI sentinel;
NI lineStart;
NI offsetBase;
tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars;};
typedef N_NIMCALL_PTR(void,tyProc__JQrsH08b4uPTH9cyFPlVOZg)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NIM_BOOL,tyProc__9bmhFrLahRsL2hltfRDVtlQ)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(void,tyProc__3svSoGIUJIsHkaBL7q4DAQ)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s,NI pos);
typedef N_NIMCALL_PTR(NI,tyProc__xflqkf2D1uVClg70czEDHA)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
typedef N_NIMCALL_PTR(NI,tyProc__c9c0f59ak4YGQ6neEym8LPKw)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s,NimStringDesc** buffer,tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
typedef N_NIMCALL_PTR(NIM_BOOL,tyProc__7jFfqMk9ajToCz6Hv9atCA4A)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s,NimStringDesc** line);
typedef N_NIMCALL_PTR(NI,tyProc__2VVzVL9bOnKhj1eZKkf9cEuA)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s,void* buffer,NI bufLen);
typedef N_NIMCALL_PTR(void,tyProc__ki6p1QyfOkJLQJ9aw5NI0AQ)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s,void* buffer,NI bufLen);
struct tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ{
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
tyProc__JQrsH08b4uPTH9cyFPlVOZg flushImpl;};
struct tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA{
NI a;
NI b;};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode{
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;};
/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void,nimCopyMem)(void* dest,void* source,NI size);
N_NIMCALL(NimStringDesc*,mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(void,fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
static N_INLINE(void,moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest,void* source,NI size);
N_LIB_PRIVATE N_NIMCALL(NI,readDataStr__78VQwN48e7jIIL2Q9bINIFw_2)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s,NimStringDesc** buffer,tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA slice);
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA,dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a,NI b);
static N_INLINE(void,nimZeroMem)(void* p,NI size);
static N_INLINE(void,nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a,int v,NI size);
static N_INLINE(NIM_BOOL*,nimErrorFlag)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*,setLengthStr)(NimStringDesc* s,NI newLen);
N_LIB_PRIVATE N_NIMCALL(void,skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L);
N_LIB_PRIVATE N_NIMCALL(NI,fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L,NI pos);
N_LIB_PRIVATE N_NIMCALL(void,close__y1KA3B0U09bKtU09am9a9avRYQ_3)(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* s);
/* section: NIM_merge_DATA */
extern TNimType NTI__ytyiCJqK439aF9cIibuRVpAg_;
N_LIB_PRIVATE TNimType NTI__MAw8rJZtJ279bVV3TWMtXSg_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
extern TNimType NTI__1G0jiQbe7KwD5ADza5AZaw_;
extern TNimType NTI__nmiMWKVIe46vacnhAFrQvw_;
N_LIB_PRIVATE TNimType NTI__HDqWPvEAxZK51ZcfaeQEdg_;
/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NI,getColNumber__KUMaHICF9bUPO7tt6hrBs3g)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L,NI pos){
 NI result;
 result=(NI)0;
 result=((NI)(pos-(*L).lineStart)> 0?((NI)(pos-(*L).lineStart)): -((NI)(pos-(*L).lineStart)));
 return result;}
static N_INLINE(void,nimCopyMem)(void* dest,void* source,NI size){
 void* T1_;
 T1_=(void*)0;
 T1_=memcpy(dest,source,((size_t)(size)));}
static N_INLINE(void,moveMem__i80o3k0SgEI5gTRCzYdyWA_2system)(void* dest,void* source,NI size){
 void* T1_;
 T1_=(void*)0;
 T1_=memmove(dest,source,((size_t)(size)));}
static N_INLINE(void,nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a,int v,NI size){
 void* T1_;
 T1_=(void*)0;
 T1_=memset(a,v,((size_t)(size)));}
static N_INLINE(NIM_BOOL*,nimErrorFlag)(void){
 NIM_BOOL* result;
 result=(NIM_BOOL*)0;
 result=(&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
 return result;}
static N_INLINE(void,nimZeroMem)(void* p,NI size){
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p,((int)0),size);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 }BeforeRet_: ;}
static N_INLINE(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA,dotdot___BokNSDrKN1xmV1nA01G9brAsystem)(NI a,NI b){
 tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA result;
 nimZeroMem((void*)(&result),sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
 nimZeroMem((void*)(&result),sizeof(tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA));
 result.a=a;
 result.b=b;
 return result;}
N_LIB_PRIVATE N_NIMCALL(void,fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L){
 NI charsRead;
 NI toCopy;
 NI s;
 NI oldBufLen;
 tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T6_;
 NI T7_;
 tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T8_;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 charsRead=(NI)0;
 toCopy=(NI)0;
 s=(NI)0;
 oldBufLen=(NI)0;
 toCopy=(NI)(((*L).buf ?(*L).buf->Sup.len : 0)-(NI)((*L).sentinel+((NI)1)));
 {
  void* T5_;
  if(!(((NI)0)< toCopy))goto LA3_;
  T5_=(void*)0;
  T5_=((void*)((&(*L).buf->data[((NI)0)])));
  moveMem__i80o3k0SgEI5gTRCzYdyWA_2system(T5_,((void*)((&(*L).buf->data[(NI)((*L).sentinel+((NI)1))]))),((NI)(toCopy)));
 }
 LA3_: ;
 T6_=(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
 T6_=(*L).input;
 T7_=(NI)0;
 T7_=toCopy;
 T8_=dotdot___BokNSDrKN1xmV1nA01G9brAsystem(T7_,(NI)((NI)((NI)(toCopy+(*L).sentinel)+((NI)1))-((NI)1)));
 charsRead=readDataStr__78VQwN48e7jIIL2Q9bINIFw_2(T6_,(&(*L).buf),T8_);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 s=(NI)(toCopy+charsRead);
 {
  if(!(charsRead<(NI)((*L).sentinel+((NI)1))))goto LA11_;
  (*L).buf->data[s]=0;
  (*L).sentinel=s;
 }
 goto LA9_;
 LA11_: ;
 {
  s==((NI)1);
  {
   while(1){
    {
     while(1){
      NIM_BOOL T18_;
      T18_=(NIM_BOOL)0;
      T18_=(((NI)0)<= s);
      if(!(T18_))goto LA19_;
      T18_=!((((*L).refillChars[(NU)(((NU8)((*L).buf->data[s])))>>3] &(1U<<((NU)(((NU8)((*L).buf->data[s])))&7U)))!=0));
      LA19_: ;
      if(!T18_)goto LA17;
      s==((NI)1);
     }LA17: ;
    }
    {
     if(!(((NI)0)<= s))goto LA22_;
     (*L).sentinel=s;
     goto LA14;
    }
    goto LA20_;
    LA22_: ;
    {
     tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* T25_;
     tyObject_HSlice__EE5dzjqoOrHT6HJhIPXAvA T26_;
     oldBufLen=((*L).buf ?(*L).buf->Sup.len : 0);
     (*L).buf=setLengthStr((*L).buf,((NI)((NI)(((*L).buf ?(*L).buf->Sup.len : 0)*((NI)2)))));
     T25_=(tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ*)0;
     T25_=(*L).input;
     T26_=dotdot___BokNSDrKN1xmV1nA01G9brAsystem(oldBufLen,(NI)(((*L).buf ?(*L).buf->Sup.len : 0)-((NI)1)));
     charsRead=readDataStr__78VQwN48e7jIIL2Q9bINIFw_2(T25_,(&(*L).buf),T26_);
     if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
     {
      if(!(charsRead<oldBufLen))goto LA29_;
      (*L).buf->data[(NI)(oldBufLen+charsRead)]=0;
      (*L).sentinel=(NI)(oldBufLen+charsRead);
      goto LA14;
     }
     LA29_: ;
     s=(NI)(((*L).buf ?(*L).buf->Sup.len : 0)-((NI)1));
    }
    LA20_: ;
   }
  }LA14: ;
 }
 LA9_: ;
 }BeforeRet_: ;}
N_LIB_PRIVATE N_NIMCALL(void,skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L){
 {
  NIM_BOOL T3_;
  NIM_BOOL T4_;
  T3_=(NIM_BOOL)0;
  T4_=(NIM_BOOL)0;
  T4_=((NU8)((*L).buf->data[((NI)0)])==(NU8)(239));
  if(!(T4_))goto LA5_;
  T4_=((NU8)((*L).buf->data[((NI)1)])==(NU8)(187));
  LA5_: ;
  T3_=T4_;
  if(!(T3_))goto LA6_;
  T3_=((NU8)((*L).buf->data[((NI)2)])==(NU8)(191));
  LA6_: ;
  if(!T3_)goto LA7_;
  (*L).bufpos+=((NI)3);
  (*L).lineStart+=((NI)3);
 }
 LA7_: ;}
N_LIB_PRIVATE N_NIMCALL(void,open__P89aGatd6bDNJ0Ak5E9cQgWw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L,tyObject_StreamObj__THYguAi9bSgidczZ3ywEIMQ* input,NI bufLen,tySet_tyChar__nmiMWKVIe46vacnhAFrQvw refillChars){
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 (*L).input=input;
 (*L).bufpos=((NI)0);
 (*L).offsetBase=((NI)0);
 nimCopyMem((void*)(*L).refillChars,(NIM_CONST void*)refillChars,32);
 (*L).buf=mnewString(((NI)(bufLen)));
 (*L).sentinel=(NI)(bufLen-((NI)1));
 (*L).lineStart=((NI)0);
 (*L).lineNumber=((NI)1);
 fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 skipUtf8Bom__m9bpQUVeRkyuyv4zAGVgY9bw_2(L);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 }BeforeRet_: ;}
N_LIB_PRIVATE N_NIMCALL(NI,fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L,NI pos){
 NI result;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NI)0;
 {
  if(!(pos<(*L).sentinel))goto LA3_;
  result=(NI)(pos+((NI)1));
 }
 goto LA1_;
 LA3_: ;
 {
  fillBuffer__m9bpQUVeRkyuyv4zAGVgY9bw(L);
  if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
  (*L).offsetBase+=pos;
  (*L).bufpos=((NI)0);
  result=((NI)0);
 }
 LA1_: ;
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(NI,handleCR__sLQC1Z9cokufE3lZEw9b42Cw)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L,NI pos){
 NI result;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NI)0;
 (*L).lineNumber+=((NI)1);
 result=fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L,pos);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 {
  if(!((NU8)((*L).buf->data[result])==(NU8)(10)))goto LA3_;
  result=fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L,result);
  if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 }
 LA3_: ;
 (*L).lineStart=result;
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(NI,handleLF__sLQC1Z9cokufE3lZEw9b42Cw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L,NI pos){
 NI result;
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 result=(NI)0;
 (*L).lineNumber+=((NI)1);
 result=fillBaseLexer__sLQC1Z9cokufE3lZEw9b42Cw_2(L,pos);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 (*L).lineStart=result;
 }BeforeRet_: ;
 return result;}
N_LIB_PRIVATE N_NIMCALL(void,close__m9bpQUVeRkyuyv4zAGVgY9bw_3)(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg* L){
NIM_BOOL* nimErr_;
{nimErr_=nimErrorFlag();
 close__y1KA3B0U09bKtU09am9a9avRYQ_3((*L).input);
 if(NIM_UNLIKELY(*nimErr_))goto BeforeRet_;
 }BeforeRet_: ;}
N_LIB_PRIVATE N_NIMCALL(void,stdlib_lexbaseDatInit000)(void){
/* section: NIM_merge_TYPE_INIT1 */
static TNimNode* TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[8];
static TNimNode TM__k6p5NxDJat9aTyZxfZjCDJQ_0[10];
/* section: NIM_merge_TYPE_INIT3 */
NTI__MAw8rJZtJ279bVV3TWMtXSg_.size=sizeof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTI__MAw8rJZtJ279bVV3TWMtXSg_.align=NIM_ALIGNOF(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg);
NTI__MAw8rJZtJ279bVV3TWMtXSg_.kind=17;
NTI__MAw8rJZtJ279bVV3TWMtXSg_.base=(&NTI__ytyiCJqK439aF9cIibuRVpAg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[0]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,bufpos);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].typ=(&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[1].name="bufpos";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[1]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,buf);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].typ=(&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[2].name="buf";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[2]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,input);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].typ=(&NTI__1G0jiQbe7KwD5ADza5AZaw_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[3].name="input";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[3]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,lineNumber);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].typ=(&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[4].name="lineNumber";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[4]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,sentinel);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].typ=(&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[5].name="sentinel";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[5]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,lineStart);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].typ=(&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[6].name="lineStart";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[6]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,offsetBase);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].typ=(&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[7].name="offsetBase";
TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[7]=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8];
NTI__HDqWPvEAxZK51ZcfaeQEdg_.size=sizeof(tySet_tyChar__nmiMWKVIe46vacnhAFrQvw);
NTI__HDqWPvEAxZK51ZcfaeQEdg_.align=NIM_ALIGNOF(tySet_tyChar__nmiMWKVIe46vacnhAFrQvw);
NTI__HDqWPvEAxZK51ZcfaeQEdg_.kind=19;
NTI__HDqWPvEAxZK51ZcfaeQEdg_.base=(&NTI__nmiMWKVIe46vacnhAFrQvw_);
NTI__HDqWPvEAxZK51ZcfaeQEdg_.flags=3;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9].len=0;TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9].kind=0;
NTI__HDqWPvEAxZK51ZcfaeQEdg_.node=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[9];
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].kind=1;
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].offset=offsetof(tyObject_BaseLexer__MAw8rJZtJ279bVV3TWMtXSg,refillChars);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].typ=(&NTI__HDqWPvEAxZK51ZcfaeQEdg_);
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[8].name="refillChars";
TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].len=8;TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].kind=2;TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0].sons=&TM__k6p5NxDJat9aTyZxfZjCDJQ_2_8[0];
NTI__MAw8rJZtJ279bVV3TWMtXSg_.node=&TM__k6p5NxDJat9aTyZxfZjCDJQ_0[0];}