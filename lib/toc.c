#include "types.h"
#include "runtime.h"

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


static __thread Obj* __symbolTable;

void entry(struct Cora *co, int label, Obj *R) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 131);
__symbolTable[0] = intern("cora/lib/io#close-output-file");
__symbolTable[1] = intern("cora/lib/io#open-output-file");
__symbolTable[2] = intern("cora/init#macroexpand");
__symbolTable[3] = intern("cora/lib/toc#compile-to-c");
__symbolTable[4] = intern("cora/init#read-file-as-sexp");
__symbolTable[5] = intern("cora/lib/toc#preprocess");
__symbolTable[6] = intern("cora/lib/toc#split-type-and-code-toplevel");
__symbolTable[7] = intern("cora/lib/infer#*typecheck*");
__symbolTable[8] = intern("cora/lib/toc#generate-typecheck-code");
__symbolTable[9] = intern("cora/lib/toc#extract-typecheck-body");
__symbolTable[10] = intern(":type");
__symbolTable[11] = intern("declare");
__symbolTable[12] = intern(":declare");
__symbolTable[13] = intern("cora/lib/infer#tvar");
__symbolTable[14] = intern("backquote");
__symbolTable[15] = intern("macroexpand");
__symbolTable[16] = intern("cora/lib/infer#check-type!");
__symbolTable[17] = intern("cora/lib/toc#split-type-and-code");
__symbolTable[18] = intern("package");
__symbolTable[19] = intern("begin");
__symbolTable[20] = intern("export");
__symbolTable[21] = intern("import");
__symbolTable[22] = intern("cora/lib/toc#handle-import-eagerly");
__symbolTable[23] = intern("cora/lib/toc#generate-c");
__symbolTable[24] = intern("cora/init#symbol->string");
__symbolTable[25] = intern("cora/lib/toc#generate-entry");
__symbolTable[26] = intern("cora/lib/toc#generate-toplevel-lambda");
__symbolTable[27] = intern("cora/lib/toc#for-each");
__symbolTable[28] = intern("cora/lib/toc#compile");
__symbolTable[29] = intern("cora/init#cddr");
__symbolTable[30] = intern("->");
__symbolTable[31] = intern("cora/init#add-to-*macros*");
__symbolTable[32] = intern("cora/lib/toc#rewrite-->macro");
__symbolTable[33] = intern("cora/init#vector");
__symbolTable[34] = intern("cora/lib/toc#collect-lambda-pass");
__symbolTable[35] = intern("cora/lib/toc#liveness-analyze-pass");
__symbolTable[36] = intern("cora/lib/toc#tailify-pass");
__symbolTable[37] = intern("cora/lib/toc#closure-convert-pass");
__symbolTable[38] = intern("cora/lib/toc#parse-pass");
__symbolTable[39] = intern("cora/lib/toc#code-gen-func-declare");
__symbolTable[40] = intern("cora/lib/toc#generate-cont");
__symbolTable[41] = intern("cora/lib/toc/internal#escape-str");
__symbolTable[42] = intern("cora/lib/toc#generate-group-name");
__symbolTable[43] = intern("cora/lib/toc#generate-inst-list");
__symbolTable[44] = intern("cora/lib/toc/internal#generate-sym");
__symbolTable[45] = intern("cora/lib/toc#recover-from-frame");
__symbolTable[46] = intern("cora/lib/toc#generate-inst");
__symbolTable[47] = intern("cora/lib/toc/internal#generate-num");
__symbolTable[48] = intern("cora/lib/toc/internal#generate-str");
__symbolTable[49] = intern("cora/lib/toc#save-to-frame");
__symbolTable[50] = intern("cora/lib/toc#symbol-offset");
__symbolTable[51] = intern("cora/lib/toc#symbol-offset-h");
__symbolTable[52] = intern("cora/init#value");
__symbolTable[53] = intern("cora/init#vector-set!");
__symbolTable[54] = intern("cora/lib/toc#append-result");
__symbolTable[55] = intern("cora/init#vector-ref");
__symbolTable[56] = intern("cora/lib/toc#collect-lambda");
__symbolTable[57] = intern("cora/lib/toc#lambda-frame-size");
__symbolTable[58] = intern("cora/lib/toc#rewrite-lambda-final");
__symbolTable[59] = intern("cora/init#cdddr");
__symbolTable[60] = intern("cora/lib/toc#collect-cont-list");
__symbolTable[61] = intern("cora/lib/toc#collect-cont");
__symbolTable[62] = intern("%continuation");
__symbolTable[63] = intern("cora/lib/toc#liveness-analyze");
__symbolTable[64] = intern("cora/init#caar");
__symbolTable[65] = intern("cora/init#pair?");
__symbolTable[66] = intern("cora/lib/toc#wrap-var");
__symbolTable[67] = intern("cora/init#reverse");
__symbolTable[68] = intern("cora/lib/toc#tailify-list");
__symbolTable[69] = intern("cora/lib/toc#tailify");
__symbolTable[70] = intern("cora/lib/toc#id");
__symbolTable[71] = intern("cora/lib/toc#closure-convert");
__symbolTable[72] = intern("return");
__symbolTable[73] = intern("call");
__symbolTable[74] = intern("tailcall");
__symbolTable[75] = intern("continuation");
__symbolTable[76] = intern("cora/lib/toc#free-vars");
__symbolTable[77] = intern("%closure-ref");
__symbolTable[78] = intern("%closure");
__symbolTable[79] = intern("cora/lib/toc#convert-protect?");
__symbolTable[80] = intern("cora/lib/toc#diff");
__symbolTable[81] = intern("cora/lib/toc#union");
__symbolTable[82] = intern("cora/init#boolean?");
__symbolTable[83] = intern("cora/init#number?");
__symbolTable[84] = intern("quote");
__symbolTable[85] = intern("do");
__symbolTable[86] = intern("let");
__symbolTable[87] = intern("if");
__symbolTable[88] = intern("cora/init#append");
__symbolTable[89] = intern("lambda");
__symbolTable[90] = intern("%builtin");
__symbolTable[91] = intern("cora/init#length");
__symbolTable[92] = intern("cora/init#map");
__symbolTable[93] = intern("%global");
__symbolTable[94] = intern("cora/lib/toc#add-symbol-to-list");
__symbolTable[95] = intern("cora/init#elem?");
__symbolTable[96] = intern("%const");
__symbolTable[97] = intern("cora/lib/toc#parse");
__symbolTable[98] = intern("cora/lib/toc#temp-list");
__symbolTable[99] = intern("cora/init#cadr");
__symbolTable[100] = intern("cora/lib/toc#builtin->args");
__symbolTable[101] = intern("cora/init#caddr");
__symbolTable[102] = intern("cora/lib/toc#builtin->name");
__symbolTable[103] = intern("cora/init#null?");
__symbolTable[104] = intern("cora/lib/toc#builtin?");
__symbolTable[105] = intern("string?");
__symbolTable[106] = intern("integer?");
__symbolTable[107] = intern("not");
__symbolTable[108] = intern("symbol?");
__symbolTable[109] = intern("gensym");
__symbolTable[110] = intern("<");
__symbolTable[111] = intern(">");
__symbolTable[112] = intern("=");
__symbolTable[113] = intern("/");
__symbolTable[114] = intern("*");
__symbolTable[115] = intern("-");
__symbolTable[116] = intern("+");
__symbolTable[117] = intern("cons?");
__symbolTable[118] = intern("cons");
__symbolTable[119] = intern("cdr");
__symbolTable[120] = intern("car");
__symbolTable[121] = intern("set");
__symbolTable[122] = intern("cora/lib/toc#*builtin-prims*");
__symbolTable[123] = intern("cora/lib/toc#exist-in-env");
__symbolTable[124] = intern("cora/lib/toc#index");
__symbolTable[125] = intern("cora/lib/toc#pos-in-list0");
__symbolTable[126] = intern("cora/lib/toc#foldl");
__symbolTable[127] = intern("cora/lib/toc#error");
__symbolTable[128] = intern("cora/lib/toc#assq");
__symbolTable[129] = intern("cora/lib/toc#*ns-export*");
__symbolTable[130] = intern("cora/init#import");
co->ctx.fn = clofun144;
co->ctx.label = 0;
}

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame __curr = {
.fn = clofun144,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), makeCString("cora/lib/toc/internal"));
return;
}
case 1:
{
Obj _3518030_37= co->res;
Obj _3518036_37 = primSet(co, __symbolTable[28], makeNative(3, clofun110, 2, 0));
Obj _3518042_37 = primSet(co, __symbolTable[27], makeNative(3, clofun111, 2, 0));
Obj _3518064_37 = primSet(co, __symbolTable[26], makeNative(7, clofun113, 3, 0));
Obj _3518082_37 = primSet(co, __symbolTable[25], makeNative(4, clofun115, 3, 0));
Obj _3518091_37 = primSet(co, __symbolTable[23], makeNative(4, clofun118, 3, 0));
Obj _3518132_37 = primSet(co, __symbolTable[22], makeNative(2, clofun123, 1, 0));
Obj _3518171_37 = primSet(co, __symbolTable[17], makeNative(5, clofun126, 4, 0));
Obj _3518223_37 = primSet(co, __symbolTable[9], makeNative(3, clofun131, 2, 0));
Obj _3518224_37 = primSet(co, __symbolTable[8], makeNative(3, clofun132, 2, 0));
Obj _3518238_37 = primSet(co, __symbolTable[6], makeNative(2, clofun140, 1, 0));
Obj _3518239_37 = primSet(co, __symbolTable[7], False);
Obj _3518252_37 = primSet(co, __symbolTable[5], makeNative(3, clofun142, 1, 0));
Obj _3518262_37 = primSet(co, __symbolTable[3], makeNative(4, clofun143, 2, 0));
coraReturn(co, _3518262_37);
return;
}
case 2:
{
Obj _3516650_37= co->res;
Obj _3516651_37 = primSet(co, __symbolTable[129], Nil);
Obj _3516666_37 = primSet(co, __symbolTable[128], makeNative(3, clofun1, 2, 0));
Obj _3516672_37 = primSet(co, __symbolTable[126], makeNative(4, clofun2, 3, 0));
Obj _3516682_37 = primSet(co, __symbolTable[125], makeNative(4, clofun4, 3, 0));
Obj _3516683_37 = primSet(co, __symbolTable[124], makeNative(3, clofun5, 2, 0));
Obj _3516690_37 = primSet(co, __symbolTable[123], makeNative(3, clofun6, 2, 0));
Obj _3516691_37 = makeCons(makeCString("primSet"), Nil);
Obj _3516692_37 = makeCons(MAKE_NUMBER(2), _3516691_37);
Obj _3516693_37 = makeCons(__symbolTable[121], _3516692_37);
Obj _3516694_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3516695_37 = makeCons(MAKE_NUMBER(1), _3516694_37);
Obj _3516696_37 = makeCons(__symbolTable[120], _3516695_37);
Obj _3516697_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3516698_37 = makeCons(MAKE_NUMBER(1), _3516697_37);
Obj _3516699_37 = makeCons(__symbolTable[119], _3516698_37);
Obj _3516700_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3516701_37 = makeCons(MAKE_NUMBER(2), _3516700_37);
Obj _3516702_37 = makeCons(__symbolTable[118], _3516701_37);
Obj _3516703_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3516704_37 = makeCons(MAKE_NUMBER(1), _3516703_37);
Obj _3516705_37 = makeCons(__symbolTable[117], _3516704_37);
Obj _3516706_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3516707_37 = makeCons(MAKE_NUMBER(2), _3516706_37);
Obj _3516708_37 = makeCons(__symbolTable[116], _3516707_37);
Obj _3516709_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3516710_37 = makeCons(MAKE_NUMBER(2), _3516709_37);
Obj _3516711_37 = makeCons(__symbolTable[115], _3516710_37);
Obj _3516712_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3516713_37 = makeCons(MAKE_NUMBER(2), _3516712_37);
Obj _3516714_37 = makeCons(__symbolTable[114], _3516713_37);
Obj _3516715_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3516716_37 = makeCons(MAKE_NUMBER(2), _3516715_37);
Obj _3516717_37 = makeCons(__symbolTable[113], _3516716_37);
Obj _3516718_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3516719_37 = makeCons(MAKE_NUMBER(2), _3516718_37);
Obj _3516720_37 = makeCons(__symbolTable[112], _3516719_37);
Obj _3516721_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3516722_37 = makeCons(MAKE_NUMBER(2), _3516721_37);
Obj _3516723_37 = makeCons(__symbolTable[111], _3516722_37);
Obj _3516724_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3516725_37 = makeCons(MAKE_NUMBER(2), _3516724_37);
Obj _3516726_37 = makeCons(__symbolTable[110], _3516725_37);
Obj _3516727_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3516728_37 = makeCons(MAKE_NUMBER(0), _3516727_37);
Obj _3516729_37 = makeCons(__symbolTable[109], _3516728_37);
Obj _3516730_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3516731_37 = makeCons(MAKE_NUMBER(1), _3516730_37);
Obj _3516732_37 = makeCons(__symbolTable[108], _3516731_37);
Obj _3516733_37 = makeCons(makeCString("primNot"), Nil);
Obj _3516734_37 = makeCons(MAKE_NUMBER(1), _3516733_37);
Obj _3516735_37 = makeCons(__symbolTable[107], _3516734_37);
Obj _3516736_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3516737_37 = makeCons(MAKE_NUMBER(1), _3516736_37);
Obj _3516738_37 = makeCons(__symbolTable[106], _3516737_37);
Obj _3516739_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3516740_37 = makeCons(MAKE_NUMBER(1), _3516739_37);
Obj _3516741_37 = makeCons(__symbolTable[105], _3516740_37);
Obj _3516742_37 = makeCons(_3516741_37, Nil);
Obj _3516743_37 = makeCons(_3516738_37, _3516742_37);
Obj _3516744_37 = makeCons(_3516735_37, _3516743_37);
Obj _3516745_37 = makeCons(_3516732_37, _3516744_37);
Obj _3516746_37 = makeCons(_3516729_37, _3516745_37);
Obj _3516747_37 = makeCons(_3516726_37, _3516746_37);
Obj _3516748_37 = makeCons(_3516723_37, _3516747_37);
Obj _3516749_37 = makeCons(_3516720_37, _3516748_37);
Obj _3516750_37 = makeCons(_3516717_37, _3516749_37);
Obj _3516751_37 = makeCons(_3516714_37, _3516750_37);
Obj _3516752_37 = makeCons(_3516711_37, _3516751_37);
Obj _3516753_37 = makeCons(_3516708_37, _3516752_37);
Obj _3516754_37 = makeCons(_3516705_37, _3516753_37);
Obj _3516755_37 = makeCons(_3516702_37, _3516754_37);
Obj _3516756_37 = makeCons(_3516699_37, _3516755_37);
Obj _3516757_37 = makeCons(_3516696_37, _3516756_37);
Obj _3516758_37 = makeCons(_3516693_37, _3516757_37);
Obj _3516759_37 = primSet(co, __symbolTable[122], _3516758_37);
Obj _3516763_37 = primSet(co, __symbolTable[104], makeNative(2, clofun7, 1, 0));
Obj _3516766_37 = primSet(co, __symbolTable[102], makeNative(2, clofun8, 1, 0));
Obj _3516769_37 = primSet(co, __symbolTable[100], makeNative(2, clofun9, 1, 0));
Obj _3516774_37 = primSet(co, __symbolTable[98], makeNative(3, clofun10, 2, 0));
Obj _3516968_37 = primSet(co, __symbolTable[97], makeNative(4, clofun20, 3, 0));
Obj _3516979_37 = primSet(co, __symbolTable[81], makeNative(4, clofun22, 2, 0));
Obj _3516990_37 = primSet(co, __symbolTable[80], makeNative(4, clofun24, 2, 0));
Obj _3517051_37 = primSet(co, __symbolTable[79], makeNative(2, clofun31, 1, 0));
Obj _3517226_37 = primSet(co, __symbolTable[76], makeNative(2, clofun41, 1, 0));
Obj _3517299_37 = primSet(co, __symbolTable[71], makeNative(4, clofun44, 2, 0));
Obj _3517302_37 = primSet(co, __symbolTable[70], makeNative(2, clofun45, 1, 0));
Obj _3517439_37 = primSet(co, __symbolTable[69], makeNative(3, clofun54, 2, 0));
Obj _3517462_37 = primSet(co, __symbolTable[68], makeNative(4, clofun57, 3, 0));
Obj _3517539_37 = primSet(co, __symbolTable[63], makeNative(3, clofun61, 2, 0));
Obj _3517570_37 = primSet(co, __symbolTable[61], makeNative(4, clofun65, 3, 0));
Obj _3517576_37 = primSet(co, __symbolTable[60], makeNative(5, clofun68, 4, 0));
Obj _3517581_37 = primSet(co, __symbolTable[58], makeNative(3, clofun70, 2, 0));
Obj _3517590_37 = primSet(co, __symbolTable[57], makeNative(2, clofun72, 1, 0));
Obj _3517641_37 = primSet(co, __symbolTable[56], makeNative(6, clofun74, 2, 0));
Obj _3517649_37 = primSet(co, __symbolTable[54], makeNative(4, clofun75, 2, 0));
Obj _3517656_37 = primSet(co, __symbolTable[66], makeNative(3, clofun76, 2, 0));
Obj _3517661_37 = primSet(co, __symbolTable[94], makeNative(4, clofun77, 2, 0));
Obj _3517667_37 = primSet(co, __symbolTable[51], makeNative(4, clofun78, 3, 0));
Obj _3517668_37 = primSet(co, __symbolTable[50], makeNative(3, clofun79, 2, 0));
Obj _3517675_37 = primSet(co, __symbolTable[49], makeNative(6, clofun81, 5, 0));
Obj _3517682_37 = primSet(co, __symbolTable[45], makeNative(6, clofun83, 5, 0));
Obj _3517967_37 = primSet(co, __symbolTable[46], makeNative(6, clofun96, 5, 0));
Obj _3517981_37 = primSet(co, __symbolTable[43], makeNative(6, clofun98, 5, 0));
Obj _3518003_37 = primSet(co, __symbolTable[40], makeNative(8, clofun100, 5, 0));
Obj _3518005_37 = primSet(co, __symbolTable[42], makeNative(3, clofun101, 2, 0));
Obj _3518009_37 = primSet(co, __symbolTable[39], makeNative(3, clofun102, 2, 0));
Obj _3518010_37 = primSet(co, __symbolTable[38], makeNative(3, clofun103, 2, 0));
Obj _3518011_37 = primSet(co, __symbolTable[37], makeNative(2, clofun104, 1, 0));
Obj _3518012_37 = primSet(co, __symbolTable[36], makeNative(2, clofun105, 1, 0));
Obj _3518013_37 = primSet(co, __symbolTable[35], makeNative(2, clofun106, 1, 0));
Obj _3518020_37 = primSet(co, __symbolTable[34], makeNative(3, clofun107, 1, 0));
Obj _3518027_37 = primSet(co, __symbolTable[32], makeNative(3, clofun108, 2, 0));
struct frame __curr = {
.fn = clofun144,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[31]), __symbolTable[30], makeNative(2, clofun109, 1, 0));
return;
}
case 3:
{
Obj _3516649_37= co->res;
struct frame __curr = {
.fn = clofun144,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), makeCString("cora/lib/hash-h"));
return;
}
case 4:
{
Obj _3516648_37= co->res;
struct frame __curr = {
.fn = clofun144,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), makeCString("cora/lib/io"));
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
Obj _3518253_37 = primGenSym();
Obj globals = _3518253_37;
Obj _3518254_37 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
struct frame __curr = {
.fn = clofun143,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[28]), globals);
return;
}
case 1:
{
Obj _3518261_37= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), stream);
return;
}
case 2:
{
Obj _3518260_37= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
struct frame __curr = {
.fn = clofun143,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[23]), stream, bc, _3518260_37);
return;
}
case 3:
{
Obj _3518259_37= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = _3518259_37;
R[1] = bc;
R[2] = stream;
struct frame __curr = {
.fn = clofun143,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), globals);
return;
}
case 4:
{
Obj _3518258_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = _3518258_37;
R[1] = globals;
R[2] = bc;
struct frame __curr = {
.fn = clofun143,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[1]), to);
return;
}
case 5:
{
Obj _3518257_37= co->res;
Obj _3518255_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
struct frame __curr = {
.fn = clofun143,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3518255_37, _3518257_37);
return;
}
case 6:
{
Obj _3518256_37= co->res;
Obj _3518255_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3518255_37;
R[2] = to;
R[3] = globals;
struct frame __curr = {
.fn = clofun143,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[2]), _3518256_37);
return;
}
case 7:
{
Obj _3518255_37= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3518255_37;
R[2] = to;
R[3] = globals;
struct frame __curr = {
.fn = clofun143,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[5]), from);
return;
}
}
}

static void clofun142(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj file_45path = R[1];
struct frame __curr = {
.fn = clofun142,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[4]), file_45path);
return;
}
case 1:
{
Obj _3518247_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 2:
{
Obj _3518246_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 3:
{
Obj _3518249_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 4:
{
Obj _3518248_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 5:
{
Obj _3518251_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 6:
{
Obj _3518250_37= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 7:
{
Obj _3518243_37= co->res;
Obj _3516646_37 = R[1];
Obj sexp = R[2];
if (True == _3518243_37) {
Obj _3518244_37 = PRIM_CAR(sexp);
Obj _3518245_37 = PRIM_EQ(__symbolTable[19], _3518244_37);
if (True == _3518245_37) {
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3516646_37, True);
return;
} else {
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3516646_37, False);
return;
}
} else {
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3516646_37, False);
return;
}
}
case 8:
{
Obj _3518240_37= co->res;
Obj sexp = _3518240_37;
Obj _3516646_37 = makeNative(2, clofun141, 1, 1, sexp);
R[1] = _3516646_37;
R[2] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), sexp);
return;
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516647_37 = R[1];
if (True == _3516647_37) {
Obj _3518241_37 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, _3518241_37);
return;
} else {
Obj _3518242_37 = makeCons(closureRef(R[0], 0), Nil);
coraReturn(co, _3518242_37);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516634_37 = R[1];
Obj _3516635_37 = makeNative(1, clofun137, 0, 1, _3516634_37);
Obj _3518233_37 = PRIM_ISCONS(_3516634_37);
if (True == _3518233_37) {
Obj _3518234_37 = PRIM_CAR(_3516634_37);
Obj _3518235_37 = PRIM_EQ(__symbolTable[18], _3518234_37);
if (True == _3518235_37) {
Obj _3518236_37 = PRIM_CDR(_3516634_37);
Obj more = _3518236_37;
Obj _3518237_37 = makeCons(__symbolTable[18], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), _3518237_37, makeNative(2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516635_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516635_37);
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
coraCall4(co, globalRef(__symbolTable[17]), body, Nil, Nil, makeNative(3, clofun138, 2, 0));
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
coraCall2(co, globalRef(__symbolTable[8]), type, code);
return;
}
}
}

static void clofun137(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516636_37 = makeNative(1, clofun134, 0, 1, closureRef(R[0], 0));
Obj _3518228_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518228_37) {
Obj _3518229_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518230_37 = PRIM_EQ(__symbolTable[19], _3518229_37);
if (True == _3518230_37) {
Obj _3518231_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518231_37;
Obj _3518232_37 = makeCons(__symbolTable[19], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), _3518232_37, makeNative(2, clofun136, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516636_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516636_37);
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
coraCall4(co, globalRef(__symbolTable[17]), body, Nil, Nil, makeNative(3, clofun135, 2, 0));
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
coraCall2(co, globalRef(__symbolTable[8]), type, code);
return;
}
}
}

static void clofun134(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518225_37 = makeCons(closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), _3518225_37, Nil, Nil, makeNative(3, clofun133, 2, 0));
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
struct frame __curr = {
.fn = clofun133,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[8]), type, code);
return;
}
case 1:
{
Obj _3518226_37= co->res;
Obj _3518227_37 = makeCons(__symbolTable[19], _3518226_37);
coraReturn(co, _3518227_37);
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
if (True == globalRef(__symbolTable[7])) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[88]), type, code);
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
Obj _3516627_37 = R[1];
Obj _3516628_37 = R[2];
Obj _3516629_37 = makeNative(2, clofun130, 0, 2, _3516627_37, _3516628_37);
Obj _3518211_37 = PRIM_ISCONS(_3516627_37);
if (True == _3518211_37) {
Obj _3518212_37 = PRIM_CAR(_3516627_37);
Obj _3518213_37 = PRIM_EQ(__symbolTable[18], _3518212_37);
if (True == _3518213_37) {
Obj _3518214_37 = PRIM_CDR(_3516627_37);
Obj _3518215_37 = PRIM_ISCONS(_3518214_37);
if (True == _3518215_37) {
Obj _3518216_37 = PRIM_CDR(_3516627_37);
Obj _3518217_37 = PRIM_CAR(_3518216_37);
Obj name = _3518217_37;
Obj _3518218_37 = PRIM_CDR(_3516627_37);
Obj _3518219_37 = PRIM_CDR(_3518218_37);
Obj more = _3518219_37;
R[1] = name;
struct frame __curr = {
.fn = clofun131,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, _3516628_37);
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
} else {
co->ctx.sp = R;
coraCall0(co, _3516629_37);
return;
}
}
case 1:
{
Obj _3518220_37= co->res;
Obj name = R[1];
Obj _3518221_37 = makeCons(name, _3518220_37);
Obj _3518222_37 = makeCons(__symbolTable[18], _3518221_37);
coraReturn(co, _3518222_37);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516630_37 = makeNative(2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518190_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518190_37) {
Obj _3518191_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518192_37 = PRIM_ISCONS(_3518191_37);
if (True == _3518192_37) {
Obj _3518193_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518194_37 = PRIM_CAR(_3518193_37);
Obj _3518195_37 = PRIM_EQ(__symbolTable[21], _3518194_37);
if (True == _3518195_37) {
Obj _3518196_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518197_37 = PRIM_CDR(_3518196_37);
Obj _3518198_37 = PRIM_ISCONS(_3518197_37);
if (True == _3518198_37) {
Obj _3518199_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518200_37 = PRIM_CDR(_3518199_37);
Obj _3518201_37 = PRIM_CAR(_3518200_37);
Obj pkg = _3518201_37;
Obj _3518202_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518203_37 = PRIM_CDR(_3518202_37);
Obj _3518204_37 = PRIM_CDR(_3518203_37);
Obj _3518205_37 = PRIM_EQ(Nil, _3518204_37);
if (True == _3518205_37) {
Obj _3518206_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518206_37;
Obj _3518207_37 = makeCons(pkg, Nil);
Obj _3518208_37 = makeCons(__symbolTable[21], _3518207_37);
R[1] = _3518208_37;
struct frame __curr = {
.fn = clofun130,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
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
case 1:
{
Obj _3518209_37= co->res;
Obj _3518208_37 = R[1];
Obj _3518210_37 = makeCons(_3518208_37, _3518209_37);
coraReturn(co, _3518210_37);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516631_37 = makeNative(1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518178_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518178_37) {
Obj _3518179_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518180_37 = PRIM_ISCONS(_3518179_37);
if (True == _3518180_37) {
Obj _3518181_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518182_37 = PRIM_CAR(_3518181_37);
Obj _3518183_37 = PRIM_EQ(__symbolTable[20], _3518182_37);
if (True == _3518183_37) {
Obj _3518184_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518185_37 = PRIM_CDR(_3518184_37);
Obj symbols = _3518185_37;
Obj _3518186_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518186_37;
Obj _3518187_37 = makeCons(__symbolTable[20], symbols);
R[1] = _3518187_37;
struct frame __curr = {
.fn = clofun129,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
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
}
case 1:
{
Obj _3518188_37= co->res;
Obj _3518187_37 = R[1];
Obj _3518189_37 = makeCons(_3518187_37, _3518188_37);
coraReturn(co, _3518189_37);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516632_37 = makeNative(1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3518172_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518172_37) {
Obj _3518173_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518174_37 = PRIM_EQ(__symbolTable[19], _3518173_37);
if (True == _3518174_37) {
Obj _3518175_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518175_37;
struct frame __curr = {
.fn = clofun128,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516632_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516632_37);
return;
}
}
case 1:
{
Obj _3518176_37= co->res;
Obj _3518177_37 = makeCons(__symbolTable[19], _3518176_37);
coraReturn(co, _3518177_37);
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
Obj _3516619_37 = R[1];
Obj _3516620_37 = R[2];
Obj _3516621_37 = R[3];
Obj _3516622_37 = R[4];
Obj _3518133_37 = PRIM_EQ(Nil, _3516619_37);
if (True == _3518133_37) {
R[1] = _3516621_37;
R[2] = _3516622_37;
struct frame __curr = {
.fn = clofun126,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), _3516620_37);
return;
} else {
Obj _3516624_37 = makeNative(1, clofun125, 0, 4, _3516619_37, _3516620_37, _3516621_37, _3516622_37);
Obj _3518160_37 = PRIM_ISCONS(_3516619_37);
if (True == _3518160_37) {
Obj _3518161_37 = PRIM_CAR(_3516619_37);
Obj _3518162_37 = PRIM_ISCONS(_3518161_37);
if (True == _3518162_37) {
Obj _3518163_37 = PRIM_CAR(_3516619_37);
Obj _3518164_37 = PRIM_CAR(_3518163_37);
Obj _3518165_37 = PRIM_EQ(__symbolTable[10], _3518164_37);
if (True == _3518165_37) {
Obj _3518166_37 = PRIM_CAR(_3516619_37);
Obj _3518167_37 = PRIM_CDR(_3518166_37);
Obj exp = _3518167_37;
Obj _3518168_37 = PRIM_CDR(_3516619_37);
Obj more = _3518168_37;
Obj _3518169_37 = makeCons(__symbolTable[19], exp);
Obj _3518170_37 = makeCons(_3518169_37, _3516620_37);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, _3518170_37, _3516621_37, _3516622_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516624_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516624_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516624_37);
return;
}
}
}
case 1:
{
Obj _3518135_37= co->res;
Obj _3516622_37 = R[1];
Obj _3518134_37 = R[2];
co->ctx.sp = R;
coraCall2(co, _3516622_37, _3518134_37, _3518135_37);
return;
}
case 2:
{
Obj _3518134_37= co->res;
Obj _3516621_37 = R[1];
Obj _3516622_37 = R[2];
R[1] = _3516622_37;
R[2] = _3518134_37;
struct frame __curr = {
.fn = clofun126,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), _3516621_37);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516625_37 = makeNative(1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3518149_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518149_37) {
Obj _3518150_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518151_37 = PRIM_ISCONS(_3518150_37);
if (True == _3518151_37) {
Obj _3518152_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518153_37 = PRIM_CAR(_3518152_37);
Obj _3518154_37 = PRIM_EQ(__symbolTable[12], _3518153_37);
if (True == _3518154_37) {
Obj _3518155_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518156_37 = PRIM_CDR(_3518155_37);
Obj exp = _3518156_37;
Obj _3518157_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518157_37;
Obj _3518158_37 = makeCons(__symbolTable[11], exp);
Obj _3518159_37 = makeCons(_3518158_37, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, _3518159_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516625_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516625_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516625_37);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518136_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518136_37) {
Obj _3518137_37 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = _3518137_37;
Obj _3518138_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518138_37;
Obj _3518139_37 = makeCons(exp, Nil);
Obj _3518140_37 = makeCons(__symbolTable[14], _3518139_37);
Obj _3518141_37 = makeCons(_3518140_37, Nil);
Obj _3518142_37 = makeCons(__symbolTable[15], _3518141_37);
Obj _3518143_37 = makeCons(__symbolTable[13], Nil);
Obj _3518144_37 = makeCons(_3518143_37, Nil);
Obj _3518145_37 = makeCons(_3518142_37, _3518144_37);
Obj _3518146_37 = makeCons(__symbolTable[16], _3518145_37);
Obj _3518147_37 = makeCons(_3518146_37, closureRef(R[0], 1));
Obj _3518148_37 = makeCons(exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, _3518147_37, _3518148_37, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516613_37 = R[1];
Obj _3516614_37 = makeNative(1, clofun122, 0, 1, _3516613_37);
Obj _3518123_37 = PRIM_ISCONS(_3516613_37);
if (True == _3518123_37) {
Obj _3518124_37 = PRIM_CAR(_3516613_37);
Obj _3518125_37 = PRIM_EQ(__symbolTable[18], _3518124_37);
if (True == _3518125_37) {
Obj _3518126_37 = PRIM_CDR(_3516613_37);
Obj _3518127_37 = PRIM_ISCONS(_3518126_37);
if (True == _3518127_37) {
Obj _3518128_37 = PRIM_CDR(_3516613_37);
Obj _3518129_37 = PRIM_CAR(_3518128_37);
Obj _3518130_37 = PRIM_CDR(_3516613_37);
Obj _3518131_37 = PRIM_CDR(_3518130_37);
Obj remain = _3518131_37;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516614_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516614_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516614_37);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516615_37 = makeNative(1, clofun121, 0, 1, closureRef(R[0], 0));
Obj _3518119_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518119_37) {
Obj _3518120_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518121_37 = PRIM_EQ(__symbolTable[19], _3518120_37);
if (True == _3518121_37) {
Obj _3518122_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518122_37;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516615_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516615_37);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516616_37 = makeNative(2, clofun120, 0, 1, closureRef(R[0], 0));
Obj _3518110_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518110_37) {
Obj _3518111_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518112_37 = PRIM_ISCONS(_3518111_37);
if (True == _3518112_37) {
Obj _3518113_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518114_37 = PRIM_CAR(_3518113_37);
Obj _3518115_37 = PRIM_EQ(__symbolTable[20], _3518114_37);
if (True == _3518115_37) {
Obj _3518116_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518117_37 = PRIM_CDR(_3518116_37);
Obj _3518118_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518118_37;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516616_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516616_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516616_37);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516617_37 = makeNative(1, clofun119, 0, 0);
Obj _3518092_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518092_37) {
Obj _3518093_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518094_37 = PRIM_ISCONS(_3518093_37);
if (True == _3518094_37) {
Obj _3518095_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518096_37 = PRIM_CAR(_3518095_37);
Obj _3518097_37 = PRIM_EQ(__symbolTable[21], _3518096_37);
if (True == _3518097_37) {
Obj _3518098_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518099_37 = PRIM_CDR(_3518098_37);
Obj _3518100_37 = PRIM_ISCONS(_3518099_37);
if (True == _3518100_37) {
Obj _3518101_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518102_37 = PRIM_CDR(_3518101_37);
Obj _3518103_37 = PRIM_CAR(_3518102_37);
Obj pkg = _3518103_37;
Obj _3518104_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518105_37 = PRIM_CDR(_3518104_37);
Obj _3518106_37 = PRIM_CDR(_3518105_37);
Obj _3518107_37 = PRIM_EQ(Nil, _3518106_37);
if (True == _3518107_37) {
Obj _3518108_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518108_37;
R[1] = remain;
struct frame __curr = {
.fn = clofun120,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516617_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516617_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516617_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516617_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516617_37);
return;
}
}
case 1:
{
Obj _3518109_37= co->res;
Obj remain = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
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
struct frame __curr = {
.fn = clofun118,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("#include \"types.h\"\n"));
return;
}
case 1:
{
Obj _3518090_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), makeNative(2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj _3518089_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame __curr = {
.fn = clofun118,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[25]), to, globals, _3518089_37);
return;
}
case 3:
{
Obj _3518088_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame __curr = {
.fn = clofun118,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[64]), bc);
return;
}
case 4:
{
Obj _3518087_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame __curr = {
.fn = clofun118,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("\n\n"));
return;
}
case 5:
{
Obj _3518084_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame __curr = {
.fn = clofun118,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[27]), makeNative(2, clofun116, 1, 1, to), bc);
return;
}
case 6:
{
Obj _3518083_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame __curr = {
.fn = clofun118,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("#include \"runtime.h\"\n\n"));
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
coraCall3(co, globalRef(__symbolTable[26]), closureRef(R[0], 0), group, closureRef(R[0], 1));
return;
}
}
}

static void clofun116(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
Obj _3518085_37 = PRIM_CAR(group);
struct frame __curr = {
.fn = clofun116,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), closureRef(R[0], 0), _3518085_37);
return;
}
case 1:
{
Obj _3518086_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString(";\n"));
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
struct frame __curr = {
.fn = clofun115,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("static __thread Obj* __symbolTable;\n\n"));
return;
}
case 1:
{
Obj _3518081_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj _3518080_37= co->res;
Obj to = R[1];
R[1] = to;
struct frame __curr = {
.fn = clofun115,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(";\n"));
return;
}
case 3:
{
Obj _3518079_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
struct frame __curr = {
.fn = clofun115,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), to, label);
return;
}
case 4:
{
Obj _3518078_37= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
struct frame __curr = {
.fn = clofun115,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.fn = "));
return;
}
case 5:
{
Obj _3518070_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
struct frame __curr = {
.fn = clofun115,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun114, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 6:
{
Obj _3518069_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame __curr = {
.fn = clofun115,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(");\n"));
return;
}
case 7:
{
Obj _3518068_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame __curr = {
.fn = clofun115,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), to, _3518068_37);
return;
}
case 8:
{
Obj _3518067_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame __curr = {
.fn = clofun115,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), globals);
return;
}
case 9:
{
Obj _3518066_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame __curr = {
.fn = clofun115,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
return;
}
case 10:
{
Obj _3518065_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame __curr = {
.fn = clofun115,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("void entry(struct Cora *co, int label, Obj *R) {\n"));
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
struct frame __curr = {
.fn = clofun114,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString("__symbolTable["));
return;
}
case 1:
{
Obj _3518076_37= co->res;
Obj acc = R[1];
Obj _3518077_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518077_37);
return;
}
case 2:
{
Obj _3518075_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun114,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString("\");\n"));
return;
}
case 3:
{
Obj _3518074_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun114,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), _3518074_37);
return;
}
case 4:
{
Obj _3518073_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame __curr = {
.fn = clofun114,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[24]), sym);
return;
}
case 5:
{
Obj _3518072_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
struct frame __curr = {
.fn = clofun114,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString("] = intern(\""));
return;
}
case 6:
{
Obj _3518071_37= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
struct frame __curr = {
.fn = clofun114,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 0), acc);
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
Obj _3518043_37 = PRIM_CAR(group);
Obj label = _3518043_37;
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame __curr = {
.fn = clofun113,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), group);
return;
}
case 1:
{
Obj _3518063_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n\n"));
return;
}
case 2:
{
Obj _3518062_37= co->res;
Obj to = R[1];
R[1] = to;
struct frame __curr = {
.fn = clofun113,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n"));
return;
}
case 3:
{
Obj _3518061_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
struct frame __curr = {
.fn = clofun113,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), _3518061_37);
return;
}
case 4:
{
Obj _3518053_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame __curr = {
.fn = clofun113,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), lam);
return;
}
case 5:
{
Obj _3518052_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame __curr = {
.fn = clofun113,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n"));
return;
}
case 6:
{
Obj _3518051_37= co->res;
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
struct frame __curr = {
.fn = clofun113,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {globals, label, params, to, first_45stmt};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
return;
}
case 7:
{
Obj _3518050_37= co->res;
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
struct frame __curr = {
.fn = clofun113,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {globals, label, Nil, to, params};
coraCall(co, globalRef(__symbolTable[45]), 5, __args);
return;
}
case 8:
{
Obj _3518049_37= co->res;
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
struct frame __curr = {
.fn = clofun113,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("case 0:\n{\n"));
return;
}
case 9:
{
Obj _3518048_37= co->res;
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
struct frame __curr = {
.fn = clofun113,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(" switch (label) {\n"));
return;
}
case 10:
{
Obj _3518047_37= co->res;
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
struct frame __curr = {
.fn = clofun113,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(" {\n"));
return;
}
case 11:
{
Obj _3518046_37= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = _3518046_37;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
struct frame __curr = {
.fn = clofun113,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), to, label);
return;
}
case 12:
{
Obj _3518045_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = _3518045_37;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
struct frame __curr = {
.fn = clofun113,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[101]), lam);
return;
}
case 13:
{
Obj _3518044_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = _3518044_37;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame __curr = {
.fn = clofun113,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), lam);
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
struct frame __curr = {
.fn = clofun112,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("case "));
return;
}
case 1:
{
Obj _3518059_37= co->res;
Obj acc = R[1];
Obj _3518060_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518060_37);
return;
}
case 2:
{
Obj _3518058_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun112,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("}\n"));
return;
}
case 3:
{
Obj _3518057_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame __curr = {
.fn = clofun112,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), _3518057_37, closureRef(R[0], 3), cont};
coraCall(co, globalRef(__symbolTable[40]), 5, __args);
return;
}
case 4:
{
Obj _3518056_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame __curr = {
.fn = clofun112,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), closureRef(R[0], 2));
return;
}
case 5:
{
Obj _3518055_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame __curr = {
.fn = clofun112,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(":\n{\n"));
return;
}
case 6:
{
Obj _3518054_37= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame __curr = {
.fn = clofun112,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun111(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516609_37 = R[1];
Obj _3516610_37 = R[2];
Obj _3518037_37 = PRIM_EQ(Nil, _3516610_37);
if (True == _3518037_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518038_37 = PRIM_ISCONS(_3516610_37);
if (True == _3518038_37) {
Obj _3518039_37 = PRIM_CAR(_3516610_37);
Obj x = _3518039_37;
Obj _3518040_37 = PRIM_CDR(_3516610_37);
Obj y = _3518040_37;
R[1] = _3516609_37;
R[2] = y;
struct frame __curr = {
.fn = clofun111,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3516609_37, x);
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
Obj _3518041_37= co->res;
Obj _3516609_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), _3516609_37, y);
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
struct frame __curr = {
.fn = clofun110,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[38]), globals);
return;
}
case 1:
{
Obj _3518035_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[34]), _3518035_37);
return;
}
case 2:
{
Obj _3518034_37= co->res;
struct frame __curr = {
.fn = clofun110,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[35]), _3518034_37);
return;
}
case 3:
{
Obj _3518033_37= co->res;
struct frame __curr = {
.fn = clofun110,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[36]), _3518033_37);
return;
}
case 4:
{
Obj _3518032_37= co->res;
struct frame __curr = {
.fn = clofun110,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[37]), _3518032_37);
return;
}
case 5:
{
Obj _3518031_37= co->res;
Obj exp = R[1];
struct frame __curr = {
.fn = clofun110,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3518031_37, exp);
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
struct frame __curr = {
.fn = clofun109,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), exp);
return;
}
case 1:
{
Obj _3518029_37= co->res;
Obj obj = R[1];
Obj fns = _3518029_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), obj, fns);
return;
}
case 2:
{
Obj _3518028_37= co->res;
Obj exp = R[1];
Obj obj = _3518028_37;
R[1] = obj;
struct frame __curr = {
.fn = clofun109,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[29]), exp);
return;
}
}
}

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516605_37 = R[1];
Obj _3516606_37 = R[2];
Obj _3518021_37 = PRIM_EQ(Nil, _3516606_37);
if (True == _3518021_37) {
coraReturn(co, _3516605_37);
return;
} else {
Obj _3518022_37 = PRIM_ISCONS(_3516606_37);
if (True == _3518022_37) {
Obj _3518023_37 = PRIM_CAR(_3516606_37);
Obj hd = _3518023_37;
Obj _3518024_37 = PRIM_CDR(_3516606_37);
Obj more = _3518024_37;
Obj _3518025_37 = makeCons(_3516605_37, Nil);
Obj _3518026_37 = makeCons(hd, _3518025_37);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), _3518026_37, more);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
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
struct frame __curr = {
.fn = clofun107,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[33]), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj _3518019_37= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj _3518018_37= co->res;
Obj v = R[1];
Obj e2 = _3518018_37;
R[1] = v;
struct frame __curr = {
.fn = clofun107,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[54]), v, e2);
return;
}
case 3:
{
Obj _3518017_37= co->res;
Obj v = R[1];
Obj e1 = _3518017_37;
R[1] = v;
struct frame __curr = {
.fn = clofun107,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[58]), Nil, e1);
return;
}
case 4:
{
Obj _3518016_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
struct frame __curr = {
.fn = clofun107,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), v, exp);
return;
}
case 5:
{
Obj _3518015_37= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
struct frame __curr = {
.fn = clofun107,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), Nil);
return;
}
case 6:
{
Obj _3518014_37= co->res;
Obj exp = R[1];
Obj v = _3518014_37;
R[1] = exp;
R[2] = v;
struct frame __curr = {
.fn = clofun107,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
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
coraCall2(co, globalRef(__symbolTable[63]), Nil, exp);
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
coraCall2(co, globalRef(__symbolTable[69]), exp, globalRef(__symbolTable[70]));
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
coraCall2(co, globalRef(__symbolTable[71]), Nil, exp);
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
coraCall3(co, globalRef(__symbolTable[97]), Nil, globals, exp);
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
struct frame __curr = {
.fn = clofun102,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString("static void "));
return;
}
case 1:
{
Obj _3518008_37= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(")"));
return;
}
case 2:
{
Obj _3518007_37= co->res;
Obj w = R[1];
R[1] = w;
struct frame __curr = {
.fn = clofun102,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString("(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj _3518006_37= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
struct frame __curr = {
.fn = clofun102,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), w, label);
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
struct frame __curr = {
.fn = clofun101,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString("clofun"));
return;
}
case 1:
{
Obj _3518004_37= co->res;
Obj w = R[1];
Obj label = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[47]), w, label);
return;
}
}
}

static void clofun100(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516599_37 = R[1];
Obj _3516600_37 = R[2];
Obj _3516601_37 = R[3];
Obj _3516602_37 = R[4];
Obj _3516603_37 = R[5];
Obj _3516604_37 = makeNative(1, clofun99, 0, 0);
Obj _3517982_37 = PRIM_ISCONS(_3516603_37);
if (True == _3517982_37) {
Obj _3517983_37 = PRIM_CAR(_3516603_37);
Obj _3517984_37 = PRIM_EQ(__symbolTable[62], _3517983_37);
if (True == _3517984_37) {
Obj _3517985_37 = PRIM_CDR(_3516603_37);
Obj _3517986_37 = PRIM_ISCONS(_3517985_37);
if (True == _3517986_37) {
Obj _3517987_37 = PRIM_CDR(_3516603_37);
Obj _3517988_37 = PRIM_CAR(_3517987_37);
Obj var = _3517988_37;
Obj _3517989_37 = PRIM_CDR(_3516603_37);
Obj _3517990_37 = PRIM_CDR(_3517989_37);
Obj _3517991_37 = PRIM_ISCONS(_3517990_37);
if (True == _3517991_37) {
Obj _3517992_37 = PRIM_CDR(_3516603_37);
Obj _3517993_37 = PRIM_CDR(_3517992_37);
Obj _3517994_37 = PRIM_CAR(_3517993_37);
Obj body = _3517994_37;
Obj _3517995_37 = PRIM_CDR(_3516603_37);
Obj _3517996_37 = PRIM_CDR(_3517995_37);
Obj _3517997_37 = PRIM_CDR(_3517996_37);
Obj fvs = _3517997_37;
R[1] = var;
R[2] = fvs;
R[3] = _3516599_37;
R[4] = _3516600_37;
R[5] = _3516601_37;
R[6] = _3516602_37;
R[7] = body;
struct frame __curr = {
.fn = clofun100,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), _3516602_37, makeCString("Obj "));
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
}
case 1:
{
Obj _3518002_37= co->res;
Obj _3516599_37 = R[1];
Obj _3516600_37 = R[2];
Obj _3516601_37 = R[3];
Obj _3516602_37 = R[4];
Obj body = R[5];
co->ctx.sp = R;
Obj __args[5] = {_3516599_37, _3516600_37, _3516601_37, _3516602_37, body};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
return;
}
case 2:
{
Obj _3518001_37= co->res;
Obj fvs = R[1];
Obj _3516599_37 = R[2];
Obj _3516600_37 = R[3];
Obj _3516601_37 = R[4];
Obj _3516602_37 = R[5];
Obj body = R[6];
R[1] = _3516599_37;
R[2] = _3516600_37;
R[3] = _3516601_37;
R[4] = _3516602_37;
R[5] = body;
struct frame __curr = {
.fn = clofun100,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {_3516599_37, _3516600_37, _3516601_37, _3516602_37, fvs};
coraCall(co, globalRef(__symbolTable[45]), 5, __args);
return;
}
case 3:
{
Obj _3518000_37= co->res;
Obj fvs = R[1];
Obj _3516599_37 = R[2];
Obj _3516600_37 = R[3];
Obj _3516601_37 = R[4];
Obj _3516602_37 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = _3516599_37;
R[3] = _3516600_37;
R[4] = _3516601_37;
R[5] = _3516602_37;
R[6] = body;
struct frame __curr = {
.fn = clofun100,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), _3516602_37, makeCString("= co->res;\n"));
return;
}
case 4:
{
Obj _3517998_37= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj _3516599_37 = R[3];
Obj _3516600_37 = R[4];
Obj _3516601_37 = R[5];
Obj _3516602_37 = R[6];
Obj body = R[7];
Obj _3517999_37 = PRIM_CAR(var);
R[1] = fvs;
R[2] = _3516599_37;
R[3] = _3516600_37;
R[4] = _3516601_37;
R[5] = _3516602_37;
R[6] = body;
struct frame __curr = {
.fn = clofun100,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), _3516602_37, _3517999_37);
return;
}
}
}

static void clofun99(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
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
Obj _3517968_37 = primGenSym();
Obj generate_45inst_45list_45h = _3517968_37;
Obj _3517979_37 = primSet(co, generate_45inst_45list_45h, makeNative(2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
struct frame __curr = {
.fn = clofun98,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), generate_45inst_45list_45h);
return;
}
case 1:
{
Obj _3517980_37= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, _3517980_37, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3517969_37 = PRIM_EQ(Nil, x);
if (True == _3517969_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517970_37 = PRIM_ISCONS(x);
if (True == _3517970_37) {
Obj _3517971_37 = PRIM_CAR(x);
Obj a = _3517971_37;
Obj _3517972_37 = PRIM_CDR(x);
Obj b = _3517972_37;
R[1] = b;
struct frame __curr = {
.fn = clofun97,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), a};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
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
Obj _3517977_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3517977_37, b);
return;
}
case 2:
{
Obj _3517976_37= co->res;
Obj b = R[1];
R[1] = b;
struct frame __curr = {
.fn = clofun97,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517978_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3517978_37, b);
return;
}
case 4:
{
Obj _3517974_37= co->res;
Obj b = R[1];
Obj _3517975_37 = primNot(_3517974_37);
if (True == _3517975_37) {
R[1] = b;
struct frame __curr = {
.fn = clofun97,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(", "));
return;
} else {
Nil;
R[1] = b;
struct frame __curr = {
.fn = clofun97,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
}
case 5:
{
Obj _3517973_37= co->res;
Obj b = R[1];
R[1] = b;
struct frame __curr = {
.fn = clofun97,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), b);
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
Obj _3517683_37 = primGenSym();
Obj generate_45inst_45h = _3517683_37;
Obj _3517965_37 = primSet(co, generate_45inst_45h, makeNative(3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
struct frame __curr = {
.fn = clofun96,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), generate_45inst_45h);
return;
}
case 1:
{
Obj _3517966_37= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, _3517966_37, x1, env1);
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
Obj _3517684_37 = primIsSymbol(x2);
if (True == _3517684_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj _3516585_37 = makeNative(2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj _3517952_37 = PRIM_ISCONS(x2);
if (True == _3517952_37) {
Obj _3517953_37 = PRIM_CAR(x2);
Obj _3517954_37 = PRIM_EQ(__symbolTable[93], _3517953_37);
if (True == _3517954_37) {
Obj _3517955_37 = PRIM_CDR(x2);
Obj _3517956_37 = PRIM_ISCONS(_3517955_37);
if (True == _3517956_37) {
Obj _3517957_37 = PRIM_CDR(x2);
Obj _3517958_37 = PRIM_CAR(_3517957_37);
Obj x = _3517958_37;
Obj _3517959_37 = PRIM_CDR(x2);
Obj _3517960_37 = PRIM_CDR(_3517959_37);
Obj _3517961_37 = PRIM_EQ(Nil, _3517960_37);
if (True == _3517961_37) {
R[1] = x;
struct frame __curr = {
.fn = clofun95,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("globalRef(__symbolTable["));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516585_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516585_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516585_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516585_37);
return;
}
}
}
case 1:
{
Obj _3517964_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("])"));
return;
}
case 2:
{
Obj _3517963_37= co->res;
struct frame __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), _3517963_37);
return;
}
case 3:
{
Obj _3517962_37= co->res;
Obj x = R[1];
struct frame __curr = {
.fn = clofun95,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[50]), x, closureRef(R[0], 2));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516586_37 = makeNative(2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj _3517940_37 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == _3517940_37) {
Obj _3517941_37 = PRIM_CAR(closureRef(R[0], 4));
Obj _3517942_37 = PRIM_EQ(__symbolTable[77], _3517941_37);
if (True == _3517942_37) {
Obj _3517943_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3517944_37 = PRIM_ISCONS(_3517943_37);
if (True == _3517944_37) {
Obj _3517945_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3517946_37 = PRIM_CAR(_3517945_37);
Obj idx = _3517946_37;
Obj _3517947_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3517948_37 = PRIM_CDR(_3517947_37);
Obj _3517949_37 = PRIM_EQ(Nil, _3517948_37);
if (True == _3517949_37) {
R[1] = idx;
struct frame __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("closureRef(R[0], "));
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
}
case 1:
{
Obj _3517951_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj _3517950_37= co->res;
Obj idx = R[1];
struct frame __curr = {
.fn = clofun94,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), idx);
return;
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516587_37 = makeNative(4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517916_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3517916_37) {
Obj _3517917_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3517918_37 = PRIM_EQ(__symbolTable[96], _3517917_37);
if (True == _3517918_37) {
Obj _3517919_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517920_37 = PRIM_ISCONS(_3517919_37);
if (True == _3517920_37) {
Obj _3517921_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517922_37 = PRIM_CAR(_3517921_37);
Obj x = _3517922_37;
Obj _3517923_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3517924_37 = PRIM_CDR(_3517923_37);
Obj _3517925_37 = PRIM_EQ(Nil, _3517924_37);
if (True == _3517925_37) {
Obj _3517926_37 = primIsSymbol(x);
if (True == _3517926_37) {
R[1] = x;
struct frame __curr = {
.fn = clofun93,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("__symbolTable["));
return;
} else {
R[1] = x;
struct frame __curr = {
.fn = clofun93,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516587_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516587_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516587_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516587_37);
return;
}
}
case 1:
{
Obj _3517929_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("]"));
return;
}
case 2:
{
Obj _3517928_37= co->res;
struct frame __curr = {
.fn = clofun93,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), _3517928_37);
return;
}
case 3:
{
Obj _3517927_37= co->res;
Obj x = R[1];
struct frame __curr = {
.fn = clofun93,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[50]), x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3517932_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 5:
{
Obj _3517931_37= co->res;
Obj x = R[1];
struct frame __curr = {
.fn = clofun93,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj _3517936_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("\")"));
return;
}
case 7:
{
Obj _3517935_37= co->res;
struct frame __curr = {
.fn = clofun93,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), _3517935_37);
return;
}
case 8:
{
Obj _3517934_37= co->res;
Obj x = R[1];
struct frame __curr = {
.fn = clofun93,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[41]), x);
return;
}
case 9:
{
Obj _3517930_37= co->res;
Obj x = R[1];
if (True == _3517930_37) {
R[1] = x;
struct frame __curr = {
.fn = clofun93,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("MAKE_NUMBER("));
return;
} else {
Obj _3517933_37 = primIsString(x);
if (True == _3517933_37) {
R[1] = x;
struct frame __curr = {
.fn = clofun93,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("makeCString(\""));
return;
} else {
Obj _3517937_37 = PRIM_EQ(x, Nil);
if (True == _3517937_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("Nil"));
return;
} else {
Obj _3517938_37 = PRIM_EQ(x, True);
if (True == _3517938_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("True"));
return;
} else {
Obj _3517939_37 = PRIM_EQ(x, False);
if (True == _3517939_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("False"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no cond match"));
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
Obj _3516588_37 = makeNative(3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3517881_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517881_37) {
Obj _3517882_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517883_37 = PRIM_EQ(__symbolTable[86], _3517882_37);
if (True == _3517883_37) {
Obj _3517884_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517885_37 = PRIM_ISCONS(_3517884_37);
if (True == _3517885_37) {
Obj _3517886_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517887_37 = PRIM_CAR(_3517886_37);
Obj a = _3517887_37;
Obj _3517888_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517889_37 = PRIM_CDR(_3517888_37);
Obj _3517890_37 = PRIM_ISCONS(_3517889_37);
if (True == _3517890_37) {
Obj _3517891_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517892_37 = PRIM_CDR(_3517891_37);
Obj _3517893_37 = PRIM_CAR(_3517892_37);
Obj b = _3517893_37;
Obj _3517894_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517895_37 = PRIM_CDR(_3517894_37);
Obj _3517896_37 = PRIM_CDR(_3517895_37);
Obj _3517897_37 = PRIM_ISCONS(_3517896_37);
if (True == _3517897_37) {
Obj _3517898_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517899_37 = PRIM_CDR(_3517898_37);
Obj _3517900_37 = PRIM_CDR(_3517899_37);
Obj _3517901_37 = PRIM_CAR(_3517900_37);
Obj c = _3517901_37;
Obj _3517902_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517903_37 = PRIM_CDR(_3517902_37);
Obj _3517904_37 = PRIM_CDR(_3517903_37);
Obj _3517905_37 = PRIM_CDR(_3517904_37);
Obj _3517906_37 = PRIM_EQ(Nil, _3517905_37);
if (True == _3517906_37) {
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
.fn = clofun92,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516588_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516588_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516588_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516588_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516588_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516588_37);
return;
}
}
case 1:
{
Obj _3517914_37= co->res;
Obj a = R[1];
Obj c = R[2];
Obj _3517915_37 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, _3517914_37, c, _3517915_37);
return;
}
case 2:
{
Obj _3517913_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame __curr = {
.fn = clofun92,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517912_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame __curr = {
.fn = clofun92,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 4:
{
Obj _3517911_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
struct frame __curr = {
.fn = clofun92,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517911_37, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj _3517910_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
.fn = clofun92,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3517909_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
.fn = clofun92,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(" = "));
return;
}
case 7:
{
Obj _3517908_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
.fn = clofun92,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), a);
return;
}
case 8:
{
Obj _3517907_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
.fn = clofun92,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("Obj "));
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516589_37 = makeNative(4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517857_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517857_37) {
Obj _3517858_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517859_37 = PRIM_ISCONS(_3517858_37);
if (True == _3517859_37) {
Obj _3517860_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517861_37 = PRIM_CAR(_3517860_37);
Obj _3517862_37 = PRIM_EQ(__symbolTable[90], _3517861_37);
if (True == _3517862_37) {
Obj _3517863_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517864_37 = PRIM_CDR(_3517863_37);
Obj _3517865_37 = PRIM_ISCONS(_3517864_37);
if (True == _3517865_37) {
Obj _3517866_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517867_37 = PRIM_CDR(_3517866_37);
Obj _3517868_37 = PRIM_CAR(_3517867_37);
Obj f = _3517868_37;
Obj _3517869_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517870_37 = PRIM_CDR(_3517869_37);
Obj _3517871_37 = PRIM_CDR(_3517870_37);
Obj _3517872_37 = PRIM_EQ(Nil, _3517871_37);
if (True == _3517872_37) {
Obj _3517873_37 = PRIM_CDR(closureRef(R[0], 1));
Obj args = _3517873_37;
R[1] = f;
R[2] = args;
struct frame __curr = {
.fn = clofun91,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[102]), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516589_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516589_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516589_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516589_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516589_37);
return;
}
}
case 1:
{
Obj _3517878_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj _3517877_37= co->res;
Obj args = R[1];
struct frame __curr = {
.fn = clofun91,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 3:
{
Obj _3517880_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 4:
{
Obj _3517879_37= co->res;
Obj args = R[1];
struct frame __curr = {
.fn = clofun91,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 5:
{
Obj _3517875_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517876_37 = PRIM_EQ(f, __symbolTable[121]);
if (True == _3517876_37) {
R[1] = args;
struct frame __curr = {
.fn = clofun91,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("(co, "));
return;
} else {
R[1] = args;
struct frame __curr = {
.fn = clofun91,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("("));
return;
}
}
case 6:
{
Obj _3517874_37= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
struct frame __curr = {
.fn = clofun91,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), _3517874_37);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516590_37 = makeNative(5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517822_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517822_37) {
Obj _3517823_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517824_37 = PRIM_EQ(__symbolTable[87], _3517823_37);
if (True == _3517824_37) {
Obj _3517825_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517826_37 = PRIM_ISCONS(_3517825_37);
if (True == _3517826_37) {
Obj _3517827_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517828_37 = PRIM_CAR(_3517827_37);
Obj a = _3517828_37;
Obj _3517829_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517830_37 = PRIM_CDR(_3517829_37);
Obj _3517831_37 = PRIM_ISCONS(_3517830_37);
if (True == _3517831_37) {
Obj _3517832_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517833_37 = PRIM_CDR(_3517832_37);
Obj _3517834_37 = PRIM_CAR(_3517833_37);
Obj b = _3517834_37;
Obj _3517835_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517836_37 = PRIM_CDR(_3517835_37);
Obj _3517837_37 = PRIM_CDR(_3517836_37);
Obj _3517838_37 = PRIM_ISCONS(_3517837_37);
if (True == _3517838_37) {
Obj _3517839_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517840_37 = PRIM_CDR(_3517839_37);
Obj _3517841_37 = PRIM_CDR(_3517840_37);
Obj _3517842_37 = PRIM_CAR(_3517841_37);
Obj c = _3517842_37;
Obj _3517843_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517844_37 = PRIM_CDR(_3517843_37);
Obj _3517845_37 = PRIM_CDR(_3517844_37);
Obj _3517846_37 = PRIM_CDR(_3517845_37);
Obj _3517847_37 = PRIM_EQ(Nil, _3517846_37);
if (True == _3517847_37) {
R[1] = a;
R[2] = b;
R[3] = c;
struct frame __curr = {
.fn = clofun90,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("if (True == "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516590_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516590_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516590_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516590_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516590_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516590_37);
return;
}
}
case 1:
{
Obj _3517856_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("}\n"));
return;
}
case 2:
{
Obj _3517855_37= co->res;
Obj c = R[1];
struct frame __curr = {
.fn = clofun90,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517855_37, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517854_37= co->res;
Obj c = R[1];
R[1] = c;
struct frame __curr = {
.fn = clofun90,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3517853_37= co->res;
Obj c = R[1];
R[1] = c;
struct frame __curr = {
.fn = clofun90,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("} else {\n"));
return;
}
case 5:
{
Obj _3517852_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
struct frame __curr = {
.fn = clofun90,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517852_37, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3517851_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
struct frame __curr = {
.fn = clofun90,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 7:
{
Obj _3517850_37= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
struct frame __curr = {
.fn = clofun90,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(") {\n"));
return;
}
case 8:
{
Obj _3517849_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
struct frame __curr = {
.fn = clofun90,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517849_37, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj _3517848_37= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
struct frame __curr = {
.fn = clofun90,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516591_37 = makeNative(3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj _3517784_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517784_37) {
Obj _3517785_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517786_37 = PRIM_EQ(__symbolTable[78], _3517785_37);
if (True == _3517786_37) {
Obj _3517787_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517788_37 = PRIM_ISCONS(_3517787_37);
if (True == _3517788_37) {
Obj _3517789_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517790_37 = PRIM_CAR(_3517789_37);
Obj label = _3517790_37;
Obj _3517791_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517792_37 = PRIM_CDR(_3517791_37);
Obj _3517793_37 = PRIM_ISCONS(_3517792_37);
if (True == _3517793_37) {
Obj _3517794_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517795_37 = PRIM_CDR(_3517794_37);
Obj _3517796_37 = PRIM_CAR(_3517795_37);
Obj nargs = _3517796_37;
Obj _3517797_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517798_37 = PRIM_CDR(_3517797_37);
Obj _3517799_37 = PRIM_CDR(_3517798_37);
Obj _3517800_37 = PRIM_ISCONS(_3517799_37);
if (True == _3517800_37) {
Obj _3517801_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517802_37 = PRIM_CDR(_3517801_37);
Obj _3517803_37 = PRIM_CDR(_3517802_37);
Obj _3517804_37 = PRIM_CAR(_3517803_37);
Obj nframe = _3517804_37;
Obj _3517805_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517806_37 = PRIM_CDR(_3517805_37);
Obj _3517807_37 = PRIM_CDR(_3517806_37);
Obj _3517808_37 = PRIM_CDR(_3517807_37);
Obj frees = _3517808_37;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("makeNative("));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516591_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516591_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516591_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516591_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516591_37);
return;
}
}
case 1:
{
Obj _3517821_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj _3517820_37= co->res;
Obj frees = R[1];
struct frame __curr = {
.fn = clofun89,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 3:
{
Obj _3517818_37= co->res;
Obj frees = R[1];
Obj _3517819_37 = primNot(_3517818_37);
if (True == _3517819_37) {
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
}
case 4:
{
Obj _3517817_37= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), frees);
return;
}
case 5:
{
Obj _3517816_37= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), _3517816_37);
return;
}
case 6:
{
Obj _3517815_37= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), frees);
return;
}
case 7:
{
Obj _3517814_37= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 8:
{
Obj _3517813_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 9:
{
Obj _3517812_37= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 10:
{
Obj _3517811_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), closureRef(R[0], 5), label);
return;
}
case 11:
{
Obj _3517810_37= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 12:
{
Obj _3517809_37= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nframe);
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516592_37 = makeNative(2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3517763_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517763_37) {
Obj _3517764_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517765_37 = PRIM_EQ(__symbolTable[85], _3517764_37);
if (True == _3517765_37) {
Obj _3517766_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517767_37 = PRIM_ISCONS(_3517766_37);
if (True == _3517767_37) {
Obj _3517768_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517769_37 = PRIM_CAR(_3517768_37);
Obj a = _3517769_37;
Obj _3517770_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517771_37 = PRIM_CDR(_3517770_37);
Obj _3517772_37 = PRIM_ISCONS(_3517771_37);
if (True == _3517772_37) {
Obj _3517773_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517774_37 = PRIM_CDR(_3517773_37);
Obj _3517775_37 = PRIM_CAR(_3517774_37);
Obj b = _3517775_37;
Obj _3517776_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517777_37 = PRIM_CDR(_3517776_37);
Obj _3517778_37 = PRIM_CDR(_3517777_37);
Obj _3517779_37 = PRIM_EQ(Nil, _3517778_37);
if (True == _3517779_37) {
R[1] = a;
R[2] = b;
struct frame __curr = {
.fn = clofun88,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516592_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516592_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516592_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516592_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516592_37);
return;
}
}
case 1:
{
Obj _3517783_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, _3517783_37, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj _3517782_37= co->res;
Obj b = R[1];
R[1] = b;
struct frame __curr = {
.fn = clofun88,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517781_37= co->res;
Obj b = R[1];
R[1] = b;
struct frame __curr = {
.fn = clofun88,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 4:
{
Obj _3517780_37= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
struct frame __curr = {
.fn = clofun88,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517780_37, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516593_37 = makeNative(2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517749_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517749_37) {
Obj _3517750_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517751_37 = PRIM_EQ(__symbolTable[72], _3517750_37);
if (True == _3517751_37) {
Obj _3517752_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517753_37 = PRIM_ISCONS(_3517752_37);
if (True == _3517753_37) {
Obj _3517754_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517755_37 = PRIM_CAR(_3517754_37);
Obj x = _3517755_37;
Obj _3517756_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517757_37 = PRIM_CDR(_3517756_37);
Obj _3517758_37 = PRIM_EQ(Nil, _3517757_37);
if (True == _3517758_37) {
R[1] = x;
struct frame __curr = {
.fn = clofun87,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516593_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516593_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516593_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516593_37);
return;
}
}
case 1:
{
Obj _3517762_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj _3517761_37= co->res;
struct frame __curr = {
.fn = clofun87,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 3:
{
Obj _3517760_37= co->res;
Obj x = R[1];
struct frame __curr = {
.fn = clofun87,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517760_37, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3517759_37= co->res;
Obj x = R[1];
R[1] = x;
struct frame __curr = {
.fn = clofun87,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516594_37 = makeNative(3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517736_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3517736_37) {
Obj _3517737_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3517738_37 = PRIM_EQ(__symbolTable[74], _3517737_37);
if (True == _3517738_37) {
Obj _3517739_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517740_37 = PRIM_ISCONS(_3517739_37);
if (True == _3517740_37) {
Obj _3517741_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517742_37 = PRIM_CAR(_3517741_37);
Obj exp = _3517742_37;
Obj _3517743_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3517744_37 = PRIM_CDR(_3517743_37);
Obj _3517745_37 = PRIM_EQ(Nil, _3517744_37);
if (True == _3517745_37) {
R[1] = exp;
struct frame __curr = {
.fn = clofun86,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516594_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516594_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516594_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516594_37);
return;
}
}
case 1:
{
Obj _3517748_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj _3517747_37= co->res;
Obj exp = R[1];
struct frame __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517747_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517746_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame __curr = {
.fn = clofun86,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516595_37 = makeNative(4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3517708_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517708_37) {
Obj _3517709_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517710_37 = PRIM_EQ(__symbolTable[73], _3517709_37);
if (True == _3517710_37) {
Obj _3517711_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517712_37 = PRIM_ISCONS(_3517711_37);
if (True == _3517712_37) {
Obj _3517713_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517714_37 = PRIM_CAR(_3517713_37);
Obj exp = _3517714_37;
Obj _3517715_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517716_37 = PRIM_CDR(_3517715_37);
Obj _3517717_37 = PRIM_ISCONS(_3517716_37);
if (True == _3517717_37) {
Obj _3517718_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517719_37 = PRIM_CDR(_3517718_37);
Obj _3517720_37 = PRIM_CAR(_3517719_37);
Obj label = _3517720_37;
Obj _3517721_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517722_37 = PRIM_CDR(_3517721_37);
Obj _3517723_37 = PRIM_CDR(_3517722_37);
Obj fvs = _3517723_37;
R[1] = label;
R[2] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs};
coraCall(co, globalRef(__symbolTable[49]), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516595_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516595_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516595_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516595_37);
return;
}
}
case 1:
{
Obj _3517735_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj _3517734_37= co->res;
Obj exp = R[1];
struct frame __curr = {
.fn = clofun85,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517734_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3517733_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 4:
{
Obj _3517732_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("vecAppend(&co->callstack, __curr);\n"));
return;
}
case 5:
{
Obj _3517731_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("};\n"));
return;
}
case 6:
{
Obj _3517730_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(".sp = co->ctx.sp,\n"));
return;
}
case 7:
{
Obj _3517729_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(",\n.bp = R,\n"));
return;
}
case 8:
{
Obj _3517728_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), label);
return;
}
case 9:
{
Obj _3517727_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(",\n.label = "));
return;
}
case 10:
{
Obj _3517726_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 11:
{
Obj _3517725_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(".fn = "));
return;
}
case 12:
{
Obj _3517724_37= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame __curr = {
.fn = clofun85,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("struct frame __curr = {\n"));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517685_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517685_37) {
Obj _3517686_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517686_37;
Obj _3517687_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517687_37;
R[1] = f;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 18,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3517699_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", __args);\n"));
return;
}
case 2:
{
Obj _3517698_37= co->res;
Obj nargs = R[1];
struct frame __curr = {
.fn = clofun84,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 3:
{
Obj _3517697_37= co->res;
Obj nargs = R[1];
R[1] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 4:
{
Obj _3517696_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517696_37, f, closureRef(R[0], 4));
return;
}
case 5:
{
Obj _3517695_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 6:
{
Obj _3517694_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall(co, "));
return;
}
case 7:
{
Obj _3517693_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("};\n"));
return;
}
case 8:
{
Obj _3517692_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = f;
R[2] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 9:
{
Obj _3517691_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("] = {"));
return;
}
case 10:
{
Obj _3517690_37= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 11:
{
Obj _3517707_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 12:
{
Obj _3517706_37= co->res;
Obj args = R[1];
struct frame __curr = {
.fn = clofun84,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 13:
{
Obj _3517704_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3517705_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3517705_37) {
R[1] = args;
struct frame __curr = {
.fn = clofun84,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
}
case 14:
{
Obj _3517703_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517703_37, f, closureRef(R[0], 4));
return;
}
case 15:
{
Obj _3517702_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 14,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 16:
{
Obj _3517701_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 15,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("(co, "));
return;
}
case 17:
{
Obj _3517700_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 16,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 18:
{
Obj _3517688_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = _3517688_37;
Obj _3517689_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3517689_37) {
R[1] = args;
R[2] = f;
R[3] = nargs;
struct frame __curr = {
.fn = clofun84,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("Obj __args["));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 17,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall"));
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun82, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
struct frame __curr = {
.fn = clofun82,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("Obj "));
return;
}
case 1:
{
Obj _3517680_37= co->res;
Obj acc = R[1];
Obj _3517681_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3517681_37);
return;
}
case 2:
{
Obj _3517679_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun82,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("];\n"));
return;
}
case 3:
{
Obj _3517678_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun82,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj _3517677_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun82,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(" = R["));
return;
}
case 5:
{
Obj _3517676_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame __curr = {
.fn = clofun82,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun80, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
struct frame __curr = {
.fn = clofun80,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("R["));
return;
}
case 1:
{
Obj _3517673_37= co->res;
Obj acc = R[1];
Obj _3517674_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3517674_37);
return;
}
case 2:
{
Obj _3517672_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun80,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 3:
{
Obj _3517671_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame __curr = {
.fn = clofun80,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
return;
}
case 4:
{
Obj _3517670_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
struct frame __curr = {
.fn = clofun80,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("] = "));
return;
}
case 5:
{
Obj _3517669_37= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
struct frame __curr = {
.fn = clofun80,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
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
coraCall3(co, globalRef(__symbolTable[51]), MAKE_NUMBER(0), sym, globals);
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
struct frame __curr = {
.fn = clofun78,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), globals);
return;
}
case 1:
{
Obj _3517662_37= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == _3517662_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3517663_37 = PRIM_CAR(globals);
Obj _3517664_37 = PRIM_EQ(sym, _3517663_37);
if (True == _3517664_37) {
coraReturn(co, idx);
return;
} else {
Obj _3517665_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3517666_37 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[51]), _3517665_37, sym, _3517666_37);
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
struct frame __curr = {
.fn = clofun77,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), globals);
return;
}
case 1:
{
Obj _3517658_37= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == _3517658_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517659_37 = makeCons(sym, val);
Obj _3517660_37 = primSet(co, globals, _3517659_37);
coraReturn(co, _3517660_37);
return;
}
}
case 2:
{
Obj _3517657_37= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = _3517657_37;
R[1] = sym;
R[2] = val;
R[3] = globals;
struct frame __curr = {
.fn = clofun77,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), sym, val);
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
Obj _3517650_37 = primGenSym();
Obj tmp = _3517650_37;
R[1] = x;
R[2] = tmp;
struct frame __curr = {
.fn = clofun76,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, k, tmp);
return;
}
case 1:
{
Obj _3517651_37= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj _3517652_37 = makeCons(_3517651_37, Nil);
Obj _3517653_37 = makeCons(x, _3517652_37);
Obj _3517654_37 = makeCons(tmp, _3517653_37);
Obj _3517655_37 = makeCons(__symbolTable[86], _3517654_37);
coraReturn(co, _3517655_37);
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
struct frame __curr = {
.fn = clofun75,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj _3517648_37= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj _3517643_37= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = _3517643_37;
Obj _3517644_37 = makeCons(val, Nil);
Obj _3517645_37 = makeCons(idx, _3517644_37);
Obj _3517646_37 = makeCons(_3517645_37, cur);
Obj cur1 = _3517646_37;
Obj _3517647_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
struct frame __curr = {
.fn = clofun75,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), _3517647_37);
return;
}
case 3:
{
Obj _3517642_37= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = _3517642_37;
R[1] = val;
R[2] = idx;
R[3] = v;
struct frame __curr = {
.fn = clofun75,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516580_37 = R[1];
Obj _3516581_37 = R[2];
Obj _3516582_37 = makeNative(1, clofun73, 0, 2, _3516580_37, _3516581_37);
Obj _3517593_37 = PRIM_ISCONS(_3516581_37);
if (True == _3517593_37) {
Obj _3517594_37 = PRIM_CAR(_3516581_37);
Obj _3517595_37 = PRIM_EQ(__symbolTable[78], _3517594_37);
if (True == _3517595_37) {
Obj _3517596_37 = PRIM_CDR(_3516581_37);
Obj _3517597_37 = PRIM_ISCONS(_3517596_37);
if (True == _3517597_37) {
Obj _3517598_37 = PRIM_CDR(_3516581_37);
Obj _3517599_37 = PRIM_CAR(_3517598_37);
Obj _3517600_37 = PRIM_ISCONS(_3517599_37);
if (True == _3517600_37) {
Obj _3517601_37 = PRIM_CDR(_3516581_37);
Obj _3517602_37 = PRIM_CAR(_3517601_37);
Obj _3517603_37 = PRIM_CAR(_3517602_37);
Obj _3517604_37 = PRIM_EQ(__symbolTable[89], _3517603_37);
if (True == _3517604_37) {
Obj _3517605_37 = PRIM_CDR(_3516581_37);
Obj _3517606_37 = PRIM_CAR(_3517605_37);
Obj _3517607_37 = PRIM_CDR(_3517606_37);
Obj _3517608_37 = PRIM_ISCONS(_3517607_37);
if (True == _3517608_37) {
Obj _3517609_37 = PRIM_CDR(_3516581_37);
Obj _3517610_37 = PRIM_CAR(_3517609_37);
Obj _3517611_37 = PRIM_CDR(_3517610_37);
Obj _3517612_37 = PRIM_CAR(_3517611_37);
Obj params = _3517612_37;
Obj _3517613_37 = PRIM_CDR(_3516581_37);
Obj _3517614_37 = PRIM_CAR(_3517613_37);
Obj _3517615_37 = PRIM_CDR(_3517614_37);
Obj _3517616_37 = PRIM_CDR(_3517615_37);
Obj _3517617_37 = PRIM_ISCONS(_3517616_37);
if (True == _3517617_37) {
Obj _3517618_37 = PRIM_CDR(_3516581_37);
Obj _3517619_37 = PRIM_CAR(_3517618_37);
Obj _3517620_37 = PRIM_CDR(_3517619_37);
Obj _3517621_37 = PRIM_CDR(_3517620_37);
Obj _3517622_37 = PRIM_CAR(_3517621_37);
Obj body = _3517622_37;
Obj _3517623_37 = PRIM_CDR(_3516581_37);
Obj _3517624_37 = PRIM_CAR(_3517623_37);
Obj _3517625_37 = PRIM_CDR(_3517624_37);
Obj _3517626_37 = PRIM_CDR(_3517625_37);
Obj _3517627_37 = PRIM_CDR(_3517626_37);
Obj _3517628_37 = PRIM_EQ(Nil, _3517627_37);
if (True == _3517628_37) {
Obj _3517629_37 = PRIM_CDR(_3516581_37);
Obj _3517630_37 = PRIM_CDR(_3517629_37);
Obj fvs = _3517630_37;
R[1] = _3516580_37;
R[2] = params;
R[3] = fvs;
struct frame __curr = {
.fn = clofun74,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), _3516580_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516582_37);
return;
}
}
case 1:
{
Obj _3517636_37= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj _3517637_37 = makeCons(nframe, fvs);
Obj _3517638_37 = makeCons(_3517636_37, _3517637_37);
Obj _3517639_37 = makeCons(cur, _3517638_37);
Obj _3517640_37 = makeCons(__symbolTable[78], _3517639_37);
coraReturn(co, _3517640_37);
return;
}
case 2:
{
Obj _3517635_37= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
struct frame __curr = {
.fn = clofun74,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), params);
return;
}
case 3:
{
Obj _3517634_37= co->res;
Obj _3516580_37 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = _3517634_37;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
struct frame __curr = {
.fn = clofun74,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[54]), _3516580_37, body2);
return;
}
case 4:
{
Obj _3517633_37= co->res;
Obj _3516580_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = _3517633_37;
R[1] = _3516580_37;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
struct frame __curr = {
.fn = clofun74,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[57]), body2);
return;
}
case 5:
{
Obj _3517632_37= co->res;
Obj body1 = R[1];
Obj _3516580_37 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = _3517632_37;
R[1] = _3516580_37;
R[2] = params;
R[3] = fvs;
R[4] = cur;
struct frame __curr = {
.fn = clofun74,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[58]), params, body1);
return;
}
case 6:
{
Obj _3517631_37= co->res;
Obj _3516580_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = _3517631_37;
R[1] = body1;
R[2] = _3516580_37;
R[3] = params;
R[4] = fvs;
struct frame __curr = {
.fn = clofun74,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), _3516580_37, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517591_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517591_37) {
struct frame __curr = {
.fn = clofun73,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[56]), closureRef(R[0], 0));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3517592_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3517592_37, closureRef(R[0], 1));
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
struct frame __curr = {
.fn = clofun72,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), lam);
return;
}
case 1:
{
Obj _3517589_37= co->res;
Obj _3517588_37 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun71, 2, 0), _3517588_37, _3517589_37);
return;
}
case 2:
{
Obj _3517583_37= co->res;
Obj lam = R[1];
Obj nargs = _3517583_37;
Obj _3517588_37 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = _3517588_37;
struct frame __curr = {
.fn = clofun72,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), lam);
return;
}
case 3:
{
Obj _3517582_37= co->res;
Obj lam = R[1];
R[1] = lam;
struct frame __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), _3517582_37);
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
struct frame __curr = {
.fn = clofun71,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), x);
return;
}
case 1:
{
Obj _3517585_37= co->res;
Obj acc = R[1];
Obj _3517586_37 = PRIM_ADD(_3517585_37, MAKE_NUMBER(1));
Obj len = _3517586_37;
Obj _3517587_37 = PRIM_GT(len, acc);
if (True == _3517587_37) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj _3517584_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun71,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), _3517584_37);
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
coraCall3(co, globalRef(__symbolTable[61]), body, Nil, makeNative(3, clofun69, 2, 1, params));
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
struct frame __curr = {
.fn = clofun69,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), conts);
return;
}
case 1:
{
Obj _3517577_37= co->res;
Obj body1 = R[1];
Obj _3517578_37 = makeCons(body1, _3517577_37);
Obj _3517579_37 = makeCons(closureRef(R[0], 0), _3517578_37);
Obj _3517580_37 = makeCons(__symbolTable[89], _3517579_37);
coraReturn(co, _3517580_37);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516574_37 = R[1];
Obj _3516575_37 = R[2];
Obj _3516576_37 = R[3];
Obj _3516577_37 = R[4];
Obj _3517571_37 = PRIM_EQ(Nil, _3516574_37);
if (True == _3517571_37) {
co->ctx.sp = R;
coraCall2(co, _3516577_37, _3516576_37, _3516575_37);
return;
} else {
Obj _3517572_37 = PRIM_ISCONS(_3516574_37);
if (True == _3517572_37) {
Obj _3517573_37 = PRIM_CAR(_3516574_37);
Obj f = _3517573_37;
Obj _3517574_37 = PRIM_CDR(_3516574_37);
Obj args = _3517574_37;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), f, _3516575_37, makeNative(3, clofun67, 2, 3, args, _3516576_37, _3516577_37));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
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
coraCall4(co, globalRef(__symbolTable[60]), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative(3, clofun66, 2, 2, closureRef(R[0], 2), f1));
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
Obj _3517575_37 = makeCons(closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3517575_37, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516568_37 = R[1];
Obj _3516569_37 = R[2];
Obj _3516570_37 = R[3];
Obj _3516644_37 = makeNative(2, clofun64, 1, 3, _3516568_37, _3516569_37, _3516570_37);
Obj _3517568_37 = primIsSymbol(_3516568_37);
if (True == _3517568_37) {
co->ctx.sp = R;
coraCall1(co, _3516644_37, True);
return;
} else {
R[1] = _3516644_37;
struct frame __curr = {
.fn = clofun65,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3516568_37);
return;
}
}
case 1:
{
Obj _3517569_37= co->res;
Obj _3516644_37 = R[1];
if (True == _3517569_37) {
co->ctx.sp = R;
coraCall1(co, _3516644_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516644_37, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516645_37 = R[1];
if (True == _3516645_37) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3516572_37 = makeNative(1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517544_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517544_37) {
Obj _3517545_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517546_37 = PRIM_EQ(__symbolTable[73], _3517545_37);
if (True == _3517546_37) {
Obj _3517547_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517548_37 = PRIM_ISCONS(_3517547_37);
if (True == _3517548_37) {
Obj _3517549_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517550_37 = PRIM_CAR(_3517549_37);
Obj exp = _3517550_37;
Obj _3517551_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517552_37 = PRIM_CDR(_3517551_37);
Obj _3517553_37 = PRIM_ISCONS(_3517552_37);
if (True == _3517553_37) {
Obj _3517554_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517555_37 = PRIM_CDR(_3517554_37);
Obj _3517556_37 = PRIM_CAR(_3517555_37);
Obj cont = _3517556_37;
Obj _3517557_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517558_37 = PRIM_CDR(_3517557_37);
Obj _3517559_37 = PRIM_CDR(_3517558_37);
Obj _3517560_37 = PRIM_EQ(Nil, _3517559_37);
if (True == _3517560_37) {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), cont, closureRef(R[0], 1), makeNative(4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516572_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516572_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516572_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516572_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516572_37);
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
struct frame __curr = {
.fn = clofun63,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), cont1);
return;
}
case 1:
{
Obj _3517562_37= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj _3517563_37 = PRIM_ADD(_3517562_37, MAKE_NUMBER(1));
Obj _3517564_37 = makeCons(_3517563_37, fvs);
Obj _3517565_37 = makeCons(closureRef(R[0], 1), _3517564_37);
Obj _3517566_37 = makeCons(__symbolTable[73], _3517565_37);
Obj _3517567_37 = makeCons(cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3517566_37, _3517567_37);
return;
}
case 2:
{
Obj _3517561_37= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = _3517561_37;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
struct frame __curr = {
.fn = clofun63,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), conts1);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517540_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517540_37) {
Obj _3517541_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517541_37;
Obj _3517542_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517542_37;
Obj _3517543_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[60]), _3517543_37, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516560_37 = R[1];
Obj _3516561_37 = R[2];
R[1] = _3516561_37;
R[2] = _3516560_37;
struct frame __curr = {
.fn = clofun61,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3516561_37);
return;
}
case 1:
{
Obj _3517535_37= co->res;
Obj args = R[1];
Obj _3517536_37 = makeCons(_3517535_37, Nil);
Obj _3517537_37 = makeCons(args, _3517536_37);
Obj _3517538_37 = makeCons(__symbolTable[89], _3517537_37);
coraReturn(co, _3517538_37);
return;
}
case 2:
{
Obj _3517463_37= co->res;
Obj _3516561_37 = R[1];
Obj _3516560_37 = R[2];
if (True == _3517463_37) {
coraReturn(co, _3516561_37);
return;
} else {
Obj _3517464_37 = primIsSymbol(_3516561_37);
if (True == _3517464_37) {
coraReturn(co, _3516561_37);
return;
} else {
Obj _3516564_37 = makeNative(4, clofun60, 0, 2, _3516561_37, _3516560_37);
Obj _3517518_37 = PRIM_ISCONS(_3516561_37);
if (True == _3517518_37) {
Obj _3517519_37 = PRIM_CAR(_3516561_37);
Obj _3517520_37 = PRIM_EQ(__symbolTable[89], _3517519_37);
if (True == _3517520_37) {
Obj _3517521_37 = PRIM_CDR(_3516561_37);
Obj _3517522_37 = PRIM_ISCONS(_3517521_37);
if (True == _3517522_37) {
Obj _3517523_37 = PRIM_CDR(_3516561_37);
Obj _3517524_37 = PRIM_CAR(_3517523_37);
Obj args = _3517524_37;
Obj _3517525_37 = PRIM_CDR(_3516561_37);
Obj _3517526_37 = PRIM_CDR(_3517525_37);
Obj _3517527_37 = PRIM_ISCONS(_3517526_37);
if (True == _3517527_37) {
Obj _3517528_37 = PRIM_CDR(_3516561_37);
Obj _3517529_37 = PRIM_CDR(_3517528_37);
Obj _3517530_37 = PRIM_CAR(_3517529_37);
Obj body = _3517530_37;
Obj _3517531_37 = PRIM_CDR(_3516561_37);
Obj _3517532_37 = PRIM_CDR(_3517531_37);
Obj _3517533_37 = PRIM_CDR(_3517532_37);
Obj _3517534_37 = PRIM_EQ(Nil, _3517533_37);
if (True == _3517534_37) {
R[1] = args;
struct frame __curr = {
.fn = clofun61,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), _3516560_37, body);
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
}
}
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516565_37 = makeNative(3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517493_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517493_37) {
Obj _3517494_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517495_37 = PRIM_EQ(__symbolTable[75], _3517494_37);
if (True == _3517495_37) {
Obj _3517496_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517497_37 = PRIM_ISCONS(_3517496_37);
if (True == _3517497_37) {
Obj _3517498_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517499_37 = PRIM_CAR(_3517498_37);
Obj val = _3517499_37;
Obj _3517500_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517501_37 = PRIM_CDR(_3517500_37);
Obj _3517502_37 = PRIM_ISCONS(_3517501_37);
if (True == _3517502_37) {
Obj _3517503_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517504_37 = PRIM_CDR(_3517503_37);
Obj _3517505_37 = PRIM_CAR(_3517504_37);
Obj body = _3517505_37;
Obj _3517506_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517507_37 = PRIM_CDR(_3517506_37);
Obj _3517508_37 = PRIM_CDR(_3517507_37);
Obj _3517509_37 = PRIM_EQ(Nil, _3517508_37);
if (True == _3517509_37) {
R[1] = body;
R[2] = val;
struct frame __curr = {
.fn = clofun60,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), body);
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
case 1:
{
Obj _3517514_37= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj _3517515_37 = makeCons(_3517514_37, fvs2);
Obj _3517516_37 = makeCons(val, _3517515_37);
Obj _3517517_37 = makeCons(__symbolTable[62], _3517516_37);
coraReturn(co, _3517517_37);
return;
}
case 2:
{
Obj _3517513_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = _3517513_37;
R[1] = fvs2;
R[2] = val;
struct frame __curr = {
.fn = clofun60,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), fvs1, body);
return;
}
case 3:
{
Obj _3517512_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
struct frame __curr = {
.fn = clofun60,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3517512_37, fvs1);
return;
}
case 4:
{
Obj _3517511_37= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = _3517511_37;
R[1] = fvs1;
R[2] = body;
R[3] = val;
struct frame __curr = {
.fn = clofun60,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
return;
}
case 5:
{
Obj _3517510_37= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
struct frame __curr = {
.fn = clofun60,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), _3517510_37, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516566_37 = makeNative(3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517470_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517470_37) {
Obj _3517471_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517472_37 = PRIM_EQ(__symbolTable[73], _3517471_37);
if (True == _3517472_37) {
Obj _3517473_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517474_37 = PRIM_ISCONS(_3517473_37);
if (True == _3517474_37) {
Obj _3517475_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517476_37 = PRIM_CAR(_3517475_37);
Obj exp = _3517476_37;
Obj _3517477_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517478_37 = PRIM_CDR(_3517477_37);
Obj _3517479_37 = PRIM_ISCONS(_3517478_37);
if (True == _3517479_37) {
Obj _3517480_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517481_37 = PRIM_CDR(_3517480_37);
Obj _3517482_37 = PRIM_CAR(_3517481_37);
Obj cont = _3517482_37;
Obj _3517483_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517484_37 = PRIM_CDR(_3517483_37);
Obj _3517485_37 = PRIM_CDR(_3517484_37);
Obj _3517486_37 = PRIM_EQ(Nil, _3517485_37);
if (True == _3517486_37) {
R[1] = exp;
R[2] = cont;
struct frame __curr = {
.fn = clofun59,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
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
}
case 1:
{
Obj _3517489_37= co->res;
Obj _3517488_37 = R[1];
Obj _3517490_37 = makeCons(_3517489_37, Nil);
Obj _3517491_37 = makeCons(_3517488_37, _3517490_37);
Obj _3517492_37 = makeCons(__symbolTable[73], _3517491_37);
coraReturn(co, _3517492_37);
return;
}
case 2:
{
Obj _3517488_37= co->res;
Obj cont = R[1];
R[1] = _3517488_37;
struct frame __curr = {
.fn = clofun59,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), closureRef(R[0], 1), cont);
return;
}
case 3:
{
Obj _3517487_37= co->res;
Obj exp = R[1];
Obj cont = R[2];
R[1] = cont;
struct frame __curr = {
.fn = clofun59,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3517487_37, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517465_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517465_37) {
Obj _3517466_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517466_37;
Obj _3517467_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517467_37;
R[1] = f;
R[2] = args;
struct frame __curr = {
.fn = clofun58,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3517468_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517469_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3517468_37, _3517469_37);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516555_37 = R[1];
Obj _3516556_37 = R[2];
Obj _3516557_37 = R[3];
Obj _3517440_37 = PRIM_EQ(Nil, _3516555_37);
if (True == _3517440_37) {
R[1] = _3516557_37;
struct frame __curr = {
.fn = clofun57,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), _3516556_37);
return;
} else {
Obj _3517458_37 = PRIM_ISCONS(_3516555_37);
if (True == _3517458_37) {
Obj _3517459_37 = PRIM_CAR(_3516555_37);
Obj hd = _3517459_37;
Obj _3517460_37 = PRIM_CDR(_3516555_37);
Obj tl = _3517460_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), hd, makeNative(2, clofun56, 1, 3, tl, _3516556_37, _3516557_37));
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
Obj _3517456_37= co->res;
Obj _3516642_37 = R[1];
Obj _3517457_37 = PRIM_EQ(_3517456_37, __symbolTable[90]);
if (True == _3517457_37) {
co->ctx.sp = R;
coraCall1(co, _3516642_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516642_37, False);
return;
}
}
case 2:
{
Obj _3517455_37= co->res;
Obj exp = R[1];
Obj _3516642_37 = R[2];
if (True == _3517455_37) {
R[1] = _3516642_37;
struct frame __curr = {
.fn = clofun57,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[64]), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516642_37, False);
return;
}
}
case 3:
{
Obj _3517441_37= co->res;
Obj _3516557_37 = R[1];
Obj exp = _3517441_37;
Obj _3516642_37 = makeNative(2, clofun55, 1, 2, exp, _3516557_37);
Obj _3517454_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3516642_37;
struct frame __curr = {
.fn = clofun57,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), _3517454_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj _3517461_37 = makeCons(hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), closureRef(R[0], 0), _3517461_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516643_37 = R[1];
if (True == _3516643_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3517442_37 = PRIM_EQ(closureRef(R[0], 1), globalRef(__symbolTable[70]));
if (True == _3517442_37) {
Obj _3517443_37 = makeCons(closureRef(R[0], 0), Nil);
Obj _3517444_37 = makeCons(__symbolTable[74], _3517443_37);
coraReturn(co, _3517444_37);
return;
} else {
Obj _3517445_37 = primGenSym();
Obj val = _3517445_37;
Obj _3517446_37 = makeCons(val, Nil);
R[1] = _3517446_37;
struct frame __curr = {
.fn = clofun55,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, closureRef(R[0], 1), val);
return;
}
}
}
case 1:
{
Obj _3517447_37= co->res;
Obj _3517446_37 = R[1];
Obj _3517448_37 = makeCons(_3517447_37, Nil);
Obj _3517449_37 = makeCons(_3517446_37, _3517448_37);
Obj _3517450_37 = makeCons(__symbolTable[75], _3517449_37);
Obj _3517451_37 = makeCons(_3517450_37, Nil);
Obj _3517452_37 = makeCons(closureRef(R[0], 0), _3517451_37);
Obj _3517453_37 = makeCons(__symbolTable[73], _3517452_37);
coraReturn(co, _3517453_37);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516546_37 = R[1];
Obj _3516547_37 = R[2];
Obj _3516640_37 = makeNative(2, clofun53, 1, 2, _3516546_37, _3516547_37);
Obj _3517437_37 = primIsSymbol(_3516546_37);
if (True == _3517437_37) {
co->ctx.sp = R;
coraCall1(co, _3516640_37, True);
return;
} else {
R[1] = _3516640_37;
struct frame __curr = {
.fn = clofun54,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3516546_37);
return;
}
}
case 1:
{
Obj _3517438_37= co->res;
Obj _3516640_37 = R[1];
if (True == _3517438_37) {
co->ctx.sp = R;
coraCall1(co, _3516640_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516640_37, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516641_37 = R[1];
if (True == _3516641_37) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), closureRef(R[0], 0));
return;
} else {
struct frame __curr = {
.fn = clofun53,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3517303_37= co->res;
if (True == _3517303_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj _3516550_37 = makeNative(1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517405_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517405_37) {
Obj _3517406_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517407_37 = PRIM_EQ(__symbolTable[87], _3517406_37);
if (True == _3517407_37) {
Obj _3517408_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517409_37 = PRIM_ISCONS(_3517408_37);
if (True == _3517409_37) {
Obj _3517410_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517411_37 = PRIM_CAR(_3517410_37);
Obj a = _3517411_37;
Obj _3517412_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517413_37 = PRIM_CDR(_3517412_37);
Obj _3517414_37 = PRIM_ISCONS(_3517413_37);
if (True == _3517414_37) {
Obj _3517415_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517416_37 = PRIM_CDR(_3517415_37);
Obj _3517417_37 = PRIM_CAR(_3517416_37);
Obj b = _3517417_37;
Obj _3517418_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517419_37 = PRIM_CDR(_3517418_37);
Obj _3517420_37 = PRIM_CDR(_3517419_37);
Obj _3517421_37 = PRIM_ISCONS(_3517420_37);
if (True == _3517421_37) {
Obj _3517422_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517423_37 = PRIM_CDR(_3517422_37);
Obj _3517424_37 = PRIM_CDR(_3517423_37);
Obj _3517425_37 = PRIM_CAR(_3517424_37);
Obj c = _3517425_37;
Obj _3517426_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517427_37 = PRIM_CDR(_3517426_37);
Obj _3517428_37 = PRIM_CDR(_3517427_37);
Obj _3517429_37 = PRIM_CDR(_3517428_37);
Obj _3517430_37 = PRIM_EQ(Nil, _3517429_37);
if (True == _3517430_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative(3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
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
}

static void clofun52(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
R[1] = ra;
struct frame __curr = {
.fn = clofun52,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3517432_37= co->res;
Obj _3517431_37 = R[1];
Obj ra = R[2];
Obj _3517433_37 = makeCons(_3517432_37, Nil);
Obj _3517434_37 = makeCons(_3517431_37, _3517433_37);
Obj _3517435_37 = makeCons(ra, _3517434_37);
Obj _3517436_37 = makeCons(__symbolTable[87], _3517435_37);
coraReturn(co, _3517436_37);
return;
}
case 2:
{
Obj _3517431_37= co->res;
Obj ra = R[1];
R[1] = _3517431_37;
R[2] = ra;
struct frame __curr = {
.fn = clofun52,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516551_37 = makeNative(1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517383_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517383_37) {
Obj _3517384_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517385_37 = PRIM_EQ(__symbolTable[85], _3517384_37);
if (True == _3517385_37) {
Obj _3517386_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517387_37 = PRIM_ISCONS(_3517386_37);
if (True == _3517387_37) {
Obj _3517388_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517389_37 = PRIM_CAR(_3517388_37);
Obj a = _3517389_37;
Obj _3517390_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517391_37 = PRIM_CDR(_3517390_37);
Obj _3517392_37 = PRIM_ISCONS(_3517391_37);
if (True == _3517392_37) {
Obj _3517393_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517394_37 = PRIM_CDR(_3517393_37);
Obj _3517395_37 = PRIM_CAR(_3517394_37);
Obj b = _3517395_37;
Obj _3517396_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517397_37 = PRIM_CDR(_3517396_37);
Obj _3517398_37 = PRIM_CDR(_3517397_37);
Obj _3517399_37 = PRIM_EQ(Nil, _3517398_37);
if (True == _3517399_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative(2, clofun50, 1, 2, b, closureRef(R[0], 1)));
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
}
}

static void clofun50(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
Obj _3517400_37 = primIsSymbol(ra);
if (True == _3517400_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
struct frame __curr = {
.fn = clofun50,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3517401_37= co->res;
Obj ra = R[1];
Obj _3517402_37 = makeCons(_3517401_37, Nil);
Obj _3517403_37 = makeCons(ra, _3517402_37);
Obj _3517404_37 = makeCons(__symbolTable[85], _3517403_37);
coraReturn(co, _3517404_37);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516552_37 = makeNative(3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517352_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517352_37) {
Obj _3517353_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517354_37 = PRIM_EQ(__symbolTable[86], _3517353_37);
if (True == _3517354_37) {
Obj _3517355_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517356_37 = PRIM_ISCONS(_3517355_37);
if (True == _3517356_37) {
Obj _3517357_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517358_37 = PRIM_CAR(_3517357_37);
Obj a = _3517358_37;
Obj _3517359_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517360_37 = PRIM_CDR(_3517359_37);
Obj _3517361_37 = PRIM_ISCONS(_3517360_37);
if (True == _3517361_37) {
Obj _3517362_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517363_37 = PRIM_CDR(_3517362_37);
Obj _3517364_37 = PRIM_CAR(_3517363_37);
Obj b = _3517364_37;
Obj _3517365_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517366_37 = PRIM_CDR(_3517365_37);
Obj _3517367_37 = PRIM_CDR(_3517366_37);
Obj _3517368_37 = PRIM_ISCONS(_3517367_37);
if (True == _3517368_37) {
Obj _3517369_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517370_37 = PRIM_CDR(_3517369_37);
Obj _3517371_37 = PRIM_CDR(_3517370_37);
Obj _3517372_37 = PRIM_CAR(_3517371_37);
Obj c = _3517372_37;
Obj _3517373_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517374_37 = PRIM_CDR(_3517373_37);
Obj _3517375_37 = PRIM_CDR(_3517374_37);
Obj _3517376_37 = PRIM_CDR(_3517375_37);
Obj _3517377_37 = PRIM_EQ(Nil, _3517376_37);
if (True == _3517377_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), b, makeNative(2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516552_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516552_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516552_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516552_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516552_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516552_37);
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
struct frame __curr = {
.fn = clofun48,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3517378_37= co->res;
Obj rb = R[1];
Obj _3517379_37 = makeCons(_3517378_37, Nil);
Obj _3517380_37 = makeCons(rb, _3517379_37);
Obj _3517381_37 = makeCons(closureRef(R[0], 0), _3517380_37);
Obj _3517382_37 = makeCons(__symbolTable[86], _3517381_37);
coraReturn(co, _3517382_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516553_37 = makeNative(1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517308_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517308_37) {
Obj _3517309_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517310_37 = PRIM_EQ(__symbolTable[78], _3517309_37);
if (True == _3517310_37) {
Obj _3517311_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517312_37 = PRIM_ISCONS(_3517311_37);
if (True == _3517312_37) {
Obj _3517313_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517314_37 = PRIM_CAR(_3517313_37);
Obj _3517315_37 = PRIM_ISCONS(_3517314_37);
if (True == _3517315_37) {
Obj _3517316_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517317_37 = PRIM_CAR(_3517316_37);
Obj _3517318_37 = PRIM_CAR(_3517317_37);
Obj _3517319_37 = PRIM_EQ(__symbolTable[89], _3517318_37);
if (True == _3517319_37) {
Obj _3517320_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517321_37 = PRIM_CAR(_3517320_37);
Obj _3517322_37 = PRIM_CDR(_3517321_37);
Obj _3517323_37 = PRIM_ISCONS(_3517322_37);
if (True == _3517323_37) {
Obj _3517324_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517325_37 = PRIM_CAR(_3517324_37);
Obj _3517326_37 = PRIM_CDR(_3517325_37);
Obj _3517327_37 = PRIM_CAR(_3517326_37);
Obj args = _3517327_37;
Obj _3517328_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517329_37 = PRIM_CAR(_3517328_37);
Obj _3517330_37 = PRIM_CDR(_3517329_37);
Obj _3517331_37 = PRIM_CDR(_3517330_37);
Obj _3517332_37 = PRIM_ISCONS(_3517331_37);
if (True == _3517332_37) {
Obj _3517333_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517334_37 = PRIM_CAR(_3517333_37);
Obj _3517335_37 = PRIM_CDR(_3517334_37);
Obj _3517336_37 = PRIM_CDR(_3517335_37);
Obj _3517337_37 = PRIM_CAR(_3517336_37);
Obj body = _3517337_37;
Obj _3517338_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517339_37 = PRIM_CAR(_3517338_37);
Obj _3517340_37 = PRIM_CDR(_3517339_37);
Obj _3517341_37 = PRIM_CDR(_3517340_37);
Obj _3517342_37 = PRIM_CDR(_3517341_37);
Obj _3517343_37 = PRIM_EQ(Nil, _3517342_37);
if (True == _3517343_37) {
Obj _3517344_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517345_37 = PRIM_CDR(_3517344_37);
Obj frees = _3517345_37;
R[1] = args;
R[2] = frees;
struct frame __curr = {
.fn = clofun47,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), body, globalRef(__symbolTable[70]));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516553_37);
return;
}
}
case 1:
{
Obj _3517346_37= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj _3517347_37 = makeCons(_3517346_37, Nil);
Obj _3517348_37 = makeCons(args, _3517347_37);
Obj _3517349_37 = makeCons(__symbolTable[89], _3517348_37);
Obj _3517350_37 = makeCons(_3517349_37, frees);
Obj _3517351_37 = makeCons(__symbolTable[78], _3517350_37);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), _3517351_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517304_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517304_37) {
Obj _3517305_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517305_37;
Obj _3517306_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517306_37;
Obj _3517307_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), _3517307_37, Nil, closureRef(R[0], 1));
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
Obj x = R[1];
Obj _3517300_37 = makeCons(x, Nil);
Obj _3517301_37 = makeCons(__symbolTable[72], _3517300_37);
coraReturn(co, _3517301_37);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516539_37 = R[1];
Obj _3516540_37 = R[2];
R[1] = _3516540_37;
R[2] = _3516539_37;
struct frame __curr = {
.fn = clofun44,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3516540_37);
return;
}
case 1:
{
Obj _3517229_37= co->res;
Obj _3516540_37 = R[1];
Obj pos = _3517229_37;
Obj _3517230_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3517230_37) {
coraReturn(co, _3516540_37);
return;
} else {
Obj _3517231_37 = makeCons(pos, Nil);
Obj _3517232_37 = makeCons(__symbolTable[77], _3517231_37);
coraReturn(co, _3517232_37);
return;
}
}
case 2:
{
Obj _3517296_37= co->res;
Obj _3517294_37 = R[1];
Obj _3517297_37 = makeCons(_3517294_37, _3517296_37);
Obj _3517298_37 = makeCons(__symbolTable[78], _3517297_37);
coraReturn(co, _3517298_37);
return;
}
case 3:
{
Obj _3517295_37= co->res;
Obj fvs1 = R[1];
Obj _3517294_37 = R[2];
R[1] = _3517294_37;
struct frame __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3517295_37, fvs1);
return;
}
case 4:
{
Obj _3517291_37= co->res;
Obj args = R[1];
Obj _3516539_37 = R[2];
Obj fvs1 = R[3];
Obj _3517292_37 = makeCons(_3517291_37, Nil);
Obj _3517293_37 = makeCons(args, _3517292_37);
Obj _3517294_37 = makeCons(__symbolTable[89], _3517293_37);
R[1] = fvs1;
R[2] = _3517294_37;
struct frame __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[71]), _3516539_37);
return;
}
case 5:
{
Obj _3517290_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3516539_37 = R[3];
Obj fvs1 = _3517290_37;
R[1] = args;
R[2] = _3516539_37;
R[3] = fvs1;
struct frame __curr = {
.fn = clofun44,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[71]), fvs1, body);
return;
}
case 6:
{
Obj _3517227_37= co->res;
Obj _3516540_37 = R[1];
Obj _3516539_37 = R[2];
if (True == _3517227_37) {
coraReturn(co, _3516540_37);
return;
} else {
Obj _3517228_37 = primIsSymbol(_3516540_37);
if (True == _3517228_37) {
R[1] = _3516540_37;
struct frame __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), _3516540_37, _3516539_37);
return;
} else {
Obj _3516543_37 = makeNative(3, clofun43, 0, 2, _3516540_37, _3516539_37);
Obj _3517270_37 = PRIM_ISCONS(_3516540_37);
if (True == _3517270_37) {
Obj _3517271_37 = PRIM_CAR(_3516540_37);
Obj _3517272_37 = PRIM_EQ(__symbolTable[89], _3517271_37);
if (True == _3517272_37) {
Obj _3517273_37 = PRIM_CDR(_3516540_37);
Obj _3517274_37 = PRIM_ISCONS(_3517273_37);
if (True == _3517274_37) {
Obj _3517275_37 = PRIM_CDR(_3516540_37);
Obj _3517276_37 = PRIM_CAR(_3517275_37);
Obj args = _3517276_37;
Obj _3517277_37 = PRIM_CDR(_3516540_37);
Obj _3517278_37 = PRIM_CDR(_3517277_37);
Obj _3517279_37 = PRIM_ISCONS(_3517278_37);
if (True == _3517279_37) {
Obj _3517280_37 = PRIM_CDR(_3516540_37);
Obj _3517281_37 = PRIM_CDR(_3517280_37);
Obj _3517282_37 = PRIM_CAR(_3517281_37);
Obj body = _3517282_37;
Obj _3517283_37 = PRIM_CDR(_3516540_37);
Obj _3517284_37 = PRIM_CDR(_3517283_37);
Obj _3517285_37 = PRIM_CDR(_3517284_37);
Obj _3517286_37 = PRIM_EQ(Nil, _3517285_37);
if (True == _3517286_37) {
Obj _3517287_37 = makeCons(body, Nil);
Obj _3517288_37 = makeCons(args, _3517287_37);
Obj _3517289_37 = makeCons(__symbolTable[89], _3517288_37);
R[1] = body;
R[2] = args;
R[3] = _3516539_37;
struct frame __curr = {
.fn = clofun44,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), _3517289_37);
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

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516544_37 = makeNative(3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517238_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517238_37) {
Obj _3517239_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517240_37 = PRIM_EQ(__symbolTable[86], _3517239_37);
if (True == _3517240_37) {
Obj _3517241_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517242_37 = PRIM_ISCONS(_3517241_37);
if (True == _3517242_37) {
Obj _3517243_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517244_37 = PRIM_CAR(_3517243_37);
Obj a = _3517244_37;
Obj _3517245_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517246_37 = PRIM_CDR(_3517245_37);
Obj _3517247_37 = PRIM_ISCONS(_3517246_37);
if (True == _3517247_37) {
Obj _3517248_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517249_37 = PRIM_CDR(_3517248_37);
Obj _3517250_37 = PRIM_CAR(_3517249_37);
Obj b = _3517250_37;
Obj _3517251_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517252_37 = PRIM_CDR(_3517251_37);
Obj _3517253_37 = PRIM_CDR(_3517252_37);
Obj _3517254_37 = PRIM_ISCONS(_3517253_37);
if (True == _3517254_37) {
Obj _3517255_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517256_37 = PRIM_CDR(_3517255_37);
Obj _3517257_37 = PRIM_CDR(_3517256_37);
Obj _3517258_37 = PRIM_CAR(_3517257_37);
Obj c = _3517258_37;
Obj _3517259_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517260_37 = PRIM_CDR(_3517259_37);
Obj _3517261_37 = PRIM_CDR(_3517260_37);
Obj _3517262_37 = PRIM_CDR(_3517261_37);
Obj _3517263_37 = PRIM_EQ(Nil, _3517262_37);
if (True == _3517263_37) {
R[1] = c;
R[2] = a;
struct frame __curr = {
.fn = clofun43,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[71]), closureRef(R[0], 1), b);
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
Obj _3517265_37= co->res;
Obj _3517264_37 = R[1];
Obj a = R[2];
Obj _3517266_37 = makeCons(_3517265_37, Nil);
Obj _3517267_37 = makeCons(_3517264_37, _3517266_37);
Obj _3517268_37 = makeCons(a, _3517267_37);
Obj _3517269_37 = makeCons(__symbolTable[86], _3517268_37);
coraReturn(co, _3517269_37);
return;
}
case 2:
{
Obj _3517264_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = _3517264_37;
R[2] = a;
struct frame __curr = {
.fn = clofun43,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[71]), closureRef(R[0], 1), c);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517233_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517233_37) {
Obj _3517234_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517234_37;
Obj _3517235_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517235_37;
R[1] = f;
R[2] = args;
struct frame __curr = {
.fn = clofun42,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[71]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3517236_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517237_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3517236_37, _3517237_37);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516526_37 = R[1];
R[1] = _3516526_37;
struct frame __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3516526_37);
return;
}
case 1:
{
Obj _3517225_37= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), _3517225_37, args);
return;
}
case 2:
{
Obj _3517052_37= co->res;
Obj _3516526_37 = R[1];
if (True == _3517052_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517053_37 = primIsSymbol(_3516526_37);
if (True == _3517053_37) {
Obj _3517054_37 = makeCons(_3516526_37, Nil);
coraReturn(co, _3517054_37);
return;
} else {
Obj _3516529_37 = makeNative(1, clofun40, 0, 1, _3516526_37);
Obj _3517208_37 = PRIM_ISCONS(_3516526_37);
if (True == _3517208_37) {
Obj _3517209_37 = PRIM_CAR(_3516526_37);
Obj _3517210_37 = PRIM_EQ(__symbolTable[89], _3517209_37);
if (True == _3517210_37) {
Obj _3517211_37 = PRIM_CDR(_3516526_37);
Obj _3517212_37 = PRIM_ISCONS(_3517211_37);
if (True == _3517212_37) {
Obj _3517213_37 = PRIM_CDR(_3516526_37);
Obj _3517214_37 = PRIM_CAR(_3517213_37);
Obj args = _3517214_37;
Obj _3517215_37 = PRIM_CDR(_3516526_37);
Obj _3517216_37 = PRIM_CDR(_3517215_37);
Obj _3517217_37 = PRIM_ISCONS(_3517216_37);
if (True == _3517217_37) {
Obj _3517218_37 = PRIM_CDR(_3516526_37);
Obj _3517219_37 = PRIM_CDR(_3517218_37);
Obj _3517220_37 = PRIM_CAR(_3517219_37);
Obj body = _3517220_37;
Obj _3517221_37 = PRIM_CDR(_3516526_37);
Obj _3517222_37 = PRIM_CDR(_3517221_37);
Obj _3517223_37 = PRIM_CDR(_3517222_37);
Obj _3517224_37 = PRIM_EQ(Nil, _3517223_37);
if (True == _3517224_37) {
R[1] = args;
struct frame __curr = {
.fn = clofun41,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516529_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516529_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516529_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516529_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516529_37);
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
Obj _3516530_37 = makeNative(1, clofun39, 0, 1, closureRef(R[0], 0));
Obj _3517178_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517178_37) {
Obj _3517179_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517180_37 = PRIM_EQ(__symbolTable[87], _3517179_37);
if (True == _3517180_37) {
Obj _3517181_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517182_37 = PRIM_ISCONS(_3517181_37);
if (True == _3517182_37) {
Obj _3517183_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517184_37 = PRIM_CAR(_3517183_37);
Obj x = _3517184_37;
Obj _3517185_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517186_37 = PRIM_CDR(_3517185_37);
Obj _3517187_37 = PRIM_ISCONS(_3517186_37);
if (True == _3517187_37) {
Obj _3517188_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517189_37 = PRIM_CDR(_3517188_37);
Obj _3517190_37 = PRIM_CAR(_3517189_37);
Obj y = _3517190_37;
Obj _3517191_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517192_37 = PRIM_CDR(_3517191_37);
Obj _3517193_37 = PRIM_CDR(_3517192_37);
Obj _3517194_37 = PRIM_ISCONS(_3517193_37);
if (True == _3517194_37) {
Obj _3517195_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517196_37 = PRIM_CDR(_3517195_37);
Obj _3517197_37 = PRIM_CDR(_3517196_37);
Obj _3517198_37 = PRIM_CAR(_3517197_37);
Obj z = _3517198_37;
Obj _3517199_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517200_37 = PRIM_CDR(_3517199_37);
Obj _3517201_37 = PRIM_CDR(_3517200_37);
Obj _3517202_37 = PRIM_CDR(_3517201_37);
Obj _3517203_37 = PRIM_EQ(Nil, _3517202_37);
if (True == _3517203_37) {
Obj _3517204_37 = makeCons(z, Nil);
Obj _3517205_37 = makeCons(y, _3517204_37);
Obj _3517206_37 = makeCons(x, _3517205_37);
struct frame __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517206_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516530_37);
return;
}
}
case 1:
{
Obj _3517207_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517207_37);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516531_37 = makeNative(3, clofun38, 0, 1, closureRef(R[0], 0));
Obj _3517158_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517158_37) {
Obj _3517159_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517160_37 = PRIM_EQ(__symbolTable[85], _3517159_37);
if (True == _3517160_37) {
Obj _3517161_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517162_37 = PRIM_ISCONS(_3517161_37);
if (True == _3517162_37) {
Obj _3517163_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517164_37 = PRIM_CAR(_3517163_37);
Obj x = _3517164_37;
Obj _3517165_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517166_37 = PRIM_CDR(_3517165_37);
Obj _3517167_37 = PRIM_ISCONS(_3517166_37);
if (True == _3517167_37) {
Obj _3517168_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517169_37 = PRIM_CDR(_3517168_37);
Obj _3517170_37 = PRIM_CAR(_3517169_37);
Obj y = _3517170_37;
Obj _3517171_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517172_37 = PRIM_CDR(_3517171_37);
Obj _3517173_37 = PRIM_CDR(_3517172_37);
Obj _3517174_37 = PRIM_EQ(Nil, _3517173_37);
if (True == _3517174_37) {
Obj _3517175_37 = makeCons(y, Nil);
Obj _3517176_37 = makeCons(x, _3517175_37);
struct frame __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517176_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516531_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516531_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516531_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516531_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516531_37);
return;
}
}
case 1:
{
Obj _3517177_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517177_37);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516532_37 = makeNative(1, clofun37, 0, 1, closureRef(R[0], 0));
Obj _3517128_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517128_37) {
Obj _3517129_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517130_37 = PRIM_EQ(__symbolTable[86], _3517129_37);
if (True == _3517130_37) {
Obj _3517131_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517132_37 = PRIM_ISCONS(_3517131_37);
if (True == _3517132_37) {
Obj _3517133_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517134_37 = PRIM_CAR(_3517133_37);
Obj a = _3517134_37;
Obj _3517135_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517136_37 = PRIM_CDR(_3517135_37);
Obj _3517137_37 = PRIM_ISCONS(_3517136_37);
if (True == _3517137_37) {
Obj _3517138_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517139_37 = PRIM_CDR(_3517138_37);
Obj _3517140_37 = PRIM_CAR(_3517139_37);
Obj b = _3517140_37;
Obj _3517141_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517142_37 = PRIM_CDR(_3517141_37);
Obj _3517143_37 = PRIM_CDR(_3517142_37);
Obj _3517144_37 = PRIM_ISCONS(_3517143_37);
if (True == _3517144_37) {
Obj _3517145_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517146_37 = PRIM_CDR(_3517145_37);
Obj _3517147_37 = PRIM_CDR(_3517146_37);
Obj _3517148_37 = PRIM_CAR(_3517147_37);
Obj c = _3517148_37;
Obj _3517149_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517150_37 = PRIM_CDR(_3517149_37);
Obj _3517151_37 = PRIM_CDR(_3517150_37);
Obj _3517152_37 = PRIM_CDR(_3517151_37);
Obj _3517153_37 = PRIM_EQ(Nil, _3517152_37);
if (True == _3517153_37) {
R[1] = c;
R[2] = a;
struct frame __curr = {
.fn = clofun38,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516532_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516532_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516532_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516532_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516532_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516532_37);
return;
}
}
case 1:
{
Obj _3517157_37= co->res;
Obj _3517154_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), _3517154_37, _3517157_37);
return;
}
case 2:
{
Obj _3517155_37= co->res;
Obj a = R[1];
Obj _3517154_37 = R[2];
Obj _3517156_37 = makeCons(a, Nil);
R[1] = _3517154_37;
struct frame __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), _3517155_37, _3517156_37);
return;
}
case 3:
{
Obj _3517154_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = _3517154_37;
struct frame __curr = {
.fn = clofun38,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), c);
return;
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516533_37 = makeNative(1, clofun36, 0, 1, closureRef(R[0], 0));
Obj _3517118_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517118_37) {
Obj _3517119_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517120_37 = PRIM_EQ(__symbolTable[78], _3517119_37);
if (True == _3517120_37) {
Obj _3517121_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517122_37 = PRIM_ISCONS(_3517121_37);
if (True == _3517122_37) {
Obj _3517123_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517124_37 = PRIM_CAR(_3517123_37);
Obj lam = _3517124_37;
Obj _3517125_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517126_37 = PRIM_CDR(_3517125_37);
Obj more = _3517126_37;
Obj _3517127_37 = makeCons(lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), _3517127_37);
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
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516534_37 = makeNative(1, clofun35, 0, 1, closureRef(R[0], 0));
Obj _3517108_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517108_37) {
Obj _3517109_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517110_37 = PRIM_EQ(__symbolTable[72], _3517109_37);
if (True == _3517110_37) {
Obj _3517111_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517112_37 = PRIM_ISCONS(_3517111_37);
if (True == _3517112_37) {
Obj _3517113_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517114_37 = PRIM_CAR(_3517113_37);
Obj x = _3517114_37;
Obj _3517115_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517116_37 = PRIM_CDR(_3517115_37);
Obj _3517117_37 = PRIM_EQ(Nil, _3517116_37);
if (True == _3517117_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x);
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

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516535_37 = makeNative(1, clofun34, 0, 1, closureRef(R[0], 0));
Obj _3517088_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517088_37) {
Obj _3517089_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517090_37 = PRIM_EQ(__symbolTable[73], _3517089_37);
if (True == _3517090_37) {
Obj _3517091_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517092_37 = PRIM_ISCONS(_3517091_37);
if (True == _3517092_37) {
Obj _3517093_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517094_37 = PRIM_CAR(_3517093_37);
Obj exp = _3517094_37;
Obj _3517095_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517096_37 = PRIM_CDR(_3517095_37);
Obj _3517097_37 = PRIM_ISCONS(_3517096_37);
if (True == _3517097_37) {
Obj _3517098_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517099_37 = PRIM_CDR(_3517098_37);
Obj _3517100_37 = PRIM_CAR(_3517099_37);
Obj cont = _3517100_37;
Obj _3517101_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517102_37 = PRIM_CDR(_3517101_37);
Obj _3517103_37 = PRIM_CDR(_3517102_37);
Obj _3517104_37 = PRIM_EQ(Nil, _3517103_37);
if (True == _3517104_37) {
Obj _3517105_37 = makeCons(cont, Nil);
Obj _3517106_37 = makeCons(exp, _3517105_37);
struct frame __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517106_37);
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
} else {
co->ctx.sp = R;
coraCall0(co, _3516535_37);
return;
}
}
case 1:
{
Obj _3517107_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517107_37);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516536_37 = makeNative(2, clofun33, 0, 1, closureRef(R[0], 0));
Obj _3517078_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517078_37) {
Obj _3517079_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517080_37 = PRIM_EQ(__symbolTable[74], _3517079_37);
if (True == _3517080_37) {
Obj _3517081_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517082_37 = PRIM_ISCONS(_3517081_37);
if (True == _3517082_37) {
Obj _3517083_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517084_37 = PRIM_CAR(_3517083_37);
Obj exp = _3517084_37;
Obj _3517085_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517086_37 = PRIM_CDR(_3517085_37);
Obj _3517087_37 = PRIM_EQ(Nil, _3517086_37);
if (True == _3517087_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), exp);
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

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516537_37 = makeNative(1, clofun32, 0, 1, closureRef(R[0], 0));
Obj _3517060_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517060_37) {
Obj _3517061_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517062_37 = PRIM_EQ(__symbolTable[75], _3517061_37);
if (True == _3517062_37) {
Obj _3517063_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517064_37 = PRIM_ISCONS(_3517063_37);
if (True == _3517064_37) {
Obj _3517065_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517066_37 = PRIM_CAR(_3517065_37);
Obj arg = _3517066_37;
Obj _3517067_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517068_37 = PRIM_CDR(_3517067_37);
Obj _3517069_37 = PRIM_ISCONS(_3517068_37);
if (True == _3517069_37) {
Obj _3517070_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517071_37 = PRIM_CDR(_3517070_37);
Obj _3517072_37 = PRIM_CAR(_3517071_37);
Obj body = _3517072_37;
Obj _3517073_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517074_37 = PRIM_CDR(_3517073_37);
Obj _3517075_37 = PRIM_CDR(_3517074_37);
Obj _3517076_37 = PRIM_EQ(Nil, _3517075_37);
if (True == _3517076_37) {
R[1] = arg;
struct frame __curr = {
.fn = clofun33,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), body);
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
} else {
co->ctx.sp = R;
coraCall0(co, _3516537_37);
return;
}
}
case 1:
{
Obj _3517077_37= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), _3517077_37, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517055_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517055_37) {
Obj _3517056_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517056_37;
Obj _3517057_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517057_37;
Obj _3517058_37 = makeCons(f, args);
struct frame __curr = {
.fn = clofun32,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517058_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3517059_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517059_37);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516518_37 = R[1];
Obj _3516519_37 = makeNative(1, clofun30, 0, 1, _3516518_37);
Obj _3517041_37 = PRIM_ISCONS(_3516518_37);
if (True == _3517041_37) {
Obj _3517042_37 = PRIM_CAR(_3516518_37);
Obj _3517043_37 = PRIM_EQ(__symbolTable[96], _3517042_37);
if (True == _3517043_37) {
Obj _3517044_37 = PRIM_CDR(_3516518_37);
Obj _3517045_37 = PRIM_ISCONS(_3517044_37);
if (True == _3517045_37) {
Obj _3517046_37 = PRIM_CDR(_3516518_37);
Obj _3517047_37 = PRIM_CAR(_3517046_37);
Obj _3517048_37 = PRIM_CDR(_3516518_37);
Obj _3517049_37 = PRIM_CDR(_3517048_37);
Obj _3517050_37 = PRIM_EQ(Nil, _3517049_37);
if (True == _3517050_37) {
coraReturn(co, True);
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
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516520_37 = makeNative(1, clofun29, 0, 1, closureRef(R[0], 0));
Obj _3517031_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517031_37) {
Obj _3517032_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517033_37 = PRIM_EQ(__symbolTable[93], _3517032_37);
if (True == _3517033_37) {
Obj _3517034_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517035_37 = PRIM_ISCONS(_3517034_37);
if (True == _3517035_37) {
Obj _3517036_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517037_37 = PRIM_CAR(_3517036_37);
Obj _3517038_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517039_37 = PRIM_CDR(_3517038_37);
Obj _3517040_37 = PRIM_EQ(Nil, _3517039_37);
if (True == _3517040_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516520_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516520_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516520_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516520_37);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516521_37 = makeNative(1, clofun28, 0, 1, closureRef(R[0], 0));
Obj _3517021_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517021_37) {
Obj _3517022_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517023_37 = PRIM_EQ(__symbolTable[90], _3517022_37);
if (True == _3517023_37) {
Obj _3517024_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517025_37 = PRIM_ISCONS(_3517024_37);
if (True == _3517025_37) {
Obj _3517026_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517027_37 = PRIM_CAR(_3517026_37);
Obj _3517028_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517029_37 = PRIM_CDR(_3517028_37);
Obj _3517030_37 = PRIM_EQ(Nil, _3517029_37);
if (True == _3517030_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516521_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516521_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516521_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516521_37);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516522_37 = makeNative(1, clofun27, 0, 1, closureRef(R[0], 0));
Obj _3517011_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517011_37) {
Obj _3517012_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517013_37 = PRIM_EQ(__symbolTable[84], _3517012_37);
if (True == _3517013_37) {
Obj _3517014_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517015_37 = PRIM_ISCONS(_3517014_37);
if (True == _3517015_37) {
Obj _3517016_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517017_37 = PRIM_CAR(_3517016_37);
Obj _3517018_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517019_37 = PRIM_CDR(_3517018_37);
Obj _3517020_37 = PRIM_EQ(Nil, _3517019_37);
if (True == _3517020_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516522_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516522_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516522_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516522_37);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516523_37 = makeNative(2, clofun26, 0, 1, closureRef(R[0], 0));
Obj _3517001_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517001_37) {
Obj _3517002_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517003_37 = PRIM_EQ(__symbolTable[77], _3517002_37);
if (True == _3517003_37) {
Obj _3517004_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517005_37 = PRIM_ISCONS(_3517004_37);
if (True == _3517005_37) {
Obj _3517006_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517007_37 = PRIM_CAR(_3517006_37);
Obj _3517008_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517009_37 = PRIM_CDR(_3517008_37);
Obj _3517010_37 = PRIM_EQ(Nil, _3517009_37);
if (True == _3517010_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516523_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516523_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516523_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516523_37);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516524_37 = makeNative(1, clofun25, 0, 0);
Obj _3516991_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516991_37) {
Obj _3516992_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516993_37 = PRIM_EQ(__symbolTable[78], _3516992_37);
if (True == _3516993_37) {
Obj _3516994_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516995_37 = PRIM_ISCONS(_3516994_37);
if (True == _3516995_37) {
Obj _3516996_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516997_37 = PRIM_CAR(_3516996_37);
Obj label = _3516997_37;
Obj _3516998_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516999_37 = PRIM_CDR(_3516998_37);
R[1] = _3516524_37;
struct frame __curr = {
.fn = clofun26,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), label);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516524_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516524_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516524_37);
return;
}
}
case 1:
{
Obj _3517000_37= co->res;
Obj _3516524_37 = R[1];
if (True == _3517000_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516524_37);
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
Obj _3516513_37 = R[1];
Obj _3516514_37 = R[2];
Obj _3516980_37 = PRIM_EQ(Nil, _3516513_37);
if (True == _3516980_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3516516_37 = makeNative(2, clofun23, 0, 2, _3516513_37, _3516514_37);
Obj _3516986_37 = PRIM_ISCONS(_3516513_37);
if (True == _3516986_37) {
Obj _3516987_37 = PRIM_CAR(_3516513_37);
Obj x = _3516987_37;
Obj _3516988_37 = PRIM_CDR(_3516513_37);
Obj y = _3516988_37;
R[1] = y;
R[2] = _3516514_37;
R[3] = _3516516_37;
struct frame __curr = {
.fn = clofun24,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, _3516514_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516516_37);
return;
}
}
}
case 1:
{
Obj _3516989_37= co->res;
Obj y = R[1];
Obj _3516514_37 = R[2];
Obj _3516516_37 = R[3];
if (True == _3516989_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), y, _3516514_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516516_37);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516981_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516981_37) {
Obj _3516982_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3516982_37;
Obj _3516983_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3516983_37;
R[1] = x;
struct frame __curr = {
.fn = clofun23,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3516984_37= co->res;
Obj x = R[1];
Obj _3516985_37 = makeCons(x, _3516984_37);
coraReturn(co, _3516985_37);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516508_37 = R[1];
Obj _3516509_37 = R[2];
Obj _3516969_37 = PRIM_EQ(Nil, _3516508_37);
if (True == _3516969_37) {
coraReturn(co, _3516509_37);
return;
} else {
Obj _3516511_37 = makeNative(2, clofun21, 0, 2, _3516508_37, _3516509_37);
Obj _3516975_37 = PRIM_ISCONS(_3516508_37);
if (True == _3516975_37) {
Obj _3516976_37 = PRIM_CAR(_3516508_37);
Obj x = _3516976_37;
Obj _3516977_37 = PRIM_CDR(_3516508_37);
Obj y = _3516977_37;
R[1] = y;
R[2] = _3516509_37;
R[3] = _3516511_37;
struct frame __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, _3516509_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516511_37);
return;
}
}
}
case 1:
{
Obj _3516978_37= co->res;
Obj y = R[1];
Obj _3516509_37 = R[2];
Obj _3516511_37 = R[3];
if (True == _3516978_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), y, _3516509_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516511_37);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516970_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516970_37) {
Obj _3516971_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3516971_37;
Obj _3516972_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3516972_37;
R[1] = x;
struct frame __curr = {
.fn = clofun21,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[81]), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3516973_37= co->res;
Obj x = R[1];
Obj _3516974_37 = makeCons(x, _3516973_37);
coraReturn(co, _3516974_37);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516494_37 = R[1];
Obj _3516495_37 = R[2];
Obj _3516496_37 = R[3];
Obj _3516638_37 = makeNative(2, clofun19, 1, 3, _3516494_37, _3516496_37, _3516495_37);
R[1] = _3516496_37;
R[2] = _3516638_37;
struct frame __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), _3516496_37);
return;
}
case 1:
{
Obj _3516967_37= co->res;
Obj _3516638_37 = R[1];
if (True == _3516967_37) {
co->ctx.sp = R;
coraCall1(co, _3516638_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3516638_37, False);
return;
}
}
case 2:
{
Obj _3516966_37= co->res;
Obj _3516496_37 = R[1];
Obj _3516638_37 = R[2];
if (True == _3516966_37) {
co->ctx.sp = R;
coraCall1(co, _3516638_37, True);
return;
} else {
R[1] = _3516638_37;
struct frame __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), _3516496_37);
return;
}
}
case 3:
{
Obj _3516964_37= co->res;
Obj _3516496_37 = R[1];
Obj _3516638_37 = R[2];
if (True == _3516964_37) {
co->ctx.sp = R;
coraCall1(co, _3516638_37, True);
return;
} else {
Obj _3516965_37 = primIsString(_3516496_37);
if (True == _3516965_37) {
co->ctx.sp = R;
coraCall1(co, _3516638_37, True);
return;
} else {
R[1] = _3516496_37;
R[2] = _3516638_37;
struct frame __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[82]), _3516496_37);
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
Obj _3516639_37 = R[1];
if (True == _3516639_37) {
Obj _3516775_37 = makeCons(closureRef(R[0], 1), Nil);
Obj _3516776_37 = makeCons(__symbolTable[96], _3516775_37);
coraReturn(co, _3516776_37);
return;
} else {
Obj _3516498_37 = makeNative(3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj _3516951_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3516951_37) {
Obj _3516952_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3516953_37 = PRIM_EQ(__symbolTable[84], _3516952_37);
if (True == _3516953_37) {
Obj _3516954_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3516955_37 = PRIM_ISCONS(_3516954_37);
if (True == _3516955_37) {
Obj _3516956_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3516957_37 = PRIM_CAR(_3516956_37);
Obj x = _3516957_37;
Obj _3516958_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3516959_37 = PRIM_CDR(_3516958_37);
Obj _3516960_37 = PRIM_EQ(Nil, _3516959_37);
if (True == _3516960_37) {
R[1] = x;
struct frame __curr = {
.fn = clofun19,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[94]), x, closureRef(R[0], 2));
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
case 1:
{
Obj _3516961_37= co->res;
Obj x = R[1];
Obj _3516962_37 = makeCons(x, Nil);
Obj _3516963_37 = makeCons(__symbolTable[96], _3516962_37);
coraReturn(co, _3516963_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516777_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3516777_37) {
struct frame __curr = {
.fn = clofun18,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3516500_37 = makeNative(1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516929_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516929_37) {
Obj _3516930_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516931_37 = PRIM_EQ(__symbolTable[89], _3516930_37);
if (True == _3516931_37) {
Obj _3516932_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516933_37 = PRIM_ISCONS(_3516932_37);
if (True == _3516933_37) {
Obj _3516934_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516935_37 = PRIM_CAR(_3516934_37);
Obj args = _3516935_37;
Obj _3516936_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516937_37 = PRIM_CDR(_3516936_37);
Obj _3516938_37 = PRIM_ISCONS(_3516937_37);
if (True == _3516938_37) {
Obj _3516939_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516940_37 = PRIM_CDR(_3516939_37);
Obj _3516941_37 = PRIM_CAR(_3516940_37);
Obj body = _3516941_37;
Obj _3516942_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516943_37 = PRIM_CDR(_3516942_37);
Obj _3516944_37 = PRIM_CDR(_3516943_37);
Obj _3516945_37 = PRIM_EQ(Nil, _3516944_37);
if (True == _3516945_37) {
R[1] = body;
R[2] = args;
struct frame __curr = {
.fn = clofun18,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[88]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516500_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516500_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516500_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516500_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516500_37);
return;
}
}
}
case 1:
{
Obj _3516779_37= co->res;
Obj _3516780_37 = makeCons(closureRef(R[0], 0), Nil);
Obj _3516781_37 = makeCons(__symbolTable[93], _3516780_37);
coraReturn(co, _3516781_37);
return;
}
case 2:
{
Obj _3516778_37= co->res;
if (True == _3516778_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
struct frame __curr = {
.fn = clofun18,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[94]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
}
case 3:
{
Obj _3516947_37= co->res;
Obj args = R[1];
Obj _3516948_37 = makeCons(_3516947_37, Nil);
Obj _3516949_37 = makeCons(args, _3516948_37);
Obj _3516950_37 = makeCons(__symbolTable[89], _3516949_37);
coraReturn(co, _3516950_37);
return;
}
case 4:
{
Obj _3516946_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
struct frame __curr = {
.fn = clofun18,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), _3516946_37, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516501_37 = makeNative(2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516897_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516897_37) {
Obj _3516898_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516899_37 = PRIM_EQ(__symbolTable[87], _3516898_37);
if (True == _3516899_37) {
Obj _3516900_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516901_37 = PRIM_ISCONS(_3516900_37);
if (True == _3516901_37) {
Obj _3516902_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516903_37 = PRIM_CAR(_3516902_37);
Obj _3516904_37 = PRIM_ISCONS(_3516903_37);
if (True == _3516904_37) {
Obj _3516905_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516906_37 = PRIM_CAR(_3516905_37);
Obj _3516907_37 = PRIM_CAR(_3516906_37);
Obj _3516908_37 = PRIM_EQ(__symbolTable[87], _3516907_37);
if (True == _3516908_37) {
Obj _3516909_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516910_37 = PRIM_CAR(_3516909_37);
Obj _3516911_37 = PRIM_CDR(_3516910_37);
Obj exp1 = _3516911_37;
Obj _3516912_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516913_37 = PRIM_CDR(_3516912_37);
Obj exp2 = _3516913_37;
Obj _3516914_37 = primGenSym();
Obj f = _3516914_37;
Obj _3516915_37 = primGenSym();
Obj v = _3516915_37;
Obj _3516916_37 = makeCons(v, Nil);
Obj _3516917_37 = makeCons(v, exp2);
Obj _3516918_37 = makeCons(__symbolTable[87], _3516917_37);
Obj _3516919_37 = makeCons(_3516918_37, Nil);
Obj _3516920_37 = makeCons(_3516916_37, _3516919_37);
Obj _3516921_37 = makeCons(__symbolTable[89], _3516920_37);
Obj _3516922_37 = makeCons(__symbolTable[87], exp1);
Obj _3516923_37 = makeCons(_3516922_37, Nil);
Obj _3516924_37 = makeCons(f, _3516923_37);
Obj _3516925_37 = makeCons(_3516924_37, Nil);
Obj _3516926_37 = makeCons(_3516921_37, _3516925_37);
Obj _3516927_37 = makeCons(f, _3516926_37);
Obj _3516928_37 = makeCons(__symbolTable[86], _3516927_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3516928_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516501_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516501_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516501_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516501_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516501_37);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516502_37 = makeNative(2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516890_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516890_37) {
Obj _3516891_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516892_37 = PRIM_EQ(__symbolTable[87], _3516891_37);
if (True == _3516892_37) {
Obj _3516893_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3516893_37;
R[1] = args;
struct frame __curr = {
.fn = clofun16,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516502_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516502_37);
return;
}
}
case 1:
{
Obj _3516895_37= co->res;
Obj _3516896_37 = makeCons(__symbolTable[87], _3516895_37);
coraReturn(co, _3516896_37);
return;
}
case 2:
{
Obj _3516894_37= co->res;
Obj args = R[1];
struct frame __curr = {
.fn = clofun16,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3516894_37, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516503_37 = makeNative(3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516868_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516868_37) {
Obj _3516869_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516870_37 = PRIM_EQ(__symbolTable[85], _3516869_37);
if (True == _3516870_37) {
Obj _3516871_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516872_37 = PRIM_ISCONS(_3516871_37);
if (True == _3516872_37) {
Obj _3516873_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516874_37 = PRIM_CAR(_3516873_37);
Obj x = _3516874_37;
Obj _3516875_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516876_37 = PRIM_CDR(_3516875_37);
Obj _3516877_37 = PRIM_ISCONS(_3516876_37);
if (True == _3516877_37) {
Obj _3516878_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516879_37 = PRIM_CDR(_3516878_37);
Obj _3516880_37 = PRIM_CAR(_3516879_37);
Obj y = _3516880_37;
Obj _3516881_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516882_37 = PRIM_CDR(_3516881_37);
Obj _3516883_37 = PRIM_CDR(_3516882_37);
Obj _3516884_37 = PRIM_EQ(Nil, _3516883_37);
if (True == _3516884_37) {
R[1] = y;
struct frame __curr = {
.fn = clofun15,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516503_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516503_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516503_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516503_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516503_37);
return;
}
}
case 1:
{
Obj _3516886_37= co->res;
Obj _3516885_37 = R[1];
Obj _3516887_37 = makeCons(_3516886_37, Nil);
Obj _3516888_37 = makeCons(_3516885_37, _3516887_37);
Obj _3516889_37 = makeCons(__symbolTable[85], _3516888_37);
coraReturn(co, _3516889_37);
return;
}
case 2:
{
Obj _3516885_37= co->res;
Obj y = R[1];
R[1] = _3516885_37;
struct frame __curr = {
.fn = clofun15,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), y);
return;
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516504_37 = makeNative(1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516835_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516835_37) {
Obj _3516836_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516837_37 = PRIM_EQ(__symbolTable[86], _3516836_37);
if (True == _3516837_37) {
Obj _3516838_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516839_37 = PRIM_ISCONS(_3516838_37);
if (True == _3516839_37) {
Obj _3516840_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516841_37 = PRIM_CAR(_3516840_37);
Obj a = _3516841_37;
Obj _3516842_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516843_37 = PRIM_CDR(_3516842_37);
Obj _3516844_37 = PRIM_ISCONS(_3516843_37);
if (True == _3516844_37) {
Obj _3516845_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516846_37 = PRIM_CDR(_3516845_37);
Obj _3516847_37 = PRIM_CAR(_3516846_37);
Obj b = _3516847_37;
Obj _3516848_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516849_37 = PRIM_CDR(_3516848_37);
Obj _3516850_37 = PRIM_CDR(_3516849_37);
Obj _3516851_37 = PRIM_ISCONS(_3516850_37);
if (True == _3516851_37) {
Obj _3516852_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516853_37 = PRIM_CDR(_3516852_37);
Obj _3516854_37 = PRIM_CDR(_3516853_37);
Obj _3516855_37 = PRIM_CAR(_3516854_37);
Obj c = _3516855_37;
Obj _3516856_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516857_37 = PRIM_CDR(_3516856_37);
Obj _3516858_37 = PRIM_CDR(_3516857_37);
Obj _3516859_37 = PRIM_CDR(_3516858_37);
Obj _3516860_37 = PRIM_EQ(Nil, _3516859_37);
if (True == _3516860_37) {
R[1] = c;
R[2] = a;
struct frame __curr = {
.fn = clofun14,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516504_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516504_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516504_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516504_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516504_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516504_37);
return;
}
}
case 1:
{
Obj _3516863_37= co->res;
Obj _3516861_37 = R[1];
Obj a = R[2];
Obj _3516864_37 = makeCons(_3516863_37, Nil);
Obj _3516865_37 = makeCons(_3516861_37, _3516864_37);
Obj _3516866_37 = makeCons(a, _3516865_37);
Obj _3516867_37 = makeCons(__symbolTable[86], _3516866_37);
coraReturn(co, _3516867_37);
return;
}
case 2:
{
Obj _3516861_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3516862_37 = makeCons(a, closureRef(R[0], 1));
R[1] = _3516861_37;
R[2] = a;
struct frame __curr = {
.fn = clofun14,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), _3516862_37, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516505_37 = makeNative(4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3516803_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516803_37) {
Obj _3516804_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516805_37 = PRIM_ISCONS(_3516804_37);
if (True == _3516805_37) {
Obj _3516806_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516807_37 = PRIM_CAR(_3516806_37);
Obj _3516808_37 = PRIM_EQ(__symbolTable[89], _3516807_37);
if (True == _3516808_37) {
Obj _3516809_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516810_37 = PRIM_CDR(_3516809_37);
Obj exp1 = _3516810_37;
Obj _3516811_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516812_37 = PRIM_ISCONS(_3516811_37);
if (True == _3516812_37) {
Obj _3516813_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516814_37 = PRIM_CAR(_3516813_37);
Obj _3516815_37 = PRIM_ISCONS(_3516814_37);
if (True == _3516815_37) {
Obj _3516816_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516817_37 = PRIM_CAR(_3516816_37);
Obj _3516818_37 = PRIM_CAR(_3516817_37);
Obj _3516819_37 = PRIM_EQ(__symbolTable[87], _3516818_37);
if (True == _3516819_37) {
Obj _3516820_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516821_37 = PRIM_CAR(_3516820_37);
Obj _3516822_37 = PRIM_CDR(_3516821_37);
Obj exp2 = _3516822_37;
Obj _3516823_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3516824_37 = PRIM_CDR(_3516823_37);
Obj _3516825_37 = PRIM_EQ(Nil, _3516824_37);
if (True == _3516825_37) {
Obj _3516826_37 = primGenSym();
Obj f = _3516826_37;
Obj _3516827_37 = makeCons(__symbolTable[89], exp1);
Obj _3516828_37 = makeCons(__symbolTable[87], exp2);
Obj _3516829_37 = makeCons(_3516828_37, Nil);
Obj _3516830_37 = makeCons(f, _3516829_37);
Obj _3516831_37 = makeCons(_3516830_37, Nil);
Obj _3516832_37 = makeCons(_3516827_37, _3516831_37);
Obj _3516833_37 = makeCons(f, _3516832_37);
Obj _3516834_37 = makeCons(__symbolTable[86], _3516833_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3516834_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516505_37);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516506_37 = makeNative(1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj _3516783_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516783_37) {
Obj _3516784_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3516784_37;
Obj _3516785_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3516785_37;
R[1] = op;
R[2] = args;
R[3] = _3516506_37;
struct frame __curr = {
.fn = clofun12,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[104]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516506_37);
return;
}
}
case 1:
{
Obj _3516793_37= co->res;
Obj _3516791_37 = R[1];
Obj _3516794_37 = makeCons(_3516791_37, _3516793_37);
coraReturn(co, _3516794_37);
return;
}
case 2:
{
Obj _3516792_37= co->res;
Obj args = R[1];
Obj _3516791_37 = R[2];
R[1] = _3516791_37;
struct frame __curr = {
.fn = clofun12,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3516792_37, args);
return;
}
case 3:
{
Obj _3516799_37= co->res;
Obj tmp = R[1];
Obj _3516800_37 = makeCons(_3516799_37, Nil);
Obj _3516801_37 = makeCons(tmp, _3516800_37);
Obj _3516802_37 = makeCons(__symbolTable[89], _3516801_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3516802_37);
return;
}
case 4:
{
Obj _3516797_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = _3516797_37;
Obj _3516798_37 = makeCons(op, args);
R[1] = tmp;
struct frame __curr = {
.fn = clofun12,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[88]), _3516798_37, tmp);
return;
}
case 5:
{
Obj _3516788_37= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = _3516788_37;
Obj _3516789_37 = PRIM_EQ(required, provided);
if (True == _3516789_37) {
Obj _3516790_37 = makeCons(op, Nil);
Obj _3516791_37 = makeCons(__symbolTable[90], _3516790_37);
R[1] = args;
R[2] = _3516791_37;
struct frame __curr = {
.fn = clofun12,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj _3516795_37 = PRIM_GT(required, provided);
if (True == _3516795_37) {
Obj _3516796_37 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
struct frame __curr = {
.fn = clofun12,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), _3516796_37, Nil);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("primitive call mismatch"));
return;
}
}
}
case 6:
{
Obj _3516787_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = _3516787_37;
R[1] = required;
R[2] = op;
R[3] = args;
struct frame __curr = {
.fn = clofun12,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), args);
return;
}
case 7:
{
Obj _3516786_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj _3516506_37 = R[3];
if (True == _3516786_37) {
R[1] = op;
R[2] = args;
struct frame __curr = {
.fn = clofun12,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[100]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516506_37);
return;
}
}
}
}

static void clofun11(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame __curr = {
.fn = clofun11,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
case 1:
{
Obj _3516782_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3516782_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516490_37 = R[1];
Obj _3516491_37 = R[2];
Obj _3516770_37 = PRIM_EQ(MAKE_NUMBER(0), _3516490_37);
if (True == _3516770_37) {
coraReturn(co, _3516491_37);
return;
} else {
Obj _3516771_37 = PRIM_SUB(_3516490_37, MAKE_NUMBER(1));
Obj _3516772_37 = primGenSym();
Obj _3516773_37 = makeCons(_3516772_37, _3516491_37);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[98]), _3516771_37, _3516773_37);
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
struct frame __curr = {
.fn = clofun9,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj _3516768_37= co->res;
Obj find = R[1];
if (True == _3516768_37) {
coraReturn(co, makeCString("ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[99]), find);
return;
}
}
case 2:
{
Obj _3516767_37= co->res;
Obj find = _3516767_37;
R[1] = find;
struct frame __curr = {
.fn = clofun9,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), find);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
struct frame __curr = {
.fn = clofun8,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj _3516765_37= co->res;
Obj find = R[1];
if (True == _3516765_37) {
coraReturn(co, makeCString("ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), find);
return;
}
}
case 2:
{
Obj _3516764_37= co->res;
Obj find = _3516764_37;
R[1] = find;
struct frame __curr = {
.fn = clofun8,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), find);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
struct frame __curr = {
.fn = clofun7,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj _3516761_37= co->res;
Obj _3516762_37 = primNot(_3516761_37);
coraReturn(co, _3516762_37);
return;
}
case 2:
{
Obj _3516760_37= co->res;
struct frame __curr = {
.fn = clofun7,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), _3516760_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516486_37 = R[1];
Obj _3516487_37 = R[2];
Obj _3516684_37 = PRIM_EQ(Nil, _3516487_37);
if (True == _3516684_37) {
coraReturn(co, False);
return;
} else {
Obj _3516685_37 = PRIM_ISCONS(_3516487_37);
if (True == _3516685_37) {
Obj _3516686_37 = PRIM_CAR(_3516487_37);
Obj hd = _3516686_37;
Obj _3516687_37 = PRIM_CDR(_3516487_37);
Obj tl = _3516687_37;
R[1] = _3516486_37;
R[2] = tl;
struct frame __curr = {
.fn = clofun6,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), _3516486_37, hd);
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
Obj _3516688_37= co->res;
Obj _3516486_37 = R[1];
Obj tl = R[2];
Obj _3516689_37 = PRIM_LT(_3516688_37, MAKE_NUMBER(0));
if (True == _3516689_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[123]), _3516486_37, tl);
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
coraCall3(co, globalRef(__symbolTable[125]), MAKE_NUMBER(0), x, l);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516480_37 = R[1];
Obj _3516481_37 = R[2];
Obj _3516482_37 = R[3];
Obj _3516673_37 = PRIM_EQ(Nil, _3516482_37);
if (True == _3516673_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3516484_37 = makeNative(1, clofun3, 0, 3, _3516482_37, _3516480_37, _3516481_37);
Obj _3516678_37 = PRIM_ISCONS(_3516482_37);
if (True == _3516678_37) {
Obj _3516679_37 = PRIM_CAR(_3516482_37);
Obj a = _3516679_37;
Obj _3516680_37 = PRIM_CDR(_3516482_37);
Obj _3516681_37 = PRIM_EQ(_3516481_37, a);
if (True == _3516681_37) {
coraReturn(co, _3516480_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516484_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516484_37);
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
Obj _3516674_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516674_37) {
Obj _3516675_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516676_37 = PRIM_CDR(closureRef(R[0], 0));
Obj b = _3516676_37;
Obj _3516677_37 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[125]), _3516677_37, closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516475_37 = R[1];
Obj _3516476_37 = R[2];
Obj _3516477_37 = R[3];
Obj _3516667_37 = PRIM_EQ(Nil, _3516477_37);
if (True == _3516667_37) {
coraReturn(co, _3516476_37);
return;
} else {
Obj _3516668_37 = PRIM_ISCONS(_3516477_37);
if (True == _3516668_37) {
Obj _3516669_37 = PRIM_CAR(_3516477_37);
Obj x = _3516669_37;
Obj _3516670_37 = PRIM_CDR(_3516477_37);
Obj y = _3516670_37;
R[1] = _3516475_37;
R[2] = y;
struct frame __curr = {
.fn = clofun2,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3516475_37, _3516476_37, x);
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
Obj _3516671_37= co->res;
Obj _3516475_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), _3516475_37, _3516671_37, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516470_37 = R[1];
Obj _3516471_37 = R[2];
Obj _3516652_37 = PRIM_EQ(Nil, _3516471_37);
if (True == _3516652_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3516473_37 = makeNative(1, clofun0, 0, 2, _3516471_37, _3516470_37);
Obj _3516656_37 = PRIM_ISCONS(_3516471_37);
if (True == _3516656_37) {
Obj _3516657_37 = PRIM_CAR(_3516471_37);
Obj _3516658_37 = PRIM_ISCONS(_3516657_37);
if (True == _3516658_37) {
Obj _3516659_37 = PRIM_CAR(_3516471_37);
Obj _3516660_37 = PRIM_CAR(_3516659_37);
Obj x = _3516660_37;
Obj _3516661_37 = PRIM_CAR(_3516471_37);
Obj _3516662_37 = PRIM_CDR(_3516661_37);
Obj y = _3516662_37;
Obj _3516663_37 = PRIM_CDR(_3516471_37);
Obj _3516664_37 = PRIM_EQ(_3516470_37, x);
if (True == _3516664_37) {
Obj _3516665_37 = makeCons(x, y);
coraReturn(co, _3516665_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3516473_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516473_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3516473_37);
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
Obj _3516653_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3516653_37) {
Obj _3516654_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3516655_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3516655_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[128]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

