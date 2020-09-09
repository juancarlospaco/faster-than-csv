/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -O3 -fno-strict-aliasing -fno-ident -fPIC  -I/home/runner/work/faster-than-csv/faster-than-csv/Nim/lib -I/home/runner/work/faster-than-csv/faster-than-csv/src -o /home/runner/work/faster-than-csv/faster-than-csv/dist/lin/stdlib_xmltree.nim.c.o /home/runner/work/faster-than-csv/faster-than-csv/dist/lin/stdlib_xmltree.nim.c */
#define NIM_INTBITS 64

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
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA tySequence__AjV3cEUgs0Y9c7dCt9aItdIA;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct RootObj RootObj;
typedef struct tySequence__xv3aaFd3JCw8NbmALHiezQ tySequence__xv3aaFd3JCw8NbmALHiezQ;
typedef struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA tyTuple__sPaDkVPSC0MkcoXCxPH9ccA;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU8 tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg;
struct tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ {
tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg k;
union{
struct {NimStringDesc* fText;
} _k_1;
struct {NimStringDesc* fTag;
tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* s;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* fAttr;
} _k_2;
};
NI fClientData;
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
struct RootObj {
TNimType* m_type;
};
typedef NU8 tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ;
struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg {
  RootObj Sup;
NI counter;
tySequence__xv3aaFd3JCw8NbmALHiezQ* data;
tyEnum_StringTableMode__G9c4wVDFIzf0xHmQvxso9a9cQ mode;
};
struct tyTuple__sPaDkVPSC0MkcoXCxPH9ccA {
NimStringDesc* Field0;
NimStringDesc* Field1;
NIM_BOOL Field2;
};
struct tySequence__AjV3cEUgs0Y9c7dCt9aItdIA {
  TGenericSeq Sup;
  tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* data[SEQ_DECL_SIZE];
};
struct tySequence__xv3aaFd3JCw8NbmALHiezQ {
  TGenericSeq Sup;
  tyTuple__sPaDkVPSC0MkcoXCxPH9ccA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newXmlNode__S1TYbKk8Fe7yxROPoy4ceg)(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg kind);
N_LIB_PRIVATE N_NIMCALL(void, nimGCvisit)(void* d, NI op);
static N_NIMCALL(void, Marker_tySequence__AjV3cEUgs0Y9c7dCt9aItdIA)(void* p, NI op);
static N_NIMCALL(void, Marker_tyRef__TikLQZVsFf7R0nt3oy4s9bg)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_LIB_PRIVATE N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, add__L5ivS03sIqPjaqmOum9c7Vw)(NimStringDesc** result, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI indent, NI indWidth, NIM_BOOL addNewLines);
N_LIB_PRIVATE N_NIMCALL(void, addIndent__zdN2Lc7tSuZiLJkksaegQQ)(NimStringDesc** result, NI indent, NIM_BOOL addNewLines);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__i80o3k0SgEI5gTRCzYdyWAsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, noWhitespace__Fh5PelKgH0dQpIvK0CbwzA)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n);
static N_INLINE(NI, len__jVDt9baaY2kubMUFrl05Xrgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n);
static N_INLINE(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg, kind__j8p3h8iojolY0RbF1nkaZgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n);
static N_INLINE(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI i);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
N_LIB_PRIVATE N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
N_LIB_PRIVATE N_NIMCALL(void, addEscapedAttr__6C2AvGe9brWF3cZheLyMXgA)(NimStringDesc** result, NimStringDesc* s);
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__6C2AvGe9brWF3cZheLyMXgA_2)(NimStringDesc** result, NimStringDesc* s);
N_LIB_PRIVATE N_NOINLINE(void, raiseRangeErrorI)(NI64 i, NI64 a, NI64 b);
N_LIB_PRIVATE N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_LIB_PRIVATE TNimType NTI__X79bE2j9a1V7tizbx9blALudQ_;
N_LIB_PRIVATE TNimType NTI__L9a59cbX9cQkF2r36q7xUnCbg_;
TNimNode* NimDT___X79bE2j9a1V7tizbx9blALudQ_k[6];
extern TNimType NTI__77mFvmsOLKik79ci2hXkHEg_;
N_LIB_PRIVATE TNimType NTI__AjV3cEUgs0Y9c7dCt9aItdIA_;
extern TNimType NTI__n9cmoMXcDs47wYDFGEXuCfw_;
extern TNimType NTI__rR5Bzr1D5krxoo1NcNyeMA_;
N_LIB_PRIVATE TNimType NTI__TikLQZVsFf7R0nt3oy4s9bg_;
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7, "\'fTag\' is not accessible using discriminant \'k\' of type \'XmlNod"
"eObj\'", 68);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8, "\'s\' is not accessible using discriminant \'k\' of type \'XmlNodeOb"
"j\'", 65);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9, "\'fText\' is not accessible using discriminant \'k\' of type \'XmlNo"
"deObj\'", 69);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10, "\012", 1);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12, "xmltree.nim(374, 10) `n.k == xnElement` ", 40);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14, "\'fAttr\' is not accessible using discriminant \'k\' of type \'XmlNo"
"deObj\'", 69);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15, "=\"", 2);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16, "&lt;", 4);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17, "&gt;", 4);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18, "&amp;", 5);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_19, "&quot;", 6);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_21, "iterators.nim(207, 11) `len(a) == L` the length of the string c"
"hanged while iterating over it", 93);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_23, " />", 3);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_26, "</", 2);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_27, ">", 1);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_28, "&apos;", 6);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_30, "<!-- ", 5);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_31, " -->", 4);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_32, "<![CDATA[", 9);
STRING_LITERAL(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_33, "]]>", 3);
static N_NIMCALL(void, Marker_tySequence__AjV3cEUgs0Y9c7dCt9aItdIA)(void* p, NI op) {
	tySequence__AjV3cEUgs0Y9c7dCt9aItdIA* a;
	NI T1_;
	a = (tySequence__AjV3cEUgs0Y9c7dCt9aItdIA*)p;
	T1_ = (NI)0;
	for (T1_ = 0; T1_ < (a ? a->Sup.len : 0); T1_++) {
	nimGCvisit((void*)a->data[T1_], op);
	}
}
static N_NIMCALL(void, Marker_tyRef__TikLQZVsFf7R0nt3oy4s9bg)(void* p, NI op) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* a;
	a = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)p;
	switch ((*a).k) {
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 4):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2):
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 3):
	nimGCvisit((void*)(*a)._k_1.fText, op);
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1):
	nimGCvisit((void*)(*a)._k_2.fTag, op);
	nimGCvisit((void*)(*a)._k_2.s, op);
	nimGCvisit((void*)(*a)._k_2.fAttr, op);
	break;
	} 
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newXmlNode__S1TYbKk8Fe7yxROPoy4ceg)(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg kind) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* T1_;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	T1_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	T1_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*) newObj((&NTI__TikLQZVsFf7R0nt3oy4s9bg_), sizeof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ));
	(*T1_).k = kind;
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newElement__Sxg4tI9bVbPjV9a4F9cRnqlWw)(NimStringDesc* tag) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	result = newXmlNode__S1TYbKk8Fe7yxROPoy4ceg(((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1));
	if (!(((2 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7)); }
	(*result)._k_2.fTag = copyString(tag);
	if (!(((2 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8)); }
	(*result)._k_2.s = NIM_NIL;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newText__rOUtNKhUmBcgHQCsK4WhEw)(NimStringDesc* text) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	result = newXmlNode__S1TYbKk8Fe7yxROPoy4ceg(((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0));
	if (!(((29 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9)); }
	(*result)._k_1.fText = copyString(text);
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
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__i80o3k0SgEI5gTRCzYdyWAsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, addIndent__zdN2Lc7tSuZiLJkksaegQQ)(NimStringDesc** result, NI indent, NIM_BOOL addNewLines) {
	{
		if (!addNewLines) goto LA3_;
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_10));
	}
	LA3_: ;
	{
		NI i;
		NI res;
		i = (NI)0;
		res = ((NI) 1);
		{
			while (1) {
				NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11;
				if (!(res <= indent)) goto LA7;
				i = res;
				(*result) = addChar((*result), 32);
				if (nimAddInt(res, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11)) { raiseOverflow(); };
				res = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_11);
			} LA7: ;
		}
	}
}
static N_INLINE(NI, len__jVDt9baaY2kubMUFrl05Xrgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	NI result;
	result = (NI)0;
	{
		NI T5_;
		if (!((*n).k == ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1))) goto LA3_;
		if (!(((2 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8)); }
		T5_ = ((*n)._k_2.s ? (*n)._k_2.s->Sup.len : 0);
		result = T5_;
	}
	LA3_: ;
	return result;
}
static N_INLINE(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg, kind__j8p3h8iojolY0RbF1nkaZgxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg result;
	result = (tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg)0;
	result = (*n).k;
	return result;
}
static N_INLINE(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI i) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	{
		if (!!(((*n).k == ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1)))) goto LA3_;
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_12));
	}
	LA3_: ;
	if (!(((2 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8)); }
	if ((NU)(i) >= (NU)((*n)._k_2.s ? (*n)._k_2.s->Sup.len : 0)){ raiseIndexError2(i,((*n)._k_2.s ? (*n)._k_2.s->Sup.len : 0)-1); }
	result = (*n)._k_2.s->data[i];
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, noWhitespace__Fh5PelKgH0dQpIvK0CbwzA)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	NIM_BOOL result;
{	result = (NIM_BOOL)0;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len__jVDt9baaY2kubMUFrl05Xrgxmltree(n);
		i_2 = ((NI) 0);
		{
			while (1) {
				NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13;
				if (!(i_2 < colontmp_)) goto LA3;
				i = i_2;
				{
					tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* T6_;
					tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg T7_;
					T6_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
					T6_ = X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree(n, i);
					T7_ = (tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg)0;
					T7_ = kind__j8p3h8iojolY0RbF1nkaZgxmltree(T6_);
					if (!((9 &(1U<<((NU)(T7_)&7U)))!=0)) goto LA8_;
					result = NIM_TRUE;
					goto BeforeRet_;
				}
				LA8_: ;
				if (nimAddInt(i_2, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13)) { raiseOverflow(); };
				i_2 = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_13);
			} LA3: ;
		}
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, addEscapedAttr__6C2AvGe9brWF3cZheLyMXgA)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_20;
				if (!(i < L)) goto LA3;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				c = s->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_19));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c);
				}
				break;
				}
				if (nimAddInt(i, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_20)) { raiseOverflow(); };
				i = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_20);
				{
					if (!!(((s ? s->Sup.len : 0) == L))) goto LA11_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_21));
				}
				LA11_: ;
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, addEscaped__6C2AvGe9brWF3cZheLyMXgA_2)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_29;
				if (!(i < L)) goto LA3;
				if ((NU)(i) >= (NU)(s ? s->Sup.len : 0)){ raiseIndexError2(i,(s ? s->Sup.len : 0)-1); }
				c = s->data[i];
				switch (((NU8)(c))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_16));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_17));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_18));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_19));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_28));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c);
				}
				break;
				}
				if (nimAddInt(i, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_29)) { raiseOverflow(); };
				i = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_29);
				{
					if (!!(((s ? s->Sup.len : 0) == L))) goto LA12_;
					failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_21));
				}
				LA12_: ;
			} LA3: ;
		}
	}
}
N_LIB_PRIVATE N_NIMCALL(void, add__L5ivS03sIqPjaqmOum9c7Vw)(NimStringDesc** result, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n, NI indent, NI indWidth, NIM_BOOL addNewLines) {
{	{
		if (!(n == NIM_NIL)) goto LA3_;
		goto BeforeRet_;
	}
	LA3_: ;
	switch ((*n).k) {
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1):
	{
		NIM_BOOL addNewLines_2;
		NI indentNext;
		{
			if (!(((NI) 0) < indent)) goto LA8_;
			addIndent__zdN2Lc7tSuZiLJkksaegQQ(result, indent, addNewLines);
		}
		LA8_: ;
		{
			NIM_BOOL T12_;
			T12_ = (NIM_BOOL)0;
			T12_ = noWhitespace__Fh5PelKgH0dQpIvK0CbwzA(n);
			if (!T12_) goto LA13_;
			addNewLines_2 = NIM_FALSE;
		}
		goto LA10_;
		LA13_: ;
		{
			addNewLines_2 = addNewLines;
		}
		LA10_: ;
		(*result) = addChar((*result), 60);
		if (!(((2 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7)); }
		(*result) = resizeString((*result), ((*n)._k_2.fTag ? (*n)._k_2.fTag->Sup.len : 0) + 0);
appendString((*result), (*n)._k_2.fTag);
		{
			if (!(((2 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14)); }
			if (!!(((*n)._k_2.fAttr == 0))) goto LA18_;
			{
				NimStringDesc* key;
				NimStringDesc* val;
				tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* colontmp_;
				key = (NimStringDesc*)0;
				val = (NimStringDesc*)0;
				colontmp_ = (tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg*)0;
				if (!(((2 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14)); }
				colontmp_ = (*n)._k_2.fAttr;
				{
					NI h;
					NI colontmp__2;
					NI T22_;
					NI res;
					h = (NI)0;
					colontmp__2 = (NI)0;
					T22_ = (((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)-1);
					colontmp__2 = T22_;
					res = ((NI) 0);
					{
						while (1) {
							NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_22;
							if (!(res <= colontmp__2)) goto LA24;
							h = res;
							{
								if ((NU)(h) >= (NU)((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)){ raiseIndexError2(h,((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)-1); }
								if (!(*colontmp_).data->data[h].Field2) goto LA27_;
								if ((NU)(h) >= (NU)((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)){ raiseIndexError2(h,((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)-1); }
								key = (*colontmp_).data->data[h].Field0;
								if ((NU)(h) >= (NU)((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)){ raiseIndexError2(h,((*colontmp_).data ? (*colontmp_).data->Sup.len : 0)-1); }
								val = (*colontmp_).data->data[h].Field1;
								(*result) = addChar((*result), 32);
								(*result) = resizeString((*result), (key ? key->Sup.len : 0) + 0);
appendString((*result), key);
								(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_15));
								addEscapedAttr__6C2AvGe9brWF3cZheLyMXgA(result, val);
								(*result) = addChar((*result), 34);
							}
							LA27_: ;
							if (nimAddInt(res, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_22)) { raiseOverflow(); };
							res = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_22);
						} LA24: ;
					}
				}
			}
		}
		LA18_: ;
		{
			NI T31_;
			T31_ = (NI)0;
			T31_ = len__jVDt9baaY2kubMUFrl05Xrgxmltree(n);
			if (!(T31_ == ((NI) 0))) goto LA32_;
			(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_23));
			goto BeforeRet_;
		}
		LA32_: ;
		{
			NIM_BOOL T36_;
			T36_ = (NIM_BOOL)0;
			T36_ = noWhitespace__Fh5PelKgH0dQpIvK0CbwzA(n);
			if (!T36_) goto LA37_;
			indentNext = indent;
		}
		goto LA34_;
		LA37_: ;
		{
			NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_24;
			if (nimAddInt(indent, indWidth, &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_24)) { raiseOverflow(); };
			indentNext = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_24);
		}
		LA34_: ;
		(*result) = addChar((*result), 62);
		{
			NI i;
			NI colontmp__3;
			NI i_2;
			i = (NI)0;
			colontmp__3 = (NI)0;
			colontmp__3 = len__jVDt9baaY2kubMUFrl05Xrgxmltree(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* T43_;
					NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_25;
					if (!(i_2 < colontmp__3)) goto LA42;
					i = i_2;
					T43_ = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
					T43_ = X5BX5D___oXJB8uaKnmOqZ9bwPjUkzEwxmltree(n, i);
					add__L5ivS03sIqPjaqmOum9c7Vw(result, T43_, indentNext, indWidth, addNewLines_2);
					if (nimAddInt(i_2, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_25)) { raiseOverflow(); };
					i_2 = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_25);
				} LA42: ;
			}
		}
		{
			NIM_BOOL T46_;
			T46_ = (NIM_BOOL)0;
			T46_ = noWhitespace__Fh5PelKgH0dQpIvK0CbwzA(n);
			if (!!(T46_)) goto LA47_;
			addIndent__zdN2Lc7tSuZiLJkksaegQQ(result, indent, addNewLines_2);
		}
		LA47_: ;
		(*result) = resizeString((*result), 2);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_26));
		if (!(((2 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7)); }
		(*result) = resizeString((*result), ((*n)._k_2.fTag ? (*n)._k_2.fTag->Sup.len : 0) + 0);
appendString((*result), (*n)._k_2.fTag);
		(*result) = resizeString((*result), 1);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_27));
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 0):
	{
		if (!(((29 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9)); }
		addEscaped__6C2AvGe9brWF3cZheLyMXgA_2(result, (*n)._k_1.fText);
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 4):
	{
		(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_30));
		if (!(((29 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9)); }
		addEscaped__6C2AvGe9brWF3cZheLyMXgA_2(result, (*n)._k_1.fText);
		(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_31));
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 2):
	{
		(*result) = resizeString((*result), 9);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_32));
		if (!(((29 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9)); }
		(*result) = resizeString((*result), ((*n)._k_1.fText ? (*n)._k_1.fText->Sup.len : 0) + 0);
appendString((*result), (*n)._k_1.fText);
		(*result) = resizeString((*result), 3);
appendString((*result), ((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_33));
	}
	break;
	case ((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 3):
	{
		(*result) = addChar((*result), 38);
		if (!(((29 &(1U<<((NU)((*n).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_9)); }
		(*result) = resizeString((*result), ((*n)._k_1.fText ? (*n)._k_1.fText->Sup.len : 0) + 0);
appendString((*result), (*n)._k_1.fText);
		(*result) = addChar((*result), 59);
	}
	break;
	}
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar___OuMIOHiWWdpO1R0c3qsNmg)(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* n) {
	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = ((NimStringDesc*) NIM_NIL);
	add__L5ivS03sIqPjaqmOum9c7Vw((&result), n, ((NI) 0), ((NI) 2), NIM_TRUE);
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*, newXmlTree__iQEgntocGC9c5P8XXvwKIkw)(NimStringDesc* tag, tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ** children, NI childrenLen_0, tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* attributes) {
	tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ* result;
	result = (tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*)0;
	result = newXmlNode__S1TYbKk8Fe7yxROPoy4ceg(((tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg) 1));
	if (!(((2 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_7)); }
	(*result)._k_2.fTag = copyString(tag);
	if (!(((2 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8)); }
	if ((childrenLen_0) < ((NI) 0) || (childrenLen_0) > ((NI) IL64(9223372036854775807))){ raiseRangeErrorI(childrenLen_0, ((NI) 0), ((NI) IL64(9223372036854775807))); }
	(*result)._k_2.s = (tySequence__AjV3cEUgs0Y9c7dCt9aItdIA*) newSeq((&NTI__AjV3cEUgs0Y9c7dCt9aItdIA_), ((NI) (childrenLen_0)));
	{
		NI i;
		NI colontmp_;
		NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_34;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		if (nimSubInt(childrenLen_0, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_34)) { raiseOverflow(); };
		colontmp_ = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_34);
		res = ((NI) 0);
		{
			while (1) {
				NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_35;
				if (!(res <= colontmp_)) goto LA3;
				i = res;
				if (!(((2 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_8)); }
				if ((NU)(i) >= (NU)((*result)._k_2.s ? (*result)._k_2.s->Sup.len : 0)){ raiseIndexError2(i,((*result)._k_2.s ? (*result)._k_2.s->Sup.len : 0)-1); }
				if ((NU)(i) >= (NU)(childrenLen_0)){ raiseIndexError2(i,childrenLen_0-1); }
				(*result)._k_2.s->data[i] = children[i];
				if (nimAddInt(res, ((NI) 1), &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_35)) { raiseOverflow(); };
				res = (NI)(TM__qYyKc6OpDWHHaBXL9bX9aQ2A_35);
			} LA3: ;
		}
	}
	if (!(((2 &(1U<<((NU)((*result).k)&7U)))!=0))){ raiseFieldError(((NimStringDesc*) &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_14)); }
	(*result)._k_2.fAttr = attributes;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_xmltreeDatInit000)(void) {
static TNimNode* TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2_2[2];
static TNimNode* TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3_5[5];
NI TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5;
static char* NIM_CONST TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4[5] = {
"xnText", 
"xnElement", 
"xnCData", 
"xnEntity", 
"xnComment"};
static TNimNode* TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6_3[3];
static TNimNode TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[14];
NTI__X79bE2j9a1V7tizbx9blALudQ_.size = sizeof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ);
NTI__X79bE2j9a1V7tizbx9blALudQ_.kind = 18;
NTI__X79bE2j9a1V7tizbx9blALudQ_.base = 0;
NTI__X79bE2j9a1V7tizbx9blALudQ_.flags = 2;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2_2[0] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1];
NTI__L9a59cbX9cQkF2r36q7xUnCbg_.size = sizeof(tyEnum_XmlNodeKind__L9a59cbX9cQkF2r36q7xUnCbg);
NTI__L9a59cbX9cQkF2r36q7xUnCbg_.kind = 14;
NTI__L9a59cbX9cQkF2r36q7xUnCbg_.base = 0;
NTI__L9a59cbX9cQkF2r36q7xUnCbg_.flags = 3;
for (TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5 = 0; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5 < 5; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5++) {
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5+2].kind = 1;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5+2].offset = TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5+2].name = TM__qYyKc6OpDWHHaBXL9bX9aQ2A_4[TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3_5[TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[TM__qYyKc6OpDWHHaBXL9bX9aQ2A_5+2];
}
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[7].len = 5; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[7].kind = 2; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[7].sons = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_3_5[0];
NTI__L9a59cbX9cQkF2r36q7xUnCbg_.node = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[7];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1].kind = 3;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1].offset = offsetof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ, k);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1].typ = (&NTI__L9a59cbX9cQkF2r36q7xUnCbg_);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1].name = "k";
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1].sons = &NimDT___X79bE2j9a1V7tizbx9blALudQ_k[0];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[1].len = 5;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8].kind = 1;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8].offset = offsetof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ, _k_1.fText);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8].name = "fText";
NimDT___X79bE2j9a1V7tizbx9blALudQ_k[0] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8];
NimDT___X79bE2j9a1V7tizbx9blALudQ_k[4] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8];
NimDT___X79bE2j9a1V7tizbx9blALudQ_k[2] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8];
NimDT___X79bE2j9a1V7tizbx9blALudQ_k[3] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[8];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6_3[0] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[10];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[10].kind = 1;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[10].offset = offsetof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ, _k_2.fTag);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[10].typ = (&NTI__77mFvmsOLKik79ci2hXkHEg_);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[10].name = "fTag";
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6_3[1] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[11];
NTI__AjV3cEUgs0Y9c7dCt9aItdIA_.size = sizeof(tySequence__AjV3cEUgs0Y9c7dCt9aItdIA*);
NTI__AjV3cEUgs0Y9c7dCt9aItdIA_.kind = 24;
NTI__AjV3cEUgs0Y9c7dCt9aItdIA_.base = (&NTI__TikLQZVsFf7R0nt3oy4s9bg_);
NTI__AjV3cEUgs0Y9c7dCt9aItdIA_.flags = 2;
NTI__AjV3cEUgs0Y9c7dCt9aItdIA_.marker = Marker_tySequence__AjV3cEUgs0Y9c7dCt9aItdIA;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[11].kind = 1;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[11].offset = offsetof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ, _k_2.s);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[11].typ = (&NTI__AjV3cEUgs0Y9c7dCt9aItdIA_);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[11].name = "s";
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6_3[2] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[12];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[12].kind = 1;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[12].offset = offsetof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ, _k_2.fAttr);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[12].typ = (&NTI__n9cmoMXcDs47wYDFGEXuCfw_);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[12].name = "fAttr";
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[9].len = 3; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[9].kind = 2; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[9].sons = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_6_3[0];
NimDT___X79bE2j9a1V7tizbx9blALudQ_k[1] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[9];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2_2[1] = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[13];
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[13].kind = 1;
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[13].offset = offsetof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ, fClientData);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[13].typ = (&NTI__rR5Bzr1D5krxoo1NcNyeMA_);
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[13].name = "fClientData";
TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[0].len = 2; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[0].kind = 2; TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[0].sons = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_2_2[0];
NTI__X79bE2j9a1V7tizbx9blALudQ_.node = &TM__qYyKc6OpDWHHaBXL9bX9aQ2A_0[0];
NTI__TikLQZVsFf7R0nt3oy4s9bg_.size = sizeof(tyObject_XmlNodeObj__X79bE2j9a1V7tizbx9blALudQ*);
NTI__TikLQZVsFf7R0nt3oy4s9bg_.kind = 22;
NTI__TikLQZVsFf7R0nt3oy4s9bg_.base = (&NTI__X79bE2j9a1V7tizbx9blALudQ_);
NTI__TikLQZVsFf7R0nt3oy4s9bg_.flags = 2;
NTI__TikLQZVsFf7R0nt3oy4s9bg_.marker = Marker_tyRef__TikLQZVsFf7R0nt3oy4s9bg;
}

