/* Generated by Nim Compiler v1.0.11 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32

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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA;
typedef struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw;
typedef struct tyTuple__UpiOGlu5Ux6DLM73wSrdpg tyTuple__UpiOGlu5Ux6DLM73wSrdpg;
typedef struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw tyObject_Target__9abOl5DLX8suLujOaHSvGzw;
typedef struct tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg;
typedef struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A;
typedef struct tySequence__tNFrR3kRuS1FSwuiLGoSSA tySequence__tNFrR3kRuS1FSwuiLGoSSA;
typedef struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA;
typedef struct tySequence__7lEisrXlQEzwtUKW5pzRCw tySequence__7lEisrXlQEzwtUKW5pzRCw;
typedef struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ tySequence__Zi9cGbCWofbtABoHJ5RbLNQ;
typedef struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg;
typedef struct tySequence__4eRCaZmrYLLw2k30GPTiMw tySequence__4eRCaZmrYLLw2k30GPTiMw;
typedef struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ tySequence__sM4lkSb7zS6F7OVMvW9cffQ;
typedef struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw tySequence__pK3qSsBZwdXd6qyUMkd5Jw;
typedef struct tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ;
typedef struct tyTuple__z822nu9bFF1AlQnLrHjdwpA tyTuple__z822nu9bFF1AlQnLrHjdwpA;
typedef struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw tyTuple__xYhUhS7X82rKTqbT9bRfCnw;
typedef struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw;
typedef struct tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw tyTuple__QeWl6B6ffS4pU6WWrtcrDw;
typedef struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NU16 tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw;
struct tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU32 tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw;
struct tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType__v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag__jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym__JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent__GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
};
typedef NU8 tyEnum_TEndian__bQ3yFYQJojZPNYsZnS7Zjg;
struct tyTuple__UpiOGlu5Ux6DLM73wSrdpg {
NimStringDesc* Field0;
NI Field1;
tyEnum_TEndian__bQ3yFYQJojZPNYsZnS7Zjg Field2;
NI Field3;
NI Field4;
};
typedef tyTuple__UpiOGlu5Ux6DLM73wSrdpg tyArray__hsHGImvImZtnKKlj0Ycm2Q[26];
typedef NU8 tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag;
typedef NU8 tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ;
struct tyObject_Target__9abOl5DLX8suLujOaHSvGzw {
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag targetCPU;
tyEnum_TSystemCPU__XYDt7D1G3qcClFyZy1Ky9ag hostCPU;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ targetOS;
tyEnum_TSystemOS__s7Mlr1t66SUqP6BKJMXLaQ hostOS;
NI intSize;
NI floatSize;
NI ptrSize;
NimStringDesc* tnl;
};
typedef NU32 tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg;
typedef NU64 tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw;
typedef NU8 tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA;
struct tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA {
tySequence__7lEisrXlQEzwtUKW5pzRCw* data;
NI counter;
};
struct tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q trackPos;
NIM_BOOL trackPosAttached;
tySet_tyEnum_TErrorOutput__fBf8Teueoz9aAkO5cXaxrpA errorOutputs;
tySequence__tNFrR3kRuS1FSwuiLGoSSA* msgContext;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastError;
tyObject_Table__Ab4q9c36aMR4mtkEOIBzdzA filenameToIndexTbl;
tySequence__Zi9cGbCWofbtABoHJ5RbLNQ* fileInfos;
NI32 systemFileIdx;
};
typedef NU8 tyEnum_TCommands__VH3ghgQVwLSg3krOAoXigw;
typedef NU8 tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw;
typedef NU8 tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ;
struct tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg {
tySequence__4eRCaZmrYLLw2k30GPTiMw* data;
NI counter;
};
typedef NU16 tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ;
typedef NU8 tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA;
typedef NU8 tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ;
typedef NU8 tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA;
typedef NU64 tySet_tyEnum_TMsgKind__aF3wrShfYWgzGfsrtvM3hQ;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_SuggestcolonObjectType___bkMuTTb2G70XfpzAiyNrnQ* result, void* ClE_0);
void* ClE_0;
} tyProc__QYEVXrYc9beQ379crS3rzqRA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (NimStringDesc* output, void* ClE_0);
void* ClE_0;
} tyProc__Q1W5D85O9cNu3iq9cZ9alS9aWA;
typedef NU8 tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA;
typedef struct {
N_NIMCALL_PTR(void, ClP_0) (tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* config, tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q info, NimStringDesc* msg, tyEnum_Severity__x5BWBPGAbIH9clm5pmNp5DA severity, void* ClE_0);
void* ClE_0;
} tyProc__22mgIiTBBoqNe1T0FSw9ahQ;
struct tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw {
tyObject_Target__9abOl5DLX8suLujOaHSvGzw target;
NI linesCompiled;
tySet_tyEnum_TOption__WspMeQySXNP2XoTWR5MTgg options;
tySet_tyEnum_TGlobalOption__RAfAEZqjnKMDumgyKKc1qw globalOptions;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* macrosToExpand;
tyObject_MsgConfig__kV7r8HWT0SqOYW2k2ukC6A m;
NI evalTemplateCounter;
NI evalMacroCounter;
NI8 exitcode;
tyEnum_TCommands__VH3ghgQVwLSg3krOAoXigw cmd;
tyEnum_TGCMode__tkz389aDYNd8ykeZszCuBSw selectedGC;
NI verbosity;
NI numberOfProcessors;
NimStringDesc* evalExpr;
NF lastCmdTime;
tyEnum_SymbolFilesOption__gBES9bqm1ru9ape8SeMRAFgQ symbolFiles;
tyObject_HashSet__CD8Dpv0WGmASelVaNSo6zg cppDefines;
NimStringDesc* headerFile;
tySet_tyEnum_Feature__01UoAKYz1MxZiuG1X2VhNQ features;
tySet_tyEnum_LegacyFeature__hGCD9aOrxPvpXn4Ne6W6OVA legacyFeatures;
NimStringDesc* arguments;
tyEnum_IdeCmd__1Ced39bl5eePmZ1PKMPXigQ ideCmd;
NIM_BOOL oldNewlines;
tyEnum_TSystemCC__1eWBJUonHMOnlBwsOvpFmA cCompiler;
tySet_tyEnum_TMsgKind__aF3wrShfYWgzGfsrtvM3hQ enableNotes;
tySet_tyEnum_TMsgKind__aF3wrShfYWgzGfsrtvM3hQ disableNotes;
tySet_tyEnum_TMsgKind__aF3wrShfYWgzGfsrtvM3hQ foreignPackageNotes;
tySet_tyEnum_TMsgKind__aF3wrShfYWgzGfsrtvM3hQ notes;
tySet_tyEnum_TMsgKind__aF3wrShfYWgzGfsrtvM3hQ mainPackageNotes;
NI mainPackageId;
NI errorCounter;
NI hintCounter;
NI warnCounter;
NI errorMax;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* configVars;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* symbols;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* packageCache;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* searchPaths;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lazyPaths;
NimStringDesc* outFile;
NimStringDesc* outDir;
NimStringDesc* prefixDir;
NimStringDesc* libpath;
NimStringDesc* nimcacheDir;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* dllOverrides;
tyObject_StringTableObj__V5PVrt9bIxZEeV7lfvqqtNg* moduleOverrides;
NimStringDesc* projectName;
NimStringDesc* projectPath;
NimStringDesc* projectFull;
NIM_BOOL projectIsStdin;
NI32 projectMainIdx;
NimStringDesc* command;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* commandArgs;
NimStringDesc* commandLine;
NIM_BOOL keepComments;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitImports;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* implicitIncludes;
NimStringDesc* docSeeSrcUrl;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cIncludes;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* cLinkedLibs;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* externalToLink;
NimStringDesc* linkOptionsCmd;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* compileOptionsCmd;
NimStringDesc* linkOptions;
NimStringDesc* compileOptions;
NimStringDesc* cCompilerPath;
tySequence__pK3qSsBZwdXd6qyUMkd5Jw* toCompile;
tyProc__QYEVXrYc9beQ379crS3rzqRA suggestionResultHook;
NI suggestVersion;
NI suggestMaxResults;
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q lastLineInfo;
tyProc__Q1W5D85O9cNu3iq9cZ9alS9aWA writelnHook;
tyProc__22mgIiTBBoqNe1T0FSw9ahQ structuredErrorHook;
NimStringDesc* cppCustomNamespace;
};
struct tyTuple__z822nu9bFF1AlQnLrHjdwpA {
tyObject_TLineInfo__WGx4rAexNXnczy1Avn646Q Field0;
NimStringDesc* Field1;
};
struct tyTuple__xYhUhS7X82rKTqbT9bRfCnw {
NI Field0;
NimStringDesc* Field1;
NI32 Field2;
};
struct tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw {
NimStringDesc* fullPath;
NimStringDesc* projPath;
NimStringDesc* shortName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedName;
tyObject_RopeObj__OFzf0kSiPTcNreUIeJgWVA* quotedFullName;
tySequence__sM4lkSb7zS6F7OVMvW9cffQ* lines;
NimStringDesc* dirtyFile;
NimStringDesc* hash;
NIM_BOOL dirty;
};
struct tyTuple__QeWl6B6ffS4pU6WWrtcrDw {
NI Field0;
NimStringDesc* Field1;
};
typedef NU8 tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA;
struct tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg {
NimStringDesc* nimname;
NimStringDesc* cname;
NimStringDesc* obj;
tySet_tyEnum_CfileFlag__Vl9c9ayddDuXiWtnWTsEYGsA flags;
};
struct tySequence__ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence__tNFrR3kRuS1FSwuiLGoSSA {
  TGenericSeq Sup;
  tyTuple__z822nu9bFF1AlQnLrHjdwpA data[SEQ_DECL_SIZE];
};
struct tySequence__7lEisrXlQEzwtUKW5pzRCw {
  TGenericSeq Sup;
  tyTuple__xYhUhS7X82rKTqbT9bRfCnw data[SEQ_DECL_SIZE];
};
struct tySequence__Zi9cGbCWofbtABoHJ5RbLNQ {
  TGenericSeq Sup;
  tyObject_TFileInfo__GE3hAakXKOEpch4ap3zXAw data[SEQ_DECL_SIZE];
};
struct tySequence__4eRCaZmrYLLw2k30GPTiMw {
  TGenericSeq Sup;
  tyTuple__QeWl6B6ffS4pU6WWrtcrDw data[SEQ_DECL_SIZE];
};
struct tySequence__sM4lkSb7zS6F7OVMvW9cffQ {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct tySequence__pK3qSsBZwdXd6qyUMkd5Jw {
  TGenericSeq Sup;
  tyObject_Cfile__i9cKq1ZGd1wgagjUEHLVFtg data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size);
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size);
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuToHex)(NI64 x, NI len);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(void, toCChar__JTr4d3QfIoJwmoCY9bN9adqQ)(NIM_CHAR c, NimStringDesc** result);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt__Q8FV3gEY9a7bxlDfNWj9atNg)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw w);
static N_INLINE(NI, len__P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
N_LIB_PRIVATE N_NIMCALL(tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw, whichPragma__Pjztiiq9bHmTTxDuLd39cNRw)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_2, "X", 1);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_3, "dollar", 6);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_4, "percent", 7);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_5, "amp", 3);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_6, "roof", 4);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_7, "emark", 5);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_8, "qmark", 5);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_9, "star", 4);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_10, "plus", 4);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_11, "minus", 5);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_12, "slash", 5);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_13, "backslash", 9);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_14, "eq", 2);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_15, "lt", 2);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_16, "gt", 2);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_17, "tilde", 5);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_18, "colon", 5);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_19, "dot", 3);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_20, "at", 2);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_21, "bar", 3);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_22, "_", 1);
STRING_LITERAL(TM__Z07Nb1SkYoziC0Zz9be4mTA_23, "\"", 1);
extern NIM_CONST tyArray__hsHGImvImZtnKKlj0Ycm2Q CPU__uYXopJX8pM87pQDCtmgWfQ;
static N_INLINE(void, nimCopyMem)(void* dest, void* source, NI size) {	void* T1_;
	T1_ = (void*)0;
	T1_ = memcpy(dest, source, ((size_t) (size)));
}
static N_INLINE(void, copyMem__M04YC71iJg1N7gBF3HZTngsystem)(void* dest, void* source, NI size) {	nimCopyMem(dest, source, size);
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {	{
		if (!!((src == NIM_NIL))) goto LA3_;
		copyMem__M04YC71iJg1N7gBF3HZTngsystem(((void*) ((&(*dest).data[(*dest).Sup.len]))), ((void*) ((*src).data)), ((NI) ((NI)((*src).Sup.len + ((NI) 1)))));
		(*dest).Sup.len += (*src).Sup.len;
	}
	LA3_: ;
}
static N_INLINE(void, appendChar)(NimStringDesc* dest, NIM_CHAR c) {	(*dest).data[(*dest).Sup.len] = c;
	(*dest).data[(NI)((*dest).Sup.len + ((NI) 1))] = 0;
	(*dest).Sup.len += ((NI) 1);
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, mangle__GxzvEIRbrShQbyJNboTw7A)(NimStringDesc* name) {	NimStringDesc* result;
	NI start;
	NIM_BOOL requiresUnderscore;
	result = (NimStringDesc*)0;
	result = rawNewString(((NI) ((name ? name->Sup.len : 0))));
	start = ((NI) 0);
	{
		NimStringDesc* T5_;
		if (!(((NU8)(name->data[((NI) 0)])) >= ((NU8)(48)) && ((NU8)(name->data[((NI) 0)])) <= ((NU8)(57)))) goto LA3_;
		T5_ = (NimStringDesc*)0;
		T5_ = rawNewString(2);
appendString(T5_, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_2));
appendChar(T5_, name->data[((NI) 0)]);
		result = resizeString(result, (T5_ ? T5_->Sup.len : 0) + 0);
appendString(result, T5_);
		start = ((NI) 1);
	}
	LA3_: ;
	requiresUnderscore = NIM_FALSE;
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = (NI)((name ? name->Sup.len : 0) - ((NI) 1));
		res = start;
		{
			while (1) {
				NIM_CHAR c;
				if (!(res <= colontmp_)) goto LA8;
				i = res;
				c = name->data[i];
				switch (((NU8)(c))) {
				case 97 ... 122:
				case 48 ... 57:
				case 65 ... 90:
				{
					result = addChar(result, c);
				}
				break;
				case 95:
				{
					{
						NIM_BOOL T13_;
						NIM_BOOL T14_;
						T13_ = (NIM_BOOL)0;
						T14_ = (NIM_BOOL)0;
						T14_ = (((NI) 0) < i);
						if (!(T14_)) goto LA15_;
						T14_ = (i < (NI)((name ? name->Sup.len : 0) - ((NI) 1)));
						LA15_: ;
						T13_ = T14_;
						if (!(T13_)) goto LA16_;
						T13_ = (((NU8)(name->data[(NI)(i + ((NI) 1))])) >= ((NU8)(48)) && ((NU8)(name->data[(NI)(i + ((NI) 1))])) <= ((NU8)(57)));
						LA16_: ;
						if (!T13_) goto LA17_;
					}
					goto LA11_;
					LA17_: ;
					{
						result = addChar(result, c);
					}
					LA11_: ;
				}
				break;
				case 36:
				{
					result = resizeString(result, 6);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_3));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 37:
				{
					result = resizeString(result, 7);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_4));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 38:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_5));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 94:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_6));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 33:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_7));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 63:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_8));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 42:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_9));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 43:
				{
					result = resizeString(result, 4);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_10));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 45:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_11));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 47:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_12));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 92:
				{
					result = resizeString(result, 9);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_13));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 61:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_14));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 60:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_15));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 62:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_16));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 126:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_17));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 58:
				{
					result = resizeString(result, 5);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_18));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 46:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_19));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 64:
				{
					result = resizeString(result, 2);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_20));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				case 124:
				{
					result = resizeString(result, 3);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_21));
					requiresUnderscore = NIM_TRUE;
				}
				break;
				default:
				{
					NimStringDesc* T40_;
					NimStringDesc* T41_;
					T40_ = (NimStringDesc*)0;
					T41_ = (NimStringDesc*)0;
					T41_ = nsuToHex(((NI64) (((NU8)(c)))), ((NI) 2));
					T40_ = rawNewString((T41_ ? T41_->Sup.len : 0) + 1);
appendString(T40_, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_2));
appendString(T40_, T41_);
					result = resizeString(result, (T40_ ? T40_->Sup.len : 0) + 0);
appendString(result, T40_);
					requiresUnderscore = NIM_TRUE;
				}
				break;
				}
				res += ((NI) 1);
			} LA8: ;
		}
	}
	{
		if (!requiresUnderscore) goto LA44_;
		result = resizeString(result, 1);
appendString(result, ((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_22));
	}
	LA44_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, makeSingleLineCString__rMRFcrOdLs9cBLwxpf0jLag)(NimStringDesc* s) {	NimStringDesc* result;
	result = (NimStringDesc*)0;
	result = copyString(((NimStringDesc*) &TM__Z07Nb1SkYoziC0Zz9be4mTA_23));
	{
		NIM_CHAR c;
		NI i;
		NI L;
		c = (NIM_CHAR)0;
		i = ((NI) 0);
		L = (s ? s->Sup.len : 0);
		{
			while (1) {
				if (!(i < L)) goto LA3;
				c = s->data[i];
				toCChar__JTr4d3QfIoJwmoCY9bN9adqQ(c, (&result));
				i += ((NI) 1);
			} LA3: ;
		}
	}
	result = addChar(result, 34);
	return result;
}
static N_INLINE(NI, len__P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n) {	NI result;
	NI T1_;
	result = (NI)0;
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*, getPragmaStmt__Q8FV3gEY9a7bxlDfNWj9atNg)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw w) {	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* result;
{	result = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	switch ((*n).kind) {
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 115):
	{
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = len__P89cqdlERShb9alU3iC0yj8wast(n);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA4;
					i = i_2;
					result = getPragmaStmt__Q8FV3gEY9a7bxlDfNWj9atNg((*n).sons->data[i], w);
					{
						if (!!((result == NIM_NIL))) goto LA7_;
						goto LA2;
					}
					LA7_: ;
					i_2 += ((NI) 1);
				} LA4: ;
			}
		} LA2: ;
	}
	break;
	case ((tyEnum_TNodeKind__G4E4Gxe7oI2Cm03rkiOzQw) 90):
	{
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = len__P89cqdlERShb9alU3iC0yj8wast(n);
			i_4 = ((NI) 0);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA12;
					i_3 = i_4;
					{
						tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw T15_;
						T15_ = (tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw)0;
						T15_ = whichPragma__Pjztiiq9bHmTTxDuLd39cNRw((*n).sons->data[i_3]);
						if (!(T15_ == w)) goto LA16_;
						result = (*n).sons->data[i_3];
						goto BeforeRet_;
					}
					LA16_: ;
					i_4 += ((NI) 1);
				} LA12: ;
			}
		}
	}
	break;
	default:
	{
	}
	break;
	}
	}BeforeRet_: ;
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, stmtsContainPragma__QPJXGOVirAPBlaL8RY5bwA)(tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* n, tyEnum_TSpecialWord__ycbpMCRV6Cd2eBh3X9biEiw w) {	NIM_BOOL result;
	tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw* T1_;
	result = (NIM_BOOL)0;
	T1_ = (tyObject_TNode__bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = getPragmaStmt__Q8FV3gEY9a7bxlDfNWj9atNg(n, w);
	result = !((T1_ == NIM_NIL));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(NI64, hashString__9acplCwsZ5kwBbm0f7S7DNw)(tyObject_ConfigRefcolonObjectType___LaK09ayL9alwKUad7rts0rTw* conf, NimStringDesc* s) {	NI64 result;
	result = (NI64)0;
	{
		NU64 b;
		if (!(CPU__uYXopJX8pM87pQDCtmgWfQ[((*conf).target.targetCPU)- 1].Field4 == ((NI) 64))) goto LA3_;
		b = 0ULL;
		{
			NI i;
			NI colontmp_;
			NI i_2;
			i = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = (s ? s->Sup.len : 0);
			i_2 = ((NI) 0);
			{
				while (1) {
					if (!(i_2 < colontmp_)) goto LA7;
					i = i_2;
					b = (NU64)((NU64)(b) + (NU64)(((NU64) (((NU) (((NU8)(s->data[i]))))))));
					b = (NU64)((NU64)(b) + (NU64)((NU64)((NU64)(b) << (NU64)(((NI) 10)))));
					b = (NU64)(b ^ (NU64)((NU64)(b) >> (NU64)(((NI) 6))));
					i_2 += ((NI) 1);
				} LA7: ;
			}
		}
		b = (NU64)((NU64)(b) + (NU64)((NU64)((NU64)(b) << (NU64)(((NI) 3)))));
		b = (NU64)(b ^ (NU64)((NU64)(b) >> (NU64)(((NI) 11))));
		b = (NU64)((NU64)(b) + (NU64)((NU64)((NU64)(b) << (NU64)(((NI) 15)))));
		result = ((NI64) (((NI) (b))));
	}
	goto LA1_;
	LA3_: ;
	{
		NU32 a;
		a = ((NU32) 0);
		{
			NI i_3;
			NI colontmp__2;
			NI i_4;
			i_3 = (NI)0;
			colontmp__2 = (NI)0;
			colontmp__2 = (s ? s->Sup.len : 0);
			i_4 = ((NI) 0);
			{
				while (1) {
					if (!(i_4 < colontmp__2)) goto LA11;
					i_3 = i_4;
					a = (NU32)((NU32)(a) + (NU32)(((NU32) (((NU8)(s->data[i_3]))))));
					a = (NU32)((NU32)(a) + (NU32)((NU32)((NU32)(a) << (NU32)(((NI) 10)))));
					a = (NU32)(a ^ (NU32)((NU32)(a) >> (NU32)(((NI) 6))));
					i_4 += ((NI) 1);
				} LA11: ;
			}
		}
		a = (NU32)((NU32)(a) + (NU32)((NU32)((NU32)(a) << (NU32)(((NI) 3)))));
		a = (NU32)(a ^ (NU32)((NU32)(a) >> (NU32)(((NI) 11))));
		a = (NU32)((NU32)(a) + (NU32)((NU32)((NU32)(a) << (NU32)(((NI) 15)))));
		result = ((NI64) (((NI) (a))));
	}
	LA1_: ;
	return result;
}
