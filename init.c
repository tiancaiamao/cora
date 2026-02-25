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
Obj _3517021_37 = primSet(co, getBinding(co, packageID, 161).name, makeNative(co->gc, 2, clofun0, 1, 0));
Obj _3517024_37 = primSet(co, getBinding(co, packageID, 160).name, makeNative(co->gc, 2, clofun1, 1, 0));
Obj _3517027_37 = primSet(co, getBinding(co, packageID, 159).name, makeNative(co->gc, 2, clofun2, 1, 0));
Obj _3517030_37 = primSet(co, getBinding(co, packageID, 158).name, makeNative(co->gc, 2, clofun3, 1, 0));
Obj _3517033_37 = primSet(co, getBinding(co, packageID, 157).name, makeNative(co->gc, 2, clofun4, 1, 0));
Obj _3517037_37 = primSet(co, getBinding(co, packageID, 156).name, makeNative(co->gc, 2, clofun5, 1, 0));
Obj _3517042_37 = primSet(co, getBinding(co, packageID, 155).name, makeNative(co->gc, 2, clofun6, 1, 0));
Obj _3517046_37 = primSet(co, getBinding(co, packageID, 154).name, makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3517054_37 = primSet(co, getBinding(co, packageID, 153).name, makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3517056_37 = primSet(co, getBinding(co, packageID, 151).name, makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3517061_37 = primSet(co, getBinding(co, packageID, 150).name, makeNative(co->gc, 3, clofun10, 2, 0));
saveCont(co, clofun95, 15, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 150)), Nil);
return;
}
case 1:
{
Obj _3517541_37= co->res;
Obj _3517547_37 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 3, clofun80, 2, 0));
Obj _3517559_37 = primSet(co, getBinding(co, packageID, 71).name, makeNative(co->gc, 5, clofun81, 3, 0));
Obj _3517560_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3517561_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517560_37);
Obj _3517562_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3517561_37);
Obj _3517563_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3517564_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517563_37);
Obj _3517565_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3517564_37);
Obj _3517566_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3517567_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517566_37);
Obj _3517568_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3517567_37);
Obj _3517569_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3517570_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517569_37);
Obj _3517571_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3517570_37);
Obj _3517572_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3517573_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517572_37);
Obj _3517574_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3517573_37);
Obj _3517575_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3517576_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517575_37);
Obj _3517577_37 = makeCons(co->gc, getBinding(co, packageID, 67).name, _3517576_37);
Obj _3517578_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3517579_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517578_37);
Obj _3517580_37 = makeCons(co->gc, getBinding(co, packageID, 66).name, _3517579_37);
Obj _3517581_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3517582_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517581_37);
Obj _3517583_37 = makeCons(co->gc, getBinding(co, packageID, 65).name, _3517582_37);
Obj _3517584_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3517585_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517584_37);
Obj _3517586_37 = makeCons(co->gc, getBinding(co, packageID, 64).name, _3517585_37);
Obj _3517587_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3517588_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517587_37);
Obj _3517589_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3517588_37);
Obj _3517590_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3517591_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517590_37);
Obj _3517592_37 = makeCons(co->gc, getBinding(co, packageID, 63).name, _3517591_37);
Obj _3517593_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3517594_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517593_37);
Obj _3517595_37 = makeCons(co->gc, getBinding(co, packageID, 62).name, _3517594_37);
Obj _3517596_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3517597_37 = makeCons(co->gc, MAKE_NUMBER(0), _3517596_37);
Obj _3517598_37 = makeCons(co->gc, getBinding(co, packageID, 61).name, _3517597_37);
Obj _3517599_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3517600_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517599_37);
Obj _3517601_37 = makeCons(co->gc, getBinding(co, packageID, 60).name, _3517600_37);
Obj _3517602_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3517603_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517602_37);
Obj _3517604_37 = makeCons(co->gc, getBinding(co, packageID, 59).name, _3517603_37);
Obj _3517605_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3517606_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517605_37);
Obj _3517607_37 = makeCons(co->gc, getBinding(co, packageID, 58).name, _3517606_37);
Obj _3517608_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3517609_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517608_37);
Obj _3517610_37 = makeCons(co->gc, getBinding(co, packageID, 57).name, _3517609_37);
Obj _3517611_37 = makeCons(co->gc, _3517610_37, Nil);
Obj _3517612_37 = makeCons(co->gc, _3517607_37, _3517611_37);
Obj _3517613_37 = makeCons(co->gc, _3517604_37, _3517612_37);
Obj _3517614_37 = makeCons(co->gc, _3517601_37, _3517613_37);
Obj _3517615_37 = makeCons(co->gc, _3517598_37, _3517614_37);
Obj _3517616_37 = makeCons(co->gc, _3517595_37, _3517615_37);
Obj _3517617_37 = makeCons(co->gc, _3517592_37, _3517616_37);
Obj _3517618_37 = makeCons(co->gc, _3517589_37, _3517617_37);
Obj _3517619_37 = makeCons(co->gc, _3517586_37, _3517618_37);
Obj _3517620_37 = makeCons(co->gc, _3517583_37, _3517619_37);
Obj _3517621_37 = makeCons(co->gc, _3517580_37, _3517620_37);
Obj _3517622_37 = makeCons(co->gc, _3517577_37, _3517621_37);
Obj _3517623_37 = makeCons(co->gc, _3517574_37, _3517622_37);
Obj _3517624_37 = makeCons(co->gc, _3517571_37, _3517623_37);
Obj _3517625_37 = makeCons(co->gc, _3517568_37, _3517624_37);
Obj _3517626_37 = makeCons(co->gc, _3517565_37, _3517625_37);
Obj _3517627_37 = makeCons(co->gc, _3517562_37, _3517626_37);
Obj _3517628_37 = primSet(co, getBinding(co, packageID, 69).name, _3517627_37);
Obj _3517643_37 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 3, clofun83, 2, 0));
Obj _3517647_37 = primSet(co, getBinding(co, packageID, 55).name, makeNative(co->gc, 2, clofun84, 1, 0));
Obj _3517825_37 = primSet(co, getBinding(co, packageID, 93).name, makeNative(co->gc, 5, clofun94, 4, 0));
Obj _3517826_37 = makeCons(co->gc, getBinding(co, packageID, 98).name, Nil);
Obj _3517827_37 = makeCons(co->gc, getBinding(co, packageID, 99).name, _3517826_37);
Obj _3517828_37 = makeCons(co->gc, getBinding(co, packageID, 101).name, _3517827_37);
Obj _3517829_37 = makeCons(co->gc, getBinding(co, packageID, 132).name, _3517828_37);
Obj _3517830_37 = makeCons(co->gc, getBinding(co, packageID, 138).name, _3517829_37);
Obj _3517831_37 = makeCons(co->gc, getBinding(co, packageID, 147).name, _3517830_37);
Obj _3517832_37 = makeCons(co->gc, getBinding(co, packageID, 149).name, _3517831_37);
Obj _3517833_37 = makeCons(co->gc, getBinding(co, packageID, 39).name, _3517832_37);
Obj _3517834_37 = makeCons(co->gc, getBinding(co, packageID, 40).name, _3517833_37);
Obj _3517835_37 = makeCons(co->gc, getBinding(co, packageID, 41).name, _3517834_37);
Obj _3517836_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3517835_37);
Obj _3517837_37 = makeCons(co->gc, getBinding(co, packageID, 42).name, _3517836_37);
Obj _3517838_37 = makeCons(co->gc, getBinding(co, packageID, 43).name, _3517837_37);
Obj _3517839_37 = makeCons(co->gc, getBinding(co, packageID, 70).name, _3517838_37);
Obj _3517840_37 = makeCons(co->gc, getBinding(co, packageID, 44).name, _3517839_37);
Obj _3517841_37 = makeCons(co->gc, getBinding(co, packageID, 45).name, _3517840_37);
Obj _3517842_37 = makeCons(co->gc, getBinding(co, packageID, 46).name, _3517841_37);
Obj _3517843_37 = makeCons(co->gc, getBinding(co, packageID, 47).name, _3517842_37);
Obj _3517844_37 = makeCons(co->gc, getBinding(co, packageID, 48).name, _3517843_37);
Obj _3517845_37 = makeCons(co->gc, getBinding(co, packageID, 49).name, _3517844_37);
Obj _3517846_37 = makeCons(co->gc, getBinding(co, packageID, 50).name, _3517845_37);
Obj _3517847_37 = makeCons(co->gc, getBinding(co, packageID, 51).name, _3517846_37);
Obj _3517848_37 = makeCons(co->gc, getBinding(co, packageID, 52).name, _3517847_37);
Obj _3517849_37 = makeCons(co->gc, getBinding(co, packageID, 72).name, _3517848_37);
Obj _3517850_37 = makeCons(co->gc, getBinding(co, packageID, 74).name, _3517849_37);
Obj _3517851_37 = makeCons(co->gc, getBinding(co, packageID, 73).name, _3517850_37);
Obj _3517852_37 = makeCons(co->gc, getBinding(co, packageID, 161).name, _3517851_37);
Obj _3517853_37 = makeCons(co->gc, getBinding(co, packageID, 54).name, _3517852_37);
Obj _3517854_37 = makeCons(co->gc, getBinding(co, packageID, 121).name, _3517853_37);
Obj _3517855_37 = makeCons(co->gc, getBinding(co, packageID, 131).name, _3517854_37);
Obj _3517856_37 = makeCons(co->gc, getBinding(co, packageID, 151).name, _3517855_37);
Obj _3517857_37 = makeCons(co->gc, getBinding(co, packageID, 154).name, _3517856_37);
Obj _3517858_37 = makeCons(co->gc, getBinding(co, packageID, 155).name, _3517857_37);
Obj _3517859_37 = makeCons(co->gc, getBinding(co, packageID, 156).name, _3517858_37);
Obj _3517860_37 = makeCons(co->gc, getBinding(co, packageID, 157).name, _3517859_37);
Obj _3517861_37 = makeCons(co->gc, getBinding(co, packageID, 158).name, _3517860_37);
Obj _3517862_37 = makeCons(co->gc, getBinding(co, packageID, 159).name, _3517861_37);
Obj _3517863_37 = makeCons(co->gc, getBinding(co, packageID, 160).name, _3517862_37);
Obj _3517864_37 = primSet(co, getBinding(co, packageID, 53).name, _3517863_37);
Obj _3517865_37 = primSet(co, getBinding(co, packageID, 38).name, globalRef(co, getBinding(co, packageID, 160)));
Obj _3517866_37 = primSet(co, getBinding(co, packageID, 37).name, globalRef(co, getBinding(co, packageID, 159)));
Obj _3517867_37 = primSet(co, getBinding(co, packageID, 36).name, globalRef(co, getBinding(co, packageID, 158)));
Obj _3517868_37 = primSet(co, getBinding(co, packageID, 35).name, globalRef(co, getBinding(co, packageID, 157)));
Obj _3517869_37 = primSet(co, getBinding(co, packageID, 34).name, globalRef(co, getBinding(co, packageID, 156)));
Obj _3517870_37 = primSet(co, getBinding(co, packageID, 33).name, globalRef(co, getBinding(co, packageID, 155)));
Obj _3517871_37 = primSet(co, getBinding(co, packageID, 32).name, globalRef(co, getBinding(co, packageID, 154)));
Obj _3517872_37 = primSet(co, getBinding(co, packageID, 31).name, globalRef(co, getBinding(co, packageID, 151)));
Obj _3517873_37 = primSet(co, getBinding(co, packageID, 30).name, globalRef(co, getBinding(co, packageID, 131)));
Obj _3517874_37 = primSet(co, getBinding(co, packageID, 29).name, globalRef(co, getBinding(co, packageID, 121)));
Obj _3517875_37 = primSet(co, getBinding(co, packageID, 28).name, globalRef(co, getBinding(co, packageID, 161)));
Obj _3517876_37 = primSet(co, getBinding(co, packageID, 27).name, globalRef(co, getBinding(co, packageID, 54)));
Obj _3517877_37 = primSet(co, getBinding(co, packageID, 26).name, globalRef(co, getBinding(co, packageID, 73)));
Obj _3517878_37 = primSet(co, getBinding(co, packageID, 25).name, globalRef(co, getBinding(co, packageID, 74)));
Obj _3517879_37 = primSet(co, getBinding(co, packageID, 24).name, globalRef(co, getBinding(co, packageID, 72)));
Obj _3517880_37 = primSet(co, getBinding(co, packageID, 23).name, globalRef(co, getBinding(co, packageID, 52)));
Obj _3517881_37 = primSet(co, getBinding(co, packageID, 22).name, globalRef(co, getBinding(co, packageID, 51)));
Obj _3517882_37 = primSet(co, getBinding(co, packageID, 21).name, globalRef(co, getBinding(co, packageID, 50)));
Obj _3517883_37 = primSet(co, getBinding(co, packageID, 20).name, globalRef(co, getBinding(co, packageID, 49)));
Obj _3517884_37 = primSet(co, getBinding(co, packageID, 19).name, globalRef(co, getBinding(co, packageID, 48)));
Obj _3517885_37 = primSet(co, getBinding(co, packageID, 18).name, globalRef(co, getBinding(co, packageID, 47)));
Obj _3517886_37 = primSet(co, getBinding(co, packageID, 17).name, globalRef(co, getBinding(co, packageID, 46)));
Obj _3517887_37 = primSet(co, getBinding(co, packageID, 16).name, globalRef(co, getBinding(co, packageID, 44)));
Obj _3517888_37 = primSet(co, getBinding(co, packageID, 15).name, globalRef(co, getBinding(co, packageID, 70)));
Obj _3517889_37 = primSet(co, getBinding(co, packageID, 14).name, globalRef(co, getBinding(co, packageID, 45)));
Obj _3517890_37 = primSet(co, getBinding(co, packageID, 13).name, globalRef(co, getBinding(co, packageID, 43)));
Obj _3517891_37 = primSet(co, getBinding(co, packageID, 12).name, globalRef(co, getBinding(co, packageID, 41)));
Obj _3517892_37 = primSet(co, getBinding(co, packageID, 11).name, globalRef(co, getBinding(co, packageID, 42)));
Obj _3517893_37 = primSet(co, getBinding(co, packageID, 10).name, globalRef(co, getBinding(co, packageID, 81)));
Obj _3517894_37 = primSet(co, getBinding(co, packageID, 9).name, globalRef(co, getBinding(co, packageID, 40)));
Obj _3517895_37 = primSet(co, getBinding(co, packageID, 8).name, globalRef(co, getBinding(co, packageID, 39)));
Obj _3517896_37 = primSet(co, getBinding(co, packageID, 7).name, globalRef(co, getBinding(co, packageID, 149)));
Obj _3517897_37 = primSet(co, getBinding(co, packageID, 6).name, globalRef(co, getBinding(co, packageID, 147)));
Obj _3517898_37 = primSet(co, getBinding(co, packageID, 5).name, globalRef(co, getBinding(co, packageID, 138)));
Obj _3517899_37 = primSet(co, getBinding(co, packageID, 4).name, globalRef(co, getBinding(co, packageID, 132)));
Obj _3517900_37 = primSet(co, getBinding(co, packageID, 3).name, globalRef(co, getBinding(co, packageID, 101)));
Obj _3517901_37 = primSet(co, getBinding(co, packageID, 2).name, globalRef(co, getBinding(co, packageID, 99)));
Obj _3517902_37 = primSet(co, getBinding(co, packageID, 1).name, globalRef(co, getBinding(co, packageID, 98)));
Obj _3517903_37 = primSet(co, getBinding(co, packageID, 0).name, globalRef(co, getBinding(co, packageID, 56)));
coraReturn(co, _3517903_37);
return;
}
case 2:
{
Obj _3517491_37= co->res;
Obj _3517520_37 = primSet(co, getBinding(co, packageID, 83).name, makeNative(co->gc, 5, clofun75, 4, 0));
Obj _3517521_37 = primSet(co, getBinding(co, packageID, 80).name, makeNative(co->gc, 3, clofun76, 2, 0));
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 79).name, makeNative(co->gc, 2, clofun79, 1, 0));
return;
}
case 3:
{
Obj _3517474_37= co->res;
Obj _3517488_37 = primSet(co, getBinding(co, packageID, 85).name, makeNative(co->gc, 3, clofun71, 2, 0));
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 84).name, makeNative(co->gc, 2, clofun72, 1, 0));
return;
}
case 4:
{
Obj _3517452_37= co->res;
Obj _3517472_37 = primSet(co, getBinding(co, packageID, 88).name, makeNative(co->gc, 2, clofun69, 1, 0));
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 86).name, makeNative(co->gc, 2, clofun70, 1, 0));
return;
}
case 5:
{
Obj _3517421_37= co->res;
Obj _3517422_37 = primSet(co, getBinding(co, packageID, 94).name, makeNative(co->gc, 2, clofun61, 1, 0));
Obj _3517423_37 = primSet(co, getBinding(co, packageID, 92).name, makeNative(co->gc, 2, clofun62, 1, 0));
Obj _3517426_37 = primSet(co, getBinding(co, packageID, 138).name, makeNative(co->gc, 2, clofun63, 1, 0));
Obj _3517450_37 = primSet(co, getBinding(co, packageID, 91).name, makeNative(co->gc, 2, clofun66, 1, 0));
saveCont(co, clofun95, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 89).name, makeNative(co->gc, 2, clofun67, 1, 0));
return;
}
case 6:
{
Obj _3517313_37= co->res;
Obj _3517365_37 = primSet(co, getBinding(co, packageID, 106).name, makeNative(co->gc, 5, clofun48, 3, 0));
Obj _3517366_37 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 2, clofun49, 1, 0));
Obj _3517371_37 = primSet(co, getBinding(co, packageID, 103).name, makeNative(co->gc, 3, clofun50, 2, 0));
Obj _3517375_37 = primSet(co, getBinding(co, packageID, 102).name, makeNative(co->gc, 3, clofun51, 2, 0));
Obj _3517376_37 = primSet(co, getBinding(co, packageID, 101).name, makeNative(co->gc, 2, clofun52, 1, 0));
Obj _3517384_37 = primSet(co, getBinding(co, packageID, 100).name, makeNative(co->gc, 4, clofun53, 3, 0));
Obj _3517385_37 = primSet(co, getBinding(co, packageID, 99).name, makeNative(co->gc, 3, clofun54, 2, 0));
Obj _3517391_37 = primSet(co, getBinding(co, packageID, 98).name, makeNative(co->gc, 3, clofun55, 2, 0));
Obj _3517402_37 = primSet(co, getBinding(co, packageID, 97).name, makeNative(co->gc, 2, clofun58, 1, 0));
Obj _3517408_37 = primSet(co, getBinding(co, packageID, 96).name, makeNative(co->gc, 2, clofun59, 1, 0));
saveCont(co, clofun95, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 95).name, makeNative(co->gc, 3, clofun60, 1, 0));
return;
}
case 7:
{
Obj _3517208_37= co->res;
Obj _3517230_37 = primSet(co, getBinding(co, packageID, 118).name, makeNative(co->gc, 5, clofun36, 4, 0));
Obj _3517263_37 = primSet(co, getBinding(co, packageID, 117).name, makeNative(co->gc, 5, clofun38, 4, 0));
Obj _3517276_37 = primSet(co, getBinding(co, packageID, 111).name, makeNative(co->gc, 3, clofun40, 2, 0));
Obj _3517298_37 = primSet(co, getBinding(co, packageID, 109).name, makeNative(co->gc, 3, clofun42, 2, 0));
Obj _3517312_37 = primSet(co, getBinding(co, packageID, 108).name, makeNative(co->gc, 2, clofun44, 1, 0));
saveCont(co, clofun95, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 107).name, makeNative(co->gc, 2, clofun45, 1, 0));
return;
}
case 8:
{
Obj _3517193_37= co->res;
Obj _3517196_37 = primSet(co, getBinding(co, packageID, 121).name, makeNative(co->gc, 2, clofun32, 1, 0));
Obj _3517206_37 = primSet(co, getBinding(co, packageID, 120).name, makeNative(co->gc, 2, clofun33, 1, 0));
saveCont(co, clofun95, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 119).name, makeNative(co->gc, 2, clofun34, 1, 0));
return;
}
case 9:
{
Obj _3517179_37= co->res;
Obj _3517191_37 = primSet(co, getBinding(co, packageID, 123).name, makeNative(co->gc, 2, clofun30, 1, 0));
saveCont(co, clofun95, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 122).name, makeNative(co->gc, 2, clofun31, 1, 0));
return;
}
case 10:
{
Obj _3517165_37= co->res;
Obj _3517177_37 = primSet(co, getBinding(co, packageID, 125).name, makeNative(co->gc, 2, clofun28, 1, 0));
saveCont(co, clofun95, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 124).name, makeNative(co->gc, 2, clofun29, 1, 0));
return;
}
case 11:
{
Obj _3517151_37= co->res;
saveCont(co, clofun95, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 128).name, makeNative(co->gc, 3, clofun27, 1, 0));
return;
}
case 12:
{
Obj _3517129_37= co->res;
Obj _3517134_37 = primSet(co, getBinding(co, packageID, 132).name, makeNative(co->gc, 3, clofun23, 2, 0));
Obj _3517137_37 = primSet(co, getBinding(co, packageID, 131).name, makeNative(co->gc, 2, clofun24, 1, 0));
Obj _3517149_37 = primSet(co, getBinding(co, packageID, 130).name, makeNative(co->gc, 3, clofun25, 1, 0));
saveCont(co, clofun95, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 129).name, makeNative(co->gc, 2, clofun26, 1, 0));
return;
}
case 13:
{
Obj _3517119_37= co->res;
saveCont(co, clofun95, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 134).name, makeNative(co->gc, 3, clofun22, 1, 0));
return;
}
case 14:
{
Obj _3517117_37= co->res;
saveCont(co, clofun95, 13, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 144)), getBinding(co, packageID, 135).name, makeNative(co->gc, 2, clofun21, 1, 0));
return;
}
case 15:
{
Obj _3517062_37= co->res;
Obj _3517063_37 = primSet(co, getBinding(co, packageID, 149).name, _3517062_37);
Obj _3517069_37 = primSet(co, getBinding(co, packageID, 148).name, makeNative(co->gc, 4, clofun11, 3, 0));
Obj _3517070_37 = primSet(co, getBinding(co, packageID, 147).name, makeNative(co->gc, 3, clofun12, 2, 0));
Obj _3517071_37 = primSet(co, getBinding(co, packageID, 146).name, Nil);
Obj _3517072_37 = primGenSym(co);
Obj _3517073_37 = primSet(co, getBinding(co, packageID, 145).name, _3517072_37);
Obj _3517077_37 = primSet(co, getBinding(co, packageID, 144).name, makeNative(co->gc, 3, clofun13, 2, 0));
Obj _3517086_37 = primSet(co, getBinding(co, packageID, 143).name, makeNative(co->gc, 3, clofun16, 2, 0));
Obj _3517087_37 = primSet(co, getBinding(co, packageID, 142).name, makeNative(co->gc, 2, clofun17, 1, 0));
Obj _3517104_37 = primSet(co, getBinding(co, packageID, 141).name, makeNative(co->gc, 2, clofun19, 1, 0));
Obj _3517105_37 = primSet(co, getBinding(co, packageID, 138).name, globalRef(co, getBinding(co, packageID, 141)));
Obj _3517116_37 = primSet(co, getBinding(co, packageID, 137).name, makeNative(co->gc, 3, clofun20, 1, 0));
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
Obj _3516992_37 = R[1];
Obj _3516993_37 = R[2];
Obj _3516994_37 = R[3];
Obj _3516995_37 = R[4];
Obj _3517016_37 = makeNative(co->gc, 2, clofun93, 1, 4, _3516992_37, _3516993_37, _3516994_37, _3516995_37);
R[1] = _3516995_37;
R[2] = _3517016_37;
saveCont(co, clofun94, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 54)), _3516995_37);
return;
}
case 1:
{
Obj _3517824_37= co->res;
Obj _3517016_37 = R[1];
if (True == _3517824_37) {
co->ctx.sp = R;
coraCall1(co, _3517016_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517016_37, False);
return;
}
}
case 2:
{
Obj _3517823_37= co->res;
Obj _3516995_37 = R[1];
Obj _3517016_37 = R[2];
if (True == _3517823_37) {
co->ctx.sp = R;
coraCall1(co, _3517016_37, True);
return;
} else {
R[1] = _3517016_37;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3516995_37);
return;
}
}
case 3:
{
Obj _3517821_37= co->res;
Obj _3516995_37 = R[1];
Obj _3517016_37 = R[2];
if (True == _3517821_37) {
co->ctx.sp = R;
coraCall1(co, _3517016_37, True);
return;
} else {
Obj _3517822_37 = primIsString(_3516995_37);
if (True == _3517822_37) {
co->ctx.sp = R;
coraCall1(co, _3517016_37, True);
return;
} else {
R[1] = _3516995_37;
R[2] = _3517016_37;
saveCont(co, clofun94, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 121)), _3516995_37);
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
Obj _3517017_37 = R[1];
if (True == _3517017_37) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj _3516997_37 = makeNative(co->gc, 3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517809_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3517809_37) {
Obj _3517810_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3517811_37 = PRIM_EQ(getBinding(co, packageID, 139).name, _3517810_37);
if (True == _3517811_37) {
Obj _3517812_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517813_37 = PRIM_ISCONS(_3517812_37);
if (True == _3517813_37) {
Obj _3517814_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517815_37 = PRIM_CAR(_3517814_37);
Obj x = _3517815_37;
Obj _3517816_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517817_37 = PRIM_CDR(_3517816_37);
Obj _3517818_37 = PRIM_EQ(Nil, _3517817_37);
if (True == _3517818_37) {
Obj _3517819_37 = makeCons(co->gc, x, Nil);
Obj _3517820_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3517819_37);
coraReturn(co, _3517820_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516997_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516997_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516997_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516997_37);
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
Obj _3517648_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3517648_37) {
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3516999_37 = makeNative(co->gc, 3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3517787_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517787_37) {
Obj _3517788_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517789_37 = PRIM_EQ(getBinding(co, packageID, 140).name, _3517788_37);
if (True == _3517789_37) {
Obj _3517790_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517791_37 = PRIM_ISCONS(_3517790_37);
if (True == _3517791_37) {
Obj _3517792_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517793_37 = PRIM_CAR(_3517792_37);
Obj args = _3517793_37;
Obj _3517794_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517795_37 = PRIM_CDR(_3517794_37);
Obj _3517796_37 = PRIM_ISCONS(_3517795_37);
if (True == _3517796_37) {
Obj _3517797_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517798_37 = PRIM_CDR(_3517797_37);
Obj _3517799_37 = PRIM_CAR(_3517798_37);
Obj body = _3517799_37;
Obj _3517800_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517801_37 = PRIM_CDR(_3517800_37);
Obj _3517802_37 = PRIM_CDR(_3517801_37);
Obj _3517803_37 = PRIM_EQ(Nil, _3517802_37);
if (True == _3517803_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516999_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516999_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516999_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516999_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516999_37);
return;
}
}
}
case 1:
{
Obj _3517650_37= co->res;
if (True == _3517650_37) {
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
Obj _3517649_37= co->res;
if (True == _3517649_37) {
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
Obj _3517805_37= co->res;
Obj args = R[1];
Obj _3517806_37 = makeCons(co->gc, _3517805_37, Nil);
Obj _3517807_37 = makeCons(co->gc, args, _3517806_37);
Obj _3517808_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3517807_37);
coraReturn(co, _3517808_37);
return;
}
case 4:
{
Obj _3517804_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun92, 3, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), _3517804_37, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517000_37 = makeNative(co->gc, 1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3517743_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517743_37) {
Obj _3517744_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517745_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3517744_37);
if (True == _3517745_37) {
Obj _3517746_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517747_37 = PRIM_ISCONS(_3517746_37);
if (True == _3517747_37) {
Obj _3517748_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517749_37 = PRIM_CAR(_3517748_37);
Obj _3517750_37 = PRIM_ISCONS(_3517749_37);
if (True == _3517750_37) {
Obj _3517751_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517752_37 = PRIM_CAR(_3517751_37);
Obj _3517753_37 = PRIM_CAR(_3517752_37);
Obj _3517754_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3517753_37);
if (True == _3517754_37) {
Obj _3517755_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517756_37 = PRIM_CAR(_3517755_37);
Obj _3517757_37 = PRIM_CDR(_3517756_37);
Obj _3517758_37 = PRIM_ISCONS(_3517757_37);
if (True == _3517758_37) {
Obj _3517759_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517760_37 = PRIM_CAR(_3517759_37);
Obj _3517761_37 = PRIM_CDR(_3517760_37);
Obj _3517762_37 = PRIM_CAR(_3517761_37);
Obj pkg = _3517762_37;
Obj _3517763_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517764_37 = PRIM_CAR(_3517763_37);
Obj _3517765_37 = PRIM_CDR(_3517764_37);
Obj _3517766_37 = PRIM_CDR(_3517765_37);
Obj _3517767_37 = PRIM_EQ(Nil, _3517766_37);
if (True == _3517767_37) {
Obj _3517768_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517769_37 = PRIM_CDR(_3517768_37);
Obj _3517770_37 = PRIM_ISCONS(_3517769_37);
if (True == _3517770_37) {
Obj _3517771_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517772_37 = PRIM_CDR(_3517771_37);
Obj _3517773_37 = PRIM_CAR(_3517772_37);
Obj y = _3517773_37;
Obj _3517774_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517775_37 = PRIM_CDR(_3517774_37);
Obj _3517776_37 = PRIM_CDR(_3517775_37);
Obj _3517777_37 = PRIM_EQ(Nil, _3517776_37);
if (True == _3517777_37) {
Obj _3517778_37 = primIsString(pkg);
if (True == _3517778_37) {
Obj _3517779_37 = makeCons(co->gc, pkg, Nil);
Obj _3517780_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3517779_37);
R[1] = pkg;
R[2] = y;
saveCont(co, clofun91, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), _3517780_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517000_37);
return;
}
}
case 1:
{
Obj _3517783_37= co->res;
Obj _3517781_37 = R[1];
Obj _3517784_37 = makeCons(co->gc, _3517783_37, Nil);
Obj _3517785_37 = makeCons(co->gc, _3517781_37, _3517784_37);
Obj _3517786_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3517785_37);
coraReturn(co, _3517786_37);
return;
}
case 2:
{
Obj _3517781_37= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj _3517782_37 = makeCons(co->gc, pkg, closureRef(R[0], 3));
R[1] = _3517781_37;
saveCont(co, clofun91, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), _3517782_37, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517001_37 = makeNative(co->gc, 3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3517735_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517735_37) {
Obj _3517736_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3517736_37;
Obj _3517737_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517737_37;
Obj _3517018_37 = makeNative(co->gc, 2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, _3517001_37);
Obj _3517741_37 = PRIM_EQ(op, getBinding(co, packageID, 126).name);
if (True == _3517741_37) {
co->ctx.sp = R;
coraCall1(co, _3517018_37, True);
return;
} else {
Obj _3517742_37 = PRIM_EQ(op, getBinding(co, packageID, 90).name);
if (True == _3517742_37) {
co->ctx.sp = R;
coraCall1(co, _3517018_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517018_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517001_37);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517019_37 = R[1];
if (True == _3517019_37) {
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
Obj _3517739_37= co->res;
Obj _3517740_37 = makeCons(co->gc, closureRef(R[0], 0), _3517739_37);
coraReturn(co, _3517740_37);
return;
}
case 2:
{
Obj _3517738_37= co->res;
saveCont(co, clofun89, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), _3517738_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517002_37 = makeNative(co->gc, 1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517702_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517702_37) {
Obj _3517703_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517704_37 = PRIM_EQ(getBinding(co, packageID, 129).name, _3517703_37);
if (True == _3517704_37) {
Obj _3517705_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517706_37 = PRIM_ISCONS(_3517705_37);
if (True == _3517706_37) {
Obj _3517707_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517708_37 = PRIM_CAR(_3517707_37);
Obj a = _3517708_37;
Obj _3517709_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517710_37 = PRIM_CDR(_3517709_37);
Obj _3517711_37 = PRIM_ISCONS(_3517710_37);
if (True == _3517711_37) {
Obj _3517712_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517713_37 = PRIM_CDR(_3517712_37);
Obj _3517714_37 = PRIM_CAR(_3517713_37);
Obj b = _3517714_37;
Obj _3517715_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517716_37 = PRIM_CDR(_3517715_37);
Obj _3517717_37 = PRIM_CDR(_3517716_37);
Obj _3517718_37 = PRIM_ISCONS(_3517717_37);
if (True == _3517718_37) {
Obj _3517719_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517720_37 = PRIM_CDR(_3517719_37);
Obj _3517721_37 = PRIM_CDR(_3517720_37);
Obj _3517722_37 = PRIM_CAR(_3517721_37);
Obj c = _3517722_37;
Obj _3517723_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517724_37 = PRIM_CDR(_3517723_37);
Obj _3517725_37 = PRIM_CDR(_3517724_37);
Obj _3517726_37 = PRIM_CDR(_3517725_37);
Obj _3517727_37 = PRIM_EQ(Nil, _3517726_37);
if (True == _3517727_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun88, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517002_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517002_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517002_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517002_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517002_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517002_37);
return;
}
}
case 1:
{
Obj _3517730_37= co->res;
Obj _3517728_37 = R[1];
Obj a = R[2];
Obj _3517731_37 = makeCons(co->gc, _3517730_37, Nil);
Obj _3517732_37 = makeCons(co->gc, _3517728_37, _3517731_37);
Obj _3517733_37 = makeCons(co->gc, a, _3517732_37);
Obj _3517734_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3517733_37);
coraReturn(co, _3517734_37);
return;
}
case 2:
{
Obj _3517728_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3517729_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3517728_37;
R[2] = a;
saveCont(co, clofun88, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), _3517729_37, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517003_37 = makeNative(co->gc, 2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517676_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517676_37) {
Obj _3517677_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517678_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3517677_37);
if (True == _3517678_37) {
Obj _3517679_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517680_37 = PRIM_ISCONS(_3517679_37);
if (True == _3517680_37) {
Obj _3517681_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517682_37 = PRIM_CAR(_3517681_37);
Obj path = _3517682_37;
Obj _3517683_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517684_37 = PRIM_CDR(_3517683_37);
Obj _3517685_37 = PRIM_ISCONS(_3517684_37);
if (True == _3517685_37) {
Obj _3517686_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517687_37 = PRIM_CDR(_3517686_37);
Obj _3517688_37 = PRIM_CAR(_3517687_37);
Obj import = _3517688_37;
Obj _3517689_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517690_37 = PRIM_CDR(_3517689_37);
Obj _3517691_37 = PRIM_CDR(_3517690_37);
Obj _3517692_37 = PRIM_ISCONS(_3517691_37);
if (True == _3517692_37) {
Obj _3517693_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517694_37 = PRIM_CDR(_3517693_37);
Obj _3517695_37 = PRIM_CDR(_3517694_37);
Obj _3517696_37 = PRIM_CAR(_3517695_37);
Obj body = _3517696_37;
Obj _3517697_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517698_37 = PRIM_CDR(_3517697_37);
Obj _3517699_37 = PRIM_CDR(_3517698_37);
Obj _3517700_37 = PRIM_CDR(_3517699_37);
Obj _3517701_37 = PRIM_EQ(Nil, _3517700_37);
if (True == _3517701_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 93)), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517003_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517003_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517003_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517003_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517003_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517003_37);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517004_37 = makeNative(co->gc, 1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj _3517652_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517652_37) {
Obj _3517653_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517654_37 = PRIM_EQ(getBinding(co, packageID, 133).name, _3517653_37);
if (True == _3517654_37) {
Obj _3517655_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517656_37 = PRIM_ISCONS(_3517655_37);
if (True == _3517656_37) {
Obj _3517657_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517658_37 = PRIM_CAR(_3517657_37);
Obj var = _3517658_37;
Obj _3517659_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517660_37 = PRIM_CDR(_3517659_37);
Obj _3517661_37 = PRIM_ISCONS(_3517660_37);
if (True == _3517661_37) {
Obj _3517662_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517663_37 = PRIM_CDR(_3517662_37);
Obj _3517664_37 = PRIM_CAR(_3517663_37);
Obj val = _3517664_37;
Obj _3517665_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517666_37 = PRIM_CDR(_3517665_37);
Obj _3517667_37 = PRIM_CDR(_3517666_37);
Obj _3517668_37 = PRIM_EQ(Nil, _3517667_37);
if (True == _3517668_37) {
R[1] = val;
saveCont(co, clofun86, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517004_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517004_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517004_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517004_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517004_37);
return;
}
}
case 1:
{
Obj _3517672_37= co->res;
Obj _3517671_37 = R[1];
Obj _3517673_37 = makeCons(co->gc, _3517672_37, Nil);
Obj _3517674_37 = makeCons(co->gc, _3517671_37, _3517673_37);
Obj _3517675_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3517674_37);
coraReturn(co, _3517675_37);
return;
}
case 2:
{
Obj _3517669_37= co->res;
Obj val = R[1];
Obj var1 = _3517669_37;
Obj _3517670_37 = makeCons(co->gc, var1, Nil);
Obj _3517671_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3517670_37);
R[1] = _3517671_37;
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
Obj _3517651_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), _3517651_37, closureRef(R[0], 3));
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
Obj _3517645_37= co->res;
Obj _3517646_37 = primNot(_3517645_37);
coraReturn(co, _3517646_37);
return;
}
case 2:
{
Obj _3517644_37= co->res;
saveCont(co, clofun84, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3517644_37);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516987_37 = R[1];
Obj _3516988_37 = R[2];
Obj _3517629_37 = PRIM_EQ(Nil, _3516988_37);
if (True == _3517629_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3516990_37 = makeNative(co->gc, 1, clofun82, 0, 2, _3516988_37, _3516987_37);
Obj _3517633_37 = PRIM_ISCONS(_3516988_37);
if (True == _3517633_37) {
Obj _3517634_37 = PRIM_CAR(_3516988_37);
Obj _3517635_37 = PRIM_ISCONS(_3517634_37);
if (True == _3517635_37) {
Obj _3517636_37 = PRIM_CAR(_3516988_37);
Obj _3517637_37 = PRIM_CAR(_3517636_37);
Obj x = _3517637_37;
Obj _3517638_37 = PRIM_CAR(_3516988_37);
Obj _3517639_37 = PRIM_CDR(_3517638_37);
Obj y = _3517639_37;
Obj _3517640_37 = PRIM_CDR(_3516988_37);
Obj _3517641_37 = PRIM_EQ(_3516987_37, x);
if (True == _3517641_37) {
Obj _3517642_37 = makeCons(co->gc, x, y);
coraReturn(co, _3517642_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516990_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516990_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516990_37);
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
Obj _3517630_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517630_37) {
Obj _3517631_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517632_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517632_37;
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
Obj _3516982_37 = R[1];
Obj _3516983_37 = R[2];
Obj _3516984_37 = R[3];
Obj _3517548_37 = PRIM_EQ(Nil, _3516984_37);
if (True == _3517548_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 76)), _3516982_37, _3516983_37);
return;
} else {
Obj _3517549_37 = PRIM_ISCONS(_3516984_37);
if (True == _3517549_37) {
Obj _3517550_37 = PRIM_CAR(_3516984_37);
Obj import = _3517550_37;
Obj _3517551_37 = PRIM_CDR(_3516984_37);
Obj more = _3517551_37;
R[1] = import;
R[2] = _3516982_37;
R[3] = _3516983_37;
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
Obj _3517558_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3517558_37);
return;
}
case 2:
{
Obj _3517557_37= co->res;
Obj import = R[1];
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), import, _3517557_37);
return;
}
case 3:
{
Obj _3517556_37= co->res;
Obj import = R[1];
R[1] = import;
saveCont(co, clofun81, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), _3517556_37);
return;
}
case 4:
{
Obj _3517555_37= co->res;
Obj import = R[1];
Obj _3516982_37 = R[2];
Obj _3516983_37 = R[3];
Obj more = R[4];
if (True == _3517555_37) {
R[1] = import;
saveCont(co, clofun81, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 72)), _3516982_37);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 71)), _3516982_37, _3516983_37, more);
return;
}
}
case 5:
{
Obj _3517554_37= co->res;
Obj import = R[1];
Obj _3516982_37 = R[2];
Obj _3516983_37 = R[3];
Obj more = R[4];
Obj export = _3517554_37;
R[1] = import;
R[2] = _3516982_37;
R[3] = _3516983_37;
R[4] = more;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), _3516982_37, export);
return;
}
case 6:
{
Obj _3517553_37= co->res;
Obj import = R[1];
Obj _3516982_37 = R[2];
Obj _3516983_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3516982_37;
R[3] = _3516983_37;
R[4] = more;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 70)), _3517553_37, Nil);
return;
}
case 7:
{
Obj _3517552_37= co->res;
Obj import = R[1];
Obj _3516982_37 = R[2];
Obj _3516983_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3516982_37;
R[3] = _3516983_37;
R[4] = more;
saveCont(co, clofun81, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3517552_37);
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
Obj _3517542_37 = PRIM_EQ(ns, makeCString(co->gc, ""));
if (True == _3517542_37) {
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
Obj _3517546_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 74)), _3517546_37);
return;
}
case 2:
{
Obj _3517545_37= co->res;
Obj ns = R[1];
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), ns, _3517545_37);
return;
}
case 3:
{
Obj _3517544_37= co->res;
Obj ns = R[1];
R[1] = ns;
saveCont(co, clofun80, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 73)), makeCString(co->gc, "#"), _3517544_37);
return;
}
case 4:
{
Obj _3517543_37= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == _3517543_37) {
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
Obj _3517524_37= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, _3517524_37, makeNative(co->gc, 4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj _3517523_37= co->res;
Obj path = R[1];
R[1] = path;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 80)), _3517523_37);
return;
}
case 3:
{
Obj _3517522_37= co->res;
Obj sexp = R[1];
Obj path = _3517522_37;
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
Obj _3517525_37 = makeCons(co->gc, makeCString(co->gc, "cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = _3517525_37;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), makeNative(co->gc, 2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj _3517535_37= co->res;
Obj _3517525_37 = R[1];
Obj _3517536_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3517535_37);
Obj _3517537_37 = makeCons(co->gc, _3517536_37, Nil);
Obj _3517538_37 = makeCons(co->gc, _3517525_37, _3517537_37);
Obj _3517539_37 = makeCons(co->gc, closureRef(R[0], 0), _3517538_37);
Obj _3517540_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3517539_37);
coraReturn(co, _3517540_37);
return;
}
case 2:
{
Obj _3517528_37= co->res;
Obj export = R[1];
Obj body = R[2];
Obj _3517525_37 = R[3];
Obj _3517529_37 = makeCons(co->gc, export, Nil);
Obj _3517530_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3517529_37);
Obj _3517531_37 = makeCons(co->gc, _3517530_37, Nil);
Obj _3517532_37 = makeCons(co->gc, getBinding(co, packageID, 77).name, _3517531_37);
Obj _3517533_37 = makeCons(co->gc, getBinding(co, packageID, 133).name, _3517532_37);
Obj _3517534_37 = makeCons(co->gc, _3517533_37, body);
R[1] = _3517525_37;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3517528_37, _3517534_37);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj _3517526_37 = makeCons(co->gc, imp, Nil);
Obj _3517527_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3517526_37);
coraReturn(co, _3517527_37);
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
Obj _3516975_37 = R[1];
Obj _3516976_37 = R[2];
Obj _3516977_37 = R[3];
Obj _3516978_37 = R[4];
Obj _3516979_37 = makeNative(co->gc, 1, clofun74, 0, 4, _3516977_37, _3516975_37, _3516976_37, _3516978_37);
Obj _3517502_37 = PRIM_ISCONS(_3516975_37);
if (True == _3517502_37) {
Obj _3517503_37 = PRIM_CAR(_3516975_37);
Obj _3517504_37 = PRIM_ISCONS(_3517503_37);
if (True == _3517504_37) {
Obj _3517505_37 = PRIM_CAR(_3516975_37);
Obj _3517506_37 = PRIM_CAR(_3517505_37);
Obj _3517507_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3517506_37);
if (True == _3517507_37) {
Obj _3517508_37 = PRIM_CAR(_3516975_37);
Obj _3517509_37 = PRIM_CDR(_3517508_37);
Obj _3517510_37 = PRIM_ISCONS(_3517509_37);
if (True == _3517510_37) {
Obj _3517511_37 = PRIM_CAR(_3516975_37);
Obj _3517512_37 = PRIM_CDR(_3517511_37);
Obj _3517513_37 = PRIM_CAR(_3517512_37);
Obj lib = _3517513_37;
Obj _3517514_37 = PRIM_CAR(_3516975_37);
Obj _3517515_37 = PRIM_CDR(_3517514_37);
Obj _3517516_37 = PRIM_CDR(_3517515_37);
Obj _3517517_37 = PRIM_EQ(Nil, _3517516_37);
if (True == _3517517_37) {
Obj _3517518_37 = PRIM_CDR(_3516975_37);
Obj rest = _3517518_37;
Obj _3517519_37 = makeCons(co->gc, lib, _3516976_37);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, _3517519_37, _3516977_37, _3516978_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516979_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516979_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516979_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516979_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516979_37);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516980_37 = makeNative(co->gc, 1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517493_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517493_37) {
Obj _3517494_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517495_37 = PRIM_ISCONS(_3517494_37);
if (True == _3517495_37) {
Obj _3517496_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517497_37 = PRIM_CAR(_3517496_37);
Obj _3517498_37 = PRIM_EQ(getBinding(co, packageID, 82).name, _3517497_37);
if (True == _3517498_37) {
Obj _3517499_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517500_37 = PRIM_CDR(_3517499_37);
Obj more = _3517500_37;
Obj _3517501_37 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = _3517501_37;
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 83)), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516980_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516980_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516980_37);
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
Obj _3517492_37= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), _3517492_37, closureRef(R[0], 2), closureRef(R[0], 3));
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
Obj _3517490_37= co->res;
Obj _3517489_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), _3517489_37, _3517490_37);
return;
}
case 2:
{
Obj _3517489_37= co->res;
Obj exp = R[1];
R[1] = _3517489_37;
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
Obj _3517478_37= co->res;
Obj _3517477_37 = R[1];
Obj fn = R[2];
Obj _3517479_37 = makeCons(co->gc, _3517478_37, Nil);
Obj _3517480_37 = makeCons(co->gc, _3517477_37, _3517479_37);
Obj _3517481_37 = makeCons(co->gc, fn, _3517480_37);
coraReturn(co, _3517481_37);
return;
}
case 2:
{
Obj _3517484_37= co->res;
Obj _3517482_37 = R[1];
Obj fn = R[2];
Obj _3517485_37 = makeCons(co->gc, _3517484_37, Nil);
Obj _3517486_37 = makeCons(co->gc, _3517482_37, _3517485_37);
Obj _3517487_37 = makeCons(co->gc, fn, _3517486_37);
coraReturn(co, _3517487_37);
return;
}
case 3:
{
Obj _3517476_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == _3517476_37) {
Obj _3517477_37 = PRIM_CAR(arglist);
R[1] = _3517477_37;
R[2] = fn;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), arglist);
return;
} else {
Obj _3517482_37 = PRIM_CAR(arglist);
Obj _3517483_37 = PRIM_CDR(arglist);
R[1] = _3517482_37;
R[2] = fn;
saveCont(co, clofun71, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 85)), fn, _3517483_37);
return;
}
}
case 4:
{
Obj _3517475_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3517475_37);
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
Obj _3517473_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 88)), _3517473_37);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516970_37 = R[1];
Obj _3517453_37 = primIsSymbol(_3516970_37);
if (True == _3517453_37) {
Obj _3517454_37 = makeCons(co->gc, _3516970_37, Nil);
Obj _3517455_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3517454_37);
coraReturn(co, _3517455_37);
return;
} else {
Obj _3516972_37 = makeNative(co->gc, 1, clofun68, 0, 1, _3516970_37);
Obj _3517462_37 = PRIM_ISCONS(_3516970_37);
if (True == _3517462_37) {
Obj _3517463_37 = PRIM_CAR(_3516970_37);
Obj _3517464_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3517463_37);
if (True == _3517464_37) {
Obj _3517465_37 = PRIM_CDR(_3516970_37);
Obj _3517466_37 = PRIM_ISCONS(_3517465_37);
if (True == _3517466_37) {
Obj _3517467_37 = PRIM_CDR(_3516970_37);
Obj _3517468_37 = PRIM_CAR(_3517467_37);
Obj x = _3517468_37;
Obj _3517469_37 = PRIM_CDR(_3516970_37);
Obj _3517470_37 = PRIM_CDR(_3517469_37);
Obj _3517471_37 = PRIM_EQ(Nil, _3517470_37);
if (True == _3517471_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516972_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516972_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516972_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516972_37);
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
Obj _3517456_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517456_37) {
Obj _3517457_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517457_37;
Obj _3517458_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3517458_37;
Obj _3517459_37 = makeCons(co->gc, x, more);
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 147)), globalRef(co, getBinding(co, packageID, 88)), _3517459_37);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3517460_37= co->res;
Obj _3517461_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3517460_37);
coraReturn(co, _3517461_37);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3517451_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), _3517451_37);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516966_37 = R[1];
Obj _3516967_37 = makeNative(co->gc, 1, clofun65, 0, 1, _3516966_37);
Obj _3517446_37 = PRIM_ISCONS(_3516966_37);
if (True == _3517446_37) {
Obj _3517447_37 = PRIM_CAR(_3516966_37);
Obj x = _3517447_37;
Obj _3517448_37 = PRIM_CDR(_3516966_37);
Obj _3517449_37 = PRIM_EQ(Nil, _3517448_37);
if (True == _3517449_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516967_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516967_37);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516968_37 = makeNative(co->gc, 2, clofun64, 0, 1, closureRef(R[0], 0));
Obj _3517434_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517434_37) {
Obj _3517435_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517435_37;
Obj _3517436_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517437_37 = PRIM_ISCONS(_3517436_37);
if (True == _3517437_37) {
Obj _3517438_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517439_37 = PRIM_CAR(_3517438_37);
Obj y = _3517439_37;
Obj _3517440_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517441_37 = PRIM_CDR(_3517440_37);
Obj _3517442_37 = PRIM_EQ(Nil, _3517441_37);
if (True == _3517442_37) {
Obj _3517443_37 = makeCons(co->gc, y, Nil);
Obj _3517444_37 = makeCons(co->gc, x, _3517443_37);
Obj _3517445_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3517444_37);
coraReturn(co, _3517445_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516968_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516968_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516968_37);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517427_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517427_37) {
Obj _3517428_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517428_37;
Obj _3517429_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517429_37;
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
Obj _3517430_37= co->res;
Obj x = R[1];
Obj _3517431_37 = makeCons(co->gc, _3517430_37, Nil);
Obj _3517432_37 = makeCons(co->gc, x, _3517431_37);
Obj _3517433_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3517432_37);
coraReturn(co, _3517433_37);
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
Obj _3517425_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 92)), _3517425_37);
return;
}
case 2:
{
Obj _3517424_37= co->res;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 94)), _3517424_37);
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
Obj _3517413_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3517414_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, args);
Obj _3517415_37 = makeCons(co->gc, _3517414_37, body);
Obj _3517416_37 = makeCons(co->gc, getBinding(co, packageID, 107).name, _3517415_37);
Obj _3517417_37 = makeCons(co->gc, _3517416_37, Nil);
Obj _3517418_37 = makeCons(co->gc, args, _3517417_37);
Obj _3517419_37 = makeCons(co->gc, _3517413_37, _3517418_37);
Obj _3517420_37 = makeCons(co->gc, getBinding(co, packageID, 134).name, _3517419_37);
coraReturn(co, _3517420_37);
return;
}
case 2:
{
Obj _3517412_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = _3517412_37;
R[1] = body;
R[2] = args;
saveCont(co, clofun60, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
}
case 3:
{
Obj _3517411_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = _3517411_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), nargs);
return;
}
case 4:
{
Obj _3517410_37= co->res;
Obj exp = R[1];
Obj body = _3517410_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), body);
return;
}
case 5:
{
Obj _3517409_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 104)), _3517409_37);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj _3517403_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3517403_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517404_37 = primGenSym(co);
Obj _3517405_37 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = _3517404_37;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 96)), _3517405_37);
return;
}
}
case 1:
{
Obj _3517406_37= co->res;
Obj _3517404_37 = R[1];
Obj _3517407_37 = makeCons(co->gc, _3517404_37, _3517406_37);
coraReturn(co, _3517407_37);
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
Obj _3517400_37= co->res;
Obj n = R[1];
Obj _3517401_37 = primNot(_3517400_37);
if (True == _3517401_37) {
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
Obj _3517399_37= co->res;
Obj n = R[1];
R[1] = n;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3517399_37);
return;
}
case 3:
{
Obj _3517394_37= co->res;
Obj counts = _3517394_37;
Obj _3517395_37 = PRIM_CAR(counts);
Obj n = _3517395_37;
Obj _3517398_37 = PRIM_CDR(counts);
R[1] = n;
saveCont(co, clofun58, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 99)), makeNative(co->gc, 2, clofun57, 1, 1, n), _3517398_37);
return;
}
case 4:
{
Obj _3517392_37= co->res;
Obj pats = _3517392_37;
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
Obj _3517396_37 = PRIM_EQ(closureRef(R[0], 0), x);
Obj _3517397_37 = primNot(_3517396_37);
coraReturn(co, _3517397_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517393_37 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), _3517393_37);
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
Obj _3517386_37 = PRIM_EQ(l1, Nil);
if (True == _3517386_37) {
coraReturn(co, l2);
return;
} else {
Obj _3517387_37 = PRIM_CAR(l1);
Obj _3517388_37 = PRIM_CDR(l1);
R[1] = _3517387_37;
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3517388_37, l2);
return;
}
}
case 1:
{
Obj _3517389_37= co->res;
Obj _3517387_37 = R[1];
Obj _3517390_37 = makeCons(co->gc, _3517387_37, _3517389_37);
coraReturn(co, _3517390_37);
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
Obj _3517377_37 = PRIM_ISCONS(l);
if (True == _3517377_37) {
Obj _3517378_37 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
saveCont(co, clofun53, 1, R);
coraCall1(co, fn, _3517378_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj _3517379_37= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == _3517379_37) {
Obj _3517380_37 = PRIM_CAR(l);
Obj _3517381_37 = makeCons(co->gc, _3517380_37, res);
Obj _3517382_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), _3517381_37, fn, _3517382_37);
return;
} else {
Obj _3517383_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 100)), res, fn, _3517383_37);
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
Obj _3517372_37 = PRIM_EQ(l, Nil);
if (True == _3517372_37) {
coraReturn(co, i);
return;
} else {
Obj _3517373_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3517374_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), _3517373_37, _3517374_37);
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
Obj _3517370_37= co->res;
Obj _3517369_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), _3517369_37, _3517370_37);
return;
}
case 2:
{
Obj _3517367_37= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == _3517367_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
} else {
Obj _3517368_37 = PRIM_CAR(rules);
Obj _3517369_37 = makeCons(co->gc, _3517368_37, res);
R[1] = _3517369_37;
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
Obj _3517314_37 = PRIM_EQ(Nil, input);
if (True == _3517314_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), result);
return;
} else {
Obj _3516963_37 = makeNative(co->gc, 3, clofun47, 0, 3, input, current, result);
Obj _3517332_37 = PRIM_ISCONS(input);
if (True == _3517332_37) {
Obj _3517333_37 = PRIM_CAR(input);
Obj _3517334_37 = PRIM_EQ(getBinding(co, packageID, 105).name, _3517333_37);
if (True == _3517334_37) {
Obj _3517335_37 = PRIM_CDR(input);
Obj _3517336_37 = PRIM_ISCONS(_3517335_37);
if (True == _3517336_37) {
Obj _3517337_37 = PRIM_CDR(input);
Obj _3517338_37 = PRIM_CAR(_3517337_37);
Obj act = _3517338_37;
Obj _3517339_37 = PRIM_CDR(input);
Obj _3517340_37 = PRIM_CDR(_3517339_37);
Obj _3517341_37 = PRIM_ISCONS(_3517340_37);
if (True == _3517341_37) {
Obj _3517342_37 = PRIM_CDR(input);
Obj _3517343_37 = PRIM_CDR(_3517342_37);
Obj _3517344_37 = PRIM_CAR(_3517343_37);
Obj _3517345_37 = PRIM_EQ(getBinding(co, packageID, 110).name, _3517344_37);
if (True == _3517345_37) {
Obj _3517346_37 = PRIM_CDR(input);
Obj _3517347_37 = PRIM_CDR(_3517346_37);
Obj _3517348_37 = PRIM_CDR(_3517347_37);
Obj _3517349_37 = PRIM_ISCONS(_3517348_37);
if (True == _3517349_37) {
Obj _3517350_37 = PRIM_CDR(input);
Obj _3517351_37 = PRIM_CDR(_3517350_37);
Obj _3517352_37 = PRIM_CDR(_3517351_37);
Obj _3517353_37 = PRIM_CAR(_3517352_37);
Obj pred = _3517353_37;
Obj _3517354_37 = PRIM_CDR(input);
Obj _3517355_37 = PRIM_CDR(_3517354_37);
Obj _3517356_37 = PRIM_CDR(_3517355_37);
Obj _3517357_37 = PRIM_CDR(_3517356_37);
Obj remain = _3517357_37;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
saveCont(co, clofun48, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516963_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516963_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516963_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516963_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516963_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516963_37);
return;
}
}
}
case 1:
{
Obj _3517358_37= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj _3517359_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3517358_37);
Obj pat = _3517359_37;
Obj _3517360_37 = makeCons(co->gc, act, Nil);
Obj _3517361_37 = makeCons(co->gc, pred, _3517360_37);
Obj _3517362_37 = makeCons(co->gc, getBinding(co, packageID, 110).name, _3517361_37);
Obj _3517363_37 = makeCons(co->gc, pat, result);
Obj _3517364_37 = makeCons(co->gc, _3517362_37, _3517363_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, _3517364_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516964_37 = makeNative(co->gc, 1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517319_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517319_37) {
Obj _3517320_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517321_37 = PRIM_EQ(getBinding(co, packageID, 105).name, _3517320_37);
if (True == _3517321_37) {
Obj _3517322_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517323_37 = PRIM_ISCONS(_3517322_37);
if (True == _3517323_37) {
Obj _3517324_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517325_37 = PRIM_CAR(_3517324_37);
Obj act = _3517325_37;
Obj _3517326_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517327_37 = PRIM_CDR(_3517326_37);
Obj remain = _3517327_37;
R[1] = act;
R[2] = remain;
saveCont(co, clofun47, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516964_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516964_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516964_37);
return;
}
}
case 1:
{
Obj _3517328_37= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj _3517329_37 = makeCons(co->gc, getBinding(co, packageID, 135).name, _3517328_37);
Obj pat = _3517329_37;
Obj _3517330_37 = makeCons(co->gc, pat, closureRef(R[0], 2));
Obj _3517331_37 = makeCons(co->gc, act, _3517330_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), remain, Nil, _3517331_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517315_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517315_37) {
Obj _3517316_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517316_37;
Obj _3517317_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517317_37;
Obj _3517318_37 = makeCons(co->gc, x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 106)), y, _3517318_37, closureRef(R[0], 2));
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
Obj _3517301_37= co->res;
Obj value = R[1];
Obj rules = _3517301_37;
Obj _3517014_37 = makeNative(co->gc, 2, clofun43, 1, 2, value, rules);
Obj _3517308_37 = PRIM_ISCONS(value);
if (True == _3517308_37) {
Obj _3517309_37 = PRIM_CAR(value);
Obj _3517310_37 = PRIM_EQ(getBinding(co, packageID, 152).name, _3517309_37);
Obj _3517311_37 = primNot(_3517310_37);
if (True == _3517311_37) {
co->ctx.sp = R;
coraCall1(co, _3517014_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517014_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3517014_37, False);
return;
}
}
case 2:
{
Obj _3517300_37= co->res;
Obj exp = R[1];
Obj value = _3517300_37;
R[1] = value;
saveCont(co, clofun44, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj _3517299_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 138)), _3517299_37);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517015_37 = R[1];
if (True == _3517015_37) {
Obj _3517302_37 = primGenSym(co);
Obj val = _3517302_37;
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
Obj _3517303_37= co->res;
Obj val = R[1];
Obj _3517304_37 = makeCons(co->gc, _3517303_37, Nil);
Obj _3517305_37 = makeCons(co->gc, closureRef(R[0], 0), _3517304_37);
Obj _3517306_37 = makeCons(co->gc, val, _3517305_37);
Obj _3517307_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3517306_37);
coraReturn(co, _3517307_37);
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
Obj _3517297_37= co->res;
Obj _3517012_37 = R[1];
if (True == _3517297_37) {
co->ctx.sp = R;
coraCall1(co, _3517012_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517012_37, False);
return;
}
}
case 2:
{
Obj _3517295_37= co->res;
Obj rules = R[1];
Obj _3517012_37 = R[2];
if (True == _3517295_37) {
Obj _3517296_37 = PRIM_CDR(rules);
R[1] = _3517012_37;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), _3517296_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517012_37, False);
return;
}
}
case 3:
{
Obj _3517277_37= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == _3517277_37) {
Obj _3517278_37 = makeCons(co->gc, makeCString(co->gc, "no match-help found!"), Nil);
Obj _3517279_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3517278_37);
coraReturn(co, _3517279_37);
return;
} else {
Obj _3517012_37 = makeNative(co->gc, 3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = _3517012_37;
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
Obj _3517013_37 = R[1];
if (True == _3517013_37) {
Obj _3517280_37 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = _3517280_37;
Obj _3517281_37 = primGenSym(co);
Obj cc = _3517281_37;
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
Obj _3517287_37= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = _3517287_37;
Obj _3517288_37 = makeCons(co->gc, rest, Nil);
Obj _3517289_37 = makeCons(co->gc, Nil, _3517288_37);
Obj _3517290_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3517289_37);
Obj _3517291_37 = makeCons(co->gc, curr, Nil);
Obj _3517292_37 = makeCons(co->gc, _3517290_37, _3517291_37);
Obj _3517293_37 = makeCons(co->gc, cc, _3517292_37);
Obj _3517294_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3517293_37);
coraReturn(co, _3517294_37);
return;
}
case 2:
{
Obj _3517284_37= co->res;
Obj cc = R[1];
Obj curr = _3517284_37;
Obj _3517285_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517286_37 = PRIM_CDR(_3517285_37);
R[1] = curr;
R[2] = cc;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 109)), closureRef(R[0], 0), _3517286_37);
return;
}
case 3:
{
Obj _3517283_37= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
saveCont(co, clofun41, 2, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), _3517283_37, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj _3517282_37= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = _3517282_37;
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
Obj _3517264_37 = PRIM_CDR(rules);
Obj _3517265_37 = PRIM_CAR(_3517264_37);
Obj action = _3517265_37;
Obj _3517010_37 = makeNative(co->gc, 2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = _3517010_37;
saveCont(co, clofun40, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 151)), action);
return;
}
case 1:
{
Obj _3517273_37= co->res;
Obj action = R[1];
Obj _3517010_37 = R[2];
if (True == _3517273_37) {
Obj _3517274_37 = PRIM_CAR(action);
Obj _3517275_37 = PRIM_EQ(_3517274_37, getBinding(co, packageID, 110).name);
if (True == _3517275_37) {
co->ctx.sp = R;
coraCall1(co, _3517010_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517010_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3517010_37, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517011_37 = R[1];
if (True == _3517011_37) {
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
Obj _3517267_37= co->res;
Obj _3517266_37 = R[1];
Obj _3517268_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3517269_37 = makeCons(co->gc, _3517268_37, Nil);
Obj _3517270_37 = makeCons(co->gc, _3517267_37, _3517269_37);
Obj _3517271_37 = makeCons(co->gc, _3517266_37, _3517270_37);
Obj _3517272_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517271_37);
coraReturn(co, _3517272_37);
return;
}
case 2:
{
Obj _3517266_37= co->res;
R[1] = _3517266_37;
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
Obj _3517262_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), _3517262_37);
return;
}
case 2:
{
Obj _3517249_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3517249_37) {
Obj _3517250_37 = PRIM_CAR(pat);
Obj _3517251_37 = PRIM_EQ(_3517250_37, getBinding(co, packageID, 139).name);
if (True == _3517251_37) {
Obj _3517252_37 = makeCons(co->gc, expr, Nil);
Obj _3517253_37 = makeCons(co->gc, pat, _3517252_37);
Obj _3517254_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3517253_37);
Obj _3517255_37 = makeCons(co->gc, cc, Nil);
Obj _3517256_37 = makeCons(co->gc, _3517255_37, Nil);
Obj _3517257_37 = makeCons(co->gc, body, _3517256_37);
Obj _3517258_37 = makeCons(co->gc, _3517254_37, _3517257_37);
Obj _3517259_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517258_37);
coraReturn(co, _3517259_37);
return;
} else {
Obj _3517260_37 = PRIM_CAR(pat);
Obj _3517261_37 = PRIM_EQ(_3517260_37, getBinding(co, packageID, 152).name);
if (True == _3517261_37) {
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
Obj _3517234_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3517234_37) {
Obj _3517235_37 = PRIM_EQ(pat, expr);
if (True == _3517235_37) {
coraReturn(co, body);
return;
} else {
Obj _3517236_37 = makeCons(co->gc, expr, Nil);
Obj _3517237_37 = makeCons(co->gc, pat, _3517236_37);
Obj _3517238_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3517237_37);
Obj _3517239_37 = makeCons(co->gc, cc, Nil);
Obj _3517240_37 = makeCons(co->gc, _3517239_37, Nil);
Obj _3517241_37 = makeCons(co->gc, body, _3517240_37);
Obj _3517242_37 = makeCons(co->gc, _3517238_37, _3517241_37);
Obj _3517243_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517242_37);
coraReturn(co, _3517243_37);
return;
}
} else {
Obj _3517244_37 = primIsSymbol(pat);
if (True == _3517244_37) {
Obj _3517245_37 = makeCons(co->gc, body, Nil);
Obj _3517246_37 = makeCons(co->gc, expr, _3517245_37);
Obj _3517247_37 = makeCons(co->gc, pat, _3517246_37);
Obj _3517248_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3517247_37);
coraReturn(co, _3517248_37);
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
Obj _3517231_37= co->res;
Obj x = R[1];
if (True == _3517231_37) {
Obj _3517232_37 = primIsSymbol(x);
Obj _3517233_37 = primNot(_3517232_37);
if (True == _3517233_37) {
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
Obj _3517210_37= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = _3517210_37;
Obj _3517008_37 = makeNative(co->gc, 3, clofun35, 1, 5, x, y, expr, body, cc);
Obj _3517227_37 = PRIM_ISCONS(expr);
if (True == _3517227_37) {
Obj _3517228_37 = PRIM_CAR(expr);
Obj _3517229_37 = PRIM_EQ(_3517228_37, getBinding(co, packageID, 152).name);
if (True == _3517229_37) {
co->ctx.sp = R;
coraCall1(co, _3517008_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517008_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3517008_37, False);
return;
}
}
case 2:
{
Obj _3517209_37= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = _3517209_37;
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
Obj _3517009_37 = R[1];
if (True == _3517009_37) {
saveCont(co, clofun35, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), closureRef(R[0], 2));
return;
} else {
Obj _3517214_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3517215_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3517214_37);
Obj _3517216_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3517217_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3517216_37);
Obj _3517218_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3517219_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3517218_37);
R[1] = _3517217_37;
R[2] = _3517215_37;
saveCont(co, clofun35, 5, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), _3517219_37, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj _3517213_37= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), e1, _3517213_37, closureRef(R[0], 4));
return;
}
case 2:
{
Obj _3517212_37= co->res;
Obj e1 = R[1];
Obj e2 = _3517212_37;
R[1] = e1;
saveCont(co, clofun35, 1, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517211_37= co->res;
Obj e1 = _3517211_37;
R[1] = e1;
saveCont(co, clofun35, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), closureRef(R[0], 2));
return;
}
case 4:
{
Obj _3517221_37= co->res;
Obj _3517215_37 = R[1];
Obj _3517222_37 = makeCons(co->gc, closureRef(R[0], 4), Nil);
Obj _3517223_37 = makeCons(co->gc, _3517222_37, Nil);
Obj _3517224_37 = makeCons(co->gc, _3517221_37, _3517223_37);
Obj _3517225_37 = makeCons(co->gc, _3517215_37, _3517224_37);
Obj _3517226_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517225_37);
coraReturn(co, _3517226_37);
return;
}
case 5:
{
Obj _3517220_37= co->res;
Obj _3517217_37 = R[1];
Obj _3517215_37 = R[2];
R[1] = _3517215_37;
saveCont(co, clofun35, 4, R);
coraCall4(co, globalRef(co, getBinding(co, packageID, 117)), closureRef(R[0], 0), _3517217_37, _3517220_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3517207_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), _3517207_37);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj _3517197_37 = PRIM_CDR(pat);
R[1] = pat;
saveCont(co, clofun33, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3517197_37);
return;
}
case 1:
{
Obj _3517202_37= co->res;
Obj _3517200_37 = R[1];
Obj _3517203_37 = makeCons(co->gc, _3517202_37, Nil);
Obj _3517204_37 = makeCons(co->gc, _3517200_37, _3517203_37);
Obj _3517205_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3517204_37);
coraReturn(co, _3517205_37);
return;
}
case 2:
{
Obj _3517198_37= co->res;
Obj pat = R[1];
if (True == _3517198_37) {
Obj _3517199_37 = PRIM_CAR(pat);
coraReturn(co, _3517199_37);
return;
} else {
Obj _3517200_37 = PRIM_CAR(pat);
Obj _3517201_37 = PRIM_CDR(pat);
R[1] = _3517200_37;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 120)), _3517201_37);
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
Obj _3517194_37 = PRIM_EQ(x, True);
if (True == _3517194_37) {
coraReturn(co, True);
return;
} else {
Obj _3517195_37 = PRIM_EQ(x, False);
if (True == _3517195_37) {
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
Obj _3517192_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), _3517192_37);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3517180_37 = PRIM_EQ(Nil, l);
if (True == _3517180_37) {
coraReturn(co, True);
return;
} else {
Obj _3517181_37 = PRIM_CAR(l);
Obj _3517182_37 = PRIM_EQ(_3517181_37, False);
if (True == _3517182_37) {
coraReturn(co, False);
return;
} else {
Obj _3517183_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun30, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 123)), _3517183_37);
return;
}
}
}
case 1:
{
Obj _3517184_37= co->res;
Obj l = R[1];
Obj more = _3517184_37;
Obj _3517185_37 = PRIM_EQ(more, False);
if (True == _3517185_37) {
coraReturn(co, False);
return;
} else {
Obj _3517186_37 = PRIM_CAR(l);
Obj _3517187_37 = makeCons(co->gc, False, Nil);
Obj _3517188_37 = makeCons(co->gc, more, _3517187_37);
Obj _3517189_37 = makeCons(co->gc, _3517186_37, _3517188_37);
Obj _3517190_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517189_37);
coraReturn(co, _3517190_37);
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
Obj _3517178_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), _3517178_37);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3517166_37 = PRIM_EQ(l, Nil);
if (True == _3517166_37) {
coraReturn(co, False);
return;
} else {
Obj _3517167_37 = PRIM_CAR(l);
Obj _3517168_37 = PRIM_EQ(_3517167_37, True);
if (True == _3517168_37) {
coraReturn(co, True);
return;
} else {
Obj _3517169_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun28, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 125)), _3517169_37);
return;
}
}
}
case 1:
{
Obj _3517170_37= co->res;
Obj l = R[1];
Obj more = _3517170_37;
Obj _3517171_37 = PRIM_EQ(more, True);
if (True == _3517171_37) {
coraReturn(co, True);
return;
} else {
Obj _3517172_37 = PRIM_CAR(l);
Obj _3517173_37 = makeCons(co->gc, more, Nil);
Obj _3517174_37 = makeCons(co->gc, True, _3517173_37);
Obj _3517175_37 = makeCons(co->gc, _3517172_37, _3517174_37);
Obj _3517176_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517175_37);
coraReturn(co, _3517176_37);
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
Obj _3517152_37 = PRIM_CDR(exp);
Obj _3517153_37 = PRIM_EQ(Nil, _3517152_37);
if (True == _3517153_37) {
Obj _3517154_37 = makeCons(co->gc, makeCString(co->gc, "no cond match"), Nil);
Obj _3517155_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3517154_37);
coraReturn(co, _3517155_37);
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
Obj _3517159_37= co->res;
Obj _3517158_37 = R[1];
Obj _3517157_37 = R[2];
Obj _3517160_37 = makeCons(co->gc, getBinding(co, packageID, 128).name, _3517159_37);
Obj _3517161_37 = makeCons(co->gc, _3517160_37, Nil);
Obj _3517162_37 = makeCons(co->gc, _3517158_37, _3517161_37);
Obj _3517163_37 = makeCons(co->gc, _3517157_37, _3517162_37);
Obj _3517164_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3517163_37);
coraReturn(co, _3517164_37);
return;
}
case 2:
{
Obj _3517158_37= co->res;
Obj exp = R[1];
Obj _3517157_37 = R[2];
R[1] = _3517158_37;
R[2] = _3517157_37;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 3:
{
Obj _3517156_37= co->res;
Obj exp = R[1];
Obj curr = _3517156_37;
Obj _3517157_37 = PRIM_CAR(curr);
R[1] = exp;
R[2] = _3517157_37;
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
Obj _3517150_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), _3517150_37);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3517138_37 = PRIM_CDR(exp);
R[1] = exp;
saveCont(co, clofun25, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 161)), _3517138_37);
return;
}
case 1:
{
Obj _3517144_37= co->res;
Obj _3517142_37 = R[1];
Obj _3517141_37 = R[2];
Obj _3517145_37 = makeCons(co->gc, _3517144_37, Nil);
Obj _3517146_37 = makeCons(co->gc, _3517142_37, _3517145_37);
Obj _3517147_37 = makeCons(co->gc, _3517141_37, _3517146_37);
Obj _3517148_37 = makeCons(co->gc, getBinding(co, packageID, 129).name, _3517147_37);
coraReturn(co, _3517148_37);
return;
}
case 2:
{
Obj _3517143_37= co->res;
Obj _3517142_37 = R[1];
Obj _3517141_37 = R[2];
R[1] = _3517142_37;
R[2] = _3517141_37;
saveCont(co, clofun25, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), _3517143_37);
return;
}
case 3:
{
Obj _3517142_37= co->res;
Obj exp = R[1];
Obj _3517141_37 = R[2];
R[1] = _3517142_37;
R[2] = _3517141_37;
saveCont(co, clofun25, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 157)), exp);
return;
}
case 4:
{
Obj _3517139_37= co->res;
Obj exp = R[1];
if (True == _3517139_37) {
Obj _3517140_37 = PRIM_CAR(exp);
coraReturn(co, _3517140_37);
return;
} else {
Obj _3517141_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3517141_37;
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
Obj _3517135_37 = PRIM_ISCONS(x);
Obj _3517136_37 = primNot(_3517135_37);
coraReturn(co, _3517136_37);
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
Obj _3517130_37 = PRIM_ISCONS(l);
if (True == _3517130_37) {
Obj _3517131_37 = PRIM_CAR(l);
Obj _3517132_37 = PRIM_EQ(_3517131_37, x);
if (True == _3517132_37) {
coraReturn(co, True);
return;
} else {
Obj _3517133_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 132)), x, _3517133_37);
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
Obj _3517122_37= co->res;
Obj _3517121_37 = R[1];
Obj _3517120_37 = R[2];
Obj _3517123_37 = makeCons(co->gc, _3517122_37, Nil);
Obj _3517124_37 = makeCons(co->gc, _3517121_37, _3517123_37);
Obj _3517125_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3517124_37);
Obj _3517126_37 = makeCons(co->gc, _3517125_37, Nil);
Obj _3517127_37 = makeCons(co->gc, _3517120_37, _3517126_37);
Obj _3517128_37 = makeCons(co->gc, getBinding(co, packageID, 133).name, _3517127_37);
coraReturn(co, _3517128_37);
return;
}
case 2:
{
Obj _3517121_37= co->res;
Obj exp = R[1];
Obj _3517120_37 = R[2];
R[1] = _3517121_37;
R[2] = _3517120_37;
saveCont(co, clofun22, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 155)), exp);
return;
}
case 3:
{
Obj _3517120_37= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = _3517120_37;
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
Obj _3517118_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), _3517118_37);
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
Obj _3517110_37= co->res;
Obj _3517109_37 = R[1];
Obj _3517108_37 = R[2];
Obj _3517111_37 = makeCons(co->gc, _3517109_37, _3517110_37);
Obj _3517112_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3517111_37);
Obj _3517113_37 = makeCons(co->gc, _3517112_37, Nil);
Obj _3517114_37 = makeCons(co->gc, _3517108_37, _3517113_37);
Obj _3517115_37 = makeCons(co->gc, getBinding(co, packageID, 144).name, _3517114_37);
coraReturn(co, _3517115_37);
return;
}
case 2:
{
Obj _3517109_37= co->res;
Obj exp = R[1];
Obj _3517108_37 = R[2];
R[1] = _3517109_37;
R[2] = _3517108_37;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 154)), exp);
return;
}
case 3:
{
Obj _3517106_37= co->res;
Obj exp = R[1];
Obj _3517107_37 = makeCons(co->gc, _3517106_37, Nil);
Obj _3517108_37 = makeCons(co->gc, getBinding(co, packageID, 139).name, _3517107_37);
R[1] = exp;
R[2] = _3517108_37;
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
Obj _3517088_37 = PRIM_ISCONS(exp);
if (True == _3517088_37) {
Obj _3517089_37 = PRIM_CAR(exp);
Obj _3517090_37 = PRIM_EQ(_3517089_37, globalRef(co, getBinding(co, packageID, 145)));
if (True == _3517090_37) {
Obj _3517091_37 = PRIM_CDR(exp);
coraReturn(co, _3517091_37);
return;
} else {
Obj _3517092_37 = PRIM_CAR(exp);
Obj _3517093_37 = PRIM_EQ(_3517092_37, getBinding(co, packageID, 140).name);
if (True == _3517093_37) {
R[1] = exp;
saveCont(co, clofun19, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 160)), exp);
return;
} else {
Obj _3517100_37 = PRIM_CAR(exp);
Obj _3517101_37 = PRIM_EQ(_3517100_37, getBinding(co, packageID, 139).name);
if (True == _3517101_37) {
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
Obj _3517096_37= co->res;
Obj _3517094_37 = R[1];
Obj _3517097_37 = makeCons(co->gc, _3517096_37, Nil);
Obj _3517098_37 = makeCons(co->gc, _3517094_37, _3517097_37);
Obj _3517099_37 = makeCons(co->gc, getBinding(co, packageID, 140).name, _3517098_37);
coraReturn(co, _3517099_37);
return;
}
case 2:
{
Obj _3517095_37= co->res;
Obj _3517094_37 = R[1];
R[1] = _3517094_37;
saveCont(co, clofun19, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 141)), _3517095_37);
return;
}
case 3:
{
Obj _3517094_37= co->res;
Obj exp = R[1];
R[1] = _3517094_37;
saveCont(co, clofun19, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 156)), exp);
return;
}
case 4:
{
Obj _3517103_37= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun18, 1, 1, exp), _3517103_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj _3517102_37 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == _3517102_37) {
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
Obj _3517078_37 = PRIM_EQ(Nil, macros);
if (True == _3517078_37) {
coraReturn(co, exp);
return;
} else {
Obj _3517085_37 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun15, 1, 2, macros, exp), _3517085_37);
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
Obj _3517006_37 = makeNative(co->gc, 2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3517081_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517081_37) {
Obj _3517082_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517083_37 = PRIM_CAR(item);
Obj _3517084_37 = PRIM_EQ(_3517082_37, _3517083_37);
if (True == _3517084_37) {
co->ctx.sp = R;
coraCall1(co, _3517006_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517006_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3517006_37, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517007_37 = R[1];
if (True == _3517007_37) {
Obj _3517079_37 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, _3517079_37, closureRef(R[0], 1));
return;
} else {
Obj _3517080_37 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 143)), closureRef(R[0], 1), _3517080_37);
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
Obj _3517074_37 = makeCons(co->gc, n, v);
Obj _3517075_37 = makeCons(co->gc, _3517074_37, globalRef(co, getBinding(co, packageID, 146)));
Obj _3517076_37 = primSet(co, getBinding(co, packageID, 146).name, _3517075_37);
coraReturn(co, _3517076_37);
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
Obj _3517064_37 = PRIM_ISCONS(l);
if (True == _3517064_37) {
Obj _3517065_37 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
saveCont(co, clofun11, 1, R);
coraCall1(co, f, _3517065_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 149)), res);
return;
}
}
case 1:
{
Obj _3517066_37= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj _3517067_37 = makeCons(co->gc, _3517066_37, res);
Obj _3517068_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 148)), _3517067_37, f, _3517068_37);
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
Obj _3517057_37 = PRIM_ISCONS(l);
if (True == _3517057_37) {
Obj _3517058_37 = PRIM_CAR(l);
Obj _3517059_37 = makeCons(co->gc, _3517058_37, res);
Obj _3517060_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 150)), _3517059_37, _3517060_37);
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
Obj _3517055_37 = PRIM_ISCONS(x);
coraReturn(co, _3517055_37);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3517047_37 = PRIM_ISCONS(exp);
if (True == _3517047_37) {
Obj _3517048_37 = PRIM_CAR(exp);
Obj _3517049_37 = PRIM_CDR(exp);
R[1] = _3517048_37;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 153)), _3517049_37);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj _3517050_37= co->res;
Obj _3517048_37 = R[1];
Obj _3517051_37 = makeCons(co->gc, _3517050_37, Nil);
Obj _3517052_37 = makeCons(co->gc, _3517048_37, _3517051_37);
Obj _3517053_37 = makeCons(co->gc, getBinding(co, packageID, 152).name, _3517052_37);
coraReturn(co, _3517053_37);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517043_37 = PRIM_CDR(x);
Obj _3517044_37 = PRIM_CDR(_3517043_37);
Obj _3517045_37 = PRIM_CDR(_3517044_37);
coraReturn(co, _3517045_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517038_37 = PRIM_CDR(x);
Obj _3517039_37 = PRIM_CDR(_3517038_37);
Obj _3517040_37 = PRIM_CDR(_3517039_37);
Obj _3517041_37 = PRIM_CAR(_3517040_37);
coraReturn(co, _3517041_37);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517034_37 = PRIM_CDR(x);
Obj _3517035_37 = PRIM_CDR(_3517034_37);
Obj _3517036_37 = PRIM_CAR(_3517035_37);
coraReturn(co, _3517036_37);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517031_37 = PRIM_CDR(x);
Obj _3517032_37 = PRIM_CDR(_3517031_37);
coraReturn(co, _3517032_37);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517028_37 = PRIM_CAR(x);
Obj _3517029_37 = PRIM_CDR(_3517028_37);
coraReturn(co, _3517029_37);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517025_37 = PRIM_CAR(x);
Obj _3517026_37 = PRIM_CAR(_3517025_37);
coraReturn(co, _3517026_37);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517022_37 = PRIM_CDR(x);
Obj _3517023_37 = PRIM_CAR(_3517022_37);
coraReturn(co, _3517023_37);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517020_37 = PRIM_EQ(x, Nil);
coraReturn(co, _3517020_37);
return;
}
}
}

