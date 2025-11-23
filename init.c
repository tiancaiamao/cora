#include "types.h"
#include "runtime.h"

static int packageID = -1;
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


void entry(struct Cora *co, int label, Obj *R) {
if (packageID == -1) { packageID = packageIDAlloc(); }
Binding* __symbolTable = (Binding*)malloc(sizeof(Binding) * 162);

__symbolTable[0] = bindSymbol(co, intern("cora/init#assq"));
__symbolTable[1] = bindSymbol(co, intern("cora/init#append"));
__symbolTable[2] = bindSymbol(co, intern("cora/init#filter"));
__symbolTable[3] = bindSymbol(co, intern("cora/init#length"));
__symbolTable[4] = bindSymbol(co, intern("cora/init#elem?"));
__symbolTable[5] = bindSymbol(co, intern("cora/init#macroexpand"));
__symbolTable[6] = bindSymbol(co, intern("cora/init#map"));
__symbolTable[7] = bindSymbol(co, intern("cora/init#reverse"));
__symbolTable[8] = bindSymbol(co, intern("cora/init#throw"));
__symbolTable[9] = bindSymbol(co, intern("cora/init#try"));
__symbolTable[10] = bindSymbol(co, intern("cora/init#import"));
__symbolTable[11] = bindSymbol(co, intern("cora/init#load-so"));
__symbolTable[12] = bindSymbol(co, intern("cora/init#load"));
__symbolTable[13] = bindSymbol(co, intern("cora/init#apply"));
__symbolTable[14] = bindSymbol(co, intern("cora/init#read-file-as-sexp"));
__symbolTable[15] = bindSymbol(co, intern("cora/init#value-or"));
__symbolTable[16] = bindSymbol(co, intern("cora/init#value"));
__symbolTable[17] = bindSymbol(co, intern("cora/init#bytes-length"));
__symbolTable[18] = bindSymbol(co, intern("cora/init#bytes"));
__symbolTable[19] = bindSymbol(co, intern("cora/init#vector-length"));
__symbolTable[20] = bindSymbol(co, intern("cora/init#vector-ref"));
__symbolTable[21] = bindSymbol(co, intern("cora/init#vector-set!"));
__symbolTable[22] = bindSymbol(co, intern("cora/init#vector?"));
__symbolTable[23] = bindSymbol(co, intern("cora/init#vector"));
__symbolTable[24] = bindSymbol(co, intern("cora/init#symbol->string"));
__symbolTable[25] = bindSymbol(co, intern("cora/init#intern"));
__symbolTable[26] = bindSymbol(co, intern("cora/init#string-append"));
__symbolTable[27] = bindSymbol(co, intern("cora/init#number?"));
__symbolTable[28] = bindSymbol(co, intern("cora/init#null?"));
__symbolTable[29] = bindSymbol(co, intern("cora/init#boolean?"));
__symbolTable[30] = bindSymbol(co, intern("cora/init#atom?"));
__symbolTable[31] = bindSymbol(co, intern("cora/init#pair?"));
__symbolTable[32] = bindSymbol(co, intern("cora/init#cdddr"));
__symbolTable[33] = bindSymbol(co, intern("cora/init#cadddr"));
__symbolTable[34] = bindSymbol(co, intern("cora/init#caddr"));
__symbolTable[35] = bindSymbol(co, intern("cora/init#cddr"));
__symbolTable[36] = bindSymbol(co, intern("cora/init#cdar"));
__symbolTable[37] = bindSymbol(co, intern("cora/init#caar"));
__symbolTable[38] = bindSymbol(co, intern("cora/init#cadr"));
__symbolTable[39] = bindSymbol(co, intern("throw"));
__symbolTable[40] = bindSymbol(co, intern("try"));
__symbolTable[41] = bindSymbol(co, intern("load"));
__symbolTable[42] = bindSymbol(co, intern("load-so"));
__symbolTable[43] = bindSymbol(co, intern("apply"));
__symbolTable[44] = bindSymbol(co, intern("value"));
__symbolTable[45] = bindSymbol(co, intern("read-file-as-sexp"));
__symbolTable[46] = bindSymbol(co, intern("bytes-length"));
__symbolTable[47] = bindSymbol(co, intern("bytes"));
__symbolTable[48] = bindSymbol(co, intern("vector-length"));
__symbolTable[49] = bindSymbol(co, intern("vector-ref"));
__symbolTable[50] = bindSymbol(co, intern("vector-set!"));
__symbolTable[51] = bindSymbol(co, intern("vector?"));
__symbolTable[52] = bindSymbol(co, intern("vector"));
__symbolTable[53] = bindSymbol(co, intern("cora/init#*ns-export*"));
__symbolTable[54] = bindSymbol(co, intern("number?"));
__symbolTable[55] = bindSymbol(co, intern("cora/init#builtin?"));
__symbolTable[56] = bindSymbol(co, intern("assq"));
__symbolTable[57] = bindSymbol(co, intern("string?"));
__symbolTable[58] = bindSymbol(co, intern("integer?"));
__symbolTable[59] = bindSymbol(co, intern("not"));
__symbolTable[60] = bindSymbol(co, intern("symbol?"));
__symbolTable[61] = bindSymbol(co, intern("gensym"));
__symbolTable[62] = bindSymbol(co, intern("<"));
__symbolTable[63] = bindSymbol(co, intern(">"));
__symbolTable[64] = bindSymbol(co, intern("/"));
__symbolTable[65] = bindSymbol(co, intern("*"));
__symbolTable[66] = bindSymbol(co, intern("-"));
__symbolTable[67] = bindSymbol(co, intern("+"));
__symbolTable[68] = bindSymbol(co, intern("set"));
__symbolTable[69] = bindSymbol(co, intern("cora/init#*builtin-prims*"));
__symbolTable[70] = bindSymbol(co, intern("value-or"));
__symbolTable[71] = bindSymbol(co, intern("cora/init#lookup-var"));
__symbolTable[72] = bindSymbol(co, intern("symbol->string"));
__symbolTable[73] = bindSymbol(co, intern("string-append"));
__symbolTable[74] = bindSymbol(co, intern("intern"));
__symbolTable[75] = bindSymbol(co, intern("symbol-cooked?"));
__symbolTable[76] = bindSymbol(co, intern("cora/init#var-with-ns"));
__symbolTable[77] = bindSymbol(co, intern("*ns-export*"));
__symbolTable[78] = bindSymbol(co, intern("ns"));
__symbolTable[79] = bindSymbol(co, intern("package"));
__symbolTable[80] = bindSymbol(co, intern("cora/init#parse-package"));
__symbolTable[81] = bindSymbol(co, intern("import"));
__symbolTable[82] = bindSymbol(co, intern("export"));
__symbolTable[83] = bindSymbol(co, intern("cora/init#parse-package-h"));
__symbolTable[84] = bindSymbol(co, intern("fold-apply"));
__symbolTable[85] = bindSymbol(co, intern("cora/init#rewrite-fold-apply"));
__symbolTable[86] = bindSymbol(co, intern("backquote"));
__symbolTable[87] = bindSymbol(co, intern("unquote"));
__symbolTable[88] = bindSymbol(co, intern("cora/init#rewrite-backquote"));
__symbolTable[89] = bindSymbol(co, intern("begin"));
__symbolTable[90] = bindSymbol(co, intern("do"));
__symbolTable[91] = bindSymbol(co, intern("cora/init#rewrite-begin"));
__symbolTable[92] = bindSymbol(co, intern("cora/init#peval"));
__symbolTable[93] = bindSymbol(co, intern("cora/init#parse"));
__symbolTable[94] = bindSymbol(co, intern("cora/init#rewrite-namespace"));
__symbolTable[95] = bindSymbol(co, intern("func"));
__symbolTable[96] = bindSymbol(co, intern("cora/init#gen-paramenters"));
__symbolTable[97] = bindSymbol(co, intern("cora/init#rules-arg-count"));
__symbolTable[98] = bindSymbol(co, intern("append"));
__symbolTable[99] = bindSymbol(co, intern("filter"));
__symbolTable[100] = bindSymbol(co, intern("cora/init#filter-h"));
__symbolTable[101] = bindSymbol(co, intern("length"));
__symbolTable[102] = bindSymbol(co, intern("cora/init#length-h"));
__symbolTable[103] = bindSymbol(co, intern("cora/init#rules-patterns"));
__symbolTable[104] = bindSymbol(co, intern("cora/init#extract-rules"));
__symbolTable[105] = bindSymbol(co, intern("=>"));
__symbolTable[106] = bindSymbol(co, intern("cora/init#extract-rules1"));
__symbolTable[107] = bindSymbol(co, intern("match"));
__symbolTable[108] = bindSymbol(co, intern("cora/init#rewrite-match"));
__symbolTable[109] = bindSymbol(co, intern("cora/init#match-helper"));
__symbolTable[110] = bindSymbol(co, intern("where"));
__symbolTable[111] = bindSymbol(co, intern("cora/init#extract-rule-action"));
__symbolTable[112] = bindSymbol(co, intern("str"));
__symbolTable[113] = bindSymbol(co, intern("="));
__symbolTable[114] = bindSymbol(co, intern("cdr"));
__symbolTable[115] = bindSymbol(co, intern("car"));
__symbolTable[116] = bindSymbol(co, intern("cons?"));
__symbolTable[117] = bindSymbol(co, intern("cora/init#match1"));
__symbolTable[118] = bindSymbol(co, intern("cora/init#match-cons-expander"));
__symbolTable[119] = bindSymbol(co, intern("list-rest"));
__symbolTable[120] = bindSymbol(co, intern("cora/init#rcons1"));
__symbolTable[121] = bindSymbol(co, intern("boolean?"));
__symbolTable[122] = bindSymbol(co, intern("and"));
__symbolTable[123] = bindSymbol(co, intern("cora/init#rewrite-and"));
__symbolTable[124] = bindSymbol(co, intern("or"));
__symbolTable[125] = bindSymbol(co, intern("cora/init#rewrite-or"));
__symbolTable[126] = bindSymbol(co, intern("if"));
__symbolTable[127] = bindSymbol(co, intern("error"));
__symbolTable[128] = bindSymbol(co, intern("cond"));
__symbolTable[129] = bindSymbol(co, intern("let"));
__symbolTable[130] = bindSymbol(co, intern("cora/init#rewrite-let"));
__symbolTable[131] = bindSymbol(co, intern("atom?"));
__symbolTable[132] = bindSymbol(co, intern("elem?"));
__symbolTable[133] = bindSymbol(co, intern("def"));
__symbolTable[134] = bindSymbol(co, intern("defun"));
__symbolTable[135] = bindSymbol(co, intern("list"));
__symbolTable[136] = bindSymbol(co, intern("defmacro"));
__symbolTable[137] = bindSymbol(co, intern("defmacro-macro"));
__symbolTable[138] = bindSymbol(co, intern("macroexpand"));
__symbolTable[139] = bindSymbol(co, intern("quote"));
__symbolTable[140] = bindSymbol(co, intern("lambda"));
__symbolTable[141] = bindSymbol(co, intern("cora/init#macroexpand-boot"));
__symbolTable[142] = bindSymbol(co, intern("cora/init#macroexpand1"));
__symbolTable[143] = bindSymbol(co, intern("cora/init#macroexpand1-h"));
__symbolTable[144] = bindSymbol(co, intern("cora/init#add-to-*macros*"));
__symbolTable[145] = bindSymbol(co, intern("*protect-symbol*"));
__symbolTable[146] = bindSymbol(co, intern("*macros*"));
__symbolTable[147] = bindSymbol(co, intern("map"));
__symbolTable[148] = bindSymbol(co, intern("map-h"));
__symbolTable[149] = bindSymbol(co, intern("reverse"));
__symbolTable[150] = bindSymbol(co, intern("cora/init#reverse-h"));
__symbolTable[151] = bindSymbol(co, intern("pair?"));
__symbolTable[152] = bindSymbol(co, intern("cons"));
__symbolTable[153] = bindSymbol(co, intern("rcons"));
__symbolTable[154] = bindSymbol(co, intern("cdddr"));
__symbolTable[155] = bindSymbol(co, intern("cadddr"));
__symbolTable[156] = bindSymbol(co, intern("caddr"));
__symbolTable[157] = bindSymbol(co, intern("cddr"));
__symbolTable[158] = bindSymbol(co, intern("cdar"));
__symbolTable[159] = bindSymbol(co, intern("caar"));
__symbolTable[160] = bindSymbol(co, intern("cadr"));
__symbolTable[161] = bindSymbol(co, intern("null?"));
addPackage(co, packageID, __symbolTable);
co->ctx.fn = clofun95;
co->ctx.label = 0;
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566221033280 = primSet(co, getBinding(co, packageID, 161).name, makeNative(co->gc, 2, clofun0, 1, 0));
Obj x9223090566220972256 = primSet(co, getBinding(co, packageID, 160).name, makeNative(co->gc, 2, clofun1, 1, 0));
Obj x9223090566220972672 = primSet(co, getBinding(co, packageID, 159).name, makeNative(co->gc, 2, clofun2, 1, 0));
Obj x9223090566220973088 = primSet(co, getBinding(co, packageID, 158).name, makeNative(co->gc, 2, clofun3, 1, 0));
Obj x9223090566220973504 = primSet(co, getBinding(co, packageID, 157).name, makeNative(co->gc, 2, clofun4, 1, 0));
Obj x9223090566223197248 = primSet(co, getBinding(co, packageID, 156).name, makeNative(co->gc, 2, clofun5, 1, 0));
Obj x9223090566223198016 = primSet(co, getBinding(co, packageID, 155).name, makeNative(co->gc, 2, clofun6, 1, 0));
Obj x9223090566223198592 = primSet(co, getBinding(co, packageID, 154).name, makeNative(co->gc, 2, clofun7, 1, 0));
Obj x9223090566223199936 = primSet(co, getBinding(co, packageID, 153).name, makeNative(co->gc, 2, clofun8, 1, 0));
Obj x9223090566221881408 = primSet(co, getBinding(co, packageID, 151).name, makeNative(co->gc, 2, clofun9, 1, 0));
Obj x9223090566221882144 = primSet(co, getBinding(co, packageID, 150).name, makeNative(co->gc, 3, clofun10, 2, 0));
saveCont(co, clofun95, 15, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 150)), Nil);
return;
}
case 1:
{
Obj x9223090566220510240= co->res;
Obj x9223090566220511136 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 3, clofun80, 2, 0));
Obj x9223090566220513056 = primSet(co, getBinding(co, packageID, 71).name, makeNative(co->gc, 5, clofun81, 3, 0));
Obj x9223090566220374208 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj x9223090566220374240 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220374208);
Obj x9223090566220374272 = makeCons(co->gc, getBinding(co, packageID, 68).name, x9223090566220374240);
Obj x9223090566220374560 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj x9223090566220374592 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566220374560);
Obj x9223090566220374624 = makeCons(co->gc, getBinding(co, packageID, 115).name, x9223090566220374592);
Obj x9223090566220374912 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj x9223090566220374944 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566220374912);
Obj x9223090566220374976 = makeCons(co->gc, getBinding(co, packageID, 114).name, x9223090566220374944);
Obj x9223090566220375264 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj x9223090566220375296 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220375264);
Obj x9223090566220375328 = makeCons(co->gc, getBinding(co, packageID, 152).name, x9223090566220375296);
Obj x9223090566220375616 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj x9223090566220375648 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566220375616);
Obj x9223090566220375680 = makeCons(co->gc, getBinding(co, packageID, 116).name, x9223090566220375648);
Obj x9223090566220375968 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj x9223090566220376000 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220375968);
Obj x9223090566220376032 = makeCons(co->gc, getBinding(co, packageID, 67).name, x9223090566220376000);
Obj x9223090566220376320 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj x9223090566220376352 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220376320);
Obj x9223090566220376384 = makeCons(co->gc, getBinding(co, packageID, 66).name, x9223090566220376352);
Obj x9223090566220376672 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj x9223090566220376704 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220376672);
Obj x9223090566220376736 = makeCons(co->gc, getBinding(co, packageID, 65).name, x9223090566220376704);
Obj x9223090566220377024 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj x9223090566220377056 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220377024);
Obj x9223090566220377088 = makeCons(co->gc, getBinding(co, packageID, 64).name, x9223090566220377056);
Obj x9223090566220377376 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj x9223090566220377408 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220377376);
Obj x9223090566220377440 = makeCons(co->gc, getBinding(co, packageID, 113).name, x9223090566220377408);
Obj x9223090566220377728 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj x9223090566220377760 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220377728);
Obj x9223090566220377792 = makeCons(co->gc, getBinding(co, packageID, 63).name, x9223090566220377760);
Obj x9223090566220378080 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj x9223090566220361728 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220378080);
Obj x9223090566220361760 = makeCons(co->gc, getBinding(co, packageID, 62).name, x9223090566220361728);
Obj x9223090566223197024 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj x9223090566223197056 = makeCons(co->gc, MAKE_NUMBER(0), x9223090566223197024);
Obj x9223090566223197088 = makeCons(co->gc, getBinding(co, packageID, 61).name, x9223090566223197056);
Obj x9223090566223197600 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj x9223090566223197632 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566223197600);
Obj x9223090566223197664 = makeCons(co->gc, getBinding(co, packageID, 60).name, x9223090566223197632);
Obj x9223090566223198336 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj x9223090566223198400 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566223198336);
Obj x9223090566223198432 = makeCons(co->gc, getBinding(co, packageID, 59).name, x9223090566223198400);
Obj x9223090566223199072 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj x9223090566223199104 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566223199072);
Obj x9223090566223199232 = makeCons(co->gc, getBinding(co, packageID, 58).name, x9223090566223199104);
Obj x9223090566223200000 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj x9223090566223200032 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566223200000);
Obj x9223090566223200064 = makeCons(co->gc, getBinding(co, packageID, 57).name, x9223090566223200032);
Obj x9223090566223200160 = makeCons(co->gc, x9223090566223200064, Nil);
Obj x9223090566221881344 = makeCons(co->gc, x9223090566223199232, x9223090566223200160);
Obj x9223090566221881440 = makeCons(co->gc, x9223090566223198432, x9223090566221881344);
Obj x9223090566221881472 = makeCons(co->gc, x9223090566223197664, x9223090566221881440);
Obj x9223090566221881504 = makeCons(co->gc, x9223090566223197088, x9223090566221881472);
Obj x9223090566221881536 = makeCons(co->gc, x9223090566220361760, x9223090566221881504);
Obj x9223090566221881632 = makeCons(co->gc, x9223090566220377792, x9223090566221881536);
Obj x9223090566221881664 = makeCons(co->gc, x9223090566220377440, x9223090566221881632);
Obj x9223090566221881696 = makeCons(co->gc, x9223090566220377088, x9223090566221881664);
Obj x9223090566221881728 = makeCons(co->gc, x9223090566220376736, x9223090566221881696);
Obj x9223090566221881792 = makeCons(co->gc, x9223090566220376384, x9223090566221881728);
Obj x9223090566221881824 = makeCons(co->gc, x9223090566220376032, x9223090566221881792);
Obj x9223090566221881920 = makeCons(co->gc, x9223090566220375680, x9223090566221881824);
Obj x9223090566221881952 = makeCons(co->gc, x9223090566220375328, x9223090566221881920);
Obj x9223090566221882048 = makeCons(co->gc, x9223090566220374976, x9223090566221881952);
Obj x9223090566221882080 = makeCons(co->gc, x9223090566220374624, x9223090566221882048);
Obj x9223090566221882176 = makeCons(co->gc, x9223090566220374272, x9223090566221882080);
Obj x9223090566221882208 = primSet(co, getBinding(co, packageID, 69).name, x9223090566221882176);
Obj x9223090566221182208 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 3, clofun83, 2, 0));
Obj x9223090566221183072 = primSet(co, getBinding(co, packageID, 55).name, makeNative(co->gc, 2, clofun84, 1, 0));
Obj x9223090566220376768 = primSet(co, getBinding(co, packageID, 93).name, makeNative(co->gc, 5, clofun94, 4, 0));
Obj x9223090566220363456 = makeCons(co->gc, getBinding(co, packageID, 98).name, Nil);
Obj x9223090566220363488 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566220363456);
Obj x9223090566220363520 = makeCons(co->gc, getBinding(co, packageID, 101).name, x9223090566220363488);
Obj x9223090566220363552 = makeCons(co->gc, getBinding(co, packageID, 132).name, x9223090566220363520);
Obj x9223090566220363584 = makeCons(co->gc, getBinding(co, packageID, 138).name, x9223090566220363552);
Obj x9223090566220363616 = makeCons(co->gc, getBinding(co, packageID, 147).name, x9223090566220363584);
Obj x9223090566220363648 = makeCons(co->gc, getBinding(co, packageID, 149).name, x9223090566220363616);
Obj x9223090566220363680 = makeCons(co->gc, getBinding(co, packageID, 39).name, x9223090566220363648);
Obj x9223090566220363712 = makeCons(co->gc, getBinding(co, packageID, 40).name, x9223090566220363680);
Obj x9223090566220363744 = makeCons(co->gc, getBinding(co, packageID, 41).name, x9223090566220363712);
Obj x9223090566220363776 = makeCons(co->gc, getBinding(co, packageID, 81).name, x9223090566220363744);
Obj x9223090566220363808 = makeCons(co->gc, getBinding(co, packageID, 42).name, x9223090566220363776);
Obj x9223090566220363840 = makeCons(co->gc, getBinding(co, packageID, 43).name, x9223090566220363808);
Obj x9223090566220363872 = makeCons(co->gc, getBinding(co, packageID, 70).name, x9223090566220363840);
Obj x9223090566220363904 = makeCons(co->gc, getBinding(co, packageID, 44).name, x9223090566220363872);
Obj x9223090566220363936 = makeCons(co->gc, getBinding(co, packageID, 45).name, x9223090566220363904);
Obj x9223090566220363968 = makeCons(co->gc, getBinding(co, packageID, 46).name, x9223090566220363936);
Obj x9223090566220364000 = makeCons(co->gc, getBinding(co, packageID, 47).name, x9223090566220363968);
Obj x9223090566220364032 = makeCons(co->gc, getBinding(co, packageID, 48).name, x9223090566220364000);
Obj x9223090566220364064 = makeCons(co->gc, getBinding(co, packageID, 49).name, x9223090566220364032);
Obj x9223090566220364096 = makeCons(co->gc, getBinding(co, packageID, 50).name, x9223090566220364064);
Obj x9223090566220364128 = makeCons(co->gc, getBinding(co, packageID, 51).name, x9223090566220364096);
Obj x9223090566220364160 = makeCons(co->gc, getBinding(co, packageID, 52).name, x9223090566220364128);
Obj x9223090566220364192 = makeCons(co->gc, getBinding(co, packageID, 72).name, x9223090566220364160);
Obj x9223090566220364224 = makeCons(co->gc, getBinding(co, packageID, 74).name, x9223090566220364192);
Obj x9223090566220364256 = makeCons(co->gc, getBinding(co, packageID, 73).name, x9223090566220364224);
Obj x9223090566220364288 = makeCons(co->gc, getBinding(co, packageID, 161).name, x9223090566220364256);
Obj x9223090566220364320 = makeCons(co->gc, getBinding(co, packageID, 54).name, x9223090566220364288);
Obj x9223090566220364352 = makeCons(co->gc, getBinding(co, packageID, 121).name, x9223090566220364320);
Obj x9223090566220364384 = makeCons(co->gc, getBinding(co, packageID, 131).name, x9223090566220364352);
Obj x9223090566220364416 = makeCons(co->gc, getBinding(co, packageID, 151).name, x9223090566220364384);
Obj x9223090566220364448 = makeCons(co->gc, getBinding(co, packageID, 154).name, x9223090566220364416);
Obj x9223090566220364480 = makeCons(co->gc, getBinding(co, packageID, 155).name, x9223090566220364448);
Obj x9223090566220364512 = makeCons(co->gc, getBinding(co, packageID, 156).name, x9223090566220364480);
Obj x9223090566220364544 = makeCons(co->gc, getBinding(co, packageID, 157).name, x9223090566220364512);
Obj x9223090566220364576 = makeCons(co->gc, getBinding(co, packageID, 158).name, x9223090566220364544);
Obj x9223090566220364608 = makeCons(co->gc, getBinding(co, packageID, 159).name, x9223090566220364576);
Obj x9223090566220364640 = makeCons(co->gc, getBinding(co, packageID, 160).name, x9223090566220364608);
Obj x9223090566220364672 = primSet(co, getBinding(co, packageID, 53).name, x9223090566220364640);
Obj x9223090566220364832 = primSet(co, getBinding(co, packageID, 38).name, globalRef(co, getBinding(co, packageID, 160)));
Obj x9223090566220364992 = primSet(co, getBinding(co, packageID, 37).name, globalRef(co, getBinding(co, packageID, 159)));
Obj x9223090566220365152 = primSet(co, getBinding(co, packageID, 36).name, globalRef(co, getBinding(co, packageID, 158)));
Obj x9223090566220365312 = primSet(co, getBinding(co, packageID, 35).name, globalRef(co, getBinding(co, packageID, 157)));
Obj x9223090566220365472 = primSet(co, getBinding(co, packageID, 34).name, globalRef(co, getBinding(co, packageID, 156)));
Obj x9223090566220365632 = primSet(co, getBinding(co, packageID, 33).name, globalRef(co, getBinding(co, packageID, 155)));
Obj x9223090566220365792 = primSet(co, getBinding(co, packageID, 32).name, globalRef(co, getBinding(co, packageID, 154)));
Obj x9223090566220345472 = primSet(co, getBinding(co, packageID, 31).name, globalRef(co, getBinding(co, packageID, 151)));
Obj x9223090566220345632 = primSet(co, getBinding(co, packageID, 30).name, globalRef(co, getBinding(co, packageID, 131)));
Obj x9223090566220345792 = primSet(co, getBinding(co, packageID, 29).name, globalRef(co, getBinding(co, packageID, 121)));
Obj x9223090566220345952 = primSet(co, getBinding(co, packageID, 28).name, globalRef(co, getBinding(co, packageID, 161)));
Obj x9223090566220346112 = primSet(co, getBinding(co, packageID, 27).name, globalRef(co, getBinding(co, packageID, 54)));
Obj x9223090566220346272 = primSet(co, getBinding(co, packageID, 26).name, globalRef(co, getBinding(co, packageID, 73)));
Obj x9223090566220346432 = primSet(co, getBinding(co, packageID, 25).name, globalRef(co, getBinding(co, packageID, 74)));
Obj x9223090566220346592 = primSet(co, getBinding(co, packageID, 24).name, globalRef(co, getBinding(co, packageID, 72)));
Obj x9223090566220346752 = primSet(co, getBinding(co, packageID, 23).name, globalRef(co, getBinding(co, packageID, 52)));
Obj x9223090566220346912 = primSet(co, getBinding(co, packageID, 22).name, globalRef(co, getBinding(co, packageID, 51)));
Obj x9223090566220347072 = primSet(co, getBinding(co, packageID, 21).name, globalRef(co, getBinding(co, packageID, 50)));
Obj x9223090566220347232 = primSet(co, getBinding(co, packageID, 20).name, globalRef(co, getBinding(co, packageID, 49)));
Obj x9223090566220347392 = primSet(co, getBinding(co, packageID, 19).name, globalRef(co, getBinding(co, packageID, 48)));
Obj x9223090566220347552 = primSet(co, getBinding(co, packageID, 18).name, globalRef(co, getBinding(co, packageID, 47)));
Obj x9223090566220347712 = primSet(co, getBinding(co, packageID, 17).name, globalRef(co, getBinding(co, packageID, 46)));
Obj x9223090566220347872 = primSet(co, getBinding(co, packageID, 16).name, globalRef(co, getBinding(co, packageID, 44)));
Obj x9223090566220348032 = primSet(co, getBinding(co, packageID, 15).name, globalRef(co, getBinding(co, packageID, 70)));
Obj x9223090566220348192 = primSet(co, getBinding(co, packageID, 14).name, globalRef(co, getBinding(co, packageID, 45)));
Obj x9223090566220348352 = primSet(co, getBinding(co, packageID, 13).name, globalRef(co, getBinding(co, packageID, 43)));
Obj x9223090566220348512 = primSet(co, getBinding(co, packageID, 12).name, globalRef(co, getBinding(co, packageID, 41)));
Obj x9223090566220348672 = primSet(co, getBinding(co, packageID, 11).name, globalRef(co, getBinding(co, packageID, 42)));
Obj x9223090566220348832 = primSet(co, getBinding(co, packageID, 10).name, globalRef(co, getBinding(co, packageID, 81)));
Obj x9223090566220348992 = primSet(co, getBinding(co, packageID, 9).name, globalRef(co, getBinding(co, packageID, 40)));
Obj x9223090566220349152 = primSet(co, getBinding(co, packageID, 8).name, globalRef(co, getBinding(co, packageID, 39)));
Obj x9223090566220349312 = primSet(co, getBinding(co, packageID, 7).name, globalRef(co, getBinding(co, packageID, 149)));
Obj x9223090566219431968 = primSet(co, getBinding(co, packageID, 6).name, globalRef(co, getBinding(co, packageID, 147)));
Obj x9223090566219432128 = primSet(co, getBinding(co, packageID, 5).name, globalRef(co, getBinding(co, packageID, 138)));
Obj x9223090566219432288 = primSet(co, getBinding(co, packageID, 4).name, globalRef(co, getBinding(co, packageID, 132)));
Obj x9223090566219432448 = primSet(co, getBinding(co, packageID, 3).name, globalRef(co, getBinding(co, packageID, 101)));
Obj x9223090566219432608 = primSet(co, getBinding(co, packageID, 2).name, globalRef(co, getBinding(co, packageID, 99)));
Obj x9223090566219432768 = primSet(co, getBinding(co, packageID, 1).name, globalRef(co, getBinding(co, packageID, 98)));
Obj x9223090566219432864 = primSet(co, getBinding(co, packageID, 0).name, globalRef(co, getBinding(co, packageID, 56)));
coraReturn(co, x9223090566219432864);
return;
}
case 2:
{
Obj x9223090566220741824= co->res;
Obj x9223090566220571328 = primSet(co, getBinding(co, packageID, 83).name, makeNative(co->gc, 5, clofun75, 4, 0));
Obj x9223090566220573472 = primSet(co, getBinding(co, packageID, 80).name, makeNative(co->gc, 3, clofun76, 2, 0));
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 79).name, makeNative(co->gc, 2, clofun79, 1, 0));
return;
}
case 3:
{
Obj x9223090566220739200= co->res;
Obj x9223090566220741216 = primSet(co, getBinding(co, packageID, 85).name, makeNative(co->gc, 3, clofun71, 2, 0));
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 84).name, makeNative(co->gc, 2, clofun72, 1, 0));
return;
}
case 4:
{
Obj x9223090566221033312= co->res;
Obj x9223090566220738752 = primSet(co, getBinding(co, packageID, 88).name, makeNative(co->gc, 2, clofun69, 1, 0));
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 86).name, makeNative(co->gc, 2, clofun70, 1, 0));
return;
}
case 5:
{
Obj x9223090566221042944= co->res;
Obj x9223090566221043328 = primSet(co, getBinding(co, packageID, 94).name, makeNative(co->gc, 2, clofun61, 1, 0));
Obj x9223090566221043584 = primSet(co, getBinding(co, packageID, 92).name, makeNative(co->gc, 2, clofun62, 1, 0));
Obj x9223090566221044288 = primSet(co, getBinding(co, packageID, 138).name, makeNative(co->gc, 2, clofun63, 1, 0));
Obj x9223090566221032864 = primSet(co, getBinding(co, packageID, 91).name, makeNative(co->gc, 2, clofun66, 1, 0));
saveCont(co, clofun95, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 89).name, makeNative(co->gc, 2, clofun67, 1, 0));
return;
}
case 6:
{
Obj x9223090566220626976= co->res;
Obj x9223090566221183360 = primSet(co, getBinding(co, packageID, 106).name, makeNative(co->gc, 5, clofun48, 3, 0));
Obj x9223090566221183872 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 2, clofun49, 1, 0));
Obj x9223090566221184800 = primSet(co, getBinding(co, packageID, 103).name, makeNative(co->gc, 3, clofun50, 2, 0));
Obj x9223090566221107968 = primSet(co, getBinding(co, packageID, 102).name, makeNative(co->gc, 3, clofun51, 2, 0));
Obj x9223090566221108288 = primSet(co, getBinding(co, packageID, 101).name, makeNative(co->gc, 2, clofun52, 1, 0));
Obj x9223090566221109920 = primSet(co, getBinding(co, packageID, 100).name, makeNative(co->gc, 4, clofun53, 3, 0));
Obj x9223090566221110272 = primSet(co, getBinding(co, packageID, 99).name, makeNative(co->gc, 3, clofun54, 2, 0));
Obj x9223090566221111264 = primSet(co, getBinding(co, packageID, 98).name, makeNative(co->gc, 3, clofun55, 2, 0));
Obj x9223090566221072576 = primSet(co, getBinding(co, packageID, 97).name, makeNative(co->gc, 2, clofun58, 1, 0));
Obj x9223090566221073632 = primSet(co, getBinding(co, packageID, 96).name, makeNative(co->gc, 2, clofun59, 1, 0));
saveCont(co, clofun95, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 95).name, makeNative(co->gc, 3, clofun60, 1, 0));
return;
}
case 7:
{
Obj x9223090566221029888= co->res;
Obj x9223090566221032832 = primSet(co, getBinding(co, packageID, 118).name, makeNative(co->gc, 5, clofun36, 4, 0));
Obj x9223090566220976032 = primSet(co, getBinding(co, packageID, 117).name, makeNative(co->gc, 5, clofun38, 4, 0));
Obj x9223090566220740288 = primSet(co, getBinding(co, packageID, 111).name, makeNative(co->gc, 3, clofun40, 2, 0));
Obj x9223090566220624576 = primSet(co, getBinding(co, packageID, 109).name, makeNative(co->gc, 3, clofun42, 2, 0));
Obj x9223090566220626688 = primSet(co, getBinding(co, packageID, 108).name, makeNative(co->gc, 2, clofun44, 1, 0));
saveCont(co, clofun95, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 107).name, makeNative(co->gc, 2, clofun45, 1, 0));
return;
}
case 8:
{
Obj x9223090566221044192= co->res;
Obj x9223090566221044736 = primSet(co, getBinding(co, packageID, 121).name, makeNative(co->gc, 2, clofun32, 1, 0));
Obj x9223090566221029504 = primSet(co, getBinding(co, packageID, 120).name, makeNative(co->gc, 2, clofun33, 1, 0));
saveCont(co, clofun95, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 119).name, makeNative(co->gc, 2, clofun34, 1, 0));
return;
}
case 9:
{
Obj x9223090566221042272= co->res;
Obj x9223090566221043808 = primSet(co, getBinding(co, packageID, 123).name, makeNative(co->gc, 2, clofun30, 1, 0));
saveCont(co, clofun95, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 122).name, makeNative(co->gc, 2, clofun31, 1, 0));
return;
}
case 10:
{
Obj x9223090566221073120= co->res;
Obj x9223090566221041888 = primSet(co, getBinding(co, packageID, 125).name, makeNative(co->gc, 2, clofun28, 1, 0));
saveCont(co, clofun95, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 124).name, makeNative(co->gc, 2, clofun29, 1, 0));
return;
}
case 11:
{
Obj x9223090566221071520= co->res;
saveCont(co, clofun95, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 128).name, makeNative(co->gc, 3, clofun27, 1, 0));
return;
}
case 12:
{
Obj x9223090566221109536= co->res;
Obj x9223090566221110336 = primSet(co, getBinding(co, packageID, 132).name, makeNative(co->gc, 3, clofun23, 2, 0));
Obj x9223090566221110752 = primSet(co, getBinding(co, packageID, 131).name, makeNative(co->gc, 2, clofun24, 1, 0));
Obj x9223090566221071136 = primSet(co, getBinding(co, packageID, 130).name, makeNative(co->gc, 3, clofun25, 1, 0));
saveCont(co, clofun95, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 129).name, makeNative(co->gc, 2, clofun26, 1, 0));
return;
}
case 13:
{
Obj x9223090566221108448= co->res;
saveCont(co, clofun95, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 134).name, makeNative(co->gc, 3, clofun22, 1, 0));
return;
}
case 14:
{
Obj x9223090566221108064= co->res;
saveCont(co, clofun95, 13, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 135).name, makeNative(co->gc, 2, clofun21, 1, 0));
return;
}
case 15:
{
Obj x9223090566221882400= co->res;
Obj x9223090566221882432 = primSet(co, getBinding(co, packageID, 149).name, x9223090566221882400);
Obj x9223090566221883360 = primSet(co, getBinding(co, packageID, 148).name, makeNative(co->gc, 4, clofun11, 3, 0));
Obj x9223090566221883648 = primSet(co, getBinding(co, packageID, 147).name, makeNative(co->gc, 3, clofun12, 2, 0));
Obj x9223090566221883808 = primSet(co, getBinding(co, packageID, 146).name, Nil);
Obj x9223090566221884032 = primGenSym(co);
Obj x9223090566221884064 = primSet(co, getBinding(co, packageID, 145).name, x9223090566221884032);
Obj x9223090566221884576 = primSet(co, getBinding(co, packageID, 144).name, makeNative(co->gc, 3, clofun13, 2, 0));
Obj x9223090566221181760 = primSet(co, getBinding(co, packageID, 143).name, makeNative(co->gc, 3, clofun16, 2, 0));
Obj x9223090566221182048 = primSet(co, getBinding(co, packageID, 142).name, makeNative(co->gc, 2, clofun17, 1, 0));
Obj x9223090566221184384 = primSet(co, getBinding(co, packageID, 141).name, makeNative(co->gc, 2, clofun19, 1, 0));
Obj x9223090566221184544 = primSet(co, getBinding(co, packageID, 138).name, globalRef(co, getBinding(co, packageID, 141)));
Obj x9223090566221107904 = primSet(co, getBinding(co, packageID, 137).name, makeNative(co->gc, 3, clofun20, 1, 0));
saveCont(co, clofun95, 14, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 136).name, globalRef(co, getBinding(co, packageID, 137)));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223199392 = R[1];
Obj x9223090566223199424 = R[2];
Obj x9223090566223199456 = R[3];
Obj x9223090566223199488 = R[4];
Obj x9223090566223196672 = makeNative(co->gc, 2, clofun93, 1, 4, x9223090566223199392, x9223090566223199424, x9223090566223199456, x9223090566223199488);
R[1] = x9223090566223199488;
R[2] = x9223090566223196672;
saveCont(co, clofun94, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 54)), x9223090566223199488);
return;
}
case 1:
{
Obj x9223090566220376640= co->res;
Obj x9223090566223196672 = R[1];
if (True == x9223090566220376640) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196672, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196672, False);
return;
}
}
case 2:
{
Obj x9223090566220376480= co->res;
Obj x9223090566223199488 = R[1];
Obj x9223090566223196672 = R[2];
if (True == x9223090566220376480) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196672, True);
return;
} else {
R[1] = x9223090566223196672;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), x9223090566223199488);
return;
}
}
case 3:
{
Obj x9223090566220376064= co->res;
Obj x9223090566223199488 = R[1];
Obj x9223090566223196672 = R[2];
if (True == x9223090566220376064) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196672, True);
return;
} else {
Obj x9223090566220376224 = primIsString(x9223090566223199488);
if (True == x9223090566220376224) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196672, True);
return;
} else {
R[1] = x9223090566223199488;
R[2] = x9223090566223196672;
saveCont(co, clofun94, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 121)), x9223090566223199488);
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
Obj x9223090566223196704 = R[1];
if (True == x9223090566223196704) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj x9223090566223200224 = makeNative(co->gc, 3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x9223090566220512928 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x9223090566220512928) {
Obj x9223090566220513184 = PRIM_CAR(closureRef(R[0], 3));
Obj x9223090566220513216 = PRIM_EQ(getBinding(co, packageID, 139).name, x9223090566220513184);
if (True == x9223090566220513216) {
Obj x9223090566220374176 = PRIM_CDR(closureRef(R[0], 3));
Obj x9223090566220374304 = PRIM_ISCONS(x9223090566220374176);
if (True == x9223090566220374304) {
Obj x9223090566220374528 = PRIM_CDR(closureRef(R[0], 3));
Obj x9223090566220374656 = PRIM_CAR(x9223090566220374528);
Obj x = x9223090566220374656;
Obj x9223090566220375040 = PRIM_CDR(closureRef(R[0], 3));
Obj x9223090566220375072 = PRIM_CDR(x9223090566220375040);
Obj x9223090566220375104 = PRIM_EQ(Nil, x9223090566220375072);
if (True == x9223090566220375104) {
Obj x9223090566220375360 = makeCons(co->gc, x, Nil);
Obj x9223090566220375392 = makeCons(co->gc, getBinding(co, packageID, 139).name, x9223090566220375360);
coraReturn(co, x9223090566220375392);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200224);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200224);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200224);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200224);
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
Obj x9223090566221184064 = primIsSymbol(closureRef(R[0], 0));
if (True == x9223090566221184064) {
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x9223090566223196896 = makeNative(co->gc, 3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566220574528 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220574528) {
Obj x9223090566220509216 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220509248 = PRIM_EQ(getBinding(co, packageID, 140).name, x9223090566220509216);
if (True == x9223090566220509248) {
Obj x9223090566220509568 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220509600 = PRIM_ISCONS(x9223090566220509568);
if (True == x9223090566220509600) {
Obj x9223090566220509824 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220510272 = PRIM_CAR(x9223090566220509824);
Obj args = x9223090566220510272;
Obj x9223090566220510560 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220510624 = PRIM_CDR(x9223090566220510560);
Obj x9223090566220510656 = PRIM_ISCONS(x9223090566220510624);
if (True == x9223090566220510656) {
Obj x9223090566220510976 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220511008 = PRIM_CDR(x9223090566220510976);
Obj x9223090566220511168 = PRIM_CAR(x9223090566220511008);
Obj body = x9223090566220511168;
Obj x9223090566220511552 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220511584 = PRIM_CDR(x9223090566220511552);
Obj x9223090566220511616 = PRIM_CDR(x9223090566220511584);
Obj x9223090566220511648 = PRIM_EQ(Nil, x9223090566220511616);
if (True == x9223090566220511648) {
R[1] = body;
R[2] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196896);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196896);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196896);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196896);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196896);
return;
}
}
}
case 1:
{
Obj x9223090566221184512= co->res;
if (True == x9223090566221184512) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 71)), closureRef(R[0], 0), closureRef(R[0], 2), closureRef(R[0], 3));
return;
}
}
case 2:
{
Obj x9223090566221184288= co->res;
if (True == x9223090566221184288) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun92, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 55)), closureRef(R[0], 0));
return;
}
}
case 3:
{
Obj x9223090566220512128= co->res;
Obj args = R[1];
Obj x9223090566220512160 = makeCons(co->gc, x9223090566220512128, Nil);
Obj x9223090566220512192 = makeCons(co->gc, args, x9223090566220512160);
Obj x9223090566220512224 = makeCons(co->gc, getBinding(co, packageID, 140).name, x9223090566220512192);
coraReturn(co, x9223090566220512224);
return;
}
case 4:
{
Obj x9223090566220512096= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun92, 3, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), x9223090566220512096, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223198048 = makeNative(co->gc, 1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566220740576 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220740576) {
Obj x9223090566220740928 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220740960 = PRIM_EQ(getBinding(co, packageID, 90).name, x9223090566220740928);
if (True == x9223090566220740960) {
Obj x9223090566220741440 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220741472 = PRIM_ISCONS(x9223090566220741440);
if (True == x9223090566220741472) {
Obj x9223090566220741952 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220741984 = PRIM_CAR(x9223090566220741952);
Obj x9223090566220742016 = PRIM_ISCONS(x9223090566220741984);
if (True == x9223090566220742016) {
Obj x9223090566220742464 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220742496 = PRIM_CAR(x9223090566220742464);
Obj x9223090566220623872 = PRIM_CAR(x9223090566220742496);
Obj x9223090566220624032 = PRIM_EQ(getBinding(co, packageID, 81).name, x9223090566220623872);
if (True == x9223090566220624032) {
Obj x9223090566220624608 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220624640 = PRIM_CAR(x9223090566220624608);
Obj x9223090566220624672 = PRIM_CDR(x9223090566220624640);
Obj x9223090566220624704 = PRIM_ISCONS(x9223090566220624672);
if (True == x9223090566220624704) {
Obj x9223090566220625312 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220625344 = PRIM_CAR(x9223090566220625312);
Obj x9223090566220625408 = PRIM_CDR(x9223090566220625344);
Obj x9223090566220625440 = PRIM_CAR(x9223090566220625408);
Obj pkg = x9223090566220625440;
Obj x9223090566220626080 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220626112 = PRIM_CAR(x9223090566220626080);
Obj x9223090566220626144 = PRIM_CDR(x9223090566220626112);
Obj x9223090566220626176 = PRIM_CDR(x9223090566220626144);
Obj x9223090566220626272 = PRIM_EQ(Nil, x9223090566220626176);
if (True == x9223090566220626272) {
Obj x9223090566220626816 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220626848 = PRIM_CDR(x9223090566220626816);
Obj x9223090566220626880 = PRIM_ISCONS(x9223090566220626848);
if (True == x9223090566220626880) {
Obj x9223090566220627296 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220627328 = PRIM_CDR(x9223090566220627296);
Obj x9223090566220627360 = PRIM_CAR(x9223090566220627328);
Obj y = x9223090566220627360;
Obj x9223090566220627808 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220627840 = PRIM_CDR(x9223090566220627808);
Obj x9223090566220627872 = PRIM_CDR(x9223090566220627840);
Obj x9223090566220570688 = PRIM_EQ(Nil, x9223090566220627872);
if (True == x9223090566220570688) {
Obj x9223090566220570880 = primIsString(pkg);
if (True == x9223090566220570880) {
Obj x9223090566220571264 = makeCons(co->gc, pkg, Nil);
Obj x9223090566220571296 = makeCons(co->gc, getBinding(co, packageID, 81).name, x9223090566220571264);
R[1] = pkg;
R[2] = y;
saveCont(co, clofun91, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), x9223090566220571296);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198048);
return;
}
}
case 1:
{
Obj x9223090566220573504= co->res;
Obj x9223090566220571360 = R[1];
Obj x9223090566220573536 = makeCons(co->gc, x9223090566220573504, Nil);
Obj x9223090566220573568 = makeCons(co->gc, x9223090566220571360, x9223090566220573536);
Obj x9223090566220573600 = makeCons(co->gc, getBinding(co, packageID, 90).name, x9223090566220573568);
coraReturn(co, x9223090566220573600);
return;
}
case 2:
{
Obj x9223090566220571360= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj x9223090566220573440 = makeCons(co->gc, pkg, closureRef(R[0], 3));
R[1] = x9223090566220571360;
saveCont(co, clofun91, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), x9223090566220573440, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223199520 = makeNative(co->gc, 3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566220975776 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220975776) {
Obj x9223090566220976096 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x9223090566220976096;
Obj x9223090566220738688 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x9223090566220738688;
Obj x9223090566223196736 = makeNative(co->gc, 2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, x9223090566223199520);
Obj x9223090566220739904 = PRIM_EQ(op, getBinding(co, packageID, 126).name);
if (True == x9223090566220739904) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196736, True);
return;
} else {
Obj x9223090566220740096 = PRIM_EQ(op, getBinding(co, packageID, 90).name);
if (True == x9223090566220740096) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196736, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196736, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199520);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196768 = R[1];
if (True == x9223090566223196768) {
saveCont(co, clofun89, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 5));
return;
}
}
case 1:
{
Obj x9223090566220739296= co->res;
Obj x9223090566220739360 = makeCons(co->gc, closureRef(R[0], 0), x9223090566220739296);
coraReturn(co, x9223090566220739360);
return;
}
case 2:
{
Obj x9223090566220739264= co->res;
saveCont(co, clofun89, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), x9223090566220739264, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223200192 = makeNative(co->gc, 1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566221029760 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566221029760) {
Obj x9223090566221030112 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566221030144 = PRIM_EQ(getBinding(co, packageID, 129).name, x9223090566221030112);
if (True == x9223090566221030144) {
Obj x9223090566221030496 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221030528 = PRIM_ISCONS(x9223090566221030496);
if (True == x9223090566221030528) {
Obj x9223090566221030848 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221030880 = PRIM_CAR(x9223090566221030848);
Obj a = x9223090566221030880;
Obj x9223090566221031488 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221031520 = PRIM_CDR(x9223090566221031488);
Obj x9223090566221031552 = PRIM_ISCONS(x9223090566221031520);
if (True == x9223090566221031552) {
Obj x9223090566221032064 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221032096 = PRIM_CDR(x9223090566221032064);
Obj x9223090566221032128 = PRIM_CAR(x9223090566221032096);
Obj b = x9223090566221032128;
Obj x9223090566221032896 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221032928 = PRIM_CDR(x9223090566221032896);
Obj x9223090566221032960 = PRIM_CDR(x9223090566221032928);
Obj x9223090566221032992 = PRIM_ISCONS(x9223090566221032960);
if (True == x9223090566221032992) {
Obj x9223090566220972064 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220972096 = PRIM_CDR(x9223090566220972064);
Obj x9223090566220972128 = PRIM_CDR(x9223090566220972096);
Obj x9223090566220972160 = PRIM_CAR(x9223090566220972128);
Obj c = x9223090566220972160;
Obj x9223090566220973184 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220973216 = PRIM_CDR(x9223090566220973184);
Obj x9223090566220973280 = PRIM_CDR(x9223090566220973216);
Obj x9223090566220973312 = PRIM_CDR(x9223090566220973280);
Obj x9223090566220973344 = PRIM_EQ(Nil, x9223090566220973312);
if (True == x9223090566220973344) {
R[1] = c;
R[2] = a;
saveCont(co, clofun88, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200192);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200192);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200192);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200192);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200192);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223200192);
return;
}
}
case 1:
{
Obj x9223090566220974528= co->res;
Obj x9223090566220973984 = R[1];
Obj a = R[2];
Obj x9223090566220974560 = makeCons(co->gc, x9223090566220974528, Nil);
Obj x9223090566220974592 = makeCons(co->gc, x9223090566220973984, x9223090566220974560);
Obj x9223090566220974624 = makeCons(co->gc, a, x9223090566220974592);
Obj x9223090566220974720 = makeCons(co->gc, getBinding(co, packageID, 129).name, x9223090566220974624);
coraReturn(co, x9223090566220974720);
return;
}
case 2:
{
Obj x9223090566220973984= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x9223090566220974496 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = x9223090566220973984;
R[2] = a;
saveCont(co, clofun88, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), x9223090566220974496, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566221882304 = makeNative(co->gc, 2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566221072864 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566221072864) {
Obj x9223090566221073376 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566221073408 = PRIM_EQ(getBinding(co, packageID, 78).name, x9223090566221073376);
if (True == x9223090566221073408) {
Obj x9223090566221073856 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221073888 = PRIM_ISCONS(x9223090566221073856);
if (True == x9223090566221073888) {
Obj x9223090566221074272 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221074304 = PRIM_CAR(x9223090566221074272);
Obj path = x9223090566221074304;
Obj x9223090566221042080 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221042112 = PRIM_CDR(x9223090566221042080);
Obj x9223090566221042144 = PRIM_ISCONS(x9223090566221042112);
if (True == x9223090566221042144) {
Obj x9223090566221042528 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221042560 = PRIM_CDR(x9223090566221042528);
Obj x9223090566221042592 = PRIM_CAR(x9223090566221042560);
Obj import = x9223090566221042592;
Obj x9223090566221043424 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221043456 = PRIM_CDR(x9223090566221043424);
Obj x9223090566221043488 = PRIM_CDR(x9223090566221043456);
Obj x9223090566221043552 = PRIM_ISCONS(x9223090566221043488);
if (True == x9223090566221043552) {
Obj x9223090566221044096 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221044128 = PRIM_CDR(x9223090566221044096);
Obj x9223090566221044320 = PRIM_CDR(x9223090566221044128);
Obj x9223090566221044352 = PRIM_CAR(x9223090566221044320);
Obj body = x9223090566221044352;
Obj x9223090566221044864 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566221044896 = PRIM_CDR(x9223090566221044864);
Obj x9223090566221044928 = PRIM_CDR(x9223090566221044896);
Obj x9223090566221044960 = PRIM_CDR(x9223090566221044928);
Obj x9223090566221045024 = PRIM_EQ(Nil, x9223090566221044960);
if (True == x9223090566221045024) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221882304);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221882304);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221882304);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221882304);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221882304);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221882304);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566221883200 = makeNative(co->gc, 1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj x9223090566221108608 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566221108608) {
Obj x9223090566221108896 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566221108928 = PRIM_EQ(getBinding(co, packageID, 133).name, x9223090566221108896);
if (True == x9223090566221108928) {
Obj x9223090566221109568 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221109600 = PRIM_ISCONS(x9223090566221109568);
if (True == x9223090566221109600) {
Obj x9223090566221109952 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221109984 = PRIM_CAR(x9223090566221109952);
Obj var = x9223090566221109984;
Obj x9223090566221110432 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221110464 = PRIM_CDR(x9223090566221110432);
Obj x9223090566221110496 = PRIM_ISCONS(x9223090566221110464);
if (True == x9223090566221110496) {
Obj x9223090566221110912 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221110976 = PRIM_CDR(x9223090566221110912);
Obj x9223090566221111008 = PRIM_CAR(x9223090566221110976);
Obj val = x9223090566221111008;
Obj x9223090566221070656 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221070688 = PRIM_CDR(x9223090566221070656);
Obj x9223090566221070784 = PRIM_CDR(x9223090566221070688);
Obj x9223090566221070816 = PRIM_EQ(Nil, x9223090566221070784);
if (True == x9223090566221070816) {
R[1] = val;
saveCont(co, clofun86, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221883200);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221883200);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221883200);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221883200);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566221883200);
return;
}
}
case 1:
{
Obj x9223090566221071840= co->res;
Obj x9223090566221071680 = R[1];
Obj x9223090566221071872 = makeCons(co->gc, x9223090566221071840, Nil);
Obj x9223090566221071904 = makeCons(co->gc, x9223090566221071680, x9223090566221071872);
Obj x9223090566221072000 = makeCons(co->gc, getBinding(co, packageID, 68).name, x9223090566221071904);
coraReturn(co, x9223090566221072000);
return;
}
case 2:
{
Obj x9223090566221071200= co->res;
Obj val = R[1];
Obj var1 = x9223090566221071200;
Obj x9223090566221071648 = makeCons(co->gc, var1, Nil);
Obj x9223090566221071680 = makeCons(co->gc, getBinding(co, packageID, 139).name, x9223090566221071648);
R[1] = x9223090566221071680;
saveCont(co, clofun86, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), val);
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun85, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x9223090566221108384= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), x9223090566221108384, closureRef(R[0], 3));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), x, globalRef(co, getBinding(co, packageID, 69)));
return;
}
case 1:
{
Obj x9223090566221182944= co->res;
Obj x9223090566221183040 = primNot(x9223090566221182944);
coraReturn(co, x9223090566221183040);
return;
}
case 2:
{
Obj x9223090566221182912= co->res;
saveCont(co, clofun84, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), x9223090566221182912);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223197728 = R[1];
Obj x9223090566223197760 = R[2];
Obj x9223090566221882752 = PRIM_EQ(Nil, x9223090566223197760);
if (True == x9223090566221882752) {
coraReturn(co, Nil);
return;
} else {
Obj x9223090566223198272 = makeNative(co->gc, 1, clofun82, 0, 2, x9223090566223197760, x9223090566223197728);
Obj x9223090566221884288 = PRIM_ISCONS(x9223090566223197760);
if (True == x9223090566221884288) {
Obj x9223090566221884640 = PRIM_CAR(x9223090566223197760);
Obj x9223090566221884800 = PRIM_ISCONS(x9223090566221884640);
if (True == x9223090566221884800) {
Obj x9223090566221885056 = PRIM_CAR(x9223090566223197760);
Obj x9223090566221885088 = PRIM_CAR(x9223090566221885056);
Obj x = x9223090566221885088;
Obj x9223090566221180960 = PRIM_CAR(x9223090566223197760);
Obj x9223090566221180992 = PRIM_CDR(x9223090566221180960);
Obj y = x9223090566221180992;
Obj x9223090566221181344 = PRIM_CDR(x9223090566223197760);
Obj x9223090566221181536 = PRIM_EQ(x9223090566223197728, x);
if (True == x9223090566221181536) {
Obj x9223090566221181696 = makeCons(co->gc, x, y);
coraReturn(co, x9223090566221181696);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198272);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198272);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198272);
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
Obj x9223090566221883296 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566221883296) {
Obj x9223090566221883552 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566221883840 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566221883840;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196256 = R[1];
Obj x9223090566223196320 = R[2];
Obj x9223090566223196352 = R[3];
Obj x9223090566220511488 = PRIM_EQ(Nil, x9223090566223196352);
if (True == x9223090566220511488) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), x9223090566223196256, x9223090566223196320);
return;
} else {
Obj x9223090566220511712 = PRIM_ISCONS(x9223090566223196352);
if (True == x9223090566220511712) {
Obj x9223090566220511872 = PRIM_CAR(x9223090566223196352);
Obj import = x9223090566220511872;
Obj x9223090566220512032 = PRIM_CDR(x9223090566223196352);
Obj more = x9223090566220512032;
R[1] = import;
R[2] = x9223090566223196256;
R[3] = x9223090566223196320;
R[4] = more;
saveCont(co, clofun81, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), import, makeCString(co->gc, "#*ns-export*"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj x9223090566220512896= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), x9223090566220512896);
return;
}
case 2:
{
Obj x9223090566220512864= co->res;
Obj import = R[1];
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), import, x9223090566220512864);
return;
}
case 3:
{
Obj x9223090566220512832= co->res;
Obj import = R[1];
R[1] = import;
saveCont(co, clofun81, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), x9223090566220512832);
return;
}
case 4:
{
Obj x9223090566220512544= co->res;
Obj import = R[1];
Obj x9223090566223196256 = R[2];
Obj x9223090566223196320 = R[3];
Obj more = R[4];
if (True == x9223090566220512544) {
R[1] = import;
saveCont(co, clofun81, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 72)), x9223090566223196256);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 71)), x9223090566223196256, x9223090566223196320, more);
return;
}
}
case 5:
{
Obj x9223090566220512384= co->res;
Obj import = R[1];
Obj x9223090566223196256 = R[2];
Obj x9223090566223196320 = R[3];
Obj more = R[4];
Obj export = x9223090566220512384;
R[1] = import;
R[2] = x9223090566223196256;
R[3] = x9223090566223196320;
R[4] = more;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), x9223090566223196256, export);
return;
}
case 6:
{
Obj x9223090566220512352= co->res;
Obj import = R[1];
Obj x9223090566223196256 = R[2];
Obj x9223090566223196320 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x9223090566223196256;
R[3] = x9223090566223196320;
R[4] = more;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 70)), x9223090566220512352, Nil);
return;
}
case 7:
{
Obj x9223090566220512320= co->res;
Obj import = R[1];
Obj x9223090566223196256 = R[2];
Obj x9223090566223196320 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x9223090566223196256;
R[3] = x9223090566223196320;
R[4] = more;
saveCont(co, clofun81, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), x9223090566220512320);
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
Obj x9223090566220510592 = PRIM_EQ(ns, makeCString(co->gc, ""));
if (True == x9223090566220510592) {
coraReturn(co, var);
return;
} else {
R[1] = var;
R[2] = ns;
saveCont(co, clofun80, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 75)), var);
return;
}
}
case 1:
{
Obj x9223090566220511104= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), x9223090566220511104);
return;
}
case 2:
{
Obj x9223090566220511072= co->res;
Obj ns = R[1];
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), ns, x9223090566220511072);
return;
}
case 3:
{
Obj x9223090566220511040= co->res;
Obj ns = R[1];
R[1] = ns;
saveCont(co, clofun80, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), x9223090566220511040);
return;
}
case 4:
{
Obj x9223090566220510752= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == x9223090566220510752) {
coraReturn(co, var);
return;
} else {
R[1] = ns;
saveCont(co, clofun80, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 72)), var);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), sexp);
return;
}
case 1:
{
Obj x9223090566220574080= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, x9223090566220574080, makeNative(co->gc, 4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj x9223090566220574048= co->res;
Obj path = R[1];
R[1] = path;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 80)), x9223090566220574048);
return;
}
case 3:
{
Obj x9223090566220573824= co->res;
Obj sexp = R[1];
Obj path = x9223090566220573824;
R[1] = path;
saveCont(co, clofun79, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), sexp);
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
Obj x9223090566220574432 = makeCons(co->gc, makeCString(co->gc, "cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = x9223090566220574432;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), makeNative(co->gc, 2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj x9223090566220510048= co->res;
Obj x9223090566220574432 = R[1];
Obj x9223090566220510080 = makeCons(co->gc, getBinding(co, packageID, 89).name, x9223090566220510048);
Obj x9223090566220510112 = makeCons(co->gc, x9223090566220510080, Nil);
Obj x9223090566220510144 = makeCons(co->gc, x9223090566220574432, x9223090566220510112);
Obj x9223090566220510176 = makeCons(co->gc, closureRef(R[0], 0), x9223090566220510144);
Obj x9223090566220510208 = makeCons(co->gc, getBinding(co, packageID, 78).name, x9223090566220510176);
coraReturn(co, x9223090566220510208);
return;
}
case 2:
{
Obj x9223090566220509440= co->res;
Obj export = R[1];
Obj body = R[2];
Obj x9223090566220574432 = R[3];
Obj x9223090566220509856 = makeCons(co->gc, export, Nil);
Obj x9223090566220509888 = makeCons(co->gc, getBinding(co, packageID, 86).name, x9223090566220509856);
Obj x9223090566220509920 = makeCons(co->gc, x9223090566220509888, Nil);
Obj x9223090566220509952 = makeCons(co->gc, getBinding(co, packageID, 77).name, x9223090566220509920);
Obj x9223090566220509984 = makeCons(co->gc, getBinding(co, packageID, 133).name, x9223090566220509952);
Obj x9223090566220510016 = makeCons(co->gc, x9223090566220509984, body);
R[1] = x9223090566220574432;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), x9223090566220509440, x9223090566220510016);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj x9223090566220509376 = makeCons(co->gc, imp, Nil);
Obj x9223090566220509408 = makeCons(co->gc, getBinding(co, packageID, 81).name, x9223090566220509376);
coraReturn(co, x9223090566220509408);
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
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), data, Nil, Nil, k);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223198720 = R[1];
Obj x9223090566223198752 = R[2];
Obj x9223090566223198784 = R[3];
Obj x9223090566223198848 = R[4];
Obj x9223090566223199040 = makeNative(co->gc, 1, clofun74, 0, 4, x9223090566223198784, x9223090566223198720, x9223090566223198752, x9223090566223198848);
Obj x9223090566220625824 = PRIM_ISCONS(x9223090566223198720);
if (True == x9223090566220625824) {
Obj x9223090566220626208 = PRIM_CAR(x9223090566223198720);
Obj x9223090566220626240 = PRIM_ISCONS(x9223090566220626208);
if (True == x9223090566220626240) {
Obj x9223090566220626560 = PRIM_CAR(x9223090566223198720);
Obj x9223090566220626720 = PRIM_CAR(x9223090566220626560);
Obj x9223090566220626752 = PRIM_EQ(getBinding(co, packageID, 81).name, x9223090566220626720);
if (True == x9223090566220626752) {
Obj x9223090566220627072 = PRIM_CAR(x9223090566223198720);
Obj x9223090566220627104 = PRIM_CDR(x9223090566220627072);
Obj x9223090566220627136 = PRIM_ISCONS(x9223090566220627104);
if (True == x9223090566220627136) {
Obj x9223090566220627488 = PRIM_CAR(x9223090566223198720);
Obj x9223090566220627520 = PRIM_CDR(x9223090566220627488);
Obj x9223090566220627552 = PRIM_CAR(x9223090566220627520);
Obj lib = x9223090566220627552;
Obj x9223090566220627904 = PRIM_CAR(x9223090566223198720);
Obj x9223090566220627936 = PRIM_CDR(x9223090566220627904);
Obj x9223090566220570624 = PRIM_CDR(x9223090566220627936);
Obj x9223090566220570656 = PRIM_EQ(Nil, x9223090566220570624);
if (True == x9223090566220570656) {
Obj x9223090566220570816 = PRIM_CDR(x9223090566223198720);
Obj rest = x9223090566220570816;
Obj x9223090566220570976 = makeCons(co->gc, lib, x9223090566223198752);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, x9223090566220570976, x9223090566223198784, x9223090566223198848);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199040);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223199840 = makeNative(co->gc, 1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566220624128 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566220624128) {
Obj x9223090566220624384 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566220624416 = PRIM_ISCONS(x9223090566220624384);
if (True == x9223090566220624416) {
Obj x9223090566220624800 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566220624832 = PRIM_CAR(x9223090566220624800);
Obj x9223090566220624864 = PRIM_EQ(getBinding(co, packageID, 82).name, x9223090566220624832);
if (True == x9223090566220624864) {
Obj x9223090566220625152 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566220625216 = PRIM_CDR(x9223090566220625152);
Obj more = x9223090566220625216;
Obj x9223090566220625376 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = x9223090566220625376;
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199840);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199840);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223199840);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), closureRef(R[0], 1));
return;
}
case 1:
{
Obj x9223090566220742624= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), x9223090566220742624, closureRef(R[0], 2), closureRef(R[0], 3));
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 1:
{
Obj x9223090566220741792= co->res;
Obj x9223090566220741632 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), x9223090566220741632, x9223090566220741792);
return;
}
case 2:
{
Obj x9223090566220741632= co->res;
Obj exp = R[1];
R[1] = x9223090566220741632;
saveCont(co, clofun72, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), arglist);
return;
}
case 1:
{
Obj x9223090566220740384= co->res;
Obj x9223090566220740128 = R[1];
Obj fn = R[2];
Obj x9223090566220740416 = makeCons(co->gc, x9223090566220740384, Nil);
Obj x9223090566220740448 = makeCons(co->gc, x9223090566220740128, x9223090566220740416);
Obj x9223090566220740480 = makeCons(co->gc, fn, x9223090566220740448);
coraReturn(co, x9223090566220740480);
return;
}
case 2:
{
Obj x9223090566220741056= co->res;
Obj x9223090566220740736 = R[1];
Obj fn = R[2];
Obj x9223090566220741088 = makeCons(co->gc, x9223090566220741056, Nil);
Obj x9223090566220741120 = makeCons(co->gc, x9223090566220740736, x9223090566220741088);
Obj x9223090566220741152 = makeCons(co->gc, fn, x9223090566220741120);
coraReturn(co, x9223090566220741152);
return;
}
case 3:
{
Obj x9223090566220739872= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == x9223090566220739872) {
Obj x9223090566220740128 = PRIM_CAR(arglist);
R[1] = x9223090566220740128;
R[2] = fn;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), arglist);
return;
} else {
Obj x9223090566220740736 = PRIM_CAR(arglist);
Obj x9223090566220741024 = PRIM_CDR(arglist);
R[1] = x9223090566220740736;
R[2] = fn;
saveCont(co, clofun71, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), fn, x9223090566220741024);
return;
}
}
case 4:
{
Obj x9223090566220739840= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), x9223090566220739840);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 1:
{
Obj x9223090566220739168= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 88)), x9223090566220739168);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223197504 = R[1];
Obj x9223090566220972448 = primIsSymbol(x9223090566223197504);
if (True == x9223090566220972448) {
Obj x9223090566220972736 = makeCons(co->gc, x9223090566223197504, Nil);
Obj x9223090566220972768 = makeCons(co->gc, getBinding(co, packageID, 139).name, x9223090566220972736);
coraReturn(co, x9223090566220972768);
return;
} else {
Obj x9223090566223197792 = makeNative(co->gc, 1, clofun68, 0, 1, x9223090566223197504);
Obj x9223090566220974464 = PRIM_ISCONS(x9223090566223197504);
if (True == x9223090566220974464) {
Obj x9223090566220974752 = PRIM_CAR(x9223090566223197504);
Obj x9223090566220974784 = PRIM_EQ(getBinding(co, packageID, 87).name, x9223090566220974752);
if (True == x9223090566220974784) {
Obj x9223090566220975008 = PRIM_CDR(x9223090566223197504);
Obj x9223090566220975136 = PRIM_ISCONS(x9223090566220975008);
if (True == x9223090566220975136) {
Obj x9223090566220975520 = PRIM_CDR(x9223090566223197504);
Obj x9223090566220975552 = PRIM_CAR(x9223090566220975520);
Obj x = x9223090566220975552;
Obj x9223090566220975904 = PRIM_CDR(x9223090566223197504);
Obj x9223090566220975936 = PRIM_CDR(x9223090566220975904);
Obj x9223090566220975968 = PRIM_EQ(Nil, x9223090566220975936);
if (True == x9223090566220975968) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197792);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197792);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197792);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197792);
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
Obj x9223090566220973248 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220973248) {
Obj x9223090566220973568 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566220973568;
Obj x9223090566220973824 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566220973824;
Obj x9223090566220974080 = makeCons(co->gc, x, more);
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), globalRef(co, getBinding(co, packageID, 88)), x9223090566220974080);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj x9223090566220974112= co->res;
Obj x9223090566220974144 = makeCons(co->gc, getBinding(co, packageID, 135).name, x9223090566220974112);
coraReturn(co, x9223090566220974144);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566221033216 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), x9223090566221033216);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196192 = R[1];
Obj x9223090566223196288 = makeNative(co->gc, 1, clofun65, 0, 1, x9223090566223196192);
Obj x9223090566221031872 = PRIM_ISCONS(x9223090566223196192);
if (True == x9223090566221031872) {
Obj x9223090566221032160 = PRIM_CAR(x9223090566223196192);
Obj x = x9223090566221032160;
Obj x9223090566221032576 = PRIM_CDR(x9223090566223196192);
Obj x9223090566221032608 = PRIM_EQ(Nil, x9223090566221032576);
if (True == x9223090566221032608) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196288);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196608 = makeNative(co->gc, 2, clofun64, 0, 1, closureRef(R[0], 0));
Obj x9223090566221029920 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566221029920) {
Obj x9223090566221030080 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566221030080;
Obj x9223090566221030336 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221030368 = PRIM_ISCONS(x9223090566221030336);
if (True == x9223090566221030368) {
Obj x9223090566221030624 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221030656 = PRIM_CAR(x9223090566221030624);
Obj y = x9223090566221030656;
Obj x9223090566221031008 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221031040 = PRIM_CDR(x9223090566221031008);
Obj x9223090566221031104 = PRIM_EQ(Nil, x9223090566221031040);
if (True == x9223090566221031104) {
Obj x9223090566221031328 = makeCons(co->gc, y, Nil);
Obj x9223090566221031424 = makeCons(co->gc, x, x9223090566221031328);
Obj x9223090566221031456 = makeCons(co->gc, getBinding(co, packageID, 90).name, x9223090566221031424);
coraReturn(co, x9223090566221031456);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196608);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196608);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223196608);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566221044992 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566221044992) {
Obj x9223090566221045216 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566221045216;
Obj x9223090566221045408 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566221045408;
R[1] = x;
saveCont(co, clofun64, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x9223090566221029536= co->res;
Obj x = R[1];
Obj x9223090566221029568 = makeCons(co->gc, x9223090566221029536, Nil);
Obj x9223090566221029600 = makeCons(co->gc, x, x9223090566221029568);
Obj x9223090566221029632 = makeCons(co->gc, getBinding(co, packageID, 90).name, x9223090566221029600);
coraReturn(co, x9223090566221029632);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 141)), exp);
return;
}
case 1:
{
Obj x9223090566221044256= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 92)), x9223090566221044256);
return;
}
case 2:
{
Obj x9223090566221044224= co->res;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 94)), x9223090566221044224);
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
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), Nil, makeCString(co->gc, ""), Nil, exp);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 1:
{
Obj x9223090566221042208= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x9223090566221042656 = makeCons(co->gc, getBinding(co, packageID, 135).name, args);
Obj x9223090566221042688 = makeCons(co->gc, x9223090566221042656, body);
Obj x9223090566221042720 = makeCons(co->gc, getBinding(co, packageID, 107).name, x9223090566221042688);
Obj x9223090566221042752 = makeCons(co->gc, x9223090566221042720, Nil);
Obj x9223090566221042784 = makeCons(co->gc, args, x9223090566221042752);
Obj x9223090566221042816 = makeCons(co->gc, x9223090566221042208, x9223090566221042784);
Obj x9223090566221042912 = makeCons(co->gc, getBinding(co, packageID, 134).name, x9223090566221042816);
coraReturn(co, x9223090566221042912);
return;
}
case 2:
{
Obj x9223090566221041984= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = x9223090566221041984;
R[1] = body;
R[2] = args;
saveCont(co, clofun60, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 3:
{
Obj x9223090566221041664= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = x9223090566221041664;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), nargs);
return;
}
case 4:
{
Obj x9223090566221074240= co->res;
Obj exp = R[1];
Obj body = x9223090566221074240;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), body);
return;
}
case 5:
{
Obj x9223090566221074208= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 104)), x9223090566221074208);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj x9223090566221073184 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x9223090566221073184) {
coraReturn(co, Nil);
return;
} else {
Obj x9223090566221073344 = primGenSym(co);
Obj x9223090566221073536 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = x9223090566221073344;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), x9223090566221073536);
return;
}
}
case 1:
{
Obj x9223090566221073568= co->res;
Obj x9223090566221073344 = R[1];
Obj x9223090566221073600 = makeCons(co->gc, x9223090566221073344, x9223090566221073568);
coraReturn(co, x9223090566221073600);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), Nil, rules);
return;
}
case 1:
{
Obj x9223090566221072416= co->res;
Obj n = R[1];
Obj x9223090566221072448 = primNot(x9223090566221072416);
if (True == x9223090566221072448) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "inconsistent func rule args count"));
return;
} else {
coraReturn(co, n);
return;
}
}
case 2:
{
Obj x9223090566221072384= co->res;
Obj n = R[1];
R[1] = n;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), x9223090566221072384);
return;
}
case 3:
{
Obj x9223090566221071360= co->res;
Obj counts = x9223090566221071360;
Obj x9223090566221071584 = PRIM_CAR(counts);
Obj n = x9223090566221071584;
Obj x9223090566221072352 = PRIM_CDR(counts);
R[1] = n;
saveCont(co, clofun58, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 99)), makeNative(co->gc, 2, clofun57, 1, 1, n), x9223090566221072352);
return;
}
case 4:
{
Obj x9223090566221070752= co->res;
Obj pats = x9223090566221070752;
saveCont(co, clofun58, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), makeNative(co->gc, 2, clofun56, 1, 0), pats);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566221072192 = PRIM_EQ(closureRef(R[0], 0), x);
Obj x9223090566221072224 = primNot(x9223090566221072192);
coraReturn(co, x9223090566221072224);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566221071328 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), x9223090566221071328);
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
Obj x9223090566221110784 = PRIM_EQ(l1, Nil);
if (True == x9223090566221110784) {
coraReturn(co, l2);
return;
} else {
Obj x9223090566221110944 = PRIM_CAR(l1);
Obj x9223090566221111104 = PRIM_CDR(l1);
R[1] = x9223090566221110944;
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), x9223090566221111104, l2);
return;
}
}
case 1:
{
Obj x9223090566221111136= co->res;
Obj x9223090566221110944 = R[1];
Obj x9223090566221111232 = makeCons(co->gc, x9223090566221110944, x9223090566221111136);
coraReturn(co, x9223090566221111232);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), Nil, fn, l);
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
Obj x9223090566221108704 = PRIM_ISCONS(l);
if (True == x9223090566221108704) {
Obj x9223090566221108960 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
saveCont(co, clofun53, 1, R);
coraCall1(co, fn, x9223090566221108960);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj x9223090566221108992= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == x9223090566221108992) {
Obj x9223090566221109248 = PRIM_CAR(l);
Obj x9223090566221109280 = makeCons(co->gc, x9223090566221109248, res);
Obj x9223090566221109632 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), x9223090566221109280, fn, x9223090566221109632);
return;
} else {
Obj x9223090566221109792 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), res, fn, x9223090566221109792);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), MAKE_NUMBER(0), l);
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
Obj x9223090566221107424 = PRIM_EQ(l, Nil);
if (True == x9223090566221107424) {
coraReturn(co, i);
return;
} else {
Obj x9223090566221107584 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x9223090566221107936 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566221107584, x9223090566221107936);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), rules);
return;
}
case 1:
{
Obj x9223090566221184768= co->res;
Obj x9223090566221184672 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), x9223090566221184672, x9223090566221184768);
return;
}
case 2:
{
Obj x9223090566221184256= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == x9223090566221184256) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
} else {
Obj x9223090566221184640 = PRIM_CAR(rules);
Obj x9223090566221184672 = makeCons(co->gc, x9223090566221184640, res);
R[1] = x9223090566221184672;
saveCont(co, clofun50, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), rules);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), input, Nil, Nil);
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
Obj x9223090566223196832 = PRIM_EQ(Nil, input);
if (True == x9223090566223196832) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), result);
return;
} else {
Obj x9223090566223197344 = makeNative(co->gc, 3, clofun47, 0, 3, input, current, result);
Obj x9223090566221882720 = PRIM_ISCONS(input);
if (True == x9223090566221882720) {
Obj x9223090566221882976 = PRIM_CAR(input);
Obj x9223090566221883008 = PRIM_EQ(getBinding(co, packageID, 105).name, x9223090566221882976);
if (True == x9223090566221883008) {
Obj x9223090566221883424 = PRIM_CDR(input);
Obj x9223090566221883456 = PRIM_ISCONS(x9223090566221883424);
if (True == x9223090566221883456) {
Obj x9223090566221883712 = PRIM_CDR(input);
Obj x9223090566221883744 = PRIM_CAR(x9223090566221883712);
Obj act = x9223090566221883744;
Obj x9223090566221884128 = PRIM_CDR(input);
Obj x9223090566221884160 = PRIM_CDR(x9223090566221884128);
Obj x9223090566221884192 = PRIM_ISCONS(x9223090566221884160);
if (True == x9223090566221884192) {
Obj x9223090566221884672 = PRIM_CDR(input);
Obj x9223090566221884704 = PRIM_CDR(x9223090566221884672);
Obj x9223090566221884736 = PRIM_CAR(x9223090566221884704);
Obj x9223090566221884768 = PRIM_EQ(getBinding(co, packageID, 110).name, x9223090566221884736);
if (True == x9223090566221884768) {
Obj x9223090566221885152 = PRIM_CDR(input);
Obj x9223090566221885184 = PRIM_CDR(x9223090566221885152);
Obj x9223090566221885216 = PRIM_CDR(x9223090566221885184);
Obj x9223090566221885248 = PRIM_ISCONS(x9223090566221885216);
if (True == x9223090566221885248) {
Obj x9223090566221181152 = PRIM_CDR(input);
Obj x9223090566221181184 = PRIM_CDR(x9223090566221181152);
Obj x9223090566221181216 = PRIM_CDR(x9223090566221181184);
Obj x9223090566221181248 = PRIM_CAR(x9223090566221181216);
Obj pred = x9223090566221181248;
Obj x9223090566221181792 = PRIM_CDR(input);
Obj x9223090566221181824 = PRIM_CDR(x9223090566221181792);
Obj x9223090566221181856 = PRIM_CDR(x9223090566221181824);
Obj x9223090566221181888 = PRIM_CDR(x9223090566221181856);
Obj remain = x9223090566221181888;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
saveCont(co, clofun48, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197344);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197344);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197344);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197344);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197344);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223197344);
return;
}
}
}
case 1:
{
Obj x9223090566221182144= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj x9223090566221182176 = makeCons(co->gc, getBinding(co, packageID, 135).name, x9223090566221182144);
Obj pat = x9223090566221182176;
Obj x9223090566221182560 = makeCons(co->gc, act, Nil);
Obj x9223090566221182592 = makeCons(co->gc, pred, x9223090566221182560);
Obj x9223090566221182688 = makeCons(co->gc, getBinding(co, packageID, 110).name, x9223090566221182592);
Obj x9223090566221182816 = makeCons(co->gc, pat, result);
Obj x9223090566221182848 = makeCons(co->gc, x9223090566221182688, x9223090566221182816);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, x9223090566221182848);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223198816 = makeNative(co->gc, 1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x9223090566223198880 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566223198880) {
Obj x9223090566223199168 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566223199200 = PRIM_EQ(getBinding(co, packageID, 105).name, x9223090566223199168);
if (True == x9223090566223199200) {
Obj x9223090566223199616 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566223199648 = PRIM_ISCONS(x9223090566223199616);
if (True == x9223090566223199648) {
Obj x9223090566223200096 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566223200128 = PRIM_CAR(x9223090566223200096);
Obj act = x9223090566223200128;
Obj x9223090566221881568 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566221881600 = PRIM_CDR(x9223090566221881568);
Obj remain = x9223090566221881600;
R[1] = act;
R[2] = remain;
saveCont(co, clofun47, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198816);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198816);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566223198816);
return;
}
}
case 1:
{
Obj x9223090566221881856= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj x9223090566221881888 = makeCons(co->gc, getBinding(co, packageID, 135).name, x9223090566221881856);
Obj pat = x9223090566221881888;
Obj x9223090566221882240 = makeCons(co->gc, pat, closureRef(R[0], 2));
Obj x9223090566221882272 = makeCons(co->gc, act, x9223090566221882240);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, x9223090566221882272);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223197568 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566223197568) {
Obj x9223090566223197824 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566223197824;
Obj x9223090566223198176 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566223198176;
Obj x9223090566223198368 = makeCons(co->gc, x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), y, x9223090566223198368, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 108)), exp);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 1:
{
Obj x9223090566220625184= co->res;
Obj value = R[1];
Obj rules = x9223090566220625184;
Obj x9223090566223196576 = makeNative(co->gc, 2, clofun43, 1, 2, value, rules);
Obj x9223090566220626304 = PRIM_ISCONS(value);
if (True == x9223090566220626304) {
Obj x9223090566220626592 = PRIM_CAR(value);
Obj x9223090566220626624 = PRIM_EQ(getBinding(co, packageID, 152).name, x9223090566220626592);
Obj x9223090566220626656 = primNot(x9223090566220626624);
if (True == x9223090566220626656) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196576, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196576, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196576, False);
return;
}
}
case 2:
{
Obj x9223090566220625024= co->res;
Obj exp = R[1];
Obj value = x9223090566220625024;
R[1] = value;
saveCont(co, clofun44, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj x9223090566220624992= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 138)), x9223090566220624992);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196640 = R[1];
if (True == x9223090566223196640) {
Obj x9223090566220625536 = primGenSym(co);
Obj val = x9223090566220625536;
R[1] = val;
saveCont(co, clofun43, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 109)), val, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 109)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x9223090566220625888= co->res;
Obj val = R[1];
Obj x9223090566220625920 = makeCons(co->gc, x9223090566220625888, Nil);
Obj x9223090566220625952 = makeCons(co->gc, closureRef(R[0], 0), x9223090566220625920);
Obj x9223090566220625984 = makeCons(co->gc, val, x9223090566220625952);
Obj x9223090566220626016 = makeCons(co->gc, getBinding(co, packageID, 129).name, x9223090566220625984);
coraReturn(co, x9223090566220626016);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), rules);
return;
}
case 1:
{
Obj x9223090566220624544= co->res;
Obj x9223090566223196512 = R[1];
if (True == x9223090566220624544) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196512, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196512, False);
return;
}
}
case 2:
{
Obj x9223090566220624288= co->res;
Obj rules = R[1];
Obj x9223090566223196512 = R[2];
if (True == x9223090566220624288) {
Obj x9223090566220624512 = PRIM_CDR(rules);
R[1] = x9223090566223196512;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), x9223090566220624512);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196512, False);
return;
}
}
case 3:
{
Obj x9223090566220740640= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == x9223090566220740640) {
Obj x9223090566220740800 = makeCons(co->gc, makeCString(co->gc, "no match-help found!"), Nil);
Obj x9223090566220740832 = makeCons(co->gc, getBinding(co, packageID, 127).name, x9223090566220740800);
coraReturn(co, x9223090566220740832);
return;
} else {
Obj x9223090566223196512 = makeNative(co->gc, 3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = x9223090566223196512;
saveCont(co, clofun42, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), rules);
return;
}
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196544 = R[1];
if (True == x9223090566223196544) {
Obj x9223090566220741184 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = x9223090566220741184;
Obj x9223090566220741344 = primGenSym(co);
Obj cc = x9223090566220741344;
R[1] = pat;
R[2] = cc;
saveCont(co, clofun41, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 111)), closureRef(R[0], 1), cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no cond match"));
return;
}
}
case 1:
{
Obj x9223090566220742112= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = x9223090566220742112;
Obj x9223090566220742528 = makeCons(co->gc, rest, Nil);
Obj x9223090566220742560 = makeCons(co->gc, Nil, x9223090566220742528);
Obj x9223090566220742592 = makeCons(co->gc, getBinding(co, packageID, 140).name, x9223090566220742560);
Obj x9223090566220623904 = makeCons(co->gc, curr, Nil);
Obj x9223090566220623936 = makeCons(co->gc, x9223090566220742592, x9223090566220623904);
Obj x9223090566220623968 = makeCons(co->gc, cc, x9223090566220623936);
Obj x9223090566220624000 = makeCons(co->gc, getBinding(co, packageID, 129).name, x9223090566220623968);
coraReturn(co, x9223090566220624000);
return;
}
case 2:
{
Obj x9223090566220741760= co->res;
Obj cc = R[1];
Obj curr = x9223090566220741760;
Obj x9223090566220742048 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220742080 = PRIM_CDR(x9223090566220742048);
R[1] = curr;
R[2] = cc;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 109)), closureRef(R[0], 0), x9223090566220742080);
return;
}
case 3:
{
Obj x9223090566220741728= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
saveCont(co, clofun41, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), x9223090566220741728, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj x9223090566220741504= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = x9223090566220741504;
R[1] = action;
R[2] = cc;
saveCont(co, clofun41, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 138)), pat);
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
Obj x9223090566220738880 = PRIM_CDR(rules);
Obj x9223090566220738912 = PRIM_CAR(x9223090566220738880);
Obj action = x9223090566220738912;
Obj x9223090566223196160 = makeNative(co->gc, 2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = x9223090566223196160;
saveCont(co, clofun40, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), action);
return;
}
case 1:
{
Obj x9223090566220740000= co->res;
Obj action = R[1];
Obj x9223090566223196160 = R[2];
if (True == x9223090566220740000) {
Obj x9223090566220740224 = PRIM_CAR(action);
Obj x9223090566220740256 = PRIM_EQ(x9223090566220740224, getBinding(co, packageID, 110).name);
if (True == x9223090566220740256) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196160, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196160, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196160, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196224 = R[1];
if (True == x9223090566223196224) {
saveCont(co, clofun39, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), closureRef(R[0], 1));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x9223090566220739488= co->res;
Obj x9223090566220739328 = R[1];
Obj x9223090566220739648 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj x9223090566220739680 = makeCons(co->gc, x9223090566220739648, Nil);
Obj x9223090566220739712 = makeCons(co->gc, x9223090566220739488, x9223090566220739680);
Obj x9223090566220739744 = makeCons(co->gc, x9223090566220739328, x9223090566220739712);
Obj x9223090566220739776 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566220739744);
coraReturn(co, x9223090566220739776);
return;
}
case 2:
{
Obj x9223090566220739328= co->res;
R[1] = x9223090566220739328;
saveCont(co, clofun39, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), closureRef(R[0], 1));
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
Obj x9223090566220976000= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), x9223090566220976000);
return;
}
case 2:
{
Obj x9223090566220974432= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x9223090566220974432) {
Obj x9223090566220974656 = PRIM_CAR(pat);
Obj x9223090566220974688 = PRIM_EQ(x9223090566220974656, getBinding(co, packageID, 139).name);
if (True == x9223090566220974688) {
Obj x9223090566220975040 = makeCons(co->gc, expr, Nil);
Obj x9223090566220975072 = makeCons(co->gc, pat, x9223090566220975040);
Obj x9223090566220975104 = makeCons(co->gc, getBinding(co, packageID, 113).name, x9223090566220975072);
Obj x9223090566220975328 = makeCons(co->gc, cc, Nil);
Obj x9223090566220975360 = makeCons(co->gc, x9223090566220975328, Nil);
Obj x9223090566220975392 = makeCons(co->gc, body, x9223090566220975360);
Obj x9223090566220975424 = makeCons(co->gc, x9223090566220975104, x9223090566220975392);
Obj x9223090566220975456 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566220975424);
coraReturn(co, x9223090566220975456);
return;
} else {
Obj x9223090566220975680 = PRIM_CAR(pat);
Obj x9223090566220975712 = PRIM_EQ(x9223090566220975680, getBinding(co, packageID, 152).name);
if (True == x9223090566220975712) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 118)), pat, expr, body, cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no cond match"));
return;
}
}
} else {
saveCont(co, clofun38, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 112)), makeCString(co->gc, "match fail "), pat);
return;
}
}
case 3:
{
Obj x9223090566220972384= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x9223090566220972384) {
Obj x9223090566220972544 = PRIM_EQ(pat, expr);
if (True == x9223090566220972544) {
coraReturn(co, body);
return;
} else {
Obj x9223090566220972992 = makeCons(co->gc, expr, Nil);
Obj x9223090566220973120 = makeCons(co->gc, pat, x9223090566220972992);
Obj x9223090566220973152 = makeCons(co->gc, getBinding(co, packageID, 113).name, x9223090566220973120);
Obj x9223090566220973376 = makeCons(co->gc, cc, Nil);
Obj x9223090566220973408 = makeCons(co->gc, x9223090566220973376, Nil);
Obj x9223090566220973664 = makeCons(co->gc, body, x9223090566220973408);
Obj x9223090566220973696 = makeCons(co->gc, x9223090566220973152, x9223090566220973664);
Obj x9223090566220973728 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566220973696);
coraReturn(co, x9223090566220973728);
return;
}
} else {
Obj x9223090566220973888 = primIsSymbol(pat);
if (True == x9223090566220973888) {
Obj x9223090566220974176 = makeCons(co->gc, body, Nil);
Obj x9223090566220974208 = makeCons(co->gc, expr, x9223090566220974176);
Obj x9223090566220974240 = makeCons(co->gc, pat, x9223090566220974208);
Obj x9223090566220974272 = makeCons(co->gc, getBinding(co, packageID, 129).name, x9223090566220974240);
coraReturn(co, x9223090566220974272);
return;
} else {
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
saveCont(co, clofun38, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), pat);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 131)), x);
return;
}
case 1:
{
Obj x9223090566221033440= co->res;
Obj x = R[1];
if (True == x9223090566221033440) {
Obj x9223090566220972320 = primIsSymbol(x);
Obj x9223090566220972352 = primNot(x9223090566220972320);
if (True == x9223090566220972352) {
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), pat);
return;
}
case 1:
{
Obj x9223090566221030400= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = x9223090566221030400;
Obj x9223090566223196448 = makeNative(co->gc, 3, clofun35, 1, 5, x, y, expr, body, cc);
Obj x9223090566221032544 = PRIM_ISCONS(expr);
if (True == x9223090566221032544) {
Obj x9223090566221032768 = PRIM_CAR(expr);
Obj x9223090566221032800 = PRIM_EQ(x9223090566221032768, getBinding(co, packageID, 152).name);
if (True == x9223090566221032800) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196448, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196448, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196448, False);
return;
}
}
case 2:
{
Obj x9223090566221030240= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = x9223090566221030240;
R[1] = x;
R[2] = body;
R[3] = cc;
R[4] = expr;
saveCont(co, clofun36, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), pat);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196480 = R[1];
if (True == x9223090566223196480) {
saveCont(co, clofun35, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), closureRef(R[0], 2));
return;
} else {
Obj x9223090566221031360 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj x9223090566221031392 = makeCons(co->gc, getBinding(co, packageID, 116).name, x9223090566221031360);
Obj x9223090566221031680 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj x9223090566221031712 = makeCons(co->gc, getBinding(co, packageID, 115).name, x9223090566221031680);
Obj x9223090566221031936 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj x9223090566221031968 = makeCons(co->gc, getBinding(co, packageID, 114).name, x9223090566221031936);
R[1] = x9223090566221031712;
R[2] = x9223090566221031392;
saveCont(co, clofun35, 5, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), x9223090566221031968, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj x9223090566221031072= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), e1, x9223090566221031072, closureRef(R[0], 4));
return;
}
case 2:
{
Obj x9223090566221030912= co->res;
Obj e1 = R[1];
Obj e2 = x9223090566221030912;
R[1] = e1;
saveCont(co, clofun35, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x9223090566221030752= co->res;
Obj e1 = x9223090566221030752;
R[1] = e1;
saveCont(co, clofun35, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), closureRef(R[0], 2));
return;
}
case 4:
{
Obj x9223090566221032032= co->res;
Obj x9223090566221031392 = R[1];
Obj x9223090566221032192 = makeCons(co->gc, closureRef(R[0], 4), Nil);
Obj x9223090566221032224 = makeCons(co->gc, x9223090566221032192, Nil);
Obj x9223090566221032256 = makeCons(co->gc, x9223090566221032032, x9223090566221032224);
Obj x9223090566221032288 = makeCons(co->gc, x9223090566221031392, x9223090566221032256);
Obj x9223090566221032320 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566221032288);
coraReturn(co, x9223090566221032320);
return;
}
case 5:
{
Obj x9223090566221032000= co->res;
Obj x9223090566221031712 = R[1];
Obj x9223090566221031392 = R[2];
R[1] = x9223090566221031392;
saveCont(co, clofun35, 4, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), x9223090566221031712, x9223090566221032000, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566221029856 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), x9223090566221029856);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj x9223090566221045152 = PRIM_CDR(pat);
R[1] = pat;
saveCont(co, clofun33, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), x9223090566221045152);
return;
}
case 1:
{
Obj x9223090566221029376= co->res;
Obj x9223090566221045504 = R[1];
Obj x9223090566221029408 = makeCons(co->gc, x9223090566221029376, Nil);
Obj x9223090566221029440 = makeCons(co->gc, x9223090566221045504, x9223090566221029408);
Obj x9223090566221029472 = makeCons(co->gc, getBinding(co, packageID, 152).name, x9223090566221029440);
coraReturn(co, x9223090566221029472);
return;
}
case 2:
{
Obj x9223090566221045184= co->res;
Obj pat = R[1];
if (True == x9223090566221045184) {
Obj x9223090566221045280 = PRIM_CAR(pat);
coraReturn(co, x9223090566221045280);
return;
} else {
Obj x9223090566221045504 = PRIM_CAR(pat);
Obj x9223090566221045728 = PRIM_CDR(pat);
R[1] = x9223090566221045504;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), x9223090566221045728);
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
Obj x9223090566221044544 = PRIM_EQ(x, True);
if (True == x9223090566221044544) {
coraReturn(co, True);
return;
} else {
Obj x9223090566221044704 = PRIM_EQ(x, False);
if (True == x9223090566221044704) {
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
Obj x9223090566221044160 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), x9223090566221044160);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x9223090566221042624 = PRIM_EQ(Nil, l);
if (True == x9223090566221042624) {
coraReturn(co, True);
return;
} else {
Obj x9223090566221042848 = PRIM_CAR(l);
Obj x9223090566221042880 = PRIM_EQ(x9223090566221042848, False);
if (True == x9223090566221042880) {
coraReturn(co, False);
return;
} else {
Obj x9223090566221043104 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun30, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), x9223090566221043104);
return;
}
}
}
case 1:
{
Obj x9223090566221043136= co->res;
Obj l = R[1];
Obj more = x9223090566221043136;
Obj x9223090566221043296 = PRIM_EQ(more, False);
if (True == x9223090566221043296) {
coraReturn(co, False);
return;
} else {
Obj x9223090566221043520 = PRIM_CAR(l);
Obj x9223090566221043680 = makeCons(co->gc, False, Nil);
Obj x9223090566221043712 = makeCons(co->gc, more, x9223090566221043680);
Obj x9223090566221043744 = makeCons(co->gc, x9223090566221043520, x9223090566221043712);
Obj x9223090566221043776 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566221043744);
coraReturn(co, x9223090566221043776);
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
Obj x9223090566221042240 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), x9223090566221042240);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x9223090566221073472 = PRIM_EQ(l, Nil);
if (True == x9223090566221073472) {
coraReturn(co, False);
return;
} else {
Obj x9223090566221073696 = PRIM_CAR(l);
Obj x9223090566221073728 = PRIM_EQ(x9223090566221073696, True);
if (True == x9223090566221073728) {
coraReturn(co, True);
return;
} else {
Obj x9223090566221073952 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun28, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), x9223090566221073952);
return;
}
}
}
case 1:
{
Obj x9223090566221073984= co->res;
Obj l = R[1];
Obj more = x9223090566221073984;
Obj x9223090566221074144 = PRIM_EQ(more, True);
if (True == x9223090566221074144) {
coraReturn(co, True);
return;
} else {
Obj x9223090566221074368 = PRIM_CAR(l);
Obj x9223090566221041760 = makeCons(co->gc, more, Nil);
Obj x9223090566221041792 = makeCons(co->gc, True, x9223090566221041760);
Obj x9223090566221041824 = makeCons(co->gc, x9223090566221074368, x9223090566221041792);
Obj x9223090566221041856 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566221041824);
coraReturn(co, x9223090566221041856);
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
Obj x9223090566221071936 = PRIM_CDR(exp);
Obj x9223090566221071968 = PRIM_EQ(Nil, x9223090566221071936);
if (True == x9223090566221071968) {
Obj x9223090566221072128 = makeCons(co->gc, makeCString(co->gc, "no cond match"), Nil);
Obj x9223090566221072160 = makeCons(co->gc, getBinding(co, packageID, 127).name, x9223090566221072128);
coraReturn(co, x9223090566221072160);
return;
} else {
R[1] = exp;
saveCont(co, clofun27, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
}
case 1:
{
Obj x9223090566221072928= co->res;
Obj x9223090566221072704 = R[1];
Obj x9223090566221072544 = R[2];
Obj x9223090566221072960 = makeCons(co->gc, getBinding(co, packageID, 128).name, x9223090566221072928);
Obj x9223090566221072992 = makeCons(co->gc, x9223090566221072960, Nil);
Obj x9223090566221073024 = makeCons(co->gc, x9223090566221072704, x9223090566221072992);
Obj x9223090566221073056 = makeCons(co->gc, x9223090566221072544, x9223090566221073024);
Obj x9223090566221073088 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566221073056);
coraReturn(co, x9223090566221073088);
return;
}
case 2:
{
Obj x9223090566221072704= co->res;
Obj exp = R[1];
Obj x9223090566221072544 = R[2];
R[1] = x9223090566221072704;
R[2] = x9223090566221072544;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj x9223090566221072320= co->res;
Obj exp = R[1];
Obj curr = x9223090566221072320;
Obj x9223090566221072544 = PRIM_CAR(curr);
R[1] = exp;
R[2] = x9223090566221072544;
saveCont(co, clofun27, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), curr);
return;
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566221071488 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), x9223090566221071488);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566221111168 = PRIM_CDR(exp);
R[1] = exp;
saveCont(co, clofun25, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), x9223090566221111168);
return;
}
case 1:
{
Obj x9223090566221070976= co->res;
Obj x9223090566221070720 = R[1];
Obj x9223090566221070560 = R[2];
Obj x9223090566221071008 = makeCons(co->gc, x9223090566221070976, Nil);
Obj x9223090566221071040 = makeCons(co->gc, x9223090566221070720, x9223090566221071008);
Obj x9223090566221071072 = makeCons(co->gc, x9223090566221070560, x9223090566221071040);
Obj x9223090566221071104 = makeCons(co->gc, getBinding(co, packageID, 129).name, x9223090566221071072);
coraReturn(co, x9223090566221071104);
return;
}
case 2:
{
Obj x9223090566221070944= co->res;
Obj x9223090566221070720 = R[1];
Obj x9223090566221070560 = R[2];
R[1] = x9223090566221070720;
R[2] = x9223090566221070560;
saveCont(co, clofun25, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), x9223090566221070944);
return;
}
case 3:
{
Obj x9223090566221070720= co->res;
Obj exp = R[1];
Obj x9223090566221070560 = R[2];
R[1] = x9223090566221070720;
R[2] = x9223090566221070560;
saveCont(co, clofun25, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 4:
{
Obj x9223090566221111200= co->res;
Obj exp = R[1];
if (True == x9223090566221111200) {
Obj x9223090566221070336 = PRIM_CAR(exp);
coraReturn(co, x9223090566221070336);
return;
} else {
Obj x9223090566221070560 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x9223090566221070560;
saveCont(co, clofun25, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
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
Obj x9223090566221110688 = PRIM_ISCONS(x);
Obj x9223090566221110720 = primNot(x9223090566221110688);
coraReturn(co, x9223090566221110720);
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
Obj x9223090566221109888 = PRIM_ISCONS(l);
if (True == x9223090566221109888) {
Obj x9223090566221110112 = PRIM_CAR(l);
Obj x9223090566221110144 = PRIM_EQ(x9223090566221110112, x);
if (True == x9223090566221110144) {
coraReturn(co, True);
return;
} else {
Obj x9223090566221110304 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), x, x9223090566221110304);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 1:
{
Obj x9223090566221109312= co->res;
Obj x9223090566221109152 = R[1];
Obj x9223090566221108864 = R[2];
Obj x9223090566221109344 = makeCons(co->gc, x9223090566221109312, Nil);
Obj x9223090566221109376 = makeCons(co->gc, x9223090566221109152, x9223090566221109344);
Obj x9223090566221109408 = makeCons(co->gc, getBinding(co, packageID, 140).name, x9223090566221109376);
Obj x9223090566221109440 = makeCons(co->gc, x9223090566221109408, Nil);
Obj x9223090566221109472 = makeCons(co->gc, x9223090566221108864, x9223090566221109440);
Obj x9223090566221109504 = makeCons(co->gc, getBinding(co, packageID, 133).name, x9223090566221109472);
coraReturn(co, x9223090566221109504);
return;
}
case 2:
{
Obj x9223090566221109152= co->res;
Obj exp = R[1];
Obj x9223090566221108864 = R[2];
R[1] = x9223090566221109152;
R[2] = x9223090566221108864;
saveCont(co, clofun22, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 155)), exp);
return;
}
case 3:
{
Obj x9223090566221108864= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = x9223090566221108864;
saveCont(co, clofun22, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), exp);
return;
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566221108416 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), x9223090566221108416);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 1:
{
Obj x9223090566221107712= co->res;
Obj x9223090566221107616 = R[1];
Obj x9223090566221107328 = R[2];
Obj x9223090566221107744 = makeCons(co->gc, x9223090566221107616, x9223090566221107712);
Obj x9223090566221107776 = makeCons(co->gc, getBinding(co, packageID, 140).name, x9223090566221107744);
Obj x9223090566221107808 = makeCons(co->gc, x9223090566221107776, Nil);
Obj x9223090566221107840 = makeCons(co->gc, x9223090566221107328, x9223090566221107808);
Obj x9223090566221107872 = makeCons(co->gc, getBinding(co, packageID, 144).name, x9223090566221107840);
coraReturn(co, x9223090566221107872);
return;
}
case 2:
{
Obj x9223090566221107616= co->res;
Obj exp = R[1];
Obj x9223090566221107328 = R[2];
R[1] = x9223090566221107616;
R[2] = x9223090566221107328;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 154)), exp);
return;
}
case 3:
{
Obj x9223090566221107264= co->res;
Obj exp = R[1];
Obj x9223090566221107296 = makeCons(co->gc, x9223090566221107264, Nil);
Obj x9223090566221107328 = makeCons(co->gc, getBinding(co, packageID, 139).name, x9223090566221107296);
R[1] = exp;
R[2] = x9223090566221107328;
saveCont(co, clofun20, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), exp);
return;
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566221182400 = PRIM_ISCONS(exp);
if (True == x9223090566221182400) {
Obj x9223090566221182624 = PRIM_CAR(exp);
Obj x9223090566221182656 = PRIM_EQ(x9223090566221182624, globalRef(co, getBinding(co, packageID, 145)));
if (True == x9223090566221182656) {
Obj x9223090566221182752 = PRIM_CDR(exp);
coraReturn(co, x9223090566221182752);
return;
} else {
Obj x9223090566221182976 = PRIM_CAR(exp);
Obj x9223090566221183008 = PRIM_EQ(x9223090566221182976, getBinding(co, packageID, 140).name);
if (True == x9223090566221183008) {
R[1] = exp;
saveCont(co, clofun19, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
} else {
Obj x9223090566221183808 = PRIM_CAR(exp);
Obj x9223090566221183840 = PRIM_EQ(x9223090566221183808, getBinding(co, packageID, 139).name);
if (True == x9223090566221183840) {
coraReturn(co, exp);
return;
} else {
R[1] = exp;
saveCont(co, clofun19, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 142)), exp);
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
Obj x9223090566221183488= co->res;
Obj x9223090566221183232 = R[1];
Obj x9223090566221183520 = makeCons(co->gc, x9223090566221183488, Nil);
Obj x9223090566221183552 = makeCons(co->gc, x9223090566221183232, x9223090566221183520);
Obj x9223090566221183584 = makeCons(co->gc, getBinding(co, packageID, 140).name, x9223090566221183552);
coraReturn(co, x9223090566221183584);
return;
}
case 2:
{
Obj x9223090566221183456= co->res;
Obj x9223090566221183232 = R[1];
R[1] = x9223090566221183232;
saveCont(co, clofun19, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 141)), x9223090566221183456);
return;
}
case 3:
{
Obj x9223090566221183232= co->res;
Obj exp = R[1];
R[1] = x9223090566221183232;
saveCont(co, clofun19, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), exp);
return;
}
case 4:
{
Obj x9223090566221184352= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun18, 1, 1, exp), x9223090566221184352);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj x9223090566221184128 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == x9223090566221184128) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), globalRef(co, getBinding(co, packageID, 141)), exp1);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 141)), exp1);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 143)), exp, globalRef(co, getBinding(co, packageID, 146)));
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
Obj x9223090566221884928 = PRIM_EQ(Nil, macros);
if (True == x9223090566221884928) {
coraReturn(co, exp);
return;
} else {
Obj x9223090566221181728 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun15, 1, 2, macros, exp), x9223090566221181728);
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
Obj x9223090566223196384 = makeNative(co->gc, 2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x9223090566221181280 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566221181280) {
Obj x9223090566221181504 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566221181600 = PRIM_CAR(item);
Obj x9223090566221181632 = PRIM_EQ(x9223090566221181504, x9223090566221181600);
if (True == x9223090566221181632) {
co->ctx.sp = R;
coraCall1(co, x9223090566223196384, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196384, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566223196384, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566223196416 = R[1];
if (True == x9223090566223196416) {
Obj x9223090566221885408 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, x9223090566221885408, closureRef(R[0], 1));
return;
} else {
Obj x9223090566221181056 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 143)), closureRef(R[0], 1), x9223090566221181056);
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
Obj x9223090566221884480 = makeCons(co->gc, n, v);
Obj x9223090566221884512 = makeCons(co->gc, x9223090566221884480, globalRef(co, getBinding(co, packageID, 146)));
Obj x9223090566221884544 = primSet(co, getBinding(co, packageID, 146).name, x9223090566221884512);
coraReturn(co, x9223090566221884544);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 148)), Nil, f, l);
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
Obj x9223090566221882784 = PRIM_ISCONS(l);
if (True == x9223090566221882784) {
Obj x9223090566221883072 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
saveCont(co, clofun11, 1, R);
coraCall1(co, f, x9223090566221883072);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj x9223090566221883104= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj x9223090566221883136 = makeCons(co->gc, x9223090566221883104, res);
Obj x9223090566221883264 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 148)), x9223090566221883136, f, x9223090566221883264);
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
Obj x9223090566221881760 = PRIM_ISCONS(l);
if (True == x9223090566221881760) {
Obj x9223090566221881984 = PRIM_CAR(l);
Obj x9223090566221882016 = makeCons(co->gc, x9223090566221881984, res);
Obj x9223090566221882112 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 150)), x9223090566221882016, x9223090566221882112);
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
Obj x9223090566221881376 = PRIM_ISCONS(x);
coraReturn(co, x9223090566221881376);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x9223090566223199136 = PRIM_ISCONS(exp);
if (True == x9223090566223199136) {
Obj x9223090566223199360 = PRIM_CAR(exp);
Obj x9223090566223199744 = PRIM_CDR(exp);
R[1] = x9223090566223199360;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), x9223090566223199744);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj x9223090566223199776= co->res;
Obj x9223090566223199360 = R[1];
Obj x9223090566223199808 = makeCons(co->gc, x9223090566223199776, Nil);
Obj x9223090566223199872 = makeCons(co->gc, x9223090566223199360, x9223090566223199808);
Obj x9223090566223199904 = makeCons(co->gc, getBinding(co, packageID, 152).name, x9223090566223199872);
coraReturn(co, x9223090566223199904);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566223198496 = PRIM_CDR(x);
Obj x9223090566223198528 = PRIM_CDR(x9223090566223198496);
Obj x9223090566223198560 = PRIM_CDR(x9223090566223198528);
coraReturn(co, x9223090566223198560);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566223197888 = PRIM_CDR(x);
Obj x9223090566223197920 = PRIM_CDR(x9223090566223197888);
Obj x9223090566223197952 = PRIM_CDR(x9223090566223197920);
Obj x9223090566223197984 = PRIM_CAR(x9223090566223197952);
coraReturn(co, x9223090566223197984);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566223197152 = PRIM_CDR(x);
Obj x9223090566223197184 = PRIM_CDR(x9223090566223197152);
Obj x9223090566223197216 = PRIM_CAR(x9223090566223197184);
coraReturn(co, x9223090566223197216);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566220973440 = PRIM_CDR(x);
Obj x9223090566220973472 = PRIM_CDR(x9223090566220973440);
coraReturn(co, x9223090566220973472);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566220973024 = PRIM_CAR(x);
Obj x9223090566220973056 = PRIM_CDR(x9223090566220973024);
coraReturn(co, x9223090566220973056);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566220972608 = PRIM_CAR(x);
Obj x9223090566220972640 = PRIM_CAR(x9223090566220972608);
coraReturn(co, x9223090566220972640);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566220972192 = PRIM_CDR(x);
Obj x9223090566220972224 = PRIM_CAR(x9223090566220972192);
coraReturn(co, x9223090566220972224);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566221033248 = PRIM_EQ(x, Nil);
coraReturn(co, x9223090566221033248);
return;
}
}
}

