#include "types.h"
#include "runtime.h"

static int packageID = -1;
static void clofun153(struct Cora* co, int label, Obj *R);
static void clofun152(struct Cora* co, int label, Obj *R);
static void clofun151(struct Cora* co, int label, Obj *R);
static void clofun150(struct Cora* co, int label, Obj *R);
static void clofun149(struct Cora* co, int label, Obj *R);
static void clofun148(struct Cora* co, int label, Obj *R);
static void clofun147(struct Cora* co, int label, Obj *R);
static void clofun146(struct Cora* co, int label, Obj *R);
static void clofun145(struct Cora* co, int label, Obj *R);
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


void entry(struct Cora *co, int label, Obj *R) {
if (packageID == -1) { packageID = packageIDAlloc(); }
Binding *__symbolTable = malloc(sizeof(Binding) * 137);
__symbolTable[0] = bindSymbol(co, intern("cora/lib/io#close-output-file"));
__symbolTable[1] = bindSymbol(co, intern("cora/lib/io#open-output-file"));
__symbolTable[2] = bindSymbol(co, intern("cora/lib/toc#compile-to-c"));
__symbolTable[3] = bindSymbol(co, intern("cora/init#macroexpand"));
__symbolTable[4] = bindSymbol(co, intern("cora/lib/resolve#check!"));
__symbolTable[5] = bindSymbol(co, intern("cora/lib/toc#resolve-source!"));
__symbolTable[6] = bindSymbol(co, intern("cora/init#read-file-as-sexp"));
__symbolTable[7] = bindSymbol(co, intern("cora/lib/toc#read-source"));
__symbolTable[8] = bindSymbol(co, intern("cora/lib/toc#split-type-and-code-toplevel"));
__symbolTable[9] = bindSymbol(co, intern("cora/lib/infer#*typecheck*"));
__symbolTable[10] = bindSymbol(co, intern("cora/init#value-or"));
__symbolTable[11] = bindSymbol(co, intern("cora/lib/toc#generate-typecheck-code"));
__symbolTable[12] = bindSymbol(co, intern("cora/lib/toc#extract-typecheck-body"));
__symbolTable[13] = bindSymbol(co, intern("cora/lib/toc#typecheck-directive?"));
__symbolTable[14] = bindSymbol(co, intern("tc"));
__symbolTable[15] = bindSymbol(co, intern("cora/lib/infer#tc"));
__symbolTable[16] = bindSymbol(co, intern(":type"));
__symbolTable[17] = bindSymbol(co, intern("declare"));
__symbolTable[18] = bindSymbol(co, intern(":declare"));
__symbolTable[19] = bindSymbol(co, intern("cora/lib/infer#tvar"));
__symbolTable[20] = bindSymbol(co, intern("backquote"));
__symbolTable[21] = bindSymbol(co, intern("macroexpand"));
__symbolTable[22] = bindSymbol(co, intern("cora/lib/infer#check-type!"));
__symbolTable[23] = bindSymbol(co, intern("cora/lib/toc#split-type-and-code"));
__symbolTable[24] = bindSymbol(co, intern("package"));
__symbolTable[25] = bindSymbol(co, intern("begin"));
__symbolTable[26] = bindSymbol(co, intern("export"));
__symbolTable[27] = bindSymbol(co, intern("import"));
__symbolTable[28] = bindSymbol(co, intern("cora/lib/toc#handle-import-eagerly"));
__symbolTable[29] = bindSymbol(co, intern("cora/lib/toc#generate-c"));
__symbolTable[30] = bindSymbol(co, intern("cora/init#symbol->string"));
__symbolTable[31] = bindSymbol(co, intern("cora/lib/toc#generate-entry"));
__symbolTable[32] = bindSymbol(co, intern("cora/lib/toc#generate-toplevel-lambda"));
__symbolTable[33] = bindSymbol(co, intern("cora/lib/toc#for-each"));
__symbolTable[34] = bindSymbol(co, intern("cora/lib/toc#compile"));
__symbolTable[35] = bindSymbol(co, intern("cora/init#cddr"));
__symbolTable[36] = bindSymbol(co, intern("->"));
__symbolTable[37] = bindSymbol(co, intern("cora/init#add-to-*macros*"));
__symbolTable[38] = bindSymbol(co, intern("cora/lib/toc#rewrite-->macro"));
__symbolTable[39] = bindSymbol(co, intern("cora/init#vector"));
__symbolTable[40] = bindSymbol(co, intern("cora/lib/toc#collect-lambda-pass"));
__symbolTable[41] = bindSymbol(co, intern("cora/lib/toc#liveness-analyze-pass"));
__symbolTable[42] = bindSymbol(co, intern("cora/lib/toc#tailify-pass"));
__symbolTable[43] = bindSymbol(co, intern("cora/lib/toc#closure-convert-pass"));
__symbolTable[44] = bindSymbol(co, intern("cora/lib/toc#parse-pass"));
__symbolTable[45] = bindSymbol(co, intern("cora/lib/toc#code-gen-func-declare"));
__symbolTable[46] = bindSymbol(co, intern("cora/lib/toc#generate-cont"));
__symbolTable[47] = bindSymbol(co, intern("cora/lib/toc/internal#escape-str"));
__symbolTable[48] = bindSymbol(co, intern("cora/lib/toc#generate-group-name"));
__symbolTable[49] = bindSymbol(co, intern("cora/lib/toc#generate-inst-list"));
__symbolTable[50] = bindSymbol(co, intern("cora/lib/toc/internal#generate-sym"));
__symbolTable[51] = bindSymbol(co, intern("cora/lib/toc#recover-from-frame"));
__symbolTable[52] = bindSymbol(co, intern("cora/lib/toc#generate-inst"));
__symbolTable[53] = bindSymbol(co, intern("cora/lib/toc/internal#generate-num"));
__symbolTable[54] = bindSymbol(co, intern("cora/lib/toc/internal#generate-str"));
__symbolTable[55] = bindSymbol(co, intern("cora/lib/toc#save-to-frame"));
__symbolTable[56] = bindSymbol(co, intern("cora/lib/toc#symbol-offset"));
__symbolTable[57] = bindSymbol(co, intern("cora/lib/toc#symbol-offset-h"));
__symbolTable[58] = bindSymbol(co, intern("cora/init#value"));
__symbolTable[59] = bindSymbol(co, intern("cora/init#vector-set!"));
__symbolTable[60] = bindSymbol(co, intern("cora/lib/toc#append-result"));
__symbolTable[61] = bindSymbol(co, intern("cora/init#vector-ref"));
__symbolTable[62] = bindSymbol(co, intern("cora/lib/toc#collect-lambda"));
__symbolTable[63] = bindSymbol(co, intern("cora/lib/toc#lambda-frame-size"));
__symbolTable[64] = bindSymbol(co, intern("cora/lib/toc#rewrite-lambda-final"));
__symbolTable[65] = bindSymbol(co, intern("cora/init#cdddr"));
__symbolTable[66] = bindSymbol(co, intern("cora/lib/toc#collect-cont-list"));
__symbolTable[67] = bindSymbol(co, intern("cora/lib/toc#collect-cont"));
__symbolTable[68] = bindSymbol(co, intern("%continuation"));
__symbolTable[69] = bindSymbol(co, intern("cora/lib/toc#liveness-analyze"));
__symbolTable[70] = bindSymbol(co, intern("cora/init#caar"));
__symbolTable[71] = bindSymbol(co, intern("cora/init#pair?"));
__symbolTable[72] = bindSymbol(co, intern("cora/lib/toc#wrap-var"));
__symbolTable[73] = bindSymbol(co, intern("cora/init#reverse"));
__symbolTable[74] = bindSymbol(co, intern("cora/lib/toc#tailify-list"));
__symbolTable[75] = bindSymbol(co, intern("cora/lib/toc#tailify"));
__symbolTable[76] = bindSymbol(co, intern("cora/lib/toc#id"));
__symbolTable[77] = bindSymbol(co, intern("cora/lib/toc#closure-convert"));
__symbolTable[78] = bindSymbol(co, intern("return"));
__symbolTable[79] = bindSymbol(co, intern("call"));
__symbolTable[80] = bindSymbol(co, intern("tailcall"));
__symbolTable[81] = bindSymbol(co, intern("continuation"));
__symbolTable[82] = bindSymbol(co, intern("cora/lib/toc#free-vars"));
__symbolTable[83] = bindSymbol(co, intern("%closure-ref"));
__symbolTable[84] = bindSymbol(co, intern("%closure"));
__symbolTable[85] = bindSymbol(co, intern("cora/lib/toc#convert-protect?"));
__symbolTable[86] = bindSymbol(co, intern("cora/lib/toc#diff"));
__symbolTable[87] = bindSymbol(co, intern("cora/lib/toc#union"));
__symbolTable[88] = bindSymbol(co, intern("cora/init#boolean?"));
__symbolTable[89] = bindSymbol(co, intern("cora/init#number?"));
__symbolTable[90] = bindSymbol(co, intern("quote"));
__symbolTable[91] = bindSymbol(co, intern("do"));
__symbolTable[92] = bindSymbol(co, intern("let"));
__symbolTable[93] = bindSymbol(co, intern("if"));
__symbolTable[94] = bindSymbol(co, intern("cora/init#append"));
__symbolTable[95] = bindSymbol(co, intern("lambda"));
__symbolTable[96] = bindSymbol(co, intern("%builtin"));
__symbolTable[97] = bindSymbol(co, intern("cora/init#length"));
__symbolTable[98] = bindSymbol(co, intern("cora/init#map"));
__symbolTable[99] = bindSymbol(co, intern("%global"));
__symbolTable[100] = bindSymbol(co, intern("cora/lib/toc#add-symbol-to-list"));
__symbolTable[101] = bindSymbol(co, intern("cora/init#elem?"));
__symbolTable[102] = bindSymbol(co, intern("%const"));
__symbolTable[103] = bindSymbol(co, intern("cora/lib/toc#parse"));
__symbolTable[104] = bindSymbol(co, intern("cora/lib/toc#temp-list"));
__symbolTable[105] = bindSymbol(co, intern("cora/init#cadr"));
__symbolTable[106] = bindSymbol(co, intern("cora/lib/toc#builtin->args"));
__symbolTable[107] = bindSymbol(co, intern("cora/init#caddr"));
__symbolTable[108] = bindSymbol(co, intern("cora/lib/toc#builtin->name"));
__symbolTable[109] = bindSymbol(co, intern("cora/init#null?"));
__symbolTable[110] = bindSymbol(co, intern("cora/lib/toc#builtin?"));
__symbolTable[111] = bindSymbol(co, intern("string?"));
__symbolTable[112] = bindSymbol(co, intern("integer?"));
__symbolTable[113] = bindSymbol(co, intern("not"));
__symbolTable[114] = bindSymbol(co, intern("symbol?"));
__symbolTable[115] = bindSymbol(co, intern("gensym"));
__symbolTable[116] = bindSymbol(co, intern("<"));
__symbolTable[117] = bindSymbol(co, intern(">"));
__symbolTable[118] = bindSymbol(co, intern("="));
__symbolTable[119] = bindSymbol(co, intern("/"));
__symbolTable[120] = bindSymbol(co, intern("*"));
__symbolTable[121] = bindSymbol(co, intern("-"));
__symbolTable[122] = bindSymbol(co, intern("+"));
__symbolTable[123] = bindSymbol(co, intern("cons?"));
__symbolTable[124] = bindSymbol(co, intern("cons"));
__symbolTable[125] = bindSymbol(co, intern("cdr"));
__symbolTable[126] = bindSymbol(co, intern("car"));
__symbolTable[127] = bindSymbol(co, intern("set"));
__symbolTable[128] = bindSymbol(co, intern("cora/lib/toc#*builtin-prims*"));
__symbolTable[129] = bindSymbol(co, intern("cora/lib/toc#exist-in-env"));
__symbolTable[130] = bindSymbol(co, intern("cora/lib/toc#index"));
__symbolTable[131] = bindSymbol(co, intern("cora/lib/toc#pos-in-list0"));
__symbolTable[132] = bindSymbol(co, intern("cora/lib/toc#foldl"));
__symbolTable[133] = bindSymbol(co, intern("cora/lib/toc#error"));
__symbolTable[134] = bindSymbol(co, intern("cora/lib/toc#assq"));
__symbolTable[135] = bindSymbol(co, intern("cora/lib/toc#*ns-export*"));
__symbolTable[136] = bindSymbol(co, intern("cora/init#import"));
addPackage(co, packageID, __symbolTable);
co->ctx.fn = clofun153;
co->ctx.label = 0;
}

static void clofun153(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun153, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/toc/internal"));
return;
}
case 1:
{
Obj _3522907_37= co->res;
Obj _3522913_37 = primSet(co, getBinding(co, packageID, 34).name, makeNative(co->gc, 3, clofun111, 2, 0));
Obj _3522919_37 = primSet(co, getBinding(co, packageID, 33).name, makeNative(co->gc, 3, clofun112, 2, 0));
Obj _3522941_37 = primSet(co, getBinding(co, packageID, 32).name, makeNative(co->gc, 7, clofun114, 3, 0));
Obj _3522960_37 = primSet(co, getBinding(co, packageID, 31).name, makeNative(co->gc, 4, clofun116, 3, 0));
Obj _3522970_37 = primSet(co, getBinding(co, packageID, 29).name, makeNative(co->gc, 4, clofun119, 3, 0));
Obj _3523011_37 = primSet(co, getBinding(co, packageID, 28).name, makeNative(co->gc, 2, clofun124, 1, 0));
Obj _3523088_37 = primSet(co, getBinding(co, packageID, 23).name, makeNative(co->gc, 5, clofun131, 4, 0));
Obj _3523113_37 = primSet(co, getBinding(co, packageID, 13).name, makeNative(co->gc, 2, clofun134, 1, 0));
Obj _3523165_37 = primSet(co, getBinding(co, packageID, 12).name, makeNative(co->gc, 3, clofun139, 2, 0));
Obj _3523167_37 = primSet(co, getBinding(co, packageID, 11).name, makeNative(co->gc, 3, clofun140, 2, 0));
Obj _3523183_37 = primSet(co, getBinding(co, packageID, 8).name, makeNative(co->gc, 2, clofun148, 1, 0));
Obj _3523184_37 = primSet(co, getBinding(co, packageID, 9).name, False);
Obj _3523187_37 = primSet(co, getBinding(co, packageID, 7).name, makeNative(co->gc, 2, clofun149, 1, 0));
Obj _3523202_37 = primSet(co, getBinding(co, packageID, 5).name, makeNative(co->gc, 2, clofun151, 1, 0));
Obj _3523214_37 = primSet(co, getBinding(co, packageID, 2).name, makeNative(co->gc, 4, clofun152, 2, 0));
coraReturn(co, _3523214_37);
return;
}
case 2:
{
Obj _3521521_37= co->res;
Obj _3521522_37 = primSet(co, getBinding(co, packageID, 135).name, Nil);
Obj _3521537_37 = primSet(co, getBinding(co, packageID, 134).name, makeNative(co->gc, 3, clofun1, 2, 0));
Obj _3521543_37 = primSet(co, getBinding(co, packageID, 132).name, makeNative(co->gc, 4, clofun2, 3, 0));
Obj _3521553_37 = primSet(co, getBinding(co, packageID, 131).name, makeNative(co->gc, 4, clofun4, 3, 0));
Obj _3521554_37 = primSet(co, getBinding(co, packageID, 130).name, makeNative(co->gc, 3, clofun5, 2, 0));
Obj _3521561_37 = primSet(co, getBinding(co, packageID, 129).name, makeNative(co->gc, 3, clofun6, 2, 0));
Obj _3521562_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3521563_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521562_37);
Obj _3521564_37 = makeCons(co->gc, getBinding(co, packageID, 127).name, _3521563_37);
Obj _3521565_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3521566_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521565_37);
Obj _3521567_37 = makeCons(co->gc, getBinding(co, packageID, 126).name, _3521566_37);
Obj _3521568_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3521569_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521568_37);
Obj _3521570_37 = makeCons(co->gc, getBinding(co, packageID, 125).name, _3521569_37);
Obj _3521571_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3521572_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521571_37);
Obj _3521573_37 = makeCons(co->gc, getBinding(co, packageID, 124).name, _3521572_37);
Obj _3521574_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3521575_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521574_37);
Obj _3521576_37 = makeCons(co->gc, getBinding(co, packageID, 123).name, _3521575_37);
Obj _3521577_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3521578_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521577_37);
Obj _3521579_37 = makeCons(co->gc, getBinding(co, packageID, 122).name, _3521578_37);
Obj _3521580_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3521581_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521580_37);
Obj _3521582_37 = makeCons(co->gc, getBinding(co, packageID, 121).name, _3521581_37);
Obj _3521583_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3521584_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521583_37);
Obj _3521585_37 = makeCons(co->gc, getBinding(co, packageID, 120).name, _3521584_37);
Obj _3521586_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3521587_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521586_37);
Obj _3521588_37 = makeCons(co->gc, getBinding(co, packageID, 119).name, _3521587_37);
Obj _3521589_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3521590_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521589_37);
Obj _3521591_37 = makeCons(co->gc, getBinding(co, packageID, 118).name, _3521590_37);
Obj _3521592_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3521593_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521592_37);
Obj _3521594_37 = makeCons(co->gc, getBinding(co, packageID, 117).name, _3521593_37);
Obj _3521595_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3521596_37 = makeCons(co->gc, MAKE_NUMBER(2), _3521595_37);
Obj _3521597_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3521596_37);
Obj _3521598_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3521599_37 = makeCons(co->gc, MAKE_NUMBER(0), _3521598_37);
Obj _3521600_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3521599_37);
Obj _3521601_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3521602_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521601_37);
Obj _3521603_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3521602_37);
Obj _3521604_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3521605_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521604_37);
Obj _3521606_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3521605_37);
Obj _3521607_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3521608_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521607_37);
Obj _3521609_37 = makeCons(co->gc, getBinding(co, packageID, 112).name, _3521608_37);
Obj _3521610_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3521611_37 = makeCons(co->gc, MAKE_NUMBER(1), _3521610_37);
Obj _3521612_37 = makeCons(co->gc, getBinding(co, packageID, 111).name, _3521611_37);
Obj _3521613_37 = makeCons(co->gc, _3521612_37, Nil);
Obj _3521614_37 = makeCons(co->gc, _3521609_37, _3521613_37);
Obj _3521615_37 = makeCons(co->gc, _3521606_37, _3521614_37);
Obj _3521616_37 = makeCons(co->gc, _3521603_37, _3521615_37);
Obj _3521617_37 = makeCons(co->gc, _3521600_37, _3521616_37);
Obj _3521618_37 = makeCons(co->gc, _3521597_37, _3521617_37);
Obj _3521619_37 = makeCons(co->gc, _3521594_37, _3521618_37);
Obj _3521620_37 = makeCons(co->gc, _3521591_37, _3521619_37);
Obj _3521621_37 = makeCons(co->gc, _3521588_37, _3521620_37);
Obj _3521622_37 = makeCons(co->gc, _3521585_37, _3521621_37);
Obj _3521623_37 = makeCons(co->gc, _3521582_37, _3521622_37);
Obj _3521624_37 = makeCons(co->gc, _3521579_37, _3521623_37);
Obj _3521625_37 = makeCons(co->gc, _3521576_37, _3521624_37);
Obj _3521626_37 = makeCons(co->gc, _3521573_37, _3521625_37);
Obj _3521627_37 = makeCons(co->gc, _3521570_37, _3521626_37);
Obj _3521628_37 = makeCons(co->gc, _3521567_37, _3521627_37);
Obj _3521629_37 = makeCons(co->gc, _3521564_37, _3521628_37);
Obj _3521630_37 = primSet(co, getBinding(co, packageID, 128).name, _3521629_37);
Obj _3521634_37 = primSet(co, getBinding(co, packageID, 110).name, makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3521637_37 = primSet(co, getBinding(co, packageID, 108).name, makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3521640_37 = primSet(co, getBinding(co, packageID, 106).name, makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3521645_37 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 3, clofun10, 2, 0));
Obj _3521843_37 = primSet(co, getBinding(co, packageID, 103).name, makeNative(co->gc, 4, clofun21, 3, 0));
Obj _3521854_37 = primSet(co, getBinding(co, packageID, 87).name, makeNative(co->gc, 4, clofun23, 2, 0));
Obj _3521865_37 = primSet(co, getBinding(co, packageID, 86).name, makeNative(co->gc, 4, clofun25, 2, 0));
Obj _3521926_37 = primSet(co, getBinding(co, packageID, 85).name, makeNative(co->gc, 2, clofun32, 1, 0));
Obj _3522101_37 = primSet(co, getBinding(co, packageID, 82).name, makeNative(co->gc, 2, clofun42, 1, 0));
Obj _3522174_37 = primSet(co, getBinding(co, packageID, 77).name, makeNative(co->gc, 4, clofun45, 2, 0));
Obj _3522177_37 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 2, clofun46, 1, 0));
Obj _3522314_37 = primSet(co, getBinding(co, packageID, 75).name, makeNative(co->gc, 3, clofun55, 2, 0));
Obj _3522337_37 = primSet(co, getBinding(co, packageID, 74).name, makeNative(co->gc, 4, clofun58, 3, 0));
Obj _3522414_37 = primSet(co, getBinding(co, packageID, 69).name, makeNative(co->gc, 3, clofun62, 2, 0));
Obj _3522445_37 = primSet(co, getBinding(co, packageID, 67).name, makeNative(co->gc, 4, clofun66, 3, 0));
Obj _3522451_37 = primSet(co, getBinding(co, packageID, 66).name, makeNative(co->gc, 5, clofun69, 4, 0));
Obj _3522456_37 = primSet(co, getBinding(co, packageID, 64).name, makeNative(co->gc, 3, clofun71, 2, 0));
Obj _3522465_37 = primSet(co, getBinding(co, packageID, 63).name, makeNative(co->gc, 2, clofun73, 1, 0));
Obj _3522516_37 = primSet(co, getBinding(co, packageID, 62).name, makeNative(co->gc, 6, clofun75, 2, 0));
Obj _3522524_37 = primSet(co, getBinding(co, packageID, 60).name, makeNative(co->gc, 4, clofun76, 2, 0));
Obj _3522531_37 = primSet(co, getBinding(co, packageID, 72).name, makeNative(co->gc, 3, clofun77, 2, 0));
Obj _3522536_37 = primSet(co, getBinding(co, packageID, 100).name, makeNative(co->gc, 4, clofun78, 2, 0));
Obj _3522542_37 = primSet(co, getBinding(co, packageID, 57).name, makeNative(co->gc, 4, clofun79, 3, 0));
Obj _3522543_37 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 3, clofun80, 2, 0));
Obj _3522550_37 = primSet(co, getBinding(co, packageID, 55).name, makeNative(co->gc, 6, clofun82, 5, 0));
Obj _3522557_37 = primSet(co, getBinding(co, packageID, 51).name, makeNative(co->gc, 6, clofun84, 5, 0));
Obj _3522844_37 = primSet(co, getBinding(co, packageID, 52).name, makeNative(co->gc, 6, clofun97, 5, 0));
Obj _3522858_37 = primSet(co, getBinding(co, packageID, 49).name, makeNative(co->gc, 6, clofun99, 5, 0));
Obj _3522880_37 = primSet(co, getBinding(co, packageID, 46).name, makeNative(co->gc, 8, clofun101, 5, 0));
Obj _3522882_37 = primSet(co, getBinding(co, packageID, 48).name, makeNative(co->gc, 3, clofun102, 2, 0));
Obj _3522886_37 = primSet(co, getBinding(co, packageID, 45).name, makeNative(co->gc, 3, clofun103, 2, 0));
Obj _3522887_37 = primSet(co, getBinding(co, packageID, 44).name, makeNative(co->gc, 3, clofun104, 2, 0));
Obj _3522888_37 = primSet(co, getBinding(co, packageID, 43).name, makeNative(co->gc, 2, clofun105, 1, 0));
Obj _3522889_37 = primSet(co, getBinding(co, packageID, 42).name, makeNative(co->gc, 2, clofun106, 1, 0));
Obj _3522890_37 = primSet(co, getBinding(co, packageID, 41).name, makeNative(co->gc, 2, clofun107, 1, 0));
Obj _3522897_37 = primSet(co, getBinding(co, packageID, 40).name, makeNative(co->gc, 3, clofun108, 1, 0));
Obj _3522904_37 = primSet(co, getBinding(co, packageID, 38).name, makeNative(co->gc, 3, clofun109, 2, 0));
saveCont(co, clofun153, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 37)), getBinding(co, packageID, 36).name, makeNative(co->gc, 2, clofun110, 1, 0));
return;
}
case 3:
{
Obj _3521520_37= co->res;
saveCont(co, clofun153, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/hash-h"));
return;
}
case 4:
{
Obj _3521519_37= co->res;
saveCont(co, clofun153, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/io"));
return;
}
}
}

static void clofun152(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj from = R[1];
Obj to = R[2];
Obj _3523203_37 = primGenSym(co);
Obj globals = _3523203_37;
Obj _3523204_37 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
saveCont(co, clofun152, 9, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 34)), globals);
return;
}
case 1:
{
Obj _3523213_37= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 0)), stream);
return;
}
case 2:
{
Obj _3523212_37= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
saveCont(co, clofun152, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 29)), stream, bc, _3523212_37);
return;
}
case 3:
{
Obj _3523211_37= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = _3523211_37;
R[1] = bc;
R[2] = stream;
saveCont(co, clofun152, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), globals);
return;
}
case 4:
{
Obj _3523210_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = _3523210_37;
R[1] = globals;
R[2] = bc;
saveCont(co, clofun152, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 1)), to);
return;
}
case 5:
{
Obj _3523209_37= co->res;
Obj _3523205_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
saveCont(co, clofun152, 4, R);
coraCall1(co, _3523205_37, _3523209_37);
return;
}
case 6:
{
Obj _3523208_37= co->res;
Obj _3523205_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3523205_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun152, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 3)), _3523208_37);
return;
}
case 7:
{
Obj _3523207_37= co->res;
Obj _3523205_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3523205_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun152, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 8)), _3523207_37);
return;
}
case 8:
{
Obj _3523206_37= co->res;
Obj _3523205_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3523205_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun152, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 5)), _3523206_37);
return;
}
case 9:
{
Obj _3523205_37= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3523205_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun152, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 7)), from);
return;
}
}
}

static void clofun151(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sexp = R[1];
Obj _3521505_37 = makeNative(co->gc, 2, clofun150, 0, 1, sexp);
Obj _3523192_37 = PRIM_ISCONS(sexp);
if (True == _3523192_37) {
Obj _3523193_37 = PRIM_CAR(sexp);
Obj _3523194_37 = PRIM_EQ(getBinding(co, packageID, 24).name, _3523193_37);
if (True == _3523194_37) {
Obj _3523195_37 = PRIM_CDR(sexp);
Obj _3523196_37 = PRIM_ISCONS(_3523195_37);
if (True == _3523196_37) {
Obj _3523197_37 = PRIM_CDR(sexp);
Obj _3523198_37 = PRIM_CAR(_3523197_37);
Obj _3523199_37 = PRIM_EQ(makeCString(co->gc, "cora/lib/resolve"), _3523198_37);
if (True == _3523199_37) {
Obj _3523200_37 = PRIM_CDR(sexp);
Obj _3523201_37 = PRIM_CDR(_3523200_37);
coraReturn(co, sexp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521505_37);
return;
}
}
}
}

static void clofun150(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun150, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/resolve"));
return;
}
case 1:
{
Obj _3523191_37= co->res;
coraReturn(co, closureRef(R[0], 0));
return;
}
case 2:
{
Obj _3523190_37= co->res;
Obj _3523189_37 = R[1];
saveCont(co, clofun150, 1, R);
coraCall1(co, _3523189_37, _3523190_37);
return;
}
case 3:
{
Obj _3523189_37= co->res;
R[1] = _3523189_37;
saveCont(co, clofun150, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 3)), closureRef(R[0], 0));
return;
}
case 4:
{
Obj _3523188_37= co->res;
saveCont(co, clofun150, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), getBinding(co, packageID, 4).name);
return;
}
}
}

static void clofun149(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj file_45path = R[1];
saveCont(co, clofun149, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 6)), file_45path);
return;
}
case 1:
{
Obj _3523186_37= co->res;
Obj sexp = R[1];
coraReturn(co, sexp);
return;
}
case 2:
{
Obj _3523185_37= co->res;
Obj sexp = _3523185_37;
R[1] = sexp;
saveCont(co, clofun149, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), sexp);
return;
}
}
}

static void clofun148(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521501_37 = R[1];
Obj _3521502_37 = makeNative(co->gc, 1, clofun145, 0, 1, _3521501_37);
Obj _3523178_37 = PRIM_ISCONS(_3521501_37);
if (True == _3523178_37) {
Obj _3523179_37 = PRIM_CAR(_3521501_37);
Obj _3523180_37 = PRIM_EQ(getBinding(co, packageID, 24).name, _3523179_37);
if (True == _3523180_37) {
Obj _3523181_37 = PRIM_CDR(_3521501_37);
Obj more = _3523181_37;
Obj _3523182_37 = makeCons(co->gc, getBinding(co, packageID, 24).name, more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), _3523182_37, makeNative(co->gc, 2, clofun147, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521502_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521502_37);
return;
}
}
}
}

static void clofun147(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), body, Nil, Nil, makeNative(co->gc, 3, clofun146, 2, 0));
return;
}
}
}

static void clofun146(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 11)), type, code);
return;
}
}
}

static void clofun145(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521503_37 = makeNative(co->gc, 1, clofun142, 0, 1, closureRef(R[0], 0));
Obj _3523173_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523173_37) {
Obj _3523174_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523175_37 = PRIM_EQ(getBinding(co, packageID, 25).name, _3523174_37);
if (True == _3523175_37) {
Obj _3523176_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523176_37;
Obj _3523177_37 = makeCons(co->gc, getBinding(co, packageID, 25).name, more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), _3523177_37, makeNative(co->gc, 2, clofun144, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521503_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521503_37);
return;
}
}
}
}

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), body, Nil, Nil, makeNative(co->gc, 3, clofun143, 2, 0));
return;
}
}
}

static void clofun143(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 11)), type, code);
return;
}
}
}

static void clofun142(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3523168_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), _3523168_37, Nil, Nil, makeNative(co->gc, 3, clofun141, 2, 1, closureRef(R[0], 0)));
return;
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
R[1] = type;
R[2] = code;
saveCont(co, clofun141, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 13)), closureRef(R[0], 0));
return;
}
case 1:
{
Obj _3523171_37= co->res;
Obj body = R[1];
if (True == _3523171_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3523172_37 = makeCons(co->gc, getBinding(co, packageID, 25).name, body);
coraReturn(co, _3523172_37);
return;
}
}
case 2:
{
Obj _3523170_37= co->res;
Obj body = _3523170_37;
R[1] = body;
saveCont(co, clofun141, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), body);
return;
}
case 3:
{
Obj _3523169_37= co->res;
Obj type = R[1];
Obj code = R[2];
if (True == _3523169_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun141, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 11)), type, code);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
R[1] = type;
R[2] = code;
saveCont(co, clofun140, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 10)), getBinding(co, packageID, 9).name, False);
return;
}
case 1:
{
Obj _3523166_37= co->res;
Obj type = R[1];
Obj code = R[2];
if (True == _3523166_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), type, code);
return;
} else {
coraReturn(co, code);
return;
}
}
}
}

static void clofun139(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521494_37 = R[1];
Obj _3521495_37 = R[2];
Obj _3521496_37 = makeNative(co->gc, 2, clofun138, 0, 2, _3521494_37, _3521495_37);
Obj _3523153_37 = PRIM_ISCONS(_3521494_37);
if (True == _3523153_37) {
Obj _3523154_37 = PRIM_CAR(_3521494_37);
Obj _3523155_37 = PRIM_EQ(getBinding(co, packageID, 24).name, _3523154_37);
if (True == _3523155_37) {
Obj _3523156_37 = PRIM_CDR(_3521494_37);
Obj _3523157_37 = PRIM_ISCONS(_3523156_37);
if (True == _3523157_37) {
Obj _3523158_37 = PRIM_CDR(_3521494_37);
Obj _3523159_37 = PRIM_CAR(_3523158_37);
Obj name = _3523159_37;
Obj _3523160_37 = PRIM_CDR(_3521494_37);
Obj _3523161_37 = PRIM_CDR(_3523160_37);
Obj more = _3523161_37;
R[1] = name;
saveCont(co, clofun139, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, _3521495_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521496_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521496_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521496_37);
return;
}
}
case 1:
{
Obj _3523162_37= co->res;
Obj name = R[1];
Obj _3523163_37 = makeCons(co->gc, name, _3523162_37);
Obj _3523164_37 = makeCons(co->gc, getBinding(co, packageID, 24).name, _3523163_37);
coraReturn(co, _3523164_37);
return;
}
}
}

static void clofun138(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521497_37 = makeNative(co->gc, 2, clofun137, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3523132_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523132_37) {
Obj _3523133_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523134_37 = PRIM_ISCONS(_3523133_37);
if (True == _3523134_37) {
Obj _3523135_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523136_37 = PRIM_CAR(_3523135_37);
Obj _3523137_37 = PRIM_EQ(getBinding(co, packageID, 27).name, _3523136_37);
if (True == _3523137_37) {
Obj _3523138_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523139_37 = PRIM_CDR(_3523138_37);
Obj _3523140_37 = PRIM_ISCONS(_3523139_37);
if (True == _3523140_37) {
Obj _3523141_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523142_37 = PRIM_CDR(_3523141_37);
Obj _3523143_37 = PRIM_CAR(_3523142_37);
Obj pkg = _3523143_37;
Obj _3523144_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523145_37 = PRIM_CDR(_3523144_37);
Obj _3523146_37 = PRIM_CDR(_3523145_37);
Obj _3523147_37 = PRIM_EQ(Nil, _3523146_37);
if (True == _3523147_37) {
Obj _3523148_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523148_37;
Obj _3523149_37 = makeCons(co->gc, pkg, Nil);
Obj _3523150_37 = makeCons(co->gc, getBinding(co, packageID, 27).name, _3523149_37);
R[1] = _3523150_37;
saveCont(co, clofun138, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521497_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521497_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521497_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521497_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521497_37);
return;
}
}
case 1:
{
Obj _3523151_37= co->res;
Obj _3523150_37 = R[1];
Obj _3523152_37 = makeCons(co->gc, _3523150_37, _3523151_37);
coraReturn(co, _3523152_37);
return;
}
}
}

static void clofun137(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521498_37 = makeNative(co->gc, 1, clofun136, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3523120_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523120_37) {
Obj _3523121_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523122_37 = PRIM_ISCONS(_3523121_37);
if (True == _3523122_37) {
Obj _3523123_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523124_37 = PRIM_CAR(_3523123_37);
Obj _3523125_37 = PRIM_EQ(getBinding(co, packageID, 26).name, _3523124_37);
if (True == _3523125_37) {
Obj _3523126_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523127_37 = PRIM_CDR(_3523126_37);
Obj symbols = _3523127_37;
Obj _3523128_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523128_37;
Obj _3523129_37 = makeCons(co->gc, getBinding(co, packageID, 26).name, symbols);
R[1] = _3523129_37;
saveCont(co, clofun137, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521498_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521498_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521498_37);
return;
}
}
case 1:
{
Obj _3523130_37= co->res;
Obj _3523129_37 = R[1];
Obj _3523131_37 = makeCons(co->gc, _3523129_37, _3523130_37);
coraReturn(co, _3523131_37);
return;
}
}
}

static void clofun136(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521499_37 = makeNative(co->gc, 1, clofun135, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3523114_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523114_37) {
Obj _3523115_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523116_37 = PRIM_EQ(getBinding(co, packageID, 25).name, _3523115_37);
if (True == _3523116_37) {
Obj _3523117_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523117_37;
saveCont(co, clofun136, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521499_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521499_37);
return;
}
}
case 1:
{
Obj _3523118_37= co->res;
Obj _3523119_37 = makeCons(co->gc, getBinding(co, packageID, 25).name, _3523118_37);
coraReturn(co, _3523119_37);
return;
}
}
}

static void clofun135(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
}

static void clofun134(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521490_37 = R[1];
Obj _3521491_37 = makeNative(co->gc, 1, clofun133, 0, 1, _3521490_37);
Obj _3523101_37 = PRIM_ISCONS(_3521490_37);
if (True == _3523101_37) {
Obj _3523102_37 = PRIM_CAR(_3521490_37);
Obj _3523103_37 = PRIM_EQ(getBinding(co, packageID, 14).name, _3523102_37);
if (True == _3523103_37) {
Obj _3523104_37 = PRIM_CDR(_3521490_37);
Obj _3523105_37 = PRIM_ISCONS(_3523104_37);
if (True == _3523105_37) {
Obj _3523106_37 = PRIM_CDR(_3521490_37);
Obj _3523107_37 = PRIM_CAR(_3523106_37);
Obj on = _3523107_37;
Obj _3523108_37 = PRIM_CDR(_3521490_37);
Obj _3523109_37 = PRIM_CDR(_3523108_37);
Obj _3523110_37 = PRIM_EQ(Nil, _3523109_37);
if (True == _3523110_37) {
Obj _3523111_37 = PRIM_EQ(on, True);
if (True == _3523111_37) {
coraReturn(co, True);
return;
} else {
Obj _3523112_37 = PRIM_EQ(on, False);
if (True == _3523112_37) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521491_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521491_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521491_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521491_37);
return;
}
}
}
}

static void clofun133(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521492_37 = makeNative(co->gc, 1, clofun132, 0, 0);
Obj _3523089_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523089_37) {
Obj _3523090_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523091_37 = PRIM_EQ(getBinding(co, packageID, 15).name, _3523090_37);
if (True == _3523091_37) {
Obj _3523092_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3523093_37 = PRIM_ISCONS(_3523092_37);
if (True == _3523093_37) {
Obj _3523094_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3523095_37 = PRIM_CAR(_3523094_37);
Obj on = _3523095_37;
Obj _3523096_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3523097_37 = PRIM_CDR(_3523096_37);
Obj _3523098_37 = PRIM_EQ(Nil, _3523097_37);
if (True == _3523098_37) {
Obj _3523099_37 = PRIM_EQ(on, True);
if (True == _3523099_37) {
coraReturn(co, True);
return;
} else {
Obj _3523100_37 = PRIM_EQ(on, False);
if (True == _3523100_37) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521492_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521492_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521492_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521492_37);
return;
}
}
}
}

static void clofun132(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
coraReturn(co, False);
return;
}
}
}

static void clofun131(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521480_37 = R[1];
Obj _3521481_37 = R[2];
Obj _3521482_37 = R[3];
Obj _3521483_37 = R[4];
Obj _3523012_37 = PRIM_EQ(Nil, _3521480_37);
if (True == _3523012_37) {
R[1] = _3521482_37;
R[2] = _3521483_37;
saveCont(co, clofun131, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), _3521481_37);
return;
} else {
Obj _3521485_37 = makeNative(co->gc, 1, clofun129, 0, 4, _3521480_37, _3521481_37, _3521482_37, _3521483_37);
Obj _3523069_37 = PRIM_ISCONS(_3521480_37);
if (True == _3523069_37) {
Obj _3523070_37 = PRIM_CAR(_3521480_37);
Obj _3523071_37 = PRIM_ISCONS(_3523070_37);
if (True == _3523071_37) {
Obj _3523072_37 = PRIM_CAR(_3521480_37);
Obj _3523073_37 = PRIM_CAR(_3523072_37);
Obj _3523074_37 = PRIM_EQ(getBinding(co, packageID, 14).name, _3523073_37);
if (True == _3523074_37) {
Obj _3523075_37 = PRIM_CAR(_3521480_37);
Obj _3523076_37 = PRIM_CDR(_3523075_37);
Obj _3523077_37 = PRIM_ISCONS(_3523076_37);
if (True == _3523077_37) {
Obj _3523078_37 = PRIM_CAR(_3521480_37);
Obj _3523079_37 = PRIM_CDR(_3523078_37);
Obj _3523080_37 = PRIM_CAR(_3523079_37);
Obj on = _3523080_37;
Obj _3523081_37 = PRIM_CAR(_3521480_37);
Obj _3523082_37 = PRIM_CDR(_3523081_37);
Obj _3523083_37 = PRIM_CDR(_3523082_37);
Obj _3523084_37 = PRIM_EQ(Nil, _3523083_37);
if (True == _3523084_37) {
Obj _3523085_37 = PRIM_CDR(_3521480_37);
Obj more = _3523085_37;
Obj _3521517_37 = makeNative(co->gc, 2, clofun130, 1, 5, more, _3521481_37, _3521482_37, _3521483_37, _3521485_37);
Obj _3523086_37 = PRIM_EQ(on, True);
if (True == _3523086_37) {
co->ctx.sp = R;
coraCall1(co, _3521517_37, True);
return;
} else {
Obj _3523087_37 = PRIM_EQ(on, False);
if (True == _3523087_37) {
co->ctx.sp = R;
coraCall1(co, _3521517_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521517_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521485_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521485_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521485_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521485_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521485_37);
return;
}
}
}
case 1:
{
Obj _3523014_37= co->res;
Obj _3521483_37 = R[1];
Obj _3523013_37 = R[2];
co->ctx.sp = R;
coraCall2(co, _3521483_37, _3523013_37, _3523014_37);
return;
}
case 2:
{
Obj _3523013_37= co->res;
Obj _3521482_37 = R[1];
Obj _3521483_37 = R[2];
R[1] = _3521483_37;
R[2] = _3523013_37;
saveCont(co, clofun131, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), _3521482_37);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521518_37 = R[1];
if (True == _3521518_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 4));
return;
}
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521486_37 = makeNative(co->gc, 1, clofun127, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3523050_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523050_37) {
Obj _3523051_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523052_37 = PRIM_ISCONS(_3523051_37);
if (True == _3523052_37) {
Obj _3523053_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523054_37 = PRIM_CAR(_3523053_37);
Obj _3523055_37 = PRIM_EQ(getBinding(co, packageID, 15).name, _3523054_37);
if (True == _3523055_37) {
Obj _3523056_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523057_37 = PRIM_CDR(_3523056_37);
Obj _3523058_37 = PRIM_ISCONS(_3523057_37);
if (True == _3523058_37) {
Obj _3523059_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523060_37 = PRIM_CDR(_3523059_37);
Obj _3523061_37 = PRIM_CAR(_3523060_37);
Obj on = _3523061_37;
Obj _3523062_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523063_37 = PRIM_CDR(_3523062_37);
Obj _3523064_37 = PRIM_CDR(_3523063_37);
Obj _3523065_37 = PRIM_EQ(Nil, _3523064_37);
if (True == _3523065_37) {
Obj _3523066_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523066_37;
Obj _3521515_37 = makeNative(co->gc, 2, clofun128, 1, 5, more, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), _3521486_37);
Obj _3523067_37 = PRIM_EQ(on, True);
if (True == _3523067_37) {
co->ctx.sp = R;
coraCall1(co, _3521515_37, True);
return;
} else {
Obj _3523068_37 = PRIM_EQ(on, False);
if (True == _3523068_37) {
co->ctx.sp = R;
coraCall1(co, _3521515_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521515_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521486_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521486_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521486_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521486_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521486_37);
return;
}
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521516_37 = R[1];
if (True == _3521516_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 4));
return;
}
}
}
}

static void clofun127(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521487_37 = makeNative(co->gc, 1, clofun126, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3523039_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523039_37) {
Obj _3523040_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523041_37 = PRIM_ISCONS(_3523040_37);
if (True == _3523041_37) {
Obj _3523042_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523043_37 = PRIM_CAR(_3523042_37);
Obj _3523044_37 = PRIM_EQ(getBinding(co, packageID, 16).name, _3523043_37);
if (True == _3523044_37) {
Obj _3523045_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523046_37 = PRIM_CDR(_3523045_37);
Obj exp = _3523046_37;
Obj _3523047_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523047_37;
Obj _3523048_37 = makeCons(co->gc, getBinding(co, packageID, 25).name, exp);
Obj _3523049_37 = makeCons(co->gc, _3523048_37, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), more, _3523049_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521487_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521487_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521487_37);
return;
}
}
}
}

static void clofun126(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521488_37 = makeNative(co->gc, 1, clofun125, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3523028_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523028_37) {
Obj _3523029_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523030_37 = PRIM_ISCONS(_3523029_37);
if (True == _3523030_37) {
Obj _3523031_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523032_37 = PRIM_CAR(_3523031_37);
Obj _3523033_37 = PRIM_EQ(getBinding(co, packageID, 18).name, _3523032_37);
if (True == _3523033_37) {
Obj _3523034_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523035_37 = PRIM_CDR(_3523034_37);
Obj exp = _3523035_37;
Obj _3523036_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523036_37;
Obj _3523037_37 = makeCons(co->gc, getBinding(co, packageID, 17).name, exp);
Obj _3523038_37 = makeCons(co->gc, _3523037_37, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), more, _3523038_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521488_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521488_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521488_37);
return;
}
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3523015_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3523015_37) {
Obj _3523016_37 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = _3523016_37;
Obj _3523017_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3523017_37;
Obj _3523018_37 = makeCons(co->gc, exp, Nil);
Obj _3523019_37 = makeCons(co->gc, getBinding(co, packageID, 20).name, _3523018_37);
Obj _3523020_37 = makeCons(co->gc, _3523019_37, Nil);
Obj _3523021_37 = makeCons(co->gc, getBinding(co, packageID, 21).name, _3523020_37);
Obj _3523022_37 = makeCons(co->gc, getBinding(co, packageID, 19).name, Nil);
Obj _3523023_37 = makeCons(co->gc, _3523022_37, Nil);
Obj _3523024_37 = makeCons(co->gc, _3523021_37, _3523023_37);
Obj _3523025_37 = makeCons(co->gc, getBinding(co, packageID, 22).name, _3523024_37);
Obj _3523026_37 = makeCons(co->gc, _3523025_37, closureRef(R[0], 1));
Obj _3523027_37 = makeCons(co->gc, exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), more, _3523026_37, _3523027_37, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521474_37 = R[1];
Obj _3521475_37 = makeNative(co->gc, 1, clofun123, 0, 1, _3521474_37);
Obj _3523002_37 = PRIM_ISCONS(_3521474_37);
if (True == _3523002_37) {
Obj _3523003_37 = PRIM_CAR(_3521474_37);
Obj _3523004_37 = PRIM_EQ(getBinding(co, packageID, 24).name, _3523003_37);
if (True == _3523004_37) {
Obj _3523005_37 = PRIM_CDR(_3521474_37);
Obj _3523006_37 = PRIM_ISCONS(_3523005_37);
if (True == _3523006_37) {
Obj _3523007_37 = PRIM_CDR(_3521474_37);
Obj _3523008_37 = PRIM_CAR(_3523007_37);
Obj _3523009_37 = PRIM_CDR(_3521474_37);
Obj _3523010_37 = PRIM_CDR(_3523009_37);
Obj remain = _3523010_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521475_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521475_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521475_37);
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521476_37 = makeNative(co->gc, 1, clofun122, 0, 1, closureRef(R[0], 0));
Obj _3522998_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522998_37) {
Obj _3522999_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3523000_37 = PRIM_EQ(getBinding(co, packageID, 25).name, _3522999_37);
if (True == _3523000_37) {
Obj _3523001_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3523001_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521476_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521476_37);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521477_37 = makeNative(co->gc, 2, clofun121, 0, 1, closureRef(R[0], 0));
Obj _3522989_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522989_37) {
Obj _3522990_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522991_37 = PRIM_ISCONS(_3522990_37);
if (True == _3522991_37) {
Obj _3522992_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522993_37 = PRIM_CAR(_3522992_37);
Obj _3522994_37 = PRIM_EQ(getBinding(co, packageID, 26).name, _3522993_37);
if (True == _3522994_37) {
Obj _3522995_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522996_37 = PRIM_CDR(_3522995_37);
Obj _3522997_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3522997_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521477_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521477_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521477_37);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521478_37 = makeNative(co->gc, 1, clofun120, 0, 0);
Obj _3522971_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522971_37) {
Obj _3522972_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522973_37 = PRIM_ISCONS(_3522972_37);
if (True == _3522973_37) {
Obj _3522974_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522975_37 = PRIM_CAR(_3522974_37);
Obj _3522976_37 = PRIM_EQ(getBinding(co, packageID, 27).name, _3522975_37);
if (True == _3522976_37) {
Obj _3522977_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522978_37 = PRIM_CDR(_3522977_37);
Obj _3522979_37 = PRIM_ISCONS(_3522978_37);
if (True == _3522979_37) {
Obj _3522980_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522981_37 = PRIM_CDR(_3522980_37);
Obj _3522982_37 = PRIM_CAR(_3522981_37);
Obj pkg = _3522982_37;
Obj _3522983_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522984_37 = PRIM_CDR(_3522983_37);
Obj _3522985_37 = PRIM_CDR(_3522984_37);
Obj _3522986_37 = PRIM_EQ(Nil, _3522985_37);
if (True == _3522986_37) {
Obj _3522987_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3522987_37;
R[1] = remain;
saveCont(co, clofun121, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521478_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521478_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521478_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521478_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521478_37);
return;
}
}
case 1:
{
Obj _3522988_37= co->res;
Obj remain = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
coraReturn(co, Nil);
return;
}
}
}

static void clofun119(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj bc = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "#include \"types.h\"\n"));
return;
}
case 1:
{
Obj _3522969_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 33)), makeNative(co->gc, 2, clofun118, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj _3522968_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 31)), to, globals, _3522968_37);
return;
}
case 3:
{
Obj _3522967_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 70)), bc);
return;
}
case 4:
{
Obj _3522966_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "\n\n"));
return;
}
case 5:
{
Obj _3522963_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 33)), makeNative(co->gc, 2, clofun117, 1, 1, to), bc);
return;
}
case 6:
{
Obj _3522962_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "static int packageID = -1;\n"));
return;
}
case 7:
{
Obj _3522961_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun119, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "#include \"runtime.h\"\n\n"));
return;
}
}
}

static void clofun118(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 32)), closureRef(R[0], 0), group, closureRef(R[0], 1));
return;
}
}
}

static void clofun117(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
Obj _3522964_37 = PRIM_CAR(group);
saveCont(co, clofun117, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 45)), closureRef(R[0], 0), _3522964_37);
return;
}
case 1:
{
Obj _3522965_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, ";\n"));
return;
}
}
}

static void clofun116(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj globals = R[2];
Obj label = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun116, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "void entry(struct Cora *co, int label, Obj *R) {\n"));
return;
}
case 1:
{
Obj _3522959_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj _3522958_37= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun116, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj _3522957_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
saveCont(co, clofun116, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, label);
return;
}
case 4:
{
Obj _3522956_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun116, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "co->ctx.fn = "));
return;
}
case 5:
{
Obj _3522955_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun116, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "addPackage(co, packageID, __symbolTable);\n"));
return;
}
case 6:
{
Obj _3522947_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
saveCont(co, clofun116, 5, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun115, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 7:
{
Obj _3522946_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun116, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, ");\n"));
return;
}
case 8:
{
Obj _3522945_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun116, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), to, _3522945_37);
return;
}
case 9:
{
Obj _3522944_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun116, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), globals);
return;
}
case 10:
{
Obj _3522943_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun116, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "Binding *__symbolTable = malloc(sizeof(Binding) * "));
return;
}
case 11:
{
Obj _3522942_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun116, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "if (packageID == -1) { packageID = packageIDAlloc(); }\n"));
return;
}
}
}

static void clofun115(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj sym = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun115, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, "__symbolTable["));
return;
}
case 1:
{
Obj _3522953_37= co->res;
Obj acc = R[1];
Obj _3522954_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3522954_37);
return;
}
case 2:
{
Obj _3522952_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun115, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, "\"));\n"));
return;
}
case 3:
{
Obj _3522951_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun115, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), _3522951_37);
return;
}
case 4:
{
Obj _3522950_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun115, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 30)), sym);
return;
}
case 5:
{
Obj _3522949_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun115, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, "] = bindSymbol(co, intern(\""));
return;
}
case 6:
{
Obj _3522948_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun115, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 0), acc);
return;
}
}
}

static void clofun114(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj group = R[2];
Obj globals = R[3];
Obj _3522920_37 = PRIM_CAR(group);
Obj label = _3522920_37;
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun114, 13, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), group);
return;
}
case 1:
{
Obj _3522940_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "}\n\n"));
return;
}
case 2:
{
Obj _3522939_37= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun114, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj _3522938_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
saveCont(co, clofun114, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun113, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), _3522938_37);
return;
}
case 4:
{
Obj _3522930_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun114, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), lam);
return;
}
case 5:
{
Obj _3522929_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun114, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "}\n"));
return;
}
case 6:
{
Obj _3522928_37= co->res;
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
saveCont(co, clofun114, 5, R);
Obj __args[5] = {globals, label, params, to, first_45stmt};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
case 7:
{
Obj _3522927_37= co->res;
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
saveCont(co, clofun114, 6, R);
Obj __args[5] = {globals, label, Nil, to, params};
coraCall(co, globalRef(co, getBinding(co, packageID, 51)), 5, __args);
return;
}
case 8:
{
Obj _3522926_37= co->res;
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
saveCont(co, clofun114, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "case 0:\n{\n"));
return;
}
case 9:
{
Obj _3522925_37= co->res;
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
saveCont(co, clofun114, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, " switch (label) {\n"));
return;
}
case 10:
{
Obj _3522924_37= co->res;
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
saveCont(co, clofun114, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, " {\n"));
return;
}
case 11:
{
Obj _3522923_37= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = _3522923_37;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun114, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 45)), to, label);
return;
}
case 12:
{
Obj _3522922_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = _3522922_37;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
saveCont(co, clofun114, 11, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 107)), lam);
return;
}
case 13:
{
Obj _3522921_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = _3522921_37;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun114, 12, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), lam);
return;
}
}
}

static void clofun113(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj cont = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun113, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "case "));
return;
}
case 1:
{
Obj _3522936_37= co->res;
Obj acc = R[1];
Obj _3522937_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3522937_37);
return;
}
case 2:
{
Obj _3522935_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun113, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj _3522934_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun113, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), _3522934_37, closureRef(R[0], 3), cont};
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
return;
}
case 4:
{
Obj _3522933_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun113, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), closureRef(R[0], 2));
return;
}
case 5:
{
Obj _3522932_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun113, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ":\n{\n"));
return;
}
case 6:
{
Obj _3522931_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun113, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun112(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521470_37 = R[1];
Obj _3521471_37 = R[2];
Obj _3522914_37 = PRIM_EQ(Nil, _3521471_37);
if (True == _3522914_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3522915_37 = PRIM_ISCONS(_3521471_37);
if (True == _3522915_37) {
Obj _3522916_37 = PRIM_CAR(_3521471_37);
Obj x = _3522916_37;
Obj _3522917_37 = PRIM_CDR(_3521471_37);
Obj y = _3522917_37;
R[1] = _3521470_37;
R[2] = y;
saveCont(co, clofun112, 1, R);
coraCall1(co, _3521470_37, x);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3522918_37= co->res;
Obj _3521470_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 33)), _3521470_37, y);
return;
}
}
}

static void clofun111(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun111, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 44)), globals);
return;
}
case 1:
{
Obj _3522912_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 40)), _3522912_37);
return;
}
case 2:
{
Obj _3522911_37= co->res;
saveCont(co, clofun111, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 41)), _3522911_37);
return;
}
case 3:
{
Obj _3522910_37= co->res;
saveCont(co, clofun111, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 42)), _3522910_37);
return;
}
case 4:
{
Obj _3522909_37= co->res;
saveCont(co, clofun111, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 43)), _3522909_37);
return;
}
case 5:
{
Obj _3522908_37= co->res;
Obj exp = R[1];
saveCont(co, clofun111, 4, R);
coraCall1(co, _3522908_37, exp);
return;
}
}
}

static void clofun110(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun110, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), exp);
return;
}
case 1:
{
Obj _3522906_37= co->res;
Obj obj = R[1];
Obj fns = _3522906_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 38)), obj, fns);
return;
}
case 2:
{
Obj _3522905_37= co->res;
Obj exp = R[1];
Obj obj = _3522905_37;
R[1] = obj;
saveCont(co, clofun110, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 35)), exp);
return;
}
}
}

static void clofun109(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521466_37 = R[1];
Obj _3521467_37 = R[2];
Obj _3522898_37 = PRIM_EQ(Nil, _3521467_37);
if (True == _3522898_37) {
coraReturn(co, _3521466_37);
return;
} else {
Obj _3522899_37 = PRIM_ISCONS(_3521467_37);
if (True == _3522899_37) {
Obj _3522900_37 = PRIM_CAR(_3521467_37);
Obj hd = _3522900_37;
Obj _3522901_37 = PRIM_CDR(_3521467_37);
Obj more = _3522901_37;
Obj _3522902_37 = makeCons(co->gc, _3521466_37, Nil);
Obj _3522903_37 = makeCons(co->gc, hd, _3522902_37);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 38)), _3522903_37, more);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}
}

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun108, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 39)), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj _3522896_37= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj _3522895_37= co->res;
Obj v = R[1];
Obj e2 = _3522895_37;
R[1] = v;
saveCont(co, clofun108, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 60)), v, e2);
return;
}
case 3:
{
Obj _3522894_37= co->res;
Obj v = R[1];
Obj e1 = _3522894_37;
R[1] = v;
saveCont(co, clofun108, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 64)), Nil, e1);
return;
}
case 4:
{
Obj _3522893_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
saveCont(co, clofun108, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 62)), v, exp);
return;
}
case 5:
{
Obj _3522892_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
saveCont(co, clofun108, 4, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(1), Nil);
return;
}
case 6:
{
Obj _3522891_37= co->res;
Obj exp = R[1];
Obj v = _3522891_37;
R[1] = exp;
R[2] = v;
saveCont(co, clofun108, 5, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
return;
}
}
}

static void clofun107(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), Nil, exp);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), exp, globalRef(co, getBinding(co, packageID, 76)));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), Nil, exp);
return;
}
}
}

static void clofun104(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj exp = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), Nil, globals, exp);
return;
}
}
}

static void clofun103(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj w = R[1];
Obj label = R[2];
R[1] = label;
R[2] = w;
saveCont(co, clofun103, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "static void "));
return;
}
case 1:
{
Obj _3522885_37= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3522884_37= co->res;
Obj w = R[1];
R[1] = w;
saveCont(co, clofun103, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj _3522883_37= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
saveCont(co, clofun103, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), w, label);
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
R[1] = w;
R[2] = label;
saveCont(co, clofun102, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "clofun"));
return;
}
case 1:
{
Obj _3522881_37= co->res;
Obj w = R[1];
Obj label = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), w, label);
return;
}
}
}

static void clofun101(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521460_37 = R[1];
Obj _3521461_37 = R[2];
Obj _3521462_37 = R[3];
Obj _3521463_37 = R[4];
Obj _3521464_37 = R[5];
Obj _3521465_37 = makeNative(co->gc, 1, clofun100, 0, 0);
Obj _3522859_37 = PRIM_ISCONS(_3521464_37);
if (True == _3522859_37) {
Obj _3522860_37 = PRIM_CAR(_3521464_37);
Obj _3522861_37 = PRIM_EQ(getBinding(co, packageID, 68).name, _3522860_37);
if (True == _3522861_37) {
Obj _3522862_37 = PRIM_CDR(_3521464_37);
Obj _3522863_37 = PRIM_ISCONS(_3522862_37);
if (True == _3522863_37) {
Obj _3522864_37 = PRIM_CDR(_3521464_37);
Obj _3522865_37 = PRIM_CAR(_3522864_37);
Obj var = _3522865_37;
Obj _3522866_37 = PRIM_CDR(_3521464_37);
Obj _3522867_37 = PRIM_CDR(_3522866_37);
Obj _3522868_37 = PRIM_ISCONS(_3522867_37);
if (True == _3522868_37) {
Obj _3522869_37 = PRIM_CDR(_3521464_37);
Obj _3522870_37 = PRIM_CDR(_3522869_37);
Obj _3522871_37 = PRIM_CAR(_3522870_37);
Obj body = _3522871_37;
Obj _3522872_37 = PRIM_CDR(_3521464_37);
Obj _3522873_37 = PRIM_CDR(_3522872_37);
Obj _3522874_37 = PRIM_CDR(_3522873_37);
Obj fvs = _3522874_37;
R[1] = var;
R[2] = fvs;
R[3] = _3521460_37;
R[4] = _3521461_37;
R[5] = _3521462_37;
R[6] = _3521463_37;
R[7] = body;
saveCont(co, clofun101, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), _3521463_37, makeCString(co->gc, "Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521465_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521465_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521465_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521465_37);
return;
}
}
case 1:
{
Obj _3522879_37= co->res;
Obj _3521460_37 = R[1];
Obj _3521461_37 = R[2];
Obj _3521462_37 = R[3];
Obj _3521463_37 = R[4];
Obj body = R[5];
co->ctx.sp = R;
Obj __args[5] = {_3521460_37, _3521461_37, _3521462_37, _3521463_37, body};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
case 2:
{
Obj _3522878_37= co->res;
Obj fvs = R[1];
Obj _3521460_37 = R[2];
Obj _3521461_37 = R[3];
Obj _3521462_37 = R[4];
Obj _3521463_37 = R[5];
Obj body = R[6];
R[1] = _3521460_37;
R[2] = _3521461_37;
R[3] = _3521462_37;
R[4] = _3521463_37;
R[5] = body;
saveCont(co, clofun101, 1, R);
Obj __args[5] = {_3521460_37, _3521461_37, _3521462_37, _3521463_37, fvs};
coraCall(co, globalRef(co, getBinding(co, packageID, 51)), 5, __args);
return;
}
case 3:
{
Obj _3522877_37= co->res;
Obj fvs = R[1];
Obj _3521460_37 = R[2];
Obj _3521461_37 = R[3];
Obj _3521462_37 = R[4];
Obj _3521463_37 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = _3521460_37;
R[3] = _3521461_37;
R[4] = _3521462_37;
R[5] = _3521463_37;
R[6] = body;
saveCont(co, clofun101, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), _3521463_37, makeCString(co->gc, "= co->res;\n"));
return;
}
case 4:
{
Obj _3522875_37= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj _3521460_37 = R[3];
Obj _3521461_37 = R[4];
Obj _3521462_37 = R[5];
Obj _3521463_37 = R[6];
Obj body = R[7];
Obj _3522876_37 = PRIM_CAR(var);
R[1] = fvs;
R[2] = _3521460_37;
R[3] = _3521461_37;
R[4] = _3521462_37;
R[5] = _3521463_37;
R[6] = body;
saveCont(co, clofun101, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), _3521463_37, _3522876_37);
return;
}
}
}

static void clofun100(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun99(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj l = R[5];
Obj _3522845_37 = primGenSym(co);
Obj generate_45inst_45list_45h = _3522845_37;
Obj _3522856_37 = primSet(co, generate_45inst_45list_45h, makeNative(co->gc, 2, clofun98, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
saveCont(co, clofun99, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), generate_45inst_45list_45h);
return;
}
case 1:
{
Obj _3522857_37= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, _3522857_37, l);
return;
}
}
}

static void clofun98(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3522846_37 = PRIM_EQ(Nil, x);
if (True == _3522846_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3522847_37 = PRIM_ISCONS(x);
if (True == _3522847_37) {
Obj _3522848_37 = PRIM_CAR(x);
Obj a = _3522848_37;
Obj _3522849_37 = PRIM_CDR(x);
Obj b = _3522849_37;
R[1] = b;
saveCont(co, clofun98, 5, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), a};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3522854_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3522854_37, b);
return;
}
case 2:
{
Obj _3522853_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun98, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3522855_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3522855_37, b);
return;
}
case 4:
{
Obj _3522851_37= co->res;
Obj b = R[1];
Obj _3522852_37 = primNot(_3522851_37);
if (True == _3522852_37) {
R[1] = b;
saveCont(co, clofun98, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ", "));
return;
} else {
Nil;
R[1] = b;
saveCont(co, clofun98, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
}
case 5:
{
Obj _3522850_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun98, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), b);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env1 = R[3];
Obj w = R[4];
Obj x1 = R[5];
Obj _3522558_37 = primGenSym(co);
Obj generate_45inst_45h = _3522558_37;
Obj _3522842_37 = primSet(co, generate_45inst_45h, makeNative(co->gc, 3, clofun96, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
saveCont(co, clofun97, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), generate_45inst_45h);
return;
}
case 1:
{
Obj _3522843_37= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, _3522843_37, x1, env1);
return;
}
}
}

static void clofun96(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x2 = R[1];
Obj env = R[2];
Obj _3522559_37 = primIsSymbol(x2);
if (True == _3522559_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), closureRef(R[0], 3), x2);
return;
} else {
Obj _3521446_37 = makeNative(co->gc, 2, clofun95, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj _3522829_37 = PRIM_ISCONS(x2);
if (True == _3522829_37) {
Obj _3522830_37 = PRIM_CAR(x2);
Obj _3522831_37 = PRIM_EQ(getBinding(co, packageID, 99).name, _3522830_37);
if (True == _3522831_37) {
Obj _3522832_37 = PRIM_CDR(x2);
Obj _3522833_37 = PRIM_ISCONS(_3522832_37);
if (True == _3522833_37) {
Obj _3522834_37 = PRIM_CDR(x2);
Obj _3522835_37 = PRIM_CAR(_3522834_37);
Obj x = _3522835_37;
Obj _3522836_37 = PRIM_CDR(x2);
Obj _3522837_37 = PRIM_CDR(_3522836_37);
Obj _3522838_37 = PRIM_EQ(Nil, _3522837_37);
if (True == _3522838_37) {
R[1] = x;
saveCont(co, clofun96, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "globalRef(co, getBinding(co, packageID, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521446_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521446_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521446_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521446_37);
return;
}
}
}
case 1:
{
Obj _3522841_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "))"));
return;
}
case 2:
{
Obj _3522840_37= co->res;
saveCont(co, clofun96, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), _3522840_37);
return;
}
case 3:
{
Obj _3522839_37= co->res;
Obj x = R[1];
saveCont(co, clofun96, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), x, closureRef(R[0], 2));
return;
}
}
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521447_37 = makeNative(co->gc, 2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj _3522817_37 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == _3522817_37) {
Obj _3522818_37 = PRIM_CAR(closureRef(R[0], 4));
Obj _3522819_37 = PRIM_EQ(getBinding(co, packageID, 83).name, _3522818_37);
if (True == _3522819_37) {
Obj _3522820_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3522821_37 = PRIM_ISCONS(_3522820_37);
if (True == _3522821_37) {
Obj _3522822_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3522823_37 = PRIM_CAR(_3522822_37);
Obj idx = _3522823_37;
Obj _3522824_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3522825_37 = PRIM_CDR(_3522824_37);
Obj _3522826_37 = PRIM_EQ(Nil, _3522825_37);
if (True == _3522826_37) {
R[1] = idx;
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "closureRef(R[0], "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521447_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521447_37);
return;
}
}
case 1:
{
Obj _3522828_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3522827_37= co->res;
Obj idx = R[1];
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), idx);
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521448_37 = makeNative(co->gc, 4, clofun93, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3522793_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3522793_37) {
Obj _3522794_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3522795_37 = PRIM_EQ(getBinding(co, packageID, 102).name, _3522794_37);
if (True == _3522795_37) {
Obj _3522796_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3522797_37 = PRIM_ISCONS(_3522796_37);
if (True == _3522797_37) {
Obj _3522798_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3522799_37 = PRIM_CAR(_3522798_37);
Obj x = _3522799_37;
Obj _3522800_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3522801_37 = PRIM_CDR(_3522800_37);
Obj _3522802_37 = PRIM_EQ(Nil, _3522801_37);
if (True == _3522802_37) {
Obj _3522803_37 = primIsSymbol(x);
if (True == _3522803_37) {
R[1] = x;
saveCont(co, clofun94, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "getBinding(co, packageID, "));
return;
} else {
R[1] = x;
saveCont(co, clofun94, 9, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 89)), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521448_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521448_37);
return;
}
}
case 1:
{
Obj _3522806_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ").name"));
return;
}
case 2:
{
Obj _3522805_37= co->res;
saveCont(co, clofun94, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), _3522805_37);
return;
}
case 3:
{
Obj _3522804_37= co->res;
Obj x = R[1];
saveCont(co, clofun94, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3522809_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 5:
{
Obj _3522808_37= co->res;
Obj x = R[1];
saveCont(co, clofun94, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj _3522813_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "\")"));
return;
}
case 7:
{
Obj _3522812_37= co->res;
saveCont(co, clofun94, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), _3522812_37);
return;
}
case 8:
{
Obj _3522811_37= co->res;
Obj x = R[1];
saveCont(co, clofun94, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 47)), x);
return;
}
case 9:
{
Obj _3522807_37= co->res;
Obj x = R[1];
if (True == _3522807_37) {
R[1] = x;
saveCont(co, clofun94, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "MAKE_NUMBER("));
return;
} else {
Obj _3522810_37 = primIsString(x);
if (True == _3522810_37) {
R[1] = x;
saveCont(co, clofun94, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "makeCString(co->gc, \""));
return;
} else {
Obj _3522814_37 = PRIM_EQ(x, Nil);
if (True == _3522814_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "Nil"));
return;
} else {
Obj _3522815_37 = PRIM_EQ(x, True);
if (True == _3522815_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "True"));
return;
} else {
Obj _3522816_37 = PRIM_EQ(x, False);
if (True == _3522816_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "False"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no cond match"));
return;
}
}
}
}
}
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521449_37 = makeNative(co->gc, 3, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3522758_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3522758_37) {
Obj _3522759_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3522760_37 = PRIM_EQ(getBinding(co, packageID, 92).name, _3522759_37);
if (True == _3522760_37) {
Obj _3522761_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522762_37 = PRIM_ISCONS(_3522761_37);
if (True == _3522762_37) {
Obj _3522763_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522764_37 = PRIM_CAR(_3522763_37);
Obj a = _3522764_37;
Obj _3522765_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522766_37 = PRIM_CDR(_3522765_37);
Obj _3522767_37 = PRIM_ISCONS(_3522766_37);
if (True == _3522767_37) {
Obj _3522768_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522769_37 = PRIM_CDR(_3522768_37);
Obj _3522770_37 = PRIM_CAR(_3522769_37);
Obj b = _3522770_37;
Obj _3522771_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522772_37 = PRIM_CDR(_3522771_37);
Obj _3522773_37 = PRIM_CDR(_3522772_37);
Obj _3522774_37 = PRIM_ISCONS(_3522773_37);
if (True == _3522774_37) {
Obj _3522775_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522776_37 = PRIM_CDR(_3522775_37);
Obj _3522777_37 = PRIM_CDR(_3522776_37);
Obj _3522778_37 = PRIM_CAR(_3522777_37);
Obj c = _3522778_37;
Obj _3522779_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522780_37 = PRIM_CDR(_3522779_37);
Obj _3522781_37 = PRIM_CDR(_3522780_37);
Obj _3522782_37 = PRIM_CDR(_3522781_37);
Obj _3522783_37 = PRIM_EQ(Nil, _3522782_37);
if (True == _3522783_37) {
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun93, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 130)), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521449_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521449_37);
return;
}
}
case 1:
{
Obj _3522791_37= co->res;
Obj a = R[1];
Obj c = R[2];
Obj _3522792_37 = makeCons(co->gc, a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, _3522791_37, c, _3522792_37);
return;
}
case 2:
{
Obj _3522790_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun93, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3522789_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun93, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj _3522788_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
saveCont(co, clofun93, 3, R);
coraCall2(co, _3522788_37, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj _3522787_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun93, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3522786_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun93, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, " = "));
return;
}
case 7:
{
Obj _3522785_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun93, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), closureRef(R[0], 3), a);
return;
}
case 8:
{
Obj _3522784_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun93, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
}
}

static void clofun92(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521450_37 = makeNative(co->gc, 4, clofun91, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3522728_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3522728_37) {
Obj _3522729_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3522730_37 = PRIM_ISCONS(_3522729_37);
if (True == _3522730_37) {
Obj _3522731_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3522732_37 = PRIM_CAR(_3522731_37);
Obj _3522733_37 = PRIM_EQ(getBinding(co, packageID, 96).name, _3522732_37);
if (True == _3522733_37) {
Obj _3522734_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3522735_37 = PRIM_CDR(_3522734_37);
Obj _3522736_37 = PRIM_ISCONS(_3522735_37);
if (True == _3522736_37) {
Obj _3522737_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3522738_37 = PRIM_CDR(_3522737_37);
Obj _3522739_37 = PRIM_CAR(_3522738_37);
Obj f = _3522739_37;
Obj _3522740_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3522741_37 = PRIM_CDR(_3522740_37);
Obj _3522742_37 = PRIM_CDR(_3522741_37);
Obj _3522743_37 = PRIM_EQ(Nil, _3522742_37);
if (True == _3522743_37) {
Obj _3522744_37 = PRIM_CDR(closureRef(R[0], 1));
Obj args = _3522744_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun92, 10, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 108)), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521450_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521450_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521450_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521450_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521450_37);
return;
}
}
case 1:
{
Obj _3522749_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3522748_37= co->res;
Obj args = R[1];
saveCont(co, clofun92, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 3:
{
Obj _3522752_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 4:
{
Obj _3522751_37= co->res;
Obj args = R[1];
saveCont(co, clofun92, 3, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 5:
{
Obj _3522755_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 6:
{
Obj _3522754_37= co->res;
Obj args = R[1];
saveCont(co, clofun92, 5, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 7:
{
Obj _3522757_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 8:
{
Obj _3522756_37= co->res;
Obj args = R[1];
saveCont(co, clofun92, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 9:
{
Obj _3522746_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3522747_37 = PRIM_EQ(f, getBinding(co, packageID, 127).name);
if (True == _3522747_37) {
R[1] = args;
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
} else {
Obj _3522750_37 = PRIM_EQ(f, getBinding(co, packageID, 115).name);
if (True == _3522750_37) {
R[1] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co"));
return;
} else {
Obj _3522753_37 = PRIM_EQ(f, getBinding(co, packageID, 124).name);
if (True == _3522753_37) {
R[1] = args;
saveCont(co, clofun92, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co->gc, "));
return;
} else {
R[1] = args;
saveCont(co, clofun92, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "("));
return;
}
}
}
}
case 10:
{
Obj _3522745_37= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
saveCont(co, clofun92, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), _3522745_37);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521451_37 = makeNative(co->gc, 5, clofun90, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3522693_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3522693_37) {
Obj _3522694_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3522695_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3522694_37);
if (True == _3522695_37) {
Obj _3522696_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522697_37 = PRIM_ISCONS(_3522696_37);
if (True == _3522697_37) {
Obj _3522698_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522699_37 = PRIM_CAR(_3522698_37);
Obj a = _3522699_37;
Obj _3522700_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522701_37 = PRIM_CDR(_3522700_37);
Obj _3522702_37 = PRIM_ISCONS(_3522701_37);
if (True == _3522702_37) {
Obj _3522703_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522704_37 = PRIM_CDR(_3522703_37);
Obj _3522705_37 = PRIM_CAR(_3522704_37);
Obj b = _3522705_37;
Obj _3522706_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522707_37 = PRIM_CDR(_3522706_37);
Obj _3522708_37 = PRIM_CDR(_3522707_37);
Obj _3522709_37 = PRIM_ISCONS(_3522708_37);
if (True == _3522709_37) {
Obj _3522710_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522711_37 = PRIM_CDR(_3522710_37);
Obj _3522712_37 = PRIM_CDR(_3522711_37);
Obj _3522713_37 = PRIM_CAR(_3522712_37);
Obj c = _3522713_37;
Obj _3522714_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522715_37 = PRIM_CDR(_3522714_37);
Obj _3522716_37 = PRIM_CDR(_3522715_37);
Obj _3522717_37 = PRIM_CDR(_3522716_37);
Obj _3522718_37 = PRIM_EQ(Nil, _3522717_37);
if (True == _3522718_37) {
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun91, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "if (True == "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521451_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521451_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521451_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521451_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521451_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521451_37);
return;
}
}
case 1:
{
Obj _3522727_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "}\n"));
return;
}
case 2:
{
Obj _3522726_37= co->res;
Obj c = R[1];
saveCont(co, clofun91, 1, R);
coraCall2(co, _3522726_37, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3522725_37= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun91, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3522724_37= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun91, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "} else {\n"));
return;
}
case 5:
{
Obj _3522723_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
saveCont(co, clofun91, 4, R);
coraCall2(co, _3522723_37, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3522722_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun91, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
case 7:
{
Obj _3522721_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun91, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ") {\n"));
return;
}
case 8:
{
Obj _3522720_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
saveCont(co, clofun91, 7, R);
coraCall2(co, _3522720_37, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj _3522719_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun91, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521452_37 = makeNative(co->gc, 3, clofun89, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj _3522655_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3522655_37) {
Obj _3522656_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3522657_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3522656_37);
if (True == _3522657_37) {
Obj _3522658_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522659_37 = PRIM_ISCONS(_3522658_37);
if (True == _3522659_37) {
Obj _3522660_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522661_37 = PRIM_CAR(_3522660_37);
Obj label = _3522661_37;
Obj _3522662_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522663_37 = PRIM_CDR(_3522662_37);
Obj _3522664_37 = PRIM_ISCONS(_3522663_37);
if (True == _3522664_37) {
Obj _3522665_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522666_37 = PRIM_CDR(_3522665_37);
Obj _3522667_37 = PRIM_CAR(_3522666_37);
Obj nargs = _3522667_37;
Obj _3522668_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522669_37 = PRIM_CDR(_3522668_37);
Obj _3522670_37 = PRIM_CDR(_3522669_37);
Obj _3522671_37 = PRIM_ISCONS(_3522670_37);
if (True == _3522671_37) {
Obj _3522672_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522673_37 = PRIM_CDR(_3522672_37);
Obj _3522674_37 = PRIM_CDR(_3522673_37);
Obj _3522675_37 = PRIM_CAR(_3522674_37);
Obj nframe = _3522675_37;
Obj _3522676_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3522677_37 = PRIM_CDR(_3522676_37);
Obj _3522678_37 = PRIM_CDR(_3522677_37);
Obj _3522679_37 = PRIM_CDR(_3522678_37);
Obj frees = _3522679_37;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
saveCont(co, clofun90, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "makeNative(co->gc, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521452_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521452_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521452_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521452_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521452_37);
return;
}
}
case 1:
{
Obj _3522692_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3522691_37= co->res;
Obj frees = R[1];
saveCont(co, clofun90, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 3:
{
Obj _3522689_37= co->res;
Obj frees = R[1];
Obj _3522690_37 = primNot(_3522689_37);
if (True == _3522690_37) {
R[1] = frees;
saveCont(co, clofun90, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
}
case 4:
{
Obj _3522688_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun90, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), frees);
return;
}
case 5:
{
Obj _3522687_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun90, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), _3522687_37);
return;
}
case 6:
{
Obj _3522686_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun90, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), frees);
return;
}
case 7:
{
Obj _3522685_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun90, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 8:
{
Obj _3522684_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
saveCont(co, clofun90, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 9:
{
Obj _3522683_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun90, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 10:
{
Obj _3522682_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun90, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), label);
return;
}
case 11:
{
Obj _3522681_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun90, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 12:
{
Obj _3522680_37= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun90, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nframe);
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521453_37 = makeNative(co->gc, 2, clofun88, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3522634_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3522634_37) {
Obj _3522635_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3522636_37 = PRIM_EQ(getBinding(co, packageID, 91).name, _3522635_37);
if (True == _3522636_37) {
Obj _3522637_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522638_37 = PRIM_ISCONS(_3522637_37);
if (True == _3522638_37) {
Obj _3522639_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522640_37 = PRIM_CAR(_3522639_37);
Obj a = _3522640_37;
Obj _3522641_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522642_37 = PRIM_CDR(_3522641_37);
Obj _3522643_37 = PRIM_ISCONS(_3522642_37);
if (True == _3522643_37) {
Obj _3522644_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522645_37 = PRIM_CDR(_3522644_37);
Obj _3522646_37 = PRIM_CAR(_3522645_37);
Obj b = _3522646_37;
Obj _3522647_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522648_37 = PRIM_CDR(_3522647_37);
Obj _3522649_37 = PRIM_CDR(_3522648_37);
Obj _3522650_37 = PRIM_EQ(Nil, _3522649_37);
if (True == _3522650_37) {
R[1] = a;
R[2] = b;
saveCont(co, clofun89, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521453_37);
return;
}
}
case 1:
{
Obj _3522654_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, _3522654_37, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj _3522653_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun89, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3522652_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun89, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj _3522651_37= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
saveCont(co, clofun89, 3, R);
coraCall2(co, _3522651_37, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521454_37 = makeNative(co->gc, 2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3522620_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3522620_37) {
Obj _3522621_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3522622_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3522621_37);
if (True == _3522622_37) {
Obj _3522623_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522624_37 = PRIM_ISCONS(_3522623_37);
if (True == _3522624_37) {
Obj _3522625_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522626_37 = PRIM_CAR(_3522625_37);
Obj x = _3522626_37;
Obj _3522627_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522628_37 = PRIM_CDR(_3522627_37);
Obj _3522629_37 = PRIM_EQ(Nil, _3522628_37);
if (True == _3522629_37) {
R[1] = x;
saveCont(co, clofun88, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521454_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521454_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521454_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521454_37);
return;
}
}
case 1:
{
Obj _3522633_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3522632_37= co->res;
saveCont(co, clofun88, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 3:
{
Obj _3522631_37= co->res;
Obj x = R[1];
saveCont(co, clofun88, 2, R);
coraCall2(co, _3522631_37, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3522630_37= co->res;
Obj x = R[1];
R[1] = x;
saveCont(co, clofun88, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521455_37 = makeNative(co->gc, 3, clofun86, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3522607_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3522607_37) {
Obj _3522608_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3522609_37 = PRIM_EQ(getBinding(co, packageID, 80).name, _3522608_37);
if (True == _3522609_37) {
Obj _3522610_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522611_37 = PRIM_ISCONS(_3522610_37);
if (True == _3522611_37) {
Obj _3522612_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522613_37 = PRIM_CAR(_3522612_37);
Obj exp = _3522613_37;
Obj _3522614_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3522615_37 = PRIM_CDR(_3522614_37);
Obj _3522616_37 = PRIM_EQ(Nil, _3522615_37);
if (True == _3522616_37) {
R[1] = exp;
saveCont(co, clofun87, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521455_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521455_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521455_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521455_37);
return;
}
}
case 1:
{
Obj _3522619_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3522618_37= co->res;
Obj exp = R[1];
saveCont(co, clofun87, 1, R);
coraCall2(co, _3522618_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3522617_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun87, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521456_37 = makeNative(co->gc, 4, clofun85, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3522583_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522583_37) {
Obj _3522584_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522585_37 = PRIM_EQ(getBinding(co, packageID, 79).name, _3522584_37);
if (True == _3522585_37) {
Obj _3522586_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522587_37 = PRIM_ISCONS(_3522586_37);
if (True == _3522587_37) {
Obj _3522588_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522589_37 = PRIM_CAR(_3522588_37);
Obj exp = _3522589_37;
Obj _3522590_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522591_37 = PRIM_CDR(_3522590_37);
Obj _3522592_37 = PRIM_ISCONS(_3522591_37);
if (True == _3522592_37) {
Obj _3522593_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522594_37 = PRIM_CDR(_3522593_37);
Obj _3522595_37 = PRIM_CAR(_3522594_37);
Obj label = _3522595_37;
Obj _3522596_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522597_37 = PRIM_CDR(_3522596_37);
Obj _3522598_37 = PRIM_CDR(_3522597_37);
Obj fvs = _3522598_37;
R[1] = label;
R[2] = exp;
saveCont(co, clofun86, 8, R);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs};
coraCall(co, globalRef(co, getBinding(co, packageID, 55)), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521456_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521456_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521456_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521456_37);
return;
}
}
case 1:
{
Obj _3522606_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3522605_37= co->res;
Obj exp = R[1];
saveCont(co, clofun86, 1, R);
coraCall2(co, _3522605_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3522604_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun86, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3522603_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun86, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", R);\n"));
return;
}
case 5:
{
Obj _3522602_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun86, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), label);
return;
}
case 6:
{
Obj _3522601_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun86, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 7:
{
Obj _3522600_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun86, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 8:
{
Obj _3522599_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun86, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "saveCont(co, "));
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3522560_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522560_37) {
Obj _3522561_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3522561_37;
Obj _3522562_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3522562_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun85, 18, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3522574_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", __args);\n"));
return;
}
case 2:
{
Obj _3522573_37= co->res;
Obj nargs = R[1];
saveCont(co, clofun85, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 3:
{
Obj _3522572_37= co->res;
Obj nargs = R[1];
R[1] = nargs;
saveCont(co, clofun85, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 4:
{
Obj _3522571_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = nargs;
saveCont(co, clofun85, 3, R);
coraCall2(co, _3522571_37, f, closureRef(R[0], 4));
return;
}
case 5:
{
Obj _3522570_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun85, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 1));
return;
}
case 6:
{
Obj _3522569_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun85, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "coraCall(co, "));
return;
}
case 7:
{
Obj _3522568_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun85, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "};\n"));
return;
}
case 8:
{
Obj _3522567_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun85, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 9:
{
Obj _3522566_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun85, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "] = {"));
return;
}
case 10:
{
Obj _3522565_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun85, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 11:
{
Obj _3522582_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 12:
{
Obj _3522581_37= co->res;
Obj args = R[1];
saveCont(co, clofun85, 11, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 13:
{
Obj _3522579_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3522580_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3522580_37) {
R[1] = args;
saveCont(co, clofun85, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
}
case 14:
{
Obj _3522578_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
saveCont(co, clofun85, 13, R);
coraCall2(co, _3522578_37, f, closureRef(R[0], 4));
return;
}
case 15:
{
Obj _3522577_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun85, 14, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 1));
return;
}
case 16:
{
Obj _3522576_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun85, 15, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
}
case 17:
{
Obj _3522575_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun85, 16, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 18:
{
Obj _3522563_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = _3522563_37;
Obj _3522564_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3522564_37) {
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun85, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "Obj __args["));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun85, 17, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "coraCall"));
return;
}
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj ls = R[5];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun83, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj v = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun83, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
case 1:
{
Obj _3522555_37= co->res;
Obj acc = R[1];
Obj _3522556_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3522556_37);
return;
}
case 2:
{
Obj _3522554_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun83, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "];\n"));
return;
}
case 3:
{
Obj _3522553_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun83, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj _3522552_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun83, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, " = R["));
return;
}
case 5:
{
Obj _3522551_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun83, 4, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
}
}

static void clofun82(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj ls = R[5];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun81, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
return;
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj v = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "R["));
return;
}
case 1:
{
Obj _3522548_37= co->res;
Obj acc = R[1];
Obj _3522549_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3522549_37);
return;
}
case 2:
{
Obj _3522547_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj _3522546_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun81, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
case 4:
{
Obj _3522545_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun81, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "] = "));
return;
}
case 5:
{
Obj _3522544_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun80(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sym = R[1];
Obj globals = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 57)), MAKE_NUMBER(0), sym, globals);
return;
}
}
}

static void clofun79(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj idx = R[1];
Obj sym = R[2];
Obj globals = R[3];
R[1] = idx;
R[2] = globals;
R[3] = sym;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), globals);
return;
}
case 1:
{
Obj _3522537_37= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == _3522537_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3522538_37 = PRIM_CAR(globals);
Obj _3522539_37 = PRIM_EQ(sym, _3522538_37);
if (True == _3522539_37) {
coraReturn(co, idx);
return;
} else {
Obj _3522540_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3522541_37 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 57)), _3522540_37, sym, _3522541_37);
return;
}
}
}
}
}

static void clofun78(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sym = R[1];
Obj globals = R[2];
R[1] = sym;
R[2] = globals;
saveCont(co, clofun78, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), globals);
return;
}
case 1:
{
Obj _3522533_37= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == _3522533_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3522534_37 = makeCons(co->gc, sym, val);
Obj _3522535_37 = primSet(co, globals, _3522534_37);
coraReturn(co, _3522535_37);
return;
}
}
case 2:
{
Obj _3522532_37= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = _3522532_37;
R[1] = sym;
R[2] = val;
R[3] = globals;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 101)), sym, val);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj k = R[2];
Obj _3522525_37 = primGenSym(co);
Obj tmp = _3522525_37;
R[1] = x;
R[2] = tmp;
saveCont(co, clofun77, 1, R);
coraCall1(co, k, tmp);
return;
}
case 1:
{
Obj _3522526_37= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj _3522527_37 = makeCons(co->gc, _3522526_37, Nil);
Obj _3522528_37 = makeCons(co->gc, x, _3522527_37);
Obj _3522529_37 = makeCons(co->gc, tmp, _3522528_37);
Obj _3522530_37 = makeCons(co->gc, getBinding(co, packageID, 92).name, _3522529_37);
coraReturn(co, _3522530_37);
return;
}
}
}

static void clofun76(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj v = R[1];
Obj val = R[2];
R[1] = val;
R[2] = v;
saveCont(co, clofun76, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj _3522523_37= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj _3522518_37= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = _3522518_37;
Obj _3522519_37 = makeCons(co->gc, val, Nil);
Obj _3522520_37 = makeCons(co->gc, idx, _3522519_37);
Obj _3522521_37 = makeCons(co->gc, _3522520_37, cur);
Obj cur1 = _3522521_37;
Obj _3522522_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
saveCont(co, clofun76, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(0), _3522522_37);
return;
}
case 3:
{
Obj _3522517_37= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = _3522517_37;
R[1] = val;
R[2] = idx;
R[3] = v;
saveCont(co, clofun76, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(1));
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521441_37 = R[1];
Obj _3521442_37 = R[2];
Obj _3521443_37 = makeNative(co->gc, 1, clofun74, 0, 2, _3521441_37, _3521442_37);
Obj _3522468_37 = PRIM_ISCONS(_3521442_37);
if (True == _3522468_37) {
Obj _3522469_37 = PRIM_CAR(_3521442_37);
Obj _3522470_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3522469_37);
if (True == _3522470_37) {
Obj _3522471_37 = PRIM_CDR(_3521442_37);
Obj _3522472_37 = PRIM_ISCONS(_3522471_37);
if (True == _3522472_37) {
Obj _3522473_37 = PRIM_CDR(_3521442_37);
Obj _3522474_37 = PRIM_CAR(_3522473_37);
Obj _3522475_37 = PRIM_ISCONS(_3522474_37);
if (True == _3522475_37) {
Obj _3522476_37 = PRIM_CDR(_3521442_37);
Obj _3522477_37 = PRIM_CAR(_3522476_37);
Obj _3522478_37 = PRIM_CAR(_3522477_37);
Obj _3522479_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3522478_37);
if (True == _3522479_37) {
Obj _3522480_37 = PRIM_CDR(_3521442_37);
Obj _3522481_37 = PRIM_CAR(_3522480_37);
Obj _3522482_37 = PRIM_CDR(_3522481_37);
Obj _3522483_37 = PRIM_ISCONS(_3522482_37);
if (True == _3522483_37) {
Obj _3522484_37 = PRIM_CDR(_3521442_37);
Obj _3522485_37 = PRIM_CAR(_3522484_37);
Obj _3522486_37 = PRIM_CDR(_3522485_37);
Obj _3522487_37 = PRIM_CAR(_3522486_37);
Obj params = _3522487_37;
Obj _3522488_37 = PRIM_CDR(_3521442_37);
Obj _3522489_37 = PRIM_CAR(_3522488_37);
Obj _3522490_37 = PRIM_CDR(_3522489_37);
Obj _3522491_37 = PRIM_CDR(_3522490_37);
Obj _3522492_37 = PRIM_ISCONS(_3522491_37);
if (True == _3522492_37) {
Obj _3522493_37 = PRIM_CDR(_3521442_37);
Obj _3522494_37 = PRIM_CAR(_3522493_37);
Obj _3522495_37 = PRIM_CDR(_3522494_37);
Obj _3522496_37 = PRIM_CDR(_3522495_37);
Obj _3522497_37 = PRIM_CAR(_3522496_37);
Obj body = _3522497_37;
Obj _3522498_37 = PRIM_CDR(_3521442_37);
Obj _3522499_37 = PRIM_CAR(_3522498_37);
Obj _3522500_37 = PRIM_CDR(_3522499_37);
Obj _3522501_37 = PRIM_CDR(_3522500_37);
Obj _3522502_37 = PRIM_CDR(_3522501_37);
Obj _3522503_37 = PRIM_EQ(Nil, _3522502_37);
if (True == _3522503_37) {
Obj _3522504_37 = PRIM_CDR(_3521442_37);
Obj _3522505_37 = PRIM_CDR(_3522504_37);
Obj fvs = _3522505_37;
R[1] = _3521441_37;
R[2] = params;
R[3] = fvs;
saveCont(co, clofun75, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 62)), _3521441_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521443_37);
return;
}
}
case 1:
{
Obj _3522511_37= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj _3522512_37 = makeCons(co->gc, nframe, fvs);
Obj _3522513_37 = makeCons(co->gc, _3522511_37, _3522512_37);
Obj _3522514_37 = makeCons(co->gc, cur, _3522513_37);
Obj _3522515_37 = makeCons(co->gc, getBinding(co, packageID, 84).name, _3522514_37);
coraReturn(co, _3522515_37);
return;
}
case 2:
{
Obj _3522510_37= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
saveCont(co, clofun75, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), params);
return;
}
case 3:
{
Obj _3522509_37= co->res;
Obj _3521441_37 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = _3522509_37;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun75, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 60)), _3521441_37, body2);
return;
}
case 4:
{
Obj _3522508_37= co->res;
Obj _3521441_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = _3522508_37;
R[1] = _3521441_37;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
saveCont(co, clofun75, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 63)), body2);
return;
}
case 5:
{
Obj _3522507_37= co->res;
Obj body1 = R[1];
Obj _3521441_37 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = _3522507_37;
R[1] = _3521441_37;
R[2] = params;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun75, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 64)), params, body1);
return;
}
case 6:
{
Obj _3522506_37= co->res;
Obj _3521441_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = _3522506_37;
R[1] = body1;
R[2] = _3521441_37;
R[3] = params;
R[4] = fvs;
saveCont(co, clofun75, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), _3521441_37, MAKE_NUMBER(0));
return;
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3522466_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3522466_37) {
saveCont(co, clofun74, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 62)), closureRef(R[0], 0));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3522467_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3522467_37, closureRef(R[0], 1));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun73, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), lam);
return;
}
case 1:
{
Obj _3522464_37= co->res;
Obj _3522463_37 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun72, 2, 0), _3522463_37, _3522464_37);
return;
}
case 2:
{
Obj _3522458_37= co->res;
Obj lam = R[1];
Obj nargs = _3522458_37;
Obj _3522463_37 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = _3522463_37;
saveCont(co, clofun73, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), lam);
return;
}
case 3:
{
Obj _3522457_37= co->res;
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun73, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), _3522457_37);
return;
}
}
}

static void clofun72(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj x = R[2];
R[1] = acc;
saveCont(co, clofun72, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), x);
return;
}
case 1:
{
Obj _3522460_37= co->res;
Obj acc = R[1];
Obj _3522461_37 = PRIM_ADD(_3522460_37, MAKE_NUMBER(1));
Obj len = _3522461_37;
Obj _3522462_37 = PRIM_GT(len, acc);
if (True == _3522462_37) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj _3522459_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun72, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), _3522459_37);
return;
}
}
}

static void clofun71(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj params = R[1];
Obj body = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 67)), body, Nil, makeNative(co->gc, 3, clofun70, 2, 1, params));
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body1 = R[1];
Obj conts = R[2];
R[1] = body1;
saveCont(co, clofun70, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), conts);
return;
}
case 1:
{
Obj _3522452_37= co->res;
Obj body1 = R[1];
Obj _3522453_37 = makeCons(co->gc, body1, _3522452_37);
Obj _3522454_37 = makeCons(co->gc, closureRef(R[0], 0), _3522453_37);
Obj _3522455_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3522454_37);
coraReturn(co, _3522455_37);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521435_37 = R[1];
Obj _3521436_37 = R[2];
Obj _3521437_37 = R[3];
Obj _3521438_37 = R[4];
Obj _3522446_37 = PRIM_EQ(Nil, _3521435_37);
if (True == _3522446_37) {
co->ctx.sp = R;
coraCall2(co, _3521438_37, _3521437_37, _3521436_37);
return;
} else {
Obj _3522447_37 = PRIM_ISCONS(_3521435_37);
if (True == _3522447_37) {
Obj _3522448_37 = PRIM_CAR(_3521435_37);
Obj f = _3522448_37;
Obj _3522449_37 = PRIM_CDR(_3521435_37);
Obj args = _3522449_37;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 67)), f, _3521436_37, makeNative(co->gc, 3, clofun68, 2, 3, args, _3521437_37, _3521438_37));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
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
Obj f1 = R[1];
Obj conts1 = R[2];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 66)), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative(co->gc, 3, clofun67, 2, 2, closureRef(R[0], 2), f1));
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj args1 = R[1];
Obj conts2 = R[2];
Obj _3522450_37 = makeCons(co->gc, closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3522450_37, conts2);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521429_37 = R[1];
Obj _3521430_37 = R[2];
Obj _3521431_37 = R[3];
Obj _3521513_37 = makeNative(co->gc, 2, clofun65, 1, 3, _3521429_37, _3521430_37, _3521431_37);
Obj _3522443_37 = primIsSymbol(_3521429_37);
if (True == _3522443_37) {
co->ctx.sp = R;
coraCall1(co, _3521513_37, True);
return;
} else {
R[1] = _3521513_37;
saveCont(co, clofun66, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), _3521429_37);
return;
}
}
case 1:
{
Obj _3522444_37= co->res;
Obj _3521513_37 = R[1];
if (True == _3522444_37) {
co->ctx.sp = R;
coraCall1(co, _3521513_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521513_37, False);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521514_37 = R[1];
if (True == _3521514_37) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3521433_37 = makeNative(co->gc, 1, clofun63, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3522419_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522419_37) {
Obj _3522420_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522421_37 = PRIM_EQ(getBinding(co, packageID, 79).name, _3522420_37);
if (True == _3522421_37) {
Obj _3522422_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522423_37 = PRIM_ISCONS(_3522422_37);
if (True == _3522423_37) {
Obj _3522424_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522425_37 = PRIM_CAR(_3522424_37);
Obj exp = _3522425_37;
Obj _3522426_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522427_37 = PRIM_CDR(_3522426_37);
Obj _3522428_37 = PRIM_ISCONS(_3522427_37);
if (True == _3522428_37) {
Obj _3522429_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522430_37 = PRIM_CDR(_3522429_37);
Obj _3522431_37 = PRIM_CAR(_3522430_37);
Obj cont = _3522431_37;
Obj _3522432_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522433_37 = PRIM_CDR(_3522432_37);
Obj _3522434_37 = PRIM_CDR(_3522433_37);
Obj _3522435_37 = PRIM_EQ(Nil, _3522434_37);
if (True == _3522435_37) {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 67)), cont, closureRef(R[0], 1), makeNative(co->gc, 4, clofun64, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521433_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521433_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521433_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521433_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521433_37);
return;
}
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj cont1 = R[1];
Obj conts1 = R[2];
R[1] = cont1;
R[2] = conts1;
saveCont(co, clofun64, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), cont1);
return;
}
case 1:
{
Obj _3522437_37= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj _3522438_37 = PRIM_ADD(_3522437_37, MAKE_NUMBER(1));
Obj _3522439_37 = makeCons(co->gc, _3522438_37, fvs);
Obj _3522440_37 = makeCons(co->gc, closureRef(R[0], 1), _3522439_37);
Obj _3522441_37 = makeCons(co->gc, getBinding(co, packageID, 79).name, _3522440_37);
Obj _3522442_37 = makeCons(co->gc, cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3522441_37, _3522442_37);
return;
}
case 2:
{
Obj _3522436_37= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = _3522436_37;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
saveCont(co, clofun64, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), conts1);
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3522415_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522415_37) {
Obj _3522416_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3522416_37;
Obj _3522417_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3522417_37;
Obj _3522418_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 66)), _3522418_37, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521421_37 = R[1];
Obj _3521422_37 = R[2];
R[1] = _3521422_37;
R[2] = _3521421_37;
saveCont(co, clofun62, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), _3521422_37);
return;
}
case 1:
{
Obj _3522410_37= co->res;
Obj args = R[1];
Obj _3522411_37 = makeCons(co->gc, _3522410_37, Nil);
Obj _3522412_37 = makeCons(co->gc, args, _3522411_37);
Obj _3522413_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3522412_37);
coraReturn(co, _3522413_37);
return;
}
case 2:
{
Obj _3522338_37= co->res;
Obj _3521422_37 = R[1];
Obj _3521421_37 = R[2];
if (True == _3522338_37) {
coraReturn(co, _3521422_37);
return;
} else {
Obj _3522339_37 = primIsSymbol(_3521422_37);
if (True == _3522339_37) {
coraReturn(co, _3521422_37);
return;
} else {
Obj _3521425_37 = makeNative(co->gc, 4, clofun61, 0, 2, _3521422_37, _3521421_37);
Obj _3522393_37 = PRIM_ISCONS(_3521422_37);
if (True == _3522393_37) {
Obj _3522394_37 = PRIM_CAR(_3521422_37);
Obj _3522395_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3522394_37);
if (True == _3522395_37) {
Obj _3522396_37 = PRIM_CDR(_3521422_37);
Obj _3522397_37 = PRIM_ISCONS(_3522396_37);
if (True == _3522397_37) {
Obj _3522398_37 = PRIM_CDR(_3521422_37);
Obj _3522399_37 = PRIM_CAR(_3522398_37);
Obj args = _3522399_37;
Obj _3522400_37 = PRIM_CDR(_3521422_37);
Obj _3522401_37 = PRIM_CDR(_3522400_37);
Obj _3522402_37 = PRIM_ISCONS(_3522401_37);
if (True == _3522402_37) {
Obj _3522403_37 = PRIM_CDR(_3521422_37);
Obj _3522404_37 = PRIM_CDR(_3522403_37);
Obj _3522405_37 = PRIM_CAR(_3522404_37);
Obj body = _3522405_37;
Obj _3522406_37 = PRIM_CDR(_3521422_37);
Obj _3522407_37 = PRIM_CDR(_3522406_37);
Obj _3522408_37 = PRIM_CDR(_3522407_37);
Obj _3522409_37 = PRIM_EQ(Nil, _3522408_37);
if (True == _3522409_37) {
R[1] = args;
saveCont(co, clofun62, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), _3521421_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521425_37);
return;
}
}
}
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521426_37 = makeNative(co->gc, 3, clofun60, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522368_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522368_37) {
Obj _3522369_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522370_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3522369_37);
if (True == _3522370_37) {
Obj _3522371_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522372_37 = PRIM_ISCONS(_3522371_37);
if (True == _3522372_37) {
Obj _3522373_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522374_37 = PRIM_CAR(_3522373_37);
Obj val = _3522374_37;
Obj _3522375_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522376_37 = PRIM_CDR(_3522375_37);
Obj _3522377_37 = PRIM_ISCONS(_3522376_37);
if (True == _3522377_37) {
Obj _3522378_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522379_37 = PRIM_CDR(_3522378_37);
Obj _3522380_37 = PRIM_CAR(_3522379_37);
Obj body = _3522380_37;
Obj _3522381_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522382_37 = PRIM_CDR(_3522381_37);
Obj _3522383_37 = PRIM_CDR(_3522382_37);
Obj _3522384_37 = PRIM_EQ(Nil, _3522383_37);
if (True == _3522384_37) {
R[1] = body;
R[2] = val;
saveCont(co, clofun61, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521426_37);
return;
}
}
case 1:
{
Obj _3522389_37= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj _3522390_37 = makeCons(co->gc, _3522389_37, fvs2);
Obj _3522391_37 = makeCons(co->gc, val, _3522390_37);
Obj _3522392_37 = makeCons(co->gc, getBinding(co, packageID, 68).name, _3522391_37);
coraReturn(co, _3522392_37);
return;
}
case 2:
{
Obj _3522388_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = _3522388_37;
R[1] = fvs2;
R[2] = val;
saveCont(co, clofun61, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), fvs1, body);
return;
}
case 3:
{
Obj _3522387_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun61, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3522387_37, fvs1);
return;
}
case 4:
{
Obj _3522386_37= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = _3522386_37;
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun61, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 1));
return;
}
case 5:
{
Obj _3522385_37= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
saveCont(co, clofun61, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), _3522385_37, val);
return;
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521427_37 = makeNative(co->gc, 3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522345_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522345_37) {
Obj _3522346_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522347_37 = PRIM_EQ(getBinding(co, packageID, 79).name, _3522346_37);
if (True == _3522347_37) {
Obj _3522348_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522349_37 = PRIM_ISCONS(_3522348_37);
if (True == _3522349_37) {
Obj _3522350_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522351_37 = PRIM_CAR(_3522350_37);
Obj exp = _3522351_37;
Obj _3522352_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522353_37 = PRIM_CDR(_3522352_37);
Obj _3522354_37 = PRIM_ISCONS(_3522353_37);
if (True == _3522354_37) {
Obj _3522355_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522356_37 = PRIM_CDR(_3522355_37);
Obj _3522357_37 = PRIM_CAR(_3522356_37);
Obj cont = _3522357_37;
Obj _3522358_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522359_37 = PRIM_CDR(_3522358_37);
Obj _3522360_37 = PRIM_CDR(_3522359_37);
Obj _3522361_37 = PRIM_EQ(Nil, _3522360_37);
if (True == _3522361_37) {
R[1] = exp;
R[2] = cont;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521427_37);
return;
}
}
case 1:
{
Obj _3522364_37= co->res;
Obj _3522363_37 = R[1];
Obj _3522365_37 = makeCons(co->gc, _3522364_37, Nil);
Obj _3522366_37 = makeCons(co->gc, _3522363_37, _3522365_37);
Obj _3522367_37 = makeCons(co->gc, getBinding(co, packageID, 79).name, _3522366_37);
coraReturn(co, _3522367_37);
return;
}
case 2:
{
Obj _3522363_37= co->res;
Obj cont = R[1];
R[1] = _3522363_37;
saveCont(co, clofun60, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 1), cont);
return;
}
case 3:
{
Obj _3522362_37= co->res;
Obj exp = R[1];
Obj cont = R[2];
R[1] = cont;
saveCont(co, clofun60, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3522362_37, exp);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3522340_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522340_37) {
Obj _3522341_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3522341_37;
Obj _3522342_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3522342_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3522343_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3522344_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3522343_37, _3522344_37);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521416_37 = R[1];
Obj _3521417_37 = R[2];
Obj _3521418_37 = R[3];
Obj _3522315_37 = PRIM_EQ(Nil, _3521416_37);
if (True == _3522315_37) {
R[1] = _3521418_37;
saveCont(co, clofun58, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), _3521417_37);
return;
} else {
Obj _3522333_37 = PRIM_ISCONS(_3521416_37);
if (True == _3522333_37) {
Obj _3522334_37 = PRIM_CAR(_3521416_37);
Obj hd = _3522334_37;
Obj _3522335_37 = PRIM_CDR(_3521416_37);
Obj tl = _3522335_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), hd, makeNative(co->gc, 2, clofun57, 1, 3, tl, _3521417_37, _3521418_37));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3522331_37= co->res;
Obj _3521511_37 = R[1];
Obj _3522332_37 = PRIM_EQ(_3522331_37, getBinding(co, packageID, 96).name);
if (True == _3522332_37) {
co->ctx.sp = R;
coraCall1(co, _3521511_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521511_37, False);
return;
}
}
case 2:
{
Obj _3522330_37= co->res;
Obj exp = R[1];
Obj _3521511_37 = R[2];
if (True == _3522330_37) {
R[1] = _3521511_37;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 70)), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521511_37, False);
return;
}
}
case 3:
{
Obj _3522316_37= co->res;
Obj _3521418_37 = R[1];
Obj exp = _3522316_37;
Obj _3521511_37 = makeNative(co->gc, 2, clofun56, 1, 2, exp, _3521418_37);
Obj _3522329_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3521511_37;
saveCont(co, clofun58, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 71)), _3522329_37);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj _3522336_37 = makeCons(co->gc, hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 74)), closureRef(R[0], 0), _3522336_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521512_37 = R[1];
if (True == _3521512_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 72)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3522317_37 = PRIM_EQ(closureRef(R[0], 1), globalRef(co, getBinding(co, packageID, 76)));
if (True == _3522317_37) {
Obj _3522318_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3522319_37 = makeCons(co->gc, getBinding(co, packageID, 80).name, _3522318_37);
coraReturn(co, _3522319_37);
return;
} else {
Obj _3522320_37 = primGenSym(co);
Obj val = _3522320_37;
Obj _3522321_37 = makeCons(co->gc, val, Nil);
R[1] = _3522321_37;
saveCont(co, clofun56, 1, R);
coraCall1(co, closureRef(R[0], 1), val);
return;
}
}
}
case 1:
{
Obj _3522322_37= co->res;
Obj _3522321_37 = R[1];
Obj _3522323_37 = makeCons(co->gc, _3522322_37, Nil);
Obj _3522324_37 = makeCons(co->gc, _3522321_37, _3522323_37);
Obj _3522325_37 = makeCons(co->gc, getBinding(co, packageID, 81).name, _3522324_37);
Obj _3522326_37 = makeCons(co->gc, _3522325_37, Nil);
Obj _3522327_37 = makeCons(co->gc, closureRef(R[0], 0), _3522326_37);
Obj _3522328_37 = makeCons(co->gc, getBinding(co, packageID, 79).name, _3522327_37);
coraReturn(co, _3522328_37);
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521407_37 = R[1];
Obj _3521408_37 = R[2];
Obj _3521509_37 = makeNative(co->gc, 2, clofun54, 1, 2, _3521407_37, _3521408_37);
Obj _3522312_37 = primIsSymbol(_3521407_37);
if (True == _3522312_37) {
co->ctx.sp = R;
coraCall1(co, _3521509_37, True);
return;
} else {
R[1] = _3521509_37;
saveCont(co, clofun55, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), _3521407_37);
return;
}
}
case 1:
{
Obj _3522313_37= co->res;
Obj _3521509_37 = R[1];
if (True == _3522313_37) {
co->ctx.sp = R;
coraCall1(co, _3521509_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521509_37, False);
return;
}
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521510_37 = R[1];
if (True == _3521510_37) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun54, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3522178_37= co->res;
if (True == _3522178_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj _3521411_37 = makeNative(co->gc, 1, clofun52, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522280_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522280_37) {
Obj _3522281_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522282_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3522281_37);
if (True == _3522282_37) {
Obj _3522283_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522284_37 = PRIM_ISCONS(_3522283_37);
if (True == _3522284_37) {
Obj _3522285_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522286_37 = PRIM_CAR(_3522285_37);
Obj a = _3522286_37;
Obj _3522287_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522288_37 = PRIM_CDR(_3522287_37);
Obj _3522289_37 = PRIM_ISCONS(_3522288_37);
if (True == _3522289_37) {
Obj _3522290_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522291_37 = PRIM_CDR(_3522290_37);
Obj _3522292_37 = PRIM_CAR(_3522291_37);
Obj b = _3522292_37;
Obj _3522293_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522294_37 = PRIM_CDR(_3522293_37);
Obj _3522295_37 = PRIM_CDR(_3522294_37);
Obj _3522296_37 = PRIM_ISCONS(_3522295_37);
if (True == _3522296_37) {
Obj _3522297_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522298_37 = PRIM_CDR(_3522297_37);
Obj _3522299_37 = PRIM_CDR(_3522298_37);
Obj _3522300_37 = PRIM_CAR(_3522299_37);
Obj c = _3522300_37;
Obj _3522301_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522302_37 = PRIM_CDR(_3522301_37);
Obj _3522303_37 = PRIM_CDR(_3522302_37);
Obj _3522304_37 = PRIM_CDR(_3522303_37);
Obj _3522305_37 = PRIM_EQ(Nil, _3522304_37);
if (True == _3522305_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), a, makeNative(co->gc, 3, clofun53, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521411_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521411_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521411_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521411_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521411_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521411_37);
return;
}
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
R[1] = ra;
saveCont(co, clofun53, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3522307_37= co->res;
Obj _3522306_37 = R[1];
Obj ra = R[2];
Obj _3522308_37 = makeCons(co->gc, _3522307_37, Nil);
Obj _3522309_37 = makeCons(co->gc, _3522306_37, _3522308_37);
Obj _3522310_37 = makeCons(co->gc, ra, _3522309_37);
Obj _3522311_37 = makeCons(co->gc, getBinding(co, packageID, 93).name, _3522310_37);
coraReturn(co, _3522311_37);
return;
}
case 2:
{
Obj _3522306_37= co->res;
Obj ra = R[1];
R[1] = _3522306_37;
R[2] = ra;
saveCont(co, clofun53, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
}
}

static void clofun52(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521412_37 = makeNative(co->gc, 1, clofun50, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522258_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522258_37) {
Obj _3522259_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522260_37 = PRIM_EQ(getBinding(co, packageID, 91).name, _3522259_37);
if (True == _3522260_37) {
Obj _3522261_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522262_37 = PRIM_ISCONS(_3522261_37);
if (True == _3522262_37) {
Obj _3522263_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522264_37 = PRIM_CAR(_3522263_37);
Obj a = _3522264_37;
Obj _3522265_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522266_37 = PRIM_CDR(_3522265_37);
Obj _3522267_37 = PRIM_ISCONS(_3522266_37);
if (True == _3522267_37) {
Obj _3522268_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522269_37 = PRIM_CDR(_3522268_37);
Obj _3522270_37 = PRIM_CAR(_3522269_37);
Obj b = _3522270_37;
Obj _3522271_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522272_37 = PRIM_CDR(_3522271_37);
Obj _3522273_37 = PRIM_CDR(_3522272_37);
Obj _3522274_37 = PRIM_EQ(Nil, _3522273_37);
if (True == _3522274_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), a, makeNative(co->gc, 2, clofun51, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521412_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521412_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521412_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521412_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521412_37);
return;
}
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
Obj _3522275_37 = primIsSymbol(ra);
if (True == _3522275_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
saveCont(co, clofun51, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3522276_37= co->res;
Obj ra = R[1];
Obj _3522277_37 = makeCons(co->gc, _3522276_37, Nil);
Obj _3522278_37 = makeCons(co->gc, ra, _3522277_37);
Obj _3522279_37 = makeCons(co->gc, getBinding(co, packageID, 91).name, _3522278_37);
coraReturn(co, _3522279_37);
return;
}
}
}

static void clofun50(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521413_37 = makeNative(co->gc, 3, clofun48, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522227_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522227_37) {
Obj _3522228_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522229_37 = PRIM_EQ(getBinding(co, packageID, 92).name, _3522228_37);
if (True == _3522229_37) {
Obj _3522230_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522231_37 = PRIM_ISCONS(_3522230_37);
if (True == _3522231_37) {
Obj _3522232_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522233_37 = PRIM_CAR(_3522232_37);
Obj a = _3522233_37;
Obj _3522234_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522235_37 = PRIM_CDR(_3522234_37);
Obj _3522236_37 = PRIM_ISCONS(_3522235_37);
if (True == _3522236_37) {
Obj _3522237_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522238_37 = PRIM_CDR(_3522237_37);
Obj _3522239_37 = PRIM_CAR(_3522238_37);
Obj b = _3522239_37;
Obj _3522240_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522241_37 = PRIM_CDR(_3522240_37);
Obj _3522242_37 = PRIM_CDR(_3522241_37);
Obj _3522243_37 = PRIM_ISCONS(_3522242_37);
if (True == _3522243_37) {
Obj _3522244_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522245_37 = PRIM_CDR(_3522244_37);
Obj _3522246_37 = PRIM_CDR(_3522245_37);
Obj _3522247_37 = PRIM_CAR(_3522246_37);
Obj c = _3522247_37;
Obj _3522248_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522249_37 = PRIM_CDR(_3522248_37);
Obj _3522250_37 = PRIM_CDR(_3522249_37);
Obj _3522251_37 = PRIM_CDR(_3522250_37);
Obj _3522252_37 = PRIM_EQ(Nil, _3522251_37);
if (True == _3522252_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), b, makeNative(co->gc, 2, clofun49, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521413_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521413_37);
return;
}
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rb = R[1];
R[1] = rb;
saveCont(co, clofun49, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3522253_37= co->res;
Obj rb = R[1];
Obj _3522254_37 = makeCons(co->gc, _3522253_37, Nil);
Obj _3522255_37 = makeCons(co->gc, rb, _3522254_37);
Obj _3522256_37 = makeCons(co->gc, closureRef(R[0], 0), _3522255_37);
Obj _3522257_37 = makeCons(co->gc, getBinding(co, packageID, 92).name, _3522256_37);
coraReturn(co, _3522257_37);
return;
}
}
}

static void clofun48(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521414_37 = makeNative(co->gc, 1, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522183_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522183_37) {
Obj _3522184_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522185_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3522184_37);
if (True == _3522185_37) {
Obj _3522186_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522187_37 = PRIM_ISCONS(_3522186_37);
if (True == _3522187_37) {
Obj _3522188_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522189_37 = PRIM_CAR(_3522188_37);
Obj _3522190_37 = PRIM_ISCONS(_3522189_37);
if (True == _3522190_37) {
Obj _3522191_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522192_37 = PRIM_CAR(_3522191_37);
Obj _3522193_37 = PRIM_CAR(_3522192_37);
Obj _3522194_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3522193_37);
if (True == _3522194_37) {
Obj _3522195_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522196_37 = PRIM_CAR(_3522195_37);
Obj _3522197_37 = PRIM_CDR(_3522196_37);
Obj _3522198_37 = PRIM_ISCONS(_3522197_37);
if (True == _3522198_37) {
Obj _3522199_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522200_37 = PRIM_CAR(_3522199_37);
Obj _3522201_37 = PRIM_CDR(_3522200_37);
Obj _3522202_37 = PRIM_CAR(_3522201_37);
Obj args = _3522202_37;
Obj _3522203_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522204_37 = PRIM_CAR(_3522203_37);
Obj _3522205_37 = PRIM_CDR(_3522204_37);
Obj _3522206_37 = PRIM_CDR(_3522205_37);
Obj _3522207_37 = PRIM_ISCONS(_3522206_37);
if (True == _3522207_37) {
Obj _3522208_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522209_37 = PRIM_CAR(_3522208_37);
Obj _3522210_37 = PRIM_CDR(_3522209_37);
Obj _3522211_37 = PRIM_CDR(_3522210_37);
Obj _3522212_37 = PRIM_CAR(_3522211_37);
Obj body = _3522212_37;
Obj _3522213_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522214_37 = PRIM_CAR(_3522213_37);
Obj _3522215_37 = PRIM_CDR(_3522214_37);
Obj _3522216_37 = PRIM_CDR(_3522215_37);
Obj _3522217_37 = PRIM_CDR(_3522216_37);
Obj _3522218_37 = PRIM_EQ(Nil, _3522217_37);
if (True == _3522218_37) {
Obj _3522219_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522220_37 = PRIM_CDR(_3522219_37);
Obj frees = _3522220_37;
R[1] = args;
R[2] = frees;
saveCont(co, clofun48, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), body, globalRef(co, getBinding(co, packageID, 76)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521414_37);
return;
}
}
case 1:
{
Obj _3522221_37= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj _3522222_37 = makeCons(co->gc, _3522221_37, Nil);
Obj _3522223_37 = makeCons(co->gc, args, _3522222_37);
Obj _3522224_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3522223_37);
Obj _3522225_37 = makeCons(co->gc, _3522224_37, frees);
Obj _3522226_37 = makeCons(co->gc, getBinding(co, packageID, 84).name, _3522225_37);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), _3522226_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3522179_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522179_37) {
Obj _3522180_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3522180_37;
Obj _3522181_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3522181_37;
Obj _3522182_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 74)), _3522182_37, Nil, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3522175_37 = makeCons(co->gc, x, Nil);
Obj _3522176_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3522175_37);
coraReturn(co, _3522176_37);
return;
}
}
}

static void clofun45(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521400_37 = R[1];
Obj _3521401_37 = R[2];
R[1] = _3521401_37;
R[2] = _3521400_37;
saveCont(co, clofun45, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), _3521401_37);
return;
}
case 1:
{
Obj _3522104_37= co->res;
Obj _3521401_37 = R[1];
Obj pos = _3522104_37;
Obj _3522105_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3522105_37) {
coraReturn(co, _3521401_37);
return;
} else {
Obj _3522106_37 = makeCons(co->gc, pos, Nil);
Obj _3522107_37 = makeCons(co->gc, getBinding(co, packageID, 83).name, _3522106_37);
coraReturn(co, _3522107_37);
return;
}
}
case 2:
{
Obj _3522171_37= co->res;
Obj _3522169_37 = R[1];
Obj _3522172_37 = makeCons(co->gc, _3522169_37, _3522171_37);
Obj _3522173_37 = makeCons(co->gc, getBinding(co, packageID, 84).name, _3522172_37);
coraReturn(co, _3522173_37);
return;
}
case 3:
{
Obj _3522170_37= co->res;
Obj fvs1 = R[1];
Obj _3522169_37 = R[2];
R[1] = _3522169_37;
saveCont(co, clofun45, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3522170_37, fvs1);
return;
}
case 4:
{
Obj _3522166_37= co->res;
Obj args = R[1];
Obj _3521400_37 = R[2];
Obj fvs1 = R[3];
Obj _3522167_37 = makeCons(co->gc, _3522166_37, Nil);
Obj _3522168_37 = makeCons(co->gc, args, _3522167_37);
Obj _3522169_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3522168_37);
R[1] = fvs1;
R[2] = _3522169_37;
saveCont(co, clofun45, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 77)), _3521400_37);
return;
}
case 5:
{
Obj _3522165_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3521400_37 = R[3];
Obj fvs1 = _3522165_37;
R[1] = args;
R[2] = _3521400_37;
R[3] = fvs1;
saveCont(co, clofun45, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), fvs1, body);
return;
}
case 6:
{
Obj _3522102_37= co->res;
Obj _3521401_37 = R[1];
Obj _3521400_37 = R[2];
if (True == _3522102_37) {
coraReturn(co, _3521401_37);
return;
} else {
Obj _3522103_37 = primIsSymbol(_3521401_37);
if (True == _3522103_37) {
R[1] = _3521401_37;
saveCont(co, clofun45, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 130)), _3521401_37, _3521400_37);
return;
} else {
Obj _3521404_37 = makeNative(co->gc, 3, clofun44, 0, 2, _3521401_37, _3521400_37);
Obj _3522145_37 = PRIM_ISCONS(_3521401_37);
if (True == _3522145_37) {
Obj _3522146_37 = PRIM_CAR(_3521401_37);
Obj _3522147_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3522146_37);
if (True == _3522147_37) {
Obj _3522148_37 = PRIM_CDR(_3521401_37);
Obj _3522149_37 = PRIM_ISCONS(_3522148_37);
if (True == _3522149_37) {
Obj _3522150_37 = PRIM_CDR(_3521401_37);
Obj _3522151_37 = PRIM_CAR(_3522150_37);
Obj args = _3522151_37;
Obj _3522152_37 = PRIM_CDR(_3521401_37);
Obj _3522153_37 = PRIM_CDR(_3522152_37);
Obj _3522154_37 = PRIM_ISCONS(_3522153_37);
if (True == _3522154_37) {
Obj _3522155_37 = PRIM_CDR(_3521401_37);
Obj _3522156_37 = PRIM_CDR(_3522155_37);
Obj _3522157_37 = PRIM_CAR(_3522156_37);
Obj body = _3522157_37;
Obj _3522158_37 = PRIM_CDR(_3521401_37);
Obj _3522159_37 = PRIM_CDR(_3522158_37);
Obj _3522160_37 = PRIM_CDR(_3522159_37);
Obj _3522161_37 = PRIM_EQ(Nil, _3522160_37);
if (True == _3522161_37) {
Obj _3522162_37 = makeCons(co->gc, body, Nil);
Obj _3522163_37 = makeCons(co->gc, args, _3522162_37);
Obj _3522164_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3522163_37);
R[1] = body;
R[2] = args;
R[3] = _3521400_37;
saveCont(co, clofun45, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), _3522164_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521404_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521404_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521404_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521404_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521404_37);
return;
}
}
}
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521405_37 = makeNative(co->gc, 3, clofun43, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3522113_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522113_37) {
Obj _3522114_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522115_37 = PRIM_EQ(getBinding(co, packageID, 92).name, _3522114_37);
if (True == _3522115_37) {
Obj _3522116_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522117_37 = PRIM_ISCONS(_3522116_37);
if (True == _3522117_37) {
Obj _3522118_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522119_37 = PRIM_CAR(_3522118_37);
Obj a = _3522119_37;
Obj _3522120_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522121_37 = PRIM_CDR(_3522120_37);
Obj _3522122_37 = PRIM_ISCONS(_3522121_37);
if (True == _3522122_37) {
Obj _3522123_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522124_37 = PRIM_CDR(_3522123_37);
Obj _3522125_37 = PRIM_CAR(_3522124_37);
Obj b = _3522125_37;
Obj _3522126_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522127_37 = PRIM_CDR(_3522126_37);
Obj _3522128_37 = PRIM_CDR(_3522127_37);
Obj _3522129_37 = PRIM_ISCONS(_3522128_37);
if (True == _3522129_37) {
Obj _3522130_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522131_37 = PRIM_CDR(_3522130_37);
Obj _3522132_37 = PRIM_CDR(_3522131_37);
Obj _3522133_37 = PRIM_CAR(_3522132_37);
Obj c = _3522133_37;
Obj _3522134_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522135_37 = PRIM_CDR(_3522134_37);
Obj _3522136_37 = PRIM_CDR(_3522135_37);
Obj _3522137_37 = PRIM_CDR(_3522136_37);
Obj _3522138_37 = PRIM_EQ(Nil, _3522137_37);
if (True == _3522138_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun44, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), closureRef(R[0], 1), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521405_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521405_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521405_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521405_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521405_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521405_37);
return;
}
}
case 1:
{
Obj _3522140_37= co->res;
Obj _3522139_37 = R[1];
Obj a = R[2];
Obj _3522141_37 = makeCons(co->gc, _3522140_37, Nil);
Obj _3522142_37 = makeCons(co->gc, _3522139_37, _3522141_37);
Obj _3522143_37 = makeCons(co->gc, a, _3522142_37);
Obj _3522144_37 = makeCons(co->gc, getBinding(co, packageID, 92).name, _3522143_37);
coraReturn(co, _3522144_37);
return;
}
case 2:
{
Obj _3522139_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = _3522139_37;
R[2] = a;
saveCont(co, clofun44, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), closureRef(R[0], 1), c);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3522108_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522108_37) {
Obj _3522109_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3522109_37;
Obj _3522110_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3522110_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun43, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 77)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3522111_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3522112_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3522111_37, _3522112_37);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521387_37 = R[1];
R[1] = _3521387_37;
saveCont(co, clofun42, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), _3521387_37);
return;
}
case 1:
{
Obj _3522100_37= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), _3522100_37, args);
return;
}
case 2:
{
Obj _3521927_37= co->res;
Obj _3521387_37 = R[1];
if (True == _3521927_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3521928_37 = primIsSymbol(_3521387_37);
if (True == _3521928_37) {
Obj _3521929_37 = makeCons(co->gc, _3521387_37, Nil);
coraReturn(co, _3521929_37);
return;
} else {
Obj _3521390_37 = makeNative(co->gc, 1, clofun41, 0, 1, _3521387_37);
Obj _3522083_37 = PRIM_ISCONS(_3521387_37);
if (True == _3522083_37) {
Obj _3522084_37 = PRIM_CAR(_3521387_37);
Obj _3522085_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3522084_37);
if (True == _3522085_37) {
Obj _3522086_37 = PRIM_CDR(_3521387_37);
Obj _3522087_37 = PRIM_ISCONS(_3522086_37);
if (True == _3522087_37) {
Obj _3522088_37 = PRIM_CDR(_3521387_37);
Obj _3522089_37 = PRIM_CAR(_3522088_37);
Obj args = _3522089_37;
Obj _3522090_37 = PRIM_CDR(_3521387_37);
Obj _3522091_37 = PRIM_CDR(_3522090_37);
Obj _3522092_37 = PRIM_ISCONS(_3522091_37);
if (True == _3522092_37) {
Obj _3522093_37 = PRIM_CDR(_3521387_37);
Obj _3522094_37 = PRIM_CDR(_3522093_37);
Obj _3522095_37 = PRIM_CAR(_3522094_37);
Obj body = _3522095_37;
Obj _3522096_37 = PRIM_CDR(_3521387_37);
Obj _3522097_37 = PRIM_CDR(_3522096_37);
Obj _3522098_37 = PRIM_CDR(_3522097_37);
Obj _3522099_37 = PRIM_EQ(Nil, _3522098_37);
if (True == _3522099_37) {
R[1] = args;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521390_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521390_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521390_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521390_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521390_37);
return;
}
}
}
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521391_37 = makeNative(co->gc, 1, clofun40, 0, 1, closureRef(R[0], 0));
Obj _3522053_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522053_37) {
Obj _3522054_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522055_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3522054_37);
if (True == _3522055_37) {
Obj _3522056_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522057_37 = PRIM_ISCONS(_3522056_37);
if (True == _3522057_37) {
Obj _3522058_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522059_37 = PRIM_CAR(_3522058_37);
Obj x = _3522059_37;
Obj _3522060_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522061_37 = PRIM_CDR(_3522060_37);
Obj _3522062_37 = PRIM_ISCONS(_3522061_37);
if (True == _3522062_37) {
Obj _3522063_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522064_37 = PRIM_CDR(_3522063_37);
Obj _3522065_37 = PRIM_CAR(_3522064_37);
Obj y = _3522065_37;
Obj _3522066_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522067_37 = PRIM_CDR(_3522066_37);
Obj _3522068_37 = PRIM_CDR(_3522067_37);
Obj _3522069_37 = PRIM_ISCONS(_3522068_37);
if (True == _3522069_37) {
Obj _3522070_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522071_37 = PRIM_CDR(_3522070_37);
Obj _3522072_37 = PRIM_CDR(_3522071_37);
Obj _3522073_37 = PRIM_CAR(_3522072_37);
Obj z = _3522073_37;
Obj _3522074_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522075_37 = PRIM_CDR(_3522074_37);
Obj _3522076_37 = PRIM_CDR(_3522075_37);
Obj _3522077_37 = PRIM_CDR(_3522076_37);
Obj _3522078_37 = PRIM_EQ(Nil, _3522077_37);
if (True == _3522078_37) {
Obj _3522079_37 = makeCons(co->gc, z, Nil);
Obj _3522080_37 = makeCons(co->gc, y, _3522079_37);
Obj _3522081_37 = makeCons(co->gc, x, _3522080_37);
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), globalRef(co, getBinding(co, packageID, 82)), _3522081_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521391_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521391_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521391_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521391_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521391_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521391_37);
return;
}
}
case 1:
{
Obj _3522082_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, _3522082_37);
return;
}
}
}

static void clofun40(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521392_37 = makeNative(co->gc, 3, clofun39, 0, 1, closureRef(R[0], 0));
Obj _3522033_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522033_37) {
Obj _3522034_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522035_37 = PRIM_EQ(getBinding(co, packageID, 91).name, _3522034_37);
if (True == _3522035_37) {
Obj _3522036_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522037_37 = PRIM_ISCONS(_3522036_37);
if (True == _3522037_37) {
Obj _3522038_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522039_37 = PRIM_CAR(_3522038_37);
Obj x = _3522039_37;
Obj _3522040_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522041_37 = PRIM_CDR(_3522040_37);
Obj _3522042_37 = PRIM_ISCONS(_3522041_37);
if (True == _3522042_37) {
Obj _3522043_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522044_37 = PRIM_CDR(_3522043_37);
Obj _3522045_37 = PRIM_CAR(_3522044_37);
Obj y = _3522045_37;
Obj _3522046_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522047_37 = PRIM_CDR(_3522046_37);
Obj _3522048_37 = PRIM_CDR(_3522047_37);
Obj _3522049_37 = PRIM_EQ(Nil, _3522048_37);
if (True == _3522049_37) {
Obj _3522050_37 = makeCons(co->gc, y, Nil);
Obj _3522051_37 = makeCons(co->gc, x, _3522050_37);
saveCont(co, clofun40, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), globalRef(co, getBinding(co, packageID, 82)), _3522051_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521392_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521392_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521392_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521392_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521392_37);
return;
}
}
case 1:
{
Obj _3522052_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, _3522052_37);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521393_37 = makeNative(co->gc, 1, clofun38, 0, 1, closureRef(R[0], 0));
Obj _3522003_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3522003_37) {
Obj _3522004_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3522005_37 = PRIM_EQ(getBinding(co, packageID, 92).name, _3522004_37);
if (True == _3522005_37) {
Obj _3522006_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522007_37 = PRIM_ISCONS(_3522006_37);
if (True == _3522007_37) {
Obj _3522008_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522009_37 = PRIM_CAR(_3522008_37);
Obj a = _3522009_37;
Obj _3522010_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522011_37 = PRIM_CDR(_3522010_37);
Obj _3522012_37 = PRIM_ISCONS(_3522011_37);
if (True == _3522012_37) {
Obj _3522013_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522014_37 = PRIM_CDR(_3522013_37);
Obj _3522015_37 = PRIM_CAR(_3522014_37);
Obj b = _3522015_37;
Obj _3522016_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522017_37 = PRIM_CDR(_3522016_37);
Obj _3522018_37 = PRIM_CDR(_3522017_37);
Obj _3522019_37 = PRIM_ISCONS(_3522018_37);
if (True == _3522019_37) {
Obj _3522020_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522021_37 = PRIM_CDR(_3522020_37);
Obj _3522022_37 = PRIM_CDR(_3522021_37);
Obj _3522023_37 = PRIM_CAR(_3522022_37);
Obj c = _3522023_37;
Obj _3522024_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522025_37 = PRIM_CDR(_3522024_37);
Obj _3522026_37 = PRIM_CDR(_3522025_37);
Obj _3522027_37 = PRIM_CDR(_3522026_37);
Obj _3522028_37 = PRIM_EQ(Nil, _3522027_37);
if (True == _3522028_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun39, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521393_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521393_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521393_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521393_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521393_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521393_37);
return;
}
}
case 1:
{
Obj _3522032_37= co->res;
Obj _3522029_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 87)), _3522029_37, _3522032_37);
return;
}
case 2:
{
Obj _3522030_37= co->res;
Obj a = R[1];
Obj _3522029_37 = R[2];
Obj _3522031_37 = makeCons(co->gc, a, Nil);
R[1] = _3522029_37;
saveCont(co, clofun39, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), _3522030_37, _3522031_37);
return;
}
case 3:
{
Obj _3522029_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = _3522029_37;
saveCont(co, clofun39, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), c);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521394_37 = makeNative(co->gc, 1, clofun37, 0, 1, closureRef(R[0], 0));
Obj _3521993_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521993_37) {
Obj _3521994_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521995_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3521994_37);
if (True == _3521995_37) {
Obj _3521996_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521997_37 = PRIM_ISCONS(_3521996_37);
if (True == _3521997_37) {
Obj _3521998_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521999_37 = PRIM_CAR(_3521998_37);
Obj lam = _3521999_37;
Obj _3522000_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3522001_37 = PRIM_CDR(_3522000_37);
Obj more = _3522001_37;
Obj _3522002_37 = makeCons(co->gc, lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), _3522002_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521394_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521394_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521394_37);
return;
}
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521395_37 = makeNative(co->gc, 1, clofun36, 0, 1, closureRef(R[0], 0));
Obj _3521983_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521983_37) {
Obj _3521984_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521985_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3521984_37);
if (True == _3521985_37) {
Obj _3521986_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521987_37 = PRIM_ISCONS(_3521986_37);
if (True == _3521987_37) {
Obj _3521988_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521989_37 = PRIM_CAR(_3521988_37);
Obj x = _3521989_37;
Obj _3521990_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521991_37 = PRIM_CDR(_3521990_37);
Obj _3521992_37 = PRIM_EQ(Nil, _3521991_37);
if (True == _3521992_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521395_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521395_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521395_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521395_37);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521396_37 = makeNative(co->gc, 1, clofun35, 0, 1, closureRef(R[0], 0));
Obj _3521963_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521963_37) {
Obj _3521964_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521965_37 = PRIM_EQ(getBinding(co, packageID, 79).name, _3521964_37);
if (True == _3521965_37) {
Obj _3521966_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521967_37 = PRIM_ISCONS(_3521966_37);
if (True == _3521967_37) {
Obj _3521968_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521969_37 = PRIM_CAR(_3521968_37);
Obj exp = _3521969_37;
Obj _3521970_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521971_37 = PRIM_CDR(_3521970_37);
Obj _3521972_37 = PRIM_ISCONS(_3521971_37);
if (True == _3521972_37) {
Obj _3521973_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521974_37 = PRIM_CDR(_3521973_37);
Obj _3521975_37 = PRIM_CAR(_3521974_37);
Obj cont = _3521975_37;
Obj _3521976_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521977_37 = PRIM_CDR(_3521976_37);
Obj _3521978_37 = PRIM_CDR(_3521977_37);
Obj _3521979_37 = PRIM_EQ(Nil, _3521978_37);
if (True == _3521979_37) {
Obj _3521980_37 = makeCons(co->gc, cont, Nil);
Obj _3521981_37 = makeCons(co->gc, exp, _3521980_37);
saveCont(co, clofun36, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), globalRef(co, getBinding(co, packageID, 82)), _3521981_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521396_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521396_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521396_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521396_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521396_37);
return;
}
}
case 1:
{
Obj _3521982_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, _3521982_37);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521397_37 = makeNative(co->gc, 2, clofun34, 0, 1, closureRef(R[0], 0));
Obj _3521953_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521953_37) {
Obj _3521954_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521955_37 = PRIM_EQ(getBinding(co, packageID, 80).name, _3521954_37);
if (True == _3521955_37) {
Obj _3521956_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521957_37 = PRIM_ISCONS(_3521956_37);
if (True == _3521957_37) {
Obj _3521958_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521959_37 = PRIM_CAR(_3521958_37);
Obj exp = _3521959_37;
Obj _3521960_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521961_37 = PRIM_CDR(_3521960_37);
Obj _3521962_37 = PRIM_EQ(Nil, _3521961_37);
if (True == _3521962_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521397_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521397_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521397_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521397_37);
return;
}
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521398_37 = makeNative(co->gc, 1, clofun33, 0, 1, closureRef(R[0], 0));
Obj _3521935_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521935_37) {
Obj _3521936_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521937_37 = PRIM_EQ(getBinding(co, packageID, 81).name, _3521936_37);
if (True == _3521937_37) {
Obj _3521938_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521939_37 = PRIM_ISCONS(_3521938_37);
if (True == _3521939_37) {
Obj _3521940_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521941_37 = PRIM_CAR(_3521940_37);
Obj arg = _3521941_37;
Obj _3521942_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521943_37 = PRIM_CDR(_3521942_37);
Obj _3521944_37 = PRIM_ISCONS(_3521943_37);
if (True == _3521944_37) {
Obj _3521945_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521946_37 = PRIM_CDR(_3521945_37);
Obj _3521947_37 = PRIM_CAR(_3521946_37);
Obj body = _3521947_37;
Obj _3521948_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521949_37 = PRIM_CDR(_3521948_37);
Obj _3521950_37 = PRIM_CDR(_3521949_37);
Obj _3521951_37 = PRIM_EQ(Nil, _3521950_37);
if (True == _3521951_37) {
R[1] = arg;
saveCont(co, clofun34, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521398_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521398_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521398_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521398_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521398_37);
return;
}
}
case 1:
{
Obj _3521952_37= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), _3521952_37, arg);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521930_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521930_37) {
Obj _3521931_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3521931_37;
Obj _3521932_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3521932_37;
Obj _3521933_37 = makeCons(co->gc, f, args);
saveCont(co, clofun33, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), globalRef(co, getBinding(co, packageID, 82)), _3521933_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3521934_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, _3521934_37);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521379_37 = R[1];
Obj _3521380_37 = makeNative(co->gc, 1, clofun31, 0, 1, _3521379_37);
Obj _3521916_37 = PRIM_ISCONS(_3521379_37);
if (True == _3521916_37) {
Obj _3521917_37 = PRIM_CAR(_3521379_37);
Obj _3521918_37 = PRIM_EQ(getBinding(co, packageID, 102).name, _3521917_37);
if (True == _3521918_37) {
Obj _3521919_37 = PRIM_CDR(_3521379_37);
Obj _3521920_37 = PRIM_ISCONS(_3521919_37);
if (True == _3521920_37) {
Obj _3521921_37 = PRIM_CDR(_3521379_37);
Obj _3521922_37 = PRIM_CAR(_3521921_37);
Obj _3521923_37 = PRIM_CDR(_3521379_37);
Obj _3521924_37 = PRIM_CDR(_3521923_37);
Obj _3521925_37 = PRIM_EQ(Nil, _3521924_37);
if (True == _3521925_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521380_37);
return;
}
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521381_37 = makeNative(co->gc, 1, clofun30, 0, 1, closureRef(R[0], 0));
Obj _3521906_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521906_37) {
Obj _3521907_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521908_37 = PRIM_EQ(getBinding(co, packageID, 99).name, _3521907_37);
if (True == _3521908_37) {
Obj _3521909_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521910_37 = PRIM_ISCONS(_3521909_37);
if (True == _3521910_37) {
Obj _3521911_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521912_37 = PRIM_CAR(_3521911_37);
Obj _3521913_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521914_37 = PRIM_CDR(_3521913_37);
Obj _3521915_37 = PRIM_EQ(Nil, _3521914_37);
if (True == _3521915_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521381_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521381_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521381_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521381_37);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521382_37 = makeNative(co->gc, 1, clofun29, 0, 1, closureRef(R[0], 0));
Obj _3521896_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521896_37) {
Obj _3521897_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521898_37 = PRIM_EQ(getBinding(co, packageID, 96).name, _3521897_37);
if (True == _3521898_37) {
Obj _3521899_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521900_37 = PRIM_ISCONS(_3521899_37);
if (True == _3521900_37) {
Obj _3521901_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521902_37 = PRIM_CAR(_3521901_37);
Obj _3521903_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521904_37 = PRIM_CDR(_3521903_37);
Obj _3521905_37 = PRIM_EQ(Nil, _3521904_37);
if (True == _3521905_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521382_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521382_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521382_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521382_37);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521383_37 = makeNative(co->gc, 1, clofun28, 0, 1, closureRef(R[0], 0));
Obj _3521886_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521886_37) {
Obj _3521887_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521888_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3521887_37);
if (True == _3521888_37) {
Obj _3521889_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521890_37 = PRIM_ISCONS(_3521889_37);
if (True == _3521890_37) {
Obj _3521891_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521892_37 = PRIM_CAR(_3521891_37);
Obj _3521893_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521894_37 = PRIM_CDR(_3521893_37);
Obj _3521895_37 = PRIM_EQ(Nil, _3521894_37);
if (True == _3521895_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521383_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521383_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521383_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521383_37);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521384_37 = makeNative(co->gc, 2, clofun27, 0, 1, closureRef(R[0], 0));
Obj _3521876_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521876_37) {
Obj _3521877_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521878_37 = PRIM_EQ(getBinding(co, packageID, 83).name, _3521877_37);
if (True == _3521878_37) {
Obj _3521879_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521880_37 = PRIM_ISCONS(_3521879_37);
if (True == _3521880_37) {
Obj _3521881_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521882_37 = PRIM_CAR(_3521881_37);
Obj _3521883_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521884_37 = PRIM_CDR(_3521883_37);
Obj _3521885_37 = PRIM_EQ(Nil, _3521884_37);
if (True == _3521885_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521384_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521384_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521384_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521384_37);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521385_37 = makeNative(co->gc, 1, clofun26, 0, 0);
Obj _3521866_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521866_37) {
Obj _3521867_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521868_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3521867_37);
if (True == _3521868_37) {
Obj _3521869_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521870_37 = PRIM_ISCONS(_3521869_37);
if (True == _3521870_37) {
Obj _3521871_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521872_37 = PRIM_CAR(_3521871_37);
Obj label = _3521872_37;
Obj _3521873_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521874_37 = PRIM_CDR(_3521873_37);
R[1] = _3521385_37;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 89)), label);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521385_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521385_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521385_37);
return;
}
}
case 1:
{
Obj _3521875_37= co->res;
Obj _3521385_37 = R[1];
if (True == _3521875_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521385_37);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
coraReturn(co, False);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521374_37 = R[1];
Obj _3521375_37 = R[2];
Obj _3521855_37 = PRIM_EQ(Nil, _3521374_37);
if (True == _3521855_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3521377_37 = makeNative(co->gc, 2, clofun24, 0, 2, _3521374_37, _3521375_37);
Obj _3521861_37 = PRIM_ISCONS(_3521374_37);
if (True == _3521861_37) {
Obj _3521862_37 = PRIM_CAR(_3521374_37);
Obj x = _3521862_37;
Obj _3521863_37 = PRIM_CDR(_3521374_37);
Obj y = _3521863_37;
R[1] = y;
R[2] = _3521375_37;
R[3] = _3521377_37;
saveCont(co, clofun25, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 101)), x, _3521375_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521377_37);
return;
}
}
}
case 1:
{
Obj _3521864_37= co->res;
Obj y = R[1];
Obj _3521375_37 = R[2];
Obj _3521377_37 = R[3];
if (True == _3521864_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), y, _3521375_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521377_37);
return;
}
}
}
}

static void clofun24(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521856_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521856_37) {
Obj _3521857_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3521857_37;
Obj _3521858_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3521858_37;
R[1] = x;
saveCont(co, clofun24, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3521859_37= co->res;
Obj x = R[1];
Obj _3521860_37 = makeCons(co->gc, x, _3521859_37);
coraReturn(co, _3521860_37);
return;
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521369_37 = R[1];
Obj _3521370_37 = R[2];
Obj _3521844_37 = PRIM_EQ(Nil, _3521369_37);
if (True == _3521844_37) {
coraReturn(co, _3521370_37);
return;
} else {
Obj _3521372_37 = makeNative(co->gc, 2, clofun22, 0, 2, _3521369_37, _3521370_37);
Obj _3521850_37 = PRIM_ISCONS(_3521369_37);
if (True == _3521850_37) {
Obj _3521851_37 = PRIM_CAR(_3521369_37);
Obj x = _3521851_37;
Obj _3521852_37 = PRIM_CDR(_3521369_37);
Obj y = _3521852_37;
R[1] = y;
R[2] = _3521370_37;
R[3] = _3521372_37;
saveCont(co, clofun23, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 101)), x, _3521370_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521372_37);
return;
}
}
}
case 1:
{
Obj _3521853_37= co->res;
Obj y = R[1];
Obj _3521370_37 = R[2];
Obj _3521372_37 = R[3];
if (True == _3521853_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 87)), y, _3521370_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521372_37);
return;
}
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521845_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521845_37) {
Obj _3521846_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3521846_37;
Obj _3521847_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3521847_37;
R[1] = x;
saveCont(co, clofun22, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 87)), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3521848_37= co->res;
Obj x = R[1];
Obj _3521849_37 = makeCons(co->gc, x, _3521848_37);
coraReturn(co, _3521849_37);
return;
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521354_37 = R[1];
Obj _3521355_37 = R[2];
Obj _3521356_37 = R[3];
Obj _3521507_37 = makeNative(co->gc, 2, clofun20, 1, 3, _3521354_37, _3521356_37, _3521355_37);
R[1] = _3521356_37;
R[2] = _3521507_37;
saveCont(co, clofun21, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 89)), _3521356_37);
return;
}
case 1:
{
Obj _3521842_37= co->res;
Obj _3521507_37 = R[1];
if (True == _3521842_37) {
co->ctx.sp = R;
coraCall1(co, _3521507_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3521507_37, False);
return;
}
}
case 2:
{
Obj _3521841_37= co->res;
Obj _3521356_37 = R[1];
Obj _3521507_37 = R[2];
if (True == _3521841_37) {
co->ctx.sp = R;
coraCall1(co, _3521507_37, True);
return;
} else {
R[1] = _3521507_37;
saveCont(co, clofun21, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), _3521356_37);
return;
}
}
case 3:
{
Obj _3521839_37= co->res;
Obj _3521356_37 = R[1];
Obj _3521507_37 = R[2];
if (True == _3521839_37) {
co->ctx.sp = R;
coraCall1(co, _3521507_37, True);
return;
} else {
Obj _3521840_37 = primIsString(_3521356_37);
if (True == _3521840_37) {
co->ctx.sp = R;
coraCall1(co, _3521507_37, True);
return;
} else {
R[1] = _3521356_37;
R[2] = _3521507_37;
saveCont(co, clofun21, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 88)), _3521356_37);
return;
}
}
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521508_37 = R[1];
if (True == _3521508_37) {
Obj _3521646_37 = makeCons(co->gc, closureRef(R[0], 1), Nil);
Obj _3521647_37 = makeCons(co->gc, getBinding(co, packageID, 102).name, _3521646_37);
coraReturn(co, _3521647_37);
return;
} else {
Obj _3521358_37 = makeNative(co->gc, 3, clofun19, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj _3521826_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3521826_37) {
Obj _3521827_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3521828_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3521827_37);
if (True == _3521828_37) {
Obj _3521829_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3521830_37 = PRIM_ISCONS(_3521829_37);
if (True == _3521830_37) {
Obj _3521831_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3521832_37 = PRIM_CAR(_3521831_37);
Obj x = _3521832_37;
Obj _3521833_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3521834_37 = PRIM_CDR(_3521833_37);
Obj _3521835_37 = PRIM_EQ(Nil, _3521834_37);
if (True == _3521835_37) {
R[1] = x;
saveCont(co, clofun20, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 100)), x, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521358_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521358_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521358_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521358_37);
return;
}
}
}
case 1:
{
Obj _3521836_37= co->res;
Obj x = R[1];
Obj _3521837_37 = makeCons(co->gc, x, Nil);
Obj _3521838_37 = makeCons(co->gc, getBinding(co, packageID, 102).name, _3521837_37);
coraReturn(co, _3521838_37);
return;
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521648_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3521648_37) {
saveCont(co, clofun19, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 101)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3521360_37 = makeNative(co->gc, 1, clofun18, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3521804_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521804_37) {
Obj _3521805_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521806_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3521805_37);
if (True == _3521806_37) {
Obj _3521807_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521808_37 = PRIM_ISCONS(_3521807_37);
if (True == _3521808_37) {
Obj _3521809_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521810_37 = PRIM_CAR(_3521809_37);
Obj args = _3521810_37;
Obj _3521811_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521812_37 = PRIM_CDR(_3521811_37);
Obj _3521813_37 = PRIM_ISCONS(_3521812_37);
if (True == _3521813_37) {
Obj _3521814_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521815_37 = PRIM_CDR(_3521814_37);
Obj _3521816_37 = PRIM_CAR(_3521815_37);
Obj body = _3521816_37;
Obj _3521817_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521818_37 = PRIM_CDR(_3521817_37);
Obj _3521819_37 = PRIM_CDR(_3521818_37);
Obj _3521820_37 = PRIM_EQ(Nil, _3521819_37);
if (True == _3521820_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun19, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521360_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521360_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521360_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521360_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521360_37);
return;
}
}
}
case 1:
{
Obj _3521650_37= co->res;
Obj _3521651_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3521652_37 = makeCons(co->gc, getBinding(co, packageID, 99).name, _3521651_37);
coraReturn(co, _3521652_37);
return;
}
case 2:
{
Obj _3521649_37= co->res;
if (True == _3521649_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun19, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 100)), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
}
case 3:
{
Obj _3521822_37= co->res;
Obj args = R[1];
Obj _3521823_37 = makeCons(co->gc, _3521822_37, Nil);
Obj _3521824_37 = makeCons(co->gc, args, _3521823_37);
Obj _3521825_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3521824_37);
coraReturn(co, _3521825_37);
return;
}
case 4:
{
Obj _3521821_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun19, 3, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), _3521821_37, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521361_37 = makeNative(co->gc, 2, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3521772_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521772_37) {
Obj _3521773_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521774_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3521773_37);
if (True == _3521774_37) {
Obj _3521775_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521776_37 = PRIM_ISCONS(_3521775_37);
if (True == _3521776_37) {
Obj _3521777_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521778_37 = PRIM_CAR(_3521777_37);
Obj _3521779_37 = PRIM_ISCONS(_3521778_37);
if (True == _3521779_37) {
Obj _3521780_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521781_37 = PRIM_CAR(_3521780_37);
Obj _3521782_37 = PRIM_CAR(_3521781_37);
Obj _3521783_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3521782_37);
if (True == _3521783_37) {
Obj _3521784_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521785_37 = PRIM_CAR(_3521784_37);
Obj _3521786_37 = PRIM_CDR(_3521785_37);
Obj exp1 = _3521786_37;
Obj _3521787_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521788_37 = PRIM_CDR(_3521787_37);
Obj exp2 = _3521788_37;
Obj _3521789_37 = primGenSym(co);
Obj f = _3521789_37;
Obj _3521790_37 = primGenSym(co);
Obj v = _3521790_37;
Obj _3521791_37 = makeCons(co->gc, v, Nil);
Obj _3521792_37 = makeCons(co->gc, v, exp2);
Obj _3521793_37 = makeCons(co->gc, getBinding(co, packageID, 93).name, _3521792_37);
Obj _3521794_37 = makeCons(co->gc, _3521793_37, Nil);
Obj _3521795_37 = makeCons(co->gc, _3521791_37, _3521794_37);
Obj _3521796_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3521795_37);
Obj _3521797_37 = makeCons(co->gc, getBinding(co, packageID, 93).name, exp1);
Obj _3521798_37 = makeCons(co->gc, _3521797_37, Nil);
Obj _3521799_37 = makeCons(co->gc, f, _3521798_37);
Obj _3521800_37 = makeCons(co->gc, _3521799_37, Nil);
Obj _3521801_37 = makeCons(co->gc, _3521796_37, _3521800_37);
Obj _3521802_37 = makeCons(co->gc, f, _3521801_37);
Obj _3521803_37 = makeCons(co->gc, getBinding(co, packageID, 92).name, _3521802_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2), _3521803_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521361_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521361_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521361_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521361_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521361_37);
return;
}
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521362_37 = makeNative(co->gc, 2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3521765_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521765_37) {
Obj _3521766_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521767_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3521766_37);
if (True == _3521767_37) {
Obj _3521768_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3521768_37;
R[1] = args;
saveCont(co, clofun17, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521362_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521362_37);
return;
}
}
case 1:
{
Obj _3521770_37= co->res;
Obj _3521771_37 = makeCons(co->gc, getBinding(co, packageID, 93).name, _3521770_37);
coraReturn(co, _3521771_37);
return;
}
case 2:
{
Obj _3521769_37= co->res;
Obj args = R[1];
saveCont(co, clofun17, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3521769_37, args);
return;
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521363_37 = makeNative(co->gc, 1, clofun15, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj _3521743_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521743_37) {
Obj _3521744_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521745_37 = PRIM_EQ(getBinding(co, packageID, 91).name, _3521744_37);
if (True == _3521745_37) {
Obj _3521746_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521747_37 = PRIM_ISCONS(_3521746_37);
if (True == _3521747_37) {
Obj _3521748_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521749_37 = PRIM_CAR(_3521748_37);
Obj x = _3521749_37;
Obj _3521750_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521751_37 = PRIM_CDR(_3521750_37);
Obj _3521752_37 = PRIM_ISCONS(_3521751_37);
if (True == _3521752_37) {
Obj _3521753_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521754_37 = PRIM_CDR(_3521753_37);
Obj _3521755_37 = PRIM_CAR(_3521754_37);
Obj y = _3521755_37;
Obj _3521756_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521757_37 = PRIM_CDR(_3521756_37);
Obj _3521758_37 = PRIM_CDR(_3521757_37);
Obj _3521759_37 = PRIM_EQ(Nil, _3521758_37);
if (True == _3521759_37) {
R[1] = y;
saveCont(co, clofun16, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521363_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521363_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521363_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521363_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521363_37);
return;
}
}
case 1:
{
Obj _3521761_37= co->res;
Obj _3521760_37 = R[1];
Obj _3521762_37 = makeCons(co->gc, _3521761_37, Nil);
Obj _3521763_37 = makeCons(co->gc, _3521760_37, _3521762_37);
Obj _3521764_37 = makeCons(co->gc, getBinding(co, packageID, 91).name, _3521763_37);
coraReturn(co, _3521764_37);
return;
}
case 2:
{
Obj _3521760_37= co->res;
Obj y = R[1];
R[1] = _3521760_37;
saveCont(co, clofun16, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2), y);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521364_37 = makeNative(co->gc, 3, clofun14, 0, 3, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3521739_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3521739_37) {
Obj _3521740_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3521741_37 = PRIM_EQ(getBinding(co, packageID, 91).name, _3521740_37);
if (True == _3521741_37) {
Obj _3521742_37 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "do expects exactly 2 expressions; use begin for multiple"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521364_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521364_37);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521365_37 = makeNative(co->gc, 1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3521706_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521706_37) {
Obj _3521707_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521708_37 = PRIM_EQ(getBinding(co, packageID, 92).name, _3521707_37);
if (True == _3521708_37) {
Obj _3521709_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521710_37 = PRIM_ISCONS(_3521709_37);
if (True == _3521710_37) {
Obj _3521711_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521712_37 = PRIM_CAR(_3521711_37);
Obj a = _3521712_37;
Obj _3521713_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521714_37 = PRIM_CDR(_3521713_37);
Obj _3521715_37 = PRIM_ISCONS(_3521714_37);
if (True == _3521715_37) {
Obj _3521716_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521717_37 = PRIM_CDR(_3521716_37);
Obj _3521718_37 = PRIM_CAR(_3521717_37);
Obj b = _3521718_37;
Obj _3521719_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521720_37 = PRIM_CDR(_3521719_37);
Obj _3521721_37 = PRIM_CDR(_3521720_37);
Obj _3521722_37 = PRIM_ISCONS(_3521721_37);
if (True == _3521722_37) {
Obj _3521723_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521724_37 = PRIM_CDR(_3521723_37);
Obj _3521725_37 = PRIM_CDR(_3521724_37);
Obj _3521726_37 = PRIM_CAR(_3521725_37);
Obj c = _3521726_37;
Obj _3521727_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521728_37 = PRIM_CDR(_3521727_37);
Obj _3521729_37 = PRIM_CDR(_3521728_37);
Obj _3521730_37 = PRIM_CDR(_3521729_37);
Obj _3521731_37 = PRIM_EQ(Nil, _3521730_37);
if (True == _3521731_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun14, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521365_37);
return;
}
}
case 1:
{
Obj _3521734_37= co->res;
Obj _3521732_37 = R[1];
Obj a = R[2];
Obj _3521735_37 = makeCons(co->gc, _3521734_37, Nil);
Obj _3521736_37 = makeCons(co->gc, _3521732_37, _3521735_37);
Obj _3521737_37 = makeCons(co->gc, a, _3521736_37);
Obj _3521738_37 = makeCons(co->gc, getBinding(co, packageID, 92).name, _3521737_37);
coraReturn(co, _3521738_37);
return;
}
case 2:
{
Obj _3521732_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3521733_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3521732_37;
R[2] = a;
saveCont(co, clofun14, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), _3521733_37, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521366_37 = makeNative(co->gc, 4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3521674_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521674_37) {
Obj _3521675_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521676_37 = PRIM_ISCONS(_3521675_37);
if (True == _3521676_37) {
Obj _3521677_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521678_37 = PRIM_CAR(_3521677_37);
Obj _3521679_37 = PRIM_EQ(getBinding(co, packageID, 95).name, _3521678_37);
if (True == _3521679_37) {
Obj _3521680_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521681_37 = PRIM_CDR(_3521680_37);
Obj exp1 = _3521681_37;
Obj _3521682_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521683_37 = PRIM_ISCONS(_3521682_37);
if (True == _3521683_37) {
Obj _3521684_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521685_37 = PRIM_CAR(_3521684_37);
Obj _3521686_37 = PRIM_ISCONS(_3521685_37);
if (True == _3521686_37) {
Obj _3521687_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521688_37 = PRIM_CAR(_3521687_37);
Obj _3521689_37 = PRIM_CAR(_3521688_37);
Obj _3521690_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3521689_37);
if (True == _3521690_37) {
Obj _3521691_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521692_37 = PRIM_CAR(_3521691_37);
Obj _3521693_37 = PRIM_CDR(_3521692_37);
Obj exp2 = _3521693_37;
Obj _3521694_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3521695_37 = PRIM_CDR(_3521694_37);
Obj _3521696_37 = PRIM_EQ(Nil, _3521695_37);
if (True == _3521696_37) {
Obj _3521697_37 = primGenSym(co);
Obj f = _3521697_37;
Obj _3521698_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, exp1);
Obj _3521699_37 = makeCons(co->gc, getBinding(co, packageID, 93).name, exp2);
Obj _3521700_37 = makeCons(co->gc, _3521699_37, Nil);
Obj _3521701_37 = makeCons(co->gc, f, _3521700_37);
Obj _3521702_37 = makeCons(co->gc, _3521701_37, Nil);
Obj _3521703_37 = makeCons(co->gc, _3521698_37, _3521702_37);
Obj _3521704_37 = makeCons(co->gc, f, _3521703_37);
Obj _3521705_37 = makeCons(co->gc, getBinding(co, packageID, 92).name, _3521704_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2), _3521705_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521366_37);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521367_37 = makeNative(co->gc, 1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj _3521654_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521654_37) {
Obj _3521655_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3521655_37;
Obj _3521656_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3521656_37;
R[1] = op;
R[2] = args;
R[3] = _3521367_37;
saveCont(co, clofun12, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 110)), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521367_37);
return;
}
}
case 1:
{
Obj _3521664_37= co->res;
Obj _3521662_37 = R[1];
Obj _3521665_37 = makeCons(co->gc, _3521662_37, _3521664_37);
coraReturn(co, _3521665_37);
return;
}
case 2:
{
Obj _3521663_37= co->res;
Obj args = R[1];
Obj _3521662_37 = R[2];
R[1] = _3521662_37;
saveCont(co, clofun12, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3521663_37, args);
return;
}
case 3:
{
Obj _3521670_37= co->res;
Obj tmp = R[1];
Obj _3521671_37 = makeCons(co->gc, _3521670_37, Nil);
Obj _3521672_37 = makeCons(co->gc, tmp, _3521671_37);
Obj _3521673_37 = makeCons(co->gc, getBinding(co, packageID, 95).name, _3521672_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2), _3521673_37);
return;
}
case 4:
{
Obj _3521668_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = _3521668_37;
Obj _3521669_37 = makeCons(co->gc, op, args);
R[1] = tmp;
saveCont(co, clofun12, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), _3521669_37, tmp);
return;
}
case 5:
{
Obj _3521659_37= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = _3521659_37;
Obj _3521660_37 = PRIM_EQ(required, provided);
if (True == _3521660_37) {
Obj _3521661_37 = makeCons(co->gc, op, Nil);
Obj _3521662_37 = makeCons(co->gc, getBinding(co, packageID, 96).name, _3521661_37);
R[1] = args;
R[2] = _3521662_37;
saveCont(co, clofun12, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj _3521666_37 = PRIM_GT(required, provided);
if (True == _3521666_37) {
Obj _3521667_37 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 104)), _3521667_37, Nil);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "primitive call mismatch"));
return;
}
}
}
case 6:
{
Obj _3521658_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = _3521658_37;
R[1] = required;
R[2] = op;
R[3] = args;
saveCont(co, clofun12, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 97)), args);
return;
}
case 7:
{
Obj _3521657_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj _3521367_37 = R[3];
if (True == _3521657_37) {
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 106)), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521367_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
case 1:
{
Obj _3521653_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3521653_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521350_37 = R[1];
Obj _3521351_37 = R[2];
Obj _3521641_37 = PRIM_EQ(MAKE_NUMBER(0), _3521350_37);
if (True == _3521641_37) {
coraReturn(co, _3521351_37);
return;
} else {
Obj _3521642_37 = PRIM_SUB(_3521350_37, MAKE_NUMBER(1));
Obj _3521643_37 = primGenSym(co);
Obj _3521644_37 = makeCons(co->gc, _3521643_37, _3521351_37);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 104)), _3521642_37, _3521644_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), x, globalRef(co, getBinding(co, packageID, 128)));
return;
}
case 1:
{
Obj _3521639_37= co->res;
Obj find = R[1];
if (True == _3521639_37) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), find);
return;
}
}
case 2:
{
Obj _3521638_37= co->res;
Obj find = _3521638_37;
R[1] = find;
saveCont(co, clofun9, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), find);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), x, globalRef(co, getBinding(co, packageID, 128)));
return;
}
case 1:
{
Obj _3521636_37= co->res;
Obj find = R[1];
if (True == _3521636_37) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 107)), find);
return;
}
}
case 2:
{
Obj _3521635_37= co->res;
Obj find = _3521635_37;
R[1] = find;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), find);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), x, globalRef(co, getBinding(co, packageID, 128)));
return;
}
case 1:
{
Obj _3521632_37= co->res;
Obj _3521633_37 = primNot(_3521632_37);
coraReturn(co, _3521633_37);
return;
}
case 2:
{
Obj _3521631_37= co->res;
saveCont(co, clofun7, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), _3521631_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521346_37 = R[1];
Obj _3521347_37 = R[2];
Obj _3521555_37 = PRIM_EQ(Nil, _3521347_37);
if (True == _3521555_37) {
coraReturn(co, False);
return;
} else {
Obj _3521556_37 = PRIM_ISCONS(_3521347_37);
if (True == _3521556_37) {
Obj _3521557_37 = PRIM_CAR(_3521347_37);
Obj hd = _3521557_37;
Obj _3521558_37 = PRIM_CDR(_3521347_37);
Obj tl = _3521558_37;
R[1] = _3521346_37;
R[2] = tl;
saveCont(co, clofun6, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 130)), _3521346_37, hd);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3521559_37= co->res;
Obj _3521346_37 = R[1];
Obj tl = R[2];
Obj _3521560_37 = PRIM_LT(_3521559_37, MAKE_NUMBER(0));
if (True == _3521560_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 129)), _3521346_37, tl);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 131)), MAKE_NUMBER(0), x, l);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521340_37 = R[1];
Obj _3521341_37 = R[2];
Obj _3521342_37 = R[3];
Obj _3521544_37 = PRIM_EQ(Nil, _3521342_37);
if (True == _3521544_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3521344_37 = makeNative(co->gc, 1, clofun3, 0, 3, _3521342_37, _3521340_37, _3521341_37);
Obj _3521549_37 = PRIM_ISCONS(_3521342_37);
if (True == _3521549_37) {
Obj _3521550_37 = PRIM_CAR(_3521342_37);
Obj a = _3521550_37;
Obj _3521551_37 = PRIM_CDR(_3521342_37);
Obj _3521552_37 = PRIM_EQ(_3521341_37, a);
if (True == _3521552_37) {
coraReturn(co, _3521340_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521344_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521344_37);
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
Obj _3521545_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521545_37) {
Obj _3521546_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521547_37 = PRIM_CDR(closureRef(R[0], 0));
Obj b = _3521547_37;
Obj _3521548_37 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 131)), _3521548_37, closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521335_37 = R[1];
Obj _3521336_37 = R[2];
Obj _3521337_37 = R[3];
Obj _3521538_37 = PRIM_EQ(Nil, _3521337_37);
if (True == _3521538_37) {
coraReturn(co, _3521336_37);
return;
} else {
Obj _3521539_37 = PRIM_ISCONS(_3521337_37);
if (True == _3521539_37) {
Obj _3521540_37 = PRIM_CAR(_3521337_37);
Obj x = _3521540_37;
Obj _3521541_37 = PRIM_CDR(_3521337_37);
Obj y = _3521541_37;
R[1] = _3521335_37;
R[2] = y;
saveCont(co, clofun2, 1, R);
coraCall2(co, _3521335_37, _3521336_37, x);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
case 1:
{
Obj _3521542_37= co->res;
Obj _3521335_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), _3521335_37, _3521542_37, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3521330_37 = R[1];
Obj _3521331_37 = R[2];
Obj _3521523_37 = PRIM_EQ(Nil, _3521331_37);
if (True == _3521523_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3521333_37 = makeNative(co->gc, 1, clofun0, 0, 2, _3521331_37, _3521330_37);
Obj _3521527_37 = PRIM_ISCONS(_3521331_37);
if (True == _3521527_37) {
Obj _3521528_37 = PRIM_CAR(_3521331_37);
Obj _3521529_37 = PRIM_ISCONS(_3521528_37);
if (True == _3521529_37) {
Obj _3521530_37 = PRIM_CAR(_3521331_37);
Obj _3521531_37 = PRIM_CAR(_3521530_37);
Obj x = _3521531_37;
Obj _3521532_37 = PRIM_CAR(_3521331_37);
Obj _3521533_37 = PRIM_CDR(_3521532_37);
Obj y = _3521533_37;
Obj _3521534_37 = PRIM_CDR(_3521331_37);
Obj _3521535_37 = PRIM_EQ(_3521330_37, x);
if (True == _3521535_37) {
Obj _3521536_37 = makeCons(co->gc, x, y);
coraReturn(co, _3521536_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3521333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3521333_37);
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
Obj _3521524_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3521524_37) {
Obj _3521525_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3521526_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3521526_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

