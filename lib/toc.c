#include "types.h"
#include "runtime1.h"

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
__symbolTable[3] = intern("cora/lib/toc1#compile-to-c");
__symbolTable[4] = intern("cora/init#read-file-as-sexp");
__symbolTable[5] = intern("cora/lib/toc1#preprocess");
__symbolTable[6] = intern("cora/lib/toc1#split-type-and-code-toplevel");
__symbolTable[7] = intern("cora/lib/infer#*typecheck*");
__symbolTable[8] = intern("cora/lib/toc1#generate-typecheck-code");
__symbolTable[9] = intern("cora/lib/toc1#extract-typecheck-body");
__symbolTable[10] = intern(":type");
__symbolTable[11] = intern("declare");
__symbolTable[12] = intern(":declare");
__symbolTable[13] = intern("cora/lib/infer#tvar");
__symbolTable[14] = intern("backquote");
__symbolTable[15] = intern("macroexpand");
__symbolTable[16] = intern("cora/lib/infer#check-type!");
__symbolTable[17] = intern("cora/lib/toc1#split-type-and-code");
__symbolTable[18] = intern("package");
__symbolTable[19] = intern("begin");
__symbolTable[20] = intern("export");
__symbolTable[21] = intern("import");
__symbolTable[22] = intern("cora/lib/toc1#handle-import-eagerly");
__symbolTable[23] = intern("cora/lib/toc1#generate-c");
__symbolTable[24] = intern("cora/init#symbol->string");
__symbolTable[25] = intern("cora/lib/toc1#generate-entry");
__symbolTable[26] = intern("cora/lib/toc1#generate-toplevel-lambda");
__symbolTable[27] = intern("cora/lib/toc1#for-each");
__symbolTable[28] = intern("cora/lib/toc1#compile");
__symbolTable[29] = intern("cora/init#cddr");
__symbolTable[30] = intern("->");
__symbolTable[31] = intern("cora/init#add-to-*macros*");
__symbolTable[32] = intern("cora/lib/toc1#rewrite-->macro");
__symbolTable[33] = intern("cora/init#vector");
__symbolTable[34] = intern("cora/lib/toc1#collect-lambda-pass");
__symbolTable[35] = intern("cora/lib/toc1#liveness-analyze-pass");
__symbolTable[36] = intern("cora/lib/toc1#tailify-pass");
__symbolTable[37] = intern("cora/lib/toc1#closure-convert-pass");
__symbolTable[38] = intern("cora/lib/toc1#parse-pass");
__symbolTable[39] = intern("cora/lib/toc1#code-gen-func-declare");
__symbolTable[40] = intern("cora/lib/toc1#generate-cont");
__symbolTable[41] = intern("cora/lib/toc/internal#escape-str");
__symbolTable[42] = intern("cora/lib/toc1#generate-group-name");
__symbolTable[43] = intern("cora/lib/toc1#generate-inst-list");
__symbolTable[44] = intern("cora/lib/toc/internal#generate-sym");
__symbolTable[45] = intern("cora/lib/toc1#recover-from-frame");
__symbolTable[46] = intern("cora/lib/toc1#generate-inst");
__symbolTable[47] = intern("cora/lib/toc/internal#generate-num");
__symbolTable[48] = intern("cora/lib/toc/internal#generate-str");
__symbolTable[49] = intern("cora/lib/toc1#save-to-frame");
__symbolTable[50] = intern("cora/lib/toc1#symbol-offset");
__symbolTable[51] = intern("cora/lib/toc1#symbol-offset-h");
__symbolTable[52] = intern("cora/init#value");
__symbolTable[53] = intern("cora/init#vector-set!");
__symbolTable[54] = intern("cora/lib/toc1#append-result");
__symbolTable[55] = intern("cora/init#vector-ref");
__symbolTable[56] = intern("cora/lib/toc1#collect-lambda");
__symbolTable[57] = intern("cora/lib/toc1#lambda-frame-size");
__symbolTable[58] = intern("cora/lib/toc1#rewrite-lambda-final");
__symbolTable[59] = intern("cora/init#cdddr");
__symbolTable[60] = intern("cora/lib/toc1#collect-cont-list");
__symbolTable[61] = intern("cora/lib/toc1#collect-cont");
__symbolTable[62] = intern("%continuation");
__symbolTable[63] = intern("cora/lib/toc1#liveness-analyze");
__symbolTable[64] = intern("cora/init#caar");
__symbolTable[65] = intern("cora/init#pair?");
__symbolTable[66] = intern("cora/lib/toc1#wrap-var");
__symbolTable[67] = intern("cora/init#reverse");
__symbolTable[68] = intern("cora/lib/toc1#tailify-list");
__symbolTable[69] = intern("cora/lib/toc1#tailify");
__symbolTable[70] = intern("cora/lib/toc1#id");
__symbolTable[71] = intern("cora/lib/toc1#closure-convert");
__symbolTable[72] = intern("return");
__symbolTable[73] = intern("call");
__symbolTable[74] = intern("tailcall");
__symbolTable[75] = intern("continuation");
__symbolTable[76] = intern("cora/lib/toc1#free-vars");
__symbolTable[77] = intern("%closure-ref");
__symbolTable[78] = intern("%closure");
__symbolTable[79] = intern("cora/lib/toc1#convert-protect?");
__symbolTable[80] = intern("cora/lib/toc1#diff");
__symbolTable[81] = intern("cora/lib/toc1#union");
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
__symbolTable[94] = intern("cora/lib/toc1#add-symbol-to-list");
__symbolTable[95] = intern("cora/init#elem?");
__symbolTable[96] = intern("%const");
__symbolTable[97] = intern("cora/lib/toc1#parse");
__symbolTable[98] = intern("cora/lib/toc1#temp-list");
__symbolTable[99] = intern("cora/init#cadr");
__symbolTable[100] = intern("cora/lib/toc1#builtin->args");
__symbolTable[101] = intern("cora/init#caddr");
__symbolTable[102] = intern("cora/lib/toc1#builtin->name");
__symbolTable[103] = intern("cora/init#null?");
__symbolTable[104] = intern("cora/lib/toc1#builtin?");
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
__symbolTable[122] = intern("cora/lib/toc1#*builtin-prims*");
__symbolTable[123] = intern("cora/lib/toc1#exist-in-env");
__symbolTable[124] = intern("cora/lib/toc1#index");
__symbolTable[125] = intern("cora/lib/toc1#pos-in-list0");
__symbolTable[126] = intern("cora/lib/toc1#foldl");
__symbolTable[127] = intern("cora/lib/toc1#error");
__symbolTable[128] = intern("cora/lib/toc1#assq");
__symbolTable[129] = intern("cora/lib/toc1#*ns-export*");
__symbolTable[130] = intern("cora/init#import");
co->ctx.fn = clofun144;
co->ctx.label = 0;
}

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
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
Obj x4307635687= co->res;
Obj x4307570919 = primSet(co, __symbolTable[28], makeNative1(3, clofun110, 2, 0));
Obj x4310577735 = primSet(co, __symbolTable[27], makeNative1(3, clofun111, 2, 0));
Obj x4310359495 = primSet(co, __symbolTable[26], makeNative1(7, clofun113, 3, 0));
Obj x4309806983 = primSet(co, __symbolTable[25], makeNative1(4, clofun115, 3, 0));
Obj x4309802631 = primSet(co, __symbolTable[23], makeNative1(4, clofun118, 3, 0));
Obj x4308460071 = primSet(co, __symbolTable[22], makeNative1(2, clofun123, 1, 0));
Obj x4308302375 = primSet(co, __symbolTable[17], makeNative1(5, clofun126, 4, 0));
Obj x4307696487 = primSet(co, __symbolTable[9], makeNative1(3, clofun131, 2, 0));
Obj x4307697063 = primSet(co, __symbolTable[8], makeNative1(3, clofun132, 2, 0));
Obj x4307668999 = primSet(co, __symbolTable[6], makeNative1(2, clofun140, 1, 0));
Obj x4307669191 = primSet(co, __symbolTable[7], False);
Obj x4307672391 = primSet(co, __symbolTable[5], makeNative1(3, clofun142, 1, 0));
Obj x4307653607 = primSet(co, __symbolTable[3], makeNative1(4, clofun143, 2, 0));
coraReturn(co, x4307653607);
return;
}
case 2:
{
Obj x4310512039= co->res;
Obj x4310512423 = primSet(co, __symbolTable[129], Nil);
Obj x4310356263 = primSet(co, __symbolTable[128], makeNative1(3, clofun1, 2, 0));
Obj x4310357511 = primSet(co, __symbolTable[126], makeNative1(4, clofun2, 3, 0));
Obj x4310359591 = primSet(co, __symbolTable[125], makeNative1(4, clofun4, 3, 0));
Obj x4310359879 = primSet(co, __symbolTable[124], makeNative1(3, clofun5, 2, 0));
Obj x4309832743 = primSet(co, __symbolTable[123], makeNative1(3, clofun6, 2, 0));
Obj x4309833159 = makeCons(makeCString("primSet"), Nil);
Obj x4309833191 = makeCons(MAKE_NUMBER(2), x4309833159);
Obj x4309833223 = makeCons(__symbolTable[121], x4309833191);
Obj x4309833511 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x4309833543 = makeCons(MAKE_NUMBER(1), x4309833511);
Obj x4309833575 = makeCons(__symbolTable[120], x4309833543);
Obj x4309833863 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x4309833895 = makeCons(MAKE_NUMBER(1), x4309833863);
Obj x4309833927 = makeCons(__symbolTable[119], x4309833895);
Obj x4309834215 = makeCons(makeCString("makeCons"), Nil);
Obj x4309834247 = makeCons(MAKE_NUMBER(2), x4309834215);
Obj x4309834279 = makeCons(__symbolTable[118], x4309834247);
Obj x4309834567 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x4309834599 = makeCons(MAKE_NUMBER(1), x4309834567);
Obj x4309834631 = makeCons(__symbolTable[117], x4309834599);
Obj x4309834919 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x4309834951 = makeCons(MAKE_NUMBER(2), x4309834919);
Obj x4309834983 = makeCons(__symbolTable[116], x4309834951);
Obj x4309835271 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x4309835303 = makeCons(MAKE_NUMBER(2), x4309835271);
Obj x4309835335 = makeCons(__symbolTable[115], x4309835303);
Obj x4309835623 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x4309835655 = makeCons(MAKE_NUMBER(2), x4309835623);
Obj x4309835687 = makeCons(__symbolTable[114], x4309835655);
Obj x4309803207 = makeCons(makeCString("primDiv"), Nil);
Obj x4309803239 = makeCons(MAKE_NUMBER(2), x4309803207);
Obj x4309803271 = makeCons(__symbolTable[113], x4309803239);
Obj x4309803559 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x4309803591 = makeCons(MAKE_NUMBER(2), x4309803559);
Obj x4309803623 = makeCons(__symbolTable[112], x4309803591);
Obj x4309803911 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x4309803943 = makeCons(MAKE_NUMBER(2), x4309803911);
Obj x4309803975 = makeCons(__symbolTable[111], x4309803943);
Obj x4309804263 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x4309804295 = makeCons(MAKE_NUMBER(2), x4309804263);
Obj x4309804327 = makeCons(__symbolTable[110], x4309804295);
Obj x4309804615 = makeCons(makeCString("primGenSym"), Nil);
Obj x4309804647 = makeCons(MAKE_NUMBER(0), x4309804615);
Obj x4309804679 = makeCons(__symbolTable[109], x4309804647);
Obj x4309804967 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x4309804999 = makeCons(MAKE_NUMBER(1), x4309804967);
Obj x4309805031 = makeCons(__symbolTable[108], x4309804999);
Obj x4309805319 = makeCons(makeCString("primNot"), Nil);
Obj x4309805351 = makeCons(MAKE_NUMBER(1), x4309805319);
Obj x4309805383 = makeCons(__symbolTable[107], x4309805351);
Obj x4309805671 = makeCons(makeCString("primIsNumber"), Nil);
Obj x4309805703 = makeCons(MAKE_NUMBER(1), x4309805671);
Obj x4309805735 = makeCons(__symbolTable[106], x4309805703);
Obj x4309806023 = makeCons(makeCString("primIsString"), Nil);
Obj x4309806055 = makeCons(MAKE_NUMBER(1), x4309806023);
Obj x4309806087 = makeCons(__symbolTable[105], x4309806055);
Obj x4309806119 = makeCons(x4309806087, Nil);
Obj x4309806151 = makeCons(x4309805735, x4309806119);
Obj x4309806183 = makeCons(x4309805383, x4309806151);
Obj x4309806215 = makeCons(x4309805031, x4309806183);
Obj x4309806247 = makeCons(x4309804679, x4309806215);
Obj x4309806279 = makeCons(x4309804327, x4309806247);
Obj x4309806311 = makeCons(x4309803975, x4309806279);
Obj x4309806343 = makeCons(x4309803623, x4309806311);
Obj x4309806375 = makeCons(x4309803271, x4309806343);
Obj x4309806407 = makeCons(x4309835687, x4309806375);
Obj x4309806439 = makeCons(x4309835335, x4309806407);
Obj x4309806471 = makeCons(x4309834983, x4309806439);
Obj x4309806503 = makeCons(x4309834631, x4309806471);
Obj x4309806535 = makeCons(x4309834279, x4309806503);
Obj x4309806567 = makeCons(x4309833927, x4309806535);
Obj x4309806599 = makeCons(x4309833575, x4309806567);
Obj x4309806631 = makeCons(x4309833223, x4309806599);
Obj x4309806663 = primSet(co, __symbolTable[122], x4309806631);
Obj x4309798983 = primSet(co, __symbolTable[104], makeNative1(2, clofun7, 1, 0));
Obj x4309799591 = primSet(co, __symbolTable[102], makeNative1(2, clofun8, 1, 0));
Obj x4309800199 = primSet(co, __symbolTable[100], makeNative1(2, clofun9, 1, 0));
Obj x4309800935 = primSet(co, __symbolTable[98], makeNative1(3, clofun10, 2, 0));
Obj x4308444583 = primSet(co, __symbolTable[97], makeNative1(4, clofun20, 3, 0));
Obj x4308446663 = primSet(co, __symbolTable[81], makeNative1(4, clofun22, 2, 0));
Obj x4308370919 = primSet(co, __symbolTable[80], makeNative1(4, clofun24, 2, 0));
Obj x4310356807 = primSet(co, __symbolTable[79], makeNative1(2, clofun31, 1, 0));
Obj x4308470791 = primSet(co, __symbolTable[76], makeNative1(2, clofun41, 1, 0));
Obj x4308372423 = primSet(co, __symbolTable[71], makeNative1(4, clofun44, 2, 0));
Obj x4308372967 = primSet(co, __symbolTable[70], makeNative1(2, clofun45, 1, 0));
Obj x4309833767 = primSet(co, __symbolTable[69], makeNative1(3, clofun54, 2, 0));
Obj x4309799367 = primSet(co, __symbolTable[68], makeNative1(4, clofun57, 3, 0));
Obj x4308524423 = primSet(co, __symbolTable[63], makeNative1(3, clofun61, 2, 0));
Obj x4308463175 = primSet(co, __symbolTable[61], makeNative1(4, clofun65, 3, 0));
Obj x4308445063 = primSet(co, __symbolTable[60], makeNative1(5, clofun68, 4, 0));
Obj x4308446247 = primSet(co, __symbolTable[58], makeNative1(3, clofun70, 2, 0));
Obj x4308370471 = primSet(co, __symbolTable[57], makeNative1(2, clofun72, 1, 0));
Obj x4307974791 = primSet(co, __symbolTable[56], makeNative1(6, clofun74, 2, 0));
Obj x4307906663 = primSet(co, __symbolTable[54], makeNative1(4, clofun75, 2, 0));
Obj x4307907815 = primSet(co, __symbolTable[66], makeNative1(3, clofun76, 2, 0));
Obj x4307908775 = primSet(co, __symbolTable[94], makeNative1(4, clofun77, 2, 0));
Obj x4307861863 = primSet(co, __symbolTable[51], makeNative1(4, clofun78, 3, 0));
Obj x4307862151 = primSet(co, __symbolTable[50], makeNative1(3, clofun79, 2, 0));
Obj x4307863399 = primSet(co, __symbolTable[49], makeNative1(6, clofun81, 5, 0));
Obj x4307864647 = primSet(co, __symbolTable[45], makeNative1(6, clofun83, 5, 0));
Obj x4307653127 = primSet(co, __symbolTable[46], makeNative1(6, clofun96, 5, 0));
Obj x4307655495 = primSet(co, __symbolTable[43], makeNative1(6, clofun98, 5, 0));
Obj x4307646663 = primSet(co, __symbolTable[40], makeNative1(8, clofun100, 5, 0));
Obj x4307647111 = primSet(co, __symbolTable[42], makeNative1(3, clofun101, 2, 0));
Obj x4307647879 = primSet(co, __symbolTable[39], makeNative1(3, clofun102, 2, 0));
Obj x4307648167 = primSet(co, __symbolTable[38], makeNative1(3, clofun103, 2, 0));
Obj x4307648455 = primSet(co, __symbolTable[37], makeNative1(2, clofun104, 1, 0));
Obj x4307632359 = primSet(co, __symbolTable[36], makeNative1(2, clofun105, 1, 0));
Obj x4307632647 = primSet(co, __symbolTable[35], makeNative1(2, clofun106, 1, 0));
Obj x4307633895 = primSet(co, __symbolTable[34], makeNative1(3, clofun107, 1, 0));
Obj x4307635079 = primSet(co, __symbolTable[32], makeNative1(3, clofun108, 2, 0));
struct frame1 __curr = {
.fn = clofun144,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[31]), __symbolTable[30], makeNative1(2, clofun109, 1, 0));
return;
}
case 3:
{
Obj x4310511783= co->res;
struct frame1 __curr = {
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
Obj x4310581159= co->res;
struct frame1 __curr = {
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
Obj x4307672775 = primGenSym();
Obj globals = x4307672775;
Obj x4307672935 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
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
Obj x4307653511= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), stream);
return;
}
case 2:
{
Obj x4307653447= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
struct frame1 __curr = {
.fn = clofun143,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[23]), stream, bc, x4307653447);
return;
}
case 3:
{
Obj x4307653223= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = x4307653223;
R[1] = bc;
R[2] = stream;
struct frame1 __curr = {
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
Obj x4307652999= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = x4307652999;
R[1] = globals;
R[2] = bc;
struct frame1 __curr = {
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
Obj x4307652967= co->res;
Obj x4307652743 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
struct frame1 __curr = {
.fn = clofun143,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4307652743, x4307652967);
return;
}
case 6:
{
Obj x4307652903= co->res;
Obj x4307652743 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x4307652743;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
.fn = clofun143,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[2]), x4307652903);
return;
}
case 7:
{
Obj x4307652743= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x4307652743;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4307671495= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 2:
{
Obj x4307671271= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
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
Obj x4307671975= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 4:
{
Obj x4307671751= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
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
Obj x4307672295= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 6:
{
Obj x4307672071= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
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
Obj x4307670759= co->res;
Obj x4310577255 = R[1];
Obj sexp = R[2];
if (True == x4307670759) {
Obj x4307671143 = PRIM_CAR(sexp);
Obj x4307671175 = PRIM_EQ(__symbolTable[19], x4307671143);
if (True == x4307671175) {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun142,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4310577255, True);
return;
} else {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun142,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4310577255, False);
return;
}
} else {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun142,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4310577255, False);
return;
}
}
case 8:
{
Obj x4307669831= co->res;
Obj sexp = x4307669831;
Obj x4310577255 = makeNative1(2, clofun141, 1, 1, sexp);
R[1] = x4310577255;
R[2] = sexp;
struct frame1 __curr = {
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
Obj x4310577415 = R[1];
if (True == x4310577415) {
Obj x4307670279 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, x4307670279);
return;
} else {
Obj x4307670439 = makeCons(closureRef(R[0], 0), Nil);
coraReturn(co, x4307670439);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513415 = R[1];
Obj x4310513511 = makeNative1(1, clofun137, 0, 1, x4310513415);
Obj x4307687975 = PRIM_ISCONS(x4310513415);
if (True == x4307687975) {
Obj x4307688295 = PRIM_CAR(x4310513415);
Obj x4307688327 = PRIM_EQ(__symbolTable[18], x4307688295);
if (True == x4307688327) {
Obj x4307688551 = PRIM_CDR(x4310513415);
Obj more = x4307688551;
Obj x4307688839 = makeCons(__symbolTable[18], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x4307688839, makeNative1(2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513511);
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
coraCall4(co, globalRef(__symbolTable[17]), body, Nil, Nil, makeNative1(3, clofun138, 2, 0));
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
Obj x4310514023 = makeNative1(1, clofun134, 0, 1, closureRef(R[0], 0));
Obj x4307686343 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307686343) {
Obj x4307686695 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307686727 = PRIM_EQ(__symbolTable[19], x4307686695);
if (True == x4307686727) {
Obj x4307686983 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307686983;
Obj x4307687239 = makeCons(__symbolTable[19], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x4307687239, makeNative1(2, clofun136, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310514023);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514023);
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
coraCall4(co, globalRef(__symbolTable[17]), body, Nil, Nil, makeNative1(3, clofun135, 2, 0));
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
Obj x4307685703 = makeCons(closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), x4307685703, Nil, Nil, makeNative1(3, clofun133, 2, 0));
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
struct frame1 __curr = {
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
Obj x4307686087= co->res;
Obj x4307686119 = makeCons(__symbolTable[19], x4307686087);
coraReturn(co, x4307686119);
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
Obj x4310577479 = R[1];
Obj x4310577543 = R[2];
Obj x4310578279 = makeNative1(2, clofun130, 0, 2, x4310577479, x4310577543);
Obj x4307864711 = PRIM_ISCONS(x4310577479);
if (True == x4307864711) {
Obj x4307694375 = PRIM_CAR(x4310577479);
Obj x4307694407 = PRIM_EQ(__symbolTable[18], x4307694375);
if (True == x4307694407) {
Obj x4307695239 = PRIM_CDR(x4310577479);
Obj x4307695271 = PRIM_ISCONS(x4307695239);
if (True == x4307695271) {
Obj x4307695527 = PRIM_CDR(x4310577479);
Obj x4307695559 = PRIM_CAR(x4307695527);
Obj name = x4307695559;
Obj x4307695783 = PRIM_CDR(x4310577479);
Obj x4307695815 = PRIM_CDR(x4307695783);
Obj more = x4307695815;
R[1] = name;
struct frame1 __curr = {
.fn = clofun131,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, x4310577543);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578279);
return;
}
}
case 1:
{
Obj x4307696135= co->res;
Obj name = R[1];
Obj x4307696167 = makeCons(name, x4307696135);
Obj x4307696199 = makeCons(__symbolTable[18], x4307696167);
coraReturn(co, x4307696199);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310579463 = makeNative1(2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4307909063 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307909063) {
Obj x4307909575 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307909607 = PRIM_ISCONS(x4307909575);
if (True == x4307909607) {
Obj x4307910215 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307910247 = PRIM_CAR(x4307910215);
Obj x4307910279 = PRIM_EQ(__symbolTable[21], x4307910247);
if (True == x4307910279) {
Obj x4307861575 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307861607 = PRIM_CDR(x4307861575);
Obj x4307861639 = PRIM_ISCONS(x4307861607);
if (True == x4307861639) {
Obj x4307862215 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307862247 = PRIM_CDR(x4307862215);
Obj x4307862279 = PRIM_CAR(x4307862247);
Obj pkg = x4307862279;
Obj x4307862887 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307862919 = PRIM_CDR(x4307862887);
Obj x4307863015 = PRIM_CDR(x4307862919);
Obj x4307863047 = PRIM_EQ(Nil, x4307863015);
if (True == x4307863047) {
Obj x4307863335 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307863335;
Obj x4307863655 = makeCons(pkg, Nil);
Obj x4307863687 = makeCons(__symbolTable[21], x4307863655);
R[1] = x4307863687;
struct frame1 __curr = {
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
coraCall0(co, x4310579463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579463);
return;
}
}
case 1:
{
Obj x4307863847= co->res;
Obj x4307863687 = R[1];
Obj x4307863911 = makeCons(x4307863687, x4307863847);
coraReturn(co, x4307863911);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310581031 = makeNative1(1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4307975175 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307975175) {
Obj x4307975719 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307975751 = PRIM_ISCONS(x4307975719);
if (True == x4307975751) {
Obj x4307906695 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307906727 = PRIM_CAR(x4307906695);
Obj x4307906823 = PRIM_EQ(__symbolTable[20], x4307906727);
if (True == x4307906823) {
Obj x4307907111 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307907175 = PRIM_CDR(x4307907111);
Obj symbols = x4307907175;
Obj x4307907431 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307907431;
Obj x4307908039 = makeCons(__symbolTable[20], symbols);
R[1] = x4307908039;
struct frame1 __curr = {
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
coraCall0(co, x4310581031);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581031);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581031);
return;
}
}
case 1:
{
Obj x4307908135= co->res;
Obj x4307908039 = R[1];
Obj x4307908167 = makeCons(x4307908039, x4307908135);
coraReturn(co, x4307908167);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512167 = makeNative1(1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x4307973127 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307973127) {
Obj x4307973639 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307973671 = PRIM_EQ(__symbolTable[19], x4307973639);
if (True == x4307973671) {
Obj x4307974279 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307974279;
struct frame1 __curr = {
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
coraCall0(co, x4310512167);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512167);
return;
}
}
case 1:
{
Obj x4307974663= co->res;
Obj x4307974695 = makeCons(__symbolTable[19], x4307974663);
coraReturn(co, x4307974695);
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
Obj x4310580199 = R[1];
Obj x4310580231 = R[2];
Obj x4310580327 = R[3];
Obj x4310580423 = R[4];
Obj x4308460935 = PRIM_EQ(Nil, x4310580199);
if (True == x4308460935) {
R[1] = x4310580327;
R[2] = x4310580423;
struct frame1 __curr = {
.fn = clofun126,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x4310580231);
return;
} else {
Obj x4310511975 = makeNative1(1, clofun125, 0, 4, x4310580199, x4310580231, x4310580327, x4310580423);
Obj x4308372743 = PRIM_ISCONS(x4310580199);
if (True == x4308372743) {
Obj x4308373351 = PRIM_CAR(x4310580199);
Obj x4308373383 = PRIM_ISCONS(x4308373351);
if (True == x4308373383) {
Obj x4308300295 = PRIM_CAR(x4310580199);
Obj x4308300327 = PRIM_CAR(x4308300295);
Obj x4308300359 = PRIM_EQ(__symbolTable[10], x4308300327);
if (True == x4308300359) {
Obj x4308300967 = PRIM_CAR(x4310580199);
Obj x4308301191 = PRIM_CDR(x4308300967);
Obj exp = x4308301191;
Obj x4308301447 = PRIM_CDR(x4310580199);
Obj more = x4308301447;
Obj x4308302023 = makeCons(__symbolTable[19], exp);
Obj x4308302055 = makeCons(x4308302023, x4310580231);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4308302055, x4310580327, x4310580423);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310511975);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511975);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511975);
return;
}
}
}
case 1:
{
Obj x4308461767= co->res;
Obj x4310580423 = R[1];
Obj x4308461351 = R[2];
co->ctx.sp = R;
coraCall2(co, x4310580423, x4308461351, x4308461767);
return;
}
case 2:
{
Obj x4308461351= co->res;
Obj x4310580327 = R[1];
Obj x4310580423 = R[2];
R[1] = x4310580423;
R[2] = x4308461351;
struct frame1 __curr = {
.fn = clofun126,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x4310580327);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513159 = makeNative1(1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4308445991 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308445991) {
Obj x4308446631 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308446695 = PRIM_ISCONS(x4308446631);
if (True == x4308446695) {
Obj x4308369511 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308369543 = PRIM_CAR(x4308369511);
Obj x4308369927 = PRIM_EQ(__symbolTable[12], x4308369543);
if (True == x4308369927) {
Obj x4308370503 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308370567 = PRIM_CDR(x4308370503);
Obj exp = x4308370567;
Obj x4308371047 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4308371047;
Obj x4308371591 = makeCons(__symbolTable[11], exp);
Obj x4308371783 = makeCons(x4308371591, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4308371783, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310513159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513159);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308462695 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308462695) {
Obj x4308463239 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = x4308463239;
Obj x4308443143 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4308443143;
Obj x4308444423 = makeCons(exp, Nil);
Obj x4308444455 = makeCons(__symbolTable[14], x4308444423);
Obj x4308444487 = makeCons(x4308444455, Nil);
Obj x4308444519 = makeCons(__symbolTable[15], x4308444487);
Obj x4308444999 = makeCons(__symbolTable[13], Nil);
Obj x4308445031 = makeCons(x4308444999, Nil);
Obj x4308445095 = makeCons(x4308444519, x4308445031);
Obj x4308445127 = makeCons(__symbolTable[16], x4308445095);
Obj x4308445191 = makeCons(x4308445127, closureRef(R[0], 1));
Obj x4308445607 = makeCons(exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4308445191, x4308445607, closureRef(R[0], 3));
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
Obj x4310581095 = R[1];
Obj x4310581191 = makeNative1(1, clofun122, 0, 1, x4310581095);
Obj x4308468167 = PRIM_ISCONS(x4310581095);
if (True == x4308468167) {
Obj x4308468903 = PRIM_CAR(x4310581095);
Obj x4308468935 = PRIM_EQ(__symbolTable[18], x4308468903);
if (True == x4308468935) {
Obj x4308469735 = PRIM_CDR(x4310581095);
Obj x4308469767 = PRIM_ISCONS(x4308469735);
if (True == x4308469767) {
Obj x4308470535 = PRIM_CDR(x4310581095);
Obj x4308470567 = PRIM_CAR(x4308470535);
Obj x4308471559 = PRIM_CDR(x4310581095);
Obj x4308471591 = PRIM_CDR(x4308471559);
Obj remain = x4308471591;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310581191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310581191);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512103 = makeNative1(1, clofun121, 0, 1, closureRef(R[0], 0));
Obj x4308523975 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308523975) {
Obj x4308524487 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308524519 = PRIM_EQ(__symbolTable[19], x4308524487);
if (True == x4308524519) {
Obj x4308524839 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4308524839;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512103);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512551 = makeNative1(2, clofun120, 0, 1, closureRef(R[0], 0));
Obj x4309711399 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309711399) {
Obj x4309711815 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309712231 = PRIM_ISCONS(x4309711815);
if (True == x4309712231) {
Obj x4309712871 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308521223 = PRIM_CAR(x4309712871);
Obj x4308521255 = PRIM_EQ(__symbolTable[20], x4308521223);
if (True == x4308521255) {
Obj x4308521991 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308522023 = PRIM_CDR(x4308521991);
Obj x4308522631 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4308522631;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512551);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512551);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512551);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578791 = makeNative1(1, clofun119, 0, 0);
Obj x4309796455 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309796455) {
Obj x4309797223 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309797319 = PRIM_ISCONS(x4309797223);
if (True == x4309797319) {
Obj x4309798247 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309798279 = PRIM_CAR(x4309798247);
Obj x4309798375 = PRIM_EQ(__symbolTable[21], x4309798279);
if (True == x4309798375) {
Obj x4309750855 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309750951 = PRIM_CDR(x4309750855);
Obj x4309751175 = PRIM_ISCONS(x4309750951);
if (True == x4309751175) {
Obj x4309752391 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309752423 = PRIM_CDR(x4309752391);
Obj x4309752551 = PRIM_CAR(x4309752423);
Obj pkg = x4309752551;
Obj x4309753287 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309753639 = PRIM_CDR(x4309753287);
Obj x4309753671 = PRIM_CDR(x4309753639);
Obj x4309753703 = PRIM_EQ(Nil, x4309753671);
if (True == x4309753703) {
Obj x4309709095 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4309709095;
R[1] = remain;
struct frame1 __curr = {
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
coraCall0(co, x4310578791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578791);
return;
}
}
case 1:
{
Obj x4309709575= co->res;
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
struct frame1 __curr = {
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
Obj x4309802151= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), makeNative1(2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj x4309802087= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun118,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[25]), to, globals, x4309802087);
return;
}
case 3:
{
Obj x4309801543= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
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
Obj x4309801095= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
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
Obj x4309800071= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun118,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[27]), makeNative1(2, clofun116, 1, 1, to), bc);
return;
}
case 6:
{
Obj x4309799719= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun118,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("#include \"runtime1.h\"\n\n"));
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
Obj x4309800743 = PRIM_CAR(group);
struct frame1 __curr = {
.fn = clofun116,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), closureRef(R[0], 0), x4309800743);
return;
}
case 1:
{
Obj x4309800839= co->res;
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
struct frame1 __curr = {
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
Obj x4309806823= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj x4309805799= co->res;
Obj to = R[1];
R[1] = to;
struct frame1 __curr = {
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
Obj x4309805191= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
struct frame1 __curr = {
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
Obj x4309804775= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
struct frame1 __curr = {
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
Obj x4309833991= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
struct frame1 __curr = {
.fn = clofun115,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun114, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 6:
{
Obj x4309833415= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
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
Obj x4309833351= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun115,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), to, x4309833351);
return;
}
case 8:
{
Obj x4309832871= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
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
Obj x4309832519= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
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
Obj x4309831975= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4309804167= co->res;
Obj acc = R[1];
Obj x4309804743 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4309804743);
return;
}
case 2:
{
Obj x4309803751= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4309803719= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun114,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), x4309803719);
return;
}
case 4:
{
Obj x4309803111= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4309835207= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
struct frame1 __curr = {
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
Obj x4309834823= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
struct frame1 __curr = {
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
Obj x4310579527 = PRIM_CAR(group);
Obj label = x4310579527;
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
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
Obj x4310359335= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n\n"));
return;
}
case 2:
{
Obj x4310359047= co->res;
Obj to = R[1];
R[1] = to;
struct frame1 __curr = {
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
Obj x4310358983= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
struct frame1 __curr = {
.fn = clofun113,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), x4310358983);
return;
}
case 4:
{
Obj x4310515175= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame1 __curr = {
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
Obj x4310514695= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame1 __curr = {
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
Obj x4310514343= co->res;
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
struct frame1 __curr = {
.fn = clofun113,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, globals, label, params, to, first_45stmt);
return;
}
case 7:
{
Obj x4310514055= co->res;
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
struct frame1 __curr = {
.fn = clofun113,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[45]), 5, globals, label, Nil, to, params);
return;
}
case 8:
{
Obj x4310513287= co->res;
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
struct frame1 __curr = {
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
Obj x4310512711= co->res;
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
struct frame1 __curr = {
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
Obj x4310512359= co->res;
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
struct frame1 __curr = {
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
Obj x4310580999= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = x4310580999;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
struct frame1 __curr = {
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
Obj x4310580583= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = x4310580583;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
struct frame1 __curr = {
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
Obj x4310579879= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = x4310579879;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4310358503= co->res;
Obj acc = R[1];
Obj x4310358695 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4310358695);
return;
}
case 2:
{
Obj x4310358119= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4310358055= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun112,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[40]), 5, closureRef(R[0], 0), closureRef(R[0], 1), x4310358055, closureRef(R[0], 3), cont);
return;
}
case 4:
{
Obj x4310357607= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame1 __curr = {
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
Obj x4310357063= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame1 __curr = {
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
Obj x4310356775= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame1 __curr = {
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
Obj x4310579591 = R[1];
Obj x4310579623 = R[2];
Obj x4307571271 = PRIM_EQ(Nil, x4310579623);
if (True == x4307571271) {
coraReturn(co, Nil);
return;
} else {
Obj x4307571431 = PRIM_ISCONS(x4310579623);
if (True == x4307571431) {
Obj x4307571591 = PRIM_CAR(x4310579623);
Obj x = x4307571591;
Obj x4307571751 = PRIM_CDR(x4310579623);
Obj y = x4307571751;
R[1] = x4310579591;
R[2] = y;
struct frame1 __curr = {
.fn = clofun111,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4310579591, x);
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
Obj x4307571911= co->res;
Obj x4310579591 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), x4310579591, y);
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
struct frame1 __curr = {
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
Obj x4307570887= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[34]), x4307570887);
return;
}
case 2:
{
Obj x4307570855= co->res;
struct frame1 __curr = {
.fn = clofun110,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[35]), x4307570855);
return;
}
case 3:
{
Obj x4307570823= co->res;
struct frame1 __curr = {
.fn = clofun110,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[36]), x4307570823);
return;
}
case 4:
{
Obj x4307570791= co->res;
struct frame1 __curr = {
.fn = clofun110,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[37]), x4307570791);
return;
}
case 5:
{
Obj x4307570759= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun110,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4307570759, exp);
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
struct frame1 __curr = {
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
Obj x4307635591= co->res;
Obj obj = R[1];
Obj fns = x4307635591;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), obj, fns);
return;
}
case 2:
{
Obj x4307635431= co->res;
Obj exp = R[1];
Obj obj = x4307635431;
R[1] = obj;
struct frame1 __curr = {
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
Obj x4310577319 = R[1];
Obj x4310577447 = R[2];
Obj x4307634247 = PRIM_EQ(Nil, x4310577447);
if (True == x4307634247) {
coraReturn(co, x4310577319);
return;
} else {
Obj x4307634407 = PRIM_ISCONS(x4310577447);
if (True == x4307634407) {
Obj x4307634567 = PRIM_CAR(x4310577447);
Obj hd = x4307634567;
Obj x4307634727 = PRIM_CDR(x4310577447);
Obj more = x4307634727;
Obj x4307634951 = makeCons(x4310577319, Nil);
Obj x4307634983 = makeCons(hd, x4307634951);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), x4307634983, more);
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
struct frame1 __curr = {
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
Obj x4307633799= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj x4307633639= co->res;
Obj v = R[1];
Obj e2 = x4307633639;
R[1] = v;
struct frame1 __curr = {
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
Obj x4307633479= co->res;
Obj v = R[1];
Obj e1 = x4307633479;
R[1] = v;
struct frame1 __curr = {
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
Obj x4307633319= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
struct frame1 __curr = {
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
Obj x4307633159= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
struct frame1 __curr = {
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
Obj x4307632999= co->res;
Obj exp = R[1];
Obj v = x4307632999;
R[1] = exp;
R[2] = v;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4307647783= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(")"));
return;
}
case 2:
{
Obj x4307647623= co->res;
Obj w = R[1];
R[1] = w;
struct frame1 __curr = {
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
Obj x4307647463= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4307647015= co->res;
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
Obj x4310577863 = R[1];
Obj x4310577895 = R[2];
Obj x4310577927 = R[3];
Obj x4310577959 = R[4];
Obj x4310577991 = R[5];
Obj x4310578663 = makeNative1(1, clofun99, 0, 0);
Obj x4307656039 = PRIM_ISCONS(x4310577991);
if (True == x4307656039) {
Obj x4307656263 = PRIM_CAR(x4310577991);
Obj x4307656295 = PRIM_EQ(__symbolTable[62], x4307656263);
if (True == x4307656295) {
Obj x4307656519 = PRIM_CDR(x4310577991);
Obj x4307656551 = PRIM_ISCONS(x4307656519);
if (True == x4307656551) {
Obj x4307644487 = PRIM_CDR(x4310577991);
Obj x4307644519 = PRIM_CAR(x4307644487);
Obj var = x4307644519;
Obj x4307644807 = PRIM_CDR(x4310577991);
Obj x4307644839 = PRIM_CDR(x4307644807);
Obj x4307644871 = PRIM_ISCONS(x4307644839);
if (True == x4307644871) {
Obj x4307645159 = PRIM_CDR(x4310577991);
Obj x4307645191 = PRIM_CDR(x4307645159);
Obj x4307645223 = PRIM_CAR(x4307645191);
Obj body = x4307645223;
Obj x4307645511 = PRIM_CDR(x4310577991);
Obj x4307645543 = PRIM_CDR(x4307645511);
Obj x4307645575 = PRIM_CDR(x4307645543);
Obj fvs = x4307645575;
R[1] = var;
R[2] = fvs;
R[3] = x4310577863;
R[4] = x4310577895;
R[5] = x4310577927;
R[6] = x4310577959;
R[7] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), x4310577959, makeCString("Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578663);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578663);
return;
}
}
case 1:
{
Obj x4307646311= co->res;
Obj x4310577863 = R[1];
Obj x4310577895 = R[2];
Obj x4310577927 = R[3];
Obj x4310577959 = R[4];
Obj body = R[5];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[46]), 5, x4310577863, x4310577895, x4310577927, x4310577959, body);
return;
}
case 2:
{
Obj x4307646151= co->res;
Obj fvs = R[1];
Obj x4310577863 = R[2];
Obj x4310577895 = R[3];
Obj x4310577927 = R[4];
Obj x4310577959 = R[5];
Obj body = R[6];
R[1] = x4310577863;
R[2] = x4310577895;
R[3] = x4310577927;
R[4] = x4310577959;
R[5] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[45]), 5, x4310577863, x4310577895, x4310577927, x4310577959, fvs);
return;
}
case 3:
{
Obj x4307645991= co->res;
Obj fvs = R[1];
Obj x4310577863 = R[2];
Obj x4310577895 = R[3];
Obj x4310577927 = R[4];
Obj x4310577959 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = x4310577863;
R[3] = x4310577895;
R[4] = x4310577927;
R[5] = x4310577959;
R[6] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), x4310577959, makeCString("= co->res;\n"));
return;
}
case 4:
{
Obj x4307645735= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj x4310577863 = R[3];
Obj x4310577895 = R[4];
Obj x4310577927 = R[5];
Obj x4310577959 = R[6];
Obj body = R[7];
Obj x4307645959 = PRIM_CAR(var);
R[1] = fvs;
R[2] = x4310577863;
R[3] = x4310577895;
R[4] = x4310577927;
R[5] = x4310577959;
R[6] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), x4310577959, x4307645959);
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
Obj x4307653479 = primGenSym();
Obj generate_45inst_45list_45h = x4307653479;
Obj x4307655303 = primSet(co, generate_45inst_45list_45h, makeNative1(2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
struct frame1 __curr = {
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
Obj x4307655463= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, x4307655463, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4307653831 = PRIM_EQ(Nil, x);
if (True == x4307653831) {
coraReturn(co, Nil);
return;
} else {
Obj x4307653991 = PRIM_ISCONS(x);
if (True == x4307653991) {
Obj x4307654151 = PRIM_CAR(x);
Obj a = x4307654151;
Obj x4307654311 = PRIM_CDR(x);
Obj b = x4307654311;
R[1] = b;
struct frame1 __curr = {
.fn = clofun97,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), a);
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
Obj x4307655047= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x4307655047, b);
return;
}
case 2:
{
Obj x4307654887= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
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
Obj x4307655207= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x4307655207, b);
return;
}
case 4:
{
Obj x4307654759= co->res;
Obj b = R[1];
Obj x4307654791 = primNot(x4307654759);
if (True == x4307654791) {
R[1] = b;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4307654471= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
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
Obj x4307694055 = primGenSym();
Obj generate_45inst_45h = x4307694055;
Obj x4307652935 = primSet(co, generate_45inst_45h, makeNative1(3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
struct frame1 __curr = {
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
Obj x4307653095= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, x4307653095, x1, env1);
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
Obj x4307695175 = primIsSymbol(x2);
if (True == x4307695175) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj x4310577159 = makeNative1(2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj x4307670311 = PRIM_ISCONS(x2);
if (True == x4307670311) {
Obj x4307670599 = PRIM_CAR(x2);
Obj x4307670631 = PRIM_EQ(__symbolTable[93], x4307670599);
if (True == x4307670631) {
Obj x4307670887 = PRIM_CDR(x2);
Obj x4307670919 = PRIM_ISCONS(x4307670887);
if (True == x4307670919) {
Obj x4307671207 = PRIM_CDR(x2);
Obj x4307671239 = PRIM_CAR(x4307671207);
Obj x = x4307671239;
Obj x4307671591 = PRIM_CDR(x2);
Obj x4307671623 = PRIM_CDR(x4307671591);
Obj x4307671655 = PRIM_EQ(Nil, x4307671623);
if (True == x4307671655) {
R[1] = x;
struct frame1 __curr = {
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
coraCall0(co, x4310577159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577159);
return;
}
}
}
case 1:
{
Obj x4307673063= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("])"));
return;
}
case 2:
{
Obj x4307673031= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), x4307673031);
return;
}
case 3:
{
Obj x4307671879= co->res;
Obj x = R[1];
struct frame1 __curr = {
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
Obj x4310577575 = makeNative1(2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj x4307688423 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == x4307688423) {
Obj x4307688711 = PRIM_CAR(closureRef(R[0], 4));
Obj x4307688775 = PRIM_EQ(__symbolTable[77], x4307688711);
if (True == x4307688775) {
Obj x4307688999 = PRIM_CDR(closureRef(R[0], 4));
Obj x4307689031 = PRIM_ISCONS(x4307688999);
if (True == x4307689031) {
Obj x4307689319 = PRIM_CDR(closureRef(R[0], 4));
Obj x4307689383 = PRIM_CAR(x4307689319);
Obj idx = x4307689383;
Obj x4307669223 = PRIM_CDR(closureRef(R[0], 4));
Obj x4307669287 = PRIM_CDR(x4307669223);
Obj x4307669319 = PRIM_EQ(Nil, x4307669287);
if (True == x4307669319) {
R[1] = idx;
struct frame1 __curr = {
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
coraCall0(co, x4310577575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577575);
return;
}
}
case 1:
{
Obj x4307669703= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj x4307669543= co->res;
Obj idx = R[1];
struct frame1 __curr = {
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
Obj x4310578151 = makeNative1(4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4307695847 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x4307695847) {
Obj x4307696071 = PRIM_CAR(closureRef(R[0], 3));
Obj x4307696103 = PRIM_EQ(__symbolTable[96], x4307696071);
if (True == x4307696103) {
Obj x4307696327 = PRIM_CDR(closureRef(R[0], 3));
Obj x4307696359 = PRIM_ISCONS(x4307696327);
if (True == x4307696359) {
Obj x4307696583 = PRIM_CDR(closureRef(R[0], 3));
Obj x4307696615 = PRIM_CAR(x4307696583);
Obj x = x4307696615;
Obj x4307696935 = PRIM_CDR(closureRef(R[0], 3));
Obj x4307696999 = PRIM_CDR(x4307696935);
Obj x4307697031 = PRIM_EQ(Nil, x4307696999);
if (True == x4307697031) {
Obj x4307697223 = primIsSymbol(x);
if (True == x4307697223) {
R[1] = x;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
coraCall0(co, x4310578151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578151);
return;
}
}
case 1:
{
Obj x4307685447= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("]"));
return;
}
case 2:
{
Obj x4307685415= co->res;
struct frame1 __curr = {
.fn = clofun93,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x4307685415);
return;
}
case 3:
{
Obj x4307697415= co->res;
Obj x = R[1];
struct frame1 __curr = {
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
Obj x4307686151= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 5:
{
Obj x4307685927= co->res;
Obj x = R[1];
struct frame1 __curr = {
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
Obj x4307686919= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("\")"));
return;
}
case 7:
{
Obj x4307686855= co->res;
struct frame1 __curr = {
.fn = clofun93,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x4307686855);
return;
}
case 8:
{
Obj x4307686631= co->res;
Obj x = R[1];
struct frame1 __curr = {
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
Obj x4307685735= co->res;
Obj x = R[1];
if (True == x4307685735) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun93,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("MAKE_NUMBER("));
return;
} else {
Obj x4307686407 = primIsString(x);
if (True == x4307686407) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun93,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("makeCString(\""));
return;
} else {
Obj x4307687207 = PRIM_EQ(x, Nil);
if (True == x4307687207) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("Nil"));
return;
} else {
Obj x4307687463 = PRIM_EQ(x, True);
if (True == x4307687463) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("True"));
return;
} else {
Obj x4307687719 = PRIM_EQ(x, False);
if (True == x4307687719) {
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
Obj x4310578823 = makeNative1(3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x4307907335 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4307907335) {
Obj x4307907847 = PRIM_CAR(closureRef(R[0], 2));
Obj x4307907879 = PRIM_EQ(__symbolTable[86], x4307907847);
if (True == x4307907879) {
Obj x4307908199 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307908231 = PRIM_ISCONS(x4307908199);
if (True == x4307908231) {
Obj x4307908647 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307908679 = PRIM_CAR(x4307908647);
Obj a = x4307908679;
Obj x4307909191 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307909223 = PRIM_CDR(x4307909191);
Obj x4307909287 = PRIM_ISCONS(x4307909223);
if (True == x4307909287) {
Obj x4307909799 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307909831 = PRIM_CDR(x4307909799);
Obj x4307909863 = PRIM_CAR(x4307909831);
Obj b = x4307909863;
Obj x4307910375 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307910407 = PRIM_CDR(x4307910375);
Obj x4307910439 = PRIM_CDR(x4307910407);
Obj x4307910471 = PRIM_ISCONS(x4307910439);
if (True == x4307910471) {
Obj x4307861767 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307861799 = PRIM_CDR(x4307861767);
Obj x4307861895 = PRIM_CDR(x4307861799);
Obj x4307861927 = PRIM_CAR(x4307861895);
Obj c = x4307861927;
Obj x4307862375 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307862407 = PRIM_CDR(x4307862375);
Obj x4307862439 = PRIM_CDR(x4307862407);
Obj x4307862471 = PRIM_CDR(x4307862439);
Obj x4307862503 = PRIM_EQ(Nil, x4307862471);
if (True == x4307862503) {
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 14,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578823);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578823);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578823);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578823);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578823);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578823);
return;
}
}
case 1:
{
Obj x4307864167= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x4307864295 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x4307864167, c, x4307864295);
return;
}
case 2:
{
Obj x4307863975= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
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
Obj x4307863783= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
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
Obj x4307863751= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307863751, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj x4307863527= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
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
Obj x4307863303= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
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
Obj x4307863079= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
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
Obj x4307695207= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x4307695303 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x4307695207, c, x4307695303);
return;
}
case 9:
{
Obj x4307694823= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 10:
{
Obj x4307694343= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 11:
{
Obj x4307694023= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307694023, b, closureRef(R[0], 5));
return;
}
case 12:
{
Obj x4307864743= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 13:
{
Obj x4307864487= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(" = "));
return;
}
case 14:
{
Obj x4307862695= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
Obj idx = x4307862695;
Obj x4307862983 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x4307862983) {
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("Obj "));
return;
} else {
Nil;
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun92,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), a);
return;
}
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310579559 = makeNative1(4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4308302407 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308302407) {
Obj x4308303079 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308303111 = PRIM_ISCONS(x4308303079);
if (True == x4308303111) {
Obj x4308303815 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308303847 = PRIM_CAR(x4308303815);
Obj x4307972103 = PRIM_EQ(__symbolTable[90], x4308303847);
if (True == x4307972103) {
Obj x4307972615 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307972679 = PRIM_CDR(x4307972615);
Obj x4307972711 = PRIM_ISCONS(x4307972679);
if (True == x4307972711) {
Obj x4307973191 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307973223 = PRIM_CDR(x4307973191);
Obj x4307973447 = PRIM_CAR(x4307973223);
Obj f = x4307973447;
Obj x4307974119 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307974151 = PRIM_CDR(x4307974119);
Obj x4307974183 = PRIM_CDR(x4307974151);
Obj x4307974215 = PRIM_EQ(Nil, x4307974183);
if (True == x4307974215) {
Obj x4307974375 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x4307974375;
R[1] = f;
R[2] = args;
struct frame1 __curr = {
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
coraCall0(co, x4310579559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579559);
return;
}
}
case 1:
{
Obj x4307975655= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj x4307975271= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun91,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 3:
{
Obj x4307976071= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 4:
{
Obj x4307975815= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun91,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 5:
{
Obj x4307974919= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4307975143 = PRIM_EQ(f, __symbolTable[121]);
if (True == x4307975143) {
R[1] = args;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4307974887= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
struct frame1 __curr = {
.fn = clofun91,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x4307974887);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580071 = makeNative1(5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4308444871 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4308444871) {
Obj x4308445255 = PRIM_CAR(closureRef(R[0], 2));
Obj x4308445287 = PRIM_EQ(__symbolTable[87], x4308445255);
if (True == x4308445287) {
Obj x4308445799 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308445831 = PRIM_ISCONS(x4308445799);
if (True == x4308445831) {
Obj x4308446343 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308446375 = PRIM_CAR(x4308446343);
Obj a = x4308446375;
Obj x4308446855 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308446951 = PRIM_CDR(x4308446855);
Obj x4308446983 = PRIM_ISCONS(x4308446951);
if (True == x4308446983) {
Obj x4308369575 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308369735 = PRIM_CDR(x4308369575);
Obj x4308369895 = PRIM_CAR(x4308369735);
Obj b = x4308369895;
Obj x4308370791 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308370823 = PRIM_CDR(x4308370791);
Obj x4308370855 = PRIM_CDR(x4308370823);
Obj x4308370887 = PRIM_ISCONS(x4308370855);
if (True == x4308370887) {
Obj x4308371431 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308371495 = PRIM_CDR(x4308371431);
Obj x4308371527 = PRIM_CDR(x4308371495);
Obj x4308371559 = PRIM_CAR(x4308371527);
Obj c = x4308371559;
Obj x4308372455 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308372615 = PRIM_CDR(x4308372455);
Obj x4308372647 = PRIM_CDR(x4308372615);
Obj x4308372679 = PRIM_CDR(x4308372647);
Obj x4308372711 = PRIM_EQ(Nil, x4308372679);
if (True == x4308372711) {
R[1] = a;
R[2] = b;
R[3] = c;
struct frame1 __curr = {
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
coraCall0(co, x4310580071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580071);
return;
}
}
case 1:
{
Obj x4308301351= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("}\n"));
return;
}
case 2:
{
Obj x4308301287= co->res;
Obj c = R[1];
struct frame1 __curr = {
.fn = clofun90,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4308301287, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4308300871= co->res;
Obj c = R[1];
R[1] = c;
struct frame1 __curr = {
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
Obj x4308300615= co->res;
Obj c = R[1];
R[1] = c;
struct frame1 __curr = {
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
Obj x4308300583= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
struct frame1 __curr = {
.fn = clofun90,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4308300583, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj x4308300103= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
struct frame1 __curr = {
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
Obj x4308373479= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
struct frame1 __curr = {
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
Obj x4308373447= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
struct frame1 __curr = {
.fn = clofun90,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4308373447, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x4308373191= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
struct frame1 __curr = {
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
Obj x4310580903 = makeNative1(3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj x4308524007 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308524007) {
Obj x4308524391 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308524455 = PRIM_EQ(__symbolTable[78], x4308524391);
if (True == x4308524455) {
Obj x4308524775 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308524807 = PRIM_ISCONS(x4308524775);
if (True == x4308524807) {
Obj x4308467815 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308467847 = PRIM_CAR(x4308467815);
Obj label = x4308467847;
Obj x4308468391 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308468519 = PRIM_CDR(x4308468391);
Obj x4308468551 = PRIM_ISCONS(x4308468519);
if (True == x4308468551) {
Obj x4308469159 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308469319 = PRIM_CDR(x4308469159);
Obj x4308469351 = PRIM_CAR(x4308469319);
Obj nargs = x4308469351;
Obj x4308470087 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308470279 = PRIM_CDR(x4308470087);
Obj x4308470311 = PRIM_CDR(x4308470279);
Obj x4308470439 = PRIM_ISCONS(x4308470311);
if (True == x4308470439) {
Obj x4308471079 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308471111 = PRIM_CDR(x4308471079);
Obj x4308471143 = PRIM_CDR(x4308471111);
Obj x4308471271 = PRIM_CAR(x4308471143);
Obj nframe = x4308471271;
Obj x4308459815 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308459847 = PRIM_CDR(x4308459815);
Obj x4308459879 = PRIM_CDR(x4308459847);
Obj x4308460039 = PRIM_CDR(x4308459879);
Obj frees = x4308460039;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
struct frame1 __curr = {
.fn = clofun89,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("makeNative1("));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580903);
return;
}
}
case 1:
{
Obj x4308443719= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj x4308443431= co->res;
Obj frees = R[1];
struct frame1 __curr = {
.fn = clofun89,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees);
return;
}
case 3:
{
Obj x4308463559= co->res;
Obj frees = R[1];
Obj x4308463591 = primNot(x4308463559);
if (True == x4308463591) {
R[1] = frees;
struct frame1 __curr = {
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
Obj x4308462887= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
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
Obj x4308462791= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun89,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x4308462791);
return;
}
case 6:
{
Obj x4308462439= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
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
Obj x4308462215= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
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
Obj x4308461799= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
struct frame1 __curr = {
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
Obj x4308461287= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
struct frame1 __curr = {
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
Obj x4308460999= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
struct frame1 __curr = {
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
Obj x4308460647= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
struct frame1 __curr = {
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
Obj x4308460391= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
struct frame1 __curr = {
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
Obj x4310511847 = makeNative1(2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x4309753735 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4309753735) {
Obj x4309709191 = PRIM_CAR(closureRef(R[0], 2));
Obj x4309709223 = PRIM_EQ(__symbolTable[85], x4309709191);
if (True == x4309709223) {
Obj x4309709735 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309709767 = PRIM_ISCONS(x4309709735);
if (True == x4309709767) {
Obj x4309710407 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309710439 = PRIM_CAR(x4309710407);
Obj a = x4309710439;
Obj x4309711303 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309711335 = PRIM_CDR(x4309711303);
Obj x4309711367 = PRIM_ISCONS(x4309711335);
if (True == x4309711367) {
Obj x4309711847 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309711943 = PRIM_CDR(x4309711847);
Obj x4309711975 = PRIM_CAR(x4309711943);
Obj b = x4309711975;
Obj x4308521095 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308521127 = PRIM_CDR(x4308521095);
Obj x4308521159 = PRIM_CDR(x4308521127);
Obj x4308521191 = PRIM_EQ(Nil, x4308521159);
if (True == x4308521191) {
R[1] = a;
R[2] = b;
struct frame1 __curr = {
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
coraCall0(co, x4310511847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511847);
return;
}
}
case 1:
{
Obj x4308522599= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, x4308522599, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj x4308522151= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
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
Obj x4308521831= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
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
Obj x4308521639= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
struct frame1 __curr = {
.fn = clofun88,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4308521639, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512391 = makeNative1(2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4309796583 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4309796583) {
Obj x4309797255 = PRIM_CAR(closureRef(R[0], 2));
Obj x4309797287 = PRIM_EQ(__symbolTable[72], x4309797255);
if (True == x4309797287) {
Obj x4309798055 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309798119 = PRIM_ISCONS(x4309798055);
if (True == x4309798119) {
Obj x4309798535 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309798567 = PRIM_CAR(x4309798535);
Obj x = x4309798567;
Obj x4309750503 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309750695 = PRIM_CDR(x4309750503);
Obj x4309750823 = PRIM_EQ(Nil, x4309750695);
if (True == x4309750823) {
R[1] = x;
struct frame1 __curr = {
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
coraCall0(co, x4310512391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512391);
return;
}
}
case 1:
{
Obj x4309752583= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj x4309752327= co->res;
struct frame1 __curr = {
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
Obj x4309752231= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun87,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4309752231, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x4309751335= co->res;
Obj x = R[1];
R[1] = x;
struct frame1 __curr = {
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
Obj x4310512743 = makeNative1(3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4309800999 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4309800999) {
Obj x4309801351 = PRIM_CAR(closureRef(R[0], 2));
Obj x4309801447 = PRIM_EQ(__symbolTable[74], x4309801351);
if (True == x4309801447) {
Obj x4309801927 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309802023 = PRIM_ISCONS(x4309801927);
if (True == x4309802023) {
Obj x4309802375 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309802407 = PRIM_CAR(x4309802375);
Obj exp = x4309802407;
Obj x4309802855 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309794823 = PRIM_CDR(x4309802855);
Obj x4309794855 = PRIM_EQ(Nil, x4309794823);
if (True == x4309794855) {
R[1] = exp;
struct frame1 __curr = {
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
coraCall0(co, x4310512743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512743);
return;
}
}
case 1:
{
Obj x4309795719= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj x4309795527= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4309795527, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4309795143= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4310513223 = makeNative1(4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4309832807 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309832807) {
Obj x4309833031 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309833255 = PRIM_EQ(__symbolTable[73], x4309833031);
if (True == x4309833255) {
Obj x4309833703 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833799 = PRIM_ISCONS(x4309833703);
if (True == x4309833799) {
Obj x4309834343 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834375 = PRIM_CAR(x4309834343);
Obj exp = x4309834375;
Obj x4309834855 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834887 = PRIM_CDR(x4309834855);
Obj x4309835015 = PRIM_ISCONS(x4309834887);
if (True == x4309835015) {
Obj x4309835527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309835559 = PRIM_CDR(x4309835527);
Obj x4309835751 = PRIM_CAR(x4309835559);
Obj label = x4309835751;
Obj x4309803527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803655 = PRIM_CDR(x4309803527);
Obj x4309803687 = PRIM_CDR(x4309803655);
Obj fvs = x4309803687;
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun85,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[49]), 5, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310513223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513223);
return;
}
}
case 1:
{
Obj x4309800231= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj x4309800167= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4309800167, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4309799751= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4309799559= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4309799143= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4309806951= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4309805959= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4309805767= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
struct frame1 __curr = {
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
Obj x4309805287= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
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
Obj x4309804839= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
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
Obj x4309804583= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
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
Obj x4309804071= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun85,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("struct frame1 __curr = {\n"));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307696807 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307696807) {
Obj x4307696967 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4307696967;
Obj x4307697127 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4307697127;
R[1] = f;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 55,
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
Obj x4307686535= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 2:
{
Obj x4307686439= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 3:
{
Obj x4307686055= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307686279 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307686279) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
}
case 4:
{
Obj x4307685959= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 5:
{
Obj x4307687143= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 6:
{
Obj x4307687047= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 7:
{
Obj x4307685575= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307685799 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4307685799) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x4307686887 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307686887) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 6,
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
}
case 8:
{
Obj x4307685543= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307685543, f, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x4307697607= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 10:
{
Obj x4307688743= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 11:
{
Obj x4307688647= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 12:
{
Obj x4307688263= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307688487 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307688487) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 11,
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
case 13:
{
Obj x4307688167= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 14:
{
Obj x4307689351= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 15:
{
Obj x4307689255= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 14,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 16:
{
Obj x4307687783= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307688007 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4307688007) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x4307689095 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307689095) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 15,
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
}
case 17:
{
Obj x4307687751= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 16,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307687751, f, closureRef(R[0], 4));
return;
}
case 18:
{
Obj x4307687527= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 17,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 19:
{
Obj x4307670471= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 20:
{
Obj x4307670375= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 19,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 21:
{
Obj x4307669991= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307670215 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307670215) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 20,
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
case 22:
{
Obj x4307669895= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 21,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 23:
{
Obj x4307671079= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 24:
{
Obj x4307670983= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 23,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 25:
{
Obj x4307669511= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307669735 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4307669735) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 22,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x4307670823 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307670823) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 24,
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
}
case 26:
{
Obj x4307669479= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 25,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307669479, f, closureRef(R[0], 4));
return;
}
case 27:
{
Obj x4307669255= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 26,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 28:
{
Obj x4307672679= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 29:
{
Obj x4307672583= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 28,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 30:
{
Obj x4307672199= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307672423 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4307672423) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 29,
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
case 31:
{
Obj x4307672103= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 30,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 32:
{
Obj x4310579655= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 33:
{
Obj x4310579239= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 32,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 34:
{
Obj x4307671719= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4307671943 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4307671943) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 31,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x4310578951 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310578951) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 33,
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
}
case 35:
{
Obj x4307671687= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 34,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307671687, f, closureRef(R[0], 4));
return;
}
case 36:
{
Obj x4307671463= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 35,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 37:
{
Obj x4310514375= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 38:
{
Obj x4310514247= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 37,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 39:
{
Obj x4310513191= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310513991 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310513991) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 38,
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
case 40:
{
Obj x4310513031= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 39,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 41:
{
Obj x4310356455= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 42:
{
Obj x4310515655= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 41,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 43:
{
Obj x4310511623= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310512615 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4310512615) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 40,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x4310515207 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310515207) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 42,
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
}
case 44:
{
Obj x4310581223= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 43,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4310581223, f, closureRef(R[0], 4));
return;
}
case 45:
{
Obj x4310580615= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 44,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 46:
{
Obj x4310359143= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 47:
{
Obj x4310359015= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 46,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 48:
{
Obj x4310358183= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310358663 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310358663) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 47,
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
case 49:
{
Obj x4310358087= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 48,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 50:
{
Obj x4309831879= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 51:
{
Obj x4309831719= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 50,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 52:
{
Obj x4310357383= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310357895 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4310357895) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 49,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x4310359847 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310359847) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 51,
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
}
case 53:
{
Obj x4310357351= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 52,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4310357351, f, closureRef(R[0], 4));
return;
}
case 54:
{
Obj x4310356871= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 53,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 55:
{
Obj x4307697287= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = x4307697287;
Obj x4307697511 = PRIM_EQ(nargs, MAKE_NUMBER(0));
if (True == x4307697511) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall0(co, "));
return;
} else {
Obj x4307687431 = PRIM_EQ(nargs, MAKE_NUMBER(1));
if (True == x4307687431) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 18,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall1(co, "));
return;
} else {
Obj x4307669159 = PRIM_EQ(nargs, MAKE_NUMBER(2));
if (True == x4307669159) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 27,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall2(co, "));
return;
} else {
Obj x4307671367 = PRIM_EQ(nargs, MAKE_NUMBER(3));
if (True == x4307671367) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 36,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall3(co, "));
return;
} else {
Obj x4310580167 = PRIM_EQ(nargs, MAKE_NUMBER(4));
if (True == x4310580167) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 45,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall4(co, "));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun84,
.label = 54,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall(co, "));
return;
}
}
}
}
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun82, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
struct frame1 __curr = {
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
Obj x4307864519= co->res;
Obj acc = R[1];
Obj x4307864615 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4307864615);
return;
}
case 2:
{
Obj x4307864359= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4307864199= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4307864039= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4307863879= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun82,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v);
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun80, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
struct frame1 __curr = {
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
Obj x4307863271= co->res;
Obj acc = R[1];
Obj x4307863367 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4307863367);
return;
}
case 2:
{
Obj x4307863111= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
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
Obj x4307862951= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun80,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v);
return;
}
case 4:
{
Obj x4307862791= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
struct frame1 __curr = {
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
Obj x4307862631= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4307909255= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == x4307909255) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x4307909639 = PRIM_CAR(globals);
Obj x4307909671 = PRIM_EQ(sym, x4307909639);
if (True == x4307909671) {
coraReturn(co, idx);
return;
} else {
Obj x4307861735 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x4307861831 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[51]), x4307861735, sym, x4307861831);
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
struct frame1 __curr = {
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
Obj x4307908551= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == x4307908551) {
coraReturn(co, Nil);
return;
} else {
Obj x4307908711 = makeCons(sym, val);
Obj x4307908743 = primSet(co, globals, x4307908711);
coraReturn(co, x4307908743);
return;
}
}
case 2:
{
Obj x4307908263= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = x4307908263;
R[1] = sym;
R[2] = val;
R[3] = globals;
struct frame1 __curr = {
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
Obj x4307907143 = primGenSym();
Obj tmp = x4307907143;
R[1] = x;
R[2] = tmp;
struct frame1 __curr = {
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
Obj x4307907559= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj x4307907687 = makeCons(x4307907559, Nil);
Obj x4307907719 = makeCons(x, x4307907687);
Obj x4307907751 = makeCons(tmp, x4307907719);
Obj x4307907783 = makeCons(__symbolTable[86], x4307907751);
coraReturn(co, x4307907783);
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
struct frame1 __curr = {
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
Obj x4307906567= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj x4307975559= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = x4307975559;
Obj x4307975847 = makeCons(val, Nil);
Obj x4307975879 = makeCons(idx, x4307975847);
Obj x4307975911 = makeCons(x4307975879, cur);
Obj cur1 = x4307975911;
Obj x4307976135 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
struct frame1 __curr = {
.fn = clofun75,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), x4307976135);
return;
}
case 3:
{
Obj x4307975207= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = x4307975207;
R[1] = val;
R[2] = idx;
R[3] = v;
struct frame1 __curr = {
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
Obj x4310578087 = R[1];
Obj x4310578119 = R[2];
Obj x4310578535 = makeNative1(1, clofun73, 0, 2, x4310578087, x4310578119);
Obj x4308371751 = PRIM_ISCONS(x4310578119);
if (True == x4308371751) {
Obj x4308372135 = PRIM_CAR(x4310578119);
Obj x4308372167 = PRIM_EQ(__symbolTable[78], x4308372135);
if (True == x4308372167) {
Obj x4308372487 = PRIM_CDR(x4310578119);
Obj x4308372583 = PRIM_ISCONS(x4308372487);
if (True == x4308372583) {
Obj x4308373095 = PRIM_CDR(x4310578119);
Obj x4308373127 = PRIM_CAR(x4308373095);
Obj x4308373159 = PRIM_ISCONS(x4308373127);
if (True == x4308373159) {
Obj x4308299815 = PRIM_CDR(x4310578119);
Obj x4308299847 = PRIM_CAR(x4308299815);
Obj x4308299879 = PRIM_CAR(x4308299847);
Obj x4308299943 = PRIM_EQ(__symbolTable[89], x4308299879);
if (True == x4308299943) {
Obj x4308300455 = PRIM_CDR(x4310578119);
Obj x4308300487 = PRIM_CAR(x4308300455);
Obj x4308300519 = PRIM_CDR(x4308300487);
Obj x4308300551 = PRIM_ISCONS(x4308300519);
if (True == x4308300551) {
Obj x4308301031 = PRIM_CDR(x4310578119);
Obj x4308301063 = PRIM_CAR(x4308301031);
Obj x4308301095 = PRIM_CDR(x4308301063);
Obj x4308301127 = PRIM_CAR(x4308301095);
Obj params = x4308301127;
Obj x4308301639 = PRIM_CDR(x4310578119);
Obj x4308301671 = PRIM_CAR(x4308301639);
Obj x4308301703 = PRIM_CDR(x4308301671);
Obj x4308301735 = PRIM_CDR(x4308301703);
Obj x4308301927 = PRIM_ISCONS(x4308301735);
if (True == x4308301927) {
Obj x4308302439 = PRIM_CDR(x4310578119);
Obj x4308302631 = PRIM_CAR(x4308302439);
Obj x4308302663 = PRIM_CDR(x4308302631);
Obj x4308302695 = PRIM_CDR(x4308302663);
Obj x4308302791 = PRIM_CAR(x4308302695);
Obj body = x4308302791;
Obj x4308303431 = PRIM_CDR(x4310578119);
Obj x4308303463 = PRIM_CAR(x4308303431);
Obj x4308303495 = PRIM_CDR(x4308303463);
Obj x4308303527 = PRIM_CDR(x4308303495);
Obj x4308303559 = PRIM_CDR(x4308303527);
Obj x4308303591 = PRIM_EQ(Nil, x4308303559);
if (True == x4308303591) {
Obj x4307972167 = PRIM_CDR(x4310578119);
Obj x4307972199 = PRIM_CDR(x4307972167);
Obj fvs = x4307972199;
R[1] = x4310578087;
R[2] = params;
R[3] = fvs;
struct frame1 __curr = {
.fn = clofun74,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), x4310578087, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578535);
return;
}
}
case 1:
{
Obj x4307973703= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj x4307973799 = makeCons(nframe, fvs);
Obj x4307973991 = makeCons(x4307973703, x4307973799);
Obj x4307974023 = makeCons(cur, x4307973991);
Obj x4307974055 = makeCons(__symbolTable[78], x4307974023);
coraReturn(co, x4307974055);
return;
}
case 2:
{
Obj x4307973255= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
struct frame1 __curr = {
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
Obj x4307973095= co->res;
Obj x4310578087 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = x4307973095;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
struct frame1 __curr = {
.fn = clofun74,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[54]), x4310578087, body2);
return;
}
case 4:
{
Obj x4307972935= co->res;
Obj x4310578087 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = x4307972935;
R[1] = x4310578087;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
struct frame1 __curr = {
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
Obj x4307972647= co->res;
Obj body1 = R[1];
Obj x4310578087 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = x4307972647;
R[1] = x4310578087;
R[2] = params;
R[3] = fvs;
R[4] = cur;
struct frame1 __curr = {
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
Obj x4307972487= co->res;
Obj x4310578087 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = x4307972487;
R[1] = body1;
R[2] = x4310578087;
R[3] = params;
R[4] = fvs;
struct frame1 __curr = {
.fn = clofun74,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), x4310578087, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308371303 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308371303) {
struct frame1 __curr = {
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
Obj x4308371463= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4308371463, closureRef(R[0], 1));
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
struct frame1 __curr = {
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
Obj x4308370439= co->res;
Obj x4308370311 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun71, 2, 0), x4308370311, x4308370439);
return;
}
case 2:
{
Obj x4308446919= co->res;
Obj lam = R[1];
Obj nargs = x4308446919;
Obj x4308370311 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = x4308370311;
struct frame1 __curr = {
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
Obj x4308446887= co->res;
Obj lam = R[1];
R[1] = lam;
struct frame1 __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), x4308446887);
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
struct frame1 __curr = {
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
Obj x4308369831= co->res;
Obj acc = R[1];
Obj x4308369863 = PRIM_ADD(x4308369831, MAKE_NUMBER(1));
Obj len = x4308369863;
Obj x4308370183 = PRIM_GT(len, acc);
if (True == x4308370183) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj x4308369767= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun71,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), x4308369767);
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
coraCall3(co, globalRef(__symbolTable[61]), body, Nil, makeNative1(3, clofun69, 2, 1, params));
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
struct frame1 __curr = {
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
Obj x4308446055= co->res;
Obj body1 = R[1];
Obj x4308446087 = makeCons(body1, x4308446055);
Obj x4308446151 = makeCons(closureRef(R[0], 0), x4308446087);
Obj x4308446183 = makeCons(__symbolTable[89], x4308446151);
coraReturn(co, x4308446183);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356007 = R[1];
Obj x4310356039 = R[2];
Obj x4310356071 = R[3];
Obj x4310356103 = R[4];
Obj x4308443303 = PRIM_EQ(Nil, x4310356007);
if (True == x4308443303) {
co->ctx.sp = R;
coraCall2(co, x4310356103, x4310356071, x4310356039);
return;
} else {
Obj x4308443751 = PRIM_ISCONS(x4310356007);
if (True == x4308443751) {
Obj x4308443911 = PRIM_CAR(x4310356007);
Obj f = x4308443911;
Obj x4308444263 = PRIM_CDR(x4310356007);
Obj args = x4308444263;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), f, x4310356039, makeNative1(3, clofun67, 2, 3, args, x4310356071, x4310356103));
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
coraCall4(co, globalRef(__symbolTable[60]), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative1(3, clofun66, 2, 2, closureRef(R[0], 2), f1));
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
Obj x4308444967 = makeCons(closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x4308444967, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310579175 = R[1];
Obj x4310579367 = R[2];
Obj x4310579399 = R[3];
Obj x4310578631 = makeNative1(2, clofun64, 1, 3, x4310579175, x4310579367, x4310579399);
Obj x4308462759 = primIsSymbol(x4310579175);
if (True == x4308462759) {
co->ctx.sp = R;
coraCall1(co, x4310578631, True);
return;
} else {
R[1] = x4310578631;
struct frame1 __curr = {
.fn = clofun65,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4310579175);
return;
}
}
case 1:
{
Obj x4308463143= co->res;
Obj x4310578631 = R[1];
if (True == x4308463143) {
co->ctx.sp = R;
coraCall1(co, x4310578631, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310578631, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578759 = R[1];
if (True == x4310578759) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4310511719 = makeNative1(1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4308469415 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308469415) {
Obj x4308469831 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308469927 = PRIM_EQ(__symbolTable[73], x4308469831);
if (True == x4308469927) {
Obj x4308470343 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308470375 = PRIM_ISCONS(x4308470343);
if (True == x4308470375) {
Obj x4308470631 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308470663 = PRIM_CAR(x4308470631);
Obj exp = x4308470663;
Obj x4308471175 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308471207 = PRIM_CDR(x4308471175);
Obj x4308471239 = PRIM_ISCONS(x4308471207);
if (True == x4308471239) {
Obj x4308459527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308459591 = PRIM_CDR(x4308459527);
Obj x4308459623 = PRIM_CAR(x4308459591);
Obj cont = x4308459623;
Obj x4308460167 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460263 = PRIM_CDR(x4308460167);
Obj x4308460295 = PRIM_CDR(x4308460263);
Obj x4308460327 = PRIM_EQ(Nil, x4308460295);
if (True == x4308460327) {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), cont, closureRef(R[0], 1), makeNative1(4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310511719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511719);
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
struct frame1 __curr = {
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
Obj x4308461447= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj x4308461479 = PRIM_ADD(x4308461447, MAKE_NUMBER(1));
Obj x4308461511 = makeCons(x4308461479, fvs);
Obj x4308461703 = makeCons(closureRef(R[0], 1), x4308461511);
Obj x4308461735 = makeCons(__symbolTable[73], x4308461703);
Obj x4308461831 = makeCons(cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x4308461735, x4308461831);
return;
}
case 2:
{
Obj x4308460743= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = x4308460743;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
struct frame1 __curr = {
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
Obj x4308468135 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308468135) {
Obj x4308468423 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4308468423;
Obj x4308468711 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308468711;
Obj x4308468967 = makeCons(f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[60]), x4308468967, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
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
Obj x4310512775 = R[1];
Obj x4310512807 = R[2];
R[1] = x4310512807;
R[2] = x4310512775;
struct frame1 __curr = {
.fn = clofun61,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4310512807);
return;
}
case 1:
{
Obj x4308523495= co->res;
Obj args = R[1];
Obj x4308523527 = makeCons(x4308523495, Nil);
Obj x4308523879 = makeCons(args, x4308523527);
Obj x4308523911 = makeCons(__symbolTable[89], x4308523879);
coraReturn(co, x4308523911);
return;
}
case 2:
{
Obj x4309800039= co->res;
Obj x4310512807 = R[1];
Obj x4310512775 = R[2];
if (True == x4309800039) {
coraReturn(co, x4310512807);
return;
} else {
Obj x4309800263 = primIsSymbol(x4310512807);
if (True == x4309800263) {
coraReturn(co, x4310512807);
return;
} else {
Obj x4310514791 = makeNative1(4, clofun60, 0, 2, x4310512807, x4310512775);
Obj x4309711495 = PRIM_ISCONS(x4310512807);
if (True == x4309711495) {
Obj x4309711879 = PRIM_CAR(x4310512807);
Obj x4309711911 = PRIM_EQ(__symbolTable[89], x4309711879);
if (True == x4309711911) {
Obj x4309712359 = PRIM_CDR(x4310512807);
Obj x4309712391 = PRIM_ISCONS(x4309712359);
if (True == x4309712391) {
Obj x4308521031 = PRIM_CDR(x4310512807);
Obj x4308521063 = PRIM_CAR(x4308521031);
Obj args = x4308521063;
Obj x4308521479 = PRIM_CDR(x4310512807);
Obj x4308521511 = PRIM_CDR(x4308521479);
Obj x4308521543 = PRIM_ISCONS(x4308521511);
if (True == x4308521543) {
Obj x4308522055 = PRIM_CDR(x4310512807);
Obj x4308522087 = PRIM_CDR(x4308522055);
Obj x4308522119 = PRIM_CAR(x4308522087);
Obj body = x4308522119;
Obj x4308522759 = PRIM_CDR(x4310512807);
Obj x4308522791 = PRIM_CDR(x4308522759);
Obj x4308523047 = PRIM_CDR(x4308522791);
Obj x4308523079 = PRIM_EQ(Nil, x4308523047);
if (True == x4308523079) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun61,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), x4310512775, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310514791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514791);
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
Obj x4310356391 = makeNative1(3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4309798855 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309798855) {
Obj x4309750727 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309750791 = PRIM_EQ(__symbolTable[75], x4309750727);
if (True == x4309750791) {
Obj x4309751367 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751623 = PRIM_ISCONS(x4309751367);
if (True == x4309751623) {
Obj x4309752039 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309752199 = PRIM_CAR(x4309752039);
Obj val = x4309752199;
Obj x4309752647 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309752711 = PRIM_CDR(x4309752647);
Obj x4309752743 = PRIM_ISCONS(x4309752711);
if (True == x4309752743) {
Obj x4309753095 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309753127 = PRIM_CDR(x4309753095);
Obj x4309753159 = PRIM_CAR(x4309753127);
Obj body = x4309753159;
Obj x4309708903 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309708935 = PRIM_CDR(x4309708903);
Obj x4309708967 = PRIM_CDR(x4309708935);
Obj x4309709063 = PRIM_EQ(Nil, x4309708967);
if (True == x4309709063) {
R[1] = body;
R[2] = val;
struct frame1 __curr = {
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
coraCall0(co, x4310356391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356391);
return;
}
}
case 1:
{
Obj x4309710471= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj x4309710631 = makeCons(x4309710471, fvs2);
Obj x4309710759 = makeCons(val, x4309710631);
Obj x4309710791 = makeCons(__symbolTable[62], x4309710759);
coraReturn(co, x4309710791);
return;
}
case 2:
{
Obj x4309709991= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = x4309709991;
R[1] = fvs2;
R[2] = val;
struct frame1 __curr = {
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
Obj x4309709799= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
struct frame1 __curr = {
.fn = clofun60,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4309709799, fvs1);
return;
}
case 4:
{
Obj x4309709511= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = x4309709511;
R[1] = fvs1;
R[2] = body;
R[3] = val;
struct frame1 __curr = {
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
Obj x4309709319= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
struct frame1 __curr = {
.fn = clofun60,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), x4309709319, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310357575 = makeNative1(3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4309802247 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309802247) {
Obj x4309802567 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309802599 = PRIM_EQ(__symbolTable[73], x4309802567);
if (True == x4309802599) {
Obj x4309802887 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802919 = PRIM_ISCONS(x4309802887);
if (True == x4309802919) {
Obj x4309795079 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795111 = PRIM_CAR(x4309795079);
Obj exp = x4309795111;
Obj x4309795591 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795623 = PRIM_CDR(x4309795591);
Obj x4309795687 = PRIM_ISCONS(x4309795623);
if (True == x4309795687) {
Obj x4309796071 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309796103 = PRIM_CDR(x4309796071);
Obj x4309796167 = PRIM_CAR(x4309796103);
Obj cont = x4309796167;
Obj x4309796839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309796871 = PRIM_CDR(x4309796839);
Obj x4309796903 = PRIM_CDR(x4309796871);
Obj x4309796967 = PRIM_EQ(Nil, x4309796903);
if (True == x4309796967) {
R[1] = exp;
R[2] = cont;
struct frame1 __curr = {
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
coraCall0(co, x4310357575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357575);
return;
}
}
case 1:
{
Obj x4309797831= co->res;
Obj x4309797511 = R[1];
Obj x4309797863 = makeCons(x4309797831, Nil);
Obj x4309797991 = makeCons(x4309797511, x4309797863);
Obj x4309798023 = makeCons(__symbolTable[73], x4309797991);
coraReturn(co, x4309798023);
return;
}
case 2:
{
Obj x4309797511= co->res;
Obj cont = R[1];
R[1] = x4309797511;
struct frame1 __curr = {
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
Obj x4309797479= co->res;
Obj exp = R[1];
Obj cont = R[2];
R[1] = cont;
struct frame1 __curr = {
.fn = clofun59,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4309797479, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309801063 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309801063) {
Obj x4309801287 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4309801287;
Obj x4309801575 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4309801575;
R[1] = f;
R[2] = args;
struct frame1 __curr = {
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
Obj x4309801735= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4309801991 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4309801735, x4309801991);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578311 = R[1];
Obj x4310578375 = R[2];
Obj x4310578471 = R[3];
Obj x4309834439 = PRIM_EQ(Nil, x4310578311);
if (True == x4309834439) {
R[1] = x4310578471;
struct frame1 __curr = {
.fn = clofun57,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x4310578375);
return;
} else {
Obj x4309805831 = PRIM_ISCONS(x4310578311);
if (True == x4309805831) {
Obj x4309806759 = PRIM_CAR(x4310578311);
Obj hd = x4309806759;
Obj x4309806919 = PRIM_CDR(x4310578311);
Obj tl = x4309806919;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), hd, makeNative1(2, clofun56, 1, 3, tl, x4310578375, x4310578471));
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
Obj x4309805479= co->res;
Obj x4310578567 = R[1];
Obj x4309805511 = PRIM_EQ(x4309805479, __symbolTable[90]);
if (True == x4309805511) {
co->ctx.sp = R;
coraCall1(co, x4310578567, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310578567, False);
return;
}
}
case 2:
{
Obj x4309805095= co->res;
Obj exp = R[1];
Obj x4310578567 = R[2];
if (True == x4309805095) {
R[1] = x4310578567;
struct frame1 __curr = {
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
coraCall1(co, x4310578567, False);
return;
}
}
case 3:
{
Obj x4309834727= co->res;
Obj x4310578471 = R[1];
Obj exp = x4309834727;
Obj x4310578567 = makeNative1(2, clofun55, 1, 2, exp, x4310578471);
Obj x4309805063 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x4310578567;
struct frame1 __curr = {
.fn = clofun57,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), x4309805063);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj x4309799239 = makeCons(hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), closureRef(R[0], 0), x4309799239, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578599 = R[1];
if (True == x4310578599) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4309835367 = PRIM_EQ(closureRef(R[0], 1), globalRef(__symbolTable[70]));
if (True == x4309835367) {
Obj x4309835591 = makeCons(closureRef(R[0], 0), Nil);
Obj x4309835719 = makeCons(__symbolTable[74], x4309835591);
coraReturn(co, x4309835719);
return;
} else {
Obj x4309803175 = primGenSym();
Obj val = x4309803175;
Obj x4309804039 = makeCons(val, Nil);
R[1] = x4309804039;
struct frame1 __curr = {
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
Obj x4309804199= co->res;
Obj x4309804039 = R[1];
Obj x4309804231 = makeCons(x4309804199, Nil);
Obj x4309804359 = makeCons(x4309804039, x4309804231);
Obj x4309804391 = makeCons(__symbolTable[75], x4309804359);
Obj x4309804423 = makeCons(x4309804391, Nil);
Obj x4309804455 = makeCons(closureRef(R[0], 0), x4309804423);
Obj x4309804487 = makeCons(__symbolTable[73], x4309804455);
coraReturn(co, x4309804487);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578023 = R[1];
Obj x4310578247 = R[2];
Obj x4310578055 = makeNative1(2, clofun53, 1, 2, x4310578023, x4310578247);
Obj x4309833383 = primIsSymbol(x4310578023);
if (True == x4309833383) {
co->ctx.sp = R;
coraCall1(co, x4310578055, True);
return;
} else {
R[1] = x4310578055;
struct frame1 __curr = {
.fn = clofun54,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4310578023);
return;
}
}
case 1:
{
Obj x4309833735= co->res;
Obj x4310578055 = R[1];
if (True == x4309833735) {
co->ctx.sp = R;
coraCall1(co, x4310578055, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310578055, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578183 = R[1];
if (True == x4310578183) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), closureRef(R[0], 0));
return;
} else {
struct frame1 __curr = {
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
Obj x4308299975= co->res;
if (True == x4308299975) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj x4310580711 = makeNative1(1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4310514855 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310514855) {
Obj x4310515303 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310515367 = PRIM_EQ(__symbolTable[87], x4310515303);
if (True == x4310515367) {
Obj x4310355975 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310356135 = PRIM_ISCONS(x4310355975);
if (True == x4310356135) {
Obj x4310356679 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310356711 = PRIM_CAR(x4310356679);
Obj a = x4310356711;
Obj x4310357159 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357191 = PRIM_CDR(x4310357159);
Obj x4310357223 = PRIM_ISCONS(x4310357191);
if (True == x4310357223) {
Obj x4310357767 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357799 = PRIM_CDR(x4310357767);
Obj x4310357831 = PRIM_CAR(x4310357799);
Obj b = x4310357831;
Obj x4310358247 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310358279 = PRIM_CDR(x4310358247);
Obj x4310358311 = PRIM_CDR(x4310358279);
Obj x4310358343 = PRIM_ISCONS(x4310358311);
if (True == x4310358343) {
Obj x4310358823 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310358855 = PRIM_CDR(x4310358823);
Obj x4310358887 = PRIM_CDR(x4310358855);
Obj x4310358919 = PRIM_CAR(x4310358887);
Obj c = x4310358919;
Obj x4310359527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310359559 = PRIM_CDR(x4310359527);
Obj x4310359623 = PRIM_CDR(x4310359559);
Obj x4310359687 = PRIM_CDR(x4310359623);
Obj x4310359719 = PRIM_EQ(Nil, x4310359687);
if (True == x4310359719) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative1(3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580711);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580711);
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
struct frame1 __curr = {
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
Obj x4309832199= co->res;
Obj x4309831911 = R[1];
Obj ra = R[2];
Obj x4309832231 = makeCons(x4309832199, Nil);
Obj x4309832263 = makeCons(x4309831911, x4309832231);
Obj x4309832295 = makeCons(ra, x4309832263);
Obj x4309832359 = makeCons(__symbolTable[87], x4309832295);
coraReturn(co, x4309832359);
return;
}
case 2:
{
Obj x4309831911= co->res;
Obj ra = R[1];
R[1] = x4309831911;
R[2] = ra;
struct frame1 __curr = {
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
Obj x4310512871 = makeNative1(1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4307910599 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307910599) {
Obj x4307861671 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310577671 = PRIM_EQ(__symbolTable[85], x4307861671);
if (True == x4310577671) {
Obj x4310578887 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310578919 = PRIM_ISCONS(x4310578887);
if (True == x4310578919) {
Obj x4310579271 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579303 = PRIM_CAR(x4310579271);
Obj a = x4310579303;
Obj x4310579911 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579943 = PRIM_CDR(x4310579911);
Obj x4310579975 = PRIM_ISCONS(x4310579943);
if (True == x4310579975) {
Obj x4310580679 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310580743 = PRIM_CDR(x4310580679);
Obj x4310580807 = PRIM_CAR(x4310580743);
Obj b = x4310580807;
Obj x4310511879 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310512135 = PRIM_CDR(x4310511879);
Obj x4310512263 = PRIM_CDR(x4310512135);
Obj x4310512327 = PRIM_EQ(Nil, x4310512263);
if (True == x4310512327) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative1(2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512871);
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
Obj x4310512903 = primIsSymbol(ra);
if (True == x4310512903) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
struct frame1 __curr = {
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
Obj x4310513831= co->res;
Obj ra = R[1];
Obj x4310513895 = makeCons(x4310513831, Nil);
Obj x4310513927 = makeCons(ra, x4310513895);
Obj x4310513959 = makeCons(__symbolTable[85], x4310513927);
coraReturn(co, x4310513959);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310514599 = makeNative1(3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4307976167 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307976167) {
Obj x4307906759 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307906791 = PRIM_EQ(__symbolTable[86], x4307906759);
if (True == x4307906791) {
Obj x4307907015 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307907047 = PRIM_ISCONS(x4307907015);
if (True == x4307907047) {
Obj x4307907271 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307907303 = PRIM_CAR(x4307907271);
Obj a = x4307907303;
Obj x4307907591 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307907623 = PRIM_CDR(x4307907591);
Obj x4307907655 = PRIM_ISCONS(x4307907623);
if (True == x4307907655) {
Obj x4307907943 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307907975 = PRIM_CDR(x4307907943);
Obj x4307908007 = PRIM_CAR(x4307907975);
Obj b = x4307908007;
Obj x4307908359 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307908391 = PRIM_CDR(x4307908359);
Obj x4307908423 = PRIM_CDR(x4307908391);
Obj x4307908455 = PRIM_ISCONS(x4307908423);
if (True == x4307908455) {
Obj x4307908807 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307908839 = PRIM_CDR(x4307908807);
Obj x4307908871 = PRIM_CDR(x4307908839);
Obj x4307908903 = PRIM_CAR(x4307908871);
Obj c = x4307908903;
Obj x4307909319 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307909351 = PRIM_CDR(x4307909319);
Obj x4307909383 = PRIM_CDR(x4307909351);
Obj x4307909415 = PRIM_CDR(x4307909383);
Obj x4307909447 = PRIM_EQ(Nil, x4307909415);
if (True == x4307909447) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), b, makeNative1(2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310514599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514599);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514599);
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
struct frame1 __curr = {
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
Obj x4307909927= co->res;
Obj rb = R[1];
Obj x4307909959 = makeCons(x4307909927, Nil);
Obj x4307909991 = makeCons(rb, x4307909959);
Obj x4307910023 = makeCons(closureRef(R[0], 0), x4307909991);
Obj x4307910055 = makeCons(__symbolTable[86], x4307910023);
coraReturn(co, x4307910055);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356359 = makeNative1(1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4308301543 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308301543) {
Obj x4308301863 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308301895 = PRIM_EQ(__symbolTable[78], x4308301863);
if (True == x4308301895) {
Obj x4308302119 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308302151 = PRIM_ISCONS(x4308302119);
if (True == x4308302151) {
Obj x4308302535 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308302567 = PRIM_CAR(x4308302535);
Obj x4308302599 = PRIM_ISCONS(x4308302567);
if (True == x4308302599) {
Obj x4308303655 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308303687 = PRIM_CAR(x4308303655);
Obj x4308303719 = PRIM_CAR(x4308303687);
Obj x4308303751 = PRIM_EQ(__symbolTable[89], x4308303719);
if (True == x4308303751) {
Obj x4307972327 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307972359 = PRIM_CAR(x4307972327);
Obj x4307972391 = PRIM_CDR(x4307972359);
Obj x4307972423 = PRIM_ISCONS(x4307972391);
if (True == x4307972423) {
Obj x4307972775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307972807 = PRIM_CAR(x4307972775);
Obj x4307972839 = PRIM_CDR(x4307972807);
Obj x4307972871 = PRIM_CAR(x4307972839);
Obj args = x4307972871;
Obj x4307973287 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307973319 = PRIM_CAR(x4307973287);
Obj x4307973351 = PRIM_CDR(x4307973319);
Obj x4307973383 = PRIM_CDR(x4307973351);
Obj x4307973415 = PRIM_ISCONS(x4307973383);
if (True == x4307973415) {
Obj x4307973831 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307973863 = PRIM_CAR(x4307973831);
Obj x4307973895 = PRIM_CDR(x4307973863);
Obj x4307973927 = PRIM_CDR(x4307973895);
Obj x4307973959 = PRIM_CAR(x4307973927);
Obj body = x4307973959;
Obj x4307974439 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307974471 = PRIM_CAR(x4307974439);
Obj x4307974503 = PRIM_CDR(x4307974471);
Obj x4307974535 = PRIM_CDR(x4307974503);
Obj x4307974567 = PRIM_CDR(x4307974535);
Obj x4307974599 = PRIM_EQ(Nil, x4307974567);
if (True == x4307974599) {
Obj x4307974823 = PRIM_CDR(closureRef(R[0], 0));
Obj x4307974855 = PRIM_CDR(x4307974823);
Obj frees = x4307974855;
R[1] = args;
R[2] = frees;
struct frame1 __curr = {
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
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356359);
return;
}
}
case 1:
{
Obj x4307975335= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj x4307975367 = makeCons(x4307975335, Nil);
Obj x4307975399 = makeCons(args, x4307975367);
Obj x4307975431 = makeCons(__symbolTable[89], x4307975399);
Obj x4307975463 = makeCons(x4307975431, frees);
Obj x4307975495 = makeCons(__symbolTable[78], x4307975463);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), x4307975495);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308300839 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308300839) {
Obj x4308300999 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4308300999;
Obj x4308301159 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308301159;
Obj x4308301319 = makeCons(f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), x4308301319, Nil, closureRef(R[0], 1));
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
Obj x4308372903 = makeCons(x, Nil);
Obj x4308372935 = makeCons(__symbolTable[72], x4308372903);
coraReturn(co, x4308372935);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577703 = R[1];
Obj x4310577767 = R[2];
R[1] = x4310577767;
R[2] = x4310577703;
struct frame1 __curr = {
.fn = clofun44,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4310577767);
return;
}
case 1:
{
Obj x4308459559= co->res;
Obj x4310577767 = R[1];
Obj pos = x4308459559;
Obj x4308459751 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x4308459751) {
coraReturn(co, x4310577767);
return;
} else {
Obj x4308459911 = makeCons(pos, Nil);
Obj x4308460007 = makeCons(__symbolTable[77], x4308459911);
coraReturn(co, x4308460007);
return;
}
}
case 2:
{
Obj x4308371911= co->res;
Obj x4308371719 = R[1];
Obj x4308371943 = makeCons(x4308371719, x4308371911);
Obj x4308371975 = makeCons(__symbolTable[78], x4308371943);
coraReturn(co, x4308371975);
return;
}
case 3:
{
Obj x4308371879= co->res;
Obj fvs1 = R[1];
Obj x4308371719 = R[2];
R[1] = x4308371719;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4308371879, fvs1);
return;
}
case 4:
{
Obj x4308371623= co->res;
Obj args = R[1];
Obj x4310577703 = R[2];
Obj fvs1 = R[3];
Obj x4308371655 = makeCons(x4308371623, Nil);
Obj x4308371687 = makeCons(args, x4308371655);
Obj x4308371719 = makeCons(__symbolTable[89], x4308371687);
R[1] = fvs1;
R[2] = x4308371719;
struct frame1 __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[71]), x4310577703);
return;
}
case 5:
{
Obj x4308371207= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x4310577703 = R[3];
Obj fvs1 = x4308371207;
R[1] = args;
R[2] = x4310577703;
R[3] = fvs1;
struct frame1 __curr = {
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
Obj x4308471303= co->res;
Obj x4310577767 = R[1];
Obj x4310577703 = R[2];
if (True == x4308471303) {
coraReturn(co, x4310577767);
return;
} else {
Obj x4308471687 = primIsSymbol(x4310577767);
if (True == x4308471687) {
R[1] = x4310577767;
struct frame1 __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), x4310577767, x4310577703);
return;
} else {
Obj x4310580135 = makeNative1(3, clofun43, 0, 2, x4310577767, x4310577703);
Obj x4308446215 = PRIM_ISCONS(x4310577767);
if (True == x4308446215) {
Obj x4308446503 = PRIM_CAR(x4310577767);
Obj x4308446535 = PRIM_EQ(__symbolTable[89], x4308446503);
if (True == x4308446535) {
Obj x4308446791 = PRIM_CDR(x4310577767);
Obj x4308446823 = PRIM_ISCONS(x4308446791);
if (True == x4308446823) {
Obj x4308447079 = PRIM_CDR(x4310577767);
Obj x4308447111 = PRIM_CAR(x4308447079);
Obj args = x4308447111;
Obj x4308369607 = PRIM_CDR(x4310577767);
Obj x4308369671 = PRIM_CDR(x4308369607);
Obj x4308369703 = PRIM_ISCONS(x4308369671);
if (True == x4308369703) {
Obj x4308370087 = PRIM_CDR(x4310577767);
Obj x4308370119 = PRIM_CDR(x4308370087);
Obj x4308370151 = PRIM_CAR(x4308370119);
Obj body = x4308370151;
Obj x4308370599 = PRIM_CDR(x4310577767);
Obj x4308370631 = PRIM_CDR(x4308370599);
Obj x4308370663 = PRIM_CDR(x4308370631);
Obj x4308370727 = PRIM_EQ(Nil, x4308370663);
if (True == x4308370727) {
Obj x4308371111 = makeCons(body, Nil);
Obj x4308371143 = makeCons(args, x4308371111);
Obj x4308371175 = makeCons(__symbolTable[89], x4308371143);
R[1] = body;
R[2] = args;
R[3] = x4310577703;
struct frame1 __curr = {
.fn = clofun44,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), x4308371175);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580135);
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
Obj x4310511943 = makeNative1(3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4308461671 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308461671) {
Obj x4308461895 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308461927 = PRIM_EQ(__symbolTable[86], x4308461895);
if (True == x4308461927) {
Obj x4308462311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308462343 = PRIM_ISCONS(x4308462311);
if (True == x4308462343) {
Obj x4308462567 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308462631 = PRIM_CAR(x4308462567);
Obj a = x4308462631;
Obj x4308462983 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308463015 = PRIM_CDR(x4308462983);
Obj x4308463047 = PRIM_ISCONS(x4308463015);
if (True == x4308463047) {
Obj x4308463463 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308463495 = PRIM_CDR(x4308463463);
Obj x4308463527 = PRIM_CAR(x4308463495);
Obj b = x4308463527;
Obj x4308443527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308443623 = PRIM_CDR(x4308443527);
Obj x4308443655 = PRIM_CDR(x4308443623);
Obj x4308443687 = PRIM_ISCONS(x4308443655);
if (True == x4308443687) {
Obj x4308444039 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308444103 = PRIM_CDR(x4308444039);
Obj x4308444135 = PRIM_CDR(x4308444103);
Obj x4308444167 = PRIM_CAR(x4308444135);
Obj c = x4308444167;
Obj x4308444711 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308444743 = PRIM_CDR(x4308444711);
Obj x4308444775 = PRIM_CDR(x4308444743);
Obj x4308444807 = PRIM_CDR(x4308444775);
Obj x4308444839 = PRIM_EQ(Nil, x4308444807);
if (True == x4308444839) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
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
coraCall0(co, x4310511943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511943);
return;
}
}
case 1:
{
Obj x4308445351= co->res;
Obj x4308445159 = R[1];
Obj a = R[2];
Obj x4308445415 = makeCons(x4308445351, Nil);
Obj x4308445447 = makeCons(x4308445159, x4308445415);
Obj x4308445479 = makeCons(a, x4308445447);
Obj x4308445511 = makeCons(__symbolTable[86], x4308445479);
coraReturn(co, x4308445511);
return;
}
case 2:
{
Obj x4308445159= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = x4308445159;
R[2] = a;
struct frame1 __curr = {
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
Obj x4308460551 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308460551) {
Obj x4308460711 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4308460711;
Obj x4308460967 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308460967;
R[1] = f;
R[2] = args;
struct frame1 __curr = {
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
Obj x4308461223= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4308461319 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4308461223, x4308461319);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577639 = R[1];
R[1] = x4310577639;
struct frame1 __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4310577639);
return;
}
case 1:
{
Obj x4308470407= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x4308470407, args);
return;
}
case 2:
{
Obj x4310357287= co->res;
Obj x4310577639 = R[1];
if (True == x4310357287) {
coraReturn(co, Nil);
return;
} else {
Obj x4310357479 = primIsSymbol(x4310577639);
if (True == x4310357479) {
Obj x4310357639 = makeCons(x4310577639, Nil);
coraReturn(co, x4310357639);
return;
} else {
Obj x4310579015 = makeNative1(1, clofun40, 0, 1, x4310577639);
Obj x4308467719 = PRIM_ISCONS(x4310577639);
if (True == x4308467719) {
Obj x4308467943 = PRIM_CAR(x4310577639);
Obj x4308468007 = PRIM_EQ(__symbolTable[89], x4308467943);
if (True == x4308468007) {
Obj x4308468295 = PRIM_CDR(x4310577639);
Obj x4308468327 = PRIM_ISCONS(x4308468295);
if (True == x4308468327) {
Obj x4308468615 = PRIM_CDR(x4310577639);
Obj x4308468647 = PRIM_CAR(x4308468615);
Obj args = x4308468647;
Obj x4308469031 = PRIM_CDR(x4310577639);
Obj x4308469063 = PRIM_CDR(x4308469031);
Obj x4308469095 = PRIM_ISCONS(x4308469063);
if (True == x4308469095) {
Obj x4308469511 = PRIM_CDR(x4310577639);
Obj x4308469543 = PRIM_CDR(x4308469511);
Obj x4308469671 = PRIM_CAR(x4308469543);
Obj body = x4308469671;
Obj x4308470119 = PRIM_CDR(x4310577639);
Obj x4308470151 = PRIM_CDR(x4308470119);
Obj x4308470183 = PRIM_CDR(x4308470151);
Obj x4308470247 = PRIM_EQ(Nil, x4308470183);
if (True == x4308470247) {
R[1] = args;
struct frame1 __curr = {
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
coraCall0(co, x4310579015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310579015);
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
Obj x4310580487 = makeNative1(1, clofun39, 0, 1, closureRef(R[0], 0));
Obj x4309711783 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309711783) {
Obj x4309712007 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309712199 = PRIM_EQ(__symbolTable[87], x4309712007);
if (True == x4309712199) {
Obj x4309712423 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309712487 = PRIM_ISCONS(x4309712423);
if (True == x4309712487) {
Obj x4308520967 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308520999 = PRIM_CAR(x4308520967);
Obj x = x4308520999;
Obj x4308521287 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308521319 = PRIM_CDR(x4308521287);
Obj x4308521351 = PRIM_ISCONS(x4308521319);
if (True == x4308521351) {
Obj x4308521735 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308521767 = PRIM_CDR(x4308521735);
Obj x4308521799 = PRIM_CAR(x4308521767);
Obj y = x4308521799;
Obj x4308522279 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522311 = PRIM_CDR(x4308522279);
Obj x4308522343 = PRIM_CDR(x4308522311);
Obj x4308522375 = PRIM_ISCONS(x4308522343);
if (True == x4308522375) {
Obj x4308522823 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522951 = PRIM_CDR(x4308522823);
Obj x4308522983 = PRIM_CDR(x4308522951);
Obj x4308523015 = PRIM_CAR(x4308522983);
Obj z = x4308523015;
Obj x4308523559 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308523623 = PRIM_CDR(x4308523559);
Obj x4308523655 = PRIM_CDR(x4308523623);
Obj x4308523687 = PRIM_CDR(x4308523655);
Obj x4308523719 = PRIM_EQ(Nil, x4308523687);
if (True == x4308523719) {
Obj x4308524199 = makeCons(z, Nil);
Obj x4308524231 = makeCons(y, x4308524199);
Obj x4308524263 = makeCons(x, x4308524231);
struct frame1 __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4308524263);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580487);
return;
}
}
case 1:
{
Obj x4308524295= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4308524295);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512295 = makeNative1(3, clofun38, 0, 1, closureRef(R[0], 0));
Obj x4309752967 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309752967) {
Obj x4309753223 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309753255 = PRIM_EQ(__symbolTable[85], x4309753223);
if (True == x4309753255) {
Obj x4309753799 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309753831 = PRIM_ISCONS(x4309753799);
if (True == x4309753831) {
Obj x4309708999 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709031 = PRIM_CAR(x4309708999);
Obj x = x4309709031;
Obj x4309709351 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709447 = PRIM_CDR(x4309709351);
Obj x4309709479 = PRIM_ISCONS(x4309709447);
if (True == x4309709479) {
Obj x4309709831 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709863 = PRIM_CDR(x4309709831);
Obj x4309709959 = PRIM_CAR(x4309709863);
Obj y = x4309709959;
Obj x4309710503 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710535 = PRIM_CDR(x4309710503);
Obj x4309710567 = PRIM_CDR(x4309710535);
Obj x4309710599 = PRIM_EQ(Nil, x4309710567);
if (True == x4309710599) {
Obj x4309710983 = makeCons(y, Nil);
Obj x4309711015 = makeCons(x, x4309710983);
struct frame1 __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4309711015);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512295);
return;
}
}
case 1:
{
Obj x4309711047= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4309711047);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513575 = makeNative1(1, clofun37, 0, 1, closureRef(R[0], 0));
Obj x4309796007 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309796007) {
Obj x4309796263 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309796327 = PRIM_EQ(__symbolTable[86], x4309796263);
if (True == x4309796327) {
Obj x4309796615 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309796647 = PRIM_ISCONS(x4309796615);
if (True == x4309796647) {
Obj x4309796999 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797031 = PRIM_CAR(x4309796999);
Obj a = x4309797031;
Obj x4309797383 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797415 = PRIM_CDR(x4309797383);
Obj x4309797447 = PRIM_ISCONS(x4309797415);
if (True == x4309797447) {
Obj x4309797895 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797927 = PRIM_CDR(x4309797895);
Obj x4309797959 = PRIM_CAR(x4309797927);
Obj b = x4309797959;
Obj x4309798407 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309798439 = PRIM_CDR(x4309798407);
Obj x4309798471 = PRIM_CDR(x4309798439);
Obj x4309798503 = PRIM_ISCONS(x4309798471);
if (True == x4309798503) {
Obj x4309749895 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309749927 = PRIM_CDR(x4309749895);
Obj x4309749959 = PRIM_CDR(x4309749927);
Obj x4309749991 = PRIM_CAR(x4309749959);
Obj c = x4309749991;
Obj x4309751399 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751495 = PRIM_CDR(x4309751399);
Obj x4309751527 = PRIM_CDR(x4309751495);
Obj x4309751559 = PRIM_CDR(x4309751527);
Obj x4309751591 = PRIM_EQ(Nil, x4309751559);
if (True == x4309751591) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
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
coraCall0(co, x4310513575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513575);
return;
}
}
case 1:
{
Obj x4309752295= co->res;
Obj x4309751879 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), x4309751879, x4309752295);
return;
}
case 2:
{
Obj x4309752071= co->res;
Obj a = R[1];
Obj x4309751879 = R[2];
Obj x4309752263 = makeCons(a, Nil);
R[1] = x4309751879;
struct frame1 __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), x4309752071, x4309752263);
return;
}
case 3:
{
Obj x4309751879= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = x4309751879;
struct frame1 __curr = {
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
Obj x4310515271 = makeNative1(1, clofun36, 0, 1, closureRef(R[0], 0));
Obj x4309802471 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309802471) {
Obj x4309802695 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309802727 = PRIM_EQ(__symbolTable[78], x4309802695);
if (True == x4309802727) {
Obj x4309802951 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802983 = PRIM_ISCONS(x4309802951);
if (True == x4309802983) {
Obj x4309795015 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795047 = PRIM_CAR(x4309795015);
Obj lam = x4309795047;
Obj x4309795303 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795367 = PRIM_CDR(x4309795303);
Obj more = x4309795367;
Obj x4309795559 = makeCons(lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x4309795559);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310515271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515271);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356199 = makeNative1(1, clofun35, 0, 1, closureRef(R[0], 0));
Obj x4309800487 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309800487) {
Obj x4309800775 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309800807 = PRIM_EQ(__symbolTable[72], x4309800775);
if (True == x4309800807) {
Obj x4309801127 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801159 = PRIM_ISCONS(x4309801127);
if (True == x4309801159) {
Obj x4309801383 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801415 = PRIM_CAR(x4309801383);
Obj x = x4309801415;
Obj x4309801767 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801831 = PRIM_CDR(x4309801767);
Obj x4309801863 = PRIM_EQ(Nil, x4309801831);
if (True == x4309801863) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310356199);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356199);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356199);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356199);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356903 = makeNative1(1, clofun34, 0, 1, closureRef(R[0], 0));
Obj x4309804551 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309804551) {
Obj x4309804871 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309804903 = PRIM_EQ(__symbolTable[73], x4309804871);
if (True == x4309804903) {
Obj x4309805223 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805255 = PRIM_ISCONS(x4309805223);
if (True == x4309805255) {
Obj x4309805575 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805607 = PRIM_CAR(x4309805575);
Obj exp = x4309805607;
Obj x4309805991 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806695 = PRIM_CDR(x4309805991);
Obj x4309806727 = PRIM_ISCONS(x4309806695);
if (True == x4309806727) {
Obj x4309807015 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309807047 = PRIM_CDR(x4309807015);
Obj x4309799015 = PRIM_CAR(x4309807047);
Obj cont = x4309799015;
Obj x4309799399 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309799431 = PRIM_CDR(x4309799399);
Obj x4309799463 = PRIM_CDR(x4309799431);
Obj x4309799527 = PRIM_EQ(Nil, x4309799463);
if (True == x4309799527) {
Obj x4309799847 = makeCons(cont, Nil);
Obj x4309799879 = makeCons(exp, x4309799847);
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4309799879);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310356903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356903);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356903);
return;
}
}
case 1:
{
Obj x4309799911= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4309799911);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310357671 = makeNative1(2, clofun33, 0, 1, closureRef(R[0], 0));
Obj x4309835143 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309835143) {
Obj x4309835463 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309835495 = PRIM_EQ(__symbolTable[74], x4309835463);
if (True == x4309835495) {
Obj x4309803047 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803079 = PRIM_ISCONS(x4309803047);
if (True == x4309803079) {
Obj x4309803399 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803431 = PRIM_CAR(x4309803399);
Obj exp = x4309803431;
Obj x4309803815 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803847 = PRIM_CDR(x4309803815);
Obj x4309803879 = PRIM_EQ(Nil, x4309803847);
if (True == x4309803879) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310357671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357671);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310358535 = makeNative1(1, clofun32, 0, 1, closureRef(R[0], 0));
Obj x4309831783 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309831783) {
Obj x4309832071 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309832103 = PRIM_EQ(__symbolTable[75], x4309832071);
if (True == x4309832103) {
Obj x4309832391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309832423 = PRIM_ISCONS(x4309832391);
if (True == x4309832423) {
Obj x4309832711 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309832775 = PRIM_CAR(x4309832711);
Obj arg = x4309832775;
Obj x4309833063 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833095 = PRIM_CDR(x4309833063);
Obj x4309833127 = PRIM_ISCONS(x4309833095);
if (True == x4309833127) {
Obj x4309833607 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833639 = PRIM_CDR(x4309833607);
Obj x4309833671 = PRIM_CAR(x4309833639);
Obj body = x4309833671;
Obj x4309834119 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834151 = PRIM_CDR(x4309834119);
Obj x4309834183 = PRIM_CDR(x4309834151);
Obj x4309834311 = PRIM_EQ(Nil, x4309834183);
if (True == x4309834311) {
R[1] = arg;
struct frame1 __curr = {
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
coraCall0(co, x4310358535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310358535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310358535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310358535);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310358535);
return;
}
}
case 1:
{
Obj x4309834471= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x4309834471, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310359239 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310359239) {
Obj x4310359463 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4310359463;
Obj x4310359655 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4310359655;
Obj x4310359911 = makeCons(f, args);
struct frame1 __curr = {
.fn = clofun32,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4310359911);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj x4310359943= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4310359943);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580775 = R[1];
Obj x4310580935 = makeNative1(1, clofun30, 0, 1, x4310580775);
Obj x4310514279 = PRIM_ISCONS(x4310580775);
if (True == x4310514279) {
Obj x4310514567 = PRIM_CAR(x4310580775);
Obj x4310514631 = PRIM_EQ(__symbolTable[96], x4310514567);
if (True == x4310514631) {
Obj x4310515015 = PRIM_CDR(x4310580775);
Obj x4310515047 = PRIM_ISCONS(x4310515015);
if (True == x4310515047) {
Obj x4310515431 = PRIM_CDR(x4310580775);
Obj x4310515463 = PRIM_CAR(x4310515431);
Obj x4310356295 = PRIM_CDR(x4310580775);
Obj x4310356327 = PRIM_CDR(x4310356295);
Obj x4310356423 = PRIM_EQ(Nil, x4310356327);
if (True == x4310356423) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580935);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512231 = makeNative1(1, clofun29, 0, 1, closureRef(R[0], 0));
Obj x4310581127 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310581127) {
Obj x4310511911 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310512007 = PRIM_EQ(__symbolTable[93], x4310511911);
if (True == x4310512007) {
Obj x4310512519 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310512583 = PRIM_ISCONS(x4310512519);
if (True == x4310512583) {
Obj x4310512967 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310512999 = PRIM_CAR(x4310512967);
Obj x4310513479 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310513543 = PRIM_CDR(x4310513479);
Obj x4310513671 = PRIM_EQ(Nil, x4310513543);
if (True == x4310513671) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310512231);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512231);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512231);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310512231);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513095 = makeNative1(1, clofun28, 0, 1, closureRef(R[0], 0));
Obj x4310578503 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310578503) {
Obj x4310579079 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310579111 = PRIM_EQ(__symbolTable[90], x4310579079);
if (True == x4310579111) {
Obj x4310579431 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579495 = PRIM_ISCONS(x4310579431);
if (True == x4310579495) {
Obj x4310579815 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579847 = PRIM_CAR(x4310579815);
Obj x4310580391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310580455 = PRIM_CDR(x4310580391);
Obj x4310580519 = PRIM_EQ(Nil, x4310580455);
if (True == x4310580519) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310513095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513095);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513095);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310514151 = makeNative1(1, clofun27, 0, 1, closureRef(R[0], 0));
Obj x4308302247 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308302247) {
Obj x4308302471 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308302503 = PRIM_EQ(__symbolTable[84], x4308302471);
if (True == x4308302503) {
Obj x4308302727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308302759 = PRIM_ISCONS(x4308302727);
if (True == x4308302759) {
Obj x4308302983 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308303015 = PRIM_CAR(x4308302983);
Obj x4308303303 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308303335 = PRIM_CDR(x4308303303);
Obj x4308303367 = PRIM_EQ(Nil, x4308303335);
if (True == x4308303367) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310514151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514151);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310515239 = makeNative1(2, clofun26, 0, 1, closureRef(R[0], 0));
Obj x4308299911 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308299911) {
Obj x4308300135 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308300167 = PRIM_EQ(__symbolTable[77], x4308300135);
if (True == x4308300167) {
Obj x4308300391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308300423 = PRIM_ISCONS(x4308300391);
if (True == x4308300423) {
Obj x4308300647 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308300679 = PRIM_CAR(x4308300647);
Obj x4308301767 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308301799 = PRIM_CDR(x4308301767);
Obj x4308301831 = PRIM_EQ(Nil, x4308301799);
if (True == x4308301831) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310515239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515239);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515239);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356167 = makeNative1(1, clofun25, 0, 0);
Obj x4308372039 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308372039) {
Obj x4308372263 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308372295 = PRIM_EQ(__symbolTable[78], x4308372263);
if (True == x4308372295) {
Obj x4308372519 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308372551 = PRIM_ISCONS(x4308372519);
if (True == x4308372551) {
Obj x4308372775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308372807 = PRIM_CAR(x4308372775);
Obj label = x4308372807;
Obj x4308373031 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308373063 = PRIM_CDR(x4308373031);
R[1] = x4310356167;
struct frame1 __curr = {
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
coraCall0(co, x4310356167);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356167);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356167);
return;
}
}
case 1:
{
Obj x4308373223= co->res;
Obj x4310356167 = R[1];
if (True == x4308373223) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310356167);
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
Obj x4310577383 = R[1];
Obj x4310577511 = R[2];
Obj x4308447015 = PRIM_EQ(Nil, x4310577383);
if (True == x4308447015) {
coraReturn(co, Nil);
return;
} else {
Obj x4310578695 = makeNative1(2, clofun23, 0, 2, x4310577383, x4310577511);
Obj x4308370215 = PRIM_ISCONS(x4310577383);
if (True == x4308370215) {
Obj x4308370375 = PRIM_CAR(x4310577383);
Obj x = x4308370375;
Obj x4308370535 = PRIM_CDR(x4310577383);
Obj y = x4308370535;
R[1] = y;
R[2] = x4310577511;
R[3] = x4310578695;
struct frame1 __curr = {
.fn = clofun24,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, x4310577511);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578695);
return;
}
}
}
case 1:
{
Obj x4308370695= co->res;
Obj y = R[1];
Obj x4310577511 = R[2];
Obj x4310578695 = R[3];
if (True == x4308370695) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), y, x4310577511);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578695);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308369479 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308369479) {
Obj x4308369639 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4308369639;
Obj x4308369799 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4308369799;
R[1] = x;
struct frame1 __curr = {
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
Obj x4308369959= co->res;
Obj x = R[1];
Obj x4308369991 = makeCons(x, x4308369959);
coraReturn(co, x4308369991);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577223 = R[1];
Obj x4310577351 = R[2];
Obj x4308444935 = PRIM_EQ(Nil, x4310577223);
if (True == x4308444935) {
coraReturn(co, x4310577351);
return;
} else {
Obj x4310578407 = makeNative1(2, clofun21, 0, 2, x4310577223, x4310577351);
Obj x4308445959 = PRIM_ISCONS(x4310577223);
if (True == x4308445959) {
Obj x4308446119 = PRIM_CAR(x4310577223);
Obj x = x4308446119;
Obj x4308446279 = PRIM_CDR(x4310577223);
Obj y = x4308446279;
R[1] = y;
R[2] = x4310577351;
R[3] = x4310578407;
struct frame1 __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, x4310577351);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578407);
return;
}
}
}
case 1:
{
Obj x4308446439= co->res;
Obj y = R[1];
Obj x4310577351 = R[2];
Obj x4310578407 = R[3];
if (True == x4308446439) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), y, x4310577351);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578407);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308445223 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308445223) {
Obj x4308445383 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4308445383;
Obj x4308445543 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4308445543;
R[1] = x;
struct frame1 __curr = {
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
Obj x4308445703= co->res;
Obj x = R[1];
Obj x4308445735 = makeCons(x, x4308445703);
coraReturn(co, x4308445735);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513607 = R[1];
Obj x4310513703 = R[2];
Obj x4310513735 = R[3];
Obj x4310577287 = makeNative1(2, clofun19, 1, 3, x4310513607, x4310513735, x4310513703);
R[1] = x4310513735;
R[2] = x4310577287;
struct frame1 __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), x4310513735);
return;
}
case 1:
{
Obj x4308444551= co->res;
Obj x4310577287 = R[1];
if (True == x4308444551) {
co->ctx.sp = R;
coraCall1(co, x4310577287, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310577287, False);
return;
}
}
case 2:
{
Obj x4308444391= co->res;
Obj x4310513735 = R[1];
Obj x4310577287 = R[2];
if (True == x4308444391) {
co->ctx.sp = R;
coraCall1(co, x4310577287, True);
return;
} else {
R[1] = x4310577287;
struct frame1 __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), x4310513735);
return;
}
}
case 3:
{
Obj x4308444071= co->res;
Obj x4310513735 = R[1];
Obj x4310577287 = R[2];
if (True == x4308444071) {
co->ctx.sp = R;
coraCall1(co, x4310577287, True);
return;
} else {
Obj x4308444231 = primIsString(x4310513735);
if (True == x4308444231) {
co->ctx.sp = R;
coraCall1(co, x4310577287, True);
return;
} else {
R[1] = x4310513735;
R[2] = x4310577287;
struct frame1 __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[82]), x4310513735);
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
Obj x4310577607 = R[1];
if (True == x4310577607) {
Obj x4309801479 = makeCons(closureRef(R[0], 1), Nil);
Obj x4309801511 = makeCons(__symbolTable[96], x4309801479);
coraReturn(co, x4309801511);
return;
} else {
Obj x4310514759 = makeNative1(3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj x4308462599 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308462599) {
Obj x4308462823 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308462855 = PRIM_EQ(__symbolTable[84], x4308462823);
if (True == x4308462855) {
Obj x4308463079 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308463111 = PRIM_ISCONS(x4308463079);
if (True == x4308463111) {
Obj x4308463335 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308463367 = PRIM_CAR(x4308463335);
Obj x = x4308463367;
Obj x4308443175 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308443207 = PRIM_CDR(x4308443175);
Obj x4308443239 = PRIM_EQ(Nil, x4308443207);
if (True == x4308443239) {
R[1] = x;
struct frame1 __curr = {
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
coraCall0(co, x4310514759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514759);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514759);
return;
}
}
}
case 1:
{
Obj x4308443399= co->res;
Obj x = R[1];
Obj x4308443559 = makeCons(x, Nil);
Obj x4308443591 = makeCons(__symbolTable[96], x4308443559);
coraReturn(co, x4308443591);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309801799 = primIsSymbol(closureRef(R[0], 0));
if (True == x4309801799) {
struct frame1 __curr = {
.fn = clofun18,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4310356583 = makeNative1(1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4308459719 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308459719) {
Obj x4308459943 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308459975 = PRIM_EQ(__symbolTable[89], x4308459943);
if (True == x4308459975) {
Obj x4308460199 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460231 = PRIM_ISCONS(x4308460199);
if (True == x4308460231) {
Obj x4308460455 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460487 = PRIM_CAR(x4308460455);
Obj args = x4308460487;
Obj x4308460775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460807 = PRIM_CDR(x4308460775);
Obj x4308460839 = PRIM_ISCONS(x4308460807);
if (True == x4308460839) {
Obj x4308461127 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461159 = PRIM_CDR(x4308461127);
Obj x4308461191 = PRIM_CAR(x4308461159);
Obj body = x4308461191;
Obj x4308461543 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461575 = PRIM_CDR(x4308461543);
Obj x4308461607 = PRIM_CDR(x4308461575);
Obj x4308461639 = PRIM_EQ(Nil, x4308461607);
if (True == x4308461639) {
R[1] = body;
R[2] = args;
struct frame1 __curr = {
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
coraCall0(co, x4310356583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356583);
return;
}
}
}
case 1:
{
Obj x4309802119= co->res;
Obj x4309802279 = makeCons(closureRef(R[0], 0), Nil);
Obj x4309802311 = makeCons(__symbolTable[93], x4309802279);
coraReturn(co, x4309802311);
return;
}
case 2:
{
Obj x4309801959= co->res;
if (True == x4309801959) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
struct frame1 __curr = {
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
Obj x4308462023= co->res;
Obj args = R[1];
Obj x4308462055 = makeCons(x4308462023, Nil);
Obj x4308462087 = makeCons(args, x4308462055);
Obj x4308462119 = makeCons(__symbolTable[89], x4308462087);
coraReturn(co, x4308462119);
return;
}
case 4:
{
Obj x4308461991= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
struct frame1 __curr = {
.fn = clofun18,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), x4308461991, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578727 = makeNative1(2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4308467975 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308467975) {
Obj x4308468199 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308468231 = PRIM_EQ(__symbolTable[87], x4308468199);
if (True == x4308468231) {
Obj x4308468455 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308468487 = PRIM_ISCONS(x4308468455);
if (True == x4308468487) {
Obj x4308468775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308468807 = PRIM_CAR(x4308468775);
Obj x4308468839 = PRIM_ISCONS(x4308468807);
if (True == x4308468839) {
Obj x4308469191 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308469223 = PRIM_CAR(x4308469191);
Obj x4308469255 = PRIM_CAR(x4308469223);
Obj x4308469287 = PRIM_EQ(__symbolTable[87], x4308469255);
if (True == x4308469287) {
Obj x4308469575 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308469607 = PRIM_CAR(x4308469575);
Obj x4308469639 = PRIM_CDR(x4308469607);
Obj exp1 = x4308469639;
Obj x4308469863 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308469895 = PRIM_CDR(x4308469863);
Obj exp2 = x4308469895;
Obj x4308470055 = primGenSym();
Obj f = x4308470055;
Obj x4308470215 = primGenSym();
Obj v = x4308470215;
Obj x4308470695 = makeCons(v, Nil);
Obj x4308470919 = makeCons(v, exp2);
Obj x4308470951 = makeCons(__symbolTable[87], x4308470919);
Obj x4308470983 = makeCons(x4308470951, Nil);
Obj x4308471015 = makeCons(x4308470695, x4308470983);
Obj x4308471047 = makeCons(__symbolTable[89], x4308471015);
Obj x4308471335 = makeCons(__symbolTable[87], exp1);
Obj x4308471367 = makeCons(x4308471335, Nil);
Obj x4308471399 = makeCons(f, x4308471367);
Obj x4308471431 = makeCons(x4308471399, Nil);
Obj x4308471463 = makeCons(x4308471047, x4308471431);
Obj x4308471495 = makeCons(f, x4308471463);
Obj x4308471527 = makeCons(__symbolTable[86], x4308471495);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4308471527);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578727);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578727);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578727);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578727);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578727);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580359 = makeNative1(2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4308524327 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308524327) {
Obj x4308524551 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308524583 = PRIM_EQ(__symbolTable[87], x4308524551);
if (True == x4308524583) {
Obj x4308524743 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308524743;
R[1] = args;
struct frame1 __curr = {
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
coraCall0(co, x4310580359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580359);
return;
}
}
case 1:
{
Obj x4308524999= co->res;
Obj x4308525031 = makeCons(__symbolTable[87], x4308524999);
coraReturn(co, x4308525031);
return;
}
case 2:
{
Obj x4308524967= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun16,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4308524967, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310511687 = makeNative1(3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4308521447 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308521447) {
Obj x4308521671 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308521703 = PRIM_EQ(__symbolTable[85], x4308521671);
if (True == x4308521703) {
Obj x4308521927 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308521959 = PRIM_ISCONS(x4308521927);
if (True == x4308521959) {
Obj x4308522183 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522215 = PRIM_CAR(x4308522183);
Obj x = x4308522215;
Obj x4308522503 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522535 = PRIM_CDR(x4308522503);
Obj x4308522567 = PRIM_ISCONS(x4308522535);
if (True == x4308522567) {
Obj x4308522855 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522887 = PRIM_CDR(x4308522855);
Obj x4308522919 = PRIM_CAR(x4308522887);
Obj y = x4308522919;
Obj x4308523271 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308523303 = PRIM_CDR(x4308523271);
Obj x4308523335 = PRIM_CDR(x4308523303);
Obj x4308523367 = PRIM_EQ(Nil, x4308523335);
if (True == x4308523367) {
R[1] = y;
struct frame1 __curr = {
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
coraCall0(co, x4310511687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310511687);
return;
}
}
case 1:
{
Obj x4308523751= co->res;
Obj x4308523591 = R[1];
Obj x4308523783 = makeCons(x4308523751, Nil);
Obj x4308523815 = makeCons(x4308523591, x4308523783);
Obj x4308523847 = makeCons(__symbolTable[85], x4308523815);
coraReturn(co, x4308523847);
return;
}
case 2:
{
Obj x4308523591= co->res;
Obj y = R[1];
R[1] = x4308523591;
struct frame1 __curr = {
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
Obj x4310513319 = makeNative1(1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309709159 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309709159) {
Obj x4309709383 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309709415 = PRIM_EQ(__symbolTable[86], x4309709383);
if (True == x4309709415) {
Obj x4309709639 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709671 = PRIM_ISCONS(x4309709639);
if (True == x4309709671) {
Obj x4309709895 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709927 = PRIM_CAR(x4309709895);
Obj a = x4309709927;
Obj x4309710311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710343 = PRIM_CDR(x4309710311);
Obj x4309710375 = PRIM_ISCONS(x4309710343);
if (True == x4309710375) {
Obj x4309710663 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710695 = PRIM_CDR(x4309710663);
Obj x4309710727 = PRIM_CAR(x4309710695);
Obj b = x4309710727;
Obj x4309711079 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711111 = PRIM_CDR(x4309711079);
Obj x4309711143 = PRIM_CDR(x4309711111);
Obj x4309711175 = PRIM_ISCONS(x4309711143);
if (True == x4309711175) {
Obj x4309711527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711559 = PRIM_CDR(x4309711527);
Obj x4309711591 = PRIM_CDR(x4309711559);
Obj x4309711623 = PRIM_CAR(x4309711591);
Obj c = x4309711623;
Obj x4309712039 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309712071 = PRIM_CDR(x4309712039);
Obj x4309712103 = PRIM_CDR(x4309712071);
Obj x4309712135 = PRIM_CDR(x4309712103);
Obj x4309712167 = PRIM_EQ(Nil, x4309712135);
if (True == x4309712167) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
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
coraCall0(co, x4310513319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513319);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513319);
return;
}
}
case 1:
{
Obj x4309712711= co->res;
Obj x4309712455 = R[1];
Obj a = R[2];
Obj x4309712743 = makeCons(x4309712711, Nil);
Obj x4309712775 = makeCons(x4309712455, x4309712743);
Obj x4309712807 = makeCons(a, x4309712775);
Obj x4309712839 = makeCons(__symbolTable[86], x4309712807);
coraReturn(co, x4309712839);
return;
}
case 2:
{
Obj x4309712455= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x4309712679 = makeCons(a, closureRef(R[0], 1));
R[1] = x4309712455;
R[2] = a;
struct frame1 __curr = {
.fn = clofun14,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), x4309712679, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310514919 = makeNative1(4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309798087 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309798087) {
Obj x4309798311 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309798343 = PRIM_ISCONS(x4309798311);
if (True == x4309798343) {
Obj x4309798631 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309798663 = PRIM_CAR(x4309798631);
Obj x4309798695 = PRIM_EQ(__symbolTable[89], x4309798663);
if (True == x4309798695) {
Obj x4309749799 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309749831 = PRIM_CDR(x4309749799);
Obj exp1 = x4309749831;
Obj x4309750055 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309750119 = PRIM_ISCONS(x4309750055);
if (True == x4309750119) {
Obj x4309751207 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751239 = PRIM_CAR(x4309751207);
Obj x4309751271 = PRIM_ISCONS(x4309751239);
if (True == x4309751271) {
Obj x4309751687 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751719 = PRIM_CAR(x4309751687);
Obj x4309751751 = PRIM_CAR(x4309751719);
Obj x4309751783 = PRIM_EQ(__symbolTable[87], x4309751751);
if (True == x4309751783) {
Obj x4309752103 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309752135 = PRIM_CAR(x4309752103);
Obj x4309752167 = PRIM_CDR(x4309752135);
Obj exp2 = x4309752167;
Obj x4309752455 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309752487 = PRIM_CDR(x4309752455);
Obj x4309752519 = PRIM_EQ(Nil, x4309752487);
if (True == x4309752519) {
Obj x4309752679 = primGenSym();
Obj f = x4309752679;
Obj x4309753031 = makeCons(__symbolTable[89], exp1);
Obj x4309753319 = makeCons(__symbolTable[87], exp2);
Obj x4309753447 = makeCons(x4309753319, Nil);
Obj x4309753479 = makeCons(f, x4309753447);
Obj x4309753511 = makeCons(x4309753479, Nil);
Obj x4309753543 = makeCons(x4309753031, x4309753511);
Obj x4309753575 = makeCons(f, x4309753543);
Obj x4309753607 = makeCons(__symbolTable[86], x4309753575);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4309753607);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514919);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356615 = makeNative1(1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj x4309795335 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309795335) {
Obj x4309795495 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x4309795495;
Obj x4309795655 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4309795655;
R[1] = op;
R[2] = args;
R[3] = x4310356615;
struct frame1 __curr = {
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
coraCall0(co, x4310356615);
return;
}
}
case 1:
{
Obj x4309796743= co->res;
Obj x4309796551 = R[1];
Obj x4309796775 = makeCons(x4309796551, x4309796743);
coraReturn(co, x4309796775);
return;
}
case 2:
{
Obj x4309796711= co->res;
Obj args = R[1];
Obj x4309796551 = R[2];
R[1] = x4309796551;
struct frame1 __curr = {
.fn = clofun12,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4309796711, args);
return;
}
case 3:
{
Obj x4309797639= co->res;
Obj tmp = R[1];
Obj x4309797671 = makeCons(x4309797639, Nil);
Obj x4309797703 = makeCons(tmp, x4309797671);
Obj x4309797735 = makeCons(__symbolTable[89], x4309797703);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4309797735);
return;
}
case 4:
{
Obj x4309797191= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = x4309797191;
Obj x4309797607 = makeCons(op, args);
R[1] = tmp;
struct frame1 __curr = {
.fn = clofun12,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[88]), x4309797607, tmp);
return;
}
case 5:
{
Obj x4309796135= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = x4309796135;
Obj x4309796295 = PRIM_EQ(required, provided);
if (True == x4309796295) {
Obj x4309796519 = makeCons(op, Nil);
Obj x4309796551 = makeCons(__symbolTable[90], x4309796519);
R[1] = args;
R[2] = x4309796551;
struct frame1 __curr = {
.fn = clofun12,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj x4309796935 = PRIM_GT(required, provided);
if (True == x4309796935) {
Obj x4309797159 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
struct frame1 __curr = {
.fn = clofun12,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x4309797159, Nil);
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
Obj x4309795975= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = x4309795975;
R[1] = required;
R[2] = op;
R[3] = args;
struct frame1 __curr = {
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
Obj x4309795815= co->res;
Obj op = R[1];
Obj args = R[2];
Obj x4310356615 = R[3];
if (True == x4309795815) {
R[1] = op;
R[2] = args;
struct frame1 __curr = {
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
coraCall0(co, x4310356615);
return;
}
}
}
}

static void clofun11(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
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
Obj x4309795175= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4309795175, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310512071 = R[1];
Obj x4310512199 = R[2];
Obj x4309800551 = PRIM_EQ(MAKE_NUMBER(0), x4310512071);
if (True == x4309800551) {
coraReturn(co, x4310512199);
return;
} else {
Obj x4309800711 = PRIM_SUB(x4310512071, MAKE_NUMBER(1));
Obj x4309800871 = primGenSym();
Obj x4309800903 = makeCons(x4309800871, x4310512199);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[98]), x4309800711, x4309800903);
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
struct frame1 __curr = {
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
Obj x4309800103= co->res;
Obj find = R[1];
if (True == x4309800103) {
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
Obj x4309799943= co->res;
Obj find = x4309799943;
R[1] = find;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4309799495= co->res;
Obj find = R[1];
if (True == x4309799495) {
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
Obj x4309799335= co->res;
Obj find = x4309799335;
R[1] = find;
struct frame1 __curr = {
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
struct frame1 __curr = {
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
Obj x4309798919= co->res;
Obj x4309798951 = primNot(x4309798919);
coraReturn(co, x4309798951);
return;
}
case 2:
{
Obj x4309807079= co->res;
struct frame1 __curr = {
.fn = clofun7,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), x4309807079);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580263 = R[1];
Obj x4310580295 = R[2];
Obj x4309831847 = PRIM_EQ(Nil, x4310580295);
if (True == x4309831847) {
coraReturn(co, False);
return;
} else {
Obj x4309832007 = PRIM_ISCONS(x4310580295);
if (True == x4309832007) {
Obj x4309832167 = PRIM_CAR(x4310580295);
Obj hd = x4309832167;
Obj x4309832327 = PRIM_CDR(x4310580295);
Obj tl = x4309832327;
R[1] = x4310580263;
R[2] = tl;
struct frame1 __curr = {
.fn = clofun6,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), x4310580263, hd);
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
Obj x4309832551= co->res;
Obj x4310580263 = R[1];
Obj tl = R[2];
Obj x4309832583 = PRIM_LT(x4309832551, MAKE_NUMBER(0));
if (True == x4309832583) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[123]), x4310580263, tl);
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
Obj x4309710055 = R[1];
Obj x4309710087 = R[2];
Obj x4309710183 = R[3];
Obj x4310357927 = PRIM_EQ(Nil, x4309710183);
if (True == x4310357927) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x4310578215 = makeNative1(1, clofun3, 0, 3, x4309710183, x4309710055, x4309710087);
Obj x4310358951 = PRIM_ISCONS(x4309710183);
if (True == x4310358951) {
Obj x4310359111 = PRIM_CAR(x4309710183);
Obj a = x4310359111;
Obj x4310359271 = PRIM_CDR(x4309710183);
Obj x4310359431 = PRIM_EQ(x4309710087, a);
if (True == x4310359431) {
coraReturn(co, x4309710055);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578215);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578215);
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
Obj x4310358215 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310358215) {
Obj x4310358375 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310358567 = PRIM_CDR(closureRef(R[0], 0));
Obj b = x4310358567;
Obj x4310358727 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[125]), x4310358727, closureRef(R[0], 2), b);
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
Obj x4309753351 = R[1];
Obj x4309753383 = R[2];
Obj x4309753415 = R[3];
Obj x4310356743 = PRIM_EQ(Nil, x4309753415);
if (True == x4310356743) {
coraReturn(co, x4309753383);
return;
} else {
Obj x4310356935 = PRIM_ISCONS(x4309753415);
if (True == x4310356935) {
Obj x4310357095 = PRIM_CAR(x4309753415);
Obj x = x4310357095;
Obj x4310357255 = PRIM_CDR(x4309753415);
Obj y = x4310357255;
R[1] = x4309753351;
R[2] = y;
struct frame1 __curr = {
.fn = clofun2,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4309753351, x4309753383, x);
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
Obj x4310357415= co->res;
Obj x4309753351 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), x4309753351, x4310357415, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309751431 = R[1];
Obj x4309751463 = R[2];
Obj x4310512935 = PRIM_EQ(Nil, x4309751463);
if (True == x4310512935) {
coraReturn(co, Nil);
return;
} else {
Obj x4309752007 = makeNative1(1, clofun0, 0, 2, x4309751463, x4309751431);
Obj x4310514215 = PRIM_ISCONS(x4309751463);
if (True == x4310514215) {
Obj x4310514439 = PRIM_CAR(x4309751463);
Obj x4310514471 = PRIM_ISCONS(x4310514439);
if (True == x4310514471) {
Obj x4310514727 = PRIM_CAR(x4309751463);
Obj x4310514823 = PRIM_CAR(x4310514727);
Obj x = x4310514823;
Obj x4310515079 = PRIM_CAR(x4309751463);
Obj x4310515111 = PRIM_CDR(x4310515079);
Obj y = x4310515111;
Obj x4310515335 = PRIM_CDR(x4309751463);
Obj x4310515495 = PRIM_EQ(x4309751431, x);
if (True == x4310515495) {
Obj x4310515591 = makeCons(x, y);
coraReturn(co, x4310515591);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4309752007);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4309752007);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4309752007);
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
Obj x4310513351 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310513351) {
Obj x4310513639 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310513863 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4310513863;
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

