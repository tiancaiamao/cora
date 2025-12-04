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
Binding *__symbolTable = malloc(sizeof(Binding) * 162);
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
Obj _3512466_37 = primSet(co, getBinding(co, packageID, 161).name, makeNative(co->gc, 2, clofun0, 1, 0));
Obj _3512469_37 = primSet(co, getBinding(co, packageID, 160).name, makeNative(co->gc, 2, clofun1, 1, 0));
Obj _3512472_37 = primSet(co, getBinding(co, packageID, 159).name, makeNative(co->gc, 2, clofun2, 1, 0));
Obj _3512475_37 = primSet(co, getBinding(co, packageID, 158).name, makeNative(co->gc, 2, clofun3, 1, 0));
Obj _3512478_37 = primSet(co, getBinding(co, packageID, 157).name, makeNative(co->gc, 2, clofun4, 1, 0));
Obj _3512482_37 = primSet(co, getBinding(co, packageID, 156).name, makeNative(co->gc, 2, clofun5, 1, 0));
Obj _3512487_37 = primSet(co, getBinding(co, packageID, 155).name, makeNative(co->gc, 2, clofun6, 1, 0));
Obj _3512491_37 = primSet(co, getBinding(co, packageID, 154).name, makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3512499_37 = primSet(co, getBinding(co, packageID, 153).name, makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3512501_37 = primSet(co, getBinding(co, packageID, 151).name, makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3512506_37 = primSet(co, getBinding(co, packageID, 150).name, makeNative(co->gc, 3, clofun10, 2, 0));
saveCont(co, clofun95, 15, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 150)), Nil);
return;
}
case 1:
{
Obj _3512986_37= co->res;
Obj _3512992_37 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 3, clofun80, 2, 0));
Obj _3513004_37 = primSet(co, getBinding(co, packageID, 71).name, makeNative(co->gc, 5, clofun81, 3, 0));
Obj _3513005_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3513006_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513005_37);
Obj _3513007_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3513006_37);
Obj _3513008_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3513009_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513008_37);
Obj _3513010_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3513009_37);
Obj _3513011_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3513012_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513011_37);
Obj _3513013_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3513012_37);
Obj _3513014_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3513015_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513014_37);
Obj _3513016_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3513015_37);
Obj _3513017_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3513018_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513017_37);
Obj _3513019_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3513018_37);
Obj _3513020_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3513021_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513020_37);
Obj _3513022_37 = makeCons(co->gc, getBinding(co, packageID, 67).name, _3513021_37);
Obj _3513023_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3513024_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513023_37);
Obj _3513025_37 = makeCons(co->gc, getBinding(co, packageID, 66).name, _3513024_37);
Obj _3513026_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3513027_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513026_37);
Obj _3513028_37 = makeCons(co->gc, getBinding(co, packageID, 65).name, _3513027_37);
Obj _3513029_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3513030_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513029_37);
Obj _3513031_37 = makeCons(co->gc, getBinding(co, packageID, 64).name, _3513030_37);
Obj _3513032_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3513033_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513032_37);
Obj _3513034_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3513033_37);
Obj _3513035_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3513036_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513035_37);
Obj _3513037_37 = makeCons(co->gc, getBinding(co, packageID, 63).name, _3513036_37);
Obj _3513038_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3513039_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513038_37);
Obj _3513040_37 = makeCons(co->gc, getBinding(co, packageID, 62).name, _3513039_37);
Obj _3513041_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3513042_37 = makeCons(co->gc, MAKE_NUMBER(0), _3513041_37);
Obj _3513043_37 = makeCons(co->gc, getBinding(co, packageID, 61).name, _3513042_37);
Obj _3513044_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3513045_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513044_37);
Obj _3513046_37 = makeCons(co->gc, getBinding(co, packageID, 60).name, _3513045_37);
Obj _3513047_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3513048_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513047_37);
Obj _3513049_37 = makeCons(co->gc, getBinding(co, packageID, 59).name, _3513048_37);
Obj _3513050_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3513051_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513050_37);
Obj _3513052_37 = makeCons(co->gc, getBinding(co, packageID, 58).name, _3513051_37);
Obj _3513053_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3513054_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513053_37);
Obj _3513055_37 = makeCons(co->gc, getBinding(co, packageID, 57).name, _3513054_37);
Obj _3513056_37 = makeCons(co->gc, _3513055_37, Nil);
Obj _3513057_37 = makeCons(co->gc, _3513052_37, _3513056_37);
Obj _3513058_37 = makeCons(co->gc, _3513049_37, _3513057_37);
Obj _3513059_37 = makeCons(co->gc, _3513046_37, _3513058_37);
Obj _3513060_37 = makeCons(co->gc, _3513043_37, _3513059_37);
Obj _3513061_37 = makeCons(co->gc, _3513040_37, _3513060_37);
Obj _3513062_37 = makeCons(co->gc, _3513037_37, _3513061_37);
Obj _3513063_37 = makeCons(co->gc, _3513034_37, _3513062_37);
Obj _3513064_37 = makeCons(co->gc, _3513031_37, _3513063_37);
Obj _3513065_37 = makeCons(co->gc, _3513028_37, _3513064_37);
Obj _3513066_37 = makeCons(co->gc, _3513025_37, _3513065_37);
Obj _3513067_37 = makeCons(co->gc, _3513022_37, _3513066_37);
Obj _3513068_37 = makeCons(co->gc, _3513019_37, _3513067_37);
Obj _3513069_37 = makeCons(co->gc, _3513016_37, _3513068_37);
Obj _3513070_37 = makeCons(co->gc, _3513013_37, _3513069_37);
Obj _3513071_37 = makeCons(co->gc, _3513010_37, _3513070_37);
Obj _3513072_37 = makeCons(co->gc, _3513007_37, _3513071_37);
Obj _3513073_37 = primSet(co, getBinding(co, packageID, 69).name, _3513072_37);
Obj _3513088_37 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 3, clofun83, 2, 0));
Obj _3513092_37 = primSet(co, getBinding(co, packageID, 55).name, makeNative(co->gc, 2, clofun84, 1, 0));
Obj _3513270_37 = primSet(co, getBinding(co, packageID, 93).name, makeNative(co->gc, 5, clofun94, 4, 0));
Obj _3513271_37 = makeCons(co->gc, getBinding(co, packageID, 98).name, Nil);
Obj _3513272_37 = makeCons(co->gc, getBinding(co, packageID, 99).name, _3513271_37);
Obj _3513273_37 = makeCons(co->gc, getBinding(co, packageID, 101).name, _3513272_37);
Obj _3513274_37 = makeCons(co->gc, getBinding(co, packageID, 132).name, _3513273_37);
Obj _3513275_37 = makeCons(co->gc, getBinding(co, packageID, 138).name, _3513274_37);
Obj _3513276_37 = makeCons(co->gc, getBinding(co, packageID, 147).name, _3513275_37);
Obj _3513277_37 = makeCons(co->gc, getBinding(co, packageID, 149).name, _3513276_37);
Obj _3513278_37 = makeCons(co->gc, getBinding(co, packageID, 39).name, _3513277_37);
Obj _3513279_37 = makeCons(co->gc, getBinding(co, packageID, 40).name, _3513278_37);
Obj _3513280_37 = makeCons(co->gc, getBinding(co, packageID, 41).name, _3513279_37);
Obj _3513281_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3513280_37);
Obj _3513282_37 = makeCons(co->gc, getBinding(co, packageID, 42).name, _3513281_37);
Obj _3513283_37 = makeCons(co->gc, getBinding(co, packageID, 43).name, _3513282_37);
Obj _3513284_37 = makeCons(co->gc, getBinding(co, packageID, 70).name, _3513283_37);
Obj _3513285_37 = makeCons(co->gc, getBinding(co, packageID, 44).name, _3513284_37);
Obj _3513286_37 = makeCons(co->gc, getBinding(co, packageID, 45).name, _3513285_37);
Obj _3513287_37 = makeCons(co->gc, getBinding(co, packageID, 46).name, _3513286_37);
Obj _3513288_37 = makeCons(co->gc, getBinding(co, packageID, 47).name, _3513287_37);
Obj _3513289_37 = makeCons(co->gc, getBinding(co, packageID, 48).name, _3513288_37);
Obj _3513290_37 = makeCons(co->gc, getBinding(co, packageID, 49).name, _3513289_37);
Obj _3513291_37 = makeCons(co->gc, getBinding(co, packageID, 50).name, _3513290_37);
Obj _3513292_37 = makeCons(co->gc, getBinding(co, packageID, 51).name, _3513291_37);
Obj _3513293_37 = makeCons(co->gc, getBinding(co, packageID, 52).name, _3513292_37);
Obj _3513294_37 = makeCons(co->gc, getBinding(co, packageID, 72).name, _3513293_37);
Obj _3513295_37 = makeCons(co->gc, getBinding(co, packageID, 74).name, _3513294_37);
Obj _3513296_37 = makeCons(co->gc, getBinding(co, packageID, 73).name, _3513295_37);
Obj _3513297_37 = makeCons(co->gc, getBinding(co, packageID, 161).name, _3513296_37);
Obj _3513298_37 = makeCons(co->gc, getBinding(co, packageID, 54).name, _3513297_37);
Obj _3513299_37 = makeCons(co->gc, getBinding(co, packageID, 121).name, _3513298_37);
Obj _3513300_37 = makeCons(co->gc, getBinding(co, packageID, 131).name, _3513299_37);
Obj _3513301_37 = makeCons(co->gc, getBinding(co, packageID, 151).name, _3513300_37);
Obj _3513302_37 = makeCons(co->gc, getBinding(co, packageID, 154).name, _3513301_37);
Obj _3513303_37 = makeCons(co->gc, getBinding(co, packageID, 155).name, _3513302_37);
Obj _3513304_37 = makeCons(co->gc, getBinding(co, packageID, 156).name, _3513303_37);
Obj _3513305_37 = makeCons(co->gc, getBinding(co, packageID, 157).name, _3513304_37);
Obj _3513306_37 = makeCons(co->gc, getBinding(co, packageID, 158).name, _3513305_37);
Obj _3513307_37 = makeCons(co->gc, getBinding(co, packageID, 159).name, _3513306_37);
Obj _3513308_37 = makeCons(co->gc, getBinding(co, packageID, 160).name, _3513307_37);
Obj _3513309_37 = primSet(co, getBinding(co, packageID, 53).name, _3513308_37);
Obj _3513310_37 = primSet(co, getBinding(co, packageID, 38).name, globalRef(co, getBinding(co, packageID, 160)));
Obj _3513311_37 = primSet(co, getBinding(co, packageID, 37).name, globalRef(co, getBinding(co, packageID, 159)));
Obj _3513312_37 = primSet(co, getBinding(co, packageID, 36).name, globalRef(co, getBinding(co, packageID, 158)));
Obj _3513313_37 = primSet(co, getBinding(co, packageID, 35).name, globalRef(co, getBinding(co, packageID, 157)));
Obj _3513314_37 = primSet(co, getBinding(co, packageID, 34).name, globalRef(co, getBinding(co, packageID, 156)));
Obj _3513315_37 = primSet(co, getBinding(co, packageID, 33).name, globalRef(co, getBinding(co, packageID, 155)));
Obj _3513316_37 = primSet(co, getBinding(co, packageID, 32).name, globalRef(co, getBinding(co, packageID, 154)));
Obj _3513317_37 = primSet(co, getBinding(co, packageID, 31).name, globalRef(co, getBinding(co, packageID, 151)));
Obj _3513318_37 = primSet(co, getBinding(co, packageID, 30).name, globalRef(co, getBinding(co, packageID, 131)));
Obj _3513319_37 = primSet(co, getBinding(co, packageID, 29).name, globalRef(co, getBinding(co, packageID, 121)));
Obj _3513320_37 = primSet(co, getBinding(co, packageID, 28).name, globalRef(co, getBinding(co, packageID, 161)));
Obj _3513321_37 = primSet(co, getBinding(co, packageID, 27).name, globalRef(co, getBinding(co, packageID, 54)));
Obj _3513322_37 = primSet(co, getBinding(co, packageID, 26).name, globalRef(co, getBinding(co, packageID, 73)));
Obj _3513323_37 = primSet(co, getBinding(co, packageID, 25).name, globalRef(co, getBinding(co, packageID, 74)));
Obj _3513324_37 = primSet(co, getBinding(co, packageID, 24).name, globalRef(co, getBinding(co, packageID, 72)));
Obj _3513325_37 = primSet(co, getBinding(co, packageID, 23).name, globalRef(co, getBinding(co, packageID, 52)));
Obj _3513326_37 = primSet(co, getBinding(co, packageID, 22).name, globalRef(co, getBinding(co, packageID, 51)));
Obj _3513327_37 = primSet(co, getBinding(co, packageID, 21).name, globalRef(co, getBinding(co, packageID, 50)));
Obj _3513328_37 = primSet(co, getBinding(co, packageID, 20).name, globalRef(co, getBinding(co, packageID, 49)));
Obj _3513329_37 = primSet(co, getBinding(co, packageID, 19).name, globalRef(co, getBinding(co, packageID, 48)));
Obj _3513330_37 = primSet(co, getBinding(co, packageID, 18).name, globalRef(co, getBinding(co, packageID, 47)));
Obj _3513331_37 = primSet(co, getBinding(co, packageID, 17).name, globalRef(co, getBinding(co, packageID, 46)));
Obj _3513332_37 = primSet(co, getBinding(co, packageID, 16).name, globalRef(co, getBinding(co, packageID, 44)));
Obj _3513333_37 = primSet(co, getBinding(co, packageID, 15).name, globalRef(co, getBinding(co, packageID, 70)));
Obj _3513334_37 = primSet(co, getBinding(co, packageID, 14).name, globalRef(co, getBinding(co, packageID, 45)));
Obj _3513335_37 = primSet(co, getBinding(co, packageID, 13).name, globalRef(co, getBinding(co, packageID, 43)));
Obj _3513336_37 = primSet(co, getBinding(co, packageID, 12).name, globalRef(co, getBinding(co, packageID, 41)));
Obj _3513337_37 = primSet(co, getBinding(co, packageID, 11).name, globalRef(co, getBinding(co, packageID, 42)));
Obj _3513338_37 = primSet(co, getBinding(co, packageID, 10).name, globalRef(co, getBinding(co, packageID, 81)));
Obj _3513339_37 = primSet(co, getBinding(co, packageID, 9).name, globalRef(co, getBinding(co, packageID, 40)));
Obj _3513340_37 = primSet(co, getBinding(co, packageID, 8).name, globalRef(co, getBinding(co, packageID, 39)));
Obj _3513341_37 = primSet(co, getBinding(co, packageID, 7).name, globalRef(co, getBinding(co, packageID, 149)));
Obj _3513342_37 = primSet(co, getBinding(co, packageID, 6).name, globalRef(co, getBinding(co, packageID, 147)));
Obj _3513343_37 = primSet(co, getBinding(co, packageID, 5).name, globalRef(co, getBinding(co, packageID, 138)));
Obj _3513344_37 = primSet(co, getBinding(co, packageID, 4).name, globalRef(co, getBinding(co, packageID, 132)));
Obj _3513345_37 = primSet(co, getBinding(co, packageID, 3).name, globalRef(co, getBinding(co, packageID, 101)));
Obj _3513346_37 = primSet(co, getBinding(co, packageID, 2).name, globalRef(co, getBinding(co, packageID, 99)));
Obj _3513347_37 = primSet(co, getBinding(co, packageID, 1).name, globalRef(co, getBinding(co, packageID, 98)));
Obj _3513348_37 = primSet(co, getBinding(co, packageID, 0).name, globalRef(co, getBinding(co, packageID, 56)));
coraReturn(co, _3513348_37);
return;
}
case 2:
{
Obj _3512936_37= co->res;
Obj _3512965_37 = primSet(co, getBinding(co, packageID, 83).name, makeNative(co->gc, 5, clofun75, 4, 0));
Obj _3512966_37 = primSet(co, getBinding(co, packageID, 80).name, makeNative(co->gc, 3, clofun76, 2, 0));
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 79).name, makeNative(co->gc, 2, clofun79, 1, 0));
return;
}
case 3:
{
Obj _3512919_37= co->res;
Obj _3512933_37 = primSet(co, getBinding(co, packageID, 85).name, makeNative(co->gc, 3, clofun71, 2, 0));
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 84).name, makeNative(co->gc, 2, clofun72, 1, 0));
return;
}
case 4:
{
Obj _3512897_37= co->res;
Obj _3512917_37 = primSet(co, getBinding(co, packageID, 88).name, makeNative(co->gc, 2, clofun69, 1, 0));
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 86).name, makeNative(co->gc, 2, clofun70, 1, 0));
return;
}
case 5:
{
Obj _3512866_37= co->res;
Obj _3512867_37 = primSet(co, getBinding(co, packageID, 94).name, makeNative(co->gc, 2, clofun61, 1, 0));
Obj _3512868_37 = primSet(co, getBinding(co, packageID, 92).name, makeNative(co->gc, 2, clofun62, 1, 0));
Obj _3512871_37 = primSet(co, getBinding(co, packageID, 138).name, makeNative(co->gc, 2, clofun63, 1, 0));
Obj _3512895_37 = primSet(co, getBinding(co, packageID, 91).name, makeNative(co->gc, 2, clofun66, 1, 0));
saveCont(co, clofun95, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 89).name, makeNative(co->gc, 2, clofun67, 1, 0));
return;
}
case 6:
{
Obj _3512758_37= co->res;
Obj _3512810_37 = primSet(co, getBinding(co, packageID, 106).name, makeNative(co->gc, 5, clofun48, 3, 0));
Obj _3512811_37 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 2, clofun49, 1, 0));
Obj _3512816_37 = primSet(co, getBinding(co, packageID, 103).name, makeNative(co->gc, 3, clofun50, 2, 0));
Obj _3512820_37 = primSet(co, getBinding(co, packageID, 102).name, makeNative(co->gc, 3, clofun51, 2, 0));
Obj _3512821_37 = primSet(co, getBinding(co, packageID, 101).name, makeNative(co->gc, 2, clofun52, 1, 0));
Obj _3512829_37 = primSet(co, getBinding(co, packageID, 100).name, makeNative(co->gc, 4, clofun53, 3, 0));
Obj _3512830_37 = primSet(co, getBinding(co, packageID, 99).name, makeNative(co->gc, 3, clofun54, 2, 0));
Obj _3512836_37 = primSet(co, getBinding(co, packageID, 98).name, makeNative(co->gc, 3, clofun55, 2, 0));
Obj _3512847_37 = primSet(co, getBinding(co, packageID, 97).name, makeNative(co->gc, 2, clofun58, 1, 0));
Obj _3512853_37 = primSet(co, getBinding(co, packageID, 96).name, makeNative(co->gc, 2, clofun59, 1, 0));
saveCont(co, clofun95, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 95).name, makeNative(co->gc, 3, clofun60, 1, 0));
return;
}
case 7:
{
Obj _3512653_37= co->res;
Obj _3512675_37 = primSet(co, getBinding(co, packageID, 118).name, makeNative(co->gc, 5, clofun36, 4, 0));
Obj _3512708_37 = primSet(co, getBinding(co, packageID, 117).name, makeNative(co->gc, 5, clofun38, 4, 0));
Obj _3512721_37 = primSet(co, getBinding(co, packageID, 111).name, makeNative(co->gc, 3, clofun40, 2, 0));
Obj _3512743_37 = primSet(co, getBinding(co, packageID, 109).name, makeNative(co->gc, 3, clofun42, 2, 0));
Obj _3512757_37 = primSet(co, getBinding(co, packageID, 108).name, makeNative(co->gc, 2, clofun44, 1, 0));
saveCont(co, clofun95, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 107).name, makeNative(co->gc, 2, clofun45, 1, 0));
return;
}
case 8:
{
Obj _3512638_37= co->res;
Obj _3512641_37 = primSet(co, getBinding(co, packageID, 121).name, makeNative(co->gc, 2, clofun32, 1, 0));
Obj _3512651_37 = primSet(co, getBinding(co, packageID, 120).name, makeNative(co->gc, 2, clofun33, 1, 0));
saveCont(co, clofun95, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 119).name, makeNative(co->gc, 2, clofun34, 1, 0));
return;
}
case 9:
{
Obj _3512624_37= co->res;
Obj _3512636_37 = primSet(co, getBinding(co, packageID, 123).name, makeNative(co->gc, 2, clofun30, 1, 0));
saveCont(co, clofun95, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 122).name, makeNative(co->gc, 2, clofun31, 1, 0));
return;
}
case 10:
{
Obj _3512610_37= co->res;
Obj _3512622_37 = primSet(co, getBinding(co, packageID, 125).name, makeNative(co->gc, 2, clofun28, 1, 0));
saveCont(co, clofun95, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 124).name, makeNative(co->gc, 2, clofun29, 1, 0));
return;
}
case 11:
{
Obj _3512596_37= co->res;
saveCont(co, clofun95, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 128).name, makeNative(co->gc, 3, clofun27, 1, 0));
return;
}
case 12:
{
Obj _3512574_37= co->res;
Obj _3512579_37 = primSet(co, getBinding(co, packageID, 132).name, makeNative(co->gc, 3, clofun23, 2, 0));
Obj _3512582_37 = primSet(co, getBinding(co, packageID, 131).name, makeNative(co->gc, 2, clofun24, 1, 0));
Obj _3512594_37 = primSet(co, getBinding(co, packageID, 130).name, makeNative(co->gc, 3, clofun25, 1, 0));
saveCont(co, clofun95, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 129).name, makeNative(co->gc, 2, clofun26, 1, 0));
return;
}
case 13:
{
Obj _3512564_37= co->res;
saveCont(co, clofun95, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 134).name, makeNative(co->gc, 3, clofun22, 1, 0));
return;
}
case 14:
{
Obj _3512562_37= co->res;
saveCont(co, clofun95, 13, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 135).name, makeNative(co->gc, 2, clofun21, 1, 0));
return;
}
case 15:
{
Obj _3512507_37= co->res;
Obj _3512508_37 = primSet(co, getBinding(co, packageID, 149).name, _3512507_37);
Obj _3512514_37 = primSet(co, getBinding(co, packageID, 148).name, makeNative(co->gc, 4, clofun11, 3, 0));
Obj _3512515_37 = primSet(co, getBinding(co, packageID, 147).name, makeNative(co->gc, 3, clofun12, 2, 0));
Obj _3512516_37 = primSet(co, getBinding(co, packageID, 146).name, Nil);
Obj _3512517_37 = primGenSym(co);
Obj _3512518_37 = primSet(co, getBinding(co, packageID, 145).name, _3512517_37);
Obj _3512522_37 = primSet(co, getBinding(co, packageID, 144).name, makeNative(co->gc, 3, clofun13, 2, 0));
Obj _3512531_37 = primSet(co, getBinding(co, packageID, 143).name, makeNative(co->gc, 3, clofun16, 2, 0));
Obj _3512532_37 = primSet(co, getBinding(co, packageID, 142).name, makeNative(co->gc, 2, clofun17, 1, 0));
Obj _3512549_37 = primSet(co, getBinding(co, packageID, 141).name, makeNative(co->gc, 2, clofun19, 1, 0));
Obj _3512550_37 = primSet(co, getBinding(co, packageID, 138).name, globalRef(co, getBinding(co, packageID, 141)));
Obj _3512561_37 = primSet(co, getBinding(co, packageID, 137).name, makeNative(co->gc, 3, clofun20, 1, 0));
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
Obj _3512437_37 = R[1];
Obj _3512438_37 = R[2];
Obj _3512439_37 = R[3];
Obj _3512440_37 = R[4];
Obj _3512461_37 = makeNative(co->gc, 2, clofun93, 1, 4, _3512437_37, _3512438_37, _3512439_37, _3512440_37);
R[1] = _3512440_37;
R[2] = _3512461_37;
saveCont(co, clofun94, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 54)), _3512440_37);
return;
}
case 1:
{
Obj _3513269_37= co->res;
Obj _3512461_37 = R[1];
if (True == _3513269_37) {
co->ctx.sp = R;
coraCall1(co, _3512461_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512461_37, False);
return;
}
}
case 2:
{
Obj _3513268_37= co->res;
Obj _3512440_37 = R[1];
Obj _3512461_37 = R[2];
if (True == _3513268_37) {
co->ctx.sp = R;
coraCall1(co, _3512461_37, True);
return;
} else {
R[1] = _3512461_37;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3512440_37);
return;
}
}
case 3:
{
Obj _3513266_37= co->res;
Obj _3512440_37 = R[1];
Obj _3512461_37 = R[2];
if (True == _3513266_37) {
co->ctx.sp = R;
coraCall1(co, _3512461_37, True);
return;
} else {
Obj _3513267_37 = primIsString(_3512440_37);
if (True == _3513267_37) {
co->ctx.sp = R;
coraCall1(co, _3512461_37, True);
return;
} else {
R[1] = _3512440_37;
R[2] = _3512461_37;
saveCont(co, clofun94, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 121)), _3512440_37);
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
Obj _3512462_37 = R[1];
if (True == _3512462_37) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj _3512442_37 = makeNative(co->gc, 3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3513254_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3513254_37) {
Obj _3513255_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3513256_37 = PRIM_EQ(getBinding(co, packageID, 139).name, _3513255_37);
if (True == _3513256_37) {
Obj _3513257_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513258_37 = PRIM_ISCONS(_3513257_37);
if (True == _3513258_37) {
Obj _3513259_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513260_37 = PRIM_CAR(_3513259_37);
Obj x = _3513260_37;
Obj _3513261_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513262_37 = PRIM_CDR(_3513261_37);
Obj _3513263_37 = PRIM_EQ(Nil, _3513262_37);
if (True == _3513263_37) {
Obj _3513264_37 = makeCons(co->gc, x, Nil);
Obj _3513265_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3513264_37);
coraReturn(co, _3513265_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512442_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512442_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512442_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512442_37);
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
Obj _3513093_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3513093_37) {
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3512444_37 = makeNative(co->gc, 3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513232_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513232_37) {
Obj _3513233_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513234_37 = PRIM_EQ(getBinding(co, packageID, 140).name, _3513233_37);
if (True == _3513234_37) {
Obj _3513235_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513236_37 = PRIM_ISCONS(_3513235_37);
if (True == _3513236_37) {
Obj _3513237_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513238_37 = PRIM_CAR(_3513237_37);
Obj args = _3513238_37;
Obj _3513239_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513240_37 = PRIM_CDR(_3513239_37);
Obj _3513241_37 = PRIM_ISCONS(_3513240_37);
if (True == _3513241_37) {
Obj _3513242_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513243_37 = PRIM_CDR(_3513242_37);
Obj _3513244_37 = PRIM_CAR(_3513243_37);
Obj body = _3513244_37;
Obj _3513245_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513246_37 = PRIM_CDR(_3513245_37);
Obj _3513247_37 = PRIM_CDR(_3513246_37);
Obj _3513248_37 = PRIM_EQ(Nil, _3513247_37);
if (True == _3513248_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512444_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512444_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512444_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512444_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512444_37);
return;
}
}
}
case 1:
{
Obj _3513095_37= co->res;
if (True == _3513095_37) {
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
Obj _3513094_37= co->res;
if (True == _3513094_37) {
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
Obj _3513250_37= co->res;
Obj args = R[1];
Obj _3513251_37 = makeCons(co->gc, _3513250_37, Nil);
Obj _3513252_37 = makeCons(co->gc, args, _3513251_37);
Obj _3513253_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3513252_37);
coraReturn(co, _3513253_37);
return;
}
case 4:
{
Obj _3513249_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun92, 3, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), _3513249_37, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512445_37 = makeNative(co->gc, 1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513188_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513188_37) {
Obj _3513189_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513190_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3513189_37);
if (True == _3513190_37) {
Obj _3513191_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513192_37 = PRIM_ISCONS(_3513191_37);
if (True == _3513192_37) {
Obj _3513193_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513194_37 = PRIM_CAR(_3513193_37);
Obj _3513195_37 = PRIM_ISCONS(_3513194_37);
if (True == _3513195_37) {
Obj _3513196_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513197_37 = PRIM_CAR(_3513196_37);
Obj _3513198_37 = PRIM_CAR(_3513197_37);
Obj _3513199_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3513198_37);
if (True == _3513199_37) {
Obj _3513200_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513201_37 = PRIM_CAR(_3513200_37);
Obj _3513202_37 = PRIM_CDR(_3513201_37);
Obj _3513203_37 = PRIM_ISCONS(_3513202_37);
if (True == _3513203_37) {
Obj _3513204_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513205_37 = PRIM_CAR(_3513204_37);
Obj _3513206_37 = PRIM_CDR(_3513205_37);
Obj _3513207_37 = PRIM_CAR(_3513206_37);
Obj pkg = _3513207_37;
Obj _3513208_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513209_37 = PRIM_CAR(_3513208_37);
Obj _3513210_37 = PRIM_CDR(_3513209_37);
Obj _3513211_37 = PRIM_CDR(_3513210_37);
Obj _3513212_37 = PRIM_EQ(Nil, _3513211_37);
if (True == _3513212_37) {
Obj _3513213_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513214_37 = PRIM_CDR(_3513213_37);
Obj _3513215_37 = PRIM_ISCONS(_3513214_37);
if (True == _3513215_37) {
Obj _3513216_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513217_37 = PRIM_CDR(_3513216_37);
Obj _3513218_37 = PRIM_CAR(_3513217_37);
Obj y = _3513218_37;
Obj _3513219_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513220_37 = PRIM_CDR(_3513219_37);
Obj _3513221_37 = PRIM_CDR(_3513220_37);
Obj _3513222_37 = PRIM_EQ(Nil, _3513221_37);
if (True == _3513222_37) {
Obj _3513223_37 = primIsString(pkg);
if (True == _3513223_37) {
Obj _3513224_37 = makeCons(co->gc, pkg, Nil);
Obj _3513225_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3513224_37);
R[1] = pkg;
R[2] = y;
saveCont(co, clofun91, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), _3513225_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512445_37);
return;
}
}
case 1:
{
Obj _3513228_37= co->res;
Obj _3513226_37 = R[1];
Obj _3513229_37 = makeCons(co->gc, _3513228_37, Nil);
Obj _3513230_37 = makeCons(co->gc, _3513226_37, _3513229_37);
Obj _3513231_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3513230_37);
coraReturn(co, _3513231_37);
return;
}
case 2:
{
Obj _3513226_37= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj _3513227_37 = makeCons(co->gc, pkg, closureRef(R[0], 3));
R[1] = _3513226_37;
saveCont(co, clofun91, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), _3513227_37, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512446_37 = makeNative(co->gc, 3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513180_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513180_37) {
Obj _3513181_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3513181_37;
Obj _3513182_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3513182_37;
Obj _3512463_37 = makeNative(co->gc, 2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, _3512446_37);
Obj _3513186_37 = PRIM_EQ(op, getBinding(co, packageID, 126).name);
if (True == _3513186_37) {
co->ctx.sp = R;
coraCall1(co, _3512463_37, True);
return;
} else {
Obj _3513187_37 = PRIM_EQ(op, getBinding(co, packageID, 90).name);
if (True == _3513187_37) {
co->ctx.sp = R;
coraCall1(co, _3512463_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512463_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512446_37);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512464_37 = R[1];
if (True == _3512464_37) {
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
Obj _3513184_37= co->res;
Obj _3513185_37 = makeCons(co->gc, closureRef(R[0], 0), _3513184_37);
coraReturn(co, _3513185_37);
return;
}
case 2:
{
Obj _3513183_37= co->res;
saveCont(co, clofun89, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), _3513183_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512447_37 = makeNative(co->gc, 1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513147_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513147_37) {
Obj _3513148_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513149_37 = PRIM_EQ(getBinding(co, packageID, 129).name, _3513148_37);
if (True == _3513149_37) {
Obj _3513150_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513151_37 = PRIM_ISCONS(_3513150_37);
if (True == _3513151_37) {
Obj _3513152_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513153_37 = PRIM_CAR(_3513152_37);
Obj a = _3513153_37;
Obj _3513154_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513155_37 = PRIM_CDR(_3513154_37);
Obj _3513156_37 = PRIM_ISCONS(_3513155_37);
if (True == _3513156_37) {
Obj _3513157_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513158_37 = PRIM_CDR(_3513157_37);
Obj _3513159_37 = PRIM_CAR(_3513158_37);
Obj b = _3513159_37;
Obj _3513160_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513161_37 = PRIM_CDR(_3513160_37);
Obj _3513162_37 = PRIM_CDR(_3513161_37);
Obj _3513163_37 = PRIM_ISCONS(_3513162_37);
if (True == _3513163_37) {
Obj _3513164_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513165_37 = PRIM_CDR(_3513164_37);
Obj _3513166_37 = PRIM_CDR(_3513165_37);
Obj _3513167_37 = PRIM_CAR(_3513166_37);
Obj c = _3513167_37;
Obj _3513168_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513169_37 = PRIM_CDR(_3513168_37);
Obj _3513170_37 = PRIM_CDR(_3513169_37);
Obj _3513171_37 = PRIM_CDR(_3513170_37);
Obj _3513172_37 = PRIM_EQ(Nil, _3513171_37);
if (True == _3513172_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun88, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512447_37);
return;
}
}
case 1:
{
Obj _3513175_37= co->res;
Obj _3513173_37 = R[1];
Obj a = R[2];
Obj _3513176_37 = makeCons(co->gc, _3513175_37, Nil);
Obj _3513177_37 = makeCons(co->gc, _3513173_37, _3513176_37);
Obj _3513178_37 = makeCons(co->gc, a, _3513177_37);
Obj _3513179_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3513178_37);
coraReturn(co, _3513179_37);
return;
}
case 2:
{
Obj _3513173_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3513174_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3513173_37;
R[2] = a;
saveCont(co, clofun88, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), _3513174_37, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512448_37 = makeNative(co->gc, 2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513121_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3513121_37) {
Obj _3513122_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3513123_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3513122_37);
if (True == _3513123_37) {
Obj _3513124_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513125_37 = PRIM_ISCONS(_3513124_37);
if (True == _3513125_37) {
Obj _3513126_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513127_37 = PRIM_CAR(_3513126_37);
Obj path = _3513127_37;
Obj _3513128_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513129_37 = PRIM_CDR(_3513128_37);
Obj _3513130_37 = PRIM_ISCONS(_3513129_37);
if (True == _3513130_37) {
Obj _3513131_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513132_37 = PRIM_CDR(_3513131_37);
Obj _3513133_37 = PRIM_CAR(_3513132_37);
Obj import = _3513133_37;
Obj _3513134_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513135_37 = PRIM_CDR(_3513134_37);
Obj _3513136_37 = PRIM_CDR(_3513135_37);
Obj _3513137_37 = PRIM_ISCONS(_3513136_37);
if (True == _3513137_37) {
Obj _3513138_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513139_37 = PRIM_CDR(_3513138_37);
Obj _3513140_37 = PRIM_CDR(_3513139_37);
Obj _3513141_37 = PRIM_CAR(_3513140_37);
Obj body = _3513141_37;
Obj _3513142_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513143_37 = PRIM_CDR(_3513142_37);
Obj _3513144_37 = PRIM_CDR(_3513143_37);
Obj _3513145_37 = PRIM_CDR(_3513144_37);
Obj _3513146_37 = PRIM_EQ(Nil, _3513145_37);
if (True == _3513146_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512448_37);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512449_37 = makeNative(co->gc, 1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj _3513097_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513097_37) {
Obj _3513098_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513099_37 = PRIM_EQ(getBinding(co, packageID, 133).name, _3513098_37);
if (True == _3513099_37) {
Obj _3513100_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513101_37 = PRIM_ISCONS(_3513100_37);
if (True == _3513101_37) {
Obj _3513102_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513103_37 = PRIM_CAR(_3513102_37);
Obj var = _3513103_37;
Obj _3513104_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513105_37 = PRIM_CDR(_3513104_37);
Obj _3513106_37 = PRIM_ISCONS(_3513105_37);
if (True == _3513106_37) {
Obj _3513107_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513108_37 = PRIM_CDR(_3513107_37);
Obj _3513109_37 = PRIM_CAR(_3513108_37);
Obj val = _3513109_37;
Obj _3513110_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513111_37 = PRIM_CDR(_3513110_37);
Obj _3513112_37 = PRIM_CDR(_3513111_37);
Obj _3513113_37 = PRIM_EQ(Nil, _3513112_37);
if (True == _3513113_37) {
R[1] = val;
saveCont(co, clofun86, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512449_37);
return;
}
}
case 1:
{
Obj _3513117_37= co->res;
Obj _3513116_37 = R[1];
Obj _3513118_37 = makeCons(co->gc, _3513117_37, Nil);
Obj _3513119_37 = makeCons(co->gc, _3513116_37, _3513118_37);
Obj _3513120_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3513119_37);
coraReturn(co, _3513120_37);
return;
}
case 2:
{
Obj _3513114_37= co->res;
Obj val = R[1];
Obj var1 = _3513114_37;
Obj _3513115_37 = makeCons(co->gc, var1, Nil);
Obj _3513116_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3513115_37);
R[1] = _3513116_37;
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
Obj _3513096_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), _3513096_37, closureRef(R[0], 3));
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
Obj _3513090_37= co->res;
Obj _3513091_37 = primNot(_3513090_37);
coraReturn(co, _3513091_37);
return;
}
case 2:
{
Obj _3513089_37= co->res;
saveCont(co, clofun84, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513089_37);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512432_37 = R[1];
Obj _3512433_37 = R[2];
Obj _3513074_37 = PRIM_EQ(Nil, _3512433_37);
if (True == _3513074_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3512435_37 = makeNative(co->gc, 1, clofun82, 0, 2, _3512433_37, _3512432_37);
Obj _3513078_37 = PRIM_ISCONS(_3512433_37);
if (True == _3513078_37) {
Obj _3513079_37 = PRIM_CAR(_3512433_37);
Obj _3513080_37 = PRIM_ISCONS(_3513079_37);
if (True == _3513080_37) {
Obj _3513081_37 = PRIM_CAR(_3512433_37);
Obj _3513082_37 = PRIM_CAR(_3513081_37);
Obj x = _3513082_37;
Obj _3513083_37 = PRIM_CAR(_3512433_37);
Obj _3513084_37 = PRIM_CDR(_3513083_37);
Obj y = _3513084_37;
Obj _3513085_37 = PRIM_CDR(_3512433_37);
Obj _3513086_37 = PRIM_EQ(_3512432_37, x);
if (True == _3513086_37) {
Obj _3513087_37 = makeCons(co->gc, x, y);
coraReturn(co, _3513087_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512435_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512435_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512435_37);
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
Obj _3513075_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513075_37) {
Obj _3513076_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513077_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513077_37;
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
Obj _3512427_37 = R[1];
Obj _3512428_37 = R[2];
Obj _3512429_37 = R[3];
Obj _3512993_37 = PRIM_EQ(Nil, _3512429_37);
if (True == _3512993_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), _3512427_37, _3512428_37);
return;
} else {
Obj _3512994_37 = PRIM_ISCONS(_3512429_37);
if (True == _3512994_37) {
Obj _3512995_37 = PRIM_CAR(_3512429_37);
Obj import = _3512995_37;
Obj _3512996_37 = PRIM_CDR(_3512429_37);
Obj more = _3512996_37;
R[1] = import;
R[2] = _3512427_37;
R[3] = _3512428_37;
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
Obj _3513003_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3513003_37);
return;
}
case 2:
{
Obj _3513002_37= co->res;
Obj import = R[1];
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), import, _3513002_37);
return;
}
case 3:
{
Obj _3513001_37= co->res;
Obj import = R[1];
R[1] = import;
saveCont(co, clofun81, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), _3513001_37);
return;
}
case 4:
{
Obj _3513000_37= co->res;
Obj import = R[1];
Obj _3512427_37 = R[2];
Obj _3512428_37 = R[3];
Obj more = R[4];
if (True == _3513000_37) {
R[1] = import;
saveCont(co, clofun81, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 72)), _3512427_37);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 71)), _3512427_37, _3512428_37, more);
return;
}
}
case 5:
{
Obj _3512999_37= co->res;
Obj import = R[1];
Obj _3512427_37 = R[2];
Obj _3512428_37 = R[3];
Obj more = R[4];
Obj export = _3512999_37;
R[1] = import;
R[2] = _3512427_37;
R[3] = _3512428_37;
R[4] = more;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), _3512427_37, export);
return;
}
case 6:
{
Obj _3512998_37= co->res;
Obj import = R[1];
Obj _3512427_37 = R[2];
Obj _3512428_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3512427_37;
R[3] = _3512428_37;
R[4] = more;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 70)), _3512998_37, Nil);
return;
}
case 7:
{
Obj _3512997_37= co->res;
Obj import = R[1];
Obj _3512427_37 = R[2];
Obj _3512428_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3512427_37;
R[3] = _3512428_37;
R[4] = more;
saveCont(co, clofun81, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3512997_37);
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
Obj _3512987_37 = PRIM_EQ(ns, makeCString(co->gc, ""));
if (True == _3512987_37) {
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
Obj _3512991_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3512991_37);
return;
}
case 2:
{
Obj _3512990_37= co->res;
Obj ns = R[1];
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), ns, _3512990_37);
return;
}
case 3:
{
Obj _3512989_37= co->res;
Obj ns = R[1];
R[1] = ns;
saveCont(co, clofun80, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), _3512989_37);
return;
}
case 4:
{
Obj _3512988_37= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == _3512988_37) {
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
Obj _3512969_37= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, _3512969_37, makeNative(co->gc, 4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj _3512968_37= co->res;
Obj path = R[1];
R[1] = path;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 80)), _3512968_37);
return;
}
case 3:
{
Obj _3512967_37= co->res;
Obj sexp = R[1];
Obj path = _3512967_37;
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
Obj _3512970_37 = makeCons(co->gc, makeCString(co->gc, "cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = _3512970_37;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), makeNative(co->gc, 2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj _3512980_37= co->res;
Obj _3512970_37 = R[1];
Obj _3512981_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3512980_37);
Obj _3512982_37 = makeCons(co->gc, _3512981_37, Nil);
Obj _3512983_37 = makeCons(co->gc, _3512970_37, _3512982_37);
Obj _3512984_37 = makeCons(co->gc, closureRef(R[0], 0), _3512983_37);
Obj _3512985_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3512984_37);
coraReturn(co, _3512985_37);
return;
}
case 2:
{
Obj _3512973_37= co->res;
Obj export = R[1];
Obj body = R[2];
Obj _3512970_37 = R[3];
Obj _3512974_37 = makeCons(co->gc, export, Nil);
Obj _3512975_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3512974_37);
Obj _3512976_37 = makeCons(co->gc, _3512975_37, Nil);
Obj _3512977_37 = makeCons(co->gc, getBinding(co, packageID, 77).name, _3512976_37);
Obj _3512978_37 = makeCons(co->gc, getBinding(co, packageID, 133).name, _3512977_37);
Obj _3512979_37 = makeCons(co->gc, _3512978_37, body);
R[1] = _3512970_37;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3512973_37, _3512979_37);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj _3512971_37 = makeCons(co->gc, imp, Nil);
Obj _3512972_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3512971_37);
coraReturn(co, _3512972_37);
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
Obj _3512420_37 = R[1];
Obj _3512421_37 = R[2];
Obj _3512422_37 = R[3];
Obj _3512423_37 = R[4];
Obj _3512424_37 = makeNative(co->gc, 1, clofun74, 0, 4, _3512422_37, _3512420_37, _3512421_37, _3512423_37);
Obj _3512947_37 = PRIM_ISCONS(_3512420_37);
if (True == _3512947_37) {
Obj _3512948_37 = PRIM_CAR(_3512420_37);
Obj _3512949_37 = PRIM_ISCONS(_3512948_37);
if (True == _3512949_37) {
Obj _3512950_37 = PRIM_CAR(_3512420_37);
Obj _3512951_37 = PRIM_CAR(_3512950_37);
Obj _3512952_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3512951_37);
if (True == _3512952_37) {
Obj _3512953_37 = PRIM_CAR(_3512420_37);
Obj _3512954_37 = PRIM_CDR(_3512953_37);
Obj _3512955_37 = PRIM_ISCONS(_3512954_37);
if (True == _3512955_37) {
Obj _3512956_37 = PRIM_CAR(_3512420_37);
Obj _3512957_37 = PRIM_CDR(_3512956_37);
Obj _3512958_37 = PRIM_CAR(_3512957_37);
Obj lib = _3512958_37;
Obj _3512959_37 = PRIM_CAR(_3512420_37);
Obj _3512960_37 = PRIM_CDR(_3512959_37);
Obj _3512961_37 = PRIM_CDR(_3512960_37);
Obj _3512962_37 = PRIM_EQ(Nil, _3512961_37);
if (True == _3512962_37) {
Obj _3512963_37 = PRIM_CDR(_3512420_37);
Obj rest = _3512963_37;
Obj _3512964_37 = makeCons(co->gc, lib, _3512421_37);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, _3512964_37, _3512422_37, _3512423_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512424_37);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512425_37 = makeNative(co->gc, 1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3512938_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3512938_37) {
Obj _3512939_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512940_37 = PRIM_ISCONS(_3512939_37);
if (True == _3512940_37) {
Obj _3512941_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512942_37 = PRIM_CAR(_3512941_37);
Obj _3512943_37 = PRIM_EQ(getBinding(co, packageID, 82).name, _3512942_37);
if (True == _3512943_37) {
Obj _3512944_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512945_37 = PRIM_CDR(_3512944_37);
Obj more = _3512945_37;
Obj _3512946_37 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = _3512946_37;
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512425_37);
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
Obj _3512937_37= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), _3512937_37, closureRef(R[0], 2), closureRef(R[0], 3));
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
Obj _3512935_37= co->res;
Obj _3512934_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), _3512934_37, _3512935_37);
return;
}
case 2:
{
Obj _3512934_37= co->res;
Obj exp = R[1];
R[1] = _3512934_37;
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
Obj _3512923_37= co->res;
Obj _3512922_37 = R[1];
Obj fn = R[2];
Obj _3512924_37 = makeCons(co->gc, _3512923_37, Nil);
Obj _3512925_37 = makeCons(co->gc, _3512922_37, _3512924_37);
Obj _3512926_37 = makeCons(co->gc, fn, _3512925_37);
coraReturn(co, _3512926_37);
return;
}
case 2:
{
Obj _3512929_37= co->res;
Obj _3512927_37 = R[1];
Obj fn = R[2];
Obj _3512930_37 = makeCons(co->gc, _3512929_37, Nil);
Obj _3512931_37 = makeCons(co->gc, _3512927_37, _3512930_37);
Obj _3512932_37 = makeCons(co->gc, fn, _3512931_37);
coraReturn(co, _3512932_37);
return;
}
case 3:
{
Obj _3512921_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == _3512921_37) {
Obj _3512922_37 = PRIM_CAR(arglist);
R[1] = _3512922_37;
R[2] = fn;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), arglist);
return;
} else {
Obj _3512927_37 = PRIM_CAR(arglist);
Obj _3512928_37 = PRIM_CDR(arglist);
R[1] = _3512927_37;
R[2] = fn;
saveCont(co, clofun71, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), fn, _3512928_37);
return;
}
}
case 4:
{
Obj _3512920_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3512920_37);
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
Obj _3512918_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 88)), _3512918_37);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512415_37 = R[1];
Obj _3512898_37 = primIsSymbol(_3512415_37);
if (True == _3512898_37) {
Obj _3512899_37 = makeCons(co->gc, _3512415_37, Nil);
Obj _3512900_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3512899_37);
coraReturn(co, _3512900_37);
return;
} else {
Obj _3512417_37 = makeNative(co->gc, 1, clofun68, 0, 1, _3512415_37);
Obj _3512907_37 = PRIM_ISCONS(_3512415_37);
if (True == _3512907_37) {
Obj _3512908_37 = PRIM_CAR(_3512415_37);
Obj _3512909_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3512908_37);
if (True == _3512909_37) {
Obj _3512910_37 = PRIM_CDR(_3512415_37);
Obj _3512911_37 = PRIM_ISCONS(_3512910_37);
if (True == _3512911_37) {
Obj _3512912_37 = PRIM_CDR(_3512415_37);
Obj _3512913_37 = PRIM_CAR(_3512912_37);
Obj x = _3512913_37;
Obj _3512914_37 = PRIM_CDR(_3512415_37);
Obj _3512915_37 = PRIM_CDR(_3512914_37);
Obj _3512916_37 = PRIM_EQ(Nil, _3512915_37);
if (True == _3512916_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512417_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512417_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512417_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512417_37);
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
Obj _3512901_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512901_37) {
Obj _3512902_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512902_37;
Obj _3512903_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3512903_37;
Obj _3512904_37 = makeCons(co->gc, x, more);
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), globalRef(co, getBinding(co, packageID, 88)), _3512904_37);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3512905_37= co->res;
Obj _3512906_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3512905_37);
coraReturn(co, _3512906_37);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512896_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), _3512896_37);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512411_37 = R[1];
Obj _3512412_37 = makeNative(co->gc, 1, clofun65, 0, 1, _3512411_37);
Obj _3512891_37 = PRIM_ISCONS(_3512411_37);
if (True == _3512891_37) {
Obj _3512892_37 = PRIM_CAR(_3512411_37);
Obj x = _3512892_37;
Obj _3512893_37 = PRIM_CDR(_3512411_37);
Obj _3512894_37 = PRIM_EQ(Nil, _3512893_37);
if (True == _3512894_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512412_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512412_37);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512413_37 = makeNative(co->gc, 2, clofun64, 0, 1, closureRef(R[0], 0));
Obj _3512879_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512879_37) {
Obj _3512880_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512880_37;
Obj _3512881_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512882_37 = PRIM_ISCONS(_3512881_37);
if (True == _3512882_37) {
Obj _3512883_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512884_37 = PRIM_CAR(_3512883_37);
Obj y = _3512884_37;
Obj _3512885_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512886_37 = PRIM_CDR(_3512885_37);
Obj _3512887_37 = PRIM_EQ(Nil, _3512886_37);
if (True == _3512887_37) {
Obj _3512888_37 = makeCons(co->gc, y, Nil);
Obj _3512889_37 = makeCons(co->gc, x, _3512888_37);
Obj _3512890_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3512889_37);
coraReturn(co, _3512890_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512413_37);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512872_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512872_37) {
Obj _3512873_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512873_37;
Obj _3512874_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3512874_37;
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
Obj _3512875_37= co->res;
Obj x = R[1];
Obj _3512876_37 = makeCons(co->gc, _3512875_37, Nil);
Obj _3512877_37 = makeCons(co->gc, x, _3512876_37);
Obj _3512878_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3512877_37);
coraReturn(co, _3512878_37);
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
Obj _3512870_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 92)), _3512870_37);
return;
}
case 2:
{
Obj _3512869_37= co->res;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 94)), _3512869_37);
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
Obj _3512858_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3512859_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, args);
Obj _3512860_37 = makeCons(co->gc, _3512859_37, body);
Obj _3512861_37 = makeCons(co->gc, getBinding(co, packageID, 107).name, _3512860_37);
Obj _3512862_37 = makeCons(co->gc, _3512861_37, Nil);
Obj _3512863_37 = makeCons(co->gc, args, _3512862_37);
Obj _3512864_37 = makeCons(co->gc, _3512858_37, _3512863_37);
Obj _3512865_37 = makeCons(co->gc, getBinding(co, packageID, 134).name, _3512864_37);
coraReturn(co, _3512865_37);
return;
}
case 2:
{
Obj _3512857_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = _3512857_37;
R[1] = body;
R[2] = args;
saveCont(co, clofun60, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 3:
{
Obj _3512856_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = _3512856_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), nargs);
return;
}
case 4:
{
Obj _3512855_37= co->res;
Obj exp = R[1];
Obj body = _3512855_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), body);
return;
}
case 5:
{
Obj _3512854_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 104)), _3512854_37);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj _3512848_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3512848_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3512849_37 = primGenSym(co);
Obj _3512850_37 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = _3512849_37;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), _3512850_37);
return;
}
}
case 1:
{
Obj _3512851_37= co->res;
Obj _3512849_37 = R[1];
Obj _3512852_37 = makeCons(co->gc, _3512849_37, _3512851_37);
coraReturn(co, _3512852_37);
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
Obj _3512845_37= co->res;
Obj n = R[1];
Obj _3512846_37 = primNot(_3512845_37);
if (True == _3512846_37) {
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
Obj _3512844_37= co->res;
Obj n = R[1];
R[1] = n;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3512844_37);
return;
}
case 3:
{
Obj _3512839_37= co->res;
Obj counts = _3512839_37;
Obj _3512840_37 = PRIM_CAR(counts);
Obj n = _3512840_37;
Obj _3512843_37 = PRIM_CDR(counts);
R[1] = n;
saveCont(co, clofun58, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 99)), makeNative(co->gc, 2, clofun57, 1, 1, n), _3512843_37);
return;
}
case 4:
{
Obj _3512837_37= co->res;
Obj pats = _3512837_37;
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
Obj _3512841_37 = PRIM_EQ(closureRef(R[0], 0), x);
Obj _3512842_37 = primNot(_3512841_37);
coraReturn(co, _3512842_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512838_37 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), _3512838_37);
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
Obj _3512831_37 = PRIM_EQ(l1, Nil);
if (True == _3512831_37) {
coraReturn(co, l2);
return;
} else {
Obj _3512832_37 = PRIM_CAR(l1);
Obj _3512833_37 = PRIM_CDR(l1);
R[1] = _3512832_37;
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3512833_37, l2);
return;
}
}
case 1:
{
Obj _3512834_37= co->res;
Obj _3512832_37 = R[1];
Obj _3512835_37 = makeCons(co->gc, _3512832_37, _3512834_37);
coraReturn(co, _3512835_37);
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
Obj _3512822_37 = PRIM_ISCONS(l);
if (True == _3512822_37) {
Obj _3512823_37 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
saveCont(co, clofun53, 1, R);
coraCall1(co, fn, _3512823_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj _3512824_37= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == _3512824_37) {
Obj _3512825_37 = PRIM_CAR(l);
Obj _3512826_37 = makeCons(co->gc, _3512825_37, res);
Obj _3512827_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), _3512826_37, fn, _3512827_37);
return;
} else {
Obj _3512828_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), res, fn, _3512828_37);
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
Obj _3512817_37 = PRIM_EQ(l, Nil);
if (True == _3512817_37) {
coraReturn(co, i);
return;
} else {
Obj _3512818_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3512819_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), _3512818_37, _3512819_37);
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
Obj _3512815_37= co->res;
Obj _3512814_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), _3512814_37, _3512815_37);
return;
}
case 2:
{
Obj _3512812_37= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == _3512812_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
} else {
Obj _3512813_37 = PRIM_CAR(rules);
Obj _3512814_37 = makeCons(co->gc, _3512813_37, res);
R[1] = _3512814_37;
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
Obj _3512759_37 = PRIM_EQ(Nil, input);
if (True == _3512759_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), result);
return;
} else {
Obj _3512408_37 = makeNative(co->gc, 3, clofun47, 0, 3, input, current, result);
Obj _3512777_37 = PRIM_ISCONS(input);
if (True == _3512777_37) {
Obj _3512778_37 = PRIM_CAR(input);
Obj _3512779_37 = PRIM_EQ(getBinding(co, packageID, 105).name, _3512778_37);
if (True == _3512779_37) {
Obj _3512780_37 = PRIM_CDR(input);
Obj _3512781_37 = PRIM_ISCONS(_3512780_37);
if (True == _3512781_37) {
Obj _3512782_37 = PRIM_CDR(input);
Obj _3512783_37 = PRIM_CAR(_3512782_37);
Obj act = _3512783_37;
Obj _3512784_37 = PRIM_CDR(input);
Obj _3512785_37 = PRIM_CDR(_3512784_37);
Obj _3512786_37 = PRIM_ISCONS(_3512785_37);
if (True == _3512786_37) {
Obj _3512787_37 = PRIM_CDR(input);
Obj _3512788_37 = PRIM_CDR(_3512787_37);
Obj _3512789_37 = PRIM_CAR(_3512788_37);
Obj _3512790_37 = PRIM_EQ(getBinding(co, packageID, 110).name, _3512789_37);
if (True == _3512790_37) {
Obj _3512791_37 = PRIM_CDR(input);
Obj _3512792_37 = PRIM_CDR(_3512791_37);
Obj _3512793_37 = PRIM_CDR(_3512792_37);
Obj _3512794_37 = PRIM_ISCONS(_3512793_37);
if (True == _3512794_37) {
Obj _3512795_37 = PRIM_CDR(input);
Obj _3512796_37 = PRIM_CDR(_3512795_37);
Obj _3512797_37 = PRIM_CDR(_3512796_37);
Obj _3512798_37 = PRIM_CAR(_3512797_37);
Obj pred = _3512798_37;
Obj _3512799_37 = PRIM_CDR(input);
Obj _3512800_37 = PRIM_CDR(_3512799_37);
Obj _3512801_37 = PRIM_CDR(_3512800_37);
Obj _3512802_37 = PRIM_CDR(_3512801_37);
Obj remain = _3512802_37;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
saveCont(co, clofun48, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512408_37);
return;
}
}
}
case 1:
{
Obj _3512803_37= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj _3512804_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3512803_37);
Obj pat = _3512804_37;
Obj _3512805_37 = makeCons(co->gc, act, Nil);
Obj _3512806_37 = makeCons(co->gc, pred, _3512805_37);
Obj _3512807_37 = makeCons(co->gc, getBinding(co, packageID, 110).name, _3512806_37);
Obj _3512808_37 = makeCons(co->gc, pat, result);
Obj _3512809_37 = makeCons(co->gc, _3512807_37, _3512808_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, _3512809_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512409_37 = makeNative(co->gc, 1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3512764_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512764_37) {
Obj _3512765_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3512766_37 = PRIM_EQ(getBinding(co, packageID, 105).name, _3512765_37);
if (True == _3512766_37) {
Obj _3512767_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512768_37 = PRIM_ISCONS(_3512767_37);
if (True == _3512768_37) {
Obj _3512769_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512770_37 = PRIM_CAR(_3512769_37);
Obj act = _3512770_37;
Obj _3512771_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512772_37 = PRIM_CDR(_3512771_37);
Obj remain = _3512772_37;
R[1] = act;
R[2] = remain;
saveCont(co, clofun47, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512409_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512409_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512409_37);
return;
}
}
case 1:
{
Obj _3512773_37= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj _3512774_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3512773_37);
Obj pat = _3512774_37;
Obj _3512775_37 = makeCons(co->gc, pat, closureRef(R[0], 2));
Obj _3512776_37 = makeCons(co->gc, act, _3512775_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, _3512776_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512760_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512760_37) {
Obj _3512761_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512761_37;
Obj _3512762_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3512762_37;
Obj _3512763_37 = makeCons(co->gc, x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), y, _3512763_37, closureRef(R[0], 2));
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
Obj _3512746_37= co->res;
Obj value = R[1];
Obj rules = _3512746_37;
Obj _3512459_37 = makeNative(co->gc, 2, clofun43, 1, 2, value, rules);
Obj _3512753_37 = PRIM_ISCONS(value);
if (True == _3512753_37) {
Obj _3512754_37 = PRIM_CAR(value);
Obj _3512755_37 = PRIM_EQ(getBinding(co, packageID, 152).name, _3512754_37);
Obj _3512756_37 = primNot(_3512755_37);
if (True == _3512756_37) {
co->ctx.sp = R;
coraCall1(co, _3512459_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512459_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512459_37, False);
return;
}
}
case 2:
{
Obj _3512745_37= co->res;
Obj exp = R[1];
Obj value = _3512745_37;
R[1] = value;
saveCont(co, clofun44, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj _3512744_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 138)), _3512744_37);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512460_37 = R[1];
if (True == _3512460_37) {
Obj _3512747_37 = primGenSym(co);
Obj val = _3512747_37;
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
Obj _3512748_37= co->res;
Obj val = R[1];
Obj _3512749_37 = makeCons(co->gc, _3512748_37, Nil);
Obj _3512750_37 = makeCons(co->gc, closureRef(R[0], 0), _3512749_37);
Obj _3512751_37 = makeCons(co->gc, val, _3512750_37);
Obj _3512752_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3512751_37);
coraReturn(co, _3512752_37);
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
Obj _3512742_37= co->res;
Obj _3512457_37 = R[1];
if (True == _3512742_37) {
co->ctx.sp = R;
coraCall1(co, _3512457_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512457_37, False);
return;
}
}
case 2:
{
Obj _3512740_37= co->res;
Obj rules = R[1];
Obj _3512457_37 = R[2];
if (True == _3512740_37) {
Obj _3512741_37 = PRIM_CDR(rules);
R[1] = _3512457_37;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), _3512741_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512457_37, False);
return;
}
}
case 3:
{
Obj _3512722_37= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == _3512722_37) {
Obj _3512723_37 = makeCons(co->gc, makeCString(co->gc, "no match-help found!"), Nil);
Obj _3512724_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3512723_37);
coraReturn(co, _3512724_37);
return;
} else {
Obj _3512457_37 = makeNative(co->gc, 3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = _3512457_37;
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
Obj _3512458_37 = R[1];
if (True == _3512458_37) {
Obj _3512725_37 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = _3512725_37;
Obj _3512726_37 = primGenSym(co);
Obj cc = _3512726_37;
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
Obj _3512732_37= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = _3512732_37;
Obj _3512733_37 = makeCons(co->gc, rest, Nil);
Obj _3512734_37 = makeCons(co->gc, Nil, _3512733_37);
Obj _3512735_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3512734_37);
Obj _3512736_37 = makeCons(co->gc, curr, Nil);
Obj _3512737_37 = makeCons(co->gc, _3512735_37, _3512736_37);
Obj _3512738_37 = makeCons(co->gc, cc, _3512737_37);
Obj _3512739_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3512738_37);
coraReturn(co, _3512739_37);
return;
}
case 2:
{
Obj _3512729_37= co->res;
Obj cc = R[1];
Obj curr = _3512729_37;
Obj _3512730_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3512731_37 = PRIM_CDR(_3512730_37);
R[1] = curr;
R[2] = cc;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 109)), closureRef(R[0], 0), _3512731_37);
return;
}
case 3:
{
Obj _3512728_37= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
saveCont(co, clofun41, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), _3512728_37, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj _3512727_37= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = _3512727_37;
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
Obj _3512709_37 = PRIM_CDR(rules);
Obj _3512710_37 = PRIM_CAR(_3512709_37);
Obj action = _3512710_37;
Obj _3512455_37 = makeNative(co->gc, 2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = _3512455_37;
saveCont(co, clofun40, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), action);
return;
}
case 1:
{
Obj _3512718_37= co->res;
Obj action = R[1];
Obj _3512455_37 = R[2];
if (True == _3512718_37) {
Obj _3512719_37 = PRIM_CAR(action);
Obj _3512720_37 = PRIM_EQ(_3512719_37, getBinding(co, packageID, 110).name);
if (True == _3512720_37) {
co->ctx.sp = R;
coraCall1(co, _3512455_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512455_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512455_37, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512456_37 = R[1];
if (True == _3512456_37) {
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
Obj _3512712_37= co->res;
Obj _3512711_37 = R[1];
Obj _3512713_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3512714_37 = makeCons(co->gc, _3512713_37, Nil);
Obj _3512715_37 = makeCons(co->gc, _3512712_37, _3512714_37);
Obj _3512716_37 = makeCons(co->gc, _3512711_37, _3512715_37);
Obj _3512717_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512716_37);
coraReturn(co, _3512717_37);
return;
}
case 2:
{
Obj _3512711_37= co->res;
R[1] = _3512711_37;
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
Obj _3512707_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), _3512707_37);
return;
}
case 2:
{
Obj _3512694_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3512694_37) {
Obj _3512695_37 = PRIM_CAR(pat);
Obj _3512696_37 = PRIM_EQ(_3512695_37, getBinding(co, packageID, 139).name);
if (True == _3512696_37) {
Obj _3512697_37 = makeCons(co->gc, expr, Nil);
Obj _3512698_37 = makeCons(co->gc, pat, _3512697_37);
Obj _3512699_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3512698_37);
Obj _3512700_37 = makeCons(co->gc, cc, Nil);
Obj _3512701_37 = makeCons(co->gc, _3512700_37, Nil);
Obj _3512702_37 = makeCons(co->gc, body, _3512701_37);
Obj _3512703_37 = makeCons(co->gc, _3512699_37, _3512702_37);
Obj _3512704_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512703_37);
coraReturn(co, _3512704_37);
return;
} else {
Obj _3512705_37 = PRIM_CAR(pat);
Obj _3512706_37 = PRIM_EQ(_3512705_37, getBinding(co, packageID, 152).name);
if (True == _3512706_37) {
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
Obj _3512679_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3512679_37) {
Obj _3512680_37 = PRIM_EQ(pat, expr);
if (True == _3512680_37) {
coraReturn(co, body);
return;
} else {
Obj _3512681_37 = makeCons(co->gc, expr, Nil);
Obj _3512682_37 = makeCons(co->gc, pat, _3512681_37);
Obj _3512683_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3512682_37);
Obj _3512684_37 = makeCons(co->gc, cc, Nil);
Obj _3512685_37 = makeCons(co->gc, _3512684_37, Nil);
Obj _3512686_37 = makeCons(co->gc, body, _3512685_37);
Obj _3512687_37 = makeCons(co->gc, _3512683_37, _3512686_37);
Obj _3512688_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512687_37);
coraReturn(co, _3512688_37);
return;
}
} else {
Obj _3512689_37 = primIsSymbol(pat);
if (True == _3512689_37) {
Obj _3512690_37 = makeCons(co->gc, body, Nil);
Obj _3512691_37 = makeCons(co->gc, expr, _3512690_37);
Obj _3512692_37 = makeCons(co->gc, pat, _3512691_37);
Obj _3512693_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3512692_37);
coraReturn(co, _3512693_37);
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
Obj _3512676_37= co->res;
Obj x = R[1];
if (True == _3512676_37) {
Obj _3512677_37 = primIsSymbol(x);
Obj _3512678_37 = primNot(_3512677_37);
if (True == _3512678_37) {
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
Obj _3512655_37= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = _3512655_37;
Obj _3512453_37 = makeNative(co->gc, 3, clofun35, 1, 5, x, y, expr, body, cc);
Obj _3512672_37 = PRIM_ISCONS(expr);
if (True == _3512672_37) {
Obj _3512673_37 = PRIM_CAR(expr);
Obj _3512674_37 = PRIM_EQ(_3512673_37, getBinding(co, packageID, 152).name);
if (True == _3512674_37) {
co->ctx.sp = R;
coraCall1(co, _3512453_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512453_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512453_37, False);
return;
}
}
case 2:
{
Obj _3512654_37= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = _3512654_37;
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
Obj _3512454_37 = R[1];
if (True == _3512454_37) {
saveCont(co, clofun35, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), closureRef(R[0], 2));
return;
} else {
Obj _3512659_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3512660_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3512659_37);
Obj _3512661_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3512662_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3512661_37);
Obj _3512663_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3512664_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3512663_37);
R[1] = _3512662_37;
R[2] = _3512660_37;
saveCont(co, clofun35, 5, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), _3512664_37, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj _3512658_37= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), e1, _3512658_37, closureRef(R[0], 4));
return;
}
case 2:
{
Obj _3512657_37= co->res;
Obj e1 = R[1];
Obj e2 = _3512657_37;
R[1] = e1;
saveCont(co, clofun35, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3512656_37= co->res;
Obj e1 = _3512656_37;
R[1] = e1;
saveCont(co, clofun35, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), closureRef(R[0], 2));
return;
}
case 4:
{
Obj _3512666_37= co->res;
Obj _3512660_37 = R[1];
Obj _3512667_37 = makeCons(co->gc, closureRef(R[0], 4), Nil);
Obj _3512668_37 = makeCons(co->gc, _3512667_37, Nil);
Obj _3512669_37 = makeCons(co->gc, _3512666_37, _3512668_37);
Obj _3512670_37 = makeCons(co->gc, _3512660_37, _3512669_37);
Obj _3512671_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512670_37);
coraReturn(co, _3512671_37);
return;
}
case 5:
{
Obj _3512665_37= co->res;
Obj _3512662_37 = R[1];
Obj _3512660_37 = R[2];
R[1] = _3512660_37;
saveCont(co, clofun35, 4, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), _3512662_37, _3512665_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512652_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), _3512652_37);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj _3512642_37 = PRIM_CDR(pat);
R[1] = pat;
saveCont(co, clofun33, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3512642_37);
return;
}
case 1:
{
Obj _3512647_37= co->res;
Obj _3512645_37 = R[1];
Obj _3512648_37 = makeCons(co->gc, _3512647_37, Nil);
Obj _3512649_37 = makeCons(co->gc, _3512645_37, _3512648_37);
Obj _3512650_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3512649_37);
coraReturn(co, _3512650_37);
return;
}
case 2:
{
Obj _3512643_37= co->res;
Obj pat = R[1];
if (True == _3512643_37) {
Obj _3512644_37 = PRIM_CAR(pat);
coraReturn(co, _3512644_37);
return;
} else {
Obj _3512645_37 = PRIM_CAR(pat);
Obj _3512646_37 = PRIM_CDR(pat);
R[1] = _3512645_37;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), _3512646_37);
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
Obj _3512639_37 = PRIM_EQ(x, True);
if (True == _3512639_37) {
coraReturn(co, True);
return;
} else {
Obj _3512640_37 = PRIM_EQ(x, False);
if (True == _3512640_37) {
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
Obj _3512637_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), _3512637_37);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3512625_37 = PRIM_EQ(Nil, l);
if (True == _3512625_37) {
coraReturn(co, True);
return;
} else {
Obj _3512626_37 = PRIM_CAR(l);
Obj _3512627_37 = PRIM_EQ(_3512626_37, False);
if (True == _3512627_37) {
coraReturn(co, False);
return;
} else {
Obj _3512628_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun30, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), _3512628_37);
return;
}
}
}
case 1:
{
Obj _3512629_37= co->res;
Obj l = R[1];
Obj more = _3512629_37;
Obj _3512630_37 = PRIM_EQ(more, False);
if (True == _3512630_37) {
coraReturn(co, False);
return;
} else {
Obj _3512631_37 = PRIM_CAR(l);
Obj _3512632_37 = makeCons(co->gc, False, Nil);
Obj _3512633_37 = makeCons(co->gc, more, _3512632_37);
Obj _3512634_37 = makeCons(co->gc, _3512631_37, _3512633_37);
Obj _3512635_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512634_37);
coraReturn(co, _3512635_37);
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
Obj _3512623_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), _3512623_37);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3512611_37 = PRIM_EQ(l, Nil);
if (True == _3512611_37) {
coraReturn(co, False);
return;
} else {
Obj _3512612_37 = PRIM_CAR(l);
Obj _3512613_37 = PRIM_EQ(_3512612_37, True);
if (True == _3512613_37) {
coraReturn(co, True);
return;
} else {
Obj _3512614_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun28, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), _3512614_37);
return;
}
}
}
case 1:
{
Obj _3512615_37= co->res;
Obj l = R[1];
Obj more = _3512615_37;
Obj _3512616_37 = PRIM_EQ(more, True);
if (True == _3512616_37) {
coraReturn(co, True);
return;
} else {
Obj _3512617_37 = PRIM_CAR(l);
Obj _3512618_37 = makeCons(co->gc, more, Nil);
Obj _3512619_37 = makeCons(co->gc, True, _3512618_37);
Obj _3512620_37 = makeCons(co->gc, _3512617_37, _3512619_37);
Obj _3512621_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512620_37);
coraReturn(co, _3512621_37);
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
Obj _3512597_37 = PRIM_CDR(exp);
Obj _3512598_37 = PRIM_EQ(Nil, _3512597_37);
if (True == _3512598_37) {
Obj _3512599_37 = makeCons(co->gc, makeCString(co->gc, "no cond match"), Nil);
Obj _3512600_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3512599_37);
coraReturn(co, _3512600_37);
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
Obj _3512604_37= co->res;
Obj _3512603_37 = R[1];
Obj _3512602_37 = R[2];
Obj _3512605_37 = makeCons(co->gc, getBinding(co, packageID, 128).name, _3512604_37);
Obj _3512606_37 = makeCons(co->gc, _3512605_37, Nil);
Obj _3512607_37 = makeCons(co->gc, _3512603_37, _3512606_37);
Obj _3512608_37 = makeCons(co->gc, _3512602_37, _3512607_37);
Obj _3512609_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3512608_37);
coraReturn(co, _3512609_37);
return;
}
case 2:
{
Obj _3512603_37= co->res;
Obj exp = R[1];
Obj _3512602_37 = R[2];
R[1] = _3512603_37;
R[2] = _3512602_37;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj _3512601_37= co->res;
Obj exp = R[1];
Obj curr = _3512601_37;
Obj _3512602_37 = PRIM_CAR(curr);
R[1] = exp;
R[2] = _3512602_37;
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
Obj _3512595_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), _3512595_37);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512583_37 = PRIM_CDR(exp);
R[1] = exp;
saveCont(co, clofun25, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3512583_37);
return;
}
case 1:
{
Obj _3512589_37= co->res;
Obj _3512587_37 = R[1];
Obj _3512586_37 = R[2];
Obj _3512590_37 = makeCons(co->gc, _3512589_37, Nil);
Obj _3512591_37 = makeCons(co->gc, _3512587_37, _3512590_37);
Obj _3512592_37 = makeCons(co->gc, _3512586_37, _3512591_37);
Obj _3512593_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3512592_37);
coraReturn(co, _3512593_37);
return;
}
case 2:
{
Obj _3512588_37= co->res;
Obj _3512587_37 = R[1];
Obj _3512586_37 = R[2];
R[1] = _3512587_37;
R[2] = _3512586_37;
saveCont(co, clofun25, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), _3512588_37);
return;
}
case 3:
{
Obj _3512587_37= co->res;
Obj exp = R[1];
Obj _3512586_37 = R[2];
R[1] = _3512587_37;
R[2] = _3512586_37;
saveCont(co, clofun25, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 4:
{
Obj _3512584_37= co->res;
Obj exp = R[1];
if (True == _3512584_37) {
Obj _3512585_37 = PRIM_CAR(exp);
coraReturn(co, _3512585_37);
return;
} else {
Obj _3512586_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3512586_37;
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
Obj _3512580_37 = PRIM_ISCONS(x);
Obj _3512581_37 = primNot(_3512580_37);
coraReturn(co, _3512581_37);
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
Obj _3512575_37 = PRIM_ISCONS(l);
if (True == _3512575_37) {
Obj _3512576_37 = PRIM_CAR(l);
Obj _3512577_37 = PRIM_EQ(_3512576_37, x);
if (True == _3512577_37) {
coraReturn(co, True);
return;
} else {
Obj _3512578_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), x, _3512578_37);
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
Obj _3512567_37= co->res;
Obj _3512566_37 = R[1];
Obj _3512565_37 = R[2];
Obj _3512568_37 = makeCons(co->gc, _3512567_37, Nil);
Obj _3512569_37 = makeCons(co->gc, _3512566_37, _3512568_37);
Obj _3512570_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3512569_37);
Obj _3512571_37 = makeCons(co->gc, _3512570_37, Nil);
Obj _3512572_37 = makeCons(co->gc, _3512565_37, _3512571_37);
Obj _3512573_37 = makeCons(co->gc, getBinding(co, packageID, 133).name, _3512572_37);
coraReturn(co, _3512573_37);
return;
}
case 2:
{
Obj _3512566_37= co->res;
Obj exp = R[1];
Obj _3512565_37 = R[2];
R[1] = _3512566_37;
R[2] = _3512565_37;
saveCont(co, clofun22, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 155)), exp);
return;
}
case 3:
{
Obj _3512565_37= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = _3512565_37;
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
Obj _3512563_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), _3512563_37);
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
Obj _3512555_37= co->res;
Obj _3512554_37 = R[1];
Obj _3512553_37 = R[2];
Obj _3512556_37 = makeCons(co->gc, _3512554_37, _3512555_37);
Obj _3512557_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3512556_37);
Obj _3512558_37 = makeCons(co->gc, _3512557_37, Nil);
Obj _3512559_37 = makeCons(co->gc, _3512553_37, _3512558_37);
Obj _3512560_37 = makeCons(co->gc, getBinding(co, packageID, 144).name, _3512559_37);
coraReturn(co, _3512560_37);
return;
}
case 2:
{
Obj _3512554_37= co->res;
Obj exp = R[1];
Obj _3512553_37 = R[2];
R[1] = _3512554_37;
R[2] = _3512553_37;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 154)), exp);
return;
}
case 3:
{
Obj _3512551_37= co->res;
Obj exp = R[1];
Obj _3512552_37 = makeCons(co->gc, _3512551_37, Nil);
Obj _3512553_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3512552_37);
R[1] = exp;
R[2] = _3512553_37;
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
Obj _3512533_37 = PRIM_ISCONS(exp);
if (True == _3512533_37) {
Obj _3512534_37 = PRIM_CAR(exp);
Obj _3512535_37 = PRIM_EQ(_3512534_37, globalRef(co, getBinding(co, packageID, 145)));
if (True == _3512535_37) {
Obj _3512536_37 = PRIM_CDR(exp);
coraReturn(co, _3512536_37);
return;
} else {
Obj _3512537_37 = PRIM_CAR(exp);
Obj _3512538_37 = PRIM_EQ(_3512537_37, getBinding(co, packageID, 140).name);
if (True == _3512538_37) {
R[1] = exp;
saveCont(co, clofun19, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
} else {
Obj _3512545_37 = PRIM_CAR(exp);
Obj _3512546_37 = PRIM_EQ(_3512545_37, getBinding(co, packageID, 139).name);
if (True == _3512546_37) {
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
Obj _3512541_37= co->res;
Obj _3512539_37 = R[1];
Obj _3512542_37 = makeCons(co->gc, _3512541_37, Nil);
Obj _3512543_37 = makeCons(co->gc, _3512539_37, _3512542_37);
Obj _3512544_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3512543_37);
coraReturn(co, _3512544_37);
return;
}
case 2:
{
Obj _3512540_37= co->res;
Obj _3512539_37 = R[1];
R[1] = _3512539_37;
saveCont(co, clofun19, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 141)), _3512540_37);
return;
}
case 3:
{
Obj _3512539_37= co->res;
Obj exp = R[1];
R[1] = _3512539_37;
saveCont(co, clofun19, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), exp);
return;
}
case 4:
{
Obj _3512548_37= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun18, 1, 1, exp), _3512548_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj _3512547_37 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == _3512547_37) {
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
Obj _3512523_37 = PRIM_EQ(Nil, macros);
if (True == _3512523_37) {
coraReturn(co, exp);
return;
} else {
Obj _3512530_37 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun15, 1, 2, macros, exp), _3512530_37);
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
Obj _3512451_37 = makeNative(co->gc, 2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3512526_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3512526_37) {
Obj _3512527_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512528_37 = PRIM_CAR(item);
Obj _3512529_37 = PRIM_EQ(_3512527_37, _3512528_37);
if (True == _3512529_37) {
co->ctx.sp = R;
coraCall1(co, _3512451_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512451_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512451_37, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512452_37 = R[1];
if (True == _3512452_37) {
Obj _3512524_37 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, _3512524_37, closureRef(R[0], 1));
return;
} else {
Obj _3512525_37 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 143)), closureRef(R[0], 1), _3512525_37);
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
Obj _3512519_37 = makeCons(co->gc, n, v);
Obj _3512520_37 = makeCons(co->gc, _3512519_37, globalRef(co, getBinding(co, packageID, 146)));
Obj _3512521_37 = primSet(co, getBinding(co, packageID, 146).name, _3512520_37);
coraReturn(co, _3512521_37);
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
Obj _3512509_37 = PRIM_ISCONS(l);
if (True == _3512509_37) {
Obj _3512510_37 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
saveCont(co, clofun11, 1, R);
coraCall1(co, f, _3512510_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj _3512511_37= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj _3512512_37 = makeCons(co->gc, _3512511_37, res);
Obj _3512513_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 148)), _3512512_37, f, _3512513_37);
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
Obj _3512502_37 = PRIM_ISCONS(l);
if (True == _3512502_37) {
Obj _3512503_37 = PRIM_CAR(l);
Obj _3512504_37 = makeCons(co->gc, _3512503_37, res);
Obj _3512505_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 150)), _3512504_37, _3512505_37);
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
Obj _3512500_37 = PRIM_ISCONS(x);
coraReturn(co, _3512500_37);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512492_37 = PRIM_ISCONS(exp);
if (True == _3512492_37) {
Obj _3512493_37 = PRIM_CAR(exp);
Obj _3512494_37 = PRIM_CDR(exp);
R[1] = _3512493_37;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), _3512494_37);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj _3512495_37= co->res;
Obj _3512493_37 = R[1];
Obj _3512496_37 = makeCons(co->gc, _3512495_37, Nil);
Obj _3512497_37 = makeCons(co->gc, _3512493_37, _3512496_37);
Obj _3512498_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3512497_37);
coraReturn(co, _3512498_37);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512488_37 = PRIM_CDR(x);
Obj _3512489_37 = PRIM_CDR(_3512488_37);
Obj _3512490_37 = PRIM_CDR(_3512489_37);
coraReturn(co, _3512490_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512483_37 = PRIM_CDR(x);
Obj _3512484_37 = PRIM_CDR(_3512483_37);
Obj _3512485_37 = PRIM_CDR(_3512484_37);
Obj _3512486_37 = PRIM_CAR(_3512485_37);
coraReturn(co, _3512486_37);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512479_37 = PRIM_CDR(x);
Obj _3512480_37 = PRIM_CDR(_3512479_37);
Obj _3512481_37 = PRIM_CAR(_3512480_37);
coraReturn(co, _3512481_37);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512476_37 = PRIM_CDR(x);
Obj _3512477_37 = PRIM_CDR(_3512476_37);
coraReturn(co, _3512477_37);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512473_37 = PRIM_CAR(x);
Obj _3512474_37 = PRIM_CDR(_3512473_37);
coraReturn(co, _3512474_37);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512470_37 = PRIM_CAR(x);
Obj _3512471_37 = PRIM_CAR(_3512470_37);
coraReturn(co, _3512471_37);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512467_37 = PRIM_CDR(x);
Obj _3512468_37 = PRIM_CAR(_3512467_37);
coraReturn(co, _3512468_37);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512465_37 = PRIM_EQ(x, Nil);
coraReturn(co, _3512465_37);
return;
}
}
}

