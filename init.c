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
Obj x140690933065895 = primSet(co, __symbolTable[161], makeNative(20, clofun4, 1, 0));
Obj x140690933066375 = primSet(co, __symbolTable[160], makeNative(19, clofun4, 1, 0));
Obj x140690933066823 = primSet(co, __symbolTable[159], makeNative(18, clofun4, 1, 0));
Obj x140690933067239 = primSet(co, __symbolTable[158], makeNative(17, clofun4, 1, 0));
Obj x140690933067655 = primSet(co, __symbolTable[157], makeNative(16, clofun4, 1, 0));
Obj x140690933019111 = primSet(co, __symbolTable[156], makeNative(15, clofun4, 1, 0));
Obj x140690933019751 = primSet(co, __symbolTable[155], makeNative(14, clofun4, 1, 0));
Obj x140690933020263 = primSet(co, __symbolTable[154], makeNative(13, clofun4, 1, 0));
Obj x140690933021255 = primSet(co, __symbolTable[153], makeNative(11, clofun4, 1, 0));
Obj x140690933021575 = primSet(co, __symbolTable[151], makeNative(10, clofun4, 1, 0));
Obj x140690933022311 = primSet(co, __symbolTable[150], makeNative(9, clofun4, 2, 0));
PUSH_CONT_0(co, 1, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[150]), Nil);
}

label1:
{
Obj x140690933022535 = __arg1;
Obj x140690933022567 = primSet(co, __symbolTable[149], x140690933022535);
Obj x140690931217159 = primSet(co, __symbolTable[148], makeNative(7, clofun4, 3, 0));
Obj x140690931217447 = primSet(co, __symbolTable[147], makeNative(6, clofun4, 2, 0));
Obj x140690931217639 = primSet(co, __symbolTable[146], Nil);
Obj x140690931217863 = primGenSym();
Obj x140690931217895 = primSet(co, __symbolTable[145], x140690931217863);
Obj x140690931218407 = primSet(co, __symbolTable[144], makeNative(5, clofun4, 2, 0));
Obj x140690931220327 = primSet(co, __symbolTable[143], makeNative(2, clofun4, 2, 0));
Obj x140690931146887 = primSet(co, __symbolTable[142], makeNative(1, clofun4, 1, 0));
Obj x140690931149287 = primSet(co, __symbolTable[141], makeNative(45, clofun3, 1, 0));
Obj x140690931149447 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj x140690931150631 = primSet(co, __symbolTable[137], makeNative(41, clofun3, 1, 0));
PUSH_CONT_0(co, 2, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
}

label2:
{
Obj x140690931150791 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[135], makeNative(40, clofun3, 1, 0));
}

label3:
{
Obj x140690931097927 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[134], makeNative(36, clofun3, 1, 0));
}

label4:
{
Obj x140690931099015 = __arg1;
Obj x140690931099815 = primSet(co, __symbolTable[132], makeNative(35, clofun3, 2, 0));
Obj x140690931100231 = primSet(co, __symbolTable[131], makeNative(34, clofun3, 1, 0));
Obj x140690931009255 = primSet(co, __symbolTable[130], makeNative(29, clofun3, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[129], makeNative(28, clofun3, 1, 0));
}

label5:
{
Obj x140690931009639 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[128], makeNative(24, clofun3, 1, 0));
}

label6:
{
Obj x140690931011239 = __arg1;
Obj x140690930680999 = primSet(co, __symbolTable[125], makeNative(22, clofun3, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[124], makeNative(21, clofun3, 1, 0));
}

label7:
{
Obj x140690930681383 = __arg1;
Obj x140690930682919 = primSet(co, __symbolTable[123], makeNative(19, clofun3, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[122], makeNative(18, clofun3, 1, 0));
}

label8:
{
Obj x140690930683303 = __arg1;
Obj x140690930683847 = primSet(co, __symbolTable[121], makeNative(17, clofun3, 1, 0));
Obj x140690930627655 = primSet(co, __symbolTable[120], makeNative(14, clofun3, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[119], makeNative(13, clofun3, 1, 0));
}

label9:
{
Obj x140690930628039 = __arg1;
Obj x140690930574151 = primSet(co, __symbolTable[118], makeNative(4, clofun3, 4, 0));
Obj x140690930553799 = primSet(co, __symbolTable[117], makeNative(48, clofun2, 4, 0));
Obj x140690930555751 = primSet(co, __symbolTable[111], makeNative(43, clofun2, 2, 0));
Obj x140690930513927 = primSet(co, __symbolTable[109], makeNative(34, clofun2, 2, 0));
Obj x140690930426055 = primSet(co, __symbolTable[108], makeNative(28, clofun2, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[107], makeNative(27, clofun2, 1, 0));
}

label10:
{
Obj x140690930426343 = __arg1;
Obj x140690933067463 = primSet(co, __symbolTable[106], makeNative(22, clofun2, 3, 0));
Obj x140690933018695 = primSet(co, __symbolTable[104], makeNative(21, clofun2, 1, 0));
Obj x140690933019911 = primSet(co, __symbolTable[103], makeNative(18, clofun2, 2, 0));
Obj x140690933020711 = primSet(co, __symbolTable[102], makeNative(17, clofun2, 2, 0));
Obj x140690933021063 = primSet(co, __symbolTable[101], makeNative(16, clofun2, 1, 0));
Obj x140690931216423 = primSet(co, __symbolTable[100], makeNative(14, clofun2, 3, 0));
Obj x140690931216775 = primSet(co, __symbolTable[99], makeNative(13, clofun2, 2, 0));
Obj x140690931217799 = primSet(co, __symbolTable[98], makeNative(11, clofun2, 2, 0));
Obj x140690931219879 = primSet(co, __symbolTable[97], makeNative(4, clofun2, 1, 0));
Obj x140690931147111 = primSet(co, __symbolTable[96], makeNative(2, clofun2, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[95], makeNative(46, clofun1, 1, 0));
}

label11:
{
Obj x140690931149191 = __arg1;
Obj x140690931149575 = primSet(co, __symbolTable[94], makeNative(45, clofun1, 1, 0));
Obj x140690931149799 = primSet(co, __symbolTable[92], makeNative(44, clofun1, 1, 0));
Obj x140690931150407 = primSet(co, __symbolTable[138], makeNative(41, clofun1, 1, 0));
Obj x140690931010343 = primSet(co, __symbolTable[91], makeNative(37, clofun1, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[89], makeNative(36, clofun1, 1, 0));
}

label12:
{
Obj x140690931010791 = __arg1;
Obj x140690930683239 = primSet(co, __symbolTable[88], makeNative(33, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[86], makeNative(31, clofun1, 1, 0));
}

label13:
{
Obj x140690930683719 = __arg1;
Obj x140690930628359 = primSet(co, __symbolTable[85], makeNative(26, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[84], makeNative(23, clofun1, 1, 0));
}

label14:
{
Obj x140690930628903 = __arg1;
Obj x140690930553607 = primSet(co, __symbolTable[83], makeNative(19, clofun1, 4, 0));
Obj x140690930553959 = primSet(co, __symbolTable[80], makeNative(18, clofun1, 2, 0));
PUSH_CONT_0(co, 15, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[144]), __symbolTable[79], makeNative(10, clofun1, 1, 0));
}

label15:
{
Obj x140690930556871 = __arg1;
Obj x140690930512903 = primSet(co, __symbolTable[76], makeNative(5, clofun1, 2, 0));
Obj x140690930515463 = primSet(co, __symbolTable[71], makeNative(47, clofun0, 3, 0));
Obj x140690930515911 = makeCons(makeCString("primSet"), Nil);
Obj x140690930515943 = makeCons(MAKE_NUMBER(2), x140690930515911);
Obj x140690930425863 = makeCons(__symbolTable[68], x140690930515943);
Obj x140690930426279 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140690930426311 = makeCons(MAKE_NUMBER(1), x140690930426279);
Obj x140690930426375 = makeCons(__symbolTable[115], x140690930426311);
Obj x140690930426663 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140690930426727 = makeCons(MAKE_NUMBER(1), x140690930426663);
Obj x140690930426759 = makeCons(__symbolTable[114], x140690930426727);
Obj x140690930427047 = makeCons(makeCString("makeCons"), Nil);
Obj x140690930427079 = makeCons(MAKE_NUMBER(2), x140690930427047);
Obj x140690930427111 = makeCons(__symbolTable[152], x140690930427079);
Obj x140690930428167 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140690930428199 = makeCons(MAKE_NUMBER(1), x140690930428167);
Obj x140690930428231 = makeCons(__symbolTable[116], x140690930428199);
Obj x140690930428519 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140690930428551 = makeCons(MAKE_NUMBER(2), x140690930428519);
Obj x140690930428583 = makeCons(__symbolTable[67], x140690930428551);
Obj x140690930428871 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140690930428903 = makeCons(MAKE_NUMBER(2), x140690930428871);
Obj x140690930428935 = makeCons(__symbolTable[66], x140690930428903);
Obj x140690930429223 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140690930429255 = makeCons(MAKE_NUMBER(2), x140690930429223);
Obj x140690930429287 = makeCons(__symbolTable[65], x140690930429255);
Obj x140690930429575 = makeCons(makeCString("primDiv"), Nil);
Obj x140690930429607 = makeCons(MAKE_NUMBER(2), x140690930429575);
Obj x140690930429639 = makeCons(__symbolTable[64], x140690930429607);
Obj x140690930429927 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140690930401287 = makeCons(MAKE_NUMBER(2), x140690930429927);
Obj x140690930401319 = makeCons(__symbolTable[113], x140690930401287);
Obj x140690930401607 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140690930401639 = makeCons(MAKE_NUMBER(2), x140690930401607);
Obj x140690930401671 = makeCons(__symbolTable[63], x140690930401639);
Obj x140690930401959 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140690930401991 = makeCons(MAKE_NUMBER(2), x140690930401959);
Obj x140690930402023 = makeCons(__symbolTable[62], x140690930401991);
Obj x140690930402311 = makeCons(makeCString("primGenSym"), Nil);
Obj x140690930402343 = makeCons(MAKE_NUMBER(0), x140690930402311);
Obj x140690930402375 = makeCons(__symbolTable[61], x140690930402343);
Obj x140690930402663 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140690930402695 = makeCons(MAKE_NUMBER(1), x140690930402663);
Obj x140690930402727 = makeCons(__symbolTable[60], x140690930402695);
Obj x140690930403015 = makeCons(makeCString("primNot"), Nil);
Obj x140690930403047 = makeCons(MAKE_NUMBER(1), x140690930403015);
Obj x140690930403079 = makeCons(__symbolTable[59], x140690930403047);
Obj x140690930403367 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140690930403399 = makeCons(MAKE_NUMBER(1), x140690930403367);
Obj x140690930403431 = makeCons(__symbolTable[58], x140690930403399);
Obj x140690930403719 = makeCons(makeCString("primIsString"), Nil);
Obj x140690930403751 = makeCons(MAKE_NUMBER(1), x140690930403719);
Obj x140690930403783 = makeCons(__symbolTable[57], x140690930403751);
Obj x140690930403815 = makeCons(x140690930403783, Nil);
Obj x140690930403847 = makeCons(x140690930403431, x140690930403815);
Obj x140690930403879 = makeCons(x140690930403079, x140690930403847);
Obj x140690930403911 = makeCons(x140690930402727, x140690930403879);
Obj x140690930403943 = makeCons(x140690930402375, x140690930403911);
Obj x140690930403975 = makeCons(x140690930402023, x140690930403943);
Obj x140690930404007 = makeCons(x140690930401671, x140690930403975);
Obj x140690930404039 = makeCons(x140690930401319, x140690930404007);
Obj x140690930404071 = makeCons(x140690930429639, x140690930404039);
Obj x140690930404103 = makeCons(x140690930429287, x140690930404071);
Obj x140690930404135 = makeCons(x140690930428935, x140690930404103);
Obj x140690930404167 = makeCons(x140690930428583, x140690930404135);
Obj x140690930404199 = makeCons(x140690930428231, x140690930404167);
Obj x140690930404231 = makeCons(x140690930427111, x140690930404199);
Obj x140690930404263 = makeCons(x140690930426759, x140690930404231);
Obj x140690930404295 = makeCons(x140690930426375, x140690930404263);
Obj x140690930404327 = makeCons(x140690930425863, x140690930404295);
Obj x140690930404359 = primSet(co, __symbolTable[69], x140690930404327);
Obj x140690930390759 = primSet(co, __symbolTable[56], makeNative(45, clofun0, 2, 0));
Obj x140690930391271 = primSet(co, __symbolTable[55], makeNative(42, clofun0, 1, 0));
Obj x140690930576807 = primSet(co, __symbolTable[93], makeNative(16, clofun0, 4, 0));
Obj x140690930556199 = makeCons(__symbolTable[98], Nil);
Obj x140690930556231 = makeCons(__symbolTable[99], x140690930556199);
Obj x140690930556327 = makeCons(__symbolTable[101], x140690930556231);
Obj x140690930556359 = makeCons(__symbolTable[132], x140690930556327);
Obj x140690930556391 = makeCons(__symbolTable[138], x140690930556359);
Obj x140690930556903 = makeCons(__symbolTable[147], x140690930556391);
Obj x140690930511879 = makeCons(__symbolTable[149], x140690930556903);
Obj x140690930511911 = makeCons(__symbolTable[39], x140690930511879);
Obj x140690930511943 = makeCons(__symbolTable[40], x140690930511911);
Obj x140690930512007 = makeCons(__symbolTable[41], x140690930511943);
Obj x140690930512039 = makeCons(__symbolTable[81], x140690930512007);
Obj x140690930512071 = makeCons(__symbolTable[42], x140690930512039);
Obj x140690930512103 = makeCons(__symbolTable[43], x140690930512071);
Obj x140690930512135 = makeCons(__symbolTable[70], x140690930512103);
Obj x140690930512167 = makeCons(__symbolTable[44], x140690930512135);
Obj x140690930512295 = makeCons(__symbolTable[45], x140690930512167);
Obj x140690930512327 = makeCons(__symbolTable[46], x140690930512295);
Obj x140690930512359 = makeCons(__symbolTable[47], x140690930512327);
Obj x140690930512391 = makeCons(__symbolTable[48], x140690930512359);
Obj x140690930512455 = makeCons(__symbolTable[49], x140690930512391);
Obj x140690930512487 = makeCons(__symbolTable[50], x140690930512455);
Obj x140690930512519 = makeCons(__symbolTable[51], x140690930512487);
Obj x140690930512551 = makeCons(__symbolTable[52], x140690930512519);
Obj x140690930512583 = makeCons(__symbolTable[72], x140690930512551);
Obj x140690930512711 = makeCons(__symbolTable[74], x140690930512583);
Obj x140690930512743 = makeCons(__symbolTable[73], x140690930512711);
Obj x140690930512775 = makeCons(__symbolTable[161], x140690930512743);
Obj x140690930512935 = makeCons(__symbolTable[54], x140690930512775);
Obj x140690930512967 = makeCons(__symbolTable[121], x140690930512935);
Obj x140690930512999 = makeCons(__symbolTable[131], x140690930512967);
Obj x140690930513031 = makeCons(__symbolTable[151], x140690930512999);
Obj x140690930513063 = makeCons(__symbolTable[154], x140690930513031);
Obj x140690930513191 = makeCons(__symbolTable[155], x140690930513063);
Obj x140690930513223 = makeCons(__symbolTable[156], x140690930513191);
Obj x140690930513383 = makeCons(__symbolTable[157], x140690930513223);
Obj x140690930513415 = makeCons(__symbolTable[158], x140690930513383);
Obj x140690930513447 = makeCons(__symbolTable[159], x140690930513415);
Obj x140690930513511 = makeCons(__symbolTable[160], x140690930513447);
Obj x140690930513543 = primSet(co, __symbolTable[53], x140690930513511);
Obj x140690930513767 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj x140690930514055 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj x140690930514247 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj x140690930514471 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj x140690930514791 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj x140690930514983 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj x140690930515239 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj x140690930515591 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj x140690930515751 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj x140690930425927 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj x140690930426215 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj x140690930426503 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj x140690930426791 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj x140690930426951 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj x140690930427239 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj x140690930427431 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj x140690930427623 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj x140690930427815 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj x140690930427975 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj x140690930428263 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj x140690930428423 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj x140690930428679 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj x140690930428839 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj x140690930429095 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj x140690930429351 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj x140690930429511 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj x140690930429767 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj x140690930401351 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj x140690930401511 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj x140690930401767 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj x140690930401927 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj x140690930402183 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj x140690930402439 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj x140690930402599 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj x140690930402855 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj x140690930403111 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj x140690930403271 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj x140690930403527 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj x140690930403623 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
__nargs = 2;
__arg1 = x140690930403623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x140690933065415 = __arg1;
Obj x140690933065447 = __arg2;
Obj x140690933065607 = __arg3;
Obj x140690933065639 = co->args[4];
Obj x140690933133639 = makeNative(20, clofun0, 1, 4, x140690933065415, x140690933065447, x140690933065607, x140690933065639);
pushCont(co, 17, clofun0, 2, x140690933065639, x140690933133639);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[54]), x140690933065639);
}

label17:
{
Obj x140690930575751 = __arg1;
Obj x140690933065639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930575751) {
JUMP_WITH_ARGS_2(clofun0, x140690933133639, True);
} else {
Obj x140690930576167 = primIsString(x140690933065639);
if (True == x140690930576167) {
JUMP_WITH_ARGS_2(clofun0, x140690933133639, True);
} else {
pushCont(co, 18, clofun0, 2, x140690933065639, x140690933133639);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[121]), x140690933065639);
}
}
}

label18:
{
Obj x140690930576359 = __arg1;
Obj x140690933065639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930576359) {
JUMP_WITH_ARGS_2(clofun0, x140690933133639, True);
} else {
pushCont(co, 19, clofun0, 1, x140690933133639);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[161]), x140690933065639);
}
}

label19:
{
Obj x140690930576743 = __arg1;
Obj x140690933133639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930576743) {
JUMP_WITH_ARGS_2(clofun0, x140690933133639, True);
} else {
JUMP_WITH_ARGS_2(clofun0, x140690933133639, False);
}
}

label20:
{
Obj x140690933133671 = __arg1;
if (True == x140690933133671) {
__nargs = 2;
__arg1 = closureRef(co, 3);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933066695 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930629959 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140690930629959) {
Obj x140690930630375 = PRIM_CAR(closureRef(co, 3));
Obj x140690930630407 = PRIM_EQ(__symbolTable[139], x140690930630375);
if (True == x140690930630407) {
Obj x140690930573703 = PRIM_CDR(closureRef(co, 3));
Obj x140690930573735 = PRIM_ISCONS(x140690930573703);
if (True == x140690930573735) {
Obj x140690930574183 = PRIM_CDR(closureRef(co, 3));
Obj x140690930574215 = PRIM_CAR(x140690930574183);
Obj x = x140690930574215;
Obj x140690930574567 = PRIM_CDR(closureRef(co, 3));
Obj x140690930574599 = PRIM_CDR(x140690930574567);
Obj x140690930574631 = PRIM_EQ(Nil, x140690930574599);
if (True == x140690930574631) {
Obj x140690930574855 = makeCons(x, Nil);
Obj x140690930574887 = makeCons(__symbolTable[139], x140690930574855);
__nargs = 2;
__arg1 = x140690930574887;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066695);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066695);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066695);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066695);
}
}
}

label21:
{
Obj x140690930392007 = primIsSymbol(closureRef(co, 0));
if (True == x140690930392007) {
PUSH_CONT_0(co, 40, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[132]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj x140690933019719 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140690930682279 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930682279) {
Obj x140690930682663 = PRIM_CAR(closureRef(co, 0));
Obj x140690930682695 = PRIM_EQ(__symbolTable[140], x140690930682663);
if (True == x140690930682695) {
Obj x140690930683207 = PRIM_CDR(closureRef(co, 0));
Obj x140690930683335 = PRIM_ISCONS(x140690930683207);
if (True == x140690930683335) {
Obj x140690930683591 = PRIM_CDR(closureRef(co, 0));
Obj x140690930683623 = PRIM_CAR(x140690930683591);
Obj args = x140690930683623;
Obj x140690930626759 = PRIM_CDR(closureRef(co, 0));
Obj x140690930626791 = PRIM_CDR(x140690930626759);
Obj x140690930626823 = PRIM_ISCONS(x140690930626791);
if (True == x140690930626823) {
Obj x140690930627367 = PRIM_CDR(closureRef(co, 0));
Obj x140690930627719 = PRIM_CDR(x140690930627367);
Obj x140690930627751 = PRIM_CAR(x140690930627719);
Obj body = x140690930627751;
Obj x140690930628455 = PRIM_CDR(closureRef(co, 0));
Obj x140690930628487 = PRIM_CDR(x140690930628455);
Obj x140690930628519 = PRIM_CDR(x140690930628487);
Obj x140690930628583 = PRIM_EQ(Nil, x140690930628519);
if (True == x140690930628583) {
pushCont(co, 22, clofun0, 2, body, args);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[98]), args, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933019719);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933019719);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933019719);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933019719);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933019719);
}
}
}

label22:
{
Obj x140690930629095 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = x140690930629095;
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
Obj x140690930629223 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930629255 = makeCons(x140690930629223, Nil);
Obj x140690930629287 = makeCons(args, x140690930629255);
Obj x140690930629319 = makeCons(__symbolTable[140], x140690930629287);
__nargs = 2;
__arg1 = x140690930629319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x140690933021031 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140690931149479 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931149479) {
Obj x140690931149767 = PRIM_CAR(closureRef(co, 0));
Obj x140690931149831 = PRIM_EQ(__symbolTable[90], x140690931149767);
if (True == x140690931149831) {
Obj x140690931150183 = PRIM_CDR(closureRef(co, 0));
Obj x140690931150215 = PRIM_ISCONS(x140690931150183);
if (True == x140690931150215) {
Obj x140690931097671 = PRIM_CDR(closureRef(co, 0));
Obj x140690931097703 = PRIM_CAR(x140690931097671);
Obj x140690931097735 = PRIM_ISCONS(x140690931097703);
if (True == x140690931097735) {
Obj x140690931098215 = PRIM_CDR(closureRef(co, 0));
Obj x140690931098247 = PRIM_CAR(x140690931098215);
Obj x140690931098279 = PRIM_CAR(x140690931098247);
Obj x140690931098375 = PRIM_EQ(__symbolTable[81], x140690931098279);
if (True == x140690931098375) {
Obj x140690931099079 = PRIM_CDR(closureRef(co, 0));
Obj x140690931099239 = PRIM_CAR(x140690931099079);
Obj x140690931099271 = PRIM_CDR(x140690931099239);
Obj x140690931099303 = PRIM_ISCONS(x140690931099271);
if (True == x140690931099303) {
Obj x140690931099911 = PRIM_CDR(closureRef(co, 0));
Obj x140690931099943 = PRIM_CAR(x140690931099911);
Obj x140690931099975 = PRIM_CDR(x140690931099943);
Obj x140690931100007 = PRIM_CAR(x140690931099975);
Obj pkg = x140690931100007;
Obj x140690931008423 = PRIM_CDR(closureRef(co, 0));
Obj x140690931008487 = PRIM_CAR(x140690931008423);
Obj x140690931008519 = PRIM_CDR(x140690931008487);
Obj x140690931008551 = PRIM_CDR(x140690931008519);
Obj x140690931008711 = PRIM_EQ(Nil, x140690931008551);
if (True == x140690931008711) {
Obj x140690931009383 = PRIM_CDR(closureRef(co, 0));
Obj x140690931009415 = PRIM_CDR(x140690931009383);
Obj x140690931009447 = PRIM_ISCONS(x140690931009415);
if (True == x140690931009447) {
Obj x140690931009895 = PRIM_CDR(closureRef(co, 0));
Obj x140690931009927 = PRIM_CDR(x140690931009895);
Obj x140690931009959 = PRIM_CAR(x140690931009927);
Obj y = x140690931009959;
Obj x140690931010599 = PRIM_CDR(closureRef(co, 0));
Obj x140690931010631 = PRIM_CDR(x140690931010599);
Obj x140690931010695 = PRIM_CDR(x140690931010631);
Obj x140690931010727 = PRIM_EQ(Nil, x140690931010695);
if (True == x140690931010727) {
Obj x140690931010983 = primIsString(pkg);
if (True == x140690931010983) {
Obj x140690930680007 = makeCons(pkg, Nil);
Obj x140690930680103 = makeCons(__symbolTable[81], x140690930680007);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = x140690930680103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933021031);
}
}

label25:
{
Obj x140690930680135 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930680615 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, x140690930680135);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x140690930680615;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140690930680647 = __arg1;
Obj x140690930680135= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930680679 = makeCons(x140690930680647, Nil);
Obj x140690930680775 = makeCons(x140690930680135, x140690930680679);
Obj x140690930680807 = makeCons(__symbolTable[90], x140690930680775);
__nargs = 2;
__arg1 = x140690930680807;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140690931216615 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140690931220039 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931220039) {
Obj x140690931220423 = PRIM_CAR(closureRef(co, 0));
Obj op = x140690931220423;
Obj x140690931146951 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690931146951;
Obj x140690933133703 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, x140690931216615);
Obj x140690931148615 = PRIM_EQ(op, __symbolTable[126]);
if (True == x140690931148615) {
JUMP_WITH_ARGS_2(clofun0, x140690933133703, True);
} else {
Obj x140690931148839 = PRIM_EQ(op, __symbolTable[90]);
if (True == x140690931148839) {
JUMP_WITH_ARGS_2(clofun0, x140690933133703, True);
} else {
JUMP_WITH_ARGS_2(clofun0, x140690933133703, False);
}
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931216615);
}
}

label28:
{
Obj x140690933133735 = __arg1;
if (True == x140690933133735) {
PUSH_CONT_0(co, 29, clofun0);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[93]), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
} else {
JUMP_WITH_ARGS_1(clofun0, closureRef(co, 5));
}
}

label29:
{
Obj x140690931147911 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[147]), x140690931147911, closureRef(co, 4));
}

label30:
{
Obj x140690931148007 = __arg1;
Obj x140690931148039 = makeCons(closureRef(co, 0), x140690931148007);
__nargs = 2;
__arg1 = x140690931148039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x140690931217575 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj x140690933018823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933018823) {
Obj x140690933019335 = PRIM_CAR(closureRef(co, 0));
Obj x140690933019367 = PRIM_EQ(__symbolTable[129], x140690933019335);
if (True == x140690933019367) {
Obj x140690933019943 = PRIM_CDR(closureRef(co, 0));
Obj x140690933019975 = PRIM_ISCONS(x140690933019943);
if (True == x140690933019975) {
Obj x140690933020359 = PRIM_CDR(closureRef(co, 0));
Obj x140690933020423 = PRIM_CAR(x140690933020359);
Obj a = x140690933020423;
Obj x140690933020903 = PRIM_CDR(closureRef(co, 0));
Obj x140690933020935 = PRIM_CDR(x140690933020903);
Obj x140690933020967 = PRIM_ISCONS(x140690933020935);
if (True == x140690933020967) {
Obj x140690933021607 = PRIM_CDR(closureRef(co, 0));
Obj x140690933021639 = PRIM_CDR(x140690933021607);
Obj x140690933021703 = PRIM_CAR(x140690933021639);
Obj b = x140690933021703;
Obj x140690933022375 = PRIM_CDR(closureRef(co, 0));
Obj x140690933022407 = PRIM_CDR(x140690933022375);
Obj x140690933022471 = PRIM_CDR(x140690933022407);
Obj x140690933022503 = PRIM_ISCONS(x140690933022471);
if (True == x140690933022503) {
Obj x140690931216743 = PRIM_CDR(closureRef(co, 0));
Obj x140690931216807 = PRIM_CDR(x140690931216743);
Obj x140690931216839 = PRIM_CDR(x140690931216807);
Obj x140690931216871 = PRIM_CAR(x140690931216839);
Obj c = x140690931216871;
Obj x140690931217607 = PRIM_CDR(closureRef(co, 0));
Obj x140690931217671 = PRIM_CDR(x140690931217607);
Obj x140690931217831 = PRIM_CDR(x140690931217671);
Obj x140690931217927 = PRIM_CDR(x140690931217831);
Obj x140690931217959 = PRIM_EQ(Nil, x140690931217927);
if (True == x140690931217959) {
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
JUMP_WITH_ARGS_1(clofun0, x140690931217575);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931217575);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931217575);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931217575);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931217575);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931217575);
}
}

label32:
{
Obj x140690931218503 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931218855 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, x140690931218503, a);
__nargs = 5;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = x140690931218855;
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
Obj x140690931218983 = __arg1;
Obj x140690931218503= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931219015 = makeCons(x140690931218983, Nil);
Obj x140690931219047 = makeCons(x140690931218503, x140690931219015);
Obj x140690931219079 = makeCons(a, x140690931219047);
Obj x140690931219111 = makeCons(__symbolTable[129], x140690931219079);
__nargs = 2;
__arg1 = x140690931219111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140690931219559 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj x140690933135559 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140690933135559) {
Obj x140690933136007 = PRIM_CAR(closureRef(co, 2));
Obj x140690933136039 = PRIM_EQ(__symbolTable[78], x140690933136007);
if (True == x140690933136039) {
Obj x140690933136359 = PRIM_CDR(closureRef(co, 2));
Obj x140690933136391 = PRIM_ISCONS(x140690933136359);
if (True == x140690933136391) {
Obj x140690933136967 = PRIM_CDR(closureRef(co, 2));
Obj x140690933136999 = PRIM_CAR(x140690933136967);
Obj path = x140690933136999;
Obj x140690933063719 = PRIM_CDR(closureRef(co, 2));
Obj x140690933063751 = PRIM_CDR(x140690933063719);
Obj x140690933063879 = PRIM_ISCONS(x140690933063751);
if (True == x140690933063879) {
Obj x140690933064327 = PRIM_CDR(closureRef(co, 2));
Obj x140690933064359 = PRIM_CDR(x140690933064327);
Obj x140690933064391 = PRIM_CAR(x140690933064359);
Obj import = x140690933064391;
Obj x140690933064903 = PRIM_CDR(closureRef(co, 2));
Obj x140690933064935 = PRIM_CDR(x140690933064903);
Obj x140690933064967 = PRIM_CDR(x140690933064935);
Obj x140690933064999 = PRIM_ISCONS(x140690933064967);
if (True == x140690933064999) {
Obj x140690933065575 = PRIM_CDR(closureRef(co, 2));
Obj x140690933065831 = PRIM_CDR(x140690933065575);
Obj x140690933065927 = PRIM_CDR(x140690933065831);
Obj x140690933065959 = PRIM_CAR(x140690933065927);
Obj body = x140690933065959;
Obj x140690933066855 = PRIM_CDR(closureRef(co, 2));
Obj x140690933066887 = PRIM_CDR(x140690933066855);
Obj x140690933066983 = PRIM_CDR(x140690933066887);
Obj x140690933067015 = PRIM_CDR(x140690933066983);
Obj x140690933067047 = PRIM_EQ(Nil, x140690933067015);
if (True == x140690933067047) {
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
JUMP_WITH_ARGS_1(clofun0, x140690931219559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931219559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931219559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931219559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931219559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931219559);
}
}

label35:
{
Obj x140690931147815 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj x140690930377511 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930377511) {
Obj x140690930377767 = PRIM_CAR(closureRef(co, 0));
Obj x140690930377799 = PRIM_EQ(__symbolTable[133], x140690930377767);
if (True == x140690930377799) {
Obj x140690930378055 = PRIM_CDR(closureRef(co, 0));
Obj x140690930378087 = PRIM_ISCONS(x140690930378055);
if (True == x140690930378087) {
Obj x140690930378343 = PRIM_CDR(closureRef(co, 0));
Obj x140690930378375 = PRIM_CAR(x140690930378343);
Obj var = x140690930378375;
Obj x140690930378695 = PRIM_CDR(closureRef(co, 0));
Obj x140690930378727 = PRIM_CDR(x140690930378695);
Obj x140690930378759 = PRIM_ISCONS(x140690930378727);
if (True == x140690930378759) {
Obj x140690930379079 = PRIM_CDR(closureRef(co, 0));
Obj x140690930379111 = PRIM_CDR(x140690930379079);
Obj x140690930379143 = PRIM_CAR(x140690930379111);
Obj val = x140690930379143;
Obj x140690930379527 = PRIM_CDR(closureRef(co, 0));
Obj x140690930379559 = PRIM_CDR(x140690930379527);
Obj x140690930379591 = PRIM_CDR(x140690930379559);
Obj x140690930379623 = PRIM_EQ(Nil, x140690930379591);
if (True == x140690930379623) {
pushCont(co, 36, clofun0, 1, val);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[76]), var, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931147815);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931147815);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931147815);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931147815);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690931147815);
}
}

label36:
{
Obj x140690933133799 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = x140690933133799;
Obj x140690933134279 = makeCons(var1, Nil);
Obj x140690933134311 = makeCons(__symbolTable[139], x140690933134279);
pushCont(co, 37, clofun0, 1, x140690933134311);
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
Obj x140690933134631 = __arg1;
Obj x140690933134311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933134727 = makeCons(x140690933134631, Nil);
Obj x140690933134759 = makeCons(x140690933134311, x140690933134727);
Obj x140690933134791 = makeCons(__symbolTable[68], x140690933134759);
__nargs = 2;
__arg1 = x140690933134791;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
PUSH_CONT_0(co, 39, clofun0);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[93]), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
}

label39:
{
Obj x140690930377287 = __arg1;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[147]), x140690930377287, closureRef(co, 3));
}

label40:
{
Obj x140690930392231 = __arg1;
if (True == x140690930392231) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT_0(co, 41, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[55]), closureRef(co, 0));
}
}

label41:
{
Obj x140690930392455 = __arg1;
if (True == x140690930392455) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140690930391175 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[161]), x140690930391175);
}

label44:
{
Obj x140690930391207 = __arg1;
Obj x140690930391239 = primNot(x140690930391207);
__nargs = 2;
__arg1 = x140690930391239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140690933133991 = __arg1;
Obj x140690933134151 = __arg2;
Obj x140690930404711 = PRIM_EQ(Nil, x140690933134151);
if (True == x140690930404711) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933135367 = makeNative(46, clofun0, 0, 2, x140690933134151, x140690933133991);
Obj x140690930389351 = PRIM_ISCONS(x140690933134151);
if (True == x140690930389351) {
Obj x140690930389575 = PRIM_CAR(x140690933134151);
Obj x140690930389607 = PRIM_ISCONS(x140690930389575);
if (True == x140690930389607) {
Obj x140690930389831 = PRIM_CAR(x140690933134151);
Obj x140690930389863 = PRIM_CAR(x140690930389831);
Obj x = x140690930389863;
Obj x140690930390087 = PRIM_CAR(x140690933134151);
Obj x140690930390119 = PRIM_CDR(x140690930390087);
Obj y = x140690930390119;
Obj x140690930390279 = PRIM_CDR(x140690933134151);
Obj x140690930390439 = PRIM_EQ(x140690933133991, x);
if (True == x140690930390439) {
Obj x140690930390535 = makeCons(x, y);
__nargs = 2;
__arg1 = x140690930390535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
}
}

label46:
{
Obj x140690930405031 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930405031) {
Obj x140690930405223 = PRIM_CAR(closureRef(co, 0));
Obj x140690930389031 = PRIM_CDR(closureRef(co, 0));
Obj y = x140690930389031;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[56]), closureRef(co, 1), y);
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label47:
{
Obj x140690933018855 = __arg1;
Obj x140690933018887 = __arg2;
Obj x140690933018919 = __arg3;
Obj x140690930513479 = PRIM_EQ(Nil, x140690933018919);
if (True == x140690930513479) {
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[76]), x140690933018855, x140690933018887);
} else {
Obj x140690930513735 = PRIM_ISCONS(x140690933018919);
if (True == x140690930513735) {
Obj x140690930513991 = PRIM_CAR(x140690933018919);
Obj import = x140690930513991;
Obj x140690930514151 = PRIM_CDR(x140690933018919);
Obj more = x140690930514151;
pushCont(co, 48, clofun0, 4, import, x140690933018855, x140690933018887, more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[73]), import, makeCString("#*ns-export*"));
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}
}

label48:
{
Obj x140690930514503 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933018855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933018887= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, x140690933018855, x140690933018887, more);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[74]), x140690930514503);
}

label49:
{
Obj x140690930514567 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933018855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933018887= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, x140690933018855, x140690933018887, more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[70]), x140690930514567, Nil);
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
Obj x140690930514599 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933018855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933018887= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140690930514599;
pushCont(co, 1, clofun1, 4, import, x140690933018855, x140690933018887, more);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[132]), x140690933018855, export);
}

label1:
{
Obj x140690930514759 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933018855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933018887= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140690930514759) {
pushCont(co, 2, clofun1, 1, import);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), x140690933018855);
} else {
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[71]), x140690933018855, x140690933018887, more);
}
}

label2:
{
Obj x140690930515079 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), makeCString("#"), x140690930515079);
}

label3:
{
Obj x140690930515111 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), import, x140690930515111);
}

label4:
{
Obj x140690930515143 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[74]), x140690930515143);
}

label5:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj x140690930512231 = PRIM_EQ(ns, makeCString(""));
if (True == x140690930512231) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 6, clofun1, 2, var, ns);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[75]), var);
}
}

label6:
{
Obj x140690930512423 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930512423) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 7, clofun1, 1, ns);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), var);
}
}

label7:
{
Obj x140690930512807 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), makeCString("#"), x140690930512807);
}

label8:
{
Obj x140690930512839 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[73]), ns, x140690930512839);
}

label9:
{
Obj x140690930512871 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[74]), x140690930512871);
}

label10:
{
Obj sexp = __arg1;
pushCont(co, 11, clofun1, 1, sexp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), sexp);
}

label11:
{
Obj x140690930554375 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140690930554375;
pushCont(co, 12, clofun1, 1, path);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), sexp);
}

label12:
{
Obj x140690930554599 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[80]), x140690930554599);
}

label13:
{
Obj x140690930554631 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun1, x140690930554631, makeNative(14, clofun1, 3, 1, path));
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj x140690930555239 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, x140690930555239);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[147]), makeNative(17, clofun1, 1, 0), import);
}

label15:
{
Obj x140690930555911 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930555239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690930556423 = makeCons(export, Nil);
Obj x140690930556455 = makeCons(__symbolTable[86], x140690930556423);
Obj x140690930556487 = makeCons(x140690930556455, Nil);
Obj x140690930556519 = makeCons(__symbolTable[77], x140690930556487);
Obj x140690930556551 = makeCons(__symbolTable[133], x140690930556519);
Obj x140690930556583 = makeCons(x140690930556551, body);
pushCont(co, 16, clofun1, 1, x140690930555239);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[98]), x140690930555911, x140690930556583);
}

label16:
{
Obj x140690930556615 = __arg1;
Obj x140690930555239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930556647 = makeCons(__symbolTable[89], x140690930556615);
Obj x140690930556711 = makeCons(x140690930556647, Nil);
Obj x140690930556743 = makeCons(x140690930555239, x140690930556711);
Obj x140690930556775 = makeCons(closureRef(co, 0), x140690930556743);
Obj x140690930556807 = makeCons(__symbolTable[78], x140690930556775);
__nargs = 2;
__arg1 = x140690930556807;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj imp = __arg1;
Obj x140690930555847 = makeCons(imp, Nil);
Obj x140690930555879 = makeCons(__symbolTable[81], x140690930555847);
__nargs = 2;
__arg1 = x140690930555879;
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
Obj x140690933136487 = __arg1;
Obj x140690933136807 = __arg2;
Obj x140690933136871 = __arg3;
Obj x140690933136903 = co->args[4];
Obj x140690933137287 = makeNative(20, clofun1, 0, 4, x140690933136871, x140690933136487, x140690933136807, x140690933136903);
Obj x140690930574791 = PRIM_ISCONS(x140690933136487);
if (True == x140690930574791) {
Obj x140690930575111 = PRIM_CAR(x140690933136487);
Obj x140690930575143 = PRIM_ISCONS(x140690930575111);
if (True == x140690930575143) {
Obj x140690930575463 = PRIM_CAR(x140690933136487);
Obj x140690930575495 = PRIM_CAR(x140690930575463);
Obj x140690930575527 = PRIM_EQ(__symbolTable[81], x140690930575495);
if (True == x140690930575527) {
Obj x140690930575911 = PRIM_CAR(x140690933136487);
Obj x140690930576103 = PRIM_CDR(x140690930575911);
Obj x140690930576135 = PRIM_ISCONS(x140690930576103);
if (True == x140690930576135) {
Obj x140690930576455 = PRIM_CAR(x140690933136487);
Obj x140690930576487 = PRIM_CDR(x140690930576455);
Obj x140690930576647 = PRIM_CAR(x140690930576487);
Obj lib = x140690930576647;
Obj x140690930577095 = PRIM_CAR(x140690933136487);
Obj x140690930577127 = PRIM_CDR(x140690930577095);
Obj x140690930577159 = PRIM_CDR(x140690930577127);
Obj x140690930577191 = PRIM_EQ(Nil, x140690930577159);
if (True == x140690930577191) {
Obj x140690930577351 = PRIM_CDR(x140690933136487);
Obj rest = x140690930577351;
Obj x140690930553031 = makeCons(lib, x140690933136807);
__nargs = 5;
__arg0 = globalRef(__symbolTable[83]);
__arg1 = rest;
__arg2 = x140690930553031;
__arg3 = x140690933136871;
co->args[4] = x140690933136903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137287);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137287);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137287);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137287);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137287);
}
}

label20:
{
Obj x140690933066055 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj x140690930629991 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690930629991) {
Obj x140690930630311 = PRIM_CAR(closureRef(co, 1));
Obj x140690930630343 = PRIM_ISCONS(x140690930630311);
if (True == x140690930630343) {
Obj x140690930573447 = PRIM_CAR(closureRef(co, 1));
Obj x140690930573479 = PRIM_CAR(x140690930573447);
Obj x140690930573671 = PRIM_EQ(__symbolTable[82], x140690930573479);
if (True == x140690930573671) {
Obj x140690930573959 = PRIM_CAR(closureRef(co, 1));
Obj x140690930573991 = PRIM_CDR(x140690930573959);
Obj more = x140690930573991;
Obj x140690930574279 = PRIM_CDR(closureRef(co, 1));
Obj rest = x140690930574279;
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
JUMP_WITH_ARGS_1(clofun1, x140690933066055);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933066055);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933066055);
}
}

label21:
{
PUSH_CONT_0(co, 22, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[149]), closureRef(co, 1));
}

label22:
{
Obj x140690930629671 = __arg1;
JUMP_WITH_ARGS_4(clofun1, closureRef(co, 0), x140690930629671, closureRef(co, 2), closureRef(co, 3));
}

label23:
{
Obj exp = __arg1;
pushCont(co, 24, clofun1, 1, exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), exp);
}

label24:
{
Obj x140690930628775 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, x140690930628775);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), exp);
}

label25:
{
Obj x140690930628871 = __arg1;
Obj x140690930628775= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[85]), x140690930628775, x140690930628871);
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
Obj x140690930626855 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[161]), x140690930626855);
}

label28:
{
Obj x140690930626887 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930626887) {
Obj x140690930627207 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, x140690930627207, fn);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), arglist);
} else {
Obj x140690930627911 = PRIM_CAR(arglist);
Obj x140690930628199 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, x140690930627911, fn);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[85]), fn, x140690930628199);
}
}

label29:
{
Obj x140690930628231 = __arg1;
Obj x140690930627911= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930628263 = makeCons(x140690930628231, Nil);
Obj x140690930628295 = makeCons(x140690930627911, x140690930628263);
Obj x140690930628327 = makeCons(fn, x140690930628295);
__nargs = 2;
__arg1 = x140690930628327;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140690930627399 = __arg1;
Obj x140690930627207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930627431 = makeCons(x140690930627399, Nil);
Obj x140690930627463 = makeCons(x140690930627207, x140690930627431);
Obj x140690930627687 = makeCons(fn, x140690930627463);
__nargs = 2;
__arg1 = x140690930627687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 32, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[160]), exp);
}

label32:
{
Obj x140690930683687 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[88]), x140690930683687);
}

label33:
{
Obj x140690933065799 = __arg1;
Obj x140690931011399 = primIsSymbol(x140690933065799);
if (True == x140690931011399) {
Obj x140690931011559 = makeCons(x140690933065799, Nil);
Obj x140690930679847 = makeCons(__symbolTable[139], x140690931011559);
__nargs = 2;
__arg1 = x140690930679847;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933066215 = makeNative(34, clofun1, 0, 1, x140690933065799);
Obj x140690930681447 = PRIM_ISCONS(x140690933065799);
if (True == x140690930681447) {
Obj x140690930681671 = PRIM_CAR(x140690933065799);
Obj x140690930681703 = PRIM_EQ(__symbolTable[87], x140690930681671);
if (True == x140690930681703) {
Obj x140690930682023 = PRIM_CDR(x140690933065799);
Obj x140690930682055 = PRIM_ISCONS(x140690930682023);
if (True == x140690930682055) {
Obj x140690930682343 = PRIM_CDR(x140690933065799);
Obj x140690930682375 = PRIM_CAR(x140690930682343);
Obj x = x140690930682375;
Obj x140690930682727 = PRIM_CDR(x140690933065799);
Obj x140690930682759 = PRIM_CDR(x140690930682727);
Obj x140690930682951 = PRIM_EQ(Nil, x140690930682759);
if (True == x140690930682951) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933066215);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933066215);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933066215);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933066215);
}
}
}

label34:
{
Obj x140690930680231 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930680231) {
Obj x140690930680519 = PRIM_CAR(closureRef(co, 0));
Obj x = x140690930680519;
Obj x140690930680743 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690930680743;
Obj x140690930681127 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), x140690930681127);
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
Obj x140690930681159 = __arg1;
Obj x140690930681191 = makeCons(__symbolTable[135], x140690930681159);
__nargs = 2;
__arg1 = x140690930681191;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj exp = __arg1;
Obj x140690931010759 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[91]), x140690931010759);
}

label37:
{
Obj x140690933136423 = __arg1;
Obj x140690933136519 = makeNative(38, clofun1, 0, 1, x140690933136423);
Obj x140690931009575 = PRIM_ISCONS(x140690933136423);
if (True == x140690931009575) {
Obj x140690931009799 = PRIM_CAR(x140690933136423);
Obj x = x140690931009799;
Obj x140690931010023 = PRIM_CDR(x140690933136423);
Obj x140690931010119 = PRIM_EQ(Nil, x140690931010023);
if (True == x140690931010119) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
}

label38:
{
Obj x140690933137319 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj x140690931099495 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931099495) {
Obj x140690931099751 = PRIM_CAR(closureRef(co, 0));
Obj x = x140690931099751;
Obj x140690931100071 = PRIM_CDR(closureRef(co, 0));
Obj x140690931100103 = PRIM_ISCONS(x140690931100071);
if (True == x140690931100103) {
Obj x140690931100455 = PRIM_CDR(closureRef(co, 0));
Obj x140690931100487 = PRIM_CAR(x140690931100455);
Obj y = x140690931100487;
Obj x140690931008583 = PRIM_CDR(closureRef(co, 0));
Obj x140690931008615 = PRIM_CDR(x140690931008583);
Obj x140690931008647 = PRIM_EQ(Nil, x140690931008615);
if (True == x140690931008647) {
Obj x140690931008935 = makeCons(y, Nil);
Obj x140690931008967 = makeCons(x, x140690931008935);
Obj x140690931008999 = makeCons(__symbolTable[90], x140690931008967);
__nargs = 2;
__arg1 = x140690931008999;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137319);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137319);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933137319);
}
}

label39:
{
Obj x140690931098119 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931098119) {
Obj x140690931098311 = PRIM_CAR(closureRef(co, 0));
Obj x = x140690931098311;
Obj x140690931098535 = PRIM_CDR(closureRef(co, 0));
Obj y = x140690931098535;
pushCont(co, 40, clofun1, 1, x);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[91]), y);
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
}
}

label40:
{
Obj x140690931099111 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931099143 = makeCons(x140690931099111, Nil);
Obj x140690931099175 = makeCons(x, x140690931099143);
Obj x140690931099207 = makeCons(__symbolTable[90], x140690931099175);
__nargs = 2;
__arg1 = x140690931099207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 42, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[141]), exp);
}

label42:
{
Obj x140690931150311 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[94]), x140690931150311);
}

label43:
{
Obj x140690931150375 = __arg1;
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[92]), x140690931150375);
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
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[157]), exp);
}

label47:
{
Obj x140690931147655 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[104]), x140690931147655);
}

label48:
{
Obj x140690931147687 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140690931147687;
pushCont(co, 49, clofun1, 2, exp, body);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[97]), body);
}

label49:
{
Obj x140690931147943 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140690931147943;
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
Obj x140690931148135 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140690931148135;
pushCont(co, 1, clofun2, 2, body, args);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), exp);
}

label1:
{
Obj x140690931148519 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931148935 = makeCons(__symbolTable[135], args);
Obj x140690931148967 = makeCons(x140690931148935, body);
Obj x140690931148999 = makeCons(__symbolTable[107], x140690931148967);
Obj x140690931149063 = makeCons(x140690931148999, Nil);
Obj x140690931149095 = makeCons(args, x140690931149063);
Obj x140690931149127 = makeCons(x140690931148519, x140690931149095);
Obj x140690931149159 = makeCons(__symbolTable[134], x140690931149127);
__nargs = 2;
__arg1 = x140690931149159;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj n = __arg1;
Obj x140690931220391 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140690931220391) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931146823 = primGenSym();
Obj x140690931147015 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, x140690931146823);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[96]), x140690931147015);
}
}

label3:
{
Obj x140690931147047 = __arg1;
Obj x140690931146823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931147079 = makeCons(x140690931146823, x140690931147047);
__nargs = 2;
__arg1 = x140690931147079;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 5, clofun2);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[103]), Nil, rules);
}

label5:
{
Obj x140690931218215 = __arg1;
Obj pats = x140690931218215;
PUSH_CONT_0(co, 6, clofun2);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[147]), makeNative(10, clofun2, 1, 0), pats);
}

label6:
{
Obj x140690931218727 = __arg1;
Obj counts = x140690931218727;
Obj x140690931218919 = PRIM_CAR(counts);
Obj n = x140690931218919;
Obj x140690931219655 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[99]), makeNative(9, clofun2, 1, 1, n), x140690931219655);
}

label7:
{
Obj x140690931219687 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[161]), x140690931219687);
}

label8:
{
Obj x140690931219719 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931219751 = primNot(x140690931219719);
if (True == x140690931219751) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("inconsistent func rule args count"));
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
Obj x140690931219463 = PRIM_EQ(closureRef(co, 0), x);
Obj x140690931219495 = primNot(x140690931219463);
__nargs = 2;
__arg1 = x140690931219495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x = __arg1;
Obj x140690931218695 = PRIM_CDR(x);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[101]), x140690931218695);
}

label11:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj x140690931217287 = PRIM_EQ(l1, Nil);
if (True == x140690931217287) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931217479 = PRIM_CAR(l1);
Obj x140690931217703 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, x140690931217479);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[98]), x140690931217703, l2);
}
}

label12:
{
Obj x140690931217735 = __arg1;
Obj x140690931217479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931217767 = makeCons(x140690931217479, x140690931217735);
__nargs = 2;
__arg1 = x140690931217767;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140690933021671 = PRIM_ISCONS(l);
if (True == x140690933021671) {
Obj x140690933021895 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
JUMP_WITH_ARGS_2(clofun2, fn, x140690933021895);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), res);
}
}

label15:
{
Obj x140690933021959 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140690933021959) {
Obj x140690933022247 = PRIM_CAR(l);
Obj x140690933022343 = makeCons(x140690933022247, res);
Obj x140690933022439 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), x140690933022343, fn, x140690933022439);
} else {
Obj x140690933022663 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[100]), res, fn, x140690933022663);
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
Obj x140690933020391 = PRIM_EQ(l, Nil);
if (True == x140690933020391) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933020551 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140690933020679 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[102]), x140690933020551, x140690933020679);
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
Obj x140690933019271 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690933019271) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), res);
} else {
Obj x140690933019559 = PRIM_CAR(rules);
Obj x140690933019783 = makeCons(x140690933019559, res);
pushCont(co, 20, clofun2, 1, x140690933019783);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[157]), rules);
}
}

label20:
{
Obj x140690933019879 = __arg1;
Obj x140690933019783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[103]), x140690933019783, x140690933019879);
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
Obj x140690930426695 = PRIM_EQ(Nil, input);
if (True == x140690930426695) {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), result);
} else {
Obj x140690933134119 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj x140690933136199 = PRIM_ISCONS(input);
if (True == x140690933136199) {
Obj x140690933136455 = PRIM_CAR(input);
Obj x140690933136551 = PRIM_EQ(__symbolTable[105], x140690933136455);
if (True == x140690933136551) {
Obj x140690933136775 = PRIM_CDR(input);
Obj x140690933136839 = PRIM_ISCONS(x140690933136775);
if (True == x140690933136839) {
Obj x140690933137127 = PRIM_CDR(input);
Obj x140690933137159 = PRIM_CAR(x140690933137127);
Obj act = x140690933137159;
Obj x140690933063783 = PRIM_CDR(input);
Obj x140690933063815 = PRIM_CDR(x140690933063783);
Obj x140690933063847 = PRIM_ISCONS(x140690933063815);
if (True == x140690933063847) {
Obj x140690933064199 = PRIM_CDR(input);
Obj x140690933064231 = PRIM_CDR(x140690933064199);
Obj x140690933064263 = PRIM_CAR(x140690933064231);
Obj x140690933064295 = PRIM_EQ(__symbolTable[110], x140690933064263);
if (True == x140690933064295) {
Obj x140690933064647 = PRIM_CDR(input);
Obj x140690933064679 = PRIM_CDR(x140690933064647);
Obj x140690933064711 = PRIM_CDR(x140690933064679);
Obj x140690933064743 = PRIM_ISCONS(x140690933064711);
if (True == x140690933064743) {
Obj x140690933065095 = PRIM_CDR(input);
Obj x140690933065127 = PRIM_CDR(x140690933065095);
Obj x140690933065159 = PRIM_CDR(x140690933065127);
Obj x140690933065191 = PRIM_CAR(x140690933065159);
Obj pred = x140690933065191;
Obj x140690933065671 = PRIM_CDR(input);
Obj x140690933065703 = PRIM_CDR(x140690933065671);
Obj x140690933065735 = PRIM_CDR(x140690933065703);
Obj x140690933065767 = PRIM_CDR(x140690933065735);
Obj remain = x140690933065767;
pushCont(co, 23, clofun2, 4, act, pred, result, remain);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), current);
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933134119);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933134119);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933134119);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933134119);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933134119);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933134119);
}
}
}

label23:
{
Obj x140690933066119 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933066151 = makeCons(__symbolTable[135], x140690933066119);
Obj pat = x140690933066151;
Obj x140690933066631 = makeCons(act, Nil);
Obj x140690933066663 = makeCons(pred, x140690933066631);
Obj x140690933066727 = makeCons(__symbolTable[110], x140690933066663);
Obj x140690933066919 = makeCons(pat, result);
Obj x140690933066951 = makeCons(x140690933066727, x140690933066919);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), remain, Nil, x140690933066951);
}

label24:
{
Obj x140690933135111 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930428071 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930428071) {
Obj x140690933134023 = PRIM_CAR(closureRef(co, 0));
Obj x140690933134055 = PRIM_EQ(__symbolTable[105], x140690933134023);
if (True == x140690933134055) {
Obj x140690933134375 = PRIM_CDR(closureRef(co, 0));
Obj x140690933134407 = PRIM_ISCONS(x140690933134375);
if (True == x140690933134407) {
Obj x140690933134663 = PRIM_CDR(closureRef(co, 0));
Obj x140690933134695 = PRIM_CAR(x140690933134663);
Obj act = x140690933134695;
Obj x140690933134951 = PRIM_CDR(closureRef(co, 0));
Obj x140690933134983 = PRIM_CDR(x140690933134951);
Obj remain = x140690933134983;
pushCont(co, 25, clofun2, 2, act, remain);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[149]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933135111);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933135111);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933135111);
}
}

label25:
{
Obj x140690933135271 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135303 = makeCons(__symbolTable[135], x140690933135271);
Obj pat = x140690933135303;
Obj x140690933135655 = makeCons(pat, closureRef(co, 2));
Obj x140690933135719 = makeCons(act, x140690933135655);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), remain, Nil, x140690933135719);
}

label26:
{
Obj x140690930427207 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930427207) {
Obj x140690930427399 = PRIM_CAR(closureRef(co, 0));
Obj x = x140690930427399;
Obj x140690930427591 = PRIM_CDR(closureRef(co, 0));
Obj y = x140690930427591;
Obj x140690930427783 = makeCons(x, closureRef(co, 1));
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[106]), y, x140690930427783, closureRef(co, 2));
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
Obj x140690930514343 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[138]), x140690930514343);
}

label30:
{
Obj x140690930514375 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140690930514375;
pushCont(co, 31, clofun2, 1, value);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[157]), exp);
}

label31:
{
Obj x140690930514535 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140690930514535;
Obj x140690933133383 = makeNative(32, clofun2, 1, 2, value, rules);
Obj x140690930515783 = PRIM_ISCONS(value);
if (True == x140690930515783) {
Obj x140690930425959 = PRIM_CAR(value);
Obj x140690930425991 = PRIM_EQ(__symbolTable[152], x140690930425959);
Obj x140690930426023 = primNot(x140690930425991);
if (True == x140690930426023) {
JUMP_WITH_ARGS_2(clofun2, x140690933133383, True);
} else {
JUMP_WITH_ARGS_2(clofun2, x140690933133383, False);
}
} else {
JUMP_WITH_ARGS_2(clofun2, x140690933133383, False);
}
}

label32:
{
Obj x140690933133415 = __arg1;
if (True == x140690933133415) {
Obj x140690930514887 = primGenSym();
Obj val = x140690930514887;
pushCont(co, 33, clofun2, 1, val);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), val, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), closureRef(co, 0), closureRef(co, 1));
}
}

label33:
{
Obj x140690930515303 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930515335 = makeCons(x140690930515303, Nil);
Obj x140690930515367 = makeCons(closureRef(co, 0), x140690930515335);
Obj x140690930515399 = makeCons(val, x140690930515367);
Obj x140690930515431 = makeCons(__symbolTable[129], x140690930515399);
__nargs = 2;
__arg1 = x140690930515431;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140690930556103 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930556103) {
Obj x140690930556263 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140690930556295 = makeCons(__symbolTable[127], x140690930556263);
__nargs = 2;
__arg1 = x140690930556295;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933133319 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, x140690933133319);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), rules);
}
}

label36:
{
Obj x140690930513639 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930513639) {
Obj x140690930513863 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, x140690933133319);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), x140690930513863);
} else {
JUMP_WITH_ARGS_2(clofun2, x140690933133319, False);
}
}

label37:
{
Obj x140690930513895 = __arg1;
Obj x140690933133319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930513895) {
JUMP_WITH_ARGS_2(clofun2, x140690933133319, True);
} else {
JUMP_WITH_ARGS_2(clofun2, x140690933133319, False);
}
}

label38:
{
Obj x140690933133351 = __arg1;
if (True == x140690933133351) {
Obj x140690930556679 = PRIM_CAR(closureRef(co, 1));
Obj pat = x140690930556679;
Obj x140690930556839 = primGenSym();
Obj cc = x140690930556839;
pushCont(co, 39, clofun2, 2, pat, cc);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[111]), closureRef(co, 1), cc);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[127]), makeCString("no cond match"));
}
}

label39:
{
Obj x140690930511975 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = x140690930511975;
pushCont(co, 40, clofun2, 2, action, cc);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[138]), pat);
}

label40:
{
Obj x140690930512199 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = x140690930512199;
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
Obj x140690930512263 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140690930512263;
Obj x140690930512615 = PRIM_CDR(closureRef(co, 1));
Obj x140690930512647 = PRIM_CDR(x140690930512615);
pushCont(co, 42, clofun2, 2, curr, cc);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[109]), closureRef(co, 0), x140690930512647);
}

label42:
{
Obj x140690930512679 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140690930512679;
Obj x140690930513095 = makeCons(rest, Nil);
Obj x140690930513127 = makeCons(Nil, x140690930513095);
Obj x140690930513159 = makeCons(__symbolTable[140], x140690930513127);
Obj x140690930513255 = makeCons(curr, Nil);
Obj x140690930513287 = makeCons(x140690930513159, x140690930513255);
Obj x140690930513319 = makeCons(cc, x140690930513287);
Obj x140690930513351 = makeCons(__symbolTable[129], x140690930513319);
__nargs = 2;
__arg1 = x140690930513351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140690930554215 = PRIM_CDR(rules);
Obj x140690930554247 = PRIM_CAR(x140690930554215);
Obj action = x140690930554247;
Obj x140690933133575 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, x140690933133575);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[151]), action);
}

label44:
{
Obj x140690930555463 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930555463) {
Obj x140690930555687 = PRIM_CAR(action);
Obj x140690930555719 = PRIM_EQ(x140690930555687, __symbolTable[110]);
if (True == x140690930555719) {
JUMP_WITH_ARGS_2(clofun2, x140690933133575, True);
} else {
JUMP_WITH_ARGS_2(clofun2, x140690933133575, False);
}
} else {
JUMP_WITH_ARGS_2(clofun2, x140690933133575, False);
}
}

label45:
{
Obj x140690933133607 = __arg1;
if (True == x140690933133607) {
PUSH_CONT_0(co, 46, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[160]), closureRef(co, 1));
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
Obj x140690930554695 = __arg1;
pushCont(co, 47, clofun2, 1, x140690930554695);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[156]), closureRef(co, 1));
}

label47:
{
Obj x140690930554887 = __arg1;
Obj x140690930554695= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930555079 = makeCons(closureRef(co, 0), Nil);
Obj x140690930555111 = makeCons(x140690930555079, Nil);
Obj x140690930555143 = makeCons(x140690930554887, x140690930555111);
Obj x140690930555175 = makeCons(x140690930554695, x140690930555143);
Obj x140690930555207 = makeCons(__symbolTable[126], x140690930555175);
__nargs = 2;
__arg1 = x140690930555207;
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
JUMP_WITH_ARGS_2(clofun2, makeNative(2, clofun3, 1, 0), pat);
}

label49:
{
Obj x140690930574983 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140690930574983) {
Obj x140690930575303 = PRIM_EQ(pat, expr);
if (True == x140690930575303) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930575655 = makeCons(expr, Nil);
Obj x140690930575687 = makeCons(pat, x140690930575655);
Obj x140690930575719 = makeCons(__symbolTable[113], x140690930575687);
Obj x140690930575943 = makeCons(cc, Nil);
Obj x140690930575975 = makeCons(x140690930575943, Nil);
Obj x140690930576007 = makeCons(body, x140690930575975);
Obj x140690930576039 = makeCons(x140690930575719, x140690930576007);
Obj x140690930576071 = makeCons(__symbolTable[126], x140690930576039);
__nargs = 2;
__arg1 = x140690930576071;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140690930576231 = primIsSymbol(pat);
if (True == x140690930576231) {
Obj x140690930576519 = makeCons(body, Nil);
Obj x140690930576551 = makeCons(expr, x140690930576519);
Obj x140690930576583 = makeCons(pat, x140690930576551);
Obj x140690930576615 = makeCons(__symbolTable[129], x140690930576583);
__nargs = 2;
__arg1 = x140690930576615;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140690930576775 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140690930576775) {
Obj x140690930576999 = PRIM_CAR(pat);
Obj x140690930577031 = PRIM_EQ(x140690930576999, __symbolTable[139]);
if (True == x140690930577031) {
Obj x140690930577383 = makeCons(expr, Nil);
Obj x140690930552839 = makeCons(pat, x140690930577383);
Obj x140690930552871 = makeCons(__symbolTable[113], x140690930552839);
Obj x140690930553095 = makeCons(cc, Nil);
Obj x140690930553127 = makeCons(x140690930553095, Nil);
Obj x140690930553159 = makeCons(body, x140690930553127);
Obj x140690930553191 = makeCons(x140690930552871, x140690930553159);
Obj x140690930553223 = makeCons(__symbolTable[126], x140690930553191);
__nargs = 2;
__arg1 = x140690930553223;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930553447 = PRIM_CAR(pat);
Obj x140690930553479 = PRIM_EQ(x140690930553447, __symbolTable[152]);
if (True == x140690930553479) {
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
Obj x140690930553767 = __arg1;
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[127]), x140690930553767);
}

label2:
{
Obj x = __arg1;
pushCont(co, 3, clofun3, 1, x);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[131]), x);
}

label3:
{
Obj x140690930574695 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930574695) {
Obj x140690930574919 = primIsSymbol(x);
Obj x140690930574951 = primNot(x140690930574919);
if (True == x140690930574951) {
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
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), pat);
}

label5:
{
Obj x140690930628391 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140690930628391;
pushCont(co, 6, clofun3, 4, x, body, cc, expr);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), pat);
}

label6:
{
Obj x140690930628551 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140690930628551;
Obj x140690933133511 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj x140690930573863 = PRIM_ISCONS(expr);
if (True == x140690930573863) {
Obj x140690930574087 = PRIM_CAR(expr);
Obj x140690930574119 = PRIM_EQ(x140690930574087, __symbolTable[152]);
if (True == x140690930574119) {
JUMP_WITH_ARGS_2(clofun3, x140690933133511, True);
} else {
JUMP_WITH_ARGS_2(clofun3, x140690933133511, False);
}
} else {
JUMP_WITH_ARGS_2(clofun3, x140690933133511, False);
}
}

label7:
{
Obj x140690933133543 = __arg1;
if (True == x140690933133543) {
PUSH_CONT_0(co, 10, clofun3);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), closureRef(co, 2));
} else {
Obj x140690930629767 = makeCons(closureRef(co, 2), Nil);
Obj x140690930629799 = makeCons(__symbolTable[116], x140690930629767);
Obj x140690930630151 = makeCons(closureRef(co, 2), Nil);
Obj x140690930630183 = makeCons(__symbolTable[115], x140690930630151);
Obj x140690930630471 = makeCons(closureRef(co, 2), Nil);
Obj x140690930630503 = makeCons(__symbolTable[114], x140690930630471);
pushCont(co, 8, clofun3, 2, x140690930630183, x140690930629799);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 1);
__arg2 = x140690930630503;
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
Obj x140690930630599 = __arg1;
Obj x140690930630183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930629799= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, x140690930629799);
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = x140690930630183;
__arg3 = x140690930630599;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140690930573319 = __arg1;
Obj x140690930629799= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930573511 = makeCons(closureRef(co, 4), Nil);
Obj x140690930573543 = makeCons(x140690930573511, Nil);
Obj x140690930573575 = makeCons(x140690930573319, x140690930573543);
Obj x140690930573607 = makeCons(x140690930629799, x140690930573575);
Obj x140690930573639 = makeCons(__symbolTable[126], x140690930573607);
__nargs = 2;
__arg1 = x140690930573639;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x140690930628935 = __arg1;
Obj e1 = x140690930628935;
pushCont(co, 11, clofun3, 1, e1);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), closureRef(co, 2));
}

label11:
{
Obj x140690930629127 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = x140690930629127;
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
Obj x140690930629415 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(__symbolTable[117]);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = x140690930629415;
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
Obj x140690930628007 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[120]), x140690930628007);
}

label14:
{
Obj pat = __arg1;
Obj x140690930626919 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[161]), x140690930626919);
}

label15:
{
Obj x140690930626951 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930626951) {
Obj x140690930627047 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140690930627047;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930627271 = PRIM_CAR(pat);
Obj x140690930627495 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, x140690930627271);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[120]), x140690930627495);
}
}

label16:
{
Obj x140690930627527 = __arg1;
Obj x140690930627271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930627559 = makeCons(x140690930627527, Nil);
Obj x140690930627591 = makeCons(x140690930627271, x140690930627559);
Obj x140690930627623 = makeCons(__symbolTable[152], x140690930627591);
__nargs = 2;
__arg1 = x140690930627623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj x140690930683655 = PRIM_EQ(x, True);
if (True == x140690930683655) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930683815 = PRIM_EQ(x, False);
if (True == x140690930683815) {
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
Obj x140690930683271 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[123]), x140690930683271);
}

label19:
{
Obj l = __arg1;
Obj x140690930681735 = PRIM_EQ(Nil, l);
if (True == x140690930681735) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930681959 = PRIM_CAR(l);
Obj x140690930681991 = PRIM_EQ(x140690930681959, False);
if (True == x140690930681991) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930682215 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[123]), x140690930682215);
}
}
}

label20:
{
Obj x140690930682247 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140690930682247;
Obj x140690930682407 = PRIM_EQ(more, False);
if (True == x140690930682407) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930682631 = PRIM_CAR(l);
Obj x140690930682791 = makeCons(False, Nil);
Obj x140690930682823 = makeCons(more, x140690930682791);
Obj x140690930682855 = makeCons(x140690930682631, x140690930682823);
Obj x140690930682887 = makeCons(__symbolTable[126], x140690930682855);
__nargs = 2;
__arg1 = x140690930682887;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label21:
{
Obj exp = __arg1;
Obj x140690930681351 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[125]), x140690930681351);
}

label22:
{
Obj l = __arg1;
Obj x140690930679815 = PRIM_EQ(l, Nil);
if (True == x140690930679815) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930680039 = PRIM_CAR(l);
Obj x140690930680071 = PRIM_EQ(x140690930680039, True);
if (True == x140690930680071) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930680295 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[125]), x140690930680295);
}
}
}

label23:
{
Obj x140690930680327 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140690930680327;
Obj x140690930680487 = PRIM_EQ(more, True);
if (True == x140690930680487) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930680711 = PRIM_CAR(l);
Obj x140690930680871 = makeCons(more, Nil);
Obj x140690930680903 = makeCons(True, x140690930680871);
Obj x140690930680935 = makeCons(x140690930680711, x140690930680903);
Obj x140690930680967 = makeCons(__symbolTable[126], x140690930680935);
__nargs = 2;
__arg1 = x140690930680967;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label24:
{
Obj exp = __arg1;
Obj x140690931010055 = PRIM_CDR(exp);
Obj x140690931010087 = PRIM_EQ(Nil, x140690931010055);
if (True == x140690931010087) {
Obj x140690931010247 = makeCons(makeCString("no cond match"), Nil);
Obj x140690931010279 = makeCons(__symbolTable[127], x140690931010247);
__nargs = 2;
__arg1 = x140690931010279;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 25, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}
}

label25:
{
Obj x140690931010439 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140690931010439;
Obj x140690931010663 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, x140690931010663);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), curr);
}

label26:
{
Obj x140690931010823 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931010663= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, x140690931010823, x140690931010663);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[157]), exp);
}

label27:
{
Obj x140690931011047 = __arg1;
Obj x140690931010823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931010663= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931011079 = makeCons(__symbolTable[128], x140690931011047);
Obj x140690931011111 = makeCons(x140690931011079, Nil);
Obj x140690931011143 = makeCons(x140690931010823, x140690931011111);
Obj x140690931011175 = makeCons(x140690931010663, x140690931011143);
Obj x140690931011207 = makeCons(__symbolTable[126], x140690931011175);
__nargs = 2;
__arg1 = x140690931011207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj exp = __arg1;
Obj x140690931009607 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[130]), x140690931009607);
}

label29:
{
Obj exp = __arg1;
Obj x140690931100647 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[161]), x140690931100647);
}

label30:
{
Obj x140690931100679 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690931100679) {
Obj x140690931008455 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140690931008455;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931008679 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, x140690931008679);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}
}

label31:
{
Obj x140690931008839 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931008679= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, x140690931008839, x140690931008679);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[157]), exp);
}

label32:
{
Obj x140690931009063 = __arg1;
Obj x140690931008839= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931008679= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, x140690931008839, x140690931008679);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[130]), x140690931009063);
}

label33:
{
Obj x140690931009095 = __arg1;
Obj x140690931008839= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931008679= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931009127 = makeCons(x140690931009095, Nil);
Obj x140690931009159 = makeCons(x140690931008839, x140690931009127);
Obj x140690931009191 = makeCons(x140690931008679, x140690931009159);
Obj x140690931009223 = makeCons(__symbolTable[129], x140690931009191);
__nargs = 2;
__arg1 = x140690931009223;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x = __arg1;
Obj x140690931100167 = PRIM_ISCONS(x);
Obj x140690931100199 = primNot(x140690931100167);
__nargs = 2;
__arg1 = x140690931100199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140690931099367 = PRIM_ISCONS(l);
if (True == x140690931099367) {
Obj x140690931099591 = PRIM_CAR(l);
Obj x140690931099623 = PRIM_EQ(x140690931099591, x);
if (True == x140690931099623) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931099783 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[132]), x, x140690931099783);
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
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}

label37:
{
Obj x140690931098343 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, x140690931098343);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label38:
{
Obj x140690931098631 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931098343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, x140690931098631, x140690931098343);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[155]), exp);
}

label39:
{
Obj x140690931098791 = __arg1;
Obj x140690931098631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931098343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931098823 = makeCons(x140690931098791, Nil);
Obj x140690931098855 = makeCons(x140690931098631, x140690931098823);
Obj x140690931098887 = makeCons(__symbolTable[140], x140690931098855);
Obj x140690931098919 = makeCons(x140690931098887, Nil);
Obj x140690931098951 = makeCons(x140690931098343, x140690931098919);
Obj x140690931098983 = makeCons(__symbolTable[133], x140690931098951);
__nargs = 2;
__arg1 = x140690931098983;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj exp = __arg1;
Obj x140690931097895 = PRIM_CDR(exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[153]), x140690931097895);
}

label41:
{
Obj exp = __arg1;
pushCont(co, 42, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
}

label42:
{
Obj x140690931149991 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931150023 = makeCons(x140690931149991, Nil);
Obj x140690931150055 = makeCons(__symbolTable[139], x140690931150023);
pushCont(co, 43, clofun3, 2, exp, x140690931150055);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label43:
{
Obj x140690931150343 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931150055= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, x140690931150343, x140690931150055);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[154]), exp);
}

label44:
{
Obj x140690931150439 = __arg1;
Obj x140690931150343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931150055= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931150471 = makeCons(x140690931150343, x140690931150439);
Obj x140690931150503 = makeCons(__symbolTable[140], x140690931150471);
Obj x140690931150535 = makeCons(x140690931150503, Nil);
Obj x140690931150567 = makeCons(x140690931150055, x140690931150535);
Obj x140690931150599 = makeCons(__symbolTable[144], x140690931150567);
__nargs = 2;
__arg1 = x140690931150599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
Obj x140690931147239 = PRIM_ISCONS(exp);
if (True == x140690931147239) {
Obj x140690931147463 = PRIM_CAR(exp);
Obj x140690931147495 = PRIM_EQ(x140690931147463, globalRef(__symbolTable[145]));
if (True == x140690931147495) {
Obj x140690931147591 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140690931147591;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931147847 = PRIM_CAR(exp);
Obj x140690931147879 = PRIM_EQ(x140690931147847, __symbolTable[140]);
if (True == x140690931147879) {
pushCont(co, 48, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[160]), exp);
} else {
Obj x140690931148679 = PRIM_CAR(exp);
Obj x140690931148711 = PRIM_EQ(x140690931148679, __symbolTable[139]);
if (True == x140690931148711) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 46, clofun3, 1, exp);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[142]), exp);
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
Obj x140690931149255 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, makeNative(47, clofun3, 1, 1, exp), x140690931149255);
}

label47:
{
Obj exp1 = __arg1;
Obj x140690931149031 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140690931149031) {
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[147]), globalRef(__symbolTable[141]), exp1);
} else {
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[141]), exp1);
}
}

label48:
{
Obj x140690931148103 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, x140690931148103);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[156]), exp);
}

label49:
{
Obj x140690931148327 = __arg1;
Obj x140690931148103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, x140690931148103);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[141]), x140690931148327);
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
Obj x140690931148359 = __arg1;
Obj x140690931148103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931148391 = makeCons(x140690931148359, Nil);
Obj x140690931148423 = makeCons(x140690931148103, x140690931148391);
Obj x140690931148455 = makeCons(__symbolTable[140], x140690931148423);
__nargs = 2;
__arg1 = x140690931148455;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140690931218759 = PRIM_EQ(Nil, macros);
if (True == x140690931218759) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931220295 = PRIM_CAR(macros);
JUMP_WITH_ARGS_2(clofun4, makeNative(3, clofun4, 1, 2, macros, exp), x140690931220295);
}
}

label3:
{
Obj item = __arg1;
Obj x140690933133447 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj x140690931219815 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690931219815) {
Obj x140690931220071 = PRIM_CAR(closureRef(co, 1));
Obj x140690931220167 = PRIM_CAR(item);
Obj x140690931220199 = PRIM_EQ(x140690931220071, x140690931220167);
if (True == x140690931220199) {
JUMP_WITH_ARGS_2(clofun4, x140690933133447, True);
} else {
JUMP_WITH_ARGS_2(clofun4, x140690933133447, False);
}
} else {
JUMP_WITH_ARGS_2(clofun4, x140690933133447, False);
}
}

label4:
{
Obj x140690933133479 = __arg1;
if (True == x140690933133479) {
Obj x140690931219271 = PRIM_CDR(closureRef(co, 0));
JUMP_WITH_ARGS_2(clofun4, x140690931219271, closureRef(co, 1));
} else {
Obj x140690931219527 = PRIM_CDR(closureRef(co, 2));
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[143]), closureRef(co, 1), x140690931219527);
}
}

label5:
{
Obj n = __arg1;
Obj v = __arg2;
Obj x140690931218311 = makeCons(n, v);
Obj x140690931218343 = makeCons(x140690931218311, globalRef(__symbolTable[146]));
Obj x140690931218375 = primSet(co, __symbolTable[146], x140690931218343);
__nargs = 2;
__arg1 = x140690931218375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140690931216583 = PRIM_ISCONS(l);
if (True == x140690931216583) {
Obj x140690931216903 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
JUMP_WITH_ARGS_2(clofun4, f, x140690931216903);
} else {
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[149]), res);
}
}

label8:
{
Obj x140690931216935 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690931216967 = makeCons(x140690931216935, res);
Obj x140690931217063 = PRIM_CDR(l);
JUMP_WITH_ARGS_4(clofun4, globalRef(__symbolTable[148]), x140690931216967, f, x140690931217063);
}

label9:
{
Obj res = __arg1;
Obj l = __arg2;
Obj x140690933021927 = PRIM_ISCONS(l);
if (True == x140690933021927) {
Obj x140690933022151 = PRIM_CAR(l);
Obj x140690933022183 = makeCons(x140690933022151, res);
Obj x140690933022279 = PRIM_CDR(l);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[150]), x140690933022183, x140690933022279);
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
Obj x140690933021543 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140690933021543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj exp = __arg1;
Obj x140690933020615 = PRIM_ISCONS(exp);
if (True == x140690933020615) {
Obj x140690933020839 = PRIM_CAR(exp);
Obj x140690933021095 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, x140690933020839);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[153]), x140690933021095);
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
Obj x140690933021127 = __arg1;
Obj x140690933020839= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933021159 = makeCons(x140690933021127, Nil);
Obj x140690933021191 = makeCons(x140690933020839, x140690933021159);
Obj x140690933021223 = makeCons(__symbolTable[152], x140690933021191);
__nargs = 2;
__arg1 = x140690933021223;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x = __arg1;
Obj x140690933020167 = PRIM_CDR(x);
Obj x140690933020199 = PRIM_CDR(x140690933020167);
Obj x140690933020231 = PRIM_CDR(x140690933020199);
__nargs = 2;
__arg1 = x140690933020231;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj x = __arg1;
Obj x140690933019591 = PRIM_CDR(x);
Obj x140690933019623 = PRIM_CDR(x140690933019591);
Obj x140690933019655 = PRIM_CDR(x140690933019623);
Obj x140690933019687 = PRIM_CAR(x140690933019655);
__nargs = 2;
__arg1 = x140690933019687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x = __arg1;
Obj x140690933019015 = PRIM_CDR(x);
Obj x140690933019047 = PRIM_CDR(x140690933019015);
Obj x140690933019079 = PRIM_CAR(x140690933019047);
__nargs = 2;
__arg1 = x140690933019079;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj x140690933067591 = PRIM_CDR(x);
Obj x140690933067623 = PRIM_CDR(x140690933067591);
__nargs = 2;
__arg1 = x140690933067623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj x140690933067175 = PRIM_CAR(x);
Obj x140690933067207 = PRIM_CDR(x140690933067175);
__nargs = 2;
__arg1 = x140690933067207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj x140690933066759 = PRIM_CAR(x);
Obj x140690933066791 = PRIM_CAR(x140690933066759);
__nargs = 2;
__arg1 = x140690933066791;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj x140690933066311 = PRIM_CDR(x);
Obj x140690933066343 = PRIM_CAR(x140690933066311);
__nargs = 2;
__arg1 = x140690933066343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj x140690933065863 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140690933065863;
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

