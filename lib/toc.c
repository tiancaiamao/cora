#include "types.h"
#include "runtime1.h"

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


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
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
co->ctx.fn = clofun145;
co->ctx.label = 0;
}

static void clofun145(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
.fn = clofun145,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), makeCString("cora/lib/toc/internal"));
return;
}
case 1:
{
Obj x105553420926119= co->res;
struct frame1 __curr = {
.fn = clofun145,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), makeCString("cora/lib/io"));
return;
}
case 2:
{
Obj x105553420926471= co->res;
struct frame1 __curr = {
.fn = clofun145,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), makeCString("cora/lib/hash-h"));
return;
}
case 3:
{
Obj x105553420926823= co->res;
Obj x105553420927239 = primSet(co, __symbolTable[129], Nil);
Obj x105553420936935 = primSet(co, __symbolTable[128], makeNative1(3, clofun1, 2, 0));
Obj x105553420941223 = primSet(co, __symbolTable[126], makeNative1(4, clofun2, 3, 0));
Obj x105553421079527 = primSet(co, __symbolTable[125], makeNative1(4, clofun4, 3, 0));
Obj x105553421080551 = primSet(co, __symbolTable[124], makeNative1(3, clofun5, 2, 0));
Obj x105553421085479 = primSet(co, __symbolTable[123], makeNative1(3, clofun6, 2, 0));
Obj x105553421086471 = makeCons(makeCString("primSet"), Nil);
Obj x105553421086631 = makeCons(MAKE_NUMBER(2), x105553421086471);
Obj x105553421086791 = makeCons(__symbolTable[121], x105553421086631);
Obj x105553421087591 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x105553421087751 = makeCons(MAKE_NUMBER(1), x105553421087591);
Obj x105553421087911 = makeCons(__symbolTable[120], x105553421087751);
Obj x105553421088711 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x105553421088871 = makeCons(MAKE_NUMBER(1), x105553421088711);
Obj x105553421089031 = makeCons(__symbolTable[119], x105553421088871);
Obj x105553421089831 = makeCons(makeCString("makeCons"), Nil);
Obj x105553421089991 = makeCons(MAKE_NUMBER(2), x105553421089831);
Obj x105553421090151 = makeCons(__symbolTable[118], x105553421089991);
Obj x105553421090951 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x105553421091111 = makeCons(MAKE_NUMBER(1), x105553421090951);
Obj x105553421091271 = makeCons(__symbolTable[117], x105553421091111);
Obj x105553421092071 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x105553421092231 = makeCons(MAKE_NUMBER(2), x105553421092071);
Obj x105553421092391 = makeCons(__symbolTable[116], x105553421092231);
Obj x105553421093191 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x105553421093351 = makeCons(MAKE_NUMBER(2), x105553421093191);
Obj x105553421093511 = makeCons(__symbolTable[115], x105553421093351);
Obj x105553421094311 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x105553421094471 = makeCons(MAKE_NUMBER(2), x105553421094311);
Obj x105553421094631 = makeCons(__symbolTable[114], x105553421094471);
Obj x105553421095431 = makeCons(makeCString("primDiv"), Nil);
Obj x105553421095591 = makeCons(MAKE_NUMBER(2), x105553421095431);
Obj x105553421095751 = makeCons(__symbolTable[113], x105553421095591);
Obj x105553421096551 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x105553421096711 = makeCons(MAKE_NUMBER(2), x105553421096551);
Obj x105553421096871 = makeCons(__symbolTable[112], x105553421096711);
Obj x105553421097671 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x105553421097831 = makeCons(MAKE_NUMBER(2), x105553421097671);
Obj x105553421097991 = makeCons(__symbolTable[111], x105553421097831);
Obj x105553421098791 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x105553421098951 = makeCons(MAKE_NUMBER(2), x105553421098791);
Obj x105553421099111 = makeCons(__symbolTable[110], x105553421098951);
Obj x105553421099911 = makeCons(makeCString("primGenSym"), Nil);
Obj x105553421100071 = makeCons(MAKE_NUMBER(0), x105553421099911);
Obj x105553421100231 = makeCons(__symbolTable[109], x105553421100071);
Obj x105553421101031 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x105553421101191 = makeCons(MAKE_NUMBER(1), x105553421101031);
Obj x105553421101351 = makeCons(__symbolTable[108], x105553421101191);
Obj x105553421102151 = makeCons(makeCString("primNot"), Nil);
Obj x105553421102311 = makeCons(MAKE_NUMBER(1), x105553421102151);
Obj x105553421102471 = makeCons(__symbolTable[107], x105553421102311);
Obj x105553421103271 = makeCons(makeCString("primIsNumber"), Nil);
Obj x105553421103431 = makeCons(MAKE_NUMBER(1), x105553421103271);
Obj x105553421103591 = makeCons(__symbolTable[106], x105553421103431);
Obj x105553421104391 = makeCons(makeCString("primIsString"), Nil);
Obj x105553421104551 = makeCons(MAKE_NUMBER(1), x105553421104391);
Obj x105553421104711 = makeCons(__symbolTable[105], x105553421104551);
Obj x105553421104903 = makeCons(x105553421104711, Nil);
Obj x105553421105063 = makeCons(x105553421103591, x105553421104903);
Obj x105553421105223 = makeCons(x105553421102471, x105553421105063);
Obj x105553421105383 = makeCons(x105553421101351, x105553421105223);
Obj x105553421105543 = makeCons(x105553421100231, x105553421105383);
Obj x105553421105703 = makeCons(x105553421099111, x105553421105543);
Obj x105553421105863 = makeCons(x105553421097991, x105553421105703);
Obj x105553421106023 = makeCons(x105553421096871, x105553421105863);
Obj x105553421106183 = makeCons(x105553421095751, x105553421106023);
Obj x105553421106343 = makeCons(x105553421094631, x105553421106183);
Obj x105553421106503 = makeCons(x105553421093511, x105553421106343);
Obj x105553421106663 = makeCons(x105553421092391, x105553421106503);
Obj x105553421106823 = makeCons(x105553421091271, x105553421106663);
Obj x105553421106983 = makeCons(x105553421090151, x105553421106823);
Obj x105553421107143 = makeCons(x105553421089031, x105553421106983);
Obj x105553421107303 = makeCons(x105553421087911, x105553421107143);
Obj x105553421107463 = makeCons(x105553421086791, x105553421107303);
Obj x105553421107623 = primSet(co, __symbolTable[122], x105553421107463);
Obj x105553421109703 = primSet(co, __symbolTable[104], makeNative1(2, clofun7, 1, 0));
Obj x105553421112071 = primSet(co, __symbolTable[102], makeNative1(2, clofun8, 1, 0));
Obj x105553421114439 = primSet(co, __symbolTable[100], makeNative1(2, clofun9, 1, 0));
Obj x105553421117319 = primSet(co, __symbolTable[98], makeNative1(3, clofun10, 2, 0));
Obj x105553421227335 = primSet(co, __symbolTable[97], makeNative1(4, clofun20, 3, 0));
Obj x105553421235399 = primSet(co, __symbolTable[81], makeNative1(4, clofun22, 2, 0));
Obj x105553421243463 = primSet(co, __symbolTable[80], makeNative1(4, clofun24, 2, 0));
Obj x105553421150343 = primSet(co, __symbolTable[79], makeNative1(2, clofun31, 1, 0));
Obj x105553421381959 = primSet(co, __symbolTable[76], makeNative1(2, clofun41, 1, 0));
Obj x105553421290471 = primSet(co, __symbolTable[71], makeNative1(4, clofun44, 2, 0));
Obj x105553421292039 = primSet(co, __symbolTable[70], makeNative1(2, clofun45, 1, 0));
Obj x105553421498951 = primSet(co, __symbolTable[69], makeNative1(3, clofun54, 2, 0));
Obj x105553421513863 = primSet(co, __symbolTable[68], makeNative1(4, clofun57, 3, 0));
Obj x105553421425991 = primSet(co, __symbolTable[63], makeNative1(3, clofun61, 2, 0));
Obj x105553421446759 = primSet(co, __symbolTable[61], makeNative1(5, clofun66, 4, 0));
Obj x105553421453255 = primSet(co, __symbolTable[60], makeNative1(6, clofun69, 5, 0));
Obj x105553421455975 = primSet(co, __symbolTable[58], makeNative1(3, clofun71, 2, 0));
Obj x105553421461671 = primSet(co, __symbolTable[57], makeNative1(2, clofun73, 1, 0));
Obj x105553421619751 = primSet(co, __symbolTable[56], makeNative1(6, clofun75, 2, 0));
Obj x105553421624903 = primSet(co, __symbolTable[54], makeNative1(4, clofun76, 2, 0));
Obj x105553421628359 = primSet(co, __symbolTable[66], makeNative1(3, clofun77, 2, 0));
Obj x105553421631399 = primSet(co, __symbolTable[94], makeNative1(4, clofun78, 2, 0));
Obj x105553421635079 = primSet(co, __symbolTable[51], makeNative1(4, clofun79, 3, 0));
Obj x105553421636103 = primSet(co, __symbolTable[50], makeNative1(3, clofun80, 2, 0));
Obj x105553421641095 = primSet(co, __symbolTable[49], makeNative1(6, clofun82, 5, 0));
Obj x105553421646087 = primSet(co, __symbolTable[45], makeNative1(6, clofun84, 5, 0));
Obj x105553421728743 = primSet(co, __symbolTable[46], makeNative1(6, clofun97, 5, 0));
Obj x105553421869255 = primSet(co, __symbolTable[43], makeNative1(6, clofun99, 5, 0));
Obj x105553421882567 = primSet(co, __symbolTable[40], makeNative1(8, clofun101, 5, 0));
Obj x105553421884135 = primSet(co, __symbolTable[42], makeNative1(3, clofun102, 2, 0));
Obj x105553421886919 = primSet(co, __symbolTable[39], makeNative1(3, clofun103, 2, 0));
Obj x105553421887943 = primSet(co, __symbolTable[38], makeNative1(3, clofun104, 2, 0));
Obj x105553421888903 = primSet(co, __symbolTable[37], makeNative1(2, clofun105, 1, 0));
Obj x105553421889863 = primSet(co, __symbolTable[36], makeNative1(2, clofun106, 1, 0));
Obj x105553421890823 = primSet(co, __symbolTable[35], makeNative1(2, clofun107, 1, 0));
Obj x105553421895879 = primSet(co, __symbolTable[34], makeNative1(3, clofun108, 1, 0));
Obj x105553421900455 = primSet(co, __symbolTable[32], makeNative1(3, clofun109, 2, 0));
struct frame1 __curr = {
.fn = clofun145,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[31]), __symbolTable[30], makeNative1(2, clofun110, 1, 0));
return;
}
case 4:
{
Obj x105553421902759= co->res;
Obj x105553421906087 = primSet(co, __symbolTable[28], makeNative1(3, clofun111, 2, 0));
Obj x105553421910311 = primSet(co, __symbolTable[27], makeNative1(3, clofun112, 2, 0));
Obj x105553421924711 = primSet(co, __symbolTable[26], makeNative1(7, clofun114, 3, 0));
Obj x105553421804871 = primSet(co, __symbolTable[25], makeNative1(4, clofun116, 3, 0));
Obj x105553421811623 = primSet(co, __symbolTable[23], makeNative1(4, clofun119, 3, 0));
Obj x105553421837447 = primSet(co, __symbolTable[22], makeNative1(2, clofun124, 1, 0));
Obj x105553421991943 = primSet(co, __symbolTable[17], makeNative1(5, clofun127, 4, 0));
Obj x105553422022567 = primSet(co, __symbolTable[9], makeNative1(3, clofun132, 2, 0));
Obj x105553422023783 = primSet(co, __symbolTable[8], makeNative1(3, clofun133, 2, 0));
Obj x105553422036839 = primSet(co, __symbolTable[6], makeNative1(2, clofun141, 1, 0));
Obj x105553422037223 = primSet(co, __symbolTable[7], False);
Obj x105553422045511 = primSet(co, __symbolTable[5], makeNative1(3, clofun143, 1, 0));
Obj x105553422051303 = primSet(co, __symbolTable[3], makeNative1(4, clofun144, 2, 0));
coraReturn(co, x105553422051303);
return;
}
}
}

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj from = R[1];
Obj to = R[2];
Obj x105553422045991 = primGenSym();
Obj globals = x105553422045991;
Obj x105553422046375 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
.fn = clofun144,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[28]), globals);
return;
}
case 1:
{
Obj x105553422046791= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x105553422046791;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
.fn = clofun144,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[5]), from);
return;
}
case 2:
{
Obj x105553422047239= co->res;
Obj x105553422046791 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x105553422046791;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
.fn = clofun144,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);

 printf("before call macroexpand:\n");
 printObj(stderr, x105553422047239);
coraCall1(co, globalRef(__symbolTable[2]), x105553422047239);
return;
}
case 3:
{
Obj x105553422047399= co->res;
 printf("after call macroexpand:\n");
 printObj(stderr, co->res);
Obj x105553422046791 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
struct frame1 __curr = {
.fn = clofun144,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x105553422046791, x105553422047399);
return;
}
case 4:
{
Obj x105553422047559= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = x105553422047559;
R[1] = globals;
R[2] = bc;
struct frame1 __curr = {
.fn = clofun144,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[1]), to);
return;
}
case 5:
{
Obj x105553422047911= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = x105553422047911;
R[1] = bc;
R[2] = stream;
struct frame1 __curr = {
.fn = clofun144,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), globals);
return;
}
case 6:
{
Obj x105553422048455= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
struct frame1 __curr = {
.fn = clofun144,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[23]), stream, bc, x105553422048455);
return;
}
case 7:
{
Obj x105553422048679= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), stream);
return;
}
}
}

static void clofun143(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj file_45path = R[1];
struct frame1 __curr = {
.fn = clofun143,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[4]), file_45path);
return;
}
case 1:
{
Obj x105553422037831= co->res;
Obj sexp = x105553422037831;
Obj x105553360604807 = makeNative1(2, clofun142, 1, 1, sexp);
R[1] = x105553360604807;
R[2] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), sexp);
return;
}
case 2:
{
Obj x105553422039815= co->res;
Obj x105553360604807 = R[1];
Obj sexp = R[2];
if (True == x105553422039815) {
Obj x105553422040327 = PRIM_CAR(sexp);
Obj x105553422040487 = PRIM_EQ(__symbolTable[19], x105553422040327);
if (True == x105553422040487) {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x105553360604807, True);
return;
} else {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x105553360604807, False);
return;
}
} else {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x105553360604807, False);
return;
}
}
case 3:
{
Obj x105553422043367= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 4:
{
Obj x105553422043719= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 5:
{
Obj x105553422041799= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 6:
{
Obj x105553422042151= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 7:
{
Obj x105553422040615= co->res;
Obj sexp = R[1];
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun143,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[22]), sexp);
return;
}
case 8:
{
Obj x105553422040967= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
}
}

static void clofun142(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553360604839 = R[1];
if (True == x105553360604839) {
Obj x105553422038375 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, x105553422038375);
return;
} else {
Obj x105553422038887 = makeCons(closureRef(R[0], 0), Nil);
coraReturn(co, x105553422038887);
return;
}
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553356122311 = R[1];
Obj x105553356123655 = makeNative1(1, clofun138, 0, 1, x105553356122311);
Obj x105553422032007 = PRIM_ISCONS(x105553356122311);
if (True == x105553422032007) {
Obj x105553422032487 = PRIM_CAR(x105553356122311);
Obj x105553422032647 = PRIM_EQ(__symbolTable[18], x105553422032487);
if (True == x105553422032647) {
Obj x105553422032967 = PRIM_CDR(x105553356122311);
Obj more = x105553422032967;
Obj x105553422033415 = makeCons(__symbolTable[18], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x105553422033415, makeNative1(2, clofun140, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553356123655);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356123655);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[17]), 4, body, Nil, Nil, makeNative1(3, clofun139, 2, 0));
return;
}
}
}

static void clofun139(struct Cora* co, int label, Obj *R) {
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

static void clofun138(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553356126279 = makeNative1(1, clofun135, 0, 1, closureRef(R[0], 0));
Obj x105553422027015 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553422027015) {
Obj x105553422027495 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553422027655 = PRIM_EQ(__symbolTable[19], x105553422027495);
if (True == x105553422027655) {
Obj x105553422027975 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553422027975;
Obj x105553422028423 = makeCons(__symbolTable[19], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x105553422028423, makeNative1(2, clofun137, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553356126279);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356126279);
return;
}
}
}
}

static void clofun137(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[17]), 4, body, Nil, Nil, makeNative1(3, clofun136, 2, 0));
return;
}
}
}

static void clofun136(struct Cora* co, int label, Obj *R) {
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

static void clofun135(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553422024775 = makeCons(closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[17]), 4, x105553422024775, Nil, Nil, makeNative1(3, clofun134, 2, 0));
return;
}
}
}

static void clofun134(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
struct frame1 __curr = {
.fn = clofun134,
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
Obj x105553422025415= co->res;
Obj x105553422025607 = makeCons(__symbolTable[19], x105553422025415);
coraReturn(co, x105553422025607);
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

static void clofun132(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553356074631 = R[1];
Obj x105553356074663 = R[2];
Obj x105553356076807 = makeNative1(2, clofun131, 0, 2, x105553356074631, x105553356074663);
Obj x105553422015783 = PRIM_ISCONS(x105553356074631);
if (True == x105553422015783) {
Obj x105553422016263 = PRIM_CAR(x105553356074631);
Obj x105553422016423 = PRIM_EQ(__symbolTable[18], x105553422016263);
if (True == x105553422016423) {
Obj x105553422016871 = PRIM_CDR(x105553356074631);
Obj x105553422016999 = PRIM_ISCONS(x105553422016871);
if (True == x105553422016999) {
Obj x105553422017447 = PRIM_CDR(x105553356074631);
Obj x105553422017575 = PRIM_CAR(x105553422017447);
Obj name = x105553422017575;
Obj x105553422018023 = PRIM_CDR(x105553356074631);
Obj x105553422018151 = PRIM_CDR(x105553422018023);
Obj more = x105553422018151;
R[1] = name;
struct frame1 __curr = {
.fn = clofun132,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, x105553356074663);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553356076807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356076807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356076807);
return;
}
}
case 1:
{
Obj x105553422018791= co->res;
Obj name = R[1];
Obj x105553422018983 = makeCons(name, x105553422018791);
Obj x105553422019143 = makeCons(__symbolTable[18], x105553422018983);
coraReturn(co, x105553422019143);
return;
}
}
}

static void clofun131(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553356081703 = makeNative1(2, clofun130, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553422004423 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553422004423) {
Obj x105553422004871 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553422004999 = PRIM_ISCONS(x105553422004871);
if (True == x105553422004999) {
Obj x105553422005607 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553422005735 = PRIM_CAR(x105553422005607);
Obj x105553422005895 = PRIM_EQ(__symbolTable[21], x105553422005735);
if (True == x105553422005895) {
Obj x105553422006471 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553422006599 = PRIM_CDR(x105553422006471);
Obj x105553422006727 = PRIM_ISCONS(x105553422006599);
if (True == x105553422006727) {
Obj x105553422007303 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553422007431 = PRIM_CDR(x105553422007303);
Obj x105553422007559 = PRIM_CAR(x105553422007431);
Obj pkg = x105553422007559;
Obj x105553422008295 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553422008423 = PRIM_CDR(x105553422008295);
Obj x105553422008551 = PRIM_CDR(x105553422008423);
Obj x105553422008711 = PRIM_EQ(Nil, x105553422008551);
if (True == x105553422008711) {
Obj x105553422009031 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553422009031;
Obj x105553422009639 = makeCons(pkg, Nil);
Obj x105553422009799 = makeCons(__symbolTable[21], x105553422009639);
R[1] = x105553422009799;
struct frame1 __curr = {
.fn = clofun131,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553356081703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356081703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356081703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356081703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356081703);
return;
}
}
case 1:
{
Obj x105553422010151= co->res;
Obj x105553422009799 = R[1];
Obj x105553422010343 = makeCons(x105553422009799, x105553422010151);
coraReturn(co, x105553422010343);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553356088071 = makeNative1(1, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421997479 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421997479) {
Obj x105553421997927 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421998055 = PRIM_ISCONS(x105553421997927);
if (True == x105553421998055) {
Obj x105553421998663 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421998791 = PRIM_CAR(x105553421998663);
Obj x105553421998951 = PRIM_EQ(__symbolTable[20], x105553421998791);
if (True == x105553421998951) {
Obj x105553421999399 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421999527 = PRIM_CDR(x105553421999399);
Obj symbols = x105553421999527;
Obj x105553421999847 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553421999847;
Obj x105553422000295 = makeCons(__symbolTable[20], symbols);
R[1] = x105553422000295;
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
coraCall0(co, x105553356088071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356088071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356088071);
return;
}
}
case 1:
{
Obj x105553422000647= co->res;
Obj x105553422000295 = R[1];
Obj x105553422000839 = makeCons(x105553422000295, x105553422000647);
coraReturn(co, x105553422000839);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553356092967 = makeNative1(1, clofun128, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x105553421993511 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421993511) {
Obj x105553421993991 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421994151 = PRIM_EQ(__symbolTable[19], x105553421993991);
if (True == x105553421994151) {
Obj x105553421994471 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553421994471;
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
coraCall0(co, x105553356092967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553356092967);
return;
}
}
case 1:
{
Obj x105553421994951= co->res;
Obj x105553421995143 = makeCons(__symbolTable[19], x105553421994951);
coraReturn(co, x105553421995143);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
}

static void clofun127(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355893991 = R[1];
Obj x105553355894023 = R[2];
Obj x105553355894055 = R[3];
Obj x105553355894087 = R[4];
Obj x105553421838119 = PRIM_EQ(Nil, x105553355893991);
if (True == x105553421838119) {
R[1] = x105553355894055;
R[2] = x105553355894087;
struct frame1 __curr = {
.fn = clofun127,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x105553355894023);
return;
} else {
Obj x105553355901927 = makeNative1(1, clofun126, 0, 4, x105553355893991, x105553355894023, x105553355894055, x105553355894087);
Obj x105553421853959 = PRIM_ISCONS(x105553355893991);
if (True == x105553421853959) {
Obj x105553421854407 = PRIM_CAR(x105553355893991);
Obj x105553421854535 = PRIM_ISCONS(x105553421854407);
if (True == x105553421854535) {
Obj x105553421855143 = PRIM_CAR(x105553355893991);
Obj x105553421855271 = PRIM_CAR(x105553421855143);
Obj x105553421855431 = PRIM_EQ(__symbolTable[10], x105553421855271);
if (True == x105553421855431) {
Obj x105553421855879 = PRIM_CAR(x105553355893991);
Obj x105553421856007 = PRIM_CDR(x105553421855879);
Obj exp = x105553421856007;
Obj x105553421856327 = PRIM_CDR(x105553355893991);
Obj more = x105553421856327;
Obj x105553421856935 = makeCons(__symbolTable[19], exp);
Obj x105553421857127 = makeCons(x105553421856935, x105553355894023);
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[17]), 4, more, x105553421857127, x105553355894055, x105553355894087);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355901927);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355901927);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355901927);
return;
}
}
}
case 1:
{
Obj x105553421838503= co->res;
Obj x105553355894055 = R[1];
Obj x105553355894087 = R[2];
R[1] = x105553355894087;
R[2] = x105553421838503;
struct frame1 __curr = {
.fn = clofun127,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x105553355894055);
return;
}
case 2:
{
Obj x105553421838823= co->res;
Obj x105553355894087 = R[1];
Obj x105553421838503 = R[2];
co->ctx.sp = R;
coraCall2(co, x105553355894087, x105553421838503, x105553421838823);
return;
}
}
}

static void clofun126(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355908743 = makeNative1(1, clofun125, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x105553421847143 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421847143) {
Obj x105553421847591 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421847719 = PRIM_ISCONS(x105553421847591);
if (True == x105553421847719) {
Obj x105553421848327 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421848455 = PRIM_CAR(x105553421848327);
Obj x105553421848615 = PRIM_EQ(__symbolTable[12], x105553421848455);
if (True == x105553421848615) {
Obj x105553421849063 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421849191 = PRIM_CDR(x105553421849063);
Obj exp = x105553421849191;
Obj x105553421849511 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553421849511;
Obj x105553421850119 = makeCons(__symbolTable[11], exp);
Obj x105553421850311 = makeCons(x105553421850119, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[17]), 4, more, x105553421850311, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355908743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355908743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355908743);
return;
}
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421840007 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421840007) {
Obj x105553421840327 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = x105553421840327;
Obj x105553421840647 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553421840647;
Obj x105553421841991 = makeCons(exp, Nil);
Obj x105553421842151 = makeCons(__symbolTable[14], x105553421841991);
Obj x105553421842343 = makeCons(x105553421842151, Nil);
Obj x105553421842503 = makeCons(__symbolTable[15], x105553421842343);
Obj x105553421842983 = makeCons(__symbolTable[13], Nil);
Obj x105553421843175 = makeCons(x105553421842983, Nil);
Obj x105553421843335 = makeCons(x105553421842503, x105553421843175);
Obj x105553421843495 = makeCons(__symbolTable[16], x105553421843335);
Obj x105553421843687 = makeCons(x105553421843495, closureRef(R[0], 1));
Obj x105553421844039 = makeCons(exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[17]), 4, more, x105553421843687, x105553421844039, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355987079 = R[1];
Obj x105553355988423 = makeNative1(1, clofun123, 0, 1, x105553355987079);
Obj x105553421832007 = PRIM_ISCONS(x105553355987079);
if (True == x105553421832007) {
Obj x105553421832487 = PRIM_CAR(x105553355987079);
Obj x105553421832647 = PRIM_EQ(__symbolTable[18], x105553421832487);
if (True == x105553421832647) {
Obj x105553421833095 = PRIM_CDR(x105553355987079);
Obj x105553421833223 = PRIM_ISCONS(x105553421833095);
if (True == x105553421833223) {
Obj x105553421833671 = PRIM_CDR(x105553355987079);
Obj x105553421833799 = PRIM_CAR(x105553421833671);
Obj x105553421834247 = PRIM_CDR(x105553355987079);
Obj x105553421834375 = PRIM_CDR(x105553421834247);
Obj remain = x105553421834375;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355988423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355988423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355988423);
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355992359 = makeNative1(1, clofun122, 0, 1, closureRef(R[0], 0));
Obj x105553421828807 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421828807) {
Obj x105553421829287 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421829447 = PRIM_EQ(__symbolTable[19], x105553421829287);
if (True == x105553421829447) {
Obj x105553421829767 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x105553421829767;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355992359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355992359);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355994983 = makeNative1(2, clofun121, 0, 1, closureRef(R[0], 0));
Obj x105553421823207 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421823207) {
Obj x105553421823655 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421823783 = PRIM_ISCONS(x105553421823655);
if (True == x105553421823783) {
Obj x105553421824391 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421824519 = PRIM_CAR(x105553421824391);
Obj x105553421824679 = PRIM_EQ(__symbolTable[20], x105553421824519);
if (True == x105553421824679) {
Obj x105553421825127 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421825255 = PRIM_CDR(x105553421825127);
Obj x105553421825575 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x105553421825575;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355994983);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355994983);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355994983);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355867847 = makeNative1(1, clofun120, 0, 0);
Obj x105553421812967 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421812967) {
Obj x105553421813415 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421813543 = PRIM_ISCONS(x105553421813415);
if (True == x105553421813543) {
Obj x105553421814151 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421814279 = PRIM_CAR(x105553421814151);
Obj x105553421814439 = PRIM_EQ(__symbolTable[21], x105553421814279);
if (True == x105553421814439) {
Obj x105553421815015 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421815143 = PRIM_CDR(x105553421815015);
Obj x105553421815271 = PRIM_ISCONS(x105553421815143);
if (True == x105553421815271) {
Obj x105553421815847 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421815975 = PRIM_CDR(x105553421815847);
Obj x105553421816103 = PRIM_CAR(x105553421815975);
Obj pkg = x105553421816103;
Obj x105553421816839 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421816967 = PRIM_CDR(x105553421816839);
Obj x105553421817095 = PRIM_CDR(x105553421816967);
Obj x105553421817255 = PRIM_EQ(Nil, x105553421817095);
if (True == x105553421817255) {
Obj x105553421817575 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x105553421817575;
R[1] = remain;
struct frame1 __curr = {
.fn = clofun121,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355867847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355867847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355867847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355867847);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355867847);
return;
}
}
case 1:
{
Obj x105553421817895= co->res;
Obj remain = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
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
struct frame1 __curr = {
.fn = clofun119,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("#include \"types.h\"\n"));
return;
}
case 1:
{
Obj x105553421805543= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun119,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("#include \"runtime1.h\"\n\n"));
return;
}
case 2:
{
Obj x105553421805959= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun119,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[27]), makeNative1(2, clofun117, 1, 1, to), bc);
return;
}
case 3:
{
Obj x105553421807943= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun119,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("\n\n"));
return;
}
case 4:
{
Obj x105553421808359= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun119,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[64]), bc);
return;
}
case 5:
{
Obj x105553421808903= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
struct frame1 __curr = {
.fn = clofun119,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[25]), to, globals, x105553421808903);
return;
}
case 6:
{
Obj x105553421809127= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), makeNative1(2, clofun118, 1, 2, to, globals), bc);
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
coraCall3(co, globalRef(__symbolTable[26]), closureRef(R[0], 0), group, closureRef(R[0], 1));
return;
}
}
}

static void clofun117(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
Obj x105553421806727 = PRIM_CAR(group);
struct frame1 __curr = {
.fn = clofun117,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), closureRef(R[0], 0), x105553421806727);
return;
}
case 1:
{
Obj x105553421806887= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString(";\n"));
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
struct frame1 __curr = {
.fn = clofun116,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("static __thread Obj* __symbolTable;\n\n"));
return;
}
case 1:
{
Obj x105553421925383= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("void entry(struct Cora *co) {\n"));
return;
}
case 2:
{
Obj x105553421925799= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
return;
}
case 3:
{
Obj x105553421926215= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), globals);
return;
}
case 4:
{
Obj x105553421795655= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), to, x105553421795655);
return;
}
case 5:
{
Obj x105553421795847= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(");\n"));
return;
}
case 6:
{
Obj x105553421796263= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun115, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 7:
{
Obj x105553421800999= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.fn = "));
return;
}
case 8:
{
Obj x105553421801415= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), to, label);
return;
}
case 9:
{
Obj x105553421801831= co->res;
Obj to = R[1];
R[1] = to;
struct frame1 __curr = {
.fn = clofun116,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(";\n"));
return;
}
case 10:
{
Obj x105553421802247= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.label = 0;\n}\n\n"));
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
struct frame1 __curr = {
.fn = clofun115,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString("__symbolTable["));
return;
}
case 1:
{
Obj x105553421796935= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun115,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 0), acc);
return;
}
case 2:
{
Obj x105553421797351= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun115,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString("] = intern(\""));
return;
}
case 3:
{
Obj x105553421797767= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun115,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[24]), sym);
return;
}
case 4:
{
Obj x105553421798279= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun115,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), x105553421798279);
return;
}
case 5:
{
Obj x105553421798471= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun115,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), makeCString("\");\n"));
return;
}
case 6:
{
Obj x105553421798887= co->res;
Obj acc = R[1];
Obj x105553421799239 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x105553421799239);
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
Obj x105553421910919 = PRIM_CAR(group);
Obj label = x105553421910919;
R[1] = globals;
R[2] = label;
R[3] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), group);
return;
}
case 1:
{
Obj x105553421911239= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = x105553421911239;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), lam);
return;
}
case 2:
{
Obj x105553421911591= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = x105553421911591;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[101]), lam);
return;
}
case 3:
{
Obj x105553421911943= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = x105553421911943;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), to, label);
return;
}
case 4:
{
Obj x105553421912359= co->res;
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
.fn = clofun114,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(" {\n"));
return;
}
case 5:
{
Obj x105553421912775= co->res;
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
.fn = clofun114,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString(" switch (label) {\n"));
return;
}
case 6:
{
Obj x105553421913191= co->res;
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
.fn = clofun114,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("case 0:\n{\n"));
return;
}
case 7:
{
Obj x105553421913607= co->res;
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
.fn = clofun114,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[45]), 5, globals, label, Nil, to, params);
return;
}
case 8:
{
Obj x105553421914215= co->res;
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
.fn = clofun114,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, globals, label, params, to, first_45stmt);
return;
}
case 9:
{
Obj x105553421914823= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n"));
return;
}
case 10:
{
Obj x105553421915239= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), lam);
return;
}
case 11:
{
Obj x105553421920231= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun113, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), x105553421920231);
return;
}
case 12:
{
Obj x105553421920455= co->res;
Obj to = R[1];
R[1] = to;
struct frame1 __curr = {
.fn = clofun114,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n"));
return;
}
case 13:
{
Obj x105553421920871= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n\n"));
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
struct frame1 __curr = {
.fn = clofun113,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("case "));
return;
}
case 1:
{
Obj x105553421915911= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun113,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
case 2:
{
Obj x105553421916327= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun113,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(":\n{\n"));
return;
}
case 3:
{
Obj x105553421916743= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun113,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), closureRef(R[0], 2));
return;
}
case 4:
{
Obj x105553421917287= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun113,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[40]), 5, closureRef(R[0], 0), closureRef(R[0], 1), x105553421917287, closureRef(R[0], 3), cont);
return;
}
case 5:
{
Obj x105553421917639= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun113,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("}\n"));
return;
}
case 6:
{
Obj x105553421918055= co->res;
Obj acc = R[1];
Obj x105553421918407 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x105553421918407);
return;
}
}
}

static void clofun112(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355948519 = R[1];
Obj x105553355948551 = R[2];
Obj x105553421906759 = PRIM_EQ(Nil, x105553355948551);
if (True == x105553421906759) {
coraReturn(co, Nil);
return;
} else {
Obj x105553421907143 = PRIM_ISCONS(x105553355948551);
if (True == x105553421907143) {
Obj x105553421907463 = PRIM_CAR(x105553355948551);
Obj x = x105553421907463;
Obj x105553421907783 = PRIM_CDR(x105553355948551);
Obj y = x105553421907783;
R[1] = x105553355948519;
R[2] = y;
struct frame1 __curr = {
.fn = clofun112,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x105553355948519, x);
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
Obj x105553421908103= co->res;
Obj x105553355948519 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), x105553355948519, y);
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
 printf("compile ===\n");
 printObj(stderr, exp);
 printf("===\n");
R[1] = exp;
struct frame1 __curr = {
.fn = clofun111,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[38]), globals);
return;
}
case 1:
{
Obj x105553421903943= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun111,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x105553421903943, exp);
return;
}
case 2:
{
Obj x105553421904135= co->res;
struct frame1 __curr = {
.fn = clofun111,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[37]), x105553421904135);
return;
}
case 3:
{
Obj x105553421904295= co->res;
struct frame1 __curr = {
.fn = clofun111,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[36]), x105553421904295);
return;
}
case 4:
{
Obj x105553421904455= co->res;
struct frame1 __curr = {
.fn = clofun111,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[35]), x105553421904455);
return;
}
case 5:
{
Obj x105553421904615= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[34]), x105553421904615);
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
struct frame1 __curr = {
.fn = clofun110,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), exp);
return;
}
case 1:
{
Obj x105553421901063= co->res;
Obj exp = R[1];
Obj obj = x105553421901063;
R[1] = obj;
struct frame1 __curr = {
.fn = clofun110,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[29]), exp);
return;
}
case 2:
{
Obj x105553421901415= co->res;
Obj obj = R[1];
Obj fns = x105553421901415;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), obj, fns);
return;
}
}
}

static void clofun109(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355800071 = R[1];
Obj x105553355800103 = R[2];
Obj x105553421896551 = PRIM_EQ(Nil, x105553355800103);
if (True == x105553421896551) {
coraReturn(co, x105553355800071);
return;
} else {
Obj x105553421896935 = PRIM_ISCONS(x105553355800103);
if (True == x105553421896935) {
Obj x105553421897255 = PRIM_CAR(x105553355800103);
Obj hd = x105553421897255;
Obj x105553421897575 = PRIM_CDR(x105553355800103);
Obj more = x105553421897575;
Obj x105553421898183 = makeCons(x105553355800071, Nil);
Obj x105553421898343 = makeCons(hd, x105553421898183);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), x105553421898343, more);
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

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun108,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[33]), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj x105553421891431= co->res;
Obj exp = R[1];
Obj v = x105553421891431;
R[1] = exp;
R[2] = v;
struct frame1 __curr = {
.fn = clofun108,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
return;
}
case 2:
{
Obj x105553421891911= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
struct frame1 __curr = {
.fn = clofun108,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), Nil);
return;
}
case 3:
{
Obj x105553421892391= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
struct frame1 __curr = {
.fn = clofun108,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), v, exp);
return;
}
case 4:
{
Obj x105553421892807= co->res;
Obj v = R[1];
Obj e1 = x105553421892807;
R[1] = v;
struct frame1 __curr = {
.fn = clofun108,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[58]), Nil, e1);
return;
}
case 5:
{
Obj x105553421893223= co->res;
Obj v = R[1];
Obj e2 = x105553421893223;
R[1] = v;
struct frame1 __curr = {
.fn = clofun108,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[54]), v, e2);
return;
}
case 6:
{
Obj x105553421893639= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
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
coraCall2(co, globalRef(__symbolTable[63]), Nil, exp);
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
coraCall2(co, globalRef(__symbolTable[69]), exp, globalRef(__symbolTable[70]));
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
coraCall2(co, globalRef(__symbolTable[71]), Nil, exp);
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
 /* printf("parse-pass\n"); */
 /* printObj(stderr, exp); */
 /* printf("-----\n"); */
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), Nil, globals, exp);
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
struct frame1 __curr = {
.fn = clofun103,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString("static void "));
return;
}
case 1:
{
Obj x105553421884807= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
struct frame1 __curr = {
.fn = clofun103,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), w, label);
return;
}
case 2:
{
Obj x105553421885223= co->res;
Obj w = R[1];
R[1] = w;
struct frame1 __curr = {
.fn = clofun103,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString("(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj x105553421885639= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(")"));
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
struct frame1 __curr = {
.fn = clofun102,
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
Obj x105553421883239= co->res;
Obj w = R[1];
Obj label = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[47]), w, label);
return;
}
}
}

static void clofun101(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355764935 = R[1];
Obj x105553355764967 = R[2];
Obj x105553355764999 = R[3];
Obj x105553355765031 = R[4];
Obj x105553355765063 = R[5];
Obj x105553355769607 = makeNative1(1, clofun100, 0, 0);
Obj x105553421870439 = PRIM_ISCONS(x105553355765063);
if (True == x105553421870439) {
Obj x105553421870919 = PRIM_CAR(x105553355765063);
Obj x105553421871079 = PRIM_EQ(__symbolTable[62], x105553421870919);
if (True == x105553421871079) {
Obj x105553421871527 = PRIM_CDR(x105553355765063);
Obj x105553421871655 = PRIM_ISCONS(x105553421871527);
if (True == x105553421871655) {
Obj x105553421872103 = PRIM_CDR(x105553355765063);
Obj x105553421872231 = PRIM_CAR(x105553421872103);
Obj var = x105553421872231;
Obj x105553421872807 = PRIM_CDR(x105553355765063);
Obj x105553421872935 = PRIM_CDR(x105553421872807);
Obj x105553421873063 = PRIM_ISCONS(x105553421872935);
if (True == x105553421873063) {
Obj x105553421873639 = PRIM_CDR(x105553355765063);
Obj x105553421873767 = PRIM_CDR(x105553421873639);
Obj x105553421873895 = PRIM_CAR(x105553421873767);
Obj body = x105553421873895;
Obj x105553421874471 = PRIM_CDR(x105553355765063);
Obj x105553421874599 = PRIM_CDR(x105553421874471);
Obj x105553421874727 = PRIM_CDR(x105553421874599);
Obj fvs = x105553421874727;
R[1] = var;
R[2] = fvs;
R[3] = x105553355764935;
R[4] = x105553355764967;
R[5] = x105553355764999;
R[6] = x105553355765031;
R[7] = body;
struct frame1 __curr = {
.fn = clofun101,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), x105553355765031, makeCString("Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355769607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355769607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355769607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355769607);
return;
}
}
case 1:
{
Obj x105553421875111= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj x105553355764935 = R[3];
Obj x105553355764967 = R[4];
Obj x105553355764999 = R[5];
Obj x105553355765031 = R[6];
Obj body = R[7];
Obj x105553421875623 = PRIM_CAR(var);
R[1] = fvs;
R[2] = x105553355764935;
R[3] = x105553355764967;
R[4] = x105553355764999;
R[5] = x105553355765031;
R[6] = body;
struct frame1 __curr = {
.fn = clofun101,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), x105553355765031, x105553421875623);
return;
}
case 2:
{
Obj x105553421875783= co->res;
Obj fvs = R[1];
Obj x105553355764935 = R[2];
Obj x105553355764967 = R[3];
Obj x105553355764999 = R[4];
Obj x105553355765031 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = x105553355764935;
R[3] = x105553355764967;
R[4] = x105553355764999;
R[5] = x105553355765031;
R[6] = body;
struct frame1 __curr = {
.fn = clofun101,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), x105553355765031, makeCString("= co->res;\n"));
return;
}
case 3:
{
Obj x105553421876199= co->res;
Obj fvs = R[1];
Obj x105553355764935 = R[2];
Obj x105553355764967 = R[3];
Obj x105553355764999 = R[4];
Obj x105553355765031 = R[5];
Obj body = R[6];
R[1] = x105553355764935;
R[2] = x105553355764967;
R[3] = x105553355764999;
R[4] = x105553355765031;
R[5] = body;
struct frame1 __curr = {
.fn = clofun101,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[45]), 5, x105553355764935, x105553355764967, x105553355764999, x105553355765031, fvs);
return;
}
case 4:
{
Obj x105553421876807= co->res;
Obj x105553355764935 = R[1];
Obj x105553355764967 = R[2];
Obj x105553355764999 = R[3];
Obj x105553355765031 = R[4];
Obj body = R[5];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[46]), 5, x105553355764935, x105553355764967, x105553355764999, x105553355765031, body);
return;
}
}
}

static void clofun100(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
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
Obj x105553421729287 = primGenSym();
Obj generate_45inst_45list_45h = x105553421729287;
Obj x105553421867783 = primSet(co, generate_45inst_45list_45h, makeNative1(2, clofun98, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
struct frame1 __curr = {
.fn = clofun99,
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
Obj x105553421868135= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, x105553421868135, l);
return;
}
}
}

static void clofun98(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553421861031 = PRIM_EQ(Nil, x);
if (True == x105553421861031) {
coraReturn(co, Nil);
return;
} else {
Obj x105553421861415 = PRIM_ISCONS(x);
if (True == x105553421861415) {
Obj x105553421861735 = PRIM_CAR(x);
Obj a = x105553421861735;
Obj x105553421862055 = PRIM_CDR(x);
Obj b = x105553421862055;
R[1] = b;
struct frame1 __curr = {
.fn = clofun98,
.label = 1,
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
Obj x105553421862631= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
.fn = clofun98,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), b);
return;
}
case 2:
{
Obj x105553421863175= co->res;
Obj b = R[1];
Obj x105553421863335 = primNot(x105553421863175);
if (True == x105553421863335) {
R[1] = b;
struct frame1 __curr = {
.fn = clofun98,
.label = 3,
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
.fn = clofun98,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
}
case 3:
{
Obj x105553421864999= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x105553421864999, b);
return;
}
case 4:
{
Obj x105553421863655= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
.fn = clofun98,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 5:
{
Obj x105553421864039= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x105553421864039, b);
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
Obj x105553421646631 = primGenSym();
Obj generate_45inst_45h = x105553421646631;
Obj x105553421727207 = primSet(co, generate_45inst_45h, makeNative1(3, clofun96, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
struct frame1 __curr = {
.fn = clofun97,
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
Obj x105553421727559= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, x105553421727559, x1, env1);
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
Obj x105553421647239 = primIsSymbol(x2);
if (True == x105553421647239) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj x105553355732167 = makeNative1(2, clofun95, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj x105553421718887 = PRIM_ISCONS(x2);
if (True == x105553421718887) {
Obj x105553421719367 = PRIM_CAR(x2);
Obj x105553421719527 = PRIM_EQ(__symbolTable[93], x105553421719367);
if (True == x105553421719527) {
Obj x105553421719975 = PRIM_CDR(x2);
Obj x105553421720103 = PRIM_ISCONS(x105553421719975);
if (True == x105553421720103) {
Obj x105553421720551 = PRIM_CDR(x2);
Obj x105553421720679 = PRIM_CAR(x105553421720551);
Obj x = x105553421720679;
Obj x105553421721287 = PRIM_CDR(x2);
Obj x105553421721415 = PRIM_CDR(x105553421721287);
Obj x105553421721575 = PRIM_EQ(Nil, x105553421721415);
if (True == x105553421721575) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun96,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("globalRef(__symbolTable["));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355732167);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355732167);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355732167);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355732167);
return;
}
}
}
case 1:
{
Obj x105553421721959= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun96,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[50]), x, closureRef(R[0], 2));
return;
}
case 2:
{
Obj x105553421722535= co->res;
struct frame1 __curr = {
.fn = clofun96,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), x105553421722535);
return;
}
case 3:
{
Obj x105553421722727= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("])"));
return;
}
}
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355604327 = makeNative1(2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj x105553421711207 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == x105553421711207) {
Obj x105553421711687 = PRIM_CAR(closureRef(R[0], 4));
Obj x105553421711847 = PRIM_EQ(__symbolTable[77], x105553421711687);
if (True == x105553421711847) {
Obj x105553421712295 = PRIM_CDR(closureRef(R[0], 4));
Obj x105553421712423 = PRIM_ISCONS(x105553421712295);
if (True == x105553421712423) {
Obj x105553421712871 = PRIM_CDR(closureRef(R[0], 4));
Obj x105553421712999 = PRIM_CAR(x105553421712871);
Obj idx = x105553421712999;
Obj x105553421713607 = PRIM_CDR(closureRef(R[0], 4));
Obj x105553421713735 = PRIM_CDR(x105553421713607);
Obj x105553421713895 = PRIM_EQ(Nil, x105553421713735);
if (True == x105553421713895) {
R[1] = idx;
struct frame1 __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("closureRef(R[0], "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355604327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355604327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355604327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355604327);
return;
}
}
case 1:
{
Obj x105553421714279= co->res;
Obj idx = R[1];
struct frame1 __curr = {
.fn = clofun95,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), idx);
return;
}
case 2:
{
Obj x105553421714695= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355607559 = makeNative1(4, clofun93, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421694279 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x105553421694279) {
Obj x105553421694759 = PRIM_CAR(closureRef(R[0], 3));
Obj x105553421694919 = PRIM_EQ(__symbolTable[96], x105553421694759);
if (True == x105553421694919) {
Obj x105553421695367 = PRIM_CDR(closureRef(R[0], 3));
Obj x105553421695495 = PRIM_ISCONS(x105553421695367);
if (True == x105553421695495) {
Obj x105553421695943 = PRIM_CDR(closureRef(R[0], 3));
Obj x105553421696071 = PRIM_CAR(x105553421695943);
Obj x = x105553421696071;
Obj x105553421696679 = PRIM_CDR(closureRef(R[0], 3));
Obj x105553421696807 = PRIM_CDR(x105553421696679);
Obj x105553421696967 = PRIM_EQ(Nil, x105553421696807);
if (True == x105553421696967) {
Obj x105553421697287 = primIsSymbol(x);
if (True == x105553421697287) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun94,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("__symbolTable["));
return;
} else {
R[1] = x;
struct frame1 __curr = {
.fn = clofun94,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355607559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355607559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355607559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355607559);
return;
}
}
case 1:
{
Obj x105553421699719= co->res;
Obj x = R[1];
if (True == x105553421699719) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("MAKE_NUMBER("));
return;
} else {
Obj x105553421701639 = primIsString(x);
if (True == x105553421701639) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("makeCString(\""));
return;
} else {
Obj x105553421704071 = PRIM_EQ(x, Nil);
if (True == x105553421704071) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("Nil"));
return;
} else {
Obj x105553421704807 = PRIM_EQ(x, True);
if (True == x105553421704807) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("True"));
return;
} else {
Obj x105553421705543 = PRIM_EQ(x, False);
if (True == x105553421705543) {
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
case 2:
{
Obj x105553421702023= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun94,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[41]), x);
return;
}
case 3:
{
Obj x105553421702535= co->res;
struct frame1 __curr = {
.fn = clofun94,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x105553421702535);
return;
}
case 4:
{
Obj x105553421702727= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("\")"));
return;
}
case 5:
{
Obj x105553421700135= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun94,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj x105553421700551= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 7:
{
Obj x105553421697671= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[50]), x, closureRef(R[0], 4));
return;
}
case 8:
{
Obj x105553421698247= co->res;
struct frame1 __curr = {
.fn = clofun94,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x105553421698247);
return;
}
case 9:
{
Obj x105553421698439= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("]"));
return;
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355610791 = makeNative1(3, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x105553421670343 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x105553421670343) {
Obj x105553421670823 = PRIM_CAR(closureRef(R[0], 2));
Obj x105553421670983 = PRIM_EQ(__symbolTable[86], x105553421670823);
if (True == x105553421670983) {
Obj x105553421671431 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421671559 = PRIM_ISCONS(x105553421671431);
if (True == x105553421671559) {
Obj x105553421672007 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421672135 = PRIM_CAR(x105553421672007);
Obj a = x105553421672135;
Obj x105553421672711 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421672839 = PRIM_CDR(x105553421672711);
Obj x105553421672967 = PRIM_ISCONS(x105553421672839);
if (True == x105553421672967) {
Obj x105553421673543 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421673671 = PRIM_CDR(x105553421673543);
Obj x105553421673799 = PRIM_CAR(x105553421673671);
Obj b = x105553421673799;
Obj x105553421674503 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421674631 = PRIM_CDR(x105553421674503);
Obj x105553421674759 = PRIM_CDR(x105553421674631);
Obj x105553421674887 = PRIM_ISCONS(x105553421674759);
if (True == x105553421674887) {
Obj x105553421675591 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421675719 = PRIM_CDR(x105553421675591);
Obj x105553421675847 = PRIM_CDR(x105553421675719);
Obj x105553421675975 = PRIM_CAR(x105553421675847);
Obj c = x105553421675975;
Obj x105553421676839 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421676967 = PRIM_CDR(x105553421676839);
Obj x105553421677095 = PRIM_CDR(x105553421676967);
Obj x105553421677223 = PRIM_CDR(x105553421677095);
Obj x105553421677383 = PRIM_EQ(Nil, x105553421677223);
if (True == x105553421677383) {
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355610791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355610791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355610791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355610791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355610791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355610791);
return;
}
}
case 1:
{
Obj x105553421677767= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
Obj idx = x105553421677767;
Obj x105553421678247 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x105553421678247) {
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 2,
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
.fn = clofun93,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), a);
return;
}
}
case 2:
{
Obj x105553421683367= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(" = "));
return;
}
case 3:
{
Obj x105553421683783= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 4:
{
Obj x105553421684231= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421684231, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj x105553421684487= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 6:
{
Obj x105553421684903= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 7:
{
Obj x105553421685287= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x105553421685703 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x105553421685287, c, x105553421685703);
return;
}
case 8:
{
Obj x105553421678567= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), a);
return;
}
case 9:
{
Obj x105553421678983= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(" = "));
return;
}
case 10:
{
Obj x105553421679399= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 11:
{
Obj x105553421679847= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421679847, b, closureRef(R[0], 5));
return;
}
case 12:
{
Obj x105553421680103= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 13:
{
Obj x105553421680519= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame1 __curr = {
.fn = clofun93,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 14:
{
Obj x105553421680903= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x105553421681319 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x105553421680903, c, x105553421681319);
return;
}
}
}

static void clofun92(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355616647 = makeNative1(4, clofun91, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x105553421786823 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x105553421786823) {
Obj x105553421787271 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421787399 = PRIM_ISCONS(x105553421787271);
if (True == x105553421787399) {
Obj x105553421788007 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421788135 = PRIM_CAR(x105553421788007);
Obj x105553421788295 = PRIM_EQ(__symbolTable[90], x105553421788135);
if (True == x105553421788295) {
Obj x105553421788871 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421788999 = PRIM_CDR(x105553421788871);
Obj x105553421789127 = PRIM_ISCONS(x105553421788999);
if (True == x105553421789127) {
Obj x105553421789703 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421789831 = PRIM_CDR(x105553421789703);
Obj x105553421789959 = PRIM_CAR(x105553421789831);
Obj f = x105553421789959;
Obj x105553421790695 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421790823 = PRIM_CDR(x105553421790695);
Obj x105553421790951 = PRIM_CDR(x105553421790823);
Obj x105553421791111 = PRIM_EQ(Nil, x105553421790951);
if (True == x105553421791111) {
Obj x105553421791431 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x105553421791431;
R[1] = f;
R[2] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[102]), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355616647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355616647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355616647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355616647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355616647);
return;
}
}
case 1:
{
Obj x105553421791911= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x105553421791911);
return;
}
case 2:
{
Obj x105553421792103= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x105553421792583 = PRIM_EQ(f, __symbolTable[121]);
if (True == x105553421792583) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("(co, "));
return;
} else {
R[1] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("("));
return;
}
}
case 3:
{
Obj x105553421794599= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun92,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 4:
{
Obj x105553421795207= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 5:
{
Obj x105553421792903= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun92,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 6:
{
Obj x105553421793511= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355621191 = makeNative1(5, clofun90, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x105553421767911 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x105553421767911) {
Obj x105553421768391 = PRIM_CAR(closureRef(R[0], 2));
Obj x105553421768551 = PRIM_EQ(__symbolTable[87], x105553421768391);
if (True == x105553421768551) {
Obj x105553421768999 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421769127 = PRIM_ISCONS(x105553421768999);
if (True == x105553421769127) {
Obj x105553421769575 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421769703 = PRIM_CAR(x105553421769575);
Obj a = x105553421769703;
Obj x105553421770279 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421770407 = PRIM_CDR(x105553421770279);
Obj x105553421770535 = PRIM_ISCONS(x105553421770407);
if (True == x105553421770535) {
Obj x105553421771111 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421771239 = PRIM_CDR(x105553421771111);
Obj x105553421771367 = PRIM_CAR(x105553421771239);
Obj b = x105553421771367;
Obj x105553421772071 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421772199 = PRIM_CDR(x105553421772071);
Obj x105553421772327 = PRIM_CDR(x105553421772199);
Obj x105553421772455 = PRIM_ISCONS(x105553421772327);
if (True == x105553421772455) {
Obj x105553421773159 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421773287 = PRIM_CDR(x105553421773159);
Obj x105553421773415 = PRIM_CDR(x105553421773287);
Obj x105553421773543 = PRIM_CAR(x105553421773415);
Obj c = x105553421773543;
Obj x105553421774407 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421774535 = PRIM_CDR(x105553421774407);
Obj x105553421774663 = PRIM_CDR(x105553421774535);
Obj x105553421774791 = PRIM_CDR(x105553421774663);
Obj x105553421774951 = PRIM_EQ(Nil, x105553421774791);
if (True == x105553421774951) {
R[1] = a;
R[2] = b;
R[3] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("if (True == "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355621191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355621191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355621191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355621191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355621191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355621191);
return;
}
}
case 1:
{
Obj x105553421775335= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 2:
{
Obj x105553421775783= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421775783, a, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x105553421776039= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(") {\n"));
return;
}
case 4:
{
Obj x105553421776455= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 5:
{
Obj x105553421776903= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421776903, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj x105553421777159= co->res;
Obj c = R[1];
R[1] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("} else {\n"));
return;
}
case 7:
{
Obj x105553421777575= co->res;
Obj c = R[1];
R[1] = c;
struct frame1 __curr = {
.fn = clofun91,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 8:
{
Obj x105553421778023= co->res;
Obj c = R[1];
struct frame1 __curr = {
.fn = clofun91,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421778023, c, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x105553421778279= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("}\n"));
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355627047 = makeNative1(3, clofun89, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj x105553421746503 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x105553421746503) {
Obj x105553421746983 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421747143 = PRIM_EQ(__symbolTable[78], x105553421746983);
if (True == x105553421747143) {
Obj x105553421747591 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421747719 = PRIM_ISCONS(x105553421747591);
if (True == x105553421747719) {
Obj x105553421748167 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421748295 = PRIM_CAR(x105553421748167);
Obj label = x105553421748295;
Obj x105553421748871 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421748999 = PRIM_CDR(x105553421748871);
Obj x105553421749127 = PRIM_ISCONS(x105553421748999);
if (True == x105553421749127) {
Obj x105553421749703 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421749831 = PRIM_CDR(x105553421749703);
Obj x105553421749959 = PRIM_CAR(x105553421749831);
Obj nargs = x105553421749959;
Obj x105553421750663 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421750791 = PRIM_CDR(x105553421750663);
Obj x105553421750919 = PRIM_CDR(x105553421750791);
Obj x105553421751047 = PRIM_ISCONS(x105553421750919);
if (True == x105553421751047) {
Obj x105553421751751 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421751879 = PRIM_CDR(x105553421751751);
Obj x105553421752007 = PRIM_CDR(x105553421751879);
Obj x105553421752135 = PRIM_CAR(x105553421752007);
Obj nframe = x105553421752135;
Obj x105553421752839 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421752967 = PRIM_CDR(x105553421752839);
Obj x105553421753095 = PRIM_CDR(x105553421752967);
Obj x105553421753223 = PRIM_CDR(x105553421753095);
Obj frees = x105553421753223;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("makeNative1("));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355627047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355627047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355627047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355627047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355627047);
return;
}
}
case 1:
{
Obj x105553421753607= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nframe);
return;
}
case 2:
{
Obj x105553421754023= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 3:
{
Obj x105553421754439= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), closureRef(R[0], 5), label);
return;
}
case 4:
{
Obj x105553421754855= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 5:
{
Obj x105553421755271= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 6:
{
Obj x105553421755687= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
}
case 7:
{
Obj x105553421756103= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), frees);
return;
}
case 8:
{
Obj x105553421756615= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x105553421756615);
return;
}
case 9:
{
Obj x105553421756807= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun90,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), frees);
return;
}
case 10:
{
Obj x105553421757351= co->res;
Obj frees = R[1];
Obj x105553421757511 = primNot(x105553421757351);
if (True == x105553421757511) {
R[1] = frees;
struct frame1 __curr = {
.fn = clofun90,
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
}
case 11:
{
Obj x105553421757895= co->res;
Obj frees = R[1];
struct frame1 __curr = {
.fn = clofun90,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees);
return;
}
case 12:
{
Obj x105553421758439= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355632743 = makeNative1(2, clofun88, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x105553421734567 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x105553421734567) {
Obj x105553421735047 = PRIM_CAR(closureRef(R[0], 2));
Obj x105553421735207 = PRIM_EQ(__symbolTable[85], x105553421735047);
if (True == x105553421735207) {
Obj x105553421735655 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421735783 = PRIM_ISCONS(x105553421735655);
if (True == x105553421735783) {
Obj x105553421736231 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421736359 = PRIM_CAR(x105553421736231);
Obj a = x105553421736359;
Obj x105553421736935 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421737063 = PRIM_CDR(x105553421736935);
Obj x105553421737191 = PRIM_ISCONS(x105553421737063);
if (True == x105553421737191) {
Obj x105553421737767 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421737895 = PRIM_CDR(x105553421737767);
Obj x105553421738023 = PRIM_CAR(x105553421737895);
Obj b = x105553421738023;
Obj x105553421738759 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421738887 = PRIM_CDR(x105553421738759);
Obj x105553421739015 = PRIM_CDR(x105553421738887);
Obj x105553421739175 = PRIM_EQ(Nil, x105553421739015);
if (True == x105553421739175) {
R[1] = a;
R[2] = b;
struct frame1 __curr = {
.fn = clofun89,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355632743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355632743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355632743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355632743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355632743);
return;
}
}
case 1:
{
Obj x105553421739591= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
struct frame1 __curr = {
.fn = clofun89,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421739591, a, closureRef(R[0], 5));
return;
}
case 2:
{
Obj x105553421739847= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
.fn = clofun89,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 3:
{
Obj x105553421740263= co->res;
Obj b = R[1];
R[1] = b;
struct frame1 __curr = {
.fn = clofun89,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 4));
return;
}
case 4:
{
Obj x105553421740647= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, x105553421740647, b, closureRef(R[0], 5));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355637287 = makeNative1(2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x105553421594727 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x105553421594727) {
Obj x105553421595207 = PRIM_CAR(closureRef(R[0], 2));
Obj x105553421595367 = PRIM_EQ(__symbolTable[72], x105553421595207);
if (True == x105553421595367) {
Obj x105553421595815 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421595943 = PRIM_ISCONS(x105553421595815);
if (True == x105553421595943) {
Obj x105553421596391 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421596519 = PRIM_CAR(x105553421596391);
Obj x = x105553421596519;
Obj x105553421597127 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421597255 = PRIM_CDR(x105553421597127);
Obj x105553421597415 = PRIM_EQ(Nil, x105553421597255);
if (True == x105553421597415) {
R[1] = x;
struct frame1 __curr = {
.fn = clofun88,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355637287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355637287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355637287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355637287);
return;
}
}
case 1:
{
Obj x105553421597799= co->res;
Obj x = R[1];
R[1] = x;
struct frame1 __curr = {
.fn = clofun88,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 2:
{
Obj x105553421598247= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun88,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421598247, x, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x105553421598503= co->res;
struct frame1 __curr = {
.fn = clofun88,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 4:
{
Obj x105553421729991= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355640519 = makeNative1(3, clofun86, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x105553421586567 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x105553421586567) {
Obj x105553421587047 = PRIM_CAR(closureRef(R[0], 2));
Obj x105553421587207 = PRIM_EQ(__symbolTable[74], x105553421587047);
if (True == x105553421587207) {
Obj x105553421587655 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421587783 = PRIM_ISCONS(x105553421587655);
if (True == x105553421587783) {
Obj x105553421588231 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421588359 = PRIM_CAR(x105553421588231);
Obj exp = x105553421588359;
Obj x105553421588967 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553421589095 = PRIM_CDR(x105553421588967);
Obj x105553421589255 = PRIM_EQ(Nil, x105553421589095);
if (True == x105553421589255) {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun87,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355640519);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355640519);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355640519);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355640519);
return;
}
}
case 1:
{
Obj x105553421589639= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun87,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 2:
{
Obj x105553421590087= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun87,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421590087, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x105553421590343= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355643751 = makeNative1(4, clofun85, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x105553421570119 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421570119) {
Obj x105553421570599 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421570759 = PRIM_EQ(__symbolTable[73], x105553421570599);
if (True == x105553421570759) {
Obj x105553421571207 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421571335 = PRIM_ISCONS(x105553421571207);
if (True == x105553421571335) {
Obj x105553421571783 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421571911 = PRIM_CAR(x105553421571783);
Obj exp = x105553421571911;
Obj x105553421572487 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421572615 = PRIM_CDR(x105553421572487);
Obj x105553421572743 = PRIM_ISCONS(x105553421572615);
if (True == x105553421572743) {
Obj x105553421573319 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421573447 = PRIM_CDR(x105553421573319);
Obj x105553421573575 = PRIM_CAR(x105553421573447);
Obj label = x105553421573575;
Obj x105553421574151 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421574279 = PRIM_CDR(x105553421574151);
Obj x105553421574407 = PRIM_CDR(x105553421574279);
Obj fvs = x105553421574407;
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[49]), 5, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355643751);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355643751);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355643751);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355643751);
return;
}
}
case 1:
{
Obj x105553421574983= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("struct frame1 __curr = {\n"));
return;
}
case 2:
{
Obj x105553421575399= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(".fn = "));
return;
}
case 3:
{
Obj x105553421575815= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[42]), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 4:
{
Obj x105553421576231= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(",\n.label = "));
return;
}
case 5:
{
Obj x105553421576647= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), label);
return;
}
case 6:
{
Obj x105553421577063= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(",\n.bp = R,\n"));
return;
}
case 7:
{
Obj x105553421577479= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(".sp = co->ctx.sp,\n"));
return;
}
case 8:
{
Obj x105553421577895= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("};\n"));
return;
}
case 9:
{
Obj x105553421578311= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("vecAppend(&co->callstack, __curr);\n"));
return;
}
case 10:
{
Obj x105553421578727= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun86,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 3));
return;
}
case 11:
{
Obj x105553421579175= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun86,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421579175, exp, closureRef(R[0], 4));
return;
}
case 12:
{
Obj x105553421579431= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421649319 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421649319) {
Obj x105553421649639 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x105553421649639;
Obj x105553421649959 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421649959;
R[1] = f;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 1,
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
Obj x105553421650279= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = x105553421650279;
Obj x105553421650759 = PRIM_EQ(nargs, MAKE_NUMBER(0));
if (True == x105553421650759) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall0(co, "));
return;
} else {
Obj x105553421660423 = PRIM_EQ(nargs, MAKE_NUMBER(1));
if (True == x105553421660423) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall1(co, "));
return;
} else {
Obj x105553421539015 = PRIM_EQ(nargs, MAKE_NUMBER(2));
if (True == x105553421539015) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall2(co, "));
return;
} else {
Obj x105553421548679 = PRIM_EQ(nargs, MAKE_NUMBER(3));
if (True == x105553421548679) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall3(co, "));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 2,
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
case 2:
{
Obj x105553421558279= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 3:
{
Obj x105553421558727= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421558727, f, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x105553421558983= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421559463 = PRIM_GT(nargs, MAKE_NUMBER(3));
if (True == x105553421559463) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x105553421563911 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421563911) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
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
case 5:
{
Obj x105553421564295= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 6:
{
Obj x105553421564839= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 7:
{
Obj x105553421559847= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 8:
{
Obj x105553421560199= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421560679 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421560679) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 7,
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
case 9:
{
Obj x105553421561063= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 10:
{
Obj x105553421561607= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 11:
{
Obj x105553421548999= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 12:
{
Obj x105553421549447= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421549447, f, closureRef(R[0], 4));
return;
}
case 13:
{
Obj x105553421549703= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421550183 = PRIM_GT(nargs, MAKE_NUMBER(3));
if (True == x105553421550183) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x105553421554631 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421554631) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
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
case 14:
{
Obj x105553421555015= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 15:
{
Obj x105553421555559= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 16:
{
Obj x105553421550567= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 17:
{
Obj x105553421550919= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421551399 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421551399) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 7,
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
case 18:
{
Obj x105553421551783= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 19:
{
Obj x105553421552327= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 20:
{
Obj x105553421539335= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 21:
{
Obj x105553421539783= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421539783, f, closureRef(R[0], 4));
return;
}
case 22:
{
Obj x105553421540039= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421540519 = PRIM_GT(nargs, MAKE_NUMBER(3));
if (True == x105553421540519) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x105553421544967 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421544967) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
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
case 23:
{
Obj x105553421545351= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 24:
{
Obj x105553421545895= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 25:
{
Obj x105553421540903= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 26:
{
Obj x105553421541255= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421541735 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421541735) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 7,
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
case 27:
{
Obj x105553421542119= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 28:
{
Obj x105553421542663= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 29:
{
Obj x105553421660743= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 30:
{
Obj x105553421661191= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421661191, f, closureRef(R[0], 4));
return;
}
case 31:
{
Obj x105553421661447= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421661927 = PRIM_GT(nargs, MAKE_NUMBER(3));
if (True == x105553421661927) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x105553421535303 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421535303) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
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
case 32:
{
Obj x105553421535687= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 33:
{
Obj x105553421536231= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 34:
{
Obj x105553421662311= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 35:
{
Obj x105553421662663= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421663143 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421663143) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 7,
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
case 36:
{
Obj x105553421663527= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 37:
{
Obj x105553421664071= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 38:
{
Obj x105553421651079= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 39:
{
Obj x105553421651527= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553421651527, f, closureRef(R[0], 4));
return;
}
case 40:
{
Obj x105553421651783= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421652263 = PRIM_GT(nargs, MAKE_NUMBER(3));
if (True == x105553421652263) {
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(", "));
return;
} else {
Nil;
Obj x105553421656711 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421656711) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 5,
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
case 41:
{
Obj x105553421657095= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 42:
{
Obj x105553421657639= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 43:
{
Obj x105553421652647= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), nargs);
return;
}
case 44:
{
Obj x105553421652999= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x105553421653479 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x105553421653479) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun85,
.label = 7,
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
case 45:
{
Obj x105553421653863= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[43]), 5, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args);
return;
}
case 46:
{
Obj x105553421654407= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun83, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
struct frame1 __curr = {
.fn = clofun83,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("Obj "));
return;
}
case 1:
{
Obj x105553421641959= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun83,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v);
return;
}
case 2:
{
Obj x105553421642567= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun83,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(" = R["));
return;
}
case 3:
{
Obj x105553421642983= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun83,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj x105553421643399= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun83,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("];\n"));
return;
}
case 5:
{
Obj x105553421643815= co->res;
Obj acc = R[1];
Obj x105553421644167 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x105553421644167);
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun81, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
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
struct frame1 __curr = {
.fn = clofun81,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("R["));
return;
}
case 1:
{
Obj x105553421636967= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun81,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), acc);
return;
}
case 2:
{
Obj x105553421637383= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
struct frame1 __curr = {
.fn = clofun81,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("] = "));
return;
}
case 3:
{
Obj x105553421637799= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun81,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[46]), 5, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v);
return;
}
case 4:
{
Obj x105553421638407= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun81,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString(";\n"));
return;
}
case 5:
{
Obj x105553421638823= co->res;
Obj acc = R[1];
Obj x105553421639175 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x105553421639175);
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
coraCall3(co, globalRef(__symbolTable[51]), MAKE_NUMBER(0), sym, globals);
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
struct frame1 __curr = {
.fn = clofun79,
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
Obj x105553421632007= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == x105553421632007) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x105553421632583 = PRIM_CAR(globals);
Obj x105553421632743 = PRIM_EQ(sym, x105553421632583);
if (True == x105553421632743) {
coraReturn(co, idx);
return;
} else {
Obj x105553421633255 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x105553421633575 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[51]), x105553421633255, sym, x105553421633575);
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
struct frame1 __curr = {
.fn = clofun78,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[52]), globals);
return;
}
case 1:
{
Obj x105553421628967= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = x105553421628967;
R[1] = sym;
R[2] = val;
R[3] = globals;
struct frame1 __curr = {
.fn = clofun78,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), sym, val);
return;
}
case 2:
{
Obj x105553421629383= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == x105553421629383) {
coraReturn(co, Nil);
return;
} else {
Obj x105553421629959 = makeCons(sym, val);
Obj x105553421630119 = primSet(co, globals, x105553421629959);
coraReturn(co, x105553421630119);
return;
}
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj k = R[2];
Obj x105553421625447 = primGenSym();
Obj tmp = x105553421625447;
R[1] = x;
R[2] = tmp;
struct frame1 __curr = {
.fn = clofun77,
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
Obj x105553421626311= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj x105553421626535 = makeCons(x105553421626311, Nil);
Obj x105553421626695 = makeCons(x, x105553421626535);
Obj x105553421626855 = makeCons(tmp, x105553421626695);
Obj x105553421627015 = makeCons(__symbolTable[86], x105553421626855);
coraReturn(co, x105553421627015);
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
struct frame1 __curr = {
.fn = clofun76,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj x105553421620423= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = x105553421620423;
R[1] = val;
R[2] = idx;
R[3] = v;
struct frame1 __curr = {
.fn = clofun76,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj x105553421620839= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = x105553421620839;
Obj x105553421621543 = makeCons(val, Nil);
Obj x105553421621703 = makeCons(idx, x105553421621543);
Obj x105553421621895 = makeCons(x105553421621703, cur);
Obj cur1 = x105553421621895;
Obj x105553421622471 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
struct frame1 __curr = {
.fn = clofun76,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), x105553421622471);
return;
}
case 3:
{
Obj x105553421622663= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355677383 = R[1];
Obj x105553355677415 = R[2];
Obj x105553355679559 = makeNative1(1, clofun74, 0, 2, x105553355677383, x105553355677415);
Obj x105553421464039 = PRIM_ISCONS(x105553355677415);
if (True == x105553421464039) {
Obj x105553421464519 = PRIM_CAR(x105553355677415);
Obj x105553421464679 = PRIM_EQ(__symbolTable[78], x105553421464519);
if (True == x105553421464679) {
Obj x105553421465127 = PRIM_CDR(x105553355677415);
Obj x105553421465255 = PRIM_ISCONS(x105553421465127);
if (True == x105553421465255) {
Obj x105553421465831 = PRIM_CDR(x105553355677415);
Obj x105553421465959 = PRIM_CAR(x105553421465831);
Obj x105553421466087 = PRIM_ISCONS(x105553421465959);
if (True == x105553421466087) {
Obj x105553421466823 = PRIM_CDR(x105553355677415);
Obj x105553421466951 = PRIM_CAR(x105553421466823);
Obj x105553421467079 = PRIM_CAR(x105553421466951);
Obj x105553421467239 = PRIM_EQ(__symbolTable[89], x105553421467079);
if (True == x105553421467239) {
Obj x105553421599015 = PRIM_CDR(x105553355677415);
Obj x105553421599143 = PRIM_CAR(x105553421599015);
Obj x105553421599271 = PRIM_CDR(x105553421599143);
Obj x105553421599399 = PRIM_ISCONS(x105553421599271);
if (True == x105553421599399) {
Obj x105553421600103 = PRIM_CDR(x105553355677415);
Obj x105553421600231 = PRIM_CAR(x105553421600103);
Obj x105553421600359 = PRIM_CDR(x105553421600231);
Obj x105553421600487 = PRIM_CAR(x105553421600359);
Obj params = x105553421600487;
Obj x105553421601319 = PRIM_CDR(x105553355677415);
Obj x105553421601447 = PRIM_CAR(x105553421601319);
Obj x105553421601575 = PRIM_CDR(x105553421601447);
Obj x105553421601703 = PRIM_CDR(x105553421601575);
Obj x105553421601831 = PRIM_ISCONS(x105553421601703);
if (True == x105553421601831) {
Obj x105553421602663 = PRIM_CDR(x105553355677415);
Obj x105553421602791 = PRIM_CAR(x105553421602663);
Obj x105553421602919 = PRIM_CDR(x105553421602791);
Obj x105553421603047 = PRIM_CDR(x105553421602919);
Obj x105553421603175 = PRIM_CAR(x105553421603047);
Obj body = x105553421603175;
Obj x105553421604167 = PRIM_CDR(x105553355677415);
Obj x105553421604295 = PRIM_CAR(x105553421604167);
Obj x105553421604423 = PRIM_CDR(x105553421604295);
Obj x105553421604551 = PRIM_CDR(x105553421604423);
Obj x105553421604679 = PRIM_CDR(x105553421604551);
Obj x105553421604839 = PRIM_EQ(Nil, x105553421604679);
if (True == x105553421604839) {
Obj x105553421605287 = PRIM_CDR(x105553355677415);
Obj x105553421605415 = PRIM_CDR(x105553421605287);
Obj fvs = x105553421605415;
R[1] = x105553355677383;
R[2] = params;
R[3] = fvs;
struct frame1 __curr = {
.fn = clofun75,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), x105553355677383, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355679559);
return;
}
}
case 1:
{
Obj x105553421605799= co->res;
Obj x105553355677383 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = x105553421605799;
R[1] = body1;
R[2] = x105553355677383;
R[3] = params;
R[4] = fvs;
struct frame1 __curr = {
.fn = clofun75,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), x105553355677383, MAKE_NUMBER(0));
return;
}
case 2:
{
Obj x105553421606215= co->res;
Obj body1 = R[1];
Obj x105553355677383 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = x105553421606215;
R[1] = x105553355677383;
R[2] = params;
R[3] = fvs;
R[4] = cur;
struct frame1 __curr = {
.fn = clofun75,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[58]), params, body1);
return;
}
case 3:
{
Obj x105553421606631= co->res;
Obj x105553355677383 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = x105553421606631;
R[1] = x105553355677383;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
struct frame1 __curr = {
.fn = clofun75,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[57]), body2);
return;
}
case 4:
{
Obj x105553421606983= co->res;
Obj x105553355677383 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = x105553421606983;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
struct frame1 __curr = {
.fn = clofun75,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[54]), x105553355677383, body2);
return;
}
case 5:
{
Obj x105553421607399= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
struct frame1 __curr = {
.fn = clofun75,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), params);
return;
}
case 6:
{
Obj x105553421608135= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj x105553421608519 = makeCons(nframe, fvs);
Obj x105553421608679 = makeCons(x105553421608135, x105553421608519);
Obj x105553421608839 = makeCons(cur, x105553421608679);
Obj x105553421608999 = makeCons(__symbolTable[78], x105553421608839);
coraReturn(co, x105553421608999);
return;
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421462407 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x105553421462407) {
struct frame1 __curr = {
.fn = clofun74,
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
Obj x105553421462791= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x105553421462791, closureRef(R[0], 1));
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
struct frame1 __curr = {
.fn = clofun73,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[99]), lam);
return;
}
case 1:
{
Obj x105553421456711= co->res;
Obj lam = R[1];
R[1] = lam;
struct frame1 __curr = {
.fn = clofun73,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), x105553421456711);
return;
}
case 2:
{
Obj x105553421456871= co->res;
Obj lam = R[1];
Obj nargs = x105553421456871;
Obj x105553421459975 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = x105553421459975;
struct frame1 __curr = {
.fn = clofun73,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), lam);
return;
}
case 3:
{
Obj x105553421460263= co->res;
Obj x105553421459975 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun72, 2, 0), x105553421459975, x105553421460263);
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
struct frame1 __curr = {
.fn = clofun72,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), x);
return;
}
case 1:
{
Obj x105553421457671= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), x105553421457671);
return;
}
case 2:
{
Obj x105553421457831= co->res;
Obj acc = R[1];
Obj x105553421458055 = PRIM_ADD(x105553421457831, MAKE_NUMBER(1));
Obj len = x105553421458055;
Obj x105553421458439 = PRIM_GT(len, acc);
if (True == x105553421458439) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
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
coraCall(co, globalRef(__symbolTable[61]), 4, body, MAKE_NUMBER(1), Nil, makeNative1(4, clofun70, 3, 1, params));
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body1 = R[1];
Obj idx = R[2];
Obj conts = R[3];
Obj x105553421454471 = makeCons(body1, conts);
Obj x105553421454631 = makeCons(closureRef(R[0], 0), x105553421454471);
Obj x105553421454791 = makeCons(__symbolTable[89], x105553421454631);
coraReturn(co, x105553421454791);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355515271 = R[1];
Obj x105553355515303 = R[2];
Obj x105553355515335 = R[3];
Obj x105553355515367 = R[4];
Obj x105553355515399 = R[5];
Obj x105553421447431 = PRIM_EQ(Nil, x105553355515271);
if (True == x105553421447431) {
R[1] = x105553355515399;
R[2] = x105553355515303;
R[3] = x105553355515335;
struct frame1 __curr = {
.fn = clofun69,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x105553355515367);
return;
} else {
Obj x105553421448647 = PRIM_ISCONS(x105553355515271);
if (True == x105553421448647) {
Obj x105553421448967 = PRIM_CAR(x105553355515271);
Obj f = x105553421448967;
Obj x105553421449287 = PRIM_CDR(x105553355515271);
Obj args = x105553421449287;
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[61]), 4, f, x105553355515303, x105553355515335, makeNative1(4, clofun68, 3, 3, args, x105553355515367, x105553355515399));
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
Obj x105553421447815= co->res;
Obj x105553355515399 = R[1];
Obj x105553355515303 = R[2];
Obj x105553355515335 = R[3];
co->ctx.sp = R;
coraCall3(co, x105553355515399, x105553421447815, x105553355515303, x105553355515335);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj f1 = R[1];
Obj idx1 = R[2];
Obj conts1 = R[3];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[60]), 5, closureRef(R[0], 0), idx1, conts1, closureRef(R[0], 1), makeNative1(4, clofun67, 3, 2, closureRef(R[0], 2), f1));
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj args1 = R[1];
Obj idx2 = R[2];
Obj conts2 = R[3];
Obj x105553421450343 = makeCons(closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), x105553421450343, idx2, conts2);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355474855 = R[1];
Obj x105553355474887 = R[2];
Obj x105553355474919 = R[3];
Obj x105553355474951 = R[4];
Obj x105553360444423 = makeNative1(2, clofun65, 1, 4, x105553355474855, x105553355474919, x105553355474887, x105553355474951);
Obj x105553421444903 = primIsSymbol(x105553355474855);
if (True == x105553421444903) {
co->ctx.sp = R;
coraCall1(co, x105553360444423, True);
return;
} else {
R[1] = x105553360444423;
struct frame1 __curr = {
.fn = clofun66,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x105553355474855);
return;
}
}
case 1:
{
Obj x105553421445383= co->res;
Obj x105553360444423 = R[1];
if (True == x105553421445383) {
co->ctx.sp = R;
coraCall1(co, x105553360444423, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553360444423, False);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553360444455 = R[1];
if (True == x105553360444455) {
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 2), closureRef(R[0], 1));
return;
} else {
Obj x105553355482791 = makeNative1(1, clofun62, 0, 4, closureRef(R[0], 0), closureRef(R[0], 2), closureRef(R[0], 1), closureRef(R[0], 3));
Obj x105553421430503 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421430503) {
Obj x105553421430983 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421431143 = PRIM_EQ(__symbolTable[73], x105553421430983);
if (True == x105553421431143) {
Obj x105553421431591 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421431719 = PRIM_ISCONS(x105553421431591);
if (True == x105553421431719) {
Obj x105553421432167 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421432295 = PRIM_CAR(x105553421432167);
Obj exp = x105553421432295;
Obj x105553421432871 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421432999 = PRIM_CDR(x105553421432871);
Obj x105553421433127 = PRIM_ISCONS(x105553421432999);
if (True == x105553421433127) {
Obj x105553421433703 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421433831 = PRIM_CDR(x105553421433703);
Obj x105553421433959 = PRIM_CAR(x105553421433831);
Obj cont = x105553421433959;
Obj x105553421434695 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421434823 = PRIM_CDR(x105553421434695);
Obj x105553421434951 = PRIM_CDR(x105553421434823);
Obj x105553421435111 = PRIM_EQ(Nil, x105553421434951);
if (True == x105553421435111) {
Obj x105553421435591 = PRIM_ADD(closureRef(R[0], 2), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[61]), 4, cont, x105553421435591, closureRef(R[0], 1), makeNative1(4, clofun64, 3, 3, exp, closureRef(R[0], 2), closureRef(R[0], 3)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355482791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355482791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355482791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355482791);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355482791);
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
Obj idx1 = R[2];
Obj conts1 = R[3];
Obj x105553421436231 = makeCons(cont1, conts1);
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[61]), 4, closureRef(R[0], 0), closureRef(R[0], 1), x105553421436231, makeNative1(4, clofun63, 3, 2, cont1, closureRef(R[0], 2)));
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj idx2 = R[2];
Obj conts2 = R[3];
R[1] = exp1;
R[2] = idx2;
R[3] = conts2;
struct frame1 __curr = {
.fn = clofun63,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[59]), closureRef(R[0], 0));
return;
}
case 1:
{
Obj x105553421436647= co->res;
Obj exp1 = R[1];
Obj idx2 = R[2];
Obj conts2 = R[3];
Obj fvs = x105553421436647;
Obj x105553421437447 = makeCons(idx2, fvs);
Obj x105553421437607 = makeCons(exp1, x105553421437447);
Obj x105553421437767 = makeCons(__symbolTable[73], x105553421437607);
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 1), x105553421437767, idx2, conts2);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421427335 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421427335) {
Obj x105553421427655 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x105553421427655;
Obj x105553421427975 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421427975;
Obj x105553421428423 = makeCons(f, args);
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[60]), 5, x105553421428423, closureRef(R[0], 1), closureRef(R[0], 2), Nil, closureRef(R[0], 3));
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
Obj x105553355545543 = R[1];
Obj x105553355545575 = R[2];
R[1] = x105553355545575;
R[2] = x105553355545543;
struct frame1 __curr = {
.fn = clofun61,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x105553355545575);
return;
}
case 1:
{
Obj x105553421514471= co->res;
Obj x105553355545575 = R[1];
Obj x105553355545543 = R[2];
if (True == x105553421514471) {
coraReturn(co, x105553355545575);
return;
} else {
Obj x105553421514887 = primIsSymbol(x105553355545575);
if (True == x105553421514887) {
coraReturn(co, x105553355545575);
return;
} else {
Obj x105553355552071 = makeNative1(4, clofun60, 0, 2, x105553355545575, x105553355545543);
Obj x105553421414215 = PRIM_ISCONS(x105553355545575);
if (True == x105553421414215) {
Obj x105553421414695 = PRIM_CAR(x105553355545575);
Obj x105553421414855 = PRIM_EQ(__symbolTable[89], x105553421414695);
if (True == x105553421414855) {
Obj x105553421415303 = PRIM_CDR(x105553355545575);
Obj x105553421415431 = PRIM_ISCONS(x105553421415303);
if (True == x105553421415431) {
Obj x105553421415879 = PRIM_CDR(x105553355545575);
Obj x105553421416007 = PRIM_CAR(x105553421415879);
Obj args = x105553421416007;
Obj x105553421416583 = PRIM_CDR(x105553355545575);
Obj x105553421416711 = PRIM_CDR(x105553421416583);
Obj x105553421416839 = PRIM_ISCONS(x105553421416711);
if (True == x105553421416839) {
Obj x105553421417415 = PRIM_CDR(x105553355545575);
Obj x105553421417543 = PRIM_CDR(x105553421417415);
Obj x105553421417671 = PRIM_CAR(x105553421417543);
Obj body = x105553421417671;
Obj x105553421418407 = PRIM_CDR(x105553355545575);
Obj x105553421418535 = PRIM_CDR(x105553421418407);
Obj x105553421418663 = PRIM_CDR(x105553421418535);
Obj x105553421418823 = PRIM_EQ(Nil, x105553421418663);
if (True == x105553421418823) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun61,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), x105553355545543, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355552071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355552071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355552071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355552071);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355552071);
return;
}
}
}
}
case 2:
{
Obj x105553421419591= co->res;
Obj args = R[1];
Obj x105553421419815 = makeCons(x105553421419591, Nil);
Obj x105553421419975 = makeCons(args, x105553421419815);
Obj x105553421420135 = makeCons(__symbolTable[89], x105553421419975);
coraReturn(co, x105553421420135);
return;
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355558439 = makeNative1(3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421531495 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421531495) {
Obj x105553421531975 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421532135 = PRIM_EQ(__symbolTable[75], x105553421531975);
if (True == x105553421532135) {
Obj x105553421532583 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421532711 = PRIM_ISCONS(x105553421532583);
if (True == x105553421532711) {
Obj x105553421533159 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421402215 = PRIM_CAR(x105553421533159);
Obj val = x105553421402215;
Obj x105553421402791 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421402919 = PRIM_CDR(x105553421402791);
Obj x105553421403047 = PRIM_ISCONS(x105553421402919);
if (True == x105553421403047) {
Obj x105553421403623 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421403751 = PRIM_CDR(x105553421403623);
Obj x105553421403879 = PRIM_CAR(x105553421403751);
Obj body = x105553421403879;
Obj x105553421404615 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421404743 = PRIM_CDR(x105553421404615);
Obj x105553421404871 = PRIM_CDR(x105553421404743);
Obj x105553421405031 = PRIM_EQ(Nil, x105553421404871);
if (True == x105553421405031) {
R[1] = body;
R[2] = val;
struct frame1 __curr = {
.fn = clofun60,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355558439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355558439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355558439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355558439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355558439);
return;
}
}
case 1:
{
Obj x105553421405479= co->res;
Obj body = R[1];
Obj val = R[2];
R[1] = body;
R[2] = val;
struct frame1 __curr = {
.fn = clofun60,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), x105553421405479, val);
return;
}
case 2:
{
Obj x105553421405703= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = x105553421405703;
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
case 3:
{
Obj x105553421406183= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
struct frame1 __curr = {
.fn = clofun60,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x105553421406183, fvs1);
return;
}
case 4:
{
Obj x105553421406407= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = x105553421406407;
R[1] = fvs2;
R[2] = val;
struct frame1 __curr = {
.fn = clofun60,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), fvs1, body);
return;
}
case 5:
{
Obj x105553421407207= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj x105553421407431 = makeCons(x105553421407207, fvs2);
Obj x105553421407591 = makeCons(val, x105553421407431);
Obj x105553421407751 = makeCons(__symbolTable[62], x105553421407591);
coraReturn(co, x105553421407751);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355564807 = makeNative1(3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421519111 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421519111) {
Obj x105553421519591 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421519751 = PRIM_EQ(__symbolTable[73], x105553421519591);
if (True == x105553421519751) {
Obj x105553421520199 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421520327 = PRIM_ISCONS(x105553421520199);
if (True == x105553421520327) {
Obj x105553421520775 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421520903 = PRIM_CAR(x105553421520775);
Obj exp = x105553421520903;
Obj x105553421521479 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421521607 = PRIM_CDR(x105553421521479);
Obj x105553421521735 = PRIM_ISCONS(x105553421521607);
if (True == x105553421521735) {
Obj x105553421522311 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421522439 = PRIM_CDR(x105553421522311);
Obj x105553421522567 = PRIM_CAR(x105553421522439);
Obj cont = x105553421522567;
Obj x105553421523303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421523431 = PRIM_CDR(x105553421523303);
Obj x105553421523559 = PRIM_CDR(x105553421523431);
Obj x105553421523719 = PRIM_EQ(Nil, x105553421523559);
if (True == x105553421523719) {
R[1] = exp;
R[2] = cont;
struct frame1 __curr = {
.fn = clofun59,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[63]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355564807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355564807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355564807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355564807);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355564807);
return;
}
}
case 1:
{
Obj x105553421524391= co->res;
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
coraCall2(co, globalRef(__symbolTable[92]), x105553421524391, exp);
return;
}
case 2:
{
Obj x105553421524615= co->res;
Obj cont = R[1];
R[1] = x105553421524615;
struct frame1 __curr = {
.fn = clofun59,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), closureRef(R[0], 1), cont);
return;
}
case 3:
{
Obj x105553421525127= co->res;
Obj x105553421524615 = R[1];
Obj x105553421525351 = makeCons(x105553421525127, Nil);
Obj x105553421525511 = makeCons(x105553421524615, x105553421525351);
Obj x105553421525671 = makeCons(__symbolTable[73], x105553421525511);
coraReturn(co, x105553421525671);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421515655 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421515655) {
Obj x105553421515975 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x105553421515975;
Obj x105553421516295 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421516295;
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
Obj x105553421516679= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x105553421517063 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x105553421516679, x105553421517063);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355388199 = R[1];
Obj x105553355388231 = R[2];
Obj x105553355388263 = R[3];
Obj x105553421499623 = PRIM_EQ(Nil, x105553355388199);
if (True == x105553421499623) {
R[1] = x105553355388263;
struct frame1 __curr = {
.fn = clofun57,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x105553355388231);
return;
} else {
Obj x105553421510151 = PRIM_ISCONS(x105553355388199);
if (True == x105553421510151) {
Obj x105553421510471 = PRIM_CAR(x105553355388199);
Obj hd = x105553421510471;
Obj x105553421510791 = PRIM_CDR(x105553355388199);
Obj tl = x105553421510791;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), hd, makeNative1(2, clofun56, 1, 3, tl, x105553355388231, x105553355388263));
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
Obj x105553421499943= co->res;
Obj x105553355388263 = R[1];
Obj exp = x105553421499943;
Obj x105553360406663 = makeNative1(2, clofun55, 1, 2, exp, x105553355388263);
Obj x105553421507175 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x105553360406663;
struct frame1 __curr = {
.fn = clofun57,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), x105553421507175);
return;
}
case 2:
{
Obj x105553421507303= co->res;
Obj exp = R[1];
Obj x105553360406663 = R[2];
if (True == x105553421507303) {
R[1] = x105553360406663;
struct frame1 __curr = {
.fn = clofun57,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[64]), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553360406663, False);
return;
}
}
case 3:
{
Obj x105553421507783= co->res;
Obj x105553360406663 = R[1];
Obj x105553421508007 = PRIM_EQ(x105553421507783, __symbolTable[90]);
if (True == x105553421508007) {
co->ctx.sp = R;
coraCall1(co, x105553360406663, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553360406663, False);
return;
}
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj x105553421511495 = makeCons(hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), closureRef(R[0], 0), x105553421511495, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553360406695 = R[1];
if (True == x105553360406695) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x105553421500903 = PRIM_EQ(closureRef(R[0], 1), globalRef(__symbolTable[70]));
if (True == x105553421500903) {
Obj x105553421501383 = makeCons(closureRef(R[0], 0), Nil);
Obj x105553421501543 = makeCons(__symbolTable[74], x105553421501383);
coraReturn(co, x105553421501543);
return;
} else {
Obj x105553421502119 = primGenSym();
Obj val = x105553421502119;
Obj x105553421503175 = makeCons(val, Nil);
R[1] = x105553421503175;
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
Obj x105553421503591= co->res;
Obj x105553421503175 = R[1];
Obj x105553421503815 = makeCons(x105553421503591, Nil);
Obj x105553421503975 = makeCons(x105553421503175, x105553421503815);
Obj x105553421504135 = makeCons(__symbolTable[75], x105553421503975);
Obj x105553421504327 = makeCons(x105553421504135, Nil);
Obj x105553421504487 = makeCons(closureRef(R[0], 0), x105553421504327);
Obj x105553421504647 = makeCons(__symbolTable[73], x105553421504487);
coraReturn(co, x105553421504647);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355431015 = R[1];
Obj x105553355431047 = R[2];
Obj x105553360225895 = makeNative1(2, clofun53, 1, 2, x105553355431015, x105553355431047);
Obj x105553421497095 = primIsSymbol(x105553355431015);
if (True == x105553421497095) {
co->ctx.sp = R;
coraCall1(co, x105553360225895, True);
return;
} else {
R[1] = x105553360225895;
struct frame1 __curr = {
.fn = clofun54,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x105553355431015);
return;
}
}
case 1:
{
Obj x105553421497575= co->res;
Obj x105553360225895 = R[1];
if (True == x105553421497575) {
co->ctx.sp = R;
coraCall1(co, x105553360225895, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553360225895, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553360225927 = R[1];
if (True == x105553360225927) {
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
Obj x105553421293127= co->res;
if (True == x105553421293127) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj x105553355437543 = makeNative1(1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421479527 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421479527) {
Obj x105553421480007 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421480167 = PRIM_EQ(__symbolTable[87], x105553421480007);
if (True == x105553421480167) {
Obj x105553421480615 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421480743 = PRIM_ISCONS(x105553421480615);
if (True == x105553421480743) {
Obj x105553421481191 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421481319 = PRIM_CAR(x105553421481191);
Obj a = x105553421481319;
Obj x105553421481895 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421482023 = PRIM_CDR(x105553421481895);
Obj x105553421482151 = PRIM_ISCONS(x105553421482023);
if (True == x105553421482151) {
Obj x105553421482727 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421482855 = PRIM_CDR(x105553421482727);
Obj x105553421482983 = PRIM_CAR(x105553421482855);
Obj b = x105553421482983;
Obj x105553421483687 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421483815 = PRIM_CDR(x105553421483687);
Obj x105553421483943 = PRIM_CDR(x105553421483815);
Obj x105553421484071 = PRIM_ISCONS(x105553421483943);
if (True == x105553421484071) {
Obj x105553421484775 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421484903 = PRIM_CDR(x105553421484775);
Obj x105553421485031 = PRIM_CDR(x105553421484903);
Obj x105553421485159 = PRIM_CAR(x105553421485031);
Obj c = x105553421485159;
Obj x105553421486023 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421486151 = PRIM_CDR(x105553421486023);
Obj x105553421486279 = PRIM_CDR(x105553421486151);
Obj x105553421486407 = PRIM_CDR(x105553421486279);
Obj x105553421486567 = PRIM_EQ(Nil, x105553421486407);
if (True == x105553421486567) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative1(3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355437543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355437543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355437543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355437543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355437543);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355437543);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x105553421487559= co->res;
Obj ra = R[1];
R[1] = x105553421487559;
R[2] = ra;
struct frame1 __curr = {
.fn = clofun52,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[69]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 2:
{
Obj x105553421488071= co->res;
Obj x105553421487559 = R[1];
Obj ra = R[2];
Obj x105553421488295 = makeCons(x105553421488071, Nil);
Obj x105553421488455 = makeCons(x105553421487559, x105553421488295);
Obj x105553421488615 = makeCons(ra, x105553421488455);
Obj x105553421488775 = makeCons(__symbolTable[87], x105553421488615);
coraReturn(co, x105553421488775);
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355445223 = makeNative1(1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421335591 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421335591) {
Obj x105553421336071 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421336231 = PRIM_EQ(__symbolTable[85], x105553421336071);
if (True == x105553421336231) {
Obj x105553421467751 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421467879 = PRIM_ISCONS(x105553421467751);
if (True == x105553421467879) {
Obj x105553421468327 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421468455 = PRIM_CAR(x105553421468327);
Obj a = x105553421468455;
Obj x105553421469031 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421469159 = PRIM_CDR(x105553421469031);
Obj x105553421469287 = PRIM_ISCONS(x105553421469159);
if (True == x105553421469287) {
Obj x105553421469863 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421469991 = PRIM_CDR(x105553421469863);
Obj x105553421470119 = PRIM_CAR(x105553421469991);
Obj b = x105553421470119;
Obj x105553421470855 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421470983 = PRIM_CDR(x105553421470855);
Obj x105553421471111 = PRIM_CDR(x105553421470983);
Obj x105553421471271 = PRIM_EQ(Nil, x105553421471111);
if (True == x105553421471271) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative1(2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355445223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355445223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355445223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355445223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355445223);
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
Obj x105553421471815 = primIsSymbol(ra);
if (True == x105553421471815) {
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
Obj x105553421472935= co->res;
Obj ra = R[1];
Obj x105553421473159 = makeCons(x105553421472935, Nil);
Obj x105553421473319 = makeCons(ra, x105553421473159);
Obj x105553421473479 = makeCons(__symbolTable[85], x105553421473319);
coraReturn(co, x105553421473479);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355451591 = makeNative1(3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421319143 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421319143) {
Obj x105553421319623 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421319783 = PRIM_EQ(__symbolTable[86], x105553421319623);
if (True == x105553421319783) {
Obj x105553421320231 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421320359 = PRIM_ISCONS(x105553421320231);
if (True == x105553421320359) {
Obj x105553421320807 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421320935 = PRIM_CAR(x105553421320807);
Obj a = x105553421320935;
Obj x105553421321511 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421321639 = PRIM_CDR(x105553421321511);
Obj x105553421321767 = PRIM_ISCONS(x105553421321639);
if (True == x105553421321767) {
Obj x105553421322343 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421322471 = PRIM_CDR(x105553421322343);
Obj x105553421322599 = PRIM_CAR(x105553421322471);
Obj b = x105553421322599;
Obj x105553421323303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421323431 = PRIM_CDR(x105553421323303);
Obj x105553421323559 = PRIM_CDR(x105553421323431);
Obj x105553421323687 = PRIM_ISCONS(x105553421323559);
if (True == x105553421323687) {
Obj x105553421324391 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421324519 = PRIM_CDR(x105553421324391);
Obj x105553421324647 = PRIM_CDR(x105553421324519);
Obj x105553421324775 = PRIM_CAR(x105553421324647);
Obj c = x105553421324775;
Obj x105553421325639 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421325767 = PRIM_CDR(x105553421325639);
Obj x105553421325895 = PRIM_CDR(x105553421325767);
Obj x105553421326023 = PRIM_CDR(x105553421325895);
Obj x105553421326183 = PRIM_EQ(Nil, x105553421326023);
if (True == x105553421326183) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), b, makeNative1(2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355451591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355451591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355451591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355451591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355451591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355451591);
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
Obj x105553421327335= co->res;
Obj rb = R[1];
Obj x105553421327559 = makeCons(x105553421327335, Nil);
Obj x105553421327719 = makeCons(rb, x105553421327559);
Obj x105553421327879 = makeCons(closureRef(R[0], 0), x105553421327719);
Obj x105553421328039 = makeCons(__symbolTable[86], x105553421327879);
coraReturn(co, x105553421328039);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355459271 = makeNative1(1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421297095 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421297095) {
Obj x105553421297575 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421297735 = PRIM_EQ(__symbolTable[78], x105553421297575);
if (True == x105553421297735) {
Obj x105553421298183 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421298311 = PRIM_ISCONS(x105553421298183);
if (True == x105553421298311) {
Obj x105553421298887 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421299015 = PRIM_CAR(x105553421298887);
Obj x105553421299143 = PRIM_ISCONS(x105553421299015);
if (True == x105553421299143) {
Obj x105553421299879 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421300007 = PRIM_CAR(x105553421299879);
Obj x105553421300135 = PRIM_CAR(x105553421300007);
Obj x105553421300295 = PRIM_EQ(__symbolTable[89], x105553421300135);
if (True == x105553421300295) {
Obj x105553421300999 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421301127 = PRIM_CAR(x105553421300999);
Obj x105553421301255 = PRIM_CDR(x105553421301127);
Obj x105553421301383 = PRIM_ISCONS(x105553421301255);
if (True == x105553421301383) {
Obj x105553421302087 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421302215 = PRIM_CAR(x105553421302087);
Obj x105553421302343 = PRIM_CDR(x105553421302215);
Obj x105553421302471 = PRIM_CAR(x105553421302343);
Obj args = x105553421302471;
Obj x105553421303303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421303431 = PRIM_CAR(x105553421303303);
Obj x105553421303559 = PRIM_CDR(x105553421303431);
Obj x105553421303687 = PRIM_CDR(x105553421303559);
Obj x105553421303815 = PRIM_ISCONS(x105553421303687);
if (True == x105553421303815) {
Obj x105553421304647 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421304775 = PRIM_CAR(x105553421304647);
Obj x105553421304903 = PRIM_CDR(x105553421304775);
Obj x105553421305031 = PRIM_CDR(x105553421304903);
Obj x105553421305159 = PRIM_CAR(x105553421305031);
Obj body = x105553421305159;
Obj x105553421306151 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421306279 = PRIM_CAR(x105553421306151);
Obj x105553421306407 = PRIM_CDR(x105553421306279);
Obj x105553421306535 = PRIM_CDR(x105553421306407);
Obj x105553421306663 = PRIM_CDR(x105553421306535);
Obj x105553421306823 = PRIM_EQ(Nil, x105553421306663);
if (True == x105553421306823) {
Obj x105553421307271 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421307399 = PRIM_CDR(x105553421307271);
Obj frees = x105553421307399;
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
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355459271);
return;
}
}
case 1:
{
Obj x105553421308583= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj x105553421308807 = makeCons(x105553421308583, Nil);
Obj x105553421308967 = makeCons(args, x105553421308807);
Obj x105553421309127 = makeCons(__symbolTable[89], x105553421308967);
Obj x105553421309319 = makeCons(x105553421309127, frees);
Obj x105553421309479 = makeCons(__symbolTable[78], x105553421309319);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), x105553421309479);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421294055 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421294055) {
Obj x105553421294375 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x105553421294375;
Obj x105553421294695 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421294695;
Obj x105553421295143 = makeCons(f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), x105553421295143, Nil, closureRef(R[0], 1));
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
Obj x105553421291239 = makeCons(x, Nil);
Obj x105553421291399 = makeCons(__symbolTable[72], x105553421291239);
coraReturn(co, x105553421291399);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355244455 = R[1];
Obj x105553355244487 = R[2];
R[1] = x105553355244487;
R[2] = x105553355244455;
struct frame1 __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x105553355244487);
return;
}
case 1:
{
Obj x105553421382567= co->res;
Obj x105553355244487 = R[1];
Obj x105553355244455 = R[2];
if (True == x105553421382567) {
coraReturn(co, x105553355244487);
return;
} else {
Obj x105553421382983 = primIsSymbol(x105553355244487);
if (True == x105553421382983) {
R[1] = x105553355244487;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), x105553355244487, x105553355244455);
return;
} else {
Obj x105553355250983 = makeNative1(3, clofun43, 0, 2, x105553355244487, x105553355244455);
Obj x105553421274759 = PRIM_ISCONS(x105553355244487);
if (True == x105553421274759) {
Obj x105553421275239 = PRIM_CAR(x105553355244487);
Obj x105553421275399 = PRIM_EQ(__symbolTable[89], x105553421275239);
if (True == x105553421275399) {
Obj x105553421275847 = PRIM_CDR(x105553355244487);
Obj x105553421275975 = PRIM_ISCONS(x105553421275847);
if (True == x105553421275975) {
Obj x105553421276423 = PRIM_CDR(x105553355244487);
Obj x105553421276551 = PRIM_CAR(x105553421276423);
Obj args = x105553421276551;
Obj x105553421277127 = PRIM_CDR(x105553355244487);
Obj x105553421277255 = PRIM_CDR(x105553421277127);
Obj x105553421277383 = PRIM_ISCONS(x105553421277255);
if (True == x105553421277383) {
Obj x105553421277959 = PRIM_CDR(x105553355244487);
Obj x105553421278087 = PRIM_CDR(x105553421277959);
Obj x105553421278215 = PRIM_CAR(x105553421278087);
Obj body = x105553421278215;
Obj x105553421278951 = PRIM_CDR(x105553355244487);
Obj x105553421279079 = PRIM_CDR(x105553421278951);
Obj x105553421279207 = PRIM_CDR(x105553421279079);
Obj x105553421279367 = PRIM_EQ(Nil, x105553421279207);
if (True == x105553421279367) {
Obj x105553421280199 = makeCons(body, Nil);
Obj x105553421280359 = makeCons(args, x105553421280199);
Obj x105553421280519 = makeCons(__symbolTable[89], x105553421280359);
R[1] = body;
R[2] = args;
R[3] = x105553355244455;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), x105553421280519);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355250983);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355250983);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355250983);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355250983);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355250983);
return;
}
}
}
}
case 2:
{
Obj x105553421280647= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x105553355244455 = R[3];
Obj fvs1 = x105553421280647;
R[1] = args;
R[2] = x105553355244455;
R[3] = fvs1;
struct frame1 __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[71]), fvs1, body);
return;
}
case 3:
{
Obj x105553421281735= co->res;
Obj args = R[1];
Obj x105553355244455 = R[2];
Obj fvs1 = R[3];
Obj x105553421281959 = makeCons(x105553421281735, Nil);
Obj x105553421282119 = makeCons(args, x105553421281959);
Obj x105553421282279 = makeCons(__symbolTable[89], x105553421282119);
R[1] = fvs1;
R[2] = x105553421282279;
struct frame1 __curr = {
.fn = clofun44,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[71]), x105553355244455);
return;
}
case 4:
{
Obj x105553421282695= co->res;
Obj fvs1 = R[1];
Obj x105553421282279 = R[2];
R[1] = x105553421282279;
struct frame1 __curr = {
.fn = clofun44,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x105553421282695, fvs1);
return;
}
case 5:
{
Obj x105553421282919= co->res;
Obj x105553421282279 = R[1];
Obj x105553421283111 = makeCons(x105553421282279, x105553421282919);
Obj x105553421283271 = makeCons(__symbolTable[78], x105553421283111);
coraReturn(co, x105553421283271);
return;
}
case 6:
{
Obj x105553421383367= co->res;
Obj x105553355244487 = R[1];
Obj pos = x105553421383367;
Obj x105553421383783 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x105553421383783) {
coraReturn(co, x105553355244487);
return;
} else {
Obj x105553421384327 = makeCons(pos, Nil);
Obj x105553421384487 = makeCons(__symbolTable[77], x105553421384327);
coraReturn(co, x105553421384487);
return;
}
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355257351 = makeNative1(3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553421389415 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421389415) {
Obj x105553421389895 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421390055 = PRIM_EQ(__symbolTable[86], x105553421389895);
if (True == x105553421390055) {
Obj x105553421390503 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421390631 = PRIM_ISCONS(x105553421390503);
if (True == x105553421390631) {
Obj x105553421391079 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421391207 = PRIM_CAR(x105553421391079);
Obj a = x105553421391207;
Obj x105553421391783 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421391911 = PRIM_CDR(x105553421391783);
Obj x105553421392039 = PRIM_ISCONS(x105553421391911);
if (True == x105553421392039) {
Obj x105553421392615 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421392743 = PRIM_CDR(x105553421392615);
Obj x105553421392871 = PRIM_CAR(x105553421392743);
Obj b = x105553421392871;
Obj x105553421393575 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421393703 = PRIM_CDR(x105553421393575);
Obj x105553421393831 = PRIM_CDR(x105553421393703);
Obj x105553421393959 = PRIM_ISCONS(x105553421393831);
if (True == x105553421393959) {
Obj x105553421394663 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421394791 = PRIM_CDR(x105553421394663);
Obj x105553421394919 = PRIM_CDR(x105553421394791);
Obj x105553421395047 = PRIM_CAR(x105553421394919);
Obj c = x105553421395047;
Obj x105553421395911 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421396039 = PRIM_CDR(x105553421395911);
Obj x105553421396167 = PRIM_CDR(x105553421396039);
Obj x105553421396295 = PRIM_CDR(x105553421396167);
Obj x105553421396455 = PRIM_EQ(Nil, x105553421396295);
if (True == x105553421396455) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
.fn = clofun43,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[71]), closureRef(R[0], 1), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355257351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355257351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355257351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355257351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355257351);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355257351);
return;
}
}
case 1:
{
Obj x105553421397223= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = x105553421397223;
R[2] = a;
struct frame1 __curr = {
.fn = clofun43,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[71]), closureRef(R[0], 1), c);
return;
}
case 2:
{
Obj x105553421397735= co->res;
Obj x105553421397223 = R[1];
Obj a = R[2];
Obj x105553421397959 = makeCons(x105553421397735, Nil);
Obj x105553421398119 = makeCons(x105553421397223, x105553421397959);
Obj x105553421398279 = makeCons(a, x105553421398119);
Obj x105553421398439 = makeCons(__symbolTable[86], x105553421398279);
coraReturn(co, x105553421398439);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421385959 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421385959) {
Obj x105553421386279 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x105553421386279;
Obj x105553421386599 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421386599;
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
Obj x105553421386983= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x105553421387367 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x105553421386983, x105553421387367);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355129287 = R[1];
R[1] = x105553355129287;
struct frame1 __curr = {
.fn = clofun41,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x105553355129287);
return;
}
case 1:
{
Obj x105553421150951= co->res;
Obj x105553355129287 = R[1];
if (True == x105553421150951) {
coraReturn(co, Nil);
return;
} else {
Obj x105553421151367 = primIsSymbol(x105553355129287);
if (True == x105553421151367) {
Obj x105553421151687 = makeCons(x105553355129287, Nil);
coraReturn(co, x105553421151687);
return;
} else {
Obj x105553355133063 = makeNative1(1, clofun40, 0, 1, x105553355129287);
Obj x105553421371303 = PRIM_ISCONS(x105553355129287);
if (True == x105553421371303) {
Obj x105553421371783 = PRIM_CAR(x105553355129287);
Obj x105553421371943 = PRIM_EQ(__symbolTable[89], x105553421371783);
if (True == x105553421371943) {
Obj x105553421372391 = PRIM_CDR(x105553355129287);
Obj x105553421372519 = PRIM_ISCONS(x105553421372391);
if (True == x105553421372519) {
Obj x105553421372967 = PRIM_CDR(x105553355129287);
Obj x105553421373095 = PRIM_CAR(x105553421372967);
Obj args = x105553421373095;
Obj x105553421373671 = PRIM_CDR(x105553355129287);
Obj x105553421373799 = PRIM_CDR(x105553421373671);
Obj x105553421373927 = PRIM_ISCONS(x105553421373799);
if (True == x105553421373927) {
Obj x105553421374503 = PRIM_CDR(x105553355129287);
Obj x105553421374631 = PRIM_CDR(x105553421374503);
Obj x105553421374759 = PRIM_CAR(x105553421374631);
Obj body = x105553421374759;
Obj x105553421375495 = PRIM_CDR(x105553355129287);
Obj x105553421375623 = PRIM_CDR(x105553421375495);
Obj x105553421375751 = PRIM_CDR(x105553421375623);
Obj x105553421375911 = PRIM_EQ(Nil, x105553421375751);
if (True == x105553421375911) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355133063);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355133063);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355133063);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355133063);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355133063);
return;
}
}
}
}
case 2:
{
Obj x105553421376295= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x105553421376295, args);
return;
}
}
}

static void clofun40(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355138471 = makeNative1(1, clofun39, 0, 1, closureRef(R[0], 0));
Obj x105553421355527 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421355527) {
Obj x105553421356007 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421356167 = PRIM_EQ(__symbolTable[87], x105553421356007);
if (True == x105553421356167) {
Obj x105553421356615 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421356743 = PRIM_ISCONS(x105553421356615);
if (True == x105553421356743) {
Obj x105553421357191 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421357319 = PRIM_CAR(x105553421357191);
Obj x = x105553421357319;
Obj x105553421357895 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421358023 = PRIM_CDR(x105553421357895);
Obj x105553421358151 = PRIM_ISCONS(x105553421358023);
if (True == x105553421358151) {
Obj x105553421358727 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421358855 = PRIM_CDR(x105553421358727);
Obj x105553421358983 = PRIM_CAR(x105553421358855);
Obj y = x105553421358983;
Obj x105553421359687 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421359815 = PRIM_CDR(x105553421359687);
Obj x105553421359943 = PRIM_CDR(x105553421359815);
Obj x105553421360071 = PRIM_ISCONS(x105553421359943);
if (True == x105553421360071) {
Obj x105553421360775 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421360903 = PRIM_CDR(x105553421360775);
Obj x105553421361031 = PRIM_CDR(x105553421360903);
Obj x105553421361159 = PRIM_CAR(x105553421361031);
Obj z = x105553421361159;
Obj x105553421362023 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421362151 = PRIM_CDR(x105553421362023);
Obj x105553421362279 = PRIM_CDR(x105553421362151);
Obj x105553421362407 = PRIM_CDR(x105553421362279);
Obj x105553421362567 = PRIM_EQ(Nil, x105553421362407);
if (True == x105553421362567) {
Obj x105553421363559 = makeCons(z, Nil);
Obj x105553421363719 = makeCons(y, x105553421363559);
Obj x105553421363879 = makeCons(x, x105553421363719);
struct frame1 __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x105553421363879);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355138471);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355138471);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355138471);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355138471);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355138471);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355138471);
return;
}
}
case 1:
{
Obj x105553421364039= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x105553421364039);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355145191 = makeNative1(3, clofun38, 0, 1, closureRef(R[0], 0));
Obj x105553421344263 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421344263) {
Obj x105553421344743 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421344903 = PRIM_EQ(__symbolTable[85], x105553421344743);
if (True == x105553421344903) {
Obj x105553421345351 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421345479 = PRIM_ISCONS(x105553421345351);
if (True == x105553421345479) {
Obj x105553421345927 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421346055 = PRIM_CAR(x105553421345927);
Obj x = x105553421346055;
Obj x105553421346631 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421346759 = PRIM_CDR(x105553421346631);
Obj x105553421346887 = PRIM_ISCONS(x105553421346759);
if (True == x105553421346887) {
Obj x105553421347463 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421347591 = PRIM_CDR(x105553421347463);
Obj x105553421347719 = PRIM_CAR(x105553421347591);
Obj y = x105553421347719;
Obj x105553421348455 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421348583 = PRIM_CDR(x105553421348455);
Obj x105553421348711 = PRIM_CDR(x105553421348583);
Obj x105553421348871 = PRIM_EQ(Nil, x105553421348711);
if (True == x105553421348871) {
Obj x105553421349703 = makeCons(y, Nil);
Obj x105553421349863 = makeCons(x, x105553421349703);
struct frame1 __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x105553421349863);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355145191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355145191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355145191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355145191);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355145191);
return;
}
}
case 1:
{
Obj x105553421350023= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x105553421350023);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355281671 = makeNative1(1, clofun37, 0, 1, closureRef(R[0], 0));
Obj x105553421197415 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421197415) {
Obj x105553421197895 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421198055 = PRIM_EQ(__symbolTable[86], x105553421197895);
if (True == x105553421198055) {
Obj x105553421198503 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421198631 = PRIM_ISCONS(x105553421198503);
if (True == x105553421198631) {
Obj x105553421199079 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421199207 = PRIM_CAR(x105553421199079);
Obj a = x105553421199207;
Obj x105553421199783 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421199911 = PRIM_CDR(x105553421199783);
Obj x105553421200039 = PRIM_ISCONS(x105553421199911);
if (True == x105553421200039) {
Obj x105553421200615 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421200743 = PRIM_CDR(x105553421200615);
Obj x105553421200871 = PRIM_CAR(x105553421200743);
Obj b = x105553421200871;
Obj x105553421201575 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421201703 = PRIM_CDR(x105553421201575);
Obj x105553421201831 = PRIM_CDR(x105553421201703);
Obj x105553421201959 = PRIM_ISCONS(x105553421201831);
if (True == x105553421201959) {
Obj x105553421202663 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421202791 = PRIM_CDR(x105553421202663);
Obj x105553421202919 = PRIM_CDR(x105553421202791);
Obj x105553421203047 = PRIM_CAR(x105553421202919);
Obj c = x105553421203047;
Obj x105553421203911 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421204039 = PRIM_CDR(x105553421203911);
Obj x105553421204167 = PRIM_CDR(x105553421204039);
Obj x105553421204295 = PRIM_CDR(x105553421204167);
Obj x105553421204455 = PRIM_EQ(Nil, x105553421204295);
if (True == x105553421204455) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355281671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355281671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355281671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355281671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355281671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355281671);
return;
}
}
case 1:
{
Obj x105553421204839= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = x105553421204839;
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
case 2:
{
Obj x105553421205287= co->res;
Obj a = R[1];
Obj x105553421204839 = R[2];
Obj x105553421336743 = makeCons(a, Nil);
R[1] = x105553421204839;
struct frame1 __curr = {
.fn = clofun38,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), x105553421205287, x105553421336743);
return;
}
case 3:
{
Obj x105553421336903= co->res;
Obj x105553421204839 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), x105553421204839, x105553421336903);
return;
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355288391 = makeNative1(1, clofun36, 0, 1, closureRef(R[0], 0));
Obj x105553421191239 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421191239) {
Obj x105553421191719 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421191879 = PRIM_EQ(__symbolTable[78], x105553421191719);
if (True == x105553421191879) {
Obj x105553421192327 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421192455 = PRIM_ISCONS(x105553421192327);
if (True == x105553421192455) {
Obj x105553421192903 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421193031 = PRIM_CAR(x105553421192903);
Obj lam = x105553421193031;
Obj x105553421193479 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421193607 = PRIM_CDR(x105553421193479);
Obj more = x105553421193607;
Obj x105553421194055 = makeCons(lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x105553421194055);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355288391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355288391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355288391);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355292327 = makeNative1(1, clofun35, 0, 1, closureRef(R[0], 0));
Obj x105553421184839 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421184839) {
Obj x105553421185319 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421185479 = PRIM_EQ(__symbolTable[72], x105553421185319);
if (True == x105553421185479) {
Obj x105553421185927 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421186055 = PRIM_ISCONS(x105553421185927);
if (True == x105553421186055) {
Obj x105553421186503 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421186631 = PRIM_CAR(x105553421186503);
Obj x = x105553421186631;
Obj x105553421187239 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421187367 = PRIM_CDR(x105553421187239);
Obj x105553421187527 = PRIM_EQ(Nil, x105553421187367);
if (True == x105553421187527) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355292327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355292327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355292327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355292327);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355296423 = makeNative1(1, clofun34, 0, 1, closureRef(R[0], 0));
Obj x105553421173575 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421173575) {
Obj x105553421174055 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421174215 = PRIM_EQ(__symbolTable[73], x105553421174055);
if (True == x105553421174215) {
Obj x105553421174663 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421174791 = PRIM_ISCONS(x105553421174663);
if (True == x105553421174791) {
Obj x105553421175239 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421175367 = PRIM_CAR(x105553421175239);
Obj exp = x105553421175367;
Obj x105553421175943 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421176071 = PRIM_CDR(x105553421175943);
Obj x105553421176199 = PRIM_ISCONS(x105553421176071);
if (True == x105553421176199) {
Obj x105553421176775 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421176903 = PRIM_CDR(x105553421176775);
Obj x105553421177031 = PRIM_CAR(x105553421176903);
Obj cont = x105553421177031;
Obj x105553421177767 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421177895 = PRIM_CDR(x105553421177767);
Obj x105553421178023 = PRIM_CDR(x105553421177895);
Obj x105553421178183 = PRIM_EQ(Nil, x105553421178023);
if (True == x105553421178183) {
Obj x105553421179015 = makeCons(cont, Nil);
Obj x105553421179175 = makeCons(exp, x105553421179015);
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x105553421179175);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355296423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355296423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355296423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355296423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355296423);
return;
}
}
case 1:
{
Obj x105553421179335= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x105553421179335);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355301831 = makeNative1(2, clofun33, 0, 1, closureRef(R[0], 0));
Obj x105553421167175 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421167175) {
Obj x105553421167655 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421167815 = PRIM_EQ(__symbolTable[74], x105553421167655);
if (True == x105553421167815) {
Obj x105553421168263 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421168391 = PRIM_ISCONS(x105553421168263);
if (True == x105553421168391) {
Obj x105553421168839 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421168967 = PRIM_CAR(x105553421168839);
Obj exp = x105553421168967;
Obj x105553421169575 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421169703 = PRIM_CDR(x105553421169575);
Obj x105553421169863 = PRIM_EQ(Nil, x105553421169703);
if (True == x105553421169863) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355301831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355301831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355301831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355301831);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355305927 = makeNative1(1, clofun32, 0, 1, closureRef(R[0], 0));
Obj x105553421156935 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421156935) {
Obj x105553421157415 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421157575 = PRIM_EQ(__symbolTable[75], x105553421157415);
if (True == x105553421157575) {
Obj x105553421158023 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421158151 = PRIM_ISCONS(x105553421158023);
if (True == x105553421158151) {
Obj x105553421158599 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421158727 = PRIM_CAR(x105553421158599);
Obj arg = x105553421158727;
Obj x105553421159303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421159431 = PRIM_CDR(x105553421159303);
Obj x105553421159559 = PRIM_ISCONS(x105553421159431);
if (True == x105553421159559) {
Obj x105553421160135 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421160263 = PRIM_CDR(x105553421160135);
Obj x105553421160391 = PRIM_CAR(x105553421160263);
Obj body = x105553421160391;
Obj x105553421161127 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421161255 = PRIM_CDR(x105553421161127);
Obj x105553421161383 = PRIM_CDR(x105553421161255);
Obj x105553421161543 = PRIM_EQ(Nil, x105553421161383);
if (True == x105553421161543) {
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
coraCall0(co, x105553355305927);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355305927);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355305927);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355305927);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355305927);
return;
}
}
case 1:
{
Obj x105553421161927= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x105553421161927, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421153351 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421153351) {
Obj x105553421153671 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x105553421153671;
Obj x105553421153991 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421153991;
Obj x105553421154663 = makeCons(f, args);
struct frame1 __curr = {
.fn = clofun32,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x105553421154663);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj x105553421154823= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x105553421154823);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355204391 = R[1];
Obj x105553355205735 = makeNative1(1, clofun30, 0, 1, x105553355204391);
Obj x105553421144455 = PRIM_ISCONS(x105553355204391);
if (True == x105553421144455) {
Obj x105553421144935 = PRIM_CAR(x105553355204391);
Obj x105553421145095 = PRIM_EQ(__symbolTable[96], x105553421144935);
if (True == x105553421145095) {
Obj x105553421145543 = PRIM_CDR(x105553355204391);
Obj x105553421145671 = PRIM_ISCONS(x105553421145543);
if (True == x105553421145671) {
Obj x105553421146119 = PRIM_CDR(x105553355204391);
Obj x105553421146247 = PRIM_CAR(x105553421146119);
Obj x105553421146855 = PRIM_CDR(x105553355204391);
Obj x105553421146983 = PRIM_CDR(x105553421146855);
Obj x105553421147143 = PRIM_EQ(Nil, x105553421146983);
if (True == x105553421147143) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355205735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355205735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355205735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355205735);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355209831 = makeNative1(1, clofun29, 0, 1, closureRef(R[0], 0));
Obj x105553421269479 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421269479) {
Obj x105553421269959 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421270119 = PRIM_EQ(__symbolTable[93], x105553421269959);
if (True == x105553421270119) {
Obj x105553421270567 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421270695 = PRIM_ISCONS(x105553421270567);
if (True == x105553421270695) {
Obj x105553421140071 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421140199 = PRIM_CAR(x105553421140071);
Obj x105553421140807 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421140935 = PRIM_CDR(x105553421140807);
Obj x105553421141095 = PRIM_EQ(Nil, x105553421140935);
if (True == x105553421141095) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355209831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355209831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355209831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355209831);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355082855 = makeNative1(1, clofun28, 0, 1, closureRef(R[0], 0));
Obj x105553421263431 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421263431) {
Obj x105553421263911 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421264071 = PRIM_EQ(__symbolTable[90], x105553421263911);
if (True == x105553421264071) {
Obj x105553421264519 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421264647 = PRIM_ISCONS(x105553421264519);
if (True == x105553421264647) {
Obj x105553421265095 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421265223 = PRIM_CAR(x105553421265095);
Obj x105553421265831 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421265959 = PRIM_CDR(x105553421265831);
Obj x105553421266119 = PRIM_EQ(Nil, x105553421265959);
if (True == x105553421266119) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355082855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355082855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355082855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355082855);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355086951 = makeNative1(1, clofun27, 0, 1, closureRef(R[0], 0));
Obj x105553421257383 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421257383) {
Obj x105553421257863 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421258023 = PRIM_EQ(__symbolTable[84], x105553421257863);
if (True == x105553421258023) {
Obj x105553421258471 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421258599 = PRIM_ISCONS(x105553421258471);
if (True == x105553421258599) {
Obj x105553421259047 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421259175 = PRIM_CAR(x105553421259047);
Obj x105553421259783 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421259911 = PRIM_CDR(x105553421259783);
Obj x105553421260071 = PRIM_EQ(Nil, x105553421259911);
if (True == x105553421260071) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355086951);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355086951);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355086951);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355086951);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355091047 = makeNative1(2, clofun26, 0, 1, closureRef(R[0], 0));
Obj x105553421251335 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421251335) {
Obj x105553421251815 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421251975 = PRIM_EQ(__symbolTable[77], x105553421251815);
if (True == x105553421251975) {
Obj x105553421252423 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421252551 = PRIM_ISCONS(x105553421252423);
if (True == x105553421252551) {
Obj x105553421252999 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421253127 = PRIM_CAR(x105553421252999);
Obj x105553421253735 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421253863 = PRIM_CDR(x105553421253735);
Obj x105553421254023 = PRIM_EQ(Nil, x105553421253863);
if (True == x105553421254023) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355091047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355091047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355091047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355091047);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355095143 = makeNative1(1, clofun25, 0, 0);
Obj x105553421245063 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421245063) {
Obj x105553421245543 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421245703 = PRIM_EQ(__symbolTable[78], x105553421245543);
if (True == x105553421245703) {
Obj x105553421246151 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421246279 = PRIM_ISCONS(x105553421246151);
if (True == x105553421246279) {
Obj x105553421246727 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421246855 = PRIM_CAR(x105553421246727);
Obj label = x105553421246855;
Obj x105553421247303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421247431 = PRIM_CDR(x105553421247303);
R[1] = x105553355095143;
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
coraCall0(co, x105553355095143);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355095143);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355095143);
return;
}
}
case 1:
{
Obj x105553421247751= co->res;
Obj x105553355095143 = R[1];
if (True == x105553421247751) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355095143);
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
Obj x105553355182343 = R[1];
Obj x105553355182375 = R[2];
Obj x105553421236071 = PRIM_EQ(Nil, x105553355182343);
if (True == x105553421236071) {
coraReturn(co, Nil);
return;
} else {
Obj x105553355186695 = makeNative1(2, clofun23, 0, 2, x105553355182343, x105553355182375);
Obj x105553421239815 = PRIM_ISCONS(x105553355182343);
if (True == x105553421239815) {
Obj x105553421240135 = PRIM_CAR(x105553355182343);
Obj x = x105553421240135;
Obj x105553421240455 = PRIM_CDR(x105553355182343);
Obj y = x105553421240455;
R[1] = y;
R[2] = x105553355182375;
R[3] = x105553355186695;
struct frame1 __curr = {
.fn = clofun24,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, x105553355182375);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355186695);
return;
}
}
}
case 1:
{
Obj x105553421240839= co->res;
Obj y = R[1];
Obj x105553355182375 = R[2];
Obj x105553355186695 = R[3];
if (True == x105553421240839) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), y, x105553355182375);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355186695);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421236583 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421236583) {
Obj x105553421236903 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x105553421236903;
Obj x105553421237223 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x105553421237223;
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
Obj x105553421237703= co->res;
Obj x = R[1];
Obj x105553421237895 = makeCons(x, x105553421237703);
coraReturn(co, x105553421237895);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355161511 = R[1];
Obj x105553355161543 = R[2];
Obj x105553421228007 = PRIM_EQ(Nil, x105553355161511);
if (True == x105553421228007) {
coraReturn(co, x105553355161543);
return;
} else {
Obj x105553355165863 = makeNative1(2, clofun21, 0, 2, x105553355161511, x105553355161543);
Obj x105553421231751 = PRIM_ISCONS(x105553355161511);
if (True == x105553421231751) {
Obj x105553421232071 = PRIM_CAR(x105553355161511);
Obj x = x105553421232071;
Obj x105553421232391 = PRIM_CDR(x105553355161511);
Obj y = x105553421232391;
R[1] = y;
R[2] = x105553355161543;
R[3] = x105553355165863;
struct frame1 __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, x105553355161543);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355165863);
return;
}
}
}
case 1:
{
Obj x105553421232775= co->res;
Obj y = R[1];
Obj x105553355161543 = R[2];
Obj x105553355165863 = R[3];
if (True == x105553421232775) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), y, x105553355161543);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355165863);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421228519 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421228519) {
Obj x105553421228839 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x105553421228839;
Obj x105553421229159 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x105553421229159;
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
Obj x105553421229639= co->res;
Obj x = R[1];
Obj x105553421229831 = makeCons(x, x105553421229639);
coraReturn(co, x105553421229831);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
	printf("parse()\n");
	printf("arg1=\n");
	printObj(stderr, R[1]);
	printf("arg2=\n");
	printObj(stderr, R[2]);
	printf("arg3=\n");
	printObj(stderr, R[3]);
Obj x105553355015559 = R[1];
Obj x105553355015591 = R[2];
Obj x105553355015623 = R[3];
Obj x105553360156935 = makeNative1(2, clofun19, 1, 3, x105553355015559, x105553355015623, x105553355015591);
R[1] = x105553355015623;
R[2] = x105553360156935;
struct frame1 __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), x105553355015623);
return;
}
case 1:
{
Obj x105553421223815= co->res;
Obj x105553355015623 = R[1];
Obj x105553360156935 = R[2];
if (True == x105553421223815) {
co->ctx.sp = R;
coraCall1(co, x105553360156935, True);
return;
} else {
Obj x105553421224327 = primIsString(x105553355015623);
if (True == x105553421224327) {
co->ctx.sp = R;
coraCall1(co, x105553360156935, True);
return;
} else {
R[1] = x105553355015623;
R[2] = x105553360156935;
struct frame1 __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[82]), x105553355015623);
return;
}
}
}
case 2:
{
Obj x105553421224807= co->res;
Obj x105553355015623 = R[1];
Obj x105553360156935 = R[2];
if (True == x105553421224807) {
co->ctx.sp = R;
coraCall1(co, x105553360156935, True);
return;
} else {
R[1] = x105553360156935;
struct frame1 __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), x105553355015623);
return;
}
}
case 3:
{
Obj x105553421225319= co->res;
Obj x105553360156935 = R[1];
if (True == x105553421225319) {
co->ctx.sp = R;
coraCall1(co, x105553360156935, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553360156935, False);
return;
}
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553360156967 = R[1];
if (True == x105553360156967) {
Obj x105553421118279 = makeCons(closureRef(R[0], 1), Nil);
Obj x105553421118439 = makeCons(__symbolTable[96], x105553421118279);
coraReturn(co, x105553421118439);
return;
} else {
	/* printf("here ... clofun18 ... closed0 ==\n"); */
	/* printObj(stderr, closureRef(R[0], 1)); */
	/* printf("here ... clofun18 ... closed1 ==\n"); */
	/* printObj(stderr, closureRef(R[0], 0)); */
	/* printf("here ... clofun18 ... closed2 ==\n"); */
	/* printObj(stderr, closureRef(R[0], 2)); */

Obj x105553355021703 = makeNative1(3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj x105553421215879 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x105553421215879) {
Obj x105553421216359 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553421216519 = PRIM_EQ(__symbolTable[84], x105553421216359);
if (True == x105553421216519) {
Obj x105553421216967 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421217095 = PRIM_ISCONS(x105553421216967);
if (True == x105553421217095) {
Obj x105553421217543 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421217671 = PRIM_CAR(x105553421217543);
Obj x = x105553421217671;
Obj x105553421218279 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553421218407 = PRIM_CDR(x105553421218279);
Obj x105553421218567 = PRIM_EQ(Nil, x105553421218407);
if (True == x105553421218567) {
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
coraCall0(co, x105553355021703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355021703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355021703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355021703);
return;
}
}
}
case 1:
{
Obj x105553421218951= co->res;
Obj x = R[1];
Obj x105553421219463 = makeCons(x, Nil);
Obj x105553421219623 = makeCons(__symbolTable[96], x105553421219463);
coraReturn(co, x105553421219623);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553421119207 = primIsSymbol(closureRef(R[0], 0));
if (True == x105553421119207) {
struct frame1 __curr = {
.fn = clofun18,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x105553355030855 = makeNative1(1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421072583 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421072583) {
Obj x105553421073063 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421073223 = PRIM_EQ(__symbolTable[89], x105553421073063);
if (True == x105553421073223) {
Obj x105553421073671 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421073799 = PRIM_ISCONS(x105553421073671);
if (True == x105553421073799) {
Obj x105553421074247 = PRIM_CDR(closureRef(R[0], 0));
 /* printObj(stderr, x105553421074247); */
Obj x105553421074375 = PRIM_CAR(x105553421074247);
Obj args = x105553421074375;
Obj x105553421206023 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421206151 = PRIM_CDR(x105553421206023);
Obj x105553421206279 = PRIM_ISCONS(x105553421206151);
if (True == x105553421206279) {
Obj x105553421206855 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421206983 = PRIM_CDR(x105553421206855);
Obj x105553421207111 = PRIM_CAR(x105553421206983);
Obj body = x105553421207111;
Obj x105553421207847 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421207975 = PRIM_CDR(x105553421207847);
Obj x105553421208103 = PRIM_CDR(x105553421207975);
Obj x105553421208263 = PRIM_EQ(Nil, x105553421208103);
if (True == x105553421208263) {
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun18,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
 /* printObj(stderr, args); */
coraCall2(co, globalRef(__symbolTable[88]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355030855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355030855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355030855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355030855);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355030855);
return;
}
}
}
case 1:
{
Obj x105553421209159= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
struct frame1 __curr = {
.fn = clofun18,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), x105553421209159, closureRef(R[0], 2), body);
return;
}
case 2:
{
Obj x105553421209447= co->res;
Obj args = R[1];
Obj x105553421209671 = makeCons(x105553421209447, Nil);
Obj x105553421209831 = makeCons(args, x105553421209671);
Obj x105553421209991 = makeCons(__symbolTable[89], x105553421209831);
coraReturn(co, x105553421209991);
return;
}
case 3:
{
Obj x105553421119591= co->res;
if (True == x105553421119591) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
struct frame1 __curr = {
.fn = clofun18,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[94]), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
}
case 4:
{
Obj x105553421120071= co->res;
Obj x105553421120583 = makeCons(closureRef(R[0], 0), Nil);
Obj x105553421120743 = makeCons(__symbolTable[93], x105553421120583);
coraReturn(co, x105553421120743);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355038183 = makeNative1(2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421055911 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421055911) {
Obj x105553421056391 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421056551 = PRIM_EQ(__symbolTable[87], x105553421056391);
if (True == x105553421056551) {
Obj x105553421056999 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421057127 = PRIM_ISCONS(x105553421056999);
if (True == x105553421057127) {
Obj x105553421057703 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421057831 = PRIM_CAR(x105553421057703);
Obj x105553421057959 = PRIM_ISCONS(x105553421057831);
if (True == x105553421057959) {
Obj x105553421058695 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421058823 = PRIM_CAR(x105553421058695);
Obj x105553421058951 = PRIM_CAR(x105553421058823);
Obj x105553421059111 = PRIM_EQ(__symbolTable[87], x105553421058951);
if (True == x105553421059111) {
Obj x105553421059687 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421059815 = PRIM_CAR(x105553421059687);
Obj x105553421059943 = PRIM_CDR(x105553421059815);
Obj exp1 = x105553421059943;
Obj x105553421060391 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421060519 = PRIM_CDR(x105553421060391);
Obj exp2 = x105553421060519;
Obj x105553421060775 = primGenSym();
Obj f = x105553421060775;
Obj x105553421061031 = primGenSym();
Obj v = x105553421061031;
Obj x105553421062279 = makeCons(v, Nil);
Obj x105553421062919 = makeCons(v, exp2);
Obj x105553421063079 = makeCons(__symbolTable[87], x105553421062919);
Obj x105553421063271 = makeCons(x105553421063079, Nil);
Obj x105553421063431 = makeCons(x105553421062279, x105553421063271);
Obj x105553421063591 = makeCons(__symbolTable[89], x105553421063431);
Obj x105553421064359 = makeCons(__symbolTable[87], exp1);
Obj x105553421064551 = makeCons(x105553421064359, Nil);
Obj x105553421064711 = makeCons(f, x105553421064551);
Obj x105553421064903 = makeCons(x105553421064711, Nil);
Obj x105553421065063 = makeCons(x105553421063591, x105553421064903);
Obj x105553421065223 = makeCons(f, x105553421065063);
Obj x105553421065383 = makeCons(__symbolTable[86], x105553421065223);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x105553421065383);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355038183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355038183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355038183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355038183);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355038183);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355045607 = makeNative1(2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421051399 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421051399) {
Obj x105553421051879 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421052039 = PRIM_EQ(__symbolTable[87], x105553421051879);
if (True == x105553421052039) {
Obj x105553421052359 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421052359;
R[1] = args;
struct frame1 __curr = {
.fn = clofun16,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355045607);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355045607);
return;
}
}
case 1:
{
Obj x105553421052967= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun16,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x105553421052967, args);
return;
}
case 2:
{
Obj x105553421053191= co->res;
Obj x105553421053383 = makeCons(__symbolTable[87], x105553421053191);
coraReturn(co, x105553421053383);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355050151 = makeNative1(3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421039367 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421039367) {
Obj x105553421039847 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421040007 = PRIM_EQ(__symbolTable[85], x105553421039847);
if (True == x105553421040007) {
Obj x105553421040455 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421040583 = PRIM_ISCONS(x105553421040455);
if (True == x105553421040583) {
Obj x105553421041031 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421041159 = PRIM_CAR(x105553421041031);
Obj x = x105553421041159;
Obj x105553421041735 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421041863 = PRIM_CDR(x105553421041735);
Obj x105553421041991 = PRIM_ISCONS(x105553421041863);
if (True == x105553421041991) {
Obj x105553421042567 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421042695 = PRIM_CDR(x105553421042567);
Obj x105553421042823 = PRIM_CAR(x105553421042695);
Obj y = x105553421042823;
Obj x105553421043559 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421043687 = PRIM_CDR(x105553421043559);
Obj x105553421043815 = PRIM_CDR(x105553421043687);
Obj x105553421043975 = PRIM_EQ(Nil, x105553421043815);
if (True == x105553421043975) {
R[1] = y;
struct frame1 __curr = {
.fn = clofun15,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355050151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355050151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355050151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355050151);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355050151);
return;
}
}
case 1:
{
Obj x105553421044647= co->res;
Obj y = R[1];
R[1] = x105553421044647;
struct frame1 __curr = {
.fn = clofun15,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), y);
return;
}
case 2:
{
Obj x105553421045223= co->res;
Obj x105553421044647 = R[1];
Obj x105553421045447 = makeCons(x105553421045223, Nil);
Obj x105553421045607 = makeCons(x105553421044647, x105553421045447);
Obj x105553421045767 = makeCons(__symbolTable[85], x105553421045607);
coraReturn(co, x105553421045767);
return;
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355057479 = makeNative1(1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421022375 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421022375) {
Obj x105553421022855 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421023015 = PRIM_EQ(__symbolTable[86], x105553421022855);
if (True == x105553421023015) {
Obj x105553421023463 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421023591 = PRIM_ISCONS(x105553421023463);
if (True == x105553421023591) {
Obj x105553421024039 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421024167 = PRIM_CAR(x105553421024039);
Obj a = x105553421024167;
Obj x105553421024743 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421024871 = PRIM_CDR(x105553421024743);
Obj x105553421024999 = PRIM_ISCONS(x105553421024871);
if (True == x105553421024999) {
Obj x105553421025575 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421025703 = PRIM_CDR(x105553421025575);
Obj x105553421025831 = PRIM_CAR(x105553421025703);
Obj b = x105553421025831;
Obj x105553421026535 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421026663 = PRIM_CDR(x105553421026535);
Obj x105553421026791 = PRIM_CDR(x105553421026663);
Obj x105553421026919 = PRIM_ISCONS(x105553421026791);
if (True == x105553421026919) {
Obj x105553421027623 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421027751 = PRIM_CDR(x105553421027623);
Obj x105553421027879 = PRIM_CDR(x105553421027751);
Obj x105553421028007 = PRIM_CAR(x105553421027879);
Obj c = x105553421028007;
Obj x105553421028871 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421028999 = PRIM_CDR(x105553421028871);
Obj x105553421029127 = PRIM_CDR(x105553421028999);
Obj x105553421029255 = PRIM_CDR(x105553421029127);
Obj x105553421029415 = PRIM_EQ(Nil, x105553421029255);
if (True == x105553421029415) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
.fn = clofun14,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355057479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355057479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355057479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355057479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355057479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355057479);
return;
}
}
case 1:
{
Obj x105553421030247= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x105553421030887 = makeCons(a, closureRef(R[0], 1));
R[1] = x105553421030247;
R[2] = a;
struct frame1 __curr = {
.fn = clofun14,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), x105553421030887, closureRef(R[0], 2), c);
return;
}
case 2:
{
Obj x105553421031143= co->res;
Obj x105553421030247 = R[1];
Obj a = R[2];
Obj x105553421031367 = makeCons(x105553421031143, Nil);
Obj x105553421031527 = makeCons(x105553421030247, x105553421031367);
Obj x105553421031687 = makeCons(a, x105553421031527);
Obj x105553421031847 = makeCons(__symbolTable[86], x105553421031687);
coraReturn(co, x105553421031847);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355066119 = makeNative1(4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553421136327 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421136327) {
Obj x105553421136775 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421136903 = PRIM_ISCONS(x105553421136775);
if (True == x105553421136903) {
Obj x105553421137511 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421137639 = PRIM_CAR(x105553421137511);
Obj x105553421137799 = PRIM_EQ(__symbolTable[89], x105553421137639);
if (True == x105553421137799) {
Obj x105553421138247 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553421138375 = PRIM_CDR(x105553421138247);
Obj exp1 = x105553421138375;
Obj x105553421138823 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421138951 = PRIM_ISCONS(x105553421138823);
if (True == x105553421138951) {
Obj x105553421139527 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421139655 = PRIM_CAR(x105553421139527);
Obj x105553421139783 = PRIM_ISCONS(x105553421139655);
if (True == x105553421139783) {
Obj x105553421009447 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421009575 = PRIM_CAR(x105553421009447);
Obj x105553421009703 = PRIM_CAR(x105553421009575);
Obj x105553421009863 = PRIM_EQ(__symbolTable[87], x105553421009703);
if (True == x105553421009863) {
Obj x105553421010439 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421010567 = PRIM_CAR(x105553421010439);
Obj x105553421010695 = PRIM_CDR(x105553421010567);
Obj exp2 = x105553421010695;
Obj x105553421011303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553421011431 = PRIM_CDR(x105553421011303);
Obj x105553421011591 = PRIM_EQ(Nil, x105553421011431);
if (True == x105553421011591) {
Obj x105553421011847 = primGenSym();
Obj f = x105553421011847;
Obj x105553421012807 = makeCons(__symbolTable[89], exp1);
Obj x105553421013575 = makeCons(__symbolTable[87], exp2);
Obj x105553421013767 = makeCons(x105553421013575, Nil);
Obj x105553421013927 = makeCons(f, x105553421013767);
Obj x105553421014119 = makeCons(x105553421013927, Nil);
Obj x105553421014279 = makeCons(x105553421012807, x105553421014119);
Obj x105553421014439 = makeCons(f, x105553421014279);
Obj x105553421014599 = makeCons(__symbolTable[86], x105553421014439);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x105553421014599);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553355066119);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553355075015 = makeNative1(1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj x105553421123847 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553421123847) {
Obj x105553421124167 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x105553421124167;
Obj x105553421124487 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553421124487;
R[1] = op;
R[2] = args;
R[3] = x105553355075015;
struct frame1 __curr = {
.fn = clofun12,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[104]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355075015);
return;
}
}
case 1:
{
Obj x105553421124807= co->res;
Obj op = R[1];
Obj args = R[2];
Obj x105553355075015 = R[3];
if (True == x105553421124807) {
R[1] = op;
R[2] = args;
struct frame1 __curr = {
.fn = clofun12,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[100]), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553355075015);
return;
}
}
case 2:
{
Obj x105553421125159= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = x105553421125159;
R[1] = required;
R[2] = op;
R[3] = args;
struct frame1 __curr = {
.fn = clofun12,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), args);
return;
}
case 3:
{
Obj x105553421125511= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = x105553421125511;
Obj x105553421125927 = PRIM_EQ(required, provided);
if (True == x105553421125927) {
Obj x105553421126535 = makeCons(op, Nil);
Obj x105553421126695 = makeCons(__symbolTable[90], x105553421126535);
R[1] = args;
R[2] = x105553421126695;
struct frame1 __curr = {
.fn = clofun12,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
Obj x105553421128807 = PRIM_GT(required, provided);
if (True == x105553421128807) {
Obj x105553421129319 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
struct frame1 __curr = {
.fn = clofun12,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x105553421129319, Nil);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("primitive call mismatch"));
return;
}
}
}
case 4:
{
Obj x105553421129511= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = x105553421129511;
Obj x105553421130631 = makeCons(op, args);
R[1] = tmp;
struct frame1 __curr = {
.fn = clofun12,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[88]), x105553421130631, tmp);
return;
}
case 5:
{
Obj x105553421130823= co->res;
Obj tmp = R[1];
Obj x105553421131047 = makeCons(x105553421130823, Nil);
Obj x105553421131207 = makeCons(tmp, x105553421131047);
Obj x105553421131367 = makeCons(__symbolTable[89], x105553421131207);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x105553421131367);
return;
}
case 6:
{
Obj x105553421127175= co->res;
Obj args = R[1];
Obj x105553421126695 = R[2];
R[1] = x105553421126695;
struct frame1 __curr = {
.fn = clofun12,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x105553421127175, args);
return;
}
case 7:
{
Obj x105553421127399= co->res;
Obj x105553421126695 = R[1];
Obj x105553421127591 = makeCons(x105553421126695, x105553421127399);
coraReturn(co, x105553421127591);
return;
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
Obj x105553421122919= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x105553421122919, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553354868327 = R[1];
Obj x105553354868359 = R[2];
Obj x105553421115111 = PRIM_EQ(MAKE_NUMBER(0), x105553354868327);
if (True == x105553421115111) {
coraReturn(co, x105553354868359);
return;
} else {
Obj x105553421115623 = PRIM_SUB(x105553354868327, MAKE_NUMBER(1));
Obj x105553421115975 = primGenSym();
Obj x105553421116167 = makeCons(x105553421115975, x105553354868359);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[98]), x105553421115623, x105553421116167);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj x105553421112743= co->res;
Obj find = x105553421112743;
R[1] = find;
struct frame1 __curr = {
.fn = clofun9,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), find);
return;
}
case 2:
{
Obj x105553421113095= co->res;
Obj find = R[1];
if (True == x105553421113095) {
coraReturn(co, makeCString("ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[99]), find);
return;
}
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj x105553421110375= co->res;
Obj find = x105553421110375;
R[1] = find;
struct frame1 __curr = {
.fn = clofun8,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), find);
return;
}
case 2:
{
Obj x105553421110727= co->res;
Obj find = R[1];
if (True == x105553421110727) {
coraReturn(co, makeCString("ERROR"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), find);
return;
}
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[128]), x, globalRef(__symbolTable[122]));
return;
}
case 1:
{
Obj x105553421108487= co->res;
struct frame1 __curr = {
.fn = clofun7,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), x105553421108487);
return;
}
case 2:
{
Obj x105553421108647= co->res;
Obj x105553421108807 = primNot(x105553421108647);
coraReturn(co, x105553421108807);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553354818695 = R[1];
Obj x105553354818727 = R[2];
Obj x105553421081223 = PRIM_EQ(Nil, x105553354818727);
if (True == x105553421081223) {
coraReturn(co, False);
return;
} else {
Obj x105553421081607 = PRIM_ISCONS(x105553354818727);
if (True == x105553421081607) {
Obj x105553421081927 = PRIM_CAR(x105553354818727);
Obj hd = x105553421081927;
Obj x105553421082247 = PRIM_CDR(x105553354818727);
Obj tl = x105553421082247;
R[1] = x105553354818695;
R[2] = tl;
struct frame1 __curr = {
.fn = clofun6,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), x105553354818695, hd);
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
Obj x105553421082759= co->res;
Obj x105553354818695 = R[1];
Obj tl = R[2];
Obj x105553421082983 = PRIM_LT(x105553421082759, MAKE_NUMBER(0));
if (True == x105553421082983) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[123]), x105553354818695, tl);
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
Obj x105553354923911 = R[1];
Obj x105553354923943 = R[2];
Obj x105553354923975 = R[3];
Obj x105553420941895 = PRIM_EQ(Nil, x105553354923975);
if (True == x105553420941895) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x105553354930055 = makeNative1(1, clofun3, 0, 3, x105553354923975, x105553354923911, x105553354923943);
Obj x105553421076391 = PRIM_ISCONS(x105553354923975);
if (True == x105553421076391) {
Obj x105553421076711 = PRIM_CAR(x105553354923975);
Obj a = x105553421076711;
Obj x105553421077031 = PRIM_CDR(x105553354923975);
Obj x105553421077415 = PRIM_EQ(x105553354923943, a);
if (True == x105553421077415) {
coraReturn(co, x105553354923911);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553354930055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553354930055);
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
Obj x105553420942407 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553420942407) {
Obj x105553420942727 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553420943047 = PRIM_CDR(closureRef(R[0], 0));
Obj b = x105553420943047;
Obj x105553421074567 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[125]), x105553421074567, closureRef(R[0], 2), b);
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
Obj x105553354906055 = R[1];
Obj x105553354906087 = R[2];
Obj x105553354906119 = R[3];
Obj x105553420937607 = PRIM_EQ(Nil, x105553354906119);
if (True == x105553420937607) {
coraReturn(co, x105553354906087);
return;
} else {
Obj x105553420937991 = PRIM_ISCONS(x105553354906119);
if (True == x105553420937991) {
Obj x105553420938311 = PRIM_CAR(x105553354906119);
Obj x = x105553420938311;
Obj x105553420938631 = PRIM_CDR(x105553354906119);
Obj y = x105553420938631;
R[1] = x105553354906055;
R[2] = y;
struct frame1 __curr = {
.fn = clofun2,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x105553354906055, x105553354906087, x);
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
Obj x105553420939111= co->res;
Obj x105553354906055 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), x105553354906055, x105553420939111, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553354883239 = R[1];
Obj x105553354883271 = R[2];
Obj x105553420927911 = PRIM_EQ(Nil, x105553354883271);
if (True == x105553420927911) {
coraReturn(co, Nil);
return;
} else {
Obj x105553354887591 = makeNative1(1, clofun0, 0, 2, x105553354883271, x105553354883239);
Obj x105553420930823 = PRIM_ISCONS(x105553354883271);
if (True == x105553420930823) {
Obj x105553420931271 = PRIM_CAR(x105553354883271);
Obj x105553420931399 = PRIM_ISCONS(x105553420931271);
if (True == x105553420931399) {
Obj x105553420931847 = PRIM_CAR(x105553354883271);
Obj x105553420931975 = PRIM_CAR(x105553420931847);
Obj x = x105553420931975;
Obj x105553420932423 = PRIM_CAR(x105553354883271);
Obj x105553420932551 = PRIM_CDR(x105553420932423);
Obj y = x105553420932551;
Obj x105553420932871 = PRIM_CDR(x105553354883271);
Obj x105553420933255 = PRIM_EQ(x105553354883239, x);
if (True == x105553420933255) {
Obj x105553420933575 = makeCons(x, y);
coraReturn(co, x105553420933575);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553354887591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553354887591);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553354887591);
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
Obj x105553420928423 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553420928423) {
Obj x105553420928743 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553420929063 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x105553420929063;
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

