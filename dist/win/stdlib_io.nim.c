/* Generated by Nim Compiler v1.3.5 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

/* section: NIM_merge_HEADERS */

#include "nimbase.h"
#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <handleapi.h>
#include <string.h>
#include <errno.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw;
typedef struct tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA tyObject_CatchableError__qrLSDoe2oBoAqNtJ9badtnA;
typedef struct Exception Exception;
typedef struct RootObj RootObj;
typedef struct tySequence__uB9b75OUPRENsBAu4AnoePA tySequence__uB9b75OUPRENsBAu4AnoePA;
typedef struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA;

/* section: NIM_merge_TYPES */
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg;
typedef NimStringDesc* tyArray__XL8FfPqMNtuU56fW9c8pBtQ[5];
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
typedef NU8 tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw;
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
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_STDCALL_PTR(NI32, tyProc__PUnN9cBvfpDX0GlY5QGXGXw) (int hConsoleInput, void* lpBuffer, NI32 nNumberOfCharsToRead, NI32* lpNumberOfCharsRead, void* pInputControl);
typedef N_STDCALL_PTR(NI32, tyProc__9bXer9a4ps9aSGctILcxWReVw) (void);
typedef N_STDCALL_PTR(NI32, tyProc__aO673xGTLLxou7P7GxoCXA) (NI32 dwFlags, void* lpSource, NI32 dwMessageId, NI32 dwLanguageId, void* lpBuffer, NI32 nSize, void* arguments);
typedef N_STDCALL_PTR(void, tyProc__im9buRnIvptJfzdASYMEbBA) (void* p);
struct tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA {
NCSTRING procname;
NI line;
NCSTRING filename;
};

/* section: NIM_merge_SEQ_TYPES */
struct tySequence__uB9b75OUPRENsBAu4AnoePA {
  TGenericSeq Sup;
  tyObject_StackTraceEntry__oLyohQ7O2XOvGnflOss8EA data[SEQ_DECL_SIZE];
};

/* section: NIM_merge_PROC_HEADERS */
N_LIB_PRIVATE N_NIMCALL(void*, fopen__bn2yAzk2l19aVmr8QZTptyA)(NCSTRING filename, NCSTRING mode);
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__G8rSmf9akUNUzuZWlrfFAmA)(NCSTRING s);
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void);
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, raiseExceptionEx)(Exception* e, NCSTRING ename, NCSTRING procname, NCSTRING filename, NI line);
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2)(FILE* f);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__FK5lmHTzEdX6epYBp9bfgMg_2)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__hOwLbM7eXaZgEJrHWLeiNg)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NI16*, newWideCString__K8rR70TBwrP6FNBzDhVVOA)(NCSTRING source, NI L);
N_LIB_PRIVATE N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void, nimLoadLibraryError)(NimStringDesc* path);
N_LIB_PRIVATE N_NIMCALL(void*, nimGetProcAddr)(void* lib, NCSTRING name);
N_LIB_PRIVATE N_NIMCALL(int, getOsFileHandle__hOwLbM7eXaZgEJrHWLeiNg_2)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___NleKxkskBzDhxdrvP1WL7A)(NI16* s);
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newLen);
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y);
N_LIB_PRIVATE N_NIMCALL(void, writeWindows__JO9bn8JE1R6MjKZqdvhBrWg)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize);
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll__mQf9blHFlTwuSvJjirhpY6g)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__2ezUTSmBrmr5VkZNxReTYQ)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile__W4tKfHpbz7kHhikLsBc0EA)(FILE* file, NI64 len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__Y9atVWUcVyKHG9aBP4D0P9czA)(FILE* f, void* buffer, NI len);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__FK5lmHTzEdX6epYBp9bfgMg)(FILE* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2)(FILE* file);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);

/* section: NIM_merge_DATA */
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_2, "rbN", 3);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_3, "wbN", 3);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_4, "w+bN", 4);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_5, "r+bN", 4);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_6, "abN", 3);
N_LIB_PRIVATE NIM_CONST tyArray__XL8FfPqMNtuU56fW9c8pBtQ FormatOpen__iWZDMxVvD1FETfmW09b8gFQ = {((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_2),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_3),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_4),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_5),
((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_6)}
;
N_LIB_PRIVATE TNimType NTI__MAWzaQJYFu3mlxj0Ppxhmw_;
N_LIB_PRIVATE TNimType NTI__XBeRj4rw9bUuE7CB3DS1rgg_;
extern TNimType NTI__HMIVdYjdZYWskTmTQVo5BQ_;
extern TNimType NTI__iLZrPn9anoh9ad1MmO0RczFw_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_7, "cannot set file position", 24);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_8, "cannot retrieve file position", 29);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_9, "errno: ", 7);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_10, " `", 2);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_11, "`", 1);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_14, "kernel32", 8);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_15, "kernel32", 8);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_24, "error: ", 7);
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_25, "cannot write string to file", 27);
N_LIB_PRIVATE TNimType NTI__2gIj3gQlK3HZJjQaYCP6ZQ_;
STRING_LITERAL(TM__MnCJ0VAmeZ9aTATUB39cx60Q_26, "cannot open: ", 13);

/* section: NIM_merge_VARS */
extern NIM_BOOL nimInErrorMode__759bT87luu8XGcbkw13FUjA;
static void* TM__MnCJ0VAmeZ9aTATUB39cx60Q_12;
tyProc__PUnN9cBvfpDX0GlY5QGXGXw Dl_3980401_;
tyProc__9bXer9a4ps9aSGctILcxWReVw Dl_3980409_;
tyProc__aO673xGTLLxou7P7GxoCXA Dl_3980411_;
tyProc__im9buRnIvptJfzdASYMEbBA Dl_3980420_;

/* section: NIM_merge_PROCS */
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, setInheritable__avyDiy1HdQrfaD3Ql9b63EQ)(int f, NIM_BOOL inheritable) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = SetHandleInformation(((void*) (f)), ((unsigned long) 1), ((unsigned long) (inheritable)));
	result = !((T1_ == ((NI32) 0)));
	return result;
}
static N_INLINE(NIM_BOOL*, nimErrorFlag)(void) {
	NIM_BOOL* result;
	result = (NIM_BOOL*)0;
	result = (&nimInErrorMode__759bT87luu8XGcbkw13FUjA);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void*, fopen__bn2yAzk2l19aVmr8QZTptyA)(NCSTRING filename, NCSTRING mode) {
	void* result;
	NI16* f;
	NI16* m;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (void*)0;
	f = newWideCString__G8rSmf9akUNUzuZWlrfFAmA(filename);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	m = newWideCString__G8rSmf9akUNUzuZWlrfFAmA(mode);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	result = _wfopen(f, m);
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NCSTRING, nimToCStringConv)(NimStringDesc* s) {
	NCSTRING result;
	result = (NCSTRING)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (s == NIM_NIL);
		if (T3_) goto LA4_;
		T3_ = ((*s).Sup.len == ((NI) 0));
		LA4_: ;
		if (!T3_) goto LA5_;
		result = "";
	}
	goto LA1_;
	LA5_: ;
	{
		result = ((NCSTRING) ((*s).data));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, open__gq12VLhVO0NBzUTnGgz4nw)(FILE** f, NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	NIM_BOOL result;
	void* p;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	p = fopen__bn2yAzk2l19aVmr8QZTptyA(nimToCStringConv(filename), nimToCStringConv(FormatOpen__iWZDMxVvD1FETfmW09b8gFQ[(mode)- 0]));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		FILE* f2;
		if (!!((p == NIM_NIL))) goto LA3_;
		f2 = ((FILE*) (p));
		result = NIM_TRUE;
		(*f) = ((FILE*) (p));
		{
			NIM_BOOL T7_;
			int T11_;
			T7_ = (NIM_BOOL)0;
			T7_ = (((NI) 0) < bufSize);
			if (!(T7_)) goto LA8_;
			T7_ = (bufSize <= ((NI) 2147483647));
			LA8_: ;
			if (!T7_) goto LA9_;
			T11_ = (int)0;
			T11_ = setvbuf((*f), NIM_NIL, _IOFBF, ((size_t) (bufSize)));
			(void)(T11_);
		}
		goto LA5_;
		LA9_: ;
		{
			int T15_;
			if (!(bufSize == ((NI) 0))) goto LA13_;
			T15_ = (int)0;
			T15_ = setvbuf((*f), NIM_NIL, _IONBF, ((size_t) 0));
			(void)(T15_);
		}
		goto LA5_;
		LA13_: ;
		LA5_: ;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, close__fU6ZlJAtQ9bre04EDZLdGsA)(FILE* f) {
	{
		int T5_;
		if (!!((f == 0))) goto LA3_;
		T5_ = (int)0;
		T5_ = fclose(f);
		(void)(T5_);
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, endOfFile__FK5lmHTzEdX6epYBp9bfgMg)(FILE* f) {
	NIM_BOOL result;
	int c;
	int T1_;
{	result = (NIM_BOOL)0;
	c = fgetc(f);
	T1_ = (int)0;
	T1_ = ungetc(c, f);
	(void)(T1_);
	result = (c < ((NI32) 0));
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NOINLINE(void, raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ)(NimStringDesc* msg) {
	tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T1_;
{	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
	T1_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
	(*T1_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
	(*T1_).Sup.Sup.name = "IOError";
	(*T1_).Sup.Sup.message = copyString(msg);
	(*T1_).Sup.Sup.parent = NIM_NIL;
	raiseExceptionEx((Exception*)T1_, "IOError", "raiseEIO", "io.nim", 139);
	goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, setFilePos__FA7rp0y5drPpfGuceb3IJg)(FILE* f, NI64 pos, tyEnum_FileSeekPos__I9aQjuvWxs8BspGbxwsngWw relativeTo) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		T3_ = (int)0;
		T3_ = _fseeki64(f, pos, ((int) (relativeTo)));
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_7));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI64, getFilePos__ihE3HyH1VBDfrPO1nZT7RQ)(FILE* f) {
	NI64 result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI64)0;
	result = _ftelli64(f);
	{
		if (!(result < IL64(0))) goto LA3_;
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_8));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA3_: ;
	}BeforeRet_: ;
	return result;
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
		void* T5_;
		void* T6_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (void*)0;
		T5_ = ((void*) ((&(*dest).data[(*dest).Sup.len])));
		T6_ = (void*)0;
		T6_ = ((void*) ((*src).data));
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(T5_, T6_, ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2)(FILE* f) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		int T3_;
		NimStringDesc* msg;
		NimStringDesc* T6_;
		NimStringDesc* T7_;
		NCSTRING T8_;
		NimStringDesc* T9_;
		T3_ = (int)0;
		T3_ = ferror(f);
		if (!!((T3_ == ((NI32) 0)))) goto LA4_;
		T6_ = (NimStringDesc*)0;
		T7_ = (NimStringDesc*)0;
		T7_ = nimIntToStr(((NI) (errno)));
		T8_ = (NCSTRING)0;
		T8_ = strerror(errno);
		T9_ = (NimStringDesc*)0;
		T9_ = cstrToNimstr(T8_);
		T6_ = rawNewString((T7_ ? T7_->Sup.len : 0) + (T9_ ? T9_->Sup.len : 0) + 10);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_9));
appendString(T6_, T7_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10));
appendString(T6_, T9_);
appendString(T6_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_11));
		msg = T6_;
		clearerr(f);
		raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(msg);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NI, readBuffer__Y9atVWUcVyKHG9aBP4D0P9czA)(FILE* f, void* buffer, NI len) {
	NI result;
	size_t T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (size_t)0;
	T1_ = fread(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	{
		if (!!((result == ((NI) (len))))) goto LA4_;
		checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2(f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, getFileHandle__hOwLbM7eXaZgEJrHWLeiNg)(FILE* f) {
	int result;
	result = (int)0;
	result = _fileno(f);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, isatty__FK5lmHTzEdX6epYBp9bfgMg_2)(FILE* f) {
	NIM_BOOL result;
	int T1_;
	int T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = getFileHandle__hOwLbM7eXaZgEJrHWLeiNg(f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (int)0;
	T2_ = _isatty(T1_);
	result = !((T2_ == ((NI32) 0)));
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(int, getOsFileHandle__hOwLbM7eXaZgEJrHWLeiNg_2)(FILE* f) {
	int result;
	int T1_;
	NI T2_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (int)0;
	T1_ = (int)0;
	T1_ = getFileHandle__hOwLbM7eXaZgEJrHWLeiNg(f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	T2_ = (NI)0;
	T2_ = _get_osfhandle(T1_);
	result = ((int) (T2_));
	}BeforeRet_: ;
	return result;
}
static N_INLINE(NIM_BOOL, eqeq___aqip9cmQIuefPKdd25wuEEwsystem)(NCSTRING x, NCSTRING y) {
	NIM_BOOL result;
	result = (NIM_BOOL)0;
	{
		if (!(((void*) (x)) == ((void*) (y)))) goto LA3_;
		result = NIM_TRUE;
	}
	goto LA1_;
	LA3_: ;
	{
		NIM_BOOL T6_;
		T6_ = (NIM_BOOL)0;
		T6_ = (x == 0);
		if (T6_) goto LA7_;
		T6_ = (y == 0);
		LA7_: ;
		if (!T6_) goto LA8_;
		result = NIM_FALSE;
	}
	goto LA1_;
	LA8_: ;
	{
		int T11_;
		T11_ = (int)0;
		T11_ = strcmp(x, y);
		result = (T11_ == ((NI32) 0));
	}
	LA1_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, readLine__FbqDHP9bu7nqCh9c04dnSOxw)(FILE* f, NimStringDesc** line) {
	NIM_BOOL result;
	NI pos;
	NI sp;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NIM_BOOL)0;
	{
		NIM_BOOL T3_;
		NI32 numberOfCharsRead;
		NI16* buffer;
		NimStringDesc* T34_;
		T3_ = (NIM_BOOL)0;
		T3_ = isatty__FK5lmHTzEdX6epYBp9bfgMg_2(f);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		numberOfCharsRead = ((NI32) 0);
		buffer = newWideCString__K8rR70TBwrP6FNBzDhVVOA("", ((NI) 2048));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		{
			int T8_;
			NI32 T9_;
			NI32 error;
			NimStringDesc* errorMsg;
			NI16* msgbuf;
			NimStringDesc* T21_;
			NimStringDesc* T22_;
			T8_ = (int)0;
			T8_ = getOsFileHandle__hOwLbM7eXaZgEJrHWLeiNg_2(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			T9_ = (NI32)0;
			T9_ = Dl_3980401_(T8_, ((void*) ((&buffer[((NI) 0)]))), ((NI32) 2048), (&numberOfCharsRead), NIM_NIL);
			if (!(T9_ == ((NI32) 0))) goto LA10_;
			error = Dl_3980409_();
			errorMsg = (NimStringDesc*)0;
			msgbuf = (NI16*)0;
			{
				NI32 T14_;
				T14_ = (NI32)0;
				T14_ = Dl_3980411_(((NI32) 4864), NIM_NIL, error, ((NI32) 0), ((void*) (&msgbuf)), ((NI32) 0), NIM_NIL);
				if (!!((T14_ == ((NI32) 0)))) goto LA15_;
				errorMsg = dollar___NleKxkskBzDhxdrvP1WL7A(msgbuf);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				{
					if (!!((msgbuf == NIM_NIL))) goto LA19_;
					Dl_3980420_(((void*) (msgbuf)));
				}
				LA19_: ;
			}
			LA15_: ;
			T21_ = (NimStringDesc*)0;
			T22_ = (NimStringDesc*)0;
			T22_ = nimIntToStr(((NI) (error)));
			T21_ = rawNewString((T22_ ? T22_->Sup.len : 0) + (errorMsg ? errorMsg->Sup.len : 0) + 10);
appendString(T21_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_24));
appendString(T21_, T22_);
appendString(T21_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_10));
appendString(T21_, errorMsg);
appendString(T21_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_11));
			raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(T21_);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		}
		LA10_: ;
		numberOfCharsRead -= ((NI) 2);
		{
			NI32 i;
			NI32 res;
			i = (NI32)0;
			res = ((NI32) 0);
			{
				while (1) {
					if (!(res < numberOfCharsRead)) goto LA25;
					i = res;
					{
						if (!(((NU16) (buffer[i])) == ((NU16) 26))) goto LA28_;
						close__fU6ZlJAtQ9bre04EDZLdGsA(f);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						{
							if (!(i == ((NI32) 0))) goto LA32_;
							(*line) = ((NimStringDesc*) NIM_NIL);
							result = NIM_FALSE;
							goto BeforeRet_;
						}
						LA32_: ;
						numberOfCharsRead = i;
						goto LA23;
					}
					LA28_: ;
					res += ((NI) 1);
				} LA25: ;
			}
		} LA23: ;
		buffer[numberOfCharsRead] = ((NI16) 0);
		T34_ = (NimStringDesc*)0;
		T34_ = dollar___NleKxkskBzDhxdrvP1WL7A(buffer);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		(*line) = T34_;
		result = NIM_TRUE;
		goto BeforeRet_;
	}
	LA4_: ;
	pos = ((NI) 0);
	sp = ((((*line) ? (*line)->Sup.len : 0) >= ((NI) 80)) ? ((*line) ? (*line)->Sup.len : 0) : ((NI) 80));
	(*line) = setLengthStr((*line), ((NI) (sp)));
	{
		while (1) {
			NIM_BOOL fgetsSuccess;
			void* m;
			{
				NI i_2;
				NI i_3;
				i_2 = (NI)0;
				i_3 = ((NI) 0);
				{
					while (1) {
						if (!(i_3 < sp)) goto LA39;
						i_2 = i_3;
						(*line)->data[(NI)(pos + i_2)] = 10;
						i_3 += ((NI) 1);
					} LA39: ;
				}
			}
			fgetsSuccess = (NIM_BOOL)0;
			{
				while (1) {
					{
						NCSTRING T43_;
						NIM_BOOL T44_;
						T43_ = (NCSTRING)0;
						T43_ = fgets(((NCSTRING) ((&(*line)->data[pos]))), ((int) (sp)), f);
						T44_ = (NIM_BOOL)0;
						T44_ = eqeq___aqip9cmQIuefPKdd25wuEEwsystem(T43_, NIM_NIL);
						fgetsSuccess = !(T44_);
						{
							if (!fgetsSuccess) goto LA47_;
							goto LA40;
						}
						LA47_: ;
						{
							if (!(errno == EINTR)) goto LA51_;
							errno = ((int) 0);
							clearerr(f);
							goto LA42;
						}
						LA51_: ;
						checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2(f);
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
						goto LA40;
					} LA42: ;
				}
			} LA40: ;
			m = memchr(((void*) ((&(*line)->data[pos]))), ((int) 10), ((size_t) (sp)));
			{
				NI last;
				NIM_BOOL T76_;
				if (!!((m == NIM_NIL))) goto LA55_;
				last = (NI)(((NI) (ptrdiff_t) (m)) - ((NI) (ptrdiff_t) ((&(*line)->data[((NI) 0)]))));
				{
					NIM_BOOL T59_;
					NIM_BOOL T63_;
					T59_ = (NIM_BOOL)0;
					T59_ = (((NI) 0) < last);
					if (!(T59_)) goto LA60_;
					T59_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(13));
					LA60_: ;
					if (!T59_) goto LA61_;
					(*line) = setLengthStr((*line), ((NI) ((NI)(last - ((NI) 1)))));
					T63_ = (NIM_BOOL)0;
					T63_ = (((NI) 1) < last);
					if (T63_) goto LA64_;
					T63_ = fgetsSuccess;
					LA64_: ;
					result = T63_;
					goto BeforeRet_;
				}
				goto LA57_;
				LA61_: ;
				{
					NIM_BOOL T66_;
					T66_ = (NIM_BOOL)0;
					T66_ = (((NI) 0) < last);
					if (!(T66_)) goto LA67_;
					T66_ = ((NU8)((*line)->data[(NI)(last - ((NI) 1))]) == (NU8)(0));
					LA67_: ;
					if (!T66_) goto LA68_;
					{
						NIM_BOOL T72_;
						T72_ = (NIM_BOOL)0;
						T72_ = (last < (NI)((NI)(pos + sp) - ((NI) 1)));
						if (!(T72_)) goto LA73_;
						T72_ = !(((NU8)((*line)->data[(NI)(last + ((NI) 1))]) == (NU8)(0)));
						LA73_: ;
						if (!T72_) goto LA74_;
						last -= ((NI) 1);
					}
					LA74_: ;
				}
				goto LA57_;
				LA68_: ;
				LA57_: ;
				(*line) = setLengthStr((*line), ((NI) (last)));
				T76_ = (NIM_BOOL)0;
				T76_ = (((NI) 0) < last);
				if (T76_) goto LA77_;
				T76_ = fgetsSuccess;
				LA77_: ;
				result = T76_;
				goto BeforeRet_;
			}
			goto LA53_;
			LA55_: ;
			{
				sp -= ((NI) 1);
			}
			LA53_: ;
			pos += sp;
			sp = ((NI) 128);
			(*line) = setLengthStr((*line), ((NI) ((NI)(pos + sp))));
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI, writeBuffer__Y9atVWUcVyKHG9aBP4D0P9czA_2)(FILE* f, void* buffer, NI len) {
	NI result;
	int T1_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NI)0;
	T1_ = (int)0;
	T1_ = fwrite(buffer, ((size_t) 1), ((size_t) (len)), f);
	result = ((NI) (T1_));
	checkErr__fU6ZlJAtQ9bre04EDZLdGsA_2(f);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, flushFile__fU6ZlJAtQ9bre04EDZLdGsA_3)(FILE* f) {
	int T1_;
	T1_ = (int)0;
	T1_ = fflush(f);
	(void)(T1_);
}
N_LIB_PRIVATE N_NIMCALL(void, writeWindows__JO9bn8JE1R6MjKZqdvhBrWg)(FILE* f, NimStringDesc* s, NIM_BOOL doRaise) {
	int i;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	i = fprintf(f, "%s", nimToCStringConv(s));
	{
		while (1) {
			if (!(((NI) (i)) < (s ? s->Sup.len : 0))) goto LA2;
			{
				int w;
				if (!((NU8)(s->data[i]) == (NU8)(0))) goto LA5_;
				w = fputc(0, f);
				{
					if (!!((w == ((NI32) 0)))) goto LA9_;
					{
						if (!doRaise) goto LA13_;
						raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_25));
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA13_: ;
					goto LA1;
				}
				LA9_: ;
				i += ((NI) 1);
			}
			goto LA3_;
			LA5_: ;
			{
				int w_2;
				w_2 = fprintf(f, "%s", (&s->data[i]));
				{
					if (!(w_2 <= ((NI32) 0))) goto LA18_;
					{
						if (!doRaise) goto LA22_;
						raiseEIO__ZYk14k3sVNZUIjJjtqzFZQ(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_25));
						if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
					}
					LA22_: ;
					goto LA1;
				}
				LA18_: ;
				i += ((NI) (w_2));
			}
			LA3_: ;
		} LA2: ;
	} LA1: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0) {
	int T4_;
	int T5_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	{
		NimStringDesc** s;
		NI i;
		s = (NimStringDesc**)0;
		i = ((NI) 0);
		{
			while (1) {
				if (!(i < argsLen_0)) goto LA3;
				s = (&args[i]);
				writeWindows__JO9bn8JE1R6MjKZqdvhBrWg(stdout, (*s), NIM_FALSE);
				if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
				i += ((NI) 1);
			} LA3: ;
		}
	}
	T4_ = (int)0;
	T4_ = fwrite(((void*) ("\012")), ((size_t) 1), ((size_t) 1), stdout);
	(void)(T4_);
	T5_ = (int)0;
	T5_ = fflush(stdout);
	(void)(T5_);
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, write__PArlm09bKklm2BLsCg6YtaA)(FILE* f, NimStringDesc* s) {
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	writeWindows__JO9bn8JE1R6MjKZqdvhBrWg(f, s, NIM_TRUE);
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, writeFile__D6Pj9c29aCLEJP9beOWa08HYA)(NimStringDesc* filename, NimStringDesc* content) {
	FILE* f;
NIM_BOOL oldNimErrFin6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	f = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 1), ((NI) -1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		write__PArlm09bKklm2BLsCg6YtaA(f, content);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			oldNimErrFin6_ = *nimErr_; *nimErr_ = NIM_FALSE;
			close__fU6ZlJAtQ9bre04EDZLdGsA(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			*nimErr_ = oldNimErrFin6_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T10_;
		NimStringDesc* T11_;
		T10_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		T10_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T10_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T10_).Sup.Sup.name = "IOError";
		T11_ = (NimStringDesc*)0;
		T11_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T11_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_26));
appendString(T11_, filename);
		(*T10_).Sup.Sup.message = T11_;
		(*T10_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T10_, "IOError", "writeFile", "io.nim", 855);
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(FILE*, open__cb1k9citqyT9a9brBSJAz8pkg)(NimStringDesc* filename, tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg mode, NI bufSize) {
	FILE* result;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (FILE*)0;
	{
		NIM_BOOL T3_;
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T6_;
		NimStringDesc* T7_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&result, filename, mode, bufSize);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!!(T3_)) goto LA4_;
		T6_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		T6_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T6_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T6_).Sup.Sup.name = "IOError";
		T7_ = (NimStringDesc*)0;
		T7_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T7_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_26));
appendString(T7_, filename);
		(*T6_).Sup.Sup.message = T7_;
		(*T6_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T6_, "IOError", "open", "io.nim", 734);
		goto BeforeRet_;
	}
	LA4_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, rawFileSize__2ezUTSmBrmr5VkZNxReTYQ)(FILE* file) {
	NI64 result;
	NI64 oldPos;
	int T1_;
	int T2_;
	result = (NI64)0;
	oldPos = _ftelli64(file);
	T1_ = (int)0;
	T1_ = _fseeki64(file, IL64(0), ((int) 2));
	(void)(T1_);
	result = _ftelli64(file);
	T2_ = (int)0;
	T2_ = _fseeki64(file, oldPos, ((int) 0));
	(void)(T2_);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2)(FILE* file) {
	NimStringDesc* result;
	NimStringDesc* buffer;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	buffer = mnewString(((NI) 4000));
	{
		while (1) {
			NI bytesRead;
			bytesRead = readBuffer__Y9atVWUcVyKHG9aBP4D0P9czA(file, ((void*) ((&buffer->data[((NI) 0)]))), ((NI) 4000));
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			{
				if (!(bytesRead == ((NI) 4000))) goto LA5_;
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
			}
			goto LA3_;
			LA5_: ;
			{
				buffer = setLengthStr(buffer, ((NI) (bytesRead)));
				result = resizeString(result, (buffer ? buffer->Sup.len : 0) + 0);
appendString(result, buffer);
				goto LA1;
			}
			LA3_: ;
		}
	} LA1: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAllFile__W4tKfHpbz7kHhikLsBc0EA)(FILE* file, NI64 len) {
	NimStringDesc* result;
	NI bytes;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	result = mnewString(((NI) (len)));
	bytes = readBuffer__Y9atVWUcVyKHG9aBP4D0P9czA(file, ((void*) ((&result->data[((NI) 0)]))), ((NI) (len)));
	if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = endOfFile__FK5lmHTzEdX6epYBp9bfgMg(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		{
			if (!(((NI64) (bytes)) < len)) goto LA8_;
			result = setLengthStr(result, ((NI) (bytes)));
		}
		LA8_: ;
	}
	goto LA1_;
	LA4_: ;
	{
		NimStringDesc* T11_;
		T11_ = (NimStringDesc*)0;
		T11_ = readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		result = resizeString(result, (T11_ ? T11_->Sup.len : 0) + 0);
appendString(result, T11_);
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readAll__mQf9blHFlTwuSvJjirhpY6g)(FILE* file) {
	NimStringDesc* result;
	NI64 len;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	{
		if (!!((file == stdin))) goto LA3_;
		len = rawFileSize__2ezUTSmBrmr5VkZNxReTYQ(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA3_: ;
	{
		len = IL64(-1);
	}
	LA1_: ;
	{
		if (!(IL64(0) < len)) goto LA8_;
		result = readAllFile__W4tKfHpbz7kHhikLsBc0EA(file, len);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA6_;
	LA8_: ;
	{
		result = readAllBuffer__mQf9blHFlTwuSvJjirhpY6g_2(file);
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	LA6_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, readFile__4PGnM9bWmsH0Nu7dnr3XzgA)(NimStringDesc* filename) {
	NimStringDesc* result;
	FILE* f;
NIM_BOOL oldNimErrFin6_;
NIM_BOOL* nimErr_;
{nimErr_ = nimErrorFlag();
	result = (NimStringDesc*)0;
	f = NIM_NIL;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = open__gq12VLhVO0NBzUTnGgz4nw(&f, filename, ((tyEnum_FileMode__ZJfK20XeZ9bv2j1pZjw9aswg) 0), ((NI) -1));
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
		if (!T3_) goto LA4_;
		result = readAll__mQf9blHFlTwuSvJjirhpY6g(f);
		if (NIM_UNLIKELY(*nimErr_)) goto LA6_;
		{
			LA6_:;
		}
		{
			oldNimErrFin6_ = *nimErr_; *nimErr_ = NIM_FALSE;
			close__fU6ZlJAtQ9bre04EDZLdGsA(f);
			if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
			*nimErr_ = oldNimErrFin6_;
		}
		if (NIM_UNLIKELY(*nimErr_)) goto BeforeRet_;
	}
	goto LA1_;
	LA4_: ;
	{
		tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw* T10_;
		NimStringDesc* T11_;
		T10_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*)0;
		T10_ = (tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw*) newObj((&NTI__HMIVdYjdZYWskTmTQVo5BQ_), sizeof(tyObject_IOError__iLZrPn9anoh9ad1MmO0RczFw));
		(*T10_).Sup.Sup.Sup.m_type = (&NTI__iLZrPn9anoh9ad1MmO0RczFw_);
		(*T10_).Sup.Sup.name = "IOError";
		T11_ = (NimStringDesc*)0;
		T11_ = rawNewString((filename ? filename->Sup.len : 0) + 13);
appendString(T11_, ((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_26));
appendString(T11_, filename);
		(*T10_).Sup.Sup.message = T11_;
		(*T10_).Sup.Sup.parent = NIM_NIL;
		raiseExceptionEx((Exception*)T10_, "IOError", "readFile", "io.nim", 842);
		goto BeforeRet_;
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioInit000)(void) {
{
	int T1_;
	int T2_;
	int T3_;
	T1_ = (int)0;
	T1_ = _fileno(stdin);
	_setmode(T1_, _O_BINARY);
	T2_ = (int)0;
	T2_ = _fileno(stdout);
	_setmode(T2_, _O_BINARY);
	T3_ = (int)0;
	T3_ = _fileno(stderr);
	_setmode(T3_, _O_BINARY);
}
}

N_LIB_PRIVATE N_NIMCALL(void, stdlib_ioDatInit000)(void) {

/* section: NIM_merge_TYPE_INIT1 */
static TNimNode TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[1];

/* section: NIM_merge_TYPE_INIT3 */
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.size = sizeof(void*);
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.align = NIM_ALIGNOF(void*);
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.kind = 18;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.base = 0;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.flags = 3;
NTI__MAWzaQJYFu3mlxj0Ppxhmw_.node = &TM__MnCJ0VAmeZ9aTATUB39cx60Q_0[0];
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.size = sizeof(FILE*);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.align = NIM_ALIGNOF(FILE*);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.kind = 21;
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.base = (&NTI__MAWzaQJYFu3mlxj0Ppxhmw_);
NTI__XBeRj4rw9bUuE7CB3DS1rgg_.flags = 3;
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.size = sizeof(int);
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.align = NIM_ALIGNOF(int);
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.kind = 34;
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.base = 0;
NTI__2gIj3gQlK3HZJjQaYCP6ZQ_.flags = 3;

/* section: NIM_merge_DYNLIB_INIT */
if (!((TM__MnCJ0VAmeZ9aTATUB39cx60Q_12 = nimLoadLibrary(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_14)))
)) nimLoadLibraryError(((NimStringDesc*) &TM__MnCJ0VAmeZ9aTATUB39cx60Q_15));
	Dl_3980401_ = (tyProc__PUnN9cBvfpDX0GlY5QGXGXw) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12, "ReadConsoleW");
	Dl_3980409_ = (tyProc__9bXer9a4ps9aSGctILcxWReVw) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12, "GetLastError");
	Dl_3980411_ = (tyProc__aO673xGTLLxou7P7GxoCXA) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12, "FormatMessageW");
	Dl_3980420_ = (tyProc__im9buRnIvptJfzdASYMEbBA) nimGetProcAddr(TM__MnCJ0VAmeZ9aTATUB39cx60Q_12, "LocalFree");
}

