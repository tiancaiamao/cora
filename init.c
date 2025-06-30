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
Obj x140421013469671 = primSet(co, __symbolTable[161], makeNative(20, clofun4, 1, 0));
Obj x140421013470087 = primSet(co, __symbolTable[160], makeNative(19, clofun4, 1, 0));
Obj x140421013470567 = primSet(co, __symbolTable[159], makeNative(18, clofun4, 1, 0));
Obj x140421013470983 = primSet(co, __symbolTable[158], makeNative(17, clofun4, 1, 0));
Obj x140421013389479 = primSet(co, __symbolTable[157], makeNative(16, clofun4, 1, 0));
Obj x140421013389991 = primSet(co, __symbolTable[156], makeNative(15, clofun4, 1, 0));
Obj x140421013390599 = primSet(co, __symbolTable[155], makeNative(14, clofun4, 1, 0));
Obj x140421013391111 = primSet(co, __symbolTable[154], makeNative(13, clofun4, 1, 0));
Obj x140421013392071 = primSet(co, __symbolTable[153], makeNative(11, clofun4, 1, 0));
Obj x140421013392391 = primSet(co, __symbolTable[151], makeNative(10, clofun4, 1, 0));
Obj x140421013393127 = primSet(co, __symbolTable[150], makeNative(9, clofun4, 2, 0));
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
Obj x140421013393351 = __arg1;
Obj x140421013393383 = primSet(co, __symbolTable[149], x140421013393351);
Obj x140421013271399 = primSet(co, __symbolTable[148], makeNative(7, clofun4, 3, 0));
Obj x140421013271687 = primSet(co, __symbolTable[147], makeNative(6, clofun4, 2, 0));
Obj x140421013271847 = primSet(co, __symbolTable[146], Nil);
Obj x140421013272071 = primGenSym();
Obj x140421013272103 = primSet(co, __symbolTable[145], x140421013272071);
Obj x140421013272615 = primSet(co, __symbolTable[144], makeNative(5, clofun4, 2, 0));
Obj x140421015385639 = primSet(co, __symbolTable[143], makeNative(2, clofun4, 2, 0));
Obj x140421015385927 = primSet(co, __symbolTable[142], makeNative(1, clofun4, 1, 0));
Obj x140421015343239 = primSet(co, __symbolTable[141], makeNative(45, clofun3, 1, 0));
Obj x140421015343399 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj x140421015344583 = primSet(co, __symbolTable[137], makeNative(41, clofun3, 1, 0));
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
Obj x140421015344743 = __arg1;
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
Obj x140421015345127 = __arg1;
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
Obj x140421015346215 = __arg1;
Obj x140421015347015 = primSet(co, __symbolTable[132], makeNative(35, clofun3, 2, 0));
Obj x140421015032423 = primSet(co, __symbolTable[131], makeNative(34, clofun3, 1, 0));
Obj x140421015033959 = primSet(co, __symbolTable[130], makeNative(29, clofun3, 1, 0));
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
Obj x140421015034407 = __arg1;
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
Obj x140421013680455 = __arg1;
Obj x140421013682023 = primSet(co, __symbolTable[125], makeNative(22, clofun3, 1, 0));
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
Obj x140421013682407 = __arg1;
Obj x140421013683975 = primSet(co, __symbolTable[123], makeNative(19, clofun3, 1, 0));
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
Obj x140421013622919 = __arg1;
Obj x140421013623463 = primSet(co, __symbolTable[121], makeNative(17, clofun3, 1, 0));
Obj x140421013624647 = primSet(co, __symbolTable[120], makeNative(14, clofun3, 1, 0));
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
Obj x140421013625031 = __arg1;
Obj x140421013562983 = primSet(co, __symbolTable[118], makeNative(4, clofun3, 4, 0));
Obj x140421013468775 = primSet(co, __symbolTable[117], makeNative(48, clofun2, 4, 0));
Obj x140421013471079 = primSet(co, __symbolTable[111], makeNative(43, clofun2, 2, 0));
Obj x140421013270567 = primSet(co, __symbolTable[109], makeNative(34, clofun2, 2, 0));
Obj x140421013273703 = primSet(co, __symbolTable[108], makeNative(28, clofun2, 1, 0));
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
Obj x140421013273991 = __arg1;
Obj x140421012992999 = primSet(co, __symbolTable[106], makeNative(22, clofun2, 3, 0));
Obj x140421012993287 = primSet(co, __symbolTable[104], makeNative(21, clofun2, 1, 0));
Obj x140421015384839 = primSet(co, __symbolTable[103], makeNative(18, clofun2, 2, 0));
Obj x140421015385863 = primSet(co, __symbolTable[102], makeNative(17, clofun2, 2, 0));
Obj x140421015386183 = primSet(co, __symbolTable[101], makeNative(16, clofun2, 1, 0));
Obj x140421015387847 = primSet(co, __symbolTable[100], makeNative(14, clofun2, 3, 0));
Obj x140421015343111 = primSet(co, __symbolTable[99], makeNative(13, clofun2, 2, 0));
Obj x140421015344071 = primSet(co, __symbolTable[98], makeNative(11, clofun2, 2, 0));
Obj x140421015346471 = primSet(co, __symbolTable[97], makeNative(4, clofun2, 1, 0));
Obj x140421015032519 = primSet(co, __symbolTable[96], makeNative(2, clofun2, 1, 0));
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
Obj x140421015034887 = __arg1;
Obj x140421015035303 = primSet(co, __symbolTable[94], makeNative(45, clofun1, 1, 0));
Obj x140421015035623 = primSet(co, __symbolTable[92], makeNative(44, clofun1, 1, 0));
Obj x140421013680647 = primSet(co, __symbolTable[138], makeNative(41, clofun1, 1, 0));
Obj x140421013624455 = primSet(co, __symbolTable[91], makeNative(37, clofun1, 1, 0));
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
Obj x140421013625095 = __arg1;
Obj x140421013563463 = primSet(co, __symbolTable[88], makeNative(33, clofun1, 1, 0));
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
Obj x140421013563975 = __arg1;
Obj x140421013467751 = primSet(co, __symbolTable[85], makeNative(26, clofun1, 2, 0));
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
Obj x140421013468551 = __arg1;
Obj x140421013271623 = primSet(co, __symbolTable[83], makeNative(19, clofun1, 4, 0));
Obj x140421013272007 = primSet(co, __symbolTable[80], makeNative(18, clofun1, 2, 0));
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
Obj x140421013108935 = __arg1;
Obj x140421013110023 = primSet(co, __symbolTable[76], makeNative(5, clofun1, 2, 0));
Obj x140421013091943 = primSet(co, __symbolTable[71], makeNative(47, clofun0, 3, 0));
Obj x140421013092519 = makeCons(makeCString("primSet"), Nil);
Obj x140421013092551 = makeCons(MAKE_NUMBER(2), x140421013092519);
Obj x140421013092583 = makeCons(__symbolTable[68], x140421013092551);
Obj x140421013092999 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140421013093031 = makeCons(MAKE_NUMBER(1), x140421013092999);
Obj x140421013093063 = makeCons(__symbolTable[115], x140421013093031);
Obj x140421013093479 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140421013093511 = makeCons(MAKE_NUMBER(1), x140421013093479);
Obj x140421013093543 = makeCons(__symbolTable[114], x140421013093511);
Obj x140421013093959 = makeCons(makeCString("makeCons"), Nil);
Obj x140421013093991 = makeCons(MAKE_NUMBER(2), x140421013093959);
Obj x140421013094023 = makeCons(__symbolTable[152], x140421013093991);
Obj x140421012992103 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140421012992135 = makeCons(MAKE_NUMBER(1), x140421012992103);
Obj x140421012992167 = makeCons(__symbolTable[116], x140421012992135);
Obj x140421012992615 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140421012992647 = makeCons(MAKE_NUMBER(2), x140421012992615);
Obj x140421012992679 = makeCons(__symbolTable[67], x140421012992647);
Obj x140421012993703 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140421012993735 = makeCons(MAKE_NUMBER(2), x140421012993703);
Obj x140421012993767 = makeCons(__symbolTable[66], x140421012993735);
Obj x140421012994055 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140421012994087 = makeCons(MAKE_NUMBER(2), x140421012994055);
Obj x140421012994119 = makeCons(__symbolTable[65], x140421012994087);
Obj x140421012994407 = makeCons(makeCString("primDiv"), Nil);
Obj x140421012994439 = makeCons(MAKE_NUMBER(2), x140421012994407);
Obj x140421012994471 = makeCons(__symbolTable[64], x140421012994439);
Obj x140421012994759 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140421012994791 = makeCons(MAKE_NUMBER(2), x140421012994759);
Obj x140421012994823 = makeCons(__symbolTable[113], x140421012994791);
Obj x140421012995111 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140421012995143 = makeCons(MAKE_NUMBER(2), x140421012995111);
Obj x140421012995207 = makeCons(__symbolTable[63], x140421012995143);
Obj x140421012995655 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140421012995687 = makeCons(MAKE_NUMBER(2), x140421012995655);
Obj x140421012995719 = makeCons(__symbolTable[62], x140421012995687);
Obj x140421012996007 = makeCons(makeCString("primGenSym"), Nil);
Obj x140421012996039 = makeCons(MAKE_NUMBER(0), x140421012996007);
Obj x140421012996071 = makeCons(__symbolTable[61], x140421012996039);
Obj x140421012513031 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140421012513063 = makeCons(MAKE_NUMBER(1), x140421012513031);
Obj x140421012513095 = makeCons(__symbolTable[60], x140421012513063);
Obj x140421012513383 = makeCons(makeCString("primNot"), Nil);
Obj x140421012513415 = makeCons(MAKE_NUMBER(1), x140421012513383);
Obj x140421012513447 = makeCons(__symbolTable[59], x140421012513415);
Obj x140421012513735 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140421012513767 = makeCons(MAKE_NUMBER(1), x140421012513735);
Obj x140421012513799 = makeCons(__symbolTable[58], x140421012513767);
Obj x140421012514087 = makeCons(makeCString("primIsString"), Nil);
Obj x140421012514119 = makeCons(MAKE_NUMBER(1), x140421012514087);
Obj x140421012514151 = makeCons(__symbolTable[57], x140421012514119);
Obj x140421012514183 = makeCons(x140421012514151, Nil);
Obj x140421012514215 = makeCons(x140421012513799, x140421012514183);
Obj x140421012514247 = makeCons(x140421012513447, x140421012514215);
Obj x140421012514279 = makeCons(x140421012513095, x140421012514247);
Obj x140421012514311 = makeCons(x140421012996071, x140421012514279);
Obj x140421012514343 = makeCons(x140421012995719, x140421012514311);
Obj x140421012514375 = makeCons(x140421012995207, x140421012514343);
Obj x140421012514407 = makeCons(x140421012994823, x140421012514375);
Obj x140421012514439 = makeCons(x140421012994471, x140421012514407);
Obj x140421012514471 = makeCons(x140421012994119, x140421012514439);
Obj x140421012514503 = makeCons(x140421012993767, x140421012514471);
Obj x140421012514535 = makeCons(x140421012992679, x140421012514503);
Obj x140421012514567 = makeCons(x140421012992167, x140421012514535);
Obj x140421012514599 = makeCons(x140421013094023, x140421012514567);
Obj x140421012514631 = makeCons(x140421013093543, x140421012514599);
Obj x140421012514663 = makeCons(x140421013093063, x140421012514631);
Obj x140421012514695 = makeCons(x140421013092583, x140421012514663);
Obj x140421012514727 = primSet(co, __symbolTable[69], x140421012514695);
Obj x140421012390535 = primSet(co, __symbolTable[56], makeNative(45, clofun0, 2, 0));
Obj x140421012391047 = primSet(co, __symbolTable[55], makeNative(42, clofun0, 1, 0));
Obj x140421012993575 = primSet(co, __symbolTable[93], makeNative(16, clofun0, 4, 0));
Obj x140421012513991 = makeCons(__symbolTable[98], Nil);
Obj x140421012514023 = makeCons(__symbolTable[99], x140421012513991);
Obj x140421012514055 = makeCons(__symbolTable[101], x140421012514023);
Obj x140421012514759 = makeCons(__symbolTable[132], x140421012514055);
Obj x140421012514791 = makeCons(__symbolTable[138], x140421012514759);
Obj x140421012514823 = makeCons(__symbolTable[147], x140421012514791);
Obj x140421012514855 = makeCons(__symbolTable[149], x140421012514823);
Obj x140421012514887 = makeCons(__symbolTable[39], x140421012514855);
Obj x140421012514919 = makeCons(__symbolTable[40], x140421012514887);
Obj x140421012514951 = makeCons(__symbolTable[41], x140421012514919);
Obj x140421012514983 = makeCons(__symbolTable[81], x140421012514951);
Obj x140421012515015 = makeCons(__symbolTable[42], x140421012514983);
Obj x140421012515047 = makeCons(__symbolTable[43], x140421012515015);
Obj x140421012515111 = makeCons(__symbolTable[70], x140421012515047);
Obj x140421012515143 = makeCons(__symbolTable[44], x140421012515111);
Obj x140421012515175 = makeCons(__symbolTable[45], x140421012515143);
Obj x140421012515207 = makeCons(__symbolTable[46], x140421012515175);
Obj x140421012515239 = makeCons(__symbolTable[47], x140421012515207);
Obj x140421012515271 = makeCons(__symbolTable[48], x140421012515239);
Obj x140421012515303 = makeCons(__symbolTable[49], x140421012515271);
Obj x140421012515335 = makeCons(__symbolTable[50], x140421012515303);
Obj x140421012515367 = makeCons(__symbolTable[51], x140421012515335);
Obj x140421012515431 = makeCons(__symbolTable[52], x140421012515367);
Obj x140421012515463 = makeCons(__symbolTable[72], x140421012515431);
Obj x140421012515495 = makeCons(__symbolTable[74], x140421012515463);
Obj x140421012515527 = makeCons(__symbolTable[73], x140421012515495);
Obj x140421012515559 = makeCons(__symbolTable[161], x140421012515527);
Obj x140421012515623 = makeCons(__symbolTable[54], x140421012515559);
Obj x140421012515655 = makeCons(__symbolTable[121], x140421012515623);
Obj x140421012515687 = makeCons(__symbolTable[131], x140421012515655);
Obj x140421012515719 = makeCons(__symbolTable[151], x140421012515687);
Obj x140421012515751 = makeCons(__symbolTable[154], x140421012515719);
Obj x140421012515815 = makeCons(__symbolTable[155], x140421012515751);
Obj x140421012515847 = makeCons(__symbolTable[156], x140421012515815);
Obj x140421012515879 = makeCons(__symbolTable[157], x140421012515847);
Obj x140421012515911 = makeCons(__symbolTable[158], x140421012515879);
Obj x140421012515943 = makeCons(__symbolTable[159], x140421012515911);
Obj x140421012515975 = makeCons(__symbolTable[160], x140421012515943);
Obj x140421012516007 = primSet(co, __symbolTable[53], x140421012515975);
Obj x140421012516199 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj x140421012516423 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj x140421012516647 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj x140421012516807 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj x140421012390087 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj x140421012390279 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj x140421012390471 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj x140421012390663 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj x140421012393767 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj x140421012393927 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj x140421012119655 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj x140421012119815 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj x140421012119975 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj x140421012120135 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj x140421012120295 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj x140421012120455 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj x140421012120615 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj x140421012120775 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj x140421012120935 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj x140421012121095 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj x140421012121255 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj x140421012121415 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj x140421012121575 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj x140421012121735 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj x140421012121895 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj x140421012122055 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj x140421012122215 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj x140421012122375 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj x140421012122535 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj x140421012122695 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj x140421012122855 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj x140421012123015 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj x140421012123175 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj x140421012123335 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj x140421012123495 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj x140421012094983 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj x140421012095143 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj x140421012095303 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj x140421012095399 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
__nargs = 2;
__arg1 = x140421012095399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x140421015032135 = __arg1;
Obj x140421015032167 = __arg2;
Obj x140421015032199 = __arg3;
Obj x140421015032231 = co->args[4];
Obj x140421015384199 = makeNative(20, clofun0, 1, 4, x140421015032135, x140421015032167, x140421015032199, x140421015032231);
pushCont(co, 17, clofun0, 2, x140421015032231, x140421015384199);
__nargs = 2;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = x140421015032231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140421012993031 = __arg1;
Obj x140421015032231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015384199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421012993031) {
__nargs = 2;
__arg0 = x140421015384199;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421012993191 = primIsString(x140421015032231);
if (True == x140421012993191) {
__nargs = 2;
__arg0 = x140421015384199;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 2, x140421015032231, x140421015384199);
__nargs = 2;
__arg0 = globalRef(__symbolTable[121]);
__arg1 = x140421015032231;
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
Obj x140421012993383 = __arg1;
Obj x140421015032231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015384199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421012993383) {
__nargs = 2;
__arg0 = x140421015384199;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun0, 1, x140421015384199);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = x140421015032231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj x140421012993543 = __arg1;
Obj x140421015384199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421012993543) {
__nargs = 2;
__arg0 = x140421015384199;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015384199;
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
Obj x140421015384231 = __arg1;
if (True == x140421015384231) {
__nargs = 2;
__arg1 = closureRef(co, 3);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015033063 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421013092071 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140421013092071) {
Obj x140421013092423 = PRIM_CAR(closureRef(co, 3));
Obj x140421013092455 = PRIM_EQ(__symbolTable[139], x140421013092423);
if (True == x140421013092455) {
Obj x140421013092935 = PRIM_CDR(closureRef(co, 3));
Obj x140421013092967 = PRIM_ISCONS(x140421013092935);
if (True == x140421013092967) {
Obj x140421013093447 = PRIM_CDR(closureRef(co, 3));
Obj x140421013093575 = PRIM_CAR(x140421013093447);
Obj x = x140421013093575;
Obj x140421013094247 = PRIM_CDR(closureRef(co, 3));
Obj x140421013094279 = PRIM_CDR(x140421013094247);
Obj x140421013094311 = PRIM_EQ(Nil, x140421013094279);
if (True == x140421013094311) {
Obj x140421012992231 = makeCons(x, Nil);
Obj x140421012992263 = makeCons(__symbolTable[139], x140421012992231);
__nargs = 2;
__arg1 = x140421012992263;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421015033063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033063;
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
Obj x140421012391783 = primIsSymbol(closureRef(co, 0));
if (True == x140421012391783) {
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
Obj x140421015034471 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140421013273319 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013273319) {
Obj x140421013273735 = PRIM_CAR(closureRef(co, 0));
Obj x140421013273767 = PRIM_EQ(__symbolTable[140], x140421013273735);
if (True == x140421013273767) {
Obj x140421013274151 = PRIM_CDR(closureRef(co, 0));
Obj x140421013274183 = PRIM_ISCONS(x140421013274151);
if (True == x140421013274183) {
Obj x140421013107367 = PRIM_CDR(closureRef(co, 0));
Obj x140421013107591 = PRIM_CAR(x140421013107367);
Obj args = x140421013107591;
Obj x140421013109287 = PRIM_CDR(closureRef(co, 0));
Obj x140421013109319 = PRIM_CDR(x140421013109287);
Obj x140421013109415 = PRIM_ISCONS(x140421013109319);
if (True == x140421013109415) {
Obj x140421013109799 = PRIM_CDR(closureRef(co, 0));
Obj x140421013109831 = PRIM_CDR(x140421013109799);
Obj x140421013110055 = PRIM_CAR(x140421013109831);
Obj body = x140421013110055;
Obj x140421013110599 = PRIM_CDR(closureRef(co, 0));
Obj x140421013110631 = PRIM_CDR(x140421013110599);
Obj x140421013110663 = PRIM_CDR(x140421013110631);
Obj x140421013110695 = PRIM_EQ(Nil, x140421013110663);
if (True == x140421013110695) {
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
__arg0 = x140421015034471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034471;
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
Obj x140421013090823 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = x140421013090823;
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
Obj x140421013090983 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013091015 = makeCons(x140421013090983, Nil);
Obj x140421013091143 = makeCons(args, x140421013091015);
Obj x140421013091175 = makeCons(__symbolTable[140], x140421013091143);
__nargs = 2;
__arg1 = x140421013091175;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x140421015035527 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140421013564583 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013564583) {
Obj x140421013565063 = PRIM_CAR(closureRef(co, 0));
Obj x140421013565095 = PRIM_EQ(__symbolTable[90], x140421013565063);
if (True == x140421013565095) {
Obj x140421013467367 = PRIM_CDR(closureRef(co, 0));
Obj x140421013467463 = PRIM_ISCONS(x140421013467367);
if (True == x140421013467463) {
Obj x140421013468231 = PRIM_CDR(closureRef(co, 0));
Obj x140421013468263 = PRIM_CAR(x140421013468231);
Obj x140421013468295 = PRIM_ISCONS(x140421013468263);
if (True == x140421013468295) {
Obj x140421013468903 = PRIM_CDR(closureRef(co, 0));
Obj x140421013468935 = PRIM_CAR(x140421013468903);
Obj x140421013468967 = PRIM_CAR(x140421013468935);
Obj x140421013468999 = PRIM_EQ(__symbolTable[81], x140421013468967);
if (True == x140421013468999) {
Obj x140421013469479 = PRIM_CDR(closureRef(co, 0));
Obj x140421013469511 = PRIM_CAR(x140421013469479);
Obj x140421013469543 = PRIM_CDR(x140421013469511);
Obj x140421013469575 = PRIM_ISCONS(x140421013469543);
if (True == x140421013469575) {
Obj x140421013470471 = PRIM_CDR(closureRef(co, 0));
Obj x140421013470503 = PRIM_CAR(x140421013470471);
Obj x140421013470599 = PRIM_CDR(x140421013470503);
Obj x140421013470631 = PRIM_CAR(x140421013470599);
Obj pkg = x140421013470631;
Obj x140421013389703 = PRIM_CDR(closureRef(co, 0));
Obj x140421013389735 = PRIM_CAR(x140421013389703);
Obj x140421013389831 = PRIM_CDR(x140421013389735);
Obj x140421013389863 = PRIM_CDR(x140421013389831);
Obj x140421013390023 = PRIM_EQ(Nil, x140421013389863);
if (True == x140421013390023) {
Obj x140421013390407 = PRIM_CDR(closureRef(co, 0));
Obj x140421013390439 = PRIM_CDR(x140421013390407);
Obj x140421013390663 = PRIM_ISCONS(x140421013390439);
if (True == x140421013390663) {
Obj x140421013391271 = PRIM_CDR(closureRef(co, 0));
Obj x140421013391303 = PRIM_CDR(x140421013391271);
Obj x140421013391431 = PRIM_CAR(x140421013391303);
Obj y = x140421013391431;
Obj x140421013392263 = PRIM_CDR(closureRef(co, 0));
Obj x140421013392295 = PRIM_CDR(x140421013392263);
Obj x140421013392487 = PRIM_CDR(x140421013392295);
Obj x140421013392519 = PRIM_EQ(Nil, x140421013392487);
if (True == x140421013392519) {
Obj x140421013392935 = primIsString(pkg);
if (True == x140421013392935) {
Obj x140421013271111 = makeCons(pkg, Nil);
Obj x140421013271239 = makeCons(__symbolTable[81], x140421013271111);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = x140421013271239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015035527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140421013271271 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013271783 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, x140421013271271);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x140421013271783;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140421013271815 = __arg1;
Obj x140421013271271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013271879 = makeCons(x140421013271815, Nil);
Obj x140421013271911 = makeCons(x140421013271271, x140421013271879);
Obj x140421013271943 = makeCons(__symbolTable[90], x140421013271911);
__nargs = 2;
__arg1 = x140421013271943;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140421013682887 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140421013561607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013561607) {
Obj x140421013561927 = PRIM_CAR(closureRef(co, 0));
Obj op = x140421013561927;
Obj x140421013562311 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421013562311;
Obj x140421015384263 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, x140421013682887);
Obj x140421013563911 = PRIM_EQ(op, __symbolTable[126]);
if (True == x140421013563911) {
__nargs = 2;
__arg0 = x140421015384263;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013564167 = PRIM_EQ(op, __symbolTable[90]);
if (True == x140421013564167) {
__nargs = 2;
__arg0 = x140421015384263;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015384263;
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
__arg0 = x140421013682887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140421015384295 = __arg1;
if (True == x140421015384295) {
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
Obj x140421013563335 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = x140421013563335;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140421013563399 = __arg1;
Obj x140421013563431 = makeCons(closureRef(co, 0), x140421013563399);
__nargs = 2;
__arg1 = x140421013563431;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x140421013624007 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj x140421013681191 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013681191) {
Obj x140421013681575 = PRIM_CAR(closureRef(co, 0));
Obj x140421013681607 = PRIM_EQ(__symbolTable[129], x140421013681575);
if (True == x140421013681607) {
Obj x140421013682151 = PRIM_CDR(closureRef(co, 0));
Obj x140421013682183 = PRIM_ISCONS(x140421013682151);
if (True == x140421013682183) {
Obj x140421013682631 = PRIM_CDR(closureRef(co, 0));
Obj x140421013682663 = PRIM_CAR(x140421013682631);
Obj a = x140421013682663;
Obj x140421013683175 = PRIM_CDR(closureRef(co, 0));
Obj x140421013683207 = PRIM_CDR(x140421013683175);
Obj x140421013683239 = PRIM_ISCONS(x140421013683207);
if (True == x140421013683239) {
Obj x140421013683751 = PRIM_CDR(closureRef(co, 0));
Obj x140421013684007 = PRIM_CDR(x140421013683751);
Obj x140421013684039 = PRIM_CAR(x140421013684007);
Obj b = x140421013684039;
Obj x140421013623143 = PRIM_CDR(closureRef(co, 0));
Obj x140421013623175 = PRIM_CDR(x140421013623143);
Obj x140421013623335 = PRIM_CDR(x140421013623175);
Obj x140421013623367 = PRIM_ISCONS(x140421013623335);
if (True == x140421013623367) {
Obj x140421013623847 = PRIM_CDR(closureRef(co, 0));
Obj x140421013623975 = PRIM_CDR(x140421013623847);
Obj x140421013624071 = PRIM_CDR(x140421013623975);
Obj x140421013624103 = PRIM_CAR(x140421013624071);
Obj c = x140421013624103;
Obj x140421013624871 = PRIM_CDR(closureRef(co, 0));
Obj x140421013624903 = PRIM_CDR(x140421013624871);
Obj x140421013624935 = PRIM_CDR(x140421013624903);
Obj x140421013624967 = PRIM_CDR(x140421013624935);
Obj x140421013625127 = PRIM_EQ(Nil, x140421013624967);
if (True == x140421013625127) {
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
__arg0 = x140421013624007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140421013625607 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013625959 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, x140421013625607, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = x140421013625959;
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
Obj x140421013626087 = __arg1;
Obj x140421013625607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013626151 = makeCons(x140421013626087, Nil);
Obj x140421013626183 = makeCons(x140421013625607, x140421013626151);
Obj x140421013626215 = makeCons(a, x140421013626183);
Obj x140421013626247 = makeCons(__symbolTable[129], x140421013626215);
__nargs = 2;
__arg1 = x140421013626247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140421013626279 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj x140421015344935 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140421015344935) {
Obj x140421015345351 = PRIM_CAR(closureRef(co, 2));
Obj x140421015345383 = PRIM_EQ(__symbolTable[78], x140421015345351);
if (True == x140421015345383) {
Obj x140421015345671 = PRIM_CDR(closureRef(co, 2));
Obj x140421015345703 = PRIM_ISCONS(x140421015345671);
if (True == x140421015345703) {
Obj x140421015346439 = PRIM_CDR(closureRef(co, 2));
Obj x140421015346503 = PRIM_CAR(x140421015346439);
Obj path = x140421015346503;
Obj x140421015346951 = PRIM_CDR(closureRef(co, 2));
Obj x140421015347047 = PRIM_CDR(x140421015346951);
Obj x140421015347079 = PRIM_ISCONS(x140421015347047);
if (True == x140421015347079) {
Obj x140421015032679 = PRIM_CDR(closureRef(co, 2));
Obj x140421015032711 = PRIM_CDR(x140421015032679);
Obj x140421015032743 = PRIM_CAR(x140421015032711);
Obj import = x140421015032743;
Obj x140421015033511 = PRIM_CDR(closureRef(co, 2));
Obj x140421015033575 = PRIM_CDR(x140421015033511);
Obj x140421015033639 = PRIM_CDR(x140421015033575);
Obj x140421015033671 = PRIM_ISCONS(x140421015033639);
if (True == x140421015033671) {
Obj x140421015034439 = PRIM_CDR(closureRef(co, 2));
Obj x140421015034503 = PRIM_CDR(x140421015034439);
Obj x140421015034535 = PRIM_CDR(x140421015034503);
Obj x140421015034919 = PRIM_CAR(x140421015034535);
Obj body = x140421015034919;
Obj x140421015035655 = PRIM_CDR(closureRef(co, 2));
Obj x140421015035687 = PRIM_CDR(x140421015035655);
Obj x140421015035719 = PRIM_CDR(x140421015035687);
Obj x140421015035783 = PRIM_CDR(x140421015035719);
Obj x140421015035815 = PRIM_EQ(Nil, x140421015035783);
if (True == x140421015035815) {
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
__arg0 = x140421013626279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140421013563111 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj x140421012393671 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012393671) {
Obj x140421015384551 = PRIM_CAR(closureRef(co, 0));
Obj x140421015384583 = PRIM_EQ(__symbolTable[133], x140421015384551);
if (True == x140421015384583) {
Obj x140421015385031 = PRIM_CDR(closureRef(co, 0));
Obj x140421015385063 = PRIM_ISCONS(x140421015385031);
if (True == x140421015385063) {
Obj x140421015385703 = PRIM_CDR(closureRef(co, 0));
Obj x140421015385767 = PRIM_CAR(x140421015385703);
Obj var = x140421015385767;
Obj x140421015386215 = PRIM_CDR(closureRef(co, 0));
Obj x140421015386247 = PRIM_CDR(x140421015386215);
Obj x140421015386311 = PRIM_ISCONS(x140421015386247);
if (True == x140421015386311) {
Obj x140421015386759 = PRIM_CDR(closureRef(co, 0));
Obj x140421015386791 = PRIM_CDR(x140421015386759);
Obj x140421015386823 = PRIM_CAR(x140421015386791);
Obj val = x140421015386823;
Obj x140421015387623 = PRIM_CDR(closureRef(co, 0));
Obj x140421015387655 = PRIM_CDR(x140421015387623);
Obj x140421015387783 = PRIM_CDR(x140421015387655);
Obj x140421015387815 = PRIM_EQ(Nil, x140421015387783);
if (True == x140421015387815) {
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
__arg0 = x140421013563111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140421015388071 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = x140421015388071;
Obj x140421015343431 = makeCons(var1, Nil);
Obj x140421015343463 = makeCons(__symbolTable[139], x140421015343431);
pushCont(co, 37, clofun0, 1, x140421015343463);
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
Obj x140421015343783 = __arg1;
Obj x140421015343463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015343815 = makeCons(x140421015343783, Nil);
Obj x140421015343847 = makeCons(x140421015343463, x140421015343815);
Obj x140421015344103 = makeCons(__symbolTable[68], x140421015343847);
__nargs = 2;
__arg1 = x140421015344103;
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
Obj x140421012393447 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = x140421012393447;
__arg2 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140421012392007 = __arg1;
if (True == x140421012392007) {
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
Obj x140421012392231 = __arg1;
if (True == x140421012392231) {
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
Obj x140421012390951 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = x140421012390951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140421012390983 = __arg1;
Obj x140421012391015 = primNot(x140421012390983);
__nargs = 2;
__arg1 = x140421012391015;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140421015035847 = __arg1;
Obj x140421015035879 = __arg2;
Obj x140421012515079 = PRIM_EQ(Nil, x140421015035879);
if (True == x140421012515079) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013681927 = makeNative(46, clofun0, 0, 2, x140421015035879, x140421015035847);
Obj x140421012516103 = PRIM_ISCONS(x140421015035879);
if (True == x140421012516103) {
Obj x140421012516327 = PRIM_CAR(x140421015035879);
Obj x140421012516359 = PRIM_ISCONS(x140421012516327);
if (True == x140421012516359) {
Obj x140421012516583 = PRIM_CAR(x140421015035879);
Obj x140421012516615 = PRIM_CAR(x140421012516583);
Obj x = x140421012516615;
Obj x140421012516839 = PRIM_CAR(x140421015035879);
Obj x140421012389895 = PRIM_CDR(x140421012516839);
Obj y = x140421012389895;
Obj x140421012390055 = PRIM_CDR(x140421015035879);
Obj x140421012390215 = PRIM_EQ(x140421015035847, x);
if (True == x140421012390215) {
Obj x140421012390311 = makeCons(x, y);
__nargs = 2;
__arg1 = x140421012390311;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013681927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681927;
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
Obj x140421012515399 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012515399) {
Obj x140421012515591 = PRIM_CAR(closureRef(co, 0));
Obj x140421012515783 = PRIM_CDR(closureRef(co, 0));
Obj y = x140421012515783;
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
Obj x140421015034599 = __arg1;
Obj x140421015034631 = __arg2;
Obj x140421015034663 = __arg3;
Obj x140421013110439 = PRIM_EQ(Nil, x140421015034663);
if (True == x140421013110439) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = x140421015034599;
__arg2 = x140421015034631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013110727 = PRIM_ISCONS(x140421015034663);
if (True == x140421013110727) {
Obj x140421013090471 = PRIM_CAR(x140421015034663);
Obj import = x140421013090471;
Obj x140421013090695 = PRIM_CDR(x140421015034663);
Obj more = x140421013090695;
pushCont(co, 48, clofun0, 4, import, x140421015034599, x140421015034631, more);
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
Obj x140421013091047 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015034599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015034631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, x140421015034599, x140421015034631, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = x140421013091047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140421013091079 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015034599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015034631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, x140421015034599, x140421015034631, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = x140421013091079;
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
Obj x140421013091111 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015034599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015034631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140421013091111;
pushCont(co, 1, clofun1, 4, import, x140421015034599, x140421015034631, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = x140421015034599;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140421013091303 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015034599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015034631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140421013091303) {
pushCont(co, 2, clofun1, 1, import);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421015034599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(__symbolTable[71]);
__arg1 = x140421015034599;
__arg2 = x140421015034631;
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
Obj x140421013091655 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = makeCString("#");
__arg2 = x140421013091655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140421013091687 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = import;
__arg2 = x140421013091687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140421013091719 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = x140421013091719;
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
Obj x140421013109351 = PRIM_EQ(ns, makeCString(""));
if (True == x140421013109351) {
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
Obj x140421013109543 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421013109543) {
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
Obj x140421013109863 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = makeCString("#");
__arg2 = x140421013109863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140421013109895 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = ns;
__arg2 = x140421013109895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140421013109991 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = x140421013109991;
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
Obj x140421013272711 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140421013272711;
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
Obj x140421013272999 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(__symbolTable[80]);
__arg1 = x140421013272999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140421013273031 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140421013273031;
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
Obj x140421013273415 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, x140421013273415);
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
Obj x140421013274119 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013273415= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013107911 = makeCons(export, Nil);
Obj x140421013107943 = makeCons(__symbolTable[86], x140421013107911);
Obj x140421013107975 = makeCons(x140421013107943, Nil);
Obj x140421013108199 = makeCons(__symbolTable[77], x140421013107975);
Obj x140421013108231 = makeCons(__symbolTable[133], x140421013108199);
Obj x140421013108391 = makeCons(x140421013108231, body);
pushCont(co, 16, clofun1, 1, x140421013273415);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = x140421013274119;
__arg2 = x140421013108391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140421013108615 = __arg1;
Obj x140421013273415= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013108647 = makeCons(__symbolTable[89], x140421013108615);
Obj x140421013108775 = makeCons(x140421013108647, Nil);
Obj x140421013108839 = makeCons(x140421013273415, x140421013108775);
Obj x140421013108871 = makeCons(closureRef(co, 0), x140421013108839);
Obj x140421013108903 = makeCons(__symbolTable[78], x140421013108871);
__nargs = 2;
__arg1 = x140421013108903;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj imp = __arg1;
Obj x140421013274055 = makeCons(imp, Nil);
Obj x140421013274087 = makeCons(__symbolTable[81], x140421013274055);
__nargs = 2;
__arg1 = x140421013274087;
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
Obj x140421015031975 = __arg1;
Obj x140421015032039 = __arg2;
Obj x140421015032071 = __arg3;
Obj x140421015032103 = co->args[4];
Obj x140421015032295 = makeNative(20, clofun1, 0, 4, x140421015032071, x140421015031975, x140421015032039, x140421015032103);
Obj x140421013390375 = PRIM_ISCONS(x140421015031975);
if (True == x140421013390375) {
Obj x140421013390791 = PRIM_CAR(x140421015031975);
Obj x140421013390855 = PRIM_ISCONS(x140421013390791);
if (True == x140421013390855) {
Obj x140421013391335 = PRIM_CAR(x140421015031975);
Obj x140421013391367 = PRIM_CAR(x140421013391335);
Obj x140421013391399 = PRIM_EQ(__symbolTable[81], x140421013391367);
if (True == x140421013391399) {
Obj x140421013391847 = PRIM_CAR(x140421015031975);
Obj x140421013391879 = PRIM_CDR(x140421013391847);
Obj x140421013392103 = PRIM_ISCONS(x140421013391879);
if (True == x140421013392103) {
Obj x140421013392679 = PRIM_CAR(x140421015031975);
Obj x140421013392711 = PRIM_CDR(x140421013392679);
Obj x140421013392775 = PRIM_CAR(x140421013392711);
Obj lib = x140421013392775;
Obj x140421013393287 = PRIM_CAR(x140421015031975);
Obj x140421013270599 = PRIM_CDR(x140421013393287);
Obj x140421013270631 = PRIM_CDR(x140421013270599);
Obj x140421013270663 = PRIM_EQ(Nil, x140421013270631);
if (True == x140421013270663) {
Obj x140421013270823 = PRIM_CDR(x140421015031975);
Obj rest = x140421013270823;
Obj x140421013271079 = makeCons(lib, x140421015032039);
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = x140421013271079;
__arg3 = x140421015032071;
co->args[4] = x140421015032103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421015032295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140421015033223 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj x140421013469607 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421013469607) {
Obj x140421013469991 = PRIM_CAR(closureRef(co, 1));
Obj x140421013470119 = PRIM_ISCONS(x140421013469991);
if (True == x140421013470119) {
Obj x140421013470727 = PRIM_CAR(closureRef(co, 1));
Obj x140421013470759 = PRIM_CAR(x140421013470727);
Obj x140421013470791 = PRIM_EQ(__symbolTable[82], x140421013470759);
if (True == x140421013470791) {
Obj x140421013389319 = PRIM_CAR(closureRef(co, 1));
Obj x140421013389351 = PRIM_CDR(x140421013389319);
Obj more = x140421013389351;
Obj x140421013389671 = PRIM_CDR(closureRef(co, 1));
Obj rest = x140421013389671;
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
__arg0 = x140421015033223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033223;
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
Obj x140421013469351 = __arg1;
__nargs = 4;
__arg0 = closureRef(co, 0);
__arg1 = x140421013469351;
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
Obj x140421013468359 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, x140421013468359);
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
Obj x140421013468519 = __arg1;
Obj x140421013468359= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = x140421013468359;
__arg2 = x140421013468519;
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
Obj x140421013564519 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = x140421013564519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140421013564551 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421013564551) {
Obj x140421013564967 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, x140421013564967, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013467303 = PRIM_CAR(arglist);
Obj x140421013467591 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, x140421013467303, fn);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = fn;
__arg2 = x140421013467591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140421013467623 = __arg1;
Obj x140421013467303= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013467655 = makeCons(x140421013467623, Nil);
Obj x140421013467687 = makeCons(x140421013467303, x140421013467655);
Obj x140421013467719 = makeCons(fn, x140421013467687);
__nargs = 2;
__arg1 = x140421013467719;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140421013565127 = __arg1;
Obj x140421013564967= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013565159 = makeCons(x140421013565127, Nil);
Obj x140421013565191 = makeCons(x140421013564967, x140421013565159);
Obj x140421013565351 = makeCons(fn, x140421013565191);
__nargs = 2;
__arg1 = x140421013565351;
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
Obj x140421013563943 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = x140421013563943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140421015034055 = __arg1;
Obj x140421013625479 = primIsSymbol(x140421015034055);
if (True == x140421013625479) {
Obj x140421013625671 = makeCons(x140421015034055, Nil);
Obj x140421013625703 = makeCons(__symbolTable[139], x140421013625671);
__nargs = 2;
__arg1 = x140421013625703;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015034343 = makeNative(34, clofun1, 0, 1, x140421015034055);
Obj x140421013561543 = PRIM_ISCONS(x140421015034055);
if (True == x140421013561543) {
Obj x140421013561831 = PRIM_CAR(x140421015034055);
Obj x140421013561863 = PRIM_EQ(__symbolTable[87], x140421013561831);
if (True == x140421013561863) {
Obj x140421013562215 = PRIM_CDR(x140421015034055);
Obj x140421013562247 = PRIM_ISCONS(x140421013562215);
if (True == x140421013562247) {
Obj x140421013562631 = PRIM_CDR(x140421015034055);
Obj x140421013562663 = PRIM_CAR(x140421013562631);
Obj x = x140421013562663;
Obj x140421013563079 = PRIM_CDR(x140421015034055);
Obj x140421013563143 = PRIM_CDR(x140421013563079);
Obj x140421013563175 = PRIM_EQ(Nil, x140421013563143);
if (True == x140421013563175) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421015034343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015034343;
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
Obj x140421013626055 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013626055) {
Obj x140421013626311 = PRIM_CAR(closureRef(co, 0));
Obj x = x140421013626311;
Obj x140421013626535 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421013626535;
Obj x140421013626759 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = globalRef(__symbolTable[88]);
__arg2 = x140421013626759;
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
Obj x140421013626855 = __arg1;
Obj x140421013561351 = makeCons(__symbolTable[135], x140421013626855);
__nargs = 2;
__arg1 = x140421013561351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj exp = __arg1;
Obj x140421013625063 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[91]);
__arg1 = x140421013625063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140421015032903 = __arg1;
Obj x140421015032999 = makeNative(38, clofun1, 0, 1, x140421015032903);
Obj x140421013623719 = PRIM_ISCONS(x140421015032903);
if (True == x140421013623719) {
Obj x140421013623943 = PRIM_CAR(x140421015032903);
Obj x = x140421013623943;
Obj x140421013624231 = PRIM_CDR(x140421015032903);
Obj x140421013624295 = PRIM_EQ(Nil, x140421013624231);
if (True == x140421013624295) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421015032999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140421015033319 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj x140421013682823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013682823) {
Obj x140421013683111 = PRIM_CAR(closureRef(co, 0));
Obj x = x140421013683111;
Obj x140421013683431 = PRIM_CDR(closureRef(co, 0));
Obj x140421013683495 = PRIM_ISCONS(x140421013683431);
if (True == x140421013683495) {
Obj x140421013683783 = PRIM_CDR(closureRef(co, 0));
Obj x140421013683815 = PRIM_CAR(x140421013683783);
Obj y = x140421013683815;
Obj x140421013622855 = PRIM_CDR(closureRef(co, 0));
Obj x140421013622951 = PRIM_CDR(x140421013622855);
Obj x140421013622983 = PRIM_EQ(Nil, x140421013622951);
if (True == x140421013622983) {
Obj x140421013623207 = makeCons(y, Nil);
Obj x140421013623239 = makeCons(x, x140421013623207);
Obj x140421013623303 = makeCons(__symbolTable[90], x140421013623239);
__nargs = 2;
__arg1 = x140421013623303;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421015033319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015033319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140421013681447 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013681447) {
Obj x140421013681671 = PRIM_CAR(closureRef(co, 0));
Obj x = x140421013681671;
Obj x140421013682087 = PRIM_CDR(closureRef(co, 0));
Obj y = x140421013682087;
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
Obj x140421013682439 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013682471 = makeCons(x140421013682439, Nil);
Obj x140421013682503 = makeCons(x, x140421013682471);
Obj x140421013682535 = makeCons(__symbolTable[90], x140421013682503);
__nargs = 2;
__arg1 = x140421013682535;
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
Obj x140421013680583 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[94]);
__arg1 = x140421013680583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140421013680615 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[92]);
__arg1 = x140421013680615;
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
Obj x140421015033127 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[104]);
__arg1 = x140421015033127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140421015033159 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140421015033159;
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
Obj x140421015033415 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140421015033415;
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
Obj x140421015033607 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140421015033607;
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
Obj x140421015034087 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015034567 = makeCons(__symbolTable[135], args);
Obj x140421015034695 = makeCons(x140421015034567, body);
Obj x140421015034727 = makeCons(__symbolTable[107], x140421015034695);
Obj x140421015034759 = makeCons(x140421015034727, Nil);
Obj x140421015034791 = makeCons(args, x140421015034759);
Obj x140421015034823 = makeCons(x140421015034087, x140421015034791);
Obj x140421015034855 = makeCons(__symbolTable[134], x140421015034823);
__nargs = 2;
__arg1 = x140421015034855;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj n = __arg1;
Obj x140421015346919 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140421015346919) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015347143 = primGenSym();
Obj x140421015032263 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, x140421015347143);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = x140421015032263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140421015032327 = __arg1;
Obj x140421015347143= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015032487 = makeCons(x140421015347143, x140421015032327);
__nargs = 2;
__arg1 = x140421015032487;
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
Obj x140421015344679 = __arg1;
Obj pats = x140421015344679;
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
Obj x140421015345159 = __arg1;
Obj counts = x140421015345159;
Obj x140421015345319 = PRIM_CAR(counts);
Obj n = x140421015345319;
Obj x140421015346279 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(__symbolTable[99]);
__arg1 = makeNative(9, clofun2, 1, 1, n);
__arg2 = x140421015346279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140421015346311 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = x140421015346311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140421015346343 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015346375 = primNot(x140421015346343);
if (True == x140421015346375) {
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
Obj x140421015345895 = PRIM_EQ(closureRef(co, 0), x);
Obj x140421015345927 = primNot(x140421015345895);
__nargs = 2;
__arg1 = x140421015345927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x = __arg1;
Obj x140421015345063 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[101]);
__arg1 = x140421015345063;
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
Obj x140421015343559 = PRIM_EQ(l1, Nil);
if (True == x140421015343559) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015343719 = PRIM_CAR(l1);
Obj x140421015343879 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, x140421015343719);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = x140421015343879;
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
Obj x140421015343911 = __arg1;
Obj x140421015343719= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015344039 = makeCons(x140421015343719, x140421015343911);
__nargs = 2;
__arg1 = x140421015344039;
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
Obj x140421015386663 = PRIM_ISCONS(l);
if (True == x140421015386663) {
Obj x140421015386951 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = x140421015386951;
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
Obj x140421015386983 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140421015386983) {
Obj x140421015387239 = PRIM_CAR(l);
Obj x140421015387271 = makeCons(x140421015387239, res);
Obj x140421015387527 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x140421015387271;
__arg2 = fn;
__arg3 = x140421015387527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421015387751 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = res;
__arg2 = fn;
__arg3 = x140421015387751;
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
Obj x140421015385447 = PRIM_EQ(l, Nil);
if (True == x140421015385447) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015385735 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140421015385831 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = x140421015385735;
__arg2 = x140421015385831;
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
Obj x140421015384327 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421015384327) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421015384647 = PRIM_CAR(rules);
Obj x140421015384711 = makeCons(x140421015384647, res);
pushCont(co, 20, clofun2, 1, x140421015384711);
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
Obj x140421015384807 = __arg1;
Obj x140421015384711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = x140421015384711;
__arg2 = x140421015384807;
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
Obj x140421013106887 = PRIM_EQ(Nil, input);
if (True == x140421013106887) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421015032007 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj x140421013091271 = PRIM_ISCONS(input);
if (True == x140421013091271) {
Obj x140421013091495 = PRIM_CAR(input);
Obj x140421013091527 = PRIM_EQ(__symbolTable[105], x140421013091495);
if (True == x140421013091527) {
Obj x140421013091751 = PRIM_CDR(input);
Obj x140421013091783 = PRIM_ISCONS(x140421013091751);
if (True == x140421013091783) {
Obj x140421013092007 = PRIM_CDR(input);
Obj x140421013092039 = PRIM_CAR(x140421013092007);
Obj act = x140421013092039;
Obj x140421013092327 = PRIM_CDR(input);
Obj x140421013092359 = PRIM_CDR(x140421013092327);
Obj x140421013092391 = PRIM_ISCONS(x140421013092359);
if (True == x140421013092391) {
Obj x140421013092743 = PRIM_CDR(input);
Obj x140421013092775 = PRIM_CDR(x140421013092743);
Obj x140421013092807 = PRIM_CAR(x140421013092775);
Obj x140421013092839 = PRIM_EQ(__symbolTable[110], x140421013092807);
if (True == x140421013092839) {
Obj x140421013093191 = PRIM_CDR(input);
Obj x140421013093223 = PRIM_CDR(x140421013093191);
Obj x140421013093255 = PRIM_CDR(x140421013093223);
Obj x140421013093287 = PRIM_ISCONS(x140421013093255);
if (True == x140421013093287) {
Obj x140421013093639 = PRIM_CDR(input);
Obj x140421013093671 = PRIM_CDR(x140421013093639);
Obj x140421013093703 = PRIM_CDR(x140421013093671);
Obj x140421013093735 = PRIM_CAR(x140421013093703);
Obj pred = x140421013093735;
Obj x140421013094087 = PRIM_CDR(input);
Obj x140421013094119 = PRIM_CDR(x140421013094087);
Obj x140421013094151 = PRIM_CDR(x140421013094119);
Obj x140421013094183 = PRIM_CDR(x140421013094151);
Obj remain = x140421013094183;
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
__arg0 = x140421015032007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032007;
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
Obj x140421012992007 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421012992039 = makeCons(__symbolTable[135], x140421012992007);
Obj pat = x140421012992039;
Obj x140421012992391 = makeCons(act, Nil);
Obj x140421012992423 = makeCons(pred, x140421012992391);
Obj x140421012992455 = makeCons(__symbolTable[110], x140421012992423);
Obj x140421012992551 = makeCons(pat, result);
Obj x140421012992583 = makeCons(x140421012992455, x140421012992551);
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140421012992583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140421015032455 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421013109671 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013109671) {
Obj x140421013109927 = PRIM_CAR(closureRef(co, 0));
Obj x140421013109959 = PRIM_EQ(__symbolTable[105], x140421013109927);
if (True == x140421013109959) {
Obj x140421013110215 = PRIM_CDR(closureRef(co, 0));
Obj x140421013110247 = PRIM_ISCONS(x140421013110215);
if (True == x140421013110247) {
Obj x140421013110503 = PRIM_CDR(closureRef(co, 0));
Obj x140421013110535 = PRIM_CAR(x140421013110503);
Obj act = x140421013110535;
Obj x140421013090311 = PRIM_CDR(closureRef(co, 0));
Obj x140421013090343 = PRIM_CDR(x140421013090311);
Obj remain = x140421013090343;
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
__arg0 = x140421015032455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421015032455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140421013090599 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013090631 = makeCons(__symbolTable[135], x140421013090599);
Obj pat = x140421013090631;
Obj x140421013090887 = makeCons(pat, closureRef(co, 2));
Obj x140421013090919 = makeCons(act, x140421013090887);
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140421013090919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140421013108807 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013108807) {
Obj x140421013108999 = PRIM_CAR(closureRef(co, 0));
Obj x = x140421013108999;
Obj x140421013109191 = PRIM_CDR(closureRef(co, 0));
Obj y = x140421013109191;
Obj x140421013109383 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = y;
__arg2 = x140421013109383;
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
Obj x140421013271015 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[138]);
__arg1 = x140421013271015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140421013271047 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140421013271047;
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
Obj x140421013271335 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140421013271335;
Obj x140421015384135 = makeNative(32, clofun2, 1, 2, value, rules);
Obj x140421013272871 = PRIM_ISCONS(value);
if (True == x140421013272871) {
Obj x140421013273607 = PRIM_CAR(value);
Obj x140421013273639 = PRIM_EQ(__symbolTable[152], x140421013273607);
Obj x140421013273671 = primNot(x140421013273639);
if (True == x140421013273671) {
__nargs = 2;
__arg0 = x140421015384135;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015384135;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140421015384135;
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
Obj x140421015384167 = __arg1;
if (True == x140421015384167) {
Obj x140421013271751 = primGenSym();
Obj val = x140421013271751;
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
Obj x140421013272263 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013272295 = makeCons(x140421013272263, Nil);
Obj x140421013272327 = makeCons(closureRef(co, 0), x140421013272295);
Obj x140421013272359 = makeCons(val, x140421013272327);
Obj x140421013272391 = makeCons(__symbolTable[129], x140421013272359);
__nargs = 2;
__arg1 = x140421013272391;
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
Obj x140421013389607 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421013389607) {
Obj x140421013389767 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140421013389799 = makeCons(__symbolTable[127], x140421013389767);
__nargs = 2;
__arg1 = x140421013389799;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015384071 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, x140421015384071);
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
Obj x140421013393031 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015384071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421013393031) {
Obj x140421013393319 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, x140421015384071);
__nargs = 2;
__arg0 = globalRef(__symbolTable[151]);
__arg1 = x140421013393319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015384071;
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
Obj x140421013270535 = __arg1;
Obj x140421015384071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421013270535) {
__nargs = 2;
__arg0 = x140421015384071;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015384071;
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
Obj x140421015384103 = __arg1;
if (True == x140421015384103) {
Obj x140421013390311 = PRIM_CAR(closureRef(co, 1));
Obj pat = x140421013390311;
Obj x140421013390631 = primGenSym();
Obj cc = x140421013390631;
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
Obj x140421013390823 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = x140421013390823;
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
Obj x140421013391175 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = x140421013391175;
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
Obj x140421013391239 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140421013391239;
Obj x140421013391623 = PRIM_CDR(closureRef(co, 1));
Obj x140421013391655 = PRIM_CDR(x140421013391623);
pushCont(co, 42, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[109]);
__arg1 = closureRef(co, 0);
__arg2 = x140421013391655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140421013391719 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140421013391719;
Obj x140421013392327 = makeCons(rest, Nil);
Obj x140421013392423 = makeCons(Nil, x140421013392327);
Obj x140421013392455 = makeCons(__symbolTable[140], x140421013392423);
Obj x140421013392551 = makeCons(curr, Nil);
Obj x140421013392583 = makeCons(x140421013392455, x140421013392551);
Obj x140421013392615 = makeCons(cc, x140421013392583);
Obj x140421013392647 = makeCons(__symbolTable[129], x140421013392615);
__nargs = 2;
__arg1 = x140421013392647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140421013469191 = PRIM_CDR(rules);
Obj x140421013469223 = PRIM_CAR(x140421013469191);
Obj action = x140421013469223;
Obj x140421015385319 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, x140421015385319);
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
Obj x140421013470695 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015385319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421013470695) {
Obj x140421013471015 = PRIM_CAR(action);
Obj x140421013471047 = PRIM_EQ(x140421013471015, __symbolTable[110]);
if (True == x140421013471047) {
__nargs = 2;
__arg0 = x140421015385319;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015385319;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140421015385319;
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
Obj x140421015385351 = __arg1;
if (True == x140421015385351) {
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
Obj x140421013469735 = __arg1;
pushCont(co, 47, clofun2, 1, x140421013469735);
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
Obj x140421013469927 = __arg1;
Obj x140421013469735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013470215 = makeCons(closureRef(co, 0), Nil);
Obj x140421013470247 = makeCons(x140421013470215, Nil);
Obj x140421013470279 = makeCons(x140421013469927, x140421013470247);
Obj x140421013470311 = makeCons(x140421013469735, x140421013470279);
Obj x140421013470343 = makeCons(__symbolTable[126], x140421013470311);
__nargs = 2;
__arg1 = x140421013470343;
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
Obj x140421013563847 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140421013563847) {
Obj x140421013564007 = PRIM_EQ(pat, expr);
if (True == x140421013564007) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013564359 = makeCons(expr, Nil);
Obj x140421013564391 = makeCons(pat, x140421013564359);
Obj x140421013564423 = makeCons(__symbolTable[113], x140421013564391);
Obj x140421013564647 = makeCons(cc, Nil);
Obj x140421013564679 = makeCons(x140421013564647, Nil);
Obj x140421013564711 = makeCons(body, x140421013564679);
Obj x140421013564743 = makeCons(x140421013564423, x140421013564711);
Obj x140421013564775 = makeCons(__symbolTable[126], x140421013564743);
__nargs = 2;
__arg1 = x140421013564775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140421013564935 = primIsSymbol(pat);
if (True == x140421013564935) {
Obj x140421013565223 = makeCons(body, Nil);
Obj x140421013565255 = makeCons(expr, x140421013565223);
Obj x140421013565287 = makeCons(pat, x140421013565255);
Obj x140421013565319 = makeCons(__symbolTable[129], x140421013565287);
__nargs = 2;
__arg1 = x140421013565319;
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
Obj x140421013467175 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140421013467175) {
Obj x140421013467399 = PRIM_CAR(pat);
Obj x140421013467431 = PRIM_EQ(x140421013467399, __symbolTable[139]);
if (True == x140421013467431) {
Obj x140421013467783 = makeCons(expr, Nil);
Obj x140421013467815 = makeCons(pat, x140421013467783);
Obj x140421013467847 = makeCons(__symbolTable[113], x140421013467815);
Obj x140421013468071 = makeCons(cc, Nil);
Obj x140421013468103 = makeCons(x140421013468071, Nil);
Obj x140421013468135 = makeCons(body, x140421013468103);
Obj x140421013468167 = makeCons(x140421013467847, x140421013468135);
Obj x140421013468199 = makeCons(__symbolTable[126], x140421013468167);
__nargs = 2;
__arg1 = x140421013468199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013468423 = PRIM_CAR(pat);
Obj x140421013468455 = PRIM_EQ(x140421013468423, __symbolTable[152]);
if (True == x140421013468455) {
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
Obj x140421013468743 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = x140421013468743;
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
Obj x140421013563559 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421013563559) {
Obj x140421013563783 = primIsSymbol(x);
Obj x140421013563815 = primNot(x140421013563783);
if (True == x140421013563815) {
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
Obj x140421013625383 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140421013625383;
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
Obj x140421013625543 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140421013625543;
Obj x140421015385255 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj x140421013562695 = PRIM_ISCONS(expr);
if (True == x140421013562695) {
Obj x140421013562919 = PRIM_CAR(expr);
Obj x140421013562951 = PRIM_EQ(x140421013562919, __symbolTable[152]);
if (True == x140421013562951) {
__nargs = 2;
__arg0 = x140421015385255;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015385255;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140421015385255;
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
Obj x140421015385287 = __arg1;
if (True == x140421015385287) {
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
Obj x140421013626791 = makeCons(closureRef(co, 2), Nil);
Obj x140421013626823 = makeCons(__symbolTable[116], x140421013626791);
Obj x140421013561639 = makeCons(closureRef(co, 2), Nil);
Obj x140421013561671 = makeCons(__symbolTable[115], x140421013561639);
Obj x140421013561959 = makeCons(closureRef(co, 2), Nil);
Obj x140421013561991 = makeCons(__symbolTable[114], x140421013561959);
pushCont(co, 8, clofun3, 2, x140421013561671, x140421013626823);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = x140421013561991;
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
Obj x140421013562087 = __arg1;
Obj x140421013561671= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013626823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, x140421013626823);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = x140421013561671;
__arg3 = x140421013562087;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140421013562151 = __arg1;
Obj x140421013626823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013562343 = makeCons(closureRef(co, 4), Nil);
Obj x140421013562375 = makeCons(x140421013562343, Nil);
Obj x140421013562407 = makeCons(x140421013562151, x140421013562375);
Obj x140421013562439 = makeCons(x140421013626823, x140421013562407);
Obj x140421013562471 = makeCons(__symbolTable[126], x140421013562439);
__nargs = 2;
__arg1 = x140421013562471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x140421013625927 = __arg1;
Obj e1 = x140421013625927;
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
Obj x140421013626119 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = x140421013626119;
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
Obj x140421013626439 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = x140421013626439;
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
Obj x140421013624999 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[120]);
__arg1 = x140421013624999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj pat = __arg1;
Obj x140421013623879 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = x140421013623879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140421013623911 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421013623911) {
Obj x140421013624039 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140421013624039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013624263 = PRIM_CAR(pat);
Obj x140421013624487 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, x140421013624263);
__nargs = 2;
__arg0 = globalRef(__symbolTable[120]);
__arg1 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj x140421013624519 = __arg1;
Obj x140421013624263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013624551 = makeCons(x140421013624519, Nil);
Obj x140421013624583 = makeCons(x140421013624263, x140421013624551);
Obj x140421013624615 = makeCons(__symbolTable[152], x140421013624583);
__nargs = 2;
__arg1 = x140421013624615;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj x140421013623271 = PRIM_EQ(x, True);
if (True == x140421013623271) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013623431 = PRIM_EQ(x, False);
if (True == x140421013623431) {
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
Obj x140421013622887 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[123]);
__arg1 = x140421013622887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj l = __arg1;
Obj x140421013682759 = PRIM_EQ(Nil, l);
if (True == x140421013682759) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013683015 = PRIM_CAR(l);
Obj x140421013683047 = PRIM_EQ(x140421013683015, False);
if (True == x140421013683047) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013683271 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[123]);
__arg1 = x140421013683271;
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
Obj x140421013683303 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140421013683303;
Obj x140421013683463 = PRIM_EQ(more, False);
if (True == x140421013683463) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013683687 = PRIM_CAR(l);
Obj x140421013683847 = makeCons(False, Nil);
Obj x140421013683879 = makeCons(more, x140421013683847);
Obj x140421013683911 = makeCons(x140421013683687, x140421013683879);
Obj x140421013683943 = makeCons(__symbolTable[126], x140421013683911);
__nargs = 2;
__arg1 = x140421013683943;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label21:
{
Obj exp = __arg1;
Obj x140421013682375 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[125]);
__arg1 = x140421013682375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj l = __arg1;
Obj x140421013680807 = PRIM_EQ(l, Nil);
if (True == x140421013680807) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013681031 = PRIM_CAR(l);
Obj x140421013681063 = PRIM_EQ(x140421013681031, True);
if (True == x140421013681063) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013681287 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[125]);
__arg1 = x140421013681287;
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
Obj x140421013681319 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140421013681319;
Obj x140421013681479 = PRIM_EQ(more, True);
if (True == x140421013681479) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013681703 = PRIM_CAR(l);
Obj x140421013681863 = makeCons(more, Nil);
Obj x140421013681895 = makeCons(True, x140421013681863);
Obj x140421013681959 = makeCons(x140421013681703, x140421013681895);
Obj x140421013681991 = makeCons(__symbolTable[126], x140421013681959);
__nargs = 2;
__arg1 = x140421013681991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label24:
{
Obj exp = __arg1;
Obj x140421015034951 = PRIM_CDR(exp);
Obj x140421015034983 = PRIM_EQ(Nil, x140421015034951);
if (True == x140421015034983) {
Obj x140421015035143 = makeCons(makeCString("no cond match"), Nil);
Obj x140421015035175 = makeCons(__symbolTable[127], x140421015035143);
__nargs = 2;
__arg1 = x140421015035175;
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
Obj x140421015035335 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140421015035335;
Obj x140421015035591 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, x140421015035591);
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
Obj x140421015035751 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015035591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, x140421015035751, x140421015035591);
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
Obj x140421013680263 = __arg1;
Obj x140421015035751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015035591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680295 = makeCons(__symbolTable[128], x140421013680263);
Obj x140421013680327 = makeCons(x140421013680295, Nil);
Obj x140421013680359 = makeCons(x140421015035751, x140421013680327);
Obj x140421013680391 = makeCons(x140421015035591, x140421013680359);
Obj x140421013680423 = makeCons(__symbolTable[126], x140421013680391);
__nargs = 2;
__arg1 = x140421013680423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj exp = __arg1;
Obj x140421015034375 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = x140421015034375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
Obj x140421015032871 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = x140421015032871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140421015032935 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421015032935) {
Obj x140421015033095 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140421015033095;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015033383 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, x140421015033383);
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
Obj x140421015033543 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015033383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, x140421015033543, x140421015033383);
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
Obj x140421015033767 = __arg1;
Obj x140421015033543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015033383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, x140421015033543, x140421015033383);
__nargs = 2;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = x140421015033767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140421015033799 = __arg1;
Obj x140421015033543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015033383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015033831 = makeCons(x140421015033799, Nil);
Obj x140421015033863 = makeCons(x140421015033543, x140421015033831);
Obj x140421015033895 = makeCons(x140421015033383, x140421015033863);
Obj x140421015033927 = makeCons(__symbolTable[129], x140421015033895);
__nargs = 2;
__arg1 = x140421015033927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x = __arg1;
Obj x140421015032359 = PRIM_ISCONS(x);
Obj x140421015032391 = primNot(x140421015032359);
__nargs = 2;
__arg1 = x140421015032391;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140421015346567 = PRIM_ISCONS(l);
if (True == x140421015346567) {
Obj x140421015346791 = PRIM_CAR(l);
Obj x140421015346823 = PRIM_EQ(x140421015346791, x);
if (True == x140421015346823) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015346983 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = x;
__arg2 = x140421015346983;
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
Obj x140421015345543 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, x140421015345543);
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
Obj x140421015345831 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015345543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, x140421015345831, x140421015345543);
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
Obj x140421015345991 = __arg1;
Obj x140421015345831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015345543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015346023 = makeCons(x140421015345991, Nil);
Obj x140421015346055 = makeCons(x140421015345831, x140421015346023);
Obj x140421015346087 = makeCons(__symbolTable[140], x140421015346055);
Obj x140421015346119 = makeCons(x140421015346087, Nil);
Obj x140421015346151 = makeCons(x140421015345543, x140421015346119);
Obj x140421015346183 = makeCons(__symbolTable[133], x140421015346151);
__nargs = 2;
__arg1 = x140421015346183;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj exp = __arg1;
Obj x140421015345095 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[153]);
__arg1 = x140421015345095;
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
Obj x140421015343943 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015343975 = makeCons(x140421015343943, Nil);
Obj x140421015344007 = makeCons(__symbolTable[139], x140421015343975);
pushCont(co, 43, clofun3, 2, exp, x140421015344007);
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
Obj x140421015344295 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015344007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, x140421015344295, x140421015344007);
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
Obj x140421015344391 = __arg1;
Obj x140421015344295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015344007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421015344423 = makeCons(x140421015344295, x140421015344391);
Obj x140421015344455 = makeCons(__symbolTable[140], x140421015344423);
Obj x140421015344487 = makeCons(x140421015344455, Nil);
Obj x140421015344519 = makeCons(x140421015344007, x140421015344487);
Obj x140421015344551 = makeCons(__symbolTable[144], x140421015344519);
__nargs = 2;
__arg1 = x140421015344551;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
Obj x140421015386279 = PRIM_ISCONS(exp);
if (True == x140421015386279) {
Obj x140421015386503 = PRIM_CAR(exp);
Obj x140421015386535 = PRIM_EQ(x140421015386503, globalRef(__symbolTable[145]));
if (True == x140421015386535) {
Obj x140421015386631 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140421015386631;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015386855 = PRIM_CAR(exp);
Obj x140421015386887 = PRIM_EQ(x140421015386855, __symbolTable[140]);
if (True == x140421015386887) {
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
Obj x140421015387687 = PRIM_CAR(exp);
Obj x140421015387719 = PRIM_EQ(x140421015387687, __symbolTable[139]);
if (True == x140421015387719) {
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
Obj x140421015343207 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(47, clofun3, 1, 1, exp);
__arg1 = x140421015343207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp1 = __arg1;
Obj x140421015388039 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140421015388039) {
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
Obj x140421015387111 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, x140421015387111);
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
Obj x140421015387335 = __arg1;
Obj x140421015387111= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, x140421015387111);
__nargs = 2;
__arg0 = globalRef(__symbolTable[141]);
__arg1 = x140421015387335;
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
Obj x140421015387367 = __arg1;
Obj x140421015387111= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421015387399 = makeCons(x140421015387367, Nil);
Obj x140421015387431 = makeCons(x140421015387111, x140421015387399);
Obj x140421015387463 = makeCons(__symbolTable[140], x140421015387431);
__nargs = 2;
__arg1 = x140421015387463;
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
Obj x140421013272967 = PRIM_EQ(Nil, macros);
if (True == x140421013272967) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421015385607 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 2, macros, exp);
__arg1 = x140421015385607;
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
Obj x140421015385191 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj x140421015384935 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421015384935) {
Obj x140421015385383 = PRIM_CAR(closureRef(co, 1));
Obj x140421015385479 = PRIM_CAR(item);
Obj x140421015385511 = PRIM_EQ(x140421015385383, x140421015385479);
if (True == x140421015385511) {
__nargs = 2;
__arg0 = x140421015385191;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421015385191;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140421015385191;
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
Obj x140421015385223 = __arg1;
if (True == x140421015385223) {
Obj x140421015384423 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg0 = x140421015384423;
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421015384679 = PRIM_CDR(closureRef(co, 2));
__nargs = 3;
__arg0 = globalRef(__symbolTable[143]);
__arg1 = closureRef(co, 1);
__arg2 = x140421015384679;
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
Obj x140421013272519 = makeCons(n, v);
Obj x140421013272551 = makeCons(x140421013272519, globalRef(__symbolTable[146]));
Obj x140421013272583 = primSet(co, __symbolTable[146], x140421013272551);
__nargs = 2;
__arg1 = x140421013272583;
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
Obj x140421013270855 = PRIM_ISCONS(l);
if (True == x140421013270855) {
Obj x140421013271143 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = x140421013271143;
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
Obj x140421013271175 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013271207 = makeCons(x140421013271175, res);
Obj x140421013271303 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[148]);
__arg1 = x140421013271207;
__arg2 = f;
__arg3 = x140421013271303;
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
Obj x140421013392743 = PRIM_ISCONS(l);
if (True == x140421013392743) {
Obj x140421013392967 = PRIM_CAR(l);
Obj x140421013392999 = makeCons(x140421013392967, res);
Obj x140421013393095 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[150]);
__arg1 = x140421013392999;
__arg2 = x140421013393095;
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
Obj x140421013392359 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140421013392359;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj exp = __arg1;
Obj x140421013391463 = PRIM_ISCONS(exp);
if (True == x140421013391463) {
Obj x140421013391687 = PRIM_CAR(exp);
Obj x140421013391911 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, x140421013391687);
__nargs = 2;
__arg0 = globalRef(__symbolTable[153]);
__arg1 = x140421013391911;
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
Obj x140421013391943 = __arg1;
Obj x140421013391687= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013391975 = makeCons(x140421013391943, Nil);
Obj x140421013392007 = makeCons(x140421013391687, x140421013391975);
Obj x140421013392039 = makeCons(__symbolTable[152], x140421013392007);
__nargs = 2;
__arg1 = x140421013392039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x = __arg1;
Obj x140421013391015 = PRIM_CDR(x);
Obj x140421013391047 = PRIM_CDR(x140421013391015);
Obj x140421013391079 = PRIM_CDR(x140421013391047);
__nargs = 2;
__arg1 = x140421013391079;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj x = __arg1;
Obj x140421013390471 = PRIM_CDR(x);
Obj x140421013390503 = PRIM_CDR(x140421013390471);
Obj x140421013390535 = PRIM_CDR(x140421013390503);
Obj x140421013390567 = PRIM_CAR(x140421013390535);
__nargs = 2;
__arg1 = x140421013390567;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x = __arg1;
Obj x140421013389895 = PRIM_CDR(x);
Obj x140421013389927 = PRIM_CDR(x140421013389895);
Obj x140421013389959 = PRIM_CAR(x140421013389927);
__nargs = 2;
__arg1 = x140421013389959;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj x140421013389415 = PRIM_CDR(x);
Obj x140421013389447 = PRIM_CDR(x140421013389415);
__nargs = 2;
__arg1 = x140421013389447;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj x140421013470919 = PRIM_CAR(x);
Obj x140421013470951 = PRIM_CDR(x140421013470919);
__nargs = 2;
__arg1 = x140421013470951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj x140421013470439 = PRIM_CAR(x);
Obj x140421013470535 = PRIM_CAR(x140421013470439);
__nargs = 2;
__arg1 = x140421013470535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj x140421013470023 = PRIM_CDR(x);
Obj x140421013470055 = PRIM_CAR(x140421013470023);
__nargs = 2;
__arg1 = x140421013470055;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj x140421013469639 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140421013469639;
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

