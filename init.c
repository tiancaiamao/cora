#include "types.h"
#include "runtime.h"

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
Obj x4319528839 = primSet(co, __symbolTable[161], makeNative(co->gc, 2, clofun0, 1, 0));
Obj x4319529255 = primSet(co, __symbolTable[160], makeNative(co->gc, 2, clofun1, 1, 0));
Obj x4319529671 = primSet(co, __symbolTable[159], makeNative(co->gc, 2, clofun2, 1, 0));
Obj x4319530087 = primSet(co, __symbolTable[158], makeNative(co->gc, 2, clofun3, 1, 0));
Obj x4319530503 = primSet(co, __symbolTable[157], makeNative(co->gc, 2, clofun4, 1, 0));
Obj x4319412231 = primSet(co, __symbolTable[156], makeNative(co->gc, 2, clofun5, 1, 0));
Obj x4319412839 = primSet(co, __symbolTable[155], makeNative(co->gc, 2, clofun6, 1, 0));
Obj x4319413351 = primSet(co, __symbolTable[154], makeNative(co->gc, 2, clofun7, 1, 0));
Obj x4319414311 = primSet(co, __symbolTable[153], makeNative(co->gc, 2, clofun8, 1, 0));
Obj x4319414631 = primSet(co, __symbolTable[151], makeNative(co->gc, 2, clofun9, 1, 0));
Obj x4319415367 = primSet(co, __symbolTable[150], makeNative(co->gc, 3, clofun10, 2, 0));
saveCont(co, clofun95, 15, R);
coraCall1(co, globalRef(__symbolTable[150]), Nil);
return;
}
case 1:
{
Obj x4319253671= co->res;
Obj x4319255015 = primSet(co, __symbolTable[76], makeNative(co->gc, 3, clofun80, 2, 0));
Obj x4319245767 = primSet(co, __symbolTable[71], makeNative(co->gc, 5, clofun81, 3, 0));
Obj x4319246407 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj x4319246439 = makeCons(co->gc, MAKE_NUMBER(2), x4319246407);
Obj x4319246535 = makeCons(co->gc, __symbolTable[68], x4319246439);
Obj x4319247015 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj x4319247047 = makeCons(co->gc, MAKE_NUMBER(1), x4319247015);
Obj x4319247303 = makeCons(co->gc, __symbolTable[115], x4319247047);
Obj x4319247687 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj x4319247719 = makeCons(co->gc, MAKE_NUMBER(1), x4319247687);
Obj x4319247847 = makeCons(co->gc, __symbolTable[114], x4319247719);
Obj x4319248199 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj x4319248263 = makeCons(co->gc, MAKE_NUMBER(2), x4319248199);
Obj x4319248295 = makeCons(co->gc, __symbolTable[152], x4319248263);
Obj x4319187559 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj x4319187591 = makeCons(co->gc, MAKE_NUMBER(1), x4319187559);
Obj x4319187623 = makeCons(co->gc, __symbolTable[116], x4319187591);
Obj x4319188103 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj x4319188135 = makeCons(co->gc, MAKE_NUMBER(2), x4319188103);
Obj x4319188167 = makeCons(co->gc, __symbolTable[67], x4319188135);
Obj x4319188743 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj x4319188775 = makeCons(co->gc, MAKE_NUMBER(2), x4319188743);
Obj x4319188807 = makeCons(co->gc, __symbolTable[66], x4319188775);
Obj x4319189319 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj x4319189351 = makeCons(co->gc, MAKE_NUMBER(2), x4319189319);
Obj x4319189383 = makeCons(co->gc, __symbolTable[65], x4319189351);
Obj x4319190087 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj x4319190119 = makeCons(co->gc, MAKE_NUMBER(2), x4319190087);
Obj x4319190279 = makeCons(co->gc, __symbolTable[64], x4319190119);
Obj x4319190695 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj x4319190727 = makeCons(co->gc, MAKE_NUMBER(2), x4319190695);
Obj x4319190759 = makeCons(co->gc, __symbolTable[113], x4319190727);
Obj x4319134023 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj x4319134055 = makeCons(co->gc, MAKE_NUMBER(2), x4319134023);
Obj x4319134119 = makeCons(co->gc, __symbolTable[63], x4319134055);
Obj x4319134695 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj x4319134727 = makeCons(co->gc, MAKE_NUMBER(2), x4319134695);
Obj x4319134759 = makeCons(co->gc, __symbolTable[62], x4319134727);
Obj x4319135111 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj x4319135143 = makeCons(co->gc, MAKE_NUMBER(0), x4319135111);
Obj x4319135175 = makeCons(co->gc, __symbolTable[61], x4319135143);
Obj x4319135623 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj x4319135655 = makeCons(co->gc, MAKE_NUMBER(1), x4319135623);
Obj x4319135719 = makeCons(co->gc, __symbolTable[60], x4319135655);
Obj x4319136327 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj x4319136359 = makeCons(co->gc, MAKE_NUMBER(1), x4319136327);
Obj x4319136391 = makeCons(co->gc, __symbolTable[59], x4319136359);
Obj x4319136871 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj x4319136903 = makeCons(co->gc, MAKE_NUMBER(1), x4319136871);
Obj x4319136967 = makeCons(co->gc, __symbolTable[58], x4319136903);
Obj x4319137351 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj x4319137383 = makeCons(co->gc, MAKE_NUMBER(1), x4319137351);
Obj x4319137479 = makeCons(co->gc, __symbolTable[57], x4319137383);
Obj x4319137511 = makeCons(co->gc, x4319137479, Nil);
Obj x4319137543 = makeCons(co->gc, x4319136967, x4319137511);
Obj x4319137575 = makeCons(co->gc, x4319136391, x4319137543);
Obj x4319137671 = makeCons(co->gc, x4319135719, x4319137575);
Obj x4319137703 = makeCons(co->gc, x4319135175, x4319137671);
Obj x4319137735 = makeCons(co->gc, x4319134759, x4319137703);
Obj x4319137767 = makeCons(co->gc, x4319134119, x4319137735);
Obj x4319121415 = makeCons(co->gc, x4319190759, x4319137767);
Obj x4319121479 = makeCons(co->gc, x4319190279, x4319121415);
Obj x4319121575 = makeCons(co->gc, x4319189383, x4319121479);
Obj x4319121767 = makeCons(co->gc, x4319188807, x4319121575);
Obj x4319121799 = makeCons(co->gc, x4319188167, x4319121767);
Obj x4319121831 = makeCons(co->gc, x4319187623, x4319121799);
Obj x4319121863 = makeCons(co->gc, x4319248295, x4319121831);
Obj x4319121895 = makeCons(co->gc, x4319247847, x4319121863);
Obj x4319121991 = makeCons(co->gc, x4319247303, x4319121895);
Obj x4319122023 = makeCons(co->gc, x4319246535, x4319121991);
Obj x4319122151 = primSet(co, __symbolTable[69], x4319122023);
Obj x4319125447 = primSet(co, __symbolTable[56], makeNative(co->gc, 3, clofun83, 2, 0));
Obj x4319105671 = primSet(co, __symbolTable[55], makeNative(co->gc, 2, clofun84, 1, 0));
Obj x4319412647 = primSet(co, __symbolTable[93], makeNative(co->gc, 5, clofun94, 4, 0));
Obj x4319254439 = makeCons(co->gc, __symbolTable[98], Nil);
Obj x4319254471 = makeCons(co->gc, __symbolTable[99], x4319254439);
Obj x4319254503 = makeCons(co->gc, __symbolTable[101], x4319254471);
Obj x4319254567 = makeCons(co->gc, __symbolTable[132], x4319254503);
Obj x4319254599 = makeCons(co->gc, __symbolTable[138], x4319254567);
Obj x4319254631 = makeCons(co->gc, __symbolTable[147], x4319254599);
Obj x4319254663 = makeCons(co->gc, __symbolTable[149], x4319254631);
Obj x4319254759 = makeCons(co->gc, __symbolTable[39], x4319254663);
Obj x4319254791 = makeCons(co->gc, __symbolTable[40], x4319254759);
Obj x4319254823 = makeCons(co->gc, __symbolTable[41], x4319254791);
Obj x4319254855 = makeCons(co->gc, __symbolTable[81], x4319254823);
Obj x4319255207 = makeCons(co->gc, __symbolTable[42], x4319254855);
Obj x4319255239 = makeCons(co->gc, __symbolTable[43], x4319255207);
Obj x4319255271 = makeCons(co->gc, __symbolTable[70], x4319255239);
Obj x4319255303 = makeCons(co->gc, __symbolTable[44], x4319255271);
Obj x4319255367 = makeCons(co->gc, __symbolTable[45], x4319255303);
Obj x4319255399 = makeCons(co->gc, __symbolTable[46], x4319255367);
Obj x4319255495 = makeCons(co->gc, __symbolTable[47], x4319255399);
Obj x4319255527 = makeCons(co->gc, __symbolTable[48], x4319255495);
Obj x4319255655 = makeCons(co->gc, __symbolTable[49], x4319255527);
Obj x4319255687 = makeCons(co->gc, __symbolTable[50], x4319255655);
Obj x4319255751 = makeCons(co->gc, __symbolTable[51], x4319255687);
Obj x4319255783 = makeCons(co->gc, __symbolTable[52], x4319255751);
Obj x4319255815 = makeCons(co->gc, __symbolTable[72], x4319255783);
Obj x4319255847 = makeCons(co->gc, __symbolTable[74], x4319255815);
Obj x4319255911 = makeCons(co->gc, __symbolTable[73], x4319255847);
Obj x4319255943 = makeCons(co->gc, __symbolTable[161], x4319255911);
Obj x4319256039 = makeCons(co->gc, __symbolTable[54], x4319255943);
Obj x4319256071 = makeCons(co->gc, __symbolTable[121], x4319256039);
Obj x4319256103 = makeCons(co->gc, __symbolTable[131], x4319256071);
Obj x4319256135 = makeCons(co->gc, __symbolTable[151], x4319256103);
Obj x4319256199 = makeCons(co->gc, __symbolTable[154], x4319256135);
Obj x4319256263 = makeCons(co->gc, __symbolTable[155], x4319256199);
Obj x4319256295 = makeCons(co->gc, __symbolTable[156], x4319256263);
Obj x4319256327 = makeCons(co->gc, __symbolTable[157], x4319256295);
Obj x4319256391 = makeCons(co->gc, __symbolTable[158], x4319256327);
Obj x4319256423 = makeCons(co->gc, __symbolTable[159], x4319256391);
Obj x4319256519 = makeCons(co->gc, __symbolTable[160], x4319256423);
Obj x4319256551 = primSet(co, __symbolTable[53], x4319256519);
Obj x4319244679 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj x4319244967 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj x4319245319 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj x4319245735 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj x4319246055 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj x4319246311 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj x4319246727 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj x4319246951 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj x4319247559 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj x4319247911 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj x4319248135 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj x4319187047 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj x4319187655 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj x4319187943 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj x4319188455 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj x4319188711 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj x4319189159 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj x4319189639 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj x4319189799 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj x4319190471 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj x4319190791 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj x4319133831 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj x4319134215 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj x4319134439 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj x4319134951 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj x4319135303 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj x4319135559 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj x4319136007 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj x4319136423 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj x4319136711 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj x4319137063 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj x4319137319 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj x4319122311 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj x4319122503 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj x4319122727 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj x4319122951 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj x4319123143 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj x4319123399 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj x4319123495 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
coraReturn(co, x4319123495);
return;
}
case 2:
{
Obj x4320458727= co->res;
Obj x4319413223 = primSet(co, __symbolTable[83], makeNative(co->gc, 5, clofun75, 4, 0));
Obj x4319413671 = primSet(co, __symbolTable[80], makeNative(co->gc, 3, clofun76, 2, 0));
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[79], makeNative(co->gc, 2, clofun79, 1, 0));
return;
}
case 3:
{
Obj x4321729639= co->res;
Obj x4320458087 = primSet(co, __symbolTable[85], makeNative(co->gc, 3, clofun71, 2, 0));
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[84], makeNative(co->gc, 2, clofun72, 1, 0));
return;
}
case 4:
{
Obj x4319005831= co->res;
Obj x4321729191 = primSet(co, __symbolTable[88], makeNative(co->gc, 2, clofun69, 1, 0));
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[86], makeNative(co->gc, 2, clofun70, 1, 0));
return;
}
case 5:
{
Obj x4319107175= co->res;
Obj x4319107463 = primSet(co, __symbolTable[94], makeNative(co->gc, 2, clofun61, 1, 0));
Obj x4319107687 = primSet(co, __symbolTable[92], makeNative(co->gc, 2, clofun62, 1, 0));
Obj x4319108167 = primSet(co, __symbolTable[138], makeNative(co->gc, 2, clofun63, 1, 0));
Obj x4319005447 = primSet(co, __symbolTable[91], makeNative(co->gc, 2, clofun66, 1, 0));
saveCont(co, clofun95, 4, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[89], makeNative(co->gc, 2, clofun67, 1, 0));
return;
}
case 6:
{
Obj x4319255623= co->res;
Obj x4319134407 = primSet(co, __symbolTable[106], makeNative(co->gc, 5, clofun48, 3, 0));
Obj x4319134919 = primSet(co, __symbolTable[104], makeNative(co->gc, 2, clofun49, 1, 0));
Obj x4319135943 = primSet(co, __symbolTable[103], makeNative(co->gc, 3, clofun50, 2, 0));
Obj x4319136807 = primSet(co, __symbolTable[102], makeNative(co->gc, 3, clofun51, 2, 0));
Obj x4319137127 = primSet(co, __symbolTable[101], makeNative(co->gc, 2, clofun52, 1, 0));
Obj x4319122567 = primSet(co, __symbolTable[100], makeNative(co->gc, 4, clofun53, 3, 0));
Obj x4319122855 = primSet(co, __symbolTable[99], makeNative(co->gc, 3, clofun54, 2, 0));
Obj x4319123623 = primSet(co, __symbolTable[98], makeNative(co->gc, 3, clofun55, 2, 0));
Obj x4319125319 = primSet(co, __symbolTable[97], makeNative(co->gc, 2, clofun58, 1, 0));
Obj x4319105607 = primSet(co, __symbolTable[96], makeNative(co->gc, 2, clofun59, 1, 0));
saveCont(co, clofun95, 5, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[95], makeNative(co->gc, 3, clofun60, 1, 0));
return;
}
case 7:
{
Obj x4321728999= co->res;
Obj x4320458343 = primSet(co, __symbolTable[118], makeNative(co->gc, 5, clofun36, 4, 0));
Obj x4319528871 = primSet(co, __symbolTable[117], makeNative(co->gc, 5, clofun38, 4, 0));
Obj x4319412423 = primSet(co, __symbolTable[111], makeNative(co->gc, 3, clofun40, 2, 0));
Obj x4319252647 = primSet(co, __symbolTable[109], makeNative(co->gc, 3, clofun42, 2, 0));
Obj x4319255175 = primSet(co, __symbolTable[108], makeNative(co->gc, 2, clofun44, 1, 0));
saveCont(co, clofun95, 6, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[107], makeNative(co->gc, 2, clofun45, 1, 0));
return;
}
case 8:
{
Obj x4319122119= co->res;
Obj x4321727207 = primSet(co, __symbolTable[121], makeNative(co->gc, 2, clofun32, 1, 0));
Obj x4321728455 = primSet(co, __symbolTable[120], makeNative(co->gc, 2, clofun33, 1, 0));
saveCont(co, clofun95, 7, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[119], makeNative(co->gc, 2, clofun34, 1, 0));
return;
}
case 9:
{
Obj x4319136583= co->res;
Obj x4319121735 = primSet(co, __symbolTable[123], makeNative(co->gc, 2, clofun30, 1, 0));
saveCont(co, clofun95, 8, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[122], makeNative(co->gc, 2, clofun31, 1, 0));
return;
}
case 10:
{
Obj x4319134663= co->res;
Obj x4319136199 = primSet(co, __symbolTable[125], makeNative(co->gc, 2, clofun28, 1, 0));
saveCont(co, clofun95, 9, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[124], makeNative(co->gc, 2, clofun29, 1, 0));
return;
}
case 11:
{
Obj x4319190407= co->res;
saveCont(co, clofun95, 10, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[128], makeNative(co->gc, 3, clofun27, 1, 0));
return;
}
case 12:
{
Obj x4319187463= co->res;
Obj x4319188263 = primSet(co, __symbolTable[132], makeNative(co->gc, 3, clofun23, 2, 0));
Obj x4319188679 = primSet(co, __symbolTable[131], makeNative(co->gc, 2, clofun24, 1, 0));
Obj x4319190023 = primSet(co, __symbolTable[130], makeNative(co->gc, 3, clofun25, 1, 0));
saveCont(co, clofun95, 11, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[129], makeNative(co->gc, 2, clofun26, 1, 0));
return;
}
case 13:
{
Obj x4319247815= co->res;
saveCont(co, clofun95, 12, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[134], makeNative(co->gc, 3, clofun22, 1, 0));
return;
}
case 14:
{
Obj x4319247431= co->res;
saveCont(co, clofun95, 13, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[135], makeNative(co->gc, 2, clofun21, 1, 0));
return;
}
case 15:
{
Obj x4319415591= co->res;
Obj x4319415623 = primSet(co, __symbolTable[149], x4319415591);
Obj x4319252679 = primSet(co, __symbolTable[148], makeNative(co->gc, 4, clofun11, 3, 0));
Obj x4319252967 = primSet(co, __symbolTable[147], makeNative(co->gc, 3, clofun12, 2, 0));
Obj x4319253127 = primSet(co, __symbolTable[146], Nil);
Obj x4319253351 = primGenSym(co);
Obj x4319253383 = primSet(co, __symbolTable[145], x4319253351);
Obj x4319253895 = primSet(co, __symbolTable[144], makeNative(co->gc, 3, clofun13, 2, 0));
Obj x4319255591 = primSet(co, __symbolTable[143], makeNative(co->gc, 3, clofun16, 2, 0));
Obj x4319255879 = primSet(co, __symbolTable[142], makeNative(co->gc, 2, clofun17, 1, 0));
Obj x4319245927 = primSet(co, __symbolTable[141], makeNative(co->gc, 2, clofun19, 1, 0));
Obj x4319246087 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj x4319247271 = primSet(co, __symbolTable[137], makeNative(co->gc, 3, clofun20, 1, 0));
saveCont(co, clofun95, 14, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320459847 = R[1];
Obj x4320459879 = R[2];
Obj x4320459911 = R[3];
Obj x4320459943 = R[4];
Obj x4321726855 = makeNative(co->gc, 2, clofun93, 1, 4, x4320459847, x4320459879, x4320459911, x4320459943);
R[1] = x4320459943;
R[2] = x4321726855;
saveCont(co, clofun94, 3, R);
coraCall1(co, globalRef(__symbolTable[54]), x4320459943);
return;
}
case 1:
{
Obj x4319412583= co->res;
Obj x4321726855 = R[1];
if (True == x4319412583) {
co->ctx.sp = R;
coraCall1(co, x4321726855, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726855, False);
return;
}
}
case 2:
{
Obj x4319412295= co->res;
Obj x4320459943 = R[1];
Obj x4321726855 = R[2];
if (True == x4319412295) {
co->ctx.sp = R;
coraCall1(co, x4321726855, True);
return;
} else {
R[1] = x4321726855;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(__symbolTable[161]), x4320459943);
return;
}
}
case 3:
{
Obj x4319530215= co->res;
Obj x4320459943 = R[1];
Obj x4321726855 = R[2];
if (True == x4319530215) {
co->ctx.sp = R;
coraCall1(co, x4321726855, True);
return;
} else {
Obj x4319530631 = primIsString(x4320459943);
if (True == x4319530631) {
co->ctx.sp = R;
coraCall1(co, x4321726855, True);
return;
} else {
R[1] = x4320459943;
R[2] = x4321726855;
saveCont(co, clofun94, 2, R);
coraCall1(co, globalRef(__symbolTable[121]), x4320459943);
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
Obj x4321726887 = R[1];
if (True == x4321726887) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj x4320460615 = makeNative(co->gc, 3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4320460647 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x4320460647) {
Obj x4319527239 = PRIM_CAR(closureRef(R[0], 3));
Obj x4319527335 = PRIM_EQ(__symbolTable[139], x4319527239);
if (True == x4319527335) {
Obj x4319527655 = PRIM_CDR(closureRef(R[0], 3));
Obj x4319527687 = PRIM_ISCONS(x4319527655);
if (True == x4319527687) {
Obj x4319528007 = PRIM_CDR(closureRef(R[0], 3));
Obj x4319528071 = PRIM_CAR(x4319528007);
Obj x = x4319528071;
Obj x4319528647 = PRIM_CDR(closureRef(R[0], 3));
Obj x4319528679 = PRIM_CDR(x4319528647);
Obj x4319528711 = PRIM_EQ(Nil, x4319528679);
if (True == x4319528711) {
Obj x4319529095 = makeCons(co->gc, x, Nil);
Obj x4319529127 = makeCons(co->gc, __symbolTable[139], x4319529095);
coraReturn(co, x4319529127);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320460615);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460615);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460615);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460615);
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
Obj x4319106471 = primIsSymbol(closureRef(R[0], 0));
if (True == x4319106471) {
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(__symbolTable[132]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4321727815 = makeNative(co->gc, 3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4321729223 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4321729223) {
Obj x4321729479 = PRIM_CAR(closureRef(R[0], 0));
Obj x4321729511 = PRIM_EQ(__symbolTable[140], x4321729479);
if (True == x4321729511) {
Obj x4321729831 = PRIM_CDR(closureRef(R[0], 0));
Obj x4321729863 = PRIM_ISCONS(x4321729831);
if (True == x4321729863) {
Obj x4321730311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4321730343 = PRIM_CAR(x4321730311);
Obj args = x4321730343;
Obj x4320457031 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320457127 = PRIM_CDR(x4320457031);
Obj x4320457159 = PRIM_ISCONS(x4320457127);
if (True == x4320457159) {
Obj x4320458119 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320458151 = PRIM_CDR(x4320458119);
Obj x4320458183 = PRIM_CAR(x4320458151);
Obj body = x4320458183;
Obj x4320458823 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320458855 = PRIM_CDR(x4320458823);
Obj x4320458887 = PRIM_CDR(x4320458855);
Obj x4320458919 = PRIM_EQ(Nil, x4320458887);
if (True == x4320458919) {
R[1] = body;
R[2] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(__symbolTable[98]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727815);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727815);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727815);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727815);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727815);
return;
}
}
}
case 1:
{
Obj x4319106823= co->res;
if (True == x4319106823) {
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
Obj x4319106663= co->res;
if (True == x4319106663) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun92, 1, R);
coraCall1(co, globalRef(__symbolTable[55]), closureRef(R[0], 0));
return;
}
}
case 3:
{
Obj x4320459495= co->res;
Obj args = R[1];
Obj x4320459527 = makeCons(co->gc, x4320459495, Nil);
Obj x4320459591 = makeCons(co->gc, args, x4320459527);
Obj x4320459623 = makeCons(co->gc, __symbolTable[140], x4320459591);
coraReturn(co, x4320459623);
return;
}
case 4:
{
Obj x4320459431= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun92, 3, R);
coraCall4(co, globalRef(__symbolTable[93]), x4320459431, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321728711 = makeNative(co->gc, 1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4318378535 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318378535) {
Obj x4318378759 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318378791 = PRIM_EQ(__symbolTable[90], x4318378759);
if (True == x4318378791) {
Obj x4318379015 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379047 = PRIM_ISCONS(x4318379015);
if (True == x4318379047) {
Obj x4318379335 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379367 = PRIM_CAR(x4318379335);
Obj x4318379399 = PRIM_ISCONS(x4318379367);
if (True == x4318379399) {
Obj x4318379751 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379783 = PRIM_CAR(x4318379751);
Obj x4318379815 = PRIM_CAR(x4318379783);
Obj x4318379847 = PRIM_EQ(__symbolTable[81], x4318379815);
if (True == x4318379847) {
Obj x4318347431 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318347463 = PRIM_CAR(x4318347431);
Obj x4318347495 = PRIM_CDR(x4318347463);
Obj x4318347527 = PRIM_ISCONS(x4318347495);
if (True == x4318347527) {
Obj x4318347879 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318347911 = PRIM_CAR(x4318347879);
Obj x4318347943 = PRIM_CDR(x4318347911);
Obj x4318347975 = PRIM_CAR(x4318347943);
Obj pkg = x4318347975;
Obj x4318348391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318348423 = PRIM_CAR(x4318348391);
Obj x4318348455 = PRIM_CDR(x4318348423);
Obj x4318348487 = PRIM_CDR(x4318348455);
Obj x4318348519 = PRIM_EQ(Nil, x4318348487);
if (True == x4318348519) {
Obj x4318348807 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318348839 = PRIM_CDR(x4318348807);
Obj x4318348871 = PRIM_ISCONS(x4318348839);
if (True == x4318348871) {
Obj x4318349159 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349191 = PRIM_CDR(x4318349159);
Obj x4318349223 = PRIM_CAR(x4318349191);
Obj y = x4318349223;
Obj x4318349575 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349607 = PRIM_CDR(x4318349575);
Obj x4318349639 = PRIM_CDR(x4318349607);
Obj x4318349671 = PRIM_EQ(Nil, x4318349639);
if (True == x4318349671) {
Obj x4318349831 = primIsString(pkg);
if (True == x4318349831) {
Obj x4318350183 = makeCons(co->gc, pkg, Nil);
Obj x4318350215 = makeCons(co->gc, __symbolTable[81], x4318350183);
R[1] = pkg;
R[2] = y;
saveCont(co, clofun91, 2, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), x4318350215);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728711);
return;
}
}
case 1:
{
Obj x4321727399= co->res;
Obj x4318350247 = R[1];
Obj x4321727431 = makeCons(co->gc, x4321727399, Nil);
Obj x4321727463 = makeCons(co->gc, x4318350247, x4321727431);
Obj x4321727495 = makeCons(co->gc, __symbolTable[90], x4321727463);
coraReturn(co, x4321727495);
return;
}
case 2:
{
Obj x4318350247= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj x4321727303 = makeCons(co->gc, pkg, closureRef(R[0], 3));
R[1] = x4318350247;
saveCont(co, clofun91, 1, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), x4321727303, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729895 = makeNative(co->gc, 3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4318376871 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318376871) {
Obj x4318377095 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x4318377095;
Obj x4318377287 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4318377287;
Obj x4321726951 = makeNative(co->gc, 2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, x4321729895);
Obj x4318378119 = PRIM_EQ(op, __symbolTable[126]);
if (True == x4318378119) {
co->ctx.sp = R;
coraCall1(co, x4321726951, True);
return;
} else {
Obj x4318378279 = PRIM_EQ(op, __symbolTable[90]);
if (True == x4318378279) {
co->ctx.sp = R;
coraCall1(co, x4321726951, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726951, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729895);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726983 = R[1];
if (True == x4321726983) {
saveCont(co, clofun89, 2, R);
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
Obj x4318377799= co->res;
Obj x4318377831 = makeCons(co->gc, closureRef(R[0], 0), x4318377799);
coraReturn(co, x4318377831);
return;
}
case 2:
{
Obj x4318377767= co->res;
saveCont(co, clofun89, 1, R);
coraCall2(co, globalRef(__symbolTable[147]), x4318377767, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730503 = makeNative(co->gc, 1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4318989799 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318989799) {
Obj x4318990279 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318392327 = PRIM_EQ(__symbolTable[129], x4318990279);
if (True == x4318392327) {
Obj x4318392551 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318392583 = PRIM_ISCONS(x4318392551);
if (True == x4318392583) {
Obj x4318392839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318392871 = PRIM_CAR(x4318392839);
Obj a = x4318392871;
Obj x4318393159 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318393191 = PRIM_CDR(x4318393159);
Obj x4318393223 = PRIM_ISCONS(x4318393191);
if (True == x4318393223) {
Obj x4318393575 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318393607 = PRIM_CDR(x4318393575);
Obj x4318393831 = PRIM_CAR(x4318393607);
Obj b = x4318393831;
Obj x4318394279 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318394311 = PRIM_CDR(x4318394279);
Obj x4318394343 = PRIM_CDR(x4318394311);
Obj x4318394375 = PRIM_ISCONS(x4318394343);
if (True == x4318394375) {
Obj x4318394855 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318394887 = PRIM_CDR(x4318394855);
Obj x4318394983 = PRIM_CDR(x4318394887);
Obj x4318395015 = PRIM_CAR(x4318394983);
Obj c = x4318395015;
Obj x4318395783 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318395815 = PRIM_CDR(x4318395783);
Obj x4318395847 = PRIM_CDR(x4318395815);
Obj x4318395879 = PRIM_CDR(x4318395847);
Obj x4318395943 = PRIM_EQ(Nil, x4318395879);
if (True == x4318395943) {
R[1] = c;
R[2] = a;
saveCont(co, clofun88, 2, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730503);
return;
}
}
case 1:
{
Obj x4318376071= co->res;
Obj x4318396295 = R[1];
Obj a = R[2];
Obj x4318376103 = makeCons(co->gc, x4318376071, Nil);
Obj x4318376135 = makeCons(co->gc, x4318396295, x4318376103);
Obj x4318376167 = makeCons(co->gc, a, x4318376135);
Obj x4318376199 = makeCons(co->gc, __symbolTable[129], x4318376167);
coraReturn(co, x4318376199);
return;
}
case 2:
{
Obj x4318396295= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x4318376039 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = x4318396295;
R[2] = a;
saveCont(co, clofun88, 1, R);
coraCall4(co, globalRef(__symbolTable[93]), x4318376039, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457735 = makeNative(co->gc, 2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4319005863 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4319005863) {
Obj x4319006087 = PRIM_CAR(closureRef(R[0], 2));
Obj x4319006119 = PRIM_EQ(__symbolTable[78], x4319006087);
if (True == x4319006119) {
Obj x4319006439 = PRIM_CDR(closureRef(R[0], 2));
Obj x4319006471 = PRIM_ISCONS(x4319006439);
if (True == x4319006471) {
Obj x4318986247 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318986279 = PRIM_CAR(x4318986247);
Obj path = x4318986279;
Obj x4318986631 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318986663 = PRIM_CDR(x4318986631);
Obj x4318986695 = PRIM_ISCONS(x4318986663);
if (True == x4318986695) {
Obj x4318987143 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318987175 = PRIM_CDR(x4318987143);
Obj x4318987207 = PRIM_CAR(x4318987175);
Obj import = x4318987207;
Obj x4318987559 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318987591 = PRIM_CDR(x4318987559);
Obj x4318987623 = PRIM_CDR(x4318987591);
Obj x4318987655 = PRIM_ISCONS(x4318987623);
if (True == x4318987655) {
Obj x4318988007 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318988039 = PRIM_CDR(x4318988007);
Obj x4318988071 = PRIM_CDR(x4318988039);
Obj x4318988103 = PRIM_CAR(x4318988071);
Obj body = x4318988103;
Obj x4318988519 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318988551 = PRIM_CDR(x4318988519);
Obj x4318988583 = PRIM_CDR(x4318988551);
Obj x4318988615 = PRIM_CDR(x4318988583);
Obj x4318988647 = PRIM_EQ(Nil, x4318988615);
if (True == x4318988647) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457735);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458759 = makeNative(co->gc, 1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj x4319108391 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319108391) {
Obj x4319108615 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319108647 = PRIM_EQ(__symbolTable[133], x4319108615);
if (True == x4319108647) {
Obj x4319108903 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319108967 = PRIM_ISCONS(x4319108903);
if (True == x4319108967) {
Obj x4319002727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319002759 = PRIM_CAR(x4319002727);
Obj var = x4319002759;
Obj x4319003175 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003239 = PRIM_CDR(x4319003175);
Obj x4319003271 = PRIM_ISCONS(x4319003239);
if (True == x4319003271) {
Obj x4319003655 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003687 = PRIM_CDR(x4319003655);
Obj x4319003719 = PRIM_CAR(x4319003687);
Obj val = x4319003719;
Obj x4319004135 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319004263 = PRIM_CDR(x4319004135);
Obj x4319004295 = PRIM_CDR(x4319004263);
Obj x4319004327 = PRIM_EQ(Nil, x4319004295);
if (True == x4319004327) {
R[1] = val;
saveCont(co, clofun86, 2, R);
coraCall2(co, globalRef(__symbolTable[76]), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458759);
return;
}
}
case 1:
{
Obj x4319005127= co->res;
Obj x4319004935 = R[1];
Obj x4319005159 = makeCons(co->gc, x4319005127, Nil);
Obj x4319005191 = makeCons(co->gc, x4319004935, x4319005159);
Obj x4319005223 = makeCons(co->gc, __symbolTable[68], x4319005191);
coraReturn(co, x4319005223);
return;
}
case 2:
{
Obj x4319004583= co->res;
Obj val = R[1];
Obj var1 = x4319004583;
Obj x4319004903 = makeCons(co->gc, var1, Nil);
Obj x4319004935 = makeCons(co->gc, __symbolTable[139], x4319004903);
R[1] = x4319004935;
saveCont(co, clofun86, 1, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), val);
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun85, 1, R);
coraCall3(co, globalRef(__symbolTable[93]), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x4319108231= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), x4319108231, closureRef(R[0], 3));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun84, 2, R);
coraCall2(co, globalRef(__symbolTable[56]), x, globalRef(__symbolTable[69]));
return;
}
case 1:
{
Obj x4319105479= co->res;
Obj x4319105639 = primNot(x4319105479);
coraReturn(co, x4319105639);
return;
}
case 2:
{
Obj x4319105447= co->res;
saveCont(co, clofun84, 1, R);
coraCall1(co, globalRef(__symbolTable[161]), x4319105447);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458471 = R[1];
Obj x4320458503 = R[2];
Obj x4319122535 = PRIM_EQ(Nil, x4320458503);
if (True == x4319122535) {
coraReturn(co, Nil);
return;
} else {
Obj x4320458951 = makeNative(co->gc, 1, clofun82, 0, 2, x4320458503, x4320458471);
Obj x4319123687 = PRIM_ISCONS(x4320458503);
if (True == x4319123687) {
Obj x4319123911 = PRIM_CAR(x4320458503);
Obj x4319123943 = PRIM_ISCONS(x4319123911);
if (True == x4319123943) {
Obj x4319124199 = PRIM_CAR(x4320458503);
Obj x4319124231 = PRIM_CAR(x4319124199);
Obj x = x4319124231;
Obj x4319124551 = PRIM_CAR(x4320458503);
Obj x4319124583 = PRIM_CDR(x4319124551);
Obj y = x4319124583;
Obj x4319124743 = PRIM_CDR(x4320458503);
Obj x4319124903 = PRIM_EQ(x4320458471, x);
if (True == x4319124903) {
Obj x4319125063 = makeCons(co->gc, x, y);
coraReturn(co, x4319125063);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458951);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458951);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458951);
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
Obj x4319122887 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319122887) {
Obj x4319123047 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319123239 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4319123239;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[56]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457319 = R[1];
Obj x4320457351 = R[2];
Obj x4320457383 = R[3];
Obj x4319255719 = PRIM_EQ(Nil, x4320457383);
if (True == x4319255719) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[76]), x4320457319, x4320457351);
return;
} else {
Obj x4319255975 = PRIM_ISCONS(x4320457383);
if (True == x4319255975) {
Obj x4319256167 = PRIM_CAR(x4320457383);
Obj import = x4319256167;
Obj x4319256359 = PRIM_CDR(x4320457383);
Obj more = x4319256359;
R[1] = import;
R[2] = x4320457319;
R[3] = x4320457351;
R[4] = more;
saveCont(co, clofun81, 7, R);
coraCall2(co, globalRef(__symbolTable[73]), import, makeCString(co->gc, "#*ns-export*"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj x4319245511= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), x4319245511);
return;
}
case 2:
{
Obj x4319245479= co->res;
Obj import = R[1];
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(__symbolTable[73]), import, x4319245479);
return;
}
case 3:
{
Obj x4319245447= co->res;
Obj import = R[1];
R[1] = import;
saveCont(co, clofun81, 2, R);
coraCall2(co, globalRef(__symbolTable[73]), makeCString(co->gc, "#"), x4319245447);
return;
}
case 4:
{
Obj x4319244871= co->res;
Obj import = R[1];
Obj x4320457319 = R[2];
Obj x4320457351 = R[3];
Obj more = R[4];
if (True == x4319244871) {
R[1] = import;
saveCont(co, clofun81, 3, R);
coraCall1(co, globalRef(__symbolTable[72]), x4320457319);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), x4320457319, x4320457351, more);
return;
}
}
case 5:
{
Obj x4319244647= co->res;
Obj import = R[1];
Obj x4320457319 = R[2];
Obj x4320457351 = R[3];
Obj more = R[4];
Obj export = x4319244647;
R[1] = import;
R[2] = x4320457319;
R[3] = x4320457351;
R[4] = more;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(__symbolTable[132]), x4320457319, export);
return;
}
case 6:
{
Obj x4319244615= co->res;
Obj import = R[1];
Obj x4320457319 = R[2];
Obj x4320457351 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x4320457319;
R[3] = x4320457351;
R[4] = more;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(__symbolTable[70]), x4319244615, Nil);
return;
}
case 7:
{
Obj x4319244583= co->res;
Obj import = R[1];
Obj x4320457319 = R[2];
Obj x4320457351 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x4320457319;
R[3] = x4320457351;
R[4] = more;
saveCont(co, clofun81, 6, R);
coraCall1(co, globalRef(__symbolTable[74]), x4319244583);
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
Obj x4319254183 = PRIM_EQ(ns, makeCString(co->gc, ""));
if (True == x4319254183) {
coraReturn(co, var);
return;
} else {
R[1] = var;
R[2] = ns;
saveCont(co, clofun80, 4, R);
coraCall1(co, globalRef(__symbolTable[75]), var);
return;
}
}
case 1:
{
Obj x4319254983= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), x4319254983);
return;
}
case 2:
{
Obj x4319254951= co->res;
Obj ns = R[1];
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(__symbolTable[73]), ns, x4319254951);
return;
}
case 3:
{
Obj x4319254919= co->res;
Obj ns = R[1];
R[1] = ns;
saveCont(co, clofun80, 2, R);
coraCall2(co, globalRef(__symbolTable[73]), makeCString(co->gc, "#"), x4319254919);
return;
}
case 4:
{
Obj x4319254535= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == x4319254535) {
coraReturn(co, var);
return;
} else {
R[1] = ns;
saveCont(co, clofun80, 3, R);
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
saveCont(co, clofun79, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), sexp);
return;
}
case 1:
{
Obj x4319414727= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, x4319414727, makeNative(co->gc, 4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj x4319414695= co->res;
Obj path = R[1];
R[1] = path;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(__symbolTable[80]), x4319414695);
return;
}
case 3:
{
Obj x4319414343= co->res;
Obj sexp = R[1];
Obj path = x4319414343;
R[1] = path;
saveCont(co, clofun79, 2, R);
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
Obj x4319415271 = makeCons(co->gc, makeCString(co->gc, "cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = x4319415271;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(__symbolTable[147]), makeNative(co->gc, 2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj x4319253479= co->res;
Obj x4319415271 = R[1];
Obj x4319253511 = makeCons(co->gc, __symbolTable[89], x4319253479);
Obj x4319253543 = makeCons(co->gc, x4319253511, Nil);
Obj x4319253575 = makeCons(co->gc, x4319415271, x4319253543);
Obj x4319253607 = makeCons(co->gc, closureRef(R[0], 0), x4319253575);
Obj x4319253639 = makeCons(co->gc, __symbolTable[78], x4319253607);
coraReturn(co, x4319253639);
return;
}
case 2:
{
Obj x4319416231= co->res;
Obj export = R[1];
Obj body = R[2];
Obj x4319415271 = R[3];
Obj x4319253095 = makeCons(co->gc, export, Nil);
Obj x4319253223 = makeCons(co->gc, __symbolTable[86], x4319253095);
Obj x4319253255 = makeCons(co->gc, x4319253223, Nil);
Obj x4319253287 = makeCons(co->gc, __symbolTable[77], x4319253255);
Obj x4319253319 = makeCons(co->gc, __symbolTable[133], x4319253287);
Obj x4319253447 = makeCons(co->gc, x4319253319, body);
R[1] = x4319415271;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(__symbolTable[98]), x4319416231, x4319253447);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj x4319416167 = makeCons(co->gc, imp, Nil);
Obj x4319416199 = makeCons(co->gc, __symbolTable[81], x4319416167);
coraReturn(co, x4319416199);
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
Obj x4321728871 = R[1];
Obj x4321728903 = R[2];
Obj x4321728935 = R[3];
Obj x4321728967 = R[4];
Obj x4321729159 = makeNative(co->gc, 1, clofun74, 0, 4, x4321728935, x4321728871, x4321728903, x4321728967);
Obj x4319528039 = PRIM_ISCONS(x4321728871);
if (True == x4319528039) {
Obj x4319528423 = PRIM_CAR(x4321728871);
Obj x4319528519 = PRIM_ISCONS(x4319528423);
if (True == x4319528519) {
Obj x4319528935 = PRIM_CAR(x4321728871);
Obj x4319528967 = PRIM_CAR(x4319528935);
Obj x4319528999 = PRIM_EQ(__symbolTable[81], x4319528967);
if (True == x4319528999) {
Obj x4319529447 = PRIM_CAR(x4321728871);
Obj x4319529479 = PRIM_CDR(x4319529447);
Obj x4319529511 = PRIM_ISCONS(x4319529479);
if (True == x4319529511) {
Obj x4319529895 = PRIM_CAR(x4321728871);
Obj x4319529959 = PRIM_CDR(x4319529895);
Obj x4319529991 = PRIM_CAR(x4319529959);
Obj lib = x4319529991;
Obj x4319530727 = PRIM_CAR(x4321728871);
Obj x4319530759 = PRIM_CDR(x4319530727);
Obj x4319530823 = PRIM_CDR(x4319530759);
Obj x4319530855 = PRIM_EQ(Nil, x4319530823);
if (True == x4319530855) {
Obj x4319412455 = PRIM_CDR(x4321728871);
Obj rest = x4319412455;
Obj x4319412615 = makeCons(co->gc, lib, x4321728903);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, x4319412615, x4321728935, x4321728967);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729159);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729959 = makeNative(co->gc, 1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4320459719 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4320459719) {
Obj x4320460167 = PRIM_CAR(closureRef(R[0], 1));
Obj x4320460199 = PRIM_ISCONS(x4320460167);
if (True == x4320460199) {
Obj x4320460711 = PRIM_CAR(closureRef(R[0], 1));
Obj x4320460743 = PRIM_CAR(x4320460711);
Obj x4320460775 = PRIM_EQ(__symbolTable[82], x4320460743);
if (True == x4320460775) {
Obj x4319527271 = PRIM_CAR(closureRef(R[0], 1));
Obj x4319527303 = PRIM_CDR(x4319527271);
Obj more = x4319527303;
Obj x4319527527 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = x4319527527;
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729959);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729959);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729959);
return;
}
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun73, 1, R);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
}
case 1:
{
Obj x4320459559= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), x4320459559, closureRef(R[0], 2), closureRef(R[0], 3));
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
saveCont(co, clofun72, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4320458695= co->res;
Obj x4320458599 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[85]), x4320458599, x4320458695);
return;
}
case 2:
{
Obj x4320458599= co->res;
Obj exp = R[1];
R[1] = x4320458599;
saveCont(co, clofun72, 1, R);
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
saveCont(co, clofun71, 4, R);
coraCall1(co, globalRef(__symbolTable[157]), arglist);
return;
}
case 1:
{
Obj x4320456871= co->res;
Obj x4321730471 = R[1];
Obj fn = R[2];
Obj x4320456903 = makeCons(co->gc, x4320456871, Nil);
Obj x4320456935 = makeCons(co->gc, x4321730471, x4320456903);
Obj x4320456967 = makeCons(co->gc, fn, x4320456935);
coraReturn(co, x4320456967);
return;
}
case 2:
{
Obj x4320457927= co->res;
Obj x4320457255 = R[1];
Obj fn = R[2];
Obj x4320457959 = makeCons(co->gc, x4320457927, Nil);
Obj x4320457991 = makeCons(co->gc, x4320457255, x4320457959);
Obj x4320458023 = makeCons(co->gc, fn, x4320457991);
coraReturn(co, x4320458023);
return;
}
case 3:
{
Obj x4321730215= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == x4321730215) {
Obj x4321730471 = PRIM_CAR(arglist);
R[1] = x4321730471;
R[2] = fn;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(__symbolTable[160]), arglist);
return;
} else {
Obj x4320457255 = PRIM_CAR(arglist);
Obj x4320457895 = PRIM_CDR(arglist);
R[1] = x4320457255;
R[2] = fn;
saveCont(co, clofun71, 2, R);
coraCall2(co, globalRef(__symbolTable[85]), fn, x4320457895);
return;
}
}
case 4:
{
Obj x4321730183= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 3, R);
coraCall1(co, globalRef(__symbolTable[161]), x4321730183);
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
saveCont(co, clofun70, 1, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4321729607= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[88]), x4321729607);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727655 = R[1];
Obj x4319006183 = primIsSymbol(x4321727655);
if (True == x4319006183) {
Obj x4319006343 = makeCons(co->gc, x4321727655, Nil);
Obj x4319006375 = makeCons(co->gc, __symbolTable[139], x4319006343);
coraReturn(co, x4319006375);
return;
} else {
Obj x4321727943 = makeNative(co->gc, 1, clofun68, 0, 1, x4321727655);
Obj x4321727047 = PRIM_ISCONS(x4321727655);
if (True == x4321727047) {
Obj x4321727335 = PRIM_CAR(x4321727655);
Obj x4321727367 = PRIM_EQ(__symbolTable[87], x4321727335);
if (True == x4321727367) {
Obj x4321727591 = PRIM_CDR(x4321727655);
Obj x4321727719 = PRIM_ISCONS(x4321727591);
if (True == x4321727719) {
Obj x4321728039 = PRIM_CDR(x4321727655);
Obj x4321728103 = PRIM_CAR(x4321728039);
Obj x = x4321728103;
Obj x4321728583 = PRIM_CDR(x4321727655);
Obj x4321728615 = PRIM_CDR(x4321728583);
Obj x4321728647 = PRIM_EQ(Nil, x4321728615);
if (True == x4321728647) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727943);
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
Obj x4319006663 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319006663) {
Obj x4318986343 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4318986343;
Obj x4318986503 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4318986503;
Obj x4318986727 = makeCons(co->gc, x, more);
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), x4318986727);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj x4318986759= co->res;
Obj x4318986791 = makeCons(co->gc, __symbolTable[135], x4318986759);
coraReturn(co, x4318986791);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4319005799 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[91]), x4319005799);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726503 = R[1];
Obj x4321726599 = makeNative(co->gc, 1, clofun65, 0, 1, x4321726503);
Obj x4319004871 = PRIM_ISCONS(x4321726503);
if (True == x4319004871) {
Obj x4319005031 = PRIM_CAR(x4321726503);
Obj x = x4319005031;
Obj x4319005255 = PRIM_CDR(x4321726503);
Obj x4319005287 = PRIM_EQ(Nil, x4319005255);
if (True == x4319005287) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321726599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321726599);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726919 = makeNative(co->gc, 2, clofun64, 0, 1, closureRef(R[0], 0));
Obj x4319003207 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319003207) {
Obj x4319003367 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4319003367;
Obj x4319003591 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003623 = PRIM_ISCONS(x4319003591);
if (True == x4319003623) {
Obj x4319003847 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003879 = PRIM_CAR(x4319003847);
Obj y = x4319003879;
Obj x4319004167 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319004199 = PRIM_CDR(x4319004167);
Obj x4319004231 = PRIM_EQ(Nil, x4319004199);
if (True == x4319004231) {
Obj x4319004455 = makeCons(co->gc, y, Nil);
Obj x4319004487 = makeCons(co->gc, x, x4319004455);
Obj x4319004519 = makeCons(co->gc, __symbolTable[90], x4319004487);
coraReturn(co, x4319004519);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321726919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321726919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321726919);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319108775 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319108775) {
Obj x4319108935 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4319108935;
Obj x4319109095 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4319109095;
R[1] = x;
saveCont(co, clofun64, 1, R);
coraCall1(co, globalRef(__symbolTable[91]), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4319002887= co->res;
Obj x = R[1];
Obj x4319002919 = makeCons(co->gc, x4319002887, Nil);
Obj x4319002951 = makeCons(co->gc, x, x4319002919);
Obj x4319002983 = makeCons(co->gc, __symbolTable[90], x4319002951);
coraReturn(co, x4319002983);
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
saveCont(co, clofun63, 2, R);
coraCall1(co, globalRef(__symbolTable[141]), exp);
return;
}
case 1:
{
Obj x4319108135= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[92]), x4319108135);
return;
}
case 2:
{
Obj x4319108103= co->res;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(__symbolTable[94]), x4319108103);
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
coraCall4(co, globalRef(__symbolTable[93]), Nil, makeCString(co->gc, ""), Nil, exp);
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
saveCont(co, clofun60, 5, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 1:
{
Obj x4319106599= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x4319106951 = makeCons(co->gc, __symbolTable[135], args);
Obj x4319106983 = makeCons(co->gc, x4319106951, body);
Obj x4319107015 = makeCons(co->gc, __symbolTable[107], x4319106983);
Obj x4319107047 = makeCons(co->gc, x4319107015, Nil);
Obj x4319107079 = makeCons(co->gc, args, x4319107047);
Obj x4319107111 = makeCons(co->gc, x4319106599, x4319107079);
Obj x4319107143 = makeCons(co->gc, __symbolTable[134], x4319107111);
coraReturn(co, x4319107143);
return;
}
case 2:
{
Obj x4319106375= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = x4319106375;
R[1] = body;
R[2] = args;
saveCont(co, clofun60, 1, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 3:
{
Obj x4319106215= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = x4319106215;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 2, R);
coraCall1(co, globalRef(__symbolTable[96]), nargs);
return;
}
case 4:
{
Obj x4319106055= co->res;
Obj exp = R[1];
Obj body = x4319106055;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(__symbolTable[97]), body);
return;
}
case 5:
{
Obj x4319106023= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 4, R);
coraCall1(co, globalRef(__symbolTable[104]), x4319106023);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj x4319105191 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x4319105191) {
coraReturn(co, Nil);
return;
} else {
Obj x4319105351 = primGenSym(co);
Obj x4319105511 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = x4319105351;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(__symbolTable[96]), x4319105511);
return;
}
}
case 1:
{
Obj x4319105543= co->res;
Obj x4319105351 = R[1];
Obj x4319105575 = makeCons(co->gc, x4319105351, x4319105543);
coraReturn(co, x4319105575);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rules = R[1];
saveCont(co, clofun58, 4, R);
coraCall2(co, globalRef(__symbolTable[103]), Nil, rules);
return;
}
case 1:
{
Obj x4319125191= co->res;
Obj n = R[1];
Obj x4319125223 = primNot(x4319125191);
if (True == x4319125223) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "inconsistent func rule args count"));
return;
} else {
coraReturn(co, n);
return;
}
}
case 2:
{
Obj x4319125159= co->res;
Obj n = R[1];
R[1] = n;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(__symbolTable[161]), x4319125159);
return;
}
case 3:
{
Obj x4319124359= co->res;
Obj counts = x4319124359;
Obj x4319124519 = PRIM_CAR(counts);
Obj n = x4319124519;
Obj x4319125127 = PRIM_CDR(counts);
R[1] = n;
saveCont(co, clofun58, 2, R);
coraCall2(co, globalRef(__symbolTable[99]), makeNative(co->gc, 2, clofun57, 1, 1, n), x4319125127);
return;
}
case 4:
{
Obj x4319123975= co->res;
Obj pats = x4319123975;
saveCont(co, clofun58, 3, R);
coraCall2(co, globalRef(__symbolTable[147]), makeNative(co->gc, 2, clofun56, 1, 0), pats);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319124999 = PRIM_EQ(closureRef(R[0], 0), x);
Obj x4319125031 = primNot(x4319124999);
coraReturn(co, x4319125031);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319124327 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), x4319124327);
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
Obj x4319123207 = PRIM_EQ(l1, Nil);
if (True == x4319123207) {
coraReturn(co, l2);
return;
} else {
Obj x4319123367 = PRIM_CAR(l1);
Obj x4319123527 = PRIM_CDR(l1);
R[1] = x4319123367;
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(__symbolTable[98]), x4319123527, l2);
return;
}
}
case 1:
{
Obj x4319123559= co->res;
Obj x4319123367 = R[1];
Obj x4319123591 = makeCons(co->gc, x4319123367, x4319123559);
coraReturn(co, x4319123591);
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
Obj x4319137639 = PRIM_ISCONS(l);
if (True == x4319137639) {
Obj x4319121511 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
saveCont(co, clofun53, 1, R);
coraCall1(co, fn, x4319121511);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj x4319121543= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == x4319121543) {
Obj x4319121927 = PRIM_CAR(l);
Obj x4319121959 = makeCons(co->gc, x4319121927, res);
Obj x4319122055 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), x4319121959, fn, x4319122055);
return;
} else {
Obj x4319122471 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), res, fn, x4319122471);
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
Obj x4319136455 = PRIM_EQ(l, Nil);
if (True == x4319136455) {
coraReturn(co, i);
return;
} else {
Obj x4319136679 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x4319136775 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), x4319136679, x4319136775);
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
saveCont(co, clofun50, 2, R);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj x4319135879= co->res;
Obj x4319135783 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[103]), x4319135783, x4319135879);
return;
}
case 2:
{
Obj x4319135367= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == x4319135367) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
} else {
Obj x4319135751 = PRIM_CAR(rules);
Obj x4319135783 = makeCons(co->gc, x4319135751, res);
R[1] = x4319135783;
saveCont(co, clofun50, 1, R);
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
Obj x4319256007 = PRIM_EQ(Nil, input);
if (True == x4319256007) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), result);
return;
} else {
Obj x4318377543 = makeNative(co->gc, 3, clofun47, 0, 3, input, current, result);
Obj x4319247751 = PRIM_ISCONS(input);
if (True == x4319247751) {
Obj x4319248039 = PRIM_CAR(input);
Obj x4319248071 = PRIM_EQ(__symbolTable[105], x4319248039);
if (True == x4319248071) {
Obj x4319248327 = PRIM_CDR(input);
Obj x4319248359 = PRIM_ISCONS(x4319248327);
if (True == x4319248359) {
Obj x4319187175 = PRIM_CDR(input);
Obj x4319187207 = PRIM_CAR(x4319187175);
Obj act = x4319187207;
Obj x4319187751 = PRIM_CDR(input);
Obj x4319187783 = PRIM_CDR(x4319187751);
Obj x4319187847 = PRIM_ISCONS(x4319187783);
if (True == x4319187847) {
Obj x4319188327 = PRIM_CDR(input);
Obj x4319188359 = PRIM_CDR(x4319188327);
Obj x4319188391 = PRIM_CAR(x4319188359);
Obj x4319188423 = PRIM_EQ(__symbolTable[110], x4319188391);
if (True == x4319188423) {
Obj x4319188871 = PRIM_CDR(input);
Obj x4319188903 = PRIM_CDR(x4319188871);
Obj x4319188935 = PRIM_CDR(x4319188903);
Obj x4319188967 = PRIM_ISCONS(x4319188935);
if (True == x4319188967) {
Obj x4319189415 = PRIM_CDR(input);
Obj x4319189479 = PRIM_CDR(x4319189415);
Obj x4319189511 = PRIM_CDR(x4319189479);
Obj x4319189543 = PRIM_CAR(x4319189511);
Obj pred = x4319189543;
Obj x4319190151 = PRIM_CDR(input);
Obj x4319190183 = PRIM_CDR(x4319190151);
Obj x4319190215 = PRIM_CDR(x4319190183);
Obj x4319190247 = PRIM_CDR(x4319190215);
Obj remain = x4319190247;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
saveCont(co, clofun48, 1, R);
coraCall1(co, globalRef(__symbolTable[149]), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4318377543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318377543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318377543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318377543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318377543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318377543);
return;
}
}
}
case 1:
{
Obj x4319190535= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj x4319190567 = makeCons(co->gc, __symbolTable[135], x4319190535);
Obj pat = x4319190567;
Obj x4319190983 = makeCons(co->gc, act, Nil);
Obj x4319133735 = makeCons(co->gc, pred, x4319190983);
Obj x4319133767 = makeCons(co->gc, __symbolTable[110], x4319133735);
Obj x4319133895 = makeCons(co->gc, pat, result);
Obj x4319133927 = makeCons(co->gc, x4319133767, x4319133895);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, x4319133927);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4318378439 = makeNative(co->gc, 1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319245287 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319245287) {
Obj x4319245575 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319245607 = PRIM_EQ(__symbolTable[105], x4319245575);
if (True == x4319245607) {
Obj x4319245863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319245959 = PRIM_ISCONS(x4319245863);
if (True == x4319245959) {
Obj x4319246215 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319246247 = PRIM_CAR(x4319246215);
Obj act = x4319246247;
Obj x4319246471 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319246503 = PRIM_CDR(x4319246471);
Obj remain = x4319246503;
R[1] = act;
R[2] = remain;
saveCont(co, clofun47, 1, R);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4318378439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318378439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4318378439);
return;
}
}
case 1:
{
Obj x4319246823= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj x4319246855 = makeCons(co->gc, __symbolTable[135], x4319246823);
Obj pat = x4319246855;
Obj x4319247335 = makeCons(co->gc, pat, closureRef(R[0], 2));
Obj x4319247367 = makeCons(co->gc, act, x4319247335);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, x4319247367);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319244327 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319244327) {
Obj x4319244487 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4319244487;
Obj x4319244711 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4319244711;
Obj x4319244903 = makeCons(co->gc, x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), y, x4319244903, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
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
saveCont(co, clofun44, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4319253415= co->res;
Obj value = R[1];
Obj rules = x4319253415;
Obj x4321726791 = makeNative(co->gc, 2, clofun43, 1, 2, value, rules);
Obj x4319254695 = PRIM_ISCONS(value);
if (True == x4319254695) {
Obj x4319255047 = PRIM_CAR(value);
Obj x4319255079 = PRIM_EQ(__symbolTable[152], x4319255047);
Obj x4319255143 = primNot(x4319255079);
if (True == x4319255143) {
co->ctx.sp = R;
coraCall1(co, x4321726791, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726791, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4321726791, False);
return;
}
}
case 2:
{
Obj x4319253191= co->res;
Obj exp = R[1];
Obj value = x4319253191;
R[1] = value;
saveCont(co, clofun44, 1, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x4319253159= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 2, R);
coraCall1(co, globalRef(__symbolTable[138]), x4319253159);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726823 = R[1];
if (True == x4321726823) {
Obj x4319253767 = primGenSym(co);
Obj val = x4319253767;
R[1] = val;
saveCont(co, clofun43, 1, R);
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
Obj x4319254279= co->res;
Obj val = R[1];
Obj x4319254311 = makeCons(co->gc, x4319254279, Nil);
Obj x4319254343 = makeCons(co->gc, closureRef(R[0], 0), x4319254311);
Obj x4319254375 = makeCons(co->gc, val, x4319254343);
Obj x4319254407 = makeCons(co->gc, __symbolTable[129], x4319254375);
coraReturn(co, x4319254407);
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
saveCont(co, clofun42, 3, R);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj x4319252615= co->res;
Obj x4321726727 = R[1];
if (True == x4319252615) {
co->ctx.sp = R;
coraCall1(co, x4321726727, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726727, False);
return;
}
}
case 2:
{
Obj x4319416071= co->res;
Obj rules = R[1];
Obj x4321726727 = R[2];
if (True == x4319416071) {
Obj x4319252551 = PRIM_CDR(rules);
R[1] = x4321726727;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(__symbolTable[151]), x4319252551);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726727, False);
return;
}
}
case 3:
{
Obj x4319412935= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == x4319412935) {
Obj x4319413095 = makeCons(co->gc, makeCString(co->gc, "no match-help found!"), Nil);
Obj x4319413127 = makeCons(co->gc, __symbolTable[127], x4319413095);
coraReturn(co, x4319413127);
return;
} else {
Obj x4321726727 = makeNative(co->gc, 3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = x4321726727;
saveCont(co, clofun42, 2, R);
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
Obj x4321726759 = R[1];
if (True == x4321726759) {
Obj x4319413607 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = x4319413607;
Obj x4319413799 = primGenSym(co);
Obj cc = x4319413799;
R[1] = pat;
R[2] = cc;
saveCont(co, clofun41, 4, R);
coraCall2(co, globalRef(__symbolTable[111]), closureRef(R[0], 1), cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no cond match"));
return;
}
}
case 1:
{
Obj x4319414855= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = x4319414855;
Obj x4319415431 = makeCons(co->gc, rest, Nil);
Obj x4319415463 = makeCons(co->gc, Nil, x4319415431);
Obj x4319415495 = makeCons(co->gc, __symbolTable[140], x4319415463);
Obj x4319415655 = makeCons(co->gc, curr, Nil);
Obj x4319415687 = makeCons(co->gc, x4319415495, x4319415655);
Obj x4319415719 = makeCons(co->gc, cc, x4319415687);
Obj x4319415751 = makeCons(co->gc, __symbolTable[129], x4319415719);
coraReturn(co, x4319415751);
return;
}
case 2:
{
Obj x4319414439= co->res;
Obj cc = R[1];
Obj curr = x4319414439;
Obj x4319414791 = PRIM_CDR(closureRef(R[0], 1));
Obj x4319414823 = PRIM_CDR(x4319414791);
R[1] = curr;
R[2] = cc;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), x4319414823);
return;
}
case 3:
{
Obj x4319414407= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
saveCont(co, clofun41, 2, R);
coraCall4(co, globalRef(__symbolTable[117]), x4319414407, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj x4319413991= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = x4319413991;
R[1] = action;
R[2] = cc;
saveCont(co, clofun41, 3, R);
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
Obj x4319529383 = PRIM_CDR(rules);
Obj x4319529415 = PRIM_CAR(x4319529383);
Obj action = x4319529415;
Obj x4321726663 = makeNative(co->gc, 2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = x4321726663;
saveCont(co, clofun40, 1, R);
coraCall1(co, globalRef(__symbolTable[151]), action);
return;
}
case 1:
{
Obj x4319530791= co->res;
Obj action = R[1];
Obj x4321726663 = R[2];
if (True == x4319530791) {
Obj x4319412359 = PRIM_CAR(action);
Obj x4319412391 = PRIM_EQ(x4319412359, __symbolTable[110]);
if (True == x4319412391) {
co->ctx.sp = R;
coraCall1(co, x4321726663, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726663, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4321726663, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726695 = R[1];
if (True == x4321726695) {
saveCont(co, clofun39, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 1));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x4319530183= co->res;
Obj x4319529927 = R[1];
Obj x4319530343 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj x4319530375 = makeCons(co->gc, x4319530343, Nil);
Obj x4319530407 = makeCons(co->gc, x4319530183, x4319530375);
Obj x4319530535 = makeCons(co->gc, x4319529927, x4319530407);
Obj x4319530567 = makeCons(co->gc, __symbolTable[126], x4319530535);
coraReturn(co, x4319530567);
return;
}
case 2:
{
Obj x4319529927= co->res;
R[1] = x4319529927;
saveCont(co, clofun39, 1, R);
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
saveCont(co, clofun38, 3, R);
coraCall1(co, makeNative(co->gc, 2, clofun37, 1, 0), pat);
return;
}
case 1:
{
Obj x4319528775= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), x4319528775);
return;
}
case 2:
{
Obj x4319527207= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x4319527207) {
Obj x4319527431 = PRIM_CAR(pat);
Obj x4319527463 = PRIM_EQ(x4319527431, __symbolTable[139]);
if (True == x4319527463) {
Obj x4319527815 = makeCons(co->gc, expr, Nil);
Obj x4319527847 = makeCons(co->gc, pat, x4319527815);
Obj x4319527879 = makeCons(co->gc, __symbolTable[113], x4319527847);
Obj x4319528103 = makeCons(co->gc, cc, Nil);
Obj x4319528135 = makeCons(co->gc, x4319528103, Nil);
Obj x4319528167 = makeCons(co->gc, body, x4319528135);
Obj x4319528199 = makeCons(co->gc, x4319527879, x4319528167);
Obj x4319528231 = makeCons(co->gc, __symbolTable[126], x4319528199);
coraReturn(co, x4319528231);
return;
} else {
Obj x4319528455 = PRIM_CAR(pat);
Obj x4319528487 = PRIM_EQ(x4319528455, __symbolTable[152]);
if (True == x4319528487) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[118]), pat, expr, body, cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no cond match"));
return;
}
}
} else {
saveCont(co, clofun38, 1, R);
coraCall2(co, globalRef(__symbolTable[112]), makeCString(co->gc, "match fail "), pat);
return;
}
}
case 3:
{
Obj x4320459303= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x4320459303) {
Obj x4320459463 = PRIM_EQ(pat, expr);
if (True == x4320459463) {
coraReturn(co, body);
return;
} else {
Obj x4320459815 = makeCons(co->gc, expr, Nil);
Obj x4320459975 = makeCons(co->gc, pat, x4320459815);
Obj x4320460007 = makeCons(co->gc, __symbolTable[113], x4320459975);
Obj x4320460231 = makeCons(co->gc, cc, Nil);
Obj x4320460263 = makeCons(co->gc, x4320460231, Nil);
Obj x4320460295 = makeCons(co->gc, body, x4320460263);
Obj x4320460327 = makeCons(co->gc, x4320460007, x4320460295);
Obj x4320460359 = makeCons(co->gc, __symbolTable[126], x4320460327);
coraReturn(co, x4320460359);
return;
}
} else {
Obj x4320460519 = primIsSymbol(pat);
if (True == x4320460519) {
Obj x4319526951 = makeCons(co->gc, body, Nil);
Obj x4319526983 = makeCons(co->gc, expr, x4319526951);
Obj x4319527015 = makeCons(co->gc, pat, x4319526983);
Obj x4319527047 = makeCons(co->gc, __symbolTable[129], x4319527015);
coraReturn(co, x4319527047);
return;
} else {
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
saveCont(co, clofun38, 2, R);
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
saveCont(co, clofun37, 1, R);
coraCall1(co, globalRef(__symbolTable[131]), x);
return;
}
case 1:
{
Obj x4320459015= co->res;
Obj x = R[1];
if (True == x4320459015) {
Obj x4320459239 = primIsSymbol(x);
Obj x4320459271 = primNot(x4320459239);
if (True == x4320459271) {
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
saveCont(co, clofun36, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), pat);
return;
}
case 1:
{
Obj x4321729543= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = x4321729543;
Obj x4321726567 = makeNative(co->gc, 3, clofun35, 1, 5, x, y, expr, body, cc);
Obj x4320458055 = PRIM_ISCONS(expr);
if (True == x4320458055) {
Obj x4320458279 = PRIM_CAR(expr);
Obj x4320458311 = PRIM_EQ(x4320458279, __symbolTable[152]);
if (True == x4320458311) {
co->ctx.sp = R;
coraCall1(co, x4321726567, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726567, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4321726567, False);
return;
}
}
case 2:
{
Obj x4321729383= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = x4321729383;
R[1] = x;
R[2] = body;
R[3] = cc;
R[4] = expr;
saveCont(co, clofun36, 1, R);
coraCall1(co, globalRef(__symbolTable[156]), pat);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726631 = R[1];
if (True == x4321726631) {
saveCont(co, clofun35, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 2));
return;
} else {
Obj x4320456743 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj x4320456775 = makeCons(co->gc, __symbolTable[116], x4320456743);
Obj x4320457063 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj x4320457095 = makeCons(co->gc, __symbolTable[115], x4320457063);
Obj x4320457415 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj x4320457447 = makeCons(co->gc, __symbolTable[114], x4320457415);
R[1] = x4320457095;
R[2] = x4320456775;
saveCont(co, clofun35, 5, R);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), x4320457447, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj x4321730279= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), e1, x4321730279, closureRef(R[0], 4));
return;
}
case 2:
{
Obj x4321730119= co->res;
Obj e1 = R[1];
Obj e2 = x4321730119;
R[1] = e1;
saveCont(co, clofun35, 1, R);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4321729927= co->res;
Obj e1 = x4321729927;
R[1] = e1;
saveCont(co, clofun35, 2, R);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 2));
return;
}
case 4:
{
Obj x4320457511= co->res;
Obj x4320456775 = R[1];
Obj x4320457671 = makeCons(co->gc, closureRef(R[0], 4), Nil);
Obj x4320457703 = makeCons(co->gc, x4320457671, Nil);
Obj x4320457767 = makeCons(co->gc, x4320457511, x4320457703);
Obj x4320457799 = makeCons(co->gc, x4320456775, x4320457767);
Obj x4320457831 = makeCons(co->gc, __symbolTable[126], x4320457799);
coraReturn(co, x4320457831);
return;
}
case 5:
{
Obj x4320457479= co->res;
Obj x4320457095 = R[1];
Obj x4320456775 = R[2];
R[1] = x4320456775;
saveCont(co, clofun35, 4, R);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), x4320457095, x4320457479, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4321728839 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[120]), x4321728839);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj x4321727623 = PRIM_CDR(pat);
R[1] = pat;
saveCont(co, clofun33, 2, R);
coraCall1(co, globalRef(__symbolTable[161]), x4321727623);
return;
}
case 1:
{
Obj x4321728327= co->res;
Obj x4321728071 = R[1];
Obj x4321728359 = makeCons(co->gc, x4321728327, Nil);
Obj x4321728391 = makeCons(co->gc, x4321728071, x4321728359);
Obj x4321728423 = makeCons(co->gc, __symbolTable[152], x4321728391);
coraReturn(co, x4321728423);
return;
}
case 2:
{
Obj x4321727687= co->res;
Obj pat = R[1];
if (True == x4321727687) {
Obj x4321727783 = PRIM_CAR(pat);
coraReturn(co, x4321727783);
return;
} else {
Obj x4321728071 = PRIM_CAR(pat);
Obj x4321728295 = PRIM_CDR(pat);
R[1] = x4321728071;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(__symbolTable[120]), x4321728295);
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
Obj x4321727015 = PRIM_EQ(x, True);
if (True == x4321727015) {
coraReturn(co, True);
return;
} else {
Obj x4321727175 = PRIM_EQ(x, False);
if (True == x4321727175) {
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
Obj x4319122087 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[123]), x4319122087);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x4319136935 = PRIM_EQ(Nil, l);
if (True == x4319136935) {
coraReturn(co, True);
return;
} else {
Obj x4319137159 = PRIM_CAR(l);
Obj x4319137191 = PRIM_EQ(x4319137159, False);
if (True == x4319137191) {
coraReturn(co, False);
return;
} else {
Obj x4319137415 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun30, 1, R);
coraCall1(co, globalRef(__symbolTable[123]), x4319137415);
return;
}
}
}
case 1:
{
Obj x4319137447= co->res;
Obj l = R[1];
Obj more = x4319137447;
Obj x4319137607 = PRIM_EQ(more, False);
if (True == x4319137607) {
coraReturn(co, False);
return;
} else {
Obj x4319121447 = PRIM_CAR(l);
Obj x4319121607 = makeCons(co->gc, False, Nil);
Obj x4319121639 = makeCons(co->gc, more, x4319121607);
Obj x4319121671 = makeCons(co->gc, x4319121447, x4319121639);
Obj x4319121703 = makeCons(co->gc, __symbolTable[126], x4319121671);
coraReturn(co, x4319121703);
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
Obj x4319136551 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[125]), x4319136551);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x4319135015 = PRIM_EQ(l, Nil);
if (True == x4319135015) {
coraReturn(co, False);
return;
} else {
Obj x4319135239 = PRIM_CAR(l);
Obj x4319135271 = PRIM_EQ(x4319135239, True);
if (True == x4319135271) {
coraReturn(co, True);
return;
} else {
Obj x4319135495 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun28, 1, R);
coraCall1(co, globalRef(__symbolTable[125]), x4319135495);
return;
}
}
}
case 1:
{
Obj x4319135527= co->res;
Obj l = R[1];
Obj more = x4319135527;
Obj x4319135687 = PRIM_EQ(more, True);
if (True == x4319135687) {
coraReturn(co, True);
return;
} else {
Obj x4319135911 = PRIM_CAR(l);
Obj x4319136071 = makeCons(co->gc, more, Nil);
Obj x4319136103 = makeCons(co->gc, True, x4319136071);
Obj x4319136135 = makeCons(co->gc, x4319135911, x4319136103);
Obj x4319136167 = makeCons(co->gc, __symbolTable[126], x4319136135);
coraReturn(co, x4319136167);
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
Obj x4319190823 = PRIM_CDR(exp);
Obj x4319190855 = PRIM_EQ(Nil, x4319190823);
if (True == x4319190855) {
Obj x4319191015 = makeCons(co->gc, makeCString(co->gc, "no cond match"), Nil);
Obj x4319133703 = makeCons(co->gc, __symbolTable[127], x4319191015);
coraReturn(co, x4319133703);
return;
} else {
R[1] = exp;
saveCont(co, clofun27, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
case 1:
{
Obj x4319134471= co->res;
Obj x4319134247 = R[1];
Obj x4319134087 = R[2];
Obj x4319134503 = makeCons(co->gc, __symbolTable[128], x4319134471);
Obj x4319134535 = makeCons(co->gc, x4319134503, Nil);
Obj x4319134567 = makeCons(co->gc, x4319134247, x4319134535);
Obj x4319134599 = makeCons(co->gc, x4319134087, x4319134567);
Obj x4319134631 = makeCons(co->gc, __symbolTable[126], x4319134599);
coraReturn(co, x4319134631);
return;
}
case 2:
{
Obj x4319134247= co->res;
Obj exp = R[1];
Obj x4319134087 = R[2];
R[1] = x4319134247;
R[2] = x4319134087;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x4319133863= co->res;
Obj exp = R[1];
Obj curr = x4319133863;
Obj x4319134087 = PRIM_CAR(curr);
R[1] = exp;
R[2] = x4319134087;
saveCont(co, clofun27, 2, R);
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
Obj x4319190375 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[130]), x4319190375);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4319189095 = PRIM_CDR(exp);
R[1] = exp;
saveCont(co, clofun25, 4, R);
coraCall1(co, globalRef(__symbolTable[161]), x4319189095);
return;
}
case 1:
{
Obj x4319189863= co->res;
Obj x4319189607 = R[1];
Obj x4319189447 = R[2];
Obj x4319189895 = makeCons(co->gc, x4319189863, Nil);
Obj x4319189927 = makeCons(co->gc, x4319189607, x4319189895);
Obj x4319189959 = makeCons(co->gc, x4319189447, x4319189927);
Obj x4319189991 = makeCons(co->gc, __symbolTable[129], x4319189959);
coraReturn(co, x4319189991);
return;
}
case 2:
{
Obj x4319189831= co->res;
Obj x4319189607 = R[1];
Obj x4319189447 = R[2];
R[1] = x4319189607;
R[2] = x4319189447;
saveCont(co, clofun25, 1, R);
coraCall1(co, globalRef(__symbolTable[130]), x4319189831);
return;
}
case 3:
{
Obj x4319189607= co->res;
Obj exp = R[1];
Obj x4319189447 = R[2];
R[1] = x4319189607;
R[2] = x4319189447;
saveCont(co, clofun25, 2, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 4:
{
Obj x4319189127= co->res;
Obj exp = R[1];
if (True == x4319189127) {
Obj x4319189223 = PRIM_CAR(exp);
coraReturn(co, x4319189223);
return;
} else {
Obj x4319189447 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x4319189447;
saveCont(co, clofun25, 3, R);
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
Obj x4319188615 = PRIM_ISCONS(x);
Obj x4319188647 = primNot(x4319188615);
coraReturn(co, x4319188647);
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
Obj x4319187815 = PRIM_ISCONS(l);
if (True == x4319187815) {
Obj x4319188039 = PRIM_CAR(l);
Obj x4319188071 = PRIM_EQ(x4319188039, x);
if (True == x4319188071) {
coraReturn(co, True);
return;
} else {
Obj x4319188231 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[132]), x, x4319188231);
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
saveCont(co, clofun22, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4319187239= co->res;
Obj x4319187079 = R[1];
Obj x4319248231 = R[2];
Obj x4319187271 = makeCons(co->gc, x4319187239, Nil);
Obj x4319187303 = makeCons(co->gc, x4319187079, x4319187271);
Obj x4319187335 = makeCons(co->gc, __symbolTable[140], x4319187303);
Obj x4319187367 = makeCons(co->gc, x4319187335, Nil);
Obj x4319187399 = makeCons(co->gc, x4319248231, x4319187367);
Obj x4319187431 = makeCons(co->gc, __symbolTable[133], x4319187399);
coraReturn(co, x4319187431);
return;
}
case 2:
{
Obj x4319187079= co->res;
Obj exp = R[1];
Obj x4319248231 = R[2];
R[1] = x4319187079;
R[2] = x4319248231;
saveCont(co, clofun22, 1, R);
coraCall1(co, globalRef(__symbolTable[155]), exp);
return;
}
case 3:
{
Obj x4319248231= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = x4319248231;
saveCont(co, clofun22, 2, R);
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
Obj x4319247783 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[153]), x4319247783);
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
saveCont(co, clofun20, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj x4319247079= co->res;
Obj x4319246983 = R[1];
Obj x4319246695 = R[2];
Obj x4319247111 = makeCons(co->gc, x4319246983, x4319247079);
Obj x4319247143 = makeCons(co->gc, __symbolTable[140], x4319247111);
Obj x4319247175 = makeCons(co->gc, x4319247143, Nil);
Obj x4319247207 = makeCons(co->gc, x4319246695, x4319247175);
Obj x4319247239 = makeCons(co->gc, __symbolTable[144], x4319247207);
coraReturn(co, x4319247239);
return;
}
case 2:
{
Obj x4319246983= co->res;
Obj exp = R[1];
Obj x4319246695 = R[2];
R[1] = x4319246983;
R[2] = x4319246695;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(__symbolTable[154]), exp);
return;
}
case 3:
{
Obj x4319246631= co->res;
Obj exp = R[1];
Obj x4319246663 = makeCons(co->gc, x4319246631, Nil);
Obj x4319246695 = makeCons(co->gc, __symbolTable[139], x4319246663);
R[1] = exp;
R[2] = x4319246695;
saveCont(co, clofun20, 2, R);
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
Obj x4319256231 = PRIM_ISCONS(exp);
if (True == x4319256231) {
Obj x4319256455 = PRIM_CAR(exp);
Obj x4319256487 = PRIM_EQ(x4319256455, globalRef(__symbolTable[145]));
if (True == x4319256487) {
Obj x4319244295 = PRIM_CDR(exp);
coraReturn(co, x4319244295);
return;
} else {
Obj x4319244519 = PRIM_CAR(exp);
Obj x4319244551 = PRIM_EQ(x4319244519, __symbolTable[140]);
if (True == x4319244551) {
R[1] = exp;
saveCont(co, clofun19, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
} else {
Obj x4319245351 = PRIM_CAR(exp);
Obj x4319245383 = PRIM_EQ(x4319245351, __symbolTable[139]);
if (True == x4319245383) {
coraReturn(co, exp);
return;
} else {
R[1] = exp;
saveCont(co, clofun19, 4, R);
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
Obj x4319245031= co->res;
Obj x4319244775 = R[1];
Obj x4319245063 = makeCons(co->gc, x4319245031, Nil);
Obj x4319245095 = makeCons(co->gc, x4319244775, x4319245063);
Obj x4319245127 = makeCons(co->gc, __symbolTable[140], x4319245095);
coraReturn(co, x4319245127);
return;
}
case 2:
{
Obj x4319244999= co->res;
Obj x4319244775 = R[1];
R[1] = x4319244775;
saveCont(co, clofun19, 1, R);
coraCall1(co, globalRef(__symbolTable[141]), x4319244999);
return;
}
case 3:
{
Obj x4319244775= co->res;
Obj exp = R[1];
R[1] = x4319244775;
saveCont(co, clofun19, 2, R);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
case 4:
{
Obj x4319245895= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun18, 1, 1, exp), x4319245895);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj x4319245671 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == x4319245671) {
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
Obj x4319254247 = PRIM_EQ(Nil, macros);
if (True == x4319254247) {
coraReturn(co, exp);
return;
} else {
Obj x4319255559 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun15, 1, 2, macros, exp), x4319255559);
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
Obj x4321726471 = makeNative(co->gc, 2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x4319255111 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4319255111) {
Obj x4319255335 = PRIM_CAR(closureRef(R[0], 1));
Obj x4319255431 = PRIM_CAR(item);
Obj x4319255463 = PRIM_EQ(x4319255335, x4319255431);
if (True == x4319255463) {
co->ctx.sp = R;
coraCall1(co, x4321726471, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726471, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x4321726471, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726535 = R[1];
if (True == x4321726535) {
Obj x4319254727 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, x4319254727, closureRef(R[0], 1));
return;
} else {
Obj x4319254887 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), closureRef(R[0], 1), x4319254887);
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
Obj x4319253799 = makeCons(co->gc, n, v);
Obj x4319253831 = makeCons(co->gc, x4319253799, globalRef(__symbolTable[146]));
Obj x4319253863 = primSet(co, __symbolTable[146], x4319253831);
coraReturn(co, x4319253863);
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
Obj x4319415975 = PRIM_ISCONS(l);
if (True == x4319415975) {
Obj x4319416263 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
saveCont(co, clofun11, 1, R);
coraCall1(co, f, x4319416263);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj x4319416295= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj x4319252487 = makeCons(co->gc, x4319416295, res);
Obj x4319252583 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), x4319252487, f, x4319252583);
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
Obj x4319414983 = PRIM_ISCONS(l);
if (True == x4319414983) {
Obj x4319415207 = PRIM_CAR(l);
Obj x4319415239 = makeCons(co->gc, x4319415207, res);
Obj x4319415335 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[150]), x4319415239, x4319415335);
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
Obj x4319414599 = PRIM_ISCONS(x);
coraReturn(co, x4319414599);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x4319413703 = PRIM_ISCONS(exp);
if (True == x4319413703) {
Obj x4319413927 = PRIM_CAR(exp);
Obj x4319414151 = PRIM_CDR(exp);
R[1] = x4319413927;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(__symbolTable[153]), x4319414151);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj x4319414183= co->res;
Obj x4319413927 = R[1];
Obj x4319414215 = makeCons(co->gc, x4319414183, Nil);
Obj x4319414247 = makeCons(co->gc, x4319413927, x4319414215);
Obj x4319414279 = makeCons(co->gc, __symbolTable[152], x4319414247);
coraReturn(co, x4319414279);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319413255 = PRIM_CDR(x);
Obj x4319413287 = PRIM_CDR(x4319413255);
Obj x4319413319 = PRIM_CDR(x4319413287);
coraReturn(co, x4319413319);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319412711 = PRIM_CDR(x);
Obj x4319412743 = PRIM_CDR(x4319412711);
Obj x4319412775 = PRIM_CDR(x4319412743);
Obj x4319412807 = PRIM_CAR(x4319412775);
coraReturn(co, x4319412807);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319530919 = PRIM_CDR(x);
Obj x4319530951 = PRIM_CDR(x4319530919);
Obj x4319530983 = PRIM_CAR(x4319530951);
coraReturn(co, x4319530983);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319530439 = PRIM_CDR(x);
Obj x4319530471 = PRIM_CDR(x4319530439);
coraReturn(co, x4319530471);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319530023 = PRIM_CAR(x);
Obj x4319530055 = PRIM_CDR(x4319530023);
coraReturn(co, x4319530055);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319529607 = PRIM_CAR(x);
Obj x4319529639 = PRIM_CAR(x4319529607);
coraReturn(co, x4319529639);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319529191 = PRIM_CDR(x);
Obj x4319529223 = PRIM_CAR(x4319529191);
coraReturn(co, x4319529223);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319528807 = PRIM_EQ(x, Nil);
coraReturn(co, x4319528807);
return;
}
}
}

