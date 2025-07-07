#include "types.h"
#include "runtime.h"

static void clofun0(struct Cora* co);
static void clofun1(struct Cora* co);
static void clofun2(struct Cora* co);
static void clofun3(struct Cora* co);
static void clofun4(struct Cora* co);


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 162);
__symbolTable[0] = intern("cora/init#assq");
__symbolTable[1] = intern("cora/init#append");
__symbolTable[2] = intern("cora/init#filter");
__symbolTable[3] = intern("cora/init#length");
__symbolTable[4] = intern("cora/init#elem?");
__symbolTable[5] = intern("cora/init#macroexpand");
__symbolTable[6] = intern("cora/init#map");
__symbolTable[7] = intern("cora/init#reverse");
__symbolTable[8] = intern("cora/init#throw");
__symbolTable[9] = intern("cora/init#try");
__symbolTable[10] = intern("cora/init#import");
__symbolTable[11] = intern("cora/init#load-so");
__symbolTable[12] = intern("cora/init#load");
__symbolTable[13] = intern("cora/init#apply");
__symbolTable[14] = intern("cora/init#read-file-as-sexp");
__symbolTable[15] = intern("cora/init#value-or");
__symbolTable[16] = intern("cora/init#value");
__symbolTable[17] = intern("cora/init#bytes-length");
__symbolTable[18] = intern("cora/init#bytes");
__symbolTable[19] = intern("cora/init#vector-length");
__symbolTable[20] = intern("cora/init#vector-ref");
__symbolTable[21] = intern("cora/init#vector-set!");
__symbolTable[22] = intern("cora/init#vector?");
__symbolTable[23] = intern("cora/init#vector");
__symbolTable[24] = intern("cora/init#symbol->string");
__symbolTable[25] = intern("cora/init#intern");
__symbolTable[26] = intern("cora/init#string-append");
__symbolTable[27] = intern("cora/init#number?");
__symbolTable[28] = intern("cora/init#null?");
__symbolTable[29] = intern("cora/init#boolean?");
__symbolTable[30] = intern("cora/init#atom?");
__symbolTable[31] = intern("cora/init#pair?");
__symbolTable[32] = intern("cora/init#cdddr");
__symbolTable[33] = intern("cora/init#cadddr");
__symbolTable[34] = intern("cora/init#caddr");
__symbolTable[35] = intern("cora/init#cddr");
__symbolTable[36] = intern("cora/init#cdar");
__symbolTable[37] = intern("cora/init#caar");
__symbolTable[38] = intern("cora/init#cadr");
__symbolTable[39] = intern("throw");
__symbolTable[40] = intern("try");
__symbolTable[41] = intern("load");
__symbolTable[42] = intern("load-so");
__symbolTable[43] = intern("apply");
__symbolTable[44] = intern("value");
__symbolTable[45] = intern("read-file-as-sexp");
__symbolTable[46] = intern("bytes-length");
__symbolTable[47] = intern("bytes");
__symbolTable[48] = intern("vector-length");
__symbolTable[49] = intern("vector-ref");
__symbolTable[50] = intern("vector-set!");
__symbolTable[51] = intern("vector?");
__symbolTable[52] = intern("vector");
__symbolTable[53] = intern("cora/init#*ns-export*");
__symbolTable[54] = intern("number?");
__symbolTable[55] = intern("cora/init#builtin?");
__symbolTable[56] = intern("assq");
__symbolTable[57] = intern("string?");
__symbolTable[58] = intern("integer?");
__symbolTable[59] = intern("not");
__symbolTable[60] = intern("symbol?");
__symbolTable[61] = intern("gensym");
__symbolTable[62] = intern("<");
__symbolTable[63] = intern(">");
__symbolTable[64] = intern("/");
__symbolTable[65] = intern("*");
__symbolTable[66] = intern("-");
__symbolTable[67] = intern("+");
__symbolTable[68] = intern("set");
__symbolTable[69] = intern("cora/init#*builtin-prims*");
__symbolTable[70] = intern("value-or");
__symbolTable[71] = intern("cora/init#lookup-var");
__symbolTable[72] = intern("symbol->string");
__symbolTable[73] = intern("string-append");
__symbolTable[74] = intern("intern");
__symbolTable[75] = intern("symbol-cooked?");
__symbolTable[76] = intern("cora/init#var-with-ns");
__symbolTable[77] = intern("*ns-export*");
__symbolTable[78] = intern("ns");
__symbolTable[79] = intern("package");
__symbolTable[80] = intern("cora/init#parse-package");
__symbolTable[81] = intern("import");
__symbolTable[82] = intern("export");
__symbolTable[83] = intern("cora/init#parse-package-h");
__symbolTable[84] = intern("fold-apply");
__symbolTable[85] = intern("cora/init#rewrite-fold-apply");
__symbolTable[86] = intern("backquote");
__symbolTable[87] = intern("unquote");
__symbolTable[88] = intern("cora/init#rewrite-backquote");
__symbolTable[89] = intern("begin");
__symbolTable[90] = intern("do");
__symbolTable[91] = intern("cora/init#rewrite-begin");
__symbolTable[92] = intern("cora/init#peval");
__symbolTable[93] = intern("cora/init#parse");
__symbolTable[94] = intern("cora/init#rewrite-namespace");
__symbolTable[95] = intern("func");
__symbolTable[96] = intern("cora/init#gen-paramenters");
__symbolTable[97] = intern("cora/init#rules-arg-count");
__symbolTable[98] = intern("append");
__symbolTable[99] = intern("filter");
__symbolTable[100] = intern("cora/init#filter-h");
__symbolTable[101] = intern("length");
__symbolTable[102] = intern("cora/init#length-h");
__symbolTable[103] = intern("cora/init#rules-patterns");
__symbolTable[104] = intern("cora/init#extract-rules");
__symbolTable[105] = intern("=>");
__symbolTable[106] = intern("cora/init#extract-rules1");
__symbolTable[107] = intern("match");
__symbolTable[108] = intern("cora/init#rewrite-match");
__symbolTable[109] = intern("cora/init#match-helper");
__symbolTable[110] = intern("where");
__symbolTable[111] = intern("cora/init#extract-rule-action");
__symbolTable[112] = intern("str");
__symbolTable[113] = intern("=");
__symbolTable[114] = intern("cdr");
__symbolTable[115] = intern("car");
__symbolTable[116] = intern("cons?");
__symbolTable[117] = intern("cora/init#match1");
__symbolTable[118] = intern("cora/init#match-cons-expander");
__symbolTable[119] = intern("list-rest");
__symbolTable[120] = intern("cora/init#rcons1");
__symbolTable[121] = intern("boolean?");
__symbolTable[122] = intern("and");
__symbolTable[123] = intern("cora/init#rewrite-and");
__symbolTable[124] = intern("or");
__symbolTable[125] = intern("cora/init#rewrite-or");
__symbolTable[126] = intern("if");
__symbolTable[127] = intern("error");
__symbolTable[128] = intern("cond");
__symbolTable[129] = intern("let");
__symbolTable[130] = intern("cora/init#rewrite-let");
__symbolTable[131] = intern("atom?");
__symbolTable[132] = intern("elem?");
__symbolTable[133] = intern("def");
__symbolTable[134] = intern("defun");
__symbolTable[135] = intern("list");
__symbolTable[136] = intern("defmacro");
__symbolTable[137] = intern("defmacro-macro");
__symbolTable[138] = intern("macroexpand");
__symbolTable[139] = intern("quote");
__symbolTable[140] = intern("lambda");
__symbolTable[141] = intern("cora/init#macroexpand-boot");
__symbolTable[142] = intern("cora/init#macroexpand1");
__symbolTable[143] = intern("cora/init#macroexpand1-h");
__symbolTable[144] = intern("cora/init#add-to-*macros*");
__symbolTable[145] = intern("*protect-symbol*");
__symbolTable[146] = intern("*macros*");
__symbolTable[147] = intern("map");
__symbolTable[148] = intern("map-h");
__symbolTable[149] = intern("reverse");
__symbolTable[150] = intern("cora/init#reverse-h");
__symbolTable[151] = intern("pair?");
__symbolTable[152] = intern("cons");
__symbolTable[153] = intern("rcons");
__symbolTable[154] = intern("cdddr");
__symbolTable[155] = intern("cadddr");
__symbolTable[156] = intern("caddr");
__symbolTable[157] = intern("cddr");
__symbolTable[158] = intern("cdar");
__symbolTable[159] = intern("caar");
__symbolTable[160] = intern("cadr");
__symbolTable[161] = intern("null?");
clofun0(co);
}

static void clofun0(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3513852_37 = primSet(co, __symbolTable[161], makeNative(20, clofun4, 1, 0));
Obj _3513855_37 = primSet(co, __symbolTable[160], makeNative(19, clofun4, 1, 0));
Obj _3513858_37 = primSet(co, __symbolTable[159], makeNative(18, clofun4, 1, 0));
Obj _3513861_37 = primSet(co, __symbolTable[158], makeNative(17, clofun4, 1, 0));
Obj _3513864_37 = primSet(co, __symbolTable[157], makeNative(16, clofun4, 1, 0));
Obj _3513868_37 = primSet(co, __symbolTable[156], makeNative(15, clofun4, 1, 0));
Obj _3513873_37 = primSet(co, __symbolTable[155], makeNative(14, clofun4, 1, 0));
Obj _3513877_37 = primSet(co, __symbolTable[154], makeNative(13, clofun4, 1, 0));
Obj _3513885_37 = primSet(co, __symbolTable[153], makeNative(11, clofun4, 1, 0));
Obj _3513887_37 = primSet(co, __symbolTable[151], makeNative(10, clofun4, 1, 0));
Obj _3513892_37 = primSet(co, __symbolTable[150], makeNative(9, clofun4, 2, 0));
PUSH_CONT_0(co, 1, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[150]);
__arg1 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3513893_37 = __arg1;
Obj _3513894_37 = primSet(co, __symbolTable[149], _3513893_37);
Obj _3513900_37 = primSet(co, __symbolTable[148], makeNative(7, clofun4, 3, 0));
Obj _3513901_37 = primSet(co, __symbolTable[147], makeNative(6, clofun4, 2, 0));
Obj _3513902_37 = primSet(co, __symbolTable[146], Nil);
Obj _3513903_37 = primGenSym();
Obj _3513904_37 = primSet(co, __symbolTable[145], _3513903_37);
Obj _3513908_37 = primSet(co, __symbolTable[144], makeNative(5, clofun4, 2, 0));
Obj _3513917_37 = primSet(co, __symbolTable[143], makeNative(2, clofun4, 2, 0));
Obj _3513918_37 = primSet(co, __symbolTable[142], makeNative(1, clofun4, 1, 0));
Obj _3513935_37 = primSet(co, __symbolTable[141], makeNative(45, clofun3, 1, 0));
Obj _3513936_37 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj _3513947_37 = primSet(co, __symbolTable[137], makeNative(41, clofun3, 1, 0));
PUSH_CONT_0(co, 2, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[136];
__arg2 = globalRef(__symbolTable[137]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _3513948_37 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[135];
__arg2 = makeNative(40, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3513950_37 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[134];
__arg2 = makeNative(36, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3513960_37 = __arg1;
Obj _3513965_37 = primSet(co, __symbolTable[132], makeNative(35, clofun3, 2, 0));
Obj _3513968_37 = primSet(co, __symbolTable[131], makeNative(34, clofun3, 1, 0));
Obj _3513980_37 = primSet(co, __symbolTable[130], makeNative(29, clofun3, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[129];
__arg2 = makeNative(28, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3513982_37 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[128];
__arg2 = makeNative(24, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3513996_37 = __arg1;
Obj _3514008_37 = primSet(co, __symbolTable[125], makeNative(22, clofun3, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[124];
__arg2 = makeNative(21, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3514010_37 = __arg1;
Obj _3514022_37 = primSet(co, __symbolTable[123], makeNative(19, clofun3, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[122];
__arg2 = makeNative(18, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3514024_37 = __arg1;
Obj _3514027_37 = primSet(co, __symbolTable[121], makeNative(17, clofun3, 1, 0));
Obj _3514037_37 = primSet(co, __symbolTable[120], makeNative(14, clofun3, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[119];
__arg2 = makeNative(13, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3514039_37 = __arg1;
Obj _3514061_37 = primSet(co, __symbolTable[118], makeNative(4, clofun3, 4, 0));
Obj _3514094_37 = primSet(co, __symbolTable[117], makeNative(48, clofun2, 4, 0));
Obj _3514107_37 = primSet(co, __symbolTable[111], makeNative(43, clofun2, 2, 0));
Obj _3514129_37 = primSet(co, __symbolTable[109], makeNative(34, clofun2, 2, 0));
Obj _3514143_37 = primSet(co, __symbolTable[108], makeNative(28, clofun2, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[107];
__arg2 = makeNative(27, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3514144_37 = __arg1;
Obj _3514196_37 = primSet(co, __symbolTable[106], makeNative(22, clofun2, 3, 0));
Obj _3514197_37 = primSet(co, __symbolTable[104], makeNative(21, clofun2, 1, 0));
Obj _3514202_37 = primSet(co, __symbolTable[103], makeNative(18, clofun2, 2, 0));
Obj _3514206_37 = primSet(co, __symbolTable[102], makeNative(17, clofun2, 2, 0));
Obj _3514207_37 = primSet(co, __symbolTable[101], makeNative(16, clofun2, 1, 0));
Obj _3514215_37 = primSet(co, __symbolTable[100], makeNative(14, clofun2, 3, 0));
Obj _3514216_37 = primSet(co, __symbolTable[99], makeNative(13, clofun2, 2, 0));
Obj _3514222_37 = primSet(co, __symbolTable[98], makeNative(11, clofun2, 2, 0));
Obj _3514233_37 = primSet(co, __symbolTable[97], makeNative(4, clofun2, 1, 0));
Obj _3514239_37 = primSet(co, __symbolTable[96], makeNative(2, clofun2, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[95];
__arg2 = makeNative(46, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3514252_37 = __arg1;
Obj _3514253_37 = primSet(co, __symbolTable[94], makeNative(45, clofun1, 1, 0));
Obj _3514254_37 = primSet(co, __symbolTable[92], makeNative(44, clofun1, 1, 0));
Obj _3514257_37 = primSet(co, __symbolTable[138], makeNative(41, clofun1, 1, 0));
Obj _3514281_37 = primSet(co, __symbolTable[91], makeNative(37, clofun1, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[89];
__arg2 = makeNative(36, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3514283_37 = __arg1;
Obj _3514303_37 = primSet(co, __symbolTable[88], makeNative(33, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[86];
__arg2 = makeNative(31, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3514305_37 = __arg1;
Obj _3514319_37 = primSet(co, __symbolTable[85], makeNative(26, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[84];
__arg2 = makeNative(23, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3514322_37 = __arg1;
Obj _3514351_37 = primSet(co, __symbolTable[83], makeNative(19, clofun1, 4, 0));
Obj _3514352_37 = primSet(co, __symbolTable[80], makeNative(18, clofun1, 2, 0));
PUSH_CONT_0(co, 15, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[144]);
__arg1 = __symbolTable[79];
__arg2 = makeNative(10, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3514372_37 = __arg1;
Obj _3514378_37 = primSet(co, __symbolTable[76], makeNative(5, clofun1, 2, 0));
Obj _3514390_37 = primSet(co, __symbolTable[71], makeNative(47, clofun0, 3, 0));
Obj _3514391_37 = makeCons(makeCString("primSet"), Nil);
Obj _3514392_37 = makeCons(MAKE_NUMBER(2), _3514391_37);
Obj _3514393_37 = makeCons(__symbolTable[68], _3514392_37);
Obj _3514394_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3514395_37 = makeCons(MAKE_NUMBER(1), _3514394_37);
Obj _3514396_37 = makeCons(__symbolTable[115], _3514395_37);
Obj _3514397_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3514398_37 = makeCons(MAKE_NUMBER(1), _3514397_37);
Obj _3514399_37 = makeCons(__symbolTable[114], _3514398_37);
Obj _3514400_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3514401_37 = makeCons(MAKE_NUMBER(2), _3514400_37);
Obj _3514402_37 = makeCons(__symbolTable[152], _3514401_37);
Obj _3514403_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3514404_37 = makeCons(MAKE_NUMBER(1), _3514403_37);
Obj _3514405_37 = makeCons(__symbolTable[116], _3514404_37);
Obj _3514406_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3514407_37 = makeCons(MAKE_NUMBER(2), _3514406_37);
Obj _3514408_37 = makeCons(__symbolTable[67], _3514407_37);
Obj _3514409_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3514410_37 = makeCons(MAKE_NUMBER(2), _3514409_37);
Obj _3514411_37 = makeCons(__symbolTable[66], _3514410_37);
Obj _3514412_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3514413_37 = makeCons(MAKE_NUMBER(2), _3514412_37);
Obj _3514414_37 = makeCons(__symbolTable[65], _3514413_37);
Obj _3514415_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3514416_37 = makeCons(MAKE_NUMBER(2), _3514415_37);
Obj _3514417_37 = makeCons(__symbolTable[64], _3514416_37);
Obj _3514418_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3514419_37 = makeCons(MAKE_NUMBER(2), _3514418_37);
Obj _3514420_37 = makeCons(__symbolTable[113], _3514419_37);
Obj _3514421_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3514422_37 = makeCons(MAKE_NUMBER(2), _3514421_37);
Obj _3514423_37 = makeCons(__symbolTable[63], _3514422_37);
Obj _3514424_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3514425_37 = makeCons(MAKE_NUMBER(2), _3514424_37);
Obj _3514426_37 = makeCons(__symbolTable[62], _3514425_37);
Obj _3514427_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3514428_37 = makeCons(MAKE_NUMBER(0), _3514427_37);
Obj _3514429_37 = makeCons(__symbolTable[61], _3514428_37);
Obj _3514430_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3514431_37 = makeCons(MAKE_NUMBER(1), _3514430_37);
Obj _3514432_37 = makeCons(__symbolTable[60], _3514431_37);
Obj _3514433_37 = makeCons(makeCString("primNot"), Nil);
Obj _3514434_37 = makeCons(MAKE_NUMBER(1), _3514433_37);
Obj _3514435_37 = makeCons(__symbolTable[59], _3514434_37);
Obj _3514436_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3514437_37 = makeCons(MAKE_NUMBER(1), _3514436_37);
Obj _3514438_37 = makeCons(__symbolTable[58], _3514437_37);
Obj _3514439_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3514440_37 = makeCons(MAKE_NUMBER(1), _3514439_37);
Obj _3514441_37 = makeCons(__symbolTable[57], _3514440_37);
Obj _3514442_37 = makeCons(_3514441_37, Nil);
Obj _3514443_37 = makeCons(_3514438_37, _3514442_37);
Obj _3514444_37 = makeCons(_3514435_37, _3514443_37);
Obj _3514445_37 = makeCons(_3514432_37, _3514444_37);
Obj _3514446_37 = makeCons(_3514429_37, _3514445_37);
Obj _3514447_37 = makeCons(_3514426_37, _3514446_37);
Obj _3514448_37 = makeCons(_3514423_37, _3514447_37);
Obj _3514449_37 = makeCons(_3514420_37, _3514448_37);
Obj _3514450_37 = makeCons(_3514417_37, _3514449_37);
Obj _3514451_37 = makeCons(_3514414_37, _3514450_37);
Obj _3514452_37 = makeCons(_3514411_37, _3514451_37);
Obj _3514453_37 = makeCons(_3514408_37, _3514452_37);
Obj _3514454_37 = makeCons(_3514405_37, _3514453_37);
Obj _3514455_37 = makeCons(_3514402_37, _3514454_37);
Obj _3514456_37 = makeCons(_3514399_37, _3514455_37);
Obj _3514457_37 = makeCons(_3514396_37, _3514456_37);
Obj _3514458_37 = makeCons(_3514393_37, _3514457_37);
Obj _3514459_37 = primSet(co, __symbolTable[69], _3514458_37);
Obj _3514474_37 = primSet(co, __symbolTable[56], makeNative(45, clofun0, 2, 0));
Obj _3514478_37 = primSet(co, __symbolTable[55], makeNative(42, clofun0, 1, 0));
Obj _3514656_37 = primSet(co, __symbolTable[93], makeNative(16, clofun0, 4, 0));
Obj _3514657_37 = makeCons(__symbolTable[98], Nil);
Obj _3514658_37 = makeCons(__symbolTable[99], _3514657_37);
Obj _3514659_37 = makeCons(__symbolTable[101], _3514658_37);
Obj _3514660_37 = makeCons(__symbolTable[132], _3514659_37);
Obj _3514661_37 = makeCons(__symbolTable[138], _3514660_37);
Obj _3514662_37 = makeCons(__symbolTable[147], _3514661_37);
Obj _3514663_37 = makeCons(__symbolTable[149], _3514662_37);
Obj _3514664_37 = makeCons(__symbolTable[39], _3514663_37);
Obj _3514665_37 = makeCons(__symbolTable[40], _3514664_37);
Obj _3514666_37 = makeCons(__symbolTable[41], _3514665_37);
Obj _3514667_37 = makeCons(__symbolTable[81], _3514666_37);
Obj _3514668_37 = makeCons(__symbolTable[42], _3514667_37);
Obj _3514669_37 = makeCons(__symbolTable[43], _3514668_37);
Obj _3514670_37 = makeCons(__symbolTable[70], _3514669_37);
Obj _3514671_37 = makeCons(__symbolTable[44], _3514670_37);
Obj _3514672_37 = makeCons(__symbolTable[45], _3514671_37);
Obj _3514673_37 = makeCons(__symbolTable[46], _3514672_37);
Obj _3514674_37 = makeCons(__symbolTable[47], _3514673_37);
Obj _3514675_37 = makeCons(__symbolTable[48], _3514674_37);
Obj _3514676_37 = makeCons(__symbolTable[49], _3514675_37);
Obj _3514677_37 = makeCons(__symbolTable[50], _3514676_37);
Obj _3514678_37 = makeCons(__symbolTable[51], _3514677_37);
Obj _3514679_37 = makeCons(__symbolTable[52], _3514678_37);
Obj _3514680_37 = makeCons(__symbolTable[72], _3514679_37);
Obj _3514681_37 = makeCons(__symbolTable[74], _3514680_37);
Obj _3514682_37 = makeCons(__symbolTable[73], _3514681_37);
Obj _3514683_37 = makeCons(__symbolTable[161], _3514682_37);
Obj _3514684_37 = makeCons(__symbolTable[54], _3514683_37);
Obj _3514685_37 = makeCons(__symbolTable[121], _3514684_37);
Obj _3514686_37 = makeCons(__symbolTable[131], _3514685_37);
Obj _3514687_37 = makeCons(__symbolTable[151], _3514686_37);
Obj _3514688_37 = makeCons(__symbolTable[154], _3514687_37);
Obj _3514689_37 = makeCons(__symbolTable[155], _3514688_37);
Obj _3514690_37 = makeCons(__symbolTable[156], _3514689_37);
Obj _3514691_37 = makeCons(__symbolTable[157], _3514690_37);
Obj _3514692_37 = makeCons(__symbolTable[158], _3514691_37);
Obj _3514693_37 = makeCons(__symbolTable[159], _3514692_37);
Obj _3514694_37 = makeCons(__symbolTable[160], _3514693_37);
Obj _3514695_37 = primSet(co, __symbolTable[53], _3514694_37);
Obj _3514696_37 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj _3514697_37 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj _3514698_37 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj _3514699_37 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj _3514700_37 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj _3514701_37 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj _3514702_37 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj _3514703_37 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj _3514704_37 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj _3514705_37 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj _3514706_37 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj _3514707_37 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj _3514708_37 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj _3514709_37 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj _3514710_37 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj _3514711_37 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj _3514712_37 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj _3514713_37 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj _3514714_37 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj _3514715_37 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj _3514716_37 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj _3514717_37 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj _3514718_37 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj _3514719_37 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj _3514720_37 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj _3514721_37 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj _3514722_37 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj _3514723_37 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj _3514724_37 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj _3514725_37 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj _3514726_37 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj _3514727_37 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj _3514728_37 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj _3514729_37 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj _3514730_37 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj _3514731_37 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj _3514732_37 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj _3514733_37 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj _3514734_37 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
__nargs = 2;
__arg1 = _3514734_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _3513823_37 = __arg1;
Obj _3513824_37 = __arg2;
Obj _3513825_37 = __arg3;
Obj _3513826_37 = co->args[4];
Obj _3513847_37 = makeNative(20, clofun0, 1, 4, _3513823_37, _3513824_37, _3513825_37, _3513826_37);
pushCont(co, 17, clofun0, 2, _3513826_37, _3513847_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = _3513826_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3514652_37 = __arg1;
Obj _3513826_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513847_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514652_37) {
__nargs = 2;
__arg0 = _3513847_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514653_37 = primIsString(_3513826_37);
if (True == _3514653_37) {
__nargs = 2;
__arg0 = _3513847_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 2, _3513826_37, _3513847_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[121]);
__arg1 = _3513826_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj _3514654_37 = __arg1;
Obj _3513826_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513847_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514654_37) {
__nargs = 2;
__arg0 = _3513847_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun0, 1, _3513847_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _3513826_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _3514655_37 = __arg1;
Obj _3513847_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514655_37) {
__nargs = 2;
__arg0 = _3513847_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513847_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _3513848_37 = __arg1;
if (True == _3513848_37) {
__nargs = 2;
__arg1 = closureRef(co, 3);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513828_37 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514640_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3514640_37) {
Obj _3514641_37 = PRIM_CAR(closureRef(co, 3));
Obj _3514642_37 = PRIM_EQ(__symbolTable[139], _3514641_37);
if (True == _3514642_37) {
Obj _3514643_37 = PRIM_CDR(closureRef(co, 3));
Obj _3514644_37 = PRIM_ISCONS(_3514643_37);
if (True == _3514644_37) {
Obj _3514645_37 = PRIM_CDR(closureRef(co, 3));
Obj _3514646_37 = PRIM_CAR(_3514645_37);
Obj x = _3514646_37;
Obj _3514647_37 = PRIM_CDR(closureRef(co, 3));
Obj _3514648_37 = PRIM_CDR(_3514647_37);
Obj _3514649_37 = PRIM_EQ(Nil, _3514648_37);
if (True == _3514649_37) {
Obj _3514650_37 = makeCons(x, Nil);
Obj _3514651_37 = makeCons(__symbolTable[139], _3514650_37);
__nargs = 2;
__arg1 = _3514651_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513828_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513828_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513828_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513828_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label21:
{
Obj _3514479_37 = primIsSymbol(closureRef(co, 0));
if (True == _3514479_37) {
PUSH_CONT_0(co, 40, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513830_37 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3514618_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514618_37) {
Obj _3514619_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514620_37 = PRIM_EQ(__symbolTable[140], _3514619_37);
if (True == _3514620_37) {
Obj _3514621_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514622_37 = PRIM_ISCONS(_3514621_37);
if (True == _3514622_37) {
Obj _3514623_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514624_37 = PRIM_CAR(_3514623_37);
Obj args = _3514624_37;
Obj _3514625_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514626_37 = PRIM_CDR(_3514625_37);
Obj _3514627_37 = PRIM_ISCONS(_3514626_37);
if (True == _3514627_37) {
Obj _3514628_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514629_37 = PRIM_CDR(_3514628_37);
Obj _3514630_37 = PRIM_CAR(_3514629_37);
Obj body = _3514630_37;
Obj _3514631_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514632_37 = PRIM_CDR(_3514631_37);
Obj _3514633_37 = PRIM_CDR(_3514632_37);
Obj _3514634_37 = PRIM_EQ(Nil, _3514633_37);
if (True == _3514634_37) {
pushCont(co, 22, clofun0, 2, body, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = args;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label22:
{
Obj _3514635_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3514635_37;
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _3514636_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514637_37 = makeCons(_3514636_37, Nil);
Obj _3514638_37 = makeCons(args, _3514637_37);
Obj _3514639_37 = makeCons(__symbolTable[140], _3514638_37);
__nargs = 2;
__arg1 = _3514639_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj _3513831_37 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3514574_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514574_37) {
Obj _3514575_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514576_37 = PRIM_EQ(__symbolTable[90], _3514575_37);
if (True == _3514576_37) {
Obj _3514577_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514578_37 = PRIM_ISCONS(_3514577_37);
if (True == _3514578_37) {
Obj _3514579_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514580_37 = PRIM_CAR(_3514579_37);
Obj _3514581_37 = PRIM_ISCONS(_3514580_37);
if (True == _3514581_37) {
Obj _3514582_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514583_37 = PRIM_CAR(_3514582_37);
Obj _3514584_37 = PRIM_CAR(_3514583_37);
Obj _3514585_37 = PRIM_EQ(__symbolTable[81], _3514584_37);
if (True == _3514585_37) {
Obj _3514586_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514587_37 = PRIM_CAR(_3514586_37);
Obj _3514588_37 = PRIM_CDR(_3514587_37);
Obj _3514589_37 = PRIM_ISCONS(_3514588_37);
if (True == _3514589_37) {
Obj _3514590_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514591_37 = PRIM_CAR(_3514590_37);
Obj _3514592_37 = PRIM_CDR(_3514591_37);
Obj _3514593_37 = PRIM_CAR(_3514592_37);
Obj pkg = _3514593_37;
Obj _3514594_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514595_37 = PRIM_CAR(_3514594_37);
Obj _3514596_37 = PRIM_CDR(_3514595_37);
Obj _3514597_37 = PRIM_CDR(_3514596_37);
Obj _3514598_37 = PRIM_EQ(Nil, _3514597_37);
if (True == _3514598_37) {
Obj _3514599_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514600_37 = PRIM_CDR(_3514599_37);
Obj _3514601_37 = PRIM_ISCONS(_3514600_37);
if (True == _3514601_37) {
Obj _3514602_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514603_37 = PRIM_CDR(_3514602_37);
Obj _3514604_37 = PRIM_CAR(_3514603_37);
Obj y = _3514604_37;
Obj _3514605_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514606_37 = PRIM_CDR(_3514605_37);
Obj _3514607_37 = PRIM_CDR(_3514606_37);
Obj _3514608_37 = PRIM_EQ(Nil, _3514607_37);
if (True == _3514608_37) {
Obj _3514609_37 = primIsString(pkg);
if (True == _3514609_37) {
Obj _3514610_37 = makeCons(pkg, Nil);
Obj _3514611_37 = makeCons(__symbolTable[81], _3514610_37);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = _3514611_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _3514612_37 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514613_37 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, _3514612_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3514613_37;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3514614_37 = __arg1;
Obj _3514612_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514615_37 = makeCons(_3514614_37, Nil);
Obj _3514616_37 = makeCons(_3514612_37, _3514615_37);
Obj _3514617_37 = makeCons(__symbolTable[90], _3514616_37);
__nargs = 2;
__arg1 = _3514617_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj _3513832_37 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3514566_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514566_37) {
Obj _3514567_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3514567_37;
Obj _3514568_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514568_37;
Obj _3513849_37 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, _3513832_37);
Obj _3514572_37 = PRIM_EQ(op, __symbolTable[126]);
if (True == _3514572_37) {
__nargs = 2;
__arg0 = _3513849_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514573_37 = PRIM_EQ(op, __symbolTable[90]);
if (True == _3514573_37) {
__nargs = 2;
__arg0 = _3513849_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513849_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
__nargs = 1;
__arg0 = _3513832_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _3513850_37 = __arg1;
if (True == _3513850_37) {
PUSH_CONT_0(co, 29, clofun0);
__nargs = 4;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _3514569_37 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = _3514569_37;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3514570_37 = __arg1;
Obj _3514571_37 = makeCons(closureRef(co, 0), _3514570_37);
__nargs = 2;
__arg1 = _3514571_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _3513833_37 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _3514533_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514533_37) {
Obj _3514534_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514535_37 = PRIM_EQ(__symbolTable[129], _3514534_37);
if (True == _3514535_37) {
Obj _3514536_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514537_37 = PRIM_ISCONS(_3514536_37);
if (True == _3514537_37) {
Obj _3514538_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514539_37 = PRIM_CAR(_3514538_37);
Obj a = _3514539_37;
Obj _3514540_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514541_37 = PRIM_CDR(_3514540_37);
Obj _3514542_37 = PRIM_ISCONS(_3514541_37);
if (True == _3514542_37) {
Obj _3514543_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514544_37 = PRIM_CDR(_3514543_37);
Obj _3514545_37 = PRIM_CAR(_3514544_37);
Obj b = _3514545_37;
Obj _3514546_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514547_37 = PRIM_CDR(_3514546_37);
Obj _3514548_37 = PRIM_CDR(_3514547_37);
Obj _3514549_37 = PRIM_ISCONS(_3514548_37);
if (True == _3514549_37) {
Obj _3514550_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514551_37 = PRIM_CDR(_3514550_37);
Obj _3514552_37 = PRIM_CDR(_3514551_37);
Obj _3514553_37 = PRIM_CAR(_3514552_37);
Obj c = _3514553_37;
Obj _3514554_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514555_37 = PRIM_CDR(_3514554_37);
Obj _3514556_37 = PRIM_CDR(_3514555_37);
Obj _3514557_37 = PRIM_CDR(_3514556_37);
Obj _3514558_37 = PRIM_EQ(Nil, _3514557_37);
if (True == _3514558_37) {
pushCont(co, 32, clofun0, 2, c, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513833_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513833_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513833_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513833_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513833_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513833_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _3514559_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514560_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, _3514559_37, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3514560_37;
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3514561_37 = __arg1;
Obj _3514559_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514562_37 = makeCons(_3514561_37, Nil);
Obj _3514563_37 = makeCons(_3514559_37, _3514562_37);
Obj _3514564_37 = makeCons(a, _3514563_37);
Obj _3514565_37 = makeCons(__symbolTable[129], _3514564_37);
__nargs = 2;
__arg1 = _3514565_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _3513834_37 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _3514507_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3514507_37) {
Obj _3514508_37 = PRIM_CAR(closureRef(co, 2));
Obj _3514509_37 = PRIM_EQ(__symbolTable[78], _3514508_37);
if (True == _3514509_37) {
Obj _3514510_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514511_37 = PRIM_ISCONS(_3514510_37);
if (True == _3514511_37) {
Obj _3514512_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514513_37 = PRIM_CAR(_3514512_37);
Obj path = _3514513_37;
Obj _3514514_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514515_37 = PRIM_CDR(_3514514_37);
Obj _3514516_37 = PRIM_ISCONS(_3514515_37);
if (True == _3514516_37) {
Obj _3514517_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514518_37 = PRIM_CDR(_3514517_37);
Obj _3514519_37 = PRIM_CAR(_3514518_37);
Obj import = _3514519_37;
Obj _3514520_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514521_37 = PRIM_CDR(_3514520_37);
Obj _3514522_37 = PRIM_CDR(_3514521_37);
Obj _3514523_37 = PRIM_ISCONS(_3514522_37);
if (True == _3514523_37) {
Obj _3514524_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514525_37 = PRIM_CDR(_3514524_37);
Obj _3514526_37 = PRIM_CDR(_3514525_37);
Obj _3514527_37 = PRIM_CAR(_3514526_37);
Obj body = _3514527_37;
Obj _3514528_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514529_37 = PRIM_CDR(_3514528_37);
Obj _3514530_37 = PRIM_CDR(_3514529_37);
Obj _3514531_37 = PRIM_CDR(_3514530_37);
Obj _3514532_37 = PRIM_EQ(Nil, _3514531_37);
if (True == _3514532_37) {
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 3);
__arg2 = path;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513834_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513834_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513834_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513834_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513834_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513834_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _3513835_37 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj _3514483_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514483_37) {
Obj _3514484_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514485_37 = PRIM_EQ(__symbolTable[133], _3514484_37);
if (True == _3514485_37) {
Obj _3514486_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514487_37 = PRIM_ISCONS(_3514486_37);
if (True == _3514487_37) {
Obj _3514488_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514489_37 = PRIM_CAR(_3514488_37);
Obj var = _3514489_37;
Obj _3514490_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514491_37 = PRIM_CDR(_3514490_37);
Obj _3514492_37 = PRIM_ISCONS(_3514491_37);
if (True == _3514492_37) {
Obj _3514493_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514494_37 = PRIM_CDR(_3514493_37);
Obj _3514495_37 = PRIM_CAR(_3514494_37);
Obj val = _3514495_37;
Obj _3514496_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514497_37 = PRIM_CDR(_3514496_37);
Obj _3514498_37 = PRIM_CDR(_3514497_37);
Obj _3514499_37 = PRIM_EQ(Nil, _3514498_37);
if (True == _3514499_37) {
pushCont(co, 36, clofun0, 1, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = var;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513835_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513835_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513835_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513835_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513835_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _3514500_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = _3514500_37;
Obj _3514501_37 = makeCons(var1, Nil);
Obj _3514502_37 = makeCons(__symbolTable[139], _3514501_37);
pushCont(co, 37, clofun0, 1, _3514502_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _3514503_37 = __arg1;
Obj _3514502_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514504_37 = makeCons(_3514503_37, Nil);
Obj _3514505_37 = makeCons(_3514502_37, _3514504_37);
Obj _3514506_37 = makeCons(__symbolTable[68], _3514505_37);
__nargs = 2;
__arg1 = _3514506_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
PUSH_CONT_0(co, 39, clofun0);
__nargs = 4;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3514482_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = _3514482_37;
__arg2 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3514480_37 = __arg1;
if (True == _3514480_37) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT_0(co, 41, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[55]);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _3514481_37 = __arg1;
if (True == _3514481_37) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 4;
__arg0 = globalRef(__symbolTable[71]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x = __arg1;
PUSH_CONT_0(co, 43, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[56]);
__arg1 = x;
__arg2 = globalRef(__symbolTable[69]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3514475_37 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _3514475_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3514476_37 = __arg1;
Obj _3514477_37 = primNot(_3514476_37);
__nargs = 2;
__arg1 = _3514477_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj _3513818_37 = __arg1;
Obj _3513819_37 = __arg2;
Obj _3514460_37 = PRIM_EQ(Nil, _3513819_37);
if (True == _3514460_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513821_37 = makeNative(46, clofun0, 0, 2, _3513819_37, _3513818_37);
Obj _3514464_37 = PRIM_ISCONS(_3513819_37);
if (True == _3514464_37) {
Obj _3514465_37 = PRIM_CAR(_3513819_37);
Obj _3514466_37 = PRIM_ISCONS(_3514465_37);
if (True == _3514466_37) {
Obj _3514467_37 = PRIM_CAR(_3513819_37);
Obj _3514468_37 = PRIM_CAR(_3514467_37);
Obj x = _3514468_37;
Obj _3514469_37 = PRIM_CAR(_3513819_37);
Obj _3514470_37 = PRIM_CDR(_3514469_37);
Obj y = _3514470_37;
Obj _3514471_37 = PRIM_CDR(_3513819_37);
Obj _3514472_37 = PRIM_EQ(_3513818_37, x);
if (True == _3514472_37) {
Obj _3514473_37 = makeCons(x, y);
__nargs = 2;
__arg1 = _3514473_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513821_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513821_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513821_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label46:
{
Obj _3514461_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514461_37) {
Obj _3514462_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514463_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3514463_37;
__nargs = 3;
__arg0 = globalRef(__symbolTable[56]);
__arg1 = closureRef(co, 1);
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _3513813_37 = __arg1;
Obj _3513814_37 = __arg2;
Obj _3513815_37 = __arg3;
Obj _3514379_37 = PRIM_EQ(Nil, _3513815_37);
if (True == _3514379_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = _3513813_37;
__arg2 = _3513814_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514380_37 = PRIM_ISCONS(_3513815_37);
if (True == _3514380_37) {
Obj _3514381_37 = PRIM_CAR(_3513815_37);
Obj import = _3514381_37;
Obj _3514382_37 = PRIM_CDR(_3513815_37);
Obj more = _3514382_37;
pushCont(co, 48, clofun0, 4, import, _3513813_37, _3513814_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label48:
{
Obj _3514383_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513813_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, _3513813_37, _3513814_37, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = _3514383_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3514384_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513813_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, _3513813_37, _3513814_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = _3514384_37;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun1(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3514385_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513813_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = _3514385_37;
pushCont(co, 1, clofun1, 4, import, _3513813_37, _3513814_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = _3513813_37;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3514386_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513813_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3514386_37) {
pushCont(co, 2, clofun1, 1, import);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513813_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(__symbolTable[71]);
__arg1 = _3513813_37;
__arg2 = _3513814_37;
__arg3 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _3514387_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = makeCString("#");
__arg2 = _3514387_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3514388_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = import;
__arg2 = _3514388_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3514389_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = _3514389_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _3514373_37 = PRIM_EQ(ns, makeCString(""));
if (True == _3514373_37) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 6, clofun1, 2, var, ns);
__nargs = 2;
__arg0 = globalRef(__symbolTable[75]);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _3514374_37 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514374_37) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 7, clofun1, 1, ns);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _3514375_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = makeCString("#");
__arg2 = _3514375_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3514376_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = ns;
__arg2 = _3514376_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3514377_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = _3514377_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj sexp = __arg1;
pushCont(co, 11, clofun1, 1, sexp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3514353_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = _3514353_37;
pushCont(co, 12, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3514354_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(__symbolTable[80]);
__arg1 = _3514354_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3514355_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3514355_37;
__arg1 = makeNative(14, clofun1, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _3514356_37 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, _3514356_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = makeNative(17, clofun1, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3514359_37 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514356_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514360_37 = makeCons(export, Nil);
Obj _3514361_37 = makeCons(__symbolTable[86], _3514360_37);
Obj _3514362_37 = makeCons(_3514361_37, Nil);
Obj _3514363_37 = makeCons(__symbolTable[77], _3514362_37);
Obj _3514364_37 = makeCons(__symbolTable[133], _3514363_37);
Obj _3514365_37 = makeCons(_3514364_37, body);
pushCont(co, 16, clofun1, 1, _3514356_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = _3514359_37;
__arg2 = _3514365_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3514366_37 = __arg1;
Obj _3514356_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514367_37 = makeCons(__symbolTable[89], _3514366_37);
Obj _3514368_37 = makeCons(_3514367_37, Nil);
Obj _3514369_37 = makeCons(_3514356_37, _3514368_37);
Obj _3514370_37 = makeCons(closureRef(co, 0), _3514369_37);
Obj _3514371_37 = makeCons(__symbolTable[78], _3514370_37);
__nargs = 2;
__arg1 = _3514371_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj imp = __arg1;
Obj _3514357_37 = makeCons(imp, Nil);
Obj _3514358_37 = makeCons(__symbolTable[81], _3514357_37);
__nargs = 2;
__arg1 = _3514358_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj data = __arg1;
Obj k = __arg2;
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = data;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _3513806_37 = __arg1;
Obj _3513807_37 = __arg2;
Obj _3513808_37 = __arg3;
Obj _3513809_37 = co->args[4];
Obj _3513810_37 = makeNative(20, clofun1, 0, 4, _3513808_37, _3513806_37, _3513807_37, _3513809_37);
Obj _3514333_37 = PRIM_ISCONS(_3513806_37);
if (True == _3514333_37) {
Obj _3514334_37 = PRIM_CAR(_3513806_37);
Obj _3514335_37 = PRIM_ISCONS(_3514334_37);
if (True == _3514335_37) {
Obj _3514336_37 = PRIM_CAR(_3513806_37);
Obj _3514337_37 = PRIM_CAR(_3514336_37);
Obj _3514338_37 = PRIM_EQ(__symbolTable[81], _3514337_37);
if (True == _3514338_37) {
Obj _3514339_37 = PRIM_CAR(_3513806_37);
Obj _3514340_37 = PRIM_CDR(_3514339_37);
Obj _3514341_37 = PRIM_ISCONS(_3514340_37);
if (True == _3514341_37) {
Obj _3514342_37 = PRIM_CAR(_3513806_37);
Obj _3514343_37 = PRIM_CDR(_3514342_37);
Obj _3514344_37 = PRIM_CAR(_3514343_37);
Obj lib = _3514344_37;
Obj _3514345_37 = PRIM_CAR(_3513806_37);
Obj _3514346_37 = PRIM_CDR(_3514345_37);
Obj _3514347_37 = PRIM_CDR(_3514346_37);
Obj _3514348_37 = PRIM_EQ(Nil, _3514347_37);
if (True == _3514348_37) {
Obj _3514349_37 = PRIM_CDR(_3513806_37);
Obj rest = _3514349_37;
Obj _3514350_37 = makeCons(lib, _3513807_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = _3514350_37;
__arg3 = _3513808_37;
co->args[4] = _3513809_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _3513811_37 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj _3514324_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3514324_37) {
Obj _3514325_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514326_37 = PRIM_ISCONS(_3514325_37);
if (True == _3514326_37) {
Obj _3514327_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514328_37 = PRIM_CAR(_3514327_37);
Obj _3514329_37 = PRIM_EQ(__symbolTable[82], _3514328_37);
if (True == _3514329_37) {
Obj _3514330_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514331_37 = PRIM_CDR(_3514330_37);
Obj more = _3514331_37;
Obj _3514332_37 = PRIM_CDR(closureRef(co, 1));
Obj rest = _3514332_37;
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = closureRef(co, 2);
__arg3 = more;
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513811_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513811_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513811_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
PUSH_CONT_0(co, 22, clofun1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3514323_37 = __arg1;
__nargs = 4;
__arg0 = closureRef(co, 0);
__arg1 = _3514323_37;
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj exp = __arg1;
pushCont(co, 24, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3514320_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, _3514320_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3514321_37 = __arg1;
Obj _3514320_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3514320_37;
__arg2 = _3514321_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj fn = __arg1;
Obj arglist = __arg2;
pushCont(co, 27, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3514306_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _3514306_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3514307_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514307_37) {
Obj _3514308_37 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, _3514308_37, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514313_37 = PRIM_CAR(arglist);
Obj _3514314_37 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, _3514313_37, fn);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = fn;
__arg2 = _3514314_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _3514315_37 = __arg1;
Obj _3514313_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514316_37 = makeCons(_3514315_37, Nil);
Obj _3514317_37 = makeCons(_3514313_37, _3514316_37);
Obj _3514318_37 = makeCons(fn, _3514317_37);
__nargs = 2;
__arg1 = _3514318_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj _3514309_37 = __arg1;
Obj _3514308_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514310_37 = makeCons(_3514309_37, Nil);
Obj _3514311_37 = makeCons(_3514308_37, _3514310_37);
Obj _3514312_37 = makeCons(fn, _3514311_37);
__nargs = 2;
__arg1 = _3514312_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 32, clofun1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3514304_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = _3514304_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3513801_37 = __arg1;
Obj _3514284_37 = primIsSymbol(_3513801_37);
if (True == _3514284_37) {
Obj _3514285_37 = makeCons(_3513801_37, Nil);
Obj _3514286_37 = makeCons(__symbolTable[139], _3514285_37);
__nargs = 2;
__arg1 = _3514286_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513803_37 = makeNative(34, clofun1, 0, 1, _3513801_37);
Obj _3514293_37 = PRIM_ISCONS(_3513801_37);
if (True == _3514293_37) {
Obj _3514294_37 = PRIM_CAR(_3513801_37);
Obj _3514295_37 = PRIM_EQ(__symbolTable[87], _3514294_37);
if (True == _3514295_37) {
Obj _3514296_37 = PRIM_CDR(_3513801_37);
Obj _3514297_37 = PRIM_ISCONS(_3514296_37);
if (True == _3514297_37) {
Obj _3514298_37 = PRIM_CDR(_3513801_37);
Obj _3514299_37 = PRIM_CAR(_3514298_37);
Obj x = _3514299_37;
Obj _3514300_37 = PRIM_CDR(_3513801_37);
Obj _3514301_37 = PRIM_CDR(_3514300_37);
Obj _3514302_37 = PRIM_EQ(Nil, _3514301_37);
if (True == _3514302_37) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label34:
{
Obj _3514287_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514287_37) {
Obj _3514288_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3514288_37;
Obj _3514289_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3514289_37;
Obj _3514290_37 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = globalRef(__symbolTable[88]);
__arg2 = _3514290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label35:
{
Obj _3514291_37 = __arg1;
Obj _3514292_37 = makeCons(__symbolTable[135], _3514291_37);
__nargs = 2;
__arg1 = _3514292_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj exp = __arg1;
Obj _3514282_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[91]);
__arg1 = _3514282_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _3513797_37 = __arg1;
Obj _3513798_37 = makeNative(38, clofun1, 0, 1, _3513797_37);
Obj _3514277_37 = PRIM_ISCONS(_3513797_37);
if (True == _3514277_37) {
Obj _3514278_37 = PRIM_CAR(_3513797_37);
Obj x = _3514278_37;
Obj _3514279_37 = PRIM_CDR(_3513797_37);
Obj _3514280_37 = PRIM_EQ(Nil, _3514279_37);
if (True == _3514280_37) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513798_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513798_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _3513799_37 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj _3514265_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514265_37) {
Obj _3514266_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3514266_37;
Obj _3514267_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514268_37 = PRIM_ISCONS(_3514267_37);
if (True == _3514268_37) {
Obj _3514269_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514270_37 = PRIM_CAR(_3514269_37);
Obj y = _3514270_37;
Obj _3514271_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514272_37 = PRIM_CDR(_3514271_37);
Obj _3514273_37 = PRIM_EQ(Nil, _3514272_37);
if (True == _3514273_37) {
Obj _3514274_37 = makeCons(y, Nil);
Obj _3514275_37 = makeCons(x, _3514274_37);
Obj _3514276_37 = makeCons(__symbolTable[90], _3514275_37);
__nargs = 2;
__arg1 = _3514276_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513799_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513799_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513799_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _3514258_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514258_37) {
Obj _3514259_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3514259_37;
Obj _3514260_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3514260_37;
pushCont(co, 40, clofun1, 1, x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[91]);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _3514261_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514262_37 = makeCons(_3514261_37, Nil);
Obj _3514263_37 = makeCons(x, _3514262_37);
Obj _3514264_37 = makeCons(__symbolTable[90], _3514263_37);
__nargs = 2;
__arg1 = _3514264_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 42, clofun1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[141]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3514255_37 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[94]);
__arg1 = _3514255_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3514256_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[92]);
__arg1 = _3514256_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x = __arg1;
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj exp = __arg1;
pushCont(co, 47, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3514240_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[104]);
__arg1 = _3514240_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _3514241_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = _3514241_37;
pushCont(co, 49, clofun1, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3514242_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = _3514242_37;
pushCont(co, 0, clofun2, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun2(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3514243_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = _3514243_37;
pushCont(co, 1, clofun2, 2, body, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3514244_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514245_37 = makeCons(__symbolTable[135], args);
Obj _3514246_37 = makeCons(_3514245_37, body);
Obj _3514247_37 = makeCons(__symbolTable[107], _3514246_37);
Obj _3514248_37 = makeCons(_3514247_37, Nil);
Obj _3514249_37 = makeCons(args, _3514248_37);
Obj _3514250_37 = makeCons(_3514244_37, _3514249_37);
Obj _3514251_37 = makeCons(__symbolTable[134], _3514250_37);
__nargs = 2;
__arg1 = _3514251_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj n = __arg1;
Obj _3514234_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3514234_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514235_37 = primGenSym();
Obj _3514236_37 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, _3514235_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = _3514236_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _3514237_37 = __arg1;
Obj _3514235_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514238_37 = makeCons(_3514235_37, _3514237_37);
__nargs = 2;
__arg1 = _3514238_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 5, clofun2);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3514223_37 = __arg1;
Obj pats = _3514223_37;
PUSH_CONT_0(co, 6, clofun2);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = makeNative(10, clofun2, 1, 0);
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3514225_37 = __arg1;
Obj counts = _3514225_37;
Obj _3514226_37 = PRIM_CAR(counts);
Obj n = _3514226_37;
Obj _3514229_37 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(__symbolTable[99]);
__arg1 = makeNative(9, clofun2, 1, 1, n);
__arg2 = _3514229_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3514230_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _3514230_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3514231_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514232_37 = primNot(_3514231_37);
if (True == _3514232_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj x = __arg1;
Obj _3514227_37 = PRIM_EQ(closureRef(co, 0), x);
Obj _3514228_37 = primNot(_3514227_37);
__nargs = 2;
__arg1 = _3514228_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x = __arg1;
Obj _3514224_37 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[101]);
__arg1 = _3514224_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _3514217_37 = PRIM_EQ(l1, Nil);
if (True == _3514217_37) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514218_37 = PRIM_CAR(l1);
Obj _3514219_37 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, _3514218_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = _3514219_37;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _3514220_37 = __arg1;
Obj _3514218_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514221_37 = makeCons(_3514218_37, _3514220_37);
__nargs = 2;
__arg1 = _3514221_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj fn = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = Nil;
__arg2 = fn;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _3514208_37 = PRIM_ISCONS(l);
if (True == _3514208_37) {
Obj _3514209_37 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _3514209_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _3514210_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3514210_37) {
Obj _3514211_37 = PRIM_CAR(l);
Obj _3514212_37 = makeCons(_3514211_37, res);
Obj _3514213_37 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = _3514212_37;
__arg2 = fn;
__arg3 = _3514213_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514214_37 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = res;
__arg2 = fn;
__arg3 = _3514214_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj l = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = MAKE_NUMBER(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _3514203_37 = PRIM_EQ(l, Nil);
if (True == _3514203_37) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514204_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3514205_37 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = _3514204_37;
__arg2 = _3514205_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 19, clofun2, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _3514198_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514198_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514199_37 = PRIM_CAR(rules);
Obj _3514200_37 = makeCons(_3514199_37, res);
pushCont(co, 20, clofun2, 1, _3514200_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _3514201_37 = __arg1;
Obj _3514200_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = _3514200_37;
__arg2 = _3514201_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj input = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = input;
__arg2 = Nil;
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _3514145_37 = PRIM_EQ(Nil, input);
if (True == _3514145_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513794_37 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj _3514163_37 = PRIM_ISCONS(input);
if (True == _3514163_37) {
Obj _3514164_37 = PRIM_CAR(input);
Obj _3514165_37 = PRIM_EQ(__symbolTable[105], _3514164_37);
if (True == _3514165_37) {
Obj _3514166_37 = PRIM_CDR(input);
Obj _3514167_37 = PRIM_ISCONS(_3514166_37);
if (True == _3514167_37) {
Obj _3514168_37 = PRIM_CDR(input);
Obj _3514169_37 = PRIM_CAR(_3514168_37);
Obj act = _3514169_37;
Obj _3514170_37 = PRIM_CDR(input);
Obj _3514171_37 = PRIM_CDR(_3514170_37);
Obj _3514172_37 = PRIM_ISCONS(_3514171_37);
if (True == _3514172_37) {
Obj _3514173_37 = PRIM_CDR(input);
Obj _3514174_37 = PRIM_CDR(_3514173_37);
Obj _3514175_37 = PRIM_CAR(_3514174_37);
Obj _3514176_37 = PRIM_EQ(__symbolTable[110], _3514175_37);
if (True == _3514176_37) {
Obj _3514177_37 = PRIM_CDR(input);
Obj _3514178_37 = PRIM_CDR(_3514177_37);
Obj _3514179_37 = PRIM_CDR(_3514178_37);
Obj _3514180_37 = PRIM_ISCONS(_3514179_37);
if (True == _3514180_37) {
Obj _3514181_37 = PRIM_CDR(input);
Obj _3514182_37 = PRIM_CDR(_3514181_37);
Obj _3514183_37 = PRIM_CDR(_3514182_37);
Obj _3514184_37 = PRIM_CAR(_3514183_37);
Obj pred = _3514184_37;
Obj _3514185_37 = PRIM_CDR(input);
Obj _3514186_37 = PRIM_CDR(_3514185_37);
Obj _3514187_37 = PRIM_CDR(_3514186_37);
Obj _3514188_37 = PRIM_CDR(_3514187_37);
Obj remain = _3514188_37;
pushCont(co, 23, clofun2, 4, act, pred, result, remain);
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = current;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label23:
{
Obj _3514189_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514190_37 = makeCons(__symbolTable[135], _3514189_37);
Obj pat = _3514190_37;
Obj _3514191_37 = makeCons(act, Nil);
Obj _3514192_37 = makeCons(pred, _3514191_37);
Obj _3514193_37 = makeCons(__symbolTable[110], _3514192_37);
Obj _3514194_37 = makeCons(pat, result);
Obj _3514195_37 = makeCons(_3514193_37, _3514194_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _3514195_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3513795_37 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514150_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514150_37) {
Obj _3514151_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514152_37 = PRIM_EQ(__symbolTable[105], _3514151_37);
if (True == _3514152_37) {
Obj _3514153_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514154_37 = PRIM_ISCONS(_3514153_37);
if (True == _3514154_37) {
Obj _3514155_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514156_37 = PRIM_CAR(_3514155_37);
Obj act = _3514156_37;
Obj _3514157_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514158_37 = PRIM_CDR(_3514157_37);
Obj remain = _3514158_37;
pushCont(co, 25, clofun2, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513795_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513795_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513795_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _3514159_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514160_37 = makeCons(__symbolTable[135], _3514159_37);
Obj pat = _3514160_37;
Obj _3514161_37 = makeCons(pat, closureRef(co, 2));
Obj _3514162_37 = makeCons(act, _3514161_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _3514162_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3514146_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514146_37) {
Obj _3514147_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3514147_37;
Obj _3514148_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3514148_37;
Obj _3514149_37 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = y;
__arg2 = _3514149_37;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj exp = __arg1;
pushCont(co, 29, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3514130_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[138]);
__arg1 = _3514130_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3514131_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = _3514131_37;
pushCont(co, 31, clofun2, 1, value);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _3514132_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = _3514132_37;
Obj _3513845_37 = makeNative(32, clofun2, 1, 2, value, rules);
Obj _3514139_37 = PRIM_ISCONS(value);
if (True == _3514139_37) {
Obj _3514140_37 = PRIM_CAR(value);
Obj _3514141_37 = PRIM_EQ(__symbolTable[152], _3514140_37);
Obj _3514142_37 = primNot(_3514141_37);
if (True == _3514142_37) {
__nargs = 2;
__arg0 = _3513845_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513845_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _3513845_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _3513846_37 = __arg1;
if (True == _3513846_37) {
Obj _3514133_37 = primGenSym();
Obj val = _3514133_37;
pushCont(co, 33, clofun2, 1, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[109]);
__arg1 = val;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(__symbolTable[109]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3514134_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514135_37 = makeCons(_3514134_37, Nil);
Obj _3514136_37 = makeCons(closureRef(co, 0), _3514135_37);
Obj _3514137_37 = makeCons(val, _3514136_37);
Obj _3514138_37 = makeCons(__symbolTable[129], _3514137_37);
__nargs = 2;
__arg1 = _3514138_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 35, clofun2, 2, value, rules);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3514108_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514108_37) {
Obj _3514109_37 = makeCons(makeCString("no match-help found!"), Nil);
Obj _3514110_37 = makeCons(__symbolTable[127], _3514109_37);
__nargs = 2;
__arg1 = _3514110_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513843_37 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, _3513843_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[151]);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _3514126_37 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513843_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514126_37) {
Obj _3514127_37 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, _3513843_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[151]);
__arg1 = _3514127_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513843_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _3514128_37 = __arg1;
Obj _3513843_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514128_37) {
__nargs = 2;
__arg0 = _3513843_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513843_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _3513844_37 = __arg1;
if (True == _3513844_37) {
Obj _3514111_37 = PRIM_CAR(closureRef(co, 1));
Obj pat = _3514111_37;
Obj _3514112_37 = primGenSym();
Obj cc = _3514112_37;
pushCont(co, 39, clofun2, 2, pat, cc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[111]);
__arg1 = closureRef(co, 1);
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _3514113_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = _3514113_37;
pushCont(co, 40, clofun2, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(__symbolTable[138]);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3514114_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = _3514114_37;
__arg2 = closureRef(co, 0);
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _3514115_37 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _3514115_37;
Obj _3514116_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514117_37 = PRIM_CDR(_3514116_37);
pushCont(co, 42, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[109]);
__arg1 = closureRef(co, 0);
__arg2 = _3514117_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3514118_37 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _3514118_37;
Obj _3514119_37 = makeCons(rest, Nil);
Obj _3514120_37 = makeCons(Nil, _3514119_37);
Obj _3514121_37 = makeCons(__symbolTable[140], _3514120_37);
Obj _3514122_37 = makeCons(curr, Nil);
Obj _3514123_37 = makeCons(_3514121_37, _3514122_37);
Obj _3514124_37 = makeCons(cc, _3514123_37);
Obj _3514125_37 = makeCons(__symbolTable[129], _3514124_37);
__nargs = 2;
__arg1 = _3514125_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _3514095_37 = PRIM_CDR(rules);
Obj _3514096_37 = PRIM_CAR(_3514095_37);
Obj action = _3514096_37;
Obj _3513841_37 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, _3513841_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[151]);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3514104_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513841_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514104_37) {
Obj _3514105_37 = PRIM_CAR(action);
Obj _3514106_37 = PRIM_EQ(_3514105_37, __symbolTable[110]);
if (True == _3514106_37) {
__nargs = 2;
__arg0 = _3513841_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513841_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _3513841_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _3513842_37 = __arg1;
if (True == _3513842_37) {
PUSH_CONT_0(co, 46, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = closureRef(co, 1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
Obj _3514097_37 = __arg1;
pushCont(co, 47, clofun2, 1, _3514097_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[156]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3514098_37 = __arg1;
Obj _3514097_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514099_37 = makeCons(closureRef(co, 0), Nil);
Obj _3514100_37 = makeCons(_3514099_37, Nil);
Obj _3514101_37 = makeCons(_3514098_37, _3514100_37);
Obj _3514102_37 = makeCons(_3514097_37, _3514101_37);
Obj _3514103_37 = makeCons(__symbolTable[126], _3514102_37);
__nargs = 2;
__arg1 = _3514103_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 49, clofun2, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = makeNative(2, clofun3, 1, 0);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3514065_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3514065_37) {
Obj _3514066_37 = PRIM_EQ(pat, expr);
if (True == _3514066_37) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514067_37 = makeCons(expr, Nil);
Obj _3514068_37 = makeCons(pat, _3514067_37);
Obj _3514069_37 = makeCons(__symbolTable[113], _3514068_37);
Obj _3514070_37 = makeCons(cc, Nil);
Obj _3514071_37 = makeCons(_3514070_37, Nil);
Obj _3514072_37 = makeCons(body, _3514071_37);
Obj _3514073_37 = makeCons(_3514069_37, _3514072_37);
Obj _3514074_37 = makeCons(__symbolTable[126], _3514073_37);
__nargs = 2;
__arg1 = _3514074_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _3514075_37 = primIsSymbol(pat);
if (True == _3514075_37) {
Obj _3514076_37 = makeCons(body, Nil);
Obj _3514077_37 = makeCons(expr, _3514076_37);
Obj _3514078_37 = makeCons(pat, _3514077_37);
Obj _3514079_37 = makeCons(__symbolTable[129], _3514078_37);
__nargs = 2;
__arg1 = _3514079_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 0, clofun3, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(__symbolTable[151]);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun3(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3514080_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3514080_37) {
Obj _3514081_37 = PRIM_CAR(pat);
Obj _3514082_37 = PRIM_EQ(_3514081_37, __symbolTable[139]);
if (True == _3514082_37) {
Obj _3514083_37 = makeCons(expr, Nil);
Obj _3514084_37 = makeCons(pat, _3514083_37);
Obj _3514085_37 = makeCons(__symbolTable[113], _3514084_37);
Obj _3514086_37 = makeCons(cc, Nil);
Obj _3514087_37 = makeCons(_3514086_37, Nil);
Obj _3514088_37 = makeCons(body, _3514087_37);
Obj _3514089_37 = makeCons(_3514085_37, _3514088_37);
Obj _3514090_37 = makeCons(__symbolTable[126], _3514089_37);
__nargs = 2;
__arg1 = _3514090_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514091_37 = PRIM_CAR(pat);
Obj _3514092_37 = PRIM_EQ(_3514091_37, __symbolTable[152]);
if (True == _3514092_37) {
__nargs = 5;
__arg0 = globalRef(__symbolTable[118]);
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
PUSH_CONT_0(co, 1, clofun3);
__nargs = 3;
__arg0 = globalRef(__symbolTable[112]);
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3514093_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = _3514093_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x = __arg1;
pushCont(co, 3, clofun3, 1, x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3514062_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514062_37) {
Obj _3514063_37 = primIsSymbol(x);
Obj _3514064_37 = primNot(_3514063_37);
if (True == _3514064_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 5, clofun3, 4, pat, body, cc, expr);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3514040_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = _3514040_37;
pushCont(co, 6, clofun3, 4, x, body, cc, expr);
__nargs = 2;
__arg0 = globalRef(__symbolTable[156]);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3514041_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = _3514041_37;
Obj _3513839_37 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj _3514058_37 = PRIM_ISCONS(expr);
if (True == _3514058_37) {
Obj _3514059_37 = PRIM_CAR(expr);
Obj _3514060_37 = PRIM_EQ(_3514059_37, __symbolTable[152]);
if (True == _3514060_37) {
__nargs = 2;
__arg0 = _3513839_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513839_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _3513839_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _3513840_37 = __arg1;
if (True == _3513840_37) {
PUSH_CONT_0(co, 10, clofun3);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514045_37 = makeCons(closureRef(co, 2), Nil);
Obj _3514046_37 = makeCons(__symbolTable[116], _3514045_37);
Obj _3514047_37 = makeCons(closureRef(co, 2), Nil);
Obj _3514048_37 = makeCons(__symbolTable[115], _3514047_37);
Obj _3514049_37 = makeCons(closureRef(co, 2), Nil);
Obj _3514050_37 = makeCons(__symbolTable[114], _3514049_37);
pushCont(co, 8, clofun3, 2, _3514048_37, _3514046_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = _3514050_37;
__arg3 = closureRef(co, 3);
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _3514051_37 = __arg1;
Obj _3514048_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514046_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, _3514046_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = _3514048_37;
__arg3 = _3514051_37;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3514052_37 = __arg1;
Obj _3514046_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514053_37 = makeCons(closureRef(co, 4), Nil);
Obj _3514054_37 = makeCons(_3514053_37, Nil);
Obj _3514055_37 = makeCons(_3514052_37, _3514054_37);
Obj _3514056_37 = makeCons(_3514046_37, _3514055_37);
Obj _3514057_37 = makeCons(__symbolTable[126], _3514056_37);
__nargs = 2;
__arg1 = _3514057_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _3514042_37 = __arg1;
Obj e1 = _3514042_37;
pushCont(co, 11, clofun3, 1, e1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[156]);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3514043_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = _3514043_37;
pushCont(co, 12, clofun3, 1, e1);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = e2;
__arg3 = closureRef(co, 3);
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3514044_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = _3514044_37;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
Obj _3514038_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[120]);
__arg1 = _3514038_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj pat = __arg1;
Obj _3514028_37 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _3514028_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3514029_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514029_37) {
Obj _3514030_37 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = _3514030_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514031_37 = PRIM_CAR(pat);
Obj _3514032_37 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, _3514031_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[120]);
__arg1 = _3514032_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _3514033_37 = __arg1;
Obj _3514031_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514034_37 = makeCons(_3514033_37, Nil);
Obj _3514035_37 = makeCons(_3514031_37, _3514034_37);
Obj _3514036_37 = makeCons(__symbolTable[152], _3514035_37);
__nargs = 2;
__arg1 = _3514036_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj _3514025_37 = PRIM_EQ(x, True);
if (True == _3514025_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514026_37 = PRIM_EQ(x, False);
if (True == _3514026_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label18:
{
Obj exp = __arg1;
Obj _3514023_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[123]);
__arg1 = _3514023_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj l = __arg1;
Obj _3514011_37 = PRIM_EQ(Nil, l);
if (True == _3514011_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514012_37 = PRIM_CAR(l);
Obj _3514013_37 = PRIM_EQ(_3514012_37, False);
if (True == _3514013_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514014_37 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[123]);
__arg1 = _3514014_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj _3514015_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _3514015_37;
Obj _3514016_37 = PRIM_EQ(more, False);
if (True == _3514016_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514017_37 = PRIM_CAR(l);
Obj _3514018_37 = makeCons(False, Nil);
Obj _3514019_37 = makeCons(more, _3514018_37);
Obj _3514020_37 = makeCons(_3514017_37, _3514019_37);
Obj _3514021_37 = makeCons(__symbolTable[126], _3514020_37);
__nargs = 2;
__arg1 = _3514021_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label21:
{
Obj exp = __arg1;
Obj _3514009_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[125]);
__arg1 = _3514009_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj l = __arg1;
Obj _3513997_37 = PRIM_EQ(l, Nil);
if (True == _3513997_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513998_37 = PRIM_CAR(l);
Obj _3513999_37 = PRIM_EQ(_3513998_37, True);
if (True == _3513999_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514000_37 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[125]);
__arg1 = _3514000_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label23:
{
Obj _3514001_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _3514001_37;
Obj _3514002_37 = PRIM_EQ(more, True);
if (True == _3514002_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514003_37 = PRIM_CAR(l);
Obj _3514004_37 = makeCons(more, Nil);
Obj _3514005_37 = makeCons(True, _3514004_37);
Obj _3514006_37 = makeCons(_3514003_37, _3514005_37);
Obj _3514007_37 = makeCons(__symbolTable[126], _3514006_37);
__nargs = 2;
__arg1 = _3514007_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label24:
{
Obj exp = __arg1;
Obj _3513983_37 = PRIM_CDR(exp);
Obj _3513984_37 = PRIM_EQ(Nil, _3513983_37);
if (True == _3513984_37) {
Obj _3513985_37 = makeCons(makeCString("no cond match"), Nil);
Obj _3513986_37 = makeCons(__symbolTable[127], _3513985_37);
__nargs = 2;
__arg1 = _3513986_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 25, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _3513987_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _3513987_37;
Obj _3513988_37 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, _3513988_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3513989_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513988_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, _3513989_37, _3513988_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3513990_37 = __arg1;
Obj _3513989_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513988_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513991_37 = makeCons(__symbolTable[128], _3513990_37);
Obj _3513992_37 = makeCons(_3513991_37, Nil);
Obj _3513993_37 = makeCons(_3513989_37, _3513992_37);
Obj _3513994_37 = makeCons(_3513988_37, _3513993_37);
Obj _3513995_37 = makeCons(__symbolTable[126], _3513994_37);
__nargs = 2;
__arg1 = _3513995_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj exp = __arg1;
Obj _3513981_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = _3513981_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
Obj _3513969_37 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _3513969_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3513970_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3513970_37) {
Obj _3513971_37 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = _3513971_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513972_37 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, _3513972_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _3513973_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513972_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, _3513973_37, _3513972_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[157]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3513974_37 = __arg1;
Obj _3513973_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513972_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, _3513973_37, _3513972_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = _3513974_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3513975_37 = __arg1;
Obj _3513973_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513972_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513976_37 = makeCons(_3513975_37, Nil);
Obj _3513977_37 = makeCons(_3513973_37, _3513976_37);
Obj _3513978_37 = makeCons(_3513972_37, _3513977_37);
Obj _3513979_37 = makeCons(__symbolTable[129], _3513978_37);
__nargs = 2;
__arg1 = _3513979_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x = __arg1;
Obj _3513966_37 = PRIM_ISCONS(x);
Obj _3513967_37 = primNot(_3513966_37);
__nargs = 2;
__arg1 = _3513967_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _3513961_37 = PRIM_ISCONS(l);
if (True == _3513961_37) {
Obj _3513962_37 = PRIM_CAR(l);
Obj _3513963_37 = PRIM_EQ(_3513962_37, x);
if (True == _3513963_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513964_37 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = x;
__arg2 = _3513964_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label36:
{
Obj exp = __arg1;
pushCont(co, 37, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _3513951_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, _3513951_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[156]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3513952_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513951_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, _3513952_37, _3513951_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[155]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3513953_37 = __arg1;
Obj _3513952_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513951_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513954_37 = makeCons(_3513953_37, Nil);
Obj _3513955_37 = makeCons(_3513952_37, _3513954_37);
Obj _3513956_37 = makeCons(__symbolTable[140], _3513955_37);
Obj _3513957_37 = makeCons(_3513956_37, Nil);
Obj _3513958_37 = makeCons(_3513951_37, _3513957_37);
Obj _3513959_37 = makeCons(__symbolTable[133], _3513958_37);
__nargs = 2;
__arg1 = _3513959_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj exp = __arg1;
Obj _3513949_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[153]);
__arg1 = _3513949_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj exp = __arg1;
pushCont(co, 42, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3513937_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513938_37 = makeCons(_3513937_37, Nil);
Obj _3513939_37 = makeCons(__symbolTable[139], _3513938_37);
pushCont(co, 43, clofun3, 2, exp, _3513939_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[156]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3513940_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513939_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, _3513940_37, _3513939_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[154]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3513941_37 = __arg1;
Obj _3513940_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513939_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513942_37 = makeCons(_3513940_37, _3513941_37);
Obj _3513943_37 = makeCons(__symbolTable[140], _3513942_37);
Obj _3513944_37 = makeCons(_3513943_37, Nil);
Obj _3513945_37 = makeCons(_3513939_37, _3513944_37);
Obj _3513946_37 = makeCons(__symbolTable[144], _3513945_37);
__nargs = 2;
__arg1 = _3513946_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
Obj _3513919_37 = PRIM_ISCONS(exp);
if (True == _3513919_37) {
Obj _3513920_37 = PRIM_CAR(exp);
Obj _3513921_37 = PRIM_EQ(_3513920_37, globalRef(__symbolTable[145]));
if (True == _3513921_37) {
Obj _3513922_37 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = _3513922_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513923_37 = PRIM_CAR(exp);
Obj _3513924_37 = PRIM_EQ(_3513923_37, __symbolTable[140]);
if (True == _3513924_37) {
pushCont(co, 48, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513931_37 = PRIM_CAR(exp);
Obj _3513932_37 = PRIM_EQ(_3513931_37, __symbolTable[139]);
if (True == _3513932_37) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 46, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[142]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
Obj _3513934_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(47, clofun3, 1, 1, exp);
__arg1 = _3513934_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp1 = __arg1;
Obj _3513933_37 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == _3513933_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = globalRef(__symbolTable[141]);
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[141]);
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _3513925_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, _3513925_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[156]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3513926_37 = __arg1;
Obj _3513925_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, _3513925_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[141]);
__arg1 = _3513926_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun4(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3513927_37 = __arg1;
Obj _3513925_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513928_37 = makeCons(_3513927_37, Nil);
Obj _3513929_37 = makeCons(_3513925_37, _3513928_37);
Obj _3513930_37 = makeCons(__symbolTable[140], _3513929_37);
__nargs = 2;
__arg1 = _3513930_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[143]);
__arg1 = exp;
__arg2 = globalRef(__symbolTable[146]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _3513909_37 = PRIM_EQ(Nil, macros);
if (True == _3513909_37) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513916_37 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 2, macros, exp);
__arg1 = _3513916_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj item = __arg1;
Obj _3513837_37 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj _3513912_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3513912_37) {
Obj _3513913_37 = PRIM_CAR(closureRef(co, 1));
Obj _3513914_37 = PRIM_CAR(item);
Obj _3513915_37 = PRIM_EQ(_3513913_37, _3513914_37);
if (True == _3513915_37) {
__nargs = 2;
__arg0 = _3513837_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513837_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _3513837_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _3513838_37 = __arg1;
if (True == _3513838_37) {
Obj _3513910_37 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg0 = _3513910_37;
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513911_37 = PRIM_CDR(closureRef(co, 2));
__nargs = 3;
__arg0 = globalRef(__symbolTable[143]);
__arg1 = closureRef(co, 1);
__arg2 = _3513911_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _3513905_37 = makeCons(n, v);
Obj _3513906_37 = makeCons(_3513905_37, globalRef(__symbolTable[146]));
Obj _3513907_37 = primSet(co, __symbolTable[146], _3513906_37);
__nargs = 2;
__arg1 = _3513907_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj f = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(__symbolTable[148]);
__arg1 = Nil;
__arg2 = f;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _3513895_37 = PRIM_ISCONS(l);
if (True == _3513895_37) {
Obj _3513896_37 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _3513896_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _3513897_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513898_37 = makeCons(_3513897_37, res);
Obj _3513899_37 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[148]);
__arg1 = _3513898_37;
__arg2 = f;
__arg3 = _3513899_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _3513888_37 = PRIM_ISCONS(l);
if (True == _3513888_37) {
Obj _3513889_37 = PRIM_CAR(l);
Obj _3513890_37 = makeCons(_3513889_37, res);
Obj _3513891_37 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[150]);
__arg1 = _3513890_37;
__arg2 = _3513891_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _3513886_37 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = _3513886_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj exp = __arg1;
Obj _3513878_37 = PRIM_ISCONS(exp);
if (True == _3513878_37) {
Obj _3513879_37 = PRIM_CAR(exp);
Obj _3513880_37 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, _3513879_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[153]);
__arg1 = _3513880_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _3513881_37 = __arg1;
Obj _3513879_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513882_37 = makeCons(_3513881_37, Nil);
Obj _3513883_37 = makeCons(_3513879_37, _3513882_37);
Obj _3513884_37 = makeCons(__symbolTable[152], _3513883_37);
__nargs = 2;
__arg1 = _3513884_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x = __arg1;
Obj _3513874_37 = PRIM_CDR(x);
Obj _3513875_37 = PRIM_CDR(_3513874_37);
Obj _3513876_37 = PRIM_CDR(_3513875_37);
__nargs = 2;
__arg1 = _3513876_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj x = __arg1;
Obj _3513869_37 = PRIM_CDR(x);
Obj _3513870_37 = PRIM_CDR(_3513869_37);
Obj _3513871_37 = PRIM_CDR(_3513870_37);
Obj _3513872_37 = PRIM_CAR(_3513871_37);
__nargs = 2;
__arg1 = _3513872_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x = __arg1;
Obj _3513865_37 = PRIM_CDR(x);
Obj _3513866_37 = PRIM_CDR(_3513865_37);
Obj _3513867_37 = PRIM_CAR(_3513866_37);
__nargs = 2;
__arg1 = _3513867_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj _3513862_37 = PRIM_CDR(x);
Obj _3513863_37 = PRIM_CDR(_3513862_37);
__nargs = 2;
__arg1 = _3513863_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj _3513859_37 = PRIM_CAR(x);
Obj _3513860_37 = PRIM_CDR(_3513859_37);
__nargs = 2;
__arg1 = _3513860_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj _3513856_37 = PRIM_CAR(x);
Obj _3513857_37 = PRIM_CAR(_3513856_37);
__nargs = 2;
__arg1 = _3513857_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj _3513853_37 = PRIM_CDR(x);
Obj _3513854_37 = PRIM_CAR(_3513853_37);
__nargs = 2;
__arg1 = _3513854_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj _3513851_37 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = _3513851_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

