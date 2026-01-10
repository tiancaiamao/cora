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
Obj _3513174_37 = primSet(co, getBinding(co, packageID, 161).name, makeNative(co->gc, 2, clofun0, 1, 0));
Obj _3513177_37 = primSet(co, getBinding(co, packageID, 160).name, makeNative(co->gc, 2, clofun1, 1, 0));
Obj _3513180_37 = primSet(co, getBinding(co, packageID, 159).name, makeNative(co->gc, 2, clofun2, 1, 0));
Obj _3513183_37 = primSet(co, getBinding(co, packageID, 158).name, makeNative(co->gc, 2, clofun3, 1, 0));
Obj _3513186_37 = primSet(co, getBinding(co, packageID, 157).name, makeNative(co->gc, 2, clofun4, 1, 0));
Obj _3513190_37 = primSet(co, getBinding(co, packageID, 156).name, makeNative(co->gc, 2, clofun5, 1, 0));
Obj _3513195_37 = primSet(co, getBinding(co, packageID, 155).name, makeNative(co->gc, 2, clofun6, 1, 0));
Obj _3513199_37 = primSet(co, getBinding(co, packageID, 154).name, makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3513207_37 = primSet(co, getBinding(co, packageID, 153).name, makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3513209_37 = primSet(co, getBinding(co, packageID, 151).name, makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3513214_37 = primSet(co, getBinding(co, packageID, 150).name, makeNative(co->gc, 3, clofun10, 2, 0));
saveCont(co, clofun95, 15, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 150)), Nil);
return;
}
case 1:
{
Obj _3513694_37= co->res;
Obj _3513700_37 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 3, clofun80, 2, 0));
Obj _3513712_37 = primSet(co, getBinding(co, packageID, 71).name, makeNative(co->gc, 5, clofun81, 3, 0));
Obj _3513713_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3513714_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513713_37);
Obj _3513715_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3513714_37);
Obj _3513716_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3513717_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513716_37);
Obj _3513718_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3513717_37);
Obj _3513719_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3513720_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513719_37);
Obj _3513721_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3513720_37);
Obj _3513722_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3513723_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513722_37);
Obj _3513724_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3513723_37);
Obj _3513725_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3513726_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513725_37);
Obj _3513727_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3513726_37);
Obj _3513728_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3513729_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513728_37);
Obj _3513730_37 = makeCons(co->gc, getBinding(co, packageID, 67).name, _3513729_37);
Obj _3513731_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3513732_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513731_37);
Obj _3513733_37 = makeCons(co->gc, getBinding(co, packageID, 66).name, _3513732_37);
Obj _3513734_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3513735_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513734_37);
Obj _3513736_37 = makeCons(co->gc, getBinding(co, packageID, 65).name, _3513735_37);
Obj _3513737_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3513738_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513737_37);
Obj _3513739_37 = makeCons(co->gc, getBinding(co, packageID, 64).name, _3513738_37);
Obj _3513740_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3513741_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513740_37);
Obj _3513742_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3513741_37);
Obj _3513743_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3513744_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513743_37);
Obj _3513745_37 = makeCons(co->gc, getBinding(co, packageID, 63).name, _3513744_37);
Obj _3513746_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3513747_37 = makeCons(co->gc, MAKE_NUMBER(2), _3513746_37);
Obj _3513748_37 = makeCons(co->gc, getBinding(co, packageID, 62).name, _3513747_37);
Obj _3513749_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3513750_37 = makeCons(co->gc, MAKE_NUMBER(0), _3513749_37);
Obj _3513751_37 = makeCons(co->gc, getBinding(co, packageID, 61).name, _3513750_37);
Obj _3513752_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3513753_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513752_37);
Obj _3513754_37 = makeCons(co->gc, getBinding(co, packageID, 60).name, _3513753_37);
Obj _3513755_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3513756_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513755_37);
Obj _3513757_37 = makeCons(co->gc, getBinding(co, packageID, 59).name, _3513756_37);
Obj _3513758_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3513759_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513758_37);
Obj _3513760_37 = makeCons(co->gc, getBinding(co, packageID, 58).name, _3513759_37);
Obj _3513761_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3513762_37 = makeCons(co->gc, MAKE_NUMBER(1), _3513761_37);
Obj _3513763_37 = makeCons(co->gc, getBinding(co, packageID, 57).name, _3513762_37);
Obj _3513764_37 = makeCons(co->gc, _3513763_37, Nil);
Obj _3513765_37 = makeCons(co->gc, _3513760_37, _3513764_37);
Obj _3513766_37 = makeCons(co->gc, _3513757_37, _3513765_37);
Obj _3513767_37 = makeCons(co->gc, _3513754_37, _3513766_37);
Obj _3513768_37 = makeCons(co->gc, _3513751_37, _3513767_37);
Obj _3513769_37 = makeCons(co->gc, _3513748_37, _3513768_37);
Obj _3513770_37 = makeCons(co->gc, _3513745_37, _3513769_37);
Obj _3513771_37 = makeCons(co->gc, _3513742_37, _3513770_37);
Obj _3513772_37 = makeCons(co->gc, _3513739_37, _3513771_37);
Obj _3513773_37 = makeCons(co->gc, _3513736_37, _3513772_37);
Obj _3513774_37 = makeCons(co->gc, _3513733_37, _3513773_37);
Obj _3513775_37 = makeCons(co->gc, _3513730_37, _3513774_37);
Obj _3513776_37 = makeCons(co->gc, _3513727_37, _3513775_37);
Obj _3513777_37 = makeCons(co->gc, _3513724_37, _3513776_37);
Obj _3513778_37 = makeCons(co->gc, _3513721_37, _3513777_37);
Obj _3513779_37 = makeCons(co->gc, _3513718_37, _3513778_37);
Obj _3513780_37 = makeCons(co->gc, _3513715_37, _3513779_37);
Obj _3513781_37 = primSet(co, getBinding(co, packageID, 69).name, _3513780_37);
Obj _3513796_37 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 3, clofun83, 2, 0));
Obj _3513800_37 = primSet(co, getBinding(co, packageID, 55).name, makeNative(co->gc, 2, clofun84, 1, 0));
Obj _3513978_37 = primSet(co, getBinding(co, packageID, 93).name, makeNative(co->gc, 5, clofun94, 4, 0));
Obj _3513979_37 = makeCons(co->gc, getBinding(co, packageID, 98).name, Nil);
Obj _3513980_37 = makeCons(co->gc, getBinding(co, packageID, 99).name, _3513979_37);
Obj _3513981_37 = makeCons(co->gc, getBinding(co, packageID, 101).name, _3513980_37);
Obj _3513982_37 = makeCons(co->gc, getBinding(co, packageID, 132).name, _3513981_37);
Obj _3513983_37 = makeCons(co->gc, getBinding(co, packageID, 138).name, _3513982_37);
Obj _3513984_37 = makeCons(co->gc, getBinding(co, packageID, 147).name, _3513983_37);
Obj _3513985_37 = makeCons(co->gc, getBinding(co, packageID, 149).name, _3513984_37);
Obj _3513986_37 = makeCons(co->gc, getBinding(co, packageID, 39).name, _3513985_37);
Obj _3513987_37 = makeCons(co->gc, getBinding(co, packageID, 40).name, _3513986_37);
Obj _3513988_37 = makeCons(co->gc, getBinding(co, packageID, 41).name, _3513987_37);
Obj _3513989_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3513988_37);
Obj _3513990_37 = makeCons(co->gc, getBinding(co, packageID, 42).name, _3513989_37);
Obj _3513991_37 = makeCons(co->gc, getBinding(co, packageID, 43).name, _3513990_37);
Obj _3513992_37 = makeCons(co->gc, getBinding(co, packageID, 70).name, _3513991_37);
Obj _3513993_37 = makeCons(co->gc, getBinding(co, packageID, 44).name, _3513992_37);
Obj _3513994_37 = makeCons(co->gc, getBinding(co, packageID, 45).name, _3513993_37);
Obj _3513995_37 = makeCons(co->gc, getBinding(co, packageID, 46).name, _3513994_37);
Obj _3513996_37 = makeCons(co->gc, getBinding(co, packageID, 47).name, _3513995_37);
Obj _3513997_37 = makeCons(co->gc, getBinding(co, packageID, 48).name, _3513996_37);
Obj _3513998_37 = makeCons(co->gc, getBinding(co, packageID, 49).name, _3513997_37);
Obj _3513999_37 = makeCons(co->gc, getBinding(co, packageID, 50).name, _3513998_37);
Obj _3514000_37 = makeCons(co->gc, getBinding(co, packageID, 51).name, _3513999_37);
Obj _3514001_37 = makeCons(co->gc, getBinding(co, packageID, 52).name, _3514000_37);
Obj _3514002_37 = makeCons(co->gc, getBinding(co, packageID, 72).name, _3514001_37);
Obj _3514003_37 = makeCons(co->gc, getBinding(co, packageID, 74).name, _3514002_37);
Obj _3514004_37 = makeCons(co->gc, getBinding(co, packageID, 73).name, _3514003_37);
Obj _3514005_37 = makeCons(co->gc, getBinding(co, packageID, 161).name, _3514004_37);
Obj _3514006_37 = makeCons(co->gc, getBinding(co, packageID, 54).name, _3514005_37);
Obj _3514007_37 = makeCons(co->gc, getBinding(co, packageID, 121).name, _3514006_37);
Obj _3514008_37 = makeCons(co->gc, getBinding(co, packageID, 131).name, _3514007_37);
Obj _3514009_37 = makeCons(co->gc, getBinding(co, packageID, 151).name, _3514008_37);
Obj _3514010_37 = makeCons(co->gc, getBinding(co, packageID, 154).name, _3514009_37);
Obj _3514011_37 = makeCons(co->gc, getBinding(co, packageID, 155).name, _3514010_37);
Obj _3514012_37 = makeCons(co->gc, getBinding(co, packageID, 156).name, _3514011_37);
Obj _3514013_37 = makeCons(co->gc, getBinding(co, packageID, 157).name, _3514012_37);
Obj _3514014_37 = makeCons(co->gc, getBinding(co, packageID, 158).name, _3514013_37);
Obj _3514015_37 = makeCons(co->gc, getBinding(co, packageID, 159).name, _3514014_37);
Obj _3514016_37 = makeCons(co->gc, getBinding(co, packageID, 160).name, _3514015_37);
Obj _3514017_37 = primSet(co, getBinding(co, packageID, 53).name, _3514016_37);
Obj _3514018_37 = primSet(co, getBinding(co, packageID, 38).name, globalRef(co, getBinding(co, packageID, 160)));
Obj _3514019_37 = primSet(co, getBinding(co, packageID, 37).name, globalRef(co, getBinding(co, packageID, 159)));
Obj _3514020_37 = primSet(co, getBinding(co, packageID, 36).name, globalRef(co, getBinding(co, packageID, 158)));
Obj _3514021_37 = primSet(co, getBinding(co, packageID, 35).name, globalRef(co, getBinding(co, packageID, 157)));
Obj _3514022_37 = primSet(co, getBinding(co, packageID, 34).name, globalRef(co, getBinding(co, packageID, 156)));
Obj _3514023_37 = primSet(co, getBinding(co, packageID, 33).name, globalRef(co, getBinding(co, packageID, 155)));
Obj _3514024_37 = primSet(co, getBinding(co, packageID, 32).name, globalRef(co, getBinding(co, packageID, 154)));
Obj _3514025_37 = primSet(co, getBinding(co, packageID, 31).name, globalRef(co, getBinding(co, packageID, 151)));
Obj _3514026_37 = primSet(co, getBinding(co, packageID, 30).name, globalRef(co, getBinding(co, packageID, 131)));
Obj _3514027_37 = primSet(co, getBinding(co, packageID, 29).name, globalRef(co, getBinding(co, packageID, 121)));
Obj _3514028_37 = primSet(co, getBinding(co, packageID, 28).name, globalRef(co, getBinding(co, packageID, 161)));
Obj _3514029_37 = primSet(co, getBinding(co, packageID, 27).name, globalRef(co, getBinding(co, packageID, 54)));
Obj _3514030_37 = primSet(co, getBinding(co, packageID, 26).name, globalRef(co, getBinding(co, packageID, 73)));
Obj _3514031_37 = primSet(co, getBinding(co, packageID, 25).name, globalRef(co, getBinding(co, packageID, 74)));
Obj _3514032_37 = primSet(co, getBinding(co, packageID, 24).name, globalRef(co, getBinding(co, packageID, 72)));
Obj _3514033_37 = primSet(co, getBinding(co, packageID, 23).name, globalRef(co, getBinding(co, packageID, 52)));
Obj _3514034_37 = primSet(co, getBinding(co, packageID, 22).name, globalRef(co, getBinding(co, packageID, 51)));
Obj _3514035_37 = primSet(co, getBinding(co, packageID, 21).name, globalRef(co, getBinding(co, packageID, 50)));
Obj _3514036_37 = primSet(co, getBinding(co, packageID, 20).name, globalRef(co, getBinding(co, packageID, 49)));
Obj _3514037_37 = primSet(co, getBinding(co, packageID, 19).name, globalRef(co, getBinding(co, packageID, 48)));
Obj _3514038_37 = primSet(co, getBinding(co, packageID, 18).name, globalRef(co, getBinding(co, packageID, 47)));
Obj _3514039_37 = primSet(co, getBinding(co, packageID, 17).name, globalRef(co, getBinding(co, packageID, 46)));
Obj _3514040_37 = primSet(co, getBinding(co, packageID, 16).name, globalRef(co, getBinding(co, packageID, 44)));
Obj _3514041_37 = primSet(co, getBinding(co, packageID, 15).name, globalRef(co, getBinding(co, packageID, 70)));
Obj _3514042_37 = primSet(co, getBinding(co, packageID, 14).name, globalRef(co, getBinding(co, packageID, 45)));
Obj _3514043_37 = primSet(co, getBinding(co, packageID, 13).name, globalRef(co, getBinding(co, packageID, 43)));
Obj _3514044_37 = primSet(co, getBinding(co, packageID, 12).name, globalRef(co, getBinding(co, packageID, 41)));
Obj _3514045_37 = primSet(co, getBinding(co, packageID, 11).name, globalRef(co, getBinding(co, packageID, 42)));
Obj _3514046_37 = primSet(co, getBinding(co, packageID, 10).name, globalRef(co, getBinding(co, packageID, 81)));
Obj _3514047_37 = primSet(co, getBinding(co, packageID, 9).name, globalRef(co, getBinding(co, packageID, 40)));
Obj _3514048_37 = primSet(co, getBinding(co, packageID, 8).name, globalRef(co, getBinding(co, packageID, 39)));
Obj _3514049_37 = primSet(co, getBinding(co, packageID, 7).name, globalRef(co, getBinding(co, packageID, 149)));
Obj _3514050_37 = primSet(co, getBinding(co, packageID, 6).name, globalRef(co, getBinding(co, packageID, 147)));
Obj _3514051_37 = primSet(co, getBinding(co, packageID, 5).name, globalRef(co, getBinding(co, packageID, 138)));
Obj _3514052_37 = primSet(co, getBinding(co, packageID, 4).name, globalRef(co, getBinding(co, packageID, 132)));
Obj _3514053_37 = primSet(co, getBinding(co, packageID, 3).name, globalRef(co, getBinding(co, packageID, 101)));
Obj _3514054_37 = primSet(co, getBinding(co, packageID, 2).name, globalRef(co, getBinding(co, packageID, 99)));
Obj _3514055_37 = primSet(co, getBinding(co, packageID, 1).name, globalRef(co, getBinding(co, packageID, 98)));
Obj _3514056_37 = primSet(co, getBinding(co, packageID, 0).name, globalRef(co, getBinding(co, packageID, 56)));
coraReturn(co, _3514056_37);
return;
}
case 2:
{
Obj _3513644_37= co->res;
Obj _3513673_37 = primSet(co, getBinding(co, packageID, 83).name, makeNative(co->gc, 5, clofun75, 4, 0));
Obj _3513674_37 = primSet(co, getBinding(co, packageID, 80).name, makeNative(co->gc, 3, clofun76, 2, 0));
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 79).name, makeNative(co->gc, 2, clofun79, 1, 0));
return;
}
case 3:
{
Obj _3513627_37= co->res;
Obj _3513641_37 = primSet(co, getBinding(co, packageID, 85).name, makeNative(co->gc, 3, clofun71, 2, 0));
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 84).name, makeNative(co->gc, 2, clofun72, 1, 0));
return;
}
case 4:
{
Obj _3513605_37= co->res;
Obj _3513625_37 = primSet(co, getBinding(co, packageID, 88).name, makeNative(co->gc, 2, clofun69, 1, 0));
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 86).name, makeNative(co->gc, 2, clofun70, 1, 0));
return;
}
case 5:
{
Obj _3513574_37= co->res;
Obj _3513575_37 = primSet(co, getBinding(co, packageID, 94).name, makeNative(co->gc, 2, clofun61, 1, 0));
Obj _3513576_37 = primSet(co, getBinding(co, packageID, 92).name, makeNative(co->gc, 2, clofun62, 1, 0));
Obj _3513579_37 = primSet(co, getBinding(co, packageID, 138).name, makeNative(co->gc, 2, clofun63, 1, 0));
Obj _3513603_37 = primSet(co, getBinding(co, packageID, 91).name, makeNative(co->gc, 2, clofun66, 1, 0));
saveCont(co, clofun95, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 89).name, makeNative(co->gc, 2, clofun67, 1, 0));
return;
}
case 6:
{
Obj _3513466_37= co->res;
Obj _3513518_37 = primSet(co, getBinding(co, packageID, 106).name, makeNative(co->gc, 5, clofun48, 3, 0));
Obj _3513519_37 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 2, clofun49, 1, 0));
Obj _3513524_37 = primSet(co, getBinding(co, packageID, 103).name, makeNative(co->gc, 3, clofun50, 2, 0));
Obj _3513528_37 = primSet(co, getBinding(co, packageID, 102).name, makeNative(co->gc, 3, clofun51, 2, 0));
Obj _3513529_37 = primSet(co, getBinding(co, packageID, 101).name, makeNative(co->gc, 2, clofun52, 1, 0));
Obj _3513537_37 = primSet(co, getBinding(co, packageID, 100).name, makeNative(co->gc, 4, clofun53, 3, 0));
Obj _3513538_37 = primSet(co, getBinding(co, packageID, 99).name, makeNative(co->gc, 3, clofun54, 2, 0));
Obj _3513544_37 = primSet(co, getBinding(co, packageID, 98).name, makeNative(co->gc, 3, clofun55, 2, 0));
Obj _3513555_37 = primSet(co, getBinding(co, packageID, 97).name, makeNative(co->gc, 2, clofun58, 1, 0));
Obj _3513561_37 = primSet(co, getBinding(co, packageID, 96).name, makeNative(co->gc, 2, clofun59, 1, 0));
saveCont(co, clofun95, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 95).name, makeNative(co->gc, 3, clofun60, 1, 0));
return;
}
case 7:
{
Obj _3513361_37= co->res;
Obj _3513383_37 = primSet(co, getBinding(co, packageID, 118).name, makeNative(co->gc, 5, clofun36, 4, 0));
Obj _3513416_37 = primSet(co, getBinding(co, packageID, 117).name, makeNative(co->gc, 5, clofun38, 4, 0));
Obj _3513429_37 = primSet(co, getBinding(co, packageID, 111).name, makeNative(co->gc, 3, clofun40, 2, 0));
Obj _3513451_37 = primSet(co, getBinding(co, packageID, 109).name, makeNative(co->gc, 3, clofun42, 2, 0));
Obj _3513465_37 = primSet(co, getBinding(co, packageID, 108).name, makeNative(co->gc, 2, clofun44, 1, 0));
saveCont(co, clofun95, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 107).name, makeNative(co->gc, 2, clofun45, 1, 0));
return;
}
case 8:
{
Obj _3513346_37= co->res;
Obj _3513349_37 = primSet(co, getBinding(co, packageID, 121).name, makeNative(co->gc, 2, clofun32, 1, 0));
Obj _3513359_37 = primSet(co, getBinding(co, packageID, 120).name, makeNative(co->gc, 2, clofun33, 1, 0));
saveCont(co, clofun95, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 119).name, makeNative(co->gc, 2, clofun34, 1, 0));
return;
}
case 9:
{
Obj _3513332_37= co->res;
Obj _3513344_37 = primSet(co, getBinding(co, packageID, 123).name, makeNative(co->gc, 2, clofun30, 1, 0));
saveCont(co, clofun95, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 122).name, makeNative(co->gc, 2, clofun31, 1, 0));
return;
}
case 10:
{
Obj _3513318_37= co->res;
Obj _3513330_37 = primSet(co, getBinding(co, packageID, 125).name, makeNative(co->gc, 2, clofun28, 1, 0));
saveCont(co, clofun95, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 124).name, makeNative(co->gc, 2, clofun29, 1, 0));
return;
}
case 11:
{
Obj _3513304_37= co->res;
saveCont(co, clofun95, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 128).name, makeNative(co->gc, 3, clofun27, 1, 0));
return;
}
case 12:
{
Obj _3513282_37= co->res;
Obj _3513287_37 = primSet(co, getBinding(co, packageID, 132).name, makeNative(co->gc, 3, clofun23, 2, 0));
Obj _3513290_37 = primSet(co, getBinding(co, packageID, 131).name, makeNative(co->gc, 2, clofun24, 1, 0));
Obj _3513302_37 = primSet(co, getBinding(co, packageID, 130).name, makeNative(co->gc, 3, clofun25, 1, 0));
saveCont(co, clofun95, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 129).name, makeNative(co->gc, 2, clofun26, 1, 0));
return;
}
case 13:
{
Obj _3513272_37= co->res;
saveCont(co, clofun95, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 134).name, makeNative(co->gc, 3, clofun22, 1, 0));
return;
}
case 14:
{
Obj _3513270_37= co->res;
saveCont(co, clofun95, 13, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 135).name, makeNative(co->gc, 2, clofun21, 1, 0));
return;
}
case 15:
{
Obj _3513215_37= co->res;
Obj _3513216_37 = primSet(co, getBinding(co, packageID, 149).name, _3513215_37);
Obj _3513222_37 = primSet(co, getBinding(co, packageID, 148).name, makeNative(co->gc, 4, clofun11, 3, 0));
Obj _3513223_37 = primSet(co, getBinding(co, packageID, 147).name, makeNative(co->gc, 3, clofun12, 2, 0));
Obj _3513224_37 = primSet(co, getBinding(co, packageID, 146).name, Nil);
Obj _3513225_37 = primGenSym(co);
Obj _3513226_37 = primSet(co, getBinding(co, packageID, 145).name, _3513225_37);
Obj _3513230_37 = primSet(co, getBinding(co, packageID, 144).name, makeNative(co->gc, 3, clofun13, 2, 0));
Obj _3513239_37 = primSet(co, getBinding(co, packageID, 143).name, makeNative(co->gc, 3, clofun16, 2, 0));
Obj _3513240_37 = primSet(co, getBinding(co, packageID, 142).name, makeNative(co->gc, 2, clofun17, 1, 0));
Obj _3513257_37 = primSet(co, getBinding(co, packageID, 141).name, makeNative(co->gc, 2, clofun19, 1, 0));
Obj _3513258_37 = primSet(co, getBinding(co, packageID, 138).name, globalRef(co, getBinding(co, packageID, 141)));
Obj _3513269_37 = primSet(co, getBinding(co, packageID, 137).name, makeNative(co->gc, 3, clofun20, 1, 0));
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
Obj _3513145_37 = R[1];
Obj _3513146_37 = R[2];
Obj _3513147_37 = R[3];
Obj _3513148_37 = R[4];
Obj _3513169_37 = makeNative(co->gc, 2, clofun93, 1, 4, _3513145_37, _3513146_37, _3513147_37, _3513148_37);
R[1] = _3513148_37;
R[2] = _3513169_37;
saveCont(co, clofun94, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 54)), _3513148_37);
return;
}
case 1:
{
Obj _3513977_37= co->res;
Obj _3513169_37 = R[1];
if (True == _3513977_37) {
co->ctx.sp = R;
coraCall1(co, _3513169_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513169_37, False);
return;
}
}
case 2:
{
Obj _3513976_37= co->res;
Obj _3513148_37 = R[1];
Obj _3513169_37 = R[2];
if (True == _3513976_37) {
co->ctx.sp = R;
coraCall1(co, _3513169_37, True);
return;
} else {
R[1] = _3513169_37;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513148_37);
return;
}
}
case 3:
{
Obj _3513974_37= co->res;
Obj _3513148_37 = R[1];
Obj _3513169_37 = R[2];
if (True == _3513974_37) {
co->ctx.sp = R;
coraCall1(co, _3513169_37, True);
return;
} else {
Obj _3513975_37 = primIsString(_3513148_37);
if (True == _3513975_37) {
co->ctx.sp = R;
coraCall1(co, _3513169_37, True);
return;
} else {
R[1] = _3513148_37;
R[2] = _3513169_37;
saveCont(co, clofun94, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 121)), _3513148_37);
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
Obj _3513170_37 = R[1];
if (True == _3513170_37) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj _3513150_37 = makeNative(co->gc, 3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3513962_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3513962_37) {
Obj _3513963_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3513964_37 = PRIM_EQ(getBinding(co, packageID, 139).name, _3513963_37);
if (True == _3513964_37) {
Obj _3513965_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513966_37 = PRIM_ISCONS(_3513965_37);
if (True == _3513966_37) {
Obj _3513967_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513968_37 = PRIM_CAR(_3513967_37);
Obj x = _3513968_37;
Obj _3513969_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513970_37 = PRIM_CDR(_3513969_37);
Obj _3513971_37 = PRIM_EQ(Nil, _3513970_37);
if (True == _3513971_37) {
Obj _3513972_37 = makeCons(co->gc, x, Nil);
Obj _3513973_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3513972_37);
coraReturn(co, _3513973_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513150_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513150_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513150_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513150_37);
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
Obj _3513801_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3513801_37) {
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3513152_37 = makeNative(co->gc, 3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513940_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513940_37) {
Obj _3513941_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513942_37 = PRIM_EQ(getBinding(co, packageID, 140).name, _3513941_37);
if (True == _3513942_37) {
Obj _3513943_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513944_37 = PRIM_ISCONS(_3513943_37);
if (True == _3513944_37) {
Obj _3513945_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513946_37 = PRIM_CAR(_3513945_37);
Obj args = _3513946_37;
Obj _3513947_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513948_37 = PRIM_CDR(_3513947_37);
Obj _3513949_37 = PRIM_ISCONS(_3513948_37);
if (True == _3513949_37) {
Obj _3513950_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513951_37 = PRIM_CDR(_3513950_37);
Obj _3513952_37 = PRIM_CAR(_3513951_37);
Obj body = _3513952_37;
Obj _3513953_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513954_37 = PRIM_CDR(_3513953_37);
Obj _3513955_37 = PRIM_CDR(_3513954_37);
Obj _3513956_37 = PRIM_EQ(Nil, _3513955_37);
if (True == _3513956_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513152_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513152_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513152_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513152_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513152_37);
return;
}
}
}
case 1:
{
Obj _3513803_37= co->res;
if (True == _3513803_37) {
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
Obj _3513802_37= co->res;
if (True == _3513802_37) {
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
Obj _3513958_37= co->res;
Obj args = R[1];
Obj _3513959_37 = makeCons(co->gc, _3513958_37, Nil);
Obj _3513960_37 = makeCons(co->gc, args, _3513959_37);
Obj _3513961_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3513960_37);
coraReturn(co, _3513961_37);
return;
}
case 4:
{
Obj _3513957_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun92, 3, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), _3513957_37, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513153_37 = makeNative(co->gc, 1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513896_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513896_37) {
Obj _3513897_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513898_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3513897_37);
if (True == _3513898_37) {
Obj _3513899_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513900_37 = PRIM_ISCONS(_3513899_37);
if (True == _3513900_37) {
Obj _3513901_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513902_37 = PRIM_CAR(_3513901_37);
Obj _3513903_37 = PRIM_ISCONS(_3513902_37);
if (True == _3513903_37) {
Obj _3513904_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513905_37 = PRIM_CAR(_3513904_37);
Obj _3513906_37 = PRIM_CAR(_3513905_37);
Obj _3513907_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3513906_37);
if (True == _3513907_37) {
Obj _3513908_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513909_37 = PRIM_CAR(_3513908_37);
Obj _3513910_37 = PRIM_CDR(_3513909_37);
Obj _3513911_37 = PRIM_ISCONS(_3513910_37);
if (True == _3513911_37) {
Obj _3513912_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513913_37 = PRIM_CAR(_3513912_37);
Obj _3513914_37 = PRIM_CDR(_3513913_37);
Obj _3513915_37 = PRIM_CAR(_3513914_37);
Obj pkg = _3513915_37;
Obj _3513916_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513917_37 = PRIM_CAR(_3513916_37);
Obj _3513918_37 = PRIM_CDR(_3513917_37);
Obj _3513919_37 = PRIM_CDR(_3513918_37);
Obj _3513920_37 = PRIM_EQ(Nil, _3513919_37);
if (True == _3513920_37) {
Obj _3513921_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513922_37 = PRIM_CDR(_3513921_37);
Obj _3513923_37 = PRIM_ISCONS(_3513922_37);
if (True == _3513923_37) {
Obj _3513924_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513925_37 = PRIM_CDR(_3513924_37);
Obj _3513926_37 = PRIM_CAR(_3513925_37);
Obj y = _3513926_37;
Obj _3513927_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513928_37 = PRIM_CDR(_3513927_37);
Obj _3513929_37 = PRIM_CDR(_3513928_37);
Obj _3513930_37 = PRIM_EQ(Nil, _3513929_37);
if (True == _3513930_37) {
Obj _3513931_37 = primIsString(pkg);
if (True == _3513931_37) {
Obj _3513932_37 = makeCons(co->gc, pkg, Nil);
Obj _3513933_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3513932_37);
R[1] = pkg;
R[2] = y;
saveCont(co, clofun91, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), _3513933_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513153_37);
return;
}
}
case 1:
{
Obj _3513936_37= co->res;
Obj _3513934_37 = R[1];
Obj _3513937_37 = makeCons(co->gc, _3513936_37, Nil);
Obj _3513938_37 = makeCons(co->gc, _3513934_37, _3513937_37);
Obj _3513939_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3513938_37);
coraReturn(co, _3513939_37);
return;
}
case 2:
{
Obj _3513934_37= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj _3513935_37 = makeCons(co->gc, pkg, closureRef(R[0], 3));
R[1] = _3513934_37;
saveCont(co, clofun91, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), _3513935_37, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513154_37 = makeNative(co->gc, 3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513888_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513888_37) {
Obj _3513889_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3513889_37;
Obj _3513890_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3513890_37;
Obj _3513171_37 = makeNative(co->gc, 2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, _3513154_37);
Obj _3513894_37 = PRIM_EQ(op, getBinding(co, packageID, 126).name);
if (True == _3513894_37) {
co->ctx.sp = R;
coraCall1(co, _3513171_37, True);
return;
} else {
Obj _3513895_37 = PRIM_EQ(op, getBinding(co, packageID, 90).name);
if (True == _3513895_37) {
co->ctx.sp = R;
coraCall1(co, _3513171_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513171_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513154_37);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513172_37 = R[1];
if (True == _3513172_37) {
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
Obj _3513892_37= co->res;
Obj _3513893_37 = makeCons(co->gc, closureRef(R[0], 0), _3513892_37);
coraReturn(co, _3513893_37);
return;
}
case 2:
{
Obj _3513891_37= co->res;
saveCont(co, clofun89, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), _3513891_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513155_37 = makeNative(co->gc, 1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513855_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513855_37) {
Obj _3513856_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513857_37 = PRIM_EQ(getBinding(co, packageID, 129).name, _3513856_37);
if (True == _3513857_37) {
Obj _3513858_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513859_37 = PRIM_ISCONS(_3513858_37);
if (True == _3513859_37) {
Obj _3513860_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513861_37 = PRIM_CAR(_3513860_37);
Obj a = _3513861_37;
Obj _3513862_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513863_37 = PRIM_CDR(_3513862_37);
Obj _3513864_37 = PRIM_ISCONS(_3513863_37);
if (True == _3513864_37) {
Obj _3513865_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513866_37 = PRIM_CDR(_3513865_37);
Obj _3513867_37 = PRIM_CAR(_3513866_37);
Obj b = _3513867_37;
Obj _3513868_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513869_37 = PRIM_CDR(_3513868_37);
Obj _3513870_37 = PRIM_CDR(_3513869_37);
Obj _3513871_37 = PRIM_ISCONS(_3513870_37);
if (True == _3513871_37) {
Obj _3513872_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513873_37 = PRIM_CDR(_3513872_37);
Obj _3513874_37 = PRIM_CDR(_3513873_37);
Obj _3513875_37 = PRIM_CAR(_3513874_37);
Obj c = _3513875_37;
Obj _3513876_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513877_37 = PRIM_CDR(_3513876_37);
Obj _3513878_37 = PRIM_CDR(_3513877_37);
Obj _3513879_37 = PRIM_CDR(_3513878_37);
Obj _3513880_37 = PRIM_EQ(Nil, _3513879_37);
if (True == _3513880_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun88, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513155_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513155_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513155_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513155_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513155_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513155_37);
return;
}
}
case 1:
{
Obj _3513883_37= co->res;
Obj _3513881_37 = R[1];
Obj a = R[2];
Obj _3513884_37 = makeCons(co->gc, _3513883_37, Nil);
Obj _3513885_37 = makeCons(co->gc, _3513881_37, _3513884_37);
Obj _3513886_37 = makeCons(co->gc, a, _3513885_37);
Obj _3513887_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3513886_37);
coraReturn(co, _3513887_37);
return;
}
case 2:
{
Obj _3513881_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3513882_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3513881_37;
R[2] = a;
saveCont(co, clofun88, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), _3513882_37, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513156_37 = makeNative(co->gc, 2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513829_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3513829_37) {
Obj _3513830_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3513831_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3513830_37);
if (True == _3513831_37) {
Obj _3513832_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513833_37 = PRIM_ISCONS(_3513832_37);
if (True == _3513833_37) {
Obj _3513834_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513835_37 = PRIM_CAR(_3513834_37);
Obj path = _3513835_37;
Obj _3513836_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513837_37 = PRIM_CDR(_3513836_37);
Obj _3513838_37 = PRIM_ISCONS(_3513837_37);
if (True == _3513838_37) {
Obj _3513839_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513840_37 = PRIM_CDR(_3513839_37);
Obj _3513841_37 = PRIM_CAR(_3513840_37);
Obj import = _3513841_37;
Obj _3513842_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513843_37 = PRIM_CDR(_3513842_37);
Obj _3513844_37 = PRIM_CDR(_3513843_37);
Obj _3513845_37 = PRIM_ISCONS(_3513844_37);
if (True == _3513845_37) {
Obj _3513846_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513847_37 = PRIM_CDR(_3513846_37);
Obj _3513848_37 = PRIM_CDR(_3513847_37);
Obj _3513849_37 = PRIM_CAR(_3513848_37);
Obj body = _3513849_37;
Obj _3513850_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513851_37 = PRIM_CDR(_3513850_37);
Obj _3513852_37 = PRIM_CDR(_3513851_37);
Obj _3513853_37 = PRIM_CDR(_3513852_37);
Obj _3513854_37 = PRIM_EQ(Nil, _3513853_37);
if (True == _3513854_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513156_37);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513157_37 = makeNative(co->gc, 1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj _3513805_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513805_37) {
Obj _3513806_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513807_37 = PRIM_EQ(getBinding(co, packageID, 133).name, _3513806_37);
if (True == _3513807_37) {
Obj _3513808_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513809_37 = PRIM_ISCONS(_3513808_37);
if (True == _3513809_37) {
Obj _3513810_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513811_37 = PRIM_CAR(_3513810_37);
Obj var = _3513811_37;
Obj _3513812_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513813_37 = PRIM_CDR(_3513812_37);
Obj _3513814_37 = PRIM_ISCONS(_3513813_37);
if (True == _3513814_37) {
Obj _3513815_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513816_37 = PRIM_CDR(_3513815_37);
Obj _3513817_37 = PRIM_CAR(_3513816_37);
Obj val = _3513817_37;
Obj _3513818_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513819_37 = PRIM_CDR(_3513818_37);
Obj _3513820_37 = PRIM_CDR(_3513819_37);
Obj _3513821_37 = PRIM_EQ(Nil, _3513820_37);
if (True == _3513821_37) {
R[1] = val;
saveCont(co, clofun86, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513157_37);
return;
}
}
case 1:
{
Obj _3513825_37= co->res;
Obj _3513824_37 = R[1];
Obj _3513826_37 = makeCons(co->gc, _3513825_37, Nil);
Obj _3513827_37 = makeCons(co->gc, _3513824_37, _3513826_37);
Obj _3513828_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3513827_37);
coraReturn(co, _3513828_37);
return;
}
case 2:
{
Obj _3513822_37= co->res;
Obj val = R[1];
Obj var1 = _3513822_37;
Obj _3513823_37 = makeCons(co->gc, var1, Nil);
Obj _3513824_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3513823_37);
R[1] = _3513824_37;
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
Obj _3513804_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), _3513804_37, closureRef(R[0], 3));
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
Obj _3513798_37= co->res;
Obj _3513799_37 = primNot(_3513798_37);
coraReturn(co, _3513799_37);
return;
}
case 2:
{
Obj _3513797_37= co->res;
saveCont(co, clofun84, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513797_37);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513140_37 = R[1];
Obj _3513141_37 = R[2];
Obj _3513782_37 = PRIM_EQ(Nil, _3513141_37);
if (True == _3513782_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3513143_37 = makeNative(co->gc, 1, clofun82, 0, 2, _3513141_37, _3513140_37);
Obj _3513786_37 = PRIM_ISCONS(_3513141_37);
if (True == _3513786_37) {
Obj _3513787_37 = PRIM_CAR(_3513141_37);
Obj _3513788_37 = PRIM_ISCONS(_3513787_37);
if (True == _3513788_37) {
Obj _3513789_37 = PRIM_CAR(_3513141_37);
Obj _3513790_37 = PRIM_CAR(_3513789_37);
Obj x = _3513790_37;
Obj _3513791_37 = PRIM_CAR(_3513141_37);
Obj _3513792_37 = PRIM_CDR(_3513791_37);
Obj y = _3513792_37;
Obj _3513793_37 = PRIM_CDR(_3513141_37);
Obj _3513794_37 = PRIM_EQ(_3513140_37, x);
if (True == _3513794_37) {
Obj _3513795_37 = makeCons(co->gc, x, y);
coraReturn(co, _3513795_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513143_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513143_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513143_37);
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
Obj _3513783_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513783_37) {
Obj _3513784_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513785_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513785_37;
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
Obj _3513135_37 = R[1];
Obj _3513136_37 = R[2];
Obj _3513137_37 = R[3];
Obj _3513701_37 = PRIM_EQ(Nil, _3513137_37);
if (True == _3513701_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), _3513135_37, _3513136_37);
return;
} else {
Obj _3513702_37 = PRIM_ISCONS(_3513137_37);
if (True == _3513702_37) {
Obj _3513703_37 = PRIM_CAR(_3513137_37);
Obj import = _3513703_37;
Obj _3513704_37 = PRIM_CDR(_3513137_37);
Obj more = _3513704_37;
R[1] = import;
R[2] = _3513135_37;
R[3] = _3513136_37;
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
Obj _3513711_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3513711_37);
return;
}
case 2:
{
Obj _3513710_37= co->res;
Obj import = R[1];
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), import, _3513710_37);
return;
}
case 3:
{
Obj _3513709_37= co->res;
Obj import = R[1];
R[1] = import;
saveCont(co, clofun81, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), _3513709_37);
return;
}
case 4:
{
Obj _3513708_37= co->res;
Obj import = R[1];
Obj _3513135_37 = R[2];
Obj _3513136_37 = R[3];
Obj more = R[4];
if (True == _3513708_37) {
R[1] = import;
saveCont(co, clofun81, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 72)), _3513135_37);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 71)), _3513135_37, _3513136_37, more);
return;
}
}
case 5:
{
Obj _3513707_37= co->res;
Obj import = R[1];
Obj _3513135_37 = R[2];
Obj _3513136_37 = R[3];
Obj more = R[4];
Obj export = _3513707_37;
R[1] = import;
R[2] = _3513135_37;
R[3] = _3513136_37;
R[4] = more;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), _3513135_37, export);
return;
}
case 6:
{
Obj _3513706_37= co->res;
Obj import = R[1];
Obj _3513135_37 = R[2];
Obj _3513136_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3513135_37;
R[3] = _3513136_37;
R[4] = more;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 70)), _3513706_37, Nil);
return;
}
case 7:
{
Obj _3513705_37= co->res;
Obj import = R[1];
Obj _3513135_37 = R[2];
Obj _3513136_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3513135_37;
R[3] = _3513136_37;
R[4] = more;
saveCont(co, clofun81, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3513705_37);
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
Obj _3513695_37 = PRIM_EQ(ns, makeCString(co->gc, ""));
if (True == _3513695_37) {
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
Obj _3513699_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3513699_37);
return;
}
case 2:
{
Obj _3513698_37= co->res;
Obj ns = R[1];
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), ns, _3513698_37);
return;
}
case 3:
{
Obj _3513697_37= co->res;
Obj ns = R[1];
R[1] = ns;
saveCont(co, clofun80, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), _3513697_37);
return;
}
case 4:
{
Obj _3513696_37= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == _3513696_37) {
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
Obj _3513677_37= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, _3513677_37, makeNative(co->gc, 4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj _3513676_37= co->res;
Obj path = R[1];
R[1] = path;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 80)), _3513676_37);
return;
}
case 3:
{
Obj _3513675_37= co->res;
Obj sexp = R[1];
Obj path = _3513675_37;
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
Obj _3513678_37 = makeCons(co->gc, makeCString(co->gc, "cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = _3513678_37;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), makeNative(co->gc, 2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj _3513688_37= co->res;
Obj _3513678_37 = R[1];
Obj _3513689_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3513688_37);
Obj _3513690_37 = makeCons(co->gc, _3513689_37, Nil);
Obj _3513691_37 = makeCons(co->gc, _3513678_37, _3513690_37);
Obj _3513692_37 = makeCons(co->gc, closureRef(R[0], 0), _3513691_37);
Obj _3513693_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3513692_37);
coraReturn(co, _3513693_37);
return;
}
case 2:
{
Obj _3513681_37= co->res;
Obj export = R[1];
Obj body = R[2];
Obj _3513678_37 = R[3];
Obj _3513682_37 = makeCons(co->gc, export, Nil);
Obj _3513683_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3513682_37);
Obj _3513684_37 = makeCons(co->gc, _3513683_37, Nil);
Obj _3513685_37 = makeCons(co->gc, getBinding(co, packageID, 77).name, _3513684_37);
Obj _3513686_37 = makeCons(co->gc, getBinding(co, packageID, 133).name, _3513685_37);
Obj _3513687_37 = makeCons(co->gc, _3513686_37, body);
R[1] = _3513678_37;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3513681_37, _3513687_37);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj _3513679_37 = makeCons(co->gc, imp, Nil);
Obj _3513680_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3513679_37);
coraReturn(co, _3513680_37);
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
Obj _3513128_37 = R[1];
Obj _3513129_37 = R[2];
Obj _3513130_37 = R[3];
Obj _3513131_37 = R[4];
Obj _3513132_37 = makeNative(co->gc, 1, clofun74, 0, 4, _3513130_37, _3513128_37, _3513129_37, _3513131_37);
Obj _3513655_37 = PRIM_ISCONS(_3513128_37);
if (True == _3513655_37) {
Obj _3513656_37 = PRIM_CAR(_3513128_37);
Obj _3513657_37 = PRIM_ISCONS(_3513656_37);
if (True == _3513657_37) {
Obj _3513658_37 = PRIM_CAR(_3513128_37);
Obj _3513659_37 = PRIM_CAR(_3513658_37);
Obj _3513660_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3513659_37);
if (True == _3513660_37) {
Obj _3513661_37 = PRIM_CAR(_3513128_37);
Obj _3513662_37 = PRIM_CDR(_3513661_37);
Obj _3513663_37 = PRIM_ISCONS(_3513662_37);
if (True == _3513663_37) {
Obj _3513664_37 = PRIM_CAR(_3513128_37);
Obj _3513665_37 = PRIM_CDR(_3513664_37);
Obj _3513666_37 = PRIM_CAR(_3513665_37);
Obj lib = _3513666_37;
Obj _3513667_37 = PRIM_CAR(_3513128_37);
Obj _3513668_37 = PRIM_CDR(_3513667_37);
Obj _3513669_37 = PRIM_CDR(_3513668_37);
Obj _3513670_37 = PRIM_EQ(Nil, _3513669_37);
if (True == _3513670_37) {
Obj _3513671_37 = PRIM_CDR(_3513128_37);
Obj rest = _3513671_37;
Obj _3513672_37 = makeCons(co->gc, lib, _3513129_37);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, _3513672_37, _3513130_37, _3513131_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513132_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513132_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513132_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513132_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513132_37);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513133_37 = makeNative(co->gc, 1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513646_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3513646_37) {
Obj _3513647_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513648_37 = PRIM_ISCONS(_3513647_37);
if (True == _3513648_37) {
Obj _3513649_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513650_37 = PRIM_CAR(_3513649_37);
Obj _3513651_37 = PRIM_EQ(getBinding(co, packageID, 82).name, _3513650_37);
if (True == _3513651_37) {
Obj _3513652_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513653_37 = PRIM_CDR(_3513652_37);
Obj more = _3513653_37;
Obj _3513654_37 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = _3513654_37;
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513133_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513133_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513133_37);
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
Obj _3513645_37= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), _3513645_37, closureRef(R[0], 2), closureRef(R[0], 3));
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
Obj _3513643_37= co->res;
Obj _3513642_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), _3513642_37, _3513643_37);
return;
}
case 2:
{
Obj _3513642_37= co->res;
Obj exp = R[1];
R[1] = _3513642_37;
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
Obj _3513631_37= co->res;
Obj _3513630_37 = R[1];
Obj fn = R[2];
Obj _3513632_37 = makeCons(co->gc, _3513631_37, Nil);
Obj _3513633_37 = makeCons(co->gc, _3513630_37, _3513632_37);
Obj _3513634_37 = makeCons(co->gc, fn, _3513633_37);
coraReturn(co, _3513634_37);
return;
}
case 2:
{
Obj _3513637_37= co->res;
Obj _3513635_37 = R[1];
Obj fn = R[2];
Obj _3513638_37 = makeCons(co->gc, _3513637_37, Nil);
Obj _3513639_37 = makeCons(co->gc, _3513635_37, _3513638_37);
Obj _3513640_37 = makeCons(co->gc, fn, _3513639_37);
coraReturn(co, _3513640_37);
return;
}
case 3:
{
Obj _3513629_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == _3513629_37) {
Obj _3513630_37 = PRIM_CAR(arglist);
R[1] = _3513630_37;
R[2] = fn;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), arglist);
return;
} else {
Obj _3513635_37 = PRIM_CAR(arglist);
Obj _3513636_37 = PRIM_CDR(arglist);
R[1] = _3513635_37;
R[2] = fn;
saveCont(co, clofun71, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), fn, _3513636_37);
return;
}
}
case 4:
{
Obj _3513628_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513628_37);
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
Obj _3513626_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 88)), _3513626_37);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513123_37 = R[1];
Obj _3513606_37 = primIsSymbol(_3513123_37);
if (True == _3513606_37) {
Obj _3513607_37 = makeCons(co->gc, _3513123_37, Nil);
Obj _3513608_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3513607_37);
coraReturn(co, _3513608_37);
return;
} else {
Obj _3513125_37 = makeNative(co->gc, 1, clofun68, 0, 1, _3513123_37);
Obj _3513615_37 = PRIM_ISCONS(_3513123_37);
if (True == _3513615_37) {
Obj _3513616_37 = PRIM_CAR(_3513123_37);
Obj _3513617_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3513616_37);
if (True == _3513617_37) {
Obj _3513618_37 = PRIM_CDR(_3513123_37);
Obj _3513619_37 = PRIM_ISCONS(_3513618_37);
if (True == _3513619_37) {
Obj _3513620_37 = PRIM_CDR(_3513123_37);
Obj _3513621_37 = PRIM_CAR(_3513620_37);
Obj x = _3513621_37;
Obj _3513622_37 = PRIM_CDR(_3513123_37);
Obj _3513623_37 = PRIM_CDR(_3513622_37);
Obj _3513624_37 = PRIM_EQ(Nil, _3513623_37);
if (True == _3513624_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513125_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513125_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513125_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513125_37);
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
Obj _3513609_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513609_37) {
Obj _3513610_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513610_37;
Obj _3513611_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3513611_37;
Obj _3513612_37 = makeCons(co->gc, x, more);
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), globalRef(co, getBinding(co, packageID, 88)), _3513612_37);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3513613_37= co->res;
Obj _3513614_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3513613_37);
coraReturn(co, _3513614_37);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3513604_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), _3513604_37);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513119_37 = R[1];
Obj _3513120_37 = makeNative(co->gc, 1, clofun65, 0, 1, _3513119_37);
Obj _3513599_37 = PRIM_ISCONS(_3513119_37);
if (True == _3513599_37) {
Obj _3513600_37 = PRIM_CAR(_3513119_37);
Obj x = _3513600_37;
Obj _3513601_37 = PRIM_CDR(_3513119_37);
Obj _3513602_37 = PRIM_EQ(Nil, _3513601_37);
if (True == _3513602_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513120_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513120_37);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513121_37 = makeNative(co->gc, 2, clofun64, 0, 1, closureRef(R[0], 0));
Obj _3513587_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513587_37) {
Obj _3513588_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513588_37;
Obj _3513589_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513590_37 = PRIM_ISCONS(_3513589_37);
if (True == _3513590_37) {
Obj _3513591_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513592_37 = PRIM_CAR(_3513591_37);
Obj y = _3513592_37;
Obj _3513593_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513594_37 = PRIM_CDR(_3513593_37);
Obj _3513595_37 = PRIM_EQ(Nil, _3513594_37);
if (True == _3513595_37) {
Obj _3513596_37 = makeCons(co->gc, y, Nil);
Obj _3513597_37 = makeCons(co->gc, x, _3513596_37);
Obj _3513598_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3513597_37);
coraReturn(co, _3513598_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513121_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513121_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513121_37);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513580_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513580_37) {
Obj _3513581_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513581_37;
Obj _3513582_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513582_37;
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
Obj _3513583_37= co->res;
Obj x = R[1];
Obj _3513584_37 = makeCons(co->gc, _3513583_37, Nil);
Obj _3513585_37 = makeCons(co->gc, x, _3513584_37);
Obj _3513586_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3513585_37);
coraReturn(co, _3513586_37);
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
Obj _3513578_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 92)), _3513578_37);
return;
}
case 2:
{
Obj _3513577_37= co->res;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 94)), _3513577_37);
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
Obj _3513566_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3513567_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, args);
Obj _3513568_37 = makeCons(co->gc, _3513567_37, body);
Obj _3513569_37 = makeCons(co->gc, getBinding(co, packageID, 107).name, _3513568_37);
Obj _3513570_37 = makeCons(co->gc, _3513569_37, Nil);
Obj _3513571_37 = makeCons(co->gc, args, _3513570_37);
Obj _3513572_37 = makeCons(co->gc, _3513566_37, _3513571_37);
Obj _3513573_37 = makeCons(co->gc, getBinding(co, packageID, 134).name, _3513572_37);
coraReturn(co, _3513573_37);
return;
}
case 2:
{
Obj _3513565_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = _3513565_37;
R[1] = body;
R[2] = args;
saveCont(co, clofun60, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 3:
{
Obj _3513564_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = _3513564_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), nargs);
return;
}
case 4:
{
Obj _3513563_37= co->res;
Obj exp = R[1];
Obj body = _3513563_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), body);
return;
}
case 5:
{
Obj _3513562_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 104)), _3513562_37);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj _3513556_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3513556_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3513557_37 = primGenSym(co);
Obj _3513558_37 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = _3513557_37;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), _3513558_37);
return;
}
}
case 1:
{
Obj _3513559_37= co->res;
Obj _3513557_37 = R[1];
Obj _3513560_37 = makeCons(co->gc, _3513557_37, _3513559_37);
coraReturn(co, _3513560_37);
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
Obj _3513553_37= co->res;
Obj n = R[1];
Obj _3513554_37 = primNot(_3513553_37);
if (True == _3513554_37) {
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
Obj _3513552_37= co->res;
Obj n = R[1];
R[1] = n;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513552_37);
return;
}
case 3:
{
Obj _3513547_37= co->res;
Obj counts = _3513547_37;
Obj _3513548_37 = PRIM_CAR(counts);
Obj n = _3513548_37;
Obj _3513551_37 = PRIM_CDR(counts);
R[1] = n;
saveCont(co, clofun58, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 99)), makeNative(co->gc, 2, clofun57, 1, 1, n), _3513551_37);
return;
}
case 4:
{
Obj _3513545_37= co->res;
Obj pats = _3513545_37;
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
Obj _3513549_37 = PRIM_EQ(closureRef(R[0], 0), x);
Obj _3513550_37 = primNot(_3513549_37);
coraReturn(co, _3513550_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513546_37 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), _3513546_37);
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
Obj _3513539_37 = PRIM_EQ(l1, Nil);
if (True == _3513539_37) {
coraReturn(co, l2);
return;
} else {
Obj _3513540_37 = PRIM_CAR(l1);
Obj _3513541_37 = PRIM_CDR(l1);
R[1] = _3513540_37;
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3513541_37, l2);
return;
}
}
case 1:
{
Obj _3513542_37= co->res;
Obj _3513540_37 = R[1];
Obj _3513543_37 = makeCons(co->gc, _3513540_37, _3513542_37);
coraReturn(co, _3513543_37);
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
Obj _3513530_37 = PRIM_ISCONS(l);
if (True == _3513530_37) {
Obj _3513531_37 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
saveCont(co, clofun53, 1, R);
coraCall1(co, fn, _3513531_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj _3513532_37= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == _3513532_37) {
Obj _3513533_37 = PRIM_CAR(l);
Obj _3513534_37 = makeCons(co->gc, _3513533_37, res);
Obj _3513535_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), _3513534_37, fn, _3513535_37);
return;
} else {
Obj _3513536_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), res, fn, _3513536_37);
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
Obj _3513525_37 = PRIM_EQ(l, Nil);
if (True == _3513525_37) {
coraReturn(co, i);
return;
} else {
Obj _3513526_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3513527_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), _3513526_37, _3513527_37);
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
Obj _3513523_37= co->res;
Obj _3513522_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), _3513522_37, _3513523_37);
return;
}
case 2:
{
Obj _3513520_37= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == _3513520_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
} else {
Obj _3513521_37 = PRIM_CAR(rules);
Obj _3513522_37 = makeCons(co->gc, _3513521_37, res);
R[1] = _3513522_37;
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
Obj _3513467_37 = PRIM_EQ(Nil, input);
if (True == _3513467_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), result);
return;
} else {
Obj _3513116_37 = makeNative(co->gc, 3, clofun47, 0, 3, input, current, result);
Obj _3513485_37 = PRIM_ISCONS(input);
if (True == _3513485_37) {
Obj _3513486_37 = PRIM_CAR(input);
Obj _3513487_37 = PRIM_EQ(getBinding(co, packageID, 105).name, _3513486_37);
if (True == _3513487_37) {
Obj _3513488_37 = PRIM_CDR(input);
Obj _3513489_37 = PRIM_ISCONS(_3513488_37);
if (True == _3513489_37) {
Obj _3513490_37 = PRIM_CDR(input);
Obj _3513491_37 = PRIM_CAR(_3513490_37);
Obj act = _3513491_37;
Obj _3513492_37 = PRIM_CDR(input);
Obj _3513493_37 = PRIM_CDR(_3513492_37);
Obj _3513494_37 = PRIM_ISCONS(_3513493_37);
if (True == _3513494_37) {
Obj _3513495_37 = PRIM_CDR(input);
Obj _3513496_37 = PRIM_CDR(_3513495_37);
Obj _3513497_37 = PRIM_CAR(_3513496_37);
Obj _3513498_37 = PRIM_EQ(getBinding(co, packageID, 110).name, _3513497_37);
if (True == _3513498_37) {
Obj _3513499_37 = PRIM_CDR(input);
Obj _3513500_37 = PRIM_CDR(_3513499_37);
Obj _3513501_37 = PRIM_CDR(_3513500_37);
Obj _3513502_37 = PRIM_ISCONS(_3513501_37);
if (True == _3513502_37) {
Obj _3513503_37 = PRIM_CDR(input);
Obj _3513504_37 = PRIM_CDR(_3513503_37);
Obj _3513505_37 = PRIM_CDR(_3513504_37);
Obj _3513506_37 = PRIM_CAR(_3513505_37);
Obj pred = _3513506_37;
Obj _3513507_37 = PRIM_CDR(input);
Obj _3513508_37 = PRIM_CDR(_3513507_37);
Obj _3513509_37 = PRIM_CDR(_3513508_37);
Obj _3513510_37 = PRIM_CDR(_3513509_37);
Obj remain = _3513510_37;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
saveCont(co, clofun48, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513116_37);
return;
}
}
}
case 1:
{
Obj _3513511_37= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj _3513512_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3513511_37);
Obj pat = _3513512_37;
Obj _3513513_37 = makeCons(co->gc, act, Nil);
Obj _3513514_37 = makeCons(co->gc, pred, _3513513_37);
Obj _3513515_37 = makeCons(co->gc, getBinding(co, packageID, 110).name, _3513514_37);
Obj _3513516_37 = makeCons(co->gc, pat, result);
Obj _3513517_37 = makeCons(co->gc, _3513515_37, _3513516_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, _3513517_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513117_37 = makeNative(co->gc, 1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3513472_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513472_37) {
Obj _3513473_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513474_37 = PRIM_EQ(getBinding(co, packageID, 105).name, _3513473_37);
if (True == _3513474_37) {
Obj _3513475_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513476_37 = PRIM_ISCONS(_3513475_37);
if (True == _3513476_37) {
Obj _3513477_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513478_37 = PRIM_CAR(_3513477_37);
Obj act = _3513478_37;
Obj _3513479_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513480_37 = PRIM_CDR(_3513479_37);
Obj remain = _3513480_37;
R[1] = act;
R[2] = remain;
saveCont(co, clofun47, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3513117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3513117_37);
return;
}
}
case 1:
{
Obj _3513481_37= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj _3513482_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3513481_37);
Obj pat = _3513482_37;
Obj _3513483_37 = makeCons(co->gc, pat, closureRef(R[0], 2));
Obj _3513484_37 = makeCons(co->gc, act, _3513483_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, _3513484_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513468_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513468_37) {
Obj _3513469_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513469_37;
Obj _3513470_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513470_37;
Obj _3513471_37 = makeCons(co->gc, x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), y, _3513471_37, closureRef(R[0], 2));
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
Obj _3513454_37= co->res;
Obj value = R[1];
Obj rules = _3513454_37;
Obj _3513167_37 = makeNative(co->gc, 2, clofun43, 1, 2, value, rules);
Obj _3513461_37 = PRIM_ISCONS(value);
if (True == _3513461_37) {
Obj _3513462_37 = PRIM_CAR(value);
Obj _3513463_37 = PRIM_EQ(getBinding(co, packageID, 152).name, _3513462_37);
Obj _3513464_37 = primNot(_3513463_37);
if (True == _3513464_37) {
co->ctx.sp = R;
coraCall1(co, _3513167_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513167_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3513167_37, False);
return;
}
}
case 2:
{
Obj _3513453_37= co->res;
Obj exp = R[1];
Obj value = _3513453_37;
R[1] = value;
saveCont(co, clofun44, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj _3513452_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 138)), _3513452_37);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513168_37 = R[1];
if (True == _3513168_37) {
Obj _3513455_37 = primGenSym(co);
Obj val = _3513455_37;
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
Obj _3513456_37= co->res;
Obj val = R[1];
Obj _3513457_37 = makeCons(co->gc, _3513456_37, Nil);
Obj _3513458_37 = makeCons(co->gc, closureRef(R[0], 0), _3513457_37);
Obj _3513459_37 = makeCons(co->gc, val, _3513458_37);
Obj _3513460_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3513459_37);
coraReturn(co, _3513460_37);
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
Obj _3513450_37= co->res;
Obj _3513165_37 = R[1];
if (True == _3513450_37) {
co->ctx.sp = R;
coraCall1(co, _3513165_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513165_37, False);
return;
}
}
case 2:
{
Obj _3513448_37= co->res;
Obj rules = R[1];
Obj _3513165_37 = R[2];
if (True == _3513448_37) {
Obj _3513449_37 = PRIM_CDR(rules);
R[1] = _3513165_37;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), _3513449_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513165_37, False);
return;
}
}
case 3:
{
Obj _3513430_37= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == _3513430_37) {
Obj _3513431_37 = makeCons(co->gc, makeCString(co->gc, "no match-help found!"), Nil);
Obj _3513432_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3513431_37);
coraReturn(co, _3513432_37);
return;
} else {
Obj _3513165_37 = makeNative(co->gc, 3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = _3513165_37;
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
Obj _3513166_37 = R[1];
if (True == _3513166_37) {
Obj _3513433_37 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = _3513433_37;
Obj _3513434_37 = primGenSym(co);
Obj cc = _3513434_37;
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
Obj _3513440_37= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = _3513440_37;
Obj _3513441_37 = makeCons(co->gc, rest, Nil);
Obj _3513442_37 = makeCons(co->gc, Nil, _3513441_37);
Obj _3513443_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3513442_37);
Obj _3513444_37 = makeCons(co->gc, curr, Nil);
Obj _3513445_37 = makeCons(co->gc, _3513443_37, _3513444_37);
Obj _3513446_37 = makeCons(co->gc, cc, _3513445_37);
Obj _3513447_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3513446_37);
coraReturn(co, _3513447_37);
return;
}
case 2:
{
Obj _3513437_37= co->res;
Obj cc = R[1];
Obj curr = _3513437_37;
Obj _3513438_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3513439_37 = PRIM_CDR(_3513438_37);
R[1] = curr;
R[2] = cc;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 109)), closureRef(R[0], 0), _3513439_37);
return;
}
case 3:
{
Obj _3513436_37= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
saveCont(co, clofun41, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), _3513436_37, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj _3513435_37= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = _3513435_37;
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
Obj _3513417_37 = PRIM_CDR(rules);
Obj _3513418_37 = PRIM_CAR(_3513417_37);
Obj action = _3513418_37;
Obj _3513163_37 = makeNative(co->gc, 2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = _3513163_37;
saveCont(co, clofun40, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), action);
return;
}
case 1:
{
Obj _3513426_37= co->res;
Obj action = R[1];
Obj _3513163_37 = R[2];
if (True == _3513426_37) {
Obj _3513427_37 = PRIM_CAR(action);
Obj _3513428_37 = PRIM_EQ(_3513427_37, getBinding(co, packageID, 110).name);
if (True == _3513428_37) {
co->ctx.sp = R;
coraCall1(co, _3513163_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513163_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3513163_37, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513164_37 = R[1];
if (True == _3513164_37) {
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
Obj _3513420_37= co->res;
Obj _3513419_37 = R[1];
Obj _3513421_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3513422_37 = makeCons(co->gc, _3513421_37, Nil);
Obj _3513423_37 = makeCons(co->gc, _3513420_37, _3513422_37);
Obj _3513424_37 = makeCons(co->gc, _3513419_37, _3513423_37);
Obj _3513425_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513424_37);
coraReturn(co, _3513425_37);
return;
}
case 2:
{
Obj _3513419_37= co->res;
R[1] = _3513419_37;
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
Obj _3513415_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), _3513415_37);
return;
}
case 2:
{
Obj _3513402_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3513402_37) {
Obj _3513403_37 = PRIM_CAR(pat);
Obj _3513404_37 = PRIM_EQ(_3513403_37, getBinding(co, packageID, 139).name);
if (True == _3513404_37) {
Obj _3513405_37 = makeCons(co->gc, expr, Nil);
Obj _3513406_37 = makeCons(co->gc, pat, _3513405_37);
Obj _3513407_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3513406_37);
Obj _3513408_37 = makeCons(co->gc, cc, Nil);
Obj _3513409_37 = makeCons(co->gc, _3513408_37, Nil);
Obj _3513410_37 = makeCons(co->gc, body, _3513409_37);
Obj _3513411_37 = makeCons(co->gc, _3513407_37, _3513410_37);
Obj _3513412_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513411_37);
coraReturn(co, _3513412_37);
return;
} else {
Obj _3513413_37 = PRIM_CAR(pat);
Obj _3513414_37 = PRIM_EQ(_3513413_37, getBinding(co, packageID, 152).name);
if (True == _3513414_37) {
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
Obj _3513387_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3513387_37) {
Obj _3513388_37 = PRIM_EQ(pat, expr);
if (True == _3513388_37) {
coraReturn(co, body);
return;
} else {
Obj _3513389_37 = makeCons(co->gc, expr, Nil);
Obj _3513390_37 = makeCons(co->gc, pat, _3513389_37);
Obj _3513391_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3513390_37);
Obj _3513392_37 = makeCons(co->gc, cc, Nil);
Obj _3513393_37 = makeCons(co->gc, _3513392_37, Nil);
Obj _3513394_37 = makeCons(co->gc, body, _3513393_37);
Obj _3513395_37 = makeCons(co->gc, _3513391_37, _3513394_37);
Obj _3513396_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513395_37);
coraReturn(co, _3513396_37);
return;
}
} else {
Obj _3513397_37 = primIsSymbol(pat);
if (True == _3513397_37) {
Obj _3513398_37 = makeCons(co->gc, body, Nil);
Obj _3513399_37 = makeCons(co->gc, expr, _3513398_37);
Obj _3513400_37 = makeCons(co->gc, pat, _3513399_37);
Obj _3513401_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3513400_37);
coraReturn(co, _3513401_37);
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
Obj _3513384_37= co->res;
Obj x = R[1];
if (True == _3513384_37) {
Obj _3513385_37 = primIsSymbol(x);
Obj _3513386_37 = primNot(_3513385_37);
if (True == _3513386_37) {
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
Obj _3513363_37= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = _3513363_37;
Obj _3513161_37 = makeNative(co->gc, 3, clofun35, 1, 5, x, y, expr, body, cc);
Obj _3513380_37 = PRIM_ISCONS(expr);
if (True == _3513380_37) {
Obj _3513381_37 = PRIM_CAR(expr);
Obj _3513382_37 = PRIM_EQ(_3513381_37, getBinding(co, packageID, 152).name);
if (True == _3513382_37) {
co->ctx.sp = R;
coraCall1(co, _3513161_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513161_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3513161_37, False);
return;
}
}
case 2:
{
Obj _3513362_37= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = _3513362_37;
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
Obj _3513162_37 = R[1];
if (True == _3513162_37) {
saveCont(co, clofun35, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), closureRef(R[0], 2));
return;
} else {
Obj _3513367_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3513368_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3513367_37);
Obj _3513369_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3513370_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3513369_37);
Obj _3513371_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3513372_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3513371_37);
R[1] = _3513370_37;
R[2] = _3513368_37;
saveCont(co, clofun35, 5, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), _3513372_37, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj _3513366_37= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), e1, _3513366_37, closureRef(R[0], 4));
return;
}
case 2:
{
Obj _3513365_37= co->res;
Obj e1 = R[1];
Obj e2 = _3513365_37;
R[1] = e1;
saveCont(co, clofun35, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3513364_37= co->res;
Obj e1 = _3513364_37;
R[1] = e1;
saveCont(co, clofun35, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), closureRef(R[0], 2));
return;
}
case 4:
{
Obj _3513374_37= co->res;
Obj _3513368_37 = R[1];
Obj _3513375_37 = makeCons(co->gc, closureRef(R[0], 4), Nil);
Obj _3513376_37 = makeCons(co->gc, _3513375_37, Nil);
Obj _3513377_37 = makeCons(co->gc, _3513374_37, _3513376_37);
Obj _3513378_37 = makeCons(co->gc, _3513368_37, _3513377_37);
Obj _3513379_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513378_37);
coraReturn(co, _3513379_37);
return;
}
case 5:
{
Obj _3513373_37= co->res;
Obj _3513370_37 = R[1];
Obj _3513368_37 = R[2];
R[1] = _3513368_37;
saveCont(co, clofun35, 4, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), _3513370_37, _3513373_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3513360_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), _3513360_37);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj _3513350_37 = PRIM_CDR(pat);
R[1] = pat;
saveCont(co, clofun33, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513350_37);
return;
}
case 1:
{
Obj _3513355_37= co->res;
Obj _3513353_37 = R[1];
Obj _3513356_37 = makeCons(co->gc, _3513355_37, Nil);
Obj _3513357_37 = makeCons(co->gc, _3513353_37, _3513356_37);
Obj _3513358_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3513357_37);
coraReturn(co, _3513358_37);
return;
}
case 2:
{
Obj _3513351_37= co->res;
Obj pat = R[1];
if (True == _3513351_37) {
Obj _3513352_37 = PRIM_CAR(pat);
coraReturn(co, _3513352_37);
return;
} else {
Obj _3513353_37 = PRIM_CAR(pat);
Obj _3513354_37 = PRIM_CDR(pat);
R[1] = _3513353_37;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), _3513354_37);
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
Obj _3513347_37 = PRIM_EQ(x, True);
if (True == _3513347_37) {
coraReturn(co, True);
return;
} else {
Obj _3513348_37 = PRIM_EQ(x, False);
if (True == _3513348_37) {
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
Obj _3513345_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), _3513345_37);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3513333_37 = PRIM_EQ(Nil, l);
if (True == _3513333_37) {
coraReturn(co, True);
return;
} else {
Obj _3513334_37 = PRIM_CAR(l);
Obj _3513335_37 = PRIM_EQ(_3513334_37, False);
if (True == _3513335_37) {
coraReturn(co, False);
return;
} else {
Obj _3513336_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun30, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), _3513336_37);
return;
}
}
}
case 1:
{
Obj _3513337_37= co->res;
Obj l = R[1];
Obj more = _3513337_37;
Obj _3513338_37 = PRIM_EQ(more, False);
if (True == _3513338_37) {
coraReturn(co, False);
return;
} else {
Obj _3513339_37 = PRIM_CAR(l);
Obj _3513340_37 = makeCons(co->gc, False, Nil);
Obj _3513341_37 = makeCons(co->gc, more, _3513340_37);
Obj _3513342_37 = makeCons(co->gc, _3513339_37, _3513341_37);
Obj _3513343_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513342_37);
coraReturn(co, _3513343_37);
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
Obj _3513331_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), _3513331_37);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3513319_37 = PRIM_EQ(l, Nil);
if (True == _3513319_37) {
coraReturn(co, False);
return;
} else {
Obj _3513320_37 = PRIM_CAR(l);
Obj _3513321_37 = PRIM_EQ(_3513320_37, True);
if (True == _3513321_37) {
coraReturn(co, True);
return;
} else {
Obj _3513322_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun28, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), _3513322_37);
return;
}
}
}
case 1:
{
Obj _3513323_37= co->res;
Obj l = R[1];
Obj more = _3513323_37;
Obj _3513324_37 = PRIM_EQ(more, True);
if (True == _3513324_37) {
coraReturn(co, True);
return;
} else {
Obj _3513325_37 = PRIM_CAR(l);
Obj _3513326_37 = makeCons(co->gc, more, Nil);
Obj _3513327_37 = makeCons(co->gc, True, _3513326_37);
Obj _3513328_37 = makeCons(co->gc, _3513325_37, _3513327_37);
Obj _3513329_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513328_37);
coraReturn(co, _3513329_37);
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
Obj _3513305_37 = PRIM_CDR(exp);
Obj _3513306_37 = PRIM_EQ(Nil, _3513305_37);
if (True == _3513306_37) {
Obj _3513307_37 = makeCons(co->gc, makeCString(co->gc, "no cond match"), Nil);
Obj _3513308_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3513307_37);
coraReturn(co, _3513308_37);
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
Obj _3513312_37= co->res;
Obj _3513311_37 = R[1];
Obj _3513310_37 = R[2];
Obj _3513313_37 = makeCons(co->gc, getBinding(co, packageID, 128).name, _3513312_37);
Obj _3513314_37 = makeCons(co->gc, _3513313_37, Nil);
Obj _3513315_37 = makeCons(co->gc, _3513311_37, _3513314_37);
Obj _3513316_37 = makeCons(co->gc, _3513310_37, _3513315_37);
Obj _3513317_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3513316_37);
coraReturn(co, _3513317_37);
return;
}
case 2:
{
Obj _3513311_37= co->res;
Obj exp = R[1];
Obj _3513310_37 = R[2];
R[1] = _3513311_37;
R[2] = _3513310_37;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj _3513309_37= co->res;
Obj exp = R[1];
Obj curr = _3513309_37;
Obj _3513310_37 = PRIM_CAR(curr);
R[1] = exp;
R[2] = _3513310_37;
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
Obj _3513303_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), _3513303_37);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3513291_37 = PRIM_CDR(exp);
R[1] = exp;
saveCont(co, clofun25, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3513291_37);
return;
}
case 1:
{
Obj _3513297_37= co->res;
Obj _3513295_37 = R[1];
Obj _3513294_37 = R[2];
Obj _3513298_37 = makeCons(co->gc, _3513297_37, Nil);
Obj _3513299_37 = makeCons(co->gc, _3513295_37, _3513298_37);
Obj _3513300_37 = makeCons(co->gc, _3513294_37, _3513299_37);
Obj _3513301_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3513300_37);
coraReturn(co, _3513301_37);
return;
}
case 2:
{
Obj _3513296_37= co->res;
Obj _3513295_37 = R[1];
Obj _3513294_37 = R[2];
R[1] = _3513295_37;
R[2] = _3513294_37;
saveCont(co, clofun25, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), _3513296_37);
return;
}
case 3:
{
Obj _3513295_37= co->res;
Obj exp = R[1];
Obj _3513294_37 = R[2];
R[1] = _3513295_37;
R[2] = _3513294_37;
saveCont(co, clofun25, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 4:
{
Obj _3513292_37= co->res;
Obj exp = R[1];
if (True == _3513292_37) {
Obj _3513293_37 = PRIM_CAR(exp);
coraReturn(co, _3513293_37);
return;
} else {
Obj _3513294_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3513294_37;
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
Obj _3513288_37 = PRIM_ISCONS(x);
Obj _3513289_37 = primNot(_3513288_37);
coraReturn(co, _3513289_37);
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
Obj _3513283_37 = PRIM_ISCONS(l);
if (True == _3513283_37) {
Obj _3513284_37 = PRIM_CAR(l);
Obj _3513285_37 = PRIM_EQ(_3513284_37, x);
if (True == _3513285_37) {
coraReturn(co, True);
return;
} else {
Obj _3513286_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), x, _3513286_37);
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
Obj _3513275_37= co->res;
Obj _3513274_37 = R[1];
Obj _3513273_37 = R[2];
Obj _3513276_37 = makeCons(co->gc, _3513275_37, Nil);
Obj _3513277_37 = makeCons(co->gc, _3513274_37, _3513276_37);
Obj _3513278_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3513277_37);
Obj _3513279_37 = makeCons(co->gc, _3513278_37, Nil);
Obj _3513280_37 = makeCons(co->gc, _3513273_37, _3513279_37);
Obj _3513281_37 = makeCons(co->gc, getBinding(co, packageID, 133).name, _3513280_37);
coraReturn(co, _3513281_37);
return;
}
case 2:
{
Obj _3513274_37= co->res;
Obj exp = R[1];
Obj _3513273_37 = R[2];
R[1] = _3513274_37;
R[2] = _3513273_37;
saveCont(co, clofun22, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 155)), exp);
return;
}
case 3:
{
Obj _3513273_37= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = _3513273_37;
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
Obj _3513271_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), _3513271_37);
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
Obj _3513263_37= co->res;
Obj _3513262_37 = R[1];
Obj _3513261_37 = R[2];
Obj _3513264_37 = makeCons(co->gc, _3513262_37, _3513263_37);
Obj _3513265_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3513264_37);
Obj _3513266_37 = makeCons(co->gc, _3513265_37, Nil);
Obj _3513267_37 = makeCons(co->gc, _3513261_37, _3513266_37);
Obj _3513268_37 = makeCons(co->gc, getBinding(co, packageID, 144).name, _3513267_37);
coraReturn(co, _3513268_37);
return;
}
case 2:
{
Obj _3513262_37= co->res;
Obj exp = R[1];
Obj _3513261_37 = R[2];
R[1] = _3513262_37;
R[2] = _3513261_37;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 154)), exp);
return;
}
case 3:
{
Obj _3513259_37= co->res;
Obj exp = R[1];
Obj _3513260_37 = makeCons(co->gc, _3513259_37, Nil);
Obj _3513261_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3513260_37);
R[1] = exp;
R[2] = _3513261_37;
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
Obj _3513241_37 = PRIM_ISCONS(exp);
if (True == _3513241_37) {
Obj _3513242_37 = PRIM_CAR(exp);
Obj _3513243_37 = PRIM_EQ(_3513242_37, globalRef(co, getBinding(co, packageID, 145)));
if (True == _3513243_37) {
Obj _3513244_37 = PRIM_CDR(exp);
coraReturn(co, _3513244_37);
return;
} else {
Obj _3513245_37 = PRIM_CAR(exp);
Obj _3513246_37 = PRIM_EQ(_3513245_37, getBinding(co, packageID, 140).name);
if (True == _3513246_37) {
R[1] = exp;
saveCont(co, clofun19, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
} else {
Obj _3513253_37 = PRIM_CAR(exp);
Obj _3513254_37 = PRIM_EQ(_3513253_37, getBinding(co, packageID, 139).name);
if (True == _3513254_37) {
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
Obj _3513249_37= co->res;
Obj _3513247_37 = R[1];
Obj _3513250_37 = makeCons(co->gc, _3513249_37, Nil);
Obj _3513251_37 = makeCons(co->gc, _3513247_37, _3513250_37);
Obj _3513252_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3513251_37);
coraReturn(co, _3513252_37);
return;
}
case 2:
{
Obj _3513248_37= co->res;
Obj _3513247_37 = R[1];
R[1] = _3513247_37;
saveCont(co, clofun19, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 141)), _3513248_37);
return;
}
case 3:
{
Obj _3513247_37= co->res;
Obj exp = R[1];
R[1] = _3513247_37;
saveCont(co, clofun19, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), exp);
return;
}
case 4:
{
Obj _3513256_37= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun18, 1, 1, exp), _3513256_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj _3513255_37 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == _3513255_37) {
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
Obj _3513231_37 = PRIM_EQ(Nil, macros);
if (True == _3513231_37) {
coraReturn(co, exp);
return;
} else {
Obj _3513238_37 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun15, 1, 2, macros, exp), _3513238_37);
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
Obj _3513159_37 = makeNative(co->gc, 2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3513234_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3513234_37) {
Obj _3513235_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513236_37 = PRIM_CAR(item);
Obj _3513237_37 = PRIM_EQ(_3513235_37, _3513236_37);
if (True == _3513237_37) {
co->ctx.sp = R;
coraCall1(co, _3513159_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3513159_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3513159_37, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513160_37 = R[1];
if (True == _3513160_37) {
Obj _3513232_37 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, _3513232_37, closureRef(R[0], 1));
return;
} else {
Obj _3513233_37 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 143)), closureRef(R[0], 1), _3513233_37);
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
Obj _3513227_37 = makeCons(co->gc, n, v);
Obj _3513228_37 = makeCons(co->gc, _3513227_37, globalRef(co, getBinding(co, packageID, 146)));
Obj _3513229_37 = primSet(co, getBinding(co, packageID, 146).name, _3513228_37);
coraReturn(co, _3513229_37);
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
Obj _3513217_37 = PRIM_ISCONS(l);
if (True == _3513217_37) {
Obj _3513218_37 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
saveCont(co, clofun11, 1, R);
coraCall1(co, f, _3513218_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj _3513219_37= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj _3513220_37 = makeCons(co->gc, _3513219_37, res);
Obj _3513221_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 148)), _3513220_37, f, _3513221_37);
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
Obj _3513210_37 = PRIM_ISCONS(l);
if (True == _3513210_37) {
Obj _3513211_37 = PRIM_CAR(l);
Obj _3513212_37 = makeCons(co->gc, _3513211_37, res);
Obj _3513213_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 150)), _3513212_37, _3513213_37);
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
Obj _3513208_37 = PRIM_ISCONS(x);
coraReturn(co, _3513208_37);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3513200_37 = PRIM_ISCONS(exp);
if (True == _3513200_37) {
Obj _3513201_37 = PRIM_CAR(exp);
Obj _3513202_37 = PRIM_CDR(exp);
R[1] = _3513201_37;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), _3513202_37);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj _3513203_37= co->res;
Obj _3513201_37 = R[1];
Obj _3513204_37 = makeCons(co->gc, _3513203_37, Nil);
Obj _3513205_37 = makeCons(co->gc, _3513201_37, _3513204_37);
Obj _3513206_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3513205_37);
coraReturn(co, _3513206_37);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513196_37 = PRIM_CDR(x);
Obj _3513197_37 = PRIM_CDR(_3513196_37);
Obj _3513198_37 = PRIM_CDR(_3513197_37);
coraReturn(co, _3513198_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513191_37 = PRIM_CDR(x);
Obj _3513192_37 = PRIM_CDR(_3513191_37);
Obj _3513193_37 = PRIM_CDR(_3513192_37);
Obj _3513194_37 = PRIM_CAR(_3513193_37);
coraReturn(co, _3513194_37);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513187_37 = PRIM_CDR(x);
Obj _3513188_37 = PRIM_CDR(_3513187_37);
Obj _3513189_37 = PRIM_CAR(_3513188_37);
coraReturn(co, _3513189_37);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513184_37 = PRIM_CDR(x);
Obj _3513185_37 = PRIM_CDR(_3513184_37);
coraReturn(co, _3513185_37);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513181_37 = PRIM_CAR(x);
Obj _3513182_37 = PRIM_CDR(_3513181_37);
coraReturn(co, _3513182_37);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513178_37 = PRIM_CAR(x);
Obj _3513179_37 = PRIM_CAR(_3513178_37);
coraReturn(co, _3513179_37);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513175_37 = PRIM_CDR(x);
Obj _3513176_37 = PRIM_CAR(_3513175_37);
coraReturn(co, _3513176_37);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513173_37 = PRIM_EQ(x, Nil);
coraReturn(co, _3513173_37);
return;
}
}
}

