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
Obj _3510093_37 = primSet(co, __symbolTable[161], makeNative(20, clofun4, 1, 0));
Obj _3510096_37 = primSet(co, __symbolTable[160], makeNative(19, clofun4, 1, 0));
Obj _3510099_37 = primSet(co, __symbolTable[159], makeNative(18, clofun4, 1, 0));
Obj _3510102_37 = primSet(co, __symbolTable[158], makeNative(17, clofun4, 1, 0));
Obj _3510105_37 = primSet(co, __symbolTable[157], makeNative(16, clofun4, 1, 0));
Obj _3510109_37 = primSet(co, __symbolTable[156], makeNative(15, clofun4, 1, 0));
Obj _3510114_37 = primSet(co, __symbolTable[155], makeNative(14, clofun4, 1, 0));
Obj _3510118_37 = primSet(co, __symbolTable[154], makeNative(13, clofun4, 1, 0));
Obj _3510126_37 = primSet(co, __symbolTable[153], makeNative(11, clofun4, 1, 0));
Obj _3510128_37 = primSet(co, __symbolTable[151], makeNative(10, clofun4, 1, 0));
Obj _3510133_37 = primSet(co, __symbolTable[150], makeNative(9, clofun4, 2, 0));
PUSH_CONT_0(co, 1, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[150]), Nil);
}

label1:
{
Obj _3510134_37 = __arg1;
Obj _3510135_37 = primSet(co, __symbolTable[149], _3510134_37);
Obj _3510141_37 = primSet(co, __symbolTable[148], makeNative(7, clofun4, 3, 0));
Obj _3510142_37 = primSet(co, __symbolTable[147], makeNative(6, clofun4, 2, 0));
Obj _3510143_37 = primSet(co, __symbolTable[146], Nil);
Obj _3510144_37 = primGenSym();
Obj _3510145_37 = primSet(co, __symbolTable[145], _3510144_37);
Obj _3510149_37 = primSet(co, __symbolTable[144], makeNative(5, clofun4, 2, 0));
Obj _3510158_37 = primSet(co, __symbolTable[143], makeNative(2, clofun4, 2, 0));
Obj _3510159_37 = primSet(co, __symbolTable[142], makeNative(1, clofun4, 1, 0));
Obj _3510176_37 = primSet(co, __symbolTable[141], makeNative(45, clofun3, 1, 0));
Obj _3510177_37 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj _3510188_37 = primSet(co, __symbolTable[137], makeNative(41, clofun3, 1, 0));
PUSH_CONT_0(co, 2, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
}

label2:
{
Obj _3510189_37 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[135], makeNative(40, clofun3, 1, 0));
}

label3:
{
Obj _3510191_37 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[134], makeNative(36, clofun3, 1, 0));
}

label4:
{
Obj _3510201_37 = __arg1;
Obj _3510206_37 = primSet(co, __symbolTable[132], makeNative(35, clofun3, 2, 0));
Obj _3510209_37 = primSet(co, __symbolTable[131], makeNative(34, clofun3, 1, 0));
Obj _3510221_37 = primSet(co, __symbolTable[130], makeNative(29, clofun3, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[129], makeNative(28, clofun3, 1, 0));
}

label5:
{
Obj _3510223_37 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[128], makeNative(24, clofun3, 1, 0));
}

label6:
{
Obj _3510237_37 = __arg1;
Obj _3510249_37 = primSet(co, __symbolTable[125], makeNative(22, clofun3, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[124], makeNative(21, clofun3, 1, 0));
}

label7:
{
Obj _3510251_37 = __arg1;
Obj _3510263_37 = primSet(co, __symbolTable[123], makeNative(19, clofun3, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[122], makeNative(18, clofun3, 1, 0));
}

label8:
{
Obj _3510265_37 = __arg1;
Obj _3510268_37 = primSet(co, __symbolTable[121], makeNative(17, clofun3, 1, 0));
Obj _3510278_37 = primSet(co, __symbolTable[120], makeNative(14, clofun3, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[119], makeNative(13, clofun3, 1, 0));
}

label9:
{
Obj _3510280_37 = __arg1;
Obj _3510302_37 = primSet(co, __symbolTable[118], makeNative(4, clofun3, 4, 0));
Obj _3510335_37 = primSet(co, __symbolTable[117], makeNative(48, clofun2, 4, 0));
Obj _3510348_37 = primSet(co, __symbolTable[111], makeNative(43, clofun2, 2, 0));
Obj _3510370_37 = primSet(co, __symbolTable[109], makeNative(34, clofun2, 2, 0));
Obj _3510384_37 = primSet(co, __symbolTable[108], makeNative(28, clofun2, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[107], makeNative(27, clofun2, 1, 0));
}

label10:
{
Obj _3510385_37 = __arg1;
Obj _3510437_37 = primSet(co, __symbolTable[106], makeNative(22, clofun2, 3, 0));
Obj _3510438_37 = primSet(co, __symbolTable[104], makeNative(21, clofun2, 1, 0));
Obj _3510443_37 = primSet(co, __symbolTable[103], makeNative(18, clofun2, 2, 0));
Obj _3510447_37 = primSet(co, __symbolTable[102], makeNative(17, clofun2, 2, 0));
Obj _3510448_37 = primSet(co, __symbolTable[101], makeNative(16, clofun2, 1, 0));
Obj _3510456_37 = primSet(co, __symbolTable[100], makeNative(14, clofun2, 3, 0));
Obj _3510457_37 = primSet(co, __symbolTable[99], makeNative(13, clofun2, 2, 0));
Obj _3510463_37 = primSet(co, __symbolTable[98], makeNative(11, clofun2, 2, 0));
Obj _3510474_37 = primSet(co, __symbolTable[97], makeNative(4, clofun2, 1, 0));
Obj _3510480_37 = primSet(co, __symbolTable[96], makeNative(2, clofun2, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[95], makeNative(46, clofun1, 1, 0));
}

label11:
{
Obj _3510493_37 = __arg1;
Obj _3510494_37 = primSet(co, __symbolTable[94], makeNative(45, clofun1, 1, 0));
Obj _3510495_37 = primSet(co, __symbolTable[92], makeNative(44, clofun1, 1, 0));
Obj _3510498_37 = primSet(co, __symbolTable[138], makeNative(41, clofun1, 1, 0));
Obj _3510522_37 = primSet(co, __symbolTable[91], makeNative(37, clofun1, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[89], makeNative(36, clofun1, 1, 0));
}

label12:
{
Obj _3510524_37 = __arg1;
Obj _3510544_37 = primSet(co, __symbolTable[88], makeNative(33, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[86], makeNative(31, clofun1, 1, 0));
}

label13:
{
Obj _3510546_37 = __arg1;
Obj _3510560_37 = primSet(co, __symbolTable[85], makeNative(26, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[84], makeNative(23, clofun1, 1, 0));
}

label14:
{
Obj _3510563_37 = __arg1;
Obj _3510592_37 = primSet(co, __symbolTable[83], makeNative(19, clofun1, 4, 0));
Obj _3510593_37 = primSet(co, __symbolTable[80], makeNative(18, clofun1, 2, 0));
PUSH_CONT_0(co, 15, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[79], makeNative(10, clofun1, 1, 0));
}

label15:
{
Obj _3510613_37 = __arg1;
Obj _3510619_37 = primSet(co, __symbolTable[76], makeNative(5, clofun1, 2, 0));
Obj _3510631_37 = primSet(co, __symbolTable[71], makeNative(47, clofun0, 3, 0));
Obj _3510632_37 = makeCons(makeCString("primSet"), Nil);
Obj _3510633_37 = makeCons(MAKE_NUMBER(2), _3510632_37);
Obj _3510634_37 = makeCons(__symbolTable[68], _3510633_37);
Obj _3510635_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3510636_37 = makeCons(MAKE_NUMBER(1), _3510635_37);
Obj _3510637_37 = makeCons(__symbolTable[115], _3510636_37);
Obj _3510638_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3510639_37 = makeCons(MAKE_NUMBER(1), _3510638_37);
Obj _3510640_37 = makeCons(__symbolTable[114], _3510639_37);
Obj _3510641_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3510642_37 = makeCons(MAKE_NUMBER(2), _3510641_37);
Obj _3510643_37 = makeCons(__symbolTable[152], _3510642_37);
Obj _3510644_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3510645_37 = makeCons(MAKE_NUMBER(1), _3510644_37);
Obj _3510646_37 = makeCons(__symbolTable[116], _3510645_37);
Obj _3510647_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3510648_37 = makeCons(MAKE_NUMBER(2), _3510647_37);
Obj _3510649_37 = makeCons(__symbolTable[67], _3510648_37);
Obj _3510650_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3510651_37 = makeCons(MAKE_NUMBER(2), _3510650_37);
Obj _3510652_37 = makeCons(__symbolTable[66], _3510651_37);
Obj _3510653_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3510654_37 = makeCons(MAKE_NUMBER(2), _3510653_37);
Obj _3510655_37 = makeCons(__symbolTable[65], _3510654_37);
Obj _3510656_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3510657_37 = makeCons(MAKE_NUMBER(2), _3510656_37);
Obj _3510658_37 = makeCons(__symbolTable[64], _3510657_37);
Obj _3510659_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3510660_37 = makeCons(MAKE_NUMBER(2), _3510659_37);
Obj _3510661_37 = makeCons(__symbolTable[113], _3510660_37);
Obj _3510662_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3510663_37 = makeCons(MAKE_NUMBER(2), _3510662_37);
Obj _3510664_37 = makeCons(__symbolTable[63], _3510663_37);
Obj _3510665_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3510666_37 = makeCons(MAKE_NUMBER(2), _3510665_37);
Obj _3510667_37 = makeCons(__symbolTable[62], _3510666_37);
Obj _3510668_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3510669_37 = makeCons(MAKE_NUMBER(0), _3510668_37);
Obj _3510670_37 = makeCons(__symbolTable[61], _3510669_37);
Obj _3510671_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3510672_37 = makeCons(MAKE_NUMBER(1), _3510671_37);
Obj _3510673_37 = makeCons(__symbolTable[60], _3510672_37);
Obj _3510674_37 = makeCons(makeCString("primNot"), Nil);
Obj _3510675_37 = makeCons(MAKE_NUMBER(1), _3510674_37);
Obj _3510676_37 = makeCons(__symbolTable[59], _3510675_37);
Obj _3510677_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3510678_37 = makeCons(MAKE_NUMBER(1), _3510677_37);
Obj _3510679_37 = makeCons(__symbolTable[58], _3510678_37);
Obj _3510680_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3510681_37 = makeCons(MAKE_NUMBER(1), _3510680_37);
Obj _3510682_37 = makeCons(__symbolTable[57], _3510681_37);
Obj _3510683_37 = makeCons(_3510682_37, Nil);
Obj _3510684_37 = makeCons(_3510679_37, _3510683_37);
Obj _3510685_37 = makeCons(_3510676_37, _3510684_37);
Obj _3510686_37 = makeCons(_3510673_37, _3510685_37);
Obj _3510687_37 = makeCons(_3510670_37, _3510686_37);
Obj _3510688_37 = makeCons(_3510667_37, _3510687_37);
Obj _3510689_37 = makeCons(_3510664_37, _3510688_37);
Obj _3510690_37 = makeCons(_3510661_37, _3510689_37);
Obj _3510691_37 = makeCons(_3510658_37, _3510690_37);
Obj _3510692_37 = makeCons(_3510655_37, _3510691_37);
Obj _3510693_37 = makeCons(_3510652_37, _3510692_37);
Obj _3510694_37 = makeCons(_3510649_37, _3510693_37);
Obj _3510695_37 = makeCons(_3510646_37, _3510694_37);
Obj _3510696_37 = makeCons(_3510643_37, _3510695_37);
Obj _3510697_37 = makeCons(_3510640_37, _3510696_37);
Obj _3510698_37 = makeCons(_3510637_37, _3510697_37);
Obj _3510699_37 = makeCons(_3510634_37, _3510698_37);
Obj _3510700_37 = primSet(co, __symbolTable[69], _3510699_37);
Obj _3510715_37 = primSet(co, __symbolTable[56], makeNative(45, clofun0, 2, 0));
Obj _3510719_37 = primSet(co, __symbolTable[55], makeNative(42, clofun0, 1, 0));
Obj _3510897_37 = primSet(co, __symbolTable[93], makeNative(16, clofun0, 4, 0));
Obj _3510898_37 = makeCons(__symbolTable[98], Nil);
Obj _3510899_37 = makeCons(__symbolTable[99], _3510898_37);
Obj _3510900_37 = makeCons(__symbolTable[101], _3510899_37);
Obj _3510901_37 = makeCons(__symbolTable[132], _3510900_37);
Obj _3510902_37 = makeCons(__symbolTable[138], _3510901_37);
Obj _3510903_37 = makeCons(__symbolTable[147], _3510902_37);
Obj _3510904_37 = makeCons(__symbolTable[149], _3510903_37);
Obj _3510905_37 = makeCons(__symbolTable[39], _3510904_37);
Obj _3510906_37 = makeCons(__symbolTable[40], _3510905_37);
Obj _3510907_37 = makeCons(__symbolTable[41], _3510906_37);
Obj _3510908_37 = makeCons(__symbolTable[81], _3510907_37);
Obj _3510909_37 = makeCons(__symbolTable[42], _3510908_37);
Obj _3510910_37 = makeCons(__symbolTable[43], _3510909_37);
Obj _3510911_37 = makeCons(__symbolTable[70], _3510910_37);
Obj _3510912_37 = makeCons(__symbolTable[44], _3510911_37);
Obj _3510913_37 = makeCons(__symbolTable[45], _3510912_37);
Obj _3510914_37 = makeCons(__symbolTable[46], _3510913_37);
Obj _3510915_37 = makeCons(__symbolTable[47], _3510914_37);
Obj _3510916_37 = makeCons(__symbolTable[48], _3510915_37);
Obj _3510917_37 = makeCons(__symbolTable[49], _3510916_37);
Obj _3510918_37 = makeCons(__symbolTable[50], _3510917_37);
Obj _3510919_37 = makeCons(__symbolTable[51], _3510918_37);
Obj _3510920_37 = makeCons(__symbolTable[52], _3510919_37);
Obj _3510921_37 = makeCons(__symbolTable[72], _3510920_37);
Obj _3510922_37 = makeCons(__symbolTable[74], _3510921_37);
Obj _3510923_37 = makeCons(__symbolTable[73], _3510922_37);
Obj _3510924_37 = makeCons(__symbolTable[161], _3510923_37);
Obj _3510925_37 = makeCons(__symbolTable[54], _3510924_37);
Obj _3510926_37 = makeCons(__symbolTable[121], _3510925_37);
Obj _3510927_37 = makeCons(__symbolTable[131], _3510926_37);
Obj _3510928_37 = makeCons(__symbolTable[151], _3510927_37);
Obj _3510929_37 = makeCons(__symbolTable[154], _3510928_37);
Obj _3510930_37 = makeCons(__symbolTable[155], _3510929_37);
Obj _3510931_37 = makeCons(__symbolTable[156], _3510930_37);
Obj _3510932_37 = makeCons(__symbolTable[157], _3510931_37);
Obj _3510933_37 = makeCons(__symbolTable[158], _3510932_37);
Obj _3510934_37 = makeCons(__symbolTable[159], _3510933_37);
Obj _3510935_37 = makeCons(__symbolTable[160], _3510934_37);
Obj _3510936_37 = primSet(co, __symbolTable[53], _3510935_37);
Obj _3510937_37 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj _3510938_37 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj _3510939_37 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj _3510940_37 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj _3510941_37 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj _3510942_37 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj _3510943_37 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj _3510944_37 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj _3510945_37 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj _3510946_37 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj _3510947_37 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj _3510948_37 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj _3510949_37 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj _3510950_37 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj _3510951_37 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj _3510952_37 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj _3510953_37 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj _3510954_37 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj _3510955_37 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj _3510956_37 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj _3510957_37 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj _3510958_37 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj _3510959_37 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj _3510960_37 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj _3510961_37 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj _3510962_37 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj _3510963_37 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj _3510964_37 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj _3510965_37 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj _3510966_37 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj _3510967_37 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj _3510968_37 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj _3510969_37 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj _3510970_37 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj _3510971_37 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj _3510972_37 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj _3510973_37 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj _3510974_37 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj _3510975_37 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
JUMP_RETURN(clofun0, _3510975_37);
}

label16:
{
Obj _3510064_37 = __arg1;
Obj _3510065_37 = __arg2;
Obj _3510066_37 = __arg3;
Obj _3510067_37 = co->args[4];
Obj _3510088_37 = makeNative(20, clofun0, 1, 4, _3510064_37, _3510065_37, _3510066_37, _3510067_37);
pushCont(co, 17, clofun0, 2, _3510067_37, _3510088_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[54]), _3510067_37);
}

label17:
{
Obj _3510893_37 = __arg1;
Obj _3510067_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510088_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510893_37) {
JUMP_WITH_ARGS_2(clofun0, _3510088_37, True);
} else {
Obj _3510894_37 = primIsString(_3510067_37);
if (True == _3510894_37) {
JUMP_WITH_ARGS_2(clofun0, _3510088_37, True);
} else {
pushCont(co, 18, clofun0, 2, _3510067_37, _3510088_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[121]), _3510067_37);
}
}
}

label18:
{
Obj _3510895_37 = __arg1;
Obj _3510067_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510088_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510895_37) {
JUMP_WITH_ARGS_2(clofun0, _3510088_37, True);
} else {
pushCont(co, 19, clofun0, 1, _3510088_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[161]), _3510067_37);
}
}

label19:
{
Obj _3510896_37 = __arg1;
Obj _3510088_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3510896_37) {
JUMP_WITH_ARGS_2(clofun0, _3510088_37, True);
} else {
JUMP_WITH_ARGS_2(clofun0, _3510088_37, False);
}
}

label20:
{
Obj _3510089_37 = __arg1;
if (True == _3510089_37) {
JUMP_RETURN(clofun0, closureRef(co, 3));
} else {
Obj _3510069_37 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3510881_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3510881_37) {
Obj _3510882_37 = PRIM_CAR(closureRef(co, 3));
Obj _3510883_37 = PRIM_EQ(__symbolTable[139], _3510882_37);
if (True == _3510883_37) {
Obj _3510884_37 = PRIM_CDR(closureRef(co, 3));
Obj _3510885_37 = PRIM_ISCONS(_3510884_37);
if (True == _3510885_37) {
Obj _3510886_37 = PRIM_CDR(closureRef(co, 3));
Obj _3510887_37 = PRIM_CAR(_3510886_37);
Obj x = _3510887_37;
Obj _3510888_37 = PRIM_CDR(closureRef(co, 3));
Obj _3510889_37 = PRIM_CDR(_3510888_37);
Obj _3510890_37 = PRIM_EQ(Nil, _3510889_37);
if (True == _3510890_37) {
Obj _3510891_37 = makeCons(x, Nil);
Obj _3510892_37 = makeCons(__symbolTable[139], _3510891_37);
JUMP_RETURN(clofun0, _3510892_37);
} else {
JUMP_WITH_ARGS_1(clofun0, _3510069_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510069_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510069_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510069_37);
}
}
}

label21:
{
Obj _3510720_37 = primIsSymbol(closureRef(co, 0));
if (True == _3510720_37) {
PUSH_CONT_0(co, 40, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[132]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj _3510071_37 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3510859_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510859_37) {
Obj _3510860_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510861_37 = PRIM_EQ(__symbolTable[140], _3510860_37);
if (True == _3510861_37) {
Obj _3510862_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510863_37 = PRIM_ISCONS(_3510862_37);
if (True == _3510863_37) {
Obj _3510864_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510865_37 = PRIM_CAR(_3510864_37);
Obj args = _3510865_37;
Obj _3510866_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510867_37 = PRIM_CDR(_3510866_37);
Obj _3510868_37 = PRIM_ISCONS(_3510867_37);
if (True == _3510868_37) {
Obj _3510869_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510870_37 = PRIM_CDR(_3510869_37);
Obj _3510871_37 = PRIM_CAR(_3510870_37);
Obj body = _3510871_37;
Obj _3510872_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510873_37 = PRIM_CDR(_3510872_37);
Obj _3510874_37 = PRIM_CDR(_3510873_37);
Obj _3510875_37 = PRIM_EQ(Nil, _3510874_37);
if (True == _3510875_37) {
pushCont(co, 22, clofun0, 2, body, args);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[98]), args, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3510071_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510071_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510071_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510071_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510071_37);
}
}
}

label22:
{
Obj _3510876_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3510876_37;
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
Obj _3510877_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510878_37 = makeCons(_3510877_37, Nil);
Obj _3510879_37 = makeCons(args, _3510878_37);
Obj _3510880_37 = makeCons(__symbolTable[140], _3510879_37);
JUMP_RETURN(clofun0, _3510880_37);
}

label24:
{
Obj _3510072_37 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3510815_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510815_37) {
Obj _3510816_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510817_37 = PRIM_EQ(__symbolTable[90], _3510816_37);
if (True == _3510817_37) {
Obj _3510818_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510819_37 = PRIM_ISCONS(_3510818_37);
if (True == _3510819_37) {
Obj _3510820_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510821_37 = PRIM_CAR(_3510820_37);
Obj _3510822_37 = PRIM_ISCONS(_3510821_37);
if (True == _3510822_37) {
Obj _3510823_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510824_37 = PRIM_CAR(_3510823_37);
Obj _3510825_37 = PRIM_CAR(_3510824_37);
Obj _3510826_37 = PRIM_EQ(__symbolTable[81], _3510825_37);
if (True == _3510826_37) {
Obj _3510827_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510828_37 = PRIM_CAR(_3510827_37);
Obj _3510829_37 = PRIM_CDR(_3510828_37);
Obj _3510830_37 = PRIM_ISCONS(_3510829_37);
if (True == _3510830_37) {
Obj _3510831_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510832_37 = PRIM_CAR(_3510831_37);
Obj _3510833_37 = PRIM_CDR(_3510832_37);
Obj _3510834_37 = PRIM_CAR(_3510833_37);
Obj pkg = _3510834_37;
Obj _3510835_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510836_37 = PRIM_CAR(_3510835_37);
Obj _3510837_37 = PRIM_CDR(_3510836_37);
Obj _3510838_37 = PRIM_CDR(_3510837_37);
Obj _3510839_37 = PRIM_EQ(Nil, _3510838_37);
if (True == _3510839_37) {
Obj _3510840_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510841_37 = PRIM_CDR(_3510840_37);
Obj _3510842_37 = PRIM_ISCONS(_3510841_37);
if (True == _3510842_37) {
Obj _3510843_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510844_37 = PRIM_CDR(_3510843_37);
Obj _3510845_37 = PRIM_CAR(_3510844_37);
Obj y = _3510845_37;
Obj _3510846_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510847_37 = PRIM_CDR(_3510846_37);
Obj _3510848_37 = PRIM_CDR(_3510847_37);
Obj _3510849_37 = PRIM_EQ(Nil, _3510848_37);
if (True == _3510849_37) {
Obj _3510850_37 = primIsString(pkg);
if (True == _3510850_37) {
Obj _3510851_37 = makeCons(pkg, Nil);
Obj _3510852_37 = makeCons(__symbolTable[81], _3510851_37);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = _3510852_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510072_37);
}
}

label25:
{
Obj _3510853_37 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510854_37 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, _3510853_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3510854_37;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3510855_37 = __arg1;
Obj _3510853_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510856_37 = makeCons(_3510855_37, Nil);
Obj _3510857_37 = makeCons(_3510853_37, _3510856_37);
Obj _3510858_37 = makeCons(__symbolTable[90], _3510857_37);
JUMP_RETURN(clofun0, _3510858_37);
}

label27:
{
Obj _3510073_37 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3510807_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510807_37) {
Obj _3510808_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3510808_37;
Obj _3510809_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3510809_37;
Obj _3510090_37 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, _3510073_37);
Obj _3510813_37 = PRIM_EQ(op, __symbolTable[126]);
if (True == _3510813_37) {
JUMP_WITH_ARGS_2(clofun0, _3510090_37, True);
} else {
Obj _3510814_37 = PRIM_EQ(op, __symbolTable[90]);
if (True == _3510814_37) {
JUMP_WITH_ARGS_2(clofun0, _3510090_37, True);
} else {
JUMP_WITH_ARGS_2(clofun0, _3510090_37, False);
}
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510073_37);
}
}

label28:
{
Obj _3510091_37 = __arg1;
if (True == _3510091_37) {
PUSH_CONT_0(co, 29, clofun0);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[93]), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
} else {
JUMP_WITH_ARGS_1(clofun0, closureRef(co, 5));
}
}

label29:
{
Obj _3510810_37 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[147]), _3510810_37, closureRef(co, 4));
}

label30:
{
Obj _3510811_37 = __arg1;
Obj _3510812_37 = makeCons(closureRef(co, 0), _3510811_37);
JUMP_RETURN(clofun0, _3510812_37);
}

label31:
{
Obj _3510074_37 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _3510774_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510774_37) {
Obj _3510775_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510776_37 = PRIM_EQ(__symbolTable[129], _3510775_37);
if (True == _3510776_37) {
Obj _3510777_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510778_37 = PRIM_ISCONS(_3510777_37);
if (True == _3510778_37) {
Obj _3510779_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510780_37 = PRIM_CAR(_3510779_37);
Obj a = _3510780_37;
Obj _3510781_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510782_37 = PRIM_CDR(_3510781_37);
Obj _3510783_37 = PRIM_ISCONS(_3510782_37);
if (True == _3510783_37) {
Obj _3510784_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510785_37 = PRIM_CDR(_3510784_37);
Obj _3510786_37 = PRIM_CAR(_3510785_37);
Obj b = _3510786_37;
Obj _3510787_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510788_37 = PRIM_CDR(_3510787_37);
Obj _3510789_37 = PRIM_CDR(_3510788_37);
Obj _3510790_37 = PRIM_ISCONS(_3510789_37);
if (True == _3510790_37) {
Obj _3510791_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510792_37 = PRIM_CDR(_3510791_37);
Obj _3510793_37 = PRIM_CDR(_3510792_37);
Obj _3510794_37 = PRIM_CAR(_3510793_37);
Obj c = _3510794_37;
Obj _3510795_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510796_37 = PRIM_CDR(_3510795_37);
Obj _3510797_37 = PRIM_CDR(_3510796_37);
Obj _3510798_37 = PRIM_CDR(_3510797_37);
Obj _3510799_37 = PRIM_EQ(Nil, _3510798_37);
if (True == _3510799_37) {
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
JUMP_WITH_ARGS_1(clofun0, _3510074_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510074_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510074_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510074_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510074_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510074_37);
}
}

label32:
{
Obj _3510800_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510801_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, _3510800_37, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3510801_37;
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
Obj _3510802_37 = __arg1;
Obj _3510800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510803_37 = makeCons(_3510802_37, Nil);
Obj _3510804_37 = makeCons(_3510800_37, _3510803_37);
Obj _3510805_37 = makeCons(a, _3510804_37);
Obj _3510806_37 = makeCons(__symbolTable[129], _3510805_37);
JUMP_RETURN(clofun0, _3510806_37);
}

label34:
{
Obj _3510075_37 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _3510748_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3510748_37) {
Obj _3510749_37 = PRIM_CAR(closureRef(co, 2));
Obj _3510750_37 = PRIM_EQ(__symbolTable[78], _3510749_37);
if (True == _3510750_37) {
Obj _3510751_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510752_37 = PRIM_ISCONS(_3510751_37);
if (True == _3510752_37) {
Obj _3510753_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510754_37 = PRIM_CAR(_3510753_37);
Obj path = _3510754_37;
Obj _3510755_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510756_37 = PRIM_CDR(_3510755_37);
Obj _3510757_37 = PRIM_ISCONS(_3510756_37);
if (True == _3510757_37) {
Obj _3510758_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510759_37 = PRIM_CDR(_3510758_37);
Obj _3510760_37 = PRIM_CAR(_3510759_37);
Obj import = _3510760_37;
Obj _3510761_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510762_37 = PRIM_CDR(_3510761_37);
Obj _3510763_37 = PRIM_CDR(_3510762_37);
Obj _3510764_37 = PRIM_ISCONS(_3510763_37);
if (True == _3510764_37) {
Obj _3510765_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510766_37 = PRIM_CDR(_3510765_37);
Obj _3510767_37 = PRIM_CDR(_3510766_37);
Obj _3510768_37 = PRIM_CAR(_3510767_37);
Obj body = _3510768_37;
Obj _3510769_37 = PRIM_CDR(closureRef(co, 2));
Obj _3510770_37 = PRIM_CDR(_3510769_37);
Obj _3510771_37 = PRIM_CDR(_3510770_37);
Obj _3510772_37 = PRIM_CDR(_3510771_37);
Obj _3510773_37 = PRIM_EQ(Nil, _3510772_37);
if (True == _3510773_37) {
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
JUMP_WITH_ARGS_1(clofun0, _3510075_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510075_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510075_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510075_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510075_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510075_37);
}
}

label35:
{
Obj _3510076_37 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj _3510724_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510724_37) {
Obj _3510725_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510726_37 = PRIM_EQ(__symbolTable[133], _3510725_37);
if (True == _3510726_37) {
Obj _3510727_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510728_37 = PRIM_ISCONS(_3510727_37);
if (True == _3510728_37) {
Obj _3510729_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510730_37 = PRIM_CAR(_3510729_37);
Obj var = _3510730_37;
Obj _3510731_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510732_37 = PRIM_CDR(_3510731_37);
Obj _3510733_37 = PRIM_ISCONS(_3510732_37);
if (True == _3510733_37) {
Obj _3510734_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510735_37 = PRIM_CDR(_3510734_37);
Obj _3510736_37 = PRIM_CAR(_3510735_37);
Obj val = _3510736_37;
Obj _3510737_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510738_37 = PRIM_CDR(_3510737_37);
Obj _3510739_37 = PRIM_CDR(_3510738_37);
Obj _3510740_37 = PRIM_EQ(Nil, _3510739_37);
if (True == _3510740_37) {
pushCont(co, 36, clofun0, 1, val);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[76]), var, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun0, _3510076_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510076_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510076_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510076_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510076_37);
}
}

label36:
{
Obj _3510741_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = _3510741_37;
Obj _3510742_37 = makeCons(var1, Nil);
Obj _3510743_37 = makeCons(__symbolTable[139], _3510742_37);
pushCont(co, 37, clofun0, 1, _3510743_37);
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
Obj _3510744_37 = __arg1;
Obj _3510743_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510745_37 = makeCons(_3510744_37, Nil);
Obj _3510746_37 = makeCons(_3510743_37, _3510745_37);
Obj _3510747_37 = makeCons(__symbolTable[68], _3510746_37);
JUMP_RETURN(clofun0, _3510747_37);
}

label38:
{
PUSH_CONT_0(co, 39, clofun0);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[93]), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
}

label39:
{
Obj _3510723_37 = __arg1;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[147]), _3510723_37, closureRef(co, 3));
}

label40:
{
Obj _3510721_37 = __arg1;
if (True == _3510721_37) {
JUMP_RETURN(clofun0, closureRef(co, 0));
} else {
PUSH_CONT_0(co, 41, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[55]), closureRef(co, 0));
}
}

label41:
{
Obj _3510722_37 = __arg1;
if (True == _3510722_37) {
JUMP_RETURN(clofun0, closureRef(co, 0));
} else {
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[71]), closureRef(co, 0), closureRef(co, 2), closureRef(co, 3));
}
}

label42:
{
Obj x = __arg1;
PUSH_CONT_0(co, 43, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[56]), x, globalRef(__symbolTable[69]));
}

label43:
{
Obj _3510716_37 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[161]), _3510716_37);
}

label44:
{
Obj _3510717_37 = __arg1;
Obj _3510718_37 = primNot(_3510717_37);
JUMP_RETURN(clofun0, _3510718_37);
}

label45:
{
Obj _3510059_37 = __arg1;
Obj _3510060_37 = __arg2;
Obj _3510701_37 = PRIM_EQ(Nil, _3510060_37);
if (True == _3510701_37) {
JUMP_RETURN(clofun0, Nil);
} else {
Obj _3510062_37 = makeNative(46, clofun0, 0, 2, _3510060_37, _3510059_37);
Obj _3510705_37 = PRIM_ISCONS(_3510060_37);
if (True == _3510705_37) {
Obj _3510706_37 = PRIM_CAR(_3510060_37);
Obj _3510707_37 = PRIM_ISCONS(_3510706_37);
if (True == _3510707_37) {
Obj _3510708_37 = PRIM_CAR(_3510060_37);
Obj _3510709_37 = PRIM_CAR(_3510708_37);
Obj x = _3510709_37;
Obj _3510710_37 = PRIM_CAR(_3510060_37);
Obj _3510711_37 = PRIM_CDR(_3510710_37);
Obj y = _3510711_37;
Obj _3510712_37 = PRIM_CDR(_3510060_37);
Obj _3510713_37 = PRIM_EQ(_3510059_37, x);
if (True == _3510713_37) {
Obj _3510714_37 = makeCons(x, y);
JUMP_RETURN(clofun0, _3510714_37);
} else {
JUMP_WITH_ARGS_1(clofun0, _3510062_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510062_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3510062_37);
}
}
}

label46:
{
Obj _3510702_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510702_37) {
Obj _3510703_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510704_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3510704_37;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[56]), closureRef(co, 1), y);
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label47:
{
Obj _3510054_37 = __arg1;
Obj _3510055_37 = __arg2;
Obj _3510056_37 = __arg3;
Obj _3510620_37 = PRIM_EQ(Nil, _3510056_37);
if (True == _3510620_37) {
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[76]), _3510054_37, _3510055_37);
} else {
Obj _3510621_37 = PRIM_ISCONS(_3510056_37);
if (True == _3510621_37) {
Obj _3510622_37 = PRIM_CAR(_3510056_37);
Obj import = _3510622_37;
Obj _3510623_37 = PRIM_CDR(_3510056_37);
Obj more = _3510623_37;
pushCont(co, 48, clofun0, 4, import, _3510054_37, _3510055_37, more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[73]), import, makeCString("#*ns-export*"));
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}
}

label48:
{
Obj _3510624_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510054_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510055_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, _3510054_37, _3510055_37, more);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[74]), _3510624_37);
}

label49:
{
Obj _3510625_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510054_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510055_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, _3510054_37, _3510055_37, more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[70]), _3510625_37, Nil);
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
Obj _3510626_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510054_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510055_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = _3510626_37;
pushCont(co, 1, clofun1, 4, import, _3510054_37, _3510055_37, more);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[132]), _3510054_37, export);
}

label1:
{
Obj _3510627_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510054_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510055_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3510627_37) {
pushCont(co, 2, clofun1, 1, import);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3510054_37);
} else {
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[71]), _3510054_37, _3510055_37, more);
}
}

label2:
{
Obj _3510628_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), makeCString("#"), _3510628_37);
}

label3:
{
Obj _3510629_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), import, _3510629_37);
}

label4:
{
Obj _3510630_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[74]), _3510630_37);
}

label5:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _3510614_37 = PRIM_EQ(ns, makeCString(""));
if (True == _3510614_37) {
JUMP_RETURN(clofun1, var);
} else {
pushCont(co, 6, clofun1, 2, var, ns);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[75]), var);
}
}

label6:
{
Obj _3510615_37 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510615_37) {
JUMP_RETURN(clofun1, var);
} else {
pushCont(co, 7, clofun1, 1, ns);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), var);
}
}

label7:
{
Obj _3510616_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), makeCString("#"), _3510616_37);
}

label8:
{
Obj _3510617_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), ns, _3510617_37);
}

label9:
{
Obj _3510618_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[74]), _3510618_37);
}

label10:
{
Obj sexp = __arg1;
pushCont(co, 11, clofun1, 1, sexp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), sexp);
}

label11:
{
Obj _3510594_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = _3510594_37;
pushCont(co, 12, clofun1, 1, path);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), sexp);
}

label12:
{
Obj _3510595_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[80]), _3510595_37);
}

label13:
{
Obj _3510596_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun1, _3510596_37, makeNative(14, clofun1, 3, 1, path));
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _3510597_37 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, _3510597_37);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[147]), makeNative(17, clofun1, 1, 0), import);
}

label15:
{
Obj _3510600_37 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510597_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3510601_37 = makeCons(export, Nil);
Obj _3510602_37 = makeCons(__symbolTable[86], _3510601_37);
Obj _3510603_37 = makeCons(_3510602_37, Nil);
Obj _3510604_37 = makeCons(__symbolTable[77], _3510603_37);
Obj _3510605_37 = makeCons(__symbolTable[133], _3510604_37);
Obj _3510606_37 = makeCons(_3510605_37, body);
pushCont(co, 16, clofun1, 1, _3510597_37);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[98]), _3510600_37, _3510606_37);
}

label16:
{
Obj _3510607_37 = __arg1;
Obj _3510597_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510608_37 = makeCons(__symbolTable[89], _3510607_37);
Obj _3510609_37 = makeCons(_3510608_37, Nil);
Obj _3510610_37 = makeCons(_3510597_37, _3510609_37);
Obj _3510611_37 = makeCons(closureRef(co, 0), _3510610_37);
Obj _3510612_37 = makeCons(__symbolTable[78], _3510611_37);
JUMP_RETURN(clofun1, _3510612_37);
}

label17:
{
Obj imp = __arg1;
Obj _3510598_37 = makeCons(imp, Nil);
Obj _3510599_37 = makeCons(__symbolTable[81], _3510598_37);
JUMP_RETURN(clofun1, _3510599_37);
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
Obj _3510047_37 = __arg1;
Obj _3510048_37 = __arg2;
Obj _3510049_37 = __arg3;
Obj _3510050_37 = co->args[4];
Obj _3510051_37 = makeNative(20, clofun1, 0, 4, _3510049_37, _3510047_37, _3510048_37, _3510050_37);
Obj _3510574_37 = PRIM_ISCONS(_3510047_37);
if (True == _3510574_37) {
Obj _3510575_37 = PRIM_CAR(_3510047_37);
Obj _3510576_37 = PRIM_ISCONS(_3510575_37);
if (True == _3510576_37) {
Obj _3510577_37 = PRIM_CAR(_3510047_37);
Obj _3510578_37 = PRIM_CAR(_3510577_37);
Obj _3510579_37 = PRIM_EQ(__symbolTable[81], _3510578_37);
if (True == _3510579_37) {
Obj _3510580_37 = PRIM_CAR(_3510047_37);
Obj _3510581_37 = PRIM_CDR(_3510580_37);
Obj _3510582_37 = PRIM_ISCONS(_3510581_37);
if (True == _3510582_37) {
Obj _3510583_37 = PRIM_CAR(_3510047_37);
Obj _3510584_37 = PRIM_CDR(_3510583_37);
Obj _3510585_37 = PRIM_CAR(_3510584_37);
Obj lib = _3510585_37;
Obj _3510586_37 = PRIM_CAR(_3510047_37);
Obj _3510587_37 = PRIM_CDR(_3510586_37);
Obj _3510588_37 = PRIM_CDR(_3510587_37);
Obj _3510589_37 = PRIM_EQ(Nil, _3510588_37);
if (True == _3510589_37) {
Obj _3510590_37 = PRIM_CDR(_3510047_37);
Obj rest = _3510590_37;
Obj _3510591_37 = makeCons(lib, _3510048_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = _3510591_37;
__arg3 = _3510049_37;
co->args[4] = _3510050_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun1, _3510051_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510051_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510051_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510051_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510051_37);
}
}

label20:
{
Obj _3510052_37 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj _3510565_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3510565_37) {
Obj _3510566_37 = PRIM_CAR(closureRef(co, 1));
Obj _3510567_37 = PRIM_ISCONS(_3510566_37);
if (True == _3510567_37) {
Obj _3510568_37 = PRIM_CAR(closureRef(co, 1));
Obj _3510569_37 = PRIM_CAR(_3510568_37);
Obj _3510570_37 = PRIM_EQ(__symbolTable[82], _3510569_37);
if (True == _3510570_37) {
Obj _3510571_37 = PRIM_CAR(closureRef(co, 1));
Obj _3510572_37 = PRIM_CDR(_3510571_37);
Obj more = _3510572_37;
Obj _3510573_37 = PRIM_CDR(closureRef(co, 1));
Obj rest = _3510573_37;
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
JUMP_WITH_ARGS_1(clofun1, _3510052_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510052_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510052_37);
}
}

label21:
{
PUSH_CONT_0(co, 22, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[149]), closureRef(co, 1));
}

label22:
{
Obj _3510564_37 = __arg1;
JUMP_WITH_ARGS_4(clofun1, closureRef(co, 0), _3510564_37, closureRef(co, 2), closureRef(co, 3));
}

label23:
{
Obj exp = __arg1;
pushCont(co, 24, clofun1, 1, exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), exp);
}

label24:
{
Obj _3510561_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, _3510561_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), exp);
}

label25:
{
Obj _3510562_37 = __arg1;
Obj _3510561_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[85]), _3510561_37, _3510562_37);
}

label26:
{
Obj fn = __arg1;
Obj arglist = __arg2;
pushCont(co, 27, clofun1, 2, arglist, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), arglist);
}

label27:
{
Obj _3510547_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[161]), _3510547_37);
}

label28:
{
Obj _3510548_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510548_37) {
Obj _3510549_37 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, _3510549_37, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), arglist);
} else {
Obj _3510554_37 = PRIM_CAR(arglist);
Obj _3510555_37 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, _3510554_37, fn);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[85]), fn, _3510555_37);
}
}

label29:
{
Obj _3510556_37 = __arg1;
Obj _3510554_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510557_37 = makeCons(_3510556_37, Nil);
Obj _3510558_37 = makeCons(_3510554_37, _3510557_37);
Obj _3510559_37 = makeCons(fn, _3510558_37);
JUMP_RETURN(clofun1, _3510559_37);
}

label30:
{
Obj _3510550_37 = __arg1;
Obj _3510549_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510551_37 = makeCons(_3510550_37, Nil);
Obj _3510552_37 = makeCons(_3510549_37, _3510551_37);
Obj _3510553_37 = makeCons(fn, _3510552_37);
JUMP_RETURN(clofun1, _3510553_37);
}

label31:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 32, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), exp);
}

label32:
{
Obj _3510545_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[88]), _3510545_37);
}

label33:
{
Obj _3510042_37 = __arg1;
Obj _3510525_37 = primIsSymbol(_3510042_37);
if (True == _3510525_37) {
Obj _3510526_37 = makeCons(_3510042_37, Nil);
Obj _3510527_37 = makeCons(__symbolTable[139], _3510526_37);
JUMP_RETURN(clofun1, _3510527_37);
} else {
Obj _3510044_37 = makeNative(34, clofun1, 0, 1, _3510042_37);
Obj _3510534_37 = PRIM_ISCONS(_3510042_37);
if (True == _3510534_37) {
Obj _3510535_37 = PRIM_CAR(_3510042_37);
Obj _3510536_37 = PRIM_EQ(__symbolTable[87], _3510535_37);
if (True == _3510536_37) {
Obj _3510537_37 = PRIM_CDR(_3510042_37);
Obj _3510538_37 = PRIM_ISCONS(_3510537_37);
if (True == _3510538_37) {
Obj _3510539_37 = PRIM_CDR(_3510042_37);
Obj _3510540_37 = PRIM_CAR(_3510539_37);
Obj x = _3510540_37;
Obj _3510541_37 = PRIM_CDR(_3510042_37);
Obj _3510542_37 = PRIM_CDR(_3510541_37);
Obj _3510543_37 = PRIM_EQ(Nil, _3510542_37);
if (True == _3510543_37) {
JUMP_RETURN(clofun1, x);
} else {
JUMP_WITH_ARGS_1(clofun1, _3510044_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510044_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510044_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510044_37);
}
}
}

label34:
{
Obj _3510528_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510528_37) {
Obj _3510529_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3510529_37;
Obj _3510530_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3510530_37;
Obj _3510531_37 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), _3510531_37);
} else {
JUMP_RETURN(clofun1, closureRef(co, 0));
}
}

label35:
{
Obj _3510532_37 = __arg1;
Obj _3510533_37 = makeCons(__symbolTable[135], _3510532_37);
JUMP_RETURN(clofun1, _3510533_37);
}

label36:
{
Obj exp = __arg1;
Obj _3510523_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[91]), _3510523_37);
}

label37:
{
Obj _3510038_37 = __arg1;
Obj _3510039_37 = makeNative(38, clofun1, 0, 1, _3510038_37);
Obj _3510518_37 = PRIM_ISCONS(_3510038_37);
if (True == _3510518_37) {
Obj _3510519_37 = PRIM_CAR(_3510038_37);
Obj x = _3510519_37;
Obj _3510520_37 = PRIM_CDR(_3510038_37);
Obj _3510521_37 = PRIM_EQ(Nil, _3510520_37);
if (True == _3510521_37) {
JUMP_RETURN(clofun1, x);
} else {
JUMP_WITH_ARGS_1(clofun1, _3510039_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510039_37);
}
}

label38:
{
Obj _3510040_37 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj _3510506_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510506_37) {
Obj _3510507_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3510507_37;
Obj _3510508_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510509_37 = PRIM_ISCONS(_3510508_37);
if (True == _3510509_37) {
Obj _3510510_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510511_37 = PRIM_CAR(_3510510_37);
Obj y = _3510511_37;
Obj _3510512_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510513_37 = PRIM_CDR(_3510512_37);
Obj _3510514_37 = PRIM_EQ(Nil, _3510513_37);
if (True == _3510514_37) {
Obj _3510515_37 = makeCons(y, Nil);
Obj _3510516_37 = makeCons(x, _3510515_37);
Obj _3510517_37 = makeCons(__symbolTable[90], _3510516_37);
JUMP_RETURN(clofun1, _3510517_37);
} else {
JUMP_WITH_ARGS_1(clofun1, _3510040_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510040_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3510040_37);
}
}

label39:
{
Obj _3510499_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510499_37) {
Obj _3510500_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3510500_37;
Obj _3510501_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3510501_37;
pushCont(co, 40, clofun1, 1, x);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[91]), y);
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label40:
{
Obj _3510502_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510503_37 = makeCons(_3510502_37, Nil);
Obj _3510504_37 = makeCons(x, _3510503_37);
Obj _3510505_37 = makeCons(__symbolTable[90], _3510504_37);
JUMP_RETURN(clofun1, _3510505_37);
}

label41:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 42, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[141]), exp);
}

label42:
{
Obj _3510496_37 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[94]), _3510496_37);
}

label43:
{
Obj _3510497_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[92]), _3510497_37);
}

label44:
{
Obj x = __arg1;
JUMP_RETURN(clofun1, x);
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
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), exp);
}

label47:
{
Obj _3510481_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[104]), _3510481_37);
}

label48:
{
Obj _3510482_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = _3510482_37;
pushCont(co, 49, clofun1, 2, exp, body);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[97]), body);
}

label49:
{
Obj _3510483_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = _3510483_37;
pushCont(co, 0, clofun2, 2, exp, body);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), nargs);
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
Obj _3510484_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = _3510484_37;
pushCont(co, 1, clofun2, 2, body, args);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), exp);
}

label1:
{
Obj _3510485_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510486_37 = makeCons(__symbolTable[135], args);
Obj _3510487_37 = makeCons(_3510486_37, body);
Obj _3510488_37 = makeCons(__symbolTable[107], _3510487_37);
Obj _3510489_37 = makeCons(_3510488_37, Nil);
Obj _3510490_37 = makeCons(args, _3510489_37);
Obj _3510491_37 = makeCons(_3510485_37, _3510490_37);
Obj _3510492_37 = makeCons(__symbolTable[134], _3510491_37);
JUMP_RETURN(clofun2, _3510492_37);
}

label2:
{
Obj n = __arg1;
Obj _3510475_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3510475_37) {
JUMP_RETURN(clofun2, Nil);
} else {
Obj _3510476_37 = primGenSym();
Obj _3510477_37 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, _3510476_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[96]), _3510477_37);
}
}

label3:
{
Obj _3510478_37 = __arg1;
Obj _3510476_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510479_37 = makeCons(_3510476_37, _3510478_37);
JUMP_RETURN(clofun2, _3510479_37);
}

label4:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 5, clofun2);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[103]), Nil, rules);
}

label5:
{
Obj _3510464_37 = __arg1;
Obj pats = _3510464_37;
PUSH_CONT_0(co, 6, clofun2);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[147]), makeNative(10, clofun2, 1, 0), pats);
}

label6:
{
Obj _3510466_37 = __arg1;
Obj counts = _3510466_37;
Obj _3510467_37 = PRIM_CAR(counts);
Obj n = _3510467_37;
Obj _3510470_37 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[99]), makeNative(9, clofun2, 1, 1, n), _3510470_37);
}

label7:
{
Obj _3510471_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[161]), _3510471_37);
}

label8:
{
Obj _3510472_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510473_37 = primNot(_3510472_37);
if (True == _3510473_37) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("inconsistent func rule args count"));
} else {
JUMP_RETURN(clofun2, n);
}
}

label9:
{
Obj x = __arg1;
Obj _3510468_37 = PRIM_EQ(closureRef(co, 0), x);
Obj _3510469_37 = primNot(_3510468_37);
JUMP_RETURN(clofun2, _3510469_37);
}

label10:
{
Obj x = __arg1;
Obj _3510465_37 = PRIM_CDR(x);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[101]), _3510465_37);
}

label11:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _3510458_37 = PRIM_EQ(l1, Nil);
if (True == _3510458_37) {
JUMP_RETURN(clofun2, l2);
} else {
Obj _3510459_37 = PRIM_CAR(l1);
Obj _3510460_37 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, _3510459_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[98]), _3510460_37, l2);
}
}

label12:
{
Obj _3510461_37 = __arg1;
Obj _3510459_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510462_37 = makeCons(_3510459_37, _3510461_37);
JUMP_RETURN(clofun2, _3510462_37);
}

label13:
{
Obj fn = __arg1;
Obj l = __arg2;
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), Nil, fn, l);
}

label14:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _3510449_37 = PRIM_ISCONS(l);
if (True == _3510449_37) {
Obj _3510450_37 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
JUMP_WITH_ARGS_2(clofun2, fn, _3510450_37);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), res);
}
}

label15:
{
Obj _3510451_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3510451_37) {
Obj _3510452_37 = PRIM_CAR(l);
Obj _3510453_37 = makeCons(_3510452_37, res);
Obj _3510454_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), _3510453_37, fn, _3510454_37);
} else {
Obj _3510455_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), res, fn, _3510455_37);
}
}

label16:
{
Obj l = __arg1;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[102]), MAKE_NUMBER(0), l);
}

label17:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _3510444_37 = PRIM_EQ(l, Nil);
if (True == _3510444_37) {
JUMP_RETURN(clofun2, i);
} else {
Obj _3510445_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3510446_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[102]), _3510445_37, _3510446_37);
}
}

label18:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 19, clofun2, 2, res, rules);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[161]), rules);
}

label19:
{
Obj _3510439_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510439_37) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), res);
} else {
Obj _3510440_37 = PRIM_CAR(rules);
Obj _3510441_37 = makeCons(_3510440_37, res);
pushCont(co, 20, clofun2, 1, _3510441_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[157]), rules);
}
}

label20:
{
Obj _3510442_37 = __arg1;
Obj _3510441_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[103]), _3510441_37, _3510442_37);
}

label21:
{
Obj input = __arg1;
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), input, Nil, Nil);
}

label22:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _3510386_37 = PRIM_EQ(Nil, input);
if (True == _3510386_37) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), result);
} else {
Obj _3510035_37 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj _3510404_37 = PRIM_ISCONS(input);
if (True == _3510404_37) {
Obj _3510405_37 = PRIM_CAR(input);
Obj _3510406_37 = PRIM_EQ(__symbolTable[105], _3510405_37);
if (True == _3510406_37) {
Obj _3510407_37 = PRIM_CDR(input);
Obj _3510408_37 = PRIM_ISCONS(_3510407_37);
if (True == _3510408_37) {
Obj _3510409_37 = PRIM_CDR(input);
Obj _3510410_37 = PRIM_CAR(_3510409_37);
Obj act = _3510410_37;
Obj _3510411_37 = PRIM_CDR(input);
Obj _3510412_37 = PRIM_CDR(_3510411_37);
Obj _3510413_37 = PRIM_ISCONS(_3510412_37);
if (True == _3510413_37) {
Obj _3510414_37 = PRIM_CDR(input);
Obj _3510415_37 = PRIM_CDR(_3510414_37);
Obj _3510416_37 = PRIM_CAR(_3510415_37);
Obj _3510417_37 = PRIM_EQ(__symbolTable[110], _3510416_37);
if (True == _3510417_37) {
Obj _3510418_37 = PRIM_CDR(input);
Obj _3510419_37 = PRIM_CDR(_3510418_37);
Obj _3510420_37 = PRIM_CDR(_3510419_37);
Obj _3510421_37 = PRIM_ISCONS(_3510420_37);
if (True == _3510421_37) {
Obj _3510422_37 = PRIM_CDR(input);
Obj _3510423_37 = PRIM_CDR(_3510422_37);
Obj _3510424_37 = PRIM_CDR(_3510423_37);
Obj _3510425_37 = PRIM_CAR(_3510424_37);
Obj pred = _3510425_37;
Obj _3510426_37 = PRIM_CDR(input);
Obj _3510427_37 = PRIM_CDR(_3510426_37);
Obj _3510428_37 = PRIM_CDR(_3510427_37);
Obj _3510429_37 = PRIM_CDR(_3510428_37);
Obj remain = _3510429_37;
pushCont(co, 23, clofun2, 4, act, pred, result, remain);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), current);
} else {
JUMP_WITH_ARGS_1(clofun2, _3510035_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510035_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510035_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510035_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510035_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510035_37);
}
}
}

label23:
{
Obj _3510430_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3510431_37 = makeCons(__symbolTable[135], _3510430_37);
Obj pat = _3510431_37;
Obj _3510432_37 = makeCons(act, Nil);
Obj _3510433_37 = makeCons(pred, _3510432_37);
Obj _3510434_37 = makeCons(__symbolTable[110], _3510433_37);
Obj _3510435_37 = makeCons(pat, result);
Obj _3510436_37 = makeCons(_3510434_37, _3510435_37);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), remain, Nil, _3510436_37);
}

label24:
{
Obj _3510036_37 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3510391_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510391_37) {
Obj _3510392_37 = PRIM_CAR(closureRef(co, 0));
Obj _3510393_37 = PRIM_EQ(__symbolTable[105], _3510392_37);
if (True == _3510393_37) {
Obj _3510394_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510395_37 = PRIM_ISCONS(_3510394_37);
if (True == _3510395_37) {
Obj _3510396_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510397_37 = PRIM_CAR(_3510396_37);
Obj act = _3510397_37;
Obj _3510398_37 = PRIM_CDR(closureRef(co, 0));
Obj _3510399_37 = PRIM_CDR(_3510398_37);
Obj remain = _3510399_37;
pushCont(co, 25, clofun2, 2, act, remain);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun2, _3510036_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510036_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3510036_37);
}
}

label25:
{
Obj _3510400_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510401_37 = makeCons(__symbolTable[135], _3510400_37);
Obj pat = _3510401_37;
Obj _3510402_37 = makeCons(pat, closureRef(co, 2));
Obj _3510403_37 = makeCons(act, _3510402_37);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), remain, Nil, _3510403_37);
}

label26:
{
Obj _3510387_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3510387_37) {
Obj _3510388_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3510388_37;
Obj _3510389_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3510389_37;
Obj _3510390_37 = makeCons(x, closureRef(co, 1));
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), y, _3510390_37, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label27:
{
Obj exp = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[108]), exp);
}

label28:
{
Obj exp = __arg1;
pushCont(co, 29, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), exp);
}

label29:
{
Obj _3510371_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[138]), _3510371_37);
}

label30:
{
Obj _3510372_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = _3510372_37;
pushCont(co, 31, clofun2, 1, value);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[157]), exp);
}

label31:
{
Obj _3510373_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = _3510373_37;
Obj _3510086_37 = makeNative(32, clofun2, 1, 2, value, rules);
Obj _3510380_37 = PRIM_ISCONS(value);
if (True == _3510380_37) {
Obj _3510381_37 = PRIM_CAR(value);
Obj _3510382_37 = PRIM_EQ(__symbolTable[152], _3510381_37);
Obj _3510383_37 = primNot(_3510382_37);
if (True == _3510383_37) {
JUMP_WITH_ARGS_2(clofun2, _3510086_37, True);
} else {
JUMP_WITH_ARGS_2(clofun2, _3510086_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun2, _3510086_37, False);
}
}

label32:
{
Obj _3510087_37 = __arg1;
if (True == _3510087_37) {
Obj _3510374_37 = primGenSym();
Obj val = _3510374_37;
pushCont(co, 33, clofun2, 1, val);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), val, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), closureRef(co, 0), closureRef(co, 1));
}
}

label33:
{
Obj _3510375_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510376_37 = makeCons(_3510375_37, Nil);
Obj _3510377_37 = makeCons(closureRef(co, 0), _3510376_37);
Obj _3510378_37 = makeCons(val, _3510377_37);
Obj _3510379_37 = makeCons(__symbolTable[129], _3510378_37);
JUMP_RETURN(clofun2, _3510379_37);
}

label34:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 35, clofun2, 2, value, rules);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[161]), rules);
}

label35:
{
Obj _3510349_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510349_37) {
Obj _3510350_37 = makeCons(makeCString("no match-help found!"), Nil);
Obj _3510351_37 = makeCons(__symbolTable[127], _3510350_37);
JUMP_RETURN(clofun2, _3510351_37);
} else {
Obj _3510084_37 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, _3510084_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), rules);
}
}

label36:
{
Obj _3510367_37 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510084_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510367_37) {
Obj _3510368_37 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, _3510084_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), _3510368_37);
} else {
JUMP_WITH_ARGS_2(clofun2, _3510084_37, False);
}
}

label37:
{
Obj _3510369_37 = __arg1;
Obj _3510084_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3510369_37) {
JUMP_WITH_ARGS_2(clofun2, _3510084_37, True);
} else {
JUMP_WITH_ARGS_2(clofun2, _3510084_37, False);
}
}

label38:
{
Obj _3510085_37 = __arg1;
if (True == _3510085_37) {
Obj _3510352_37 = PRIM_CAR(closureRef(co, 1));
Obj pat = _3510352_37;
Obj _3510353_37 = primGenSym();
Obj cc = _3510353_37;
pushCont(co, 39, clofun2, 2, pat, cc);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[111]), closureRef(co, 1), cc);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("no cond match"));
}
}

label39:
{
Obj _3510354_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = _3510354_37;
pushCont(co, 40, clofun2, 2, action, cc);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[138]), pat);
}

label40:
{
Obj _3510355_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = _3510355_37;
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
Obj _3510356_37 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _3510356_37;
Obj _3510357_37 = PRIM_CDR(closureRef(co, 1));
Obj _3510358_37 = PRIM_CDR(_3510357_37);
pushCont(co, 42, clofun2, 2, curr, cc);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), closureRef(co, 0), _3510358_37);
}

label42:
{
Obj _3510359_37 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _3510359_37;
Obj _3510360_37 = makeCons(rest, Nil);
Obj _3510361_37 = makeCons(Nil, _3510360_37);
Obj _3510362_37 = makeCons(__symbolTable[140], _3510361_37);
Obj _3510363_37 = makeCons(curr, Nil);
Obj _3510364_37 = makeCons(_3510362_37, _3510363_37);
Obj _3510365_37 = makeCons(cc, _3510364_37);
Obj _3510366_37 = makeCons(__symbolTable[129], _3510365_37);
JUMP_RETURN(clofun2, _3510366_37);
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _3510336_37 = PRIM_CDR(rules);
Obj _3510337_37 = PRIM_CAR(_3510336_37);
Obj action = _3510337_37;
Obj _3510082_37 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, _3510082_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), action);
}

label44:
{
Obj _3510345_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510082_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3510345_37) {
Obj _3510346_37 = PRIM_CAR(action);
Obj _3510347_37 = PRIM_EQ(_3510346_37, __symbolTable[110]);
if (True == _3510347_37) {
JUMP_WITH_ARGS_2(clofun2, _3510082_37, True);
} else {
JUMP_WITH_ARGS_2(clofun2, _3510082_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun2, _3510082_37, False);
}
}

label45:
{
Obj _3510083_37 = __arg1;
if (True == _3510083_37) {
PUSH_CONT_0(co, 46, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), closureRef(co, 1));
} else {
JUMP_RETURN(clofun2, closureRef(co, 1));
}
}

label46:
{
Obj _3510338_37 = __arg1;
pushCont(co, 47, clofun2, 1, _3510338_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[156]), closureRef(co, 1));
}

label47:
{
Obj _3510339_37 = __arg1;
Obj _3510338_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510340_37 = makeCons(closureRef(co, 0), Nil);
Obj _3510341_37 = makeCons(_3510340_37, Nil);
Obj _3510342_37 = makeCons(_3510339_37, _3510341_37);
Obj _3510343_37 = makeCons(_3510338_37, _3510342_37);
Obj _3510344_37 = makeCons(__symbolTable[126], _3510343_37);
JUMP_RETURN(clofun2, _3510344_37);
}

label48:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 49, clofun2, 4, expr, body, cc, pat);
JUMP_WITH_ARGS_2(clofun2, makeNative(2, clofun3, 1, 0), pat);
}

label49:
{
Obj _3510306_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3510306_37) {
Obj _3510307_37 = PRIM_EQ(pat, expr);
if (True == _3510307_37) {
JUMP_RETURN(clofun2, body);
} else {
Obj _3510308_37 = makeCons(expr, Nil);
Obj _3510309_37 = makeCons(pat, _3510308_37);
Obj _3510310_37 = makeCons(__symbolTable[113], _3510309_37);
Obj _3510311_37 = makeCons(cc, Nil);
Obj _3510312_37 = makeCons(_3510311_37, Nil);
Obj _3510313_37 = makeCons(body, _3510312_37);
Obj _3510314_37 = makeCons(_3510310_37, _3510313_37);
Obj _3510315_37 = makeCons(__symbolTable[126], _3510314_37);
JUMP_RETURN(clofun2, _3510315_37);
}
} else {
Obj _3510316_37 = primIsSymbol(pat);
if (True == _3510316_37) {
Obj _3510317_37 = makeCons(body, Nil);
Obj _3510318_37 = makeCons(expr, _3510317_37);
Obj _3510319_37 = makeCons(pat, _3510318_37);
Obj _3510320_37 = makeCons(__symbolTable[129], _3510319_37);
JUMP_RETURN(clofun2, _3510320_37);
} else {
pushCont(co, 0, clofun3, 4, expr, body, cc, pat);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), pat);
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
Obj _3510321_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3510321_37) {
Obj _3510322_37 = PRIM_CAR(pat);
Obj _3510323_37 = PRIM_EQ(_3510322_37, __symbolTable[139]);
if (True == _3510323_37) {
Obj _3510324_37 = makeCons(expr, Nil);
Obj _3510325_37 = makeCons(pat, _3510324_37);
Obj _3510326_37 = makeCons(__symbolTable[113], _3510325_37);
Obj _3510327_37 = makeCons(cc, Nil);
Obj _3510328_37 = makeCons(_3510327_37, Nil);
Obj _3510329_37 = makeCons(body, _3510328_37);
Obj _3510330_37 = makeCons(_3510326_37, _3510329_37);
Obj _3510331_37 = makeCons(__symbolTable[126], _3510330_37);
JUMP_RETURN(clofun3, _3510331_37);
} else {
Obj _3510332_37 = PRIM_CAR(pat);
Obj _3510333_37 = PRIM_EQ(_3510332_37, __symbolTable[152]);
if (True == _3510333_37) {
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
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[127]), makeCString("no cond match"));
}
}
} else {
PUSH_CONT_0(co, 1, clofun3);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[112]), makeCString("match fail "), pat);
}
}

label1:
{
Obj _3510334_37 = __arg1;
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[127]), _3510334_37);
}

label2:
{
Obj x = __arg1;
pushCont(co, 3, clofun3, 1, x);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[131]), x);
}

label3:
{
Obj _3510303_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3510303_37) {
Obj _3510304_37 = primIsSymbol(x);
Obj _3510305_37 = primNot(_3510304_37);
if (True == _3510305_37) {
JUMP_RETURN(clofun3, True);
} else {
JUMP_RETURN(clofun3, False);
}
} else {
JUMP_RETURN(clofun3, False);
}
}

label4:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 5, clofun3, 4, pat, body, cc, expr);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), pat);
}

label5:
{
Obj _3510281_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = _3510281_37;
pushCont(co, 6, clofun3, 4, x, body, cc, expr);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), pat);
}

label6:
{
Obj _3510282_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = _3510282_37;
Obj _3510080_37 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj _3510299_37 = PRIM_ISCONS(expr);
if (True == _3510299_37) {
Obj _3510300_37 = PRIM_CAR(expr);
Obj _3510301_37 = PRIM_EQ(_3510300_37, __symbolTable[152]);
if (True == _3510301_37) {
JUMP_WITH_ARGS_2(clofun3, _3510080_37, True);
} else {
JUMP_WITH_ARGS_2(clofun3, _3510080_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun3, _3510080_37, False);
}
}

label7:
{
Obj _3510081_37 = __arg1;
if (True == _3510081_37) {
PUSH_CONT_0(co, 10, clofun3);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), closureRef(co, 2));
} else {
Obj _3510286_37 = makeCons(closureRef(co, 2), Nil);
Obj _3510287_37 = makeCons(__symbolTable[116], _3510286_37);
Obj _3510288_37 = makeCons(closureRef(co, 2), Nil);
Obj _3510289_37 = makeCons(__symbolTable[115], _3510288_37);
Obj _3510290_37 = makeCons(closureRef(co, 2), Nil);
Obj _3510291_37 = makeCons(__symbolTable[114], _3510290_37);
pushCont(co, 8, clofun3, 2, _3510289_37, _3510287_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = _3510291_37;
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
Obj _3510292_37 = __arg1;
Obj _3510289_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510287_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, _3510287_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = _3510289_37;
__arg3 = _3510292_37;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3510293_37 = __arg1;
Obj _3510287_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510294_37 = makeCons(closureRef(co, 4), Nil);
Obj _3510295_37 = makeCons(_3510294_37, Nil);
Obj _3510296_37 = makeCons(_3510293_37, _3510295_37);
Obj _3510297_37 = makeCons(_3510287_37, _3510296_37);
Obj _3510298_37 = makeCons(__symbolTable[126], _3510297_37);
JUMP_RETURN(clofun3, _3510298_37);
}

label10:
{
Obj _3510283_37 = __arg1;
Obj e1 = _3510283_37;
pushCont(co, 11, clofun3, 1, e1);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), closureRef(co, 2));
}

label11:
{
Obj _3510284_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = _3510284_37;
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
Obj _3510285_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = _3510285_37;
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
Obj _3510279_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[120]), _3510279_37);
}

label14:
{
Obj pat = __arg1;
Obj _3510269_37 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[161]), _3510269_37);
}

label15:
{
Obj _3510270_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3510270_37) {
Obj _3510271_37 = PRIM_CAR(pat);
JUMP_RETURN(clofun3, _3510271_37);
} else {
Obj _3510272_37 = PRIM_CAR(pat);
Obj _3510273_37 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, _3510272_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[120]), _3510273_37);
}
}

label16:
{
Obj _3510274_37 = __arg1;
Obj _3510272_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510275_37 = makeCons(_3510274_37, Nil);
Obj _3510276_37 = makeCons(_3510272_37, _3510275_37);
Obj _3510277_37 = makeCons(__symbolTable[152], _3510276_37);
JUMP_RETURN(clofun3, _3510277_37);
}

label17:
{
Obj x = __arg1;
Obj _3510266_37 = PRIM_EQ(x, True);
if (True == _3510266_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3510267_37 = PRIM_EQ(x, False);
if (True == _3510267_37) {
JUMP_RETURN(clofun3, True);
} else {
JUMP_RETURN(clofun3, False);
}
}
}

label18:
{
Obj exp = __arg1;
Obj _3510264_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[123]), _3510264_37);
}

label19:
{
Obj l = __arg1;
Obj _3510252_37 = PRIM_EQ(Nil, l);
if (True == _3510252_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3510253_37 = PRIM_CAR(l);
Obj _3510254_37 = PRIM_EQ(_3510253_37, False);
if (True == _3510254_37) {
JUMP_RETURN(clofun3, False);
} else {
Obj _3510255_37 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[123]), _3510255_37);
}
}
}

label20:
{
Obj _3510256_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _3510256_37;
Obj _3510257_37 = PRIM_EQ(more, False);
if (True == _3510257_37) {
JUMP_RETURN(clofun3, False);
} else {
Obj _3510258_37 = PRIM_CAR(l);
Obj _3510259_37 = makeCons(False, Nil);
Obj _3510260_37 = makeCons(more, _3510259_37);
Obj _3510261_37 = makeCons(_3510258_37, _3510260_37);
Obj _3510262_37 = makeCons(__symbolTable[126], _3510261_37);
JUMP_RETURN(clofun3, _3510262_37);
}
}

label21:
{
Obj exp = __arg1;
Obj _3510250_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[125]), _3510250_37);
}

label22:
{
Obj l = __arg1;
Obj _3510238_37 = PRIM_EQ(l, Nil);
if (True == _3510238_37) {
JUMP_RETURN(clofun3, False);
} else {
Obj _3510239_37 = PRIM_CAR(l);
Obj _3510240_37 = PRIM_EQ(_3510239_37, True);
if (True == _3510240_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3510241_37 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[125]), _3510241_37);
}
}
}

label23:
{
Obj _3510242_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _3510242_37;
Obj _3510243_37 = PRIM_EQ(more, True);
if (True == _3510243_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3510244_37 = PRIM_CAR(l);
Obj _3510245_37 = makeCons(more, Nil);
Obj _3510246_37 = makeCons(True, _3510245_37);
Obj _3510247_37 = makeCons(_3510244_37, _3510246_37);
Obj _3510248_37 = makeCons(__symbolTable[126], _3510247_37);
JUMP_RETURN(clofun3, _3510248_37);
}
}

label24:
{
Obj exp = __arg1;
Obj _3510224_37 = PRIM_CDR(exp);
Obj _3510225_37 = PRIM_EQ(Nil, _3510224_37);
if (True == _3510225_37) {
Obj _3510226_37 = makeCons(makeCString("no cond match"), Nil);
Obj _3510227_37 = makeCons(__symbolTable[127], _3510226_37);
JUMP_RETURN(clofun3, _3510227_37);
} else {
pushCont(co, 25, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}
}

label25:
{
Obj _3510228_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _3510228_37;
Obj _3510229_37 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, _3510229_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), curr);
}

label26:
{
Obj _3510230_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510229_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, _3510230_37, _3510229_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[157]), exp);
}

label27:
{
Obj _3510231_37 = __arg1;
Obj _3510230_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510229_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510232_37 = makeCons(__symbolTable[128], _3510231_37);
Obj _3510233_37 = makeCons(_3510232_37, Nil);
Obj _3510234_37 = makeCons(_3510230_37, _3510233_37);
Obj _3510235_37 = makeCons(_3510229_37, _3510234_37);
Obj _3510236_37 = makeCons(__symbolTable[126], _3510235_37);
JUMP_RETURN(clofun3, _3510236_37);
}

label28:
{
Obj exp = __arg1;
Obj _3510222_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[130]), _3510222_37);
}

label29:
{
Obj exp = __arg1;
Obj _3510210_37 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[161]), _3510210_37);
}

label30:
{
Obj _3510211_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3510211_37) {
Obj _3510212_37 = PRIM_CAR(exp);
JUMP_RETURN(clofun3, _3510212_37);
} else {
Obj _3510213_37 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, _3510213_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}
}

label31:
{
Obj _3510214_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510213_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, _3510214_37, _3510213_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[157]), exp);
}

label32:
{
Obj _3510215_37 = __arg1;
Obj _3510214_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510213_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, _3510214_37, _3510213_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[130]), _3510215_37);
}

label33:
{
Obj _3510216_37 = __arg1;
Obj _3510214_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510213_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510217_37 = makeCons(_3510216_37, Nil);
Obj _3510218_37 = makeCons(_3510214_37, _3510217_37);
Obj _3510219_37 = makeCons(_3510213_37, _3510218_37);
Obj _3510220_37 = makeCons(__symbolTable[129], _3510219_37);
JUMP_RETURN(clofun3, _3510220_37);
}

label34:
{
Obj x = __arg1;
Obj _3510207_37 = PRIM_ISCONS(x);
Obj _3510208_37 = primNot(_3510207_37);
JUMP_RETURN(clofun3, _3510208_37);
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _3510202_37 = PRIM_ISCONS(l);
if (True == _3510202_37) {
Obj _3510203_37 = PRIM_CAR(l);
Obj _3510204_37 = PRIM_EQ(_3510203_37, x);
if (True == _3510204_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3510205_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[132]), x, _3510205_37);
}
} else {
JUMP_RETURN(clofun3, False);
}
}

label36:
{
Obj exp = __arg1;
pushCont(co, 37, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}

label37:
{
Obj _3510192_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, _3510192_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label38:
{
Obj _3510193_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510192_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, _3510193_37, _3510192_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[155]), exp);
}

label39:
{
Obj _3510194_37 = __arg1;
Obj _3510193_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510192_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510195_37 = makeCons(_3510194_37, Nil);
Obj _3510196_37 = makeCons(_3510193_37, _3510195_37);
Obj _3510197_37 = makeCons(__symbolTable[140], _3510196_37);
Obj _3510198_37 = makeCons(_3510197_37, Nil);
Obj _3510199_37 = makeCons(_3510192_37, _3510198_37);
Obj _3510200_37 = makeCons(__symbolTable[133], _3510199_37);
JUMP_RETURN(clofun3, _3510200_37);
}

label40:
{
Obj exp = __arg1;
Obj _3510190_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[153]), _3510190_37);
}

label41:
{
Obj exp = __arg1;
pushCont(co, 42, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}

label42:
{
Obj _3510178_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510179_37 = makeCons(_3510178_37, Nil);
Obj _3510180_37 = makeCons(__symbolTable[139], _3510179_37);
pushCont(co, 43, clofun3, 2, exp, _3510180_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label43:
{
Obj _3510181_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510180_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, _3510181_37, _3510180_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[154]), exp);
}

label44:
{
Obj _3510182_37 = __arg1;
Obj _3510181_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510180_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3510183_37 = makeCons(_3510181_37, _3510182_37);
Obj _3510184_37 = makeCons(__symbolTable[140], _3510183_37);
Obj _3510185_37 = makeCons(_3510184_37, Nil);
Obj _3510186_37 = makeCons(_3510180_37, _3510185_37);
Obj _3510187_37 = makeCons(__symbolTable[144], _3510186_37);
JUMP_RETURN(clofun3, _3510187_37);
}

label45:
{
Obj exp = __arg1;
Obj _3510160_37 = PRIM_ISCONS(exp);
if (True == _3510160_37) {
Obj _3510161_37 = PRIM_CAR(exp);
Obj _3510162_37 = PRIM_EQ(_3510161_37, globalRef(__symbolTable[145]));
if (True == _3510162_37) {
Obj _3510163_37 = PRIM_CDR(exp);
JUMP_RETURN(clofun3, _3510163_37);
} else {
Obj _3510164_37 = PRIM_CAR(exp);
Obj _3510165_37 = PRIM_EQ(_3510164_37, __symbolTable[140]);
if (True == _3510165_37) {
pushCont(co, 48, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
} else {
Obj _3510172_37 = PRIM_CAR(exp);
Obj _3510173_37 = PRIM_EQ(_3510172_37, __symbolTable[139]);
if (True == _3510173_37) {
JUMP_RETURN(clofun3, exp);
} else {
pushCont(co, 46, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[142]), exp);
}
}
}
} else {
JUMP_RETURN(clofun3, exp);
}
}

label46:
{
Obj _3510175_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, makeNative(47, clofun3, 1, 1, exp), _3510175_37);
}

label47:
{
Obj exp1 = __arg1;
Obj _3510174_37 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == _3510174_37) {
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[147]), globalRef(__symbolTable[141]), exp1);
} else {
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[141]), exp1);
}
}

label48:
{
Obj _3510166_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, _3510166_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label49:
{
Obj _3510167_37 = __arg1;
Obj _3510166_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, _3510166_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[141]), _3510167_37);
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
Obj _3510168_37 = __arg1;
Obj _3510166_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510169_37 = makeCons(_3510168_37, Nil);
Obj _3510170_37 = makeCons(_3510166_37, _3510169_37);
Obj _3510171_37 = makeCons(__symbolTable[140], _3510170_37);
JUMP_RETURN(clofun4, _3510171_37);
}

label1:
{
Obj exp = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[143]), exp, globalRef(__symbolTable[146]));
}

label2:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _3510150_37 = PRIM_EQ(Nil, macros);
if (True == _3510150_37) {
JUMP_RETURN(clofun4, exp);
} else {
Obj _3510157_37 = PRIM_CAR(macros);
JUMP_WITH_ARGS_2(clofun4, makeNative(3, clofun4, 1, 2, macros, exp), _3510157_37);
}
}

label3:
{
Obj item = __arg1;
Obj _3510078_37 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj _3510153_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3510153_37) {
Obj _3510154_37 = PRIM_CAR(closureRef(co, 1));
Obj _3510155_37 = PRIM_CAR(item);
Obj _3510156_37 = PRIM_EQ(_3510154_37, _3510155_37);
if (True == _3510156_37) {
JUMP_WITH_ARGS_2(clofun4, _3510078_37, True);
} else {
JUMP_WITH_ARGS_2(clofun4, _3510078_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun4, _3510078_37, False);
}
}

label4:
{
Obj _3510079_37 = __arg1;
if (True == _3510079_37) {
Obj _3510151_37 = PRIM_CDR(closureRef(co, 0));
JUMP_WITH_ARGS_2(clofun4, _3510151_37, closureRef(co, 1));
} else {
Obj _3510152_37 = PRIM_CDR(closureRef(co, 2));
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[143]), closureRef(co, 1), _3510152_37);
}
}

label5:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _3510146_37 = makeCons(n, v);
Obj _3510147_37 = makeCons(_3510146_37, globalRef(__symbolTable[146]));
Obj _3510148_37 = primSet(co, __symbolTable[146], _3510147_37);
JUMP_RETURN(clofun4, _3510148_37);
}

label6:
{
Obj f = __arg1;
Obj l = __arg2;
JUMP_WITH_ARGS_4(clofun4, globalRef(__symbolTable[148]), Nil, f, l);
}

label7:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _3510136_37 = PRIM_ISCONS(l);
if (True == _3510136_37) {
Obj _3510137_37 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
JUMP_WITH_ARGS_2(clofun4, f, _3510137_37);
} else {
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[149]), res);
}
}

label8:
{
Obj _3510138_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3510139_37 = makeCons(_3510138_37, res);
Obj _3510140_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun4, globalRef(__symbolTable[148]), _3510139_37, f, _3510140_37);
}

label9:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _3510129_37 = PRIM_ISCONS(l);
if (True == _3510129_37) {
Obj _3510130_37 = PRIM_CAR(l);
Obj _3510131_37 = makeCons(_3510130_37, res);
Obj _3510132_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[150]), _3510131_37, _3510132_37);
} else {
JUMP_RETURN(clofun4, res);
}
}

label10:
{
Obj x = __arg1;
Obj _3510127_37 = PRIM_ISCONS(x);
JUMP_RETURN(clofun4, _3510127_37);
}

label11:
{
Obj exp = __arg1;
Obj _3510119_37 = PRIM_ISCONS(exp);
if (True == _3510119_37) {
Obj _3510120_37 = PRIM_CAR(exp);
Obj _3510121_37 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, _3510120_37);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[153]), _3510121_37);
} else {
JUMP_RETURN(clofun4, Nil);
}
}

label12:
{
Obj _3510122_37 = __arg1;
Obj _3510120_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3510123_37 = makeCons(_3510122_37, Nil);
Obj _3510124_37 = makeCons(_3510120_37, _3510123_37);
Obj _3510125_37 = makeCons(__symbolTable[152], _3510124_37);
JUMP_RETURN(clofun4, _3510125_37);
}

label13:
{
Obj x = __arg1;
Obj _3510115_37 = PRIM_CDR(x);
Obj _3510116_37 = PRIM_CDR(_3510115_37);
Obj _3510117_37 = PRIM_CDR(_3510116_37);
JUMP_RETURN(clofun4, _3510117_37);
}

label14:
{
Obj x = __arg1;
Obj _3510110_37 = PRIM_CDR(x);
Obj _3510111_37 = PRIM_CDR(_3510110_37);
Obj _3510112_37 = PRIM_CDR(_3510111_37);
Obj _3510113_37 = PRIM_CAR(_3510112_37);
JUMP_RETURN(clofun4, _3510113_37);
}

label15:
{
Obj x = __arg1;
Obj _3510106_37 = PRIM_CDR(x);
Obj _3510107_37 = PRIM_CDR(_3510106_37);
Obj _3510108_37 = PRIM_CAR(_3510107_37);
JUMP_RETURN(clofun4, _3510108_37);
}

label16:
{
Obj x = __arg1;
Obj _3510103_37 = PRIM_CDR(x);
Obj _3510104_37 = PRIM_CDR(_3510103_37);
JUMP_RETURN(clofun4, _3510104_37);
}

label17:
{
Obj x = __arg1;
Obj _3510100_37 = PRIM_CAR(x);
Obj _3510101_37 = PRIM_CDR(_3510100_37);
JUMP_RETURN(clofun4, _3510101_37);
}

label18:
{
Obj x = __arg1;
Obj _3510097_37 = PRIM_CAR(x);
Obj _3510098_37 = PRIM_CAR(_3510097_37);
JUMP_RETURN(clofun4, _3510098_37);
}

label19:
{
Obj x = __arg1;
Obj _3510094_37 = PRIM_CDR(x);
Obj _3510095_37 = PRIM_CAR(_3510094_37);
JUMP_RETURN(clofun4, _3510095_37);
}

label20:
{
Obj x = __arg1;
Obj _3510092_37 = PRIM_EQ(x, Nil);
JUMP_RETURN(clofun4, _3510092_37);
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

