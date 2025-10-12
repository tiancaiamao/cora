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
Obj x4309835047= co->res;
Obj x4309804487 = primSet(co, __symbolTable[28], makeNative1(3, clofun110, 2, 0));
Obj x4309799239 = primSet(co, __symbolTable[27], makeNative1(3, clofun111, 2, 0));
Obj x4309751623 = primSet(co, __symbolTable[26], makeNative1(7, clofun113, 3, 0));
Obj x4308522663 = primSet(co, __symbolTable[25], makeNative1(4, clofun115, 3, 0));
Obj x4308469479 = primSet(co, __symbolTable[23], makeNative1(4, clofun118, 3, 0));
Obj x4308373127 = primSet(co, __symbolTable[22], makeNative1(2, clofun123, 1, 0));
Obj x4307908423 = primSet(co, __symbolTable[17], makeNative1(5, clofun126, 4, 0));
Obj x4307687655 = primSet(co, __symbolTable[9], makeNative1(3, clofun131, 2, 0));
Obj x4307688007 = primSet(co, __symbolTable[8], makeNative1(3, clofun132, 2, 0));
Obj x4307671687 = primSet(co, __symbolTable[6], makeNative1(2, clofun140, 1, 0));
Obj x4307671911 = primSet(co, __symbolTable[7], False);
Obj x4307656231 = primSet(co, __symbolTable[5], makeNative1(3, clofun142, 1, 0));
Obj x4307645415 = primSet(co, __symbolTable[3], makeNative1(4, clofun143, 2, 0));
coraReturn(co, x4307645415);
return;
}
case 2:
{
Obj x4309751687= co->res;
Obj x4309751847 = primSet(co, __symbolTable[129], Nil);
Obj x4309709735 = primSet(co, __symbolTable[128], makeNative1(3, clofun1, 2, 0));
Obj x4311398407 = primSet(co, __symbolTable[126], makeNative1(4, clofun2, 3, 0));
Obj x4311343847 = primSet(co, __symbolTable[125], makeNative1(4, clofun4, 3, 0));
Obj x4311344199 = primSet(co, __symbolTable[124], makeNative1(3, clofun5, 2, 0));
Obj x4311345767 = primSet(co, __symbolTable[123], makeNative1(3, clofun6, 2, 0));
Obj x4311346375 = makeCons(makeCString("primSet"), Nil);
Obj x4311346407 = makeCons(MAKE_NUMBER(2), x4311346375);
Obj x4311346471 = makeCons(__symbolTable[121], x4311346407);
Obj x4311346823 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x4311346855 = makeCons(MAKE_NUMBER(1), x4311346823);
Obj x4311346887 = makeCons(__symbolTable[120], x4311346855);
Obj x4310577191 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x4310577255 = makeCons(MAKE_NUMBER(1), x4310577191);
Obj x4310577287 = makeCons(__symbolTable[119], x4310577255);
Obj x4310577575 = makeCons(makeCString("makeCons"), Nil);
Obj x4310577607 = makeCons(MAKE_NUMBER(2), x4310577575);
Obj x4310577639 = makeCons(__symbolTable[118], x4310577607);
Obj x4310577959 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x4310577991 = makeCons(MAKE_NUMBER(1), x4310577959);
Obj x4310578023 = makeCons(__symbolTable[117], x4310577991);
Obj x4310578311 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x4310578343 = makeCons(MAKE_NUMBER(2), x4310578311);
Obj x4310578375 = makeCons(__symbolTable[116], x4310578343);
Obj x4310578727 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x4310578759 = makeCons(MAKE_NUMBER(2), x4310578727);
Obj x4310578823 = makeCons(__symbolTable[115], x4310578759);
Obj x4310579111 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x4310579143 = makeCons(MAKE_NUMBER(2), x4310579111);
Obj x4310579175 = makeCons(__symbolTable[114], x4310579143);
Obj x4310579463 = makeCons(makeCString("primDiv"), Nil);
Obj x4310579495 = makeCons(MAKE_NUMBER(2), x4310579463);
Obj x4310579527 = makeCons(__symbolTable[113], x4310579495);
Obj x4310579815 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x4310579847 = makeCons(MAKE_NUMBER(2), x4310579815);
Obj x4310579879 = makeCons(__symbolTable[112], x4310579847);
Obj x4310580167 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x4310580199 = makeCons(MAKE_NUMBER(2), x4310580167);
Obj x4310580231 = makeCons(__symbolTable[111], x4310580199);
Obj x4310580551 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x4310580583 = makeCons(MAKE_NUMBER(2), x4310580551);
Obj x4310580615 = makeCons(__symbolTable[110], x4310580583);
Obj x4310580967 = makeCons(makeCString("primGenSym"), Nil);
Obj x4310581031 = makeCons(MAKE_NUMBER(0), x4310580967);
Obj x4310581063 = makeCons(__symbolTable[109], x4310581031);
Obj x4310511719 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x4310511751 = makeCons(MAKE_NUMBER(1), x4310511719);
Obj x4310511783 = makeCons(__symbolTable[108], x4310511751);
Obj x4310512071 = makeCons(makeCString("primNot"), Nil);
Obj x4310512103 = makeCons(MAKE_NUMBER(1), x4310512071);
Obj x4310512135 = makeCons(__symbolTable[107], x4310512103);
Obj x4310512423 = makeCons(makeCString("primIsNumber"), Nil);
Obj x4310512455 = makeCons(MAKE_NUMBER(1), x4310512423);
Obj x4310512487 = makeCons(__symbolTable[106], x4310512455);
Obj x4310512775 = makeCons(makeCString("primIsString"), Nil);
Obj x4310512807 = makeCons(MAKE_NUMBER(1), x4310512775);
Obj x4310512839 = makeCons(__symbolTable[105], x4310512807);
Obj x4310512871 = makeCons(x4310512839, Nil);
Obj x4310512903 = makeCons(x4310512487, x4310512871);
Obj x4310512935 = makeCons(x4310512135, x4310512903);
Obj x4310512967 = makeCons(x4310511783, x4310512935);
Obj x4310512999 = makeCons(x4310581063, x4310512967);
Obj x4310513031 = makeCons(x4310580615, x4310512999);
Obj x4310513063 = makeCons(x4310580231, x4310513031);
Obj x4310513095 = makeCons(x4310579879, x4310513063);
Obj x4310513127 = makeCons(x4310579527, x4310513095);
Obj x4310513159 = makeCons(x4310579175, x4310513127);
Obj x4310513191 = makeCons(x4310578823, x4310513159);
Obj x4310513223 = makeCons(x4310578375, x4310513191);
Obj x4310513255 = makeCons(x4310578023, x4310513223);
Obj x4310513287 = makeCons(x4310577639, x4310513255);
Obj x4310513319 = makeCons(x4310577287, x4310513287);
Obj x4310513351 = makeCons(x4311346887, x4310513319);
Obj x4310513383 = makeCons(x4311346471, x4310513351);
Obj x4310513415 = primSet(co, __symbolTable[122], x4310513383);
Obj x4310513959 = primSet(co, __symbolTable[104], makeNative1(2, clofun7, 1, 0));
Obj x4310514663 = primSet(co, __symbolTable[102], makeNative1(2, clofun8, 1, 0));
Obj x4310515271 = primSet(co, __symbolTable[100], makeNative1(2, clofun9, 1, 0));
Obj x4310356327 = primSet(co, __symbolTable[98], makeNative1(3, clofun10, 2, 0));
Obj x4308523239 = primSet(co, __symbolTable[97], makeNative1(4, clofun20, 3, 0));
Obj x4308467975 = primSet(co, __symbolTable[81], makeNative1(4, clofun22, 2, 0));
Obj x4311398599 = primSet(co, __symbolTable[80], makeNative1(4, clofun24, 2, 0));
Obj x4310357639 = primSet(co, __symbolTable[79], makeNative1(2, clofun31, 1, 0));
Obj x4308470183 = primSet(co, __symbolTable[76], makeNative1(2, clofun41, 1, 0));
Obj x4308447175 = primSet(co, __symbolTable[71], makeNative1(4, clofun44, 2, 0));
Obj x4308369767 = primSet(co, __symbolTable[70], makeNative1(2, clofun45, 1, 0));
Obj x4309806215 = primSet(co, __symbolTable[69], makeNative1(3, clofun54, 2, 0));
Obj x4309795879 = primSet(co, __symbolTable[68], makeNative1(4, clofun57, 3, 0));
Obj x4308469927 = primSet(co, __symbolTable[63], makeNative1(3, clofun61, 2, 0));
Obj x4308443591 = primSet(co, __symbolTable[61], makeNative1(4, clofun65, 3, 0));
Obj x4308445415 = primSet(co, __symbolTable[60], makeNative1(5, clofun68, 4, 0));
Obj x4308446407 = primSet(co, __symbolTable[58], makeNative1(3, clofun70, 2, 0));
Obj x4308370279 = primSet(co, __symbolTable[57], makeNative1(2, clofun72, 1, 0));
Obj x4307973255 = primSet(co, __symbolTable[56], makeNative1(6, clofun74, 2, 0));
Obj x4307974471 = primSet(co, __symbolTable[54], makeNative1(4, clofun75, 2, 0));
Obj x4307975335 = primSet(co, __symbolTable[66], makeNative1(3, clofun76, 2, 0));
Obj x4307906599 = primSet(co, __symbolTable[94], makeNative1(4, clofun77, 2, 0));
Obj x4307908167 = primSet(co, __symbolTable[51], makeNative1(4, clofun78, 3, 0));
Obj x4307908455 = primSet(co, __symbolTable[50], makeNative1(3, clofun79, 2, 0));
Obj x4307909767 = primSet(co, __symbolTable[49], makeNative1(6, clofun81, 5, 0));
Obj x4307861895 = primSet(co, __symbolTable[45], makeNative1(6, clofun83, 5, 0));
Obj x4307671783 = primSet(co, __symbolTable[46], makeNative1(6, clofun96, 5, 0));
Obj x4307653767 = primSet(co, __symbolTable[43], makeNative1(6, clofun98, 5, 0));
Obj x4310577735 = primSet(co, __symbolTable[40], makeNative1(8, clofun100, 5, 0));
Obj x4310579047 = primSet(co, __symbolTable[42], makeNative1(3, clofun101, 2, 0));
Obj x4310511911 = primSet(co, __symbolTable[39], makeNative1(3, clofun102, 2, 0));
Obj x4310512743 = primSet(co, __symbolTable[38], makeNative1(3, clofun103, 2, 0));
Obj x4310513991 = primSet(co, __symbolTable[37], makeNative1(2, clofun104, 1, 0));
Obj x4310514823 = primSet(co, __symbolTable[36], makeNative1(2, clofun105, 1, 0));
Obj x4310515431 = primSet(co, __symbolTable[35], makeNative1(2, clofun106, 1, 0));
Obj x4310358823 = primSet(co, __symbolTable[34], makeNative1(3, clofun107, 1, 0));
Obj x4309833223 = primSet(co, __symbolTable[32], makeNative1(3, clofun108, 2, 0));
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
Obj x4309751527= co->res;
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
Obj x4309751367= co->res;
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
Obj x4307656551 = primGenSym();
Obj globals = x4307656551;
Obj x4307644423 = primSet(co, globals, Nil);
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
Obj x4307645319= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), stream);
return;
}
case 2:
{
Obj x4307645287= co->res;
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
coraCall3(co, globalRef(__symbolTable[23]), stream, bc, x4307645287);
return;
}
case 3:
{
Obj x4307645031= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = x4307645031;
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
Obj x4307644871= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = x4307644871;
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
Obj x4307644839= co->res;
Obj x4307644647 = R[1];
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
coraCall1(co, x4307644647, x4307644839);
return;
}
case 6:
{
Obj x4307644807= co->res;
Obj x4307644647 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x4307644647;
R[2] = to;
R[3] = globals;
struct frame1 __curr = {
.fn = clofun143,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[2]), x4307644807);
return;
}
case 7:
{
Obj x4307644647= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x4307644647;
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
Obj x4307655623= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 2:
{
Obj x4307655431= co->res;
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
Obj x4307655879= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 4:
{
Obj x4307655719= co->res;
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
Obj x4307656135= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 6:
{
Obj x4307655975= co->res;
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
Obj x4307655143= co->res;
Obj x4311396743 = R[1];
Obj sexp = R[2];
if (True == x4307655143) {
Obj x4307655367 = PRIM_CAR(sexp);
Obj x4307655399 = PRIM_EQ(__symbolTable[19], x4307655367);
if (True == x4307655399) {
R[1] = sexp;
struct frame1 __curr = {
.fn = clofun142,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4311396743, True);
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
coraCall1(co, x4311396743, False);
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
coraCall1(co, x4311396743, False);
return;
}
}
case 8:
{
Obj x4307672327= co->res;
Obj sexp = x4307672327;
Obj x4311396743 = makeNative1(2, clofun141, 1, 1, sexp);
R[1] = x4311396743;
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
Obj x4311396775 = R[1];
if (True == x4311396775) {
Obj x4307654823 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, x4307654823);
return;
} else {
Obj x4307654919 = makeCons(closureRef(R[0], 0), Nil);
coraReturn(co, x4307654919);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310578407 = R[1];
Obj x4310578503 = makeNative1(1, clofun137, 0, 1, x4310578407);
Obj x4307670407 = PRIM_ISCONS(x4310578407);
if (True == x4307670407) {
Obj x4307670695 = PRIM_CAR(x4310578407);
Obj x4307670727 = PRIM_EQ(__symbolTable[18], x4307670695);
if (True == x4307670727) {
Obj x4307671015 = PRIM_CDR(x4310578407);
Obj more = x4307671015;
Obj x4307671175 = makeCons(__symbolTable[18], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x4307671175, makeNative1(2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310578503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310578503);
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
Obj x4310578791 = makeNative1(1, clofun134, 0, 1, closureRef(R[0], 0));
Obj x4307689447 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307689447) {
Obj x4307669223 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307669255 = PRIM_EQ(__symbolTable[19], x4307669223);
if (True == x4307669255) {
Obj x4307669415 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307669415;
Obj x4307669703 = makeCons(__symbolTable[19], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), x4307669703, makeNative1(2, clofun136, 1, 0));
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
Obj x4307688839 = makeCons(closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), x4307688839, Nil, Nil, makeNative1(3, clofun133, 2, 0));
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
Obj x4307689127= co->res;
Obj x4307689159 = makeCons(__symbolTable[19], x4307689127);
coraReturn(co, x4307689159);
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
Obj x4311345607 = R[1];
Obj x4311345639 = R[2];
Obj x4311345831 = makeNative1(2, clofun130, 0, 2, x4311345607, x4311345639);
Obj x4307685735 = PRIM_ISCONS(x4311345607);
if (True == x4307685735) {
Obj x4307686023 = PRIM_CAR(x4311345607);
Obj x4307686055 = PRIM_EQ(__symbolTable[18], x4307686023);
if (True == x4307686055) {
Obj x4307686311 = PRIM_CDR(x4311345607);
Obj x4307686343 = PRIM_ISCONS(x4307686311);
if (True == x4307686343) {
Obj x4307686695 = PRIM_CDR(x4311345607);
Obj x4307686727 = PRIM_CAR(x4307686695);
Obj name = x4307686727;
Obj x4307687015 = PRIM_CDR(x4311345607);
Obj x4307687047 = PRIM_CDR(x4307687015);
Obj more = x4307687047;
R[1] = name;
struct frame1 __curr = {
.fn = clofun131,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, x4311345639);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311345831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345831);
return;
}
}
case 1:
{
Obj x4307687335= co->res;
Obj name = R[1];
Obj x4307687367 = makeCons(name, x4307687335);
Obj x4307687399 = makeCons(__symbolTable[18], x4307687367);
coraReturn(co, x4307687399);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311346567 = makeNative1(2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4307864615 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307864615) {
Obj x4307694023 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307694055 = PRIM_ISCONS(x4307694023);
if (True == x4307694055) {
Obj x4307695207 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307695239 = PRIM_CAR(x4307695207);
Obj x4307695271 = PRIM_EQ(__symbolTable[21], x4307695239);
if (True == x4307695271) {
Obj x4307695655 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307695687 = PRIM_CDR(x4307695655);
Obj x4307695719 = PRIM_ISCONS(x4307695687);
if (True == x4307695719) {
Obj x4307696007 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307696039 = PRIM_CDR(x4307696007);
Obj x4307696071 = PRIM_CAR(x4307696039);
Obj pkg = x4307696071;
Obj x4307696551 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307696583 = PRIM_CDR(x4307696551);
Obj x4307696615 = PRIM_CDR(x4307696583);
Obj x4307696647 = PRIM_EQ(Nil, x4307696615);
if (True == x4307696647) {
Obj x4307696871 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307696871;
Obj x4307697159 = makeCons(pkg, Nil);
Obj x4307697191 = makeCons(__symbolTable[21], x4307697159);
R[1] = x4307697191;
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
coraCall0(co, x4311346567);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346567);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346567);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346567);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346567);
return;
}
}
case 1:
{
Obj x4307697383= co->res;
Obj x4307697191 = R[1];
Obj x4307697415 = makeCons(x4307697191, x4307697383);
coraReturn(co, x4307697415);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577223 = makeNative1(1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4307862407 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307862407) {
Obj x4307862727 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307862759 = PRIM_ISCONS(x4307862727);
if (True == x4307862759) {
Obj x4307863239 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307863271 = PRIM_CAR(x4307863239);
Obj x4307863303 = PRIM_EQ(__symbolTable[20], x4307863271);
if (True == x4307863303) {
Obj x4307863623 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307863655 = PRIM_CDR(x4307863623);
Obj symbols = x4307863655;
Obj x4307863847 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307863847;
Obj x4307864071 = makeCons(__symbolTable[20], symbols);
R[1] = x4307864071;
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
coraCall0(co, x4310577223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577223);
return;
}
}
case 1:
{
Obj x4307864167= co->res;
Obj x4307864071 = R[1];
Obj x4307864199 = makeCons(x4307864071, x4307864167);
coraReturn(co, x4307864199);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310577703 = makeNative1(1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x4307909991 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307909991) {
Obj x4307910407 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307910471 = PRIM_EQ(__symbolTable[19], x4307910407);
if (True == x4307910471) {
Obj x4307861511 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307861511;
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
coraCall0(co, x4310577703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310577703);
return;
}
}
case 1:
{
Obj x4307861991= co->res;
Obj x4307862023 = makeCons(__symbolTable[19], x4307861991);
coraReturn(co, x4307862023);
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
Obj x4311397959 = R[1];
Obj x4311398023 = R[2];
Obj x4311398055 = R[3];
Obj x4311398087 = R[4];
Obj x4308300039 = PRIM_EQ(Nil, x4311397959);
if (True == x4308300039) {
R[1] = x4311398055;
R[2] = x4311398087;
struct frame1 __curr = {
.fn = clofun126,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x4311398023);
return;
} else {
Obj x4311399079 = makeNative1(1, clofun125, 0, 4, x4311397959, x4311398023, x4311398055, x4311398087);
Obj x4307974887 = PRIM_ISCONS(x4311397959);
if (True == x4307974887) {
Obj x4307975143 = PRIM_CAR(x4311397959);
Obj x4307975399 = PRIM_ISCONS(x4307975143);
if (True == x4307975399) {
Obj x4307975719 = PRIM_CAR(x4311397959);
Obj x4307975751 = PRIM_CAR(x4307975719);
Obj x4307975783 = PRIM_EQ(__symbolTable[10], x4307975751);
if (True == x4307975783) {
Obj x4307906791 = PRIM_CAR(x4311397959);
Obj x4307906823 = PRIM_CDR(x4307906791);
Obj exp = x4307906823;
Obj x4307907271 = PRIM_CDR(x4311397959);
Obj more = x4307907271;
Obj x4307907911 = makeCons(__symbolTable[19], exp);
Obj x4307907975 = makeCons(x4307907911, x4311398023);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4307907975, x4311398055, x4311398087);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311399079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399079);
return;
}
}
}
case 1:
{
Obj x4308300423= co->res;
Obj x4311398087 = R[1];
Obj x4308300199 = R[2];
co->ctx.sp = R;
coraCall2(co, x4311398087, x4308300199, x4308300423);
return;
}
case 2:
{
Obj x4308300199= co->res;
Obj x4311398055 = R[1];
Obj x4311398087 = R[2];
R[1] = x4311398087;
R[2] = x4308300199;
struct frame1 __curr = {
.fn = clofun126,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x4311398055);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311400327 = makeNative1(1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x4307972135 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307972135) {
Obj x4307972487 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307972551 = PRIM_ISCONS(x4307972487);
if (True == x4307972551) {
Obj x4307973063 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307973095 = PRIM_CAR(x4307973063);
Obj x4307973223 = PRIM_EQ(__symbolTable[12], x4307973095);
if (True == x4307973223) {
Obj x4307973479 = PRIM_CAR(closureRef(R[0], 0));
Obj x4307973511 = PRIM_CDR(x4307973479);
Obj exp = x4307973511;
Obj x4307973863 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4307973863;
Obj x4307974279 = makeCons(__symbolTable[11], exp);
Obj x4307974311 = makeCons(x4307974279, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4307974311, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311400327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400327);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400327);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308301351 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308301351) {
Obj x4308301543 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = x4308301543;
Obj x4308301927 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x4308301927;
Obj x4308302727 = makeCons(exp, Nil);
Obj x4308302759 = makeCons(__symbolTable[14], x4308302727);
Obj x4308302983 = makeCons(x4308302759, Nil);
Obj x4308303015 = makeCons(__symbolTable[15], x4308302983);
Obj x4308303239 = makeCons(__symbolTable[13], Nil);
Obj x4308303271 = makeCons(x4308303239, Nil);
Obj x4308303303 = makeCons(x4308303015, x4308303271);
Obj x4308303399 = makeCons(__symbolTable[16], x4308303303);
Obj x4308303431 = makeCons(x4308303399, closureRef(R[0], 1));
Obj x4308303559 = makeCons(exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, x4308303431, x4308303559, closureRef(R[0], 3));
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
Obj x4311343815 = R[1];
Obj x4311343911 = makeNative1(1, clofun122, 0, 1, x4311343815);
Obj x4308370503 = PRIM_ISCONS(x4311343815);
if (True == x4308370503) {
Obj x4308370823 = PRIM_CAR(x4311343815);
Obj x4308370855 = PRIM_EQ(__symbolTable[18], x4308370823);
if (True == x4308370855) {
Obj x4308371335 = PRIM_CDR(x4311343815);
Obj x4308371399 = PRIM_ISCONS(x4308371335);
if (True == x4308371399) {
Obj x4308371911 = PRIM_CDR(x4311343815);
Obj x4308371943 = PRIM_CAR(x4308371911);
Obj x4308372455 = PRIM_CDR(x4311343815);
Obj x4308372487 = PRIM_CDR(x4308372455);
Obj remain = x4308372487;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311343911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343911);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343911);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311344359 = makeNative1(1, clofun121, 0, 1, closureRef(R[0], 0));
Obj x4308447015 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308447015) {
Obj x4308369575 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308369607 = PRIM_EQ(__symbolTable[19], x4308369575);
if (True == x4308369607) {
Obj x4308369959 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4308369959;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311344359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344359);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311344775 = makeNative1(2, clofun120, 0, 1, closureRef(R[0], 0));
Obj x4308444071 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308444071) {
Obj x4308444487 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308444583 = PRIM_ISCONS(x4308444487);
if (True == x4308444583) {
Obj x4308445063 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308445191 = PRIM_CAR(x4308445063);
Obj x4308445223 = PRIM_EQ(__symbolTable[20], x4308445191);
if (True == x4308445223) {
Obj x4308445703 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308445735 = PRIM_CDR(x4308445703);
Obj x4308445927 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4308445927;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311344775);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344775);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344775);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396583 = makeNative1(1, clofun119, 0, 0);
Obj x4308471079 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308471079) {
Obj x4308471463 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308471495 = PRIM_ISCONS(x4308471463);
if (True == x4308471495) {
Obj x4308459687 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308459751 = PRIM_CAR(x4308459687);
Obj x4308459783 = PRIM_EQ(__symbolTable[21], x4308459751);
if (True == x4308459783) {
Obj x4308460423 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308460455 = PRIM_CDR(x4308460423);
Obj x4308460551 = PRIM_ISCONS(x4308460455);
if (True == x4308460551) {
Obj x4308461319 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308461351 = PRIM_CDR(x4308461319);
Obj x4308461383 = PRIM_CAR(x4308461351);
Obj pkg = x4308461383;
Obj x4308462311 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308462343 = PRIM_CDR(x4308462311);
Obj x4308462375 = PRIM_CDR(x4308462343);
Obj x4308462535 = PRIM_EQ(Nil, x4308462375);
if (True == x4308462535) {
Obj x4308462695 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x4308462695;
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
coraCall0(co, x4311396583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311396583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311396583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311396583);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311396583);
return;
}
}
case 1:
{
Obj x4308463367= co->res;
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
Obj x4308468743= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), makeNative1(2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj x4308468711= co->res;
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
coraCall3(co, globalRef(__symbolTable[25]), to, globals, x4308468711);
return;
}
case 3:
{
Obj x4308468263= co->res;
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
Obj x4308467911= co->res;
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
Obj x4308523911= co->res;
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
Obj x4308523623= co->res;
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
Obj x4308524743 = PRIM_CAR(group);
struct frame1 __curr = {
.fn = clofun116,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), closureRef(R[0], 0), x4308524743);
return;
}
case 1:
{
Obj x4308524871= co->res;
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
Obj x4308522151= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj x4308521799= co->res;
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
Obj x4308521319= co->res;
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
Obj x4309712551= co->res;
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
Obj x4309709319= co->res;
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
Obj x4309753767= co->res;
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
Obj x4309753735= co->res;
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
coraCall2(co, globalRef(__symbolTable[47]), to, x4309753735);
return;
}
case 8:
{
Obj x4309753159= co->res;
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
Obj x4309752615= co->res;
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
Obj x4309752295= co->res;
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
Obj x4309712423= co->res;
Obj acc = R[1];
Obj x4309712519 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4309712519);
return;
}
case 2:
{
Obj x4309711815= co->res;
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
Obj x4309711783= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun114,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), x4309711783);
return;
}
case 4:
{
Obj x4309711111= co->res;
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
Obj x4309710791= co->res;
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
Obj x4309710279= co->res;
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
Obj x4309800103 = PRIM_CAR(group);
Obj label = x4309800103;
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
Obj x4309751175= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n\n"));
return;
}
case 2:
{
Obj x4309750599= co->res;
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
Obj x4309750535= co->res;
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), x4309750535);
return;
}
case 4:
{
Obj x4309796327= co->res;
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
Obj x4309795975= co->res;
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
Obj x4309795431= co->res;
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
Obj x4309795175= co->res;
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
Obj x4309802855= co->res;
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
Obj x4309802439= co->res;
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
Obj x4309801799= co->res;
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
Obj x4309801095= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = x4309801095;
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
Obj x4309800775= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = x4309800775;
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
Obj x4309800583= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = x4309800583;
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
Obj x4309749927= co->res;
Obj acc = R[1];
Obj x4309750279 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4309750279);
return;
}
case 2:
{
Obj x4309798855= co->res;
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
Obj x4309798631= co->res;
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
coraCall(co, globalRef(__symbolTable[40]), 5, closureRef(R[0], 0), closureRef(R[0], 1), x4309798631, closureRef(R[0], 3), cont);
return;
}
case 4:
{
Obj x4309798023= co->res;
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
Obj x4309797543= co->res;
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
Obj x4309797191= co->res;
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
Obj x4311399975 = R[1];
Obj x4311400007 = R[2];
Obj x4309805287 = PRIM_EQ(Nil, x4311400007);
if (True == x4309805287) {
coraReturn(co, Nil);
return;
} else {
Obj x4309805607 = PRIM_ISCONS(x4311400007);
if (True == x4309805607) {
Obj x4309806119 = PRIM_CAR(x4311400007);
Obj x = x4309806119;
Obj x4309806535 = PRIM_CDR(x4311400007);
Obj y = x4309806535;
R[1] = x4311399975;
R[2] = y;
struct frame1 __curr = {
.fn = clofun111,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4311399975, x);
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
Obj x4309807015= co->res;
Obj x4311399975 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), x4311399975, y);
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
Obj x4309804135= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[34]), x4309804135);
return;
}
case 2:
{
Obj x4309804103= co->res;
struct frame1 __curr = {
.fn = clofun110,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[35]), x4309804103);
return;
}
case 3:
{
Obj x4309804071= co->res;
struct frame1 __curr = {
.fn = clofun110,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[36]), x4309804071);
return;
}
case 4:
{
Obj x4309804039= co->res;
struct frame1 __curr = {
.fn = clofun110,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[37]), x4309804039);
return;
}
case 5:
{
Obj x4309804007= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun110,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, x4309804007, exp);
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
Obj x4309834695= co->res;
Obj obj = R[1];
Obj fns = x4309834695;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), obj, fns);
return;
}
case 2:
{
Obj x4309834279= co->res;
Obj exp = R[1];
Obj obj = x4309834279;
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
Obj x4311398631 = R[1];
Obj x4311398663 = R[2];
Obj x4310359495 = PRIM_EQ(Nil, x4311398663);
if (True == x4310359495) {
coraReturn(co, x4311398631);
return;
} else {
Obj x4310359783 = PRIM_ISCONS(x4311398663);
if (True == x4310359783) {
Obj x4309831719 = PRIM_CAR(x4311398663);
Obj hd = x4309831719;
Obj x4309832199 = PRIM_CDR(x4311398663);
Obj more = x4309832199;
Obj x4309832743 = makeCons(x4311398631, Nil);
Obj x4309832967 = makeCons(hd, x4309832743);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), x4309832967, more);
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
Obj x4310358663= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj x4310358439= co->res;
Obj v = R[1];
Obj e2 = x4310358439;
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
Obj x4310357991= co->res;
Obj v = R[1];
Obj e1 = x4310357991;
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
Obj x4310357543= co->res;
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
Obj x4310356999= co->res;
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
Obj x4310356711= co->res;
Obj exp = R[1];
Obj v = x4310356711;
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
Obj x4310511655= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(")"));
return;
}
case 2:
{
Obj x4310580519= co->res;
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
Obj x4310580007= co->res;
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
Obj x4310578631= co->res;
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
Obj x4311396903 = R[1];
Obj x4311396935 = R[2];
Obj x4311397095 = R[3];
Obj x4311397127 = R[4];
Obj x4311397159 = R[5];
Obj x4311397479 = makeNative1(1, clofun99, 0, 0);
Obj x4307654311 = PRIM_ISCONS(x4311397159);
if (True == x4307654311) {
Obj x4307654567 = PRIM_CAR(x4311397159);
Obj x4307654599 = PRIM_EQ(__symbolTable[62], x4307654567);
if (True == x4307654599) {
Obj x4311397255 = PRIM_CDR(x4311397159);
Obj x4311397319 = PRIM_ISCONS(x4311397255);
if (True == x4311397319) {
Obj x4311398247 = PRIM_CDR(x4311397159);
Obj x4311398375 = PRIM_CAR(x4311398247);
Obj var = x4311398375;
Obj x4311399143 = PRIM_CDR(x4311397159);
Obj x4311399367 = PRIM_CDR(x4311399143);
Obj x4311399431 = PRIM_ISCONS(x4311399367);
if (True == x4311399431) {
Obj x4311400199 = PRIM_CDR(x4311397159);
Obj x4311400231 = PRIM_CDR(x4311400199);
Obj x4311400359 = PRIM_CAR(x4311400231);
Obj body = x4311400359;
Obj x4311344263 = PRIM_CDR(x4311397159);
Obj x4311344295 = PRIM_CDR(x4311344263);
Obj x4311344455 = PRIM_CDR(x4311344295);
Obj fvs = x4311344455;
R[1] = var;
R[2] = fvs;
R[3] = x4311396903;
R[4] = x4311396935;
R[5] = x4311397095;
R[6] = x4311397127;
R[7] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), x4311397127, makeCString("Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311397479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397479);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397479);
return;
}
}
case 1:
{
Obj x4311346695= co->res;
Obj x4311396903 = R[1];
Obj x4311396935 = R[2];
Obj x4311397095 = R[3];
Obj x4311397127 = R[4];
Obj body = R[5];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[46]), 5, x4311396903, x4311396935, x4311397095, x4311397127, body);
return;
}
case 2:
{
Obj x4311346119= co->res;
Obj fvs = R[1];
Obj x4311396903 = R[2];
Obj x4311396935 = R[3];
Obj x4311397095 = R[4];
Obj x4311397127 = R[5];
Obj body = R[6];
R[1] = x4311396903;
R[2] = x4311396935;
R[3] = x4311397095;
R[4] = x4311397127;
R[5] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[45]), 5, x4311396903, x4311396935, x4311397095, x4311397127, fvs);
return;
}
case 3:
{
Obj x4311345799= co->res;
Obj fvs = R[1];
Obj x4311396903 = R[2];
Obj x4311396935 = R[3];
Obj x4311397095 = R[4];
Obj x4311397127 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = x4311396903;
R[3] = x4311396935;
R[4] = x4311397095;
R[5] = x4311397127;
R[6] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), x4311397127, makeCString("= co->res;\n"));
return;
}
case 4:
{
Obj x4311344743= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj x4311396903 = R[3];
Obj x4311396935 = R[4];
Obj x4311397095 = R[5];
Obj x4311397127 = R[6];
Obj body = R[7];
Obj x4311345543 = PRIM_CAR(var);
R[1] = fvs;
R[2] = x4311396903;
R[3] = x4311396935;
R[4] = x4311397095;
R[5] = x4311397127;
R[6] = body;
struct frame1 __curr = {
.fn = clofun100,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), x4311397127, x4311345543);
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
Obj x4307672167 = primGenSym();
Obj generate_45inst_45list_45h = x4307672167;
Obj x4307653543 = primSet(co, generate_45inst_45list_45h, makeNative1(2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
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
Obj x4307653735= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, x4307653735, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x4307672519 = PRIM_EQ(Nil, x);
if (True == x4307672519) {
coraReturn(co, Nil);
return;
} else {
Obj x4307672679 = PRIM_ISCONS(x);
if (True == x4307672679) {
Obj x4307672839 = PRIM_CAR(x);
Obj a = x4307672839;
Obj x4307673031 = PRIM_CDR(x);
Obj b = x4307673031;
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
Obj x4307653287= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x4307653287, b);
return;
}
case 2:
{
Obj x4307653127= co->res;
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
Obj x4307653447= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x4307653447, b);
return;
}
case 4:
{
Obj x4307652999= co->res;
Obj b = R[1];
Obj x4307653031 = primNot(x4307652999);
if (True == x4307653031) {
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
Obj x4307652711= co->res;
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
Obj x4307862247 = primGenSym();
Obj generate_45inst_45h = x4307862247;
Obj x4307671591 = primSet(co, generate_45inst_45h, makeNative1(3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
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
Obj x4307671751= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, x4307671751, x1, env1);
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
Obj x4307862599 = primIsSymbol(x2);
if (True == x4307862599) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj x4311345415 = makeNative1(2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj x4307669671 = PRIM_ISCONS(x2);
if (True == x4307669671) {
Obj x4307669895 = PRIM_CAR(x2);
Obj x4307669927 = PRIM_EQ(__symbolTable[93], x4307669895);
if (True == x4307669927) {
Obj x4307670151 = PRIM_CDR(x2);
Obj x4307670183 = PRIM_ISCONS(x4307670151);
if (True == x4307670183) {
Obj x4307670439 = PRIM_CDR(x2);
Obj x4307670471 = PRIM_CAR(x4307670439);
Obj x = x4307670471;
Obj x4307670759 = PRIM_CDR(x2);
Obj x4307670791 = PRIM_CDR(x4307670759);
Obj x4307670823 = PRIM_EQ(Nil, x4307670791);
if (True == x4307670823) {
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
coraCall0(co, x4311345415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345415);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345415);
return;
}
}
}
case 1:
{
Obj x4307671239= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("])"));
return;
}
case 2:
{
Obj x4307671207= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), x4307671207);
return;
}
case 3:
{
Obj x4307670983= co->res;
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
Obj x4311345703 = makeNative1(2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj x4307688071 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == x4307688071) {
Obj x4307688295 = PRIM_CAR(closureRef(R[0], 4));
Obj x4307688327 = PRIM_EQ(__symbolTable[77], x4307688295);
if (True == x4307688327) {
Obj x4307688551 = PRIM_CDR(closureRef(R[0], 4));
Obj x4307688583 = PRIM_ISCONS(x4307688551);
if (True == x4307688583) {
Obj x4307688871 = PRIM_CDR(closureRef(R[0], 4));
Obj x4307688903 = PRIM_CAR(x4307688871);
Obj idx = x4307688903;
Obj x4307689191 = PRIM_CDR(closureRef(R[0], 4));
Obj x4307689223 = PRIM_CDR(x4307689191);
Obj x4307689255 = PRIM_EQ(Nil, x4307689223);
if (True == x4307689255) {
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
coraCall0(co, x4311345703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345703);
return;
}
}
case 1:
{
Obj x4307669095= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj x4307689415= co->res;
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
Obj x4311346055 = makeNative1(4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4307696167 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x4307696167) {
Obj x4307696423 = PRIM_CAR(closureRef(R[0], 3));
Obj x4307696455 = PRIM_EQ(__symbolTable[96], x4307696423);
if (True == x4307696455) {
Obj x4307696679 = PRIM_CDR(closureRef(R[0], 3));
Obj x4307696711 = PRIM_ISCONS(x4307696679);
if (True == x4307696711) {
Obj x4307696935 = PRIM_CDR(closureRef(R[0], 3));
Obj x4307696967 = PRIM_CAR(x4307696935);
Obj x = x4307696967;
Obj x4307697255 = PRIM_CDR(closureRef(R[0], 3));
Obj x4307697287 = PRIM_CDR(x4307697255);
Obj x4307697319 = PRIM_EQ(Nil, x4307697287);
if (True == x4307697319) {
Obj x4307697479 = primIsSymbol(x);
if (True == x4307697479) {
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
coraCall0(co, x4311346055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346055);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346055);
return;
}
}
case 1:
{
Obj x4307685607= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("]"));
return;
}
case 2:
{
Obj x4307685575= co->res;
struct frame1 __curr = {
.fn = clofun93,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x4307685575);
return;
}
case 3:
{
Obj x4307697639= co->res;
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
Obj x4307685991= co->res;
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
Obj x4307686855= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("\")"));
return;
}
case 7:
{
Obj x4307686823= co->res;
struct frame1 __curr = {
.fn = clofun93,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x4307686823);
return;
}
case 8:
{
Obj x4307686535= co->res;
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
Obj x4307685831= co->res;
Obj x = R[1];
if (True == x4307685831) {
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
Obj x4307686375 = primIsString(x);
if (True == x4307686375) {
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
Obj x4307687079 = PRIM_EQ(x, Nil);
if (True == x4307687079) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("Nil"));
return;
} else {
Obj x4307687303 = PRIM_EQ(x, True);
if (True == x4307687303) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("True"));
return;
} else {
Obj x4307687527 = PRIM_EQ(x, False);
if (True == x4307687527) {
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
Obj x4311346439 = makeNative1(3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x4307976135 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4307976135) {
Obj x4307906983 = PRIM_CAR(closureRef(R[0], 2));
Obj x4307907015 = PRIM_EQ(__symbolTable[86], x4307906983);
if (True == x4307907015) {
Obj x4307907591 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307907623 = PRIM_ISCONS(x4307907591);
if (True == x4307907623) {
Obj x4307908199 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307908231 = PRIM_CAR(x4307908199);
Obj a = x4307908231;
Obj x4307908551 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307908583 = PRIM_CDR(x4307908551);
Obj x4307908615 = PRIM_ISCONS(x4307908583);
if (True == x4307908615) {
Obj x4307908967 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307909031 = PRIM_CDR(x4307908967);
Obj x4307909063 = PRIM_CAR(x4307909031);
Obj b = x4307909063;
Obj x4307909511 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307909543 = PRIM_CDR(x4307909511);
Obj x4307909575 = PRIM_CDR(x4307909543);
Obj x4307909607 = PRIM_ISCONS(x4307909575);
if (True == x4307909607) {
Obj x4307910055 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307910119 = PRIM_CDR(x4307910055);
Obj x4307910151 = PRIM_CDR(x4307910119);
Obj x4307910183 = PRIM_CAR(x4307910151);
Obj c = x4307910183;
Obj x4307861543 = PRIM_CDR(closureRef(R[0], 2));
Obj x4307861575 = PRIM_CDR(x4307861543);
Obj x4307861639 = PRIM_CDR(x4307861575);
Obj x4307861671 = PRIM_CDR(x4307861639);
Obj x4307861703 = PRIM_EQ(Nil, x4307861671);
if (True == x4307861703) {
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
coraCall0(co, x4311346439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346439);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346439);
return;
}
}
case 1:
{
Obj x4307863335= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x4307863431 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x4307863335, c, x4307863431);
return;
}
case 2:
{
Obj x4307863175= co->res;
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
Obj x4307863015= co->res;
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
Obj x4307862983= co->res;
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
coraCall2(co, x4307862983, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj x4307862663= co->res;
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
Obj x4307862471= co->res;
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
Obj x4307862311= co->res;
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
Obj x4307695527= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x4307695623 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x4307695527, c, x4307695623);
return;
}
case 9:
{
Obj x4307695367= co->res;
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
Obj x4307864007= co->res;
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
Obj x4307863975= co->res;
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
coraCall2(co, x4307863975, b, closureRef(R[0], 5));
return;
}
case 12:
{
Obj x4307863751= co->res;
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
Obj x4307863591= co->res;
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
Obj x4307861959= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
Obj idx = x4307861959;
Obj x4307862183 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x4307862183) {
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
Obj x4311347015 = makeNative1(4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4308303335 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308303335) {
Obj x4308303623 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308303655 = PRIM_ISCONS(x4308303623);
if (True == x4308303655) {
Obj x4307972263 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307972295 = PRIM_CAR(x4307972263);
Obj x4307972327 = PRIM_EQ(__symbolTable[90], x4307972295);
if (True == x4307972327) {
Obj x4307972775 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307972807 = PRIM_CDR(x4307972775);
Obj x4307972839 = PRIM_ISCONS(x4307972807);
if (True == x4307972839) {
Obj x4307973127 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307973159 = PRIM_CDR(x4307973127);
Obj x4307973191 = PRIM_CAR(x4307973159);
Obj f = x4307973191;
Obj x4307973575 = PRIM_CAR(closureRef(R[0], 1));
Obj x4307973639 = PRIM_CDR(x4307973575);
Obj x4307973671 = PRIM_CDR(x4307973639);
Obj x4307973703 = PRIM_EQ(Nil, x4307973671);
if (True == x4307973703) {
Obj x4307973895 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x4307973895;
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
coraCall0(co, x4311347015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311347015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311347015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311347015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311347015);
return;
}
}
case 1:
{
Obj x4307974855= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj x4307974663= co->res;
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
Obj x4307975367= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 4:
{
Obj x4307975015= co->res;
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
Obj x4307974247= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4307974567 = PRIM_EQ(f, __symbolTable[121]);
if (True == x4307974567) {
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
Obj x4307974215= co->res;
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), x4307974215);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580423 = makeNative1(5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4308370343 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4308370343) {
Obj x4308370599 = PRIM_CAR(closureRef(R[0], 2));
Obj x4308370631 = PRIM_EQ(__symbolTable[87], x4308370599);
if (True == x4308370631) {
Obj x4308370887 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308370919 = PRIM_ISCONS(x4308370887);
if (True == x4308370919) {
Obj x4308371271 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308371303 = PRIM_CAR(x4308371271);
Obj a = x4308371303;
Obj x4308371815 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308371847 = PRIM_CDR(x4308371815);
Obj x4308371879 = PRIM_ISCONS(x4308371847);
if (True == x4308371879) {
Obj x4308372359 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308372391 = PRIM_CDR(x4308372359);
Obj x4308372423 = PRIM_CAR(x4308372391);
Obj b = x4308372423;
Obj x4308372871 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308372903 = PRIM_CDR(x4308372871);
Obj x4308372935 = PRIM_CDR(x4308372903);
Obj x4308373095 = PRIM_ISCONS(x4308372935);
if (True == x4308373095) {
Obj x4308299847 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308299911 = PRIM_CDR(x4308299847);
Obj x4308299943 = PRIM_CDR(x4308299911);
Obj x4308299975 = PRIM_CAR(x4308299943);
Obj c = x4308299975;
Obj x4308300519 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308300551 = PRIM_CDR(x4308300519);
Obj x4308300583 = PRIM_CDR(x4308300551);
Obj x4308300615 = PRIM_CDR(x4308300583);
Obj x4308300647 = PRIM_EQ(Nil, x4308300615);
if (True == x4308300647) {
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
coraCall0(co, x4310580423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580423);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580423);
return;
}
}
case 1:
{
Obj x4308302471= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("}\n"));
return;
}
case 2:
{
Obj x4308302439= co->res;
Obj c = R[1];
struct frame1 __curr = {
.fn = clofun90,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4308302439, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4308302055= co->res;
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
Obj x4308301895= co->res;
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
Obj x4308301863= co->res;
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
coraCall2(co, x4308301863, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj x4308301479= co->res;
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
Obj x4308301319= co->res;
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
Obj x4308301287= co->res;
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
coraCall2(co, x4308301287, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x4308300935= co->res;
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
Obj x4310514343 = makeNative1(3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj x4308459719 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308459719) {
Obj x4308460071 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308460103 = PRIM_EQ(__symbolTable[78], x4308460071);
if (True == x4308460103) {
Obj x4308460487 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308460519 = PRIM_ISCONS(x4308460487);
if (True == x4308460519) {
Obj x4308460967 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308460999 = PRIM_CAR(x4308460967);
Obj label = x4308460999;
Obj x4308461479 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308461511 = PRIM_CDR(x4308461479);
Obj x4308461639 = PRIM_ISCONS(x4308461511);
if (True == x4308461639) {
Obj x4308462183 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308462247 = PRIM_CDR(x4308462183);
Obj x4308462279 = PRIM_CAR(x4308462247);
Obj nargs = x4308462279;
Obj x4308463079 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308463111 = PRIM_CDR(x4308463079);
Obj x4308463175 = PRIM_CDR(x4308463111);
Obj x4308463207 = PRIM_ISCONS(x4308463175);
if (True == x4308463207) {
Obj x4308443271 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308443303 = PRIM_CDR(x4308443271);
Obj x4308443335 = PRIM_CDR(x4308443303);
Obj x4308443367 = PRIM_CAR(x4308443335);
Obj nframe = x4308443367;
Obj x4308443847 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308443879 = PRIM_CDR(x4308443847);
Obj x4308443975 = PRIM_CDR(x4308443879);
Obj x4308444007 = PRIM_CDR(x4308443975);
Obj frees = x4308444007;
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
coraCall0(co, x4310514343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514343);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310514343);
return;
}
}
case 1:
{
Obj x4308369415= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj x4308447047= co->res;
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
Obj x4308446855= co->res;
Obj frees = R[1];
Obj x4308446887 = primNot(x4308446855);
if (True == x4308446887) {
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
Obj x4308446151= co->res;
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
Obj x4308446119= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame1 __curr = {
.fn = clofun89,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), x4308446119);
return;
}
case 6:
{
Obj x4308445767= co->res;
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
Obj x4308445479= co->res;
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
Obj x4308445255= co->res;
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
Obj x4308444999= co->res;
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
Obj x4308444839= co->res;
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
Obj x4308444519= co->res;
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
Obj x4308444263= co->res;
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
Obj x4310356679 = makeNative1(2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x4308524455 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4308524455) {
Obj x4308524967 = PRIM_CAR(closureRef(R[0], 2));
Obj x4308524999 = PRIM_EQ(__symbolTable[85], x4308524967);
if (True == x4308524999) {
Obj x4308468103 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308468231 = PRIM_ISCONS(x4308468103);
if (True == x4308468231) {
Obj x4308468583 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308468647 = PRIM_CAR(x4308468583);
Obj a = x4308468647;
Obj x4308469127 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308469255 = PRIM_CDR(x4308469127);
Obj x4308469287 = PRIM_ISCONS(x4308469255);
if (True == x4308469287) {
Obj x4308469863 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308469895 = PRIM_CDR(x4308469863);
Obj x4308469959 = PRIM_CAR(x4308469895);
Obj b = x4308469959;
Obj x4308470343 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308470375 = PRIM_CDR(x4308470343);
Obj x4308470407 = PRIM_CDR(x4308470375);
Obj x4308470439 = PRIM_EQ(Nil, x4308470407);
if (True == x4308470439) {
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
coraCall0(co, x4310356679);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356679);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356679);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356679);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356679);
return;
}
}
case 1:
{
Obj x4308471303= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, x4308471303, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj x4308471047= co->res;
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
Obj x4308470791= co->res;
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
Obj x4308470727= co->res;
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
coraCall2(co, x4308470727, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310357703 = makeNative1(2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4309711623 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4309711623) {
Obj x4309712039 = PRIM_CAR(closureRef(R[0], 2));
Obj x4309712391 = PRIM_EQ(__symbolTable[72], x4309712039);
if (True == x4309712391) {
Obj x4309712743 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309712775 = PRIM_ISCONS(x4309712743);
if (True == x4309712775) {
Obj x4308521415 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308521575 = PRIM_CAR(x4308521415);
Obj x = x4308521575;
Obj x4308522183 = PRIM_CDR(closureRef(R[0], 2));
Obj x4308522407 = PRIM_CDR(x4308522183);
Obj x4308522439 = PRIM_EQ(Nil, x4308522407);
if (True == x4308522439) {
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
coraCall0(co, x4310357703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357703);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357703);
return;
}
}
case 1:
{
Obj x4308523655= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj x4308523303= co->res;
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
Obj x4308523271= co->res;
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun87,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4308523271, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x4308522759= co->res;
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
Obj x4310358535 = makeNative1(3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4309752327 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x4309752327) {
Obj x4309752711 = PRIM_CAR(closureRef(R[0], 2));
Obj x4309752775 = PRIM_EQ(__symbolTable[74], x4309752711);
if (True == x4309752775) {
Obj x4309753255 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309753351 = PRIM_ISCONS(x4309753255);
if (True == x4309753351) {
Obj x4309708935 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309709127 = PRIM_CAR(x4309708935);
Obj exp = x4309709127;
Obj x4309709607 = PRIM_CDR(closureRef(R[0], 2));
Obj x4309709639 = PRIM_CDR(x4309709607);
Obj x4309709671 = PRIM_EQ(Nil, x4309709639);
if (True == x4309709671) {
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
Obj x4309710631= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj x4309710535= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4309710535, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4309709895= co->res;
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
Obj x4309832647 = makeNative1(4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x4309800711 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309800711) {
Obj x4309801031 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309801063 = PRIM_EQ(__symbolTable[73], x4309801031);
if (True == x4309801063) {
Obj x4309801895 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801927 = PRIM_ISCONS(x4309801895);
if (True == x4309801927) {
Obj x4309802503 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802535 = PRIM_CAR(x4309802503);
Obj exp = x4309802535;
Obj x4309794951 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309794983 = PRIM_CDR(x4309794951);
Obj x4309795143 = PRIM_ISCONS(x4309794983);
if (True == x4309795143) {
Obj x4309795623 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795687 = PRIM_CDR(x4309795623);
Obj x4309795719 = PRIM_CAR(x4309795687);
Obj label = x4309795719;
Obj x4309796359 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309796423 = PRIM_CDR(x4309796359);
Obj x4309796487 = PRIM_CDR(x4309796423);
Obj fvs = x4309796487;
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
coraCall0(co, x4309832647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4309832647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4309832647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4309832647);
return;
}
}
case 1:
{
Obj x4309751303= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj x4309751207= co->res;
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun85,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4309751207, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x4309750567= co->res;
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
Obj x4309750183= co->res;
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
Obj x4309749863= co->res;
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
Obj x4309798695= co->res;
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
Obj x4309798375= co->res;
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
Obj x4309797991= co->res;
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
Obj x4309797607= co->res;
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
Obj x4309797255= co->res;
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
Obj x4309796967= co->res;
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
Obj x4309796711= co->res;
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
Obj x4307864327 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4307864327) {
Obj x4307864487 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4307864487;
Obj x4307864647 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4307864647;
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
Obj x4311399623= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 2:
{
Obj x4311399495= co->res;
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
Obj x4311398471= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4311399015 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4311399015) {
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
Obj x4311398279= co->res;
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
Obj x4311344071= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 6:
{
Obj x4311343879= co->res;
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
Obj x4311397191= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4311397863 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4311397863) {
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
Obj x4311400423 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4311400423) {
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
Obj x4311396967= co->res;
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
coraCall2(co, x4311396967, f, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x4307694983= co->res;
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
Obj x4310577927= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 11:
{
Obj x4310577767= co->res;
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
Obj x4311346759= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310577383 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310577383) {
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
Obj x4311346663= co->res;
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
Obj x4310579399= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 15:
{
Obj x4310579303= co->res;
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
Obj x4311345735= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4311346151 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4311346151) {
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
Obj x4310578695 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310578695) {
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
Obj x4311345575= co->res;
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
coraCall2(co, x4311345575, f, closureRef(R[0], 4));
return;
}
case 18:
{
Obj x4311344903= co->res;
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
Obj x4310514471= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 20:
{
Obj x4310514311= co->res;
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
Obj x4310512711= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310513639 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310513639) {
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
Obj x4310512359= co->res;
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
Obj x4310515559= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 24:
{
Obj x4310515335= co->res;
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
Obj x4310580935= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310512007 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4310512007) {
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
Obj x4310515079 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310515079) {
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
Obj x4310580903= co->res;
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
coraCall2(co, x4310580903, f, closureRef(R[0], 4));
return;
}
case 27:
{
Obj x4310580455= co->res;
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
Obj x4310358887= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 29:
{
Obj x4310358791= co->res;
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
Obj x4310358151= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310358599 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310358599) {
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
Obj x4310358023= co->res;
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
Obj x4310359847= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 33:
{
Obj x4310359719= co->res;
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
Obj x4310357319= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4310357671 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4310357671) {
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
Obj x4310359527 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4310359527) {
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
Obj x4310357031= co->res;
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
coraCall2(co, x4310357031, f, closureRef(R[0], 4));
return;
}
case 36:
{
Obj x4310356647= co->res;
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
Obj x4309835239= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 38:
{
Obj x4309835015= co->res;
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
Obj x4309834183= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4309834471 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4309834471) {
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
Obj x4309833799= co->res;
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
Obj x4309803847= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 42:
{
Obj x4309803495= co->res;
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
Obj x4309832871= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4309833479 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4309833479) {
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
Obj x4309803207 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4309803207) {
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
Obj x4309832839= co->res;
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
coraCall2(co, x4309832839, f, closureRef(R[0], 4));
return;
}
case 45:
{
Obj x4309832263= co->res;
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
Obj x4309806695= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 47:
{
Obj x4309806599= co->res;
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
Obj x4309805799= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4309806279 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4309806279) {
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
Obj x4309805575= co->res;
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
Obj x4309799943= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 51:
{
Obj x4309799527= co->res;
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
Obj x4309805031= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x4309805319 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x4309805319) {
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
Obj x4309799367 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x4309799367) {
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
Obj x4309804999= co->res;
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
coraCall2(co, x4309804999, f, closureRef(R[0], 4));
return;
}
case 54:
{
Obj x4309804455= co->res;
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
Obj x4307693671= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = x4307693671;
Obj x4307694567 = PRIM_EQ(nargs, MAKE_NUMBER(0));
if (True == x4307694567) {
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
Obj x4311344647 = PRIM_EQ(nargs, MAKE_NUMBER(1));
if (True == x4311344647) {
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
Obj x4310580071 = PRIM_EQ(nargs, MAKE_NUMBER(2));
if (True == x4310580071) {
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
Obj x4310356423 = PRIM_EQ(nargs, MAKE_NUMBER(3));
if (True == x4310356423) {
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
Obj x4309832071 = PRIM_EQ(nargs, MAKE_NUMBER(4));
if (True == x4309832071) {
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
Obj x4307861767= co->res;
Obj acc = R[1];
Obj x4307861863 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4307861863);
return;
}
case 2:
{
Obj x4307861607= co->res;
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
Obj x4307910599= co->res;
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
Obj x4307910439= co->res;
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
Obj x4307910279= co->res;
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
Obj x4307909639= co->res;
Obj acc = R[1];
Obj x4307909735 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x4307909735);
return;
}
case 2:
{
Obj x4307909479= co->res;
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
Obj x4307909319= co->res;
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
Obj x4307909159= co->res;
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
Obj x4307908999= co->res;
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
Obj x4307907239= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == x4307907239) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x4307907655 = PRIM_CAR(globals);
Obj x4307907687 = PRIM_EQ(sym, x4307907655);
if (True == x4307907687) {
coraReturn(co, idx);
return;
} else {
Obj x4307907943 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x4307908071 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[51]), x4307907943, sym, x4307908071);
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
Obj x4307975847= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == x4307975847) {
coraReturn(co, Nil);
return;
} else {
Obj x4307976167 = makeCons(sym, val);
Obj x4307906567 = primSet(co, globals, x4307976167);
coraReturn(co, x4307906567);
return;
}
}
case 2:
{
Obj x4307975687= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = x4307975687;
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
Obj x4307974823 = primGenSym();
Obj tmp = x4307974823;
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
Obj x4307975175= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj x4307975207 = makeCons(x4307975175, Nil);
Obj x4307975239 = makeCons(x, x4307975207);
Obj x4307975271 = makeCons(tmp, x4307975239);
Obj x4307975303 = makeCons(__symbolTable[86], x4307975271);
coraReturn(co, x4307975303);
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
Obj x4307974375= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj x4307973767= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = x4307973767;
Obj x4307974055 = makeCons(val, Nil);
Obj x4307974087 = makeCons(idx, x4307974055);
Obj x4307974119 = makeCons(x4307974087, cur);
Obj cur1 = x4307974119;
Obj x4307974343 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
struct frame1 __curr = {
.fn = clofun75,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), x4307974343);
return;
}
case 3:
{
Obj x4307973607= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = x4307973607;
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
Obj x4311343559 = R[1];
Obj x4311343591 = R[2];
Obj x4311343719 = makeNative1(1, clofun73, 0, 2, x4311343559, x4311343591);
Obj x4308371143 = PRIM_ISCONS(x4311343591);
if (True == x4308371143) {
Obj x4308371431 = PRIM_CAR(x4311343591);
Obj x4308371463 = PRIM_EQ(__symbolTable[78], x4308371431);
if (True == x4308371463) {
Obj x4308371719 = PRIM_CDR(x4311343591);
Obj x4308371783 = PRIM_ISCONS(x4308371719);
if (True == x4308371783) {
Obj x4308372135 = PRIM_CDR(x4311343591);
Obj x4308372167 = PRIM_CAR(x4308372135);
Obj x4308299879 = PRIM_ISCONS(x4308372167);
if (True == x4308299879) {
Obj x4308300231 = PRIM_CDR(x4311343591);
Obj x4308300263 = PRIM_CAR(x4308300231);
Obj x4308300295 = PRIM_CAR(x4308300263);
Obj x4308300327 = PRIM_EQ(__symbolTable[89], x4308300295);
if (True == x4308300327) {
Obj x4308300679 = PRIM_CDR(x4311343591);
Obj x4308300711 = PRIM_CAR(x4308300679);
Obj x4308300743 = PRIM_CDR(x4308300711);
Obj x4308300775 = PRIM_ISCONS(x4308300743);
if (True == x4308300775) {
Obj x4308301127 = PRIM_CDR(x4311343591);
Obj x4308301159 = PRIM_CAR(x4308301127);
Obj x4308301191 = PRIM_CDR(x4308301159);
Obj x4308301223 = PRIM_CAR(x4308301191);
Obj params = x4308301223;
Obj x4308301639 = PRIM_CDR(x4311343591);
Obj x4308301671 = PRIM_CAR(x4308301639);
Obj x4308301703 = PRIM_CDR(x4308301671);
Obj x4308301735 = PRIM_CDR(x4308301703);
Obj x4308301767 = PRIM_ISCONS(x4308301735);
if (True == x4308301767) {
Obj x4308302183 = PRIM_CDR(x4311343591);
Obj x4308302215 = PRIM_CAR(x4308302183);
Obj x4308302247 = PRIM_CDR(x4308302215);
Obj x4308302279 = PRIM_CDR(x4308302247);
Obj x4308302311 = PRIM_CAR(x4308302279);
Obj body = x4308302311;
Obj x4308302791 = PRIM_CDR(x4311343591);
Obj x4308302823 = PRIM_CAR(x4308302791);
Obj x4308302855 = PRIM_CDR(x4308302823);
Obj x4308302887 = PRIM_CDR(x4308302855);
Obj x4308302919 = PRIM_CDR(x4308302887);
Obj x4308302951 = PRIM_EQ(Nil, x4308302919);
if (True == x4308302951) {
Obj x4308303175 = PRIM_CDR(x4311343591);
Obj x4308303207 = PRIM_CDR(x4308303175);
Obj fvs = x4308303207;
R[1] = x4311343559;
R[2] = params;
R[3] = fvs;
struct frame1 __curr = {
.fn = clofun74,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), x4311343559, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343719);
return;
}
}
case 1:
{
Obj x4307972519= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj x4307972615 = makeCons(nframe, fvs);
Obj x4307972647 = makeCons(x4307972519, x4307972615);
Obj x4307972679 = makeCons(cur, x4307972647);
Obj x4307972711 = makeCons(__symbolTable[78], x4307972679);
coraReturn(co, x4307972711);
return;
}
case 2:
{
Obj x4307972231= co->res;
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
Obj x4308303847= co->res;
Obj x4311343559 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = x4308303847;
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
coraCall2(co, globalRef(__symbolTable[54]), x4311343559, body2);
return;
}
case 4:
{
Obj x4308303687= co->res;
Obj x4311343559 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = x4308303687;
R[1] = x4311343559;
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
Obj x4308303527= co->res;
Obj body1 = R[1];
Obj x4311343559 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = x4308303527;
R[1] = x4311343559;
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
Obj x4308303367= co->res;
Obj x4311343559 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = x4308303367;
R[1] = body1;
R[2] = x4311343559;
R[3] = params;
R[4] = fvs;
struct frame1 __curr = {
.fn = clofun74,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), x4311343559, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308370791 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4308370791) {
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
Obj x4308370951= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4308370951, closureRef(R[0], 1));
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
Obj x4308370247= co->res;
Obj x4308370151 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), makeNative1(3, clofun71, 2, 0), x4308370151, x4308370247);
return;
}
case 2:
{
Obj x4308447111= co->res;
Obj lam = R[1];
Obj nargs = x4308447111;
Obj x4308370151 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = x4308370151;
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
Obj x4308447079= co->res;
Obj lam = R[1];
R[1] = lam;
struct frame1 __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), x4308447079);
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
Obj x4308369863= co->res;
Obj acc = R[1];
Obj x4308369895 = PRIM_ADD(x4308369863, MAKE_NUMBER(1));
Obj len = x4308369895;
Obj x4308370055 = PRIM_GT(len, acc);
if (True == x4308370055) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj x4308369831= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame1 __curr = {
.fn = clofun71,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), x4308369831);
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
Obj x4308446279= co->res;
Obj body1 = R[1];
Obj x4308446311 = makeCons(body1, x4308446279);
Obj x4308446343 = makeCons(closureRef(R[0], 0), x4308446311);
Obj x4308446375 = makeCons(__symbolTable[89], x4308446343);
coraReturn(co, x4308446375);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311399175 = R[1];
Obj x4311399207 = R[2];
Obj x4311399303 = R[3];
Obj x4311399335 = R[4];
Obj x4308444039 = PRIM_EQ(Nil, x4311399175);
if (True == x4308444039) {
co->ctx.sp = R;
coraCall2(co, x4311399335, x4311399303, x4311399207);
return;
} else {
Obj x4308444327 = PRIM_ISCONS(x4311399175);
if (True == x4308444327) {
Obj x4308444551 = PRIM_CAR(x4311399175);
Obj f = x4308444551;
Obj x4308444711 = PRIM_CDR(x4311399175);
Obj args = x4308444711;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), f, x4311399207, makeNative1(3, clofun67, 2, 3, args, x4311399303, x4311399335));
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
Obj x4308445319 = makeCons(closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x4308445319, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396999 = R[1];
Obj x4311397031 = R[2];
Obj x4311397063 = R[3];
Obj x4311396679 = makeNative1(2, clofun64, 1, 3, x4311396999, x4311397031, x4311397063);
Obj x4308443399 = primIsSymbol(x4311396999);
if (True == x4308443399) {
co->ctx.sp = R;
coraCall1(co, x4311396679, True);
return;
} else {
R[1] = x4311396679;
struct frame1 __curr = {
.fn = clofun65,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4311396999);
return;
}
}
case 1:
{
Obj x4308443559= co->res;
Obj x4311396679 = R[1];
if (True == x4308443559) {
co->ctx.sp = R;
coraCall1(co, x4311396679, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4311396679, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396711 = R[1];
if (True == x4311396711) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4311397735 = makeNative1(1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4308471591 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308471591) {
Obj x4308459591 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308459623 = PRIM_EQ(__symbolTable[73], x4308459591);
if (True == x4308459623) {
Obj x4308459943 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308459975 = PRIM_ISCONS(x4308459943);
if (True == x4308459975) {
Obj x4308460231 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460263 = PRIM_CAR(x4308460231);
Obj exp = x4308460263;
Obj x4308460679 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460711 = PRIM_CDR(x4308460679);
Obj x4308460743 = PRIM_ISCONS(x4308460711);
if (True == x4308460743) {
Obj x4308461095 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461127 = PRIM_CDR(x4308461095);
Obj x4308461159 = PRIM_CAR(x4308461127);
Obj cont = x4308461159;
Obj x4308461703 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461735 = PRIM_CDR(x4308461703);
Obj x4308461767 = PRIM_CDR(x4308461735);
Obj x4308461799 = PRIM_EQ(Nil, x4308461767);
if (True == x4308461799) {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), cont, closureRef(R[0], 1), makeNative1(4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311397735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397735);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397735);
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
Obj x4308462759= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj x4308462791 = PRIM_ADD(x4308462759, MAKE_NUMBER(1));
Obj x4308462823 = makeCons(x4308462791, fvs);
Obj x4308462855 = makeCons(closureRef(R[0], 1), x4308462823);
Obj x4308462887 = makeCons(__symbolTable[73], x4308462855);
Obj x4308463143 = makeCons(cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x4308462887, x4308463143);
return;
}
case 2:
{
Obj x4308462215= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = x4308462215;
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
Obj x4308470759 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308470759) {
Obj x4308470951 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4308470951;
Obj x4308471143 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308471143;
Obj x4308471367 = makeCons(f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[60]), x4308471367, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
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
Obj x4310580775 = R[1];
Obj x4310580999 = R[2];
R[1] = x4310580999;
R[2] = x4310580775;
struct frame1 __curr = {
.fn = clofun61,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4310580999);
return;
}
case 1:
{
Obj x4308469319= co->res;
Obj args = R[1];
Obj x4308469351 = makeCons(x4308469319, Nil);
Obj x4308469383 = makeCons(args, x4308469351);
Obj x4308469415 = makeCons(__symbolTable[89], x4308469383);
coraReturn(co, x4308469415);
return;
}
case 2:
{
Obj x4309796455= co->res;
Obj x4310580999 = R[1];
Obj x4310580775 = R[2];
if (True == x4309796455) {
coraReturn(co, x4310580999);
return;
} else {
Obj x4309796647 = primIsSymbol(x4310580999);
if (True == x4309796647) {
coraReturn(co, x4310580999);
return;
} else {
Obj x4310515367 = makeNative1(4, clofun60, 0, 2, x4310580999, x4310580775);
Obj x4308523559 = PRIM_ISCONS(x4310580999);
if (True == x4308523559) {
Obj x4308523815 = PRIM_CAR(x4310580999);
Obj x4308523847 = PRIM_EQ(__symbolTable[89], x4308523815);
if (True == x4308523847) {
Obj x4308524135 = PRIM_CDR(x4310580999);
Obj x4308524231 = PRIM_ISCONS(x4308524135);
if (True == x4308524231) {
Obj x4308524583 = PRIM_CDR(x4310580999);
Obj x4308524647 = PRIM_CAR(x4308524583);
Obj args = x4308524647;
Obj x4308467719 = PRIM_CDR(x4310580999);
Obj x4308467847 = PRIM_CDR(x4308467719);
Obj x4308467879 = PRIM_ISCONS(x4308467847);
if (True == x4308467879) {
Obj x4308468295 = PRIM_CDR(x4310580999);
Obj x4308468359 = PRIM_CDR(x4308468295);
Obj x4308468391 = PRIM_CAR(x4308468359);
Obj body = x4308468391;
Obj x4308468807 = PRIM_CDR(x4310580999);
Obj x4308468839 = PRIM_CDR(x4308468807);
Obj x4308468871 = PRIM_CDR(x4308468839);
Obj x4308468903 = PRIM_EQ(Nil, x4308468871);
if (True == x4308468903) {
R[1] = args;
struct frame1 __curr = {
.fn = clofun61,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), x4310580775, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310515367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310515367);
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
Obj x4310357511 = makeNative1(3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4309709767 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309709767) {
Obj x4309710183 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309710215 = PRIM_EQ(__symbolTable[75], x4309710183);
if (True == x4309710215) {
Obj x4309710663 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710695 = PRIM_ISCONS(x4309710663);
if (True == x4309710695) {
Obj x4309711015 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711047 = PRIM_CAR(x4309711015);
Obj val = x4309711047;
Obj x4309711527 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711559 = PRIM_CDR(x4309711527);
Obj x4309711591 = PRIM_ISCONS(x4309711559);
if (True == x4309711591) {
Obj x4309712071 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309712327 = PRIM_CDR(x4309712071);
Obj x4309712359 = PRIM_CAR(x4309712327);
Obj body = x4309712359;
Obj x4309712839 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309712871 = PRIM_CDR(x4309712839);
Obj x4308520967 = PRIM_CDR(x4309712871);
Obj x4308521063 = PRIM_EQ(Nil, x4308520967);
if (True == x4308521063) {
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
coraCall0(co, x4310357511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357511);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357511);
return;
}
}
case 1:
{
Obj x4308522535= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj x4308522567 = makeCons(x4308522535, fvs2);
Obj x4308522599 = makeCons(val, x4308522567);
Obj x4308522631 = makeCons(__symbolTable[62], x4308522599);
coraReturn(co, x4308522631);
return;
}
case 2:
{
Obj x4308522023= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = x4308522023;
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
Obj x4308521991= co->res;
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
coraCall2(co, globalRef(__symbolTable[92]), x4308521991, fvs1);
return;
}
case 4:
{
Obj x4308521479= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = x4308521479;
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
Obj x4308521447= co->res;
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
coraCall2(co, globalRef(__symbolTable[80]), x4308521447, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310359079 = makeNative1(3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4309749831 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309749831) {
Obj x4309750215 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309750247 = PRIM_EQ(__symbolTable[73], x4309750215);
if (True == x4309750247) {
Obj x4309750631 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751015 = PRIM_ISCONS(x4309750631);
if (True == x4309751015) {
Obj x4309751239 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751271 = PRIM_CAR(x4309751239);
Obj exp = x4309751271;
Obj x4309751879 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751911 = PRIM_CDR(x4309751879);
Obj x4309751943 = PRIM_ISCONS(x4309751911);
if (True == x4309751943) {
Obj x4309752359 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309752391 = PRIM_CDR(x4309752359);
Obj x4309752423 = PRIM_CAR(x4309752391);
Obj cont = x4309752423;
Obj x4309752903 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309752935 = PRIM_CDR(x4309752903);
Obj x4309752967 = PRIM_CDR(x4309752935);
Obj x4309753063 = PRIM_EQ(Nil, x4309752967);
if (True == x4309753063) {
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
coraCall0(co, x4310359079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310359079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310359079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310359079);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310359079);
return;
}
}
case 1:
{
Obj x4309753799= co->res;
Obj x4309753479 = R[1];
Obj x4309753831 = makeCons(x4309753799, Nil);
Obj x4309708871 = makeCons(x4309753479, x4309753831);
Obj x4309708903 = makeCons(__symbolTable[73], x4309708871);
coraReturn(co, x4309708903);
return;
}
case 2:
{
Obj x4309753479= co->res;
Obj cont = R[1];
R[1] = x4309753479;
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
Obj x4309753447= co->res;
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
coraCall2(co, globalRef(__symbolTable[92]), x4309753447, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4309797575 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309797575) {
Obj x4309797927 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4309797927;
Obj x4309798087 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4309798087;
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
Obj x4309798439= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4309798599 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4309798439, x4309798599);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311346247 = R[1];
Obj x4311346279 = R[2];
Obj x4311346311 = R[3];
Obj x4309806951 = PRIM_EQ(Nil, x4311346247);
if (True == x4309806951) {
R[1] = x4311346311;
struct frame1 __curr = {
.fn = clofun57,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), x4311346279);
return;
} else {
Obj x4309802887 = PRIM_ISCONS(x4311346247);
if (True == x4309802887) {
Obj x4309794919 = PRIM_CAR(x4311346247);
Obj hd = x4309794919;
Obj x4309795271 = PRIM_CDR(x4311346247);
Obj tl = x4309795271;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), hd, makeNative1(2, clofun56, 1, 3, tl, x4311346279, x4311346311));
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
Obj x4309802567= co->res;
Obj x4311396615 = R[1];
Obj x4309802599 = PRIM_EQ(x4309802567, __symbolTable[90]);
if (True == x4309802599) {
co->ctx.sp = R;
coraCall1(co, x4311396615, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4311396615, False);
return;
}
}
case 2:
{
Obj x4309802151= co->res;
Obj exp = R[1];
Obj x4311396615 = R[2];
if (True == x4309802151) {
R[1] = x4311396615;
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
coraCall1(co, x4311396615, False);
return;
}
}
case 3:
{
Obj x4309798919= co->res;
Obj x4311346311 = R[1];
Obj exp = x4309798919;
Obj x4311396615 = makeNative1(2, clofun55, 1, 2, exp, x4311346311);
Obj x4309802119 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x4311396615;
struct frame1 __curr = {
.fn = clofun57,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), x4309802119);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj x4309795655 = makeCons(hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), closureRef(R[0], 0), x4309795655, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396647 = R[1];
if (True == x4311396647) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x4309799847 = PRIM_EQ(closureRef(R[0], 1), globalRef(__symbolTable[70]));
if (True == x4309799847) {
Obj x4309800039 = makeCons(closureRef(R[0], 0), Nil);
Obj x4309800071 = makeCons(__symbolTable[74], x4309800039);
coraReturn(co, x4309800071);
return;
} else {
Obj x4309800519 = primGenSym();
Obj val = x4309800519;
Obj x4309800999 = makeCons(val, Nil);
R[1] = x4309800999;
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
Obj x4309801287= co->res;
Obj x4309800999 = R[1];
Obj x4309801319 = makeCons(x4309801287, Nil);
Obj x4309801351 = makeCons(x4309800999, x4309801319);
Obj x4309801447 = makeCons(__symbolTable[75], x4309801351);
Obj x4309801479 = makeCons(x4309801447, Nil);
Obj x4309801575 = makeCons(closureRef(R[0], 0), x4309801479);
Obj x4309801607 = makeCons(__symbolTable[73], x4309801575);
coraReturn(co, x4309801607);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311399239 = R[1];
Obj x4311399271 = R[2];
Obj x4311396519 = makeNative1(2, clofun53, 1, 2, x4311399239, x4311399271);
Obj x4309805863 = primIsSymbol(x4311399239);
if (True == x4309805863) {
co->ctx.sp = R;
coraCall1(co, x4311396519, True);
return;
} else {
R[1] = x4311396519;
struct frame1 __curr = {
.fn = clofun54,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4311399239);
return;
}
}
case 1:
{
Obj x4309806183= co->res;
Obj x4311396519 = R[1];
if (True == x4309806183) {
co->ctx.sp = R;
coraCall1(co, x4311396519, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4311396519, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396551 = R[1];
if (True == x4311396551) {
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
Obj x4308370375= co->res;
if (True == x4308370375) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj x4311400039 = makeNative1(1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4310359879 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310359879) {
Obj x4309831847 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309831879 = PRIM_EQ(__symbolTable[87], x4309831847);
if (True == x4309831879) {
Obj x4309832391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309832423 = PRIM_ISCONS(x4309832391);
if (True == x4309832423) {
Obj x4309832775 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309832807 = PRIM_CAR(x4309832775);
Obj a = x4309832807;
Obj x4309833383 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833415 = PRIM_CDR(x4309833383);
Obj x4309833447 = PRIM_ISCONS(x4309833415);
if (True == x4309833447) {
Obj x4309833895 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833927 = PRIM_CDR(x4309833895);
Obj x4309833959 = PRIM_CAR(x4309833927);
Obj b = x4309833959;
Obj x4309834727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834759 = PRIM_CDR(x4309834727);
Obj x4309834791 = PRIM_CDR(x4309834759);
Obj x4309834823 = PRIM_ISCONS(x4309834791);
if (True == x4309834823) {
Obj x4309835559 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309835591 = PRIM_CDR(x4309835559);
Obj x4309835623 = PRIM_CDR(x4309835591);
Obj x4309835655 = PRIM_CAR(x4309835623);
Obj c = x4309835655;
Obj x4309803559 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803591 = PRIM_CDR(x4309803559);
Obj x4309803687 = PRIM_CDR(x4309803591);
Obj x4309803719 = PRIM_CDR(x4309803687);
Obj x4309803751 = PRIM_EQ(Nil, x4309803719);
if (True == x4309803751) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative1(3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311400039);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400039);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400039);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400039);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400039);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400039);
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
Obj x4309804807= co->res;
Obj x4309804551 = R[1];
Obj ra = R[2];
Obj x4309804839 = makeCons(x4309804807, Nil);
Obj x4309804871 = makeCons(x4309804551, x4309804839);
Obj x4309804903 = makeCons(ra, x4309804871);
Obj x4309804935 = makeCons(__symbolTable[87], x4309804903);
coraReturn(co, x4309804935);
return;
}
case 2:
{
Obj x4309804551= co->res;
Obj ra = R[1];
R[1] = x4309804551;
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
Obj x4311343463 = makeNative1(1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4310515143 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310515143) {
Obj x4310515463 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310515495 = PRIM_EQ(__symbolTable[85], x4310515463);
if (True == x4310515495) {
Obj x4310356167 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310356199 = PRIM_ISCONS(x4310356167);
if (True == x4310356199) {
Obj x4310356583 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310356615 = PRIM_CAR(x4310356583);
Obj a = x4310356615;
Obj x4310357063 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357095 = PRIM_CDR(x4310357063);
Obj x4310357287 = PRIM_ISCONS(x4310357095);
if (True == x4310357287) {
Obj x4310357735 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310357767 = PRIM_CDR(x4310357735);
Obj x4310357863 = PRIM_CAR(x4310357767);
Obj b = x4310357863;
Obj x4310358279 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310358311 = PRIM_CDR(x4310358279);
Obj x4310358375 = PRIM_CDR(x4310358311);
Obj x4310358407 = PRIM_EQ(Nil, x4310358375);
if (True == x4310358407) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative1(2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311343463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343463);
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
Obj x4310358727 = primIsSymbol(ra);
if (True == x4310358727) {
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
Obj x4310359175= co->res;
Obj ra = R[1];
Obj x4310359207 = makeCons(x4310359175, Nil);
Obj x4310359239 = makeCons(ra, x4310359207);
Obj x4310359303 = makeCons(__symbolTable[85], x4310359239);
coraReturn(co, x4310359303);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311344103 = makeNative1(3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4311346791 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4311346791) {
Obj x4310577319 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310577351 = PRIM_EQ(__symbolTable[86], x4310577319);
if (True == x4310577351) {
Obj x4310577799 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310577831 = PRIM_ISCONS(x4310577799);
if (True == x4310577831) {
Obj x4310578183 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310578215 = PRIM_CAR(x4310578183);
Obj a = x4310578215;
Obj x4310578855 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310578951 = PRIM_CDR(x4310578855);
Obj x4310578983 = PRIM_ISCONS(x4310578951);
if (True == x4310578983) {
Obj x4310579431 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579559 = PRIM_CDR(x4310579431);
Obj x4310579591 = PRIM_CAR(x4310579559);
Obj b = x4310579591;
Obj x4310580135 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310580263 = PRIM_CDR(x4310580135);
Obj x4310580295 = PRIM_CDR(x4310580263);
Obj x4310580359 = PRIM_ISCONS(x4310580295);
if (True == x4310580359) {
Obj x4310581095 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310581191 = PRIM_CDR(x4310581095);
Obj x4310581223 = PRIM_CDR(x4310581191);
Obj x4310511623 = PRIM_CAR(x4310581223);
Obj c = x4310511623;
Obj x4310512391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310512519 = PRIM_CDR(x4310512391);
Obj x4310512551 = PRIM_CDR(x4310512519);
Obj x4310512583 = PRIM_CDR(x4310512551);
Obj x4310512615 = PRIM_EQ(Nil, x4310512583);
if (True == x4310512615) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), b, makeNative1(2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311344103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344103);
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
Obj x4310514023= co->res;
Obj rb = R[1];
Obj x4310514055 = makeCons(x4310514023, Nil);
Obj x4310514087 = makeCons(rb, x4310514055);
Obj x4310514119 = makeCons(closureRef(R[0], 0), x4310514087);
Obj x4310514279 = makeCons(__symbolTable[86], x4310514119);
coraReturn(co, x4310514279);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311344967 = makeNative1(1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4308371751 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308371751) {
Obj x4308371975 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308372007 = PRIM_EQ(__symbolTable[78], x4308371975);
if (True == x4308372007) {
Obj x4308372231 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308372263 = PRIM_ISCONS(x4308372231);
if (True == x4308372263) {
Obj x4308372551 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308372583 = PRIM_CAR(x4308372551);
Obj x4308372615 = PRIM_ISCONS(x4308372583);
if (True == x4308372615) {
Obj x4308372967 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308372999 = PRIM_CAR(x4308372967);
Obj x4308373031 = PRIM_CAR(x4308372999);
Obj x4308373063 = PRIM_EQ(__symbolTable[89], x4308373031);
if (True == x4308373063) {
Obj x4308373415 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308373447 = PRIM_CAR(x4308373415);
Obj x4308373479 = PRIM_CDR(x4308373447);
Obj x4308299783 = PRIM_ISCONS(x4308373479);
if (True == x4308299783) {
Obj x4311397575 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311397607 = PRIM_CAR(x4311397575);
Obj x4311397767 = PRIM_CDR(x4311397607);
Obj x4311397831 = PRIM_CAR(x4311397767);
Obj args = x4311397831;
Obj x4311398695 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311398727 = PRIM_CAR(x4311398695);
Obj x4311398759 = PRIM_CDR(x4311398727);
Obj x4311398791 = PRIM_CDR(x4311398759);
Obj x4311398855 = PRIM_ISCONS(x4311398791);
if (True == x4311398855) {
Obj x4311399655 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311399687 = PRIM_CAR(x4311399655);
Obj x4311399719 = PRIM_CDR(x4311399687);
Obj x4311399783 = PRIM_CDR(x4311399719);
Obj x4311399815 = PRIM_CAR(x4311399783);
Obj body = x4311399815;
Obj x4311343271 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311343335 = PRIM_CAR(x4311343271);
Obj x4311343399 = PRIM_CDR(x4311343335);
Obj x4311343431 = PRIM_CDR(x4311343399);
Obj x4311343655 = PRIM_CDR(x4311343431);
Obj x4311343687 = PRIM_EQ(Nil, x4311343655);
if (True == x4311343687) {
Obj x4311344167 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311344231 = PRIM_CDR(x4311344167);
Obj frees = x4311344231;
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
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344967);
return;
}
}
case 1:
{
Obj x4311345127= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj x4311345159 = makeCons(x4311345127, Nil);
Obj x4311345223 = makeCons(args, x4311345159);
Obj x4311345255 = makeCons(__symbolTable[89], x4311345223);
Obj x4311345287 = makeCons(x4311345255, frees);
Obj x4311345319 = makeCons(__symbolTable[78], x4311345287);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), x4311345319);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308371047 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308371047) {
Obj x4308371207 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4308371207;
Obj x4308371367 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308371367;
Obj x4308371527 = makeCons(f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), x4308371527, Nil, closureRef(R[0], 1));
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
Obj x4308369703 = makeCons(x, Nil);
Obj x4308369735 = makeCons(__symbolTable[72], x4308369703);
coraReturn(co, x4308369735);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396455 = R[1];
Obj x4311396487 = R[2];
R[1] = x4311396487;
R[2] = x4311396455;
struct frame1 __curr = {
.fn = clofun44,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4311396487);
return;
}
case 1:
{
Obj x4308470855= co->res;
Obj x4311396487 = R[1];
Obj pos = x4308470855;
Obj x4308471015 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x4308471015) {
coraReturn(co, x4311396487);
return;
} else {
Obj x4308471175 = makeCons(pos, Nil);
Obj x4308471207 = makeCons(__symbolTable[77], x4308471175);
coraReturn(co, x4308471207);
return;
}
}
case 2:
{
Obj x4308446759= co->res;
Obj x4308446567 = R[1];
Obj x4308446791 = makeCons(x4308446567, x4308446759);
Obj x4308446823 = makeCons(__symbolTable[78], x4308446791);
coraReturn(co, x4308446823);
return;
}
case 3:
{
Obj x4308446727= co->res;
Obj fvs1 = R[1];
Obj x4308446567 = R[2];
R[1] = x4308446567;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4308446727, fvs1);
return;
}
case 4:
{
Obj x4308446471= co->res;
Obj args = R[1];
Obj x4311396455 = R[2];
Obj fvs1 = R[3];
Obj x4308446503 = makeCons(x4308446471, Nil);
Obj x4308446535 = makeCons(args, x4308446503);
Obj x4308446567 = makeCons(__symbolTable[89], x4308446535);
R[1] = fvs1;
R[2] = x4308446567;
struct frame1 __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[71]), x4311396455);
return;
}
case 5:
{
Obj x4308446055= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x4311396455 = R[3];
Obj fvs1 = x4308446055;
R[1] = args;
R[2] = x4311396455;
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
Obj x4308470535= co->res;
Obj x4311396487 = R[1];
Obj x4311396455 = R[2];
if (True == x4308470535) {
coraReturn(co, x4311396487);
return;
} else {
Obj x4308470695 = primIsSymbol(x4311396487);
if (True == x4308470695) {
R[1] = x4311396487;
struct frame1 __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), x4311396487, x4311396455);
return;
} else {
Obj x4311397287 = makeNative1(3, clofun43, 0, 2, x4311396487, x4311396455);
Obj x4308443687 = PRIM_ISCONS(x4311396487);
if (True == x4308443687) {
Obj x4308443911 = PRIM_CAR(x4311396487);
Obj x4308443943 = PRIM_EQ(__symbolTable[89], x4308443911);
if (True == x4308443943) {
Obj x4308444167 = PRIM_CDR(x4311396487);
Obj x4308444199 = PRIM_ISCONS(x4308444167);
if (True == x4308444199) {
Obj x4308444423 = PRIM_CDR(x4311396487);
Obj x4308444455 = PRIM_CAR(x4308444423);
Obj args = x4308444455;
Obj x4308444743 = PRIM_CDR(x4311396487);
Obj x4308444775 = PRIM_CDR(x4308444743);
Obj x4308444807 = PRIM_ISCONS(x4308444775);
if (True == x4308444807) {
Obj x4308445095 = PRIM_CDR(x4311396487);
Obj x4308445127 = PRIM_CDR(x4308445095);
Obj x4308445159 = PRIM_CAR(x4308445127);
Obj body = x4308445159;
Obj x4308445511 = PRIM_CDR(x4311396487);
Obj x4308445543 = PRIM_CDR(x4308445511);
Obj x4308445575 = PRIM_CDR(x4308445543);
Obj x4308445607 = PRIM_EQ(Nil, x4308445575);
if (True == x4308445607) {
Obj x4308445959 = makeCons(body, Nil);
Obj x4308445991 = makeCons(args, x4308445959);
Obj x4308446023 = makeCons(__symbolTable[89], x4308445991);
R[1] = body;
R[2] = args;
R[3] = x4311396455;
struct frame1 __curr = {
.fn = clofun44,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), x4308446023);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311397287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397287);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397287);
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
Obj x4311397991 = makeNative1(3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x4308460135 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308460135) {
Obj x4308460359 = PRIM_CAR(closureRef(R[0], 0));
Obj x4308460391 = PRIM_EQ(__symbolTable[86], x4308460359);
if (True == x4308460391) {
Obj x4308460615 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460647 = PRIM_ISCONS(x4308460615);
if (True == x4308460647) {
Obj x4308460871 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308460903 = PRIM_CAR(x4308460871);
Obj a = x4308460903;
Obj x4308461191 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461223 = PRIM_CDR(x4308461191);
Obj x4308461255 = PRIM_ISCONS(x4308461223);
if (True == x4308461255) {
Obj x4308461543 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461575 = PRIM_CDR(x4308461543);
Obj x4308461607 = PRIM_CAR(x4308461575);
Obj b = x4308461607;
Obj x4308461959 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308461991 = PRIM_CDR(x4308461959);
Obj x4308462023 = PRIM_CDR(x4308461991);
Obj x4308462055 = PRIM_ISCONS(x4308462023);
if (True == x4308462055) {
Obj x4308462407 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308462439 = PRIM_CDR(x4308462407);
Obj x4308462471 = PRIM_CDR(x4308462439);
Obj x4308462503 = PRIM_CAR(x4308462471);
Obj c = x4308462503;
Obj x4308462919 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308462951 = PRIM_CDR(x4308462919);
Obj x4308462983 = PRIM_CDR(x4308462951);
Obj x4308463015 = PRIM_CDR(x4308462983);
Obj x4308463047 = PRIM_EQ(Nil, x4308463015);
if (True == x4308463047) {
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
coraCall0(co, x4311397991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311397991);
return;
}
}
case 1:
{
Obj x4308463495= co->res;
Obj x4308463335 = R[1];
Obj a = R[2];
Obj x4308463527 = makeCons(x4308463495, Nil);
Obj x4308463559 = makeCons(x4308463335, x4308463527);
Obj x4308463591 = makeCons(a, x4308463559);
Obj x4308443143 = makeCons(__symbolTable[86], x4308463591);
coraReturn(co, x4308443143);
return;
}
case 2:
{
Obj x4308463335= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = x4308463335;
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
Obj x4308471623 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308471623) {
Obj x4308471783 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4308471783;
Obj x4308459655 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4308459655;
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
Obj x4308459815= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x4308459911 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4308459815, x4308459911);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311344391 = R[1];
R[1] = x4311344391;
struct frame1 __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), x4311344391);
return;
}
case 1:
{
Obj x4308469831= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x4308469831, args);
return;
}
case 2:
{
Obj x4310358087= co->res;
Obj x4311344391 = R[1];
if (True == x4310358087) {
coraReturn(co, Nil);
return;
} else {
Obj x4310358247 = primIsSymbol(x4311344391);
if (True == x4310358247) {
Obj x4310358343 = makeCons(x4311344391, Nil);
coraReturn(co, x4310358343);
return;
} else {
Obj x4311344871 = makeNative1(1, clofun40, 0, 1, x4311344391);
Obj x4308524167 = PRIM_ISCONS(x4311344391);
if (True == x4308524167) {
Obj x4308524487 = PRIM_CAR(x4311344391);
Obj x4308524519 = PRIM_EQ(__symbolTable[89], x4308524487);
if (True == x4308524519) {
Obj x4308524807 = PRIM_CDR(x4311344391);
Obj x4308524839 = PRIM_ISCONS(x4308524807);
if (True == x4308524839) {
Obj x4308467783 = PRIM_CDR(x4311344391);
Obj x4308467815 = PRIM_CAR(x4308467783);
Obj args = x4308467815;
Obj x4308468135 = PRIM_CDR(x4311344391);
Obj x4308468167 = PRIM_CDR(x4308468135);
Obj x4308468199 = PRIM_ISCONS(x4308468167);
if (True == x4308468199) {
Obj x4308469159 = PRIM_CDR(x4311344391);
Obj x4308469191 = PRIM_CDR(x4308469159);
Obj x4308469223 = PRIM_CAR(x4308469191);
Obj body = x4308469223;
Obj x4308469575 = PRIM_CDR(x4311344391);
Obj x4308469607 = PRIM_CDR(x4308469575);
Obj x4308469639 = PRIM_CDR(x4308469607);
Obj x4308469671 = PRIM_EQ(Nil, x4308469639);
if (True == x4308469671) {
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
coraCall0(co, x4311344871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344871);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311344871);
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
Obj x4311345383 = makeNative1(1, clofun39, 0, 1, closureRef(R[0], 0));
Obj x4309711143 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309711143) {
Obj x4309711463 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309711495 = PRIM_EQ(__symbolTable[87], x4309711463);
if (True == x4309711495) {
Obj x4309711847 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711879 = PRIM_ISCONS(x4309711847);
if (True == x4309711879) {
Obj x4309712263 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309712295 = PRIM_CAR(x4309712263);
Obj x = x4309712295;
Obj x4309712583 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309712615 = PRIM_CDR(x4309712583);
Obj x4309712647 = PRIM_ISCONS(x4309712615);
if (True == x4309712647) {
Obj x4308521095 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308521127 = PRIM_CDR(x4308521095);
Obj x4308521159 = PRIM_CAR(x4308521127);
Obj y = x4308521159;
Obj x4308521639 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308521671 = PRIM_CDR(x4308521639);
Obj x4308521703 = PRIM_CDR(x4308521671);
Obj x4308521735 = PRIM_ISCONS(x4308521703);
if (True == x4308521735) {
Obj x4308522279 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522311 = PRIM_CDR(x4308522279);
Obj x4308522343 = PRIM_CDR(x4308522311);
Obj x4308522375 = PRIM_CAR(x4308522343);
Obj z = x4308522375;
Obj x4308522823 = PRIM_CDR(closureRef(R[0], 0));
Obj x4308522855 = PRIM_CDR(x4308522823);
Obj x4308522919 = PRIM_CDR(x4308522855);
Obj x4308522951 = PRIM_CDR(x4308522919);
Obj x4308522983 = PRIM_EQ(Nil, x4308522951);
if (True == x4308522983) {
Obj x4308523431 = makeCons(z, Nil);
Obj x4308523463 = makeCons(y, x4308523431);
Obj x4308523495 = makeCons(x, x4308523463);
struct frame1 __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4308523495);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311345383);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345383);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345383);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345383);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345383);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345383);
return;
}
}
case 1:
{
Obj x4308523527= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4308523527);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311345991 = makeNative1(3, clofun38, 0, 1, closureRef(R[0], 0));
Obj x4309752743 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309752743) {
Obj x4309752999 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309753031 = PRIM_EQ(__symbolTable[85], x4309752999);
if (True == x4309753031) {
Obj x4309753287 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309753319 = PRIM_ISCONS(x4309753287);
if (True == x4309753319) {
Obj x4309753575 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309753671 = PRIM_CAR(x4309753575);
Obj x = x4309753671;
Obj x4309708967 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309708999 = PRIM_CDR(x4309708967);
Obj x4309709031 = PRIM_ISCONS(x4309708999);
if (True == x4309709031) {
Obj x4309709447 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709479 = PRIM_CDR(x4309709447);
Obj x4309709543 = PRIM_CAR(x4309709479);
Obj y = x4309709543;
Obj x4309709927 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309709959 = PRIM_CDR(x4309709927);
Obj x4309709991 = PRIM_CDR(x4309709959);
Obj x4309710023 = PRIM_EQ(Nil, x4309709991);
if (True == x4309710023) {
Obj x4309710439 = makeCons(y, Nil);
Obj x4309710471 = makeCons(x, x4309710439);
struct frame1 __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4309710471);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311345991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345991);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311345991);
return;
}
}
case 1:
{
Obj x4309710503= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4309710503);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311346503 = makeNative1(1, clofun37, 0, 1, closureRef(R[0], 0));
Obj x4309796775 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309796775) {
Obj x4309797127 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309797159 = PRIM_EQ(__symbolTable[86], x4309797127);
if (True == x4309797159) {
Obj x4309797479 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797511 = PRIM_ISCONS(x4309797479);
if (True == x4309797511) {
Obj x4309797735 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797767 = PRIM_CAR(x4309797735);
Obj a = x4309797767;
Obj x4309798279 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309798311 = PRIM_CDR(x4309798279);
Obj x4309798343 = PRIM_ISCONS(x4309798311);
if (True == x4309798343) {
Obj x4309798727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309798759 = PRIM_CDR(x4309798727);
Obj x4309798791 = PRIM_CAR(x4309798759);
Obj b = x4309798791;
Obj x4309750023 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309750055 = PRIM_CDR(x4309750023);
Obj x4309750087 = PRIM_CDR(x4309750055);
Obj x4309750119 = PRIM_ISCONS(x4309750087);
if (True == x4309750119) {
Obj x4309750663 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309750695 = PRIM_CDR(x4309750663);
Obj x4309750727 = PRIM_CDR(x4309750695);
Obj x4309750759 = PRIM_CAR(x4309750727);
Obj c = x4309750759;
Obj x4309751431 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309751463 = PRIM_CDR(x4309751431);
Obj x4309751495 = PRIM_CDR(x4309751463);
Obj x4309751559 = PRIM_CDR(x4309751495);
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
coraCall0(co, x4311346503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346503);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311346503);
return;
}
}
case 1:
{
Obj x4309752103= co->res;
Obj x4309751783 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), x4309751783, x4309752103);
return;
}
case 2:
{
Obj x4309751975= co->res;
Obj a = R[1];
Obj x4309751783 = R[2];
Obj x4309752071 = makeCons(a, Nil);
R[1] = x4309751783;
struct frame1 __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), x4309751975, x4309752071);
return;
}
case 3:
{
Obj x4309751783= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = x4309751783;
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
Obj x4311347111 = makeNative1(1, clofun36, 0, 1, closureRef(R[0], 0));
Obj x4309794823 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309794823) {
Obj x4309795207 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309795239 = PRIM_EQ(__symbolTable[78], x4309795207);
if (True == x4309795239) {
Obj x4309795463 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795495 = PRIM_ISCONS(x4309795463);
if (True == x4309795495) {
Obj x4309795751 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309795783 = PRIM_CAR(x4309795751);
Obj lam = x4309795783;
Obj x4309796103 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309796135 = PRIM_CDR(x4309796103);
Obj more = x4309796135;
Obj x4309796391 = makeCons(lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x4309796391);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311347111);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311347111);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311347111);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310580647 = makeNative1(1, clofun35, 0, 1, closureRef(R[0], 0));
Obj x4309800871 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309800871) {
Obj x4309801191 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309801223 = PRIM_EQ(__symbolTable[72], x4309801191);
if (True == x4309801223) {
Obj x4309801511 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801543 = PRIM_ISCONS(x4309801511);
if (True == x4309801543) {
Obj x4309801831 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801863 = PRIM_CAR(x4309801831);
Obj x = x4309801863;
Obj x4309802247 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802279 = PRIM_CDR(x4309802247);
Obj x4309802407 = PRIM_EQ(Nil, x4309802279);
if (True == x4309802407) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310580647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310580647);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310513671 = makeNative1(1, clofun34, 0, 1, closureRef(R[0], 0));
Obj x4309805351 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309805351) {
Obj x4309805639 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309805671 = PRIM_EQ(__symbolTable[73], x4309805639);
if (True == x4309805671) {
Obj x4309805959 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805991 = PRIM_ISCONS(x4309805959);
if (True == x4309805991) {
Obj x4309806311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806343 = PRIM_CAR(x4309806311);
Obj exp = x4309806343;
Obj x4309806727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806759 = PRIM_CDR(x4309806727);
Obj x4309806919 = PRIM_ISCONS(x4309806759);
if (True == x4309806919) {
Obj x4309799015 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309799175 = PRIM_CDR(x4309799015);
Obj x4309799207 = PRIM_CAR(x4309799175);
Obj cont = x4309799207;
Obj x4309799719 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309799751 = PRIM_CDR(x4309799719);
Obj x4309799783 = PRIM_CDR(x4309799751);
Obj x4309799815 = PRIM_EQ(Nil, x4309799783);
if (True == x4309799815) {
Obj x4309800135 = makeCons(cont, Nil);
Obj x4309800167 = makeCons(exp, x4309800135);
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4309800167);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310513671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310513671);
return;
}
}
case 1:
{
Obj x4309800391= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4309800391);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310356135 = makeNative1(2, clofun33, 0, 1, closureRef(R[0], 0));
Obj x4309803271 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309803271) {
Obj x4309803623 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309803655 = PRIM_EQ(__symbolTable[74], x4309803623);
if (True == x4309803655) {
Obj x4309803911 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803943 = PRIM_ISCONS(x4309803911);
if (True == x4309803943) {
Obj x4309804391 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309804423 = PRIM_CAR(x4309804391);
Obj exp = x4309804423;
Obj x4309804711 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309804743 = PRIM_CDR(x4309804711);
Obj x4309804775 = PRIM_EQ(Nil, x4309804743);
if (True == x4309804775) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4310356135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356135);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310356135);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310357159 = makeNative1(1, clofun32, 0, 1, closureRef(R[0], 0));
Obj x4309832679 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309832679) {
Obj x4309832903 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309832935 = PRIM_EQ(__symbolTable[75], x4309832903);
if (True == x4309832935) {
Obj x4309833319 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833351 = PRIM_ISCONS(x4309833319);
if (True == x4309833351) {
Obj x4309833607 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309833639 = PRIM_CAR(x4309833607);
Obj arg = x4309833639;
Obj x4309833991 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834023 = PRIM_CDR(x4309833991);
Obj x4309834151 = PRIM_ISCONS(x4309834023);
if (True == x4309834151) {
Obj x4309834503 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834535 = PRIM_CDR(x4309834503);
Obj x4309834567 = PRIM_CAR(x4309834535);
Obj body = x4309834567;
Obj x4309835079 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309835111 = PRIM_CDR(x4309835079);
Obj x4309835143 = PRIM_CDR(x4309835111);
Obj x4309835175 = PRIM_EQ(Nil, x4309835143);
if (True == x4309835175) {
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
coraCall0(co, x4310357159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357159);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4310357159);
return;
}
}
case 1:
{
Obj x4309835463= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), x4309835463, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310359943 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310359943) {
Obj x4309831751 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x4309831751;
Obj x4309831975 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4309831975;
Obj x4309832295 = makeCons(f, args);
struct frame1 __curr = {
.fn = clofun32,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), x4309832295);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj x4309832359= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, x4309832359);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311398951 = R[1];
Obj x4311399047 = makeNative1(1, clofun30, 0, 1, x4311398951);
Obj x4310515527 = PRIM_ISCONS(x4311398951);
if (True == x4310515527) {
Obj x4310356039 = PRIM_CAR(x4311398951);
Obj x4310356103 = PRIM_EQ(__symbolTable[96], x4310356039);
if (True == x4310356103) {
Obj x4310356455 = PRIM_CDR(x4311398951);
Obj x4310356487 = PRIM_ISCONS(x4310356455);
if (True == x4310356487) {
Obj x4310356743 = PRIM_CDR(x4311398951);
Obj x4310356775 = PRIM_CAR(x4310356743);
Obj x4310357127 = PRIM_CDR(x4311398951);
Obj x4310357191 = PRIM_CDR(x4310357127);
Obj x4310357223 = PRIM_EQ(Nil, x4310357191);
if (True == x4310357223) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311399047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399047);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399047);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311399463 = makeNative1(1, clofun29, 0, 1, closureRef(R[0], 0));
Obj x4310513511 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310513511) {
Obj x4310513767 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310513799 = PRIM_EQ(__symbolTable[93], x4310513767);
if (True == x4310513799) {
Obj x4310514151 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310514247 = PRIM_ISCONS(x4310514151);
if (True == x4310514247) {
Obj x4310514535 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310514599 = PRIM_CAR(x4310514535);
Obj x4310514919 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310514951 = PRIM_CDR(x4310514919);
Obj x4310514983 = PRIM_EQ(Nil, x4310514951);
if (True == x4310514983) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311399463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399463);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311399879 = makeNative1(1, clofun28, 0, 1, closureRef(R[0], 0));
Obj x4310580327 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310580327) {
Obj x4310580711 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310580743 = PRIM_EQ(__symbolTable[90], x4310580711);
if (True == x4310580743) {
Obj x4310581127 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310581159 = PRIM_ISCONS(x4310581127);
if (True == x4310581159) {
Obj x4310511847 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310511879 = PRIM_CAR(x4310511847);
Obj x4310512263 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310512295 = PRIM_CDR(x4310512263);
Obj x4310512327 = PRIM_EQ(Nil, x4310512295);
if (True == x4310512327) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311399879);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399879);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399879);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311399879);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311400295 = makeNative1(1, clofun27, 0, 1, closureRef(R[0], 0));
Obj x4310578119 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310578119) {
Obj x4310578471 = PRIM_CAR(closureRef(R[0], 0));
Obj x4310578535 = PRIM_EQ(__symbolTable[84], x4310578471);
if (True == x4310578535) {
Obj x4310578887 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310578919 = PRIM_ISCONS(x4310578887);
if (True == x4310578919) {
Obj x4310579239 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579271 = PRIM_CAR(x4310579239);
Obj x4310579655 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310579687 = PRIM_CDR(x4310579655);
Obj x4310579719 = PRIM_EQ(Nil, x4310579687);
if (True == x4310579719) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311400295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400295);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311400295);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311343367 = makeNative1(2, clofun26, 0, 1, closureRef(R[0], 0));
Obj x4311345671 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4311345671) {
Obj x4311346023 = PRIM_CAR(closureRef(R[0], 0));
Obj x4311346087 = PRIM_EQ(__symbolTable[77], x4311346023);
if (True == x4311346087) {
Obj x4311346599 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311346631 = PRIM_ISCONS(x4311346599);
if (True == x4311346631) {
Obj x4311346951 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311346983 = PRIM_CAR(x4311346951);
Obj x4310577415 = PRIM_CDR(closureRef(R[0], 0));
Obj x4310577447 = PRIM_CDR(x4310577415);
Obj x4310577479 = PRIM_EQ(Nil, x4310577447);
if (True == x4310577479) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311343367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343367);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343367);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311343783 = makeNative1(1, clofun25, 0, 0);
Obj x4311343175 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4311343175) {
Obj x4311343495 = PRIM_CAR(closureRef(R[0], 0));
Obj x4311343623 = PRIM_EQ(__symbolTable[78], x4311343495);
if (True == x4311343623) {
Obj x4311344007 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311344039 = PRIM_ISCONS(x4311344007);
if (True == x4311344039) {
Obj x4311344327 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311344423 = PRIM_CAR(x4311344327);
Obj label = x4311344423;
Obj x4311344679 = PRIM_CDR(closureRef(R[0], 0));
Obj x4311344711 = PRIM_CDR(x4311344679);
R[1] = x4311343783;
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
coraCall0(co, x4311343783);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343783);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4311343783);
return;
}
}
case 1:
{
Obj x4311344999= co->res;
Obj x4311343783 = R[1];
if (True == x4311344999) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311343783);
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
Obj x4311397671 = R[1];
Obj x4311397703 = R[2];
Obj x4308468327 = PRIM_EQ(Nil, x4311397671);
if (True == x4308468327) {
coraReturn(co, Nil);
return;
} else {
Obj x4311398151 = makeNative1(2, clofun23, 0, 2, x4311397671, x4311397703);
Obj x4311397415 = PRIM_ISCONS(x4311397671);
if (True == x4311397415) {
Obj x4311397639 = PRIM_CAR(x4311397671);
Obj x = x4311397639;
Obj x4311397927 = PRIM_CDR(x4311397671);
Obj y = x4311397927;
R[1] = y;
R[2] = x4311397703;
R[3] = x4311398151;
struct frame1 __curr = {
.fn = clofun24,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, x4311397703);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311398151);
return;
}
}
}
case 1:
{
Obj x4311398343= co->res;
Obj y = R[1];
Obj x4311397703 = R[2];
Obj x4311398151 = R[3];
if (True == x4311398343) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), y, x4311397703);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311398151);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308468615 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308468615) {
Obj x4308468775 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4308468775;
Obj x4308468935 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4308468935;
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
Obj x4311396807= co->res;
Obj x = R[1];
Obj x4311396839 = makeCons(x, x4311396807);
coraReturn(co, x4311396839);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4311396391 = R[1];
Obj x4311396423 = R[2];
Obj x4308523591 = PRIM_EQ(Nil, x4311396391);
if (True == x4308523591) {
coraReturn(co, x4311396423);
return;
} else {
Obj x4311396871 = makeNative1(2, clofun21, 0, 2, x4311396391, x4311396423);
Obj x4308524615 = PRIM_ISCONS(x4311396391);
if (True == x4308524615) {
Obj x4308524775 = PRIM_CAR(x4311396391);
Obj x = x4308524775;
Obj x4308524935 = PRIM_CDR(x4311396391);
Obj y = x4308524935;
R[1] = y;
R[2] = x4311396423;
R[3] = x4311396871;
struct frame1 __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, x4311396423);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311396871);
return;
}
}
}
case 1:
{
Obj x4308467751= co->res;
Obj y = R[1];
Obj x4311396423 = R[2];
Obj x4311396871 = R[3];
if (True == x4308467751) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), y, x4311396423);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4311396871);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4308523879 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4308523879) {
Obj x4308524039 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x4308524039;
Obj x4308524199 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4308524199;
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
Obj x4308524359= co->res;
Obj x = R[1];
Obj x4308524391 = makeCons(x, x4308524359);
coraReturn(co, x4308524391);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307669447 = R[1];
Obj x4307669479 = R[2];
Obj x4307669511 = R[3];
Obj x4310514183 = makeNative1(2, clofun19, 1, 3, x4307669447, x4307669511, x4307669479);
R[1] = x4307669511;
R[2] = x4310514183;
struct frame1 __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), x4307669511);
return;
}
case 1:
{
Obj x4308523207= co->res;
Obj x4310514183 = R[1];
if (True == x4308523207) {
co->ctx.sp = R;
coraCall1(co, x4310514183, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x4310514183, False);
return;
}
}
case 2:
{
Obj x4308523047= co->res;
Obj x4307669511 = R[1];
Obj x4310514183 = R[2];
if (True == x4308523047) {
co->ctx.sp = R;
coraCall1(co, x4310514183, True);
return;
} else {
R[1] = x4310514183;
struct frame1 __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), x4307669511);
return;
}
}
case 3:
{
Obj x4308522727= co->res;
Obj x4307669511 = R[1];
Obj x4310514183 = R[2];
if (True == x4308522727) {
co->ctx.sp = R;
coraCall1(co, x4310514183, True);
return;
} else {
Obj x4308522887 = primIsString(x4307669511);
if (True == x4308522887) {
co->ctx.sp = R;
coraCall1(co, x4310514183, True);
return;
} else {
R[1] = x4307669511;
R[2] = x4310514183;
struct frame1 __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[82]), x4307669511);
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
Obj x4310514215 = R[1];
if (True == x4310514215) {
Obj x4310356903 = makeCons(closureRef(R[0], 1), Nil);
Obj x4310356935 = makeCons(__symbolTable[96], x4310356903);
coraReturn(co, x4310356935);
return;
} else {
Obj x4307670375 = makeNative1(3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj x4309712711 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x4309712711) {
Obj x4308520999 = PRIM_CAR(closureRef(R[0], 1));
Obj x4308521031 = PRIM_EQ(__symbolTable[84], x4308520999);
if (True == x4308521031) {
Obj x4308521255 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308521287 = PRIM_ISCONS(x4308521255);
if (True == x4308521287) {
Obj x4308521511 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308521543 = PRIM_CAR(x4308521511);
Obj x = x4308521543;
Obj x4308521831 = PRIM_CDR(closureRef(R[0], 1));
Obj x4308521863 = PRIM_CDR(x4308521831);
Obj x4308521895 = PRIM_EQ(Nil, x4308521863);
if (True == x4308521895) {
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
coraCall0(co, x4307670375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307670375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307670375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307670375);
return;
}
}
}
case 1:
{
Obj x4308522055= co->res;
Obj x = R[1];
Obj x4308522215 = makeCons(x, Nil);
Obj x4308522247 = makeCons(__symbolTable[96], x4308522215);
coraReturn(co, x4308522247);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4310357255 = primIsSymbol(closureRef(R[0], 0));
if (True == x4310357255) {
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
Obj x4307671943 = makeNative1(1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309753543 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309753543) {
Obj x4309710055 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309710087 = PRIM_EQ(__symbolTable[89], x4309710055);
if (True == x4309710087) {
Obj x4309710311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710343 = PRIM_ISCONS(x4309710311);
if (True == x4309710343) {
Obj x4309710567 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710599 = PRIM_CAR(x4309710567);
Obj args = x4309710599;
Obj x4309710887 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309710919 = PRIM_CDR(x4309710887);
Obj x4309710951 = PRIM_ISCONS(x4309710919);
if (True == x4309710951) {
Obj x4309711239 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711271 = PRIM_CDR(x4309711239);
Obj x4309711303 = PRIM_CAR(x4309711271);
Obj body = x4309711303;
Obj x4309711655 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309711687 = PRIM_CDR(x4309711655);
Obj x4309711719 = PRIM_CDR(x4309711687);
Obj x4309711751 = PRIM_EQ(Nil, x4309711719);
if (True == x4309711751) {
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
coraCall0(co, x4307671943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307671943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307671943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307671943);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307671943);
return;
}
}
}
case 1:
{
Obj x4310357607= co->res;
Obj x4310357799 = makeCons(closureRef(R[0], 0), Nil);
Obj x4310357831 = makeCons(__symbolTable[93], x4310357799);
coraReturn(co, x4310357831);
return;
}
case 2:
{
Obj x4310357415= co->res;
if (True == x4310357415) {
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
Obj x4309712135= co->res;
Obj args = R[1];
Obj x4309712167 = makeCons(x4309712135, Nil);
Obj x4309712199 = makeCons(args, x4309712167);
Obj x4309712231 = makeCons(__symbolTable[89], x4309712199);
coraReturn(co, x4309712231);
return;
}
case 4:
{
Obj x4309712103= co->res;
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
coraCall3(co, globalRef(__symbolTable[97]), x4309712103, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307672967 = makeNative1(2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309796583 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309796583) {
Obj x4309796807 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309796839 = PRIM_EQ(__symbolTable[87], x4309796807);
if (True == x4309796839) {
Obj x4309797063 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797095 = PRIM_ISCONS(x4309797063);
if (True == x4309797095) {
Obj x4309797383 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797415 = PRIM_CAR(x4309797383);
Obj x4309797447 = PRIM_ISCONS(x4309797415);
if (True == x4309797447) {
Obj x4309797799 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309797831 = PRIM_CAR(x4309797799);
Obj x4309797863 = PRIM_CAR(x4309797831);
Obj x4309797895 = PRIM_EQ(__symbolTable[87], x4309797863);
if (True == x4309797895) {
Obj x4309798183 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309798215 = PRIM_CAR(x4309798183);
Obj x4309798247 = PRIM_CDR(x4309798215);
Obj exp1 = x4309798247;
Obj x4309798471 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309798503 = PRIM_CDR(x4309798471);
Obj exp2 = x4309798503;
Obj x4309798663 = primGenSym();
Obj f = x4309798663;
Obj x4309798823 = primGenSym();
Obj v = x4309798823;
Obj x4309750151 = makeCons(v, Nil);
Obj x4309750375 = makeCons(v, exp2);
Obj x4309750407 = makeCons(__symbolTable[87], x4309750375);
Obj x4309750439 = makeCons(x4309750407, Nil);
Obj x4309750471 = makeCons(x4309750151, x4309750439);
Obj x4309750503 = makeCons(__symbolTable[89], x4309750471);
Obj x4309750791 = makeCons(__symbolTable[87], exp1);
Obj x4309750823 = makeCons(x4309750791, Nil);
Obj x4309750855 = makeCons(f, x4309750823);
Obj x4309750887 = makeCons(x4309750855, Nil);
Obj x4309750919 = makeCons(x4309750503, x4309750887);
Obj x4309750951 = makeCons(f, x4309750919);
Obj x4309750983 = makeCons(__symbolTable[86], x4309750951);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4309750983);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4307672967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307672967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307672967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307672967);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307672967);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307653671 = makeNative1(2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309795591 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309795591) {
Obj x4309795815 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309795847 = PRIM_EQ(__symbolTable[87], x4309795815);
if (True == x4309795847) {
Obj x4309796007 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4309796007;
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
coraCall0(co, x4307653671);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307653671);
return;
}
}
case 1:
{
Obj x4309796263= co->res;
Obj x4309796295 = makeCons(__symbolTable[87], x4309796263);
coraReturn(co, x4309796295);
return;
}
case 2:
{
Obj x4309796231= co->res;
Obj args = R[1];
struct frame1 __curr = {
.fn = clofun16,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4309796231, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307654375 = makeNative1(3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309800903 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309800903) {
Obj x4309801127 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309801159 = PRIM_EQ(__symbolTable[85], x4309801127);
if (True == x4309801159) {
Obj x4309801383 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801415 = PRIM_ISCONS(x4309801383);
if (True == x4309801415) {
Obj x4309801639 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801671 = PRIM_CAR(x4309801639);
Obj x = x4309801671;
Obj x4309801959 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309801991 = PRIM_CDR(x4309801959);
Obj x4309802023 = PRIM_ISCONS(x4309801991);
if (True == x4309802023) {
Obj x4309802311 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802343 = PRIM_CDR(x4309802311);
Obj x4309802375 = PRIM_CAR(x4309802343);
Obj y = x4309802375;
Obj x4309802727 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309802759 = PRIM_CDR(x4309802727);
Obj x4309802791 = PRIM_CDR(x4309802759);
Obj x4309802823 = PRIM_EQ(Nil, x4309802791);
if (True == x4309802823) {
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
coraCall0(co, x4307654375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307654375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307654375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307654375);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307654375);
return;
}
}
case 1:
{
Obj x4309795015= co->res;
Obj x4309794855 = R[1];
Obj x4309795047 = makeCons(x4309795015, Nil);
Obj x4309795079 = makeCons(x4309794855, x4309795047);
Obj x4309795111 = makeCons(__symbolTable[85], x4309795079);
coraReturn(co, x4309795111);
return;
}
case 2:
{
Obj x4309794855= co->res;
Obj y = R[1];
R[1] = x4309794855;
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
Obj x4307655463 = makeNative1(1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309804967 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309804967) {
Obj x4309805191 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309805223 = PRIM_EQ(__symbolTable[86], x4309805191);
if (True == x4309805223) {
Obj x4309805447 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805479 = PRIM_ISCONS(x4309805447);
if (True == x4309805479) {
Obj x4309805703 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309805735 = PRIM_CAR(x4309805703);
Obj a = x4309805735;
Obj x4309806023 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806055 = PRIM_CDR(x4309806023);
Obj x4309806087 = PRIM_ISCONS(x4309806055);
if (True == x4309806087) {
Obj x4309806375 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806407 = PRIM_CDR(x4309806375);
Obj x4309806439 = PRIM_CAR(x4309806407);
Obj b = x4309806439;
Obj x4309806791 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309806823 = PRIM_CDR(x4309806791);
Obj x4309806855 = PRIM_CDR(x4309806823);
Obj x4309806887 = PRIM_ISCONS(x4309806855);
if (True == x4309806887) {
Obj x4309799047 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309799079 = PRIM_CDR(x4309799047);
Obj x4309799111 = PRIM_CDR(x4309799079);
Obj x4309799143 = PRIM_CAR(x4309799111);
Obj c = x4309799143;
Obj x4309799559 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309799591 = PRIM_CDR(x4309799559);
Obj x4309799623 = PRIM_CDR(x4309799591);
Obj x4309799655 = PRIM_CDR(x4309799623);
Obj x4309799687 = PRIM_EQ(Nil, x4309799655);
if (True == x4309799687) {
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
coraCall0(co, x4307655463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307655463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307655463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307655463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307655463);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307655463);
return;
}
}
case 1:
{
Obj x4309800231= co->res;
Obj x4309799975 = R[1];
Obj a = R[2];
Obj x4309800263 = makeCons(x4309800231, Nil);
Obj x4309800295 = makeCons(x4309799975, x4309800263);
Obj x4309800327 = makeCons(a, x4309800295);
Obj x4309800359 = makeCons(__symbolTable[86], x4309800327);
coraReturn(co, x4309800359);
return;
}
case 2:
{
Obj x4309799975= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x4309800199 = makeCons(a, closureRef(R[0], 1));
R[1] = x4309799975;
R[2] = a;
struct frame1 __curr = {
.fn = clofun14,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), x4309800199, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307656487 = makeNative1(4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x4309833511 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309833511) {
Obj x4309833735 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309833767 = PRIM_ISCONS(x4309833735);
if (True == x4309833767) {
Obj x4309834055 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309834087 = PRIM_CAR(x4309834055);
Obj x4309834119 = PRIM_EQ(__symbolTable[89], x4309834087);
if (True == x4309834119) {
Obj x4309834343 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309834375 = PRIM_CDR(x4309834343);
Obj exp1 = x4309834375;
Obj x4309834599 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834631 = PRIM_ISCONS(x4309834599);
if (True == x4309834631) {
Obj x4309834919 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309834951 = PRIM_CAR(x4309834919);
Obj x4309834983 = PRIM_ISCONS(x4309834951);
if (True == x4309834983) {
Obj x4309835335 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309835367 = PRIM_CAR(x4309835335);
Obj x4309835399 = PRIM_CAR(x4309835367);
Obj x4309835431 = PRIM_EQ(__symbolTable[87], x4309835399);
if (True == x4309835431) {
Obj x4309835719 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309835751 = PRIM_CAR(x4309835719);
Obj x4309803015 = PRIM_CDR(x4309835751);
Obj exp2 = x4309803015;
Obj x4309803303 = PRIM_CDR(closureRef(R[0], 0));
Obj x4309803335 = PRIM_CDR(x4309803303);
Obj x4309803367 = PRIM_EQ(Nil, x4309803335);
if (True == x4309803367) {
Obj x4309803527 = primGenSym();
Obj f = x4309803527;
Obj x4309803879 = makeCons(__symbolTable[89], exp1);
Obj x4309804167 = makeCons(__symbolTable[87], exp2);
Obj x4309804199 = makeCons(x4309804167, Nil);
Obj x4309804231 = makeCons(f, x4309804199);
Obj x4309804263 = makeCons(x4309804231, Nil);
Obj x4309804295 = makeCons(x4309803879, x4309804263);
Obj x4309804327 = makeCons(f, x4309804295);
Obj x4309804359 = makeCons(__symbolTable[86], x4309804327);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4309804359);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307656487);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307645127 = makeNative1(1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj x4310359111 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4310359111) {
Obj x4310359271 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x4310359271;
Obj x4310359431 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x4310359431;
R[1] = op;
R[2] = args;
R[3] = x4307645127;
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
coraCall0(co, x4307645127);
return;
}
}
case 1:
{
Obj x4309832135= co->res;
Obj x4309831943 = R[1];
Obj x4309832167 = makeCons(x4309831943, x4309832135);
coraReturn(co, x4309832167);
return;
}
case 2:
{
Obj x4309832103= co->res;
Obj args = R[1];
Obj x4309831943 = R[2];
R[1] = x4309831943;
struct frame1 __curr = {
.fn = clofun12,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), x4309832103, args);
return;
}
case 3:
{
Obj x4309833063= co->res;
Obj tmp = R[1];
Obj x4309833095 = makeCons(x4309833063, Nil);
Obj x4309833127 = makeCons(tmp, x4309833095);
Obj x4309833159 = makeCons(__symbolTable[89], x4309833127);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), x4309833159);
return;
}
case 4:
{
Obj x4309832583= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = x4309832583;
Obj x4309833031 = makeCons(op, args);
R[1] = tmp;
struct frame1 __curr = {
.fn = clofun12,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[88]), x4309833031, tmp);
return;
}
case 5:
{
Obj x4310359911= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = x4310359911;
Obj x4309831687 = PRIM_EQ(required, provided);
if (True == x4309831687) {
Obj x4309831911 = makeCons(op, Nil);
Obj x4309831943 = makeCons(__symbolTable[90], x4309831911);
R[1] = args;
R[2] = x4309831943;
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
Obj x4309832327 = PRIM_GT(required, provided);
if (True == x4309832327) {
Obj x4309832551 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
struct frame1 __curr = {
.fn = clofun12,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x4309832551, Nil);
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
Obj x4310359751= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = x4310359751;
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
Obj x4310359591= co->res;
Obj op = R[1];
Obj args = R[2];
Obj x4307645127 = R[3];
if (True == x4310359591) {
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
coraCall0(co, x4307645127);
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
Obj x4310358919= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), x4310358919, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307688743 = R[1];
Obj x4307688775 = R[2];
Obj x4310515655 = PRIM_EQ(MAKE_NUMBER(0), x4307688743);
if (True == x4310515655) {
coraReturn(co, x4307688775);
return;
} else {
Obj x4310356071 = PRIM_SUB(x4307688743, MAKE_NUMBER(1));
Obj x4310356263 = primGenSym();
Obj x4310356295 = makeCons(x4310356263, x4307688775);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[98]), x4310356071, x4310356295);
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
Obj x4310515175= co->res;
Obj find = R[1];
if (True == x4310515175) {
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
Obj x4310515015= co->res;
Obj find = x4310515015;
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
Obj x4310514567= co->res;
Obj find = R[1];
if (True == x4310514567) {
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
Obj x4310514407= co->res;
Obj find = x4310514407;
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
Obj x4310513895= co->res;
Obj x4310513927 = primNot(x4310513895);
coraReturn(co, x4310513927);
return;
}
case 2:
{
Obj x4310513863= co->res;
struct frame1 __curr = {
.fn = clofun7,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), x4310513863);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307686567 = R[1];
Obj x4307686599 = R[2];
Obj x4311344615 = PRIM_EQ(Nil, x4307686599);
if (True == x4311344615) {
coraReturn(co, False);
return;
} else {
Obj x4311344807 = PRIM_ISCONS(x4307686599);
if (True == x4311344807) {
Obj x4311345031 = PRIM_CAR(x4307686599);
Obj hd = x4311345031;
Obj x4311345191 = PRIM_CDR(x4307686599);
Obj tl = x4311345191;
R[1] = x4307686567;
R[2] = tl;
struct frame1 __curr = {
.fn = clofun6,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), x4307686567, hd);
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
Obj x4311345479= co->res;
Obj x4307686567 = R[1];
Obj tl = R[2];
Obj x4311345511 = PRIM_LT(x4311345479, MAKE_NUMBER(0));
if (True == x4311345511) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[123]), x4307686567, tl);
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
Obj x4307693575 = R[1];
Obj x4307693639 = R[2];
Obj x4307694343 = R[3];
Obj x4311398823 = PRIM_EQ(Nil, x4307694343);
if (True == x4311398823) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x4307696391 = makeNative1(1, clofun3, 0, 3, x4307694343, x4307693575, x4307693639);
Obj x4311400263 = PRIM_ISCONS(x4307694343);
if (True == x4311400263) {
Obj x4311343143 = PRIM_CAR(x4307694343);
Obj a = x4311343143;
Obj x4311343303 = PRIM_CDR(x4307694343);
Obj x4311343527 = PRIM_EQ(x4307693639, a);
if (True == x4311343527) {
coraReturn(co, x4307693575);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4307696391);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307696391);
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
Obj x4311399399 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4311399399) {
Obj x4311399591 = PRIM_CAR(closureRef(R[0], 0));
Obj x4311399751 = PRIM_CDR(closureRef(R[0], 0));
Obj b = x4311399751;
Obj x4311399943 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[125]), x4311399943, closureRef(R[0], 2), b);
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
Obj x4307862823 = R[1];
Obj x4307862887 = R[2];
Obj x4307862919 = R[3];
Obj x4311397351 = PRIM_EQ(Nil, x4307862919);
if (True == x4311397351) {
coraReturn(co, x4307862887);
return;
} else {
Obj x4311397543 = PRIM_ISCONS(x4307862919);
if (True == x4311397543) {
Obj x4311397799 = PRIM_CAR(x4307862919);
Obj x = x4311397799;
Obj x4311398119 = PRIM_CDR(x4307862919);
Obj y = x4311398119;
R[1] = x4307862823;
R[2] = y;
struct frame1 __curr = {
.fn = clofun2,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, x4307862823, x4307862887, x);
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
Obj x4311398311= co->res;
Obj x4307862823 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), x4307862823, x4311398311, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x4307908711 = R[1];
Obj x4307908743 = R[2];
Obj x4309752199 = PRIM_EQ(Nil, x4307908743);
if (True == x4309752199) {
coraReturn(co, Nil);
return;
} else {
Obj x4307910087 = makeNative1(1, clofun0, 0, 2, x4307908743, x4307908711);
Obj x4309753095 = PRIM_ISCONS(x4307908743);
if (True == x4309753095) {
Obj x4309753607 = PRIM_CAR(x4307908743);
Obj x4309753639 = PRIM_ISCONS(x4309753607);
if (True == x4309753639) {
Obj x4309708807 = PRIM_CAR(x4307908743);
Obj x4309708839 = PRIM_CAR(x4309708807);
Obj x = x4309708839;
Obj x4309709063 = PRIM_CAR(x4307908743);
Obj x4309709095 = PRIM_CDR(x4309709063);
Obj y = x4309709095;
Obj x4309709255 = PRIM_CDR(x4307908743);
Obj x4309709415 = PRIM_EQ(x4307908711, x);
if (True == x4309709415) {
Obj x4309709511 = makeCons(x, y);
coraReturn(co, x4309709511);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x4307910087);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307910087);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x4307910087);
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
Obj x4309752487 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x4309752487) {
Obj x4309752647 = PRIM_CAR(closureRef(R[0], 0));
Obj x4309752807 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x4309752807;
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

