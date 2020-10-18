/* Generated by Nim Compiler v1.4.0 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <string.h>
#include <sys/select.h>
#include <time.h>
#include <sys/types.h>
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
typedef struct NimStrPayload NimStrPayload;
typedef struct NimStringV2 NimStringV2;
typedef struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ;
typedef struct tySequence__9apztJSmgERYU8fZOjI4pOg tySequence__9apztJSmgERYU8fZOjI4pOg;
typedef struct tySequence__9apztJSmgERYU8fZOjI4pOg_Content tySequence__9apztJSmgERYU8fZOjI4pOg_Content;

/* section: NIM_merge_TYPES */
typedef NU8 tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw;
typedef NU8 tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg;
struct NimStrPayload {
NI cap;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct NimStringV2 {
NI len;
NimStrPayload* p;
};
typedef NU8 tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg;
struct tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ {
tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val;
NIM_BOOL has;
};
struct tySequence__9apztJSmgERYU8fZOjI4pOg {
  NI len; tySequence__9apztJSmgERYU8fZOjI4pOg_Content* p;
};
typedef long tyArray__RpaqwQ7H8ofV6NGQYsCBHQ[16];
typedef NIM_CHAR tyArray__NSMq3FMCIrS8gSbyinBZ8w[14];


#ifndef tySequence__9apztJSmgERYU8fZOjI4pOg_Content_PP
#define tySequence__9apztJSmgERYU8fZOjI4pOg_Content_PP
struct tySequence__9apztJSmgERYU8fZOjI4pOg_Content { NI cap; int data[SEQ_DECL_SIZE];};
#endif

      
/* section: NIM_merge_PROC_HEADERS */
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain);
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ);
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, dollar___RkX9btpg5sQIaP8yYXB6tbA)(NU64 x);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s);
N_LIB_PRIVATE N_NOINLINE(void, raiseOSError__CWyPYlyH9a6rAuZckFyVxPA)(NI32 errorCode, NimStringV2 additionalInfo);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringV2, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ)(NimStringV2* dest);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val);
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void);
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__XMhukDsWurFLge2YkET1SQ)(int domain, int sockType, int protocol, NIM_BOOL inheritable);
N_LIB_PRIVATE N_NOCONV(void, deallocShared)(void* p);
N_LIB_PRIVATE N_NIMCALL(struct timeval, timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA)(NI timeout);
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__qeAKZQwZIp32QbFZfozb3w)(fd_set* fd, tySequence__9apztJSmgERYU8fZOjI4pOg s, NI* m);
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ)(tySequence__9apztJSmgERYU8fZOjI4pOg* s, fd_set* fd);
N_LIB_PRIVATE N_NIMCALL(void, setLen__DQIr0z73tQ7sA8D6YFmfUQ)(tySequence__9apztJSmgERYU8fZOjI4pOg* s, NI newlen);

/* section: NIM_merge_DATA */
static const struct {
  NI cap; NIM_CHAR data[0+1];
} TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2 = { 0 | NIM_STRLIT_FLAG, "" };
static const NimStringV2 TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3 = {0, (NimStrPayload*)&TM__f9bP3LqjpgpB9cXL8Nnak7tQ_2};

/* section: NIM_merge_VARS */
N_LIB_PRIVATE NIM_CONST int osInvalidSocket__voz9aUXu8jtRbvGZZJHNE8w = ((int) -1);
N_LIB_PRIVATE NIM_CONST int nativeAfInet__rQwsjQjVqXvdaL9aZofzWwg = ((int) 2);
N_LIB_PRIVATE NIM_CONST int nativeAfInet6__Da6PongZL9aJxBrf7qeBmfA = ((int) 10);
N_LIB_PRIVATE NIM_CONST int nativeAfUnix__F0RRmJ8JjfNr6yLSNEn9abA = ((int) 1);
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(void, close__8c1w8B7fpSuB4Dgr5LHVJA)(int socket) {
	int T1_;
	T1_ = (int)0;
	T1_ = close(socket);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw, toSockType__6alUTTXG6jHTyH82e9a1JDw)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw result;
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw colontmpD_;
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw colontmpD__2;
	tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw colontmpD__3;
	result = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	colontmpD_ = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	colontmpD__2 = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	colontmpD__3 = (tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw)0;
	switch (protocol) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		colontmpD_ = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1);
		result = colontmpD_;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		colontmpD__2 = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2);
		result = colontmpD__2;
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		colontmpD__3 = ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3);
		result = colontmpD__3;
	}
	break;
	}
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
N_LIB_PRIVATE N_NIMCALL(int, toInt__na0alpTcWAzTnn2v04w1CQ)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain) {
	int result;
	result = (int)0;
	switch (domain) {
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0):
	{
		result = ((int) 0);
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 1):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2):
	{
		result = ((int) 2);
	}
	break;
	case ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23):
	{
		result = ((int) 10);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__AuveeRAdmuTXERHtCv4MPg)(tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw typ) {
	int result;
	result = (int)0;
	switch (typ) {
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 1):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 2):
	{
		result = ((int) 2);
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 5):
	{
		result = ((int) 5);
	}
	break;
	case ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3):
	{
		result = ((int) 3);
	}
	break;
	}
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ)(tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg p) {
	int result;
	result = (int)0;
	switch (p) {
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 6):
	{
		result = ((int) 6);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 17):
	{
		result = ((int) 17);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 18):
	{
		result = ((int) 0);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 19):
	{
		result = ((int) 41);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 20):
	{
		result = ((int) 255);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 21):
	{
		result = ((int) 1);
	}
	break;
	case ((tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg) 22):
	{
		result = ((int) 58);
	}
	break;
	}
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringV2 s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		if (!(s.len == ((NI) 0))) goto LA3_;
		result = "";
	}
	goto LA1_;
	LA3_: ;
	{
		result = ((NCSTRING) ((*s.p).data));
	}
	LA1_: ;
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(struct addrinfo*, getAddrInfo__ANf7QnbfE8nyIlFuWroDcQ)(NimStringV2 address, NU16 port, tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol) {
	struct addrinfo* result;
	NimStringV2 socketPort;
	struct addrinfo hints;
	NimStringV2 T6_;
	int gaiResult;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (struct addrinfo*)0;
	socketPort.len = 0; socketPort.p = NIM_NIL;
	nimZeroMem((void*)(&hints), sizeof(struct addrinfo));
	result = NIM_NIL;
	hints.ai_family = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	hints.ai_socktype = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	hints.ai_protocol = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	{
		if (!(domain == ((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23))) goto LA4_;
		hints.ai_flags = ((int) 8);
	}
	LA4_: ;
	T6_.len = 0; T6_.p = NIM_NIL;
	{
		if (!(sockType == ((tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw) 3))) goto LA9_;
		socketPort = TM__f9bP3LqjpgpB9cXL8Nnak7tQ_3;
	}
	goto LA7_;
	LA9_: ;
	{
		socketPort = dollar___RkX9btpg5sQIaP8yYXB6tbA(port);
	}
	LA7_: ;
	gaiResult = getaddrinfo(nimToCStringConv(address), nimToCStringConv(socketPort), (&hints), &result);
	{
		NimStringV2 colontmpD_;
		NI32 T17_;
		NCSTRING T18_;
		if (!!((gaiResult == ((NI32) 0)))) goto LA14_;
		colontmpD_.len = 0; colontmpD_.p = NIM_NIL;
		T17_ = (NI32)0;
		T17_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
		T18_ = (NCSTRING)0;
		T18_ = (char *)gai_strerror(gaiResult);
		colontmpD_ = cstrToNimstr(T18_);
		raiseOSError__CWyPYlyH9a6rAuZckFyVxPA(T17_, colontmpD_);
		if (NIM_UNLIKELY(*nimErr_)) goto LA16_;
		{
			LA16_:;
		}
		{
			eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&colontmpD_));
		}
		if (NIM_UNLIKELY(*nimErr_)) goto LA1_;
	}
	LA14_: ;
	{
		LA1_:;
	}
	{
		eqdestroy___dS1BF3Vxjg9aJMmmhVJKSpQ((&socketPort));
	}
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, some__gDZZCqU2e9asjnz7Ee0TNwwoptions)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg val) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	result.has = NIM_TRUE;
	result.val = val;
	return result;
}
static N_INLINE(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, none__lifxITt9cocI1piX9abkoJ6woptions)(void) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ, toKnownDomain__RQ9bFvLg4dpjf7aRPA8ID9bg)(int family) {
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ result;
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ colontmpD_;
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ colontmpD__2;
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ colontmpD__3;
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ colontmpD__4;
	tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ colontmpD__5;
	nimZeroMem((void*)(&result), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	nimZeroMem((void*)(&colontmpD_), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	nimZeroMem((void*)(&colontmpD__2), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	nimZeroMem((void*)(&colontmpD__3), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	nimZeroMem((void*)(&colontmpD__4), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	nimZeroMem((void*)(&colontmpD__5), sizeof(tyObject_Option__FqSKP9b8yM9aV7mJ0VU4DFWQ));
	{
		if (!(family == ((int) 0))) goto LA3_;
		colontmpD_ = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 0));
		result = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		if (!(family == ((int) 1))) goto LA6_;
		colontmpD__2 = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 1));
		result = colontmpD__2;
	}
	goto LA1_;
	LA6_: ;
	{
		if (!(family == ((int) 2))) goto LA9_;
		colontmpD__3 = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 2));
		result = colontmpD__3;
	}
	goto LA1_;
	LA9_: ;
	{
		if (!(family == ((int) 10))) goto LA12_;
		colontmpD__4 = some__gDZZCqU2e9asjnz7Ee0TNwwoptions(((tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg) 23));
		result = colontmpD__4;
	}
	goto LA1_;
	LA12_: ;
	{
		colontmpD__5 = none__lifxITt9cocI1piX9abkoJ6woptions();
		result = colontmpD__5;
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__XMhukDsWurFLge2YkET1SQ)(int domain, int sockType, int protocol, NIM_BOOL inheritable) {
	int result;
	NI32 colontmpD_;
	NI32 colontmpD__2;
	NI32 sockType_2;
	result = (int)0;
	colontmpD_ = (NI32)0;
	colontmpD__2 = (NI32)0;
	{
		if (!inheritable) goto LA3_;
		colontmpD_ = (NI32)(sockType & ((NI32) -524289));
		sockType_2 = colontmpD_;
	}
	goto LA1_;
	LA3_: ;
	{
		colontmpD__2 = (NI32)(sockType | ((int) 524288));
		sockType_2 = colontmpD__2;
	}
	LA1_: ;
	result = socket(domain, sockType_2, protocol);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, createNativeSocket__F1LPwUDx07eMGH1vFNDzcw)(tyEnum_Domain__Q79bEtFARvq0ekDNtvj3Vqg domain, tyEnum_SockType__NQT1bItGG2X9byGdrWX7ujw sockType, tyEnum_Protocol__dqJ1OqRGclxIMMdSLRzzXg protocol, NIM_BOOL inheritable) {
	int result;
	int T1_;
	int T2_;
	int T3_;
	result = (int)0;
	T1_ = (int)0;
	T1_ = toInt__na0alpTcWAzTnn2v04w1CQ(domain);
	T2_ = (int)0;
	T2_ = toInt__AuveeRAdmuTXERHtCv4MPg(sockType);
	T3_ = (int)0;
	T3_ = toInt__7Zb9bURWntNcBAaEQ9aEZK9bQ(protocol);
	result = createNativeSocket__XMhukDsWurFLge2YkET1SQ(T1_, T2_, T3_, inheritable);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, eqdestroy___Ii7N0IPdL6PacyDWpD2POA)(tySequence__9apztJSmgERYU8fZOjI4pOg* dest) {
	NI colontmp_;
	colontmp_ = ((NI) 0);
	{
		while (1) {
			NI T3_;
			T3_ = (*dest).len;
			if (!(colontmp_ < T3_)) goto LA2;
			colontmp_ += ((NI) 1);
		} LA2: ;
	}
	if ((*dest).p && !((*dest).p->cap & NIM_STRLIT_FLAG)) {
 deallocShared((*dest).p);
}
}
N_LIB_PRIVATE N_NIMCALL(struct timeval, timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA)(NI timeout) {
	struct timeval result;
	nimZeroMem((void*)(&result), sizeof(struct timeval));
	{
		NI seconds;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		seconds = (NI)(timeout / ((NI) 1000));
		result.tv_sec = seconds;
		result.tv_usec = (NI)((NI)(timeout - (NI)(seconds * ((NI) 1000))) * ((NI) 1000));
	}
	LA3_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, createFdSet__qeAKZQwZIp32QbFZfozb3w)(fd_set* fd, tySequence__9apztJSmgERYU8fZOjI4pOg s, NI* m) {
	FD_ZERO(fd);
	{
		int* i;
		NI i_2;
		NI L;
		NI T2_;
		i = (int*)0;
		i_2 = ((NI) 0);
		T2_ = s.len;
		L = T2_;
		{
			while (1) {
				if (!(i_2 < L)) goto LA4;
				i = (&s.p->data[i_2]);
				(*m) = (((*m) >= ((NI) ((*i)))) ? (*m) : ((NI) ((*i))));
				FD_SET((*i), fd);
				i_2 += ((NI) 1);
			} LA4: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ)(tySequence__9apztJSmgERYU8fZOjI4pOg* s, fd_set* fd) {
	NI i;
	NI L;
	NI T1_;
	i = ((NI) 0);
	T1_ = (*s).len;
	L = T1_;
	{
		while (1) {
			if (!(i < L)) goto LA3;
			{
				int T6_;
				T6_ = (int)0;
				T6_ = FD_ISSET((*s).p->data[i], fd);
				if (!(T6_ == ((NI32) 0))) goto LA7_;
				(*s).p->data[i] = (*s).p->data[(NI)(L - ((NI) 1))];
				L -= ((NI) 1);
			}
			goto LA4_;
			LA7_: ;
			{
				i += ((NI) 1);
			}
			LA4_: ;
		} LA3: ;
	}
	setLen__DQIr0z73tQ7sA8D6YFmfUQ((&(*s)), ((NI) (L)));
}
N_LIB_PRIVATE N_NIMCALL(NI, selectRead__hYdMbc9crqOqsDFcxhERoLA)(tySequence__9apztJSmgERYU8fZOjI4pOg* readfds, NI timeout) {
	NI result;
	struct timeval tv;
	fd_set rd;
	NI m;
	result = (NI)0;
	tv = timeValFromMilliseconds__OtKozLj4h73UWNus5W4NYA(timeout);
	nimZeroMem((void*)(&rd), sizeof(fd_set));
	m = ((NI) 0);
	createFdSet__qeAKZQwZIp32QbFZfozb3w((&rd), (*readfds), (&m));
	{
		int T5_;
		if (!!((timeout == ((NI) -1)))) goto LA3_;
		T5_ = (int)0;
		T5_ = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, (&tv));
		result = ((NI) (T5_));
	}
	goto LA1_;
	LA3_: ;
	{
		int T7_;
		T7_ = (int)0;
		T7_ = select(((int) ((NI)(m + ((NI) 1)))), (&rd), NIM_NIL, NIM_NIL, NIM_NIL);
		result = ((NI) (T7_));
	}
	LA1_: ;
	pruneSocketSet__DzCd1luyXumO9c9aKDjkCMAQ(readfds, (&rd));
	return result;
}
