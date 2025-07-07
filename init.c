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
Obj _359307_37 = primSet(co, __symbolTable[161], makeNative(20, clofun4, 1, 0));
Obj _359310_37 = primSet(co, __symbolTable[160], makeNative(19, clofun4, 1, 0));
Obj _359313_37 = primSet(co, __symbolTable[159], makeNative(18, clofun4, 1, 0));
Obj _359316_37 = primSet(co, __symbolTable[158], makeNative(17, clofun4, 1, 0));
Obj _359319_37 = primSet(co, __symbolTable[157], makeNative(16, clofun4, 1, 0));
Obj _359323_37 = primSet(co, __symbolTable[156], makeNative(15, clofun4, 1, 0));
Obj _359328_37 = primSet(co, __symbolTable[155], makeNative(14, clofun4, 1, 0));
Obj _359332_37 = primSet(co, __symbolTable[154], makeNative(13, clofun4, 1, 0));
Obj _359340_37 = primSet(co, __symbolTable[153], makeNative(11, clofun4, 1, 0));
Obj _359342_37 = primSet(co, __symbolTable[151], makeNative(10, clofun4, 1, 0));
Obj _359347_37 = primSet(co, __symbolTable[150], makeNative(9, clofun4, 2, 0));
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
Obj _359348_37 = __arg1;
Obj _359349_37 = primSet(co, __symbolTable[149], _359348_37);
Obj _359355_37 = primSet(co, __symbolTable[148], makeNative(7, clofun4, 3, 0));
Obj _359356_37 = primSet(co, __symbolTable[147], makeNative(6, clofun4, 2, 0));
Obj _359357_37 = primSet(co, __symbolTable[146], Nil);
Obj _359358_37 = primGenSym();
Obj _359359_37 = primSet(co, __symbolTable[145], _359358_37);
Obj _359363_37 = primSet(co, __symbolTable[144], makeNative(5, clofun4, 2, 0));
Obj _359372_37 = primSet(co, __symbolTable[143], makeNative(2, clofun4, 2, 0));
Obj _359373_37 = primSet(co, __symbolTable[142], makeNative(1, clofun4, 1, 0));
Obj _359390_37 = primSet(co, __symbolTable[141], makeNative(45, clofun3, 1, 0));
Obj _359391_37 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj _359402_37 = primSet(co, __symbolTable[137], makeNative(41, clofun3, 1, 0));
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
Obj _359403_37 = __arg1;
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
Obj _359405_37 = __arg1;
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
Obj _359415_37 = __arg1;
Obj _359420_37 = primSet(co, __symbolTable[132], makeNative(35, clofun3, 2, 0));
Obj _359423_37 = primSet(co, __symbolTable[131], makeNative(34, clofun3, 1, 0));
Obj _359435_37 = primSet(co, __symbolTable[130], makeNative(29, clofun3, 1, 0));
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
Obj _359437_37 = __arg1;
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
Obj _359451_37 = __arg1;
Obj _359463_37 = primSet(co, __symbolTable[125], makeNative(22, clofun3, 1, 0));
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
Obj _359465_37 = __arg1;
Obj _359477_37 = primSet(co, __symbolTable[123], makeNative(19, clofun3, 1, 0));
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
Obj _359479_37 = __arg1;
Obj _359482_37 = primSet(co, __symbolTable[121], makeNative(17, clofun3, 1, 0));
Obj _359492_37 = primSet(co, __symbolTable[120], makeNative(14, clofun3, 1, 0));
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
Obj _359494_37 = __arg1;
Obj _359516_37 = primSet(co, __symbolTable[118], makeNative(4, clofun3, 4, 0));
Obj _359549_37 = primSet(co, __symbolTable[117], makeNative(48, clofun2, 4, 0));
Obj _359562_37 = primSet(co, __symbolTable[111], makeNative(43, clofun2, 2, 0));
Obj _359584_37 = primSet(co, __symbolTable[109], makeNative(34, clofun2, 2, 0));
Obj _359598_37 = primSet(co, __symbolTable[108], makeNative(28, clofun2, 1, 0));
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
Obj _359599_37 = __arg1;
Obj _359651_37 = primSet(co, __symbolTable[106], makeNative(22, clofun2, 3, 0));
Obj _359652_37 = primSet(co, __symbolTable[104], makeNative(21, clofun2, 1, 0));
Obj _359657_37 = primSet(co, __symbolTable[103], makeNative(18, clofun2, 2, 0));
Obj _359661_37 = primSet(co, __symbolTable[102], makeNative(17, clofun2, 2, 0));
Obj _359662_37 = primSet(co, __symbolTable[101], makeNative(16, clofun2, 1, 0));
Obj _359670_37 = primSet(co, __symbolTable[100], makeNative(14, clofun2, 3, 0));
Obj _359671_37 = primSet(co, __symbolTable[99], makeNative(13, clofun2, 2, 0));
Obj _359677_37 = primSet(co, __symbolTable[98], makeNative(11, clofun2, 2, 0));
Obj _359688_37 = primSet(co, __symbolTable[97], makeNative(4, clofun2, 1, 0));
Obj _359694_37 = primSet(co, __symbolTable[96], makeNative(2, clofun2, 1, 0));
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
Obj _359707_37 = __arg1;
Obj _359708_37 = primSet(co, __symbolTable[94], makeNative(45, clofun1, 1, 0));
Obj _359709_37 = primSet(co, __symbolTable[92], makeNative(44, clofun1, 1, 0));
Obj _359712_37 = primSet(co, __symbolTable[138], makeNative(41, clofun1, 1, 0));
Obj _359736_37 = primSet(co, __symbolTable[91], makeNative(37, clofun1, 1, 0));
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
Obj _359738_37 = __arg1;
Obj _359758_37 = primSet(co, __symbolTable[88], makeNative(33, clofun1, 1, 0));
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
Obj _359760_37 = __arg1;
Obj _359774_37 = primSet(co, __symbolTable[85], makeNative(26, clofun1, 2, 0));
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
Obj _359777_37 = __arg1;
Obj _359806_37 = primSet(co, __symbolTable[83], makeNative(19, clofun1, 4, 0));
Obj _359807_37 = primSet(co, __symbolTable[80], makeNative(18, clofun1, 2, 0));
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
Obj _359827_37 = __arg1;
Obj _359833_37 = primSet(co, __symbolTable[76], makeNative(5, clofun1, 2, 0));
Obj _359845_37 = primSet(co, __symbolTable[71], makeNative(47, clofun0, 3, 0));
Obj _359846_37 = makeCons(makeCString("primSet"), Nil);
Obj _359847_37 = makeCons(MAKE_NUMBER(2), _359846_37);
Obj _359848_37 = makeCons(__symbolTable[68], _359847_37);
Obj _359849_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _359850_37 = makeCons(MAKE_NUMBER(1), _359849_37);
Obj _359851_37 = makeCons(__symbolTable[115], _359850_37);
Obj _359852_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _359853_37 = makeCons(MAKE_NUMBER(1), _359852_37);
Obj _359854_37 = makeCons(__symbolTable[114], _359853_37);
Obj _359855_37 = makeCons(makeCString("makeCons"), Nil);
Obj _359856_37 = makeCons(MAKE_NUMBER(2), _359855_37);
Obj _359857_37 = makeCons(__symbolTable[152], _359856_37);
Obj _359858_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _359859_37 = makeCons(MAKE_NUMBER(1), _359858_37);
Obj _359860_37 = makeCons(__symbolTable[116], _359859_37);
Obj _359861_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _359862_37 = makeCons(MAKE_NUMBER(2), _359861_37);
Obj _359863_37 = makeCons(__symbolTable[67], _359862_37);
Obj _359864_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _359865_37 = makeCons(MAKE_NUMBER(2), _359864_37);
Obj _359866_37 = makeCons(__symbolTable[66], _359865_37);
Obj _359867_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _359868_37 = makeCons(MAKE_NUMBER(2), _359867_37);
Obj _359869_37 = makeCons(__symbolTable[65], _359868_37);
Obj _359870_37 = makeCons(makeCString("primDiv"), Nil);
Obj _359871_37 = makeCons(MAKE_NUMBER(2), _359870_37);
Obj _359872_37 = makeCons(__symbolTable[64], _359871_37);
Obj _359873_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _359874_37 = makeCons(MAKE_NUMBER(2), _359873_37);
Obj _359875_37 = makeCons(__symbolTable[113], _359874_37);
Obj _359876_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _359877_37 = makeCons(MAKE_NUMBER(2), _359876_37);
Obj _359878_37 = makeCons(__symbolTable[63], _359877_37);
Obj _359879_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _359880_37 = makeCons(MAKE_NUMBER(2), _359879_37);
Obj _359881_37 = makeCons(__symbolTable[62], _359880_37);
Obj _359882_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _359883_37 = makeCons(MAKE_NUMBER(0), _359882_37);
Obj _359884_37 = makeCons(__symbolTable[61], _359883_37);
Obj _359885_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _359886_37 = makeCons(MAKE_NUMBER(1), _359885_37);
Obj _359887_37 = makeCons(__symbolTable[60], _359886_37);
Obj _359888_37 = makeCons(makeCString("primNot"), Nil);
Obj _359889_37 = makeCons(MAKE_NUMBER(1), _359888_37);
Obj _359890_37 = makeCons(__symbolTable[59], _359889_37);
Obj _359891_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _359892_37 = makeCons(MAKE_NUMBER(1), _359891_37);
Obj _359893_37 = makeCons(__symbolTable[58], _359892_37);
Obj _359894_37 = makeCons(makeCString("primIsString"), Nil);
Obj _359895_37 = makeCons(MAKE_NUMBER(1), _359894_37);
Obj _359896_37 = makeCons(__symbolTable[57], _359895_37);
Obj _359897_37 = makeCons(_359896_37, Nil);
Obj _359898_37 = makeCons(_359893_37, _359897_37);
Obj _359899_37 = makeCons(_359890_37, _359898_37);
Obj _359900_37 = makeCons(_359887_37, _359899_37);
Obj _359901_37 = makeCons(_359884_37, _359900_37);
Obj _359902_37 = makeCons(_359881_37, _359901_37);
Obj _359903_37 = makeCons(_359878_37, _359902_37);
Obj _359904_37 = makeCons(_359875_37, _359903_37);
Obj _359905_37 = makeCons(_359872_37, _359904_37);
Obj _359906_37 = makeCons(_359869_37, _359905_37);
Obj _359907_37 = makeCons(_359866_37, _359906_37);
Obj _359908_37 = makeCons(_359863_37, _359907_37);
Obj _359909_37 = makeCons(_359860_37, _359908_37);
Obj _359910_37 = makeCons(_359857_37, _359909_37);
Obj _359911_37 = makeCons(_359854_37, _359910_37);
Obj _359912_37 = makeCons(_359851_37, _359911_37);
Obj _359913_37 = makeCons(_359848_37, _359912_37);
Obj _359914_37 = primSet(co, __symbolTable[69], _359913_37);
Obj _359929_37 = primSet(co, __symbolTable[56], makeNative(45, clofun0, 2, 0));
Obj _359933_37 = primSet(co, __symbolTable[55], makeNative(42, clofun0, 1, 0));
Obj _3510111_37 = primSet(co, __symbolTable[93], makeNative(16, clofun0, 4, 0));
Obj _3510112_37 = makeCons(__symbolTable[98], Nil);
Obj _3510113_37 = makeCons(__symbolTable[99], _3510112_37);
Obj _3510114_37 = makeCons(__symbolTable[101], _3510113_37);
Obj _3510115_37 = makeCons(__symbolTable[132], _3510114_37);
Obj _3510116_37 = makeCons(__symbolTable[138], _3510115_37);
Obj _3510117_37 = makeCons(__symbolTable[147], _3510116_37);
Obj _3510118_37 = makeCons(__symbolTable[149], _3510117_37);
Obj _3510119_37 = makeCons(__symbolTable[39], _3510118_37);
Obj _3510120_37 = makeCons(__symbolTable[40], _3510119_37);
Obj _3510121_37 = makeCons(__symbolTable[41], _3510120_37);
Obj _3510122_37 = makeCons(__symbolTable[81], _3510121_37);
Obj _3510123_37 = makeCons(__symbolTable[42], _3510122_37);
Obj _3510124_37 = makeCons(__symbolTable[43], _3510123_37);
Obj _3510125_37 = makeCons(__symbolTable[70], _3510124_37);
Obj _3510126_37 = makeCons(__symbolTable[44], _3510125_37);
Obj _3510127_37 = makeCons(__symbolTable[45], _3510126_37);
Obj _3510128_37 = makeCons(__symbolTable[46], _3510127_37);
Obj _3510129_37 = makeCons(__symbolTable[47], _3510128_37);
Obj _3510130_37 = makeCons(__symbolTable[48], _3510129_37);
Obj _3510131_37 = makeCons(__symbolTable[49], _3510130_37);
Obj _3510132_37 = makeCons(__symbolTable[50], _3510131_37);
Obj _3510133_37 = makeCons(__symbolTable[51], _3510132_37);
Obj _3510134_37 = makeCons(__symbolTable[52], _3510133_37);
Obj _3510135_37 = makeCons(__symbolTable[72], _3510134_37);
Obj _3510136_37 = makeCons(__symbolTable[74], _3510135_37);
Obj _3510137_37 = makeCons(__symbolTable[73], _3510136_37);
Obj _3510138_37 = makeCons(__symbolTable[161], _3510137_37);
Obj _3510139_37 = makeCons(__symbolTable[54], _3510138_37);
Obj _3510140_37 = makeCons(__symbolTable[121], _3510139_37);
Obj _3510141_37 = makeCons(__symbolTable[131], _3510140_37);
Obj _3510142_37 = makeCons(__symbolTable[151], _3510141_37);
Obj _3510143_37 = makeCons(__symbolTable[154], _3510142_37);
Obj _3510144_37 = makeCons(__symbolTable[155], _3510143_37);
Obj _3510145_37 = makeCons(__symbolTable[156], _3510144_37);
Obj _3510146_37 = makeCons(__symbolTable[157], _3510145_37);
Obj _3510147_37 = makeCons(__symbolTable[158], _3510146_37);
Obj _3510148_37 = makeCons(__symbolTable[159], _3510147_37);
Obj _3510149_37 = makeCons(__symbolTable[160], _3510148_37);
Obj _3510150_37 = primSet(co, __symbolTable[53], _3510149_37);
Obj _3510151_37 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj _3510152_37 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj _3510153_37 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj _3510154_37 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj _3510155_37 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj _3510156_37 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj _3510157_37 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj _3510158_37 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj _3510159_37 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj _3510160_37 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj _3510161_37 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj _3510162_37 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj _3510163_37 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj _3510164_37 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj _3510165_37 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj _3510166_37 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj _3510167_37 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj _3510168_37 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj _3510169_37 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj _3510170_37 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj _3510171_37 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj _3510172_37 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj _3510173_37 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj _3510174_37 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj _3510175_37 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj _3510176_37 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj _3510177_37 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj _3510178_37 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj _3510179_37 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj _3510180_37 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj _3510181_37 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj _3510182_37 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj _3510183_37 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj _3510184_37 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj _3510185_37 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj _3510186_37 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj _3510187_37 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj _3510188_37 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj _3510189_37 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
__nargs = 2;
__arg1 = _3510189_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _359278_37 = __arg1;
Obj _359279_37 = __arg2;
Obj _359280_37 = __arg3;
Obj _359281_37 = co->args[4];
Obj _359302_37 = makeNative(20, clofun0, 1, 4, _359278_37, _359279_37, _359280_37, _359281_37);
pushCont(co, 17, clofun0, 2, _359281_37, _359302_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = _359281_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3510107_37 = __arg1;
Obj _359281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359302_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510107_37) {
__nargs = 2;
__arg0 = _359302_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3510108_37 = primIsString(_359281_37);
if (True == _3510108_37) {
__nargs = 2;
__arg0 = _359302_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 2, _359281_37, _359302_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[121]);
__arg1 = _359281_37;
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
Obj _3510109_37 = __arg1;
Obj _359281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359302_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510109_37) {
__nargs = 2;
__arg0 = _359302_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun0, 1, _359302_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _359281_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _3510110_37 = __arg1;
Obj _359302_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3510110_37) {
__nargs = 2;
__arg0 = _359302_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359302_37;
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
Obj _359303_37 = __arg1;
if (True == _359303_37) {
__nargs = 2;
__arg1 = closureRef(co, 3);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359283_37 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3510095_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3510095_37) {
Obj _3510096_37 = PRIM_CAR(closureRef(co, 3));
Obj _3510097_37 = PRIM_EQ(__symbolTable[139], _3510096_37);
if (True == _3510097_37) {
Obj _3510098_37 = PRIM_CDR(closureRef(co, 3));
Obj _3510099_37 = PRIM_ISCONS(_3510098_37);
if (True == _3510099_37) {
Obj _3510100_37 = PRIM_CDR(closureRef(co, 3));
Obj _3510101_37 = PRIM_CAR(_3510100_37);
Obj x = _3510101_37;
Obj _3510102_37 = PRIM_CDR(closureRef(co, 3));
Obj _3510103_37 = PRIM_CDR(_3510102_37);
Obj _3510104_37 = PRIM_EQ(Nil, _3510103_37);
if (True == _3510104_37) {
Obj _3510105_37 = makeCons(x, Nil);
Obj _3510106_37 = makeCons(__symbolTable[139], _3510105_37);
__nargs = 2;
__arg1 = _3510106_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _359283_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359283_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359283_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359283_37;
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
Obj _359934_37 = primIsSymbol(closureRef(co, 0));
if (True == _359934_37) {
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
Obj _359285_37 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3510073_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510073_37) {
Obj _3510074_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510075_37 = PRIM_EQ(__symbolTable[140], _3510074_37);
if (True == _3510075_37) {
Obj _3510076_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510077_37 = PRIM_ISCONS(_3510076_37);
if (True == _3510077_37) {
Obj _3510078_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510079_37 = PRIM_CAR(_3510078_37);
Obj args = _3510079_37;
Obj _3510080_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510081_37 = PRIM_CDR(_3510080_37);
Obj _3510082_37 = PRIM_ISCONS(_3510081_37);
if (True == _3510082_37) {
Obj _3510083_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510084_37 = PRIM_CDR(_3510083_37);
Obj _3510085_37 = PRIM_CAR(_3510084_37);
Obj body = _3510085_37;
Obj _3510086_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510087_37 = PRIM_CDR(_3510086_37);
Obj _3510088_37 = PRIM_CDR(_3510087_37);
Obj _3510089_37 = PRIM_EQ(Nil, _3510088_37);
if (True == _3510089_37) {
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
__arg0 = _359285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359285_37;
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
Obj _3510090_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3510090_37;
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
Obj _3510091_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510092_37 = makeCons(_3510091_37, Nil);
Obj _3510093_37 = makeCons(args, _3510092_37);
Obj _3510094_37 = makeCons(__symbolTable[140], _3510093_37);
__nargs = 2;
__arg1 = _3510094_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj _359286_37 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3510029_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510029_37) {
Obj _3510030_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510031_37 = PRIM_EQ(__symbolTable[90], _3510030_37);
if (True == _3510031_37) {
Obj _3510032_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510033_37 = PRIM_ISCONS(_3510032_37);
if (True == _3510033_37) {
Obj _3510034_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510035_37 = PRIM_CAR(_3510034_37);
Obj _3510036_37 = PRIM_ISCONS(_3510035_37);
if (True == _3510036_37) {
Obj _3510037_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510038_37 = PRIM_CAR(_3510037_37);
Obj _3510039_37 = PRIM_CAR(_3510038_37);
Obj _3510040_37 = PRIM_EQ(__symbolTable[81], _3510039_37);
if (True == _3510040_37) {
Obj _3510041_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510042_37 = PRIM_CAR(_3510041_37);
Obj _3510043_37 = PRIM_CDR(_3510042_37);
Obj _3510044_37 = PRIM_ISCONS(_3510043_37);
if (True == _3510044_37) {
Obj _3510045_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510046_37 = PRIM_CAR(_3510045_37);
Obj _3510047_37 = PRIM_CDR(_3510046_37);
Obj _3510048_37 = PRIM_CAR(_3510047_37);
Obj pkg = _3510048_37;
Obj _3510049_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510050_37 = PRIM_CAR(_3510049_37);
Obj _3510051_37 = PRIM_CDR(_3510050_37);
Obj _3510052_37 = PRIM_CDR(_3510051_37);
Obj _3510053_37 = PRIM_EQ(Nil, _3510052_37);
if (True == _3510053_37) {
Obj _3510054_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510055_37 = PRIM_CDR(_3510054_37);
Obj _3510056_37 = PRIM_ISCONS(_3510055_37);
if (True == _3510056_37) {
Obj _3510057_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510058_37 = PRIM_CDR(_3510057_37);
Obj _3510059_37 = PRIM_CAR(_3510058_37);
Obj y = _3510059_37;
Obj _3510060_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510061_37 = PRIM_CDR(_3510060_37);
Obj _3510062_37 = PRIM_CDR(_3510061_37);
Obj _3510063_37 = PRIM_EQ(Nil, _3510062_37);
if (True == _3510063_37) {
Obj _3510064_37 = primIsString(pkg);
if (True == _3510064_37) {
Obj _3510065_37 = makeCons(pkg, Nil);
Obj _3510066_37 = makeCons(__symbolTable[81], _3510065_37);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = _3510066_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _3510067_37 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510068_37 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, _3510067_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3510068_37;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3510069_37 = __arg1;
Obj _3510067_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510070_37 = makeCons(_3510069_37, Nil);
Obj _3510071_37 = makeCons(_3510067_37, _3510070_37);
Obj _3510072_37 = makeCons(__symbolTable[90], _3510071_37);
__nargs = 2;
__arg1 = _3510072_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj _359287_37 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3510021_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510021_37) {
Obj _3510022_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3510022_37;
Obj _3510023_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3510023_37;
Obj _359304_37 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, _359287_37);
Obj _3510027_37 = PRIM_EQ(op, __symbolTable[126]);
if (True == _3510027_37) {
__nargs = 2;
__arg0 = _359304_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3510028_37 = PRIM_EQ(op, __symbolTable[90]);
if (True == _3510028_37) {
__nargs = 2;
__arg0 = _359304_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359304_37;
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
__arg0 = _359287_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _359305_37 = __arg1;
if (True == _359305_37) {
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
Obj _3510024_37 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = _3510024_37;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3510025_37 = __arg1;
Obj _3510026_37 = makeCons(closureRef(co, 0), _3510025_37);
__nargs = 2;
__arg1 = _3510026_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _359288_37 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _359988_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359988_37) {
Obj _359989_37 = PRIM_CAR(closureRef(co, 0));
Obj _359990_37 = PRIM_EQ(__symbolTable[129], _359989_37);
if (True == _359990_37) {
Obj _359991_37 = PRIM_CDR(closureRef(co, 0));
Obj _359992_37 = PRIM_ISCONS(_359991_37);
if (True == _359992_37) {
Obj _359993_37 = PRIM_CDR(closureRef(co, 0));
Obj _359994_37 = PRIM_CAR(_359993_37);
Obj a = _359994_37;
Obj _359995_37 = PRIM_CDR(closureRef(co, 0));
Obj _359996_37 = PRIM_CDR(_359995_37);
Obj _359997_37 = PRIM_ISCONS(_359996_37);
if (True == _359997_37) {
Obj _359998_37 = PRIM_CDR(closureRef(co, 0));
Obj _359999_37 = PRIM_CDR(_359998_37);
Obj _3510000_37 = PRIM_CAR(_359999_37);
Obj b = _3510000_37;
Obj _3510001_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510002_37 = PRIM_CDR(_3510001_37);
Obj _3510003_37 = PRIM_CDR(_3510002_37);
Obj _3510004_37 = PRIM_ISCONS(_3510003_37);
if (True == _3510004_37) {
Obj _3510005_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510006_37 = PRIM_CDR(_3510005_37);
Obj _3510007_37 = PRIM_CDR(_3510006_37);
Obj _3510008_37 = PRIM_CAR(_3510007_37);
Obj c = _3510008_37;
Obj _3510009_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510010_37 = PRIM_CDR(_3510009_37);
Obj _3510011_37 = PRIM_CDR(_3510010_37);
Obj _3510012_37 = PRIM_CDR(_3510011_37);
Obj _3510013_37 = PRIM_EQ(Nil, _3510012_37);
if (True == _3510013_37) {
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
__arg0 = _359288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _3510014_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510015_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, _3510014_37, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3510015_37;
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
Obj _3510016_37 = __arg1;
Obj _3510014_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510017_37 = makeCons(_3510016_37, Nil);
Obj _3510018_37 = makeCons(_3510014_37, _3510017_37);
Obj _3510019_37 = makeCons(a, _3510018_37);
Obj _3510020_37 = makeCons(__symbolTable[129], _3510019_37);
__nargs = 2;
__arg1 = _3510020_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _359289_37 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _359962_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _359962_37) {
Obj _359963_37 = PRIM_CAR(closureRef(co, 2));
Obj _359964_37 = PRIM_EQ(__symbolTable[78], _359963_37);
if (True == _359964_37) {
Obj _359965_37 = PRIM_CDR(closureRef(co, 2));
Obj _359966_37 = PRIM_ISCONS(_359965_37);
if (True == _359966_37) {
Obj _359967_37 = PRIM_CDR(closureRef(co, 2));
Obj _359968_37 = PRIM_CAR(_359967_37);
Obj path = _359968_37;
Obj _359969_37 = PRIM_CDR(closureRef(co, 2));
Obj _359970_37 = PRIM_CDR(_359969_37);
Obj _359971_37 = PRIM_ISCONS(_359970_37);
if (True == _359971_37) {
Obj _359972_37 = PRIM_CDR(closureRef(co, 2));
Obj _359973_37 = PRIM_CDR(_359972_37);
Obj _359974_37 = PRIM_CAR(_359973_37);
Obj import = _359974_37;
Obj _359975_37 = PRIM_CDR(closureRef(co, 2));
Obj _359976_37 = PRIM_CDR(_359975_37);
Obj _359977_37 = PRIM_CDR(_359976_37);
Obj _359978_37 = PRIM_ISCONS(_359977_37);
if (True == _359978_37) {
Obj _359979_37 = PRIM_CDR(closureRef(co, 2));
Obj _359980_37 = PRIM_CDR(_359979_37);
Obj _359981_37 = PRIM_CDR(_359980_37);
Obj _359982_37 = PRIM_CAR(_359981_37);
Obj body = _359982_37;
Obj _359983_37 = PRIM_CDR(closureRef(co, 2));
Obj _359984_37 = PRIM_CDR(_359983_37);
Obj _359985_37 = PRIM_CDR(_359984_37);
Obj _359986_37 = PRIM_CDR(_359985_37);
Obj _359987_37 = PRIM_EQ(Nil, _359986_37);
if (True == _359987_37) {
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
__arg0 = _359289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _359290_37 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj _359938_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359938_37) {
Obj _359939_37 = PRIM_CAR(closureRef(co, 0));
Obj _359940_37 = PRIM_EQ(__symbolTable[133], _359939_37);
if (True == _359940_37) {
Obj _359941_37 = PRIM_CDR(closureRef(co, 0));
Obj _359942_37 = PRIM_ISCONS(_359941_37);
if (True == _359942_37) {
Obj _359943_37 = PRIM_CDR(closureRef(co, 0));
Obj _359944_37 = PRIM_CAR(_359943_37);
Obj var = _359944_37;
Obj _359945_37 = PRIM_CDR(closureRef(co, 0));
Obj _359946_37 = PRIM_CDR(_359945_37);
Obj _359947_37 = PRIM_ISCONS(_359946_37);
if (True == _359947_37) {
Obj _359948_37 = PRIM_CDR(closureRef(co, 0));
Obj _359949_37 = PRIM_CDR(_359948_37);
Obj _359950_37 = PRIM_CAR(_359949_37);
Obj val = _359950_37;
Obj _359951_37 = PRIM_CDR(closureRef(co, 0));
Obj _359952_37 = PRIM_CDR(_359951_37);
Obj _359953_37 = PRIM_CDR(_359952_37);
Obj _359954_37 = PRIM_EQ(Nil, _359953_37);
if (True == _359954_37) {
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
__arg0 = _359290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _359955_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = _359955_37;
Obj _359956_37 = makeCons(var1, Nil);
Obj _359957_37 = makeCons(__symbolTable[139], _359956_37);
pushCont(co, 37, clofun0, 1, _359957_37);
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
Obj _359958_37 = __arg1;
Obj _359957_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359959_37 = makeCons(_359958_37, Nil);
Obj _359960_37 = makeCons(_359957_37, _359959_37);
Obj _359961_37 = makeCons(__symbolTable[68], _359960_37);
__nargs = 2;
__arg1 = _359961_37;
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
Obj _359937_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = _359937_37;
__arg2 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _359935_37 = __arg1;
if (True == _359935_37) {
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
Obj _359936_37 = __arg1;
if (True == _359936_37) {
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
Obj _359930_37 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _359930_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _359931_37 = __arg1;
Obj _359932_37 = primNot(_359931_37);
__nargs = 2;
__arg1 = _359932_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj _359273_37 = __arg1;
Obj _359274_37 = __arg2;
Obj _359915_37 = PRIM_EQ(Nil, _359274_37);
if (True == _359915_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359276_37 = makeNative(46, clofun0, 0, 2, _359274_37, _359273_37);
Obj _359919_37 = PRIM_ISCONS(_359274_37);
if (True == _359919_37) {
Obj _359920_37 = PRIM_CAR(_359274_37);
Obj _359921_37 = PRIM_ISCONS(_359920_37);
if (True == _359921_37) {
Obj _359922_37 = PRIM_CAR(_359274_37);
Obj _359923_37 = PRIM_CAR(_359922_37);
Obj x = _359923_37;
Obj _359924_37 = PRIM_CAR(_359274_37);
Obj _359925_37 = PRIM_CDR(_359924_37);
Obj y = _359925_37;
Obj _359926_37 = PRIM_CDR(_359274_37);
Obj _359927_37 = PRIM_EQ(_359273_37, x);
if (True == _359927_37) {
Obj _359928_37 = makeCons(x, y);
__nargs = 2;
__arg1 = _359928_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _359276_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359276_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359276_37;
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
Obj _359916_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359916_37) {
Obj _359917_37 = PRIM_CAR(closureRef(co, 0));
Obj _359918_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _359918_37;
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
Obj _359268_37 = __arg1;
Obj _359269_37 = __arg2;
Obj _359270_37 = __arg3;
Obj _359834_37 = PRIM_EQ(Nil, _359270_37);
if (True == _359834_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = _359268_37;
__arg2 = _359269_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _359835_37 = PRIM_ISCONS(_359270_37);
if (True == _359835_37) {
Obj _359836_37 = PRIM_CAR(_359270_37);
Obj import = _359836_37;
Obj _359837_37 = PRIM_CDR(_359270_37);
Obj more = _359837_37;
pushCont(co, 48, clofun0, 4, import, _359268_37, _359269_37, more);
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
Obj _359838_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359268_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359269_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, _359268_37, _359269_37, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = _359838_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _359839_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359268_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359269_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, _359268_37, _359269_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = _359839_37;
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
Obj _359840_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359268_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359269_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = _359840_37;
pushCont(co, 1, clofun1, 4, import, _359268_37, _359269_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = _359268_37;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _359841_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359268_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359269_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _359841_37) {
pushCont(co, 2, clofun1, 1, import);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _359268_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(__symbolTable[71]);
__arg1 = _359268_37;
__arg2 = _359269_37;
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
Obj _359842_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = makeCString("#");
__arg2 = _359842_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _359843_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = import;
__arg2 = _359843_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _359844_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = _359844_37;
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
Obj _359828_37 = PRIM_EQ(ns, makeCString(""));
if (True == _359828_37) {
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
Obj _359829_37 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _359829_37) {
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
Obj _359830_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = makeCString("#");
__arg2 = _359830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _359831_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = ns;
__arg2 = _359831_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _359832_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = _359832_37;
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
Obj _359808_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = _359808_37;
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
Obj _359809_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(__symbolTable[80]);
__arg1 = _359809_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _359810_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _359810_37;
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
Obj _359811_37 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, _359811_37);
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
Obj _359814_37 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359811_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _359815_37 = makeCons(export, Nil);
Obj _359816_37 = makeCons(__symbolTable[86], _359815_37);
Obj _359817_37 = makeCons(_359816_37, Nil);
Obj _359818_37 = makeCons(__symbolTable[77], _359817_37);
Obj _359819_37 = makeCons(__symbolTable[133], _359818_37);
Obj _359820_37 = makeCons(_359819_37, body);
pushCont(co, 16, clofun1, 1, _359811_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = _359814_37;
__arg2 = _359820_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _359821_37 = __arg1;
Obj _359811_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359822_37 = makeCons(__symbolTable[89], _359821_37);
Obj _359823_37 = makeCons(_359822_37, Nil);
Obj _359824_37 = makeCons(_359811_37, _359823_37);
Obj _359825_37 = makeCons(closureRef(co, 0), _359824_37);
Obj _359826_37 = makeCons(__symbolTable[78], _359825_37);
__nargs = 2;
__arg1 = _359826_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj imp = __arg1;
Obj _359812_37 = makeCons(imp, Nil);
Obj _359813_37 = makeCons(__symbolTable[81], _359812_37);
__nargs = 2;
__arg1 = _359813_37;
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
Obj _359261_37 = __arg1;
Obj _359262_37 = __arg2;
Obj _359263_37 = __arg3;
Obj _359264_37 = co->args[4];
Obj _359265_37 = makeNative(20, clofun1, 0, 4, _359263_37, _359261_37, _359262_37, _359264_37);
Obj _359788_37 = PRIM_ISCONS(_359261_37);
if (True == _359788_37) {
Obj _359789_37 = PRIM_CAR(_359261_37);
Obj _359790_37 = PRIM_ISCONS(_359789_37);
if (True == _359790_37) {
Obj _359791_37 = PRIM_CAR(_359261_37);
Obj _359792_37 = PRIM_CAR(_359791_37);
Obj _359793_37 = PRIM_EQ(__symbolTable[81], _359792_37);
if (True == _359793_37) {
Obj _359794_37 = PRIM_CAR(_359261_37);
Obj _359795_37 = PRIM_CDR(_359794_37);
Obj _359796_37 = PRIM_ISCONS(_359795_37);
if (True == _359796_37) {
Obj _359797_37 = PRIM_CAR(_359261_37);
Obj _359798_37 = PRIM_CDR(_359797_37);
Obj _359799_37 = PRIM_CAR(_359798_37);
Obj lib = _359799_37;
Obj _359800_37 = PRIM_CAR(_359261_37);
Obj _359801_37 = PRIM_CDR(_359800_37);
Obj _359802_37 = PRIM_CDR(_359801_37);
Obj _359803_37 = PRIM_EQ(Nil, _359802_37);
if (True == _359803_37) {
Obj _359804_37 = PRIM_CDR(_359261_37);
Obj rest = _359804_37;
Obj _359805_37 = makeCons(lib, _359262_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = _359805_37;
__arg3 = _359263_37;
co->args[4] = _359264_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _359265_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359265_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359265_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359265_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359265_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _359266_37 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj _359779_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _359779_37) {
Obj _359780_37 = PRIM_CAR(closureRef(co, 1));
Obj _359781_37 = PRIM_ISCONS(_359780_37);
if (True == _359781_37) {
Obj _359782_37 = PRIM_CAR(closureRef(co, 1));
Obj _359783_37 = PRIM_CAR(_359782_37);
Obj _359784_37 = PRIM_EQ(__symbolTable[82], _359783_37);
if (True == _359784_37) {
Obj _359785_37 = PRIM_CAR(closureRef(co, 1));
Obj _359786_37 = PRIM_CDR(_359785_37);
Obj more = _359786_37;
Obj _359787_37 = PRIM_CDR(closureRef(co, 1));
Obj rest = _359787_37;
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
__arg0 = _359266_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359266_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359266_37;
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
Obj _359778_37 = __arg1;
__nargs = 4;
__arg0 = closureRef(co, 0);
__arg1 = _359778_37;
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
Obj _359775_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, _359775_37);
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
Obj _359776_37 = __arg1;
Obj _359775_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _359775_37;
__arg2 = _359776_37;
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
Obj _359761_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _359761_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _359762_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _359762_37) {
Obj _359763_37 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, _359763_37, fn);
__nargs = 2;
__arg0 = globalRef(__symbolTable[160]);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _359768_37 = PRIM_CAR(arglist);
Obj _359769_37 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, _359768_37, fn);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = fn;
__arg2 = _359769_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _359770_37 = __arg1;
Obj _359768_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359771_37 = makeCons(_359770_37, Nil);
Obj _359772_37 = makeCons(_359768_37, _359771_37);
Obj _359773_37 = makeCons(fn, _359772_37);
__nargs = 2;
__arg1 = _359773_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj _359764_37 = __arg1;
Obj _359763_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359765_37 = makeCons(_359764_37, Nil);
Obj _359766_37 = makeCons(_359763_37, _359765_37);
Obj _359767_37 = makeCons(fn, _359766_37);
__nargs = 2;
__arg1 = _359767_37;
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
Obj _359759_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = _359759_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _359256_37 = __arg1;
Obj _359739_37 = primIsSymbol(_359256_37);
if (True == _359739_37) {
Obj _359740_37 = makeCons(_359256_37, Nil);
Obj _359741_37 = makeCons(__symbolTable[139], _359740_37);
__nargs = 2;
__arg1 = _359741_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359258_37 = makeNative(34, clofun1, 0, 1, _359256_37);
Obj _359748_37 = PRIM_ISCONS(_359256_37);
if (True == _359748_37) {
Obj _359749_37 = PRIM_CAR(_359256_37);
Obj _359750_37 = PRIM_EQ(__symbolTable[87], _359749_37);
if (True == _359750_37) {
Obj _359751_37 = PRIM_CDR(_359256_37);
Obj _359752_37 = PRIM_ISCONS(_359751_37);
if (True == _359752_37) {
Obj _359753_37 = PRIM_CDR(_359256_37);
Obj _359754_37 = PRIM_CAR(_359753_37);
Obj x = _359754_37;
Obj _359755_37 = PRIM_CDR(_359256_37);
Obj _359756_37 = PRIM_CDR(_359755_37);
Obj _359757_37 = PRIM_EQ(Nil, _359756_37);
if (True == _359757_37) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _359258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359258_37;
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
Obj _359742_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359742_37) {
Obj _359743_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _359743_37;
Obj _359744_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _359744_37;
Obj _359745_37 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[147]);
__arg1 = globalRef(__symbolTable[88]);
__arg2 = _359745_37;
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
Obj _359746_37 = __arg1;
Obj _359747_37 = makeCons(__symbolTable[135], _359746_37);
__nargs = 2;
__arg1 = _359747_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj exp = __arg1;
Obj _359737_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[91]);
__arg1 = _359737_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _359252_37 = __arg1;
Obj _359253_37 = makeNative(38, clofun1, 0, 1, _359252_37);
Obj _359732_37 = PRIM_ISCONS(_359252_37);
if (True == _359732_37) {
Obj _359733_37 = PRIM_CAR(_359252_37);
Obj x = _359733_37;
Obj _359734_37 = PRIM_CDR(_359252_37);
Obj _359735_37 = PRIM_EQ(Nil, _359734_37);
if (True == _359735_37) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _359253_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359253_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _359254_37 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj _359720_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359720_37) {
Obj _359721_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _359721_37;
Obj _359722_37 = PRIM_CDR(closureRef(co, 0));
Obj _359723_37 = PRIM_ISCONS(_359722_37);
if (True == _359723_37) {
Obj _359724_37 = PRIM_CDR(closureRef(co, 0));
Obj _359725_37 = PRIM_CAR(_359724_37);
Obj y = _359725_37;
Obj _359726_37 = PRIM_CDR(closureRef(co, 0));
Obj _359727_37 = PRIM_CDR(_359726_37);
Obj _359728_37 = PRIM_EQ(Nil, _359727_37);
if (True == _359728_37) {
Obj _359729_37 = makeCons(y, Nil);
Obj _359730_37 = makeCons(x, _359729_37);
Obj _359731_37 = makeCons(__symbolTable[90], _359730_37);
__nargs = 2;
__arg1 = _359731_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _359254_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359254_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359254_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _359713_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359713_37) {
Obj _359714_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _359714_37;
Obj _359715_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _359715_37;
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
Obj _359716_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359717_37 = makeCons(_359716_37, Nil);
Obj _359718_37 = makeCons(x, _359717_37);
Obj _359719_37 = makeCons(__symbolTable[90], _359718_37);
__nargs = 2;
__arg1 = _359719_37;
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
Obj _359710_37 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[94]);
__arg1 = _359710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _359711_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[92]);
__arg1 = _359711_37;
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
Obj _359695_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[104]);
__arg1 = _359695_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _359696_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = _359696_37;
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
Obj _359697_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = _359697_37;
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
Obj _359698_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = _359698_37;
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
Obj _359699_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359700_37 = makeCons(__symbolTable[135], args);
Obj _359701_37 = makeCons(_359700_37, body);
Obj _359702_37 = makeCons(__symbolTable[107], _359701_37);
Obj _359703_37 = makeCons(_359702_37, Nil);
Obj _359704_37 = makeCons(args, _359703_37);
Obj _359705_37 = makeCons(_359699_37, _359704_37);
Obj _359706_37 = makeCons(__symbolTable[134], _359705_37);
__nargs = 2;
__arg1 = _359706_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj n = __arg1;
Obj _359689_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _359689_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359690_37 = primGenSym();
Obj _359691_37 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, _359690_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = _359691_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _359692_37 = __arg1;
Obj _359690_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359693_37 = makeCons(_359690_37, _359692_37);
__nargs = 2;
__arg1 = _359693_37;
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
Obj _359678_37 = __arg1;
Obj pats = _359678_37;
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
Obj _359680_37 = __arg1;
Obj counts = _359680_37;
Obj _359681_37 = PRIM_CAR(counts);
Obj n = _359681_37;
Obj _359684_37 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(__symbolTable[99]);
__arg1 = makeNative(9, clofun2, 1, 1, n);
__arg2 = _359684_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _359685_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _359685_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _359686_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359687_37 = primNot(_359686_37);
if (True == _359687_37) {
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
Obj _359682_37 = PRIM_EQ(closureRef(co, 0), x);
Obj _359683_37 = primNot(_359682_37);
__nargs = 2;
__arg1 = _359683_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x = __arg1;
Obj _359679_37 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[101]);
__arg1 = _359679_37;
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
Obj _359672_37 = PRIM_EQ(l1, Nil);
if (True == _359672_37) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359673_37 = PRIM_CAR(l1);
Obj _359674_37 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, _359673_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[98]);
__arg1 = _359674_37;
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
Obj _359675_37 = __arg1;
Obj _359673_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359676_37 = makeCons(_359673_37, _359675_37);
__nargs = 2;
__arg1 = _359676_37;
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
Obj _359663_37 = PRIM_ISCONS(l);
if (True == _359663_37) {
Obj _359664_37 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _359664_37;
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
Obj _359665_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _359665_37) {
Obj _359666_37 = PRIM_CAR(l);
Obj _359667_37 = makeCons(_359666_37, res);
Obj _359668_37 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = _359667_37;
__arg2 = fn;
__arg3 = _359668_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _359669_37 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = res;
__arg2 = fn;
__arg3 = _359669_37;
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
Obj _359658_37 = PRIM_EQ(l, Nil);
if (True == _359658_37) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359659_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _359660_37 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = _359659_37;
__arg2 = _359660_37;
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
Obj _359653_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _359653_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _359654_37 = PRIM_CAR(rules);
Obj _359655_37 = makeCons(_359654_37, res);
pushCont(co, 20, clofun2, 1, _359655_37);
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
Obj _359656_37 = __arg1;
Obj _359655_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = _359655_37;
__arg2 = _359656_37;
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
Obj _359600_37 = PRIM_EQ(Nil, input);
if (True == _359600_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[149]);
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _359249_37 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj _359618_37 = PRIM_ISCONS(input);
if (True == _359618_37) {
Obj _359619_37 = PRIM_CAR(input);
Obj _359620_37 = PRIM_EQ(__symbolTable[105], _359619_37);
if (True == _359620_37) {
Obj _359621_37 = PRIM_CDR(input);
Obj _359622_37 = PRIM_ISCONS(_359621_37);
if (True == _359622_37) {
Obj _359623_37 = PRIM_CDR(input);
Obj _359624_37 = PRIM_CAR(_359623_37);
Obj act = _359624_37;
Obj _359625_37 = PRIM_CDR(input);
Obj _359626_37 = PRIM_CDR(_359625_37);
Obj _359627_37 = PRIM_ISCONS(_359626_37);
if (True == _359627_37) {
Obj _359628_37 = PRIM_CDR(input);
Obj _359629_37 = PRIM_CDR(_359628_37);
Obj _359630_37 = PRIM_CAR(_359629_37);
Obj _359631_37 = PRIM_EQ(__symbolTable[110], _359630_37);
if (True == _359631_37) {
Obj _359632_37 = PRIM_CDR(input);
Obj _359633_37 = PRIM_CDR(_359632_37);
Obj _359634_37 = PRIM_CDR(_359633_37);
Obj _359635_37 = PRIM_ISCONS(_359634_37);
if (True == _359635_37) {
Obj _359636_37 = PRIM_CDR(input);
Obj _359637_37 = PRIM_CDR(_359636_37);
Obj _359638_37 = PRIM_CDR(_359637_37);
Obj _359639_37 = PRIM_CAR(_359638_37);
Obj pred = _359639_37;
Obj _359640_37 = PRIM_CDR(input);
Obj _359641_37 = PRIM_CDR(_359640_37);
Obj _359642_37 = PRIM_CDR(_359641_37);
Obj _359643_37 = PRIM_CDR(_359642_37);
Obj remain = _359643_37;
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
__arg0 = _359249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359249_37;
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
Obj _359644_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _359645_37 = makeCons(__symbolTable[135], _359644_37);
Obj pat = _359645_37;
Obj _359646_37 = makeCons(act, Nil);
Obj _359647_37 = makeCons(pred, _359646_37);
Obj _359648_37 = makeCons(__symbolTable[110], _359647_37);
Obj _359649_37 = makeCons(pat, result);
Obj _359650_37 = makeCons(_359648_37, _359649_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _359650_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _359250_37 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _359605_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359605_37) {
Obj _359606_37 = PRIM_CAR(closureRef(co, 0));
Obj _359607_37 = PRIM_EQ(__symbolTable[105], _359606_37);
if (True == _359607_37) {
Obj _359608_37 = PRIM_CDR(closureRef(co, 0));
Obj _359609_37 = PRIM_ISCONS(_359608_37);
if (True == _359609_37) {
Obj _359610_37 = PRIM_CDR(closureRef(co, 0));
Obj _359611_37 = PRIM_CAR(_359610_37);
Obj act = _359611_37;
Obj _359612_37 = PRIM_CDR(closureRef(co, 0));
Obj _359613_37 = PRIM_CDR(_359612_37);
Obj remain = _359613_37;
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
__arg0 = _359250_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359250_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _359250_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _359614_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359615_37 = makeCons(__symbolTable[135], _359614_37);
Obj pat = _359615_37;
Obj _359616_37 = makeCons(pat, closureRef(co, 2));
Obj _359617_37 = makeCons(act, _359616_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _359617_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _359601_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _359601_37) {
Obj _359602_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _359602_37;
Obj _359603_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _359603_37;
Obj _359604_37 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = y;
__arg2 = _359604_37;
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
Obj _359585_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[138]);
__arg1 = _359585_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _359586_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = _359586_37;
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
Obj _359587_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = _359587_37;
Obj _359300_37 = makeNative(32, clofun2, 1, 2, value, rules);
Obj _359594_37 = PRIM_ISCONS(value);
if (True == _359594_37) {
Obj _359595_37 = PRIM_CAR(value);
Obj _359596_37 = PRIM_EQ(__symbolTable[152], _359595_37);
Obj _359597_37 = primNot(_359596_37);
if (True == _359597_37) {
__nargs = 2;
__arg0 = _359300_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359300_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _359300_37;
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
Obj _359301_37 = __arg1;
if (True == _359301_37) {
Obj _359588_37 = primGenSym();
Obj val = _359588_37;
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
Obj _359589_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359590_37 = makeCons(_359589_37, Nil);
Obj _359591_37 = makeCons(closureRef(co, 0), _359590_37);
Obj _359592_37 = makeCons(val, _359591_37);
Obj _359593_37 = makeCons(__symbolTable[129], _359592_37);
__nargs = 2;
__arg1 = _359593_37;
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
Obj _359563_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _359563_37) {
Obj _359564_37 = makeCons(makeCString("no match-help found!"), Nil);
Obj _359565_37 = makeCons(__symbolTable[127], _359564_37);
__nargs = 2;
__arg1 = _359565_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359298_37 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, _359298_37);
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
Obj _359581_37 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359298_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _359581_37) {
Obj _359582_37 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, _359298_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[151]);
__arg1 = _359582_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359298_37;
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
Obj _359583_37 = __arg1;
Obj _359298_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _359583_37) {
__nargs = 2;
__arg0 = _359298_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359298_37;
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
Obj _359299_37 = __arg1;
if (True == _359299_37) {
Obj _359566_37 = PRIM_CAR(closureRef(co, 1));
Obj pat = _359566_37;
Obj _359567_37 = primGenSym();
Obj cc = _359567_37;
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
Obj _359568_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = _359568_37;
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
Obj _359569_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = _359569_37;
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
Obj _359570_37 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _359570_37;
Obj _359571_37 = PRIM_CDR(closureRef(co, 1));
Obj _359572_37 = PRIM_CDR(_359571_37);
pushCont(co, 42, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[109]);
__arg1 = closureRef(co, 0);
__arg2 = _359572_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _359573_37 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _359573_37;
Obj _359574_37 = makeCons(rest, Nil);
Obj _359575_37 = makeCons(Nil, _359574_37);
Obj _359576_37 = makeCons(__symbolTable[140], _359575_37);
Obj _359577_37 = makeCons(curr, Nil);
Obj _359578_37 = makeCons(_359576_37, _359577_37);
Obj _359579_37 = makeCons(cc, _359578_37);
Obj _359580_37 = makeCons(__symbolTable[129], _359579_37);
__nargs = 2;
__arg1 = _359580_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _359550_37 = PRIM_CDR(rules);
Obj _359551_37 = PRIM_CAR(_359550_37);
Obj action = _359551_37;
Obj _359296_37 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, _359296_37);
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
Obj _359559_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359296_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _359559_37) {
Obj _359560_37 = PRIM_CAR(action);
Obj _359561_37 = PRIM_EQ(_359560_37, __symbolTable[110]);
if (True == _359561_37) {
__nargs = 2;
__arg0 = _359296_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359296_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _359296_37;
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
Obj _359297_37 = __arg1;
if (True == _359297_37) {
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
Obj _359552_37 = __arg1;
pushCont(co, 47, clofun2, 1, _359552_37);
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
Obj _359553_37 = __arg1;
Obj _359552_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359554_37 = makeCons(closureRef(co, 0), Nil);
Obj _359555_37 = makeCons(_359554_37, Nil);
Obj _359556_37 = makeCons(_359553_37, _359555_37);
Obj _359557_37 = makeCons(_359552_37, _359556_37);
Obj _359558_37 = makeCons(__symbolTable[126], _359557_37);
__nargs = 2;
__arg1 = _359558_37;
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
Obj _359520_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _359520_37) {
Obj _359521_37 = PRIM_EQ(pat, expr);
if (True == _359521_37) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359522_37 = makeCons(expr, Nil);
Obj _359523_37 = makeCons(pat, _359522_37);
Obj _359524_37 = makeCons(__symbolTable[113], _359523_37);
Obj _359525_37 = makeCons(cc, Nil);
Obj _359526_37 = makeCons(_359525_37, Nil);
Obj _359527_37 = makeCons(body, _359526_37);
Obj _359528_37 = makeCons(_359524_37, _359527_37);
Obj _359529_37 = makeCons(__symbolTable[126], _359528_37);
__nargs = 2;
__arg1 = _359529_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _359530_37 = primIsSymbol(pat);
if (True == _359530_37) {
Obj _359531_37 = makeCons(body, Nil);
Obj _359532_37 = makeCons(expr, _359531_37);
Obj _359533_37 = makeCons(pat, _359532_37);
Obj _359534_37 = makeCons(__symbolTable[129], _359533_37);
__nargs = 2;
__arg1 = _359534_37;
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
Obj _359535_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _359535_37) {
Obj _359536_37 = PRIM_CAR(pat);
Obj _359537_37 = PRIM_EQ(_359536_37, __symbolTable[139]);
if (True == _359537_37) {
Obj _359538_37 = makeCons(expr, Nil);
Obj _359539_37 = makeCons(pat, _359538_37);
Obj _359540_37 = makeCons(__symbolTable[113], _359539_37);
Obj _359541_37 = makeCons(cc, Nil);
Obj _359542_37 = makeCons(_359541_37, Nil);
Obj _359543_37 = makeCons(body, _359542_37);
Obj _359544_37 = makeCons(_359540_37, _359543_37);
Obj _359545_37 = makeCons(__symbolTable[126], _359544_37);
__nargs = 2;
__arg1 = _359545_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359546_37 = PRIM_CAR(pat);
Obj _359547_37 = PRIM_EQ(_359546_37, __symbolTable[152]);
if (True == _359547_37) {
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
Obj _359548_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[127]);
__arg1 = _359548_37;
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
Obj _359517_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _359517_37) {
Obj _359518_37 = primIsSymbol(x);
Obj _359519_37 = primNot(_359518_37);
if (True == _359519_37) {
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
Obj _359495_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = _359495_37;
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
Obj _359496_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = _359496_37;
Obj _359294_37 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj _359513_37 = PRIM_ISCONS(expr);
if (True == _359513_37) {
Obj _359514_37 = PRIM_CAR(expr);
Obj _359515_37 = PRIM_EQ(_359514_37, __symbolTable[152]);
if (True == _359515_37) {
__nargs = 2;
__arg0 = _359294_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359294_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _359294_37;
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
Obj _359295_37 = __arg1;
if (True == _359295_37) {
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
Obj _359500_37 = makeCons(closureRef(co, 2), Nil);
Obj _359501_37 = makeCons(__symbolTable[116], _359500_37);
Obj _359502_37 = makeCons(closureRef(co, 2), Nil);
Obj _359503_37 = makeCons(__symbolTable[115], _359502_37);
Obj _359504_37 = makeCons(closureRef(co, 2), Nil);
Obj _359505_37 = makeCons(__symbolTable[114], _359504_37);
pushCont(co, 8, clofun3, 2, _359503_37, _359501_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = _359505_37;
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
Obj _359506_37 = __arg1;
Obj _359503_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359501_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, _359501_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = _359503_37;
__arg3 = _359506_37;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _359507_37 = __arg1;
Obj _359501_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359508_37 = makeCons(closureRef(co, 4), Nil);
Obj _359509_37 = makeCons(_359508_37, Nil);
Obj _359510_37 = makeCons(_359507_37, _359509_37);
Obj _359511_37 = makeCons(_359501_37, _359510_37);
Obj _359512_37 = makeCons(__symbolTable[126], _359511_37);
__nargs = 2;
__arg1 = _359512_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _359497_37 = __arg1;
Obj e1 = _359497_37;
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
Obj _359498_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = _359498_37;
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
Obj _359499_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = _359499_37;
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
Obj _359493_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[120]);
__arg1 = _359493_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj pat = __arg1;
Obj _359483_37 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _359483_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _359484_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _359484_37) {
Obj _359485_37 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = _359485_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359486_37 = PRIM_CAR(pat);
Obj _359487_37 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, _359486_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[120]);
__arg1 = _359487_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _359488_37 = __arg1;
Obj _359486_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359489_37 = makeCons(_359488_37, Nil);
Obj _359490_37 = makeCons(_359486_37, _359489_37);
Obj _359491_37 = makeCons(__symbolTable[152], _359490_37);
__nargs = 2;
__arg1 = _359491_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj _359480_37 = PRIM_EQ(x, True);
if (True == _359480_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359481_37 = PRIM_EQ(x, False);
if (True == _359481_37) {
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
Obj _359478_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[123]);
__arg1 = _359478_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj l = __arg1;
Obj _359466_37 = PRIM_EQ(Nil, l);
if (True == _359466_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359467_37 = PRIM_CAR(l);
Obj _359468_37 = PRIM_EQ(_359467_37, False);
if (True == _359468_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359469_37 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[123]);
__arg1 = _359469_37;
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
Obj _359470_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _359470_37;
Obj _359471_37 = PRIM_EQ(more, False);
if (True == _359471_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359472_37 = PRIM_CAR(l);
Obj _359473_37 = makeCons(False, Nil);
Obj _359474_37 = makeCons(more, _359473_37);
Obj _359475_37 = makeCons(_359472_37, _359474_37);
Obj _359476_37 = makeCons(__symbolTable[126], _359475_37);
__nargs = 2;
__arg1 = _359476_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label21:
{
Obj exp = __arg1;
Obj _359464_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[125]);
__arg1 = _359464_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj l = __arg1;
Obj _359452_37 = PRIM_EQ(l, Nil);
if (True == _359452_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359453_37 = PRIM_CAR(l);
Obj _359454_37 = PRIM_EQ(_359453_37, True);
if (True == _359454_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359455_37 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[125]);
__arg1 = _359455_37;
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
Obj _359456_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _359456_37;
Obj _359457_37 = PRIM_EQ(more, True);
if (True == _359457_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359458_37 = PRIM_CAR(l);
Obj _359459_37 = makeCons(more, Nil);
Obj _359460_37 = makeCons(True, _359459_37);
Obj _359461_37 = makeCons(_359458_37, _359460_37);
Obj _359462_37 = makeCons(__symbolTable[126], _359461_37);
__nargs = 2;
__arg1 = _359462_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label24:
{
Obj exp = __arg1;
Obj _359438_37 = PRIM_CDR(exp);
Obj _359439_37 = PRIM_EQ(Nil, _359438_37);
if (True == _359439_37) {
Obj _359440_37 = makeCons(makeCString("no cond match"), Nil);
Obj _359441_37 = makeCons(__symbolTable[127], _359440_37);
__nargs = 2;
__arg1 = _359441_37;
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
Obj _359442_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _359442_37;
Obj _359443_37 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, _359443_37);
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
Obj _359444_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359443_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, _359444_37, _359443_37);
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
Obj _359445_37 = __arg1;
Obj _359444_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359443_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359446_37 = makeCons(__symbolTable[128], _359445_37);
Obj _359447_37 = makeCons(_359446_37, Nil);
Obj _359448_37 = makeCons(_359444_37, _359447_37);
Obj _359449_37 = makeCons(_359443_37, _359448_37);
Obj _359450_37 = makeCons(__symbolTable[126], _359449_37);
__nargs = 2;
__arg1 = _359450_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj exp = __arg1;
Obj _359436_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = _359436_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
Obj _359424_37 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[161]);
__arg1 = _359424_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _359425_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _359425_37) {
Obj _359426_37 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = _359426_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359427_37 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, _359427_37);
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
Obj _359428_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359427_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, _359428_37, _359427_37);
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
Obj _359429_37 = __arg1;
Obj _359428_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359427_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, _359428_37, _359427_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = _359429_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _359430_37 = __arg1;
Obj _359428_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359427_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359431_37 = makeCons(_359430_37, Nil);
Obj _359432_37 = makeCons(_359428_37, _359431_37);
Obj _359433_37 = makeCons(_359427_37, _359432_37);
Obj _359434_37 = makeCons(__symbolTable[129], _359433_37);
__nargs = 2;
__arg1 = _359434_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x = __arg1;
Obj _359421_37 = PRIM_ISCONS(x);
Obj _359422_37 = primNot(_359421_37);
__nargs = 2;
__arg1 = _359422_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _359416_37 = PRIM_ISCONS(l);
if (True == _359416_37) {
Obj _359417_37 = PRIM_CAR(l);
Obj _359418_37 = PRIM_EQ(_359417_37, x);
if (True == _359418_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359419_37 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = x;
__arg2 = _359419_37;
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
Obj _359406_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, _359406_37);
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
Obj _359407_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359406_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, _359407_37, _359406_37);
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
Obj _359408_37 = __arg1;
Obj _359407_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359406_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359409_37 = makeCons(_359408_37, Nil);
Obj _359410_37 = makeCons(_359407_37, _359409_37);
Obj _359411_37 = makeCons(__symbolTable[140], _359410_37);
Obj _359412_37 = makeCons(_359411_37, Nil);
Obj _359413_37 = makeCons(_359406_37, _359412_37);
Obj _359414_37 = makeCons(__symbolTable[133], _359413_37);
__nargs = 2;
__arg1 = _359414_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj exp = __arg1;
Obj _359404_37 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[153]);
__arg1 = _359404_37;
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
Obj _359392_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359393_37 = makeCons(_359392_37, Nil);
Obj _359394_37 = makeCons(__symbolTable[139], _359393_37);
pushCont(co, 43, clofun3, 2, exp, _359394_37);
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
Obj _359395_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359394_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, _359395_37, _359394_37);
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
Obj _359396_37 = __arg1;
Obj _359395_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359394_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _359397_37 = makeCons(_359395_37, _359396_37);
Obj _359398_37 = makeCons(__symbolTable[140], _359397_37);
Obj _359399_37 = makeCons(_359398_37, Nil);
Obj _359400_37 = makeCons(_359394_37, _359399_37);
Obj _359401_37 = makeCons(__symbolTable[144], _359400_37);
__nargs = 2;
__arg1 = _359401_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
Obj _359374_37 = PRIM_ISCONS(exp);
if (True == _359374_37) {
Obj _359375_37 = PRIM_CAR(exp);
Obj _359376_37 = PRIM_EQ(_359375_37, globalRef(__symbolTable[145]));
if (True == _359376_37) {
Obj _359377_37 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = _359377_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359378_37 = PRIM_CAR(exp);
Obj _359379_37 = PRIM_EQ(_359378_37, __symbolTable[140]);
if (True == _359379_37) {
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
Obj _359386_37 = PRIM_CAR(exp);
Obj _359387_37 = PRIM_EQ(_359386_37, __symbolTable[139]);
if (True == _359387_37) {
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
Obj _359389_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(47, clofun3, 1, 1, exp);
__arg1 = _359389_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp1 = __arg1;
Obj _359388_37 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == _359388_37) {
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
Obj _359380_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, _359380_37);
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
Obj _359381_37 = __arg1;
Obj _359380_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, _359380_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[141]);
__arg1 = _359381_37;
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
Obj _359382_37 = __arg1;
Obj _359380_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359383_37 = makeCons(_359382_37, Nil);
Obj _359384_37 = makeCons(_359380_37, _359383_37);
Obj _359385_37 = makeCons(__symbolTable[140], _359384_37);
__nargs = 2;
__arg1 = _359385_37;
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
Obj _359364_37 = PRIM_EQ(Nil, macros);
if (True == _359364_37) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _359371_37 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 2, macros, exp);
__arg1 = _359371_37;
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
Obj _359292_37 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj _359367_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _359367_37) {
Obj _359368_37 = PRIM_CAR(closureRef(co, 1));
Obj _359369_37 = PRIM_CAR(item);
Obj _359370_37 = PRIM_EQ(_359368_37, _359369_37);
if (True == _359370_37) {
__nargs = 2;
__arg0 = _359292_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _359292_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = _359292_37;
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
Obj _359293_37 = __arg1;
if (True == _359293_37) {
Obj _359365_37 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg0 = _359365_37;
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _359366_37 = PRIM_CDR(closureRef(co, 2));
__nargs = 3;
__arg0 = globalRef(__symbolTable[143]);
__arg1 = closureRef(co, 1);
__arg2 = _359366_37;
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
Obj _359360_37 = makeCons(n, v);
Obj _359361_37 = makeCons(_359360_37, globalRef(__symbolTable[146]));
Obj _359362_37 = primSet(co, __symbolTable[146], _359361_37);
__nargs = 2;
__arg1 = _359362_37;
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
Obj _359350_37 = PRIM_ISCONS(l);
if (True == _359350_37) {
Obj _359351_37 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _359351_37;
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
Obj _359352_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _359353_37 = makeCons(_359352_37, res);
Obj _359354_37 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(__symbolTable[148]);
__arg1 = _359353_37;
__arg2 = f;
__arg3 = _359354_37;
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
Obj _359343_37 = PRIM_ISCONS(l);
if (True == _359343_37) {
Obj _359344_37 = PRIM_CAR(l);
Obj _359345_37 = makeCons(_359344_37, res);
Obj _359346_37 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(__symbolTable[150]);
__arg1 = _359345_37;
__arg2 = _359346_37;
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
Obj _359341_37 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = _359341_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj exp = __arg1;
Obj _359333_37 = PRIM_ISCONS(exp);
if (True == _359333_37) {
Obj _359334_37 = PRIM_CAR(exp);
Obj _359335_37 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, _359334_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[153]);
__arg1 = _359335_37;
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
Obj _359336_37 = __arg1;
Obj _359334_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _359337_37 = makeCons(_359336_37, Nil);
Obj _359338_37 = makeCons(_359334_37, _359337_37);
Obj _359339_37 = makeCons(__symbolTable[152], _359338_37);
__nargs = 2;
__arg1 = _359339_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x = __arg1;
Obj _359329_37 = PRIM_CDR(x);
Obj _359330_37 = PRIM_CDR(_359329_37);
Obj _359331_37 = PRIM_CDR(_359330_37);
__nargs = 2;
__arg1 = _359331_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj x = __arg1;
Obj _359324_37 = PRIM_CDR(x);
Obj _359325_37 = PRIM_CDR(_359324_37);
Obj _359326_37 = PRIM_CDR(_359325_37);
Obj _359327_37 = PRIM_CAR(_359326_37);
__nargs = 2;
__arg1 = _359327_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x = __arg1;
Obj _359320_37 = PRIM_CDR(x);
Obj _359321_37 = PRIM_CDR(_359320_37);
Obj _359322_37 = PRIM_CAR(_359321_37);
__nargs = 2;
__arg1 = _359322_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj _359317_37 = PRIM_CDR(x);
Obj _359318_37 = PRIM_CDR(_359317_37);
__nargs = 2;
__arg1 = _359318_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj _359314_37 = PRIM_CAR(x);
Obj _359315_37 = PRIM_CDR(_359314_37);
__nargs = 2;
__arg1 = _359315_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj _359311_37 = PRIM_CAR(x);
Obj _359312_37 = PRIM_CAR(_359311_37);
__nargs = 2;
__arg1 = _359312_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj _359308_37 = PRIM_CDR(x);
Obj _359309_37 = PRIM_CAR(_359308_37);
__nargs = 2;
__arg1 = _359309_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj _359306_37 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = _359306_37;
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

