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
Obj _3515018_37 = primSet(co, __symbolTable[161], makeNative(20, clofun4, 1, 0));
Obj _3515021_37 = primSet(co, __symbolTable[160], makeNative(19, clofun4, 1, 0));
Obj _3515024_37 = primSet(co, __symbolTable[159], makeNative(18, clofun4, 1, 0));
Obj _3515027_37 = primSet(co, __symbolTable[158], makeNative(17, clofun4, 1, 0));
Obj _3515030_37 = primSet(co, __symbolTable[157], makeNative(16, clofun4, 1, 0));
Obj _3515034_37 = primSet(co, __symbolTable[156], makeNative(15, clofun4, 1, 0));
Obj _3515039_37 = primSet(co, __symbolTable[155], makeNative(14, clofun4, 1, 0));
Obj _3515043_37 = primSet(co, __symbolTable[154], makeNative(13, clofun4, 1, 0));
Obj _3515051_37 = primSet(co, __symbolTable[153], makeNative(11, clofun4, 1, 0));
Obj _3515053_37 = primSet(co, __symbolTable[151], makeNative(10, clofun4, 1, 0));
Obj _3515058_37 = primSet(co, __symbolTable[150], makeNative(9, clofun4, 2, 0));
PUSH_CONT_0(co, 1, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[150]), Nil);
}

label1:
{
Obj _3515059_37 = __arg1;
Obj _3515060_37 = primSet(co, __symbolTable[149], _3515059_37);
Obj _3515066_37 = primSet(co, __symbolTable[148], makeNative(7, clofun4, 3, 0));
Obj _3515067_37 = primSet(co, __symbolTable[147], makeNative(6, clofun4, 2, 0));
Obj _3515068_37 = primSet(co, __symbolTable[146], Nil);
Obj _3515069_37 = primGenSym();
Obj _3515070_37 = primSet(co, __symbolTable[145], _3515069_37);
Obj _3515074_37 = primSet(co, __symbolTable[144], makeNative(5, clofun4, 2, 0));
Obj _3515083_37 = primSet(co, __symbolTable[143], makeNative(2, clofun4, 2, 0));
Obj _3515084_37 = primSet(co, __symbolTable[142], makeNative(1, clofun4, 1, 0));
Obj _3515101_37 = primSet(co, __symbolTable[141], makeNative(45, clofun3, 1, 0));
Obj _3515102_37 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj _3515113_37 = primSet(co, __symbolTable[137], makeNative(41, clofun3, 1, 0));
PUSH_CONT_0(co, 2, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
}

label2:
{
Obj _3515114_37 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[135], makeNative(40, clofun3, 1, 0));
}

label3:
{
Obj _3515116_37 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[134], makeNative(36, clofun3, 1, 0));
}

label4:
{
Obj _3515126_37 = __arg1;
Obj _3515131_37 = primSet(co, __symbolTable[132], makeNative(35, clofun3, 2, 0));
Obj _3515134_37 = primSet(co, __symbolTable[131], makeNative(34, clofun3, 1, 0));
Obj _3515146_37 = primSet(co, __symbolTable[130], makeNative(29, clofun3, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[129], makeNative(28, clofun3, 1, 0));
}

label5:
{
Obj _3515148_37 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[128], makeNative(24, clofun3, 1, 0));
}

label6:
{
Obj _3515162_37 = __arg1;
Obj _3515174_37 = primSet(co, __symbolTable[125], makeNative(22, clofun3, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[124], makeNative(21, clofun3, 1, 0));
}

label7:
{
Obj _3515176_37 = __arg1;
Obj _3515188_37 = primSet(co, __symbolTable[123], makeNative(19, clofun3, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[122], makeNative(18, clofun3, 1, 0));
}

label8:
{
Obj _3515190_37 = __arg1;
Obj _3515193_37 = primSet(co, __symbolTable[121], makeNative(17, clofun3, 1, 0));
Obj _3515203_37 = primSet(co, __symbolTable[120], makeNative(14, clofun3, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[119], makeNative(13, clofun3, 1, 0));
}

label9:
{
Obj _3515205_37 = __arg1;
Obj _3515227_37 = primSet(co, __symbolTable[118], makeNative(4, clofun3, 4, 0));
Obj _3515260_37 = primSet(co, __symbolTable[117], makeNative(48, clofun2, 4, 0));
Obj _3515273_37 = primSet(co, __symbolTable[111], makeNative(43, clofun2, 2, 0));
Obj _3515295_37 = primSet(co, __symbolTable[109], makeNative(34, clofun2, 2, 0));
Obj _3515309_37 = primSet(co, __symbolTable[108], makeNative(28, clofun2, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[107], makeNative(27, clofun2, 1, 0));
}

label10:
{
Obj _3515310_37 = __arg1;
Obj _3515362_37 = primSet(co, __symbolTable[106], makeNative(22, clofun2, 3, 0));
Obj _3515363_37 = primSet(co, __symbolTable[104], makeNative(21, clofun2, 1, 0));
Obj _3515368_37 = primSet(co, __symbolTable[103], makeNative(18, clofun2, 2, 0));
Obj _3515372_37 = primSet(co, __symbolTable[102], makeNative(17, clofun2, 2, 0));
Obj _3515373_37 = primSet(co, __symbolTable[101], makeNative(16, clofun2, 1, 0));
Obj _3515381_37 = primSet(co, __symbolTable[100], makeNative(14, clofun2, 3, 0));
Obj _3515382_37 = primSet(co, __symbolTable[99], makeNative(13, clofun2, 2, 0));
Obj _3515388_37 = primSet(co, __symbolTable[98], makeNative(11, clofun2, 2, 0));
Obj _3515399_37 = primSet(co, __symbolTable[97], makeNative(4, clofun2, 1, 0));
Obj _3515405_37 = primSet(co, __symbolTable[96], makeNative(2, clofun2, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[95], makeNative(46, clofun1, 1, 0));
}

label11:
{
Obj _3515418_37 = __arg1;
Obj _3515419_37 = primSet(co, __symbolTable[94], makeNative(45, clofun1, 1, 0));
Obj _3515420_37 = primSet(co, __symbolTable[92], makeNative(44, clofun1, 1, 0));
Obj _3515423_37 = primSet(co, __symbolTable[138], makeNative(41, clofun1, 1, 0));
Obj _3515447_37 = primSet(co, __symbolTable[91], makeNative(37, clofun1, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[89], makeNative(36, clofun1, 1, 0));
}

label12:
{
Obj _3515449_37 = __arg1;
Obj _3515469_37 = primSet(co, __symbolTable[88], makeNative(33, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[86], makeNative(31, clofun1, 1, 0));
}

label13:
{
Obj _3515471_37 = __arg1;
Obj _3515485_37 = primSet(co, __symbolTable[85], makeNative(26, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[84], makeNative(23, clofun1, 1, 0));
}

label14:
{
Obj _3515488_37 = __arg1;
Obj _3515517_37 = primSet(co, __symbolTable[83], makeNative(19, clofun1, 4, 0));
Obj _3515518_37 = primSet(co, __symbolTable[80], makeNative(18, clofun1, 2, 0));
PUSH_CONT_0(co, 15, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[79], makeNative(10, clofun1, 1, 0));
}

label15:
{
Obj _3515538_37 = __arg1;
Obj _3515544_37 = primSet(co, __symbolTable[76], makeNative(5, clofun1, 2, 0));
Obj _3515556_37 = primSet(co, __symbolTable[71], makeNative(47, clofun0, 3, 0));
Obj _3515557_37 = makeCons(makeCString("primSet"), Nil);
Obj _3515558_37 = makeCons(MAKE_NUMBER(2), _3515557_37);
Obj _3515559_37 = makeCons(__symbolTable[68], _3515558_37);
Obj _3515560_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3515561_37 = makeCons(MAKE_NUMBER(1), _3515560_37);
Obj _3515562_37 = makeCons(__symbolTable[115], _3515561_37);
Obj _3515563_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3515564_37 = makeCons(MAKE_NUMBER(1), _3515563_37);
Obj _3515565_37 = makeCons(__symbolTable[114], _3515564_37);
Obj _3515566_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3515567_37 = makeCons(MAKE_NUMBER(2), _3515566_37);
Obj _3515568_37 = makeCons(__symbolTable[152], _3515567_37);
Obj _3515569_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3515570_37 = makeCons(MAKE_NUMBER(1), _3515569_37);
Obj _3515571_37 = makeCons(__symbolTable[116], _3515570_37);
Obj _3515572_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3515573_37 = makeCons(MAKE_NUMBER(2), _3515572_37);
Obj _3515574_37 = makeCons(__symbolTable[67], _3515573_37);
Obj _3515575_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3515576_37 = makeCons(MAKE_NUMBER(2), _3515575_37);
Obj _3515577_37 = makeCons(__symbolTable[66], _3515576_37);
Obj _3515578_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3515579_37 = makeCons(MAKE_NUMBER(2), _3515578_37);
Obj _3515580_37 = makeCons(__symbolTable[65], _3515579_37);
Obj _3515581_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3515582_37 = makeCons(MAKE_NUMBER(2), _3515581_37);
Obj _3515583_37 = makeCons(__symbolTable[64], _3515582_37);
Obj _3515584_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3515585_37 = makeCons(MAKE_NUMBER(2), _3515584_37);
Obj _3515586_37 = makeCons(__symbolTable[113], _3515585_37);
Obj _3515587_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3515588_37 = makeCons(MAKE_NUMBER(2), _3515587_37);
Obj _3515589_37 = makeCons(__symbolTable[63], _3515588_37);
Obj _3515590_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3515591_37 = makeCons(MAKE_NUMBER(2), _3515590_37);
Obj _3515592_37 = makeCons(__symbolTable[62], _3515591_37);
Obj _3515593_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3515594_37 = makeCons(MAKE_NUMBER(0), _3515593_37);
Obj _3515595_37 = makeCons(__symbolTable[61], _3515594_37);
Obj _3515596_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3515597_37 = makeCons(MAKE_NUMBER(1), _3515596_37);
Obj _3515598_37 = makeCons(__symbolTable[60], _3515597_37);
Obj _3515599_37 = makeCons(makeCString("primNot"), Nil);
Obj _3515600_37 = makeCons(MAKE_NUMBER(1), _3515599_37);
Obj _3515601_37 = makeCons(__symbolTable[59], _3515600_37);
Obj _3515602_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3515603_37 = makeCons(MAKE_NUMBER(1), _3515602_37);
Obj _3515604_37 = makeCons(__symbolTable[58], _3515603_37);
Obj _3515605_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3515606_37 = makeCons(MAKE_NUMBER(1), _3515605_37);
Obj _3515607_37 = makeCons(__symbolTable[57], _3515606_37);
Obj _3515608_37 = makeCons(_3515607_37, Nil);
Obj _3515609_37 = makeCons(_3515604_37, _3515608_37);
Obj _3515610_37 = makeCons(_3515601_37, _3515609_37);
Obj _3515611_37 = makeCons(_3515598_37, _3515610_37);
Obj _3515612_37 = makeCons(_3515595_37, _3515611_37);
Obj _3515613_37 = makeCons(_3515592_37, _3515612_37);
Obj _3515614_37 = makeCons(_3515589_37, _3515613_37);
Obj _3515615_37 = makeCons(_3515586_37, _3515614_37);
Obj _3515616_37 = makeCons(_3515583_37, _3515615_37);
Obj _3515617_37 = makeCons(_3515580_37, _3515616_37);
Obj _3515618_37 = makeCons(_3515577_37, _3515617_37);
Obj _3515619_37 = makeCons(_3515574_37, _3515618_37);
Obj _3515620_37 = makeCons(_3515571_37, _3515619_37);
Obj _3515621_37 = makeCons(_3515568_37, _3515620_37);
Obj _3515622_37 = makeCons(_3515565_37, _3515621_37);
Obj _3515623_37 = makeCons(_3515562_37, _3515622_37);
Obj _3515624_37 = makeCons(_3515559_37, _3515623_37);
Obj _3515625_37 = primSet(co, __symbolTable[69], _3515624_37);
Obj _3515640_37 = primSet(co, __symbolTable[56], makeNative(45, clofun0, 2, 0));
Obj _3515644_37 = primSet(co, __symbolTable[55], makeNative(42, clofun0, 1, 0));
Obj _3515822_37 = primSet(co, __symbolTable[93], makeNative(16, clofun0, 4, 0));
Obj _3515823_37 = makeCons(__symbolTable[98], Nil);
Obj _3515824_37 = makeCons(__symbolTable[99], _3515823_37);
Obj _3515825_37 = makeCons(__symbolTable[101], _3515824_37);
Obj _3515826_37 = makeCons(__symbolTable[132], _3515825_37);
Obj _3515827_37 = makeCons(__symbolTable[138], _3515826_37);
Obj _3515828_37 = makeCons(__symbolTable[147], _3515827_37);
Obj _3515829_37 = makeCons(__symbolTable[149], _3515828_37);
Obj _3515830_37 = makeCons(__symbolTable[39], _3515829_37);
Obj _3515831_37 = makeCons(__symbolTable[40], _3515830_37);
Obj _3515832_37 = makeCons(__symbolTable[41], _3515831_37);
Obj _3515833_37 = makeCons(__symbolTable[81], _3515832_37);
Obj _3515834_37 = makeCons(__symbolTable[42], _3515833_37);
Obj _3515835_37 = makeCons(__symbolTable[43], _3515834_37);
Obj _3515836_37 = makeCons(__symbolTable[70], _3515835_37);
Obj _3515837_37 = makeCons(__symbolTable[44], _3515836_37);
Obj _3515838_37 = makeCons(__symbolTable[45], _3515837_37);
Obj _3515839_37 = makeCons(__symbolTable[46], _3515838_37);
Obj _3515840_37 = makeCons(__symbolTable[47], _3515839_37);
Obj _3515841_37 = makeCons(__symbolTable[48], _3515840_37);
Obj _3515842_37 = makeCons(__symbolTable[49], _3515841_37);
Obj _3515843_37 = makeCons(__symbolTable[50], _3515842_37);
Obj _3515844_37 = makeCons(__symbolTable[51], _3515843_37);
Obj _3515845_37 = makeCons(__symbolTable[52], _3515844_37);
Obj _3515846_37 = makeCons(__symbolTable[72], _3515845_37);
Obj _3515847_37 = makeCons(__symbolTable[74], _3515846_37);
Obj _3515848_37 = makeCons(__symbolTable[73], _3515847_37);
Obj _3515849_37 = makeCons(__symbolTable[161], _3515848_37);
Obj _3515850_37 = makeCons(__symbolTable[54], _3515849_37);
Obj _3515851_37 = makeCons(__symbolTable[121], _3515850_37);
Obj _3515852_37 = makeCons(__symbolTable[131], _3515851_37);
Obj _3515853_37 = makeCons(__symbolTable[151], _3515852_37);
Obj _3515854_37 = makeCons(__symbolTable[154], _3515853_37);
Obj _3515855_37 = makeCons(__symbolTable[155], _3515854_37);
Obj _3515856_37 = makeCons(__symbolTable[156], _3515855_37);
Obj _3515857_37 = makeCons(__symbolTable[157], _3515856_37);
Obj _3515858_37 = makeCons(__symbolTable[158], _3515857_37);
Obj _3515859_37 = makeCons(__symbolTable[159], _3515858_37);
Obj _3515860_37 = makeCons(__symbolTable[160], _3515859_37);
Obj _3515861_37 = primSet(co, __symbolTable[53], _3515860_37);
Obj _3515862_37 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj _3515863_37 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj _3515864_37 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj _3515865_37 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj _3515866_37 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj _3515867_37 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj _3515868_37 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj _3515869_37 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj _3515870_37 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj _3515871_37 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj _3515872_37 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj _3515873_37 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj _3515874_37 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj _3515875_37 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj _3515876_37 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj _3515877_37 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj _3515878_37 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj _3515879_37 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj _3515880_37 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj _3515881_37 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj _3515882_37 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj _3515883_37 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj _3515884_37 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj _3515885_37 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj _3515886_37 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj _3515887_37 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj _3515888_37 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj _3515889_37 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj _3515890_37 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj _3515891_37 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj _3515892_37 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj _3515893_37 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj _3515894_37 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj _3515895_37 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj _3515896_37 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj _3515897_37 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj _3515898_37 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj _3515899_37 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj _3515900_37 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
JUMP_RETURN(clofun0, _3515900_37);
}

label16:
{
Obj _3514989_37 = __arg1;
Obj _3514990_37 = __arg2;
Obj _3514991_37 = __arg3;
Obj _3514992_37 = co->args[4];
Obj _3515013_37 = makeNative(20, clofun0, 1, 4, _3514989_37, _3514990_37, _3514991_37, _3514992_37);
pushCont(co, 17, clofun0, 2, _3514992_37, _3515013_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[54]), _3514992_37);
}

label17:
{
Obj _3515818_37 = __arg1;
Obj _3514992_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515013_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515818_37) {
JUMP_WITH_ARGS_2(clofun0, _3515013_37, True);
} else {
Obj _3515819_37 = primIsString(_3514992_37);
if (True == _3515819_37) {
JUMP_WITH_ARGS_2(clofun0, _3515013_37, True);
} else {
pushCont(co, 18, clofun0, 2, _3514992_37, _3515013_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[121]), _3514992_37);
}
}
}

label18:
{
Obj _3515820_37 = __arg1;
Obj _3514992_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515013_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515820_37) {
JUMP_WITH_ARGS_2(clofun0, _3515013_37, True);
} else {
pushCont(co, 19, clofun0, 1, _3515013_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[161]), _3514992_37);
}
}

label19:
{
Obj _3515821_37 = __arg1;
Obj _3515013_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515821_37) {
JUMP_WITH_ARGS_2(clofun0, _3515013_37, True);
} else {
JUMP_WITH_ARGS_2(clofun0, _3515013_37, False);
}
}

label20:
{
Obj _3515014_37 = __arg1;
if (True == _3515014_37) {
JUMP_RETURN(clofun0, closureRef(co, 3));
} else {
Obj _3514994_37 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515806_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3515806_37) {
Obj _3515807_37 = PRIM_CAR(closureRef(co, 3));
Obj _3515808_37 = PRIM_EQ(__symbolTable[139], _3515807_37);
if (True == _3515808_37) {
Obj _3515809_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515810_37 = PRIM_ISCONS(_3515809_37);
if (True == _3515810_37) {
Obj _3515811_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515812_37 = PRIM_CAR(_3515811_37);
Obj x = _3515812_37;
Obj _3515813_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515814_37 = PRIM_CDR(_3515813_37);
Obj _3515815_37 = PRIM_EQ(Nil, _3515814_37);
if (True == _3515815_37) {
Obj _3515816_37 = makeCons(x, Nil);
Obj _3515817_37 = makeCons(__symbolTable[139], _3515816_37);
JUMP_RETURN(clofun0, _3515817_37);
} else {
JUMP_WITH_ARGS_1(clofun0, _3514994_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514994_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514994_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514994_37);
}
}
}

label21:
{
Obj _3515645_37 = primIsSymbol(closureRef(co, 0));
if (True == _3515645_37) {
PUSH_CONT_0(co, 40, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[132]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj _3514996_37 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3515784_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515784_37) {
Obj _3515785_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515786_37 = PRIM_EQ(__symbolTable[140], _3515785_37);
if (True == _3515786_37) {
Obj _3515787_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515788_37 = PRIM_ISCONS(_3515787_37);
if (True == _3515788_37) {
Obj _3515789_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515790_37 = PRIM_CAR(_3515789_37);
Obj args = _3515790_37;
Obj _3515791_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515792_37 = PRIM_CDR(_3515791_37);
Obj _3515793_37 = PRIM_ISCONS(_3515792_37);
if (True == _3515793_37) {
Obj _3515794_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515795_37 = PRIM_CDR(_3515794_37);
Obj _3515796_37 = PRIM_CAR(_3515795_37);
Obj body = _3515796_37;
Obj _3515797_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515798_37 = PRIM_CDR(_3515797_37);
Obj _3515799_37 = PRIM_CDR(_3515798_37);
Obj _3515800_37 = PRIM_EQ(Nil, _3515799_37);
if (True == _3515800_37) {
pushCont(co, 22, clofun0, 2, body, args);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[98]), args, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3514996_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514996_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514996_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514996_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514996_37);
}
}
}

label22:
{
Obj _3515801_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3515801_37;
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
Obj _3515802_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515803_37 = makeCons(_3515802_37, Nil);
Obj _3515804_37 = makeCons(args, _3515803_37);
Obj _3515805_37 = makeCons(__symbolTable[140], _3515804_37);
JUMP_RETURN(clofun0, _3515805_37);
}

label24:
{
Obj _3514997_37 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3515740_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515740_37) {
Obj _3515741_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515742_37 = PRIM_EQ(__symbolTable[90], _3515741_37);
if (True == _3515742_37) {
Obj _3515743_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515744_37 = PRIM_ISCONS(_3515743_37);
if (True == _3515744_37) {
Obj _3515745_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515746_37 = PRIM_CAR(_3515745_37);
Obj _3515747_37 = PRIM_ISCONS(_3515746_37);
if (True == _3515747_37) {
Obj _3515748_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515749_37 = PRIM_CAR(_3515748_37);
Obj _3515750_37 = PRIM_CAR(_3515749_37);
Obj _3515751_37 = PRIM_EQ(__symbolTable[81], _3515750_37);
if (True == _3515751_37) {
Obj _3515752_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515753_37 = PRIM_CAR(_3515752_37);
Obj _3515754_37 = PRIM_CDR(_3515753_37);
Obj _3515755_37 = PRIM_ISCONS(_3515754_37);
if (True == _3515755_37) {
Obj _3515756_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515757_37 = PRIM_CAR(_3515756_37);
Obj _3515758_37 = PRIM_CDR(_3515757_37);
Obj _3515759_37 = PRIM_CAR(_3515758_37);
Obj pkg = _3515759_37;
Obj _3515760_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515761_37 = PRIM_CAR(_3515760_37);
Obj _3515762_37 = PRIM_CDR(_3515761_37);
Obj _3515763_37 = PRIM_CDR(_3515762_37);
Obj _3515764_37 = PRIM_EQ(Nil, _3515763_37);
if (True == _3515764_37) {
Obj _3515765_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515766_37 = PRIM_CDR(_3515765_37);
Obj _3515767_37 = PRIM_ISCONS(_3515766_37);
if (True == _3515767_37) {
Obj _3515768_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515769_37 = PRIM_CDR(_3515768_37);
Obj _3515770_37 = PRIM_CAR(_3515769_37);
Obj y = _3515770_37;
Obj _3515771_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515772_37 = PRIM_CDR(_3515771_37);
Obj _3515773_37 = PRIM_CDR(_3515772_37);
Obj _3515774_37 = PRIM_EQ(Nil, _3515773_37);
if (True == _3515774_37) {
Obj _3515775_37 = primIsString(pkg);
if (True == _3515775_37) {
Obj _3515776_37 = makeCons(pkg, Nil);
Obj _3515777_37 = makeCons(__symbolTable[81], _3515776_37);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = _3515777_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514997_37);
}
}

label25:
{
Obj _3515778_37 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515779_37 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, _3515778_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3515779_37;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3515780_37 = __arg1;
Obj _3515778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515781_37 = makeCons(_3515780_37, Nil);
Obj _3515782_37 = makeCons(_3515778_37, _3515781_37);
Obj _3515783_37 = makeCons(__symbolTable[90], _3515782_37);
JUMP_RETURN(clofun0, _3515783_37);
}

label27:
{
Obj _3514998_37 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3515732_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515732_37) {
Obj _3515733_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3515733_37;
Obj _3515734_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515734_37;
Obj _3515015_37 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, _3514998_37);
Obj _3515738_37 = PRIM_EQ(op, __symbolTable[126]);
if (True == _3515738_37) {
JUMP_WITH_ARGS_2(clofun0, _3515015_37, True);
} else {
Obj _3515739_37 = PRIM_EQ(op, __symbolTable[90]);
if (True == _3515739_37) {
JUMP_WITH_ARGS_2(clofun0, _3515015_37, True);
} else {
JUMP_WITH_ARGS_2(clofun0, _3515015_37, False);
}
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514998_37);
}
}

label28:
{
Obj _3515016_37 = __arg1;
if (True == _3515016_37) {
PUSH_CONT_0(co, 29, clofun0);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[93]), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
} else {
JUMP_WITH_ARGS_1(clofun0, closureRef(co, 5));
}
}

label29:
{
Obj _3515735_37 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[147]), _3515735_37, closureRef(co, 4));
}

label30:
{
Obj _3515736_37 = __arg1;
Obj _3515737_37 = makeCons(closureRef(co, 0), _3515736_37);
JUMP_RETURN(clofun0, _3515737_37);
}

label31:
{
Obj _3514999_37 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _3515699_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515699_37) {
Obj _3515700_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515701_37 = PRIM_EQ(__symbolTable[129], _3515700_37);
if (True == _3515701_37) {
Obj _3515702_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515703_37 = PRIM_ISCONS(_3515702_37);
if (True == _3515703_37) {
Obj _3515704_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515705_37 = PRIM_CAR(_3515704_37);
Obj a = _3515705_37;
Obj _3515706_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515707_37 = PRIM_CDR(_3515706_37);
Obj _3515708_37 = PRIM_ISCONS(_3515707_37);
if (True == _3515708_37) {
Obj _3515709_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515710_37 = PRIM_CDR(_3515709_37);
Obj _3515711_37 = PRIM_CAR(_3515710_37);
Obj b = _3515711_37;
Obj _3515712_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515713_37 = PRIM_CDR(_3515712_37);
Obj _3515714_37 = PRIM_CDR(_3515713_37);
Obj _3515715_37 = PRIM_ISCONS(_3515714_37);
if (True == _3515715_37) {
Obj _3515716_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515717_37 = PRIM_CDR(_3515716_37);
Obj _3515718_37 = PRIM_CDR(_3515717_37);
Obj _3515719_37 = PRIM_CAR(_3515718_37);
Obj c = _3515719_37;
Obj _3515720_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515721_37 = PRIM_CDR(_3515720_37);
Obj _3515722_37 = PRIM_CDR(_3515721_37);
Obj _3515723_37 = PRIM_CDR(_3515722_37);
Obj _3515724_37 = PRIM_EQ(Nil, _3515723_37);
if (True == _3515724_37) {
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
JUMP_WITH_ARGS_1(clofun0, _3514999_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514999_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514999_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514999_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514999_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514999_37);
}
}

label32:
{
Obj _3515725_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515726_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, _3515725_37, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3515726_37;
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
Obj _3515727_37 = __arg1;
Obj _3515725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515728_37 = makeCons(_3515727_37, Nil);
Obj _3515729_37 = makeCons(_3515725_37, _3515728_37);
Obj _3515730_37 = makeCons(a, _3515729_37);
Obj _3515731_37 = makeCons(__symbolTable[129], _3515730_37);
JUMP_RETURN(clofun0, _3515731_37);
}

label34:
{
Obj _3515000_37 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj _3515673_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3515673_37) {
Obj _3515674_37 = PRIM_CAR(closureRef(co, 2));
Obj _3515675_37 = PRIM_EQ(__symbolTable[78], _3515674_37);
if (True == _3515675_37) {
Obj _3515676_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515677_37 = PRIM_ISCONS(_3515676_37);
if (True == _3515677_37) {
Obj _3515678_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515679_37 = PRIM_CAR(_3515678_37);
Obj path = _3515679_37;
Obj _3515680_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515681_37 = PRIM_CDR(_3515680_37);
Obj _3515682_37 = PRIM_ISCONS(_3515681_37);
if (True == _3515682_37) {
Obj _3515683_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515684_37 = PRIM_CDR(_3515683_37);
Obj _3515685_37 = PRIM_CAR(_3515684_37);
Obj import = _3515685_37;
Obj _3515686_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515687_37 = PRIM_CDR(_3515686_37);
Obj _3515688_37 = PRIM_CDR(_3515687_37);
Obj _3515689_37 = PRIM_ISCONS(_3515688_37);
if (True == _3515689_37) {
Obj _3515690_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515691_37 = PRIM_CDR(_3515690_37);
Obj _3515692_37 = PRIM_CDR(_3515691_37);
Obj _3515693_37 = PRIM_CAR(_3515692_37);
Obj body = _3515693_37;
Obj _3515694_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515695_37 = PRIM_CDR(_3515694_37);
Obj _3515696_37 = PRIM_CDR(_3515695_37);
Obj _3515697_37 = PRIM_CDR(_3515696_37);
Obj _3515698_37 = PRIM_EQ(Nil, _3515697_37);
if (True == _3515698_37) {
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
JUMP_WITH_ARGS_1(clofun0, _3515000_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515000_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515000_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515000_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515000_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515000_37);
}
}

label35:
{
Obj _3515001_37 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj _3515649_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515649_37) {
Obj _3515650_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515651_37 = PRIM_EQ(__symbolTable[133], _3515650_37);
if (True == _3515651_37) {
Obj _3515652_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515653_37 = PRIM_ISCONS(_3515652_37);
if (True == _3515653_37) {
Obj _3515654_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515655_37 = PRIM_CAR(_3515654_37);
Obj var = _3515655_37;
Obj _3515656_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515657_37 = PRIM_CDR(_3515656_37);
Obj _3515658_37 = PRIM_ISCONS(_3515657_37);
if (True == _3515658_37) {
Obj _3515659_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515660_37 = PRIM_CDR(_3515659_37);
Obj _3515661_37 = PRIM_CAR(_3515660_37);
Obj val = _3515661_37;
Obj _3515662_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515663_37 = PRIM_CDR(_3515662_37);
Obj _3515664_37 = PRIM_CDR(_3515663_37);
Obj _3515665_37 = PRIM_EQ(Nil, _3515664_37);
if (True == _3515665_37) {
pushCont(co, 36, clofun0, 1, val);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[76]), var, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun0, _3515001_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515001_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515001_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515001_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3515001_37);
}
}

label36:
{
Obj _3515666_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = _3515666_37;
Obj _3515667_37 = makeCons(var1, Nil);
Obj _3515668_37 = makeCons(__symbolTable[139], _3515667_37);
pushCont(co, 37, clofun0, 1, _3515668_37);
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
Obj _3515669_37 = __arg1;
Obj _3515668_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515670_37 = makeCons(_3515669_37, Nil);
Obj _3515671_37 = makeCons(_3515668_37, _3515670_37);
Obj _3515672_37 = makeCons(__symbolTable[68], _3515671_37);
JUMP_RETURN(clofun0, _3515672_37);
}

label38:
{
PUSH_CONT_0(co, 39, clofun0);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[93]), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
}

label39:
{
Obj _3515648_37 = __arg1;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[147]), _3515648_37, closureRef(co, 3));
}

label40:
{
Obj _3515646_37 = __arg1;
if (True == _3515646_37) {
JUMP_RETURN(clofun0, closureRef(co, 0));
} else {
PUSH_CONT_0(co, 41, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[55]), closureRef(co, 0));
}
}

label41:
{
Obj _3515647_37 = __arg1;
if (True == _3515647_37) {
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
Obj _3515641_37 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[161]), _3515641_37);
}

label44:
{
Obj _3515642_37 = __arg1;
Obj _3515643_37 = primNot(_3515642_37);
JUMP_RETURN(clofun0, _3515643_37);
}

label45:
{
Obj _3514984_37 = __arg1;
Obj _3514985_37 = __arg2;
Obj _3515626_37 = PRIM_EQ(Nil, _3514985_37);
if (True == _3515626_37) {
JUMP_RETURN(clofun0, Nil);
} else {
Obj _3514987_37 = makeNative(46, clofun0, 0, 2, _3514985_37, _3514984_37);
Obj _3515630_37 = PRIM_ISCONS(_3514985_37);
if (True == _3515630_37) {
Obj _3515631_37 = PRIM_CAR(_3514985_37);
Obj _3515632_37 = PRIM_ISCONS(_3515631_37);
if (True == _3515632_37) {
Obj _3515633_37 = PRIM_CAR(_3514985_37);
Obj _3515634_37 = PRIM_CAR(_3515633_37);
Obj x = _3515634_37;
Obj _3515635_37 = PRIM_CAR(_3514985_37);
Obj _3515636_37 = PRIM_CDR(_3515635_37);
Obj y = _3515636_37;
Obj _3515637_37 = PRIM_CDR(_3514985_37);
Obj _3515638_37 = PRIM_EQ(_3514984_37, x);
if (True == _3515638_37) {
Obj _3515639_37 = makeCons(x, y);
JUMP_RETURN(clofun0, _3515639_37);
} else {
JUMP_WITH_ARGS_1(clofun0, _3514987_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514987_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514987_37);
}
}
}

label46:
{
Obj _3515627_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515627_37) {
Obj _3515628_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515629_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3515629_37;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[56]), closureRef(co, 1), y);
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label47:
{
Obj _3514979_37 = __arg1;
Obj _3514980_37 = __arg2;
Obj _3514981_37 = __arg3;
Obj _3515545_37 = PRIM_EQ(Nil, _3514981_37);
if (True == _3515545_37) {
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[76]), _3514979_37, _3514980_37);
} else {
Obj _3515546_37 = PRIM_ISCONS(_3514981_37);
if (True == _3515546_37) {
Obj _3515547_37 = PRIM_CAR(_3514981_37);
Obj import = _3515547_37;
Obj _3515548_37 = PRIM_CDR(_3514981_37);
Obj more = _3515548_37;
pushCont(co, 48, clofun0, 4, import, _3514979_37, _3514980_37, more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[73]), import, makeCString("#*ns-export*"));
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}
}

label48:
{
Obj _3515549_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514979_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514980_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, _3514979_37, _3514980_37, more);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[74]), _3515549_37);
}

label49:
{
Obj _3515550_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514979_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514980_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, _3514979_37, _3514980_37, more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[70]), _3515550_37, Nil);
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
Obj _3515551_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514979_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514980_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = _3515551_37;
pushCont(co, 1, clofun1, 4, import, _3514979_37, _3514980_37, more);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[132]), _3514979_37, export);
}

label1:
{
Obj _3515552_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514979_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514980_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3515552_37) {
pushCont(co, 2, clofun1, 1, import);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3514979_37);
} else {
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[71]), _3514979_37, _3514980_37, more);
}
}

label2:
{
Obj _3515553_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), makeCString("#"), _3515553_37);
}

label3:
{
Obj _3515554_37 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), import, _3515554_37);
}

label4:
{
Obj _3515555_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[74]), _3515555_37);
}

label5:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _3515539_37 = PRIM_EQ(ns, makeCString(""));
if (True == _3515539_37) {
JUMP_RETURN(clofun1, var);
} else {
pushCont(co, 6, clofun1, 2, var, ns);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[75]), var);
}
}

label6:
{
Obj _3515540_37 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515540_37) {
JUMP_RETURN(clofun1, var);
} else {
pushCont(co, 7, clofun1, 1, ns);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), var);
}
}

label7:
{
Obj _3515541_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), makeCString("#"), _3515541_37);
}

label8:
{
Obj _3515542_37 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), ns, _3515542_37);
}

label9:
{
Obj _3515543_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[74]), _3515543_37);
}

label10:
{
Obj sexp = __arg1;
pushCont(co, 11, clofun1, 1, sexp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), sexp);
}

label11:
{
Obj _3515519_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = _3515519_37;
pushCont(co, 12, clofun1, 1, path);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), sexp);
}

label12:
{
Obj _3515520_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[80]), _3515520_37);
}

label13:
{
Obj _3515521_37 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun1, _3515521_37, makeNative(14, clofun1, 3, 1, path));
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _3515522_37 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, _3515522_37);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[147]), makeNative(17, clofun1, 1, 0), import);
}

label15:
{
Obj _3515525_37 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515522_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515526_37 = makeCons(export, Nil);
Obj _3515527_37 = makeCons(__symbolTable[86], _3515526_37);
Obj _3515528_37 = makeCons(_3515527_37, Nil);
Obj _3515529_37 = makeCons(__symbolTable[77], _3515528_37);
Obj _3515530_37 = makeCons(__symbolTable[133], _3515529_37);
Obj _3515531_37 = makeCons(_3515530_37, body);
pushCont(co, 16, clofun1, 1, _3515522_37);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[98]), _3515525_37, _3515531_37);
}

label16:
{
Obj _3515532_37 = __arg1;
Obj _3515522_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515533_37 = makeCons(__symbolTable[89], _3515532_37);
Obj _3515534_37 = makeCons(_3515533_37, Nil);
Obj _3515535_37 = makeCons(_3515522_37, _3515534_37);
Obj _3515536_37 = makeCons(closureRef(co, 0), _3515535_37);
Obj _3515537_37 = makeCons(__symbolTable[78], _3515536_37);
JUMP_RETURN(clofun1, _3515537_37);
}

label17:
{
Obj imp = __arg1;
Obj _3515523_37 = makeCons(imp, Nil);
Obj _3515524_37 = makeCons(__symbolTable[81], _3515523_37);
JUMP_RETURN(clofun1, _3515524_37);
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
Obj _3514972_37 = __arg1;
Obj _3514973_37 = __arg2;
Obj _3514974_37 = __arg3;
Obj _3514975_37 = co->args[4];
Obj _3514976_37 = makeNative(20, clofun1, 0, 4, _3514974_37, _3514972_37, _3514973_37, _3514975_37);
Obj _3515499_37 = PRIM_ISCONS(_3514972_37);
if (True == _3515499_37) {
Obj _3515500_37 = PRIM_CAR(_3514972_37);
Obj _3515501_37 = PRIM_ISCONS(_3515500_37);
if (True == _3515501_37) {
Obj _3515502_37 = PRIM_CAR(_3514972_37);
Obj _3515503_37 = PRIM_CAR(_3515502_37);
Obj _3515504_37 = PRIM_EQ(__symbolTable[81], _3515503_37);
if (True == _3515504_37) {
Obj _3515505_37 = PRIM_CAR(_3514972_37);
Obj _3515506_37 = PRIM_CDR(_3515505_37);
Obj _3515507_37 = PRIM_ISCONS(_3515506_37);
if (True == _3515507_37) {
Obj _3515508_37 = PRIM_CAR(_3514972_37);
Obj _3515509_37 = PRIM_CDR(_3515508_37);
Obj _3515510_37 = PRIM_CAR(_3515509_37);
Obj lib = _3515510_37;
Obj _3515511_37 = PRIM_CAR(_3514972_37);
Obj _3515512_37 = PRIM_CDR(_3515511_37);
Obj _3515513_37 = PRIM_CDR(_3515512_37);
Obj _3515514_37 = PRIM_EQ(Nil, _3515513_37);
if (True == _3515514_37) {
Obj _3515515_37 = PRIM_CDR(_3514972_37);
Obj rest = _3515515_37;
Obj _3515516_37 = makeCons(lib, _3514973_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = _3515516_37;
__arg3 = _3514974_37;
co->args[4] = _3514975_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun1, _3514976_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514976_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514976_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514976_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514976_37);
}
}

label20:
{
Obj _3514977_37 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj _3515490_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3515490_37) {
Obj _3515491_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515492_37 = PRIM_ISCONS(_3515491_37);
if (True == _3515492_37) {
Obj _3515493_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515494_37 = PRIM_CAR(_3515493_37);
Obj _3515495_37 = PRIM_EQ(__symbolTable[82], _3515494_37);
if (True == _3515495_37) {
Obj _3515496_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515497_37 = PRIM_CDR(_3515496_37);
Obj more = _3515497_37;
Obj _3515498_37 = PRIM_CDR(closureRef(co, 1));
Obj rest = _3515498_37;
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
JUMP_WITH_ARGS_1(clofun1, _3514977_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514977_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514977_37);
}
}

label21:
{
PUSH_CONT_0(co, 22, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[149]), closureRef(co, 1));
}

label22:
{
Obj _3515489_37 = __arg1;
JUMP_WITH_ARGS_4(clofun1, closureRef(co, 0), _3515489_37, closureRef(co, 2), closureRef(co, 3));
}

label23:
{
Obj exp = __arg1;
pushCont(co, 24, clofun1, 1, exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), exp);
}

label24:
{
Obj _3515486_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, _3515486_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), exp);
}

label25:
{
Obj _3515487_37 = __arg1;
Obj _3515486_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[85]), _3515486_37, _3515487_37);
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
Obj _3515472_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[161]), _3515472_37);
}

label28:
{
Obj _3515473_37 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515473_37) {
Obj _3515474_37 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, _3515474_37, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), arglist);
} else {
Obj _3515479_37 = PRIM_CAR(arglist);
Obj _3515480_37 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, _3515479_37, fn);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[85]), fn, _3515480_37);
}
}

label29:
{
Obj _3515481_37 = __arg1;
Obj _3515479_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515482_37 = makeCons(_3515481_37, Nil);
Obj _3515483_37 = makeCons(_3515479_37, _3515482_37);
Obj _3515484_37 = makeCons(fn, _3515483_37);
JUMP_RETURN(clofun1, _3515484_37);
}

label30:
{
Obj _3515475_37 = __arg1;
Obj _3515474_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515476_37 = makeCons(_3515475_37, Nil);
Obj _3515477_37 = makeCons(_3515474_37, _3515476_37);
Obj _3515478_37 = makeCons(fn, _3515477_37);
JUMP_RETURN(clofun1, _3515478_37);
}

label31:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 32, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), exp);
}

label32:
{
Obj _3515470_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[88]), _3515470_37);
}

label33:
{
Obj _3514967_37 = __arg1;
Obj _3515450_37 = primIsSymbol(_3514967_37);
if (True == _3515450_37) {
Obj _3515451_37 = makeCons(_3514967_37, Nil);
Obj _3515452_37 = makeCons(__symbolTable[139], _3515451_37);
JUMP_RETURN(clofun1, _3515452_37);
} else {
Obj _3514969_37 = makeNative(34, clofun1, 0, 1, _3514967_37);
Obj _3515459_37 = PRIM_ISCONS(_3514967_37);
if (True == _3515459_37) {
Obj _3515460_37 = PRIM_CAR(_3514967_37);
Obj _3515461_37 = PRIM_EQ(__symbolTable[87], _3515460_37);
if (True == _3515461_37) {
Obj _3515462_37 = PRIM_CDR(_3514967_37);
Obj _3515463_37 = PRIM_ISCONS(_3515462_37);
if (True == _3515463_37) {
Obj _3515464_37 = PRIM_CDR(_3514967_37);
Obj _3515465_37 = PRIM_CAR(_3515464_37);
Obj x = _3515465_37;
Obj _3515466_37 = PRIM_CDR(_3514967_37);
Obj _3515467_37 = PRIM_CDR(_3515466_37);
Obj _3515468_37 = PRIM_EQ(Nil, _3515467_37);
if (True == _3515468_37) {
JUMP_RETURN(clofun1, x);
} else {
JUMP_WITH_ARGS_1(clofun1, _3514969_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514969_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514969_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514969_37);
}
}
}

label34:
{
Obj _3515453_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515453_37) {
Obj _3515454_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3515454_37;
Obj _3515455_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515455_37;
Obj _3515456_37 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), _3515456_37);
} else {
JUMP_RETURN(clofun1, closureRef(co, 0));
}
}

label35:
{
Obj _3515457_37 = __arg1;
Obj _3515458_37 = makeCons(__symbolTable[135], _3515457_37);
JUMP_RETURN(clofun1, _3515458_37);
}

label36:
{
Obj exp = __arg1;
Obj _3515448_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[91]), _3515448_37);
}

label37:
{
Obj _3514963_37 = __arg1;
Obj _3514964_37 = makeNative(38, clofun1, 0, 1, _3514963_37);
Obj _3515443_37 = PRIM_ISCONS(_3514963_37);
if (True == _3515443_37) {
Obj _3515444_37 = PRIM_CAR(_3514963_37);
Obj x = _3515444_37;
Obj _3515445_37 = PRIM_CDR(_3514963_37);
Obj _3515446_37 = PRIM_EQ(Nil, _3515445_37);
if (True == _3515446_37) {
JUMP_RETURN(clofun1, x);
} else {
JUMP_WITH_ARGS_1(clofun1, _3514964_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514964_37);
}
}

label38:
{
Obj _3514965_37 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj _3515431_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515431_37) {
Obj _3515432_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3515432_37;
Obj _3515433_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515434_37 = PRIM_ISCONS(_3515433_37);
if (True == _3515434_37) {
Obj _3515435_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515436_37 = PRIM_CAR(_3515435_37);
Obj y = _3515436_37;
Obj _3515437_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515438_37 = PRIM_CDR(_3515437_37);
Obj _3515439_37 = PRIM_EQ(Nil, _3515438_37);
if (True == _3515439_37) {
Obj _3515440_37 = makeCons(y, Nil);
Obj _3515441_37 = makeCons(x, _3515440_37);
Obj _3515442_37 = makeCons(__symbolTable[90], _3515441_37);
JUMP_RETURN(clofun1, _3515442_37);
} else {
JUMP_WITH_ARGS_1(clofun1, _3514965_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514965_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514965_37);
}
}

label39:
{
Obj _3515424_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515424_37) {
Obj _3515425_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3515425_37;
Obj _3515426_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3515426_37;
pushCont(co, 40, clofun1, 1, x);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[91]), y);
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label40:
{
Obj _3515427_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515428_37 = makeCons(_3515427_37, Nil);
Obj _3515429_37 = makeCons(x, _3515428_37);
Obj _3515430_37 = makeCons(__symbolTable[90], _3515429_37);
JUMP_RETURN(clofun1, _3515430_37);
}

label41:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 42, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[141]), exp);
}

label42:
{
Obj _3515421_37 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[94]), _3515421_37);
}

label43:
{
Obj _3515422_37 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[92]), _3515422_37);
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
Obj _3515406_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[104]), _3515406_37);
}

label48:
{
Obj _3515407_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = _3515407_37;
pushCont(co, 49, clofun1, 2, exp, body);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[97]), body);
}

label49:
{
Obj _3515408_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = _3515408_37;
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
Obj _3515409_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = _3515409_37;
pushCont(co, 1, clofun2, 2, body, args);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), exp);
}

label1:
{
Obj _3515410_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515411_37 = makeCons(__symbolTable[135], args);
Obj _3515412_37 = makeCons(_3515411_37, body);
Obj _3515413_37 = makeCons(__symbolTable[107], _3515412_37);
Obj _3515414_37 = makeCons(_3515413_37, Nil);
Obj _3515415_37 = makeCons(args, _3515414_37);
Obj _3515416_37 = makeCons(_3515410_37, _3515415_37);
Obj _3515417_37 = makeCons(__symbolTable[134], _3515416_37);
JUMP_RETURN(clofun2, _3515417_37);
}

label2:
{
Obj n = __arg1;
Obj _3515400_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3515400_37) {
JUMP_RETURN(clofun2, Nil);
} else {
Obj _3515401_37 = primGenSym();
Obj _3515402_37 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, _3515401_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[96]), _3515402_37);
}
}

label3:
{
Obj _3515403_37 = __arg1;
Obj _3515401_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515404_37 = makeCons(_3515401_37, _3515403_37);
JUMP_RETURN(clofun2, _3515404_37);
}

label4:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 5, clofun2);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[103]), Nil, rules);
}

label5:
{
Obj _3515389_37 = __arg1;
Obj pats = _3515389_37;
PUSH_CONT_0(co, 6, clofun2);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[147]), makeNative(10, clofun2, 1, 0), pats);
}

label6:
{
Obj _3515391_37 = __arg1;
Obj counts = _3515391_37;
Obj _3515392_37 = PRIM_CAR(counts);
Obj n = _3515392_37;
Obj _3515395_37 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[99]), makeNative(9, clofun2, 1, 1, n), _3515395_37);
}

label7:
{
Obj _3515396_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[161]), _3515396_37);
}

label8:
{
Obj _3515397_37 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515398_37 = primNot(_3515397_37);
if (True == _3515398_37) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("inconsistent func rule args count"));
} else {
JUMP_RETURN(clofun2, n);
}
}

label9:
{
Obj x = __arg1;
Obj _3515393_37 = PRIM_EQ(closureRef(co, 0), x);
Obj _3515394_37 = primNot(_3515393_37);
JUMP_RETURN(clofun2, _3515394_37);
}

label10:
{
Obj x = __arg1;
Obj _3515390_37 = PRIM_CDR(x);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[101]), _3515390_37);
}

label11:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _3515383_37 = PRIM_EQ(l1, Nil);
if (True == _3515383_37) {
JUMP_RETURN(clofun2, l2);
} else {
Obj _3515384_37 = PRIM_CAR(l1);
Obj _3515385_37 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, _3515384_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[98]), _3515385_37, l2);
}
}

label12:
{
Obj _3515386_37 = __arg1;
Obj _3515384_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515387_37 = makeCons(_3515384_37, _3515386_37);
JUMP_RETURN(clofun2, _3515387_37);
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
Obj _3515374_37 = PRIM_ISCONS(l);
if (True == _3515374_37) {
Obj _3515375_37 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
JUMP_WITH_ARGS_2(clofun2, fn, _3515375_37);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), res);
}
}

label15:
{
Obj _3515376_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3515376_37) {
Obj _3515377_37 = PRIM_CAR(l);
Obj _3515378_37 = makeCons(_3515377_37, res);
Obj _3515379_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), _3515378_37, fn, _3515379_37);
} else {
Obj _3515380_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), res, fn, _3515380_37);
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
Obj _3515369_37 = PRIM_EQ(l, Nil);
if (True == _3515369_37) {
JUMP_RETURN(clofun2, i);
} else {
Obj _3515370_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3515371_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[102]), _3515370_37, _3515371_37);
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
Obj _3515364_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515364_37) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), res);
} else {
Obj _3515365_37 = PRIM_CAR(rules);
Obj _3515366_37 = makeCons(_3515365_37, res);
pushCont(co, 20, clofun2, 1, _3515366_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[157]), rules);
}
}

label20:
{
Obj _3515367_37 = __arg1;
Obj _3515366_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[103]), _3515366_37, _3515367_37);
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
Obj _3515311_37 = PRIM_EQ(Nil, input);
if (True == _3515311_37) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), result);
} else {
Obj _3514960_37 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj _3515329_37 = PRIM_ISCONS(input);
if (True == _3515329_37) {
Obj _3515330_37 = PRIM_CAR(input);
Obj _3515331_37 = PRIM_EQ(__symbolTable[105], _3515330_37);
if (True == _3515331_37) {
Obj _3515332_37 = PRIM_CDR(input);
Obj _3515333_37 = PRIM_ISCONS(_3515332_37);
if (True == _3515333_37) {
Obj _3515334_37 = PRIM_CDR(input);
Obj _3515335_37 = PRIM_CAR(_3515334_37);
Obj act = _3515335_37;
Obj _3515336_37 = PRIM_CDR(input);
Obj _3515337_37 = PRIM_CDR(_3515336_37);
Obj _3515338_37 = PRIM_ISCONS(_3515337_37);
if (True == _3515338_37) {
Obj _3515339_37 = PRIM_CDR(input);
Obj _3515340_37 = PRIM_CDR(_3515339_37);
Obj _3515341_37 = PRIM_CAR(_3515340_37);
Obj _3515342_37 = PRIM_EQ(__symbolTable[110], _3515341_37);
if (True == _3515342_37) {
Obj _3515343_37 = PRIM_CDR(input);
Obj _3515344_37 = PRIM_CDR(_3515343_37);
Obj _3515345_37 = PRIM_CDR(_3515344_37);
Obj _3515346_37 = PRIM_ISCONS(_3515345_37);
if (True == _3515346_37) {
Obj _3515347_37 = PRIM_CDR(input);
Obj _3515348_37 = PRIM_CDR(_3515347_37);
Obj _3515349_37 = PRIM_CDR(_3515348_37);
Obj _3515350_37 = PRIM_CAR(_3515349_37);
Obj pred = _3515350_37;
Obj _3515351_37 = PRIM_CDR(input);
Obj _3515352_37 = PRIM_CDR(_3515351_37);
Obj _3515353_37 = PRIM_CDR(_3515352_37);
Obj _3515354_37 = PRIM_CDR(_3515353_37);
Obj remain = _3515354_37;
pushCont(co, 23, clofun2, 4, act, pred, result, remain);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), current);
} else {
JUMP_WITH_ARGS_1(clofun2, _3514960_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514960_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514960_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514960_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514960_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514960_37);
}
}
}

label23:
{
Obj _3515355_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3515356_37 = makeCons(__symbolTable[135], _3515355_37);
Obj pat = _3515356_37;
Obj _3515357_37 = makeCons(act, Nil);
Obj _3515358_37 = makeCons(pred, _3515357_37);
Obj _3515359_37 = makeCons(__symbolTable[110], _3515358_37);
Obj _3515360_37 = makeCons(pat, result);
Obj _3515361_37 = makeCons(_3515359_37, _3515360_37);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), remain, Nil, _3515361_37);
}

label24:
{
Obj _3514961_37 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515316_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515316_37) {
Obj _3515317_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515318_37 = PRIM_EQ(__symbolTable[105], _3515317_37);
if (True == _3515318_37) {
Obj _3515319_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515320_37 = PRIM_ISCONS(_3515319_37);
if (True == _3515320_37) {
Obj _3515321_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515322_37 = PRIM_CAR(_3515321_37);
Obj act = _3515322_37;
Obj _3515323_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515324_37 = PRIM_CDR(_3515323_37);
Obj remain = _3515324_37;
pushCont(co, 25, clofun2, 2, act, remain);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun2, _3514961_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514961_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514961_37);
}
}

label25:
{
Obj _3515325_37 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515326_37 = makeCons(__symbolTable[135], _3515325_37);
Obj pat = _3515326_37;
Obj _3515327_37 = makeCons(pat, closureRef(co, 2));
Obj _3515328_37 = makeCons(act, _3515327_37);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), remain, Nil, _3515328_37);
}

label26:
{
Obj _3515312_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515312_37) {
Obj _3515313_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3515313_37;
Obj _3515314_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3515314_37;
Obj _3515315_37 = makeCons(x, closureRef(co, 1));
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), y, _3515315_37, closureRef(co, 2));
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
Obj _3515296_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[138]), _3515296_37);
}

label30:
{
Obj _3515297_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = _3515297_37;
pushCont(co, 31, clofun2, 1, value);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[157]), exp);
}

label31:
{
Obj _3515298_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = _3515298_37;
Obj _3515011_37 = makeNative(32, clofun2, 1, 2, value, rules);
Obj _3515305_37 = PRIM_ISCONS(value);
if (True == _3515305_37) {
Obj _3515306_37 = PRIM_CAR(value);
Obj _3515307_37 = PRIM_EQ(__symbolTable[152], _3515306_37);
Obj _3515308_37 = primNot(_3515307_37);
if (True == _3515308_37) {
JUMP_WITH_ARGS_2(clofun2, _3515011_37, True);
} else {
JUMP_WITH_ARGS_2(clofun2, _3515011_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun2, _3515011_37, False);
}
}

label32:
{
Obj _3515012_37 = __arg1;
if (True == _3515012_37) {
Obj _3515299_37 = primGenSym();
Obj val = _3515299_37;
pushCont(co, 33, clofun2, 1, val);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), val, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), closureRef(co, 0), closureRef(co, 1));
}
}

label33:
{
Obj _3515300_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515301_37 = makeCons(_3515300_37, Nil);
Obj _3515302_37 = makeCons(closureRef(co, 0), _3515301_37);
Obj _3515303_37 = makeCons(val, _3515302_37);
Obj _3515304_37 = makeCons(__symbolTable[129], _3515303_37);
JUMP_RETURN(clofun2, _3515304_37);
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
Obj _3515274_37 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515274_37) {
Obj _3515275_37 = makeCons(makeCString("no match-help found!"), Nil);
Obj _3515276_37 = makeCons(__symbolTable[127], _3515275_37);
JUMP_RETURN(clofun2, _3515276_37);
} else {
Obj _3515009_37 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, _3515009_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), rules);
}
}

label36:
{
Obj _3515292_37 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515009_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515292_37) {
Obj _3515293_37 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, _3515009_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), _3515293_37);
} else {
JUMP_WITH_ARGS_2(clofun2, _3515009_37, False);
}
}

label37:
{
Obj _3515294_37 = __arg1;
Obj _3515009_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515294_37) {
JUMP_WITH_ARGS_2(clofun2, _3515009_37, True);
} else {
JUMP_WITH_ARGS_2(clofun2, _3515009_37, False);
}
}

label38:
{
Obj _3515010_37 = __arg1;
if (True == _3515010_37) {
Obj _3515277_37 = PRIM_CAR(closureRef(co, 1));
Obj pat = _3515277_37;
Obj _3515278_37 = primGenSym();
Obj cc = _3515278_37;
pushCont(co, 39, clofun2, 2, pat, cc);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[111]), closureRef(co, 1), cc);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("no cond match"));
}
}

label39:
{
Obj _3515279_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = _3515279_37;
pushCont(co, 40, clofun2, 2, action, cc);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[138]), pat);
}

label40:
{
Obj _3515280_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = _3515280_37;
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
Obj _3515281_37 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _3515281_37;
Obj _3515282_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515283_37 = PRIM_CDR(_3515282_37);
pushCont(co, 42, clofun2, 2, curr, cc);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), closureRef(co, 0), _3515283_37);
}

label42:
{
Obj _3515284_37 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _3515284_37;
Obj _3515285_37 = makeCons(rest, Nil);
Obj _3515286_37 = makeCons(Nil, _3515285_37);
Obj _3515287_37 = makeCons(__symbolTable[140], _3515286_37);
Obj _3515288_37 = makeCons(curr, Nil);
Obj _3515289_37 = makeCons(_3515287_37, _3515288_37);
Obj _3515290_37 = makeCons(cc, _3515289_37);
Obj _3515291_37 = makeCons(__symbolTable[129], _3515290_37);
JUMP_RETURN(clofun2, _3515291_37);
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _3515261_37 = PRIM_CDR(rules);
Obj _3515262_37 = PRIM_CAR(_3515261_37);
Obj action = _3515262_37;
Obj _3515007_37 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, _3515007_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), action);
}

label44:
{
Obj _3515270_37 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515007_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515270_37) {
Obj _3515271_37 = PRIM_CAR(action);
Obj _3515272_37 = PRIM_EQ(_3515271_37, __symbolTable[110]);
if (True == _3515272_37) {
JUMP_WITH_ARGS_2(clofun2, _3515007_37, True);
} else {
JUMP_WITH_ARGS_2(clofun2, _3515007_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun2, _3515007_37, False);
}
}

label45:
{
Obj _3515008_37 = __arg1;
if (True == _3515008_37) {
PUSH_CONT_0(co, 46, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), closureRef(co, 1));
} else {
JUMP_RETURN(clofun2, closureRef(co, 1));
}
}

label46:
{
Obj _3515263_37 = __arg1;
pushCont(co, 47, clofun2, 1, _3515263_37);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[156]), closureRef(co, 1));
}

label47:
{
Obj _3515264_37 = __arg1;
Obj _3515263_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515265_37 = makeCons(closureRef(co, 0), Nil);
Obj _3515266_37 = makeCons(_3515265_37, Nil);
Obj _3515267_37 = makeCons(_3515264_37, _3515266_37);
Obj _3515268_37 = makeCons(_3515263_37, _3515267_37);
Obj _3515269_37 = makeCons(__symbolTable[126], _3515268_37);
JUMP_RETURN(clofun2, _3515269_37);
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
Obj _3515231_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3515231_37) {
Obj _3515232_37 = PRIM_EQ(pat, expr);
if (True == _3515232_37) {
JUMP_RETURN(clofun2, body);
} else {
Obj _3515233_37 = makeCons(expr, Nil);
Obj _3515234_37 = makeCons(pat, _3515233_37);
Obj _3515235_37 = makeCons(__symbolTable[113], _3515234_37);
Obj _3515236_37 = makeCons(cc, Nil);
Obj _3515237_37 = makeCons(_3515236_37, Nil);
Obj _3515238_37 = makeCons(body, _3515237_37);
Obj _3515239_37 = makeCons(_3515235_37, _3515238_37);
Obj _3515240_37 = makeCons(__symbolTable[126], _3515239_37);
JUMP_RETURN(clofun2, _3515240_37);
}
} else {
Obj _3515241_37 = primIsSymbol(pat);
if (True == _3515241_37) {
Obj _3515242_37 = makeCons(body, Nil);
Obj _3515243_37 = makeCons(expr, _3515242_37);
Obj _3515244_37 = makeCons(pat, _3515243_37);
Obj _3515245_37 = makeCons(__symbolTable[129], _3515244_37);
JUMP_RETURN(clofun2, _3515245_37);
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
Obj _3515246_37 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _3515246_37) {
Obj _3515247_37 = PRIM_CAR(pat);
Obj _3515248_37 = PRIM_EQ(_3515247_37, __symbolTable[139]);
if (True == _3515248_37) {
Obj _3515249_37 = makeCons(expr, Nil);
Obj _3515250_37 = makeCons(pat, _3515249_37);
Obj _3515251_37 = makeCons(__symbolTable[113], _3515250_37);
Obj _3515252_37 = makeCons(cc, Nil);
Obj _3515253_37 = makeCons(_3515252_37, Nil);
Obj _3515254_37 = makeCons(body, _3515253_37);
Obj _3515255_37 = makeCons(_3515251_37, _3515254_37);
Obj _3515256_37 = makeCons(__symbolTable[126], _3515255_37);
JUMP_RETURN(clofun3, _3515256_37);
} else {
Obj _3515257_37 = PRIM_CAR(pat);
Obj _3515258_37 = PRIM_EQ(_3515257_37, __symbolTable[152]);
if (True == _3515258_37) {
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
Obj _3515259_37 = __arg1;
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[127]), _3515259_37);
}

label2:
{
Obj x = __arg1;
pushCont(co, 3, clofun3, 1, x);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[131]), x);
}

label3:
{
Obj _3515228_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515228_37) {
Obj _3515229_37 = primIsSymbol(x);
Obj _3515230_37 = primNot(_3515229_37);
if (True == _3515230_37) {
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
Obj _3515206_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = _3515206_37;
pushCont(co, 6, clofun3, 4, x, body, cc, expr);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), pat);
}

label6:
{
Obj _3515207_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = _3515207_37;
Obj _3515005_37 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj _3515224_37 = PRIM_ISCONS(expr);
if (True == _3515224_37) {
Obj _3515225_37 = PRIM_CAR(expr);
Obj _3515226_37 = PRIM_EQ(_3515225_37, __symbolTable[152]);
if (True == _3515226_37) {
JUMP_WITH_ARGS_2(clofun3, _3515005_37, True);
} else {
JUMP_WITH_ARGS_2(clofun3, _3515005_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun3, _3515005_37, False);
}
}

label7:
{
Obj _3515006_37 = __arg1;
if (True == _3515006_37) {
PUSH_CONT_0(co, 10, clofun3);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), closureRef(co, 2));
} else {
Obj _3515211_37 = makeCons(closureRef(co, 2), Nil);
Obj _3515212_37 = makeCons(__symbolTable[116], _3515211_37);
Obj _3515213_37 = makeCons(closureRef(co, 2), Nil);
Obj _3515214_37 = makeCons(__symbolTable[115], _3515213_37);
Obj _3515215_37 = makeCons(closureRef(co, 2), Nil);
Obj _3515216_37 = makeCons(__symbolTable[114], _3515215_37);
pushCont(co, 8, clofun3, 2, _3515214_37, _3515212_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = _3515216_37;
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
Obj _3515217_37 = __arg1;
Obj _3515214_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515212_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, _3515212_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = _3515214_37;
__arg3 = _3515217_37;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3515218_37 = __arg1;
Obj _3515212_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515219_37 = makeCons(closureRef(co, 4), Nil);
Obj _3515220_37 = makeCons(_3515219_37, Nil);
Obj _3515221_37 = makeCons(_3515218_37, _3515220_37);
Obj _3515222_37 = makeCons(_3515212_37, _3515221_37);
Obj _3515223_37 = makeCons(__symbolTable[126], _3515222_37);
JUMP_RETURN(clofun3, _3515223_37);
}

label10:
{
Obj _3515208_37 = __arg1;
Obj e1 = _3515208_37;
pushCont(co, 11, clofun3, 1, e1);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), closureRef(co, 2));
}

label11:
{
Obj _3515209_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = _3515209_37;
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
Obj _3515210_37 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = _3515210_37;
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
Obj _3515204_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[120]), _3515204_37);
}

label14:
{
Obj pat = __arg1;
Obj _3515194_37 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[161]), _3515194_37);
}

label15:
{
Obj _3515195_37 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515195_37) {
Obj _3515196_37 = PRIM_CAR(pat);
JUMP_RETURN(clofun3, _3515196_37);
} else {
Obj _3515197_37 = PRIM_CAR(pat);
Obj _3515198_37 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, _3515197_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[120]), _3515198_37);
}
}

label16:
{
Obj _3515199_37 = __arg1;
Obj _3515197_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515200_37 = makeCons(_3515199_37, Nil);
Obj _3515201_37 = makeCons(_3515197_37, _3515200_37);
Obj _3515202_37 = makeCons(__symbolTable[152], _3515201_37);
JUMP_RETURN(clofun3, _3515202_37);
}

label17:
{
Obj x = __arg1;
Obj _3515191_37 = PRIM_EQ(x, True);
if (True == _3515191_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3515192_37 = PRIM_EQ(x, False);
if (True == _3515192_37) {
JUMP_RETURN(clofun3, True);
} else {
JUMP_RETURN(clofun3, False);
}
}
}

label18:
{
Obj exp = __arg1;
Obj _3515189_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[123]), _3515189_37);
}

label19:
{
Obj l = __arg1;
Obj _3515177_37 = PRIM_EQ(Nil, l);
if (True == _3515177_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3515178_37 = PRIM_CAR(l);
Obj _3515179_37 = PRIM_EQ(_3515178_37, False);
if (True == _3515179_37) {
JUMP_RETURN(clofun3, False);
} else {
Obj _3515180_37 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[123]), _3515180_37);
}
}
}

label20:
{
Obj _3515181_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _3515181_37;
Obj _3515182_37 = PRIM_EQ(more, False);
if (True == _3515182_37) {
JUMP_RETURN(clofun3, False);
} else {
Obj _3515183_37 = PRIM_CAR(l);
Obj _3515184_37 = makeCons(False, Nil);
Obj _3515185_37 = makeCons(more, _3515184_37);
Obj _3515186_37 = makeCons(_3515183_37, _3515185_37);
Obj _3515187_37 = makeCons(__symbolTable[126], _3515186_37);
JUMP_RETURN(clofun3, _3515187_37);
}
}

label21:
{
Obj exp = __arg1;
Obj _3515175_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[125]), _3515175_37);
}

label22:
{
Obj l = __arg1;
Obj _3515163_37 = PRIM_EQ(l, Nil);
if (True == _3515163_37) {
JUMP_RETURN(clofun3, False);
} else {
Obj _3515164_37 = PRIM_CAR(l);
Obj _3515165_37 = PRIM_EQ(_3515164_37, True);
if (True == _3515165_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3515166_37 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[125]), _3515166_37);
}
}
}

label23:
{
Obj _3515167_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _3515167_37;
Obj _3515168_37 = PRIM_EQ(more, True);
if (True == _3515168_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3515169_37 = PRIM_CAR(l);
Obj _3515170_37 = makeCons(more, Nil);
Obj _3515171_37 = makeCons(True, _3515170_37);
Obj _3515172_37 = makeCons(_3515169_37, _3515171_37);
Obj _3515173_37 = makeCons(__symbolTable[126], _3515172_37);
JUMP_RETURN(clofun3, _3515173_37);
}
}

label24:
{
Obj exp = __arg1;
Obj _3515149_37 = PRIM_CDR(exp);
Obj _3515150_37 = PRIM_EQ(Nil, _3515149_37);
if (True == _3515150_37) {
Obj _3515151_37 = makeCons(makeCString("no cond match"), Nil);
Obj _3515152_37 = makeCons(__symbolTable[127], _3515151_37);
JUMP_RETURN(clofun3, _3515152_37);
} else {
pushCont(co, 25, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}
}

label25:
{
Obj _3515153_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _3515153_37;
Obj _3515154_37 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, _3515154_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), curr);
}

label26:
{
Obj _3515155_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515154_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, _3515155_37, _3515154_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[157]), exp);
}

label27:
{
Obj _3515156_37 = __arg1;
Obj _3515155_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515154_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515157_37 = makeCons(__symbolTable[128], _3515156_37);
Obj _3515158_37 = makeCons(_3515157_37, Nil);
Obj _3515159_37 = makeCons(_3515155_37, _3515158_37);
Obj _3515160_37 = makeCons(_3515154_37, _3515159_37);
Obj _3515161_37 = makeCons(__symbolTable[126], _3515160_37);
JUMP_RETURN(clofun3, _3515161_37);
}

label28:
{
Obj exp = __arg1;
Obj _3515147_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[130]), _3515147_37);
}

label29:
{
Obj exp = __arg1;
Obj _3515135_37 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[161]), _3515135_37);
}

label30:
{
Obj _3515136_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515136_37) {
Obj _3515137_37 = PRIM_CAR(exp);
JUMP_RETURN(clofun3, _3515137_37);
} else {
Obj _3515138_37 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, _3515138_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}
}

label31:
{
Obj _3515139_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515138_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, _3515139_37, _3515138_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[157]), exp);
}

label32:
{
Obj _3515140_37 = __arg1;
Obj _3515139_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515138_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, _3515139_37, _3515138_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[130]), _3515140_37);
}

label33:
{
Obj _3515141_37 = __arg1;
Obj _3515139_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515138_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515142_37 = makeCons(_3515141_37, Nil);
Obj _3515143_37 = makeCons(_3515139_37, _3515142_37);
Obj _3515144_37 = makeCons(_3515138_37, _3515143_37);
Obj _3515145_37 = makeCons(__symbolTable[129], _3515144_37);
JUMP_RETURN(clofun3, _3515145_37);
}

label34:
{
Obj x = __arg1;
Obj _3515132_37 = PRIM_ISCONS(x);
Obj _3515133_37 = primNot(_3515132_37);
JUMP_RETURN(clofun3, _3515133_37);
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _3515127_37 = PRIM_ISCONS(l);
if (True == _3515127_37) {
Obj _3515128_37 = PRIM_CAR(l);
Obj _3515129_37 = PRIM_EQ(_3515128_37, x);
if (True == _3515129_37) {
JUMP_RETURN(clofun3, True);
} else {
Obj _3515130_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[132]), x, _3515130_37);
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
Obj _3515117_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, _3515117_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label38:
{
Obj _3515118_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515117_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, _3515118_37, _3515117_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[155]), exp);
}

label39:
{
Obj _3515119_37 = __arg1;
Obj _3515118_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515117_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515120_37 = makeCons(_3515119_37, Nil);
Obj _3515121_37 = makeCons(_3515118_37, _3515120_37);
Obj _3515122_37 = makeCons(__symbolTable[140], _3515121_37);
Obj _3515123_37 = makeCons(_3515122_37, Nil);
Obj _3515124_37 = makeCons(_3515117_37, _3515123_37);
Obj _3515125_37 = makeCons(__symbolTable[133], _3515124_37);
JUMP_RETURN(clofun3, _3515125_37);
}

label40:
{
Obj exp = __arg1;
Obj _3515115_37 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[153]), _3515115_37);
}

label41:
{
Obj exp = __arg1;
pushCont(co, 42, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}

label42:
{
Obj _3515103_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515104_37 = makeCons(_3515103_37, Nil);
Obj _3515105_37 = makeCons(__symbolTable[139], _3515104_37);
pushCont(co, 43, clofun3, 2, exp, _3515105_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label43:
{
Obj _3515106_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515105_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, _3515106_37, _3515105_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[154]), exp);
}

label44:
{
Obj _3515107_37 = __arg1;
Obj _3515106_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515105_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515108_37 = makeCons(_3515106_37, _3515107_37);
Obj _3515109_37 = makeCons(__symbolTable[140], _3515108_37);
Obj _3515110_37 = makeCons(_3515109_37, Nil);
Obj _3515111_37 = makeCons(_3515105_37, _3515110_37);
Obj _3515112_37 = makeCons(__symbolTable[144], _3515111_37);
JUMP_RETURN(clofun3, _3515112_37);
}

label45:
{
Obj exp = __arg1;
Obj _3515085_37 = PRIM_ISCONS(exp);
if (True == _3515085_37) {
Obj _3515086_37 = PRIM_CAR(exp);
Obj _3515087_37 = PRIM_EQ(_3515086_37, globalRef(__symbolTable[145]));
if (True == _3515087_37) {
Obj _3515088_37 = PRIM_CDR(exp);
JUMP_RETURN(clofun3, _3515088_37);
} else {
Obj _3515089_37 = PRIM_CAR(exp);
Obj _3515090_37 = PRIM_EQ(_3515089_37, __symbolTable[140]);
if (True == _3515090_37) {
pushCont(co, 48, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
} else {
Obj _3515097_37 = PRIM_CAR(exp);
Obj _3515098_37 = PRIM_EQ(_3515097_37, __symbolTable[139]);
if (True == _3515098_37) {
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
Obj _3515100_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, makeNative(47, clofun3, 1, 1, exp), _3515100_37);
}

label47:
{
Obj exp1 = __arg1;
Obj _3515099_37 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == _3515099_37) {
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[147]), globalRef(__symbolTable[141]), exp1);
} else {
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[141]), exp1);
}
}

label48:
{
Obj _3515091_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, _3515091_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label49:
{
Obj _3515092_37 = __arg1;
Obj _3515091_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, _3515091_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[141]), _3515092_37);
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
Obj _3515093_37 = __arg1;
Obj _3515091_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515094_37 = makeCons(_3515093_37, Nil);
Obj _3515095_37 = makeCons(_3515091_37, _3515094_37);
Obj _3515096_37 = makeCons(__symbolTable[140], _3515095_37);
JUMP_RETURN(clofun4, _3515096_37);
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
Obj _3515075_37 = PRIM_EQ(Nil, macros);
if (True == _3515075_37) {
JUMP_RETURN(clofun4, exp);
} else {
Obj _3515082_37 = PRIM_CAR(macros);
JUMP_WITH_ARGS_2(clofun4, makeNative(3, clofun4, 1, 2, macros, exp), _3515082_37);
}
}

label3:
{
Obj item = __arg1;
Obj _3515003_37 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj _3515078_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3515078_37) {
Obj _3515079_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515080_37 = PRIM_CAR(item);
Obj _3515081_37 = PRIM_EQ(_3515079_37, _3515080_37);
if (True == _3515081_37) {
JUMP_WITH_ARGS_2(clofun4, _3515003_37, True);
} else {
JUMP_WITH_ARGS_2(clofun4, _3515003_37, False);
}
} else {
JUMP_WITH_ARGS_2(clofun4, _3515003_37, False);
}
}

label4:
{
Obj _3515004_37 = __arg1;
if (True == _3515004_37) {
Obj _3515076_37 = PRIM_CDR(closureRef(co, 0));
JUMP_WITH_ARGS_2(clofun4, _3515076_37, closureRef(co, 1));
} else {
Obj _3515077_37 = PRIM_CDR(closureRef(co, 2));
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[143]), closureRef(co, 1), _3515077_37);
}
}

label5:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _3515071_37 = makeCons(n, v);
Obj _3515072_37 = makeCons(_3515071_37, globalRef(__symbolTable[146]));
Obj _3515073_37 = primSet(co, __symbolTable[146], _3515072_37);
JUMP_RETURN(clofun4, _3515073_37);
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
Obj _3515061_37 = PRIM_ISCONS(l);
if (True == _3515061_37) {
Obj _3515062_37 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
JUMP_WITH_ARGS_2(clofun4, f, _3515062_37);
} else {
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[149]), res);
}
}

label8:
{
Obj _3515063_37 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515064_37 = makeCons(_3515063_37, res);
Obj _3515065_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun4, globalRef(__symbolTable[148]), _3515064_37, f, _3515065_37);
}

label9:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _3515054_37 = PRIM_ISCONS(l);
if (True == _3515054_37) {
Obj _3515055_37 = PRIM_CAR(l);
Obj _3515056_37 = makeCons(_3515055_37, res);
Obj _3515057_37 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[150]), _3515056_37, _3515057_37);
} else {
JUMP_RETURN(clofun4, res);
}
}

label10:
{
Obj x = __arg1;
Obj _3515052_37 = PRIM_ISCONS(x);
JUMP_RETURN(clofun4, _3515052_37);
}

label11:
{
Obj exp = __arg1;
Obj _3515044_37 = PRIM_ISCONS(exp);
if (True == _3515044_37) {
Obj _3515045_37 = PRIM_CAR(exp);
Obj _3515046_37 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, _3515045_37);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[153]), _3515046_37);
} else {
JUMP_RETURN(clofun4, Nil);
}
}

label12:
{
Obj _3515047_37 = __arg1;
Obj _3515045_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515048_37 = makeCons(_3515047_37, Nil);
Obj _3515049_37 = makeCons(_3515045_37, _3515048_37);
Obj _3515050_37 = makeCons(__symbolTable[152], _3515049_37);
JUMP_RETURN(clofun4, _3515050_37);
}

label13:
{
Obj x = __arg1;
Obj _3515040_37 = PRIM_CDR(x);
Obj _3515041_37 = PRIM_CDR(_3515040_37);
Obj _3515042_37 = PRIM_CDR(_3515041_37);
JUMP_RETURN(clofun4, _3515042_37);
}

label14:
{
Obj x = __arg1;
Obj _3515035_37 = PRIM_CDR(x);
Obj _3515036_37 = PRIM_CDR(_3515035_37);
Obj _3515037_37 = PRIM_CDR(_3515036_37);
Obj _3515038_37 = PRIM_CAR(_3515037_37);
JUMP_RETURN(clofun4, _3515038_37);
}

label15:
{
Obj x = __arg1;
Obj _3515031_37 = PRIM_CDR(x);
Obj _3515032_37 = PRIM_CDR(_3515031_37);
Obj _3515033_37 = PRIM_CAR(_3515032_37);
JUMP_RETURN(clofun4, _3515033_37);
}

label16:
{
Obj x = __arg1;
Obj _3515028_37 = PRIM_CDR(x);
Obj _3515029_37 = PRIM_CDR(_3515028_37);
JUMP_RETURN(clofun4, _3515029_37);
}

label17:
{
Obj x = __arg1;
Obj _3515025_37 = PRIM_CAR(x);
Obj _3515026_37 = PRIM_CDR(_3515025_37);
JUMP_RETURN(clofun4, _3515026_37);
}

label18:
{
Obj x = __arg1;
Obj _3515022_37 = PRIM_CAR(x);
Obj _3515023_37 = PRIM_CAR(_3515022_37);
JUMP_RETURN(clofun4, _3515023_37);
}

label19:
{
Obj x = __arg1;
Obj _3515019_37 = PRIM_CDR(x);
Obj _3515020_37 = PRIM_CAR(_3515019_37);
JUMP_RETURN(clofun4, _3515020_37);
}

label20:
{
Obj x = __arg1;
Obj _3515017_37 = PRIM_EQ(x, Nil);
JUMP_RETURN(clofun4, _3515017_37);
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

