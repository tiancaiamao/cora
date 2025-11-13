#include "types.h"
#include "runtime.h"
#include "cora.h"

static void clofun144(struct Cora* co, int label, Obj *R);
static void clofun143(struct Cora* co, int label, Obj *R);
static void clofun142(struct Cora* co, int label, Obj *R);
static void clofun141(struct Cora* co, int label, Obj *R);
static void clofun140(struct Cora* co, int label, Obj *R);
static void clofun139(struct Cora* co, int label, Obj *R);
static void clofun138(struct Cora* co, int label, Obj *R);
static void clofun137(struct Cora* co, int label, Obj *R);
static void clofun136(struct Cora* co, int label, Obj *R);
static void clofun135(struct Cora* co, int label, Obj *R);
static void clofun134(struct Cora* co, int label, Obj *R);
static void clofun133(struct Cora* co, int label, Obj *R);
static void clofun132(struct Cora* co, int label, Obj *R);
static void clofun131(struct Cora* co, int label, Obj *R);
static void clofun130(struct Cora* co, int label, Obj *R);
static void clofun129(struct Cora* co, int label, Obj *R);
static void clofun128(struct Cora* co, int label, Obj *R);
static void clofun127(struct Cora* co, int label, Obj *R);
static void clofun126(struct Cora* co, int label, Obj *R);
static void clofun125(struct Cora* co, int label, Obj *R);
static void clofun124(struct Cora* co, int label, Obj *R);
static void clofun123(struct Cora* co, int label, Obj *R);
static void clofun122(struct Cora* co, int label, Obj *R);
static void clofun121(struct Cora* co, int label, Obj *R);
static void clofun120(struct Cora* co, int label, Obj *R);
static void clofun119(struct Cora* co, int label, Obj *R);
static void clofun118(struct Cora* co, int label, Obj *R);
static void clofun117(struct Cora* co, int label, Obj *R);
static void clofun116(struct Cora* co, int label, Obj *R);
static void clofun115(struct Cora* co, int label, Obj *R);
static void clofun114(struct Cora* co, int label, Obj *R);
static void clofun113(struct Cora* co, int label, Obj *R);
static void clofun112(struct Cora* co, int label, Obj *R);
static void clofun111(struct Cora* co, int label, Obj *R);
static void clofun110(struct Cora* co, int label, Obj *R);
static void clofun109(struct Cora* co, int label, Obj *R);
static void clofun108(struct Cora* co, int label, Obj *R);
static void clofun107(struct Cora* co, int label, Obj *R);
static void clofun106(struct Cora* co, int label, Obj *R);
static void clofun105(struct Cora* co, int label, Obj *R);
static void clofun104(struct Cora* co, int label, Obj *R);
static void clofun103(struct Cora* co, int label, Obj *R);
static void clofun102(struct Cora* co, int label, Obj *R);
static void clofun101(struct Cora* co, int label, Obj *R);
static void clofun100(struct Cora* co, int label, Obj *R);
static void clofun99(struct Cora* co, int label, Obj *R);
static void clofun98(struct Cora* co, int label, Obj *R);
static void clofun97(struct Cora* co, int label, Obj *R);
static void clofun96(struct Cora* co, int label, Obj *R);
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


static __thread Binding* __symbolTable;

void entry(struct Cora *co, int label, Obj *R) {
__symbolTable = (Binding*)malloc(sizeof(Binding) * 131);
__symbolTable[0] = bindSymbol(co, intern("cora/lib/io#close-output-file"));
__symbolTable[1] = bindSymbol(co, intern("cora/lib/io#open-output-file"));
__symbolTable[2] = bindSymbol(co, intern("cora/init#macroexpand"));
__symbolTable[3] = bindSymbol(co, intern("cora/lib/toc#compile-to-c"));
__symbolTable[4] = bindSymbol(co, intern("cora/init#read-file-as-sexp"));
__symbolTable[5] = bindSymbol(co, intern("cora/lib/toc#preprocess"));
__symbolTable[6] = bindSymbol(co, intern("cora/lib/toc#split-type-and-code-toplevel"));
__symbolTable[7] = bindSymbol(co, intern("cora/lib/infer#*typecheck*"));
__symbolTable[8] = bindSymbol(co, intern("cora/lib/toc#generate-typecheck-code"));
__symbolTable[9] = bindSymbol(co, intern("cora/lib/toc#extract-typecheck-body"));
__symbolTable[10] = bindSymbol(co, intern(":type"));
__symbolTable[11] = bindSymbol(co, intern("declare"));
__symbolTable[12] = bindSymbol(co, intern(":declare"));
__symbolTable[13] = bindSymbol(co, intern("cora/lib/infer#tvar"));
__symbolTable[14] = bindSymbol(co, intern("backquote"));
__symbolTable[15] = bindSymbol(co, intern("macroexpand"));
__symbolTable[16] = bindSymbol(co, intern("cora/lib/infer#check-type!"));
__symbolTable[17] = bindSymbol(co, intern("cora/lib/toc#split-type-and-code"));
__symbolTable[18] = bindSymbol(co, intern("package"));
__symbolTable[19] = bindSymbol(co, intern("begin"));
__symbolTable[20] = bindSymbol(co, intern("export"));
__symbolTable[21] = bindSymbol(co, intern("import"));
__symbolTable[22] = bindSymbol(co, intern("cora/lib/toc#handle-import-eagerly"));
__symbolTable[23] = bindSymbol(co, intern("cora/lib/toc#generate-c"));
__symbolTable[24] = bindSymbol(co, intern("cora/init#symbol->string"));
__symbolTable[25] = bindSymbol(co, intern("cora/lib/toc#generate-entry"));
__symbolTable[26] = bindSymbol(co, intern("cora/lib/toc#generate-toplevel-lambda"));
__symbolTable[27] = bindSymbol(co, intern("cora/lib/toc#for-each"));
__symbolTable[28] = bindSymbol(co, intern("cora/lib/toc#compile"));
__symbolTable[29] = bindSymbol(co, intern("cora/init#cddr"));
__symbolTable[30] = bindSymbol(co, intern("->"));
__symbolTable[31] = bindSymbol(co, intern("cora/init#add-to-*macros*"));
__symbolTable[32] = bindSymbol(co, intern("cora/lib/toc#rewrite-->macro"));
__symbolTable[33] = bindSymbol(co, intern("cora/init#vector"));
__symbolTable[34] = bindSymbol(co, intern("cora/lib/toc#collect-lambda-pass"));
__symbolTable[35] = bindSymbol(co, intern("cora/lib/toc#liveness-analyze-pass"));
__symbolTable[36] = bindSymbol(co, intern("cora/lib/toc#tailify-pass"));
__symbolTable[37] = bindSymbol(co, intern("cora/lib/toc#closure-convert-pass"));
__symbolTable[38] = bindSymbol(co, intern("cora/lib/toc#parse-pass"));
__symbolTable[39] = bindSymbol(co, intern("cora/lib/toc#code-gen-func-declare"));
__symbolTable[40] = bindSymbol(co, intern("cora/lib/toc#generate-cont"));
__symbolTable[41] = bindSymbol(co, intern("cora/lib/toc/internal#escape-str"));
__symbolTable[42] = bindSymbol(co, intern("cora/lib/toc#generate-group-name"));
__symbolTable[43] = bindSymbol(co, intern("cora/lib/toc#generate-inst-list"));
__symbolTable[44] = bindSymbol(co, intern("cora/lib/toc/internal#generate-sym"));
__symbolTable[45] = bindSymbol(co, intern("cora/lib/toc#recover-from-frame"));
__symbolTable[46] = bindSymbol(co, intern("cora/lib/toc#generate-inst"));
__symbolTable[47] = bindSymbol(co, intern("cora/lib/toc/internal#generate-num"));
__symbolTable[48] = bindSymbol(co, intern("cora/lib/toc/internal#generate-str"));
__symbolTable[49] = bindSymbol(co, intern("cora/lib/toc#save-to-frame"));
__symbolTable[50] = bindSymbol(co, intern("cora/lib/toc#symbol-offset"));
__symbolTable[51] = bindSymbol(co, intern("cora/lib/toc#symbol-offset-h"));
__symbolTable[52] = bindSymbol(co, intern("cora/init#value"));
__symbolTable[53] = bindSymbol(co, intern("cora/init#vector-set!"));
__symbolTable[54] = bindSymbol(co, intern("cora/lib/toc#append-result"));
__symbolTable[55] = bindSymbol(co, intern("cora/init#vector-ref"));
__symbolTable[56] = bindSymbol(co, intern("cora/lib/toc#collect-lambda"));
__symbolTable[57] = bindSymbol(co, intern("cora/lib/toc#lambda-frame-size"));
__symbolTable[58] = bindSymbol(co, intern("cora/lib/toc#rewrite-lambda-final"));
__symbolTable[59] = bindSymbol(co, intern("cora/init#cdddr"));
__symbolTable[60] = bindSymbol(co, intern("cora/lib/toc#collect-cont-list"));
__symbolTable[61] = bindSymbol(co, intern("cora/lib/toc#collect-cont"));
__symbolTable[62] = bindSymbol(co, intern("%continuation"));
__symbolTable[63] = bindSymbol(co, intern("cora/lib/toc#liveness-analyze"));
__symbolTable[64] = bindSymbol(co, intern("cora/init#caar"));
__symbolTable[65] = bindSymbol(co, intern("cora/init#pair?"));
__symbolTable[66] = bindSymbol(co, intern("cora/lib/toc#wrap-var"));
__symbolTable[67] = bindSymbol(co, intern("cora/init#reverse"));
__symbolTable[68] = bindSymbol(co, intern("cora/lib/toc#tailify-list"));
__symbolTable[69] = bindSymbol(co, intern("cora/lib/toc#tailify"));
__symbolTable[70] = bindSymbol(co, intern("cora/lib/toc#id"));
__symbolTable[71] = bindSymbol(co, intern("cora/lib/toc#closure-convert"));
__symbolTable[72] = bindSymbol(co, intern("return"));
__symbolTable[73] = bindSymbol(co, intern("call"));
__symbolTable[74] = bindSymbol(co, intern("tailcall"));
__symbolTable[75] = bindSymbol(co, intern("continuation"));
__symbolTable[76] = bindSymbol(co, intern("cora/lib/toc#free-vars"));
__symbolTable[77] = bindSymbol(co, intern("%closure-ref"));
__symbolTable[78] = bindSymbol(co, intern("%closure"));
__symbolTable[79] = bindSymbol(co, intern("cora/lib/toc#convert-protect?"));
__symbolTable[80] = bindSymbol(co, intern("cora/lib/toc#diff"));
__symbolTable[81] = bindSymbol(co, intern("cora/lib/toc#union"));
__symbolTable[82] = bindSymbol(co, intern("cora/init#boolean?"));
__symbolTable[83] = bindSymbol(co, intern("cora/init#number?"));
__symbolTable[84] = bindSymbol(co, intern("quote"));
__symbolTable[85] = bindSymbol(co, intern("do"));
__symbolTable[86] = bindSymbol(co, intern("let"));
__symbolTable[87] = bindSymbol(co, intern("if"));
__symbolTable[88] = bindSymbol(co, intern("cora/init#append"));
__symbolTable[89] = bindSymbol(co, intern("lambda"));
__symbolTable[90] = bindSymbol(co, intern("%builtin"));
__symbolTable[91] = bindSymbol(co, intern("cora/init#length"));
__symbolTable[92] = bindSymbol(co, intern("cora/init#map"));
__symbolTable[93] = bindSymbol(co, intern("%global"));
__symbolTable[94] = bindSymbol(co, intern("cora/lib/toc#add-symbol-to-list"));
__symbolTable[95] = bindSymbol(co, intern("cora/init#elem?"));
__symbolTable[96] = bindSymbol(co, intern("%const"));
__symbolTable[97] = bindSymbol(co, intern("cora/lib/toc#parse"));
__symbolTable[98] = bindSymbol(co, intern("cora/lib/toc#temp-list"));
__symbolTable[99] = bindSymbol(co, intern("cora/init#cadr"));
__symbolTable[100] = bindSymbol(co, intern("cora/lib/toc#builtin->args"));
__symbolTable[101] = bindSymbol(co, intern("cora/init#caddr"));
__symbolTable[102] = bindSymbol(co, intern("cora/lib/toc#builtin->name"));
__symbolTable[103] = bindSymbol(co, intern("cora/init#null?"));
__symbolTable[104] = bindSymbol(co, intern("cora/lib/toc#builtin?"));
__symbolTable[105] = bindSymbol(co, intern("string?"));
__symbolTable[106] = bindSymbol(co, intern("integer?"));
__symbolTable[107] = bindSymbol(co, intern("not"));
__symbolTable[108] = bindSymbol(co, intern("symbol?"));
__symbolTable[109] = bindSymbol(co, intern("gensym"));
__symbolTable[110] = bindSymbol(co, intern("<"));
__symbolTable[111] = bindSymbol(co, intern(">"));
__symbolTable[112] = bindSymbol(co, intern("="));
__symbolTable[113] = bindSymbol(co, intern("/"));
__symbolTable[114] = bindSymbol(co, intern("*"));
__symbolTable[115] = bindSymbol(co, intern("-"));
__symbolTable[116] = bindSymbol(co, intern("+"));
__symbolTable[117] = bindSymbol(co, intern("cons?"));
__symbolTable[118] = bindSymbol(co, intern("cons"));
__symbolTable[119] = bindSymbol(co, intern("cdr"));
__symbolTable[120] = bindSymbol(co, intern("car"));
__symbolTable[121] = bindSymbol(co, intern("set"));
__symbolTable[122] = bindSymbol(co, intern("cora/lib/toc#*builtin-prims*"));
__symbolTable[123] = bindSymbol(co, intern("cora/lib/toc#exist-in-env"));
__symbolTable[124] = bindSymbol(co, intern("cora/lib/toc#index"));
__symbolTable[125] = bindSymbol(co, intern("cora/lib/toc#pos-in-list0"));
__symbolTable[126] = bindSymbol(co, intern("cora/lib/toc#foldl"));
__symbolTable[127] = bindSymbol(co, intern("cora/lib/toc#error"));
__symbolTable[128] = bindSymbol(co, intern("cora/lib/toc#assq"));
__symbolTable[129] = bindSymbol(co, intern("cora/lib/toc#*ns-export*"));
__symbolTable[130] = bindSymbol(co, intern("cora/init#import"));
co->ctx.fn = clofun144;
co->ctx.label = 0;
}

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun144, 4, R);
coraCall1(co, globalRef(co, __symbolTable[130]), makeCString(co->gc, "cora/lib/toc/internal"));
return;
}
case 1:
{
Obj _3518046_37= co->res;
Obj _3518052_37 = primSet(co, __symbolTable[28], makeNative(co->gc, 3, clofun110, 2, 0));
Obj _3518058_37 = primSet(co, __symbolTable[27], makeNative(co->gc, 3, clofun111, 2, 0));
Obj _3518080_37 = primSet(co, __symbolTable[26], makeNative(co->gc, 7, clofun113, 3, 0));
Obj _3518098_37 = primSet(co, __symbolTable[25], makeNative(co->gc, 4, clofun115, 3, 0));
Obj _3518107_37 = primSet(co, __symbolTable[23], makeNative(co->gc, 4, clofun118, 3, 0));
Obj _3518148_37 = primSet(co, __symbolTable[22], makeNative(co->gc, 2, clofun123, 1, 0));
Obj _3518187_37 = primSet(co, __symbolTable[17], makeNative(co->gc, 5, clofun126, 4, 0));
Obj _3518239_37 = primSet(co, __symbolTable[9], makeNative(co->gc, 3, clofun131, 2, 0));
Obj _3518240_37 = primSet(co, __symbolTable[8], makeNative(co->gc, 3, clofun132, 2, 0));
Obj _3518254_37 = primSet(co, __symbolTable[6], makeNative(co->gc, 2, clofun140, 1, 0));
Obj _3518255_37 = primSet(co, __symbolTable[7], False);
Obj _3518268_37 = primSet(co, __symbolTable[5], makeNative(co->gc, 3, clofun142, 1, 0));
Obj _3518278_37 = primSet(co, __symbolTable[3], makeNative(co->gc, 4, clofun143, 2, 0));
coraReturn(co, _3518278_37);
return;
}
case 2:
{
Obj _3516664_37= co->res;
Obj _3516665_37 = primSet(co, __symbolTable[129], Nil);
Obj _3516680_37 = primSet(co, __symbolTable[128], makeNative(co->gc, 3, clofun1, 2, 0));
Obj _3516686_37 = primSet(co, __symbolTable[126], makeNative(co->gc, 4, clofun2, 3, 0));
Obj _3516696_37 = primSet(co, __symbolTable[125], makeNative(co->gc, 4, clofun4, 3, 0));
Obj _3516697_37 = primSet(co, __symbolTable[124], makeNative(co->gc, 3, clofun5, 2, 0));
Obj _3516704_37 = primSet(co, __symbolTable[123], makeNative(co->gc, 3, clofun6, 2, 0));
Obj _3516705_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3516706_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516705_37);
Obj _3516707_37 = makeCons(co->gc, globalRef(co, __symbolTable[121]), _3516706_37);
Obj _3516708_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3516709_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516708_37);
Obj _3516710_37 = makeCons(co->gc, globalRef(co, __symbolTable[120]), _3516709_37);
Obj _3516711_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3516712_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516711_37);
Obj _3516713_37 = makeCons(co->gc, globalRef(co, __symbolTable[119]), _3516712_37);
Obj _3516714_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3516715_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516714_37);
Obj _3516716_37 = makeCons(co->gc, globalRef(co, __symbolTable[118]), _3516715_37);
Obj _3516717_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3516718_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516717_37);
Obj _3516719_37 = makeCons(co->gc, globalRef(co, __symbolTable[117]), _3516718_37);
Obj _3516720_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3516721_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516720_37);
Obj _3516722_37 = makeCons(co->gc, globalRef(co, __symbolTable[116]), _3516721_37);
Obj _3516723_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3516724_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516723_37);
Obj _3516725_37 = makeCons(co->gc, globalRef(co, __symbolTable[115]), _3516724_37);
Obj _3516726_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3516727_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516726_37);
Obj _3516728_37 = makeCons(co->gc, globalRef(co, __symbolTable[114]), _3516727_37);
Obj _3516729_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3516730_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516729_37);
Obj _3516731_37 = makeCons(co->gc, globalRef(co, __symbolTable[113]), _3516730_37);
Obj _3516732_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3516733_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516732_37);
Obj _3516734_37 = makeCons(co->gc, globalRef(co, __symbolTable[112]), _3516733_37);
Obj _3516735_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3516736_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516735_37);
Obj _3516737_37 = makeCons(co->gc, globalRef(co, __symbolTable[111]), _3516736_37);
Obj _3516738_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3516739_37 = makeCons(co->gc, MAKE_NUMBER(2), _3516738_37);
Obj _3516740_37 = makeCons(co->gc, globalRef(co, __symbolTable[110]), _3516739_37);
Obj _3516741_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3516742_37 = makeCons(co->gc, MAKE_NUMBER(0), _3516741_37);
Obj _3516743_37 = makeCons(co->gc, globalRef(co, __symbolTable[109]), _3516742_37);
Obj _3516744_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3516745_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516744_37);
Obj _3516746_37 = makeCons(co->gc, globalRef(co, __symbolTable[108]), _3516745_37);
Obj _3516747_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3516748_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516747_37);
Obj _3516749_37 = makeCons(co->gc, globalRef(co, __symbolTable[107]), _3516748_37);
Obj _3516750_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3516751_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516750_37);
Obj _3516752_37 = makeCons(co->gc, globalRef(co, __symbolTable[106]), _3516751_37);
Obj _3516753_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3516754_37 = makeCons(co->gc, MAKE_NUMBER(1), _3516753_37);
Obj _3516755_37 = makeCons(co->gc, globalRef(co, __symbolTable[105]), _3516754_37);
Obj _3516756_37 = makeCons(co->gc, _3516755_37, Nil);
Obj _3516757_37 = makeCons(co->gc, _3516752_37, _3516756_37);
Obj _3516758_37 = makeCons(co->gc, _3516749_37, _3516757_37);
Obj _3516759_37 = makeCons(co->gc, _3516746_37, _3516758_37);
Obj _3516760_37 = makeCons(co->gc, _3516743_37, _3516759_37);
Obj _3516761_37 = makeCons(co->gc, _3516740_37, _3516760_37);
Obj _3516762_37 = makeCons(co->gc, _3516737_37, _3516761_37);
Obj _3516763_37 = makeCons(co->gc, _3516734_37, _3516762_37);
Obj _3516764_37 = makeCons(co->gc, _3516731_37, _3516763_37);
Obj _3516765_37 = makeCons(co->gc, _3516728_37, _3516764_37);
Obj _3516766_37 = makeCons(co->gc, _3516725_37, _3516765_37);
Obj _3516767_37 = makeCons(co->gc, _3516722_37, _3516766_37);
Obj _3516768_37 = makeCons(co->gc, _3516719_37, _3516767_37);
Obj _3516769_37 = makeCons(co->gc, _3516716_37, _3516768_37);
Obj _3516770_37 = makeCons(co->gc, _3516713_37, _3516769_37);
Obj _3516771_37 = makeCons(co->gc, _3516710_37, _3516770_37);
Obj _3516772_37 = makeCons(co->gc, _3516707_37, _3516771_37);
Obj _3516773_37 = primSet(co, __symbolTable[122], _3516772_37);
Obj _3516777_37 = primSet(co, __symbolTable[104], makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3516780_37 = primSet(co, __symbolTable[102], makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3516783_37 = primSet(co, __symbolTable[100], makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3516788_37 = primSet(co, __symbolTable[98], makeNative(co->gc, 3, clofun10, 2, 0));
Obj _3516982_37 = primSet(co, __symbolTable[97], makeNative(co->gc, 4, clofun20, 3, 0));
Obj _3516993_37 = primSet(co, __symbolTable[81], makeNative(co->gc, 4, clofun22, 2, 0));
Obj _3517004_37 = primSet(co, __symbolTable[80], makeNative(co->gc, 4, clofun24, 2, 0));
Obj _3517065_37 = primSet(co, __symbolTable[79], makeNative(co->gc, 2, clofun31, 1, 0));
Obj _3517240_37 = primSet(co, __symbolTable[76], makeNative(co->gc, 2, clofun41, 1, 0));
Obj _3517313_37 = primSet(co, __symbolTable[71], makeNative(co->gc, 4, clofun44, 2, 0));
Obj _3517316_37 = primSet(co, __symbolTable[70], makeNative(co->gc, 2, clofun45, 1, 0));
Obj _3517453_37 = primSet(co, __symbolTable[69], makeNative(co->gc, 3, clofun54, 2, 0));
Obj _3517476_37 = primSet(co, __symbolTable[68], makeNative(co->gc, 4, clofun57, 3, 0));
Obj _3517553_37 = primSet(co, __symbolTable[63], makeNative(co->gc, 3, clofun61, 2, 0));
Obj _3517584_37 = primSet(co, __symbolTable[61], makeNative(co->gc, 4, clofun65, 3, 0));
Obj _3517590_37 = primSet(co, __symbolTable[60], makeNative(co->gc, 5, clofun68, 4, 0));
Obj _3517595_37 = primSet(co, __symbolTable[58], makeNative(co->gc, 3, clofun70, 2, 0));
Obj _3517604_37 = primSet(co, __symbolTable[57], makeNative(co->gc, 2, clofun72, 1, 0));
Obj _3517655_37 = primSet(co, __symbolTable[56], makeNative(co->gc, 6, clofun74, 2, 0));
Obj _3517663_37 = primSet(co, __symbolTable[54], makeNative(co->gc, 4, clofun75, 2, 0));
Obj _3517670_37 = primSet(co, __symbolTable[66], makeNative(co->gc, 3, clofun76, 2, 0));
Obj _3517675_37 = primSet(co, __symbolTable[94], makeNative(co->gc, 4, clofun77, 2, 0));
Obj _3517681_37 = primSet(co, __symbolTable[51], makeNative(co->gc, 4, clofun78, 3, 0));
Obj _3517682_37 = primSet(co, __symbolTable[50], makeNative(co->gc, 3, clofun79, 2, 0));
Obj _3517689_37 = primSet(co, __symbolTable[49], makeNative(co->gc, 6, clofun81, 5, 0));
Obj _3517696_37 = primSet(co, __symbolTable[45], makeNative(co->gc, 6, clofun83, 5, 0));
Obj _3517983_37 = primSet(co, __symbolTable[46], makeNative(co->gc, 6, clofun96, 5, 0));
Obj _3517997_37 = primSet(co, __symbolTable[43], makeNative(co->gc, 6, clofun98, 5, 0));
Obj _3518019_37 = primSet(co, __symbolTable[40], makeNative(co->gc, 8, clofun100, 5, 0));
Obj _3518021_37 = primSet(co, __symbolTable[42], makeNative(co->gc, 3, clofun101, 2, 0));
Obj _3518025_37 = primSet(co, __symbolTable[39], makeNative(co->gc, 3, clofun102, 2, 0));
Obj _3518026_37 = primSet(co, __symbolTable[38], makeNative(co->gc, 3, clofun103, 2, 0));
Obj _3518027_37 = primSet(co, __symbolTable[37], makeNative(co->gc, 2, clofun104, 1, 0));
Obj _3518028_37 = primSet(co, __symbolTable[36], makeNative(co->gc, 2, clofun105, 1, 0));
Obj _3518029_37 = primSet(co, __symbolTable[35], makeNative(co->gc, 2, clofun106, 1, 0));
Obj _3518036_37 = primSet(co, __symbolTable[34], makeNative(co->gc, 3, clofun107, 1, 0));
Obj _3518043_37 = primSet(co, __symbolTable[32], makeNative(co->gc, 3, clofun108, 2, 0));
saveCont(co, clofun144, 1, R);
coraCall2(co, globalRef(co, __symbolTable[31]), __symbolTable[30].name, makeNative(co->gc, 2, clofun109, 1, 0));
return;
}
case 3:
{
Obj _3516663_37= co->res;
saveCont(co, clofun144, 2, R);
coraCall1(co, globalRef(co, __symbolTable[130]), makeCString(co->gc, "cora/lib/hash-h"));
return;
}
case 4:
{
Obj _3516662_37= co->res;
saveCont(co, clofun144, 3, R);
coraCall1(co, globalRef(co, __symbolTable[130]), makeCString(co->gc, "cora/lib/io"));
return;
}
}
}

static void clofun143(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj from = R[1];
Obj to = R[2];
Obj _3518269_37 = primGenSym(co);
Obj globals = _3518269_37;
Obj _3518270_37 = coraPrimSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 7, R);
coraCall1(co, globalRef(co, __symbolTable[28]), globals);
return;
}
case 1:
{
Obj _3518277_37= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[0]), stream);
return;
}
case 2:
{
Obj _3518276_37= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
saveCont(co, clofun143, 1, R);
coraCall3(co, globalRef(co, __symbolTable[23]), stream, bc, _3518276_37);
return;
}
case 3:
{
Obj _3518275_37= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = _3518275_37;
R[1] = bc;
R[2] = stream;
saveCont(co, clofun143, 2, R);
coraCall1(co, globalRef(co, __symbolTable[52]), globals);
return;
}
case 4:
{
Obj _3518274_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = _3518274_37;
R[1] = globals;
R[2] = bc;
saveCont(co, clofun143, 3, R);
coraCall1(co, globalRef(co, __symbolTable[1]), to);
return;
}
case 5:
{
Obj _3518273_37= co->res;
Obj _3518271_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
saveCont(co, clofun143, 4, R);
coraCall1(co, _3518271_37, _3518273_37);
return;
}
case 6:
{
Obj _3518272_37= co->res;
Obj _3518271_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3518271_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 5, R);
coraCall1(co, globalRef(co, __symbolTable[2]), _3518272_37);
return;
}
case 7:
{
Obj _3518271_37= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3518271_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 6, R);
coraCall1(co, globalRef(co, __symbolTable[5]), from);
return;
}
}
}

static void clofun142(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj file_45path = R[1];
saveCont(co, clofun142, 8, R);
coraCall1(co, globalRef(co, __symbolTable[4]), file_45path);
return;
}
case 1:
{
Obj _3518263_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[6]), sexp);
return;
}
case 2:
{
Obj _3518262_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 1, R);
coraCall1(co, globalRef(co, __symbolTable[22]), sexp);
return;
}
case 3:
{
Obj _3518265_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[6]), sexp);
return;
}
case 4:
{
Obj _3518264_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 3, R);
coraCall1(co, globalRef(co, __symbolTable[22]), sexp);
return;
}
case 5:
{
Obj _3518267_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[6]), sexp);
return;
}
case 6:
{
Obj _3518266_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 5, R);
coraCall1(co, globalRef(co, __symbolTable[22]), sexp);
return;
}
case 7:
{
Obj _3518259_37= co->res;
Obj _3516660_37 = R[1];
Obj sexp = R[2];
if (True == _3518259_37) {
Obj _3518260_37 = PRIM_CAR(sexp);
Obj _3518261_37 = PRIM_EQ(globalRef(co, __symbolTable[19]), _3518260_37);
if (True == _3518261_37) {
R[1] = sexp;
saveCont(co, clofun142, 2, R);
coraCall1(co, _3516660_37, True);
return;
} else {
R[1] = sexp;
saveCont(co, clofun142, 4, R);
coraCall1(co, _3516660_37, False);
return;
}
} else {
R[1] = sexp;
saveCont(co, clofun142, 6, R);
coraCall1(co, _3516660_37, False);
return;
}
}
case 8:
{
Obj _3518256_37= co->res;
Obj sexp = _3518256_37;
Obj _3516660_37 = makeNative(co->gc, 2, clofun141, 1, 1, sexp);
R[1] = _3516660_37;
R[2] = sexp;
saveCont(co, clofun142, 7, R);
coraCall1(co, globalRef(co, __symbolTable[65]), sexp);
return;
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516661_37 = R[1];
if (True == _3516661_37) {
Obj _3518257_37 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, _3518257_37);
return;
} else {
Obj _3518258_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
coraReturn(co, _3518258_37);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516648_37 = R[1];
Obj _3516649_37 = makeNative(co->gc, 1, clofun137, 0, 1, _3516648_37);
Obj _3518249_37 = PRIM_ISCONS(_3516648_37);
if (True == _3518249_37) {
Obj _3518250_37 = PRIM_CAR(_3516648_37);
Obj _3518251_37 = PRIM_EQ(globalRef(co, __symbolTable[18]), _3518250_37);
if (True == _3518251_37) {
Obj _3518252_37 = PRIM_CDR(_3516648_37);
Obj more = _3518252_37;
Obj _3518253_37 = makeCons(co->gc, globalRef(co, __symbolTable[18]), more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[9]), _3518253_37, makeNative(co->gc, 2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516649_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516649_37);
return;
}
}
}
}

static void clofun139(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[17]), body, Nil, Nil, makeNative(co->gc, 3, clofun138, 2, 0));
return;
}
}
}

static void clofun138(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[8]), type, code);
return;
}
}
}

static void clofun137(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516650_37 = makeNative(co->gc, 1, clofun134, 0, 1, closureRef(R[0], 0));
Obj _3518244_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518244_37) {
Obj _3518245_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518246_37 = PRIM_EQ(globalRef(co, __symbolTable[19]), _3518245_37);
if (True == _3518246_37) {
Obj _3518247_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518247_37;
Obj _3518248_37 = makeCons(co->gc, globalRef(co, __symbolTable[19]), more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[9]), _3518248_37, makeNative(co->gc, 2, clofun136, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516650_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516650_37);
return;
}
}
}
}

static void clofun136(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[17]), body, Nil, Nil, makeNative(co->gc, 3, clofun135, 2, 0));
return;
}
}
}

static void clofun135(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[8]), type, code);
return;
}
}
}

static void clofun134(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518241_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[17]), _3518241_37, Nil, Nil, makeNative(co->gc, 3, clofun133, 2, 0));
return;
}
}
}

static void clofun133(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
saveCont(co, clofun133, 1, R);
coraCall2(co, globalRef(co, __symbolTable[8]), type, code);
return;
}
case 1:
{
Obj _3518242_37= co->res;
Obj _3518243_37 = makeCons(co->gc, globalRef(co, __symbolTable[19]), _3518242_37);
coraReturn(co, _3518243_37);
return;
}
}
}

static void clofun132(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
if (True == globalRef(co, __symbolTable[7])) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[88]), type, code);
return;
} else {
coraReturn(co, code);
return;
}
}
}
}

static void clofun131(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516641_37 = R[1];
Obj _3516642_37 = R[2];
Obj _3516643_37 = makeNative(co->gc, 2, clofun130, 0, 2, _3516641_37, _3516642_37);
Obj _3518227_37 = PRIM_ISCONS(_3516641_37);
if (True == _3518227_37) {
Obj _3518228_37 = PRIM_CAR(_3516641_37);
Obj _3518229_37 = PRIM_EQ(globalRef(co, __symbolTable[18]), _3518228_37);
if (True == _3518229_37) {
Obj _3518230_37 = PRIM_CDR(_3516641_37);
Obj _3518231_37 = PRIM_ISCONS(_3518230_37);
if (True == _3518231_37) {
Obj _3518232_37 = PRIM_CDR(_3516641_37);
Obj _3518233_37 = PRIM_CAR(_3518232_37);
Obj name = _3518233_37;
Obj _3518234_37 = PRIM_CDR(_3516641_37);
Obj _3518235_37 = PRIM_CDR(_3518234_37);
Obj more = _3518235_37;
R[1] = name;
saveCont(co, clofun131, 1, R);
coraCall2(co, globalRef(co, __symbolTable[9]), more, _3516642_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516643_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516643_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516643_37);
return;
}
}
case 1:
{
Obj _3518236_37= co->res;
Obj name = R[1];
Obj _3518237_37 = makeCons(co->gc, name, _3518236_37);
Obj _3518238_37 = makeCons(co->gc, globalRef(co, __symbolTable[18]), _3518237_37);
coraReturn(co, _3518238_37);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516644_37 = makeNative(co->gc, 2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518206_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518206_37) {
Obj _3518207_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518208_37 = PRIM_ISCONS(_3518207_37);
if (True == _3518208_37) {
Obj _3518209_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518210_37 = PRIM_CAR(_3518209_37);
Obj _3518211_37 = PRIM_EQ(globalRef(co, __symbolTable[21]), _3518210_37);
if (True == _3518211_37) {
Obj _3518212_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518213_37 = PRIM_CDR(_3518212_37);
Obj _3518214_37 = PRIM_ISCONS(_3518213_37);
if (True == _3518214_37) {
Obj _3518215_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518216_37 = PRIM_CDR(_3518215_37);
Obj _3518217_37 = PRIM_CAR(_3518216_37);
Obj pkg = _3518217_37;
Obj _3518218_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518219_37 = PRIM_CDR(_3518218_37);
Obj _3518220_37 = PRIM_CDR(_3518219_37);
Obj _3518221_37 = PRIM_EQ(Nil, _3518220_37);
if (True == _3518221_37) {
Obj _3518222_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518222_37;
Obj _3518223_37 = makeCons(co->gc, pkg, Nil);
Obj _3518224_37 = makeCons(co->gc, globalRef(co, __symbolTable[21]), _3518223_37);
R[1] = _3518224_37;
saveCont(co, clofun130, 1, R);
coraCall2(co, globalRef(co, __symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516644_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516644_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516644_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516644_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516644_37);
return;
}
}
case 1:
{
Obj _3518225_37= co->res;
Obj _3518224_37 = R[1];
Obj _3518226_37 = makeCons(co->gc, _3518224_37, _3518225_37);
coraReturn(co, _3518226_37);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516645_37 = makeNative(co->gc, 1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518194_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518194_37) {
Obj _3518195_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518196_37 = PRIM_ISCONS(_3518195_37);
if (True == _3518196_37) {
Obj _3518197_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518198_37 = PRIM_CAR(_3518197_37);
Obj _3518199_37 = PRIM_EQ(globalRef(co, __symbolTable[20]), _3518198_37);
if (True == _3518199_37) {
Obj _3518200_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518201_37 = PRIM_CDR(_3518200_37);
Obj symbols = _3518201_37;
Obj _3518202_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518202_37;
Obj _3518203_37 = makeCons(co->gc, globalRef(co, __symbolTable[20]), symbols);
R[1] = _3518203_37;
saveCont(co, clofun129, 1, R);
coraCall2(co, globalRef(co, __symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516645_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516645_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516645_37);
return;
}
}
case 1:
{
Obj _3518204_37= co->res;
Obj _3518203_37 = R[1];
Obj _3518205_37 = makeCons(co->gc, _3518203_37, _3518204_37);
coraReturn(co, _3518205_37);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516646_37 = makeNative(co->gc, 1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3518188_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518188_37) {
Obj _3518189_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518190_37 = PRIM_EQ(globalRef(co, __symbolTable[19]), _3518189_37);
if (True == _3518190_37) {
Obj _3518191_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518191_37;
saveCont(co, clofun128, 1, R);
coraCall2(co, globalRef(co, __symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516646_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516646_37);
return;
}
}
case 1:
{
Obj _3518192_37= co->res;
Obj _3518193_37 = makeCons(co->gc, globalRef(co, __symbolTable[19]), _3518192_37);
coraReturn(co, _3518193_37);
return;
}
}
}

static void clofun127(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
}

static void clofun126(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516633_37 = R[1];
Obj _3516634_37 = R[2];
Obj _3516635_37 = R[3];
Obj _3516636_37 = R[4];
Obj _3518149_37 = PRIM_EQ(Nil, _3516633_37);
if (True == _3518149_37) {
R[1] = _3516635_37;
R[2] = _3516636_37;
saveCont(co, clofun126, 2, R);
coraCall1(co, globalRef(co, __symbolTable[67]), _3516634_37);
return;
} else {
Obj _3516638_37 = makeNative(co->gc, 1, clofun125, 0, 4, _3516633_37, _3516634_37, _3516635_37, _3516636_37);
Obj _3518176_37 = PRIM_ISCONS(_3516633_37);
if (True == _3518176_37) {
Obj _3518177_37 = PRIM_CAR(_3516633_37);
Obj _3518178_37 = PRIM_ISCONS(_3518177_37);
if (True == _3518178_37) {
Obj _3518179_37 = PRIM_CAR(_3516633_37);
Obj _3518180_37 = PRIM_CAR(_3518179_37);
Obj _3518181_37 = PRIM_EQ(globalRef(co, __symbolTable[10]), _3518180_37);
if (True == _3518181_37) {
Obj _3518182_37 = PRIM_CAR(_3516633_37);
Obj _3518183_37 = PRIM_CDR(_3518182_37);
Obj exp = _3518183_37;
Obj _3518184_37 = PRIM_CDR(_3516633_37);
Obj more = _3518184_37;
Obj _3518185_37 = makeCons(co->gc, globalRef(co, __symbolTable[19]), exp);
Obj _3518186_37 = makeCons(co->gc, _3518185_37, _3516634_37);
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[17]), more, _3518186_37, _3516635_37, _3516636_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516638_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516638_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516638_37);
return;
}
}
}
case 1:
{
Obj _3518151_37= co->res;
Obj _3516636_37 = R[1];
Obj _3518150_37 = R[2];
co->ctx.sp = R;
coraCall2(co, _3516636_37, _3518150_37, _3518151_37);
return;
}
case 2:
{
Obj _3518150_37= co->res;
Obj _3516635_37 = R[1];
Obj _3516636_37 = R[2];
R[1] = _3516636_37;
R[2] = _3518150_37;
saveCont(co, clofun126, 1, R);
coraCall1(co, globalRef(co, __symbolTable[67]), _3516635_37);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516639_37 = makeNative(co->gc, 1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3518165_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518165_37) {
Obj _3518166_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518167_37 = PRIM_ISCONS(_3518166_37);
if (True == _3518167_37) {
Obj _3518168_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518169_37 = PRIM_CAR(_3518168_37);
Obj _3518170_37 = PRIM_EQ(globalRef(co, __symbolTable[12]), _3518169_37);
if (True == _3518170_37) {
Obj _3518171_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518172_37 = PRIM_CDR(_3518171_37);
Obj exp = _3518172_37;
Obj _3518173_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518173_37;
Obj _3518174_37 = makeCons(co->gc, globalRef(co, __symbolTable[11]), exp);
Obj _3518175_37 = makeCons(co->gc, _3518174_37, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[17]), more, _3518175_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516639_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516639_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516639_37);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518152_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518152_37) {
Obj _3518153_37 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = _3518153_37;
Obj _3518154_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518154_37;
Obj _3518155_37 = makeCons(co->gc, exp, Nil);
Obj _3518156_37 = makeCons(co->gc, globalRef(co, __symbolTable[14]), _3518155_37);
Obj _3518157_37 = makeCons(co->gc, _3518156_37, Nil);
Obj _3518158_37 = makeCons(co->gc, globalRef(co, __symbolTable[15]), _3518157_37);
Obj _3518159_37 = makeCons(co->gc, globalRef(co, __symbolTable[13]), Nil);
Obj _3518160_37 = makeCons(co->gc, _3518159_37, Nil);
Obj _3518161_37 = makeCons(co->gc, _3518158_37, _3518160_37);
Obj _3518162_37 = makeCons(co->gc, globalRef(co, __symbolTable[16]), _3518161_37);
Obj _3518163_37 = makeCons(co->gc, _3518162_37, closureRef(R[0], 1));
Obj _3518164_37 = makeCons(co->gc, exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[17]), more, _3518163_37, _3518164_37, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516627_37 = R[1];
Obj _3516628_37 = makeNative(co->gc, 1, clofun122, 0, 1, _3516627_37);
Obj _3518139_37 = PRIM_ISCONS(_3516627_37);
if (True == _3518139_37) {
Obj _3518140_37 = PRIM_CAR(_3516627_37);
Obj _3518141_37 = PRIM_EQ(globalRef(co, __symbolTable[18]), _3518140_37);
if (True == _3518141_37) {
Obj _3518142_37 = PRIM_CDR(_3516627_37);
Obj _3518143_37 = PRIM_ISCONS(_3518142_37);
if (True == _3518143_37) {
Obj _3518144_37 = PRIM_CDR(_3516627_37);
Obj _3518145_37 = PRIM_CAR(_3518144_37);
Obj _3518146_37 = PRIM_CDR(_3516627_37);
Obj _3518147_37 = PRIM_CDR(_3518146_37);
Obj remain = _3518147_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516628_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516628_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516628_37);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516629_37 = makeNative(co->gc, 1, clofun121, 0, 1, closureRef(R[0], 0));
Obj _3518135_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518135_37) {
Obj _3518136_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518137_37 = PRIM_EQ(globalRef(co, __symbolTable[19]), _3518136_37);
if (True == _3518137_37) {
Obj _3518138_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518138_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516629_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516629_37);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516630_37 = makeNative(co->gc, 2, clofun120, 0, 1, closureRef(R[0], 0));
Obj _3518126_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518126_37) {
Obj _3518127_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518128_37 = PRIM_ISCONS(_3518127_37);
if (True == _3518128_37) {
Obj _3518129_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518130_37 = PRIM_CAR(_3518129_37);
Obj _3518131_37 = PRIM_EQ(globalRef(co, __symbolTable[20]), _3518130_37);
if (True == _3518131_37) {
Obj _3518132_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518133_37 = PRIM_CDR(_3518132_37);
Obj _3518134_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518134_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516630_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516630_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516630_37);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516631_37 = makeNative(co->gc, 1, clofun119, 0, 0);
Obj _3518108_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518108_37) {
Obj _3518109_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518110_37 = PRIM_ISCONS(_3518109_37);
if (True == _3518110_37) {
Obj _3518111_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518112_37 = PRIM_CAR(_3518111_37);
Obj _3518113_37 = PRIM_EQ(globalRef(co, __symbolTable[21]), _3518112_37);
if (True == _3518113_37) {
Obj _3518114_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518115_37 = PRIM_CDR(_3518114_37);
Obj _3518116_37 = PRIM_ISCONS(_3518115_37);
if (True == _3518116_37) {
Obj _3518117_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518118_37 = PRIM_CDR(_3518117_37);
Obj _3518119_37 = PRIM_CAR(_3518118_37);
Obj pkg = _3518119_37;
Obj _3518120_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518121_37 = PRIM_CDR(_3518120_37);
Obj _3518122_37 = PRIM_CDR(_3518121_37);
Obj _3518123_37 = PRIM_EQ(Nil, _3518122_37);
if (True == _3518123_37) {
Obj _3518124_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518124_37;
R[1] = remain;
saveCont(co, clofun120, 1, R);
coraCall1(co, globalRef(co, __symbolTable[130]), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516631_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516631_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516631_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516631_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516631_37);
return;
}
}
case 1:
{
Obj _3518125_37= co->res;
Obj remain = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[22]), remain);
return;
}
}
}

static void clofun119(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
coraReturn(co, Nil);
return;
}
}
}

static void clofun118(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj bc = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "#include \"types.h\"\n"));
return;
}
case 1:
{
Obj _3518106_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[27]), makeNative(co->gc, 2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj _3518105_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 1, R);
coraCall3(co, globalRef(co, __symbolTable[25]), to, globals, _3518105_37);
return;
}
case 3:
{
Obj _3518104_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 2, R);
coraCall1(co, globalRef(co, __symbolTable[64]), bc);
return;
}
case 4:
{
Obj _3518103_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "\n\n"));
return;
}
case 5:
{
Obj _3518100_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 4, R);
coraCall2(co, globalRef(co, __symbolTable[27]), makeNative(co->gc, 2, clofun116, 1, 1, to), bc);
return;
}
case 6:
{
Obj _3518099_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "#include \"runtime.h\"\n\n"));
return;
}
}
}

static void clofun117(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[26]), closureRef(R[0], 0), group, closureRef(R[0], 1));
return;
}
}
}

static void clofun116(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
Obj _3518101_37 = PRIM_CAR(group);
saveCont(co, clofun116, 1, R);
coraCall2(co, globalRef(co, __symbolTable[39]), closureRef(R[0], 0), _3518101_37);
return;
}
case 1:
{
Obj _3518102_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, ";\n"));
return;
}
}
}

static void clofun115(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj globals = R[2];
Obj label = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 10, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "static __thread Obj* __symbolTable;\n\n"));
return;
}
case 1:
{
Obj _3518097_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj _3518096_37= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun115, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj _3518095_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
saveCont(co, clofun115, 2, R);
coraCall2(co, globalRef(co, __symbolTable[42]), to, label);
return;
}
case 4:
{
Obj _3518094_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "co->ctx.fn = "));
return;
}
case 5:
{
Obj _3518086_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 4, R);
coraCall3(co, globalRef(co, __symbolTable[126]), makeNative(co->gc, 3, clofun114, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 6:
{
Obj _3518085_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, ");\n"));
return;
}
case 7:
{
Obj _3518084_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 6, R);
coraCall2(co, globalRef(co, __symbolTable[47]), to, _3518084_37);
return;
}
case 8:
{
Obj _3518083_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 7, R);
coraCall1(co, globalRef(co, __symbolTable[91]), globals);
return;
}
case 9:
{
Obj _3518082_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 8, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
return;
}
case 10:
{
Obj _3518081_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 9, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "void entry(struct Cora *co, int label, Obj *R) {\n"));
return;
}
}
}

static void clofun114(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj sym = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, "__symbolTable["));
return;
}
case 1:
{
Obj _3518092_37= co->res;
Obj acc = R[1];
Obj _3518093_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518093_37);
return;
}
case 2:
{
Obj _3518091_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun114, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, "\");\n"));
return;
}
case 3:
{
Obj _3518090_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun114, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 0), _3518090_37);
return;
}
case 4:
{
Obj _3518089_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun114, 3, R);
coraCall1(co, globalRef(co, __symbolTable[24]), sym);
return;
}
case 5:
{
Obj _3518088_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 4, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, "] = intern(\""));
return;
}
case 6:
{
Obj _3518087_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 5, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 0), acc);
return;
}
}
}

static void clofun113(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj group = R[2];
Obj globals = R[3];
Obj _3518059_37 = PRIM_CAR(group);
Obj label = _3518059_37;
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun113, 13, R);
coraCall1(co, globalRef(co, __symbolTable[99]), group);
return;
}
case 1:
{
Obj _3518079_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "}\n\n"));
return;
}
case 2:
{
Obj _3518078_37= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun113, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj _3518077_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
saveCont(co, clofun113, 2, R);
coraCall3(co, globalRef(co, __symbolTable[126]), makeNative(co->gc, 3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), _3518077_37);
return;
}
case 4:
{
Obj _3518069_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 3, R);
coraCall1(co, globalRef(co, __symbolTable[59]), lam);
return;
}
case 5:
{
Obj _3518068_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 4, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "}\n"));
return;
}
case 6:
{
Obj _3518067_37= co->res;
Obj params = R[1];
Obj first_45stmt = R[2];
Obj globals = R[3];
Obj label = R[4];
Obj lam = R[5];
Obj to = R[6];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 5, R);
Obj __args[5] = {globals, label, params, to, first_45stmt};
coraCall(co, globalRef(co, __symbolTable[46]), 5, __args);
return;
}
case 7:
{
Obj _3518066_37= co->res;
Obj params = R[1];
Obj first_45stmt = R[2];
Obj globals = R[3];
Obj label = R[4];
Obj lam = R[5];
Obj to = R[6];
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 6, R);
Obj __args[5] = {globals, label, Nil, to, params};
coraCall(co, globalRef(co, __symbolTable[45]), 5, __args);
return;
}
case 8:
{
Obj _3518065_37= co->res;
Obj params = R[1];
Obj first_45stmt = R[2];
Obj globals = R[3];
Obj label = R[4];
Obj lam = R[5];
Obj to = R[6];
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 7, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, "case 0:\n{\n"));
return;
}
case 9:
{
Obj _3518064_37= co->res;
Obj params = R[1];
Obj first_45stmt = R[2];
Obj globals = R[3];
Obj label = R[4];
Obj lam = R[5];
Obj to = R[6];
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 8, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, " switch (label) {\n"));
return;
}
case 10:
{
Obj _3518063_37= co->res;
Obj params = R[1];
Obj first_45stmt = R[2];
Obj globals = R[3];
Obj label = R[4];
Obj lam = R[5];
Obj to = R[6];
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 9, R);
coraCall2(co, globalRef(co, __symbolTable[48]), to, makeCString(co->gc, " {\n"));
return;
}
case 11:
{
Obj _3518062_37= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = _3518062_37;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 10, R);
coraCall2(co, globalRef(co, __symbolTable[39]), to, label);
return;
}
case 12:
{
Obj _3518061_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = _3518061_37;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
saveCont(co, clofun113, 11, R);
coraCall1(co, globalRef(co, __symbolTable[101]), lam);
return;
}
case 13:
{
Obj _3518060_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = _3518060_37;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 12, R);
coraCall1(co, globalRef(co, __symbolTable[99]), lam);
return;
}
}
}

static void clofun112(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj cont = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "case "));
return;
}
case 1:
{
Obj _3518075_37= co->res;
Obj acc = R[1];
Obj _3518076_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518076_37);
return;
}
case 2:
{
Obj _3518074_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun112, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj _3518073_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun112, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), _3518073_37, closureRef(R[0], 3), cont};
coraCall(co, globalRef(co, __symbolTable[40]), 5, __args);
return;
}
case 4:
{
Obj _3518072_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 3, R);
coraCall1(co, globalRef(co, __symbolTable[99]), closureRef(R[0], 2));
return;
}
case 5:
{
Obj _3518071_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 4, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ":\n{\n"));
return;
}
case 6:
{
Obj _3518070_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 5, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun111(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516623_37 = R[1];
Obj _3516624_37 = R[2];
Obj _3518053_37 = PRIM_EQ(Nil, _3516624_37);
if (True == _3518053_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518054_37 = PRIM_ISCONS(_3516624_37);
if (True == _3518054_37) {
Obj _3518055_37 = PRIM_CAR(_3516624_37);
Obj x = _3518055_37;
Obj _3518056_37 = PRIM_CDR(_3516624_37);
Obj y = _3518056_37;
R[1] = _3516623_37;
R[2] = y;
saveCont(co, clofun111, 1, R);
coraCall1(co, _3516623_37, x);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3518057_37= co->res;
Obj _3516623_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[27]), _3516623_37, y);
return;
}
}
}

static void clofun110(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun110, 5, R);
coraCall1(co, globalRef(co, __symbolTable[38]), globals);
return;
}
case 1:
{
Obj _3518051_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[34]), _3518051_37);
return;
}
case 2:
{
Obj _3518050_37= co->res;
saveCont(co, clofun110, 1, R);
coraCall1(co, globalRef(co, __symbolTable[35]), _3518050_37);
return;
}
case 3:
{
Obj _3518049_37= co->res;
saveCont(co, clofun110, 2, R);
coraCall1(co, globalRef(co, __symbolTable[36]), _3518049_37);
return;
}
case 4:
{
Obj _3518048_37= co->res;
saveCont(co, clofun110, 3, R);
coraCall1(co, globalRef(co, __symbolTable[37]), _3518048_37);
return;
}
case 5:
{
Obj _3518047_37= co->res;
Obj exp = R[1];
saveCont(co, clofun110, 4, R);
coraCall1(co, _3518047_37, exp);
return;
}
}
}

static void clofun109(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun109, 2, R);
coraCall1(co, globalRef(co, __symbolTable[99]), exp);
return;
}
case 1:
{
Obj _3518045_37= co->res;
Obj obj = R[1];
Obj fns = _3518045_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[32]), obj, fns);
return;
}
case 2:
{
Obj _3518044_37= co->res;
Obj exp = R[1];
Obj obj = _3518044_37;
R[1] = obj;
saveCont(co, clofun109, 1, R);
coraCall1(co, globalRef(co, __symbolTable[29]), exp);
return;
}
}
}

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516619_37 = R[1];
Obj _3516620_37 = R[2];
Obj _3518037_37 = PRIM_EQ(Nil, _3516620_37);
if (True == _3518037_37) {
coraReturn(co, _3516619_37);
return;
} else {
Obj _3518038_37 = PRIM_ISCONS(_3516620_37);
if (True == _3518038_37) {
Obj _3518039_37 = PRIM_CAR(_3516620_37);
Obj hd = _3518039_37;
Obj _3518040_37 = PRIM_CDR(_3516620_37);
Obj more = _3518040_37;
Obj _3518041_37 = makeCons(co->gc, _3516619_37, Nil);
Obj _3518042_37 = makeCons(co->gc, hd, _3518041_37);
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[32]), _3518042_37, more);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}
}

static void clofun107(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun107, 6, R);
coraCall1(co, globalRef(co, __symbolTable[33]), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj _3518035_37= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj _3518034_37= co->res;
Obj v = R[1];
Obj e2 = _3518034_37;
R[1] = v;
saveCont(co, clofun107, 1, R);
coraCall2(co, globalRef(co, __symbolTable[54]), v, e2);
return;
}
case 3:
{
Obj _3518033_37= co->res;
Obj v = R[1];
Obj e1 = _3518033_37;
R[1] = v;
saveCont(co, clofun107, 2, R);
coraCall2(co, globalRef(co, __symbolTable[58]), Nil, e1);
return;
}
case 4:
{
Obj _3518032_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
saveCont(co, clofun107, 3, R);
coraCall2(co, globalRef(co, __symbolTable[56]), v, exp);
return;
}
case 5:
{
Obj _3518031_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
saveCont(co, clofun107, 4, R);
coraCall3(co, globalRef(co, __symbolTable[53]), v, MAKE_NUMBER(1), Nil);
return;
}
case 6:
{
Obj _3518030_37= co->res;
Obj exp = R[1];
Obj v = _3518030_37;
R[1] = exp;
R[2] = v;
saveCont(co, clofun107, 5, R);
coraCall3(co, globalRef(co, __symbolTable[53]), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
return;
}
}
}

static void clofun106(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[63]), Nil, exp);
return;
}
}
}

static void clofun105(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[69]), exp, globalRef(co, __symbolTable[70]));
return;
}
}
}

static void clofun104(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[71]), Nil, exp);
return;
}
}
}

static void clofun103(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj exp = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[97]), Nil, globals, exp);
return;
}
}
}

static void clofun102(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj w = R[1];
Obj label = R[2];
R[1] = label;
R[2] = w;
saveCont(co, clofun102, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), w, makeCString(co->gc, "static void "));
return;
}
case 1:
{
Obj _3518024_37= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), w, makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3518023_37= co->res;
Obj w = R[1];
R[1] = w;
saveCont(co, clofun102, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), w, makeCString(co->gc, "(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj _3518022_37= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
saveCont(co, clofun102, 2, R);
coraCall2(co, globalRef(co, __symbolTable[42]), w, label);
return;
}
}
}

static void clofun101(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj w = R[1];
Obj label = R[2];
R[1] = w;
R[2] = label;
saveCont(co, clofun101, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), w, makeCString(co->gc, "clofun"));
return;
}
case 1:
{
Obj _3518020_37= co->res;
Obj w = R[1];
Obj label = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[47]), w, label);
return;
}
}
}

static void clofun100(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516613_37 = R[1];
Obj _3516614_37 = R[2];
Obj _3516615_37 = R[3];
Obj _3516616_37 = R[4];
Obj _3516617_37 = R[5];
Obj _3516618_37 = makeNative(co->gc, 1, clofun99, 0, 0);
Obj _3517998_37 = PRIM_ISCONS(_3516617_37);
if (True == _3517998_37) {
Obj _3517999_37 = PRIM_CAR(_3516617_37);
Obj _3518000_37 = PRIM_EQ(globalRef(co, __symbolTable[62]), _3517999_37);
if (True == _3518000_37) {
Obj _3518001_37 = PRIM_CDR(_3516617_37);
Obj _3518002_37 = PRIM_ISCONS(_3518001_37);
if (True == _3518002_37) {
Obj _3518003_37 = PRIM_CDR(_3516617_37);
Obj _3518004_37 = PRIM_CAR(_3518003_37);
Obj var = _3518004_37;
Obj _3518005_37 = PRIM_CDR(_3516617_37);
Obj _3518006_37 = PRIM_CDR(_3518005_37);
Obj _3518007_37 = PRIM_ISCONS(_3518006_37);
if (True == _3518007_37) {
Obj _3518008_37 = PRIM_CDR(_3516617_37);
Obj _3518009_37 = PRIM_CDR(_3518008_37);
Obj _3518010_37 = PRIM_CAR(_3518009_37);
Obj body = _3518010_37;
Obj _3518011_37 = PRIM_CDR(_3516617_37);
Obj _3518012_37 = PRIM_CDR(_3518011_37);
Obj _3518013_37 = PRIM_CDR(_3518012_37);
Obj fvs = _3518013_37;
R[1] = var;
R[2] = fvs;
R[3] = _3516613_37;
R[4] = _3516614_37;
R[5] = _3516615_37;
R[6] = _3516616_37;
R[7] = body;
saveCont(co, clofun100, 4, R);
coraCall2(co, globalRef(co, __symbolTable[48]), _3516616_37, makeCString(co->gc, "Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516618_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516618_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516618_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516618_37);
return;
}
}
case 1:
{
Obj _3518018_37= co->res;
Obj _3516613_37 = R[1];
Obj _3516614_37 = R[2];
Obj _3516615_37 = R[3];
Obj _3516616_37 = R[4];
Obj body = R[5];
co->ctx.sp = R;
Obj __args[5] = {_3516613_37, _3516614_37, _3516615_37, _3516616_37, body};
coraCall(co, globalRef(co, __symbolTable[46]), 5, __args);
return;
}
case 2:
{
Obj _3518017_37= co->res;
Obj fvs = R[1];
Obj _3516613_37 = R[2];
Obj _3516614_37 = R[3];
Obj _3516615_37 = R[4];
Obj _3516616_37 = R[5];
Obj body = R[6];
R[1] = _3516613_37;
R[2] = _3516614_37;
R[3] = _3516615_37;
R[4] = _3516616_37;
R[5] = body;
saveCont(co, clofun100, 1, R);
Obj __args[5] = {_3516613_37, _3516614_37, _3516615_37, _3516616_37, fvs};
coraCall(co, globalRef(co, __symbolTable[45]), 5, __args);
return;
}
case 3:
{
Obj _3518016_37= co->res;
Obj fvs = R[1];
Obj _3516613_37 = R[2];
Obj _3516614_37 = R[3];
Obj _3516615_37 = R[4];
Obj _3516616_37 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = _3516613_37;
R[3] = _3516614_37;
R[4] = _3516615_37;
R[5] = _3516616_37;
R[6] = body;
saveCont(co, clofun100, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), _3516616_37, makeCString(co->gc, "= co->res;\n"));
return;
}
case 4:
{
Obj _3518014_37= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj _3516613_37 = R[3];
Obj _3516614_37 = R[4];
Obj _3516615_37 = R[5];
Obj _3516616_37 = R[6];
Obj body = R[7];
Obj _3518015_37 = PRIM_CAR(var);
R[1] = fvs;
R[2] = _3516613_37;
R[3] = _3516614_37;
R[4] = _3516615_37;
R[5] = _3516616_37;
R[6] = body;
saveCont(co, clofun100, 3, R);
coraCall2(co, globalRef(co, __symbolTable[44]), _3516616_37, _3518015_37);
return;
}
}
}

static void clofun99(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun98(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj l = R[5];
Obj _3517984_37 = primGenSym(co);
Obj generate_45inst_45list_45h = _3517984_37;
Obj _3517995_37 = coraPrimSet(co, generate_45inst_45list_45h, makeNative(co->gc, 2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
saveCont(co, clofun98, 1, R);
coraCall1(co, globalRef(co, __symbolTable[52]), generate_45inst_45list_45h);
return;
}
case 1:
{
Obj _3517996_37= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, _3517996_37, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517985_37 = PRIM_EQ(Nil, x);
if (True == _3517985_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517986_37 = PRIM_ISCONS(x);
if (True == _3517986_37) {
Obj _3517987_37 = PRIM_CAR(x);
Obj a = _3517987_37;
Obj _3517988_37 = PRIM_CDR(x);
Obj b = _3517988_37;
R[1] = b;
saveCont(co, clofun97, 5, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), a};
coraCall(co, globalRef(co, __symbolTable[46]), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3517993_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3517993_37, b);
return;
}
case 2:
{
Obj _3517992_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun97, 1, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517994_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3517994_37, b);
return;
}
case 4:
{
Obj _3517990_37= co->res;
Obj b = R[1];
Obj _3517991_37 = primNot(_3517990_37);
if (True == _3517991_37) {
R[1] = b;
saveCont(co, clofun97, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ", "));
return;
} else {
Nil;
R[1] = b;
saveCont(co, clofun97, 3, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 4));
return;
}
}
case 5:
{
Obj _3517989_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun97, 4, R);
coraCall1(co, globalRef(co, __symbolTable[103]), b);
return;
}
}
}

static void clofun96(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env1 = R[3];
Obj w = R[4];
Obj x1 = R[5];
Obj _3517697_37 = primGenSym(co);
Obj generate_45inst_45h = _3517697_37;
Obj _3517981_37 = coraPrimSet(co, generate_45inst_45h, makeNative(co->gc, 3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
saveCont(co, clofun96, 1, R);
coraCall1(co, globalRef(co, __symbolTable[52]), generate_45inst_45h);
return;
}
case 1:
{
Obj _3517982_37= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, _3517982_37, x1, env1);
return;
}
}
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x2 = R[1];
Obj env = R[2];
Obj _3517698_37 = primIsSymbol(x2);
if (True == _3517698_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj _3516599_37 = makeNative(co->gc, 2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj _3517968_37 = PRIM_ISCONS(x2);
if (True == _3517968_37) {
Obj _3517969_37 = PRIM_CAR(x2);
Obj _3517970_37 = PRIM_EQ(globalRef(co, __symbolTable[93]), _3517969_37);
if (True == _3517970_37) {
Obj _3517971_37 = PRIM_CDR(x2);
Obj _3517972_37 = PRIM_ISCONS(_3517971_37);
if (True == _3517972_37) {
Obj _3517973_37 = PRIM_CDR(x2);
Obj _3517974_37 = PRIM_CAR(_3517973_37);
Obj x = _3517974_37;
Obj _3517975_37 = PRIM_CDR(x2);
Obj _3517976_37 = PRIM_CDR(_3517975_37);
Obj _3517977_37 = PRIM_EQ(Nil, _3517976_37);
if (True == _3517977_37) {
R[1] = x;
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "globalRef(co, __symbolTable["));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516599_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516599_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516599_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516599_37);
return;
}
}
}
case 1:
{
Obj _3517980_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "])"));
return;
}
case 2:
{
Obj _3517979_37= co->res;
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 3), _3517979_37);
return;
}
case 3:
{
Obj _3517978_37= co->res;
Obj x = R[1];
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, __symbolTable[50]), x, closureRef(R[0], 2));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516600_37 = makeNative(co->gc, 2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj _3517956_37 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == _3517956_37) {
Obj _3517957_37 = PRIM_CAR(closureRef(R[0], 4));
Obj _3517958_37 = PRIM_EQ(globalRef(co, __symbolTable[77]), _3517957_37);
if (True == _3517958_37) {
Obj _3517959_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3517960_37 = PRIM_ISCONS(_3517959_37);
if (True == _3517960_37) {
Obj _3517961_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3517962_37 = PRIM_CAR(_3517961_37);
Obj idx = _3517962_37;
Obj _3517963_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3517964_37 = PRIM_CDR(_3517963_37);
Obj _3517965_37 = PRIM_EQ(Nil, _3517964_37);
if (True == _3517965_37) {
R[1] = idx;
saveCont(co, clofun94, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "closureRef(R[0], "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516600_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516600_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516600_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516600_37);
return;
}
}
case 1:
{
Obj _3517967_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3517966_37= co->res;
Obj idx = R[1];
saveCont(co, clofun94, 1, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), idx);
return;
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516601_37 = makeNative(co->gc, 4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517932_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3517932_37) {
Obj _3517933_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3517934_37 = PRIM_EQ(globalRef(co, __symbolTable[96]), _3517933_37);
if (True == _3517934_37) {
Obj _3517935_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517936_37 = PRIM_ISCONS(_3517935_37);
if (True == _3517936_37) {
Obj _3517937_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517938_37 = PRIM_CAR(_3517937_37);
Obj x = _3517938_37;
Obj _3517939_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517940_37 = PRIM_CDR(_3517939_37);
Obj _3517941_37 = PRIM_EQ(Nil, _3517940_37);
if (True == _3517941_37) {
Obj _3517942_37 = primIsSymbol(x);
if (True == _3517942_37) {
R[1] = x;
saveCont(co, clofun93, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "__symbolTable["));
return;
} else {
R[1] = x;
saveCont(co, clofun93, 9, R);
coraCall1(co, globalRef(co, __symbolTable[83]), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516601_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516601_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516601_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516601_37);
return;
}
}
case 1:
{
Obj _3517945_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "]"));
return;
}
case 2:
{
Obj _3517944_37= co->res;
saveCont(co, clofun93, 1, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), _3517944_37);
return;
}
case 3:
{
Obj _3517943_37= co->res;
Obj x = R[1];
saveCont(co, clofun93, 2, R);
coraCall2(co, globalRef(co, __symbolTable[50]), x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3517948_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 5:
{
Obj _3517947_37= co->res;
Obj x = R[1];
saveCont(co, clofun93, 4, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj _3517952_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "\")"));
return;
}
case 7:
{
Obj _3517951_37= co->res;
saveCont(co, clofun93, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), _3517951_37);
return;
}
case 8:
{
Obj _3517950_37= co->res;
Obj x = R[1];
saveCont(co, clofun93, 7, R);
coraCall1(co, globalRef(co, __symbolTable[41]), x);
return;
}
case 9:
{
Obj _3517946_37= co->res;
Obj x = R[1];
if (True == _3517946_37) {
R[1] = x;
saveCont(co, clofun93, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "MAKE_NUMBER("));
return;
} else {
Obj _3517949_37 = primIsString(x);
if (True == _3517949_37) {
R[1] = x;
saveCont(co, clofun93, 8, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "makeCString(co->gc, \""));
return;
} else {
Obj _3517953_37 = PRIM_EQ(x, Nil);
if (True == _3517953_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "Nil"));
return;
} else {
Obj _3517954_37 = PRIM_EQ(x, True);
if (True == _3517954_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "True"));
return;
} else {
Obj _3517955_37 = PRIM_EQ(x, False);
if (True == _3517955_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "False"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no cond match"));
return;
}
}
}
}
}
}
}
}

static void clofun92(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516602_37 = makeNative(co->gc, 3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3517897_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517897_37) {
Obj _3517898_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517899_37 = PRIM_EQ(globalRef(co, __symbolTable[86]), _3517898_37);
if (True == _3517899_37) {
Obj _3517900_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517901_37 = PRIM_ISCONS(_3517900_37);
if (True == _3517901_37) {
Obj _3517902_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517903_37 = PRIM_CAR(_3517902_37);
Obj a = _3517903_37;
Obj _3517904_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517905_37 = PRIM_CDR(_3517904_37);
Obj _3517906_37 = PRIM_ISCONS(_3517905_37);
if (True == _3517906_37) {
Obj _3517907_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517908_37 = PRIM_CDR(_3517907_37);
Obj _3517909_37 = PRIM_CAR(_3517908_37);
Obj b = _3517909_37;
Obj _3517910_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517911_37 = PRIM_CDR(_3517910_37);
Obj _3517912_37 = PRIM_CDR(_3517911_37);
Obj _3517913_37 = PRIM_ISCONS(_3517912_37);
if (True == _3517913_37) {
Obj _3517914_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517915_37 = PRIM_CDR(_3517914_37);
Obj _3517916_37 = PRIM_CDR(_3517915_37);
Obj _3517917_37 = PRIM_CAR(_3517916_37);
Obj c = _3517917_37;
Obj _3517918_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517919_37 = PRIM_CDR(_3517918_37);
Obj _3517920_37 = PRIM_CDR(_3517919_37);
Obj _3517921_37 = PRIM_CDR(_3517920_37);
Obj _3517922_37 = PRIM_EQ(Nil, _3517921_37);
if (True == _3517922_37) {
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 8, R);
coraCall2(co, globalRef(co, __symbolTable[124]), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516602_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516602_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516602_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516602_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516602_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516602_37);
return;
}
}
case 1:
{
Obj _3517930_37= co->res;
Obj a = R[1];
Obj c = R[2];
Obj _3517931_37 = makeCons(co->gc, a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, _3517930_37, c, _3517931_37);
return;
}
case 2:
{
Obj _3517929_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 1, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517928_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj _3517927_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 3, R);
coraCall2(co, _3517927_37, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj _3517926_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 4, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3517925_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, " = "));
return;
}
case 7:
{
Obj _3517924_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 6, R);
coraCall2(co, globalRef(co, __symbolTable[44]), closureRef(R[0], 3), a);
return;
}
case 8:
{
Obj _3517923_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 7, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516603_37 = makeNative(co->gc, 4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517867_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517867_37) {
Obj _3517868_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517869_37 = PRIM_ISCONS(_3517868_37);
if (True == _3517869_37) {
Obj _3517870_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517871_37 = PRIM_CAR(_3517870_37);
Obj _3517872_37 = PRIM_EQ(globalRef(co, __symbolTable[90]), _3517871_37);
if (True == _3517872_37) {
Obj _3517873_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517874_37 = PRIM_CDR(_3517873_37);
Obj _3517875_37 = PRIM_ISCONS(_3517874_37);
if (True == _3517875_37) {
Obj _3517876_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517877_37 = PRIM_CDR(_3517876_37);
Obj _3517878_37 = PRIM_CAR(_3517877_37);
Obj f = _3517878_37;
Obj _3517879_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517880_37 = PRIM_CDR(_3517879_37);
Obj _3517881_37 = PRIM_CDR(_3517880_37);
Obj _3517882_37 = PRIM_EQ(Nil, _3517881_37);
if (True == _3517882_37) {
Obj _3517883_37 = PRIM_CDR(closureRef(R[0], 1));
Obj args = _3517883_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun91, 10, R);
coraCall1(co, globalRef(co, __symbolTable[102]), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516603_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516603_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516603_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516603_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516603_37);
return;
}
}
case 1:
{
Obj _3517888_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3517887_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 3:
{
Obj _3517891_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 4:
{
Obj _3517890_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 3, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 5:
{
Obj _3517894_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 6:
{
Obj _3517893_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 5, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 7:
{
Obj _3517896_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 8:
{
Obj _3517895_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 9:
{
Obj _3517885_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517886_37 = PRIM_EQ(f, globalRef(co, __symbolTable[121]));
if (True == _3517886_37) {
R[1] = args;
saveCont(co, clofun91, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
} else {
Obj _3517889_37 = PRIM_EQ(f, globalRef(co, __symbolTable[109]));
if (True == _3517889_37) {
R[1] = args;
saveCont(co, clofun91, 4, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co"));
return;
} else {
Obj _3517892_37 = PRIM_EQ(f, globalRef(co, __symbolTable[118]));
if (True == _3517892_37) {
R[1] = args;
saveCont(co, clofun91, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co->gc, "));
return;
} else {
R[1] = args;
saveCont(co, clofun91, 8, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "("));
return;
}
}
}
}
case 10:
{
Obj _3517884_37= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
saveCont(co, clofun91, 9, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), _3517884_37);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516604_37 = makeNative(co->gc, 5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517832_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517832_37) {
Obj _3517833_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517834_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3517833_37);
if (True == _3517834_37) {
Obj _3517835_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517836_37 = PRIM_ISCONS(_3517835_37);
if (True == _3517836_37) {
Obj _3517837_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517838_37 = PRIM_CAR(_3517837_37);
Obj a = _3517838_37;
Obj _3517839_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517840_37 = PRIM_CDR(_3517839_37);
Obj _3517841_37 = PRIM_ISCONS(_3517840_37);
if (True == _3517841_37) {
Obj _3517842_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517843_37 = PRIM_CDR(_3517842_37);
Obj _3517844_37 = PRIM_CAR(_3517843_37);
Obj b = _3517844_37;
Obj _3517845_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517846_37 = PRIM_CDR(_3517845_37);
Obj _3517847_37 = PRIM_CDR(_3517846_37);
Obj _3517848_37 = PRIM_ISCONS(_3517847_37);
if (True == _3517848_37) {
Obj _3517849_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517850_37 = PRIM_CDR(_3517849_37);
Obj _3517851_37 = PRIM_CDR(_3517850_37);
Obj _3517852_37 = PRIM_CAR(_3517851_37);
Obj c = _3517852_37;
Obj _3517853_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517854_37 = PRIM_CDR(_3517853_37);
Obj _3517855_37 = PRIM_CDR(_3517854_37);
Obj _3517856_37 = PRIM_CDR(_3517855_37);
Obj _3517857_37 = PRIM_EQ(Nil, _3517856_37);
if (True == _3517857_37) {
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun90, 9, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "if (True == "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516604_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516604_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516604_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516604_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516604_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516604_37);
return;
}
}
case 1:
{
Obj _3517866_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "}\n"));
return;
}
case 2:
{
Obj _3517865_37= co->res;
Obj c = R[1];
saveCont(co, clofun90, 1, R);
coraCall2(co, _3517865_37, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517864_37= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun90, 2, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3517863_37= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun90, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "} else {\n"));
return;
}
case 5:
{
Obj _3517862_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
saveCont(co, clofun90, 4, R);
coraCall2(co, _3517862_37, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3517861_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 5, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 3));
return;
}
case 7:
{
Obj _3517860_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ") {\n"));
return;
}
case 8:
{
Obj _3517859_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 7, R);
coraCall2(co, _3517859_37, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj _3517858_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun90, 8, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516605_37 = makeNative(co->gc, 3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj _3517794_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517794_37) {
Obj _3517795_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517796_37 = PRIM_EQ(globalRef(co, __symbolTable[78]), _3517795_37);
if (True == _3517796_37) {
Obj _3517797_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517798_37 = PRIM_ISCONS(_3517797_37);
if (True == _3517798_37) {
Obj _3517799_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517800_37 = PRIM_CAR(_3517799_37);
Obj label = _3517800_37;
Obj _3517801_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517802_37 = PRIM_CDR(_3517801_37);
Obj _3517803_37 = PRIM_ISCONS(_3517802_37);
if (True == _3517803_37) {
Obj _3517804_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517805_37 = PRIM_CDR(_3517804_37);
Obj _3517806_37 = PRIM_CAR(_3517805_37);
Obj nargs = _3517806_37;
Obj _3517807_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517808_37 = PRIM_CDR(_3517807_37);
Obj _3517809_37 = PRIM_CDR(_3517808_37);
Obj _3517810_37 = PRIM_ISCONS(_3517809_37);
if (True == _3517810_37) {
Obj _3517811_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517812_37 = PRIM_CDR(_3517811_37);
Obj _3517813_37 = PRIM_CDR(_3517812_37);
Obj _3517814_37 = PRIM_CAR(_3517813_37);
Obj nframe = _3517814_37;
Obj _3517815_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517816_37 = PRIM_CDR(_3517815_37);
Obj _3517817_37 = PRIM_CDR(_3517816_37);
Obj _3517818_37 = PRIM_CDR(_3517817_37);
Obj frees = _3517818_37;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
saveCont(co, clofun89, 12, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "makeNative(co->gc, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516605_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516605_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516605_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516605_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516605_37);
return;
}
}
case 1:
{
Obj _3517831_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3517830_37= co->res;
Obj frees = R[1];
saveCont(co, clofun89, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 3:
{
Obj _3517828_37= co->res;
Obj frees = R[1];
Obj _3517829_37 = primNot(_3517828_37);
if (True == _3517829_37) {
R[1] = frees;
saveCont(co, clofun89, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
}
case 4:
{
Obj _3517827_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 3, R);
coraCall1(co, globalRef(co, __symbolTable[103]), frees);
return;
}
case 5:
{
Obj _3517826_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 4, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), _3517826_37);
return;
}
case 6:
{
Obj _3517825_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 5, R);
coraCall1(co, globalRef(co, __symbolTable[91]), frees);
return;
}
case 7:
{
Obj _3517824_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 8:
{
Obj _3517823_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
saveCont(co, clofun89, 7, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 9:
{
Obj _3517822_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun89, 8, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 10:
{
Obj _3517821_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun89, 9, R);
coraCall2(co, globalRef(co, __symbolTable[42]), closureRef(R[0], 5), label);
return;
}
case 11:
{
Obj _3517820_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun89, 10, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 12:
{
Obj _3517819_37= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun89, 11, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), nframe);
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516606_37 = makeNative(co->gc, 2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3517773_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517773_37) {
Obj _3517774_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517775_37 = PRIM_EQ(globalRef(co, __symbolTable[85]), _3517774_37);
if (True == _3517775_37) {
Obj _3517776_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517777_37 = PRIM_ISCONS(_3517776_37);
if (True == _3517777_37) {
Obj _3517778_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517779_37 = PRIM_CAR(_3517778_37);
Obj a = _3517779_37;
Obj _3517780_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517781_37 = PRIM_CDR(_3517780_37);
Obj _3517782_37 = PRIM_ISCONS(_3517781_37);
if (True == _3517782_37) {
Obj _3517783_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517784_37 = PRIM_CDR(_3517783_37);
Obj _3517785_37 = PRIM_CAR(_3517784_37);
Obj b = _3517785_37;
Obj _3517786_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517787_37 = PRIM_CDR(_3517786_37);
Obj _3517788_37 = PRIM_CDR(_3517787_37);
Obj _3517789_37 = PRIM_EQ(Nil, _3517788_37);
if (True == _3517789_37) {
R[1] = a;
R[2] = b;
saveCont(co, clofun88, 4, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516606_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516606_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516606_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516606_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516606_37);
return;
}
}
case 1:
{
Obj _3517793_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, _3517793_37, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj _3517792_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun88, 1, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517791_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun88, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj _3517790_37= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
saveCont(co, clofun88, 3, R);
coraCall2(co, _3517790_37, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516607_37 = makeNative(co->gc, 2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517759_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517759_37) {
Obj _3517760_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517761_37 = PRIM_EQ(globalRef(co, __symbolTable[72]), _3517760_37);
if (True == _3517761_37) {
Obj _3517762_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517763_37 = PRIM_ISCONS(_3517762_37);
if (True == _3517763_37) {
Obj _3517764_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517765_37 = PRIM_CAR(_3517764_37);
Obj x = _3517765_37;
Obj _3517766_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517767_37 = PRIM_CDR(_3517766_37);
Obj _3517768_37 = PRIM_EQ(Nil, _3517767_37);
if (True == _3517768_37) {
R[1] = x;
saveCont(co, clofun87, 4, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516607_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516607_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516607_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516607_37);
return;
}
}
case 1:
{
Obj _3517772_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3517771_37= co->res;
saveCont(co, clofun87, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 3:
{
Obj _3517770_37= co->res;
Obj x = R[1];
saveCont(co, clofun87, 2, R);
coraCall2(co, _3517770_37, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3517769_37= co->res;
Obj x = R[1];
R[1] = x;
saveCont(co, clofun87, 3, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516608_37 = makeNative(co->gc, 3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517746_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517746_37) {
Obj _3517747_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517748_37 = PRIM_EQ(globalRef(co, __symbolTable[74]), _3517747_37);
if (True == _3517748_37) {
Obj _3517749_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517750_37 = PRIM_ISCONS(_3517749_37);
if (True == _3517750_37) {
Obj _3517751_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517752_37 = PRIM_CAR(_3517751_37);
Obj exp = _3517752_37;
Obj _3517753_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517754_37 = PRIM_CDR(_3517753_37);
Obj _3517755_37 = PRIM_EQ(Nil, _3517754_37);
if (True == _3517755_37) {
R[1] = exp;
saveCont(co, clofun86, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516608_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516608_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516608_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516608_37);
return;
}
}
case 1:
{
Obj _3517758_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3517757_37= co->res;
Obj exp = R[1];
saveCont(co, clofun86, 1, R);
coraCall2(co, _3517757_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517756_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun86, 2, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516609_37 = makeNative(co->gc, 4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517722_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517722_37) {
Obj _3517723_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517724_37 = PRIM_EQ(globalRef(co, __symbolTable[73]), _3517723_37);
if (True == _3517724_37) {
Obj _3517725_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517726_37 = PRIM_ISCONS(_3517725_37);
if (True == _3517726_37) {
Obj _3517727_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517728_37 = PRIM_CAR(_3517727_37);
Obj exp = _3517728_37;
Obj _3517729_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517730_37 = PRIM_CDR(_3517729_37);
Obj _3517731_37 = PRIM_ISCONS(_3517730_37);
if (True == _3517731_37) {
Obj _3517732_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517733_37 = PRIM_CDR(_3517732_37);
Obj _3517734_37 = PRIM_CAR(_3517733_37);
Obj label = _3517734_37;
Obj _3517735_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517736_37 = PRIM_CDR(_3517735_37);
Obj _3517737_37 = PRIM_CDR(_3517736_37);
Obj fvs = _3517737_37;
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 8, R);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs};
coraCall(co, globalRef(co, __symbolTable[49]), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516609_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516609_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516609_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516609_37);
return;
}
}
case 1:
{
Obj _3517745_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3517744_37= co->res;
Obj exp = R[1];
saveCont(co, clofun85, 1, R);
coraCall2(co, _3517744_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517743_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun85, 2, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3517742_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun85, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", R);\n"));
return;
}
case 5:
{
Obj _3517741_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun85, 4, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), label);
return;
}
case 6:
{
Obj _3517740_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 7:
{
Obj _3517739_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 6, R);
coraCall2(co, globalRef(co, __symbolTable[42]), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 8:
{
Obj _3517738_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 7, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "saveCont(co, "));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517699_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517699_37) {
Obj _3517700_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517700_37;
Obj _3517701_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517701_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun84, 18, R);
coraCall1(co, globalRef(co, __symbolTable[91]), args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517713_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", __args);\n"));
return;
}
case 2:
{
Obj _3517712_37= co->res;
Obj nargs = R[1];
saveCont(co, clofun84, 1, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 3:
{
Obj _3517711_37= co->res;
Obj nargs = R[1];
R[1] = nargs;
saveCont(co, clofun84, 2, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 4:
{
Obj _3517710_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = nargs;
saveCont(co, clofun84, 3, R);
coraCall2(co, _3517710_37, f, closureRef(R[0], 4));
return;
}
case 5:
{
Obj _3517709_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 4, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 1));
return;
}
case 6:
{
Obj _3517708_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "coraCall(co, "));
return;
}
case 7:
{
Obj _3517707_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 6, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "};\n"));
return;
}
case 8:
{
Obj _3517706_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 9:
{
Obj _3517705_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 8, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "] = {"));
return;
}
case 10:
{
Obj _3517704_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 9, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 11:
{
Obj _3517721_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 12:
{
Obj _3517720_37= co->res;
Obj args = R[1];
saveCont(co, clofun84, 11, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, __symbolTable[43]), 5, __args);
return;
}
case 13:
{
Obj _3517718_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3517719_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3517719_37) {
R[1] = args;
saveCont(co, clofun84, 12, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
}
case 14:
{
Obj _3517717_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
saveCont(co, clofun84, 13, R);
coraCall2(co, _3517717_37, f, closureRef(R[0], 4));
return;
}
case 15:
{
Obj _3517716_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 14, R);
coraCall1(co, globalRef(co, __symbolTable[52]), closureRef(R[0], 1));
return;
}
case 16:
{
Obj _3517715_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 15, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
}
case 17:
{
Obj _3517714_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 16, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 18:
{
Obj _3517702_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = _3517702_37;
Obj _3517703_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3517703_37) {
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 10, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "Obj __args["));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 17, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "coraCall"));
return;
}
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj ls = R[5];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), makeNative(co->gc, 3, clofun82, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
return;
}
}
}

static void clofun82(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj v = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun82, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
case 1:
{
Obj _3517694_37= co->res;
Obj acc = R[1];
Obj _3517695_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3517695_37);
return;
}
case 2:
{
Obj _3517693_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "];\n"));
return;
}
case 3:
{
Obj _3517692_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 2, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj _3517691_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, " = R["));
return;
}
case 5:
{
Obj _3517690_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun82, 4, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, __symbolTable[46]), 5, __args);
return;
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj ls = R[5];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), makeNative(co->gc, 3, clofun80, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
return;
}
}
}

static void clofun80(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj v = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 5, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "R["));
return;
}
case 1:
{
Obj _3517687_37= co->res;
Obj acc = R[1];
Obj _3517688_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3517688_37);
return;
}
case 2:
{
Obj _3517686_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj _3517685_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun80, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, __symbolTable[46]), 5, __args);
return;
}
case 4:
{
Obj _3517684_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 3, R);
coraCall2(co, globalRef(co, __symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "] = "));
return;
}
case 5:
{
Obj _3517683_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 4, R);
coraCall2(co, globalRef(co, __symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun79(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sym = R[1];
Obj globals = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[51]), MAKE_NUMBER(0), sym, globals);
return;
}
}
}

static void clofun78(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj idx = R[1];
Obj sym = R[2];
Obj globals = R[3];
R[1] = idx;
R[2] = globals;
R[3] = sym;
saveCont(co, clofun78, 1, R);
coraCall1(co, globalRef(co, __symbolTable[103]), globals);
return;
}
case 1:
{
Obj _3517676_37= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == _3517676_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3517677_37 = PRIM_CAR(globals);
Obj _3517678_37 = PRIM_EQ(sym, _3517677_37);
if (True == _3517678_37) {
coraReturn(co, idx);
return;
} else {
Obj _3517679_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3517680_37 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[51]), _3517679_37, sym, _3517680_37);
return;
}
}
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sym = R[1];
Obj globals = R[2];
R[1] = sym;
R[2] = globals;
saveCont(co, clofun77, 2, R);
coraCall1(co, globalRef(co, __symbolTable[52]), globals);
return;
}
case 1:
{
Obj _3517672_37= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == _3517672_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517673_37 = makeCons(co->gc, sym, val);
Obj _3517674_37 = coraPrimSet(co, globals, _3517673_37);
coraReturn(co, _3517674_37);
return;
}
}
case 2:
{
Obj _3517671_37= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = _3517671_37;
R[1] = sym;
R[2] = val;
R[3] = globals;
saveCont(co, clofun77, 1, R);
coraCall2(co, globalRef(co, __symbolTable[95]), sym, val);
return;
}
}
}

static void clofun76(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj k = R[2];
Obj _3517664_37 = primGenSym(co);
Obj tmp = _3517664_37;
R[1] = x;
R[2] = tmp;
saveCont(co, clofun76, 1, R);
coraCall1(co, k, tmp);
return;
}
case 1:
{
Obj _3517665_37= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj _3517666_37 = makeCons(co->gc, _3517665_37, Nil);
Obj _3517667_37 = makeCons(co->gc, x, _3517666_37);
Obj _3517668_37 = makeCons(co->gc, tmp, _3517667_37);
Obj _3517669_37 = makeCons(co->gc, globalRef(co, __symbolTable[86]), _3517668_37);
coraReturn(co, _3517669_37);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj v = R[1];
Obj val = R[2];
R[1] = val;
R[2] = v;
saveCont(co, clofun75, 3, R);
coraCall2(co, globalRef(co, __symbolTable[55]), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj _3517662_37= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj _3517657_37= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = _3517657_37;
Obj _3517658_37 = makeCons(co->gc, val, Nil);
Obj _3517659_37 = makeCons(co->gc, idx, _3517658_37);
Obj _3517660_37 = makeCons(co->gc, _3517659_37, cur);
Obj cur1 = _3517660_37;
Obj _3517661_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
saveCont(co, clofun75, 1, R);
coraCall3(co, globalRef(co, __symbolTable[53]), v, MAKE_NUMBER(0), _3517661_37);
return;
}
case 3:
{
Obj _3517656_37= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = _3517656_37;
R[1] = val;
R[2] = idx;
R[3] = v;
saveCont(co, clofun75, 2, R);
coraCall2(co, globalRef(co, __symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516594_37 = R[1];
Obj _3516595_37 = R[2];
Obj _3516596_37 = makeNative(co->gc, 1, clofun73, 0, 2, _3516594_37, _3516595_37);
Obj _3517607_37 = PRIM_ISCONS(_3516595_37);
if (True == _3517607_37) {
Obj _3517608_37 = PRIM_CAR(_3516595_37);
Obj _3517609_37 = PRIM_EQ(globalRef(co, __symbolTable[78]), _3517608_37);
if (True == _3517609_37) {
Obj _3517610_37 = PRIM_CDR(_3516595_37);
Obj _3517611_37 = PRIM_ISCONS(_3517610_37);
if (True == _3517611_37) {
Obj _3517612_37 = PRIM_CDR(_3516595_37);
Obj _3517613_37 = PRIM_CAR(_3517612_37);
Obj _3517614_37 = PRIM_ISCONS(_3517613_37);
if (True == _3517614_37) {
Obj _3517615_37 = PRIM_CDR(_3516595_37);
Obj _3517616_37 = PRIM_CAR(_3517615_37);
Obj _3517617_37 = PRIM_CAR(_3517616_37);
Obj _3517618_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3517617_37);
if (True == _3517618_37) {
Obj _3517619_37 = PRIM_CDR(_3516595_37);
Obj _3517620_37 = PRIM_CAR(_3517619_37);
Obj _3517621_37 = PRIM_CDR(_3517620_37);
Obj _3517622_37 = PRIM_ISCONS(_3517621_37);
if (True == _3517622_37) {
Obj _3517623_37 = PRIM_CDR(_3516595_37);
Obj _3517624_37 = PRIM_CAR(_3517623_37);
Obj _3517625_37 = PRIM_CDR(_3517624_37);
Obj _3517626_37 = PRIM_CAR(_3517625_37);
Obj params = _3517626_37;
Obj _3517627_37 = PRIM_CDR(_3516595_37);
Obj _3517628_37 = PRIM_CAR(_3517627_37);
Obj _3517629_37 = PRIM_CDR(_3517628_37);
Obj _3517630_37 = PRIM_CDR(_3517629_37);
Obj _3517631_37 = PRIM_ISCONS(_3517630_37);
if (True == _3517631_37) {
Obj _3517632_37 = PRIM_CDR(_3516595_37);
Obj _3517633_37 = PRIM_CAR(_3517632_37);
Obj _3517634_37 = PRIM_CDR(_3517633_37);
Obj _3517635_37 = PRIM_CDR(_3517634_37);
Obj _3517636_37 = PRIM_CAR(_3517635_37);
Obj body = _3517636_37;
Obj _3517637_37 = PRIM_CDR(_3516595_37);
Obj _3517638_37 = PRIM_CAR(_3517637_37);
Obj _3517639_37 = PRIM_CDR(_3517638_37);
Obj _3517640_37 = PRIM_CDR(_3517639_37);
Obj _3517641_37 = PRIM_CDR(_3517640_37);
Obj _3517642_37 = PRIM_EQ(Nil, _3517641_37);
if (True == _3517642_37) {
Obj _3517643_37 = PRIM_CDR(_3516595_37);
Obj _3517644_37 = PRIM_CDR(_3517643_37);
Obj fvs = _3517644_37;
R[1] = _3516594_37;
R[2] = params;
R[3] = fvs;
saveCont(co, clofun74, 6, R);
coraCall2(co, globalRef(co, __symbolTable[56]), _3516594_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516596_37);
return;
}
}
case 1:
{
Obj _3517650_37= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj _3517651_37 = makeCons(co->gc, nframe, fvs);
Obj _3517652_37 = makeCons(co->gc, _3517650_37, _3517651_37);
Obj _3517653_37 = makeCons(co->gc, cur, _3517652_37);
Obj _3517654_37 = makeCons(co->gc, globalRef(co, __symbolTable[78]), _3517653_37);
coraReturn(co, _3517654_37);
return;
}
case 2:
{
Obj _3517649_37= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
saveCont(co, clofun74, 1, R);
coraCall1(co, globalRef(co, __symbolTable[91]), params);
return;
}
case 3:
{
Obj _3517648_37= co->res;
Obj _3516594_37 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = _3517648_37;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun74, 2, R);
coraCall2(co, globalRef(co, __symbolTable[54]), _3516594_37, body2);
return;
}
case 4:
{
Obj _3517647_37= co->res;
Obj _3516594_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = _3517647_37;
R[1] = _3516594_37;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
saveCont(co, clofun74, 3, R);
coraCall1(co, globalRef(co, __symbolTable[57]), body2);
return;
}
case 5:
{
Obj _3517646_37= co->res;
Obj body1 = R[1];
Obj _3516594_37 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = _3517646_37;
R[1] = _3516594_37;
R[2] = params;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun74, 4, R);
coraCall2(co, globalRef(co, __symbolTable[58]), params, body1);
return;
}
case 6:
{
Obj _3517645_37= co->res;
Obj _3516594_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = _3517645_37;
R[1] = body1;
R[2] = _3516594_37;
R[3] = params;
R[4] = fvs;
saveCont(co, clofun74, 5, R);
coraCall2(co, globalRef(co, __symbolTable[55]), _3516594_37, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517605_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517605_37) {
saveCont(co, clofun73, 1, R);
coraCall1(co, globalRef(co, __symbolTable[56]), closureRef(R[0], 0));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3517606_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[92]), _3517606_37, closureRef(R[0], 1));
return;
}
}
}

static void clofun72(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun72, 3, R);
coraCall1(co, globalRef(co, __symbolTable[99]), lam);
return;
}
case 1:
{
Obj _3517603_37= co->res;
Obj _3517602_37 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), makeNative(co->gc, 3, clofun71, 2, 0), _3517602_37, _3517603_37);
return;
}
case 2:
{
Obj _3517597_37= co->res;
Obj lam = R[1];
Obj nargs = _3517597_37;
Obj _3517602_37 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = _3517602_37;
saveCont(co, clofun72, 1, R);
coraCall1(co, globalRef(co, __symbolTable[59]), lam);
return;
}
case 3:
{
Obj _3517596_37= co->res;
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun72, 2, R);
coraCall1(co, globalRef(co, __symbolTable[91]), _3517596_37);
return;
}
}
}

static void clofun71(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj x = R[2];
R[1] = acc;
saveCont(co, clofun71, 2, R);
coraCall1(co, globalRef(co, __symbolTable[59]), x);
return;
}
case 1:
{
Obj _3517599_37= co->res;
Obj acc = R[1];
Obj _3517600_37 = PRIM_ADD(_3517599_37, MAKE_NUMBER(1));
Obj len = _3517600_37;
Obj _3517601_37 = PRIM_GT(len, acc);
if (True == _3517601_37) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj _3517598_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(co, __symbolTable[91]), _3517598_37);
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj params = R[1];
Obj body = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[61]), body, Nil, makeNative(co->gc, 3, clofun69, 2, 1, params));
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body1 = R[1];
Obj conts = R[2];
R[1] = body1;
saveCont(co, clofun69, 1, R);
coraCall1(co, globalRef(co, __symbolTable[67]), conts);
return;
}
case 1:
{
Obj _3517591_37= co->res;
Obj body1 = R[1];
Obj _3517592_37 = makeCons(co->gc, body1, _3517591_37);
Obj _3517593_37 = makeCons(co->gc, closureRef(R[0], 0), _3517592_37);
Obj _3517594_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3517593_37);
coraReturn(co, _3517594_37);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516588_37 = R[1];
Obj _3516589_37 = R[2];
Obj _3516590_37 = R[3];
Obj _3516591_37 = R[4];
Obj _3517585_37 = PRIM_EQ(Nil, _3516588_37);
if (True == _3517585_37) {
co->ctx.sp = R;
coraCall2(co, _3516591_37, _3516590_37, _3516589_37);
return;
} else {
Obj _3517586_37 = PRIM_ISCONS(_3516588_37);
if (True == _3517586_37) {
Obj _3517587_37 = PRIM_CAR(_3516588_37);
Obj f = _3517587_37;
Obj _3517588_37 = PRIM_CDR(_3516588_37);
Obj args = _3517588_37;
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[61]), f, _3516589_37, makeNative(co->gc, 3, clofun67, 2, 3, args, _3516590_37, _3516591_37));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj f1 = R[1];
Obj conts1 = R[2];
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[60]), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative(co->gc, 3, clofun66, 2, 2, closureRef(R[0], 2), f1));
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj args1 = R[1];
Obj conts2 = R[2];
Obj _3517589_37 = makeCons(co->gc, closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3517589_37, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516582_37 = R[1];
Obj _3516583_37 = R[2];
Obj _3516584_37 = R[3];
Obj _3516658_37 = makeNative(co->gc, 2, clofun64, 1, 3, _3516582_37, _3516583_37, _3516584_37);
Obj _3517582_37 = primIsSymbol(_3516582_37);
if (True == _3517582_37) {
co->ctx.sp = R;
coraCall1(co, _3516658_37, True);
return;
} else {
R[1] = _3516658_37;
saveCont(co, clofun65, 1, R);
coraCall1(co, globalRef(co, __symbolTable[79]), _3516582_37);
return;
}
}
case 1:
{
Obj _3517583_37= co->res;
Obj _3516658_37 = R[1];
if (True == _3517583_37) {
co->ctx.sp = R;
coraCall1(co, _3516658_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516658_37, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516659_37 = R[1];
if (True == _3516659_37) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3516586_37 = makeNative(co->gc, 1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517558_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517558_37) {
Obj _3517559_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517560_37 = PRIM_EQ(globalRef(co, __symbolTable[73]), _3517559_37);
if (True == _3517560_37) {
Obj _3517561_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517562_37 = PRIM_ISCONS(_3517561_37);
if (True == _3517562_37) {
Obj _3517563_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517564_37 = PRIM_CAR(_3517563_37);
Obj exp = _3517564_37;
Obj _3517565_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517566_37 = PRIM_CDR(_3517565_37);
Obj _3517567_37 = PRIM_ISCONS(_3517566_37);
if (True == _3517567_37) {
Obj _3517568_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517569_37 = PRIM_CDR(_3517568_37);
Obj _3517570_37 = PRIM_CAR(_3517569_37);
Obj cont = _3517570_37;
Obj _3517571_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517572_37 = PRIM_CDR(_3517571_37);
Obj _3517573_37 = PRIM_CDR(_3517572_37);
Obj _3517574_37 = PRIM_EQ(Nil, _3517573_37);
if (True == _3517574_37) {
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[61]), cont, closureRef(R[0], 1), makeNative(co->gc, 4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516586_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516586_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516586_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516586_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516586_37);
return;
}
}
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj cont1 = R[1];
Obj conts1 = R[2];
R[1] = cont1;
R[2] = conts1;
saveCont(co, clofun63, 2, R);
coraCall1(co, globalRef(co, __symbolTable[59]), cont1);
return;
}
case 1:
{
Obj _3517576_37= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj _3517577_37 = PRIM_ADD(_3517576_37, MAKE_NUMBER(1));
Obj _3517578_37 = makeCons(co->gc, _3517577_37, fvs);
Obj _3517579_37 = makeCons(co->gc, closureRef(R[0], 1), _3517578_37);
Obj _3517580_37 = makeCons(co->gc, globalRef(co, __symbolTable[73]), _3517579_37);
Obj _3517581_37 = makeCons(co->gc, cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3517580_37, _3517581_37);
return;
}
case 2:
{
Obj _3517575_37= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = _3517575_37;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, __symbolTable[91]), conts1);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517554_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517554_37) {
Obj _3517555_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517555_37;
Obj _3517556_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517556_37;
Obj _3517557_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(co, __symbolTable[60]), _3517557_37, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516574_37 = R[1];
Obj _3516575_37 = R[2];
R[1] = _3516575_37;
R[2] = _3516574_37;
saveCont(co, clofun61, 2, R);
coraCall1(co, globalRef(co, __symbolTable[79]), _3516575_37);
return;
}
case 1:
{
Obj _3517549_37= co->res;
Obj args = R[1];
Obj _3517550_37 = makeCons(co->gc, _3517549_37, Nil);
Obj _3517551_37 = makeCons(co->gc, args, _3517550_37);
Obj _3517552_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3517551_37);
coraReturn(co, _3517552_37);
return;
}
case 2:
{
Obj _3517477_37= co->res;
Obj _3516575_37 = R[1];
Obj _3516574_37 = R[2];
if (True == _3517477_37) {
coraReturn(co, _3516575_37);
return;
} else {
Obj _3517478_37 = primIsSymbol(_3516575_37);
if (True == _3517478_37) {
coraReturn(co, _3516575_37);
return;
} else {
Obj _3516578_37 = makeNative(co->gc, 4, clofun60, 0, 2, _3516575_37, _3516574_37);
Obj _3517532_37 = PRIM_ISCONS(_3516575_37);
if (True == _3517532_37) {
Obj _3517533_37 = PRIM_CAR(_3516575_37);
Obj _3517534_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3517533_37);
if (True == _3517534_37) {
Obj _3517535_37 = PRIM_CDR(_3516575_37);
Obj _3517536_37 = PRIM_ISCONS(_3517535_37);
if (True == _3517536_37) {
Obj _3517537_37 = PRIM_CDR(_3516575_37);
Obj _3517538_37 = PRIM_CAR(_3517537_37);
Obj args = _3517538_37;
Obj _3517539_37 = PRIM_CDR(_3516575_37);
Obj _3517540_37 = PRIM_CDR(_3517539_37);
Obj _3517541_37 = PRIM_ISCONS(_3517540_37);
if (True == _3517541_37) {
Obj _3517542_37 = PRIM_CDR(_3516575_37);
Obj _3517543_37 = PRIM_CDR(_3517542_37);
Obj _3517544_37 = PRIM_CAR(_3517543_37);
Obj body = _3517544_37;
Obj _3517545_37 = PRIM_CDR(_3516575_37);
Obj _3517546_37 = PRIM_CDR(_3517545_37);
Obj _3517547_37 = PRIM_CDR(_3517546_37);
Obj _3517548_37 = PRIM_EQ(Nil, _3517547_37);
if (True == _3517548_37) {
R[1] = args;
saveCont(co, clofun61, 1, R);
coraCall2(co, globalRef(co, __symbolTable[63]), _3516574_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516578_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516578_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516578_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516578_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516578_37);
return;
}
}
}
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516579_37 = makeNative(co->gc, 3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517507_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517507_37) {
Obj _3517508_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517509_37 = PRIM_EQ(globalRef(co, __symbolTable[75]), _3517508_37);
if (True == _3517509_37) {
Obj _3517510_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517511_37 = PRIM_ISCONS(_3517510_37);
if (True == _3517511_37) {
Obj _3517512_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517513_37 = PRIM_CAR(_3517512_37);
Obj val = _3517513_37;
Obj _3517514_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517515_37 = PRIM_CDR(_3517514_37);
Obj _3517516_37 = PRIM_ISCONS(_3517515_37);
if (True == _3517516_37) {
Obj _3517517_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517518_37 = PRIM_CDR(_3517517_37);
Obj _3517519_37 = PRIM_CAR(_3517518_37);
Obj body = _3517519_37;
Obj _3517520_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517521_37 = PRIM_CDR(_3517520_37);
Obj _3517522_37 = PRIM_CDR(_3517521_37);
Obj _3517523_37 = PRIM_EQ(Nil, _3517522_37);
if (True == _3517523_37) {
R[1] = body;
R[2] = val;
saveCont(co, clofun60, 5, R);
coraCall1(co, globalRef(co, __symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516579_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516579_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516579_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516579_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516579_37);
return;
}
}
case 1:
{
Obj _3517528_37= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj _3517529_37 = makeCons(co->gc, _3517528_37, fvs2);
Obj _3517530_37 = makeCons(co->gc, val, _3517529_37);
Obj _3517531_37 = makeCons(co->gc, globalRef(co, __symbolTable[62]), _3517530_37);
coraReturn(co, _3517531_37);
return;
}
case 2:
{
Obj _3517527_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = _3517527_37;
R[1] = fvs2;
R[2] = val;
saveCont(co, clofun60, 1, R);
coraCall2(co, globalRef(co, __symbolTable[63]), fvs1, body);
return;
}
case 3:
{
Obj _3517526_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun60, 2, R);
coraCall2(co, globalRef(co, __symbolTable[92]), _3517526_37, fvs1);
return;
}
case 4:
{
Obj _3517525_37= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = _3517525_37;
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, __symbolTable[63]), closureRef(R[0], 1));
return;
}
case 5:
{
Obj _3517524_37= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
saveCont(co, clofun60, 4, R);
coraCall2(co, globalRef(co, __symbolTable[80]), _3517524_37, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516580_37 = makeNative(co->gc, 3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517484_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517484_37) {
Obj _3517485_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517486_37 = PRIM_EQ(globalRef(co, __symbolTable[73]), _3517485_37);
if (True == _3517486_37) {
Obj _3517487_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517488_37 = PRIM_ISCONS(_3517487_37);
if (True == _3517488_37) {
Obj _3517489_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517490_37 = PRIM_CAR(_3517489_37);
Obj exp = _3517490_37;
Obj _3517491_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517492_37 = PRIM_CDR(_3517491_37);
Obj _3517493_37 = PRIM_ISCONS(_3517492_37);
if (True == _3517493_37) {
Obj _3517494_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517495_37 = PRIM_CDR(_3517494_37);
Obj _3517496_37 = PRIM_CAR(_3517495_37);
Obj cont = _3517496_37;
Obj _3517497_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517498_37 = PRIM_CDR(_3517497_37);
Obj _3517499_37 = PRIM_CDR(_3517498_37);
Obj _3517500_37 = PRIM_EQ(Nil, _3517499_37);
if (True == _3517500_37) {
R[1] = exp;
R[2] = cont;
saveCont(co, clofun59, 3, R);
coraCall1(co, globalRef(co, __symbolTable[63]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516580_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516580_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516580_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516580_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516580_37);
return;
}
}
case 1:
{
Obj _3517503_37= co->res;
Obj _3517502_37 = R[1];
Obj _3517504_37 = makeCons(co->gc, _3517503_37, Nil);
Obj _3517505_37 = makeCons(co->gc, _3517502_37, _3517504_37);
Obj _3517506_37 = makeCons(co->gc, globalRef(co, __symbolTable[73]), _3517505_37);
coraReturn(co, _3517506_37);
return;
}
case 2:
{
Obj _3517502_37= co->res;
Obj cont = R[1];
R[1] = _3517502_37;
saveCont(co, clofun59, 1, R);
coraCall2(co, globalRef(co, __symbolTable[63]), closureRef(R[0], 1), cont);
return;
}
case 3:
{
Obj _3517501_37= co->res;
Obj exp = R[1];
Obj cont = R[2];
R[1] = cont;
saveCont(co, clofun59, 2, R);
coraCall2(co, globalRef(co, __symbolTable[92]), _3517501_37, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517479_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517479_37) {
Obj _3517480_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517480_37;
Obj _3517481_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517481_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, __symbolTable[63]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517482_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517483_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[92]), _3517482_37, _3517483_37);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516569_37 = R[1];
Obj _3516570_37 = R[2];
Obj _3516571_37 = R[3];
Obj _3517454_37 = PRIM_EQ(Nil, _3516569_37);
if (True == _3517454_37) {
R[1] = _3516571_37;
saveCont(co, clofun57, 3, R);
coraCall1(co, globalRef(co, __symbolTable[67]), _3516570_37);
return;
} else {
Obj _3517472_37 = PRIM_ISCONS(_3516569_37);
if (True == _3517472_37) {
Obj _3517473_37 = PRIM_CAR(_3516569_37);
Obj hd = _3517473_37;
Obj _3517474_37 = PRIM_CDR(_3516569_37);
Obj tl = _3517474_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[69]), hd, makeNative(co->gc, 2, clofun56, 1, 3, tl, _3516570_37, _3516571_37));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3517470_37= co->res;
Obj _3516656_37 = R[1];
Obj _3517471_37 = PRIM_EQ(_3517470_37, globalRef(co, __symbolTable[90]));
if (True == _3517471_37) {
co->ctx.sp = R;
coraCall1(co, _3516656_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516656_37, False);
return;
}
}
case 2:
{
Obj _3517469_37= co->res;
Obj exp = R[1];
Obj _3516656_37 = R[2];
if (True == _3517469_37) {
R[1] = _3516656_37;
saveCont(co, clofun57, 1, R);
coraCall1(co, globalRef(co, __symbolTable[64]), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516656_37, False);
return;
}
}
case 3:
{
Obj _3517455_37= co->res;
Obj _3516571_37 = R[1];
Obj exp = _3517455_37;
Obj _3516656_37 = makeNative(co->gc, 2, clofun55, 1, 2, exp, _3516571_37);
Obj _3517468_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3516656_37;
saveCont(co, clofun57, 2, R);
coraCall1(co, globalRef(co, __symbolTable[65]), _3517468_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj _3517475_37 = makeCons(co->gc, hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[68]), closureRef(R[0], 0), _3517475_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516657_37 = R[1];
if (True == _3516657_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3517456_37 = PRIM_EQ(closureRef(R[0], 1), globalRef(co, __symbolTable[70]));
if (True == _3517456_37) {
Obj _3517457_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3517458_37 = makeCons(co->gc, globalRef(co, __symbolTable[74]), _3517457_37);
coraReturn(co, _3517458_37);
return;
} else {
Obj _3517459_37 = primGenSym(co);
Obj val = _3517459_37;
Obj _3517460_37 = makeCons(co->gc, val, Nil);
R[1] = _3517460_37;
saveCont(co, clofun55, 1, R);
coraCall1(co, closureRef(R[0], 1), val);
return;
}
}
}
case 1:
{
Obj _3517461_37= co->res;
Obj _3517460_37 = R[1];
Obj _3517462_37 = makeCons(co->gc, _3517461_37, Nil);
Obj _3517463_37 = makeCons(co->gc, _3517460_37, _3517462_37);
Obj _3517464_37 = makeCons(co->gc, globalRef(co, __symbolTable[75]), _3517463_37);
Obj _3517465_37 = makeCons(co->gc, _3517464_37, Nil);
Obj _3517466_37 = makeCons(co->gc, closureRef(R[0], 0), _3517465_37);
Obj _3517467_37 = makeCons(co->gc, globalRef(co, __symbolTable[73]), _3517466_37);
coraReturn(co, _3517467_37);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516560_37 = R[1];
Obj _3516561_37 = R[2];
Obj _3516654_37 = makeNative(co->gc, 2, clofun53, 1, 2, _3516560_37, _3516561_37);
Obj _3517451_37 = primIsSymbol(_3516560_37);
if (True == _3517451_37) {
co->ctx.sp = R;
coraCall1(co, _3516654_37, True);
return;
} else {
R[1] = _3516654_37;
saveCont(co, clofun54, 1, R);
coraCall1(co, globalRef(co, __symbolTable[79]), _3516560_37);
return;
}
}
case 1:
{
Obj _3517452_37= co->res;
Obj _3516654_37 = R[1];
if (True == _3517452_37) {
co->ctx.sp = R;
coraCall1(co, _3516654_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516654_37, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516655_37 = R[1];
if (True == _3516655_37) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun53, 1, R);
coraCall1(co, globalRef(co, __symbolTable[79]), closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3517317_37= co->res;
if (True == _3517317_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj _3516564_37 = makeNative(co->gc, 1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517419_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517419_37) {
Obj _3517420_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517421_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3517420_37);
if (True == _3517421_37) {
Obj _3517422_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517423_37 = PRIM_ISCONS(_3517422_37);
if (True == _3517423_37) {
Obj _3517424_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517425_37 = PRIM_CAR(_3517424_37);
Obj a = _3517425_37;
Obj _3517426_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517427_37 = PRIM_CDR(_3517426_37);
Obj _3517428_37 = PRIM_ISCONS(_3517427_37);
if (True == _3517428_37) {
Obj _3517429_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517430_37 = PRIM_CDR(_3517429_37);
Obj _3517431_37 = PRIM_CAR(_3517430_37);
Obj b = _3517431_37;
Obj _3517432_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517433_37 = PRIM_CDR(_3517432_37);
Obj _3517434_37 = PRIM_CDR(_3517433_37);
Obj _3517435_37 = PRIM_ISCONS(_3517434_37);
if (True == _3517435_37) {
Obj _3517436_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517437_37 = PRIM_CDR(_3517436_37);
Obj _3517438_37 = PRIM_CDR(_3517437_37);
Obj _3517439_37 = PRIM_CAR(_3517438_37);
Obj c = _3517439_37;
Obj _3517440_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517441_37 = PRIM_CDR(_3517440_37);
Obj _3517442_37 = PRIM_CDR(_3517441_37);
Obj _3517443_37 = PRIM_CDR(_3517442_37);
Obj _3517444_37 = PRIM_EQ(Nil, _3517443_37);
if (True == _3517444_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[69]), a, makeNative(co->gc, 3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516564_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516564_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516564_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516564_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516564_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516564_37);
return;
}
}
}
}
}

static void clofun52(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
R[1] = ra;
saveCont(co, clofun52, 2, R);
coraCall2(co, globalRef(co, __symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3517446_37= co->res;
Obj _3517445_37 = R[1];
Obj ra = R[2];
Obj _3517447_37 = makeCons(co->gc, _3517446_37, Nil);
Obj _3517448_37 = makeCons(co->gc, _3517445_37, _3517447_37);
Obj _3517449_37 = makeCons(co->gc, ra, _3517448_37);
Obj _3517450_37 = makeCons(co->gc, globalRef(co, __symbolTable[87]), _3517449_37);
coraReturn(co, _3517450_37);
return;
}
case 2:
{
Obj _3517445_37= co->res;
Obj ra = R[1];
R[1] = _3517445_37;
R[2] = ra;
saveCont(co, clofun52, 1, R);
coraCall2(co, globalRef(co, __symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516565_37 = makeNative(co->gc, 1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517397_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517397_37) {
Obj _3517398_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517399_37 = PRIM_EQ(globalRef(co, __symbolTable[85]), _3517398_37);
if (True == _3517399_37) {
Obj _3517400_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517401_37 = PRIM_ISCONS(_3517400_37);
if (True == _3517401_37) {
Obj _3517402_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517403_37 = PRIM_CAR(_3517402_37);
Obj a = _3517403_37;
Obj _3517404_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517405_37 = PRIM_CDR(_3517404_37);
Obj _3517406_37 = PRIM_ISCONS(_3517405_37);
if (True == _3517406_37) {
Obj _3517407_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517408_37 = PRIM_CDR(_3517407_37);
Obj _3517409_37 = PRIM_CAR(_3517408_37);
Obj b = _3517409_37;
Obj _3517410_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517411_37 = PRIM_CDR(_3517410_37);
Obj _3517412_37 = PRIM_CDR(_3517411_37);
Obj _3517413_37 = PRIM_EQ(Nil, _3517412_37);
if (True == _3517413_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[69]), a, makeNative(co->gc, 2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516565_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516565_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516565_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516565_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516565_37);
return;
}
}
}
}

static void clofun50(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
Obj _3517414_37 = primIsSymbol(ra);
if (True == _3517414_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
saveCont(co, clofun50, 1, R);
coraCall2(co, globalRef(co, __symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3517415_37= co->res;
Obj ra = R[1];
Obj _3517416_37 = makeCons(co->gc, _3517415_37, Nil);
Obj _3517417_37 = makeCons(co->gc, ra, _3517416_37);
Obj _3517418_37 = makeCons(co->gc, globalRef(co, __symbolTable[85]), _3517417_37);
coraReturn(co, _3517418_37);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516566_37 = makeNative(co->gc, 3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517366_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517366_37) {
Obj _3517367_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517368_37 = PRIM_EQ(globalRef(co, __symbolTable[86]), _3517367_37);
if (True == _3517368_37) {
Obj _3517369_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517370_37 = PRIM_ISCONS(_3517369_37);
if (True == _3517370_37) {
Obj _3517371_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517372_37 = PRIM_CAR(_3517371_37);
Obj a = _3517372_37;
Obj _3517373_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517374_37 = PRIM_CDR(_3517373_37);
Obj _3517375_37 = PRIM_ISCONS(_3517374_37);
if (True == _3517375_37) {
Obj _3517376_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517377_37 = PRIM_CDR(_3517376_37);
Obj _3517378_37 = PRIM_CAR(_3517377_37);
Obj b = _3517378_37;
Obj _3517379_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517380_37 = PRIM_CDR(_3517379_37);
Obj _3517381_37 = PRIM_CDR(_3517380_37);
Obj _3517382_37 = PRIM_ISCONS(_3517381_37);
if (True == _3517382_37) {
Obj _3517383_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517384_37 = PRIM_CDR(_3517383_37);
Obj _3517385_37 = PRIM_CDR(_3517384_37);
Obj _3517386_37 = PRIM_CAR(_3517385_37);
Obj c = _3517386_37;
Obj _3517387_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517388_37 = PRIM_CDR(_3517387_37);
Obj _3517389_37 = PRIM_CDR(_3517388_37);
Obj _3517390_37 = PRIM_CDR(_3517389_37);
Obj _3517391_37 = PRIM_EQ(Nil, _3517390_37);
if (True == _3517391_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[69]), b, makeNative(co->gc, 2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516566_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516566_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516566_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516566_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516566_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516566_37);
return;
}
}
}
}

static void clofun48(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rb = R[1];
R[1] = rb;
saveCont(co, clofun48, 1, R);
coraCall2(co, globalRef(co, __symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3517392_37= co->res;
Obj rb = R[1];
Obj _3517393_37 = makeCons(co->gc, _3517392_37, Nil);
Obj _3517394_37 = makeCons(co->gc, rb, _3517393_37);
Obj _3517395_37 = makeCons(co->gc, closureRef(R[0], 0), _3517394_37);
Obj _3517396_37 = makeCons(co->gc, globalRef(co, __symbolTable[86]), _3517395_37);
coraReturn(co, _3517396_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516567_37 = makeNative(co->gc, 1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517322_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517322_37) {
Obj _3517323_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517324_37 = PRIM_EQ(globalRef(co, __symbolTable[78]), _3517323_37);
if (True == _3517324_37) {
Obj _3517325_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517326_37 = PRIM_ISCONS(_3517325_37);
if (True == _3517326_37) {
Obj _3517327_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517328_37 = PRIM_CAR(_3517327_37);
Obj _3517329_37 = PRIM_ISCONS(_3517328_37);
if (True == _3517329_37) {
Obj _3517330_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517331_37 = PRIM_CAR(_3517330_37);
Obj _3517332_37 = PRIM_CAR(_3517331_37);
Obj _3517333_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3517332_37);
if (True == _3517333_37) {
Obj _3517334_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517335_37 = PRIM_CAR(_3517334_37);
Obj _3517336_37 = PRIM_CDR(_3517335_37);
Obj _3517337_37 = PRIM_ISCONS(_3517336_37);
if (True == _3517337_37) {
Obj _3517338_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517339_37 = PRIM_CAR(_3517338_37);
Obj _3517340_37 = PRIM_CDR(_3517339_37);
Obj _3517341_37 = PRIM_CAR(_3517340_37);
Obj args = _3517341_37;
Obj _3517342_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517343_37 = PRIM_CAR(_3517342_37);
Obj _3517344_37 = PRIM_CDR(_3517343_37);
Obj _3517345_37 = PRIM_CDR(_3517344_37);
Obj _3517346_37 = PRIM_ISCONS(_3517345_37);
if (True == _3517346_37) {
Obj _3517347_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517348_37 = PRIM_CAR(_3517347_37);
Obj _3517349_37 = PRIM_CDR(_3517348_37);
Obj _3517350_37 = PRIM_CDR(_3517349_37);
Obj _3517351_37 = PRIM_CAR(_3517350_37);
Obj body = _3517351_37;
Obj _3517352_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517353_37 = PRIM_CAR(_3517352_37);
Obj _3517354_37 = PRIM_CDR(_3517353_37);
Obj _3517355_37 = PRIM_CDR(_3517354_37);
Obj _3517356_37 = PRIM_CDR(_3517355_37);
Obj _3517357_37 = PRIM_EQ(Nil, _3517356_37);
if (True == _3517357_37) {
Obj _3517358_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517359_37 = PRIM_CDR(_3517358_37);
Obj frees = _3517359_37;
R[1] = args;
R[2] = frees;
saveCont(co, clofun47, 1, R);
coraCall2(co, globalRef(co, __symbolTable[69]), body, globalRef(co, __symbolTable[70]));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516567_37);
return;
}
}
case 1:
{
Obj _3517360_37= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj _3517361_37 = makeCons(co->gc, _3517360_37, Nil);
Obj _3517362_37 = makeCons(co->gc, args, _3517361_37);
Obj _3517363_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3517362_37);
Obj _3517364_37 = makeCons(co->gc, _3517363_37, frees);
Obj _3517365_37 = makeCons(co->gc, globalRef(co, __symbolTable[78]), _3517364_37);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), _3517365_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517318_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517318_37) {
Obj _3517319_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517319_37;
Obj _3517320_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517320_37;
Obj _3517321_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[68]), _3517321_37, Nil, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun45(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517314_37 = makeCons(co->gc, x, Nil);
Obj _3517315_37 = makeCons(co->gc, globalRef(co, __symbolTable[72]), _3517314_37);
coraReturn(co, _3517315_37);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516553_37 = R[1];
Obj _3516554_37 = R[2];
R[1] = _3516554_37;
R[2] = _3516553_37;
saveCont(co, clofun44, 6, R);
coraCall1(co, globalRef(co, __symbolTable[79]), _3516554_37);
return;
}
case 1:
{
Obj _3517243_37= co->res;
Obj _3516554_37 = R[1];
Obj pos = _3517243_37;
Obj _3517244_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3517244_37) {
coraReturn(co, _3516554_37);
return;
} else {
Obj _3517245_37 = makeCons(co->gc, pos, Nil);
Obj _3517246_37 = makeCons(co->gc, globalRef(co, __symbolTable[77]), _3517245_37);
coraReturn(co, _3517246_37);
return;
}
}
case 2:
{
Obj _3517310_37= co->res;
Obj _3517308_37 = R[1];
Obj _3517311_37 = makeCons(co->gc, _3517308_37, _3517310_37);
Obj _3517312_37 = makeCons(co->gc, globalRef(co, __symbolTable[78]), _3517311_37);
coraReturn(co, _3517312_37);
return;
}
case 3:
{
Obj _3517309_37= co->res;
Obj fvs1 = R[1];
Obj _3517308_37 = R[2];
R[1] = _3517308_37;
saveCont(co, clofun44, 2, R);
coraCall2(co, globalRef(co, __symbolTable[92]), _3517309_37, fvs1);
return;
}
case 4:
{
Obj _3517305_37= co->res;
Obj args = R[1];
Obj _3516553_37 = R[2];
Obj fvs1 = R[3];
Obj _3517306_37 = makeCons(co->gc, _3517305_37, Nil);
Obj _3517307_37 = makeCons(co->gc, args, _3517306_37);
Obj _3517308_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3517307_37);
R[1] = fvs1;
R[2] = _3517308_37;
saveCont(co, clofun44, 3, R);
coraCall1(co, globalRef(co, __symbolTable[71]), _3516553_37);
return;
}
case 5:
{
Obj _3517304_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3516553_37 = R[3];
Obj fvs1 = _3517304_37;
R[1] = args;
R[2] = _3516553_37;
R[3] = fvs1;
saveCont(co, clofun44, 4, R);
coraCall2(co, globalRef(co, __symbolTable[71]), fvs1, body);
return;
}
case 6:
{
Obj _3517241_37= co->res;
Obj _3516554_37 = R[1];
Obj _3516553_37 = R[2];
if (True == _3517241_37) {
coraReturn(co, _3516554_37);
return;
} else {
Obj _3517242_37 = primIsSymbol(_3516554_37);
if (True == _3517242_37) {
R[1] = _3516554_37;
saveCont(co, clofun44, 1, R);
coraCall2(co, globalRef(co, __symbolTable[124]), _3516554_37, _3516553_37);
return;
} else {
Obj _3516557_37 = makeNative(co->gc, 3, clofun43, 0, 2, _3516554_37, _3516553_37);
Obj _3517284_37 = PRIM_ISCONS(_3516554_37);
if (True == _3517284_37) {
Obj _3517285_37 = PRIM_CAR(_3516554_37);
Obj _3517286_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3517285_37);
if (True == _3517286_37) {
Obj _3517287_37 = PRIM_CDR(_3516554_37);
Obj _3517288_37 = PRIM_ISCONS(_3517287_37);
if (True == _3517288_37) {
Obj _3517289_37 = PRIM_CDR(_3516554_37);
Obj _3517290_37 = PRIM_CAR(_3517289_37);
Obj args = _3517290_37;
Obj _3517291_37 = PRIM_CDR(_3516554_37);
Obj _3517292_37 = PRIM_CDR(_3517291_37);
Obj _3517293_37 = PRIM_ISCONS(_3517292_37);
if (True == _3517293_37) {
Obj _3517294_37 = PRIM_CDR(_3516554_37);
Obj _3517295_37 = PRIM_CDR(_3517294_37);
Obj _3517296_37 = PRIM_CAR(_3517295_37);
Obj body = _3517296_37;
Obj _3517297_37 = PRIM_CDR(_3516554_37);
Obj _3517298_37 = PRIM_CDR(_3517297_37);
Obj _3517299_37 = PRIM_CDR(_3517298_37);
Obj _3517300_37 = PRIM_EQ(Nil, _3517299_37);
if (True == _3517300_37) {
Obj _3517301_37 = makeCons(co->gc, body, Nil);
Obj _3517302_37 = makeCons(co->gc, args, _3517301_37);
Obj _3517303_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3517302_37);
R[1] = body;
R[2] = args;
R[3] = _3516553_37;
saveCont(co, clofun44, 5, R);
coraCall1(co, globalRef(co, __symbolTable[76]), _3517303_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516557_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516557_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516557_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516557_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516557_37);
return;
}
}
}
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516558_37 = makeNative(co->gc, 3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517252_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517252_37) {
Obj _3517253_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517254_37 = PRIM_EQ(globalRef(co, __symbolTable[86]), _3517253_37);
if (True == _3517254_37) {
Obj _3517255_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517256_37 = PRIM_ISCONS(_3517255_37);
if (True == _3517256_37) {
Obj _3517257_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517258_37 = PRIM_CAR(_3517257_37);
Obj a = _3517258_37;
Obj _3517259_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517260_37 = PRIM_CDR(_3517259_37);
Obj _3517261_37 = PRIM_ISCONS(_3517260_37);
if (True == _3517261_37) {
Obj _3517262_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517263_37 = PRIM_CDR(_3517262_37);
Obj _3517264_37 = PRIM_CAR(_3517263_37);
Obj b = _3517264_37;
Obj _3517265_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517266_37 = PRIM_CDR(_3517265_37);
Obj _3517267_37 = PRIM_CDR(_3517266_37);
Obj _3517268_37 = PRIM_ISCONS(_3517267_37);
if (True == _3517268_37) {
Obj _3517269_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517270_37 = PRIM_CDR(_3517269_37);
Obj _3517271_37 = PRIM_CDR(_3517270_37);
Obj _3517272_37 = PRIM_CAR(_3517271_37);
Obj c = _3517272_37;
Obj _3517273_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517274_37 = PRIM_CDR(_3517273_37);
Obj _3517275_37 = PRIM_CDR(_3517274_37);
Obj _3517276_37 = PRIM_CDR(_3517275_37);
Obj _3517277_37 = PRIM_EQ(Nil, _3517276_37);
if (True == _3517277_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun43, 2, R);
coraCall2(co, globalRef(co, __symbolTable[71]), closureRef(R[0], 1), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516558_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516558_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516558_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516558_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516558_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516558_37);
return;
}
}
case 1:
{
Obj _3517279_37= co->res;
Obj _3517278_37 = R[1];
Obj a = R[2];
Obj _3517280_37 = makeCons(co->gc, _3517279_37, Nil);
Obj _3517281_37 = makeCons(co->gc, _3517278_37, _3517280_37);
Obj _3517282_37 = makeCons(co->gc, a, _3517281_37);
Obj _3517283_37 = makeCons(co->gc, globalRef(co, __symbolTable[86]), _3517282_37);
coraReturn(co, _3517283_37);
return;
}
case 2:
{
Obj _3517278_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = _3517278_37;
R[2] = a;
saveCont(co, clofun43, 1, R);
coraCall2(co, globalRef(co, __symbolTable[71]), closureRef(R[0], 1), c);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517247_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517247_37) {
Obj _3517248_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517248_37;
Obj _3517249_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517249_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, __symbolTable[71]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517250_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517251_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[92]), _3517250_37, _3517251_37);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516540_37 = R[1];
R[1] = _3516540_37;
saveCont(co, clofun41, 2, R);
coraCall1(co, globalRef(co, __symbolTable[79]), _3516540_37);
return;
}
case 1:
{
Obj _3517239_37= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[80]), _3517239_37, args);
return;
}
case 2:
{
Obj _3517066_37= co->res;
Obj _3516540_37 = R[1];
if (True == _3517066_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517067_37 = primIsSymbol(_3516540_37);
if (True == _3517067_37) {
Obj _3517068_37 = makeCons(co->gc, _3516540_37, Nil);
coraReturn(co, _3517068_37);
return;
} else {
Obj _3516543_37 = makeNative(co->gc, 1, clofun40, 0, 1, _3516540_37);
Obj _3517222_37 = PRIM_ISCONS(_3516540_37);
if (True == _3517222_37) {
Obj _3517223_37 = PRIM_CAR(_3516540_37);
Obj _3517224_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3517223_37);
if (True == _3517224_37) {
Obj _3517225_37 = PRIM_CDR(_3516540_37);
Obj _3517226_37 = PRIM_ISCONS(_3517225_37);
if (True == _3517226_37) {
Obj _3517227_37 = PRIM_CDR(_3516540_37);
Obj _3517228_37 = PRIM_CAR(_3517227_37);
Obj args = _3517228_37;
Obj _3517229_37 = PRIM_CDR(_3516540_37);
Obj _3517230_37 = PRIM_CDR(_3517229_37);
Obj _3517231_37 = PRIM_ISCONS(_3517230_37);
if (True == _3517231_37) {
Obj _3517232_37 = PRIM_CDR(_3516540_37);
Obj _3517233_37 = PRIM_CDR(_3517232_37);
Obj _3517234_37 = PRIM_CAR(_3517233_37);
Obj body = _3517234_37;
Obj _3517235_37 = PRIM_CDR(_3516540_37);
Obj _3517236_37 = PRIM_CDR(_3517235_37);
Obj _3517237_37 = PRIM_CDR(_3517236_37);
Obj _3517238_37 = PRIM_EQ(Nil, _3517237_37);
if (True == _3517238_37) {
R[1] = args;
saveCont(co, clofun41, 1, R);
coraCall1(co, globalRef(co, __symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516543_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516543_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516543_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516543_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516543_37);
return;
}
}
}
}
}
}

static void clofun40(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516544_37 = makeNative(co->gc, 1, clofun39, 0, 1, closureRef(R[0], 0));
Obj _3517192_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517192_37) {
Obj _3517193_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517194_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3517193_37);
if (True == _3517194_37) {
Obj _3517195_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517196_37 = PRIM_ISCONS(_3517195_37);
if (True == _3517196_37) {
Obj _3517197_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517198_37 = PRIM_CAR(_3517197_37);
Obj x = _3517198_37;
Obj _3517199_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517200_37 = PRIM_CDR(_3517199_37);
Obj _3517201_37 = PRIM_ISCONS(_3517200_37);
if (True == _3517201_37) {
Obj _3517202_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517203_37 = PRIM_CDR(_3517202_37);
Obj _3517204_37 = PRIM_CAR(_3517203_37);
Obj y = _3517204_37;
Obj _3517205_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517206_37 = PRIM_CDR(_3517205_37);
Obj _3517207_37 = PRIM_CDR(_3517206_37);
Obj _3517208_37 = PRIM_ISCONS(_3517207_37);
if (True == _3517208_37) {
Obj _3517209_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517210_37 = PRIM_CDR(_3517209_37);
Obj _3517211_37 = PRIM_CDR(_3517210_37);
Obj _3517212_37 = PRIM_CAR(_3517211_37);
Obj z = _3517212_37;
Obj _3517213_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517214_37 = PRIM_CDR(_3517213_37);
Obj _3517215_37 = PRIM_CDR(_3517214_37);
Obj _3517216_37 = PRIM_CDR(_3517215_37);
Obj _3517217_37 = PRIM_EQ(Nil, _3517216_37);
if (True == _3517217_37) {
Obj _3517218_37 = makeCons(co->gc, z, Nil);
Obj _3517219_37 = makeCons(co->gc, y, _3517218_37);
Obj _3517220_37 = makeCons(co->gc, x, _3517219_37);
saveCont(co, clofun40, 1, R);
coraCall2(co, globalRef(co, __symbolTable[92]), globalRef(co, __symbolTable[76]), _3517220_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516544_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516544_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516544_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516544_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516544_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516544_37);
return;
}
}
case 1:
{
Obj _3517221_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), globalRef(co, __symbolTable[81]), Nil, _3517221_37);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516545_37 = makeNative(co->gc, 3, clofun38, 0, 1, closureRef(R[0], 0));
Obj _3517172_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517172_37) {
Obj _3517173_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517174_37 = PRIM_EQ(globalRef(co, __symbolTable[85]), _3517173_37);
if (True == _3517174_37) {
Obj _3517175_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517176_37 = PRIM_ISCONS(_3517175_37);
if (True == _3517176_37) {
Obj _3517177_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517178_37 = PRIM_CAR(_3517177_37);
Obj x = _3517178_37;
Obj _3517179_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517180_37 = PRIM_CDR(_3517179_37);
Obj _3517181_37 = PRIM_ISCONS(_3517180_37);
if (True == _3517181_37) {
Obj _3517182_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517183_37 = PRIM_CDR(_3517182_37);
Obj _3517184_37 = PRIM_CAR(_3517183_37);
Obj y = _3517184_37;
Obj _3517185_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517186_37 = PRIM_CDR(_3517185_37);
Obj _3517187_37 = PRIM_CDR(_3517186_37);
Obj _3517188_37 = PRIM_EQ(Nil, _3517187_37);
if (True == _3517188_37) {
Obj _3517189_37 = makeCons(co->gc, y, Nil);
Obj _3517190_37 = makeCons(co->gc, x, _3517189_37);
saveCont(co, clofun39, 1, R);
coraCall2(co, globalRef(co, __symbolTable[92]), globalRef(co, __symbolTable[76]), _3517190_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516545_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516545_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516545_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516545_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516545_37);
return;
}
}
case 1:
{
Obj _3517191_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), globalRef(co, __symbolTable[81]), Nil, _3517191_37);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516546_37 = makeNative(co->gc, 1, clofun37, 0, 1, closureRef(R[0], 0));
Obj _3517142_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517142_37) {
Obj _3517143_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517144_37 = PRIM_EQ(globalRef(co, __symbolTable[86]), _3517143_37);
if (True == _3517144_37) {
Obj _3517145_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517146_37 = PRIM_ISCONS(_3517145_37);
if (True == _3517146_37) {
Obj _3517147_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517148_37 = PRIM_CAR(_3517147_37);
Obj a = _3517148_37;
Obj _3517149_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517150_37 = PRIM_CDR(_3517149_37);
Obj _3517151_37 = PRIM_ISCONS(_3517150_37);
if (True == _3517151_37) {
Obj _3517152_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517153_37 = PRIM_CDR(_3517152_37);
Obj _3517154_37 = PRIM_CAR(_3517153_37);
Obj b = _3517154_37;
Obj _3517155_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517156_37 = PRIM_CDR(_3517155_37);
Obj _3517157_37 = PRIM_CDR(_3517156_37);
Obj _3517158_37 = PRIM_ISCONS(_3517157_37);
if (True == _3517158_37) {
Obj _3517159_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517160_37 = PRIM_CDR(_3517159_37);
Obj _3517161_37 = PRIM_CDR(_3517160_37);
Obj _3517162_37 = PRIM_CAR(_3517161_37);
Obj c = _3517162_37;
Obj _3517163_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517164_37 = PRIM_CDR(_3517163_37);
Obj _3517165_37 = PRIM_CDR(_3517164_37);
Obj _3517166_37 = PRIM_CDR(_3517165_37);
Obj _3517167_37 = PRIM_EQ(Nil, _3517166_37);
if (True == _3517167_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun38, 3, R);
coraCall1(co, globalRef(co, __symbolTable[76]), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516546_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516546_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516546_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516546_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516546_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516546_37);
return;
}
}
case 1:
{
Obj _3517171_37= co->res;
Obj _3517168_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[81]), _3517168_37, _3517171_37);
return;
}
case 2:
{
Obj _3517169_37= co->res;
Obj a = R[1];
Obj _3517168_37 = R[2];
Obj _3517170_37 = makeCons(co->gc, a, Nil);
R[1] = _3517168_37;
saveCont(co, clofun38, 1, R);
coraCall2(co, globalRef(co, __symbolTable[80]), _3517169_37, _3517170_37);
return;
}
case 3:
{
Obj _3517168_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = _3517168_37;
saveCont(co, clofun38, 2, R);
coraCall1(co, globalRef(co, __symbolTable[76]), c);
return;
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516547_37 = makeNative(co->gc, 1, clofun36, 0, 1, closureRef(R[0], 0));
Obj _3517132_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517132_37) {
Obj _3517133_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517134_37 = PRIM_EQ(globalRef(co, __symbolTable[78]), _3517133_37);
if (True == _3517134_37) {
Obj _3517135_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517136_37 = PRIM_ISCONS(_3517135_37);
if (True == _3517136_37) {
Obj _3517137_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517138_37 = PRIM_CAR(_3517137_37);
Obj lam = _3517138_37;
Obj _3517139_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517140_37 = PRIM_CDR(_3517139_37);
Obj more = _3517140_37;
Obj _3517141_37 = makeCons(co->gc, lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[76]), _3517141_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516547_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516547_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516547_37);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516548_37 = makeNative(co->gc, 1, clofun35, 0, 1, closureRef(R[0], 0));
Obj _3517122_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517122_37) {
Obj _3517123_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517124_37 = PRIM_EQ(globalRef(co, __symbolTable[72]), _3517123_37);
if (True == _3517124_37) {
Obj _3517125_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517126_37 = PRIM_ISCONS(_3517125_37);
if (True == _3517126_37) {
Obj _3517127_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517128_37 = PRIM_CAR(_3517127_37);
Obj x = _3517128_37;
Obj _3517129_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517130_37 = PRIM_CDR(_3517129_37);
Obj _3517131_37 = PRIM_EQ(Nil, _3517130_37);
if (True == _3517131_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[76]), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516548_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516548_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516548_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516548_37);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516549_37 = makeNative(co->gc, 1, clofun34, 0, 1, closureRef(R[0], 0));
Obj _3517102_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517102_37) {
Obj _3517103_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517104_37 = PRIM_EQ(globalRef(co, __symbolTable[73]), _3517103_37);
if (True == _3517104_37) {
Obj _3517105_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517106_37 = PRIM_ISCONS(_3517105_37);
if (True == _3517106_37) {
Obj _3517107_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517108_37 = PRIM_CAR(_3517107_37);
Obj exp = _3517108_37;
Obj _3517109_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517110_37 = PRIM_CDR(_3517109_37);
Obj _3517111_37 = PRIM_ISCONS(_3517110_37);
if (True == _3517111_37) {
Obj _3517112_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517113_37 = PRIM_CDR(_3517112_37);
Obj _3517114_37 = PRIM_CAR(_3517113_37);
Obj cont = _3517114_37;
Obj _3517115_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517116_37 = PRIM_CDR(_3517115_37);
Obj _3517117_37 = PRIM_CDR(_3517116_37);
Obj _3517118_37 = PRIM_EQ(Nil, _3517117_37);
if (True == _3517118_37) {
Obj _3517119_37 = makeCons(co->gc, cont, Nil);
Obj _3517120_37 = makeCons(co->gc, exp, _3517119_37);
saveCont(co, clofun35, 1, R);
coraCall2(co, globalRef(co, __symbolTable[92]), globalRef(co, __symbolTable[76]), _3517120_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516549_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516549_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516549_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516549_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516549_37);
return;
}
}
case 1:
{
Obj _3517121_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), globalRef(co, __symbolTable[81]), Nil, _3517121_37);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516550_37 = makeNative(co->gc, 2, clofun33, 0, 1, closureRef(R[0], 0));
Obj _3517092_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517092_37) {
Obj _3517093_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517094_37 = PRIM_EQ(globalRef(co, __symbolTable[74]), _3517093_37);
if (True == _3517094_37) {
Obj _3517095_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517096_37 = PRIM_ISCONS(_3517095_37);
if (True == _3517096_37) {
Obj _3517097_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517098_37 = PRIM_CAR(_3517097_37);
Obj exp = _3517098_37;
Obj _3517099_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517100_37 = PRIM_CDR(_3517099_37);
Obj _3517101_37 = PRIM_EQ(Nil, _3517100_37);
if (True == _3517101_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[76]), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516550_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516550_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516550_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516550_37);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516551_37 = makeNative(co->gc, 1, clofun32, 0, 1, closureRef(R[0], 0));
Obj _3517074_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517074_37) {
Obj _3517075_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517076_37 = PRIM_EQ(globalRef(co, __symbolTable[75]), _3517075_37);
if (True == _3517076_37) {
Obj _3517077_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517078_37 = PRIM_ISCONS(_3517077_37);
if (True == _3517078_37) {
Obj _3517079_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517080_37 = PRIM_CAR(_3517079_37);
Obj arg = _3517080_37;
Obj _3517081_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517082_37 = PRIM_CDR(_3517081_37);
Obj _3517083_37 = PRIM_ISCONS(_3517082_37);
if (True == _3517083_37) {
Obj _3517084_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517085_37 = PRIM_CDR(_3517084_37);
Obj _3517086_37 = PRIM_CAR(_3517085_37);
Obj body = _3517086_37;
Obj _3517087_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517088_37 = PRIM_CDR(_3517087_37);
Obj _3517089_37 = PRIM_CDR(_3517088_37);
Obj _3517090_37 = PRIM_EQ(Nil, _3517089_37);
if (True == _3517090_37) {
R[1] = arg;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(co, __symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516551_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516551_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516551_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516551_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516551_37);
return;
}
}
case 1:
{
Obj _3517091_37= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[80]), _3517091_37, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517069_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517069_37) {
Obj _3517070_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517070_37;
Obj _3517071_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517071_37;
Obj _3517072_37 = makeCons(co->gc, f, args);
saveCont(co, clofun32, 1, R);
coraCall2(co, globalRef(co, __symbolTable[92]), globalRef(co, __symbolTable[76]), _3517072_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517073_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), globalRef(co, __symbolTable[81]), Nil, _3517073_37);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516532_37 = R[1];
Obj _3516533_37 = makeNative(co->gc, 1, clofun30, 0, 1, _3516532_37);
Obj _3517055_37 = PRIM_ISCONS(_3516532_37);
if (True == _3517055_37) {
Obj _3517056_37 = PRIM_CAR(_3516532_37);
Obj _3517057_37 = PRIM_EQ(globalRef(co, __symbolTable[96]), _3517056_37);
if (True == _3517057_37) {
Obj _3517058_37 = PRIM_CDR(_3516532_37);
Obj _3517059_37 = PRIM_ISCONS(_3517058_37);
if (True == _3517059_37) {
Obj _3517060_37 = PRIM_CDR(_3516532_37);
Obj _3517061_37 = PRIM_CAR(_3517060_37);
Obj _3517062_37 = PRIM_CDR(_3516532_37);
Obj _3517063_37 = PRIM_CDR(_3517062_37);
Obj _3517064_37 = PRIM_EQ(Nil, _3517063_37);
if (True == _3517064_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516533_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516533_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516533_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516533_37);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516534_37 = makeNative(co->gc, 1, clofun29, 0, 1, closureRef(R[0], 0));
Obj _3517045_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517045_37) {
Obj _3517046_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517047_37 = PRIM_EQ(globalRef(co, __symbolTable[93]), _3517046_37);
if (True == _3517047_37) {
Obj _3517048_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517049_37 = PRIM_ISCONS(_3517048_37);
if (True == _3517049_37) {
Obj _3517050_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517051_37 = PRIM_CAR(_3517050_37);
Obj _3517052_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517053_37 = PRIM_CDR(_3517052_37);
Obj _3517054_37 = PRIM_EQ(Nil, _3517053_37);
if (True == _3517054_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516534_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516534_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516534_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516534_37);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516535_37 = makeNative(co->gc, 1, clofun28, 0, 1, closureRef(R[0], 0));
Obj _3517035_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517035_37) {
Obj _3517036_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517037_37 = PRIM_EQ(globalRef(co, __symbolTable[90]), _3517036_37);
if (True == _3517037_37) {
Obj _3517038_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517039_37 = PRIM_ISCONS(_3517038_37);
if (True == _3517039_37) {
Obj _3517040_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517041_37 = PRIM_CAR(_3517040_37);
Obj _3517042_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517043_37 = PRIM_CDR(_3517042_37);
Obj _3517044_37 = PRIM_EQ(Nil, _3517043_37);
if (True == _3517044_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516535_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516535_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516535_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516535_37);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516536_37 = makeNative(co->gc, 1, clofun27, 0, 1, closureRef(R[0], 0));
Obj _3517025_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517025_37) {
Obj _3517026_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517027_37 = PRIM_EQ(globalRef(co, __symbolTable[84]), _3517026_37);
if (True == _3517027_37) {
Obj _3517028_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517029_37 = PRIM_ISCONS(_3517028_37);
if (True == _3517029_37) {
Obj _3517030_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517031_37 = PRIM_CAR(_3517030_37);
Obj _3517032_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517033_37 = PRIM_CDR(_3517032_37);
Obj _3517034_37 = PRIM_EQ(Nil, _3517033_37);
if (True == _3517034_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516536_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516536_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516536_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516536_37);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516537_37 = makeNative(co->gc, 2, clofun26, 0, 1, closureRef(R[0], 0));
Obj _3517015_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517015_37) {
Obj _3517016_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517017_37 = PRIM_EQ(globalRef(co, __symbolTable[77]), _3517016_37);
if (True == _3517017_37) {
Obj _3517018_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517019_37 = PRIM_ISCONS(_3517018_37);
if (True == _3517019_37) {
Obj _3517020_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517021_37 = PRIM_CAR(_3517020_37);
Obj _3517022_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517023_37 = PRIM_CDR(_3517022_37);
Obj _3517024_37 = PRIM_EQ(Nil, _3517023_37);
if (True == _3517024_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516537_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516537_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516537_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516537_37);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516538_37 = makeNative(co->gc, 1, clofun25, 0, 0);
Obj _3517005_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517005_37) {
Obj _3517006_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517007_37 = PRIM_EQ(globalRef(co, __symbolTable[78]), _3517006_37);
if (True == _3517007_37) {
Obj _3517008_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517009_37 = PRIM_ISCONS(_3517008_37);
if (True == _3517009_37) {
Obj _3517010_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517011_37 = PRIM_CAR(_3517010_37);
Obj label = _3517011_37;
Obj _3517012_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517013_37 = PRIM_CDR(_3517012_37);
R[1] = _3516538_37;
saveCont(co, clofun26, 1, R);
coraCall1(co, globalRef(co, __symbolTable[83]), label);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516538_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516538_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516538_37);
return;
}
}
case 1:
{
Obj _3517014_37= co->res;
Obj _3516538_37 = R[1];
if (True == _3517014_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516538_37);
return;
}
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
coraReturn(co, False);
return;
}
}
}

static void clofun24(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516527_37 = R[1];
Obj _3516528_37 = R[2];
Obj _3516994_37 = PRIM_EQ(Nil, _3516527_37);
if (True == _3516994_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3516530_37 = makeNative(co->gc, 2, clofun23, 0, 2, _3516527_37, _3516528_37);
Obj _3517000_37 = PRIM_ISCONS(_3516527_37);
if (True == _3517000_37) {
Obj _3517001_37 = PRIM_CAR(_3516527_37);
Obj x = _3517001_37;
Obj _3517002_37 = PRIM_CDR(_3516527_37);
Obj y = _3517002_37;
R[1] = y;
R[2] = _3516528_37;
R[3] = _3516530_37;
saveCont(co, clofun24, 1, R);
coraCall2(co, globalRef(co, __symbolTable[95]), x, _3516528_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
}
}
case 1:
{
Obj _3517003_37= co->res;
Obj y = R[1];
Obj _3516528_37 = R[2];
Obj _3516530_37 = R[3];
if (True == _3517003_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[80]), y, _3516528_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516995_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516995_37) {
Obj _3516996_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3516996_37;
Obj _3516997_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3516997_37;
R[1] = x;
saveCont(co, clofun23, 1, R);
coraCall2(co, globalRef(co, __symbolTable[80]), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3516998_37= co->res;
Obj x = R[1];
Obj _3516999_37 = makeCons(co->gc, x, _3516998_37);
coraReturn(co, _3516999_37);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516522_37 = R[1];
Obj _3516523_37 = R[2];
Obj _3516983_37 = PRIM_EQ(Nil, _3516522_37);
if (True == _3516983_37) {
coraReturn(co, _3516523_37);
return;
} else {
Obj _3516525_37 = makeNative(co->gc, 2, clofun21, 0, 2, _3516522_37, _3516523_37);
Obj _3516989_37 = PRIM_ISCONS(_3516522_37);
if (True == _3516989_37) {
Obj _3516990_37 = PRIM_CAR(_3516522_37);
Obj x = _3516990_37;
Obj _3516991_37 = PRIM_CDR(_3516522_37);
Obj y = _3516991_37;
R[1] = y;
R[2] = _3516523_37;
R[3] = _3516525_37;
saveCont(co, clofun22, 1, R);
coraCall2(co, globalRef(co, __symbolTable[95]), x, _3516523_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516525_37);
return;
}
}
}
case 1:
{
Obj _3516992_37= co->res;
Obj y = R[1];
Obj _3516523_37 = R[2];
Obj _3516525_37 = R[3];
if (True == _3516992_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[81]), y, _3516523_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516525_37);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516984_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516984_37) {
Obj _3516985_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3516985_37;
Obj _3516986_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3516986_37;
R[1] = x;
saveCont(co, clofun21, 1, R);
coraCall2(co, globalRef(co, __symbolTable[81]), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3516987_37= co->res;
Obj x = R[1];
Obj _3516988_37 = makeCons(co->gc, x, _3516987_37);
coraReturn(co, _3516988_37);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516508_37 = R[1];
Obj _3516509_37 = R[2];
Obj _3516510_37 = R[3];
Obj _3516652_37 = makeNative(co->gc, 2, clofun19, 1, 3, _3516508_37, _3516510_37, _3516509_37);
R[1] = _3516510_37;
R[2] = _3516652_37;
saveCont(co, clofun20, 3, R);
coraCall1(co, globalRef(co, __symbolTable[83]), _3516510_37);
return;
}
case 1:
{
Obj _3516981_37= co->res;
Obj _3516652_37 = R[1];
if (True == _3516981_37) {
co->ctx.sp = R;
coraCall1(co, _3516652_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516652_37, False);
return;
}
}
case 2:
{
Obj _3516980_37= co->res;
Obj _3516510_37 = R[1];
Obj _3516652_37 = R[2];
if (True == _3516980_37) {
co->ctx.sp = R;
coraCall1(co, _3516652_37, True);
return;
} else {
R[1] = _3516652_37;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(co, __symbolTable[103]), _3516510_37);
return;
}
}
case 3:
{
Obj _3516978_37= co->res;
Obj _3516510_37 = R[1];
Obj _3516652_37 = R[2];
if (True == _3516978_37) {
co->ctx.sp = R;
coraCall1(co, _3516652_37, True);
return;
} else {
Obj _3516979_37 = primIsString(_3516510_37);
if (True == _3516979_37) {
co->ctx.sp = R;
coraCall1(co, _3516652_37, True);
return;
} else {
R[1] = _3516510_37;
R[2] = _3516652_37;
saveCont(co, clofun20, 2, R);
coraCall1(co, globalRef(co, __symbolTable[82]), _3516510_37);
return;
}
}
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516653_37 = R[1];
if (True == _3516653_37) {
Obj _3516789_37 = makeCons(co->gc, closureRef(R[0], 1), Nil);
Obj _3516790_37 = makeCons(co->gc, globalRef(co, __symbolTable[96]), _3516789_37);
coraReturn(co, _3516790_37);
return;
} else {
Obj _3516512_37 = makeNative(co->gc, 3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj _3516965_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3516965_37) {
Obj _3516966_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3516967_37 = PRIM_EQ(globalRef(co, __symbolTable[84]), _3516966_37);
if (True == _3516967_37) {
Obj _3516968_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3516969_37 = PRIM_ISCONS(_3516968_37);
if (True == _3516969_37) {
Obj _3516970_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3516971_37 = PRIM_CAR(_3516970_37);
Obj x = _3516971_37;
Obj _3516972_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3516973_37 = PRIM_CDR(_3516972_37);
Obj _3516974_37 = PRIM_EQ(Nil, _3516973_37);
if (True == _3516974_37) {
R[1] = x;
saveCont(co, clofun19, 1, R);
coraCall2(co, globalRef(co, __symbolTable[94]), x, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516512_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516512_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516512_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516512_37);
return;
}
}
}
case 1:
{
Obj _3516975_37= co->res;
Obj x = R[1];
Obj _3516976_37 = makeCons(co->gc, x, Nil);
Obj _3516977_37 = makeCons(co->gc, globalRef(co, __symbolTable[96]), _3516976_37);
coraReturn(co, _3516977_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516791_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3516791_37) {
saveCont(co, clofun18, 2, R);
coraCall2(co, globalRef(co, __symbolTable[95]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3516514_37 = makeNative(co->gc, 1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516943_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516943_37) {
Obj _3516944_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516945_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3516944_37);
if (True == _3516945_37) {
Obj _3516946_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516947_37 = PRIM_ISCONS(_3516946_37);
if (True == _3516947_37) {
Obj _3516948_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516949_37 = PRIM_CAR(_3516948_37);
Obj args = _3516949_37;
Obj _3516950_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516951_37 = PRIM_CDR(_3516950_37);
Obj _3516952_37 = PRIM_ISCONS(_3516951_37);
if (True == _3516952_37) {
Obj _3516953_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516954_37 = PRIM_CDR(_3516953_37);
Obj _3516955_37 = PRIM_CAR(_3516954_37);
Obj body = _3516955_37;
Obj _3516956_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516957_37 = PRIM_CDR(_3516956_37);
Obj _3516958_37 = PRIM_CDR(_3516957_37);
Obj _3516959_37 = PRIM_EQ(Nil, _3516958_37);
if (True == _3516959_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun18, 4, R);
coraCall2(co, globalRef(co, __symbolTable[88]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516514_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516514_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516514_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516514_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516514_37);
return;
}
}
}
case 1:
{
Obj _3516793_37= co->res;
Obj _3516794_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3516795_37 = makeCons(co->gc, globalRef(co, __symbolTable[93]), _3516794_37);
coraReturn(co, _3516795_37);
return;
}
case 2:
{
Obj _3516792_37= co->res;
if (True == _3516792_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun18, 1, R);
coraCall2(co, globalRef(co, __symbolTable[94]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
}
case 3:
{
Obj _3516961_37= co->res;
Obj args = R[1];
Obj _3516962_37 = makeCons(co->gc, _3516961_37, Nil);
Obj _3516963_37 = makeCons(co->gc, args, _3516962_37);
Obj _3516964_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3516963_37);
coraReturn(co, _3516964_37);
return;
}
case 4:
{
Obj _3516960_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun18, 3, R);
coraCall3(co, globalRef(co, __symbolTable[97]), _3516960_37, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516515_37 = makeNative(co->gc, 2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516911_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516911_37) {
Obj _3516912_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516913_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3516912_37);
if (True == _3516913_37) {
Obj _3516914_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516915_37 = PRIM_ISCONS(_3516914_37);
if (True == _3516915_37) {
Obj _3516916_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516917_37 = PRIM_CAR(_3516916_37);
Obj _3516918_37 = PRIM_ISCONS(_3516917_37);
if (True == _3516918_37) {
Obj _3516919_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516920_37 = PRIM_CAR(_3516919_37);
Obj _3516921_37 = PRIM_CAR(_3516920_37);
Obj _3516922_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3516921_37);
if (True == _3516922_37) {
Obj _3516923_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516924_37 = PRIM_CAR(_3516923_37);
Obj _3516925_37 = PRIM_CDR(_3516924_37);
Obj exp1 = _3516925_37;
Obj _3516926_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516927_37 = PRIM_CDR(_3516926_37);
Obj exp2 = _3516927_37;
Obj _3516928_37 = primGenSym(co);
Obj f = _3516928_37;
Obj _3516929_37 = primGenSym(co);
Obj v = _3516929_37;
Obj _3516930_37 = makeCons(co->gc, v, Nil);
Obj _3516931_37 = makeCons(co->gc, v, exp2);
Obj _3516932_37 = makeCons(co->gc, globalRef(co, __symbolTable[87]), _3516931_37);
Obj _3516933_37 = makeCons(co->gc, _3516932_37, Nil);
Obj _3516934_37 = makeCons(co->gc, _3516930_37, _3516933_37);
Obj _3516935_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3516934_37);
Obj _3516936_37 = makeCons(co->gc, globalRef(co, __symbolTable[87]), exp1);
Obj _3516937_37 = makeCons(co->gc, _3516936_37, Nil);
Obj _3516938_37 = makeCons(co->gc, f, _3516937_37);
Obj _3516939_37 = makeCons(co->gc, _3516938_37, Nil);
Obj _3516940_37 = makeCons(co->gc, _3516935_37, _3516939_37);
Obj _3516941_37 = makeCons(co->gc, f, _3516940_37);
Obj _3516942_37 = makeCons(co->gc, globalRef(co, __symbolTable[86]), _3516941_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3516942_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516515_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516515_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516515_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516515_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516515_37);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516516_37 = makeNative(co->gc, 2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516904_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516904_37) {
Obj _3516905_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516906_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3516905_37);
if (True == _3516906_37) {
Obj _3516907_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3516907_37;
R[1] = args;
saveCont(co, clofun16, 2, R);
coraCall2(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516516_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516516_37);
return;
}
}
case 1:
{
Obj _3516909_37= co->res;
Obj _3516910_37 = makeCons(co->gc, globalRef(co, __symbolTable[87]), _3516909_37);
coraReturn(co, _3516910_37);
return;
}
case 2:
{
Obj _3516908_37= co->res;
Obj args = R[1];
saveCont(co, clofun16, 1, R);
coraCall2(co, globalRef(co, __symbolTable[92]), _3516908_37, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516517_37 = makeNative(co->gc, 3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516882_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516882_37) {
Obj _3516883_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516884_37 = PRIM_EQ(globalRef(co, __symbolTable[85]), _3516883_37);
if (True == _3516884_37) {
Obj _3516885_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516886_37 = PRIM_ISCONS(_3516885_37);
if (True == _3516886_37) {
Obj _3516887_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516888_37 = PRIM_CAR(_3516887_37);
Obj x = _3516888_37;
Obj _3516889_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516890_37 = PRIM_CDR(_3516889_37);
Obj _3516891_37 = PRIM_ISCONS(_3516890_37);
if (True == _3516891_37) {
Obj _3516892_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516893_37 = PRIM_CDR(_3516892_37);
Obj _3516894_37 = PRIM_CAR(_3516893_37);
Obj y = _3516894_37;
Obj _3516895_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516896_37 = PRIM_CDR(_3516895_37);
Obj _3516897_37 = PRIM_CDR(_3516896_37);
Obj _3516898_37 = PRIM_EQ(Nil, _3516897_37);
if (True == _3516898_37) {
R[1] = y;
saveCont(co, clofun15, 2, R);
coraCall3(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516517_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516517_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516517_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516517_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516517_37);
return;
}
}
case 1:
{
Obj _3516900_37= co->res;
Obj _3516899_37 = R[1];
Obj _3516901_37 = makeCons(co->gc, _3516900_37, Nil);
Obj _3516902_37 = makeCons(co->gc, _3516899_37, _3516901_37);
Obj _3516903_37 = makeCons(co->gc, globalRef(co, __symbolTable[85]), _3516902_37);
coraReturn(co, _3516903_37);
return;
}
case 2:
{
Obj _3516899_37= co->res;
Obj y = R[1];
R[1] = _3516899_37;
saveCont(co, clofun15, 1, R);
coraCall3(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), y);
return;
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516518_37 = makeNative(co->gc, 1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516849_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516849_37) {
Obj _3516850_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516851_37 = PRIM_EQ(globalRef(co, __symbolTable[86]), _3516850_37);
if (True == _3516851_37) {
Obj _3516852_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516853_37 = PRIM_ISCONS(_3516852_37);
if (True == _3516853_37) {
Obj _3516854_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516855_37 = PRIM_CAR(_3516854_37);
Obj a = _3516855_37;
Obj _3516856_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516857_37 = PRIM_CDR(_3516856_37);
Obj _3516858_37 = PRIM_ISCONS(_3516857_37);
if (True == _3516858_37) {
Obj _3516859_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516860_37 = PRIM_CDR(_3516859_37);
Obj _3516861_37 = PRIM_CAR(_3516860_37);
Obj b = _3516861_37;
Obj _3516862_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516863_37 = PRIM_CDR(_3516862_37);
Obj _3516864_37 = PRIM_CDR(_3516863_37);
Obj _3516865_37 = PRIM_ISCONS(_3516864_37);
if (True == _3516865_37) {
Obj _3516866_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516867_37 = PRIM_CDR(_3516866_37);
Obj _3516868_37 = PRIM_CDR(_3516867_37);
Obj _3516869_37 = PRIM_CAR(_3516868_37);
Obj c = _3516869_37;
Obj _3516870_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516871_37 = PRIM_CDR(_3516870_37);
Obj _3516872_37 = PRIM_CDR(_3516871_37);
Obj _3516873_37 = PRIM_CDR(_3516872_37);
Obj _3516874_37 = PRIM_EQ(Nil, _3516873_37);
if (True == _3516874_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun14, 2, R);
coraCall3(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516518_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516518_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516518_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516518_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516518_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516518_37);
return;
}
}
case 1:
{
Obj _3516877_37= co->res;
Obj _3516875_37 = R[1];
Obj a = R[2];
Obj _3516878_37 = makeCons(co->gc, _3516877_37, Nil);
Obj _3516879_37 = makeCons(co->gc, _3516875_37, _3516878_37);
Obj _3516880_37 = makeCons(co->gc, a, _3516879_37);
Obj _3516881_37 = makeCons(co->gc, globalRef(co, __symbolTable[86]), _3516880_37);
coraReturn(co, _3516881_37);
return;
}
case 2:
{
Obj _3516875_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3516876_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3516875_37;
R[2] = a;
saveCont(co, clofun14, 1, R);
coraCall3(co, globalRef(co, __symbolTable[97]), _3516876_37, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516519_37 = makeNative(co->gc, 4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516817_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516817_37) {
Obj _3516818_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516819_37 = PRIM_ISCONS(_3516818_37);
if (True == _3516819_37) {
Obj _3516820_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516821_37 = PRIM_CAR(_3516820_37);
Obj _3516822_37 = PRIM_EQ(globalRef(co, __symbolTable[89]), _3516821_37);
if (True == _3516822_37) {
Obj _3516823_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516824_37 = PRIM_CDR(_3516823_37);
Obj exp1 = _3516824_37;
Obj _3516825_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516826_37 = PRIM_ISCONS(_3516825_37);
if (True == _3516826_37) {
Obj _3516827_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516828_37 = PRIM_CAR(_3516827_37);
Obj _3516829_37 = PRIM_ISCONS(_3516828_37);
if (True == _3516829_37) {
Obj _3516830_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516831_37 = PRIM_CAR(_3516830_37);
Obj _3516832_37 = PRIM_CAR(_3516831_37);
Obj _3516833_37 = PRIM_EQ(globalRef(co, __symbolTable[87]), _3516832_37);
if (True == _3516833_37) {
Obj _3516834_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516835_37 = PRIM_CAR(_3516834_37);
Obj _3516836_37 = PRIM_CDR(_3516835_37);
Obj exp2 = _3516836_37;
Obj _3516837_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516838_37 = PRIM_CDR(_3516837_37);
Obj _3516839_37 = PRIM_EQ(Nil, _3516838_37);
if (True == _3516839_37) {
Obj _3516840_37 = primGenSym(co);
Obj f = _3516840_37;
Obj _3516841_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), exp1);
Obj _3516842_37 = makeCons(co->gc, globalRef(co, __symbolTable[87]), exp2);
Obj _3516843_37 = makeCons(co->gc, _3516842_37, Nil);
Obj _3516844_37 = makeCons(co->gc, f, _3516843_37);
Obj _3516845_37 = makeCons(co->gc, _3516844_37, Nil);
Obj _3516846_37 = makeCons(co->gc, _3516841_37, _3516845_37);
Obj _3516847_37 = makeCons(co->gc, f, _3516846_37);
Obj _3516848_37 = makeCons(co->gc, globalRef(co, __symbolTable[86]), _3516847_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3516848_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516519_37);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516520_37 = makeNative(co->gc, 1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj _3516797_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516797_37) {
Obj _3516798_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3516798_37;
Obj _3516799_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3516799_37;
R[1] = op;
R[2] = args;
R[3] = _3516520_37;
saveCont(co, clofun12, 7, R);
coraCall1(co, globalRef(co, __symbolTable[104]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516520_37);
return;
}
}
case 1:
{
Obj _3516807_37= co->res;
Obj _3516805_37 = R[1];
Obj _3516808_37 = makeCons(co->gc, _3516805_37, _3516807_37);
coraReturn(co, _3516808_37);
return;
}
case 2:
{
Obj _3516806_37= co->res;
Obj args = R[1];
Obj _3516805_37 = R[2];
R[1] = _3516805_37;
saveCont(co, clofun12, 1, R);
coraCall2(co, globalRef(co, __symbolTable[92]), _3516806_37, args);
return;
}
case 3:
{
Obj _3516813_37= co->res;
Obj tmp = R[1];
Obj _3516814_37 = makeCons(co->gc, _3516813_37, Nil);
Obj _3516815_37 = makeCons(co->gc, tmp, _3516814_37);
Obj _3516816_37 = makeCons(co->gc, globalRef(co, __symbolTable[89]), _3516815_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3516816_37);
return;
}
case 4:
{
Obj _3516811_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = _3516811_37;
Obj _3516812_37 = makeCons(co->gc, op, args);
R[1] = tmp;
saveCont(co, clofun12, 3, R);
coraCall2(co, globalRef(co, __symbolTable[88]), _3516812_37, tmp);
return;
}
case 5:
{
Obj _3516802_37= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = _3516802_37;
Obj _3516803_37 = PRIM_EQ(required, provided);
if (True == _3516803_37) {
Obj _3516804_37 = makeCons(co->gc, op, Nil);
Obj _3516805_37 = makeCons(co->gc, globalRef(co, __symbolTable[90]), _3516804_37);
R[1] = args;
R[2] = _3516805_37;
saveCont(co, clofun12, 2, R);
coraCall2(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj _3516809_37 = PRIM_GT(required, provided);
if (True == _3516809_37) {
Obj _3516810_37 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 4, R);
coraCall2(co, globalRef(co, __symbolTable[98]), _3516810_37, Nil);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "primitive call mismatch"));
return;
}
}
}
case 6:
{
Obj _3516801_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = _3516801_37;
R[1] = required;
R[2] = op;
R[3] = args;
saveCont(co, clofun12, 5, R);
coraCall1(co, globalRef(co, __symbolTable[91]), args);
return;
}
case 7:
{
Obj _3516800_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj _3516520_37 = R[3];
if (True == _3516800_37) {
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 6, R);
coraCall1(co, globalRef(co, __symbolTable[100]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516520_37);
return;
}
}
}
}

static void clofun11(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun11, 1, R);
coraCall2(co, globalRef(co, __symbolTable[97]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
case 1:
{
Obj _3516796_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[92]), _3516796_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516504_37 = R[1];
Obj _3516505_37 = R[2];
Obj _3516784_37 = PRIM_EQ(MAKE_NUMBER(0), _3516504_37);
if (True == _3516784_37) {
coraReturn(co, _3516505_37);
return;
} else {
Obj _3516785_37 = PRIM_SUB(_3516504_37, MAKE_NUMBER(1));
Obj _3516786_37 = primGenSym(co);
Obj _3516787_37 = makeCons(co->gc, _3516786_37, _3516505_37);
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[98]), _3516785_37, _3516787_37);
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
saveCont(co, clofun9, 2, R);
coraCall2(co, globalRef(co, __symbolTable[128]), x, globalRef(co, __symbolTable[122]));
return;
}
case 1:
{
Obj _3516782_37= co->res;
Obj find = R[1];
if (True == _3516782_37) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[99]), find);
return;
}
}
case 2:
{
Obj _3516781_37= co->res;
Obj find = _3516781_37;
R[1] = find;
saveCont(co, clofun9, 1, R);
coraCall1(co, globalRef(co, __symbolTable[103]), find);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun8, 2, R);
coraCall2(co, globalRef(co, __symbolTable[128]), x, globalRef(co, __symbolTable[122]));
return;
}
case 1:
{
Obj _3516779_37= co->res;
Obj find = R[1];
if (True == _3516779_37) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[101]), find);
return;
}
}
case 2:
{
Obj _3516778_37= co->res;
Obj find = _3516778_37;
R[1] = find;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, __symbolTable[103]), find);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun7, 2, R);
coraCall2(co, globalRef(co, __symbolTable[128]), x, globalRef(co, __symbolTable[122]));
return;
}
case 1:
{
Obj _3516775_37= co->res;
Obj _3516776_37 = primNot(_3516775_37);
coraReturn(co, _3516776_37);
return;
}
case 2:
{
Obj _3516774_37= co->res;
saveCont(co, clofun7, 1, R);
coraCall1(co, globalRef(co, __symbolTable[103]), _3516774_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516500_37 = R[1];
Obj _3516501_37 = R[2];
Obj _3516698_37 = PRIM_EQ(Nil, _3516501_37);
if (True == _3516698_37) {
coraReturn(co, False);
return;
} else {
Obj _3516699_37 = PRIM_ISCONS(_3516501_37);
if (True == _3516699_37) {
Obj _3516700_37 = PRIM_CAR(_3516501_37);
Obj hd = _3516700_37;
Obj _3516701_37 = PRIM_CDR(_3516501_37);
Obj tl = _3516701_37;
R[1] = _3516500_37;
R[2] = tl;
saveCont(co, clofun6, 1, R);
coraCall2(co, globalRef(co, __symbolTable[124]), _3516500_37, hd);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3516702_37= co->res;
Obj _3516500_37 = R[1];
Obj tl = R[2];
Obj _3516703_37 = PRIM_LT(_3516702_37, MAKE_NUMBER(0));
if (True == _3516703_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[123]), _3516500_37, tl);
return;
} else {
coraReturn(co, True);
return;
}
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj l = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[125]), MAKE_NUMBER(0), x, l);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516494_37 = R[1];
Obj _3516495_37 = R[2];
Obj _3516496_37 = R[3];
Obj _3516687_37 = PRIM_EQ(Nil, _3516496_37);
if (True == _3516687_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3516498_37 = makeNative(co->gc, 1, clofun3, 0, 3, _3516496_37, _3516494_37, _3516495_37);
Obj _3516692_37 = PRIM_ISCONS(_3516496_37);
if (True == _3516692_37) {
Obj _3516693_37 = PRIM_CAR(_3516496_37);
Obj a = _3516693_37;
Obj _3516694_37 = PRIM_CDR(_3516496_37);
Obj _3516695_37 = PRIM_EQ(_3516495_37, a);
if (True == _3516695_37) {
coraReturn(co, _3516494_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516498_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516498_37);
return;
}
}
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516688_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516688_37) {
Obj _3516689_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516690_37 = PRIM_CDR(closureRef(R[0], 0));
Obj b = _3516690_37;
Obj _3516691_37 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[125]), _3516691_37, closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516489_37 = R[1];
Obj _3516490_37 = R[2];
Obj _3516491_37 = R[3];
Obj _3516681_37 = PRIM_EQ(Nil, _3516491_37);
if (True == _3516681_37) {
coraReturn(co, _3516490_37);
return;
} else {
Obj _3516682_37 = PRIM_ISCONS(_3516491_37);
if (True == _3516682_37) {
Obj _3516683_37 = PRIM_CAR(_3516491_37);
Obj x = _3516683_37;
Obj _3516684_37 = PRIM_CDR(_3516491_37);
Obj y = _3516684_37;
R[1] = _3516489_37;
R[2] = y;
saveCont(co, clofun2, 1, R);
coraCall2(co, _3516489_37, _3516490_37, x);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3516685_37= co->res;
Obj _3516489_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, __symbolTable[126]), _3516489_37, _3516685_37, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516484_37 = R[1];
Obj _3516485_37 = R[2];
Obj _3516666_37 = PRIM_EQ(Nil, _3516485_37);
if (True == _3516666_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3516487_37 = makeNative(co->gc, 1, clofun0, 0, 2, _3516485_37, _3516484_37);
Obj _3516670_37 = PRIM_ISCONS(_3516485_37);
if (True == _3516670_37) {
Obj _3516671_37 = PRIM_CAR(_3516485_37);
Obj _3516672_37 = PRIM_ISCONS(_3516671_37);
if (True == _3516672_37) {
Obj _3516673_37 = PRIM_CAR(_3516485_37);
Obj _3516674_37 = PRIM_CAR(_3516673_37);
Obj x = _3516674_37;
Obj _3516675_37 = PRIM_CAR(_3516485_37);
Obj _3516676_37 = PRIM_CDR(_3516675_37);
Obj y = _3516676_37;
Obj _3516677_37 = PRIM_CDR(_3516485_37);
Obj _3516678_37 = PRIM_EQ(_3516484_37, x);
if (True == _3516678_37) {
Obj _3516679_37 = makeCons(co->gc, x, y);
coraReturn(co, _3516679_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516487_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516487_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516487_37);
return;
}
}
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516667_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516667_37) {
Obj _3516668_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516669_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3516669_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, __symbolTable[128]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, __symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

