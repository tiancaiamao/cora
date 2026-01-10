#include "types.h"
#include "runtime.h"

static int packageID = -1;
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
Binding *__symbolTable = malloc(sizeof(Binding) * 131);
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
addPackage(co, packageID, __symbolTable);
co->ctx.fn = clofun144;
co->ctx.label = 0;
}

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun144, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), makeCString(co->gc, "cora/lib/toc/internal"));
return;
}
case 1:
{
Obj _3518868_37= co->res;
Obj _3518874_37 = primSet(co, getBinding(co, packageID, 28).name, makeNative(co->gc, 3, clofun110, 2, 0));
Obj _3518880_37 = primSet(co, getBinding(co, packageID, 27).name, makeNative(co->gc, 3, clofun111, 2, 0));
Obj _3518902_37 = primSet(co, getBinding(co, packageID, 26).name, makeNative(co->gc, 7, clofun113, 3, 0));
Obj _3518921_37 = primSet(co, getBinding(co, packageID, 25).name, makeNative(co->gc, 4, clofun115, 3, 0));
Obj _3518931_37 = primSet(co, getBinding(co, packageID, 23).name, makeNative(co->gc, 4, clofun118, 3, 0));
Obj _3518972_37 = primSet(co, getBinding(co, packageID, 22).name, makeNative(co->gc, 2, clofun123, 1, 0));
Obj _3519011_37 = primSet(co, getBinding(co, packageID, 17).name, makeNative(co->gc, 5, clofun126, 4, 0));
Obj _3519063_37 = primSet(co, getBinding(co, packageID, 9).name, makeNative(co->gc, 3, clofun131, 2, 0));
Obj _3519064_37 = primSet(co, getBinding(co, packageID, 8).name, makeNative(co->gc, 3, clofun132, 2, 0));
Obj _3519078_37 = primSet(co, getBinding(co, packageID, 6).name, makeNative(co->gc, 2, clofun140, 1, 0));
Obj _3519079_37 = primSet(co, getBinding(co, packageID, 7).name, False);
Obj _3519092_37 = primSet(co, getBinding(co, packageID, 5).name, makeNative(co->gc, 3, clofun142, 1, 0));
Obj _3519102_37 = primSet(co, getBinding(co, packageID, 3).name, makeNative(co->gc, 4, clofun143, 2, 0));
coraReturn(co, _3519102_37);
return;
}
case 2:
{
Obj _3517486_37= co->res;
Obj _3517487_37 = primSet(co, getBinding(co, packageID, 129).name, Nil);
Obj _3517502_37 = primSet(co, getBinding(co, packageID, 128).name, makeNative(co->gc, 3, clofun1, 2, 0));
Obj _3517508_37 = primSet(co, getBinding(co, packageID, 126).name, makeNative(co->gc, 4, clofun2, 3, 0));
Obj _3517518_37 = primSet(co, getBinding(co, packageID, 125).name, makeNative(co->gc, 4, clofun4, 3, 0));
Obj _3517519_37 = primSet(co, getBinding(co, packageID, 124).name, makeNative(co->gc, 3, clofun5, 2, 0));
Obj _3517526_37 = primSet(co, getBinding(co, packageID, 123).name, makeNative(co->gc, 3, clofun6, 2, 0));
Obj _3517527_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3517528_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517527_37);
Obj _3517529_37 = makeCons(co->gc, getBinding(co, packageID, 121).name, _3517528_37);
Obj _3517530_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3517531_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517530_37);
Obj _3517532_37 = makeCons(co->gc, getBinding(co, packageID, 120).name, _3517531_37);
Obj _3517533_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3517534_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517533_37);
Obj _3517535_37 = makeCons(co->gc, getBinding(co, packageID, 119).name, _3517534_37);
Obj _3517536_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3517537_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517536_37);
Obj _3517538_37 = makeCons(co->gc, getBinding(co, packageID, 118).name, _3517537_37);
Obj _3517539_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3517540_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517539_37);
Obj _3517541_37 = makeCons(co->gc, getBinding(co, packageID, 117).name, _3517540_37);
Obj _3517542_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3517543_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517542_37);
Obj _3517544_37 = makeCons(co->gc, getBinding(co, packageID, 116).name, _3517543_37);
Obj _3517545_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3517546_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517545_37);
Obj _3517547_37 = makeCons(co->gc, getBinding(co, packageID, 115).name, _3517546_37);
Obj _3517548_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3517549_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517548_37);
Obj _3517550_37 = makeCons(co->gc, getBinding(co, packageID, 114).name, _3517549_37);
Obj _3517551_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3517552_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517551_37);
Obj _3517553_37 = makeCons(co->gc, getBinding(co, packageID, 113).name, _3517552_37);
Obj _3517554_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3517555_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517554_37);
Obj _3517556_37 = makeCons(co->gc, getBinding(co, packageID, 112).name, _3517555_37);
Obj _3517557_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3517558_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517557_37);
Obj _3517559_37 = makeCons(co->gc, getBinding(co, packageID, 111).name, _3517558_37);
Obj _3517560_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3517561_37 = makeCons(co->gc, MAKE_NUMBER(2), _3517560_37);
Obj _3517562_37 = makeCons(co->gc, getBinding(co, packageID, 110).name, _3517561_37);
Obj _3517563_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3517564_37 = makeCons(co->gc, MAKE_NUMBER(0), _3517563_37);
Obj _3517565_37 = makeCons(co->gc, getBinding(co, packageID, 109).name, _3517564_37);
Obj _3517566_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3517567_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517566_37);
Obj _3517568_37 = makeCons(co->gc, getBinding(co, packageID, 108).name, _3517567_37);
Obj _3517569_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3517570_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517569_37);
Obj _3517571_37 = makeCons(co->gc, getBinding(co, packageID, 107).name, _3517570_37);
Obj _3517572_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3517573_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517572_37);
Obj _3517574_37 = makeCons(co->gc, getBinding(co, packageID, 106).name, _3517573_37);
Obj _3517575_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3517576_37 = makeCons(co->gc, MAKE_NUMBER(1), _3517575_37);
Obj _3517577_37 = makeCons(co->gc, getBinding(co, packageID, 105).name, _3517576_37);
Obj _3517578_37 = makeCons(co->gc, _3517577_37, Nil);
Obj _3517579_37 = makeCons(co->gc, _3517574_37, _3517578_37);
Obj _3517580_37 = makeCons(co->gc, _3517571_37, _3517579_37);
Obj _3517581_37 = makeCons(co->gc, _3517568_37, _3517580_37);
Obj _3517582_37 = makeCons(co->gc, _3517565_37, _3517581_37);
Obj _3517583_37 = makeCons(co->gc, _3517562_37, _3517582_37);
Obj _3517584_37 = makeCons(co->gc, _3517559_37, _3517583_37);
Obj _3517585_37 = makeCons(co->gc, _3517556_37, _3517584_37);
Obj _3517586_37 = makeCons(co->gc, _3517553_37, _3517585_37);
Obj _3517587_37 = makeCons(co->gc, _3517550_37, _3517586_37);
Obj _3517588_37 = makeCons(co->gc, _3517547_37, _3517587_37);
Obj _3517589_37 = makeCons(co->gc, _3517544_37, _3517588_37);
Obj _3517590_37 = makeCons(co->gc, _3517541_37, _3517589_37);
Obj _3517591_37 = makeCons(co->gc, _3517538_37, _3517590_37);
Obj _3517592_37 = makeCons(co->gc, _3517535_37, _3517591_37);
Obj _3517593_37 = makeCons(co->gc, _3517532_37, _3517592_37);
Obj _3517594_37 = makeCons(co->gc, _3517529_37, _3517593_37);
Obj _3517595_37 = primSet(co, getBinding(co, packageID, 122).name, _3517594_37);
Obj _3517599_37 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3517602_37 = primSet(co, getBinding(co, packageID, 102).name, makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3517605_37 = primSet(co, getBinding(co, packageID, 100).name, makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3517610_37 = primSet(co, getBinding(co, packageID, 98).name, makeNative(co->gc, 3, clofun10, 2, 0));
Obj _3517804_37 = primSet(co, getBinding(co, packageID, 97).name, makeNative(co->gc, 4, clofun20, 3, 0));
Obj _3517815_37 = primSet(co, getBinding(co, packageID, 81).name, makeNative(co->gc, 4, clofun22, 2, 0));
Obj _3517826_37 = primSet(co, getBinding(co, packageID, 80).name, makeNative(co->gc, 4, clofun24, 2, 0));
Obj _3517887_37 = primSet(co, getBinding(co, packageID, 79).name, makeNative(co->gc, 2, clofun31, 1, 0));
Obj _3518062_37 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 2, clofun41, 1, 0));
Obj _3518135_37 = primSet(co, getBinding(co, packageID, 71).name, makeNative(co->gc, 4, clofun44, 2, 0));
Obj _3518138_37 = primSet(co, getBinding(co, packageID, 70).name, makeNative(co->gc, 2, clofun45, 1, 0));
Obj _3518275_37 = primSet(co, getBinding(co, packageID, 69).name, makeNative(co->gc, 3, clofun54, 2, 0));
Obj _3518298_37 = primSet(co, getBinding(co, packageID, 68).name, makeNative(co->gc, 4, clofun57, 3, 0));
Obj _3518375_37 = primSet(co, getBinding(co, packageID, 63).name, makeNative(co->gc, 3, clofun61, 2, 0));
Obj _3518406_37 = primSet(co, getBinding(co, packageID, 61).name, makeNative(co->gc, 4, clofun65, 3, 0));
Obj _3518412_37 = primSet(co, getBinding(co, packageID, 60).name, makeNative(co->gc, 5, clofun68, 4, 0));
Obj _3518417_37 = primSet(co, getBinding(co, packageID, 58).name, makeNative(co->gc, 3, clofun70, 2, 0));
Obj _3518426_37 = primSet(co, getBinding(co, packageID, 57).name, makeNative(co->gc, 2, clofun72, 1, 0));
Obj _3518477_37 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 6, clofun74, 2, 0));
Obj _3518485_37 = primSet(co, getBinding(co, packageID, 54).name, makeNative(co->gc, 4, clofun75, 2, 0));
Obj _3518492_37 = primSet(co, getBinding(co, packageID, 66).name, makeNative(co->gc, 3, clofun76, 2, 0));
Obj _3518497_37 = primSet(co, getBinding(co, packageID, 94).name, makeNative(co->gc, 4, clofun77, 2, 0));
Obj _3518503_37 = primSet(co, getBinding(co, packageID, 51).name, makeNative(co->gc, 4, clofun78, 3, 0));
Obj _3518504_37 = primSet(co, getBinding(co, packageID, 50).name, makeNative(co->gc, 3, clofun79, 2, 0));
Obj _3518511_37 = primSet(co, getBinding(co, packageID, 49).name, makeNative(co->gc, 6, clofun81, 5, 0));
Obj _3518518_37 = primSet(co, getBinding(co, packageID, 45).name, makeNative(co->gc, 6, clofun83, 5, 0));
Obj _3518805_37 = primSet(co, getBinding(co, packageID, 46).name, makeNative(co->gc, 6, clofun96, 5, 0));
Obj _3518819_37 = primSet(co, getBinding(co, packageID, 43).name, makeNative(co->gc, 6, clofun98, 5, 0));
Obj _3518841_37 = primSet(co, getBinding(co, packageID, 40).name, makeNative(co->gc, 8, clofun100, 5, 0));
Obj _3518843_37 = primSet(co, getBinding(co, packageID, 42).name, makeNative(co->gc, 3, clofun101, 2, 0));
Obj _3518847_37 = primSet(co, getBinding(co, packageID, 39).name, makeNative(co->gc, 3, clofun102, 2, 0));
Obj _3518848_37 = primSet(co, getBinding(co, packageID, 38).name, makeNative(co->gc, 3, clofun103, 2, 0));
Obj _3518849_37 = primSet(co, getBinding(co, packageID, 37).name, makeNative(co->gc, 2, clofun104, 1, 0));
Obj _3518850_37 = primSet(co, getBinding(co, packageID, 36).name, makeNative(co->gc, 2, clofun105, 1, 0));
Obj _3518851_37 = primSet(co, getBinding(co, packageID, 35).name, makeNative(co->gc, 2, clofun106, 1, 0));
Obj _3518858_37 = primSet(co, getBinding(co, packageID, 34).name, makeNative(co->gc, 3, clofun107, 1, 0));
Obj _3518865_37 = primSet(co, getBinding(co, packageID, 32).name, makeNative(co->gc, 3, clofun108, 2, 0));
saveCont(co, clofun144, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 31)), getBinding(co, packageID, 30).name, makeNative(co->gc, 2, clofun109, 1, 0));
return;
}
case 3:
{
Obj _3517485_37= co->res;
saveCont(co, clofun144, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), makeCString(co->gc, "cora/lib/hash-h"));
return;
}
case 4:
{
Obj _3517484_37= co->res;
saveCont(co, clofun144, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), makeCString(co->gc, "cora/lib/io"));
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
Obj _3519093_37 = primGenSym(co);
Obj globals = _3519093_37;
Obj _3519094_37 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), globals);
return;
}
case 1:
{
Obj _3519101_37= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 0)), stream);
return;
}
case 2:
{
Obj _3519100_37= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
saveCont(co, clofun143, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 23)), stream, bc, _3519100_37);
return;
}
case 3:
{
Obj _3519099_37= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = _3519099_37;
R[1] = bc;
R[2] = stream;
saveCont(co, clofun143, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), globals);
return;
}
case 4:
{
Obj _3519098_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = _3519098_37;
R[1] = globals;
R[2] = bc;
saveCont(co, clofun143, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 1)), to);
return;
}
case 5:
{
Obj _3519097_37= co->res;
Obj _3519095_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
saveCont(co, clofun143, 4, R);
coraCall1(co, _3519095_37, _3519097_37);
return;
}
case 6:
{
Obj _3519096_37= co->res;
Obj _3519095_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3519095_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 2)), _3519096_37);
return;
}
case 7:
{
Obj _3519095_37= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3519095_37;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 5)), from);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 4)), file_45path);
return;
}
case 1:
{
Obj _3519087_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 6)), sexp);
return;
}
case 2:
{
Obj _3519086_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), sexp);
return;
}
case 3:
{
Obj _3519089_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 6)), sexp);
return;
}
case 4:
{
Obj _3519088_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), sexp);
return;
}
case 5:
{
Obj _3519091_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 6)), sexp);
return;
}
case 6:
{
Obj _3519090_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), sexp);
return;
}
case 7:
{
Obj _3519083_37= co->res;
Obj _3517482_37 = R[1];
Obj sexp = R[2];
if (True == _3519083_37) {
Obj _3519084_37 = PRIM_CAR(sexp);
Obj _3519085_37 = PRIM_EQ(getBinding(co, packageID, 19).name, _3519084_37);
if (True == _3519085_37) {
R[1] = sexp;
saveCont(co, clofun142, 2, R);
coraCall1(co, _3517482_37, True);
return;
} else {
R[1] = sexp;
saveCont(co, clofun142, 4, R);
coraCall1(co, _3517482_37, False);
return;
}
} else {
R[1] = sexp;
saveCont(co, clofun142, 6, R);
coraCall1(co, _3517482_37, False);
return;
}
}
case 8:
{
Obj _3519080_37= co->res;
Obj sexp = _3519080_37;
Obj _3517482_37 = makeNative(co->gc, 2, clofun141, 1, 1, sexp);
R[1] = _3517482_37;
R[2] = sexp;
saveCont(co, clofun142, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), sexp);
return;
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517483_37 = R[1];
if (True == _3517483_37) {
Obj _3519081_37 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, _3519081_37);
return;
} else {
Obj _3519082_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
coraReturn(co, _3519082_37);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517470_37 = R[1];
Obj _3517471_37 = makeNative(co->gc, 1, clofun137, 0, 1, _3517470_37);
Obj _3519073_37 = PRIM_ISCONS(_3517470_37);
if (True == _3519073_37) {
Obj _3519074_37 = PRIM_CAR(_3517470_37);
Obj _3519075_37 = PRIM_EQ(getBinding(co, packageID, 18).name, _3519074_37);
if (True == _3519075_37) {
Obj _3519076_37 = PRIM_CDR(_3517470_37);
Obj more = _3519076_37;
Obj _3519077_37 = makeCons(co->gc, getBinding(co, packageID, 18).name, more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 9)), _3519077_37, makeNative(co->gc, 2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517471_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517471_37);
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
coraCall4(co, globalRef(co, getBinding(co, packageID, 17)), body, Nil, Nil, makeNative(co->gc, 3, clofun138, 2, 0));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 8)), type, code);
return;
}
}
}

static void clofun137(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517472_37 = makeNative(co->gc, 1, clofun134, 0, 1, closureRef(R[0], 0));
Obj _3519068_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3519068_37) {
Obj _3519069_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519070_37 = PRIM_EQ(getBinding(co, packageID, 19).name, _3519069_37);
if (True == _3519070_37) {
Obj _3519071_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3519071_37;
Obj _3519072_37 = makeCons(co->gc, getBinding(co, packageID, 19).name, more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 9)), _3519072_37, makeNative(co->gc, 2, clofun136, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517472_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517472_37);
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
coraCall4(co, globalRef(co, getBinding(co, packageID, 17)), body, Nil, Nil, makeNative(co->gc, 3, clofun135, 2, 0));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 8)), type, code);
return;
}
}
}

static void clofun134(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3519065_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 17)), _3519065_37, Nil, Nil, makeNative(co->gc, 3, clofun133, 2, 0));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 8)), type, code);
return;
}
case 1:
{
Obj _3519066_37= co->res;
Obj _3519067_37 = makeCons(co->gc, getBinding(co, packageID, 19).name, _3519066_37);
coraReturn(co, _3519067_37);
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
if (True == globalRef(co, getBinding(co, packageID, 7))) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 88)), type, code);
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
Obj _3517463_37 = R[1];
Obj _3517464_37 = R[2];
Obj _3517465_37 = makeNative(co->gc, 2, clofun130, 0, 2, _3517463_37, _3517464_37);
Obj _3519051_37 = PRIM_ISCONS(_3517463_37);
if (True == _3519051_37) {
Obj _3519052_37 = PRIM_CAR(_3517463_37);
Obj _3519053_37 = PRIM_EQ(getBinding(co, packageID, 18).name, _3519052_37);
if (True == _3519053_37) {
Obj _3519054_37 = PRIM_CDR(_3517463_37);
Obj _3519055_37 = PRIM_ISCONS(_3519054_37);
if (True == _3519055_37) {
Obj _3519056_37 = PRIM_CDR(_3517463_37);
Obj _3519057_37 = PRIM_CAR(_3519056_37);
Obj name = _3519057_37;
Obj _3519058_37 = PRIM_CDR(_3517463_37);
Obj _3519059_37 = PRIM_CDR(_3519058_37);
Obj more = _3519059_37;
R[1] = name;
saveCont(co, clofun131, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 9)), more, _3517464_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517465_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517465_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517465_37);
return;
}
}
case 1:
{
Obj _3519060_37= co->res;
Obj name = R[1];
Obj _3519061_37 = makeCons(co->gc, name, _3519060_37);
Obj _3519062_37 = makeCons(co->gc, getBinding(co, packageID, 18).name, _3519061_37);
coraReturn(co, _3519062_37);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517466_37 = makeNative(co->gc, 2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3519030_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3519030_37) {
Obj _3519031_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519032_37 = PRIM_ISCONS(_3519031_37);
if (True == _3519032_37) {
Obj _3519033_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519034_37 = PRIM_CAR(_3519033_37);
Obj _3519035_37 = PRIM_EQ(getBinding(co, packageID, 21).name, _3519034_37);
if (True == _3519035_37) {
Obj _3519036_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519037_37 = PRIM_CDR(_3519036_37);
Obj _3519038_37 = PRIM_ISCONS(_3519037_37);
if (True == _3519038_37) {
Obj _3519039_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519040_37 = PRIM_CDR(_3519039_37);
Obj _3519041_37 = PRIM_CAR(_3519040_37);
Obj pkg = _3519041_37;
Obj _3519042_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519043_37 = PRIM_CDR(_3519042_37);
Obj _3519044_37 = PRIM_CDR(_3519043_37);
Obj _3519045_37 = PRIM_EQ(Nil, _3519044_37);
if (True == _3519045_37) {
Obj _3519046_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3519046_37;
Obj _3519047_37 = makeCons(co->gc, pkg, Nil);
Obj _3519048_37 = makeCons(co->gc, getBinding(co, packageID, 21).name, _3519047_37);
R[1] = _3519048_37;
saveCont(co, clofun130, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 9)), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517466_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517466_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517466_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517466_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517466_37);
return;
}
}
case 1:
{
Obj _3519049_37= co->res;
Obj _3519048_37 = R[1];
Obj _3519050_37 = makeCons(co->gc, _3519048_37, _3519049_37);
coraReturn(co, _3519050_37);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517467_37 = makeNative(co->gc, 1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3519018_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3519018_37) {
Obj _3519019_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519020_37 = PRIM_ISCONS(_3519019_37);
if (True == _3519020_37) {
Obj _3519021_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519022_37 = PRIM_CAR(_3519021_37);
Obj _3519023_37 = PRIM_EQ(getBinding(co, packageID, 20).name, _3519022_37);
if (True == _3519023_37) {
Obj _3519024_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519025_37 = PRIM_CDR(_3519024_37);
Obj symbols = _3519025_37;
Obj _3519026_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3519026_37;
Obj _3519027_37 = makeCons(co->gc, getBinding(co, packageID, 20).name, symbols);
R[1] = _3519027_37;
saveCont(co, clofun129, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 9)), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517467_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517467_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517467_37);
return;
}
}
case 1:
{
Obj _3519028_37= co->res;
Obj _3519027_37 = R[1];
Obj _3519029_37 = makeCons(co->gc, _3519027_37, _3519028_37);
coraReturn(co, _3519029_37);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517468_37 = makeNative(co->gc, 1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3519012_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3519012_37) {
Obj _3519013_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3519014_37 = PRIM_EQ(getBinding(co, packageID, 19).name, _3519013_37);
if (True == _3519014_37) {
Obj _3519015_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3519015_37;
saveCont(co, clofun128, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 9)), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517468_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517468_37);
return;
}
}
case 1:
{
Obj _3519016_37= co->res;
Obj _3519017_37 = makeCons(co->gc, getBinding(co, packageID, 19).name, _3519016_37);
coraReturn(co, _3519017_37);
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
Obj _3517455_37 = R[1];
Obj _3517456_37 = R[2];
Obj _3517457_37 = R[3];
Obj _3517458_37 = R[4];
Obj _3518973_37 = PRIM_EQ(Nil, _3517455_37);
if (True == _3518973_37) {
R[1] = _3517457_37;
R[2] = _3517458_37;
saveCont(co, clofun126, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 67)), _3517456_37);
return;
} else {
Obj _3517460_37 = makeNative(co->gc, 1, clofun125, 0, 4, _3517455_37, _3517456_37, _3517457_37, _3517458_37);
Obj _3519000_37 = PRIM_ISCONS(_3517455_37);
if (True == _3519000_37) {
Obj _3519001_37 = PRIM_CAR(_3517455_37);
Obj _3519002_37 = PRIM_ISCONS(_3519001_37);
if (True == _3519002_37) {
Obj _3519003_37 = PRIM_CAR(_3517455_37);
Obj _3519004_37 = PRIM_CAR(_3519003_37);
Obj _3519005_37 = PRIM_EQ(getBinding(co, packageID, 10).name, _3519004_37);
if (True == _3519005_37) {
Obj _3519006_37 = PRIM_CAR(_3517455_37);
Obj _3519007_37 = PRIM_CDR(_3519006_37);
Obj exp = _3519007_37;
Obj _3519008_37 = PRIM_CDR(_3517455_37);
Obj more = _3519008_37;
Obj _3519009_37 = makeCons(co->gc, getBinding(co, packageID, 19).name, exp);
Obj _3519010_37 = makeCons(co->gc, _3519009_37, _3517456_37);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 17)), more, _3519010_37, _3517457_37, _3517458_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517460_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517460_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517460_37);
return;
}
}
}
case 1:
{
Obj _3518975_37= co->res;
Obj _3517458_37 = R[1];
Obj _3518974_37 = R[2];
co->ctx.sp = R;
coraCall2(co, _3517458_37, _3518974_37, _3518975_37);
return;
}
case 2:
{
Obj _3518974_37= co->res;
Obj _3517457_37 = R[1];
Obj _3517458_37 = R[2];
R[1] = _3517458_37;
R[2] = _3518974_37;
saveCont(co, clofun126, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 67)), _3517457_37);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517461_37 = makeNative(co->gc, 1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3518989_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518989_37) {
Obj _3518990_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518991_37 = PRIM_ISCONS(_3518990_37);
if (True == _3518991_37) {
Obj _3518992_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518993_37 = PRIM_CAR(_3518992_37);
Obj _3518994_37 = PRIM_EQ(getBinding(co, packageID, 12).name, _3518993_37);
if (True == _3518994_37) {
Obj _3518995_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518996_37 = PRIM_CDR(_3518995_37);
Obj exp = _3518996_37;
Obj _3518997_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518997_37;
Obj _3518998_37 = makeCons(co->gc, getBinding(co, packageID, 11).name, exp);
Obj _3518999_37 = makeCons(co->gc, _3518998_37, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 17)), more, _3518999_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517461_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517461_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517461_37);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518976_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518976_37) {
Obj _3518977_37 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = _3518977_37;
Obj _3518978_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518978_37;
Obj _3518979_37 = makeCons(co->gc, exp, Nil);
Obj _3518980_37 = makeCons(co->gc, getBinding(co, packageID, 14).name, _3518979_37);
Obj _3518981_37 = makeCons(co->gc, _3518980_37, Nil);
Obj _3518982_37 = makeCons(co->gc, getBinding(co, packageID, 15).name, _3518981_37);
Obj _3518983_37 = makeCons(co->gc, getBinding(co, packageID, 13).name, Nil);
Obj _3518984_37 = makeCons(co->gc, _3518983_37, Nil);
Obj _3518985_37 = makeCons(co->gc, _3518982_37, _3518984_37);
Obj _3518986_37 = makeCons(co->gc, getBinding(co, packageID, 16).name, _3518985_37);
Obj _3518987_37 = makeCons(co->gc, _3518986_37, closureRef(R[0], 1));
Obj _3518988_37 = makeCons(co->gc, exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 17)), more, _3518987_37, _3518988_37, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517449_37 = R[1];
Obj _3517450_37 = makeNative(co->gc, 1, clofun122, 0, 1, _3517449_37);
Obj _3518963_37 = PRIM_ISCONS(_3517449_37);
if (True == _3518963_37) {
Obj _3518964_37 = PRIM_CAR(_3517449_37);
Obj _3518965_37 = PRIM_EQ(getBinding(co, packageID, 18).name, _3518964_37);
if (True == _3518965_37) {
Obj _3518966_37 = PRIM_CDR(_3517449_37);
Obj _3518967_37 = PRIM_ISCONS(_3518966_37);
if (True == _3518967_37) {
Obj _3518968_37 = PRIM_CDR(_3517449_37);
Obj _3518969_37 = PRIM_CAR(_3518968_37);
Obj _3518970_37 = PRIM_CDR(_3517449_37);
Obj _3518971_37 = PRIM_CDR(_3518970_37);
Obj remain = _3518971_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517450_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517450_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517450_37);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517451_37 = makeNative(co->gc, 1, clofun121, 0, 1, closureRef(R[0], 0));
Obj _3518959_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518959_37) {
Obj _3518960_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518961_37 = PRIM_EQ(getBinding(co, packageID, 19).name, _3518960_37);
if (True == _3518961_37) {
Obj _3518962_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518962_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517451_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517451_37);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517452_37 = makeNative(co->gc, 2, clofun120, 0, 1, closureRef(R[0], 0));
Obj _3518950_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518950_37) {
Obj _3518951_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518952_37 = PRIM_ISCONS(_3518951_37);
if (True == _3518952_37) {
Obj _3518953_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518954_37 = PRIM_CAR(_3518953_37);
Obj _3518955_37 = PRIM_EQ(getBinding(co, packageID, 20).name, _3518954_37);
if (True == _3518955_37) {
Obj _3518956_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518957_37 = PRIM_CDR(_3518956_37);
Obj _3518958_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518958_37;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517452_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517452_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517452_37);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517453_37 = makeNative(co->gc, 1, clofun119, 0, 0);
Obj _3518932_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518932_37) {
Obj _3518933_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518934_37 = PRIM_ISCONS(_3518933_37);
if (True == _3518934_37) {
Obj _3518935_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518936_37 = PRIM_CAR(_3518935_37);
Obj _3518937_37 = PRIM_EQ(getBinding(co, packageID, 21).name, _3518936_37);
if (True == _3518937_37) {
Obj _3518938_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518939_37 = PRIM_CDR(_3518938_37);
Obj _3518940_37 = PRIM_ISCONS(_3518939_37);
if (True == _3518940_37) {
Obj _3518941_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518942_37 = PRIM_CDR(_3518941_37);
Obj _3518943_37 = PRIM_CAR(_3518942_37);
Obj pkg = _3518943_37;
Obj _3518944_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518945_37 = PRIM_CDR(_3518944_37);
Obj _3518946_37 = PRIM_CDR(_3518945_37);
Obj _3518947_37 = PRIM_EQ(Nil, _3518946_37);
if (True == _3518947_37) {
Obj _3518948_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518948_37;
R[1] = remain;
saveCont(co, clofun120, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 130)), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517453_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517453_37);
return;
}
}
case 1:
{
Obj _3518949_37= co->res;
Obj remain = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 22)), remain);
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
saveCont(co, clofun118, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "#include \"types.h\"\n"));
return;
}
case 1:
{
Obj _3518930_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 27)), makeNative(co->gc, 2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj _3518929_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 25)), to, globals, _3518929_37);
return;
}
case 3:
{
Obj _3518928_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 64)), bc);
return;
}
case 4:
{
Obj _3518927_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "\n\n"));
return;
}
case 5:
{
Obj _3518924_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 27)), makeNative(co->gc, 2, clofun116, 1, 1, to), bc);
return;
}
case 6:
{
Obj _3518923_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "static int packageID = -1;\n"));
return;
}
case 7:
{
Obj _3518922_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "#include \"runtime.h\"\n\n"));
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 26)), closureRef(R[0], 0), group, closureRef(R[0], 1));
return;
}
}
}

static void clofun116(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
Obj _3518925_37 = PRIM_CAR(group);
saveCont(co, clofun116, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 39)), closureRef(R[0], 0), _3518925_37);
return;
}
case 1:
{
Obj _3518926_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 0), makeCString(co->gc, ";\n"));
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
saveCont(co, clofun115, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "void entry(struct Cora *co, int label, Obj *R) {\n"));
return;
}
case 1:
{
Obj _3518920_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj _3518919_37= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun115, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj _3518918_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
saveCont(co, clofun115, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 42)), to, label);
return;
}
case 4:
{
Obj _3518917_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "co->ctx.fn = "));
return;
}
case 5:
{
Obj _3518916_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "addPackage(co, packageID, __symbolTable);\n"));
return;
}
case 6:
{
Obj _3518908_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 5, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), makeNative(co->gc, 3, clofun114, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 7:
{
Obj _3518907_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, ");\n"));
return;
}
case 8:
{
Obj _3518906_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), to, _3518906_37);
return;
}
case 9:
{
Obj _3518905_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), globals);
return;
}
case 10:
{
Obj _3518904_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "Binding *__symbolTable = malloc(sizeof(Binding) * "));
return;
}
case 11:
{
Obj _3518903_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "if (packageID == -1) { packageID = packageIDAlloc(); }\n"));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 0), makeCString(co->gc, "__symbolTable["));
return;
}
case 1:
{
Obj _3518914_37= co->res;
Obj acc = R[1];
Obj _3518915_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518915_37);
return;
}
case 2:
{
Obj _3518913_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun114, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 0), makeCString(co->gc, "\"));\n"));
return;
}
case 3:
{
Obj _3518912_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun114, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 0), _3518912_37);
return;
}
case 4:
{
Obj _3518911_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun114, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 24)), sym);
return;
}
case 5:
{
Obj _3518910_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 0), makeCString(co->gc, "] = bindSymbol(co, intern(\""));
return;
}
case 6:
{
Obj _3518909_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 0), acc);
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
Obj _3518881_37 = PRIM_CAR(group);
Obj label = _3518881_37;
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun113, 13, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 99)), group);
return;
}
case 1:
{
Obj _3518901_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "}\n\n"));
return;
}
case 2:
{
Obj _3518900_37= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun113, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj _3518899_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
saveCont(co, clofun113, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), makeNative(co->gc, 3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), _3518899_37);
return;
}
case 4:
{
Obj _3518891_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 59)), lam);
return;
}
case 5:
{
Obj _3518890_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "}\n"));
return;
}
case 6:
{
Obj _3518889_37= co->res;
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
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
return;
}
case 7:
{
Obj _3518888_37= co->res;
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
coraCall(co, globalRef(co, getBinding(co, packageID, 45)), 5, __args);
return;
}
case 8:
{
Obj _3518887_37= co->res;
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, "case 0:\n{\n"));
return;
}
case 9:
{
Obj _3518886_37= co->res;
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, " switch (label) {\n"));
return;
}
case 10:
{
Obj _3518885_37= co->res;
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, makeCString(co->gc, " {\n"));
return;
}
case 11:
{
Obj _3518884_37= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = _3518884_37;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 39)), to, label);
return;
}
case 12:
{
Obj _3518883_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = _3518883_37;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
saveCont(co, clofun113, 11, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), lam);
return;
}
case 13:
{
Obj _3518882_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = _3518882_37;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 12, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 99)), lam);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "case "));
return;
}
case 1:
{
Obj _3518897_37= co->res;
Obj acc = R[1];
Obj _3518898_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518898_37);
return;
}
case 2:
{
Obj _3518896_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun112, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj _3518895_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun112, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), _3518895_37, closureRef(R[0], 3), cont};
coraCall(co, globalRef(co, getBinding(co, packageID, 40)), 5, __args);
return;
}
case 4:
{
Obj _3518894_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 99)), closureRef(R[0], 2));
return;
}
case 5:
{
Obj _3518893_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, ":\n{\n"));
return;
}
case 6:
{
Obj _3518892_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun111(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517445_37 = R[1];
Obj _3517446_37 = R[2];
Obj _3518875_37 = PRIM_EQ(Nil, _3517446_37);
if (True == _3518875_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518876_37 = PRIM_ISCONS(_3517446_37);
if (True == _3518876_37) {
Obj _3518877_37 = PRIM_CAR(_3517446_37);
Obj x = _3518877_37;
Obj _3518878_37 = PRIM_CDR(_3517446_37);
Obj y = _3518878_37;
R[1] = _3517445_37;
R[2] = y;
saveCont(co, clofun111, 1, R);
coraCall1(co, _3517445_37, x);
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
Obj _3518879_37= co->res;
Obj _3517445_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 27)), _3517445_37, y);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 38)), globals);
return;
}
case 1:
{
Obj _3518873_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 34)), _3518873_37);
return;
}
case 2:
{
Obj _3518872_37= co->res;
saveCont(co, clofun110, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 35)), _3518872_37);
return;
}
case 3:
{
Obj _3518871_37= co->res;
saveCont(co, clofun110, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 36)), _3518871_37);
return;
}
case 4:
{
Obj _3518870_37= co->res;
saveCont(co, clofun110, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 37)), _3518870_37);
return;
}
case 5:
{
Obj _3518869_37= co->res;
Obj exp = R[1];
saveCont(co, clofun110, 4, R);
coraCall1(co, _3518869_37, exp);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 99)), exp);
return;
}
case 1:
{
Obj _3518867_37= co->res;
Obj obj = R[1];
Obj fns = _3518867_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 32)), obj, fns);
return;
}
case 2:
{
Obj _3518866_37= co->res;
Obj exp = R[1];
Obj obj = _3518866_37;
R[1] = obj;
saveCont(co, clofun109, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 29)), exp);
return;
}
}
}

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517441_37 = R[1];
Obj _3517442_37 = R[2];
Obj _3518859_37 = PRIM_EQ(Nil, _3517442_37);
if (True == _3518859_37) {
coraReturn(co, _3517441_37);
return;
} else {
Obj _3518860_37 = PRIM_ISCONS(_3517442_37);
if (True == _3518860_37) {
Obj _3518861_37 = PRIM_CAR(_3517442_37);
Obj hd = _3518861_37;
Obj _3518862_37 = PRIM_CDR(_3517442_37);
Obj more = _3518862_37;
Obj _3518863_37 = makeCons(co->gc, _3517441_37, Nil);
Obj _3518864_37 = makeCons(co->gc, hd, _3518863_37);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 32)), _3518864_37, more);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 33)), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj _3518857_37= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 55)), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj _3518856_37= co->res;
Obj v = R[1];
Obj e2 = _3518856_37;
R[1] = v;
saveCont(co, clofun107, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), v, e2);
return;
}
case 3:
{
Obj _3518855_37= co->res;
Obj v = R[1];
Obj e1 = _3518855_37;
R[1] = v;
saveCont(co, clofun107, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 58)), Nil, e1);
return;
}
case 4:
{
Obj _3518854_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
saveCont(co, clofun107, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), v, exp);
return;
}
case 5:
{
Obj _3518853_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
saveCont(co, clofun107, 4, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 53)), v, MAKE_NUMBER(1), Nil);
return;
}
case 6:
{
Obj _3518852_37= co->res;
Obj exp = R[1];
Obj v = _3518852_37;
R[1] = exp;
R[2] = v;
saveCont(co, clofun107, 5, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 53)), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 63)), Nil, exp);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), exp, globalRef(co, getBinding(co, packageID, 70)));
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 71)), Nil, exp);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), Nil, globals, exp);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), w, makeCString(co->gc, "static void "));
return;
}
case 1:
{
Obj _3518846_37= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), w, makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3518845_37= co->res;
Obj w = R[1];
R[1] = w;
saveCont(co, clofun102, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), w, makeCString(co->gc, "(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj _3518844_37= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
saveCont(co, clofun102, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 42)), w, label);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), w, makeCString(co->gc, "clofun"));
return;
}
case 1:
{
Obj _3518842_37= co->res;
Obj w = R[1];
Obj label = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), w, label);
return;
}
}
}

static void clofun100(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517435_37 = R[1];
Obj _3517436_37 = R[2];
Obj _3517437_37 = R[3];
Obj _3517438_37 = R[4];
Obj _3517439_37 = R[5];
Obj _3517440_37 = makeNative(co->gc, 1, clofun99, 0, 0);
Obj _3518820_37 = PRIM_ISCONS(_3517439_37);
if (True == _3518820_37) {
Obj _3518821_37 = PRIM_CAR(_3517439_37);
Obj _3518822_37 = PRIM_EQ(getBinding(co, packageID, 62).name, _3518821_37);
if (True == _3518822_37) {
Obj _3518823_37 = PRIM_CDR(_3517439_37);
Obj _3518824_37 = PRIM_ISCONS(_3518823_37);
if (True == _3518824_37) {
Obj _3518825_37 = PRIM_CDR(_3517439_37);
Obj _3518826_37 = PRIM_CAR(_3518825_37);
Obj var = _3518826_37;
Obj _3518827_37 = PRIM_CDR(_3517439_37);
Obj _3518828_37 = PRIM_CDR(_3518827_37);
Obj _3518829_37 = PRIM_ISCONS(_3518828_37);
if (True == _3518829_37) {
Obj _3518830_37 = PRIM_CDR(_3517439_37);
Obj _3518831_37 = PRIM_CDR(_3518830_37);
Obj _3518832_37 = PRIM_CAR(_3518831_37);
Obj body = _3518832_37;
Obj _3518833_37 = PRIM_CDR(_3517439_37);
Obj _3518834_37 = PRIM_CDR(_3518833_37);
Obj _3518835_37 = PRIM_CDR(_3518834_37);
Obj fvs = _3518835_37;
R[1] = var;
R[2] = fvs;
R[3] = _3517435_37;
R[4] = _3517436_37;
R[5] = _3517437_37;
R[6] = _3517438_37;
R[7] = body;
saveCont(co, clofun100, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), _3517438_37, makeCString(co->gc, "Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517440_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517440_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517440_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517440_37);
return;
}
}
case 1:
{
Obj _3518840_37= co->res;
Obj _3517435_37 = R[1];
Obj _3517436_37 = R[2];
Obj _3517437_37 = R[3];
Obj _3517438_37 = R[4];
Obj body = R[5];
co->ctx.sp = R;
Obj __args[5] = {_3517435_37, _3517436_37, _3517437_37, _3517438_37, body};
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
return;
}
case 2:
{
Obj _3518839_37= co->res;
Obj fvs = R[1];
Obj _3517435_37 = R[2];
Obj _3517436_37 = R[3];
Obj _3517437_37 = R[4];
Obj _3517438_37 = R[5];
Obj body = R[6];
R[1] = _3517435_37;
R[2] = _3517436_37;
R[3] = _3517437_37;
R[4] = _3517438_37;
R[5] = body;
saveCont(co, clofun100, 1, R);
Obj __args[5] = {_3517435_37, _3517436_37, _3517437_37, _3517438_37, fvs};
coraCall(co, globalRef(co, getBinding(co, packageID, 45)), 5, __args);
return;
}
case 3:
{
Obj _3518838_37= co->res;
Obj fvs = R[1];
Obj _3517435_37 = R[2];
Obj _3517436_37 = R[3];
Obj _3517437_37 = R[4];
Obj _3517438_37 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = _3517435_37;
R[3] = _3517436_37;
R[4] = _3517437_37;
R[5] = _3517438_37;
R[6] = body;
saveCont(co, clofun100, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), _3517438_37, makeCString(co->gc, "= co->res;\n"));
return;
}
case 4:
{
Obj _3518836_37= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj _3517435_37 = R[3];
Obj _3517436_37 = R[4];
Obj _3517437_37 = R[5];
Obj _3517438_37 = R[6];
Obj body = R[7];
Obj _3518837_37 = PRIM_CAR(var);
R[1] = fvs;
R[2] = _3517435_37;
R[3] = _3517436_37;
R[4] = _3517437_37;
R[5] = _3517438_37;
R[6] = body;
saveCont(co, clofun100, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 44)), _3517438_37, _3518837_37);
return;
}
}
}

static void clofun99(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
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
Obj _3518806_37 = primGenSym(co);
Obj generate_45inst_45list_45h = _3518806_37;
Obj _3518817_37 = primSet(co, generate_45inst_45list_45h, makeNative(co->gc, 2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
saveCont(co, clofun98, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), generate_45inst_45list_45h);
return;
}
case 1:
{
Obj _3518818_37= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, _3518818_37, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3518807_37 = PRIM_EQ(Nil, x);
if (True == _3518807_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518808_37 = PRIM_ISCONS(x);
if (True == _3518808_37) {
Obj _3518809_37 = PRIM_CAR(x);
Obj a = _3518809_37;
Obj _3518810_37 = PRIM_CDR(x);
Obj b = _3518810_37;
R[1] = b;
saveCont(co, clofun97, 5, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), a};
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
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
Obj _3518815_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3518815_37, b);
return;
}
case 2:
{
Obj _3518814_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun97, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518816_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3518816_37, b);
return;
}
case 4:
{
Obj _3518812_37= co->res;
Obj b = R[1];
Obj _3518813_37 = primNot(_3518812_37);
if (True == _3518813_37) {
R[1] = b;
saveCont(co, clofun97, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, ", "));
return;
} else {
Nil;
R[1] = b;
saveCont(co, clofun97, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 4));
return;
}
}
case 5:
{
Obj _3518811_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun97, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), b);
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
Obj _3518519_37 = primGenSym(co);
Obj generate_45inst_45h = _3518519_37;
Obj _3518803_37 = primSet(co, generate_45inst_45h, makeNative(co->gc, 3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
saveCont(co, clofun96, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), generate_45inst_45h);
return;
}
case 1:
{
Obj _3518804_37= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, _3518804_37, x1, env1);
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
Obj _3518520_37 = primIsSymbol(x2);
if (True == _3518520_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 44)), closureRef(R[0], 3), x2);
return;
} else {
Obj _3517421_37 = makeNative(co->gc, 2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj _3518790_37 = PRIM_ISCONS(x2);
if (True == _3518790_37) {
Obj _3518791_37 = PRIM_CAR(x2);
Obj _3518792_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3518791_37);
if (True == _3518792_37) {
Obj _3518793_37 = PRIM_CDR(x2);
Obj _3518794_37 = PRIM_ISCONS(_3518793_37);
if (True == _3518794_37) {
Obj _3518795_37 = PRIM_CDR(x2);
Obj _3518796_37 = PRIM_CAR(_3518795_37);
Obj x = _3518796_37;
Obj _3518797_37 = PRIM_CDR(x2);
Obj _3518798_37 = PRIM_CDR(_3518797_37);
Obj _3518799_37 = PRIM_EQ(Nil, _3518798_37);
if (True == _3518799_37) {
R[1] = x;
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "globalRef(co, getBinding(co, packageID, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517421_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517421_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517421_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517421_37);
return;
}
}
}
case 1:
{
Obj _3518802_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "))"));
return;
}
case 2:
{
Obj _3518801_37= co->res;
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 3), _3518801_37);
return;
}
case 3:
{
Obj _3518800_37= co->res;
Obj x = R[1];
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), x, closureRef(R[0], 2));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517422_37 = makeNative(co->gc, 2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj _3518778_37 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == _3518778_37) {
Obj _3518779_37 = PRIM_CAR(closureRef(R[0], 4));
Obj _3518780_37 = PRIM_EQ(getBinding(co, packageID, 77).name, _3518779_37);
if (True == _3518780_37) {
Obj _3518781_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3518782_37 = PRIM_ISCONS(_3518781_37);
if (True == _3518782_37) {
Obj _3518783_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3518784_37 = PRIM_CAR(_3518783_37);
Obj idx = _3518784_37;
Obj _3518785_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3518786_37 = PRIM_CDR(_3518785_37);
Obj _3518787_37 = PRIM_EQ(Nil, _3518786_37);
if (True == _3518787_37) {
R[1] = idx;
saveCont(co, clofun94, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "closureRef(R[0], "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517422_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517422_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517422_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517422_37);
return;
}
}
case 1:
{
Obj _3518789_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3518788_37= co->res;
Obj idx = R[1];
saveCont(co, clofun94, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), idx);
return;
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517423_37 = makeNative(co->gc, 4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3518754_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3518754_37) {
Obj _3518755_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3518756_37 = PRIM_EQ(getBinding(co, packageID, 96).name, _3518755_37);
if (True == _3518756_37) {
Obj _3518757_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3518758_37 = PRIM_ISCONS(_3518757_37);
if (True == _3518758_37) {
Obj _3518759_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3518760_37 = PRIM_CAR(_3518759_37);
Obj x = _3518760_37;
Obj _3518761_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3518762_37 = PRIM_CDR(_3518761_37);
Obj _3518763_37 = PRIM_EQ(Nil, _3518762_37);
if (True == _3518763_37) {
Obj _3518764_37 = primIsSymbol(x);
if (True == _3518764_37) {
R[1] = x;
saveCont(co, clofun93, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "getBinding(co, packageID, "));
return;
} else {
R[1] = x;
saveCont(co, clofun93, 9, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 83)), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517423_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517423_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517423_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517423_37);
return;
}
}
case 1:
{
Obj _3518767_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ").name"));
return;
}
case 2:
{
Obj _3518766_37= co->res;
saveCont(co, clofun93, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), _3518766_37);
return;
}
case 3:
{
Obj _3518765_37= co->res;
Obj x = R[1];
saveCont(co, clofun93, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3518770_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 5:
{
Obj _3518769_37= co->res;
Obj x = R[1];
saveCont(co, clofun93, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj _3518774_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "\")"));
return;
}
case 7:
{
Obj _3518773_37= co->res;
saveCont(co, clofun93, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), _3518773_37);
return;
}
case 8:
{
Obj _3518772_37= co->res;
Obj x = R[1];
saveCont(co, clofun93, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 41)), x);
return;
}
case 9:
{
Obj _3518768_37= co->res;
Obj x = R[1];
if (True == _3518768_37) {
R[1] = x;
saveCont(co, clofun93, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "MAKE_NUMBER("));
return;
} else {
Obj _3518771_37 = primIsString(x);
if (True == _3518771_37) {
R[1] = x;
saveCont(co, clofun93, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "makeCString(co->gc, \""));
return;
} else {
Obj _3518775_37 = PRIM_EQ(x, Nil);
if (True == _3518775_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "Nil"));
return;
} else {
Obj _3518776_37 = PRIM_EQ(x, True);
if (True == _3518776_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "True"));
return;
} else {
Obj _3518777_37 = PRIM_EQ(x, False);
if (True == _3518777_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "False"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no cond match"));
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
Obj _3517424_37 = makeNative(co->gc, 3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3518719_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518719_37) {
Obj _3518720_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518721_37 = PRIM_EQ(getBinding(co, packageID, 86).name, _3518720_37);
if (True == _3518721_37) {
Obj _3518722_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518723_37 = PRIM_ISCONS(_3518722_37);
if (True == _3518723_37) {
Obj _3518724_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518725_37 = PRIM_CAR(_3518724_37);
Obj a = _3518725_37;
Obj _3518726_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518727_37 = PRIM_CDR(_3518726_37);
Obj _3518728_37 = PRIM_ISCONS(_3518727_37);
if (True == _3518728_37) {
Obj _3518729_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518730_37 = PRIM_CDR(_3518729_37);
Obj _3518731_37 = PRIM_CAR(_3518730_37);
Obj b = _3518731_37;
Obj _3518732_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518733_37 = PRIM_CDR(_3518732_37);
Obj _3518734_37 = PRIM_CDR(_3518733_37);
Obj _3518735_37 = PRIM_ISCONS(_3518734_37);
if (True == _3518735_37) {
Obj _3518736_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518737_37 = PRIM_CDR(_3518736_37);
Obj _3518738_37 = PRIM_CDR(_3518737_37);
Obj _3518739_37 = PRIM_CAR(_3518738_37);
Obj c = _3518739_37;
Obj _3518740_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518741_37 = PRIM_CDR(_3518740_37);
Obj _3518742_37 = PRIM_CDR(_3518741_37);
Obj _3518743_37 = PRIM_CDR(_3518742_37);
Obj _3518744_37 = PRIM_EQ(Nil, _3518743_37);
if (True == _3518744_37) {
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 124)), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517424_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517424_37);
return;
}
}
case 1:
{
Obj _3518752_37= co->res;
Obj a = R[1];
Obj c = R[2];
Obj _3518753_37 = makeCons(co->gc, a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, _3518752_37, c, _3518753_37);
return;
}
case 2:
{
Obj _3518751_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518750_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj _3518749_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 3, R);
coraCall2(co, _3518749_37, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj _3518748_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3518747_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, " = "));
return;
}
case 7:
{
Obj _3518746_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 44)), closureRef(R[0], 3), a);
return;
}
case 8:
{
Obj _3518745_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517425_37 = makeNative(co->gc, 4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518689_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3518689_37) {
Obj _3518690_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518691_37 = PRIM_ISCONS(_3518690_37);
if (True == _3518691_37) {
Obj _3518692_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518693_37 = PRIM_CAR(_3518692_37);
Obj _3518694_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3518693_37);
if (True == _3518694_37) {
Obj _3518695_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518696_37 = PRIM_CDR(_3518695_37);
Obj _3518697_37 = PRIM_ISCONS(_3518696_37);
if (True == _3518697_37) {
Obj _3518698_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518699_37 = PRIM_CDR(_3518698_37);
Obj _3518700_37 = PRIM_CAR(_3518699_37);
Obj f = _3518700_37;
Obj _3518701_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518702_37 = PRIM_CDR(_3518701_37);
Obj _3518703_37 = PRIM_CDR(_3518702_37);
Obj _3518704_37 = PRIM_EQ(Nil, _3518703_37);
if (True == _3518704_37) {
Obj _3518705_37 = PRIM_CDR(closureRef(R[0], 1));
Obj args = _3518705_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun91, 10, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 102)), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517425_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517425_37);
return;
}
}
case 1:
{
Obj _3518710_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3518709_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 3:
{
Obj _3518713_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 4:
{
Obj _3518712_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 3, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 5:
{
Obj _3518716_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 6:
{
Obj _3518715_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 5, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 7:
{
Obj _3518718_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 8:
{
Obj _3518717_37= co->res;
Obj args = R[1];
saveCont(co, clofun91, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 9:
{
Obj _3518707_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3518708_37 = PRIM_EQ(f, getBinding(co, packageID, 121).name);
if (True == _3518708_37) {
R[1] = args;
saveCont(co, clofun91, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
} else {
Obj _3518711_37 = PRIM_EQ(f, getBinding(co, packageID, 109).name);
if (True == _3518711_37) {
R[1] = args;
saveCont(co, clofun91, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "(co"));
return;
} else {
Obj _3518714_37 = PRIM_EQ(f, getBinding(co, packageID, 118).name);
if (True == _3518714_37) {
R[1] = args;
saveCont(co, clofun91, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "(co->gc, "));
return;
} else {
R[1] = args;
saveCont(co, clofun91, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "("));
return;
}
}
}
}
case 10:
{
Obj _3518706_37= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
saveCont(co, clofun91, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), _3518706_37);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517426_37 = makeNative(co->gc, 5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518654_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518654_37) {
Obj _3518655_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518656_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3518655_37);
if (True == _3518656_37) {
Obj _3518657_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518658_37 = PRIM_ISCONS(_3518657_37);
if (True == _3518658_37) {
Obj _3518659_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518660_37 = PRIM_CAR(_3518659_37);
Obj a = _3518660_37;
Obj _3518661_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518662_37 = PRIM_CDR(_3518661_37);
Obj _3518663_37 = PRIM_ISCONS(_3518662_37);
if (True == _3518663_37) {
Obj _3518664_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518665_37 = PRIM_CDR(_3518664_37);
Obj _3518666_37 = PRIM_CAR(_3518665_37);
Obj b = _3518666_37;
Obj _3518667_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518668_37 = PRIM_CDR(_3518667_37);
Obj _3518669_37 = PRIM_CDR(_3518668_37);
Obj _3518670_37 = PRIM_ISCONS(_3518669_37);
if (True == _3518670_37) {
Obj _3518671_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518672_37 = PRIM_CDR(_3518671_37);
Obj _3518673_37 = PRIM_CDR(_3518672_37);
Obj _3518674_37 = PRIM_CAR(_3518673_37);
Obj c = _3518674_37;
Obj _3518675_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518676_37 = PRIM_CDR(_3518675_37);
Obj _3518677_37 = PRIM_CDR(_3518676_37);
Obj _3518678_37 = PRIM_CDR(_3518677_37);
Obj _3518679_37 = PRIM_EQ(Nil, _3518678_37);
if (True == _3518679_37) {
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun90, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "if (True == "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517426_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517426_37);
return;
}
}
case 1:
{
Obj _3518688_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "}\n"));
return;
}
case 2:
{
Obj _3518687_37= co->res;
Obj c = R[1];
saveCont(co, clofun90, 1, R);
coraCall2(co, _3518687_37, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518686_37= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun90, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3518685_37= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun90, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "} else {\n"));
return;
}
case 5:
{
Obj _3518684_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
saveCont(co, clofun90, 4, R);
coraCall2(co, _3518684_37, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3518683_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 3));
return;
}
case 7:
{
Obj _3518682_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ") {\n"));
return;
}
case 8:
{
Obj _3518681_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 7, R);
coraCall2(co, _3518681_37, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj _3518680_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun90, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 3));
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517427_37 = makeNative(co->gc, 3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj _3518616_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3518616_37) {
Obj _3518617_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518618_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3518617_37);
if (True == _3518618_37) {
Obj _3518619_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518620_37 = PRIM_ISCONS(_3518619_37);
if (True == _3518620_37) {
Obj _3518621_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518622_37 = PRIM_CAR(_3518621_37);
Obj label = _3518622_37;
Obj _3518623_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518624_37 = PRIM_CDR(_3518623_37);
Obj _3518625_37 = PRIM_ISCONS(_3518624_37);
if (True == _3518625_37) {
Obj _3518626_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518627_37 = PRIM_CDR(_3518626_37);
Obj _3518628_37 = PRIM_CAR(_3518627_37);
Obj nargs = _3518628_37;
Obj _3518629_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518630_37 = PRIM_CDR(_3518629_37);
Obj _3518631_37 = PRIM_CDR(_3518630_37);
Obj _3518632_37 = PRIM_ISCONS(_3518631_37);
if (True == _3518632_37) {
Obj _3518633_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518634_37 = PRIM_CDR(_3518633_37);
Obj _3518635_37 = PRIM_CDR(_3518634_37);
Obj _3518636_37 = PRIM_CAR(_3518635_37);
Obj nframe = _3518636_37;
Obj _3518637_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518638_37 = PRIM_CDR(_3518637_37);
Obj _3518639_37 = PRIM_CDR(_3518638_37);
Obj _3518640_37 = PRIM_CDR(_3518639_37);
Obj frees = _3518640_37;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
saveCont(co, clofun89, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "makeNative(co->gc, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517427_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517427_37);
return;
}
}
case 1:
{
Obj _3518653_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj _3518652_37= co->res;
Obj frees = R[1];
saveCont(co, clofun89, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 3:
{
Obj _3518650_37= co->res;
Obj frees = R[1];
Obj _3518651_37 = primNot(_3518650_37);
if (True == _3518651_37) {
R[1] = frees;
saveCont(co, clofun89, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
}
case 4:
{
Obj _3518649_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), frees);
return;
}
case 5:
{
Obj _3518648_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), _3518648_37);
return;
}
case 6:
{
Obj _3518647_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), frees);
return;
}
case 7:
{
Obj _3518646_37= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 8:
{
Obj _3518645_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
saveCont(co, clofun89, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), nargs);
return;
}
case 9:
{
Obj _3518644_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun89, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 10:
{
Obj _3518643_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun89, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 42)), closureRef(R[0], 5), label);
return;
}
case 11:
{
Obj _3518642_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun89, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 12:
{
Obj _3518641_37= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun89, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), nframe);
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517428_37 = makeNative(co->gc, 2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3518595_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518595_37) {
Obj _3518596_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518597_37 = PRIM_EQ(getBinding(co, packageID, 85).name, _3518596_37);
if (True == _3518597_37) {
Obj _3518598_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518599_37 = PRIM_ISCONS(_3518598_37);
if (True == _3518599_37) {
Obj _3518600_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518601_37 = PRIM_CAR(_3518600_37);
Obj a = _3518601_37;
Obj _3518602_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518603_37 = PRIM_CDR(_3518602_37);
Obj _3518604_37 = PRIM_ISCONS(_3518603_37);
if (True == _3518604_37) {
Obj _3518605_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518606_37 = PRIM_CDR(_3518605_37);
Obj _3518607_37 = PRIM_CAR(_3518606_37);
Obj b = _3518607_37;
Obj _3518608_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518609_37 = PRIM_CDR(_3518608_37);
Obj _3518610_37 = PRIM_CDR(_3518609_37);
Obj _3518611_37 = PRIM_EQ(Nil, _3518610_37);
if (True == _3518611_37) {
R[1] = a;
R[2] = b;
saveCont(co, clofun88, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517428_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517428_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517428_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517428_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517428_37);
return;
}
}
case 1:
{
Obj _3518615_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, _3518615_37, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj _3518614_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun88, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518613_37= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun88, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj _3518612_37= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
saveCont(co, clofun88, 3, R);
coraCall2(co, _3518612_37, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517429_37 = makeNative(co->gc, 2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518581_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518581_37) {
Obj _3518582_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518583_37 = PRIM_EQ(getBinding(co, packageID, 72).name, _3518582_37);
if (True == _3518583_37) {
Obj _3518584_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518585_37 = PRIM_ISCONS(_3518584_37);
if (True == _3518585_37) {
Obj _3518586_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518587_37 = PRIM_CAR(_3518586_37);
Obj x = _3518587_37;
Obj _3518588_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518589_37 = PRIM_CDR(_3518588_37);
Obj _3518590_37 = PRIM_EQ(Nil, _3518589_37);
if (True == _3518590_37) {
R[1] = x;
saveCont(co, clofun87, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517429_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517429_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517429_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517429_37);
return;
}
}
case 1:
{
Obj _3518594_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3518593_37= co->res;
saveCont(co, clofun87, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 3:
{
Obj _3518592_37= co->res;
Obj x = R[1];
saveCont(co, clofun87, 2, R);
coraCall2(co, _3518592_37, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3518591_37= co->res;
Obj x = R[1];
R[1] = x;
saveCont(co, clofun87, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 3));
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517430_37 = makeNative(co->gc, 3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518568_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518568_37) {
Obj _3518569_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518570_37 = PRIM_EQ(getBinding(co, packageID, 74).name, _3518569_37);
if (True == _3518570_37) {
Obj _3518571_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518572_37 = PRIM_ISCONS(_3518571_37);
if (True == _3518572_37) {
Obj _3518573_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518574_37 = PRIM_CAR(_3518573_37);
Obj exp = _3518574_37;
Obj _3518575_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518576_37 = PRIM_CDR(_3518575_37);
Obj _3518577_37 = PRIM_EQ(Nil, _3518576_37);
if (True == _3518577_37) {
R[1] = exp;
saveCont(co, clofun86, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517430_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517430_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517430_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517430_37);
return;
}
}
case 1:
{
Obj _3518580_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3518579_37= co->res;
Obj exp = R[1];
saveCont(co, clofun86, 1, R);
coraCall2(co, _3518579_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518578_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun86, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 3));
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517431_37 = makeNative(co->gc, 4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518544_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518544_37) {
Obj _3518545_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518546_37 = PRIM_EQ(getBinding(co, packageID, 73).name, _3518545_37);
if (True == _3518546_37) {
Obj _3518547_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518548_37 = PRIM_ISCONS(_3518547_37);
if (True == _3518548_37) {
Obj _3518549_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518550_37 = PRIM_CAR(_3518549_37);
Obj exp = _3518550_37;
Obj _3518551_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518552_37 = PRIM_CDR(_3518551_37);
Obj _3518553_37 = PRIM_ISCONS(_3518552_37);
if (True == _3518553_37) {
Obj _3518554_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518555_37 = PRIM_CDR(_3518554_37);
Obj _3518556_37 = PRIM_CAR(_3518555_37);
Obj label = _3518556_37;
Obj _3518557_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518558_37 = PRIM_CDR(_3518557_37);
Obj _3518559_37 = PRIM_CDR(_3518558_37);
Obj fvs = _3518559_37;
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 8, R);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517431_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517431_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517431_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517431_37);
return;
}
}
case 1:
{
Obj _3518567_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj _3518566_37= co->res;
Obj exp = R[1];
saveCont(co, clofun85, 1, R);
coraCall2(co, _3518566_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518565_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun85, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3518564_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun85, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", R);\n"));
return;
}
case 5:
{
Obj _3518563_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun85, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), label);
return;
}
case 6:
{
Obj _3518562_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 7:
{
Obj _3518561_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 42)), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 8:
{
Obj _3518560_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "saveCont(co, "));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518521_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518521_37) {
Obj _3518522_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518522_37;
Obj _3518523_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518523_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun84, 18, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3518535_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", __args);\n"));
return;
}
case 2:
{
Obj _3518534_37= co->res;
Obj nargs = R[1];
saveCont(co, clofun84, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), nargs);
return;
}
case 3:
{
Obj _3518533_37= co->res;
Obj nargs = R[1];
R[1] = nargs;
saveCont(co, clofun84, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 4:
{
Obj _3518532_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = nargs;
saveCont(co, clofun84, 3, R);
coraCall2(co, _3518532_37, f, closureRef(R[0], 4));
return;
}
case 5:
{
Obj _3518531_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 1));
return;
}
case 6:
{
Obj _3518530_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "coraCall(co, "));
return;
}
case 7:
{
Obj _3518529_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "};\n"));
return;
}
case 8:
{
Obj _3518528_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 9:
{
Obj _3518527_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "] = {"));
return;
}
case 10:
{
Obj _3518526_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), nargs);
return;
}
case 11:
{
Obj _3518543_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 12:
{
Obj _3518542_37= co->res;
Obj args = R[1];
saveCont(co, clofun84, 11, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 43)), 5, __args);
return;
}
case 13:
{
Obj _3518540_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518541_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518541_37) {
R[1] = args;
saveCont(co, clofun84, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
}
case 14:
{
Obj _3518539_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
saveCont(co, clofun84, 13, R);
coraCall2(co, _3518539_37, f, closureRef(R[0], 4));
return;
}
case 15:
{
Obj _3518538_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 14, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), closureRef(R[0], 1));
return;
}
case 16:
{
Obj _3518537_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 15, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
}
case 17:
{
Obj _3518536_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 16, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 5), nargs);
return;
}
case 18:
{
Obj _3518524_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = _3518524_37;
Obj _3518525_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518525_37) {
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "Obj __args["));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 17, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), makeCString(co->gc, "coraCall"));
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), makeNative(co->gc, 3, clofun82, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
case 1:
{
Obj _3518516_37= co->res;
Obj acc = R[1];
Obj _3518517_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518517_37);
return;
}
case 2:
{
Obj _3518515_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "];\n"));
return;
}
case 3:
{
Obj _3518514_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj _3518513_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, " = R["));
return;
}
case 5:
{
Obj _3518512_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun82, 4, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), makeNative(co->gc, 3, clofun80, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "R["));
return;
}
case 1:
{
Obj _3518509_37= co->res;
Obj acc = R[1];
Obj _3518510_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518510_37);
return;
}
case 2:
{
Obj _3518508_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj _3518507_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun80, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
return;
}
case 4:
{
Obj _3518506_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 3), makeCString(co->gc, "] = "));
return;
}
case 5:
{
Obj _3518505_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 47)), closureRef(R[0], 3), acc);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 51)), MAKE_NUMBER(0), sym, globals);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), globals);
return;
}
case 1:
{
Obj _3518498_37= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == _3518498_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3518499_37 = PRIM_CAR(globals);
Obj _3518500_37 = PRIM_EQ(sym, _3518499_37);
if (True == _3518500_37) {
coraReturn(co, idx);
return;
} else {
Obj _3518501_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3518502_37 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 51)), _3518501_37, sym, _3518502_37);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 52)), globals);
return;
}
case 1:
{
Obj _3518494_37= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == _3518494_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518495_37 = makeCons(co->gc, sym, val);
Obj _3518496_37 = primSet(co, globals, _3518495_37);
coraReturn(co, _3518496_37);
return;
}
}
case 2:
{
Obj _3518493_37= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = _3518493_37;
R[1] = sym;
R[2] = val;
R[3] = globals;
saveCont(co, clofun77, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 95)), sym, val);
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
Obj _3518486_37 = primGenSym(co);
Obj tmp = _3518486_37;
R[1] = x;
R[2] = tmp;
saveCont(co, clofun76, 1, R);
coraCall1(co, k, tmp);
return;
}
case 1:
{
Obj _3518487_37= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj _3518488_37 = makeCons(co->gc, _3518487_37, Nil);
Obj _3518489_37 = makeCons(co->gc, x, _3518488_37);
Obj _3518490_37 = makeCons(co->gc, tmp, _3518489_37);
Obj _3518491_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3518490_37);
coraReturn(co, _3518491_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 55)), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj _3518484_37= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 53)), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj _3518479_37= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = _3518479_37;
Obj _3518480_37 = makeCons(co->gc, val, Nil);
Obj _3518481_37 = makeCons(co->gc, idx, _3518480_37);
Obj _3518482_37 = makeCons(co->gc, _3518481_37, cur);
Obj cur1 = _3518482_37;
Obj _3518483_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
saveCont(co, clofun75, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 53)), v, MAKE_NUMBER(0), _3518483_37);
return;
}
case 3:
{
Obj _3518478_37= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = _3518478_37;
R[1] = val;
R[2] = idx;
R[3] = v;
saveCont(co, clofun75, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 55)), v, MAKE_NUMBER(1));
return;
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517416_37 = R[1];
Obj _3517417_37 = R[2];
Obj _3517418_37 = makeNative(co->gc, 1, clofun73, 0, 2, _3517416_37, _3517417_37);
Obj _3518429_37 = PRIM_ISCONS(_3517417_37);
if (True == _3518429_37) {
Obj _3518430_37 = PRIM_CAR(_3517417_37);
Obj _3518431_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3518430_37);
if (True == _3518431_37) {
Obj _3518432_37 = PRIM_CDR(_3517417_37);
Obj _3518433_37 = PRIM_ISCONS(_3518432_37);
if (True == _3518433_37) {
Obj _3518434_37 = PRIM_CDR(_3517417_37);
Obj _3518435_37 = PRIM_CAR(_3518434_37);
Obj _3518436_37 = PRIM_ISCONS(_3518435_37);
if (True == _3518436_37) {
Obj _3518437_37 = PRIM_CDR(_3517417_37);
Obj _3518438_37 = PRIM_CAR(_3518437_37);
Obj _3518439_37 = PRIM_CAR(_3518438_37);
Obj _3518440_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3518439_37);
if (True == _3518440_37) {
Obj _3518441_37 = PRIM_CDR(_3517417_37);
Obj _3518442_37 = PRIM_CAR(_3518441_37);
Obj _3518443_37 = PRIM_CDR(_3518442_37);
Obj _3518444_37 = PRIM_ISCONS(_3518443_37);
if (True == _3518444_37) {
Obj _3518445_37 = PRIM_CDR(_3517417_37);
Obj _3518446_37 = PRIM_CAR(_3518445_37);
Obj _3518447_37 = PRIM_CDR(_3518446_37);
Obj _3518448_37 = PRIM_CAR(_3518447_37);
Obj params = _3518448_37;
Obj _3518449_37 = PRIM_CDR(_3517417_37);
Obj _3518450_37 = PRIM_CAR(_3518449_37);
Obj _3518451_37 = PRIM_CDR(_3518450_37);
Obj _3518452_37 = PRIM_CDR(_3518451_37);
Obj _3518453_37 = PRIM_ISCONS(_3518452_37);
if (True == _3518453_37) {
Obj _3518454_37 = PRIM_CDR(_3517417_37);
Obj _3518455_37 = PRIM_CAR(_3518454_37);
Obj _3518456_37 = PRIM_CDR(_3518455_37);
Obj _3518457_37 = PRIM_CDR(_3518456_37);
Obj _3518458_37 = PRIM_CAR(_3518457_37);
Obj body = _3518458_37;
Obj _3518459_37 = PRIM_CDR(_3517417_37);
Obj _3518460_37 = PRIM_CAR(_3518459_37);
Obj _3518461_37 = PRIM_CDR(_3518460_37);
Obj _3518462_37 = PRIM_CDR(_3518461_37);
Obj _3518463_37 = PRIM_CDR(_3518462_37);
Obj _3518464_37 = PRIM_EQ(Nil, _3518463_37);
if (True == _3518464_37) {
Obj _3518465_37 = PRIM_CDR(_3517417_37);
Obj _3518466_37 = PRIM_CDR(_3518465_37);
Obj fvs = _3518466_37;
R[1] = _3517416_37;
R[2] = params;
R[3] = fvs;
saveCont(co, clofun74, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), _3517416_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517418_37);
return;
}
}
case 1:
{
Obj _3518472_37= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj _3518473_37 = makeCons(co->gc, nframe, fvs);
Obj _3518474_37 = makeCons(co->gc, _3518472_37, _3518473_37);
Obj _3518475_37 = makeCons(co->gc, cur, _3518474_37);
Obj _3518476_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3518475_37);
coraReturn(co, _3518476_37);
return;
}
case 2:
{
Obj _3518471_37= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
saveCont(co, clofun74, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), params);
return;
}
case 3:
{
Obj _3518470_37= co->res;
Obj _3517416_37 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = _3518470_37;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun74, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), _3517416_37, body2);
return;
}
case 4:
{
Obj _3518469_37= co->res;
Obj _3517416_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = _3518469_37;
R[1] = _3517416_37;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
saveCont(co, clofun74, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 57)), body2);
return;
}
case 5:
{
Obj _3518468_37= co->res;
Obj body1 = R[1];
Obj _3517416_37 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = _3518468_37;
R[1] = _3517416_37;
R[2] = params;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun74, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 58)), params, body1);
return;
}
case 6:
{
Obj _3518467_37= co->res;
Obj _3517416_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = _3518467_37;
R[1] = body1;
R[2] = _3517416_37;
R[3] = params;
R[4] = fvs;
saveCont(co, clofun74, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 55)), _3517416_37, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518427_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3518427_37) {
saveCont(co, clofun73, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 56)), closureRef(R[0], 0));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3518428_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3518428_37, closureRef(R[0], 1));
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 99)), lam);
return;
}
case 1:
{
Obj _3518425_37= co->res;
Obj _3518424_37 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), makeNative(co->gc, 3, clofun71, 2, 0), _3518424_37, _3518425_37);
return;
}
case 2:
{
Obj _3518419_37= co->res;
Obj lam = R[1];
Obj nargs = _3518419_37;
Obj _3518424_37 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = _3518424_37;
saveCont(co, clofun72, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 59)), lam);
return;
}
case 3:
{
Obj _3518418_37= co->res;
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun72, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), _3518418_37);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 59)), x);
return;
}
case 1:
{
Obj _3518421_37= co->res;
Obj acc = R[1];
Obj _3518422_37 = PRIM_ADD(_3518421_37, MAKE_NUMBER(1));
Obj len = _3518422_37;
Obj _3518423_37 = PRIM_GT(len, acc);
if (True == _3518423_37) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj _3518420_37= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), _3518420_37);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 61)), body, Nil, makeNative(co->gc, 3, clofun69, 2, 1, params));
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 67)), conts);
return;
}
case 1:
{
Obj _3518413_37= co->res;
Obj body1 = R[1];
Obj _3518414_37 = makeCons(co->gc, body1, _3518413_37);
Obj _3518415_37 = makeCons(co->gc, closureRef(R[0], 0), _3518414_37);
Obj _3518416_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3518415_37);
coraReturn(co, _3518416_37);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517410_37 = R[1];
Obj _3517411_37 = R[2];
Obj _3517412_37 = R[3];
Obj _3517413_37 = R[4];
Obj _3518407_37 = PRIM_EQ(Nil, _3517410_37);
if (True == _3518407_37) {
co->ctx.sp = R;
coraCall2(co, _3517413_37, _3517412_37, _3517411_37);
return;
} else {
Obj _3518408_37 = PRIM_ISCONS(_3517410_37);
if (True == _3518408_37) {
Obj _3518409_37 = PRIM_CAR(_3517410_37);
Obj f = _3518409_37;
Obj _3518410_37 = PRIM_CDR(_3517410_37);
Obj args = _3518410_37;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 61)), f, _3517411_37, makeNative(co->gc, 3, clofun67, 2, 3, args, _3517412_37, _3517413_37));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
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
coraCall4(co, globalRef(co, getBinding(co, packageID, 60)), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative(co->gc, 3, clofun66, 2, 2, closureRef(R[0], 2), f1));
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
Obj _3518411_37 = makeCons(co->gc, closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3518411_37, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517404_37 = R[1];
Obj _3517405_37 = R[2];
Obj _3517406_37 = R[3];
Obj _3517480_37 = makeNative(co->gc, 2, clofun64, 1, 3, _3517404_37, _3517405_37, _3517406_37);
Obj _3518404_37 = primIsSymbol(_3517404_37);
if (True == _3518404_37) {
co->ctx.sp = R;
coraCall1(co, _3517480_37, True);
return;
} else {
R[1] = _3517480_37;
saveCont(co, clofun65, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 79)), _3517404_37);
return;
}
}
case 1:
{
Obj _3518405_37= co->res;
Obj _3517480_37 = R[1];
if (True == _3518405_37) {
co->ctx.sp = R;
coraCall1(co, _3517480_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517480_37, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517481_37 = R[1];
if (True == _3517481_37) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3517408_37 = makeNative(co->gc, 1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3518380_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518380_37) {
Obj _3518381_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518382_37 = PRIM_EQ(getBinding(co, packageID, 73).name, _3518381_37);
if (True == _3518382_37) {
Obj _3518383_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518384_37 = PRIM_ISCONS(_3518383_37);
if (True == _3518384_37) {
Obj _3518385_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518386_37 = PRIM_CAR(_3518385_37);
Obj exp = _3518386_37;
Obj _3518387_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518388_37 = PRIM_CDR(_3518387_37);
Obj _3518389_37 = PRIM_ISCONS(_3518388_37);
if (True == _3518389_37) {
Obj _3518390_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518391_37 = PRIM_CDR(_3518390_37);
Obj _3518392_37 = PRIM_CAR(_3518391_37);
Obj cont = _3518392_37;
Obj _3518393_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518394_37 = PRIM_CDR(_3518393_37);
Obj _3518395_37 = PRIM_CDR(_3518394_37);
Obj _3518396_37 = PRIM_EQ(Nil, _3518395_37);
if (True == _3518396_37) {
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 61)), cont, closureRef(R[0], 1), makeNative(co->gc, 4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517408_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517408_37);
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
coraCall1(co, globalRef(co, getBinding(co, packageID, 59)), cont1);
return;
}
case 1:
{
Obj _3518398_37= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj _3518399_37 = PRIM_ADD(_3518398_37, MAKE_NUMBER(1));
Obj _3518400_37 = makeCons(co->gc, _3518399_37, fvs);
Obj _3518401_37 = makeCons(co->gc, closureRef(R[0], 1), _3518400_37);
Obj _3518402_37 = makeCons(co->gc, getBinding(co, packageID, 73).name, _3518401_37);
Obj _3518403_37 = makeCons(co->gc, cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3518402_37, _3518403_37);
return;
}
case 2:
{
Obj _3518397_37= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = _3518397_37;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), conts1);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518376_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518376_37) {
Obj _3518377_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518377_37;
Obj _3518378_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518378_37;
Obj _3518379_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 60)), _3518379_37, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517396_37 = R[1];
Obj _3517397_37 = R[2];
R[1] = _3517397_37;
R[2] = _3517396_37;
saveCont(co, clofun61, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 79)), _3517397_37);
return;
}
case 1:
{
Obj _3518371_37= co->res;
Obj args = R[1];
Obj _3518372_37 = makeCons(co->gc, _3518371_37, Nil);
Obj _3518373_37 = makeCons(co->gc, args, _3518372_37);
Obj _3518374_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3518373_37);
coraReturn(co, _3518374_37);
return;
}
case 2:
{
Obj _3518299_37= co->res;
Obj _3517397_37 = R[1];
Obj _3517396_37 = R[2];
if (True == _3518299_37) {
coraReturn(co, _3517397_37);
return;
} else {
Obj _3518300_37 = primIsSymbol(_3517397_37);
if (True == _3518300_37) {
coraReturn(co, _3517397_37);
return;
} else {
Obj _3517400_37 = makeNative(co->gc, 4, clofun60, 0, 2, _3517397_37, _3517396_37);
Obj _3518354_37 = PRIM_ISCONS(_3517397_37);
if (True == _3518354_37) {
Obj _3518355_37 = PRIM_CAR(_3517397_37);
Obj _3518356_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3518355_37);
if (True == _3518356_37) {
Obj _3518357_37 = PRIM_CDR(_3517397_37);
Obj _3518358_37 = PRIM_ISCONS(_3518357_37);
if (True == _3518358_37) {
Obj _3518359_37 = PRIM_CDR(_3517397_37);
Obj _3518360_37 = PRIM_CAR(_3518359_37);
Obj args = _3518360_37;
Obj _3518361_37 = PRIM_CDR(_3517397_37);
Obj _3518362_37 = PRIM_CDR(_3518361_37);
Obj _3518363_37 = PRIM_ISCONS(_3518362_37);
if (True == _3518363_37) {
Obj _3518364_37 = PRIM_CDR(_3517397_37);
Obj _3518365_37 = PRIM_CDR(_3518364_37);
Obj _3518366_37 = PRIM_CAR(_3518365_37);
Obj body = _3518366_37;
Obj _3518367_37 = PRIM_CDR(_3517397_37);
Obj _3518368_37 = PRIM_CDR(_3518367_37);
Obj _3518369_37 = PRIM_CDR(_3518368_37);
Obj _3518370_37 = PRIM_EQ(Nil, _3518369_37);
if (True == _3518370_37) {
R[1] = args;
saveCont(co, clofun61, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 63)), _3517396_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517400_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517400_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517400_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517400_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517400_37);
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
Obj _3517401_37 = makeNative(co->gc, 3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518329_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518329_37) {
Obj _3518330_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518331_37 = PRIM_EQ(getBinding(co, packageID, 75).name, _3518330_37);
if (True == _3518331_37) {
Obj _3518332_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518333_37 = PRIM_ISCONS(_3518332_37);
if (True == _3518333_37) {
Obj _3518334_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518335_37 = PRIM_CAR(_3518334_37);
Obj val = _3518335_37;
Obj _3518336_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518337_37 = PRIM_CDR(_3518336_37);
Obj _3518338_37 = PRIM_ISCONS(_3518337_37);
if (True == _3518338_37) {
Obj _3518339_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518340_37 = PRIM_CDR(_3518339_37);
Obj _3518341_37 = PRIM_CAR(_3518340_37);
Obj body = _3518341_37;
Obj _3518342_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518343_37 = PRIM_CDR(_3518342_37);
Obj _3518344_37 = PRIM_CDR(_3518343_37);
Obj _3518345_37 = PRIM_EQ(Nil, _3518344_37);
if (True == _3518345_37) {
R[1] = body;
R[2] = val;
saveCont(co, clofun60, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517401_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517401_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517401_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517401_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517401_37);
return;
}
}
case 1:
{
Obj _3518350_37= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj _3518351_37 = makeCons(co->gc, _3518350_37, fvs2);
Obj _3518352_37 = makeCons(co->gc, val, _3518351_37);
Obj _3518353_37 = makeCons(co->gc, getBinding(co, packageID, 62).name, _3518352_37);
coraReturn(co, _3518353_37);
return;
}
case 2:
{
Obj _3518349_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = _3518349_37;
R[1] = fvs2;
R[2] = val;
saveCont(co, clofun60, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 63)), fvs1, body);
return;
}
case 3:
{
Obj _3518348_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun60, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3518348_37, fvs1);
return;
}
case 4:
{
Obj _3518347_37= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = _3518347_37;
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 63)), closureRef(R[0], 1));
return;
}
case 5:
{
Obj _3518346_37= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
saveCont(co, clofun60, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 80)), _3518346_37, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517402_37 = makeNative(co->gc, 3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518306_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518306_37) {
Obj _3518307_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518308_37 = PRIM_EQ(getBinding(co, packageID, 73).name, _3518307_37);
if (True == _3518308_37) {
Obj _3518309_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518310_37 = PRIM_ISCONS(_3518309_37);
if (True == _3518310_37) {
Obj _3518311_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518312_37 = PRIM_CAR(_3518311_37);
Obj exp = _3518312_37;
Obj _3518313_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518314_37 = PRIM_CDR(_3518313_37);
Obj _3518315_37 = PRIM_ISCONS(_3518314_37);
if (True == _3518315_37) {
Obj _3518316_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518317_37 = PRIM_CDR(_3518316_37);
Obj _3518318_37 = PRIM_CAR(_3518317_37);
Obj cont = _3518318_37;
Obj _3518319_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518320_37 = PRIM_CDR(_3518319_37);
Obj _3518321_37 = PRIM_CDR(_3518320_37);
Obj _3518322_37 = PRIM_EQ(Nil, _3518321_37);
if (True == _3518322_37) {
R[1] = exp;
R[2] = cont;
saveCont(co, clofun59, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 63)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517402_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517402_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517402_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517402_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517402_37);
return;
}
}
case 1:
{
Obj _3518325_37= co->res;
Obj _3518324_37 = R[1];
Obj _3518326_37 = makeCons(co->gc, _3518325_37, Nil);
Obj _3518327_37 = makeCons(co->gc, _3518324_37, _3518326_37);
Obj _3518328_37 = makeCons(co->gc, getBinding(co, packageID, 73).name, _3518327_37);
coraReturn(co, _3518328_37);
return;
}
case 2:
{
Obj _3518324_37= co->res;
Obj cont = R[1];
R[1] = _3518324_37;
saveCont(co, clofun59, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 63)), closureRef(R[0], 1), cont);
return;
}
case 3:
{
Obj _3518323_37= co->res;
Obj exp = R[1];
Obj cont = R[2];
R[1] = cont;
saveCont(co, clofun59, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3518323_37, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518301_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518301_37) {
Obj _3518302_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518302_37;
Obj _3518303_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518303_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 63)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3518304_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3518305_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3518304_37, _3518305_37);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517391_37 = R[1];
Obj _3517392_37 = R[2];
Obj _3517393_37 = R[3];
Obj _3518276_37 = PRIM_EQ(Nil, _3517391_37);
if (True == _3518276_37) {
R[1] = _3517393_37;
saveCont(co, clofun57, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 67)), _3517392_37);
return;
} else {
Obj _3518294_37 = PRIM_ISCONS(_3517391_37);
if (True == _3518294_37) {
Obj _3518295_37 = PRIM_CAR(_3517391_37);
Obj hd = _3518295_37;
Obj _3518296_37 = PRIM_CDR(_3517391_37);
Obj tl = _3518296_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), hd, makeNative(co->gc, 2, clofun56, 1, 3, tl, _3517392_37, _3517393_37));
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
Obj _3518292_37= co->res;
Obj _3517478_37 = R[1];
Obj _3518293_37 = PRIM_EQ(_3518292_37, getBinding(co, packageID, 90).name);
if (True == _3518293_37) {
co->ctx.sp = R;
coraCall1(co, _3517478_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517478_37, False);
return;
}
}
case 2:
{
Obj _3518291_37= co->res;
Obj exp = R[1];
Obj _3517478_37 = R[2];
if (True == _3518291_37) {
R[1] = _3517478_37;
saveCont(co, clofun57, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 64)), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517478_37, False);
return;
}
}
case 3:
{
Obj _3518277_37= co->res;
Obj _3517393_37 = R[1];
Obj exp = _3518277_37;
Obj _3517478_37 = makeNative(co->gc, 2, clofun55, 1, 2, exp, _3517393_37);
Obj _3518290_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3517478_37;
saveCont(co, clofun57, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), _3518290_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj _3518297_37 = makeCons(co->gc, hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 68)), closureRef(R[0], 0), _3518297_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517479_37 = R[1];
if (True == _3517479_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 66)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3518278_37 = PRIM_EQ(closureRef(R[0], 1), globalRef(co, getBinding(co, packageID, 70)));
if (True == _3518278_37) {
Obj _3518279_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3518280_37 = makeCons(co->gc, getBinding(co, packageID, 74).name, _3518279_37);
coraReturn(co, _3518280_37);
return;
} else {
Obj _3518281_37 = primGenSym(co);
Obj val = _3518281_37;
Obj _3518282_37 = makeCons(co->gc, val, Nil);
R[1] = _3518282_37;
saveCont(co, clofun55, 1, R);
coraCall1(co, closureRef(R[0], 1), val);
return;
}
}
}
case 1:
{
Obj _3518283_37= co->res;
Obj _3518282_37 = R[1];
Obj _3518284_37 = makeCons(co->gc, _3518283_37, Nil);
Obj _3518285_37 = makeCons(co->gc, _3518282_37, _3518284_37);
Obj _3518286_37 = makeCons(co->gc, getBinding(co, packageID, 75).name, _3518285_37);
Obj _3518287_37 = makeCons(co->gc, _3518286_37, Nil);
Obj _3518288_37 = makeCons(co->gc, closureRef(R[0], 0), _3518287_37);
Obj _3518289_37 = makeCons(co->gc, getBinding(co, packageID, 73).name, _3518288_37);
coraReturn(co, _3518289_37);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517382_37 = R[1];
Obj _3517383_37 = R[2];
Obj _3517476_37 = makeNative(co->gc, 2, clofun53, 1, 2, _3517382_37, _3517383_37);
Obj _3518273_37 = primIsSymbol(_3517382_37);
if (True == _3518273_37) {
co->ctx.sp = R;
coraCall1(co, _3517476_37, True);
return;
} else {
R[1] = _3517476_37;
saveCont(co, clofun54, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 79)), _3517382_37);
return;
}
}
case 1:
{
Obj _3518274_37= co->res;
Obj _3517476_37 = R[1];
if (True == _3518274_37) {
co->ctx.sp = R;
coraCall1(co, _3517476_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517476_37, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517477_37 = R[1];
if (True == _3517477_37) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun53, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 79)), closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3518139_37= co->res;
if (True == _3518139_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj _3517386_37 = makeNative(co->gc, 1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518241_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518241_37) {
Obj _3518242_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518243_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3518242_37);
if (True == _3518243_37) {
Obj _3518244_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518245_37 = PRIM_ISCONS(_3518244_37);
if (True == _3518245_37) {
Obj _3518246_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518247_37 = PRIM_CAR(_3518246_37);
Obj a = _3518247_37;
Obj _3518248_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518249_37 = PRIM_CDR(_3518248_37);
Obj _3518250_37 = PRIM_ISCONS(_3518249_37);
if (True == _3518250_37) {
Obj _3518251_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518252_37 = PRIM_CDR(_3518251_37);
Obj _3518253_37 = PRIM_CAR(_3518252_37);
Obj b = _3518253_37;
Obj _3518254_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518255_37 = PRIM_CDR(_3518254_37);
Obj _3518256_37 = PRIM_CDR(_3518255_37);
Obj _3518257_37 = PRIM_ISCONS(_3518256_37);
if (True == _3518257_37) {
Obj _3518258_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518259_37 = PRIM_CDR(_3518258_37);
Obj _3518260_37 = PRIM_CDR(_3518259_37);
Obj _3518261_37 = PRIM_CAR(_3518260_37);
Obj c = _3518261_37;
Obj _3518262_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518263_37 = PRIM_CDR(_3518262_37);
Obj _3518264_37 = PRIM_CDR(_3518263_37);
Obj _3518265_37 = PRIM_CDR(_3518264_37);
Obj _3518266_37 = PRIM_EQ(Nil, _3518265_37);
if (True == _3518266_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), a, makeNative(co->gc, 3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517386_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517386_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517386_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517386_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517386_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517386_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3518268_37= co->res;
Obj _3518267_37 = R[1];
Obj ra = R[2];
Obj _3518269_37 = makeCons(co->gc, _3518268_37, Nil);
Obj _3518270_37 = makeCons(co->gc, _3518267_37, _3518269_37);
Obj _3518271_37 = makeCons(co->gc, ra, _3518270_37);
Obj _3518272_37 = makeCons(co->gc, getBinding(co, packageID, 87).name, _3518271_37);
coraReturn(co, _3518272_37);
return;
}
case 2:
{
Obj _3518267_37= co->res;
Obj ra = R[1];
R[1] = _3518267_37;
R[2] = ra;
saveCont(co, clofun52, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517387_37 = makeNative(co->gc, 1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518219_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518219_37) {
Obj _3518220_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518221_37 = PRIM_EQ(getBinding(co, packageID, 85).name, _3518220_37);
if (True == _3518221_37) {
Obj _3518222_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518223_37 = PRIM_ISCONS(_3518222_37);
if (True == _3518223_37) {
Obj _3518224_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518225_37 = PRIM_CAR(_3518224_37);
Obj a = _3518225_37;
Obj _3518226_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518227_37 = PRIM_CDR(_3518226_37);
Obj _3518228_37 = PRIM_ISCONS(_3518227_37);
if (True == _3518228_37) {
Obj _3518229_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518230_37 = PRIM_CDR(_3518229_37);
Obj _3518231_37 = PRIM_CAR(_3518230_37);
Obj b = _3518231_37;
Obj _3518232_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518233_37 = PRIM_CDR(_3518232_37);
Obj _3518234_37 = PRIM_CDR(_3518233_37);
Obj _3518235_37 = PRIM_EQ(Nil, _3518234_37);
if (True == _3518235_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), a, makeNative(co->gc, 2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517387_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517387_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517387_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517387_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517387_37);
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
Obj _3518236_37 = primIsSymbol(ra);
if (True == _3518236_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
saveCont(co, clofun50, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3518237_37= co->res;
Obj ra = R[1];
Obj _3518238_37 = makeCons(co->gc, _3518237_37, Nil);
Obj _3518239_37 = makeCons(co->gc, ra, _3518238_37);
Obj _3518240_37 = makeCons(co->gc, getBinding(co, packageID, 85).name, _3518239_37);
coraReturn(co, _3518240_37);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517388_37 = makeNative(co->gc, 3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518188_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518188_37) {
Obj _3518189_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518190_37 = PRIM_EQ(getBinding(co, packageID, 86).name, _3518189_37);
if (True == _3518190_37) {
Obj _3518191_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518192_37 = PRIM_ISCONS(_3518191_37);
if (True == _3518192_37) {
Obj _3518193_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518194_37 = PRIM_CAR(_3518193_37);
Obj a = _3518194_37;
Obj _3518195_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518196_37 = PRIM_CDR(_3518195_37);
Obj _3518197_37 = PRIM_ISCONS(_3518196_37);
if (True == _3518197_37) {
Obj _3518198_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518199_37 = PRIM_CDR(_3518198_37);
Obj _3518200_37 = PRIM_CAR(_3518199_37);
Obj b = _3518200_37;
Obj _3518201_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518202_37 = PRIM_CDR(_3518201_37);
Obj _3518203_37 = PRIM_CDR(_3518202_37);
Obj _3518204_37 = PRIM_ISCONS(_3518203_37);
if (True == _3518204_37) {
Obj _3518205_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518206_37 = PRIM_CDR(_3518205_37);
Obj _3518207_37 = PRIM_CDR(_3518206_37);
Obj _3518208_37 = PRIM_CAR(_3518207_37);
Obj c = _3518208_37;
Obj _3518209_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518210_37 = PRIM_CDR(_3518209_37);
Obj _3518211_37 = PRIM_CDR(_3518210_37);
Obj _3518212_37 = PRIM_CDR(_3518211_37);
Obj _3518213_37 = PRIM_EQ(Nil, _3518212_37);
if (True == _3518213_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), b, makeNative(co->gc, 2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517388_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517388_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517388_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517388_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517388_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517388_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3518214_37= co->res;
Obj rb = R[1];
Obj _3518215_37 = makeCons(co->gc, _3518214_37, Nil);
Obj _3518216_37 = makeCons(co->gc, rb, _3518215_37);
Obj _3518217_37 = makeCons(co->gc, closureRef(R[0], 0), _3518216_37);
Obj _3518218_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3518217_37);
coraReturn(co, _3518218_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517389_37 = makeNative(co->gc, 1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518144_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518144_37) {
Obj _3518145_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518146_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3518145_37);
if (True == _3518146_37) {
Obj _3518147_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518148_37 = PRIM_ISCONS(_3518147_37);
if (True == _3518148_37) {
Obj _3518149_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518150_37 = PRIM_CAR(_3518149_37);
Obj _3518151_37 = PRIM_ISCONS(_3518150_37);
if (True == _3518151_37) {
Obj _3518152_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518153_37 = PRIM_CAR(_3518152_37);
Obj _3518154_37 = PRIM_CAR(_3518153_37);
Obj _3518155_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3518154_37);
if (True == _3518155_37) {
Obj _3518156_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518157_37 = PRIM_CAR(_3518156_37);
Obj _3518158_37 = PRIM_CDR(_3518157_37);
Obj _3518159_37 = PRIM_ISCONS(_3518158_37);
if (True == _3518159_37) {
Obj _3518160_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518161_37 = PRIM_CAR(_3518160_37);
Obj _3518162_37 = PRIM_CDR(_3518161_37);
Obj _3518163_37 = PRIM_CAR(_3518162_37);
Obj args = _3518163_37;
Obj _3518164_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518165_37 = PRIM_CAR(_3518164_37);
Obj _3518166_37 = PRIM_CDR(_3518165_37);
Obj _3518167_37 = PRIM_CDR(_3518166_37);
Obj _3518168_37 = PRIM_ISCONS(_3518167_37);
if (True == _3518168_37) {
Obj _3518169_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518170_37 = PRIM_CAR(_3518169_37);
Obj _3518171_37 = PRIM_CDR(_3518170_37);
Obj _3518172_37 = PRIM_CDR(_3518171_37);
Obj _3518173_37 = PRIM_CAR(_3518172_37);
Obj body = _3518173_37;
Obj _3518174_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518175_37 = PRIM_CAR(_3518174_37);
Obj _3518176_37 = PRIM_CDR(_3518175_37);
Obj _3518177_37 = PRIM_CDR(_3518176_37);
Obj _3518178_37 = PRIM_CDR(_3518177_37);
Obj _3518179_37 = PRIM_EQ(Nil, _3518178_37);
if (True == _3518179_37) {
Obj _3518180_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518181_37 = PRIM_CDR(_3518180_37);
Obj frees = _3518181_37;
R[1] = args;
R[2] = frees;
saveCont(co, clofun47, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), body, globalRef(co, getBinding(co, packageID, 70)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517389_37);
return;
}
}
case 1:
{
Obj _3518182_37= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj _3518183_37 = makeCons(co->gc, _3518182_37, Nil);
Obj _3518184_37 = makeCons(co->gc, args, _3518183_37);
Obj _3518185_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3518184_37);
Obj _3518186_37 = makeCons(co->gc, _3518185_37, frees);
Obj _3518187_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3518186_37);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), _3518187_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518140_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518140_37) {
Obj _3518141_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518141_37;
Obj _3518142_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518142_37;
Obj _3518143_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 68)), _3518143_37, Nil, closureRef(R[0], 1));
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
Obj x = R[1];
Obj _3518136_37 = makeCons(co->gc, x, Nil);
Obj _3518137_37 = makeCons(co->gc, getBinding(co, packageID, 72).name, _3518136_37);
coraReturn(co, _3518137_37);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517375_37 = R[1];
Obj _3517376_37 = R[2];
R[1] = _3517376_37;
R[2] = _3517375_37;
saveCont(co, clofun44, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 79)), _3517376_37);
return;
}
case 1:
{
Obj _3518065_37= co->res;
Obj _3517376_37 = R[1];
Obj pos = _3518065_37;
Obj _3518066_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3518066_37) {
coraReturn(co, _3517376_37);
return;
} else {
Obj _3518067_37 = makeCons(co->gc, pos, Nil);
Obj _3518068_37 = makeCons(co->gc, getBinding(co, packageID, 77).name, _3518067_37);
coraReturn(co, _3518068_37);
return;
}
}
case 2:
{
Obj _3518132_37= co->res;
Obj _3518130_37 = R[1];
Obj _3518133_37 = makeCons(co->gc, _3518130_37, _3518132_37);
Obj _3518134_37 = makeCons(co->gc, getBinding(co, packageID, 78).name, _3518133_37);
coraReturn(co, _3518134_37);
return;
}
case 3:
{
Obj _3518131_37= co->res;
Obj fvs1 = R[1];
Obj _3518130_37 = R[2];
R[1] = _3518130_37;
saveCont(co, clofun44, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3518131_37, fvs1);
return;
}
case 4:
{
Obj _3518127_37= co->res;
Obj args = R[1];
Obj _3517375_37 = R[2];
Obj fvs1 = R[3];
Obj _3518128_37 = makeCons(co->gc, _3518127_37, Nil);
Obj _3518129_37 = makeCons(co->gc, args, _3518128_37);
Obj _3518130_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3518129_37);
R[1] = fvs1;
R[2] = _3518130_37;
saveCont(co, clofun44, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 71)), _3517375_37);
return;
}
case 5:
{
Obj _3518126_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3517375_37 = R[3];
Obj fvs1 = _3518126_37;
R[1] = args;
R[2] = _3517375_37;
R[3] = fvs1;
saveCont(co, clofun44, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 71)), fvs1, body);
return;
}
case 6:
{
Obj _3518063_37= co->res;
Obj _3517376_37 = R[1];
Obj _3517375_37 = R[2];
if (True == _3518063_37) {
coraReturn(co, _3517376_37);
return;
} else {
Obj _3518064_37 = primIsSymbol(_3517376_37);
if (True == _3518064_37) {
R[1] = _3517376_37;
saveCont(co, clofun44, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 124)), _3517376_37, _3517375_37);
return;
} else {
Obj _3517379_37 = makeNative(co->gc, 3, clofun43, 0, 2, _3517376_37, _3517375_37);
Obj _3518106_37 = PRIM_ISCONS(_3517376_37);
if (True == _3518106_37) {
Obj _3518107_37 = PRIM_CAR(_3517376_37);
Obj _3518108_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3518107_37);
if (True == _3518108_37) {
Obj _3518109_37 = PRIM_CDR(_3517376_37);
Obj _3518110_37 = PRIM_ISCONS(_3518109_37);
if (True == _3518110_37) {
Obj _3518111_37 = PRIM_CDR(_3517376_37);
Obj _3518112_37 = PRIM_CAR(_3518111_37);
Obj args = _3518112_37;
Obj _3518113_37 = PRIM_CDR(_3517376_37);
Obj _3518114_37 = PRIM_CDR(_3518113_37);
Obj _3518115_37 = PRIM_ISCONS(_3518114_37);
if (True == _3518115_37) {
Obj _3518116_37 = PRIM_CDR(_3517376_37);
Obj _3518117_37 = PRIM_CDR(_3518116_37);
Obj _3518118_37 = PRIM_CAR(_3518117_37);
Obj body = _3518118_37;
Obj _3518119_37 = PRIM_CDR(_3517376_37);
Obj _3518120_37 = PRIM_CDR(_3518119_37);
Obj _3518121_37 = PRIM_CDR(_3518120_37);
Obj _3518122_37 = PRIM_EQ(Nil, _3518121_37);
if (True == _3518122_37) {
Obj _3518123_37 = makeCons(co->gc, body, Nil);
Obj _3518124_37 = makeCons(co->gc, args, _3518123_37);
Obj _3518125_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3518124_37);
R[1] = body;
R[2] = args;
R[3] = _3517375_37;
saveCont(co, clofun44, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), _3518125_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517379_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517379_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517379_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517379_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517379_37);
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
Obj _3517380_37 = makeNative(co->gc, 3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518074_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518074_37) {
Obj _3518075_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518076_37 = PRIM_EQ(getBinding(co, packageID, 86).name, _3518075_37);
if (True == _3518076_37) {
Obj _3518077_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518078_37 = PRIM_ISCONS(_3518077_37);
if (True == _3518078_37) {
Obj _3518079_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518080_37 = PRIM_CAR(_3518079_37);
Obj a = _3518080_37;
Obj _3518081_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518082_37 = PRIM_CDR(_3518081_37);
Obj _3518083_37 = PRIM_ISCONS(_3518082_37);
if (True == _3518083_37) {
Obj _3518084_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518085_37 = PRIM_CDR(_3518084_37);
Obj _3518086_37 = PRIM_CAR(_3518085_37);
Obj b = _3518086_37;
Obj _3518087_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518088_37 = PRIM_CDR(_3518087_37);
Obj _3518089_37 = PRIM_CDR(_3518088_37);
Obj _3518090_37 = PRIM_ISCONS(_3518089_37);
if (True == _3518090_37) {
Obj _3518091_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518092_37 = PRIM_CDR(_3518091_37);
Obj _3518093_37 = PRIM_CDR(_3518092_37);
Obj _3518094_37 = PRIM_CAR(_3518093_37);
Obj c = _3518094_37;
Obj _3518095_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518096_37 = PRIM_CDR(_3518095_37);
Obj _3518097_37 = PRIM_CDR(_3518096_37);
Obj _3518098_37 = PRIM_CDR(_3518097_37);
Obj _3518099_37 = PRIM_EQ(Nil, _3518098_37);
if (True == _3518099_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun43, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 71)), closureRef(R[0], 1), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517380_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517380_37);
return;
}
}
case 1:
{
Obj _3518101_37= co->res;
Obj _3518100_37 = R[1];
Obj a = R[2];
Obj _3518102_37 = makeCons(co->gc, _3518101_37, Nil);
Obj _3518103_37 = makeCons(co->gc, _3518100_37, _3518102_37);
Obj _3518104_37 = makeCons(co->gc, a, _3518103_37);
Obj _3518105_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3518104_37);
coraReturn(co, _3518105_37);
return;
}
case 2:
{
Obj _3518100_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = _3518100_37;
R[2] = a;
saveCont(co, clofun43, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 71)), closureRef(R[0], 1), c);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518069_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518069_37) {
Obj _3518070_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518070_37;
Obj _3518071_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518071_37;
R[1] = f;
R[2] = args;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 71)), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3518072_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3518073_37 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3518072_37, _3518073_37);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517362_37 = R[1];
R[1] = _3517362_37;
saveCont(co, clofun41, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 79)), _3517362_37);
return;
}
case 1:
{
Obj _3518061_37= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 80)), _3518061_37, args);
return;
}
case 2:
{
Obj _3517888_37= co->res;
Obj _3517362_37 = R[1];
if (True == _3517888_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517889_37 = primIsSymbol(_3517362_37);
if (True == _3517889_37) {
Obj _3517890_37 = makeCons(co->gc, _3517362_37, Nil);
coraReturn(co, _3517890_37);
return;
} else {
Obj _3517365_37 = makeNative(co->gc, 1, clofun40, 0, 1, _3517362_37);
Obj _3518044_37 = PRIM_ISCONS(_3517362_37);
if (True == _3518044_37) {
Obj _3518045_37 = PRIM_CAR(_3517362_37);
Obj _3518046_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3518045_37);
if (True == _3518046_37) {
Obj _3518047_37 = PRIM_CDR(_3517362_37);
Obj _3518048_37 = PRIM_ISCONS(_3518047_37);
if (True == _3518048_37) {
Obj _3518049_37 = PRIM_CDR(_3517362_37);
Obj _3518050_37 = PRIM_CAR(_3518049_37);
Obj args = _3518050_37;
Obj _3518051_37 = PRIM_CDR(_3517362_37);
Obj _3518052_37 = PRIM_CDR(_3518051_37);
Obj _3518053_37 = PRIM_ISCONS(_3518052_37);
if (True == _3518053_37) {
Obj _3518054_37 = PRIM_CDR(_3517362_37);
Obj _3518055_37 = PRIM_CDR(_3518054_37);
Obj _3518056_37 = PRIM_CAR(_3518055_37);
Obj body = _3518056_37;
Obj _3518057_37 = PRIM_CDR(_3517362_37);
Obj _3518058_37 = PRIM_CDR(_3518057_37);
Obj _3518059_37 = PRIM_CDR(_3518058_37);
Obj _3518060_37 = PRIM_EQ(Nil, _3518059_37);
if (True == _3518060_37) {
R[1] = args;
saveCont(co, clofun41, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517365_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517365_37);
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
Obj _3517366_37 = makeNative(co->gc, 1, clofun39, 0, 1, closureRef(R[0], 0));
Obj _3518014_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518014_37) {
Obj _3518015_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518016_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3518015_37);
if (True == _3518016_37) {
Obj _3518017_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518018_37 = PRIM_ISCONS(_3518017_37);
if (True == _3518018_37) {
Obj _3518019_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518020_37 = PRIM_CAR(_3518019_37);
Obj x = _3518020_37;
Obj _3518021_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518022_37 = PRIM_CDR(_3518021_37);
Obj _3518023_37 = PRIM_ISCONS(_3518022_37);
if (True == _3518023_37) {
Obj _3518024_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518025_37 = PRIM_CDR(_3518024_37);
Obj _3518026_37 = PRIM_CAR(_3518025_37);
Obj y = _3518026_37;
Obj _3518027_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518028_37 = PRIM_CDR(_3518027_37);
Obj _3518029_37 = PRIM_CDR(_3518028_37);
Obj _3518030_37 = PRIM_ISCONS(_3518029_37);
if (True == _3518030_37) {
Obj _3518031_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518032_37 = PRIM_CDR(_3518031_37);
Obj _3518033_37 = PRIM_CDR(_3518032_37);
Obj _3518034_37 = PRIM_CAR(_3518033_37);
Obj z = _3518034_37;
Obj _3518035_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518036_37 = PRIM_CDR(_3518035_37);
Obj _3518037_37 = PRIM_CDR(_3518036_37);
Obj _3518038_37 = PRIM_CDR(_3518037_37);
Obj _3518039_37 = PRIM_EQ(Nil, _3518038_37);
if (True == _3518039_37) {
Obj _3518040_37 = makeCons(co->gc, z, Nil);
Obj _3518041_37 = makeCons(co->gc, y, _3518040_37);
Obj _3518042_37 = makeCons(co->gc, x, _3518041_37);
saveCont(co, clofun40, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), globalRef(co, getBinding(co, packageID, 76)), _3518042_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517366_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517366_37);
return;
}
}
case 1:
{
Obj _3518043_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), globalRef(co, getBinding(co, packageID, 81)), Nil, _3518043_37);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517367_37 = makeNative(co->gc, 3, clofun38, 0, 1, closureRef(R[0], 0));
Obj _3517994_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517994_37) {
Obj _3517995_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517996_37 = PRIM_EQ(getBinding(co, packageID, 85).name, _3517995_37);
if (True == _3517996_37) {
Obj _3517997_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517998_37 = PRIM_ISCONS(_3517997_37);
if (True == _3517998_37) {
Obj _3517999_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518000_37 = PRIM_CAR(_3517999_37);
Obj x = _3518000_37;
Obj _3518001_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518002_37 = PRIM_CDR(_3518001_37);
Obj _3518003_37 = PRIM_ISCONS(_3518002_37);
if (True == _3518003_37) {
Obj _3518004_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518005_37 = PRIM_CDR(_3518004_37);
Obj _3518006_37 = PRIM_CAR(_3518005_37);
Obj y = _3518006_37;
Obj _3518007_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518008_37 = PRIM_CDR(_3518007_37);
Obj _3518009_37 = PRIM_CDR(_3518008_37);
Obj _3518010_37 = PRIM_EQ(Nil, _3518009_37);
if (True == _3518010_37) {
Obj _3518011_37 = makeCons(co->gc, y, Nil);
Obj _3518012_37 = makeCons(co->gc, x, _3518011_37);
saveCont(co, clofun39, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), globalRef(co, getBinding(co, packageID, 76)), _3518012_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517367_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517367_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517367_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517367_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517367_37);
return;
}
}
case 1:
{
Obj _3518013_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), globalRef(co, getBinding(co, packageID, 81)), Nil, _3518013_37);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517368_37 = makeNative(co->gc, 1, clofun37, 0, 1, closureRef(R[0], 0));
Obj _3517964_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517964_37) {
Obj _3517965_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517966_37 = PRIM_EQ(getBinding(co, packageID, 86).name, _3517965_37);
if (True == _3517966_37) {
Obj _3517967_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517968_37 = PRIM_ISCONS(_3517967_37);
if (True == _3517968_37) {
Obj _3517969_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517970_37 = PRIM_CAR(_3517969_37);
Obj a = _3517970_37;
Obj _3517971_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517972_37 = PRIM_CDR(_3517971_37);
Obj _3517973_37 = PRIM_ISCONS(_3517972_37);
if (True == _3517973_37) {
Obj _3517974_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517975_37 = PRIM_CDR(_3517974_37);
Obj _3517976_37 = PRIM_CAR(_3517975_37);
Obj b = _3517976_37;
Obj _3517977_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517978_37 = PRIM_CDR(_3517977_37);
Obj _3517979_37 = PRIM_CDR(_3517978_37);
Obj _3517980_37 = PRIM_ISCONS(_3517979_37);
if (True == _3517980_37) {
Obj _3517981_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517982_37 = PRIM_CDR(_3517981_37);
Obj _3517983_37 = PRIM_CDR(_3517982_37);
Obj _3517984_37 = PRIM_CAR(_3517983_37);
Obj c = _3517984_37;
Obj _3517985_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517986_37 = PRIM_CDR(_3517985_37);
Obj _3517987_37 = PRIM_CDR(_3517986_37);
Obj _3517988_37 = PRIM_CDR(_3517987_37);
Obj _3517989_37 = PRIM_EQ(Nil, _3517988_37);
if (True == _3517989_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun38, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517368_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517368_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517368_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517368_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517368_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517368_37);
return;
}
}
case 1:
{
Obj _3517993_37= co->res;
Obj _3517990_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 81)), _3517990_37, _3517993_37);
return;
}
case 2:
{
Obj _3517991_37= co->res;
Obj a = R[1];
Obj _3517990_37 = R[2];
Obj _3517992_37 = makeCons(co->gc, a, Nil);
R[1] = _3517990_37;
saveCont(co, clofun38, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 80)), _3517991_37, _3517992_37);
return;
}
case 3:
{
Obj _3517990_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = _3517990_37;
saveCont(co, clofun38, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), c);
return;
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517369_37 = makeNative(co->gc, 1, clofun36, 0, 1, closureRef(R[0], 0));
Obj _3517954_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517954_37) {
Obj _3517955_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517956_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3517955_37);
if (True == _3517956_37) {
Obj _3517957_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517958_37 = PRIM_ISCONS(_3517957_37);
if (True == _3517958_37) {
Obj _3517959_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517960_37 = PRIM_CAR(_3517959_37);
Obj lam = _3517960_37;
Obj _3517961_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517962_37 = PRIM_CDR(_3517961_37);
Obj more = _3517962_37;
Obj _3517963_37 = makeCons(co->gc, lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), _3517963_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517369_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517369_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517369_37);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517370_37 = makeNative(co->gc, 1, clofun35, 0, 1, closureRef(R[0], 0));
Obj _3517944_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517944_37) {
Obj _3517945_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517946_37 = PRIM_EQ(getBinding(co, packageID, 72).name, _3517945_37);
if (True == _3517946_37) {
Obj _3517947_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517948_37 = PRIM_ISCONS(_3517947_37);
if (True == _3517948_37) {
Obj _3517949_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517950_37 = PRIM_CAR(_3517949_37);
Obj x = _3517950_37;
Obj _3517951_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517952_37 = PRIM_CDR(_3517951_37);
Obj _3517953_37 = PRIM_EQ(Nil, _3517952_37);
if (True == _3517953_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517370_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517370_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517370_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517370_37);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517371_37 = makeNative(co->gc, 1, clofun34, 0, 1, closureRef(R[0], 0));
Obj _3517924_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517924_37) {
Obj _3517925_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517926_37 = PRIM_EQ(getBinding(co, packageID, 73).name, _3517925_37);
if (True == _3517926_37) {
Obj _3517927_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517928_37 = PRIM_ISCONS(_3517927_37);
if (True == _3517928_37) {
Obj _3517929_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517930_37 = PRIM_CAR(_3517929_37);
Obj exp = _3517930_37;
Obj _3517931_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517932_37 = PRIM_CDR(_3517931_37);
Obj _3517933_37 = PRIM_ISCONS(_3517932_37);
if (True == _3517933_37) {
Obj _3517934_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517935_37 = PRIM_CDR(_3517934_37);
Obj _3517936_37 = PRIM_CAR(_3517935_37);
Obj cont = _3517936_37;
Obj _3517937_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517938_37 = PRIM_CDR(_3517937_37);
Obj _3517939_37 = PRIM_CDR(_3517938_37);
Obj _3517940_37 = PRIM_EQ(Nil, _3517939_37);
if (True == _3517940_37) {
Obj _3517941_37 = makeCons(co->gc, cont, Nil);
Obj _3517942_37 = makeCons(co->gc, exp, _3517941_37);
saveCont(co, clofun35, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), globalRef(co, getBinding(co, packageID, 76)), _3517942_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517371_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517371_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517371_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517371_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517371_37);
return;
}
}
case 1:
{
Obj _3517943_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), globalRef(co, getBinding(co, packageID, 81)), Nil, _3517943_37);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517372_37 = makeNative(co->gc, 2, clofun33, 0, 1, closureRef(R[0], 0));
Obj _3517914_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517914_37) {
Obj _3517915_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517916_37 = PRIM_EQ(getBinding(co, packageID, 74).name, _3517915_37);
if (True == _3517916_37) {
Obj _3517917_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517918_37 = PRIM_ISCONS(_3517917_37);
if (True == _3517918_37) {
Obj _3517919_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517920_37 = PRIM_CAR(_3517919_37);
Obj exp = _3517920_37;
Obj _3517921_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517922_37 = PRIM_CDR(_3517921_37);
Obj _3517923_37 = PRIM_EQ(Nil, _3517922_37);
if (True == _3517923_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517372_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517372_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517372_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517372_37);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517373_37 = makeNative(co->gc, 1, clofun32, 0, 1, closureRef(R[0], 0));
Obj _3517896_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517896_37) {
Obj _3517897_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517898_37 = PRIM_EQ(getBinding(co, packageID, 75).name, _3517897_37);
if (True == _3517898_37) {
Obj _3517899_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517900_37 = PRIM_ISCONS(_3517899_37);
if (True == _3517900_37) {
Obj _3517901_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517902_37 = PRIM_CAR(_3517901_37);
Obj arg = _3517902_37;
Obj _3517903_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517904_37 = PRIM_CDR(_3517903_37);
Obj _3517905_37 = PRIM_ISCONS(_3517904_37);
if (True == _3517905_37) {
Obj _3517906_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517907_37 = PRIM_CDR(_3517906_37);
Obj _3517908_37 = PRIM_CAR(_3517907_37);
Obj body = _3517908_37;
Obj _3517909_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517910_37 = PRIM_CDR(_3517909_37);
Obj _3517911_37 = PRIM_CDR(_3517910_37);
Obj _3517912_37 = PRIM_EQ(Nil, _3517911_37);
if (True == _3517912_37) {
R[1] = arg;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 76)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517373_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517373_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517373_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517373_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517373_37);
return;
}
}
case 1:
{
Obj _3517913_37= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 80)), _3517913_37, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517891_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517891_37) {
Obj _3517892_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517892_37;
Obj _3517893_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517893_37;
Obj _3517894_37 = makeCons(co->gc, f, args);
saveCont(co, clofun32, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), globalRef(co, getBinding(co, packageID, 76)), _3517894_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517895_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), globalRef(co, getBinding(co, packageID, 81)), Nil, _3517895_37);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517354_37 = R[1];
Obj _3517355_37 = makeNative(co->gc, 1, clofun30, 0, 1, _3517354_37);
Obj _3517877_37 = PRIM_ISCONS(_3517354_37);
if (True == _3517877_37) {
Obj _3517878_37 = PRIM_CAR(_3517354_37);
Obj _3517879_37 = PRIM_EQ(getBinding(co, packageID, 96).name, _3517878_37);
if (True == _3517879_37) {
Obj _3517880_37 = PRIM_CDR(_3517354_37);
Obj _3517881_37 = PRIM_ISCONS(_3517880_37);
if (True == _3517881_37) {
Obj _3517882_37 = PRIM_CDR(_3517354_37);
Obj _3517883_37 = PRIM_CAR(_3517882_37);
Obj _3517884_37 = PRIM_CDR(_3517354_37);
Obj _3517885_37 = PRIM_CDR(_3517884_37);
Obj _3517886_37 = PRIM_EQ(Nil, _3517885_37);
if (True == _3517886_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517355_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517355_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517355_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517355_37);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517356_37 = makeNative(co->gc, 1, clofun29, 0, 1, closureRef(R[0], 0));
Obj _3517867_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517867_37) {
Obj _3517868_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517869_37 = PRIM_EQ(getBinding(co, packageID, 93).name, _3517868_37);
if (True == _3517869_37) {
Obj _3517870_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517871_37 = PRIM_ISCONS(_3517870_37);
if (True == _3517871_37) {
Obj _3517872_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517873_37 = PRIM_CAR(_3517872_37);
Obj _3517874_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517875_37 = PRIM_CDR(_3517874_37);
Obj _3517876_37 = PRIM_EQ(Nil, _3517875_37);
if (True == _3517876_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517356_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517356_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517356_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517356_37);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517357_37 = makeNative(co->gc, 1, clofun28, 0, 1, closureRef(R[0], 0));
Obj _3517857_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517857_37) {
Obj _3517858_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517859_37 = PRIM_EQ(getBinding(co, packageID, 90).name, _3517858_37);
if (True == _3517859_37) {
Obj _3517860_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517861_37 = PRIM_ISCONS(_3517860_37);
if (True == _3517861_37) {
Obj _3517862_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517863_37 = PRIM_CAR(_3517862_37);
Obj _3517864_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517865_37 = PRIM_CDR(_3517864_37);
Obj _3517866_37 = PRIM_EQ(Nil, _3517865_37);
if (True == _3517866_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517357_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517357_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517357_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517357_37);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517358_37 = makeNative(co->gc, 1, clofun27, 0, 1, closureRef(R[0], 0));
Obj _3517847_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517847_37) {
Obj _3517848_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517849_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3517848_37);
if (True == _3517849_37) {
Obj _3517850_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517851_37 = PRIM_ISCONS(_3517850_37);
if (True == _3517851_37) {
Obj _3517852_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517853_37 = PRIM_CAR(_3517852_37);
Obj _3517854_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517855_37 = PRIM_CDR(_3517854_37);
Obj _3517856_37 = PRIM_EQ(Nil, _3517855_37);
if (True == _3517856_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517358_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517358_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517358_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517358_37);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517359_37 = makeNative(co->gc, 2, clofun26, 0, 1, closureRef(R[0], 0));
Obj _3517837_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517837_37) {
Obj _3517838_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517839_37 = PRIM_EQ(getBinding(co, packageID, 77).name, _3517838_37);
if (True == _3517839_37) {
Obj _3517840_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517841_37 = PRIM_ISCONS(_3517840_37);
if (True == _3517841_37) {
Obj _3517842_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517843_37 = PRIM_CAR(_3517842_37);
Obj _3517844_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517845_37 = PRIM_CDR(_3517844_37);
Obj _3517846_37 = PRIM_EQ(Nil, _3517845_37);
if (True == _3517846_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517359_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517359_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517359_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517359_37);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517360_37 = makeNative(co->gc, 1, clofun25, 0, 0);
Obj _3517827_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517827_37) {
Obj _3517828_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517829_37 = PRIM_EQ(getBinding(co, packageID, 78).name, _3517828_37);
if (True == _3517829_37) {
Obj _3517830_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517831_37 = PRIM_ISCONS(_3517830_37);
if (True == _3517831_37) {
Obj _3517832_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517833_37 = PRIM_CAR(_3517832_37);
Obj label = _3517833_37;
Obj _3517834_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517835_37 = PRIM_CDR(_3517834_37);
R[1] = _3517360_37;
saveCont(co, clofun26, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 83)), label);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517360_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517360_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517360_37);
return;
}
}
case 1:
{
Obj _3517836_37= co->res;
Obj _3517360_37 = R[1];
if (True == _3517836_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517360_37);
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
Obj _3517349_37 = R[1];
Obj _3517350_37 = R[2];
Obj _3517816_37 = PRIM_EQ(Nil, _3517349_37);
if (True == _3517816_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517352_37 = makeNative(co->gc, 2, clofun23, 0, 2, _3517349_37, _3517350_37);
Obj _3517822_37 = PRIM_ISCONS(_3517349_37);
if (True == _3517822_37) {
Obj _3517823_37 = PRIM_CAR(_3517349_37);
Obj x = _3517823_37;
Obj _3517824_37 = PRIM_CDR(_3517349_37);
Obj y = _3517824_37;
R[1] = y;
R[2] = _3517350_37;
R[3] = _3517352_37;
saveCont(co, clofun24, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 95)), x, _3517350_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517352_37);
return;
}
}
}
case 1:
{
Obj _3517825_37= co->res;
Obj y = R[1];
Obj _3517350_37 = R[2];
Obj _3517352_37 = R[3];
if (True == _3517825_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 80)), y, _3517350_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517352_37);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517817_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517817_37) {
Obj _3517818_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517818_37;
Obj _3517819_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517819_37;
R[1] = x;
saveCont(co, clofun23, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 80)), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517820_37= co->res;
Obj x = R[1];
Obj _3517821_37 = makeCons(co->gc, x, _3517820_37);
coraReturn(co, _3517821_37);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517344_37 = R[1];
Obj _3517345_37 = R[2];
Obj _3517805_37 = PRIM_EQ(Nil, _3517344_37);
if (True == _3517805_37) {
coraReturn(co, _3517345_37);
return;
} else {
Obj _3517347_37 = makeNative(co->gc, 2, clofun21, 0, 2, _3517344_37, _3517345_37);
Obj _3517811_37 = PRIM_ISCONS(_3517344_37);
if (True == _3517811_37) {
Obj _3517812_37 = PRIM_CAR(_3517344_37);
Obj x = _3517812_37;
Obj _3517813_37 = PRIM_CDR(_3517344_37);
Obj y = _3517813_37;
R[1] = y;
R[2] = _3517345_37;
R[3] = _3517347_37;
saveCont(co, clofun22, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 95)), x, _3517345_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517347_37);
return;
}
}
}
case 1:
{
Obj _3517814_37= co->res;
Obj y = R[1];
Obj _3517345_37 = R[2];
Obj _3517347_37 = R[3];
if (True == _3517814_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 81)), y, _3517345_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517347_37);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517806_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517806_37) {
Obj _3517807_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517807_37;
Obj _3517808_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517808_37;
R[1] = x;
saveCont(co, clofun21, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 81)), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3517809_37= co->res;
Obj x = R[1];
Obj _3517810_37 = makeCons(co->gc, x, _3517809_37);
coraReturn(co, _3517810_37);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517330_37 = R[1];
Obj _3517331_37 = R[2];
Obj _3517332_37 = R[3];
Obj _3517474_37 = makeNative(co->gc, 2, clofun19, 1, 3, _3517330_37, _3517332_37, _3517331_37);
R[1] = _3517332_37;
R[2] = _3517474_37;
saveCont(co, clofun20, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 83)), _3517332_37);
return;
}
case 1:
{
Obj _3517803_37= co->res;
Obj _3517474_37 = R[1];
if (True == _3517803_37) {
co->ctx.sp = R;
coraCall1(co, _3517474_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517474_37, False);
return;
}
}
case 2:
{
Obj _3517802_37= co->res;
Obj _3517332_37 = R[1];
Obj _3517474_37 = R[2];
if (True == _3517802_37) {
co->ctx.sp = R;
coraCall1(co, _3517474_37, True);
return;
} else {
R[1] = _3517474_37;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), _3517332_37);
return;
}
}
case 3:
{
Obj _3517800_37= co->res;
Obj _3517332_37 = R[1];
Obj _3517474_37 = R[2];
if (True == _3517800_37) {
co->ctx.sp = R;
coraCall1(co, _3517474_37, True);
return;
} else {
Obj _3517801_37 = primIsString(_3517332_37);
if (True == _3517801_37) {
co->ctx.sp = R;
coraCall1(co, _3517474_37, True);
return;
} else {
R[1] = _3517332_37;
R[2] = _3517474_37;
saveCont(co, clofun20, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), _3517332_37);
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
Obj _3517475_37 = R[1];
if (True == _3517475_37) {
Obj _3517611_37 = makeCons(co->gc, closureRef(R[0], 1), Nil);
Obj _3517612_37 = makeCons(co->gc, getBinding(co, packageID, 96).name, _3517611_37);
coraReturn(co, _3517612_37);
return;
} else {
Obj _3517334_37 = makeNative(co->gc, 3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj _3517787_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517787_37) {
Obj _3517788_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517789_37 = PRIM_EQ(getBinding(co, packageID, 84).name, _3517788_37);
if (True == _3517789_37) {
Obj _3517790_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517791_37 = PRIM_ISCONS(_3517790_37);
if (True == _3517791_37) {
Obj _3517792_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517793_37 = PRIM_CAR(_3517792_37);
Obj x = _3517793_37;
Obj _3517794_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517795_37 = PRIM_CDR(_3517794_37);
Obj _3517796_37 = PRIM_EQ(Nil, _3517795_37);
if (True == _3517796_37) {
R[1] = x;
saveCont(co, clofun19, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), x, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517334_37);
return;
}
}
}
case 1:
{
Obj _3517797_37= co->res;
Obj x = R[1];
Obj _3517798_37 = makeCons(co->gc, x, Nil);
Obj _3517799_37 = makeCons(co->gc, getBinding(co, packageID, 96).name, _3517798_37);
coraReturn(co, _3517799_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517613_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3517613_37) {
saveCont(co, clofun18, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 95)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3517336_37 = makeNative(co->gc, 1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517765_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517765_37) {
Obj _3517766_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517767_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3517766_37);
if (True == _3517767_37) {
Obj _3517768_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517769_37 = PRIM_ISCONS(_3517768_37);
if (True == _3517769_37) {
Obj _3517770_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517771_37 = PRIM_CAR(_3517770_37);
Obj args = _3517771_37;
Obj _3517772_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517773_37 = PRIM_CDR(_3517772_37);
Obj _3517774_37 = PRIM_ISCONS(_3517773_37);
if (True == _3517774_37) {
Obj _3517775_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517776_37 = PRIM_CDR(_3517775_37);
Obj _3517777_37 = PRIM_CAR(_3517776_37);
Obj body = _3517777_37;
Obj _3517778_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517779_37 = PRIM_CDR(_3517778_37);
Obj _3517780_37 = PRIM_CDR(_3517779_37);
Obj _3517781_37 = PRIM_EQ(Nil, _3517780_37);
if (True == _3517781_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun18, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 88)), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517336_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517336_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517336_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517336_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517336_37);
return;
}
}
}
case 1:
{
Obj _3517615_37= co->res;
Obj _3517616_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3517617_37 = makeCons(co->gc, getBinding(co, packageID, 93).name, _3517616_37);
coraReturn(co, _3517617_37);
return;
}
case 2:
{
Obj _3517614_37= co->res;
if (True == _3517614_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun18, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
}
case 3:
{
Obj _3517783_37= co->res;
Obj args = R[1];
Obj _3517784_37 = makeCons(co->gc, _3517783_37, Nil);
Obj _3517785_37 = makeCons(co->gc, args, _3517784_37);
Obj _3517786_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3517785_37);
coraReturn(co, _3517786_37);
return;
}
case 4:
{
Obj _3517782_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun18, 3, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), _3517782_37, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517337_37 = makeNative(co->gc, 2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517733_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517733_37) {
Obj _3517734_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517735_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3517734_37);
if (True == _3517735_37) {
Obj _3517736_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517737_37 = PRIM_ISCONS(_3517736_37);
if (True == _3517737_37) {
Obj _3517738_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517739_37 = PRIM_CAR(_3517738_37);
Obj _3517740_37 = PRIM_ISCONS(_3517739_37);
if (True == _3517740_37) {
Obj _3517741_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517742_37 = PRIM_CAR(_3517741_37);
Obj _3517743_37 = PRIM_CAR(_3517742_37);
Obj _3517744_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3517743_37);
if (True == _3517744_37) {
Obj _3517745_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517746_37 = PRIM_CAR(_3517745_37);
Obj _3517747_37 = PRIM_CDR(_3517746_37);
Obj exp1 = _3517747_37;
Obj _3517748_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517749_37 = PRIM_CDR(_3517748_37);
Obj exp2 = _3517749_37;
Obj _3517750_37 = primGenSym(co);
Obj f = _3517750_37;
Obj _3517751_37 = primGenSym(co);
Obj v = _3517751_37;
Obj _3517752_37 = makeCons(co->gc, v, Nil);
Obj _3517753_37 = makeCons(co->gc, v, exp2);
Obj _3517754_37 = makeCons(co->gc, getBinding(co, packageID, 87).name, _3517753_37);
Obj _3517755_37 = makeCons(co->gc, _3517754_37, Nil);
Obj _3517756_37 = makeCons(co->gc, _3517752_37, _3517755_37);
Obj _3517757_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3517756_37);
Obj _3517758_37 = makeCons(co->gc, getBinding(co, packageID, 87).name, exp1);
Obj _3517759_37 = makeCons(co->gc, _3517758_37, Nil);
Obj _3517760_37 = makeCons(co->gc, f, _3517759_37);
Obj _3517761_37 = makeCons(co->gc, _3517760_37, Nil);
Obj _3517762_37 = makeCons(co->gc, _3517757_37, _3517761_37);
Obj _3517763_37 = makeCons(co->gc, f, _3517762_37);
Obj _3517764_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3517763_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2), _3517764_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517337_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517337_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517337_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517337_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517337_37);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517338_37 = makeNative(co->gc, 2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517726_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517726_37) {
Obj _3517727_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517728_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3517727_37);
if (True == _3517728_37) {
Obj _3517729_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517729_37;
R[1] = args;
saveCont(co, clofun16, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517338_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517338_37);
return;
}
}
case 1:
{
Obj _3517731_37= co->res;
Obj _3517732_37 = makeCons(co->gc, getBinding(co, packageID, 87).name, _3517731_37);
coraReturn(co, _3517732_37);
return;
}
case 2:
{
Obj _3517730_37= co->res;
Obj args = R[1];
saveCont(co, clofun16, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3517730_37, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517339_37 = makeNative(co->gc, 3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517704_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517704_37) {
Obj _3517705_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517706_37 = PRIM_EQ(getBinding(co, packageID, 85).name, _3517705_37);
if (True == _3517706_37) {
Obj _3517707_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517708_37 = PRIM_ISCONS(_3517707_37);
if (True == _3517708_37) {
Obj _3517709_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517710_37 = PRIM_CAR(_3517709_37);
Obj x = _3517710_37;
Obj _3517711_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517712_37 = PRIM_CDR(_3517711_37);
Obj _3517713_37 = PRIM_ISCONS(_3517712_37);
if (True == _3517713_37) {
Obj _3517714_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517715_37 = PRIM_CDR(_3517714_37);
Obj _3517716_37 = PRIM_CAR(_3517715_37);
Obj y = _3517716_37;
Obj _3517717_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517718_37 = PRIM_CDR(_3517717_37);
Obj _3517719_37 = PRIM_CDR(_3517718_37);
Obj _3517720_37 = PRIM_EQ(Nil, _3517719_37);
if (True == _3517720_37) {
R[1] = y;
saveCont(co, clofun15, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517339_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517339_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517339_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517339_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517339_37);
return;
}
}
case 1:
{
Obj _3517722_37= co->res;
Obj _3517721_37 = R[1];
Obj _3517723_37 = makeCons(co->gc, _3517722_37, Nil);
Obj _3517724_37 = makeCons(co->gc, _3517721_37, _3517723_37);
Obj _3517725_37 = makeCons(co->gc, getBinding(co, packageID, 85).name, _3517724_37);
coraReturn(co, _3517725_37);
return;
}
case 2:
{
Obj _3517721_37= co->res;
Obj y = R[1];
R[1] = _3517721_37;
saveCont(co, clofun15, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2), y);
return;
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517340_37 = makeNative(co->gc, 1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517671_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517671_37) {
Obj _3517672_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517673_37 = PRIM_EQ(getBinding(co, packageID, 86).name, _3517672_37);
if (True == _3517673_37) {
Obj _3517674_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517675_37 = PRIM_ISCONS(_3517674_37);
if (True == _3517675_37) {
Obj _3517676_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517677_37 = PRIM_CAR(_3517676_37);
Obj a = _3517677_37;
Obj _3517678_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517679_37 = PRIM_CDR(_3517678_37);
Obj _3517680_37 = PRIM_ISCONS(_3517679_37);
if (True == _3517680_37) {
Obj _3517681_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517682_37 = PRIM_CDR(_3517681_37);
Obj _3517683_37 = PRIM_CAR(_3517682_37);
Obj b = _3517683_37;
Obj _3517684_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517685_37 = PRIM_CDR(_3517684_37);
Obj _3517686_37 = PRIM_CDR(_3517685_37);
Obj _3517687_37 = PRIM_ISCONS(_3517686_37);
if (True == _3517687_37) {
Obj _3517688_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517689_37 = PRIM_CDR(_3517688_37);
Obj _3517690_37 = PRIM_CDR(_3517689_37);
Obj _3517691_37 = PRIM_CAR(_3517690_37);
Obj c = _3517691_37;
Obj _3517692_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517693_37 = PRIM_CDR(_3517692_37);
Obj _3517694_37 = PRIM_CDR(_3517693_37);
Obj _3517695_37 = PRIM_CDR(_3517694_37);
Obj _3517696_37 = PRIM_EQ(Nil, _3517695_37);
if (True == _3517696_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun14, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517340_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517340_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517340_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517340_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517340_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517340_37);
return;
}
}
case 1:
{
Obj _3517699_37= co->res;
Obj _3517697_37 = R[1];
Obj a = R[2];
Obj _3517700_37 = makeCons(co->gc, _3517699_37, Nil);
Obj _3517701_37 = makeCons(co->gc, _3517697_37, _3517700_37);
Obj _3517702_37 = makeCons(co->gc, a, _3517701_37);
Obj _3517703_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3517702_37);
coraReturn(co, _3517703_37);
return;
}
case 2:
{
Obj _3517697_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3517698_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3517697_37;
R[2] = a;
saveCont(co, clofun14, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), _3517698_37, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517341_37 = makeNative(co->gc, 4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517639_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517639_37) {
Obj _3517640_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517641_37 = PRIM_ISCONS(_3517640_37);
if (True == _3517641_37) {
Obj _3517642_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517643_37 = PRIM_CAR(_3517642_37);
Obj _3517644_37 = PRIM_EQ(getBinding(co, packageID, 89).name, _3517643_37);
if (True == _3517644_37) {
Obj _3517645_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517646_37 = PRIM_CDR(_3517645_37);
Obj exp1 = _3517646_37;
Obj _3517647_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517648_37 = PRIM_ISCONS(_3517647_37);
if (True == _3517648_37) {
Obj _3517649_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517650_37 = PRIM_CAR(_3517649_37);
Obj _3517651_37 = PRIM_ISCONS(_3517650_37);
if (True == _3517651_37) {
Obj _3517652_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517653_37 = PRIM_CAR(_3517652_37);
Obj _3517654_37 = PRIM_CAR(_3517653_37);
Obj _3517655_37 = PRIM_EQ(getBinding(co, packageID, 87).name, _3517654_37);
if (True == _3517655_37) {
Obj _3517656_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517657_37 = PRIM_CAR(_3517656_37);
Obj _3517658_37 = PRIM_CDR(_3517657_37);
Obj exp2 = _3517658_37;
Obj _3517659_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517660_37 = PRIM_CDR(_3517659_37);
Obj _3517661_37 = PRIM_EQ(Nil, _3517660_37);
if (True == _3517661_37) {
Obj _3517662_37 = primGenSym(co);
Obj f = _3517662_37;
Obj _3517663_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, exp1);
Obj _3517664_37 = makeCons(co->gc, getBinding(co, packageID, 87).name, exp2);
Obj _3517665_37 = makeCons(co->gc, _3517664_37, Nil);
Obj _3517666_37 = makeCons(co->gc, f, _3517665_37);
Obj _3517667_37 = makeCons(co->gc, _3517666_37, Nil);
Obj _3517668_37 = makeCons(co->gc, _3517663_37, _3517667_37);
Obj _3517669_37 = makeCons(co->gc, f, _3517668_37);
Obj _3517670_37 = makeCons(co->gc, getBinding(co, packageID, 86).name, _3517669_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2), _3517670_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517341_37);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517342_37 = makeNative(co->gc, 1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj _3517619_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517619_37) {
Obj _3517620_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3517620_37;
Obj _3517621_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517621_37;
R[1] = op;
R[2] = args;
R[3] = _3517342_37;
saveCont(co, clofun12, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 104)), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517342_37);
return;
}
}
case 1:
{
Obj _3517629_37= co->res;
Obj _3517627_37 = R[1];
Obj _3517630_37 = makeCons(co->gc, _3517627_37, _3517629_37);
coraReturn(co, _3517630_37);
return;
}
case 2:
{
Obj _3517628_37= co->res;
Obj args = R[1];
Obj _3517627_37 = R[2];
R[1] = _3517627_37;
saveCont(co, clofun12, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3517628_37, args);
return;
}
case 3:
{
Obj _3517635_37= co->res;
Obj tmp = R[1];
Obj _3517636_37 = makeCons(co->gc, _3517635_37, Nil);
Obj _3517637_37 = makeCons(co->gc, tmp, _3517636_37);
Obj _3517638_37 = makeCons(co->gc, getBinding(co, packageID, 89).name, _3517637_37);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2), _3517638_37);
return;
}
case 4:
{
Obj _3517633_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = _3517633_37;
Obj _3517634_37 = makeCons(co->gc, op, args);
R[1] = tmp;
saveCont(co, clofun12, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 88)), _3517634_37, tmp);
return;
}
case 5:
{
Obj _3517624_37= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = _3517624_37;
Obj _3517625_37 = PRIM_EQ(required, provided);
if (True == _3517625_37) {
Obj _3517626_37 = makeCons(co->gc, op, Nil);
Obj _3517627_37 = makeCons(co->gc, getBinding(co, packageID, 90).name, _3517626_37);
R[1] = args;
R[2] = _3517627_37;
saveCont(co, clofun12, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj _3517631_37 = PRIM_GT(required, provided);
if (True == _3517631_37) {
Obj _3517632_37 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3517632_37, Nil);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "primitive call mismatch"));
return;
}
}
}
case 6:
{
Obj _3517623_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = _3517623_37;
R[1] = required;
R[2] = op;
R[3] = args;
saveCont(co, clofun12, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 91)), args);
return;
}
case 7:
{
Obj _3517622_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj _3517342_37 = R[3];
if (True == _3517622_37) {
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 100)), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517342_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 97)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
case 1:
{
Obj _3517618_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 92)), _3517618_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517326_37 = R[1];
Obj _3517327_37 = R[2];
Obj _3517606_37 = PRIM_EQ(MAKE_NUMBER(0), _3517326_37);
if (True == _3517606_37) {
coraReturn(co, _3517327_37);
return;
} else {
Obj _3517607_37 = PRIM_SUB(_3517326_37, MAKE_NUMBER(1));
Obj _3517608_37 = primGenSym(co);
Obj _3517609_37 = makeCons(co->gc, _3517608_37, _3517327_37);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), _3517607_37, _3517609_37);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 128)), x, globalRef(co, getBinding(co, packageID, 122)));
return;
}
case 1:
{
Obj _3517604_37= co->res;
Obj find = R[1];
if (True == _3517604_37) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 99)), find);
return;
}
}
case 2:
{
Obj _3517603_37= co->res;
Obj find = _3517603_37;
R[1] = find;
saveCont(co, clofun9, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), find);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 128)), x, globalRef(co, getBinding(co, packageID, 122)));
return;
}
case 1:
{
Obj _3517601_37= co->res;
Obj find = R[1];
if (True == _3517601_37) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), find);
return;
}
}
case 2:
{
Obj _3517600_37= co->res;
Obj find = _3517600_37;
R[1] = find;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), find);
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
coraCall2(co, globalRef(co, getBinding(co, packageID, 128)), x, globalRef(co, getBinding(co, packageID, 122)));
return;
}
case 1:
{
Obj _3517597_37= co->res;
Obj _3517598_37 = primNot(_3517597_37);
coraReturn(co, _3517598_37);
return;
}
case 2:
{
Obj _3517596_37= co->res;
saveCont(co, clofun7, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 103)), _3517596_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517322_37 = R[1];
Obj _3517323_37 = R[2];
Obj _3517520_37 = PRIM_EQ(Nil, _3517323_37);
if (True == _3517520_37) {
coraReturn(co, False);
return;
} else {
Obj _3517521_37 = PRIM_ISCONS(_3517323_37);
if (True == _3517521_37) {
Obj _3517522_37 = PRIM_CAR(_3517323_37);
Obj hd = _3517522_37;
Obj _3517523_37 = PRIM_CDR(_3517323_37);
Obj tl = _3517523_37;
R[1] = _3517322_37;
R[2] = tl;
saveCont(co, clofun6, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 124)), _3517322_37, hd);
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
Obj _3517524_37= co->res;
Obj _3517322_37 = R[1];
Obj tl = R[2];
Obj _3517525_37 = PRIM_LT(_3517524_37, MAKE_NUMBER(0));
if (True == _3517525_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 123)), _3517322_37, tl);
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
coraCall3(co, globalRef(co, getBinding(co, packageID, 125)), MAKE_NUMBER(0), x, l);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517316_37 = R[1];
Obj _3517317_37 = R[2];
Obj _3517318_37 = R[3];
Obj _3517509_37 = PRIM_EQ(Nil, _3517318_37);
if (True == _3517509_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3517320_37 = makeNative(co->gc, 1, clofun3, 0, 3, _3517318_37, _3517316_37, _3517317_37);
Obj _3517514_37 = PRIM_ISCONS(_3517318_37);
if (True == _3517514_37) {
Obj _3517515_37 = PRIM_CAR(_3517318_37);
Obj a = _3517515_37;
Obj _3517516_37 = PRIM_CDR(_3517318_37);
Obj _3517517_37 = PRIM_EQ(_3517317_37, a);
if (True == _3517517_37) {
coraReturn(co, _3517316_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517320_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517320_37);
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
Obj _3517510_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517510_37) {
Obj _3517511_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517512_37 = PRIM_CDR(closureRef(R[0], 0));
Obj b = _3517512_37;
Obj _3517513_37 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 125)), _3517513_37, closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517311_37 = R[1];
Obj _3517312_37 = R[2];
Obj _3517313_37 = R[3];
Obj _3517503_37 = PRIM_EQ(Nil, _3517313_37);
if (True == _3517503_37) {
coraReturn(co, _3517312_37);
return;
} else {
Obj _3517504_37 = PRIM_ISCONS(_3517313_37);
if (True == _3517504_37) {
Obj _3517505_37 = PRIM_CAR(_3517313_37);
Obj x = _3517505_37;
Obj _3517506_37 = PRIM_CDR(_3517313_37);
Obj y = _3517506_37;
R[1] = _3517311_37;
R[2] = y;
saveCont(co, clofun2, 1, R);
coraCall2(co, _3517311_37, _3517312_37, x);
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
Obj _3517507_37= co->res;
Obj _3517311_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 126)), _3517311_37, _3517507_37, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517306_37 = R[1];
Obj _3517307_37 = R[2];
Obj _3517488_37 = PRIM_EQ(Nil, _3517307_37);
if (True == _3517488_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517309_37 = makeNative(co->gc, 1, clofun0, 0, 2, _3517307_37, _3517306_37);
Obj _3517492_37 = PRIM_ISCONS(_3517307_37);
if (True == _3517492_37) {
Obj _3517493_37 = PRIM_CAR(_3517307_37);
Obj _3517494_37 = PRIM_ISCONS(_3517493_37);
if (True == _3517494_37) {
Obj _3517495_37 = PRIM_CAR(_3517307_37);
Obj _3517496_37 = PRIM_CAR(_3517495_37);
Obj x = _3517496_37;
Obj _3517497_37 = PRIM_CAR(_3517307_37);
Obj _3517498_37 = PRIM_CDR(_3517497_37);
Obj y = _3517498_37;
Obj _3517499_37 = PRIM_CDR(_3517307_37);
Obj _3517500_37 = PRIM_EQ(_3517306_37, x);
if (True == _3517500_37) {
Obj _3517501_37 = makeCons(co->gc, x, y);
coraReturn(co, _3517501_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517309_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517309_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517309_37);
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
Obj _3517489_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517489_37) {
Obj _3517490_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517491_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517491_37;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 128)), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 127)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

