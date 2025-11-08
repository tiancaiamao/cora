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
saveCont(co, clofun144, 4, R);
coraCall1(co, globalRef(__symbolTable[130]), makeCString(co->gc, "cora/lib/toc/internal"));
return;
}
case 1:
{
Obj x4319003847= co->res;
Obj x4319005639 = primSet(co, __symbolTable[28], makeNative(co->gc, 3, clofun110, 2, 0));
Obj x4318987815 = primSet(co, __symbolTable[27], makeNative(co->gc, 3, clofun111, 2, 0));
Obj x4318347527 = primSet(co, __symbolTable[26], makeNative(co->gc, 7, clofun113, 3, 0));
Obj x4317931783 = primSet(co, __symbolTable[25], makeNative(co->gc, 4, clofun115, 3, 0));
Obj x4317885255 = primSet(co, __symbolTable[23], makeNative(co->gc, 4, clofun118, 3, 0));
Obj x4317589767 = primSet(co, __symbolTable[22], makeNative(co->gc, 2, clofun123, 1, 0));
Obj x4317459719 = primSet(co, __symbolTable[17], makeNative(co->gc, 5, clofun126, 4, 0));
Obj x4317379303 = primSet(co, __symbolTable[9], makeNative(co->gc, 3, clofun131, 2, 0));
Obj x4317379655 = primSet(co, __symbolTable[8], makeNative(co->gc, 3, clofun132, 2, 0));
Obj x4317350023 = primSet(co, __symbolTable[6], makeNative(co->gc, 2, clofun140, 1, 0));
Obj x4317350183 = primSet(co, __symbolTable[7], False);
Obj x4317327687 = primSet(co, __symbolTable[5], makeNative(co->gc, 3, clofun142, 1, 0));
Obj x4317329095 = primSet(co, __symbolTable[3], makeNative(co->gc, 4, clofun143, 2, 0));
coraReturn(co, x4317329095);
return;
}
case 2:
{
Obj x4319106759= co->res;
Obj x4319106919 = primSet(co, __symbolTable[129], Nil);
Obj x4319003079 = primSet(co, __symbolTable[128], makeNative(co->gc, 3, clofun1, 2, 0));
Obj x4319004167 = primSet(co, __symbolTable[126], makeNative(co->gc, 4, clofun2, 3, 0));
Obj x4319006151 = primSet(co, __symbolTable[125], makeNative(co->gc, 4, clofun4, 3, 0));
Obj x4319006439 = primSet(co, __symbolTable[124], makeNative(co->gc, 3, clofun5, 2, 0));
Obj x4318987207 = primSet(co, __symbolTable[123], makeNative(co->gc, 3, clofun6, 2, 0));
Obj x4318987623 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj x4318987655 = makeCons(co->gc, MAKE_NUMBER(2), x4318987623);
Obj x4318987687 = makeCons(co->gc, __symbolTable[121], x4318987655);
Obj x4318987975 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj x4318988007 = makeCons(co->gc, MAKE_NUMBER(1), x4318987975);
Obj x4318988039 = makeCons(co->gc, __symbolTable[120], x4318988007);
Obj x4318988327 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj x4318988359 = makeCons(co->gc, MAKE_NUMBER(1), x4318988327);
Obj x4318988391 = makeCons(co->gc, __symbolTable[119], x4318988359);
Obj x4318988679 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj x4318988711 = makeCons(co->gc, MAKE_NUMBER(2), x4318988679);
Obj x4318988743 = makeCons(co->gc, __symbolTable[118], x4318988711);
Obj x4318989031 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj x4318989063 = makeCons(co->gc, MAKE_NUMBER(1), x4318989031);
Obj x4318989159 = makeCons(co->gc, __symbolTable[117], x4318989063);
Obj x4318990087 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj x4318990119 = makeCons(co->gc, MAKE_NUMBER(2), x4318990087);
Obj x4318990151 = makeCons(co->gc, __symbolTable[116], x4318990119);
Obj x4318392551 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj x4318392583 = makeCons(co->gc, MAKE_NUMBER(2), x4318392551);
Obj x4318392615 = makeCons(co->gc, __symbolTable[115], x4318392583);
Obj x4318392935 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj x4318392967 = makeCons(co->gc, MAKE_NUMBER(2), x4318392935);
Obj x4318392999 = makeCons(co->gc, __symbolTable[114], x4318392967);
Obj x4318393287 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj x4318393319 = makeCons(co->gc, MAKE_NUMBER(2), x4318393287);
Obj x4318393351 = makeCons(co->gc, __symbolTable[113], x4318393319);
Obj x4318393895 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj x4318393927 = makeCons(co->gc, MAKE_NUMBER(2), x4318393895);
Obj x4318393959 = makeCons(co->gc, __symbolTable[112], x4318393927);
Obj x4318394343 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj x4318394375 = makeCons(co->gc, MAKE_NUMBER(2), x4318394343);
Obj x4318394439 = makeCons(co->gc, __symbolTable[111], x4318394375);
Obj x4318394823 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj x4318394855 = makeCons(co->gc, MAKE_NUMBER(2), x4318394823);
Obj x4318394887 = makeCons(co->gc, __symbolTable[110], x4318394855);
Obj x4318395367 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj x4318395463 = makeCons(co->gc, MAKE_NUMBER(0), x4318395367);
Obj x4318395495 = makeCons(co->gc, __symbolTable[109], x4318395463);
Obj x4318395975 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj x4318396007 = makeCons(co->gc, MAKE_NUMBER(1), x4318395975);
Obj x4318396039 = makeCons(co->gc, __symbolTable[108], x4318396007);
Obj x4318396391 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj x4318375943 = makeCons(co->gc, MAKE_NUMBER(1), x4318396391);
Obj x4318375975 = makeCons(co->gc, __symbolTable[107], x4318375943);
Obj x4318376263 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj x4318376295 = makeCons(co->gc, MAKE_NUMBER(1), x4318376263);
Obj x4318376327 = makeCons(co->gc, __symbolTable[106], x4318376295);
Obj x4318376647 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj x4318376679 = makeCons(co->gc, MAKE_NUMBER(1), x4318376647);
Obj x4318376711 = makeCons(co->gc, __symbolTable[105], x4318376679);
Obj x4318376743 = makeCons(co->gc, x4318376711, Nil);
Obj x4318376775 = makeCons(co->gc, x4318376327, x4318376743);
Obj x4318376807 = makeCons(co->gc, x4318375975, x4318376775);
Obj x4318376839 = makeCons(co->gc, x4318396039, x4318376807);
Obj x4318376871 = makeCons(co->gc, x4318395495, x4318376839);
Obj x4318376903 = makeCons(co->gc, x4318394887, x4318376871);
Obj x4318376935 = makeCons(co->gc, x4318394439, x4318376903);
Obj x4318376967 = makeCons(co->gc, x4318393959, x4318376935);
Obj x4318376999 = makeCons(co->gc, x4318393351, x4318376967);
Obj x4318377031 = makeCons(co->gc, x4318392999, x4318376999);
Obj x4318377063 = makeCons(co->gc, x4318392615, x4318377031);
Obj x4318377095 = makeCons(co->gc, x4318990151, x4318377063);
Obj x4318377127 = makeCons(co->gc, x4318989159, x4318377095);
Obj x4321727367 = makeCons(co->gc, x4318988743, x4318377127);
Obj x4321727399 = makeCons(co->gc, x4318988391, x4321727367);
Obj x4321727463 = makeCons(co->gc, x4318988039, x4321727399);
Obj x4321727495 = makeCons(co->gc, x4318987687, x4321727463);
Obj x4321727527 = primSet(co, __symbolTable[122], x4321727495);
Obj x4321729191 = primSet(co, __symbolTable[104], makeNative(co->gc, 2, clofun7, 1, 0));
Obj x4321730503 = primSet(co, __symbolTable[102], makeNative(co->gc, 2, clofun8, 1, 0));
Obj x4320457831 = primSet(co, __symbolTable[100], makeNative(co->gc, 2, clofun9, 1, 0));
Obj x4320458887 = primSet(co, __symbolTable[98], makeNative(co->gc, 3, clofun10, 2, 0));
Obj x4319122215 = primSet(co, __symbolTable[97], makeNative(co->gc, 4, clofun20, 3, 0));
Obj x4319124295 = primSet(co, __symbolTable[81], makeNative(co->gc, 4, clofun22, 2, 0));
Obj x4319105895 = primSet(co, __symbolTable[80], makeNative(co->gc, 4, clofun24, 2, 0));
Obj x4318395239 = primSet(co, __symbolTable[79], makeNative(co->gc, 2, clofun31, 1, 0));
Obj x4319245927 = primSet(co, __symbolTable[76], makeNative(co->gc, 2, clofun41, 1, 0));
Obj x4319123527 = primSet(co, __symbolTable[71], makeNative(co->gc, 4, clofun44, 2, 0));
Obj x4319124039 = primSet(co, __symbolTable[70], makeNative(co->gc, 2, clofun45, 1, 0));
Obj x4317932295 = primSet(co, __symbolTable[69], makeNative(co->gc, 3, clofun54, 2, 0));
Obj x4317887079 = primSet(co, __symbolTable[68], makeNative(co->gc, 4, clofun57, 3, 0));
Obj x4317590663 = primSet(co, __symbolTable[63], makeNative(co->gc, 3, clofun61, 2, 0));
Obj x4319530087 = primSet(co, __symbolTable[61], makeNative(co->gc, 4, clofun65, 3, 0));
Obj x4319413863 = primSet(co, __symbolTable[60], makeNative(co->gc, 5, clofun68, 4, 0));
Obj x4319415015 = primSet(co, __symbolTable[58], makeNative(co->gc, 3, clofun70, 2, 0));
Obj x4319253671 = primSet(co, __symbolTable[57], makeNative(co->gc, 2, clofun72, 1, 0));
Obj x4319134247 = primSet(co, __symbolTable[56], makeNative(co->gc, 6, clofun74, 2, 0));
Obj x4319136327 = primSet(co, __symbolTable[54], makeNative(co->gc, 4, clofun75, 2, 0));
Obj x4319121447 = primSet(co, __symbolTable[66], makeNative(co->gc, 3, clofun76, 2, 0));
Obj x4319122631 = primSet(co, __symbolTable[94], makeNative(co->gc, 4, clofun77, 2, 0));
Obj x4319124199 = primSet(co, __symbolTable[51], makeNative(co->gc, 4, clofun78, 3, 0));
Obj x4319124519 = primSet(co, __symbolTable[50], makeNative(co->gc, 3, clofun79, 2, 0));
Obj x4319105767 = primSet(co, __symbolTable[49], makeNative(co->gc, 6, clofun81, 5, 0));
Obj x4319107815 = primSet(co, __symbolTable[45], makeNative(co->gc, 6, clofun83, 5, 0));
Obj x4319254343 = primSet(co, __symbolTable[46], makeNative(co->gc, 6, clofun96, 5, 0));
Obj x4319247111 = primSet(co, __symbolTable[43], makeNative(co->gc, 6, clofun98, 5, 0));
Obj x4319136295 = primSet(co, __symbolTable[40], makeNative(co->gc, 8, clofun100, 5, 0));
Obj x4319137159 = primSet(co, __symbolTable[42], makeNative(co->gc, 3, clofun101, 2, 0));
Obj x4319122503 = primSet(co, __symbolTable[39], makeNative(co->gc, 3, clofun102, 2, 0));
Obj x4319123271 = primSet(co, __symbolTable[38], makeNative(co->gc, 3, clofun103, 2, 0));
Obj x4319123815 = primSet(co, __symbolTable[37], makeNative(co->gc, 2, clofun104, 1, 0));
Obj x4319124391 = primSet(co, __symbolTable[36], makeNative(co->gc, 2, clofun105, 1, 0));
Obj x4319124775 = primSet(co, __symbolTable[35], makeNative(co->gc, 2, clofun106, 1, 0));
Obj x4319106311 = primSet(co, __symbolTable[34], makeNative(co->gc, 3, clofun107, 1, 0));
Obj x4319002663 = primSet(co, __symbolTable[32], makeNative(co->gc, 3, clofun108, 2, 0));
saveCont(co, clofun144, 1, R);
coraCall2(co, globalRef(__symbolTable[31]), __symbolTable[30], makeNative(co->gc, 2, clofun109, 1, 0));
return;
}
case 3:
{
Obj x4319106599= co->res;
saveCont(co, clofun144, 2, R);
coraCall1(co, globalRef(__symbolTable[130]), makeCString(co->gc, "cora/lib/hash-h"));
return;
}
case 4:
{
Obj x4319106439= co->res;
saveCont(co, clofun144, 3, R);
coraCall1(co, globalRef(__symbolTable[130]), makeCString(co->gc, "cora/lib/io"));
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
Obj x4317327975 = primGenSym(co);
Obj globals = x4317327975;
Obj x4317328135 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 7, R);
coraCall1(co, globalRef(__symbolTable[28]), globals);
return;
}
case 1:
{
Obj x4317328999= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), stream);
return;
}
case 2:
{
Obj x4317328967= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
saveCont(co, clofun143, 1, R);
coraCall3(co, globalRef(__symbolTable[23]), stream, bc, x4317328967);
return;
}
case 3:
{
Obj x4317328743= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = x4317328743;
R[1] = bc;
R[2] = stream;
saveCont(co, clofun143, 2, R);
coraCall1(co, globalRef(__symbolTable[52]), globals);
return;
}
case 4:
{
Obj x4317328583= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = x4317328583;
R[1] = globals;
R[2] = bc;
saveCont(co, clofun143, 3, R);
coraCall1(co, globalRef(__symbolTable[1]), to);
return;
}
case 5:
{
Obj x4317328551= co->res;
Obj x4317328359 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
saveCont(co, clofun143, 4, R);
coraCall1(co, x4317328359, x4317328551);
return;
}
case 6:
{
Obj x4317328519= co->res;
Obj x4317328359 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x4317328359;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 5, R);
coraCall1(co, globalRef(__symbolTable[2]), x4317328519);
return;
}
case 7:
{
Obj x4317328359= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x4317328359;
R[2] = to;
R[3] = globals;
saveCont(co, clofun143, 6, R);
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
saveCont(co, clofun142, 8, R);
coraCall1(co, globalRef(__symbolTable[4]), file_45path);
return;
}
case 1:
{
Obj x4317351655= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 2:
{
Obj x4317351495= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 1, R);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 3:
{
Obj x4317351911= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 4:
{
Obj x4317351751= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 3, R);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 5:
{
Obj x4317327591= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 6:
{
Obj x4317327431= co->res;
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun142, 5, R);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 7:
{
Obj x4317351207= co->res;
Obj x4321727303 = R[1];
Obj sexp = R[2];
if (True == x4317351207) {
Obj x4317351431 = PRIM_CAR(sexp);
Obj x4317351463 = PRIM_EQ(__symbolTable[19], x4317351431);
if (True == x4317351463) {
R[1] = sexp;
saveCont(co, clofun142, 2, R);
coraCall1(co, x4321727303, True);
return;
} else {
R[1] = sexp;
saveCont(co, clofun142, 4, R);
coraCall1(co, x4321727303, False);
return;
}
} else {
R[1] = sexp;
saveCont(co, clofun142, 6, R);
coraCall1(co, x4321727303, False);
return;
}
}
case 8:
{
Obj x4317350535= co->res;
Obj sexp = x4317350535;
Obj x4321727303 = makeNative(co->gc, 2, clofun141, 1, 1, sexp);
R[1] = x4321727303;
R[2] = sexp;
saveCont(co, clofun142, 7, R);
coraCall1(co, globalRef(__symbolTable[65]), sexp);
return;
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727335 = R[1];
if (True == x4321727335) {
Obj x4317350887 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, x4317350887);
return;
} else {
Obj x4317350983 = makeCons(co->gc, closureRef(R[0], 0), Nil);
coraReturn(co, x4317350983);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320460039 = R[1];
Obj x4320460135 = makeNative(co->gc, 1, clofun137, 0, 1, x4320460039);
Obj x4317349031 = PRIM_ISCONS(x4320460039);
if (True == x4317349031) {
Obj x4317349255 = PRIM_CAR(x4320460039);
Obj x4317349287 = PRIM_EQ(__symbolTable[18], x4317349255);
if (True == x4317349287) {
Obj x4317349447 = PRIM_CDR(x4320460039);
Obj more = x4317349447;
Obj x4317349607 = makeCons(co->gc, __symbolTable[18], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x4317349607, makeNative(co->gc, 2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320460135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460135);
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
coraCall4(co, globalRef(__symbolTable[17]), body, Nil, Nil, makeNative(co->gc, 3, clofun138, 2, 0));
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
Obj x4320460423 = makeNative(co->gc, 1, clofun134, 0, 1, closureRef(R[0], 0));
Obj x4317347911 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317347911) {
Obj x4317348135 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317348167 = PRIM_EQ(__symbolTable[19], x4317348135);
if (True == x4317348167) {
Obj x4317348327 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4317348327;
Obj x4317348487 = makeCons(co->gc, __symbolTable[19], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x4317348487, makeNative(co->gc, 2, clofun136, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320460423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460423);
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
coraCall4(co, globalRef(__symbolTable[17]), body, Nil, Nil, makeNative(co->gc, 3, clofun135, 2, 0));
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
Obj x4317380263 = makeCons(co->gc, closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), x4317380263, Nil, Nil, makeNative(co->gc, 3, clofun133, 2, 0));
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
coraCall2(co, globalRef(__symbolTable[8]), type, code);
return;
}
case 1:
{
Obj x4317380487= co->res;
Obj x4317380519 = makeCons(co->gc, __symbolTable[19], x4317380487);
coraReturn(co, x4317380519);
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
Obj x4321727591 = R[1];
Obj x4321727623 = R[2];
Obj x4321728743 = makeNative(co->gc, 2, clofun130, 0, 2, x4321727591, x4321727623);
Obj x4317377767 = PRIM_ISCONS(x4321727591);
if (True == x4317377767) {
Obj x4317377991 = PRIM_CAR(x4321727591);
Obj x4317378023 = PRIM_EQ(__symbolTable[18], x4317377991);
if (True == x4317378023) {
Obj x4317378247 = PRIM_CDR(x4321727591);
Obj x4317378279 = PRIM_ISCONS(x4317378247);
if (True == x4317378279) {
Obj x4317378503 = PRIM_CDR(x4321727591);
Obj x4317378535 = PRIM_CAR(x4317378503);
Obj name = x4317378535;
Obj x4317378759 = PRIM_CDR(x4321727591);
Obj x4317378791 = PRIM_CDR(x4317378759);
Obj more = x4317378791;
R[1] = name;
saveCont(co, clofun131, 1, R);
coraCall2(co, globalRef(__symbolTable[9]), more, x4321727623);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728743);
return;
}
}
case 1:
{
Obj x4317379015= co->res;
Obj name = R[1];
Obj x4317379047 = makeCons(co->gc, name, x4317379015);
Obj x4317379079 = makeCons(co->gc, __symbolTable[18], x4317379047);
coraReturn(co, x4317379079);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729991 = makeNative(co->gc, 2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4317427399 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317427399) {
Obj x4317427655 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317427719 = PRIM_ISCONS(x4317427655);
if (True == x4317427719) {
Obj x4317428039 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317428135 = PRIM_CAR(x4317428039);
Obj x4317428167 = PRIM_EQ(__symbolTable[21], x4317428135);
if (True == x4317428167) {
Obj x4317428551 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317428583 = PRIM_CDR(x4317428551);
Obj x4317428615 = PRIM_ISCONS(x4317428583);
if (True == x4317428615) {
Obj x4317428903 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317428935 = PRIM_CDR(x4317428903);
Obj x4317428967 = PRIM_CAR(x4317428935);
Obj pkg = x4317428967;
Obj x4317429415 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317429447 = PRIM_CDR(x4317429415);
Obj x4317429479 = PRIM_CDR(x4317429447);
Obj x4317429511 = PRIM_EQ(Nil, x4317429479);
if (True == x4317429511) {
Obj x4317429735 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4317429735;
Obj x4317376775 = makeCons(co->gc, pkg, Nil);
Obj x4317376807 = makeCons(co->gc, __symbolTable[21], x4317376775);
R[1] = x4317376807;
saveCont(co, clofun130, 1, R);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729991);
return;
}
}
case 1:
{
Obj x4317377255= co->res;
Obj x4317376807 = R[1];
Obj x4317377287 = makeCons(co->gc, x4317376807, x4317377255);
coraReturn(co, x4317377287);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458023 = makeNative(co->gc, 1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4317461959 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317461959) {
Obj x4317462183 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317462311 = PRIM_ISCONS(x4317462183);
if (True == x4317462311) {
Obj x4317425831 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317425863 = PRIM_CAR(x4317425831);
Obj x4317425895 = PRIM_EQ(__symbolTable[20], x4317425863);
if (True == x4317425895) {
Obj x4317426247 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317426279 = PRIM_CDR(x4317426247);
Obj symbols = x4317426279;
Obj x4317426439 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4317426439;
Obj x4317426727 = makeCons(co->gc, __symbolTable[20], symbols);
R[1] = x4317426727;
saveCont(co, clofun129, 1, R);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458023);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458023);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458023);
return;
}
}
case 1:
{
Obj x4317426823= co->res;
Obj x4317426727 = R[1];
Obj x4317426855 = makeCons(co->gc, x4317426727, x4317426823);
coraReturn(co, x4317426855);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320459239 = makeNative(co->gc, 1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x4317460839 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317460839) {
Obj x4317461063 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317461095 = PRIM_EQ(__symbolTable[19], x4317461063);
if (True == x4317461095) {
Obj x4317461287 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4317461287;
saveCont(co, clofun128, 1, R);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320459239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459239);
return;
}
}
case 1:
{
Obj x4317461511= co->res;
Obj x4317461543 = makeCons(co->gc, __symbolTable[19], x4317461511);
coraReturn(co, x4317461543);
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
Obj x4320459015 = R[1];
Obj x4320459047 = R[2];
Obj x4320459111 = R[3];
Obj x4320459175 = R[4];
Obj x4317590503 = PRIM_EQ(Nil, x4320459015);
if (True == x4317590503) {
R[1] = x4320459111;
R[2] = x4320459175;
saveCont(co, clofun126, 2, R);
coraCall1(co, globalRef(__symbolTable[67]), x4320459047);
return;
} else {
Obj x4320459911 = makeNative(co->gc, 1, clofun125, 0, 4, x4320459015, x4320459047, x4320459111, x4320459175);
Obj x4317535463 = PRIM_ISCONS(x4320459015);
if (True == x4317535463) {
Obj x4317535847 = PRIM_CAR(x4320459015);
Obj x4317535879 = PRIM_ISCONS(x4317535847);
if (True == x4317535879) {
Obj x4317458503 = PRIM_CAR(x4320459015);
Obj x4317458535 = PRIM_CAR(x4317458503);
Obj x4317458567 = PRIM_EQ(__symbolTable[10], x4317458535);
if (True == x4317458567) {
Obj x4317458887 = PRIM_CAR(x4320459015);
Obj x4317458919 = PRIM_CDR(x4317458887);
Obj exp = x4317458919;
Obj x4317459111 = PRIM_CDR(x4320459015);
Obj more = x4317459111;
Obj x4317459399 = makeCons(co->gc, __symbolTable[19], exp);
Obj x4317459431 = makeCons(co->gc, x4317459399, x4320459047);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4317459431, x4320459111, x4320459175);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320459911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459911);
return;
}
}
}
case 1:
{
Obj x4317590887= co->res;
Obj x4320459175 = R[1];
Obj x4317590791 = R[2];
co->ctx.sp = R;
coraCall2(co, x4320459175, x4317590791, x4317590887);
return;
}
case 2:
{
Obj x4317590791= co->res;
Obj x4320459111 = R[1];
Obj x4320459175 = R[2];
R[1] = x4320459175;
R[2] = x4317590791;
saveCont(co, clofun126, 1, R);
coraCall1(co, globalRef(__symbolTable[67]), x4320459111);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320460583 = makeNative(co->gc, 1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4317532775 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317532775) {
Obj x4317533031 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317533063 = PRIM_ISCONS(x4317533031);
if (True == x4317533063) {
Obj x4317533415 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317533447 = PRIM_CAR(x4317533415);
Obj x4317533479 = PRIM_EQ(__symbolTable[12], x4317533447);
if (True == x4317533479) {
Obj x4317533703 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317533767 = PRIM_CDR(x4317533703);
Obj exp = x4317533767;
Obj x4317533927 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4317533927;
Obj x4317534247 = makeCons(co->gc, __symbolTable[11], exp);
Obj x4317534279 = makeCons(co->gc, x4317534247, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4317534279, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320460583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320460583);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4317592039 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317592039) {
Obj x4317592199 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = x4317592199;
Obj x4317592487 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4317592487;
Obj x4317593159 = makeCons(co->gc, exp, Nil);
Obj x4317593351 = makeCons(co->gc, __symbolTable[14], x4317593159);
Obj x4317593383 = makeCons(co->gc, x4317593351, Nil);
Obj x4317593415 = makeCons(co->gc, __symbolTable[15], x4317593383);
Obj x4317532167 = makeCons(co->gc, __symbolTable[13], Nil);
Obj x4317532199 = makeCons(co->gc, x4317532167, Nil);
Obj x4317532231 = makeCons(co->gc, x4317593415, x4317532199);
Obj x4317532327 = makeCons(co->gc, __symbolTable[16], x4317532231);
Obj x4317532359 = makeCons(co->gc, x4317532327, closureRef(R[0], 1));
Obj x4317532487 = makeCons(co->gc, exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4317532359, x4317532487, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727431 = R[1];
Obj x4321727687 = makeNative(co->gc, 1, clofun122, 0, 1, x4321727431);
Obj x4317813095 = PRIM_ISCONS(x4321727431);
if (True == x4317813095) {
Obj x4317813415 = PRIM_CAR(x4321727431);
Obj x4317813447 = PRIM_EQ(__symbolTable[18], x4317813415);
if (True == x4317813447) {
Obj x4317813863 = PRIM_CDR(x4321727431);
Obj x4317813895 = PRIM_ISCONS(x4317813863);
if (True == x4317813895) {
Obj x4317814183 = PRIM_CDR(x4321727431);
Obj x4317814215 = PRIM_CAR(x4317814183);
Obj x4317814567 = PRIM_CDR(x4321727431);
Obj x4317814599 = PRIM_CDR(x4317814567);
Obj remain = x4317814599;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727687);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729447 = makeNative(co->gc, 1, clofun121, 0, 1, closureRef(R[0], 0));
Obj x4317811719 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317811719) {
Obj x4317812199 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317812231 = PRIM_EQ(__symbolTable[19], x4317812199);
if (True == x4317812231) {
Obj x4317812519 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4317812519;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729447);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729447);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730215 = makeNative(co->gc, 2, clofun120, 0, 1, closureRef(R[0], 0));
Obj x4317841895 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317841895) {
Obj x4317842407 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317842439 = PRIM_ISCONS(x4317842407);
if (True == x4317842439) {
Obj x4317842887 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317842919 = PRIM_CAR(x4317842887);
Obj x4317842951 = PRIM_EQ(__symbolTable[20], x4317842919);
if (True == x4317842951) {
Obj x4317843431 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317810695 = PRIM_CDR(x4317843431);
Obj x4317810919 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4317810919;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730215);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730215);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730215);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457607 = makeNative(co->gc, 1, clofun119, 0, 0);
Obj x4317886823 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317886823) {
Obj x4317887207 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317887239 = PRIM_ISCONS(x4317887207);
if (True == x4317887239) {
Obj x4317887687 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317887719 = PRIM_CAR(x4317887687);
Obj x4317887751 = PRIM_EQ(__symbolTable[21], x4317887719);
if (True == x4317887751) {
Obj x4317888199 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317888231 = PRIM_CDR(x4317888199);
Obj x4317888359 = PRIM_ISCONS(x4317888231);
if (True == x4317888359) {
Obj x4317839655 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317839687 = PRIM_CDR(x4317839655);
Obj x4317839719 = PRIM_CAR(x4317839687);
Obj pkg = x4317839719;
Obj x4317840199 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317840231 = PRIM_CDR(x4317840199);
Obj x4317840327 = PRIM_CDR(x4317840231);
Obj x4317840359 = PRIM_EQ(Nil, x4317840327);
if (True == x4317840359) {
Obj x4317840647 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4317840647;
R[1] = remain;
saveCont(co, clofun120, 1, R);
coraCall1(co, globalRef(__symbolTable[130]), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457607);
return;
}
}
case 1:
{
Obj x4317840967= co->res;
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
saveCont(co, clofun118, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "#include \"types.h\"\n"));
return;
}
case 1:
{
Obj x4317885031= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), makeNative(co->gc, 2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj x4317884967= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 1, R);
coraCall3(co, globalRef(__symbolTable[25]), to, globals, x4317884967);
return;
}
case 3:
{
Obj x4317884583= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 2, R);
coraCall1(co, globalRef(__symbolTable[64]), bc);
return;
}
case 4:
{
Obj x4317933511= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "\n\n"));
return;
}
case 5:
{
Obj x4317932615= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 4, R);
coraCall2(co, globalRef(__symbolTable[27]), makeNative(co->gc, 2, clofun116, 1, 1, to), bc);
return;
}
case 6:
{
Obj x4317932359= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun118, 5, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "#include \"runtime.h\"\n\n"));
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
Obj x4317933287 = PRIM_CAR(group);
saveCont(co, clofun116, 1, R);
coraCall2(co, globalRef(__symbolTable[39]), closureRef(R[0], 0), x4317933287);
return;
}
case 1:
{
Obj x4317933319= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, ";\n"));
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
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "static __thread Obj* __symbolTable;\n\n"));
return;
}
case 1:
{
Obj x4317931623= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj x4317931399= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun115, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj x4317930919= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
saveCont(co, clofun115, 2, R);
coraCall2(co, globalRef(__symbolTable[42]), to, label);
return;
}
case 4:
{
Obj x4317930695= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "co->ctx.fn = "));
return;
}
case 5:
{
Obj x4318349799= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
saveCont(co, clofun115, 4, R);
coraCall3(co, globalRef(__symbolTable[126]), makeNative(co->gc, 3, clofun114, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 6:
{
Obj x4318349415= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 5, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, ");\n"));
return;
}
case 7:
{
Obj x4318349383= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 6, R);
coraCall2(co, globalRef(__symbolTable[47]), to, x4318349383);
return;
}
case 8:
{
Obj x4318348903= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 7, R);
coraCall1(co, globalRef(__symbolTable[91]), globals);
return;
}
case 9:
{
Obj x4318348583= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 8, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
return;
}
case 10:
{
Obj x4318348327= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun115, 9, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "void entry(struct Cora *co, int label, Obj *R) {\n"));
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, "__symbolTable["));
return;
}
case 1:
{
Obj x4317930215= co->res;
Obj acc = R[1];
Obj x4317930567 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4317930567);
return;
}
case 2:
{
Obj x4317929863= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun114, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, "\");\n"));
return;
}
case 3:
{
Obj x4317929831= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun114, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), x4317929831);
return;
}
case 4:
{
Obj x4318351111= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun114, 3, R);
coraCall1(co, globalRef(__symbolTable[24]), sym);
return;
}
case 5:
{
Obj x4318350695= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 4, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString(co->gc, "] = intern(\""));
return;
}
case 6:
{
Obj x4318350439= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun114, 5, R);
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
Obj x4318988903 = PRIM_CAR(group);
Obj label = x4318988903;
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun113, 13, R);
coraCall1(co, globalRef(__symbolTable[99]), group);
return;
}
case 1:
{
Obj x4318347431= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "}\n\n"));
return;
}
case 2:
{
Obj x4318379719= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun113, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj x4318379559= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
saveCont(co, clofun113, 2, R);
coraCall3(co, globalRef(__symbolTable[126]), makeNative(co->gc, 3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), x4318379559);
return;
}
case 4:
{
Obj x4318377159= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 3, R);
coraCall1(co, globalRef(__symbolTable[59]), lam);
return;
}
case 5:
{
Obj x4318376423= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 4, R);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "}\n"));
return;
}
case 6:
{
Obj x4318396327= co->res;
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
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
return;
}
case 7:
{
Obj x4318395847= co->res;
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
coraCall(co, globalRef(__symbolTable[45]), 5, __args);
return;
}
case 8:
{
Obj x4318395015= co->res;
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
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, "case 0:\n{\n"));
return;
}
case 9:
{
Obj x4318394535= co->res;
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
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, " switch (label) {\n"));
return;
}
case 10:
{
Obj x4318393575= co->res;
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
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(co->gc, " {\n"));
return;
}
case 11:
{
Obj x4318393159= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = x4318393159;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun113, 10, R);
coraCall2(co, globalRef(__symbolTable[39]), to, label);
return;
}
case 12:
{
Obj x4318392519= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = x4318392519;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
saveCont(co, clofun113, 11, R);
coraCall1(co, globalRef(__symbolTable[101]), lam);
return;
}
case 13:
{
Obj x4318989831= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = x4318989831;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun113, 12, R);
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
saveCont(co, clofun112, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "case "));
return;
}
case 1:
{
Obj x4318379143= co->res;
Obj acc = R[1];
Obj x4318379399 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4318379399);
return;
}
case 2:
{
Obj x4318378823= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun112, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj x4318378791= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun112, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), x4318378791, closureRef(R[0], 3), cont};
coraCall(co, globalRef(__symbolTable[40]), 5, __args);
return;
}
case 4:
{
Obj x4318378311= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 3, R);
coraCall1(co, globalRef(__symbolTable[99]), closureRef(R[0], 2));
return;
}
case 5:
{
Obj x4318377959= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 4, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ":\n{\n"));
return;
}
case 6:
{
Obj x4318377575= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun112, 5, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun111(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458439 = R[1];
Obj x4320458471 = R[2];
Obj x4319006503 = PRIM_EQ(Nil, x4320458471);
if (True == x4319006503) {
coraReturn(co, Nil);
return;
} else {
Obj x4318986279 = PRIM_ISCONS(x4320458471);
if (True == x4318986279) {
Obj x4318986599 = PRIM_CAR(x4320458471);
Obj x = x4318986599;
Obj x4318986983 = PRIM_CDR(x4320458471);
Obj y = x4318986983;
R[1] = x4320458439;
R[2] = y;
saveCont(co, clofun111, 1, R);
coraCall1(co, x4320458439, x);
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
Obj x4318987431= co->res;
Obj x4320458439 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), x4320458439, y);
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
coraCall1(co, globalRef(__symbolTable[38]), globals);
return;
}
case 1:
{
Obj x4319005607= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[34]), x4319005607);
return;
}
case 2:
{
Obj x4319005575= co->res;
saveCont(co, clofun110, 1, R);
coraCall1(co, globalRef(__symbolTable[35]), x4319005575);
return;
}
case 3:
{
Obj x4319005543= co->res;
saveCont(co, clofun110, 2, R);
coraCall1(co, globalRef(__symbolTable[36]), x4319005543);
return;
}
case 4:
{
Obj x4319005415= co->res;
saveCont(co, clofun110, 3, R);
coraCall1(co, globalRef(__symbolTable[37]), x4319005415);
return;
}
case 5:
{
Obj x4319005319= co->res;
Obj exp = R[1];
saveCont(co, clofun110, 4, R);
coraCall1(co, x4319005319, exp);
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
coraCall1(co, globalRef(__symbolTable[99]), exp);
return;
}
case 1:
{
Obj x4319003719= co->res;
Obj obj = R[1];
Obj fns = x4319003719;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), obj, fns);
return;
}
case 2:
{
Obj x4319003463= co->res;
Obj exp = R[1];
Obj obj = x4319003463;
R[1] = obj;
saveCont(co, clofun109, 1, R);
coraCall1(co, globalRef(__symbolTable[29]), exp);
return;
}
}
}

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730375 = R[1];
Obj x4321730471 = R[2];
Obj x4319107047 = PRIM_EQ(Nil, x4321730471);
if (True == x4319107047) {
coraReturn(co, x4321730375);
return;
} else {
Obj x4319107303 = PRIM_ISCONS(x4321730471);
if (True == x4319107303) {
Obj x4319107911 = PRIM_CAR(x4321730471);
Obj hd = x4319107911;
Obj x4319108359 = PRIM_CDR(x4321730471);
Obj more = x4319108359;
Obj x4319108775 = makeCons(co->gc, x4321730375, Nil);
Obj x4319108999 = makeCons(co->gc, hd, x4319108775);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), x4319108999, more);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
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
coraCall1(co, globalRef(__symbolTable[33]), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj x4319106151= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj x4319105991= co->res;
Obj v = R[1];
Obj e2 = x4319105991;
R[1] = v;
saveCont(co, clofun107, 1, R);
coraCall2(co, globalRef(__symbolTable[54]), v, e2);
return;
}
case 3:
{
Obj x4319105639= co->res;
Obj v = R[1];
Obj e1 = x4319105639;
R[1] = v;
saveCont(co, clofun107, 2, R);
coraCall2(co, globalRef(__symbolTable[58]), Nil, e1);
return;
}
case 4:
{
Obj x4319105383= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
saveCont(co, clofun107, 3, R);
coraCall2(co, globalRef(__symbolTable[56]), v, exp);
return;
}
case 5:
{
Obj x4319105031= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
saveCont(co, clofun107, 4, R);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), Nil);
return;
}
case 6:
{
Obj x4319125223= co->res;
Obj exp = R[1];
Obj v = x4319125223;
R[1] = exp;
R[2] = v;
saveCont(co, clofun107, 5, R);
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
saveCont(co, clofun102, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(co->gc, "static void "));
return;
}
case 1:
{
Obj x4319122407= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x4319121959= co->res;
Obj w = R[1];
R[1] = w;
saveCont(co, clofun102, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(co->gc, "(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj x4319121767= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
saveCont(co, clofun102, 2, R);
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
saveCont(co, clofun101, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(co->gc, "clofun"));
return;
}
case 1:
{
Obj x4319137063= co->res;
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
Obj x4321728359 = R[1];
Obj x4321728391 = R[2];
Obj x4321728423 = R[3];
Obj x4321728455 = R[4];
Obj x4321728551 = R[5];
Obj x4321729095 = makeNative(co->gc, 1, clofun99, 0, 0);
Obj x4319186983 = PRIM_ISCONS(x4321728551);
if (True == x4319186983) {
Obj x4319187335 = PRIM_CAR(x4321728551);
Obj x4319187463 = PRIM_EQ(__symbolTable[62], x4319187335);
if (True == x4319187463) {
Obj x4319188263 = PRIM_CDR(x4321728551);
Obj x4319188359 = PRIM_ISCONS(x4319188263);
if (True == x4319188359) {
Obj x4319188775 = PRIM_CDR(x4321728551);
Obj x4319188871 = PRIM_CAR(x4319188775);
Obj var = x4319188871;
Obj x4319189447 = PRIM_CDR(x4321728551);
Obj x4319189479 = PRIM_CDR(x4319189447);
Obj x4319189671 = PRIM_ISCONS(x4319189479);
if (True == x4319189671) {
Obj x4319190375 = PRIM_CDR(x4321728551);
Obj x4319190407 = PRIM_CDR(x4319190375);
Obj x4319190727 = PRIM_CAR(x4319190407);
Obj body = x4319190727;
Obj x4319133799 = PRIM_CDR(x4321728551);
Obj x4319133831 = PRIM_CDR(x4319133799);
Obj x4319134087 = PRIM_CDR(x4319133831);
Obj fvs = x4319134087;
R[1] = var;
R[2] = fvs;
R[3] = x4321728359;
R[4] = x4321728391;
R[5] = x4321728423;
R[6] = x4321728455;
R[7] = body;
saveCont(co, clofun100, 4, R);
coraCall2(co, globalRef(__symbolTable[48]), x4321728455, makeCString(co->gc, "Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729095);
return;
}
}
case 1:
{
Obj x4319135431= co->res;
Obj x4321728359 = R[1];
Obj x4321728391 = R[2];
Obj x4321728423 = R[3];
Obj x4321728455 = R[4];
Obj body = R[5];
co->ctx.sp = R;
Obj __args[5] = {x4321728359, x4321728391, x4321728423, x4321728455, body};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
return;
}
case 2:
{
Obj x4319135239= co->res;
Obj fvs = R[1];
Obj x4321728359 = R[2];
Obj x4321728391 = R[3];
Obj x4321728423 = R[4];
Obj x4321728455 = R[5];
Obj body = R[6];
R[1] = x4321728359;
R[2] = x4321728391;
R[3] = x4321728423;
R[4] = x4321728455;
R[5] = body;
saveCont(co, clofun100, 1, R);
Obj __args[5] = {x4321728359, x4321728391, x4321728423, x4321728455, fvs};
coraCall(co, globalRef(__symbolTable[45]), 5, __args);
return;
}
case 3:
{
Obj x4319134919= co->res;
Obj fvs = R[1];
Obj x4321728359 = R[2];
Obj x4321728391 = R[3];
Obj x4321728423 = R[4];
Obj x4321728455 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = x4321728359;
R[3] = x4321728391;
R[4] = x4321728423;
R[5] = x4321728455;
R[6] = body;
saveCont(co, clofun100, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), x4321728455, makeCString(co->gc, "= co->res;\n"));
return;
}
case 4:
{
Obj x4319134279= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj x4321728359 = R[3];
Obj x4321728391 = R[4];
Obj x4321728423 = R[5];
Obj x4321728455 = R[6];
Obj body = R[7];
Obj x4319134887 = PRIM_CAR(var);
R[1] = fvs;
R[2] = x4321728359;
R[3] = x4321728391;
R[4] = x4321728423;
R[5] = x4321728455;
R[6] = body;
saveCont(co, clofun100, 3, R);
coraCall2(co, globalRef(__symbolTable[44]), x4321728455, x4319134887);
return;
}
}
}

static void clofun99(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
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
Obj x4319254887 = primGenSym(co);
Obj generate_45inst_45list_45h = x4319254887;
Obj x4319246823 = primSet(co, generate_45inst_45list_45h, makeNative(co->gc, 2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
saveCont(co, clofun98, 1, R);
coraCall1(co, globalRef(__symbolTable[52]), generate_45inst_45list_45h);
return;
}
case 1:
{
Obj x4319247047= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, x4319247047, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4319255623 = PRIM_EQ(Nil, x);
if (True == x4319255623) {
coraReturn(co, Nil);
return;
} else {
Obj x4319256167 = PRIM_ISCONS(x);
if (True == x4319256167) {
Obj x4319256327 = PRIM_CAR(x);
Obj a = x4319256327;
Obj x4319244487 = PRIM_CDR(x);
Obj b = x4319244487;
R[1] = b;
saveCont(co, clofun97, 5, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), a};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
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
Obj x4319246215= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x4319246215, b);
return;
}
case 2:
{
Obj x4319245895= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun97, 1, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4319246695= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x4319246695, b);
return;
}
case 4:
{
Obj x4319245639= co->res;
Obj b = R[1];
Obj x4319245671 = primNot(x4319245639);
if (True == x4319245671) {
R[1] = b;
saveCont(co, clofun97, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ", "));
return;
} else {
Nil;
R[1] = b;
saveCont(co, clofun97, 3, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
}
case 5:
{
Obj x4319244807= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun97, 4, R);
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
Obj x4319108583 = primGenSym(co);
Obj generate_45inst_45h = x4319108583;
Obj x4319253895 = primSet(co, generate_45inst_45h, makeNative(co->gc, 3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
saveCont(co, clofun96, 1, R);
coraCall1(co, globalRef(__symbolTable[52]), generate_45inst_45h);
return;
}
case 1:
{
Obj x4319254055= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, x4319254055, x1, env1);
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
Obj x4319002791 = primIsSymbol(x2);
if (True == x4319002791) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj x4321727143 = makeNative(co->gc, 2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj x4319413479 = PRIM_ISCONS(x2);
if (True == x4319413479) {
Obj x4319413927 = PRIM_CAR(x2);
Obj x4319413959 = PRIM_EQ(__symbolTable[93], x4319413927);
if (True == x4319413959) {
Obj x4319414407 = PRIM_CDR(x2);
Obj x4319414439 = PRIM_ISCONS(x4319414407);
if (True == x4319414439) {
Obj x4319414855 = PRIM_CDR(x2);
Obj x4319415175 = PRIM_CAR(x4319414855);
Obj x = x4319415175;
Obj x4319415783 = PRIM_CDR(x2);
Obj x4319415815 = PRIM_CDR(x4319415783);
Obj x4319415847 = PRIM_EQ(Nil, x4319415815);
if (True == x4319415847) {
R[1] = x;
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "globalRef(__symbolTable["));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727143);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727143);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727143);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727143);
return;
}
}
}
case 1:
{
Obj x4319252999= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "])"));
return;
}
case 2:
{
Obj x4319252679= co->res;
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), x4319252679);
return;
}
case 3:
{
Obj x4319416231= co->res;
Obj x = R[1];
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(__symbolTable[50]), x, closureRef(R[0], 2));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727655 = makeNative(co->gc, 2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj x4319528327 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == x4319528327) {
Obj x4319528839 = PRIM_CAR(closureRef(R[0], 4));
Obj x4319528935 = PRIM_EQ(__symbolTable[77], x4319528839);
if (True == x4319528935) {
Obj x4319529287 = PRIM_CDR(closureRef(R[0], 4));
Obj x4319529415 = PRIM_ISCONS(x4319529287);
if (True == x4319529415) {
Obj x4319529735 = PRIM_CDR(closureRef(R[0], 4));
Obj x4319529927 = PRIM_CAR(x4319529735);
Obj idx = x4319529927;
Obj x4319530535 = PRIM_CDR(closureRef(R[0], 4));
Obj x4319530567 = PRIM_CDR(x4319530535);
Obj x4319530599 = PRIM_EQ(Nil, x4319530567);
if (True == x4319530599) {
R[1] = idx;
saveCont(co, clofun94, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "closureRef(R[0], "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727655);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727655);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727655);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727655);
return;
}
}
case 1:
{
Obj x4319412615= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x4319530983= co->res;
Obj idx = R[1];
saveCont(co, clofun94, 1, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), idx);
return;
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321728487 = makeNative(co->gc, 4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4317429063 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x4317429063) {
Obj x4317429287 = PRIM_CAR(closureRef(R[0], 3));
Obj x4317429319 = PRIM_EQ(__symbolTable[96], x4317429287);
if (True == x4317429319) {
Obj x4317429543 = PRIM_CDR(closureRef(R[0], 3));
Obj x4317429575 = PRIM_ISCONS(x4317429543);
if (True == x4317429575) {
Obj x4317376551 = PRIM_CDR(closureRef(R[0], 3));
Obj x4317376583 = PRIM_CAR(x4317376551);
Obj x = x4317376583;
Obj x4317376871 = PRIM_CDR(closureRef(R[0], 3));
Obj x4317376903 = PRIM_CDR(x4317376871);
Obj x4317376935 = PRIM_EQ(Nil, x4317376903);
if (True == x4317376935) {
Obj x4317377095 = primIsSymbol(x);
if (True == x4317377095) {
R[1] = x;
saveCont(co, clofun93, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "__symbolTable["));
return;
} else {
R[1] = x;
saveCont(co, clofun93, 9, R);
coraCall1(co, globalRef(__symbolTable[83]), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728487);
return;
}
}
case 1:
{
Obj x4321729287= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "]"));
return;
}
case 2:
{
Obj x4321729255= co->res;
saveCont(co, clofun93, 1, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x4321729255);
return;
}
case 3:
{
Obj x4321728167= co->res;
Obj x = R[1];
saveCont(co, clofun93, 2, R);
coraCall2(co, globalRef(__symbolTable[50]), x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x4320457639= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 5:
{
Obj x4320456903= co->res;
Obj x = R[1];
saveCont(co, clofun93, 4, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj x4320459495= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "\")"));
return;
}
case 7:
{
Obj x4320459463= co->res;
saveCont(co, clofun93, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x4320459463);
return;
}
case 8:
{
Obj x4320458791= co->res;
Obj x = R[1];
saveCont(co, clofun93, 7, R);
coraCall1(co, globalRef(__symbolTable[41]), x);
return;
}
case 9:
{
Obj x4321730343= co->res;
Obj x = R[1];
if (True == x4321730343) {
R[1] = x;
saveCont(co, clofun93, 5, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "MAKE_NUMBER("));
return;
} else {
Obj x4320458279 = primIsString(x);
if (True == x4320458279) {
R[1] = x;
saveCont(co, clofun93, 8, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "makeCString(co->gc, \""));
return;
} else {
Obj x4320460071 = PRIM_EQ(x, Nil);
if (True == x4320460071) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "Nil"));
return;
} else {
Obj x4320460743 = PRIM_EQ(x, True);
if (True == x4320460743) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "True"));
return;
} else {
Obj x4319527207 = PRIM_EQ(x, False);
if (True == x4319527207) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "False"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no cond match"));
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
Obj x4321729159 = makeNative(co->gc, 3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x4317461159 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4317461159) {
Obj x4317461383 = PRIM_CAR(closureRef(R[0], 2));
Obj x4317461415 = PRIM_EQ(__symbolTable[86], x4317461383);
if (True == x4317461415) {
Obj x4317461639 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317461671 = PRIM_ISCONS(x4317461639);
if (True == x4317461671) {
Obj x4317461895 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317461927 = PRIM_CAR(x4317461895);
Obj a = x4317461927;
Obj x4317462215 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317462247 = PRIM_CDR(x4317462215);
Obj x4317462279 = PRIM_ISCONS(x4317462247);
if (True == x4317462279) {
Obj x4317425703 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317425735 = PRIM_CDR(x4317425703);
Obj x4317425767 = PRIM_CAR(x4317425735);
Obj b = x4317425767;
Obj x4317426119 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317426151 = PRIM_CDR(x4317426119);
Obj x4317426183 = PRIM_CDR(x4317426151);
Obj x4317426215 = PRIM_ISCONS(x4317426183);
if (True == x4317426215) {
Obj x4317426567 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317426599 = PRIM_CDR(x4317426567);
Obj x4317426631 = PRIM_CDR(x4317426599);
Obj x4317426663 = PRIM_CAR(x4317426631);
Obj c = x4317426663;
Obj x4317427079 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317427111 = PRIM_CDR(x4317427079);
Obj x4317427143 = PRIM_CDR(x4317427111);
Obj x4317427175 = PRIM_CDR(x4317427143);
Obj x4317427207 = PRIM_EQ(Nil, x4317427175);
if (True == x4317427207) {
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 8, R);
coraCall2(co, globalRef(__symbolTable[124]), a, closureRef(R[0], 5));
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
} else {
co->ctx.sp = R;
coraCall0(co, x4321729159);
return;
}
}
case 1:
{
Obj x4317428423= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x4317428519 = makeCons(co->gc, a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x4317428423, c, x4317428519);
return;
}
case 2:
{
Obj x4317428263= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 1, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4317428103= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj x4317428071= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
saveCont(co, clofun92, 3, R);
coraCall2(co, x4317428071, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj x4317427847= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 4, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 6:
{
Obj x4317427687= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 5, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, " = "));
return;
}
case 7:
{
Obj x4317427527= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 6, R);
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), a);
return;
}
case 8:
{
Obj x4317427367= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun92, 7, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730311 = makeNative(co->gc, 4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4317533735 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4317533735) {
Obj x4317533959 = PRIM_CAR(closureRef(R[0], 1));
Obj x4317533991 = PRIM_ISCONS(x4317533959);
if (True == x4317533991) {
Obj x4317534311 = PRIM_CAR(closureRef(R[0], 1));
Obj x4317534343 = PRIM_CAR(x4317534311);
Obj x4317534375 = PRIM_EQ(__symbolTable[90], x4317534343);
if (True == x4317534375) {
Obj x4317535303 = PRIM_CAR(closureRef(R[0], 1));
Obj x4317535335 = PRIM_CDR(x4317535303);
Obj x4317535367 = PRIM_ISCONS(x4317535335);
if (True == x4317535367) {
Obj x4317535719 = PRIM_CAR(closureRef(R[0], 1));
Obj x4317535751 = PRIM_CDR(x4317535719);
Obj x4317535783 = PRIM_CAR(x4317535751);
Obj f = x4317535783;
Obj x4317536167 = PRIM_CAR(closureRef(R[0], 1));
Obj x4317536199 = PRIM_CDR(x4317536167);
Obj x4317536231 = PRIM_CDR(x4317536199);
Obj x4317458439 = PRIM_EQ(Nil, x4317536231);
if (True == x4317458439) {
Obj x4317458599 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x4317458599;
R[1] = f;
R[2] = args;
saveCont(co, clofun91, 10, R);
coraCall1(co, globalRef(__symbolTable[102]), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730311);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730311);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730311);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730311);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730311);
return;
}
}
case 1:
{
Obj x4317459335= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x4317459175= co->res;
Obj args = R[1];
saveCont(co, clofun91, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 3:
{
Obj x4317459815= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 4:
{
Obj x4317459655= co->res;
Obj args = R[1];
saveCont(co, clofun91, 3, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 5:
{
Obj x4317460295= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 6:
{
Obj x4317460135= co->res;
Obj args = R[1];
saveCont(co, clofun91, 5, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 7:
{
Obj x4317460615= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 8:
{
Obj x4317460455= co->res;
Obj args = R[1];
saveCont(co, clofun91, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 9:
{
Obj x4317458855= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4317459079 = PRIM_EQ(f, __symbolTable[121]);
if (True == x4317459079) {
R[1] = args;
saveCont(co, clofun91, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
} else {
Obj x4317459559 = PRIM_EQ(f, __symbolTable[109]);
if (True == x4317459559) {
R[1] = args;
saveCont(co, clofun91, 4, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co"));
return;
} else {
Obj x4317460039 = PRIM_EQ(f, __symbolTable[118]);
if (True == x4317460039) {
R[1] = args;
saveCont(co, clofun91, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co->gc, "));
return;
} else {
R[1] = args;
saveCont(co, clofun91, 8, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "("));
return;
}
}
}
}
case 10:
{
Obj x4317458823= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
saveCont(co, clofun91, 9, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x4317458823);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727815 = makeNative(co->gc, 5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4317814535 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4317814535) {
Obj x4317589575 = PRIM_CAR(closureRef(R[0], 2));
Obj x4317589607 = PRIM_EQ(__symbolTable[87], x4317589575);
if (True == x4317589607) {
Obj x4317589959 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317589991 = PRIM_ISCONS(x4317589959);
if (True == x4317589991) {
Obj x4317590343 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317590375 = PRIM_CAR(x4317590343);
Obj a = x4317590375;
Obj x4317590695 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317590727 = PRIM_CDR(x4317590695);
Obj x4317590759 = PRIM_ISCONS(x4317590727);
if (True == x4317590759) {
Obj x4317591175 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317591207 = PRIM_CDR(x4317591175);
Obj x4317591303 = PRIM_CAR(x4317591207);
Obj b = x4317591303;
Obj x4317592231 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317592263 = PRIM_CDR(x4317592231);
Obj x4317592295 = PRIM_CDR(x4317592263);
Obj x4317592327 = PRIM_ISCONS(x4317592295);
if (True == x4317592327) {
Obj x4317592679 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317592711 = PRIM_CDR(x4317592679);
Obj x4317592743 = PRIM_CDR(x4317592711);
Obj x4317592775 = PRIM_CAR(x4317592743);
Obj c = x4317592775;
Obj x4317593191 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317593223 = PRIM_CDR(x4317593191);
Obj x4317593255 = PRIM_CDR(x4317593223);
Obj x4317593287 = PRIM_CDR(x4317593255);
Obj x4317593319 = PRIM_EQ(Nil, x4317593287);
if (True == x4317593319) {
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun90, 9, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "if (True == "));
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
} else {
co->ctx.sp = R;
coraCall0(co, x4321727815);
return;
}
}
case 1:
{
Obj x4317533127= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "}\n"));
return;
}
case 2:
{
Obj x4317533095= co->res;
Obj c = R[1];
saveCont(co, clofun90, 1, R);
coraCall2(co, x4317533095, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4317532871= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun90, 2, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 4:
{
Obj x4317532711= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun90, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "} else {\n"));
return;
}
case 5:
{
Obj x4317532679= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
saveCont(co, clofun90, 4, R);
coraCall2(co, x4317532679, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj x4317532455= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 5, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 7:
{
Obj x4317532295= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ") {\n"));
return;
}
case 8:
{
Obj x4317532263= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
saveCont(co, clofun90, 7, R);
coraCall2(co, x4317532263, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x4317593479= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun90, 8, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729319 = makeNative(co->gc, 3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj x4317840167 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4317840167) {
Obj x4317840455 = PRIM_CAR(closureRef(R[0], 1));
Obj x4317840487 = PRIM_EQ(__symbolTable[78], x4317840455);
if (True == x4317840487) {
Obj x4317840775 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317840807 = PRIM_ISCONS(x4317840775);
if (True == x4317840807) {
Obj x4317841127 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317841159 = PRIM_CAR(x4317841127);
Obj label = x4317841159;
Obj x4317841543 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317841575 = PRIM_CDR(x4317841543);
Obj x4317841735 = PRIM_ISCONS(x4317841575);
if (True == x4317841735) {
Obj x4317842087 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317842119 = PRIM_CDR(x4317842087);
Obj x4317842151 = PRIM_CAR(x4317842119);
Obj nargs = x4317842151;
Obj x4317842631 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317842663 = PRIM_CDR(x4317842631);
Obj x4317842695 = PRIM_CDR(x4317842663);
Obj x4317842727 = PRIM_ISCONS(x4317842695);
if (True == x4317842727) {
Obj x4317843175 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317843207 = PRIM_CDR(x4317843175);
Obj x4317843303 = PRIM_CDR(x4317843207);
Obj x4317843335 = PRIM_CAR(x4317843303);
Obj nframe = x4317843335;
Obj x4317810983 = PRIM_CDR(closureRef(R[0], 1));
Obj x4317811015 = PRIM_CDR(x4317810983);
Obj x4317811143 = PRIM_CDR(x4317811015);
Obj x4317811175 = PRIM_CDR(x4317811143);
Obj frees = x4317811175;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
saveCont(co, clofun89, 12, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "makeNative(co->gc, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729319);
return;
}
}
case 1:
{
Obj x4317813703= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x4317813607= co->res;
Obj frees = R[1];
saveCont(co, clofun89, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 3:
{
Obj x4317813351= co->res;
Obj frees = R[1];
Obj x4317813383 = primNot(x4317813351);
if (True == x4317813383) {
R[1] = frees;
saveCont(co, clofun89, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
}
case 4:
{
Obj x4317813031= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 3, R);
coraCall1(co, globalRef(__symbolTable[103]), frees);
return;
}
case 5:
{
Obj x4317812999= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 4, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x4317812999);
return;
}
case 6:
{
Obj x4317812647= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 5, R);
coraCall1(co, globalRef(__symbolTable[91]), frees);
return;
}
case 7:
{
Obj x4317812487= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun89, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 8:
{
Obj x4317812263= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
saveCont(co, clofun89, 7, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 9:
{
Obj x4317812039= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun89, 8, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 10:
{
Obj x4317811751= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun89, 9, R);
coraCall2(co, globalRef(__symbolTable[42]), closureRef(R[0], 5), label);
return;
}
case 11:
{
Obj x4317811591= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun89, 10, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 12:
{
Obj x4317811335= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun89, 11, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nframe);
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730439 = makeNative(co->gc, 2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x4317885735 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4317885735) {
Obj x4317886023 = PRIM_CAR(closureRef(R[0], 2));
Obj x4317886055 = PRIM_EQ(__symbolTable[85], x4317886023);
if (True == x4317886055) {
Obj x4317886343 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317886407 = PRIM_ISCONS(x4317886343);
if (True == x4317886407) {
Obj x4317886663 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317886727 = PRIM_CAR(x4317886663);
Obj a = x4317886727;
Obj x4317887047 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317887111 = PRIM_CDR(x4317887047);
Obj x4317887143 = PRIM_ISCONS(x4317887111);
if (True == x4317887143) {
Obj x4317887463 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317887495 = PRIM_CDR(x4317887463);
Obj x4317887527 = PRIM_CAR(x4317887495);
Obj b = x4317887527;
Obj x4317887911 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317887943 = PRIM_CDR(x4317887911);
Obj x4317887975 = PRIM_CDR(x4317887943);
Obj x4317888007 = PRIM_EQ(Nil, x4317887975);
if (True == x4317888007) {
R[1] = a;
R[2] = b;
saveCont(co, clofun88, 4, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730439);
return;
}
}
case 1:
{
Obj x4317839591= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, x4317839591, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj x4317839367= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun88, 1, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4317888327= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun88, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj x4317888263= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
saveCont(co, clofun88, 3, R);
coraCall2(co, x4317888263, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457415 = makeNative(co->gc, 2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4317931975 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4317931975) {
Obj x4317932391 = PRIM_CAR(closureRef(R[0], 2));
Obj x4317932423 = PRIM_EQ(__symbolTable[72], x4317932391);
if (True == x4317932423) {
Obj x4317932679 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317932711 = PRIM_ISCONS(x4317932679);
if (True == x4317932711) {
Obj x4317932999 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317933031 = PRIM_CAR(x4317932999);
Obj x = x4317933031;
Obj x4317933383 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317933415 = PRIM_CDR(x4317933383);
Obj x4317933447 = PRIM_EQ(Nil, x4317933415);
if (True == x4317933447) {
R[1] = x;
saveCont(co, clofun87, 4, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457415);
return;
}
}
case 1:
{
Obj x4317884999= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj x4317884807= co->res;
saveCont(co, clofun87, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 3:
{
Obj x4317884775= co->res;
Obj x = R[1];
saveCont(co, clofun87, 2, R);
coraCall2(co, x4317884775, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x4317884455= co->res;
Obj x = R[1];
R[1] = x;
saveCont(co, clofun87, 3, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457863 = makeNative(co->gc, 3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4318350471 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4318350471) {
Obj x4318350759 = PRIM_CAR(closureRef(R[0], 2));
Obj x4318350983 = PRIM_EQ(__symbolTable[74], x4318350759);
if (True == x4318350983) {
Obj x4318351303 = PRIM_CDR(closureRef(R[0], 2));
Obj x4318351335 = PRIM_ISCONS(x4318351303);
if (True == x4318351335) {
Obj x4317929895 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317929927 = PRIM_CAR(x4317929895);
Obj exp = x4317929927;
Obj x4317930599 = PRIM_CDR(closureRef(R[0], 2));
Obj x4317930631 = PRIM_CDR(x4317930599);
Obj x4317930663 = PRIM_EQ(Nil, x4317930631);
if (True == x4317930663) {
R[1] = exp;
saveCont(co, clofun86, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457863);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457863);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457863);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457863);
return;
}
}
case 1:
{
Obj x4317931367= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj x4317931335= co->res;
Obj exp = R[1];
saveCont(co, clofun86, 1, R);
coraCall2(co, x4317931335, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4317930823= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun86, 2, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458343 = makeNative(co->gc, 4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4318377479 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318377479) {
Obj x4318377767 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318377799 = PRIM_EQ(__symbolTable[73], x4318377767);
if (True == x4318377799) {
Obj x4318378151 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318378279 = PRIM_ISCONS(x4318378151);
if (True == x4318378279) {
Obj x4318378567 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318378727 = PRIM_CAR(x4318378567);
Obj exp = x4318378727;
Obj x4318379239 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379271 = PRIM_CDR(x4318379239);
Obj x4318379303 = PRIM_ISCONS(x4318379271);
if (True == x4318379303) {
Obj x4318379879 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379911 = PRIM_CDR(x4318379879);
Obj x4318379943 = PRIM_CAR(x4318379911);
Obj label = x4318379943;
Obj x4318347591 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318347623 = PRIM_CDR(x4318347591);
Obj x4318347655 = PRIM_CDR(x4318347623);
Obj fvs = x4318347655;
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 8, R);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs};
coraCall(co, globalRef(__symbolTable[49]), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458343);
return;
}
}
case 1:
{
Obj x4318349703= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj x4318349671= co->res;
Obj exp = R[1];
saveCont(co, clofun85, 1, R);
coraCall2(co, x4318349671, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4318349287= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun85, 2, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 4:
{
Obj x4318348935= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun85, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", R);\n"));
return;
}
case 5:
{
Obj x4318348647= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun85, 4, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), label);
return;
}
case 6:
{
Obj x4318348423= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 5, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 7:
{
Obj x4318348263= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 6, R);
coraCall2(co, globalRef(__symbolTable[42]), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 8:
{
Obj x4318348103= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun85, 7, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "saveCont(co, "));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319006183 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319006183) {
Obj x4319006663 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4319006663;
Obj x4318986439 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4318986439;
R[1] = f;
R[2] = args;
saveCont(co, clofun84, 18, R);
coraCall1(co, globalRef(__symbolTable[91]), args);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4318393223= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", __args);\n"));
return;
}
case 2:
{
Obj x4318392775= co->res;
Obj nargs = R[1];
saveCont(co, clofun84, 1, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 3:
{
Obj x4318392455= co->res;
Obj nargs = R[1];
R[1] = nargs;
saveCont(co, clofun84, 2, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 4:
{
Obj x4318392423= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = nargs;
saveCont(co, clofun84, 3, R);
coraCall2(co, x4318392423, f, closureRef(R[0], 4));
return;
}
case 5:
{
Obj x4318988999= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 4, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 6:
{
Obj x4318988583= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 5, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "coraCall(co, "));
return;
}
case 7:
{
Obj x4318988263= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 6, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "};\n"));
return;
}
case 8:
{
Obj x4318987879= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun84, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 9:
{
Obj x4318987527= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 8, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "] = {"));
return;
}
case 10:
{
Obj x4318987303= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 9, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 11:
{
Obj x4318376583= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 12:
{
Obj x4318376487= co->res;
Obj args = R[1];
saveCont(co, clofun84, 11, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(__symbolTable[43]), 5, __args);
return;
}
case 13:
{
Obj x4318396167= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4318376071 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4318376071) {
R[1] = args;
saveCont(co, clofun84, 12, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
} else {
Nil;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
}
case 14:
{
Obj x4318396071= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
saveCont(co, clofun84, 13, R);
coraCall2(co, x4318396071, f, closureRef(R[0], 4));
return;
}
case 15:
{
Obj x4318395047= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 14, R);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 16:
{
Obj x4318394727= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 15, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
}
case 17:
{
Obj x4318394247= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 16, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 18:
{
Obj x4318986663= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = x4318986663;
Obj x4318986919 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4318986919) {
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun84, 10, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "Obj __args["));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun84, 17, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(co->gc, "coraCall"));
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative(co->gc, 3, clofun82, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
case 1:
{
Obj x4319107591= co->res;
Obj acc = R[1];
Obj x4319107783 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4319107783);
return;
}
case 2:
{
Obj x4319107175= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "];\n"));
return;
}
case 3:
{
Obj x4319106983= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 2, R);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj x4319106663= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun82, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, " = R["));
return;
}
case 5:
{
Obj x4319106375= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun82, 4, R);
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative(co->gc, 3, clofun80, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "R["));
return;
}
case 1:
{
Obj x4319105575= co->res;
Obj acc = R[1];
Obj x4319105735 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4319105735);
return;
}
case 2:
{
Obj x4319105319= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj x4319105063= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun80, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(__symbolTable[46]), 5, __args);
return;
}
case 4:
{
Obj x4319125319= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 3, R);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(co->gc, "] = "));
return;
}
case 5:
{
Obj x4319125127= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun80, 4, R);
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
saveCont(co, clofun78, 1, R);
coraCall1(co, globalRef(__symbolTable[103]), globals);
return;
}
case 1:
{
Obj x4319123399= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == x4319123399) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x4319123687 = PRIM_CAR(globals);
Obj x4319123719 = PRIM_EQ(sym, x4319123687);
if (True == x4319123719) {
coraReturn(co, idx);
return;
} else {
Obj x4319123943 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x4319124167 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[51]), x4319123943, sym, x4319124167);
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
coraCall1(co, globalRef(__symbolTable[52]), globals);
return;
}
case 1:
{
Obj x4319122375= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == x4319122375) {
coraReturn(co, Nil);
return;
} else {
Obj x4319122535 = makeCons(co->gc, sym, val);
Obj x4319122599 = primSet(co, globals, x4319122535);
coraReturn(co, x4319122599);
return;
}
}
case 2:
{
Obj x4319121991= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = x4319121991;
R[1] = sym;
R[2] = val;
R[3] = globals;
saveCont(co, clofun77, 1, R);
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
Obj x4319137031 = primGenSym(co);
Obj tmp = x4319137031;
R[1] = x;
R[2] = tmp;
saveCont(co, clofun76, 1, R);
coraCall1(co, k, tmp);
return;
}
case 1:
{
Obj x4319137671= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj x4319137703 = makeCons(co->gc, x4319137671, Nil);
Obj x4319137735 = makeCons(co->gc, x, x4319137703);
Obj x4319137767 = makeCons(co->gc, tmp, x4319137735);
Obj x4319121415 = makeCons(co->gc, __symbolTable[86], x4319137767);
coraReturn(co, x4319121415);
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
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj x4319136231= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj x4319135271= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = x4319135271;
Obj x4319135751 = makeCons(co->gc, val, Nil);
Obj x4319135783 = makeCons(co->gc, idx, x4319135751);
Obj x4319135815 = makeCons(co->gc, x4319135783, cur);
Obj cur1 = x4319135815;
Obj x4319136103 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
saveCont(co, clofun75, 1, R);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), x4319136103);
return;
}
case 3:
{
Obj x4319134983= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = x4319134983;
R[1] = val;
R[2] = idx;
R[3] = v;
saveCont(co, clofun75, 2, R);
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320456967 = R[1];
Obj x4320456999 = R[2];
Obj x4320457255 = makeNative(co->gc, 1, clofun73, 0, 2, x4320456967, x4320456999);
Obj x4319254951 = PRIM_ISCONS(x4320456999);
if (True == x4319254951) {
Obj x4319255431 = PRIM_CAR(x4320456999);
Obj x4319255463 = PRIM_EQ(__symbolTable[78], x4319255431);
if (True == x4319255463) {
Obj x4319255975 = PRIM_CDR(x4320456999);
Obj x4319256007 = PRIM_ISCONS(x4319255975);
if (True == x4319256007) {
Obj x4319256359 = PRIM_CDR(x4320456999);
Obj x4319256391 = PRIM_CAR(x4319256359);
Obj x4319256551 = PRIM_ISCONS(x4319256391);
if (True == x4319256551) {
Obj x4319244839 = PRIM_CDR(x4320456999);
Obj x4319244935 = PRIM_CAR(x4319244839);
Obj x4319244967 = PRIM_CAR(x4319244935);
Obj x4319244999 = PRIM_EQ(__symbolTable[89], x4319244967);
if (True == x4319244999) {
Obj x4319245703 = PRIM_CDR(x4320456999);
Obj x4319245735 = PRIM_CAR(x4319245703);
Obj x4319245767 = PRIM_CDR(x4319245735);
Obj x4319245799 = PRIM_ISCONS(x4319245767);
if (True == x4319245799) {
Obj x4319246343 = PRIM_CDR(x4320456999);
Obj x4319246375 = PRIM_CAR(x4319246343);
Obj x4319246407 = PRIM_CDR(x4319246375);
Obj x4319246599 = PRIM_CAR(x4319246407);
Obj params = x4319246599;
Obj x4319247143 = PRIM_CDR(x4320456999);
Obj x4319247175 = PRIM_CAR(x4319247143);
Obj x4319247207 = PRIM_CDR(x4319247175);
Obj x4319247367 = PRIM_CDR(x4319247207);
Obj x4319247399 = PRIM_ISCONS(x4319247367);
if (True == x4319247399) {
Obj x4319247975 = PRIM_CDR(x4320456999);
Obj x4319248039 = PRIM_CAR(x4319247975);
Obj x4319248103 = PRIM_CDR(x4319248039);
Obj x4319248135 = PRIM_CDR(x4319248103);
Obj x4319248167 = PRIM_CAR(x4319248135);
Obj body = x4319248167;
Obj x4319187559 = PRIM_CDR(x4320456999);
Obj x4319187591 = PRIM_CAR(x4319187559);
Obj x4319187623 = PRIM_CDR(x4319187591);
Obj x4319187655 = PRIM_CDR(x4319187623);
Obj x4319187687 = PRIM_CDR(x4319187655);
Obj x4319187911 = PRIM_EQ(Nil, x4319187687);
if (True == x4319187911) {
Obj x4319188295 = PRIM_CDR(x4320456999);
Obj x4319188327 = PRIM_CDR(x4319188295);
Obj fvs = x4319188327;
R[1] = x4320456967;
R[2] = params;
R[3] = fvs;
saveCont(co, clofun74, 6, R);
coraCall2(co, globalRef(__symbolTable[56]), x4320456967, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457255);
return;
}
}
case 1:
{
Obj x4319190343= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj x4319190439 = makeCons(co->gc, nframe, fvs);
Obj x4319190471 = makeCons(co->gc, x4319190343, x4319190439);
Obj x4319190503 = makeCons(co->gc, cur, x4319190471);
Obj x4319190695 = makeCons(co->gc, __symbolTable[78], x4319190503);
coraReturn(co, x4319190695);
return;
}
case 2:
{
Obj x4319189703= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
saveCont(co, clofun74, 1, R);
coraCall1(co, globalRef(__symbolTable[91]), params);
return;
}
case 3:
{
Obj x4319189383= co->res;
Obj x4320456967 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = x4319189383;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun74, 2, R);
coraCall2(co, globalRef(__symbolTable[54]), x4320456967, body2);
return;
}
case 4:
{
Obj x4319189095= co->res;
Obj x4320456967 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = x4319189095;
R[1] = x4320456967;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
saveCont(co, clofun74, 3, R);
coraCall1(co, globalRef(__symbolTable[57]), body2);
return;
}
case 5:
{
Obj x4319188839= co->res;
Obj body1 = R[1];
Obj x4320456967 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = x4319188839;
R[1] = x4320456967;
R[2] = params;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun74, 4, R);
coraCall2(co, globalRef(__symbolTable[58]), params, body1);
return;
}
case 6:
{
Obj x4319188615= co->res;
Obj x4320456967 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = x4319188615;
R[1] = body1;
R[2] = x4320456967;
R[3] = params;
R[4] = fvs;
saveCont(co, clofun74, 5, R);
coraCall2(co, globalRef(__symbolTable[55]), x4320456967, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319254503 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4319254503) {
saveCont(co, clofun73, 1, R);
coraCall1(co, globalRef(__symbolTable[56]), closureRef(R[0], 0));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x4319254791= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4319254791, closureRef(R[0], 1));
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
coraCall1(co, globalRef(__symbolTable[99]), lam);
return;
}
case 1:
{
Obj x4319253479= co->res;
Obj x4319253287 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), makeNative(co->gc, 3, clofun71, 2, 0), x4319253287, x4319253479);
return;
}
case 2:
{
Obj x4319415911= co->res;
Obj lam = R[1];
Obj nargs = x4319415911;
Obj x4319253287 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = x4319253287;
saveCont(co, clofun72, 1, R);
coraCall1(co, globalRef(__symbolTable[59]), lam);
return;
}
case 3:
{
Obj x4319415879= co->res;
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun72, 2, R);
coraCall1(co, globalRef(__symbolTable[91]), x4319415879);
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
coraCall1(co, globalRef(__symbolTable[59]), x);
return;
}
case 1:
{
Obj x4319252743= co->res;
Obj acc = R[1];
Obj x4319252967 = PRIM_ADD(x4319252743, MAKE_NUMBER(1));
Obj len = x4319252967;
Obj x4319253191 = PRIM_GT(len, acc);
if (True == x4319253191) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj x4319252711= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(__symbolTable[91]), x4319252711);
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
coraCall3(co, globalRef(__symbolTable[61]), body, Nil, makeNative(co->gc, 3, clofun69, 2, 1, params));
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
coraCall1(co, globalRef(__symbolTable[67]), conts);
return;
}
case 1:
{
Obj x4319414887= co->res;
Obj body1 = R[1];
Obj x4319414919 = makeCons(co->gc, body1, x4319414887);
Obj x4319414951 = makeCons(co->gc, closureRef(R[0], 0), x4319414919);
Obj x4319414983 = makeCons(co->gc, __symbolTable[89], x4319414951);
coraReturn(co, x4319414983);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727879 = R[1];
Obj x4321727943 = R[2];
Obj x4321728199 = R[3];
Obj x4321728327 = R[4];
Obj x4319530823 = PRIM_EQ(Nil, x4321727879);
if (True == x4319530823) {
co->ctx.sp = R;
coraCall2(co, x4321728327, x4321728199, x4321727943);
return;
} else {
Obj x4319412327 = PRIM_ISCONS(x4321727879);
if (True == x4319412327) {
Obj x4319412711 = PRIM_CAR(x4321727879);
Obj f = x4319412711;
Obj x4319413095 = PRIM_CDR(x4321727879);
Obj args = x4319413095;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), f, x4321727943, makeNative(co->gc, 3, clofun67, 2, 3, args, x4321728199, x4321728327));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
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
coraCall4(co, globalRef(__symbolTable[60]), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative(co->gc, 3, clofun66, 2, 2, closureRef(R[0], 2), f1));
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
Obj x4319413607 = makeCons(co->gc, closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x4319413607, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730023 = R[1];
Obj x4321730087 = R[2];
Obj x4321730151 = R[3];
Obj x4321727079 = makeNative(co->gc, 2, clofun64, 1, 3, x4321730023, x4321730087, x4321730151);
Obj x4319529895 = primIsSymbol(x4321730023);
if (True == x4319529895) {
co->ctx.sp = R;
coraCall1(co, x4321727079, True);
return;
} else {
R[1] = x4321727079;
saveCont(co, clofun65, 1, R);
coraCall1(co, globalRef(__symbolTable[79]), x4321730023);
return;
}
}
case 1:
{
Obj x4319530055= co->res;
Obj x4321727079 = R[1];
if (True == x4319530055) {
co->ctx.sp = R;
coraCall1(co, x4321727079, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321727079, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727175 = R[1];
if (True == x4321727175) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4320457191 = makeNative(co->gc, 1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4320457575 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4320457575) {
Obj x4320458055 = PRIM_CAR(closureRef(R[0], 0));
Obj x4320458215 = PRIM_EQ(__symbolTable[73], x4320458055);
if (True == x4320458215) {
Obj x4320458727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320458759 = PRIM_ISCONS(x4320458727);
if (True == x4320458759) {
Obj x4320459367 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320459399 = PRIM_CAR(x4320459367);
Obj exp = x4320459399;
Obj x4320459847 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320459879 = PRIM_CDR(x4320459847);
Obj x4320459943 = PRIM_ISCONS(x4320459879);
if (True == x4320459943) {
Obj x4320460647 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320460679 = PRIM_CDR(x4320460647);
Obj x4320460711 = PRIM_CAR(x4320460679);
Obj cont = x4320460711;
Obj x4319527303 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319527335 = PRIM_CDR(x4319527303);
Obj x4319527367 = PRIM_CDR(x4319527335);
Obj x4319527399 = PRIM_EQ(Nil, x4319527367);
if (True == x4319527399) {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), cont, closureRef(R[0], 1), makeNative(co->gc, 4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457191);
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
coraCall1(co, globalRef(__symbolTable[59]), cont1);
return;
}
case 1:
{
Obj x4319528551= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj x4319528615 = PRIM_ADD(x4319528551, MAKE_NUMBER(1));
Obj x4319528647 = makeCons(co->gc, x4319528615, fvs);
Obj x4319528679 = makeCons(co->gc, closureRef(R[0], 1), x4319528647);
Obj x4319528711 = makeCons(co->gc, __symbolTable[73], x4319528679);
Obj x4319528871 = makeCons(co->gc, cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x4319528711, x4319528871);
return;
}
case 2:
{
Obj x4319527911= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = x4319527911;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(__symbolTable[91]), conts1);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729223 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4321729223) {
Obj x4321729607 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4321729607;
Obj x4321729927 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4321729927;
Obj x4320456807 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[60]), x4320456807, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321728935 = R[1];
Obj x4321728967 = R[2];
R[1] = x4321728967;
R[2] = x4321728935;
saveCont(co, clofun61, 2, R);
coraCall1(co, globalRef(__symbolTable[79]), x4321728967);
return;
}
case 1:
{
Obj x4317590215= co->res;
Obj args = R[1];
Obj x4317590247 = makeCons(co->gc, x4317590215, Nil);
Obj x4317590279 = makeCons(co->gc, args, x4317590247);
Obj x4317590311 = makeCons(co->gc, __symbolTable[89], x4317590279);
coraReturn(co, x4317590311);
return;
}
case 2:
{
Obj x4317887431= co->res;
Obj x4321728967 = R[1];
Obj x4321728935 = R[2];
if (True == x4317887431) {
coraReturn(co, x4321728967);
return;
} else {
Obj x4317887591 = primIsSymbol(x4321728967);
if (True == x4317887591) {
coraReturn(co, x4321728967);
return;
} else {
Obj x4321730055 = makeNative(co->gc, 4, clofun60, 0, 2, x4321728967, x4321728935);
Obj x4317813287 = PRIM_ISCONS(x4321728967);
if (True == x4317813287) {
Obj x4317813511 = PRIM_CAR(x4321728967);
Obj x4317813543 = PRIM_EQ(__symbolTable[89], x4317813511);
if (True == x4317813543) {
Obj x4317813767 = PRIM_CDR(x4321728967);
Obj x4317813799 = PRIM_ISCONS(x4317813767);
if (True == x4317813799) {
Obj x4317814023 = PRIM_CDR(x4321728967);
Obj x4317814055 = PRIM_CAR(x4317814023);
Obj args = x4317814055;
Obj x4317814343 = PRIM_CDR(x4321728967);
Obj x4317814375 = PRIM_CDR(x4317814343);
Obj x4317814407 = PRIM_ISCONS(x4317814375);
if (True == x4317814407) {
Obj x4317814695 = PRIM_CDR(x4321728967);
Obj x4317814727 = PRIM_CDR(x4317814695);
Obj x4317814759 = PRIM_CAR(x4317814727);
Obj body = x4317814759;
Obj x4317589831 = PRIM_CDR(x4321728967);
Obj x4317589863 = PRIM_CDR(x4317589831);
Obj x4317589895 = PRIM_CDR(x4317589863);
Obj x4317589927 = PRIM_EQ(Nil, x4317589895);
if (True == x4317589927) {
R[1] = args;
saveCont(co, clofun61, 1, R);
coraCall2(co, globalRef(__symbolTable[63]), x4321728935, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730055);
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
Obj x4320457127 = makeNative(co->gc, 3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4317842759 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317842759) {
Obj x4317842983 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317843015 = PRIM_EQ(__symbolTable[75], x4317842983);
if (True == x4317843015) {
Obj x4317843239 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317843271 = PRIM_ISCONS(x4317843239);
if (True == x4317843271) {
Obj x4317810727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317810759 = PRIM_CAR(x4317810727);
Obj val = x4317810759;
Obj x4317811047 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317811079 = PRIM_CDR(x4317811047);
Obj x4317811111 = PRIM_ISCONS(x4317811079);
if (True == x4317811111) {
Obj x4317811399 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317811431 = PRIM_CDR(x4317811399);
Obj x4317811463 = PRIM_CAR(x4317811431);
Obj body = x4317811463;
Obj x4317811815 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317811847 = PRIM_CDR(x4317811815);
Obj x4317811879 = PRIM_CDR(x4317811847);
Obj x4317811911 = PRIM_EQ(Nil, x4317811879);
if (True == x4317811911) {
R[1] = body;
R[2] = val;
saveCont(co, clofun60, 5, R);
coraCall1(co, globalRef(__symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457127);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457127);
return;
}
}
case 1:
{
Obj x4317812711= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj x4317812743 = makeCons(co->gc, x4317812711, fvs2);
Obj x4317812775 = makeCons(co->gc, val, x4317812743);
Obj x4317812807 = makeCons(co->gc, __symbolTable[62], x4317812775);
coraReturn(co, x4317812807);
return;
}
case 2:
{
Obj x4317812423= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = x4317812423;
R[1] = fvs2;
R[2] = val;
saveCont(co, clofun60, 1, R);
coraCall2(co, globalRef(__symbolTable[63]), fvs1, body);
return;
}
case 3:
{
Obj x4317812391= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun60, 2, R);
coraCall2(co, globalRef(__symbolTable[92]), x4317812391, fvs1);
return;
}
case 4:
{
Obj x4317812167= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = x4317812167;
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
return;
}
case 5:
{
Obj x4317812135= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
saveCont(co, clofun60, 4, R);
coraCall2(co, globalRef(__symbolTable[80]), x4317812135, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321728263 = makeNative(co->gc, 3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4317839783 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317839783) {
Obj x4317840007 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317840039 = PRIM_EQ(__symbolTable[73], x4317840007);
if (True == x4317840039) {
Obj x4317840263 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317840295 = PRIM_ISCONS(x4317840263);
if (True == x4317840295) {
Obj x4317840519 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317840551 = PRIM_CAR(x4317840519);
Obj exp = x4317840551;
Obj x4317840839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317840871 = PRIM_CDR(x4317840839);
Obj x4317840903 = PRIM_ISCONS(x4317840871);
if (True == x4317840903) {
Obj x4317841191 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317841223 = PRIM_CDR(x4317841191);
Obj x4317841255 = PRIM_CAR(x4317841223);
Obj cont = x4317841255;
Obj x4317841607 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317841639 = PRIM_CDR(x4317841607);
Obj x4317841671 = PRIM_CDR(x4317841639);
Obj x4317841703 = PRIM_EQ(Nil, x4317841671);
if (True == x4317841703) {
R[1] = exp;
R[2] = cont;
saveCont(co, clofun59, 3, R);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728263);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728263);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728263);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728263);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728263);
return;
}
}
case 1:
{
Obj x4317842183= co->res;
Obj x4317842023 = R[1];
Obj x4317842215 = makeCons(co->gc, x4317842183, Nil);
Obj x4317842247 = makeCons(co->gc, x4317842023, x4317842215);
Obj x4317842279 = makeCons(co->gc, __symbolTable[73], x4317842247);
coraReturn(co, x4317842279);
return;
}
case 2:
{
Obj x4317842023= co->res;
Obj cont = R[1];
R[1] = x4317842023;
saveCont(co, clofun59, 1, R);
coraCall2(co, globalRef(__symbolTable[63]), closureRef(R[0], 1), cont);
return;
}
case 3:
{
Obj x4317841991= co->res;
Obj exp = R[1];
Obj cont = R[2];
R[1] = cont;
saveCont(co, clofun59, 2, R);
coraCall2(co, globalRef(__symbolTable[92]), x4317841991, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4317888135 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317888135) {
Obj x4317888295 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4317888295;
Obj x4317888455 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4317888455;
R[1] = f;
R[2] = args;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4317839463= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4317839559 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4317839463, x4317839559);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726791 = R[1];
Obj x4321726951 = R[2];
Obj x4321727015 = R[3];
Obj x4317933095 = PRIM_EQ(Nil, x4321726791);
if (True == x4317933095) {
R[1] = x4321727015;
saveCont(co, clofun57, 3, R);
coraCall1(co, globalRef(__symbolTable[67]), x4321726951);
return;
} else {
Obj x4317886375 = PRIM_ISCONS(x4321726791);
if (True == x4317886375) {
Obj x4317886535 = PRIM_CAR(x4321726791);
Obj hd = x4317886535;
Obj x4317886695 = PRIM_CDR(x4321726791);
Obj tl = x4317886695;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), hd, makeNative(co->gc, 2, clofun56, 1, 3, tl, x4321726951, x4321727015));
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
Obj x4317886183= co->res;
Obj x4321726983 = R[1];
Obj x4317886215 = PRIM_EQ(x4317886183, __symbolTable[90]);
if (True == x4317886215) {
co->ctx.sp = R;
coraCall1(co, x4321726983, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726983, False);
return;
}
}
case 2:
{
Obj x4317885959= co->res;
Obj exp = R[1];
Obj x4321726983 = R[2];
if (True == x4317885959) {
R[1] = x4321726983;
saveCont(co, clofun57, 1, R);
coraCall1(co, globalRef(__symbolTable[64]), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726983, False);
return;
}
}
case 3:
{
Obj x4317933255= co->res;
Obj x4321727015 = R[1];
Obj exp = x4317933255;
Obj x4321726983 = makeNative(co->gc, 2, clofun55, 1, 2, exp, x4321727015);
Obj x4317885927 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x4321726983;
saveCont(co, clofun57, 2, R);
coraCall1(co, globalRef(__symbolTable[65]), x4317885927);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj x4317886983 = makeCons(co->gc, hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), closureRef(R[0], 0), x4317886983, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727047 = R[1];
if (True == x4321727047) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4317884519 = PRIM_EQ(closureRef(R[0], 1), globalRef(__symbolTable[70]));
if (True == x4317884519) {
Obj x4317884679 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj x4317884711 = makeCons(co->gc, __symbolTable[74], x4317884679);
coraReturn(co, x4317884711);
return;
} else {
Obj x4317884871 = primGenSym(co);
Obj val = x4317884871;
Obj x4317885287 = makeCons(co->gc, val, Nil);
R[1] = x4317885287;
saveCont(co, clofun55, 1, R);
coraCall1(co, closureRef(R[0], 1), val);
return;
}
}
}
case 1:
{
Obj x4317885447= co->res;
Obj x4317885287 = R[1];
Obj x4317885479 = makeCons(co->gc, x4317885447, Nil);
Obj x4317885511 = makeCons(co->gc, x4317885287, x4317885479);
Obj x4317885543 = makeCons(co->gc, __symbolTable[75], x4317885511);
Obj x4317885575 = makeCons(co->gc, x4317885543, Nil);
Obj x4317885607 = makeCons(co->gc, closureRef(R[0], 0), x4317885575);
Obj x4317885639 = makeCons(co->gc, __symbolTable[73], x4317885607);
coraReturn(co, x4317885639);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726727 = R[1];
Obj x4321726759 = R[2];
Obj x4321726695 = makeNative(co->gc, 2, clofun53, 1, 2, x4321726727, x4321726759);
Obj x4317932103 = primIsSymbol(x4321726727);
if (True == x4317932103) {
co->ctx.sp = R;
coraCall1(co, x4321726695, True);
return;
} else {
R[1] = x4321726695;
saveCont(co, clofun54, 1, R);
coraCall1(co, globalRef(__symbolTable[79]), x4321726727);
return;
}
}
case 1:
{
Obj x4317932263= co->res;
Obj x4321726695 = R[1];
if (True == x4317932263) {
co->ctx.sp = R;
coraCall1(co, x4321726695, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726695, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726823 = R[1];
if (True == x4321726823) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun53, 1, R);
coraCall1(co, globalRef(__symbolTable[79]), closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj x4319124743= co->res;
if (True == x4319124743) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj x4321727911 = makeNative(co->gc, 1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4318348519 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318348519) {
Obj x4318348807 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318348839 = PRIM_EQ(__symbolTable[87], x4318348807);
if (True == x4318348839) {
Obj x4318349127 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349159 = PRIM_ISCONS(x4318349127);
if (True == x4318349159) {
Obj x4318349447 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349479 = PRIM_CAR(x4318349447);
Obj a = x4318349479;
Obj x4318349863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349895 = PRIM_CDR(x4318349863);
Obj x4318349927 = PRIM_ISCONS(x4318349895);
if (True == x4318349927) {
Obj x4318350247 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318350279 = PRIM_CDR(x4318350247);
Obj x4318350375 = PRIM_CAR(x4318350279);
Obj b = x4318350375;
Obj x4318350791 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318350887 = PRIM_CDR(x4318350791);
Obj x4318350919 = PRIM_CDR(x4318350887);
Obj x4318350951 = PRIM_ISCONS(x4318350919);
if (True == x4318350951) {
Obj x4317929511 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317929543 = PRIM_CDR(x4317929511);
Obj x4317929575 = PRIM_CDR(x4317929543);
Obj x4317929703 = PRIM_CAR(x4317929575);
Obj c = x4317929703;
Obj x4317930247 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317930279 = PRIM_CDR(x4317930247);
Obj x4317930311 = PRIM_CDR(x4317930279);
Obj x4317930343 = PRIM_CDR(x4317930311);
Obj x4317930375 = PRIM_EQ(Nil, x4317930343);
if (True == x4317930375) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative(co->gc, 3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727911);
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
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x4317931079= co->res;
Obj x4317930887 = R[1];
Obj ra = R[2];
Obj x4317931111 = makeCons(co->gc, x4317931079, Nil);
Obj x4317931143 = makeCons(co->gc, x4317930887, x4317931111);
Obj x4317931239 = makeCons(co->gc, ra, x4317931143);
Obj x4317931271 = makeCons(co->gc, __symbolTable[87], x4317931239);
coraReturn(co, x4317931271);
return;
}
case 2:
{
Obj x4317930887= co->res;
Obj ra = R[1];
R[1] = x4317930887;
R[2] = ra;
saveCont(co, clofun52, 1, R);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729031 = makeNative(co->gc, 1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4318377383 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318377383) {
Obj x4318377607 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318377639 = PRIM_EQ(__symbolTable[85], x4318377607);
if (True == x4318377639) {
Obj x4318377863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318377927 = PRIM_ISCONS(x4318377863);
if (True == x4318377927) {
Obj x4318378183 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318378247 = PRIM_CAR(x4318378183);
Obj a = x4318378247;
Obj x4318378599 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318378631 = PRIM_CDR(x4318378599);
Obj x4318378663 = PRIM_ISCONS(x4318378631);
if (True == x4318378663) {
Obj x4318379047 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379079 = PRIM_CDR(x4318379047);
Obj x4318379111 = PRIM_CAR(x4318379079);
Obj b = x4318379111;
Obj x4318379591 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379623 = PRIM_CDR(x4318379591);
Obj x4318379655 = PRIM_CDR(x4318379623);
Obj x4318379687 = PRIM_EQ(Nil, x4318379655);
if (True == x4318379687) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative(co->gc, 2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729031);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729031);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729031);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729031);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729031);
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
Obj x4318347303 = primIsSymbol(ra);
if (True == x4318347303) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
saveCont(co, clofun50, 1, R);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x4318347879= co->res;
Obj ra = R[1];
Obj x4318347911 = makeCons(co->gc, x4318347879, Nil);
Obj x4318347943 = makeCons(co->gc, ra, x4318347911);
Obj x4318347975 = makeCons(co->gc, __symbolTable[85], x4318347943);
coraReturn(co, x4318347975);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729959 = makeNative(co->gc, 3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4318986951 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318986951) {
Obj x4318987367 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318987399 = PRIM_EQ(__symbolTable[86], x4318987367);
if (True == x4318987399) {
Obj x4318987751 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318987783 = PRIM_ISCONS(x4318987751);
if (True == x4318987783) {
Obj x4318988167 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318988199 = PRIM_CAR(x4318988167);
Obj a = x4318988199;
Obj x4318988807 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318988839 = PRIM_CDR(x4318988807);
Obj x4318988871 = PRIM_ISCONS(x4318988839);
if (True == x4318988871) {
Obj x4318989991 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318990279 = PRIM_CDR(x4318989991);
Obj x4318392327 = PRIM_CAR(x4318990279);
Obj b = x4318392327;
Obj x4318392839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318392871 = PRIM_CDR(x4318392839);
Obj x4318393063 = PRIM_CDR(x4318392871);
Obj x4318393095 = PRIM_ISCONS(x4318393063);
if (True == x4318393095) {
Obj x4318394055 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318394151 = PRIM_CDR(x4318394055);
Obj x4318394183 = PRIM_CDR(x4318394151);
Obj x4318394215 = PRIM_CAR(x4318394183);
Obj c = x4318394215;
Obj x4318395271 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318395303 = PRIM_CDR(x4318395271);
Obj x4318395335 = PRIM_CDR(x4318395303);
Obj x4318395527 = PRIM_CDR(x4318395335);
Obj x4318395591 = PRIM_EQ(Nil, x4318395527);
if (True == x4318395591) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), b, makeNative(co->gc, 2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
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

static void clofun48(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rb = R[1];
R[1] = rb;
saveCont(co, clofun48, 1, R);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x4318376103= co->res;
Obj rb = R[1];
Obj x4318376135 = makeCons(co->gc, x4318376103, Nil);
Obj x4318376167 = makeCons(co->gc, rb, x4318376135);
Obj x4318376199 = makeCons(co->gc, closureRef(R[0], 0), x4318376167);
Obj x4318376231 = makeCons(co->gc, __symbolTable[86], x4318376199);
coraReturn(co, x4318376231);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457095 = makeNative(co->gc, 1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4319105959 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319105959) {
Obj x4319106183 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319106215 = PRIM_EQ(__symbolTable[78], x4319106183);
if (True == x4319106215) {
Obj x4319106471 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319106503 = PRIM_ISCONS(x4319106471);
if (True == x4319106503) {
Obj x4319106855 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319106887 = PRIM_CAR(x4319106855);
Obj x4319106951 = PRIM_ISCONS(x4319106887);
if (True == x4319106951) {
Obj x4319107367 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319107463 = PRIM_CAR(x4319107367);
Obj x4319107495 = PRIM_CAR(x4319107463);
Obj x4319107527 = PRIM_EQ(__symbolTable[89], x4319107495);
if (True == x4319107527) {
Obj x4319108103 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319108135 = PRIM_CAR(x4319108103);
Obj x4319108199 = PRIM_CDR(x4319108135);
Obj x4319108231 = PRIM_ISCONS(x4319108199);
if (True == x4319108231) {
Obj x4319108807 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319108839 = PRIM_CAR(x4319108807);
Obj x4319108871 = PRIM_CDR(x4319108839);
Obj x4319108967 = PRIM_CAR(x4319108871);
Obj args = x4319108967;
Obj x4319003111 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003143 = PRIM_CAR(x4319003111);
Obj x4319003175 = PRIM_CDR(x4319003143);
Obj x4319003271 = PRIM_CDR(x4319003175);
Obj x4319003303 = PRIM_ISCONS(x4319003271);
if (True == x4319003303) {
Obj x4319004007 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319004039 = PRIM_CAR(x4319004007);
Obj x4319004103 = PRIM_CDR(x4319004039);
Obj x4319004135 = PRIM_CDR(x4319004103);
Obj x4319004199 = PRIM_CAR(x4319004135);
Obj body = x4319004199;
Obj x4319004839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319004871 = PRIM_CAR(x4319004839);
Obj x4319004903 = PRIM_CDR(x4319004871);
Obj x4319004935 = PRIM_CDR(x4319004903);
Obj x4319004999 = PRIM_CDR(x4319004935);
Obj x4319005095 = PRIM_EQ(Nil, x4319004999);
if (True == x4319005095) {
Obj x4319005447 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319005479 = PRIM_CDR(x4319005447);
Obj frees = x4319005479;
R[1] = args;
R[2] = frees;
saveCont(co, clofun47, 1, R);
coraCall2(co, globalRef(__symbolTable[69]), body, globalRef(__symbolTable[70]));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457095);
return;
}
}
case 1:
{
Obj x4319006215= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj x4319006247 = makeCons(co->gc, x4319006215, Nil);
Obj x4319006279 = makeCons(co->gc, args, x4319006247);
Obj x4319006343 = makeCons(co->gc, __symbolTable[89], x4319006279);
Obj x4319006375 = makeCons(co->gc, x4319006343, frees);
Obj x4319006407 = makeCons(co->gc, __symbolTable[78], x4319006375);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), x4319006407);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319105095 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319105095) {
Obj x4319105287 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4319105287;
Obj x4319105479 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4319105479;
Obj x4319105703 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), x4319105703, Nil, closureRef(R[0], 1));
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
Obj x = R[1];
Obj x4319123975 = makeCons(co->gc, x, Nil);
Obj x4319124007 = makeCons(co->gc, __symbolTable[72], x4319123975);
coraReturn(co, x4319124007);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726599 = R[1];
Obj x4321726631 = R[2];
R[1] = x4321726631;
R[2] = x4321726599;
saveCont(co, clofun44, 6, R);
coraCall1(co, globalRef(__symbolTable[79]), x4321726631);
return;
}
case 1:
{
Obj x4319246887= co->res;
Obj x4321726631 = R[1];
Obj pos = x4319246887;
Obj x4319247079 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x4319247079) {
coraReturn(co, x4321726631);
return;
} else {
Obj x4319247303 = makeCons(co->gc, pos, Nil);
Obj x4319247335 = makeCons(co->gc, __symbolTable[77], x4319247303);
coraReturn(co, x4319247335);
return;
}
}
case 2:
{
Obj x4319122983= co->res;
Obj x4319122759 = R[1];
Obj x4319123047 = makeCons(co->gc, x4319122759, x4319122983);
Obj x4319123079 = makeCons(co->gc, __symbolTable[78], x4319123047);
coraReturn(co, x4319123079);
return;
}
case 3:
{
Obj x4319122951= co->res;
Obj fvs1 = R[1];
Obj x4319122759 = R[2];
R[1] = x4319122759;
saveCont(co, clofun44, 2, R);
coraCall2(co, globalRef(__symbolTable[92]), x4319122951, fvs1);
return;
}
case 4:
{
Obj x4319122663= co->res;
Obj args = R[1];
Obj x4321726599 = R[2];
Obj fvs1 = R[3];
Obj x4319122695 = makeCons(co->gc, x4319122663, Nil);
Obj x4319122727 = makeCons(co->gc, args, x4319122695);
Obj x4319122759 = makeCons(co->gc, __symbolTable[89], x4319122727);
R[1] = fvs1;
R[2] = x4319122759;
saveCont(co, clofun44, 3, R);
coraCall1(co, globalRef(__symbolTable[71]), x4321726599);
return;
}
case 5:
{
Obj x4319122151= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x4321726599 = R[3];
Obj fvs1 = x4319122151;
R[1] = args;
R[2] = x4321726599;
R[3] = fvs1;
saveCont(co, clofun44, 4, R);
coraCall2(co, globalRef(__symbolTable[71]), fvs1, body);
return;
}
case 6:
{
Obj x4319246567= co->res;
Obj x4321726631 = R[1];
Obj x4321726599 = R[2];
if (True == x4319246567) {
coraReturn(co, x4321726631);
return;
} else {
Obj x4319246727 = primIsSymbol(x4321726631);
if (True == x4319246727) {
R[1] = x4321726631;
saveCont(co, clofun44, 1, R);
coraCall2(co, globalRef(__symbolTable[124]), x4321726631, x4321726599);
return;
} else {
Obj x4321727719 = makeNative(co->gc, 3, clofun43, 0, 2, x4321726631, x4321726599);
Obj x4319135495 = PRIM_ISCONS(x4321726631);
if (True == x4319135495) {
Obj x4319135879 = PRIM_CAR(x4321726631);
Obj x4319135911 = PRIM_EQ(__symbolTable[89], x4319135879);
if (True == x4319135911) {
Obj x4319136167 = PRIM_CDR(x4321726631);
Obj x4319136199 = PRIM_ISCONS(x4319136167);
if (True == x4319136199) {
Obj x4319136487 = PRIM_CDR(x4321726631);
Obj x4319136519 = PRIM_CAR(x4319136487);
Obj args = x4319136519;
Obj x4319136935 = PRIM_CDR(x4321726631);
Obj x4319136967 = PRIM_CDR(x4319136935);
Obj x4319136999 = PRIM_ISCONS(x4319136967);
if (True == x4319136999) {
Obj x4319137383 = PRIM_CDR(x4321726631);
Obj x4319137447 = PRIM_CDR(x4319137383);
Obj x4319137479 = PRIM_CAR(x4319137447);
Obj body = x4319137479;
Obj x4319121511 = PRIM_CDR(x4321726631);
Obj x4319121543 = PRIM_CDR(x4319121511);
Obj x4319121575 = PRIM_CDR(x4319121543);
Obj x4319121607 = PRIM_EQ(Nil, x4319121575);
if (True == x4319121607) {
Obj x4319122055 = makeCons(co->gc, body, Nil);
Obj x4319122087 = makeCons(co->gc, args, x4319122055);
Obj x4319122119 = makeCons(co->gc, __symbolTable[89], x4319122087);
R[1] = body;
R[2] = args;
R[3] = x4321726599;
saveCont(co, clofun44, 5, R);
coraCall1(co, globalRef(__symbolTable[76]), x4319122119);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727719);
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
Obj x4321728711 = makeNative(co->gc, 3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4319187495 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319187495) {
Obj x4319187719 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319187751 = PRIM_EQ(__symbolTable[86], x4319187719);
if (True == x4319187751) {
Obj x4319188103 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319188135 = PRIM_ISCONS(x4319188103);
if (True == x4319188135) {
Obj x4319188519 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319188551 = PRIM_CAR(x4319188519);
Obj a = x4319188551;
Obj x4319188903 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319188935 = PRIM_CDR(x4319188903);
Obj x4319188967 = PRIM_ISCONS(x4319188935);
if (True == x4319188967) {
Obj x4319189255 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319189319 = PRIM_CDR(x4319189255);
Obj x4319189351 = PRIM_CAR(x4319189319);
Obj b = x4319189351;
Obj x4319189863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319189895 = PRIM_CDR(x4319189863);
Obj x4319190151 = PRIM_CDR(x4319189895);
Obj x4319190183 = PRIM_ISCONS(x4319190151);
if (True == x4319190183) {
Obj x4319190535 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319190567 = PRIM_CDR(x4319190535);
Obj x4319190631 = PRIM_CDR(x4319190567);
Obj x4319190663 = PRIM_CAR(x4319190631);
Obj c = x4319190663;
Obj x4319133863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319133895 = PRIM_CDR(x4319133863);
Obj x4319133927 = PRIM_CDR(x4319133895);
Obj x4319133959 = PRIM_CDR(x4319133927);
Obj x4319134055 = PRIM_EQ(Nil, x4319133959);
if (True == x4319134055) {
R[1] = c;
R[2] = a;
saveCont(co, clofun43, 2, R);
coraCall2(co, globalRef(__symbolTable[71]), closureRef(R[0], 1), b);
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
}
case 1:
{
Obj x4319134599= co->res;
Obj x4319134439 = R[1];
Obj a = R[2];
Obj x4319134631 = makeCons(co->gc, x4319134599, Nil);
Obj x4319134759 = makeCons(co->gc, x4319134439, x4319134631);
Obj x4319134791 = makeCons(co->gc, a, x4319134759);
Obj x4319134823 = makeCons(co->gc, __symbolTable[86], x4319134791);
coraReturn(co, x4319134823);
return;
}
case 2:
{
Obj x4319134439= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = x4319134439;
R[2] = a;
saveCont(co, clofun43, 1, R);
coraCall2(co, globalRef(__symbolTable[71]), closureRef(R[0], 1), c);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319247879 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319247879) {
Obj x4319248071 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4319248071;
Obj x4319248295 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4319248295;
R[1] = f;
R[2] = args;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(__symbolTable[71]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4319187015= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4319187175 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4319187015, x4319187175);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726567 = R[1];
R[1] = x4321726567;
saveCont(co, clofun41, 2, R);
coraCall1(co, globalRef(__symbolTable[79]), x4321726567);
return;
}
case 1:
{
Obj x4319245479= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x4319245479, args);
return;
}
case 2:
{
Obj x4318395943= co->res;
Obj x4321726567 = R[1];
if (True == x4318395943) {
coraReturn(co, Nil);
return;
} else {
Obj x4318396263 = primIsSymbol(x4321726567);
if (True == x4318396263) {
Obj x4318396359 = makeCons(co->gc, x4321726567, Nil);
coraReturn(co, x4318396359);
return;
} else {
Obj x4321727239 = makeNative(co->gc, 1, clofun40, 0, 1, x4321726567);
Obj x4319254983 = PRIM_ISCONS(x4321726567);
if (True == x4319254983) {
Obj x4319255367 = PRIM_CAR(x4321726567);
Obj x4319255399 = PRIM_EQ(__symbolTable[89], x4319255367);
if (True == x4319255399) {
Obj x4319255655 = PRIM_CDR(x4321726567);
Obj x4319255687 = PRIM_ISCONS(x4319255655);
if (True == x4319255687) {
Obj x4319256103 = PRIM_CDR(x4321726567);
Obj x4319256135 = PRIM_CAR(x4319256103);
Obj args = x4319256135;
Obj x4319256455 = PRIM_CDR(x4321726567);
Obj x4319256487 = PRIM_CDR(x4319256455);
Obj x4319256519 = PRIM_ISCONS(x4319256487);
if (True == x4319256519) {
Obj x4319244583 = PRIM_CDR(x4321726567);
Obj x4319244679 = PRIM_CDR(x4319244583);
Obj x4319244711 = PRIM_CAR(x4319244679);
Obj body = x4319244711;
Obj x4319245127 = PRIM_CDR(x4321726567);
Obj x4319245159 = PRIM_CDR(x4319245127);
Obj x4319245287 = PRIM_CDR(x4319245159);
Obj x4319245319 = PRIM_EQ(Nil, x4319245287);
if (True == x4319245319) {
R[1] = args;
saveCont(co, clofun41, 1, R);
coraCall1(co, globalRef(__symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727239);
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
Obj x4321727847 = makeNative(co->gc, 1, clofun39, 0, 1, closureRef(R[0], 0));
Obj x4319413639 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319413639) {
Obj x4319413991 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319414023 = PRIM_EQ(__symbolTable[87], x4319413991);
if (True == x4319414023) {
Obj x4319414343 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319414375 = PRIM_ISCONS(x4319414343);
if (True == x4319414375) {
Obj x4319414727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319414759 = PRIM_CAR(x4319414727);
Obj x = x4319414759;
Obj x4319415079 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319415111 = PRIM_CDR(x4319415079);
Obj x4319415143 = PRIM_ISCONS(x4319415111);
if (True == x4319415143) {
Obj x4319415655 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319415687 = PRIM_CDR(x4319415655);
Obj x4319415719 = PRIM_CAR(x4319415687);
Obj y = x4319415719;
Obj x4319416071 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319416103 = PRIM_CDR(x4319416071);
Obj x4319416167 = PRIM_CDR(x4319416103);
Obj x4319416199 = PRIM_ISCONS(x4319416167);
if (True == x4319416199) {
Obj x4319252839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319252871 = PRIM_CDR(x4319252839);
Obj x4319252903 = PRIM_CDR(x4319252871);
Obj x4319252935 = PRIM_CAR(x4319252903);
Obj z = x4319252935;
Obj x4319253511 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319253543 = PRIM_CDR(x4319253511);
Obj x4319253575 = PRIM_CDR(x4319253543);
Obj x4319253607 = PRIM_CDR(x4319253575);
Obj x4319253639 = PRIM_EQ(Nil, x4319253607);
if (True == x4319253639) {
Obj x4319254087 = makeCons(co->gc, z, Nil);
Obj x4319254247 = makeCons(co->gc, y, x4319254087);
Obj x4319254279 = makeCons(co->gc, x, x4319254247);
saveCont(co, clofun40, 1, R);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4319254279);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727847);
return;
}
}
case 1:
{
Obj x4319254311= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4319254311);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321728807 = makeNative(co->gc, 3, clofun38, 0, 1, closureRef(R[0], 0));
Obj x4319528807 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319528807) {
Obj x4319529063 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319529095 = PRIM_EQ(__symbolTable[85], x4319529063);
if (True == x4319529095) {
Obj x4319529479 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319529511 = PRIM_ISCONS(x4319529479);
if (True == x4319529511) {
Obj x4319529831 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319529863 = PRIM_CAR(x4319529831);
Obj x = x4319529863;
Obj x4319530151 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319530183 = PRIM_CDR(x4319530151);
Obj x4319530375 = PRIM_ISCONS(x4319530183);
if (True == x4319530375) {
Obj x4319530663 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319530727 = PRIM_CDR(x4319530663);
Obj x4319530759 = PRIM_CAR(x4319530727);
Obj y = x4319530759;
Obj x4319412391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319412423 = PRIM_CDR(x4319412391);
Obj x4319412551 = PRIM_CDR(x4319412423);
Obj x4319412583 = PRIM_EQ(Nil, x4319412551);
if (True == x4319412583) {
Obj x4319412935 = makeCons(co->gc, y, Nil);
Obj x4319412967 = makeCons(co->gc, x, x4319412935);
saveCont(co, clofun39, 1, R);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4319412967);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728807);
return;
}
}
case 1:
{
Obj x4319413063= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4319413063);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729415 = makeNative(co->gc, 1, clofun37, 0, 1, closureRef(R[0], 0));
Obj x4320457031 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4320457031) {
Obj x4320457671 = PRIM_CAR(closureRef(R[0], 0));
Obj x4320457703 = PRIM_EQ(__symbolTable[86], x4320457671);
if (True == x4320457703) {
Obj x4320458119 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320458151 = PRIM_ISCONS(x4320458119);
if (True == x4320458151) {
Obj x4320458567 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320458599 = PRIM_CAR(x4320458567);
Obj a = x4320458599;
Obj x4320459207 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320459271 = PRIM_CDR(x4320459207);
Obj x4320459303 = PRIM_ISCONS(x4320459271);
if (True == x4320459303) {
Obj x4320459591 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320459687 = PRIM_CDR(x4320459591);
Obj x4320459719 = PRIM_CAR(x4320459687);
Obj b = x4320459719;
Obj x4320460231 = PRIM_CDR(closureRef(R[0], 0));
Obj x4320460263 = PRIM_CDR(x4320460231);
Obj x4320460295 = PRIM_CDR(x4320460263);
Obj x4320460327 = PRIM_ISCONS(x4320460295);
if (True == x4320460327) {
Obj x4319526951 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319526983 = PRIM_CDR(x4319526951);
Obj x4319527015 = PRIM_CDR(x4319526983);
Obj x4319527047 = PRIM_CAR(x4319527015);
Obj c = x4319527047;
Obj x4319527463 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319527495 = PRIM_CDR(x4319527463);
Obj x4319527527 = PRIM_CDR(x4319527495);
Obj x4319527559 = PRIM_CDR(x4319527527);
Obj x4319527591 = PRIM_EQ(Nil, x4319527559);
if (True == x4319527591) {
R[1] = c;
R[2] = a;
saveCont(co, clofun38, 3, R);
coraCall1(co, globalRef(__symbolTable[76]), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729415);
return;
}
}
case 1:
{
Obj x4319528135= co->res;
Obj x4319527751 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), x4319527751, x4319528135);
return;
}
case 2:
{
Obj x4319527975= co->res;
Obj a = R[1];
Obj x4319527751 = R[2];
Obj x4319528071 = makeCons(co->gc, a, Nil);
R[1] = x4319527751;
saveCont(co, clofun38, 1, R);
coraCall2(co, globalRef(__symbolTable[80]), x4319527975, x4319528071);
return;
}
case 3:
{
Obj x4319527751= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = x4319527751;
saveCont(co, clofun38, 2, R);
coraCall1(co, globalRef(__symbolTable[76]), c);
return;
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730247 = makeNative(co->gc, 1, clofun36, 0, 1, closureRef(R[0], 0));
Obj x4317932551 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317932551) {
Obj x4317932775 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317932807 = PRIM_EQ(__symbolTable[78], x4317932775);
if (True == x4317932807) {
Obj x4321727559 = PRIM_CDR(closureRef(R[0], 0));
Obj x4321727751 = PRIM_ISCONS(x4321727559);
if (True == x4321727751) {
Obj x4321728775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4321728839 = PRIM_CAR(x4321728775);
Obj lam = x4321728839;
Obj x4321729479 = PRIM_CDR(closureRef(R[0], 0));
Obj x4321729511 = PRIM_CDR(x4321729479);
Obj more = x4321729511;
Obj x4321729831 = makeCons(co->gc, lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x4321729831);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730247);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730247);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730247);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320456935 = makeNative(co->gc, 1, clofun35, 0, 1, closureRef(R[0], 0));
Obj x4317930951 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4317930951) {
Obj x4317931175 = PRIM_CAR(closureRef(R[0], 0));
Obj x4317931207 = PRIM_EQ(__symbolTable[72], x4317931175);
if (True == x4317931207) {
Obj x4317931431 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317931463 = PRIM_ISCONS(x4317931431);
if (True == x4317931463) {
Obj x4317931687 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317931719 = PRIM_CAR(x4317931687);
Obj x = x4317931719;
Obj x4317932007 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317932039 = PRIM_CDR(x4317932007);
Obj x4317932071 = PRIM_EQ(Nil, x4317932039);
if (True == x4317932071) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320456935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320456935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320456935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320456935);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457447 = makeNative(co->gc, 1, clofun34, 0, 1, closureRef(R[0], 0));
Obj x4318350087 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318350087) {
Obj x4318350311 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318350343 = PRIM_EQ(__symbolTable[73], x4318350311);
if (True == x4318350343) {
Obj x4318350567 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318350599 = PRIM_ISCONS(x4318350567);
if (True == x4318350599) {
Obj x4318350823 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318350855 = PRIM_CAR(x4318350823);
Obj exp = x4318350855;
Obj x4318351143 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318351175 = PRIM_CDR(x4318351143);
Obj x4318351207 = PRIM_ISCONS(x4318351175);
if (True == x4318351207) {
Obj x4317929607 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317929639 = PRIM_CDR(x4317929607);
Obj x4317929671 = PRIM_CAR(x4317929639);
Obj cont = x4317929671;
Obj x4317930023 = PRIM_CDR(closureRef(R[0], 0));
Obj x4317930055 = PRIM_CDR(x4317930023);
Obj x4317930087 = PRIM_CDR(x4317930055);
Obj x4317930119 = PRIM_EQ(Nil, x4317930087);
if (True == x4317930119) {
Obj x4317930407 = makeCons(co->gc, cont, Nil);
Obj x4317930439 = makeCons(co->gc, exp, x4317930407);
saveCont(co, clofun35, 1, R);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4317930439);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457447);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457447);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457447);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457447);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457447);
return;
}
}
case 1:
{
Obj x4317930471= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4317930471);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458183 = makeNative(co->gc, 2, clofun33, 0, 1, closureRef(R[0], 0));
Obj x4318348487 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318348487) {
Obj x4318348711 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318348743 = PRIM_EQ(__symbolTable[74], x4318348711);
if (True == x4318348743) {
Obj x4318348967 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318348999 = PRIM_ISCONS(x4318348967);
if (True == x4318348999) {
Obj x4318349223 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349255 = PRIM_CAR(x4318349223);
Obj exp = x4318349255;
Obj x4318349543 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318349575 = PRIM_CDR(x4318349543);
Obj x4318349607 = PRIM_EQ(Nil, x4318349575);
if (True == x4318349607) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458183);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458663 = makeNative(co->gc, 1, clofun32, 0, 1, closureRef(R[0], 0));
Obj x4318378695 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318378695) {
Obj x4318378919 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318378951 = PRIM_EQ(__symbolTable[75], x4318378919);
if (True == x4318378951) {
Obj x4318379175 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379207 = PRIM_ISCONS(x4318379175);
if (True == x4318379207) {
Obj x4318379431 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379463 = PRIM_CAR(x4318379431);
Obj arg = x4318379463;
Obj x4318379751 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318379783 = PRIM_CDR(x4318379751);
Obj x4318379815 = PRIM_ISCONS(x4318379783);
if (True == x4318379815) {
Obj x4318347335 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318347367 = PRIM_CDR(x4318347335);
Obj x4318347399 = PRIM_CAR(x4318347367);
Obj body = x4318347399;
Obj x4318347751 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318347783 = PRIM_CDR(x4318347751);
Obj x4318347815 = PRIM_CDR(x4318347783);
Obj x4318347847 = PRIM_EQ(Nil, x4318347815);
if (True == x4318347847) {
R[1] = arg;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(__symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458663);
return;
}
}
case 1:
{
Obj x4318348007= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x4318348007, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4318377895 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318377895) {
Obj x4318378055 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4318378055;
Obj x4318378215 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4318378215;
Obj x4318378439 = makeCons(co->gc, f, args);
saveCont(co, clofun32, 1, R);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4318378439);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4318378471= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4318378471);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729543 = R[1];
Obj x4321729703 = makeNative(co->gc, 1, clofun30, 0, 1, x4321729543);
Obj x4318392647 = PRIM_ISCONS(x4321729543);
if (True == x4318392647) {
Obj x4318392903 = PRIM_CAR(x4321729543);
Obj x4318393031 = PRIM_EQ(__symbolTable[96], x4318392903);
if (True == x4318393031) {
Obj x4318393255 = PRIM_CDR(x4321729543);
Obj x4318393383 = PRIM_ISCONS(x4318393255);
if (True == x4318393383) {
Obj x4318393863 = PRIM_CDR(x4321729543);
Obj x4318393991 = PRIM_CAR(x4318393863);
Obj x4318394599 = PRIM_CDR(x4321729543);
Obj x4318394631 = PRIM_CDR(x4318394599);
Obj x4318394663 = PRIM_EQ(Nil, x4318394631);
if (True == x4318394663) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729703);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730183 = makeNative(co->gc, 1, clofun29, 0, 1, closureRef(R[0], 0));
Obj x4318987719 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4318987719) {
Obj x4318987943 = PRIM_CAR(closureRef(R[0], 0));
Obj x4318988071 = PRIM_EQ(__symbolTable[93], x4318987943);
if (True == x4318988071) {
Obj x4318988295 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318988423 = PRIM_ISCONS(x4318988295);
if (True == x4318988423) {
Obj x4318988647 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318988775 = PRIM_CAR(x4318988647);
Obj x4318989415 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318989575 = PRIM_CDR(x4318989415);
Obj x4318989671 = PRIM_EQ(Nil, x4318989575);
if (True == x4318989671) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730183);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320456871 = makeNative(co->gc, 1, clofun28, 0, 1, closureRef(R[0], 0));
Obj x4319006311 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319006311) {
Obj x4319006567 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319006599 = PRIM_EQ(__symbolTable[90], x4319006567);
if (True == x4319006599) {
Obj x4318986375 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318986407 = PRIM_ISCONS(x4318986375);
if (True == x4318986407) {
Obj x4318986695 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318986727 = PRIM_CAR(x4318986695);
Obj x4318987111 = PRIM_CDR(closureRef(R[0], 0));
Obj x4318987143 = PRIM_CDR(x4318987111);
Obj x4318987175 = PRIM_EQ(Nil, x4318987143);
if (True == x4318987175) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320456871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320456871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320456871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320456871);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457319 = makeNative(co->gc, 1, clofun27, 0, 1, closureRef(R[0], 0));
Obj x4319004455 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319004455) {
Obj x4319004711 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319004743 = PRIM_EQ(__symbolTable[84], x4319004711);
if (True == x4319004743) {
Obj x4319005031 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319005063 = PRIM_ISCONS(x4319005031);
if (True == x4319005063) {
Obj x4319005351 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319005383 = PRIM_CAR(x4319005351);
Obj x4319005735 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319005767 = PRIM_CDR(x4319005735);
Obj x4319005799 = PRIM_EQ(Nil, x4319005767);
if (True == x4319005799) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457319);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457895 = makeNative(co->gc, 2, clofun26, 0, 1, closureRef(R[0], 0));
Obj x4319002631 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319002631) {
Obj x4319002919 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319002951 = PRIM_EQ(__symbolTable[77], x4319002919);
if (True == x4319002951) {
Obj x4319003207 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003239 = PRIM_ISCONS(x4319003207);
if (True == x4319003239) {
Obj x4319003495 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003527 = PRIM_CAR(x4319003495);
Obj x4319003879 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319003943 = PRIM_CDR(x4319003879);
Obj x4319003975 = PRIM_EQ(Nil, x4319003943);
if (True == x4319003975) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457895);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457895);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457895);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320457895);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320458407 = makeNative(co->gc, 1, clofun25, 0, 0);
Obj x4319107143 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319107143) {
Obj x4319107399 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319107431 = PRIM_EQ(__symbolTable[78], x4319107399);
if (True == x4319107431) {
Obj x4319107687 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319107751 = PRIM_ISCONS(x4319107687);
if (True == x4319107751) {
Obj x4319108007 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319108039 = PRIM_CAR(x4319108007);
Obj label = x4319108039;
Obj x4319108295 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319108327 = PRIM_CDR(x4319108295);
R[1] = x4320458407;
saveCont(co, clofun26, 1, R);
coraCall1(co, globalRef(__symbolTable[83]), label);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458407);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458407);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458407);
return;
}
}
case 1:
{
Obj x4319108551= co->res;
Obj x4320458407 = R[1];
if (True == x4319108551) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458407);
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
Obj x4321728103 = R[1];
Obj x4321728135 = R[2];
Obj x4319124647 = PRIM_EQ(Nil, x4321728103);
if (True == x4319124647) {
coraReturn(co, Nil);
return;
} else {
Obj x4321728679 = makeNative(co->gc, 2, clofun23, 0, 2, x4321728103, x4321728135);
Obj x4319105191 = PRIM_ISCONS(x4321728103);
if (True == x4319105191) {
Obj x4319105351 = PRIM_CAR(x4321728103);
Obj x = x4319105351;
Obj x4319105511 = PRIM_CDR(x4321728103);
Obj y = x4319105511;
R[1] = y;
R[2] = x4321728135;
R[3] = x4321728679;
saveCont(co, clofun24, 1, R);
coraCall2(co, globalRef(__symbolTable[95]), x, x4321728135);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728679);
return;
}
}
}
case 1:
{
Obj x4319105671= co->res;
Obj y = R[1];
Obj x4321728135 = R[2];
Obj x4321728679 = R[3];
if (True == x4319105671) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), y, x4321728135);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728679);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319124935 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319124935) {
Obj x4319125095 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4319125095;
Obj x4319125255 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4319125255;
R[1] = x;
saveCont(co, clofun23, 1, R);
coraCall2(co, globalRef(__symbolTable[80]), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4319125415= co->res;
Obj x = R[1];
Obj x4319125447 = makeCons(co->gc, x, x4319125415);
coraReturn(co, x4319125447);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726503 = R[1];
Obj x4321726535 = R[2];
Obj x4319122567 = PRIM_EQ(Nil, x4321726503);
if (True == x4319122567) {
coraReturn(co, x4321726535);
return;
} else {
Obj x4321727111 = makeNative(co->gc, 2, clofun21, 0, 2, x4321726503, x4321726535);
Obj x4319123591 = PRIM_ISCONS(x4321726503);
if (True == x4319123591) {
Obj x4319123751 = PRIM_CAR(x4321726503);
Obj x = x4319123751;
Obj x4319123911 = PRIM_CDR(x4321726503);
Obj y = x4319123911;
R[1] = y;
R[2] = x4321726535;
R[3] = x4321727111;
saveCont(co, clofun22, 1, R);
coraCall2(co, globalRef(__symbolTable[95]), x, x4321726535);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727111);
return;
}
}
}
case 1:
{
Obj x4319124071= co->res;
Obj y = R[1];
Obj x4321726535 = R[2];
Obj x4321727111 = R[3];
if (True == x4319124071) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), y, x4321726535);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727111);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4319122855 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319122855) {
Obj x4319123015 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4319123015;
Obj x4319123175 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4319123175;
R[1] = x;
saveCont(co, clofun21, 1, R);
coraCall2(co, globalRef(__symbolTable[81]), y, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj x4319123335= co->res;
Obj x = R[1];
Obj x4319123367 = makeCons(co->gc, x, x4319123335);
coraReturn(co, x4319123367);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457479 = R[1];
Obj x4320457511 = R[2];
Obj x4320457543 = R[3];
Obj x4321726471 = makeNative(co->gc, 2, clofun19, 1, 3, x4320457479, x4320457543, x4320457511);
R[1] = x4320457543;
R[2] = x4321726471;
saveCont(co, clofun20, 3, R);
coraCall1(co, globalRef(__symbolTable[83]), x4320457543);
return;
}
case 1:
{
Obj x4319122183= co->res;
Obj x4321726471 = R[1];
if (True == x4319122183) {
co->ctx.sp = R;
coraCall1(co, x4321726471, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4321726471, False);
return;
}
}
case 2:
{
Obj x4319122023= co->res;
Obj x4320457543 = R[1];
Obj x4321726471 = R[2];
if (True == x4319122023) {
co->ctx.sp = R;
coraCall1(co, x4321726471, True);
return;
} else {
R[1] = x4321726471;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(__symbolTable[103]), x4320457543);
return;
}
}
case 3:
{
Obj x4319121703= co->res;
Obj x4320457543 = R[1];
Obj x4321726471 = R[2];
if (True == x4319121703) {
co->ctx.sp = R;
coraCall1(co, x4321726471, True);
return;
} else {
Obj x4319121863 = primIsString(x4320457543);
if (True == x4319121863) {
co->ctx.sp = R;
coraCall1(co, x4321726471, True);
return;
} else {
R[1] = x4320457543;
R[2] = x4321726471;
saveCont(co, clofun20, 2, R);
coraCall1(co, globalRef(__symbolTable[82]), x4320457543);
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
Obj x4321726663 = R[1];
if (True == x4321726663) {
Obj x4320459623 = makeCons(co->gc, closureRef(R[0], 1), Nil);
Obj x4320459655 = makeCons(co->gc, __symbolTable[96], x4320459623);
coraReturn(co, x4320459655);
return;
} else {
Obj x4320458087 = makeNative(co->gc, 3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj x4319136135 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4319136135) {
Obj x4319136359 = PRIM_CAR(closureRef(R[0], 1));
Obj x4319136391 = PRIM_EQ(__symbolTable[84], x4319136359);
if (True == x4319136391) {
Obj x4319136615 = PRIM_CDR(closureRef(R[0], 1));
Obj x4319136647 = PRIM_ISCONS(x4319136615);
if (True == x4319136647) {
Obj x4319136871 = PRIM_CDR(closureRef(R[0], 1));
Obj x4319136903 = PRIM_CAR(x4319136871);
Obj x = x4319136903;
Obj x4319137191 = PRIM_CDR(closureRef(R[0], 1));
Obj x4319137223 = PRIM_CDR(x4319137191);
Obj x4319137255 = PRIM_EQ(Nil, x4319137223);
if (True == x4319137255) {
R[1] = x;
saveCont(co, clofun19, 1, R);
coraCall2(co, globalRef(__symbolTable[94]), x, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320458087);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458087);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458087);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320458087);
return;
}
}
}
case 1:
{
Obj x4319137415= co->res;
Obj x = R[1];
Obj x4319137575 = makeCons(co->gc, x, Nil);
Obj x4319137607 = makeCons(co->gc, __symbolTable[96], x4319137575);
coraReturn(co, x4319137607);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320459975 = primIsSymbol(closureRef(R[0], 0));
if (True == x4320459975) {
saveCont(co, clofun18, 2, R);
coraCall2(co, globalRef(__symbolTable[95]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4320459079 = makeNative(co->gc, 1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319190599 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319190599) {
Obj x4319190823 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319190855 = PRIM_EQ(__symbolTable[89], x4319190823);
if (True == x4319190855) {
Obj x4319133735 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319133767 = PRIM_ISCONS(x4319133735);
if (True == x4319133767) {
Obj x4319133991 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319134023 = PRIM_CAR(x4319133991);
Obj args = x4319134023;
Obj x4319134311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319134343 = PRIM_CDR(x4319134311);
Obj x4319134375 = PRIM_ISCONS(x4319134343);
if (True == x4319134375) {
Obj x4319134663 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319134695 = PRIM_CDR(x4319134663);
Obj x4319134727 = PRIM_CAR(x4319134695);
Obj body = x4319134727;
Obj x4319135079 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319135111 = PRIM_CDR(x4319135079);
Obj x4319135143 = PRIM_CDR(x4319135111);
Obj x4319135175 = PRIM_EQ(Nil, x4319135143);
if (True == x4319135175) {
R[1] = body;
R[2] = args;
saveCont(co, clofun18, 4, R);
coraCall2(co, globalRef(__symbolTable[88]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320459079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4320459079);
return;
}
}
}
case 1:
{
Obj x4320460359= co->res;
Obj x4320460551 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj x4320460615 = makeCons(co->gc, __symbolTable[93], x4320460551);
coraReturn(co, x4320460615);
return;
}
case 2:
{
Obj x4320460199= co->res;
if (True == x4320460199) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun18, 1, R);
coraCall2(co, globalRef(__symbolTable[94]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
}
case 3:
{
Obj x4319135559= co->res;
Obj args = R[1];
Obj x4319135591 = makeCons(co->gc, x4319135559, Nil);
Obj x4319135623 = makeCons(co->gc, args, x4319135591);
Obj x4319135655 = makeCons(co->gc, __symbolTable[89], x4319135623);
coraReturn(co, x4319135655);
return;
}
case 4:
{
Obj x4319135527= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun18, 3, R);
coraCall3(co, globalRef(__symbolTable[97]), x4319135527, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727271 = makeNative(co->gc, 2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319248007 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319248007) {
Obj x4319248231 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319248263 = PRIM_EQ(__symbolTable[87], x4319248231);
if (True == x4319248263) {
Obj x4319187047 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319187079 = PRIM_ISCONS(x4319187047);
if (True == x4319187079) {
Obj x4319187367 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319187399 = PRIM_CAR(x4319187367);
Obj x4319187431 = PRIM_ISCONS(x4319187399);
if (True == x4319187431) {
Obj x4319187783 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319187815 = PRIM_CAR(x4319187783);
Obj x4319187847 = PRIM_CAR(x4319187815);
Obj x4319187879 = PRIM_EQ(__symbolTable[87], x4319187847);
if (True == x4319187879) {
Obj x4319188167 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319188199 = PRIM_CAR(x4319188167);
Obj x4319188231 = PRIM_CDR(x4319188199);
Obj exp1 = x4319188231;
Obj x4319188455 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319188487 = PRIM_CDR(x4319188455);
Obj exp2 = x4319188487;
Obj x4319188647 = primGenSym(co);
Obj f = x4319188647;
Obj x4319188807 = primGenSym(co);
Obj v = x4319188807;
Obj x4319189287 = makeCons(co->gc, v, Nil);
Obj x4319189511 = makeCons(co->gc, v, exp2);
Obj x4319189543 = makeCons(co->gc, __symbolTable[87], x4319189511);
Obj x4319189575 = makeCons(co->gc, x4319189543, Nil);
Obj x4319189607 = makeCons(co->gc, x4319189287, x4319189575);
Obj x4319189639 = makeCons(co->gc, __symbolTable[89], x4319189607);
Obj x4319189927 = makeCons(co->gc, __symbolTable[87], exp1);
Obj x4319189959 = makeCons(co->gc, x4319189927, Nil);
Obj x4319189991 = makeCons(co->gc, f, x4319189959);
Obj x4319190023 = makeCons(co->gc, x4319189991, Nil);
Obj x4319190055 = makeCons(co->gc, x4319189639, x4319190023);
Obj x4319190087 = makeCons(co->gc, f, x4319190055);
Obj x4319190119 = makeCons(co->gc, __symbolTable[86], x4319190087);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4319190119);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727271);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321727975 = makeNative(co->gc, 2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319247015 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319247015) {
Obj x4319247239 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319247271 = PRIM_EQ(__symbolTable[87], x4319247239);
if (True == x4319247271) {
Obj x4319247431 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4319247431;
R[1] = args;
saveCont(co, clofun16, 2, R);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321727975);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321727975);
return;
}
}
case 1:
{
Obj x4319247687= co->res;
Obj x4319247719 = makeCons(co->gc, __symbolTable[87], x4319247687);
coraReturn(co, x4319247719);
return;
}
case 2:
{
Obj x4319247655= co->res;
Obj args = R[1];
saveCont(co, clofun16, 1, R);
coraCall2(co, globalRef(__symbolTable[92]), x4319247655, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321728583 = makeNative(co->gc, 3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319256423 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319256423) {
Obj x4319244359 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319244391 = PRIM_EQ(__symbolTable[85], x4319244359);
if (True == x4319244391) {
Obj x4319244615 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319244647 = PRIM_ISCONS(x4319244615);
if (True == x4319244647) {
Obj x4319244871 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319244903 = PRIM_CAR(x4319244871);
Obj x = x4319244903;
Obj x4319245191 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319245223 = PRIM_CDR(x4319245191);
Obj x4319245255 = PRIM_ISCONS(x4319245223);
if (True == x4319245255) {
Obj x4319245543 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319245575 = PRIM_CDR(x4319245543);
Obj x4319245607 = PRIM_CAR(x4319245575);
Obj y = x4319245607;
Obj x4319245959 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319245991 = PRIM_CDR(x4319245959);
Obj x4319246023 = PRIM_CDR(x4319245991);
Obj x4319246055 = PRIM_EQ(Nil, x4319246023);
if (True == x4319246055) {
R[1] = y;
saveCont(co, clofun15, 2, R);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728583);
return;
}
}
case 1:
{
Obj x4319246439= co->res;
Obj x4319246279 = R[1];
Obj x4319246471 = makeCons(co->gc, x4319246439, Nil);
Obj x4319246503 = makeCons(co->gc, x4319246279, x4319246471);
Obj x4319246535 = makeCons(co->gc, __symbolTable[85], x4319246503);
coraReturn(co, x4319246535);
return;
}
case 2:
{
Obj x4319246279= co->res;
Obj y = R[1];
R[1] = x4319246279;
saveCont(co, clofun15, 1, R);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), y);
return;
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729351 = makeNative(co->gc, 1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319416135 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319416135) {
Obj x4319252519 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319252551 = PRIM_EQ(__symbolTable[86], x4319252519);
if (True == x4319252551) {
Obj x4319252775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319252807 = PRIM_ISCONS(x4319252775);
if (True == x4319252807) {
Obj x4319253031 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319253063 = PRIM_CAR(x4319253031);
Obj a = x4319253063;
Obj x4319253351 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319253383 = PRIM_CDR(x4319253351);
Obj x4319253415 = PRIM_ISCONS(x4319253383);
if (True == x4319253415) {
Obj x4319253703 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319253735 = PRIM_CDR(x4319253703);
Obj x4319253767 = PRIM_CAR(x4319253735);
Obj b = x4319253767;
Obj x4319254119 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319254151 = PRIM_CDR(x4319254119);
Obj x4319254183 = PRIM_CDR(x4319254151);
Obj x4319254215 = PRIM_ISCONS(x4319254183);
if (True == x4319254215) {
Obj x4319254567 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319254599 = PRIM_CDR(x4319254567);
Obj x4319254631 = PRIM_CDR(x4319254599);
Obj x4319254663 = PRIM_CAR(x4319254631);
Obj c = x4319254663;
Obj x4319255079 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319255111 = PRIM_CDR(x4319255079);
Obj x4319255143 = PRIM_CDR(x4319255111);
Obj x4319255175 = PRIM_CDR(x4319255143);
Obj x4319255207 = PRIM_EQ(Nil, x4319255175);
if (True == x4319255207) {
R[1] = c;
R[2] = a;
saveCont(co, clofun14, 2, R);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321729351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321729351);
return;
}
}
case 1:
{
Obj x4319255751= co->res;
Obj x4319255495 = R[1];
Obj a = R[2];
Obj x4319255783 = makeCons(co->gc, x4319255751, Nil);
Obj x4319255815 = makeCons(co->gc, x4319255495, x4319255783);
Obj x4319255847 = makeCons(co->gc, a, x4319255815);
Obj x4319255879 = makeCons(co->gc, __symbolTable[86], x4319255847);
coraReturn(co, x4319255879);
return;
}
case 2:
{
Obj x4319255495= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x4319255719 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = x4319255495;
R[2] = a;
saveCont(co, clofun14, 1, R);
coraCall3(co, globalRef(__symbolTable[97]), x4319255719, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730279 = makeNative(co->gc, 4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4319530695 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319530695) {
Obj x4319530919 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319530951 = PRIM_ISCONS(x4319530919);
if (True == x4319530951) {
Obj x4319412455 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319412487 = PRIM_CAR(x4319412455);
Obj x4319412519 = PRIM_EQ(__symbolTable[89], x4319412487);
if (True == x4319412519) {
Obj x4319412743 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319412775 = PRIM_CDR(x4319412743);
Obj exp1 = x4319412775;
Obj x4319412999 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319413031 = PRIM_ISCONS(x4319412999);
if (True == x4319413031) {
Obj x4319413319 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319413351 = PRIM_CAR(x4319413319);
Obj x4319413383 = PRIM_ISCONS(x4319413351);
if (True == x4319413383) {
Obj x4319413735 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319413767 = PRIM_CAR(x4319413735);
Obj x4319413799 = PRIM_CAR(x4319413767);
Obj x4319413831 = PRIM_EQ(__symbolTable[87], x4319413799);
if (True == x4319413831) {
Obj x4319414119 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319414151 = PRIM_CAR(x4319414119);
Obj x4319414183 = PRIM_CDR(x4319414151);
Obj exp2 = x4319414183;
Obj x4319414471 = PRIM_CDR(closureRef(R[0], 0));
Obj x4319414503 = PRIM_CDR(x4319414471);
Obj x4319414535 = PRIM_EQ(Nil, x4319414503);
if (True == x4319414535) {
Obj x4319414695 = primGenSym(co);
Obj f = x4319414695;
Obj x4319415047 = makeCons(co->gc, __symbolTable[89], exp1);
Obj x4319415335 = makeCons(co->gc, __symbolTable[87], exp2);
Obj x4319415367 = makeCons(co->gc, x4319415335, Nil);
Obj x4319415399 = makeCons(co->gc, f, x4319415367);
Obj x4319415431 = makeCons(co->gc, x4319415399, Nil);
Obj x4319415463 = makeCons(co->gc, x4319415047, x4319415431);
Obj x4319415495 = makeCons(co->gc, f, x4319415463);
Obj x4319415527 = makeCons(co->gc, __symbolTable[86], x4319415495);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4319415527);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321730279);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4320457351 = makeNative(co->gc, 1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj x4319527943 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319527943) {
Obj x4319528103 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x4319528103;
Obj x4319528263 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4319528263;
R[1] = op;
R[2] = args;
R[3] = x4320457351;
saveCont(co, clofun12, 7, R);
coraCall1(co, globalRef(__symbolTable[104]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457351);
return;
}
}
case 1:
{
Obj x4319529351= co->res;
Obj x4319529159 = R[1];
Obj x4319529383 = makeCons(co->gc, x4319529159, x4319529351);
coraReturn(co, x4319529383);
return;
}
case 2:
{
Obj x4319529319= co->res;
Obj args = R[1];
Obj x4319529159 = R[2];
R[1] = x4319529159;
saveCont(co, clofun12, 1, R);
coraCall2(co, globalRef(__symbolTable[92]), x4319529319, args);
return;
}
case 3:
{
Obj x4319530247= co->res;
Obj tmp = R[1];
Obj x4319530279 = makeCons(co->gc, x4319530247, Nil);
Obj x4319530311 = makeCons(co->gc, tmp, x4319530279);
Obj x4319530343 = makeCons(co->gc, __symbolTable[89], x4319530311);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4319530343);
return;
}
case 4:
{
Obj x4319529799= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = x4319529799;
Obj x4319530215 = makeCons(co->gc, op, args);
R[1] = tmp;
saveCont(co, clofun12, 3, R);
coraCall2(co, globalRef(__symbolTable[88]), x4319530215, tmp);
return;
}
case 5:
{
Obj x4319528743= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = x4319528743;
Obj x4319528903 = PRIM_EQ(required, provided);
if (True == x4319528903) {
Obj x4319529127 = makeCons(co->gc, op, Nil);
Obj x4319529159 = makeCons(co->gc, __symbolTable[90], x4319529127);
R[1] = args;
R[2] = x4319529159;
saveCont(co, clofun12, 2, R);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj x4319529543 = PRIM_GT(required, provided);
if (True == x4319529543) {
Obj x4319529767 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 4, R);
coraCall2(co, globalRef(__symbolTable[98]), x4319529767, Nil);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "primitive call mismatch"));
return;
}
}
}
case 6:
{
Obj x4319528583= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = x4319528583;
R[1] = required;
R[2] = op;
R[3] = args;
saveCont(co, clofun12, 5, R);
coraCall1(co, globalRef(__symbolTable[91]), args);
return;
}
case 7:
{
Obj x4319528423= co->res;
Obj op = R[1];
Obj args = R[2];
Obj x4320457351 = R[3];
if (True == x4319528423) {
R[1] = op;
R[2] = args;
saveCont(co, clofun12, 6, R);
coraCall1(co, globalRef(__symbolTable[100]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4320457351);
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
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
case 1:
{
Obj x4319527783= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4319527783, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321730535 = R[1];
Obj x4320456711 = R[2];
Obj x4320458375 = PRIM_EQ(MAKE_NUMBER(0), x4321730535);
if (True == x4320458375) {
coraReturn(co, x4320456711);
return;
} else {
Obj x4320458631 = PRIM_SUB(x4321730535, MAKE_NUMBER(1));
Obj x4320458823 = primGenSym(co);
Obj x4320458855 = makeCons(co->gc, x4320458823, x4320456711);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[98]), x4320458631, x4320458855);
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
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj x4320457735= co->res;
Obj find = R[1];
if (True == x4320457735) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[99]), find);
return;
}
}
case 2:
{
Obj x4320457383= co->res;
Obj find = x4320457383;
R[1] = find;
saveCont(co, clofun9, 1, R);
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
saveCont(co, clofun8, 2, R);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj x4321730119= co->res;
Obj find = R[1];
if (True == x4321730119) {
coraReturn(co, makeCString(co->gc, "ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), find);
return;
}
}
case 2:
{
Obj x4321729799= co->res;
Obj find = x4321729799;
R[1] = find;
saveCont(co, clofun8, 1, R);
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
saveCont(co, clofun7, 2, R);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj x4321729063= co->res;
Obj x4321729127 = primNot(x4321729063);
coraReturn(co, x4321729127);
return;
}
case 2:
{
Obj x4321728999= co->res;
saveCont(co, clofun7, 1, R);
coraCall1(co, globalRef(__symbolTable[103]), x4321728999);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321729639 = R[1];
Obj x4321729671 = R[2];
Obj x4318986311 = PRIM_EQ(Nil, x4321729671);
if (True == x4318986311) {
coraReturn(co, False);
return;
} else {
Obj x4318986471 = PRIM_ISCONS(x4321729671);
if (True == x4318986471) {
Obj x4318986631 = PRIM_CAR(x4321729671);
Obj hd = x4318986631;
Obj x4318986791 = PRIM_CDR(x4321729671);
Obj tl = x4318986791;
R[1] = x4321729639;
R[2] = tl;
saveCont(co, clofun6, 1, R);
coraCall2(co, globalRef(__symbolTable[124]), x4321729639, hd);
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
Obj x4318987015= co->res;
Obj x4321729639 = R[1];
Obj tl = R[2];
Obj x4318987047 = PRIM_LT(x4318987015, MAKE_NUMBER(0));
if (True == x4318987047) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[123]), x4321729639, tl);
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
Obj x4321728007 = R[1];
Obj x4321728039 = R[2];
Obj x4321728071 = R[3];
Obj x4319004519 = PRIM_EQ(Nil, x4321728071);
if (True == x4319004519) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x4321728647 = makeNative(co->gc, 1, clofun3, 0, 3, x4321728071, x4321728007, x4321728039);
Obj x4319005511 = PRIM_ISCONS(x4321728071);
if (True == x4319005511) {
Obj x4319005671 = PRIM_CAR(x4321728071);
Obj a = x4319005671;
Obj x4319005831 = PRIM_CDR(x4321728071);
Obj x4319005991 = PRIM_EQ(x4321728039, a);
if (True == x4319005991) {
coraReturn(co, x4321728007);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4321728647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4321728647);
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
Obj x4319004807 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319004807) {
Obj x4319004967 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319005127 = PRIM_CDR(closureRef(R[0], 0));
Obj b = x4319005127;
Obj x4319005287 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[125]), x4319005287, closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4321726855 = R[1];
Obj x4321726887 = R[2];
Obj x4321726919 = R[3];
Obj x4319003431 = PRIM_EQ(Nil, x4321726919);
if (True == x4319003431) {
coraReturn(co, x4321726887);
return;
} else {
Obj x4319003591 = PRIM_ISCONS(x4321726919);
if (True == x4319003591) {
Obj x4319003751 = PRIM_CAR(x4321726919);
Obj x = x4319003751;
Obj x4319003911 = PRIM_CDR(x4321726919);
Obj y = x4319003911;
R[1] = x4321726855;
R[2] = y;
saveCont(co, clofun2, 1, R);
coraCall2(co, x4321726855, x4321726887, x);
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
Obj x4319004071= co->res;
Obj x4321726855 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), x4321726855, x4319004071, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4317535495 = R[1];
Obj x4317535527 = R[2];
Obj x4319107271 = PRIM_EQ(Nil, x4317535527);
if (True == x4319107271) {
coraReturn(co, Nil);
return;
} else {
Obj x4317535975 = makeNative(co->gc, 1, clofun0, 0, 2, x4317535527, x4317535495);
Obj x4319108167 = PRIM_ISCONS(x4317535527);
if (True == x4319108167) {
Obj x4319108391 = PRIM_CAR(x4317535527);
Obj x4319108423 = PRIM_ISCONS(x4319108391);
if (True == x4319108423) {
Obj x4319108647 = PRIM_CAR(x4317535527);
Obj x4319108679 = PRIM_CAR(x4319108647);
Obj x = x4319108679;
Obj x4319108903 = PRIM_CAR(x4317535527);
Obj x4319108935 = PRIM_CDR(x4319108903);
Obj y = x4319108935;
Obj x4319109095 = PRIM_CDR(x4317535527);
Obj x4319002759 = PRIM_EQ(x4317535495, x);
if (True == x4319002759) {
Obj x4319002855 = makeCons(co->gc, x, y);
coraReturn(co, x4319002855);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4317535975);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4317535975);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4317535975);
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
Obj x4319107559 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4319107559) {
Obj x4319107719 = PRIM_CAR(closureRef(R[0], 0));
Obj x4319107879 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4319107879;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[128]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

