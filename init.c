#include "types.h"
#include "runtime1.h"

static void clofun95(struct Cora* co, int label, Obj *R);
static void clofun94(struct Cora* co, int label, Obj *R);
static void clofun93(struct Cora* co, int label, Obj *R);
static void clofun92(struct Cora* co, int label, Obj *R);
static void clofun91(struct Cora* co, int label, Obj *R);
static void clofun90(struct Cora* co, int label, Obj *R);
static void clofun89(struct Cora* co, int label, Obj *R);
static void clofun88(struct Cora* co, int label, Obj *R);
static void clofun87(struct Cora* co, int label, Obj *R);
static void clofun86(struct Cora* co, int label, Obj *R);
static void clofun85(struct Cora* co, int label, Obj *R);
static void clofun84(struct Cora* co, int label, Obj *R);
static void clofun83(struct Cora* co, int label, Obj *R);
static void clofun82(struct Cora* co, int label, Obj *R);
static void clofun81(struct Cora* co, int label, Obj *R);
static void clofun80(struct Cora* co, int label, Obj *R);
static void clofun79(struct Cora* co, int label, Obj *R);
static void clofun78(struct Cora* co, int label, Obj *R);
static void clofun77(struct Cora* co, int label, Obj *R);
static void clofun76(struct Cora* co, int label, Obj *R);
static void clofun75(struct Cora* co, int label, Obj *R);
static void clofun74(struct Cora* co, int label, Obj *R);
static void clofun73(struct Cora* co, int label, Obj *R);
static void clofun72(struct Cora* co, int label, Obj *R);
static void clofun71(struct Cora* co, int label, Obj *R);
static void clofun70(struct Cora* co, int label, Obj *R);
static void clofun69(struct Cora* co, int label, Obj *R);
static void clofun68(struct Cora* co, int label, Obj *R);
static void clofun67(struct Cora* co, int label, Obj *R);
static void clofun66(struct Cora* co, int label, Obj *R);
static void clofun65(struct Cora* co, int label, Obj *R);
static void clofun64(struct Cora* co, int label, Obj *R);
static void clofun63(struct Cora* co, int label, Obj *R);
static void clofun62(struct Cora* co, int label, Obj *R);
static void clofun61(struct Cora* co, int label, Obj *R);
static void clofun60(struct Cora* co, int label, Obj *R);
static void clofun59(struct Cora* co, int label, Obj *R);
static void clofun58(struct Cora* co, int label, Obj *R);
static void clofun57(struct Cora* co, int label, Obj *R);
static void clofun56(struct Cora* co, int label, Obj *R);
static void clofun55(struct Cora* co, int label, Obj *R);
static void clofun54(struct Cora* co, int label, Obj *R);
static void clofun53(struct Cora* co, int label, Obj *R);
static void clofun52(struct Cora* co, int label, Obj *R);
static void clofun51(struct Cora* co, int label, Obj *R);
static void clofun50(struct Cora* co, int label, Obj *R);
static void clofun49(struct Cora* co, int label, Obj *R);
static void clofun48(struct Cora* co, int label, Obj *R);
static void clofun47(struct Cora* co, int label, Obj *R);
static void clofun46(struct Cora* co, int label, Obj *R);
static void clofun45(struct Cora* co, int label, Obj *R);
static void clofun44(struct Cora* co, int label, Obj *R);
static void clofun43(struct Cora* co, int label, Obj *R);
static void clofun42(struct Cora* co, int label, Obj *R);
static void clofun41(struct Cora* co, int label, Obj *R);
static void clofun40(struct Cora* co, int label, Obj *R);
static void clofun39(struct Cora* co, int label, Obj *R);
static void clofun38(struct Cora* co, int label, Obj *R);
static void clofun37(struct Cora* co, int label, Obj *R);
static void clofun36(struct Cora* co, int label, Obj *R);
static void clofun35(struct Cora* co, int label, Obj *R);
static void clofun34(struct Cora* co, int label, Obj *R);
static void clofun33(struct Cora* co, int label, Obj *R);
static void clofun32(struct Cora* co, int label, Obj *R);
static void clofun31(struct Cora* co, int label, Obj *R);
static void clofun30(struct Cora* co, int label, Obj *R);
static void clofun29(struct Cora* co, int label, Obj *R);
static void clofun28(struct Cora* co, int label, Obj *R);
static void clofun27(struct Cora* co, int label, Obj *R);
static void clofun26(struct Cora* co, int label, Obj *R);
static void clofun25(struct Cora* co, int label, Obj *R);
static void clofun24(struct Cora* co, int label, Obj *R);
static void clofun23(struct Cora* co, int label, Obj *R);
static void clofun22(struct Cora* co, int label, Obj *R);
static void clofun21(struct Cora* co, int label, Obj *R);
static void clofun20(struct Cora* co, int label, Obj *R);
static void clofun19(struct Cora* co, int label, Obj *R);
static void clofun18(struct Cora* co, int label, Obj *R);
static void clofun17(struct Cora* co, int label, Obj *R);
static void clofun16(struct Cora* co, int label, Obj *R);
static void clofun15(struct Cora* co, int label, Obj *R);
static void clofun14(struct Cora* co, int label, Obj *R);
static void clofun13(struct Cora* co, int label, Obj *R);
static void clofun12(struct Cora* co, int label, Obj *R);
static void clofun11(struct Cora* co, int label, Obj *R);
static void clofun10(struct Cora* co, int label, Obj *R);
static void clofun9(struct Cora* co, int label, Obj *R);
static void clofun8(struct Cora* co, int label, Obj *R);
static void clofun7(struct Cora* co, int label, Obj *R);
static void clofun6(struct Cora* co, int label, Obj *R);
static void clofun5(struct Cora* co, int label, Obj *R);
static void clofun4(struct Cora* co, int label, Obj *R);
static void clofun3(struct Cora* co, int label, Obj *R);
static void clofun2(struct Cora* co, int label, Obj *R);
static void clofun1(struct Cora* co, int label, Obj *R);
static void clofun0(struct Cora* co, int label, Obj *R);


static __thread Obj* __symbolTable;

void entry(struct Cora *co, int label, Obj *R) {
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
co->ctx.fn = clofun95;
co->ctx.label = 0;
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309801927 = primSet(co, __symbolTable[161], makeNative1(2, clofun0, 1, 0));
Obj x4309802343 = primSet(co, __symbolTable[160], makeNative1(2, clofun1, 1, 0));
Obj x4309802759 = primSet(co, __symbolTable[159], makeNative1(2, clofun2, 1, 0));
Obj x4309794983 = primSet(co, __symbolTable[158], makeNative1(2, clofun3, 1, 0));
Obj x4309795399 = primSet(co, __symbolTable[157], makeNative1(2, clofun4, 1, 0));
Obj x4309795911 = primSet(co, __symbolTable[156], makeNative1(2, clofun5, 1, 0));
Obj x4309796519 = primSet(co, __symbolTable[155], makeNative1(2, clofun6, 1, 0));
Obj x4309797031 = primSet(co, __symbolTable[154], makeNative1(2, clofun7, 1, 0));
Obj x4309797991 = primSet(co, __symbolTable[153], makeNative1(2, clofun8, 1, 0));
Obj x4309798311 = primSet(co, __symbolTable[151], makeNative1(2, clofun9, 1, 0));
Obj x4309749895 = primSet(co, __symbolTable[150], makeNative1(3, clofun10, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 15,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[150]), Nil);
return;
}
case 1:
{
Obj x4308445223= co->res;
Obj x4308446567 = primSet(co, __symbolTable[76], makeNative1(3, clofun80, 2, 0));
Obj x4308371271 = primSet(co, __symbolTable[71], makeNative1(5, clofun81, 3, 0));
Obj x4308371687 = makeCons(makeCString("primSet"), Nil);
Obj x4308371719 = makeCons(MAKE_NUMBER(2), x4308371687);
Obj x4308371751 = makeCons(__symbolTable[68], x4308371719);
Obj x4308372039 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x4308372071 = makeCons(MAKE_NUMBER(1), x4308372039);
Obj x4308372103 = makeCons(__symbolTable[115], x4308372071);
Obj x4308372391 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x4308372423 = makeCons(MAKE_NUMBER(1), x4308372391);
Obj x4308372455 = makeCons(__symbolTable[114], x4308372423);
Obj x4308372743 = makeCons(makeCString("makeCons"), Nil);
Obj x4308372775 = makeCons(MAKE_NUMBER(2), x4308372743);
Obj x4308372807 = makeCons(__symbolTable[152], x4308372775);
Obj x4308373095 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x4308373127 = makeCons(MAKE_NUMBER(1), x4308373095);
Obj x4308373159 = makeCons(__symbolTable[116], x4308373127);
Obj x4308373447 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x4308373479 = makeCons(MAKE_NUMBER(2), x4308373447);
Obj x4308299783 = makeCons(__symbolTable[67], x4308373479);
Obj x4308300071 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x4308300103 = makeCons(MAKE_NUMBER(2), x4308300071);
Obj x4308300135 = makeCons(__symbolTable[66], x4308300103);
Obj x4308300423 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x4308300455 = makeCons(MAKE_NUMBER(2), x4308300423);
Obj x4308300487 = makeCons(__symbolTable[65], x4308300455);
Obj x4308300775 = makeCons(makeCString("primDiv"), Nil);
Obj x4308300807 = makeCons(MAKE_NUMBER(2), x4308300775);
Obj x4308300839 = makeCons(__symbolTable[64], x4308300807);
Obj x4308301127 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x4308301159 = makeCons(MAKE_NUMBER(2), x4308301127);
Obj x4308301191 = makeCons(__symbolTable[113], x4308301159);
Obj x4308301479 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x4308301511 = makeCons(MAKE_NUMBER(2), x4308301479);
Obj x4308301543 = makeCons(__symbolTable[63], x4308301511);
Obj x4308301831 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x4308301863 = makeCons(MAKE_NUMBER(2), x4308301831);
Obj x4308301895 = makeCons(__symbolTable[62], x4308301863);
Obj x4308302183 = makeCons(makeCString("primGenSym"), Nil);
Obj x4308302215 = makeCons(MAKE_NUMBER(0), x4308302183);
Obj x4308302247 = makeCons(__symbolTable[61], x4308302215);
Obj x4308302535 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x4308302567 = makeCons(MAKE_NUMBER(1), x4308302535);
Obj x4308302599 = makeCons(__symbolTable[60], x4308302567);
Obj x4308302887 = makeCons(makeCString("primNot"), Nil);
Obj x4308302919 = makeCons(MAKE_NUMBER(1), x4308302887);
Obj x4308302951 = makeCons(__symbolTable[59], x4308302919);
Obj x4308303239 = makeCons(makeCString("primIsNumber"), Nil);
Obj x4308303271 = makeCons(MAKE_NUMBER(1), x4308303239);
Obj x4308303303 = makeCons(__symbolTable[58], x4308303271);
Obj x4308303591 = makeCons(makeCString("primIsString"), Nil);
Obj x4308303623 = makeCons(MAKE_NUMBER(1), x4308303591);
Obj x4308303655 = makeCons(__symbolTable[57], x4308303623);
Obj x4308303687 = makeCons(x4308303655, Nil);
Obj x4308303719 = makeCons(x4308303303, x4308303687);
Obj x4308303751 = makeCons(x4308302951, x4308303719);
Obj x4308303783 = makeCons(x4308302599, x4308303751);
Obj x4308303815 = makeCons(x4308302247, x4308303783);
Obj x4308303847 = makeCons(x4308301895, x4308303815);
Obj x4307972103 = makeCons(x4308301543, x4308303847);
Obj x4307972135 = makeCons(x4308301191, x4307972103);
Obj x4307972167 = makeCons(x4308300839, x4307972135);
Obj x4307972199 = makeCons(x4308300487, x4307972167);
Obj x4307972231 = makeCons(x4308300135, x4307972199);
Obj x4307972263 = makeCons(x4308299783, x4307972231);
Obj x4307972295 = makeCons(x4308373159, x4307972263);
Obj x4307972327 = makeCons(x4308372807, x4307972295);
Obj x4307972359 = makeCons(x4308372455, x4307972327);
Obj x4307972391 = makeCons(x4308372103, x4307972359);
Obj x4307972423 = makeCons(x4308371751, x4307972391);
Obj x4307972455 = primSet(co, __symbolTable[69], x4307972423);
Obj x4307975111 = primSet(co, __symbolTable[56], makeNative1(3, clofun83, 2, 0));
Obj x4307975623 = primSet(co, __symbolTable[55], makeNative1(2, clofun84, 1, 0));
Obj x4309752519 = primSet(co, __symbolTable[93], makeNative1(5, clofun94, 4, 0));
Obj x4309711559 = makeCons(__symbolTable[98], Nil);
Obj x4309711591 = makeCons(__symbolTable[99], x4309711559);
Obj x4309711623 = makeCons(__symbolTable[101], x4309711591);
Obj x4309711751 = makeCons(__symbolTable[132], x4309711623);
Obj x4309711783 = makeCons(__symbolTable[138], x4309711751);
Obj x4309711815 = makeCons(__symbolTable[147], x4309711783);
Obj x4309711847 = makeCons(__symbolTable[149], x4309711815);
Obj x4309711879 = makeCons(__symbolTable[39], x4309711847);
Obj x4309711911 = makeCons(__symbolTable[40], x4309711879);
Obj x4309711943 = makeCons(__symbolTable[41], x4309711911);
Obj x4309711975 = makeCons(__symbolTable[81], x4309711943);
Obj x4309712039 = makeCons(__symbolTable[42], x4309711975);
Obj x4309712071 = makeCons(__symbolTable[43], x4309712039);
Obj x4309712103 = makeCons(__symbolTable[70], x4309712071);
Obj x4309712135 = makeCons(__symbolTable[44], x4309712103);
Obj x4309712199 = makeCons(__symbolTable[45], x4309712135);
Obj x4309712327 = makeCons(__symbolTable[46], x4309712199);
Obj x4309712359 = makeCons(__symbolTable[47], x4309712327);
Obj x4309712391 = makeCons(__symbolTable[48], x4309712359);
Obj x4309712455 = makeCons(__symbolTable[49], x4309712391);
Obj x4309712487 = makeCons(__symbolTable[50], x4309712455);
Obj x4309712519 = makeCons(__symbolTable[51], x4309712487);
Obj x4309712551 = makeCons(__symbolTable[52], x4309712519);
Obj x4309712615 = makeCons(__symbolTable[72], x4309712551);
Obj x4309712647 = makeCons(__symbolTable[74], x4309712615);
Obj x4308521063 = makeCons(__symbolTable[73], x4309712647);
Obj x4308521127 = makeCons(__symbolTable[161], x4308521063);
Obj x4308521159 = makeCons(__symbolTable[54], x4308521127);
Obj x4308521191 = makeCons(__symbolTable[121], x4308521159);
Obj x4308521255 = makeCons(__symbolTable[131], x4308521191);
Obj x4308521287 = makeCons(__symbolTable[151], x4308521255);
Obj x4308521319 = makeCons(__symbolTable[154], x4308521287);
Obj x4308521351 = makeCons(__symbolTable[155], x4308521319);
Obj x4308521383 = makeCons(__symbolTable[156], x4308521351);
Obj x4308521415 = makeCons(__symbolTable[157], x4308521383);
Obj x4308521575 = makeCons(__symbolTable[158], x4308521415);
Obj x4308521607 = makeCons(__symbolTable[159], x4308521575);
Obj x4308521639 = makeCons(__symbolTable[160], x4308521607);
Obj x4308521671 = primSet(co, __symbolTable[53], x4308521639);
Obj x4308521927 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj x4308522151 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj x4308522599 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj x4308522855 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj x4308523079 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj x4308523303 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj x4308523591 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj x4308523847 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj x4308524007 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj x4308524295 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj x4308524519 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj x4308524871 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj x4308467847 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj x4308468199 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj x4308468359 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj x4308468647 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj x4308468871 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj x4308469095 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj x4308469255 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj x4308469447 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj x4308469767 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj x4308470023 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj x4308470215 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj x4308470727 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj x4308470951 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj x4308471175 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj x4308471399 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj x4308471655 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj x4308459655 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj x4308459975 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj x4308460231 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj x4308460455 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj x4308460743 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj x4308461063 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj x4308461287 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj x4308461639 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj x4308461991 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj x4308462247 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj x4308462343 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
coraReturn(co, x4308462343);
return;
}
case 2:
{
Obj x4308468711= co->res;
Obj x4308462471 = primSet(co, __symbolTable[83], makeNative1(5, clofun75, 4, 0));
Obj x4308462855 = primSet(co, __symbolTable[80], makeNative1(3, clofun76, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[79], makeNative1(2, clofun79, 1, 0));
return;
}
case 3:
{
Obj x4308523559= co->res;
Obj x4308468135 = primSet(co, __symbolTable[85], makeNative1(3, clofun71, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[84], makeNative1(2, clofun72, 1, 0));
return;
}
case 4:
{
Obj x4309711047= co->res;
Obj x4308523047 = primSet(co, __symbolTable[88], makeNative1(2, clofun69, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[86], makeNative1(2, clofun70, 1, 0));
return;
}
case 5:
{
Obj x4309798695= co->res;
Obj x4309749959 = primSet(co, __symbolTable[94], makeNative1(2, clofun61, 1, 0));
Obj x4309750247 = primSet(co, __symbolTable[92], makeNative1(2, clofun62, 1, 0));
Obj x4309750759 = primSet(co, __symbolTable[138], makeNative1(2, clofun63, 1, 0));
Obj x4309710439 = primSet(co, __symbolTable[91], makeNative1(2, clofun66, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[89], makeNative1(2, clofun67, 1, 0));
return;
}
case 6:
{
Obj x4310359143= co->res;
Obj x4309805543 = primSet(co, __symbolTable[106], makeNative1(5, clofun48, 3, 0));
Obj x4309805831 = primSet(co, __symbolTable[104], makeNative1(2, clofun49, 1, 0));
Obj x4309806631 = primSet(co, __symbolTable[103], makeNative1(3, clofun50, 2, 0));
Obj x4309799079 = primSet(co, __symbolTable[102], makeNative1(3, clofun51, 2, 0));
Obj x4309799367 = primSet(co, __symbolTable[101], makeNative1(2, clofun52, 1, 0));
Obj x4309800583 = primSet(co, __symbolTable[100], makeNative1(4, clofun53, 3, 0));
Obj x4309800871 = primSet(co, __symbolTable[99], makeNative1(3, clofun54, 2, 0));
Obj x4309801639 = primSet(co, __symbolTable[98], makeNative1(3, clofun55, 2, 0));
Obj x4309795591 = primSet(co, __symbolTable[97], makeNative1(2, clofun58, 1, 0));
Obj x4309796647 = primSet(co, __symbolTable[96], makeNative1(2, clofun59, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[95], makeNative1(3, clofun60, 1, 0));
return;
}
case 7:
{
Obj x4308443815= co->res;
Obj x4308446759 = primSet(co, __symbolTable[118], makeNative1(5, clofun36, 4, 0));
Obj x4310580679 = primSet(co, __symbolTable[117], makeNative1(5, clofun38, 4, 0));
Obj x4310512999 = primSet(co, __symbolTable[111], makeNative1(3, clofun40, 2, 0));
Obj x4310356711 = primSet(co, __symbolTable[109], makeNative1(3, clofun42, 2, 0));
Obj x4310358855 = primSet(co, __symbolTable[108], makeNative1(2, clofun44, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[107], makeNative1(2, clofun45, 1, 0));
return;
}
case 8:
{
Obj x4308462215= co->res;
Obj x4308462759 = primSet(co, __symbolTable[121], makeNative1(2, clofun32, 1, 0));
Obj x4308443431 = primSet(co, __symbolTable[120], makeNative1(2, clofun33, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[119], makeNative1(2, clofun34, 1, 0));
return;
}
case 9:
{
Obj x4308460295= co->res;
Obj x4308461831 = primSet(co, __symbolTable[123], makeNative1(2, clofun30, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[122], makeNative1(2, clofun31, 1, 0));
return;
}
case 10:
{
Obj x4308470663= co->res;
Obj x4308459911 = primSet(co, __symbolTable[125], makeNative1(2, clofun28, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[124], makeNative1(2, clofun29, 1, 0));
return;
}
case 11:
{
Obj x4308469063= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[128], makeNative1(3, clofun27, 1, 0));
return;
}
case 12:
{
Obj x4308522567= co->res;
Obj x4308523367 = primSet(co, __symbolTable[132], makeNative1(3, clofun23, 2, 0));
Obj x4308523783 = primSet(co, __symbolTable[131], makeNative1(2, clofun24, 1, 0));
Obj x4308468583 = primSet(co, __symbolTable[130], makeNative1(3, clofun25, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[129], makeNative1(2, clofun26, 1, 0));
return;
}
case 13:
{
Obj x4308521479= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[134], makeNative1(3, clofun22, 1, 0));
return;
}
case 14:
{
Obj x4308521095= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[135], makeNative1(2, clofun21, 1, 0));
return;
}
case 15:
{
Obj x4309750119= co->res;
Obj x4309750151 = primSet(co, __symbolTable[149], x4309750119);
Obj x4309751047 = primSet(co, __symbolTable[148], makeNative1(4, clofun11, 3, 0));
Obj x4309751335 = primSet(co, __symbolTable[147], makeNative1(3, clofun12, 2, 0));
Obj x4309751495 = primSet(co, __symbolTable[146], Nil);
Obj x4309751719 = primGenSym();
Obj x4309751751 = primSet(co, __symbolTable[145], x4309751719);
Obj x4309752263 = primSet(co, __symbolTable[144], makeNative1(3, clofun13, 2, 0));
Obj x4309708903 = primSet(co, __symbolTable[143], makeNative1(3, clofun16, 2, 0));
Obj x4309709191 = primSet(co, __symbolTable[142], makeNative1(2, clofun17, 1, 0));
Obj x4309711527 = primSet(co, __symbolTable[141], makeNative1(2, clofun19, 1, 0));
Obj x4309711687 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj x4309712871 = primSet(co, __symbolTable[137], makeNative1(3, clofun20, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 14,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356007 = R[1];
Obj x4310356039 = R[2];
Obj x4310356071 = R[3];
Obj x4310356103 = R[4];
Obj x4310577191 = makeNative1(2, clofun93, 1, 4, x4310356007, x4310356039, x4310356071, x4310356103);
R[1] = x4310356103;
R[2] = x4310577191;
struct frame1 __curr = {
.fn = clofun94,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[54]), x4310356103);
return;
}
case 1:
{
Obj x4309752359= co->res;
Obj x4310577191 = R[1];
if (True == x4309752359) {
co->ctx.sp = R;
coraCall1(co, x4310577191, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310577191, False);
return;
}
}
case 2:
{
Obj x4309752071= co->res;
Obj x4310356103 = R[1];
Obj x4310577191 = R[2];
if (True == x4309752071) {
co->ctx.sp = R;
coraCall1(co, x4310577191, True);
return;
} else {
R[1] = x4310577191;
struct frame1 __curr = {
.fn = clofun94,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x4310356103);
return;
}
}
case 3:
{
Obj x4309751623= co->res;
Obj x4310356103 = R[1];
Obj x4310577191 = R[2];
if (True == x4309751623) {
co->ctx.sp = R;
coraCall1(co, x4310577191, True);
return;
} else {
Obj x4309751879 = primIsString(x4310356103);
if (True == x4309751879) {
co->ctx.sp = R;
coraCall1(co, x4310577191, True);
return;
} else {
R[1] = x4310356103;
R[2] = x4310577191;
struct frame1 __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[121]), x4310356103);
return;
}
}
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577223 = R[1];
if (True == x4310577223) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj x4310356775 = makeNative1(3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309797767 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x4309797767) {
Obj x4309798215 = PRIM_CAR(closureRef(R[0], 3));
Obj x4309798247 = PRIM_EQ(__symbolTable[139], x4309798215);
if (True == x4309798247) {
Obj x4309798823 = PRIM_CDR(closureRef(R[0], 3));
Obj x4309798855 = PRIM_ISCONS(x4309798823);
if (True == x4309798855) {
Obj x4309750087 = PRIM_CDR(closureRef(R[0], 3));
Obj x4309750183 = PRIM_CAR(x4309750087);
Obj x = x4309750183;
Obj x4309750535 = PRIM_CDR(closureRef(R[0], 3));
Obj x4309750567 = PRIM_CDR(x4309750535);
Obj x4309750599 = PRIM_EQ(Nil, x4309750567);
if (True == x4309750599) {
Obj x4309750983 = makeCons(x, Nil);
Obj x4309751015 = makeCons(__symbolTable[139], x4309750983);
coraReturn(co, x4309751015);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310356775);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356775);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356775);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356775);
return;
}
}
}
}
}

static void clofun92(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307906663 = primIsSymbol(closureRef(R[0], 0));
if (True == x4307906663) {
struct frame1 __curr = {
.fn = clofun92,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[132]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4310578343 = makeNative1(3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4309801319 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309801319) {
Obj x4309801703 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309801735 = PRIM_EQ(__symbolTable[140], x4309801703);
if (True == x4309801735) {
Obj x4309802023 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802087 = PRIM_ISCONS(x4309802023);
if (True == x4309802087) {
Obj x4309802407 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802439 = PRIM_CAR(x4309802407);
Obj args = x4309802439;
Obj x4309802919 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802951 = PRIM_CDR(x4309802919);
Obj x4309802983 = PRIM_ISCONS(x4309802951);
if (True == x4309802983) {
Obj x4309795239 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795271 = PRIM_CDR(x4309795239);
Obj x4309795527 = PRIM_CAR(x4309795271);
Obj body = x4309795527;
Obj x4309796039 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309796103 = PRIM_CDR(x4309796039);
Obj x4309796135 = PRIM_CDR(x4309796103);
Obj x4309796167 = PRIM_EQ(Nil, x4309796135);
if (True == x4309796167) {
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578343);
return;
}
}
}
case 1:
{
Obj x4307906983= co->res;
if (True == x4307906983) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), closureRef(R[0], 0), closureRef(R[0], 2), closureRef(R[0], 3));
return;
}
}
case 2:
{
Obj x4307906823= co->res;
if (True == x4307906823) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
struct frame1 __curr = {
.fn = clofun92,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[55]), closureRef(R[0], 0));
return;
}
}
case 3:
{
Obj x4309796871= co->res;
Obj args = R[1];
Obj x4309796903 = makeCons(x4309796871, Nil);
Obj x4309797063 = makeCons(args, x4309796903);
Obj x4309797095 = makeCons(__symbolTable[140], x4309797063);
coraReturn(co, x4309797095);
return;
}
case 4:
{
Obj x4309796839= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), x4309796839, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310579207 = makeNative1(1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4309835111 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309835111) {
Obj x4309835431 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309835463 = PRIM_EQ(__symbolTable[90], x4309835431);
if (True == x4309835463) {
Obj x4309803047 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803079 = PRIM_ISCONS(x4309803047);
if (True == x4309803079) {
Obj x4309803495 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803527 = PRIM_CAR(x4309803495);
Obj x4309803559 = PRIM_ISCONS(x4309803527);
if (True == x4309803559) {
Obj x4309804039 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309804071 = PRIM_CAR(x4309804039);
Obj x4309804103 = PRIM_CAR(x4309804071);
Obj x4309804135 = PRIM_EQ(__symbolTable[81], x4309804103);
if (True == x4309804135) {
Obj x4309804679 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309804711 = PRIM_CAR(x4309804679);
Obj x4309804743 = PRIM_CDR(x4309804711);
Obj x4309804775 = PRIM_ISCONS(x4309804743);
if (True == x4309804775) {
Obj x4309805287 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805319 = PRIM_CAR(x4309805287);
Obj x4309805351 = PRIM_CDR(x4309805319);
Obj x4309805383 = PRIM_CAR(x4309805351);
Obj pkg = x4309805383;
Obj x4309805863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805895 = PRIM_CAR(x4309805863);
Obj x4309805927 = PRIM_CDR(x4309805895);
Obj x4309805959 = PRIM_CDR(x4309805927);
Obj x4309805991 = PRIM_EQ(Nil, x4309805959);
if (True == x4309805991) {
Obj x4309806311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806343 = PRIM_CDR(x4309806311);
Obj x4309806375 = PRIM_ISCONS(x4309806343);
if (True == x4309806375) {
Obj x4309806791 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806823 = PRIM_CDR(x4309806791);
Obj x4309806855 = PRIM_CAR(x4309806823);
Obj y = x4309806855;
Obj x4309799143 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309799175 = PRIM_CDR(x4309799143);
Obj x4309799207 = PRIM_CDR(x4309799175);
Obj x4309799239 = PRIM_EQ(Nil, x4309799207);
if (True == x4309799239) {
Obj x4309799431 = primIsString(pkg);
if (True == x4309799431) {
Obj x4309799815 = makeCons(pkg, Nil);
Obj x4309799847 = makeCons(__symbolTable[81], x4309799815);
R[1] = pkg;
R[2] = y;
struct frame1 __curr = {
.fn = clofun91,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), x4309799847);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579207);
return;
}
}
case 1:
{
Obj x4309800263= co->res;
Obj x4309799879 = R[1];
Obj x4309800295 = makeCons(x4309800263, Nil);
Obj x4309800359 = makeCons(x4309799879, x4309800295);
Obj x4309800391 = makeCons(__symbolTable[90], x4309800359);
coraReturn(co, x4309800391);
return;
}
case 2:
{
Obj x4309799879= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj x4309800167 = makeCons(pkg, closureRef(R[0], 3));
R[1] = x4309799879;
struct frame1 __curr = {
.fn = clofun91,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), x4309800167, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580391 = makeNative1(3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4309833223 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309833223) {
Obj x4309833447 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x4309833447;
Obj x4309833671 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4309833671;
Obj x4310577255 = makeNative1(2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, x4310580391);
Obj x4309834599 = PRIM_EQ(op, __symbolTable[126]);
if (True == x4309834599) {
co->ctx.sp = R;
coraCall1(co, x4310577255, True);
return;
} else {
Obj x4309834823 = PRIM_EQ(op, __symbolTable[90]);
if (True == x4309834823) {
co->ctx.sp = R;
coraCall1(co, x4310577255, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310577255, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580391);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577319 = R[1];
if (True == x4310577319) {
struct frame1 __curr = {
.fn = clofun89,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 5));
return;
}
}
case 1:
{
Obj x4309834215= co->res;
Obj x4309834247 = makeCons(closureRef(R[0], 0), x4309834215);
coraReturn(co, x4309834247);
return;
}
case 2:
{
Obj x4309834151= co->res;
struct frame1 __curr = {
.fn = clofun89,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), x4309834151, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310581127 = makeNative1(1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4310356487 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310356487) {
Obj x4310356839 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310356871 = PRIM_EQ(__symbolTable[129], x4310356839);
if (True == x4310356871) {
Obj x4310357095 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357127 = PRIM_ISCONS(x4310357095);
if (True == x4310357127) {
Obj x4310357447 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357479 = PRIM_CAR(x4310357447);
Obj a = x4310357479;
Obj x4310357799 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357831 = PRIM_CDR(x4310357799);
Obj x4310357863 = PRIM_ISCONS(x4310357831);
if (True == x4310357863) {
Obj x4310358311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310358343 = PRIM_CDR(x4310358311);
Obj x4310358375 = PRIM_CAR(x4310358343);
Obj b = x4310358375;
Obj x4310358887 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310358919 = PRIM_CDR(x4310358887);
Obj x4310358951 = PRIM_CDR(x4310358919);
Obj x4310358983 = PRIM_ISCONS(x4310358951);
if (True == x4310358983) {
Obj x4310359367 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310359399 = PRIM_CDR(x4310359367);
Obj x4310359431 = PRIM_CDR(x4310359399);
Obj x4310359463 = PRIM_CAR(x4310359431);
Obj c = x4310359463;
Obj x4310359911 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310359943 = PRIM_CDR(x4310359911);
Obj x4310360007 = PRIM_CDR(x4310359943);
Obj x4310360039 = PRIM_CDR(x4310360007);
Obj x4309831687 = PRIM_EQ(Nil, x4310360039);
if (True == x4309831687) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
.fn = clofun88,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310581127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581127);
return;
}
}
case 1:
{
Obj x4309832359= co->res;
Obj x4309832039 = R[1];
Obj a = R[2];
Obj x4309832391 = makeCons(x4309832359, Nil);
Obj x4309832423 = makeCons(x4309832039, x4309832391);
Obj x4309832455 = makeCons(a, x4309832423);
Obj x4309832487 = makeCons(__symbolTable[129], x4309832455);
coraReturn(co, x4309832487);
return;
}
case 2:
{
Obj x4309832039= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x4309832327 = makeCons(a, closureRef(R[0], 1));
R[1] = x4309832039;
R[2] = a;
struct frame1 __curr = {
.fn = clofun88,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), x4309832327, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512423 = makeNative1(2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4310580807 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4310580807) {
Obj x4310581063 = PRIM_CAR(closureRef(R[0], 2));
Obj x4310581095 = PRIM_EQ(__symbolTable[78], x4310581063);
if (True == x4310581095) {
Obj x4310511783 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310511815 = PRIM_ISCONS(x4310511783);
if (True == x4310511815) {
Obj x4310512103 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310512135 = PRIM_CAR(x4310512103);
Obj path = x4310512135;
Obj x4310512647 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310512679 = PRIM_CDR(x4310512647);
Obj x4310512743 = PRIM_ISCONS(x4310512679);
if (True == x4310512743) {
Obj x4310513127 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310513159 = PRIM_CDR(x4310513127);
Obj x4310513191 = PRIM_CAR(x4310513159);
Obj import = x4310513191;
Obj x4310513767 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310513799 = PRIM_CDR(x4310513767);
Obj x4310513831 = PRIM_CDR(x4310513799);
Obj x4310513863 = PRIM_ISCONS(x4310513831);
if (True == x4310513863) {
Obj x4310514279 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310514311 = PRIM_CDR(x4310514279);
Obj x4310514439 = PRIM_CDR(x4310514311);
Obj x4310514471 = PRIM_CAR(x4310514439);
Obj body = x4310514471;
Obj x4310515079 = PRIM_CDR(closureRef(R[0], 2));
Obj x4310515111 = PRIM_CDR(x4310515079);
Obj x4310515143 = PRIM_CDR(x4310515111);
Obj x4310515175 = PRIM_CDR(x4310515143);
Obj x4310515207 = PRIM_EQ(Nil, x4310515175);
if (True == x4310515207) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512423);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513511 = makeNative1(1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj x4307908135 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307908135) {
Obj x4307908359 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307908391 = PRIM_EQ(__symbolTable[133], x4307908359);
if (True == x4307908391) {
Obj x4307908615 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307908647 = PRIM_ISCONS(x4307908615);
if (True == x4307908647) {
Obj x4307908871 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307908903 = PRIM_CAR(x4307908871);
Obj var = x4307908903;
Obj x4310577415 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310577447 = PRIM_CDR(x4310577415);
Obj x4310577479 = PRIM_ISCONS(x4310577447);
if (True == x4310577479) {
Obj x4310578055 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310578087 = PRIM_CDR(x4310578055);
Obj x4310578119 = PRIM_CAR(x4310578087);
Obj val = x4310578119;
Obj x4310578759 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310578791 = PRIM_CDR(x4310578759);
Obj x4310578855 = PRIM_CDR(x4310578791);
Obj x4310578887 = PRIM_EQ(Nil, x4310578855);
if (True == x4310578887) {
R[1] = val;
struct frame1 __curr = {
.fn = clofun86,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[76]), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
return;
}
}
case 1:
{
Obj x4310579783= co->res;
Obj x4310579591 = R[1];
Obj x4310579975 = makeCons(x4310579783, Nil);
Obj x4310580007 = makeCons(x4310579591, x4310579975);
Obj x4310580039 = makeCons(__symbolTable[68], x4310580007);
coraReturn(co, x4310580039);
return;
}
case 2:
{
Obj x4310579111= co->res;
Obj val = R[1];
Obj var1 = x4310579111;
Obj x4310579463 = makeCons(var1, Nil);
Obj x4310579591 = makeCons(__symbolTable[139], x4310579463);
R[1] = x4310579591;
struct frame1 __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), val);
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
.fn = clofun85,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[93]), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x4307907975= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), x4307907975, closureRef(R[0], 3));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), x, globalRef(__symbolTable[69]));
return;
}
case 1:
{
Obj x4307975559= co->res;
Obj x4307975591 = primNot(x4307975559);
coraReturn(co, x4307975591);
return;
}
case 2:
{
Obj x4307975527= co->res;
struct frame1 __curr = {
.fn = clofun84,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x4307975527);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310514375 = R[1];
Obj x4310514407 = R[2];
Obj x4307972807 = PRIM_EQ(Nil, x4310514407);
if (True == x4307972807) {
coraReturn(co, Nil);
return;
} else {
Obj x4310514855 = makeNative1(1, clofun82, 0, 2, x4310514407, x4310514375);
Obj x4307973703 = PRIM_ISCONS(x4310514407);
if (True == x4307973703) {
Obj x4307973927 = PRIM_CAR(x4310514407);
Obj x4307973959 = PRIM_ISCONS(x4307973927);
if (True == x4307973959) {
Obj x4307974183 = PRIM_CAR(x4310514407);
Obj x4307974215 = PRIM_CAR(x4307974183);
Obj x = x4307974215;
Obj x4307974439 = PRIM_CAR(x4310514407);
Obj x4307974471 = PRIM_CDR(x4307974439);
Obj y = x4307974471;
Obj x4307974631 = PRIM_CDR(x4310514407);
Obj x4307974791 = PRIM_EQ(x4310514375, x);
if (True == x4307974791) {
Obj x4307974887 = makeCons(x, y);
coraReturn(co, x4307974887);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310514855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514855);
return;
}
}
}
}
}

static void clofun82(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307973095 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307973095) {
Obj x4307973255 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307973415 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4307973415;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[56]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513223 = R[1];
Obj x4310513255 = R[2];
Obj x4310513287 = R[3];
Obj x4308447015 = PRIM_EQ(Nil, x4310513287);
if (True == x4308447015) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[76]), x4310513223, x4310513255);
return;
} else {
Obj x4308369415 = PRIM_ISCONS(x4310513287);
if (True == x4308369415) {
Obj x4308370087 = PRIM_CAR(x4310513287);
Obj import = x4308370087;
Obj x4308370247 = PRIM_CDR(x4310513287);
Obj more = x4308370247;
R[1] = import;
R[2] = x4310513223;
R[3] = x4310513255;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), import, makeCString("#*ns-export*"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
case 1:
{
Obj x4308371111= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), x4308371111);
return;
}
case 2:
{
Obj x4308371079= co->res;
Obj import = R[1];
struct frame1 __curr = {
.fn = clofun81,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), import, x4308371079);
return;
}
case 3:
{
Obj x4308371047= co->res;
Obj import = R[1];
R[1] = import;
struct frame1 __curr = {
.fn = clofun81,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), makeCString("#"), x4308371047);
return;
}
case 4:
{
Obj x4308370759= co->res;
Obj import = R[1];
Obj x4310513223 = R[2];
Obj x4310513255 = R[3];
Obj more = R[4];
if (True == x4308370759) {
R[1] = import;
struct frame1 __curr = {
.fn = clofun81,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[72]), x4310513223);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), x4310513223, x4310513255, more);
return;
}
}
case 5:
{
Obj x4308370599= co->res;
Obj import = R[1];
Obj x4310513223 = R[2];
Obj x4310513255 = R[3];
Obj more = R[4];
Obj export = x4308370599;
R[1] = import;
R[2] = x4310513223;
R[3] = x4310513255;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[132]), x4310513223, export);
return;
}
case 6:
{
Obj x4308370567= co->res;
Obj import = R[1];
Obj x4310513223 = R[2];
Obj x4310513255 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x4310513223;
R[3] = x4310513255;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[70]), x4308370567, Nil);
return;
}
case 7:
{
Obj x4308370535= co->res;
Obj import = R[1];
Obj x4310513223 = R[2];
Obj x4310513255 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x4310513223;
R[3] = x4310513255;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[74]), x4308370535);
return;
}
}
}

static void clofun80(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj var = R[1];
Obj ns = R[2];
Obj x4308445703 = PRIM_EQ(ns, makeCString(""));
if (True == x4308445703) {
coraReturn(co, var);
return;
} else {
R[1] = var;
R[2] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[75]), var);
return;
}
}
case 1:
{
Obj x4308446535= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), x4308446535);
return;
}
case 2:
{
Obj x4308446503= co->res;
Obj ns = R[1];
struct frame1 __curr = {
.fn = clofun80,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), ns, x4308446503);
return;
}
case 3:
{
Obj x4308446439= co->res;
Obj ns = R[1];
R[1] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), makeCString("#"), x4308446439);
return;
}
case 4:
{
Obj x4308445991= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == x4308445991) {
coraReturn(co, var);
return;
} else {
R[1] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[72]), var);
return;
}
}
}
}

static void clofun79(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun79,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), sexp);
return;
}
case 1:
{
Obj x4308463591= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, x4308463591, makeNative1(4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj x4308463559= co->res;
Obj path = R[1];
R[1] = path;
struct frame1 __curr = {
.fn = clofun79,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[80]), x4308463559);
return;
}
case 3:
{
Obj x4308463271= co->res;
Obj sexp = R[1];
Obj path = x4308463271;
R[1] = path;
struct frame1 __curr = {
.fn = clofun79,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), sexp);
return;
}
}
}

static void clofun78(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj import = R[1];
Obj export = R[2];
Obj body = R[3];
Obj x4308443655 = makeCons(makeCString("cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = x4308443655;
struct frame1 __curr = {
.fn = clofun78,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), makeNative1(2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj x4308445031= co->res;
Obj x4308443655 = R[1];
Obj x4308445063 = makeCons(__symbolTable[89], x4308445031);
Obj x4308445095 = makeCons(x4308445063, Nil);
Obj x4308445127 = makeCons(x4308443655, x4308445095);
Obj x4308445159 = makeCons(closureRef(R[0], 0), x4308445127);
Obj x4308445191 = makeCons(__symbolTable[78], x4308445159);
coraReturn(co, x4308445191);
return;
}
case 2:
{
Obj x4308444295= co->res;
Obj export = R[1];
Obj body = R[2];
Obj x4308443655 = R[3];
Obj x4308444775 = makeCons(export, Nil);
Obj x4308444807 = makeCons(__symbolTable[86], x4308444775);
Obj x4308444871 = makeCons(x4308444807, Nil);
Obj x4308444903 = makeCons(__symbolTable[77], x4308444871);
Obj x4308444935 = makeCons(__symbolTable[133], x4308444903);
Obj x4308444967 = makeCons(x4308444935, body);
R[1] = x4308443655;
struct frame1 __curr = {
.fn = clofun78,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x4308444295, x4308444967);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj x4308444231 = makeCons(imp, Nil);
Obj x4308444263 = makeCons(__symbolTable[81], x4308444231);
coraReturn(co, x4308444263);
return;
}
}
}

static void clofun76(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj data = R[1];
Obj k = R[2];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), data, Nil, Nil, k);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580551 = R[1];
Obj x4310580583 = R[2];
Obj x4310580615 = R[3];
Obj x4310580647 = R[4];
Obj x4310580839 = makeNative1(1, clofun74, 0, 4, x4310580615, x4310580551, x4310580583, x4310580647);
Obj x4308471591 = PRIM_ISCONS(x4310580551);
if (True == x4308471591) {
Obj x4308459559 = PRIM_CAR(x4310580551);
Obj x4308459591 = PRIM_ISCONS(x4308459559);
if (True == x4308459591) {
Obj x4308460071 = PRIM_CAR(x4310580551);
Obj x4308460103 = PRIM_CAR(x4308460071);
Obj x4308460135 = PRIM_EQ(__symbolTable[81], x4308460103);
if (True == x4308460135) {
Obj x4308460487 = PRIM_CAR(x4310580551);
Obj x4308460519 = PRIM_CDR(x4308460487);
Obj x4308460551 = PRIM_ISCONS(x4308460519);
if (True == x4308460551) {
Obj x4308460935 = PRIM_CAR(x4310580551);
Obj x4308460967 = PRIM_CDR(x4308460935);
Obj x4308460999 = PRIM_CAR(x4308460967);
Obj lib = x4308460999;
Obj x4308461447 = PRIM_CAR(x4310580551);
Obj x4308461479 = PRIM_CDR(x4308461447);
Obj x4308461511 = PRIM_CDR(x4308461479);
Obj x4308461575 = PRIM_EQ(Nil, x4308461511);
if (True == x4308461575) {
Obj x4308461895 = PRIM_CDR(x4310580551);
Obj rest = x4308461895;
Obj x4308462055 = makeCons(lib, x4310580583);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, x4308462055, x4310580615, x4310580647);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580839);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580839);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580839);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580839);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580839);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512007 = makeNative1(1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4308469607 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308469607) {
Obj x4308469927 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308469959 = PRIM_ISCONS(x4308469927);
if (True == x4308469959) {
Obj x4308470311 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308470343 = PRIM_CAR(x4308470311);
Obj x4308470375 = PRIM_EQ(__symbolTable[82], x4308470343);
if (True == x4308470375) {
Obj x4308470823 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308470855 = PRIM_CDR(x4308470823);
Obj more = x4308470855;
Obj x4308471047 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = x4308471047;
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512007);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512007);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512007);
return;
}
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
.fn = clofun73,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
}
case 1:
{
Obj x4308469383= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), x4308469383, closureRef(R[0], 2), closureRef(R[0], 3));
return;
}
}
}

static void clofun72(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4308468679= co->res;
Obj x4308468487 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[85]), x4308468487, x4308468679);
return;
}
case 2:
{
Obj x4308468487= co->res;
Obj exp = R[1];
R[1] = x4308468487;
struct frame1 __curr = {
.fn = clofun72,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
}
}

static void clofun71(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj fn = R[1];
Obj arglist = R[2];
R[1] = arglist;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), arglist);
return;
}
case 1:
{
Obj x4308524615= co->res;
Obj x4308524423 = R[1];
Obj fn = R[2];
Obj x4308524647 = makeCons(x4308524615, Nil);
Obj x4308524679 = makeCons(x4308524423, x4308524647);
Obj x4308524743 = makeCons(fn, x4308524679);
coraReturn(co, x4308524743);
return;
}
case 2:
{
Obj x4308468007= co->res;
Obj x4308467751 = R[1];
Obj fn = R[2];
Obj x4308468039 = makeCons(x4308468007, Nil);
Obj x4308468071 = makeCons(x4308467751, x4308468039);
Obj x4308468103 = makeCons(fn, x4308468071);
coraReturn(co, x4308468103);
return;
}
case 3:
{
Obj x4308524103= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == x4308524103) {
Obj x4308524423 = PRIM_CAR(arglist);
R[1] = x4308524423;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), arglist);
return;
} else {
Obj x4308467751 = PRIM_CAR(arglist);
Obj x4308467975 = PRIM_CDR(arglist);
R[1] = x4308467751;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[85]), fn, x4308467975);
return;
}
}
case 4:
{
Obj x4308524071= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x4308524071);
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun70,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4308523527= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[88]), x4308523527);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310579335 = R[1];
Obj x4309711431 = primIsSymbol(x4310579335);
if (True == x4309711431) {
Obj x4309711655 = makeCons(x4310579335, Nil);
Obj x4309711719 = makeCons(__symbolTable[139], x4309711655);
coraReturn(co, x4309711719);
return;
} else {
Obj x4310579623 = makeNative1(1, clofun68, 0, 1, x4310579335);
Obj x4308521223 = PRIM_ISCONS(x4310579335);
if (True == x4308521223) {
Obj x4308521511 = PRIM_CAR(x4310579335);
Obj x4308521543 = PRIM_EQ(__symbolTable[87], x4308521511);
if (True == x4308521543) {
Obj x4308521767 = PRIM_CDR(x4310579335);
Obj x4308521799 = PRIM_ISCONS(x4308521767);
if (True == x4308521799) {
Obj x4308522055 = PRIM_CDR(x4310579335);
Obj x4308522087 = PRIM_CAR(x4308522055);
Obj x = x4308522087;
Obj x4308522663 = PRIM_CDR(x4310579335);
Obj x4308522695 = PRIM_CDR(x4308522663);
Obj x4308522727 = PRIM_EQ(Nil, x4308522695);
if (True == x4308522727) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310579623);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579623);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579623);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579623);
return;
}
}
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309712007 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309712007) {
Obj x4309712167 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4309712167;
Obj x4309712423 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4309712423;
Obj x4308520967 = makeCons(x, more);
struct frame1 __curr = {
.fn = clofun68,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), x4308520967);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj x4308520999= co->res;
Obj x4308521031 = makeCons(__symbolTable[135], x4308520999);
coraReturn(co, x4308521031);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4309711015 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[91]), x4309711015);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578183 = R[1];
Obj x4310578279 = makeNative1(1, clofun65, 0, 1, x4310578183);
Obj x4309709671 = PRIM_ISCONS(x4310578183);
if (True == x4309709671) {
Obj x4309709927 = PRIM_CAR(x4310578183);
Obj x = x4309709927;
Obj x4309710215 = PRIM_CDR(x4310578183);
Obj x4309710247 = PRIM_EQ(Nil, x4309710215);
if (True == x4309710247) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578279);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578599 = makeNative1(2, clofun64, 0, 1, closureRef(R[0], 0));
Obj x4309752743 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309752743) {
Obj x4309752903 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4309752903;
Obj x4309753159 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309753191 = PRIM_ISCONS(x4309753159);
if (True == x4309753191) {
Obj x4309753447 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309753511 = PRIM_CAR(x4309753447);
Obj y = x4309753511;
Obj x4309708839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309708935 = PRIM_CDR(x4309708839);
Obj x4309708967 = PRIM_EQ(Nil, x4309708935);
if (True == x4309708967) {
Obj x4309709223 = makeCons(y, Nil);
Obj x4309709255 = makeCons(x, x4309709223);
Obj x4309709287 = makeCons(__symbolTable[90], x4309709255);
coraReturn(co, x4309709287);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578599);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309751591 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309751591) {
Obj x4309751815 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4309751815;
Obj x4309751975 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4309751975;
R[1] = x;
struct frame1 __curr = {
.fn = clofun64,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj x4309752391= co->res;
Obj x = R[1];
Obj x4309752423 = makeCons(x4309752391, Nil);
Obj x4309752455 = makeCons(x, x4309752423);
Obj x4309752487 = makeCons(__symbolTable[90], x4309752455);
coraReturn(co, x4309752487);
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun63,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[141]), exp);
return;
}
case 1:
{
Obj x4309750727= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[92]), x4309750727);
return;
}
case 2:
{
Obj x4309750695= co->res;
struct frame1 __curr = {
.fn = clofun63,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[94]), x4309750695);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
coraReturn(co, x);
return;
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[93]), Nil, makeCString(""), Nil, exp);
return;
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun60,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 1:
{
Obj x4309798023= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x4309798439 = makeCons(__symbolTable[135], args);
Obj x4309798471 = makeCons(x4309798439, body);
Obj x4309798503 = makeCons(__symbolTable[107], x4309798471);
Obj x4309798535 = makeCons(x4309798503, Nil);
Obj x4309798567 = makeCons(args, x4309798535);
Obj x4309798599 = makeCons(x4309798023, x4309798567);
Obj x4309798631 = makeCons(__symbolTable[134], x4309798599);
coraReturn(co, x4309798631);
return;
}
case 2:
{
Obj x4309797575= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = x4309797575;
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun60,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 3:
{
Obj x4309797415= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = x4309797415;
R[1] = exp;
R[2] = body;
struct frame1 __curr = {
.fn = clofun60,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[96]), nargs);
return;
}
case 4:
{
Obj x4309797223= co->res;
Obj exp = R[1];
Obj body = x4309797223;
R[1] = exp;
R[2] = body;
struct frame1 __curr = {
.fn = clofun60,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[97]), body);
return;
}
case 5:
{
Obj x4309797191= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun60,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[104]), x4309797191);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj x4309796071 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x4309796071) {
coraReturn(co, Nil);
return;
} else {
Obj x4309796231 = primGenSym();
Obj x4309796551 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = x4309796231;
struct frame1 __curr = {
.fn = clofun59,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[96]), x4309796551);
return;
}
}
case 1:
{
Obj x4309796583= co->res;
Obj x4309796231 = R[1];
Obj x4309796615 = makeCons(x4309796231, x4309796583);
coraReturn(co, x4309796615);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rules = R[1];
struct frame1 __curr = {
.fn = clofun58,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[103]), Nil, rules);
return;
}
case 1:
{
Obj x4309795463= co->res;
Obj n = R[1];
Obj x4309795495 = primNot(x4309795463);
if (True == x4309795495) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("inconsistent func rule args count"));
return;
} else {
coraReturn(co, n);
return;
}
}
case 2:
{
Obj x4309795431= co->res;
Obj n = R[1];
R[1] = n;
struct frame1 __curr = {
.fn = clofun58,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x4309795431);
return;
}
case 3:
{
Obj x4309802535= co->res;
Obj counts = x4309802535;
Obj x4309802791 = PRIM_CAR(counts);
Obj n = x4309802791;
Obj x4309795303 = PRIM_CDR(counts);
R[1] = n;
struct frame1 __curr = {
.fn = clofun58,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[99]), makeNative1(2, clofun57, 1, 1, n), x4309795303);
return;
}
case 4:
{
Obj x4309802055= co->res;
Obj pats = x4309802055;
struct frame1 __curr = {
.fn = clofun58,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), makeNative1(2, clofun56, 1, 0), pats);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309795175 = PRIM_EQ(closureRef(R[0], 0), x);
Obj x4309795207 = primNot(x4309795175);
coraReturn(co, x4309795207);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309802503 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), x4309802503);
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l1 = R[1];
Obj l2 = R[2];
Obj x4309801223 = PRIM_EQ(l1, Nil);
if (True == x4309801223) {
coraReturn(co, l2);
return;
} else {
Obj x4309801383 = PRIM_CAR(l1);
Obj x4309801543 = PRIM_CDR(l1);
R[1] = x4309801383;
struct frame1 __curr = {
.fn = clofun55,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x4309801543, l2);
return;
}
}
case 1:
{
Obj x4309801575= co->res;
Obj x4309801383 = R[1];
Obj x4309801607 = makeCons(x4309801383, x4309801575);
coraReturn(co, x4309801607);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj fn = R[1];
Obj l = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), Nil, fn, l);
return;
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj fn = R[2];
Obj l = R[3];
Obj x4309799719 = PRIM_ISCONS(l);
if (True == x4309799719) {
Obj x4309799943 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
struct frame1 __curr = {
.fn = clofun53,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, fn, x4309799943);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj x4309799975= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == x4309799975) {
Obj x4309800199 = PRIM_CAR(l);
Obj x4309800231 = makeCons(x4309800199, res);
Obj x4309800327 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), x4309800231, fn, x4309800327);
return;
} else {
Obj x4309800487 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), res, fn, x4309800487);
return;
}
}
}
}

static void clofun52(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), MAKE_NUMBER(0), l);
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj i = R[1];
Obj l = R[2];
Obj x4309806983 = PRIM_EQ(l, Nil);
if (True == x4309806983) {
coraReturn(co, i);
return;
} else {
Obj x4309798951 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x4309799047 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), x4309798951, x4309799047);
return;
}
}
}
}

static void clofun50(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj rules = R[2];
R[1] = res;
R[2] = rules;
struct frame1 __curr = {
.fn = clofun50,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj x4309806599= co->res;
Obj x4309806503 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[103]), x4309806503, x4309806599);
return;
}
case 2:
{
Obj x4309806183= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == x4309806183) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
} else {
Obj x4309806471 = PRIM_CAR(rules);
Obj x4309806503 = makeCons(x4309806471, res);
R[1] = x4309806503;
struct frame1 __curr = {
.fn = clofun50,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), rules);
return;
}
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj input = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), input, Nil, Nil);
return;
}
}
}

static void clofun48(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj input = R[1];
Obj current = R[2];
Obj result = R[3];
Obj x4310359495 = PRIM_EQ(Nil, input);
if (True == x4310359495) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), result);
return;
} else {
Obj x4310577287 = makeNative1(3, clofun47, 0, 3, input, current, result);
Obj x4309834183 = PRIM_ISCONS(input);
if (True == x4309834183) {
Obj x4309834407 = PRIM_CAR(input);
Obj x4309834439 = PRIM_EQ(__symbolTable[105], x4309834407);
if (True == x4309834439) {
Obj x4309834663 = PRIM_CDR(input);
Obj x4309834695 = PRIM_ISCONS(x4309834663);
if (True == x4309834695) {
Obj x4309834919 = PRIM_CDR(input);
Obj x4309834951 = PRIM_CAR(x4309834919);
Obj act = x4309834951;
Obj x4309835239 = PRIM_CDR(input);
Obj x4309835271 = PRIM_CDR(x4309835239);
Obj x4309835303 = PRIM_ISCONS(x4309835271);
if (True == x4309835303) {
Obj x4309835655 = PRIM_CDR(input);
Obj x4309835687 = PRIM_CDR(x4309835655);
Obj x4309835719 = PRIM_CAR(x4309835687);
Obj x4309835751 = PRIM_EQ(__symbolTable[110], x4309835719);
if (True == x4309835751) {
Obj x4309803335 = PRIM_CDR(input);
Obj x4309803367 = PRIM_CDR(x4309803335);
Obj x4309803399 = PRIM_CDR(x4309803367);
Obj x4309803431 = PRIM_ISCONS(x4309803399);
if (True == x4309803431) {
Obj x4309803783 = PRIM_CDR(input);
Obj x4309803815 = PRIM_CDR(x4309803783);
Obj x4309803847 = PRIM_CDR(x4309803815);
Obj x4309803879 = PRIM_CAR(x4309803847);
Obj pred = x4309803879;
Obj x4309804231 = PRIM_CDR(input);
Obj x4309804263 = PRIM_CDR(x4309804231);
Obj x4309804295 = PRIM_CDR(x4309804263);
Obj x4309804327 = PRIM_CDR(x4309804295);
Obj remain = x4309804327;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
struct frame1 __curr = {
.fn = clofun48,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[149]), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310577287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577287);
return;
}
}
}
case 1:
{
Obj x4309804551= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj x4309804583 = makeCons(__symbolTable[135], x4309804551);
Obj pat = x4309804583;
Obj x4309804935 = makeCons(act, Nil);
Obj x4309804967 = makeCons(pred, x4309804935);
Obj x4309804999 = makeCons(__symbolTable[110], x4309804967);
Obj x4309805095 = makeCons(pat, result);
Obj x4309805127 = makeCons(x4309804999, x4309805095);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, x4309805127);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577735 = makeNative1(1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309832295 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309832295) {
Obj x4309832519 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309832551 = PRIM_EQ(__symbolTable[105], x4309832519);
if (True == x4309832551) {
Obj x4309832775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309832807 = PRIM_ISCONS(x4309832775);
if (True == x4309832807) {
Obj x4309833031 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833063 = PRIM_CAR(x4309833031);
Obj act = x4309833063;
Obj x4309833287 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833319 = PRIM_CDR(x4309833287);
Obj remain = x4309833319;
R[1] = act;
R[2] = remain;
struct frame1 __curr = {
.fn = clofun47,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310577735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577735);
return;
}
}
case 1:
{
Obj x4309833543= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj x4309833575 = makeCons(__symbolTable[135], x4309833543);
Obj pat = x4309833575;
Obj x4309833799 = makeCons(pat, closureRef(R[0], 2));
Obj x4309833831 = makeCons(act, x4309833799);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, x4309833831);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310359975 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310359975) {
Obj x4309831751 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4309831751;
Obj x4309831911 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4309831911;
Obj x4309832071 = makeCons(x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), y, x4309832071, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun45(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[108]), exp);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4310357351= co->res;
Obj value = R[1];
Obj rules = x4310357351;
Obj x4306760007 = makeNative1(2, clofun43, 1, 2, value, rules);
Obj x4310358471 = PRIM_ISCONS(value);
if (True == x4310358471) {
Obj x4310358759 = PRIM_CAR(value);
Obj x4310358791 = PRIM_EQ(__symbolTable[152], x4310358759);
Obj x4310358823 = primNot(x4310358791);
if (True == x4310358823) {
co->ctx.sp = R;
coraCall1(co, x4306760007, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4306760007, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4306760007, False);
return;
}
}
case 2:
{
Obj x4310357191= co->res;
Obj exp = R[1];
Obj value = x4310357191;
R[1] = value;
struct frame1 __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x4310357159= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[138]), x4310357159);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4306760167 = R[1];
if (True == x4306760167) {
Obj x4310357703 = primGenSym();
Obj val = x4310357703;
R[1] = val;
struct frame1 __curr = {
.fn = clofun43,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[109]), val, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x4310358055= co->res;
Obj val = R[1];
Obj x4310358087 = makeCons(x4310358055, Nil);
Obj x4310358119 = makeCons(closureRef(R[0], 0), x4310358087);
Obj x4310358151 = makeCons(val, x4310358119);
Obj x4310358183 = makeCons(__symbolTable[129], x4310358151);
coraReturn(co, x4310358183);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj value = R[1];
Obj rules = R[2];
R[1] = value;
R[2] = rules;
struct frame1 __curr = {
.fn = clofun42,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj x4310356679= co->res;
Obj x4306759847 = R[1];
if (True == x4310356679) {
co->ctx.sp = R;
coraCall1(co, x4306759847, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4306759847, False);
return;
}
}
case 2:
{
Obj x4310356423= co->res;
Obj rules = R[1];
Obj x4306759847 = R[2];
if (True == x4310356423) {
Obj x4310356647 = PRIM_CDR(rules);
R[1] = x4306759847;
struct frame1 __curr = {
.fn = clofun42,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), x4310356647);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4306759847, False);
return;
}
}
case 3:
{
Obj x4310513447= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == x4310513447) {
Obj x4310513639 = makeCons(makeCString("no match-help found!"), Nil);
Obj x4310513671 = makeCons(__symbolTable[127], x4310513639);
coraReturn(co, x4310513671);
return;
} else {
Obj x4306759847 = makeNative1(3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = x4306759847;
struct frame1 __curr = {
.fn = clofun42,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), rules);
return;
}
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4306759879 = R[1];
if (True == x4306759879) {
Obj x4310514023 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = x4310514023;
Obj x4310514183 = primGenSym();
Obj cc = x4310514183;
R[1] = pat;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[111]), closureRef(R[0], 1), cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no cond match"));
return;
}
}
case 1:
{
Obj x4310515047= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = x4310515047;
Obj x4310515463 = makeCons(rest, Nil);
Obj x4310515495 = makeCons(Nil, x4310515463);
Obj x4310515527 = makeCons(__symbolTable[140], x4310515495);
Obj x4310515623 = makeCons(curr, Nil);
Obj x4310515655 = makeCons(x4310515527, x4310515623);
Obj x4310515687 = makeCons(cc, x4310515655);
Obj x4310355975 = makeCons(__symbolTable[129], x4310515687);
coraReturn(co, x4310355975);
return;
}
case 2:
{
Obj x4310514663= co->res;
Obj cc = R[1];
Obj curr = x4310514663;
Obj x4310514983 = PRIM_CDR(closureRef(R[0], 1));
Obj x4310515015 = PRIM_CDR(x4310514983);
R[1] = curr;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), x4310515015);
return;
}
case 3:
{
Obj x4310514631= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), x4310514631, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj x4310514343= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = x4310514343;
R[1] = action;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[138]), pat);
return;
}
}
}

static void clofun40(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rules = R[1];
Obj cc = R[2];
Obj x4310581159 = PRIM_CDR(rules);
Obj x4310581191 = PRIM_CAR(x4310581159);
Obj action = x4310581191;
Obj x4306759783 = makeNative1(2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = x4306759783;
struct frame1 __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), action);
return;
}
case 1:
{
Obj x4310512711= co->res;
Obj action = R[1];
Obj x4306759783 = R[2];
if (True == x4310512711) {
Obj x4310512935 = PRIM_CAR(action);
Obj x4310512967 = PRIM_EQ(x4310512935, __symbolTable[110]);
if (True == x4310512967) {
co->ctx.sp = R;
coraCall1(co, x4306759783, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4306759783, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4306759783, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4306759815 = R[1];
if (True == x4306759815) {
struct frame1 __curr = {
.fn = clofun39,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 1));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x4310512167= co->res;
Obj x4310511975 = R[1];
Obj x4310512327 = makeCons(closureRef(R[0], 0), Nil);
Obj x4310512359 = makeCons(x4310512327, Nil);
Obj x4310512391 = makeCons(x4310512167, x4310512359);
Obj x4310512455 = makeCons(x4310511975, x4310512391);
Obj x4310512487 = makeCons(__symbolTable[126], x4310512455);
coraReturn(co, x4310512487);
return;
}
case 2:
{
Obj x4310511975= co->res;
R[1] = x4310511975;
struct frame1 __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 1));
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj expr = R[2];
Obj body = R[3];
Obj cc = R[4];
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
struct frame1 __curr = {
.fn = clofun38,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, makeNative1(2, clofun37, 1, 0), pat);
return;
}
case 1:
{
Obj x4310580519= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), x4310580519);
return;
}
case 2:
{
Obj x4310578823= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x4310578823) {
Obj x4310579047 = PRIM_CAR(pat);
Obj x4310579079 = PRIM_EQ(x4310579047, __symbolTable[139]);
if (True == x4310579079) {
Obj x4310579495 = makeCons(expr, Nil);
Obj x4310579527 = makeCons(pat, x4310579495);
Obj x4310579559 = makeCons(__symbolTable[113], x4310579527);
Obj x4310579815 = makeCons(cc, Nil);
Obj x4310579847 = makeCons(x4310579815, Nil);
Obj x4310579879 = makeCons(body, x4310579847);
Obj x4310579911 = makeCons(x4310579559, x4310579879);
Obj x4310579943 = makeCons(__symbolTable[126], x4310579911);
coraReturn(co, x4310579943);
return;
} else {
Obj x4310580167 = PRIM_CAR(pat);
Obj x4310580199 = PRIM_EQ(x4310580167, __symbolTable[152]);
if (True == x4310580199) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[118]), pat, expr, body, cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no cond match"));
return;
}
}
} else {
struct frame1 __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[112]), makeCString("match fail "), pat);
return;
}
}
case 3:
{
Obj x4308369767= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x4308369767) {
Obj x4308369927 = PRIM_EQ(pat, expr);
if (True == x4308369927) {
coraReturn(co, body);
return;
} else {
Obj x4310577543 = makeCons(expr, Nil);
Obj x4310577575 = makeCons(pat, x4310577543);
Obj x4310577607 = makeCons(__symbolTable[113], x4310577575);
Obj x4310577863 = makeCons(cc, Nil);
Obj x4310577895 = makeCons(x4310577863, Nil);
Obj x4310577927 = makeCons(body, x4310577895);
Obj x4310577959 = makeCons(x4310577607, x4310577927);
Obj x4310577991 = makeCons(__symbolTable[126], x4310577959);
coraReturn(co, x4310577991);
return;
}
} else {
Obj x4310578151 = primIsSymbol(pat);
if (True == x4310578151) {
Obj x4310578535 = makeCons(body, Nil);
Obj x4310578567 = makeCons(expr, x4310578535);
Obj x4310578631 = makeCons(pat, x4310578567);
Obj x4310578663 = makeCons(__symbolTable[129], x4310578631);
coraReturn(co, x4310578663);
return;
} else {
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
struct frame1 __curr = {
.fn = clofun38,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), pat);
return;
}
}
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
R[1] = x;
struct frame1 __curr = {
.fn = clofun37,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[131]), x);
return;
}
case 1:
{
Obj x4308369479= co->res;
Obj x = R[1];
if (True == x4308369479) {
Obj x4308369703 = primIsSymbol(x);
Obj x4308369735 = primNot(x4308369703);
if (True == x4308369735) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
} else {
coraReturn(co, False);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj expr = R[2];
Obj body = R[3];
Obj cc = R[4];
R[1] = pat;
R[2] = body;
R[3] = cc;
R[4] = expr;
struct frame1 __curr = {
.fn = clofun36,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), pat);
return;
}
case 1:
{
Obj x4308444327= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = x4308444327;
Obj x4306804711 = makeNative1(3, clofun35, 1, 5, x, y, expr, body, cc);
Obj x4308446471 = PRIM_ISCONS(expr);
if (True == x4308446471) {
Obj x4308446695 = PRIM_CAR(expr);
Obj x4308446727 = PRIM_EQ(x4308446695, __symbolTable[152]);
if (True == x4308446727) {
co->ctx.sp = R;
coraCall1(co, x4306804711, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4306804711, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4306804711, False);
return;
}
}
case 2:
{
Obj x4308444167= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = x4308444167;
R[1] = x;
R[2] = body;
R[3] = cc;
R[4] = expr;
struct frame1 __curr = {
.fn = clofun36,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), pat);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4306759751 = R[1];
if (True == x4306759751) {
struct frame1 __curr = {
.fn = clofun35,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 2));
return;
} else {
Obj x4308445287 = makeCons(closureRef(R[0], 2), Nil);
Obj x4308445319 = makeCons(__symbolTable[116], x4308445287);
Obj x4308445607 = makeCons(closureRef(R[0], 2), Nil);
Obj x4308445639 = makeCons(__symbolTable[115], x4308445607);
Obj x4308445863 = makeCons(closureRef(R[0], 2), Nil);
Obj x4308445895 = makeCons(__symbolTable[114], x4308445863);
R[1] = x4308445639;
R[2] = x4308445319;
struct frame1 __curr = {
.fn = clofun35,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), x4308445895, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj x4308444999= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), e1, x4308444999, closureRef(R[0], 4));
return;
}
case 2:
{
Obj x4308444839= co->res;
Obj e1 = R[1];
Obj e2 = x4308444839;
R[1] = e1;
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4308444679= co->res;
Obj e1 = x4308444679;
R[1] = e1;
struct frame1 __curr = {
.fn = clofun35,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 2));
return;
}
case 4:
{
Obj x4308445959= co->res;
Obj x4308445319 = R[1];
Obj x4308446119 = makeCons(closureRef(R[0], 4), Nil);
Obj x4308446151 = makeCons(x4308446119, Nil);
Obj x4308446183 = makeCons(x4308445959, x4308446151);
Obj x4308446215 = makeCons(x4308445319, x4308446183);
Obj x4308446247 = makeCons(__symbolTable[126], x4308446215);
coraReturn(co, x4308446247);
return;
}
case 5:
{
Obj x4308445927= co->res;
Obj x4308445639 = R[1];
Obj x4308445319 = R[2];
R[1] = x4308445319;
struct frame1 __curr = {
.fn = clofun35,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), x4308445639, x4308445927, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308443783 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[120]), x4308443783);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj x4308463175 = PRIM_CDR(pat);
R[1] = pat;
struct frame1 __curr = {
.fn = clofun33,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x4308463175);
return;
}
case 1:
{
Obj x4308443303= co->res;
Obj x4308463527 = R[1];
Obj x4308443335 = makeCons(x4308443303, Nil);
Obj x4308443367 = makeCons(x4308463527, x4308443335);
Obj x4308443399 = makeCons(__symbolTable[152], x4308443367);
coraReturn(co, x4308443399);
return;
}
case 2:
{
Obj x4308463207= co->res;
Obj pat = R[1];
if (True == x4308463207) {
Obj x4308463303 = PRIM_CAR(pat);
coraReturn(co, x4308463303);
return;
} else {
Obj x4308463527 = PRIM_CAR(pat);
Obj x4308443271 = PRIM_CDR(pat);
R[1] = x4308463527;
struct frame1 __curr = {
.fn = clofun33,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[120]), x4308443271);
return;
}
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4308462567 = PRIM_EQ(x, True);
if (True == x4308462567) {
coraReturn(co, True);
return;
} else {
Obj x4308462727 = PRIM_EQ(x, False);
if (True == x4308462727) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
}
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308462183 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[123]), x4308462183);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x4308460647 = PRIM_EQ(Nil, l);
if (True == x4308460647) {
coraReturn(co, True);
return;
} else {
Obj x4308460871 = PRIM_CAR(l);
Obj x4308460903 = PRIM_EQ(x4308460871, False);
if (True == x4308460903) {
coraReturn(co, False);
return;
} else {
Obj x4308461127 = PRIM_CDR(l);
R[1] = l;
struct frame1 __curr = {
.fn = clofun30,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[123]), x4308461127);
return;
}
}
}
case 1:
{
Obj x4308461159= co->res;
Obj l = R[1];
Obj more = x4308461159;
Obj x4308461319 = PRIM_EQ(more, False);
if (True == x4308461319) {
coraReturn(co, False);
return;
} else {
Obj x4308461543 = PRIM_CAR(l);
Obj x4308461703 = makeCons(False, Nil);
Obj x4308461735 = makeCons(more, x4308461703);
Obj x4308461767 = makeCons(x4308461543, x4308461735);
Obj x4308461799 = makeCons(__symbolTable[126], x4308461767);
coraReturn(co, x4308461799);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308460263 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[125]), x4308460263);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x4308471015 = PRIM_EQ(l, Nil);
if (True == x4308471015) {
coraReturn(co, False);
return;
} else {
Obj x4308471239 = PRIM_CAR(l);
Obj x4308471271 = PRIM_EQ(x4308471239, True);
if (True == x4308471271) {
coraReturn(co, True);
return;
} else {
Obj x4308471495 = PRIM_CDR(l);
R[1] = l;
struct frame1 __curr = {
.fn = clofun28,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[125]), x4308471495);
return;
}
}
}
case 1:
{
Obj x4308471527= co->res;
Obj l = R[1];
Obj more = x4308471527;
Obj x4308471687 = PRIM_EQ(more, True);
if (True == x4308471687) {
coraReturn(co, True);
return;
} else {
Obj x4308459623 = PRIM_CAR(l);
Obj x4308459783 = makeCons(more, Nil);
Obj x4308459815 = makeCons(True, x4308459783);
Obj x4308459847 = makeCons(x4308459623, x4308459815);
Obj x4308459879 = makeCons(__symbolTable[126], x4308459847);
coraReturn(co, x4308459879);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308469479 = PRIM_CDR(exp);
Obj x4308469511 = PRIM_EQ(Nil, x4308469479);
if (True == x4308469511) {
Obj x4308469671 = makeCons(makeCString("no cond match"), Nil);
Obj x4308469703 = makeCons(__symbolTable[127], x4308469671);
coraReturn(co, x4308469703);
return;
} else {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun27,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
case 1:
{
Obj x4308470471= co->res;
Obj x4308470247 = R[1];
Obj x4308470087 = R[2];
Obj x4308470503 = makeCons(__symbolTable[128], x4308470471);
Obj x4308470535 = makeCons(x4308470503, Nil);
Obj x4308470567 = makeCons(x4308470247, x4308470535);
Obj x4308470599 = makeCons(x4308470087, x4308470567);
Obj x4308470631 = makeCons(__symbolTable[126], x4308470599);
coraReturn(co, x4308470631);
return;
}
case 2:
{
Obj x4308470247= co->res;
Obj exp = R[1];
Obj x4308470087 = R[2];
R[1] = x4308470247;
R[2] = x4308470087;
struct frame1 __curr = {
.fn = clofun27,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x4308469863= co->res;
Obj exp = R[1];
Obj curr = x4308469863;
Obj x4308470087 = PRIM_CAR(curr);
R[1] = exp;
R[2] = x4308470087;
struct frame1 __curr = {
.fn = clofun27,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), curr);
return;
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308469031 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[130]), x4308469031);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308524199 = PRIM_CDR(exp);
R[1] = exp;
struct frame1 __curr = {
.fn = clofun25,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x4308524199);
return;
}
case 1:
{
Obj x4308524967= co->res;
Obj x4308524711 = R[1];
Obj x4308524551 = R[2];
Obj x4308524999 = makeCons(x4308524967, Nil);
Obj x4308525031 = makeCons(x4308524711, x4308524999);
Obj x4308468519 = makeCons(x4308524551, x4308525031);
Obj x4308468551 = makeCons(__symbolTable[129], x4308468519);
coraReturn(co, x4308468551);
return;
}
case 2:
{
Obj x4308524935= co->res;
Obj x4308524711 = R[1];
Obj x4308524551 = R[2];
R[1] = x4308524711;
R[2] = x4308524551;
struct frame1 __curr = {
.fn = clofun25,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), x4308524935);
return;
}
case 3:
{
Obj x4308524711= co->res;
Obj exp = R[1];
Obj x4308524551 = R[2];
R[1] = x4308524711;
R[2] = x4308524551;
struct frame1 __curr = {
.fn = clofun25,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 4:
{
Obj x4308524231= co->res;
Obj exp = R[1];
if (True == x4308524231) {
Obj x4308524327 = PRIM_CAR(exp);
coraReturn(co, x4308524327);
return;
} else {
Obj x4308524551 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x4308524551;
struct frame1 __curr = {
.fn = clofun25,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
}
}

static void clofun24(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4308523719 = PRIM_ISCONS(x);
Obj x4308523751 = primNot(x4308523719);
coraReturn(co, x4308523751);
return;
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj l = R[2];
Obj x4308522919 = PRIM_ISCONS(l);
if (True == x4308522919) {
Obj x4308523143 = PRIM_CAR(l);
Obj x4308523175 = PRIM_EQ(x4308523143, x);
if (True == x4308523175) {
coraReturn(co, True);
return;
} else {
Obj x4308523335 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[132]), x, x4308523335);
return;
}
} else {
coraReturn(co, False);
return;
}
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun22,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4308522343= co->res;
Obj x4308522183 = R[1];
Obj x4308521895 = R[2];
Obj x4308522375 = makeCons(x4308522343, Nil);
Obj x4308522407 = makeCons(x4308522183, x4308522375);
Obj x4308522439 = makeCons(__symbolTable[140], x4308522407);
Obj x4308522471 = makeCons(x4308522439, Nil);
Obj x4308522503 = makeCons(x4308521895, x4308522471);
Obj x4308522535 = makeCons(__symbolTable[133], x4308522503);
coraReturn(co, x4308522535);
return;
}
case 2:
{
Obj x4308522183= co->res;
Obj exp = R[1];
Obj x4308521895 = R[2];
R[1] = x4308522183;
R[2] = x4308521895;
struct frame1 __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[155]), exp);
return;
}
case 3:
{
Obj x4308521895= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = x4308521895;
struct frame1 __curr = {
.fn = clofun22,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4308521447 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[153]), x4308521447);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4309712679= co->res;
Obj x4309712583 = R[1];
Obj x4309712295 = R[2];
Obj x4309712711 = makeCons(x4309712583, x4309712679);
Obj x4309712743 = makeCons(__symbolTable[140], x4309712711);
Obj x4309712775 = makeCons(x4309712743, Nil);
Obj x4309712807 = makeCons(x4309712295, x4309712775);
Obj x4309712839 = makeCons(__symbolTable[144], x4309712807);
coraReturn(co, x4309712839);
return;
}
case 2:
{
Obj x4309712583= co->res;
Obj exp = R[1];
Obj x4309712295 = R[2];
R[1] = x4309712583;
R[2] = x4309712295;
struct frame1 __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[154]), exp);
return;
}
case 3:
{
Obj x4309712231= co->res;
Obj exp = R[1];
Obj x4309712263 = makeCons(x4309712231, Nil);
Obj x4309712295 = makeCons(__symbolTable[139], x4309712263);
R[1] = exp;
R[2] = x4309712295;
struct frame1 __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4309709543 = PRIM_ISCONS(exp);
if (True == x4309709543) {
Obj x4309709767 = PRIM_CAR(exp);
Obj x4309709799 = PRIM_EQ(x4309709767, globalRef(__symbolTable[145]));
if (True == x4309709799) {
Obj x4309709895 = PRIM_CDR(exp);
coraReturn(co, x4309709895);
return;
} else {
Obj x4309710119 = PRIM_CAR(exp);
Obj x4309710151 = PRIM_EQ(x4309710119, __symbolTable[140]);
if (True == x4309710151) {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun19,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
} else {
Obj x4309710951 = PRIM_CAR(exp);
Obj x4309710983 = PRIM_EQ(x4309710951, __symbolTable[139]);
if (True == x4309710983) {
coraReturn(co, exp);
return;
} else {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun19,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[142]), exp);
return;
}
}
}
} else {
coraReturn(co, exp);
return;
}
}
case 1:
{
Obj x4309710631= co->res;
Obj x4309710375 = R[1];
Obj x4309710663 = makeCons(x4309710631, Nil);
Obj x4309710695 = makeCons(x4309710375, x4309710663);
Obj x4309710727 = makeCons(__symbolTable[140], x4309710695);
coraReturn(co, x4309710727);
return;
}
case 2:
{
Obj x4309710599= co->res;
Obj x4309710375 = R[1];
R[1] = x4309710375;
struct frame1 __curr = {
.fn = clofun19,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[141]), x4309710599);
return;
}
case 3:
{
Obj x4309710375= co->res;
Obj exp = R[1];
R[1] = x4309710375;
struct frame1 __curr = {
.fn = clofun19,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
case 4:
{
Obj x4309711495= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative1(2, clofun18, 1, 1, exp), x4309711495);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj x4309711271 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == x4309711271) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[141]), exp1);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[141]), exp1);
return;
}
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), exp, globalRef(__symbolTable[146]));
return;
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj macros = R[2];
Obj x4309752615 = PRIM_EQ(Nil, macros);
if (True == x4309752615) {
coraReturn(co, exp);
return;
} else {
Obj x4309708871 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative1(2, clofun15, 1, 2, macros, exp), x4309708871);
return;
}
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj item = R[1];
Obj x4306804519 = makeNative1(2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x4309753479 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4309753479) {
Obj x4309753703 = PRIM_CAR(closureRef(R[0], 1));
Obj x4309753799 = PRIM_CAR(item);
Obj x4309753831 = PRIM_EQ(x4309753703, x4309753799);
if (True == x4309753831) {
co->ctx.sp = R;
coraCall1(co, x4306804519, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4306804519, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4306804519, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4306804583 = R[1];
if (True == x4306804583) {
Obj x4309753095 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, x4309753095, closureRef(R[0], 1));
return;
} else {
Obj x4309753255 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), closureRef(R[0], 1), x4309753255);
return;
}
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj v = R[2];
Obj x4309752167 = makeCons(n, v);
Obj x4309752199 = makeCons(x4309752167, globalRef(__symbolTable[146]));
Obj x4309752231 = primSet(co, __symbolTable[146], x4309752199);
coraReturn(co, x4309752231);
return;
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj f = R[1];
Obj l = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), Nil, f, l);
return;
}
}
}

static void clofun11(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj f = R[2];
Obj l = R[3];
Obj x4309750503 = PRIM_ISCONS(l);
if (True == x4309750503) {
Obj x4309750791 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
struct frame1 __curr = {
.fn = clofun11,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, f, x4309750791);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj x4309750823= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj x4309750855 = makeCons(x4309750823, res);
Obj x4309750951 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), x4309750855, f, x4309750951);
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj l = R[2];
Obj x4309798663 = PRIM_ISCONS(l);
if (True == x4309798663) {
Obj x4309798887 = PRIM_CAR(l);
Obj x4309749767 = makeCons(x4309798887, res);
Obj x4309749863 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[150]), x4309749767, x4309749863);
return;
} else {
coraReturn(co, res);
return;
}
}
}
}

static void clofun9(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309798279 = PRIM_ISCONS(x);
coraReturn(co, x4309798279);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4309797383 = PRIM_ISCONS(exp);
if (True == x4309797383) {
Obj x4309797607 = PRIM_CAR(exp);
Obj x4309797831 = PRIM_CDR(exp);
R[1] = x4309797607;
struct frame1 __curr = {
.fn = clofun8,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[153]), x4309797831);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj x4309797863= co->res;
Obj x4309797607 = R[1];
Obj x4309797895 = makeCons(x4309797863, Nil);
Obj x4309797927 = makeCons(x4309797607, x4309797895);
Obj x4309797959 = makeCons(__symbolTable[152], x4309797927);
coraReturn(co, x4309797959);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309796935 = PRIM_CDR(x);
Obj x4309796967 = PRIM_CDR(x4309796935);
Obj x4309796999 = PRIM_CDR(x4309796967);
coraReturn(co, x4309796999);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309796391 = PRIM_CDR(x);
Obj x4309796423 = PRIM_CDR(x4309796391);
Obj x4309796455 = PRIM_CDR(x4309796423);
Obj x4309796487 = PRIM_CAR(x4309796455);
coraReturn(co, x4309796487);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309795815 = PRIM_CDR(x);
Obj x4309795847 = PRIM_CDR(x4309795815);
Obj x4309795879 = PRIM_CAR(x4309795847);
coraReturn(co, x4309795879);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309795335 = PRIM_CDR(x);
Obj x4309795367 = PRIM_CDR(x4309795335);
coraReturn(co, x4309795367);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309794919 = PRIM_CAR(x);
Obj x4309794951 = PRIM_CDR(x4309794919);
coraReturn(co, x4309794951);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309802695 = PRIM_CAR(x);
Obj x4309802727 = PRIM_CAR(x4309802695);
coraReturn(co, x4309802727);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309802279 = PRIM_CDR(x);
Obj x4309802311 = PRIM_CAR(x4309802279);
coraReturn(co, x4309802311);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4309801895 = PRIM_EQ(x, Nil);
coraReturn(co, x4309801895);
return;
}
}
}

