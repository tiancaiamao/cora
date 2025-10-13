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
Obj _3518623_37= co->res;
Obj _3518629_37 = primSet(co, __symbolTable[28], makeNative(3, clofun110, 2, 0));
Obj _3518635_37 = primSet(co, __symbolTable[27], makeNative(3, clofun111, 2, 0));
Obj _3518657_37 = primSet(co, __symbolTable[26], makeNative(7, clofun113, 3, 0));
Obj _3518675_37 = primSet(co, __symbolTable[25], makeNative(4, clofun115, 3, 0));
Obj _3518684_37 = primSet(co, __symbolTable[23], makeNative(4, clofun118, 3, 0));
Obj _3518725_37 = primSet(co, __symbolTable[22], makeNative(2, clofun123, 1, 0));
Obj _3518764_37 = primSet(co, __symbolTable[17], makeNative(5, clofun126, 4, 0));
Obj _3518816_37 = primSet(co, __symbolTable[9], makeNative(3, clofun131, 2, 0));
Obj _3518817_37 = primSet(co, __symbolTable[8], makeNative(3, clofun132, 2, 0));
Obj _3518831_37 = primSet(co, __symbolTable[6], makeNative(2, clofun140, 1, 0));
Obj _3518832_37 = primSet(co, __symbolTable[7], False);
Obj _3518845_37 = primSet(co, __symbolTable[5], makeNative(3, clofun142, 1, 0));
Obj _3518855_37 = primSet(co, __symbolTable[3], makeNative(4, clofun143, 2, 0));
coraReturn(co, _3518855_37);
return;
}
case 2:
{
Obj _3517177_37= co->res;
Obj _3517178_37 = primSet(co, __symbolTable[129], Nil);
Obj _3517193_37 = primSet(co, __symbolTable[128], makeNative(3, clofun1, 2, 0));
Obj _3517199_37 = primSet(co, __symbolTable[126], makeNative(4, clofun2, 3, 0));
Obj _3517209_37 = primSet(co, __symbolTable[125], makeNative(4, clofun4, 3, 0));
Obj _3517210_37 = primSet(co, __symbolTable[124], makeNative(3, clofun5, 2, 0));
Obj _3517217_37 = primSet(co, __symbolTable[123], makeNative(3, clofun6, 2, 0));
Obj _3517218_37 = makeCons(makeCString("primSet"), Nil);
Obj _3517219_37 = makeCons(MAKE_NUMBER(2), _3517218_37);
Obj _3517220_37 = makeCons(__symbolTable[121], _3517219_37);
Obj _3517221_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3517222_37 = makeCons(MAKE_NUMBER(1), _3517221_37);
Obj _3517223_37 = makeCons(__symbolTable[120], _3517222_37);
Obj _3517224_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3517225_37 = makeCons(MAKE_NUMBER(1), _3517224_37);
Obj _3517226_37 = makeCons(__symbolTable[119], _3517225_37);
Obj _3517227_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3517228_37 = makeCons(MAKE_NUMBER(2), _3517227_37);
Obj _3517229_37 = makeCons(__symbolTable[118], _3517228_37);
Obj _3517230_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3517231_37 = makeCons(MAKE_NUMBER(1), _3517230_37);
Obj _3517232_37 = makeCons(__symbolTable[117], _3517231_37);
Obj _3517233_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3517234_37 = makeCons(MAKE_NUMBER(2), _3517233_37);
Obj _3517235_37 = makeCons(__symbolTable[116], _3517234_37);
Obj _3517236_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3517237_37 = makeCons(MAKE_NUMBER(2), _3517236_37);
Obj _3517238_37 = makeCons(__symbolTable[115], _3517237_37);
Obj _3517239_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3517240_37 = makeCons(MAKE_NUMBER(2), _3517239_37);
Obj _3517241_37 = makeCons(__symbolTable[114], _3517240_37);
Obj _3517242_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3517243_37 = makeCons(MAKE_NUMBER(2), _3517242_37);
Obj _3517244_37 = makeCons(__symbolTable[113], _3517243_37);
Obj _3517245_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3517246_37 = makeCons(MAKE_NUMBER(2), _3517245_37);
Obj _3517247_37 = makeCons(__symbolTable[112], _3517246_37);
Obj _3517248_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3517249_37 = makeCons(MAKE_NUMBER(2), _3517248_37);
Obj _3517250_37 = makeCons(__symbolTable[111], _3517249_37);
Obj _3517251_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3517252_37 = makeCons(MAKE_NUMBER(2), _3517251_37);
Obj _3517253_37 = makeCons(__symbolTable[110], _3517252_37);
Obj _3517254_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3517255_37 = makeCons(MAKE_NUMBER(0), _3517254_37);
Obj _3517256_37 = makeCons(__symbolTable[109], _3517255_37);
Obj _3517257_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3517258_37 = makeCons(MAKE_NUMBER(1), _3517257_37);
Obj _3517259_37 = makeCons(__symbolTable[108], _3517258_37);
Obj _3517260_37 = makeCons(makeCString("primNot"), Nil);
Obj _3517261_37 = makeCons(MAKE_NUMBER(1), _3517260_37);
Obj _3517262_37 = makeCons(__symbolTable[107], _3517261_37);
Obj _3517263_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3517264_37 = makeCons(MAKE_NUMBER(1), _3517263_37);
Obj _3517265_37 = makeCons(__symbolTable[106], _3517264_37);
Obj _3517266_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3517267_37 = makeCons(MAKE_NUMBER(1), _3517266_37);
Obj _3517268_37 = makeCons(__symbolTable[105], _3517267_37);
Obj _3517269_37 = makeCons(_3517268_37, Nil);
Obj _3517270_37 = makeCons(_3517265_37, _3517269_37);
Obj _3517271_37 = makeCons(_3517262_37, _3517270_37);
Obj _3517272_37 = makeCons(_3517259_37, _3517271_37);
Obj _3517273_37 = makeCons(_3517256_37, _3517272_37);
Obj _3517274_37 = makeCons(_3517253_37, _3517273_37);
Obj _3517275_37 = makeCons(_3517250_37, _3517274_37);
Obj _3517276_37 = makeCons(_3517247_37, _3517275_37);
Obj _3517277_37 = makeCons(_3517244_37, _3517276_37);
Obj _3517278_37 = makeCons(_3517241_37, _3517277_37);
Obj _3517279_37 = makeCons(_3517238_37, _3517278_37);
Obj _3517280_37 = makeCons(_3517235_37, _3517279_37);
Obj _3517281_37 = makeCons(_3517232_37, _3517280_37);
Obj _3517282_37 = makeCons(_3517229_37, _3517281_37);
Obj _3517283_37 = makeCons(_3517226_37, _3517282_37);
Obj _3517284_37 = makeCons(_3517223_37, _3517283_37);
Obj _3517285_37 = makeCons(_3517220_37, _3517284_37);
Obj _3517286_37 = primSet(co, __symbolTable[122], _3517285_37);
Obj _3517290_37 = primSet(co, __symbolTable[104], makeNative(2, clofun7, 1, 0));
Obj _3517293_37 = primSet(co, __symbolTable[102], makeNative(2, clofun8, 1, 0));
Obj _3517296_37 = primSet(co, __symbolTable[100], makeNative(2, clofun9, 1, 0));
Obj _3517301_37 = primSet(co, __symbolTable[98], makeNative(3, clofun10, 2, 0));
Obj _3517495_37 = primSet(co, __symbolTable[97], makeNative(4, clofun20, 3, 0));
Obj _3517506_37 = primSet(co, __symbolTable[81], makeNative(4, clofun22, 2, 0));
Obj _3517517_37 = primSet(co, __symbolTable[80], makeNative(4, clofun24, 2, 0));
Obj _3517578_37 = primSet(co, __symbolTable[79], makeNative(2, clofun31, 1, 0));
Obj _3517753_37 = primSet(co, __symbolTable[76], makeNative(2, clofun41, 1, 0));
Obj _3517826_37 = primSet(co, __symbolTable[71], makeNative(4, clofun44, 2, 0));
Obj _3517829_37 = primSet(co, __symbolTable[70], makeNative(2, clofun45, 1, 0));
Obj _3517966_37 = primSet(co, __symbolTable[69], makeNative(3, clofun54, 2, 0));
Obj _3517989_37 = primSet(co, __symbolTable[68], makeNative(4, clofun57, 3, 0));
Obj _3518066_37 = primSet(co, __symbolTable[63], makeNative(3, clofun61, 2, 0));
Obj _3518097_37 = primSet(co, __symbolTable[61], makeNative(4, clofun65, 3, 0));
Obj _3518103_37 = primSet(co, __symbolTable[60], makeNative(5, clofun68, 4, 0));
Obj _3518108_37 = primSet(co, __symbolTable[58], makeNative(3, clofun70, 2, 0));
Obj _3518117_37 = primSet(co, __symbolTable[57], makeNative(2, clofun72, 1, 0));
Obj _3518168_37 = primSet(co, __symbolTable[56], makeNative(6, clofun74, 2, 0));
Obj _3518176_37 = primSet(co, __symbolTable[54], makeNative(4, clofun75, 2, 0));
Obj _3518183_37 = primSet(co, __symbolTable[66], makeNative(3, clofun76, 2, 0));
Obj _3518188_37 = primSet(co, __symbolTable[94], makeNative(4, clofun77, 2, 0));
Obj _3518194_37 = primSet(co, __symbolTable[51], makeNative(4, clofun78, 3, 0));
Obj _3518195_37 = primSet(co, __symbolTable[50], makeNative(3, clofun79, 2, 0));
Obj _3518202_37 = primSet(co, __symbolTable[49], makeNative(6, clofun81, 5, 0));
Obj _3518209_37 = primSet(co, __symbolTable[45], makeNative(6, clofun83, 5, 0));
Obj _3518560_37 = primSet(co, __symbolTable[46], makeNative(6, clofun96, 5, 0));
Obj _3518574_37 = primSet(co, __symbolTable[43], makeNative(6, clofun98, 5, 0));
Obj _3518596_37 = primSet(co, __symbolTable[40], makeNative(8, clofun100, 5, 0));
Obj _3518598_37 = primSet(co, __symbolTable[42], makeNative(3, clofun101, 2, 0));
Obj _3518602_37 = primSet(co, __symbolTable[39], makeNative(3, clofun102, 2, 0));
Obj _3518603_37 = primSet(co, __symbolTable[38], makeNative(3, clofun103, 2, 0));
Obj _3518604_37 = primSet(co, __symbolTable[37], makeNative(2, clofun104, 1, 0));
Obj _3518605_37 = primSet(co, __symbolTable[36], makeNative(2, clofun105, 1, 0));
Obj _3518606_37 = primSet(co, __symbolTable[35], makeNative(2, clofun106, 1, 0));
Obj _3518613_37 = primSet(co, __symbolTable[34], makeNative(3, clofun107, 1, 0));
Obj _3518620_37 = primSet(co, __symbolTable[32], makeNative(3, clofun108, 2, 0));
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
Obj _3517176_37= co->res;
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
Obj _3517175_37= co->res;
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
Obj _3518846_37 = primGenSym();
Obj globals = _3518846_37;
Obj _3518847_37 = primSet(co, globals, Nil);
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
Obj _3518854_37= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[0]), stream);
return;
}
case 2:
{
Obj _3518853_37= co->res;
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
coraCall3(co, globalRef(__symbolTable[23]), stream, bc, _3518853_37);
return;
}
case 3:
{
Obj _3518852_37= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = _3518852_37;
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
Obj _3518851_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = _3518851_37;
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
Obj _3518850_37= co->res;
Obj _3518848_37 = R[1];
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
coraCall1(co, _3518848_37, _3518850_37);
return;
}
case 6:
{
Obj _3518849_37= co->res;
Obj _3518848_37 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3518848_37;
R[2] = to;
R[3] = globals;
struct frame __curr = {
.fn = clofun143,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[2]), _3518849_37);
return;
}
case 7:
{
Obj _3518848_37= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = _3518848_37;
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
Obj _3518840_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 2:
{
Obj _3518839_37= co->res;
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
Obj _3518842_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 4:
{
Obj _3518841_37= co->res;
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
Obj _3518844_37= co->res;
Obj sexp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[6]), sexp);
return;
}
case 6:
{
Obj _3518843_37= co->res;
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
Obj _3518836_37= co->res;
Obj _3517173_37 = R[1];
Obj sexp = R[2];
if (True == _3518836_37) {
Obj _3518837_37 = PRIM_CAR(sexp);
Obj _3518838_37 = PRIM_EQ(__symbolTable[19], _3518837_37);
if (True == _3518838_37) {
R[1] = sexp;
struct frame __curr = {
.fn = clofun142,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3517173_37, True);
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
coraCall1(co, _3517173_37, False);
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
coraCall1(co, _3517173_37, False);
return;
}
}
case 8:
{
Obj _3518833_37= co->res;
Obj sexp = _3518833_37;
Obj _3517173_37 = makeNative(2, clofun141, 1, 1, sexp);
R[1] = _3517173_37;
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
Obj _3517174_37 = R[1];
if (True == _3517174_37) {
Obj _3518834_37 = PRIM_CDR(closureRef(R[0], 0));
coraReturn(co, _3518834_37);
return;
} else {
Obj _3518835_37 = makeCons(closureRef(R[0], 0), Nil);
coraReturn(co, _3518835_37);
return;
}
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517161_37 = R[1];
Obj _3517162_37 = makeNative(1, clofun137, 0, 1, _3517161_37);
Obj _3518826_37 = PRIM_ISCONS(_3517161_37);
if (True == _3518826_37) {
Obj _3518827_37 = PRIM_CAR(_3517161_37);
Obj _3518828_37 = PRIM_EQ(__symbolTable[18], _3518827_37);
if (True == _3518828_37) {
Obj _3518829_37 = PRIM_CDR(_3517161_37);
Obj more = _3518829_37;
Obj _3518830_37 = makeCons(__symbolTable[18], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), _3518830_37, makeNative(2, clofun139, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517162_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517162_37);
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
Obj _3517163_37 = makeNative(1, clofun134, 0, 1, closureRef(R[0], 0));
Obj _3518821_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518821_37) {
Obj _3518822_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518823_37 = PRIM_EQ(__symbolTable[19], _3518822_37);
if (True == _3518823_37) {
Obj _3518824_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518824_37;
Obj _3518825_37 = makeCons(__symbolTable[19], more);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[9]), _3518825_37, makeNative(2, clofun136, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517163_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517163_37);
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
Obj _3518818_37 = makeCons(closureRef(R[0], 0), Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), _3518818_37, Nil, Nil, makeNative(3, clofun133, 2, 0));
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
Obj _3518819_37= co->res;
Obj _3518820_37 = makeCons(__symbolTable[19], _3518819_37);
coraReturn(co, _3518820_37);
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
Obj _3517154_37 = R[1];
Obj _3517155_37 = R[2];
Obj _3517156_37 = makeNative(2, clofun130, 0, 2, _3517154_37, _3517155_37);
Obj _3518804_37 = PRIM_ISCONS(_3517154_37);
if (True == _3518804_37) {
Obj _3518805_37 = PRIM_CAR(_3517154_37);
Obj _3518806_37 = PRIM_EQ(__symbolTable[18], _3518805_37);
if (True == _3518806_37) {
Obj _3518807_37 = PRIM_CDR(_3517154_37);
Obj _3518808_37 = PRIM_ISCONS(_3518807_37);
if (True == _3518808_37) {
Obj _3518809_37 = PRIM_CDR(_3517154_37);
Obj _3518810_37 = PRIM_CAR(_3518809_37);
Obj name = _3518810_37;
Obj _3518811_37 = PRIM_CDR(_3517154_37);
Obj _3518812_37 = PRIM_CDR(_3518811_37);
Obj more = _3518812_37;
R[1] = name;
struct frame __curr = {
.fn = clofun131,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[9]), more, _3517155_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517156_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517156_37);
return;
}
}
case 1:
{
Obj _3518813_37= co->res;
Obj name = R[1];
Obj _3518814_37 = makeCons(name, _3518813_37);
Obj _3518815_37 = makeCons(__symbolTable[18], _3518814_37);
coraReturn(co, _3518815_37);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517157_37 = makeNative(2, clofun129, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518783_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518783_37) {
Obj _3518784_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518785_37 = PRIM_ISCONS(_3518784_37);
if (True == _3518785_37) {
Obj _3518786_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518787_37 = PRIM_CAR(_3518786_37);
Obj _3518788_37 = PRIM_EQ(__symbolTable[21], _3518787_37);
if (True == _3518788_37) {
Obj _3518789_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518790_37 = PRIM_CDR(_3518789_37);
Obj _3518791_37 = PRIM_ISCONS(_3518790_37);
if (True == _3518791_37) {
Obj _3518792_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518793_37 = PRIM_CDR(_3518792_37);
Obj _3518794_37 = PRIM_CAR(_3518793_37);
Obj pkg = _3518794_37;
Obj _3518795_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518796_37 = PRIM_CDR(_3518795_37);
Obj _3518797_37 = PRIM_CDR(_3518796_37);
Obj _3518798_37 = PRIM_EQ(Nil, _3518797_37);
if (True == _3518798_37) {
Obj _3518799_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518799_37;
Obj _3518800_37 = makeCons(pkg, Nil);
Obj _3518801_37 = makeCons(__symbolTable[21], _3518800_37);
R[1] = _3518801_37;
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
coraCall0(co, _3517157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517157_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517157_37);
return;
}
}
case 1:
{
Obj _3518802_37= co->res;
Obj _3518801_37 = R[1];
Obj _3518803_37 = makeCons(_3518801_37, _3518802_37);
coraReturn(co, _3518803_37);
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517158_37 = makeNative(1, clofun128, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518771_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518771_37) {
Obj _3518772_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518773_37 = PRIM_ISCONS(_3518772_37);
if (True == _3518773_37) {
Obj _3518774_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518775_37 = PRIM_CAR(_3518774_37);
Obj _3518776_37 = PRIM_EQ(__symbolTable[20], _3518775_37);
if (True == _3518776_37) {
Obj _3518777_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518778_37 = PRIM_CDR(_3518777_37);
Obj symbols = _3518778_37;
Obj _3518779_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518779_37;
Obj _3518780_37 = makeCons(__symbolTable[20], symbols);
R[1] = _3518780_37;
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
coraCall0(co, _3517158_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517158_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517158_37);
return;
}
}
case 1:
{
Obj _3518781_37= co->res;
Obj _3518780_37 = R[1];
Obj _3518782_37 = makeCons(_3518780_37, _3518781_37);
coraReturn(co, _3518782_37);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517159_37 = makeNative(1, clofun127, 0, 2, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3518765_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518765_37) {
Obj _3518766_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518767_37 = PRIM_EQ(__symbolTable[19], _3518766_37);
if (True == _3518767_37) {
Obj _3518768_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518768_37;
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
coraCall0(co, _3517159_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517159_37);
return;
}
}
case 1:
{
Obj _3518769_37= co->res;
Obj _3518770_37 = makeCons(__symbolTable[19], _3518769_37);
coraReturn(co, _3518770_37);
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
Obj _3517146_37 = R[1];
Obj _3517147_37 = R[2];
Obj _3517148_37 = R[3];
Obj _3517149_37 = R[4];
Obj _3518726_37 = PRIM_EQ(Nil, _3517146_37);
if (True == _3518726_37) {
R[1] = _3517148_37;
R[2] = _3517149_37;
struct frame __curr = {
.fn = clofun126,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), _3517147_37);
return;
} else {
Obj _3517151_37 = makeNative(1, clofun125, 0, 4, _3517146_37, _3517147_37, _3517148_37, _3517149_37);
Obj _3518753_37 = PRIM_ISCONS(_3517146_37);
if (True == _3518753_37) {
Obj _3518754_37 = PRIM_CAR(_3517146_37);
Obj _3518755_37 = PRIM_ISCONS(_3518754_37);
if (True == _3518755_37) {
Obj _3518756_37 = PRIM_CAR(_3517146_37);
Obj _3518757_37 = PRIM_CAR(_3518756_37);
Obj _3518758_37 = PRIM_EQ(__symbolTable[10], _3518757_37);
if (True == _3518758_37) {
Obj _3518759_37 = PRIM_CAR(_3517146_37);
Obj _3518760_37 = PRIM_CDR(_3518759_37);
Obj exp = _3518760_37;
Obj _3518761_37 = PRIM_CDR(_3517146_37);
Obj more = _3518761_37;
Obj _3518762_37 = makeCons(__symbolTable[19], exp);
Obj _3518763_37 = makeCons(_3518762_37, _3517147_37);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, _3518763_37, _3517148_37, _3517149_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517151_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517151_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517151_37);
return;
}
}
}
case 1:
{
Obj _3518728_37= co->res;
Obj _3517149_37 = R[1];
Obj _3518727_37 = R[2];
co->ctx.sp = R;
coraCall2(co, _3517149_37, _3518727_37, _3518728_37);
return;
}
case 2:
{
Obj _3518727_37= co->res;
Obj _3517148_37 = R[1];
Obj _3517149_37 = R[2];
R[1] = _3517149_37;
R[2] = _3518727_37;
struct frame __curr = {
.fn = clofun126,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), _3517148_37);
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517152_37 = makeNative(1, clofun124, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3518742_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518742_37) {
Obj _3518743_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518744_37 = PRIM_ISCONS(_3518743_37);
if (True == _3518744_37) {
Obj _3518745_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518746_37 = PRIM_CAR(_3518745_37);
Obj _3518747_37 = PRIM_EQ(__symbolTable[12], _3518746_37);
if (True == _3518747_37) {
Obj _3518748_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518749_37 = PRIM_CDR(_3518748_37);
Obj exp = _3518749_37;
Obj _3518750_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518750_37;
Obj _3518751_37 = makeCons(__symbolTable[11], exp);
Obj _3518752_37 = makeCons(_3518751_37, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, _3518752_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517152_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517152_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517152_37);
return;
}
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518729_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518729_37) {
Obj _3518730_37 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = _3518730_37;
Obj _3518731_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3518731_37;
Obj _3518732_37 = makeCons(exp, Nil);
Obj _3518733_37 = makeCons(__symbolTable[14], _3518732_37);
Obj _3518734_37 = makeCons(_3518733_37, Nil);
Obj _3518735_37 = makeCons(__symbolTable[15], _3518734_37);
Obj _3518736_37 = makeCons(__symbolTable[13], Nil);
Obj _3518737_37 = makeCons(_3518736_37, Nil);
Obj _3518738_37 = makeCons(_3518735_37, _3518737_37);
Obj _3518739_37 = makeCons(__symbolTable[16], _3518738_37);
Obj _3518740_37 = makeCons(_3518739_37, closureRef(R[0], 1));
Obj _3518741_37 = makeCons(exp, closureRef(R[0], 2));
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[17]), more, _3518740_37, _3518741_37, closureRef(R[0], 3));
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
Obj _3517140_37 = R[1];
Obj _3517141_37 = makeNative(1, clofun122, 0, 1, _3517140_37);
Obj _3518716_37 = PRIM_ISCONS(_3517140_37);
if (True == _3518716_37) {
Obj _3518717_37 = PRIM_CAR(_3517140_37);
Obj _3518718_37 = PRIM_EQ(__symbolTable[18], _3518717_37);
if (True == _3518718_37) {
Obj _3518719_37 = PRIM_CDR(_3517140_37);
Obj _3518720_37 = PRIM_ISCONS(_3518719_37);
if (True == _3518720_37) {
Obj _3518721_37 = PRIM_CDR(_3517140_37);
Obj _3518722_37 = PRIM_CAR(_3518721_37);
Obj _3518723_37 = PRIM_CDR(_3517140_37);
Obj _3518724_37 = PRIM_CDR(_3518723_37);
Obj remain = _3518724_37;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517141_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517141_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517141_37);
return;
}
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517142_37 = makeNative(1, clofun121, 0, 1, closureRef(R[0], 0));
Obj _3518712_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518712_37) {
Obj _3518713_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518714_37 = PRIM_EQ(__symbolTable[19], _3518713_37);
if (True == _3518714_37) {
Obj _3518715_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518715_37;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517142_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517142_37);
return;
}
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517143_37 = makeNative(2, clofun120, 0, 1, closureRef(R[0], 0));
Obj _3518703_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518703_37) {
Obj _3518704_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518705_37 = PRIM_ISCONS(_3518704_37);
if (True == _3518705_37) {
Obj _3518706_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518707_37 = PRIM_CAR(_3518706_37);
Obj _3518708_37 = PRIM_EQ(__symbolTable[20], _3518707_37);
if (True == _3518708_37) {
Obj _3518709_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518710_37 = PRIM_CDR(_3518709_37);
Obj _3518711_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518711_37;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[22]), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517143_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517143_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517143_37);
return;
}
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517144_37 = makeNative(1, clofun119, 0, 0);
Obj _3518685_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518685_37) {
Obj _3518686_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518687_37 = PRIM_ISCONS(_3518686_37);
if (True == _3518687_37) {
Obj _3518688_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518689_37 = PRIM_CAR(_3518688_37);
Obj _3518690_37 = PRIM_EQ(__symbolTable[21], _3518689_37);
if (True == _3518690_37) {
Obj _3518691_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518692_37 = PRIM_CDR(_3518691_37);
Obj _3518693_37 = PRIM_ISCONS(_3518692_37);
if (True == _3518693_37) {
Obj _3518694_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518695_37 = PRIM_CDR(_3518694_37);
Obj _3518696_37 = PRIM_CAR(_3518695_37);
Obj pkg = _3518696_37;
Obj _3518697_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518698_37 = PRIM_CDR(_3518697_37);
Obj _3518699_37 = PRIM_CDR(_3518698_37);
Obj _3518700_37 = PRIM_EQ(Nil, _3518699_37);
if (True == _3518700_37) {
Obj _3518701_37 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = _3518701_37;
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
coraCall0(co, _3517144_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517144_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517144_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517144_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517144_37);
return;
}
}
case 1:
{
Obj _3518702_37= co->res;
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
Obj _3518683_37= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), makeNative(2, clofun117, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj _3518682_37= co->res;
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
coraCall3(co, globalRef(__symbolTable[25]), to, globals, _3518682_37);
return;
}
case 3:
{
Obj _3518681_37= co->res;
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
Obj _3518680_37= co->res;
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
Obj _3518677_37= co->res;
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
Obj _3518676_37= co->res;
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
Obj _3518678_37 = PRIM_CAR(group);
struct frame __curr = {
.fn = clofun116,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[39]), closureRef(R[0], 0), _3518678_37);
return;
}
case 1:
{
Obj _3518679_37= co->res;
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
Obj _3518674_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj _3518673_37= co->res;
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
Obj _3518672_37= co->res;
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
Obj _3518671_37= co->res;
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
Obj _3518663_37= co->res;
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
Obj _3518662_37= co->res;
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
Obj _3518661_37= co->res;
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
coraCall2(co, globalRef(__symbolTable[47]), to, _3518661_37);
return;
}
case 8:
{
Obj _3518660_37= co->res;
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
Obj _3518659_37= co->res;
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
Obj _3518658_37= co->res;
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
Obj _3518669_37= co->res;
Obj acc = R[1];
Obj _3518670_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518670_37);
return;
}
case 2:
{
Obj _3518668_37= co->res;
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
Obj _3518667_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun114,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 0), _3518667_37);
return;
}
case 4:
{
Obj _3518666_37= co->res;
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
Obj _3518665_37= co->res;
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
Obj _3518664_37= co->res;
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
Obj _3518636_37 = PRIM_CAR(group);
Obj label = _3518636_37;
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
Obj _3518656_37= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), to, makeCString("}\n\n"));
return;
}
case 2:
{
Obj _3518655_37= co->res;
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
Obj _3518654_37= co->res;
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
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun112, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), _3518654_37);
return;
}
case 4:
{
Obj _3518646_37= co->res;
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
Obj _3518645_37= co->res;
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
Obj _3518644_37= co->res;
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
coraCall(co, globalRef(__symbolTable[46]), 5, globals, label, params, to, first_45stmt);
return;
}
case 7:
{
Obj _3518643_37= co->res;
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
coraCall(co, globalRef(__symbolTable[45]), 5, globals, label, Nil, to, params);
return;
}
case 8:
{
Obj _3518642_37= co->res;
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
Obj _3518641_37= co->res;
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
Obj _3518640_37= co->res;
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
Obj _3518639_37= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = _3518639_37;
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
Obj _3518638_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = _3518638_37;
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
Obj _3518637_37= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = _3518637_37;
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
Obj _3518652_37= co->res;
Obj acc = R[1];
Obj _3518653_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518653_37);
return;
}
case 2:
{
Obj _3518651_37= co->res;
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
Obj _3518650_37= co->res;
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
coraCall(co, globalRef(__symbolTable[40]), 5, closureRef(R[0], 0), closureRef(R[0], 1), _3518650_37, closureRef(R[0], 3), cont);
return;
}
case 4:
{
Obj _3518649_37= co->res;
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
Obj _3518648_37= co->res;
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
Obj _3518647_37= co->res;
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
Obj _3517136_37 = R[1];
Obj _3517137_37 = R[2];
Obj _3518630_37 = PRIM_EQ(Nil, _3517137_37);
if (True == _3518630_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518631_37 = PRIM_ISCONS(_3517137_37);
if (True == _3518631_37) {
Obj _3518632_37 = PRIM_CAR(_3517137_37);
Obj x = _3518632_37;
Obj _3518633_37 = PRIM_CDR(_3517137_37);
Obj y = _3518633_37;
R[1] = _3517136_37;
R[2] = y;
struct frame __curr = {
.fn = clofun111,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3517136_37, x);
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
Obj _3518634_37= co->res;
Obj _3517136_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[27]), _3517136_37, y);
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
Obj _3518628_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[34]), _3518628_37);
return;
}
case 2:
{
Obj _3518627_37= co->res;
struct frame __curr = {
.fn = clofun110,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[35]), _3518627_37);
return;
}
case 3:
{
Obj _3518626_37= co->res;
struct frame __curr = {
.fn = clofun110,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[36]), _3518626_37);
return;
}
case 4:
{
Obj _3518625_37= co->res;
struct frame __curr = {
.fn = clofun110,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[37]), _3518625_37);
return;
}
case 5:
{
Obj _3518624_37= co->res;
Obj exp = R[1];
struct frame __curr = {
.fn = clofun110,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, _3518624_37, exp);
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
Obj _3518622_37= co->res;
Obj obj = R[1];
Obj fns = _3518622_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), obj, fns);
return;
}
case 2:
{
Obj _3518621_37= co->res;
Obj exp = R[1];
Obj obj = _3518621_37;
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
Obj _3517132_37 = R[1];
Obj _3517133_37 = R[2];
Obj _3518614_37 = PRIM_EQ(Nil, _3517133_37);
if (True == _3518614_37) {
coraReturn(co, _3517132_37);
return;
} else {
Obj _3518615_37 = PRIM_ISCONS(_3517133_37);
if (True == _3518615_37) {
Obj _3518616_37 = PRIM_CAR(_3517133_37);
Obj hd = _3518616_37;
Obj _3518617_37 = PRIM_CDR(_3517133_37);
Obj more = _3518617_37;
Obj _3518618_37 = makeCons(_3517132_37, Nil);
Obj _3518619_37 = makeCons(hd, _3518618_37);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[32]), _3518619_37, more);
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
Obj _3518612_37= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[55]), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj _3518611_37= co->res;
Obj v = R[1];
Obj e2 = _3518611_37;
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
Obj _3518610_37= co->res;
Obj v = R[1];
Obj e1 = _3518610_37;
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
Obj _3518609_37= co->res;
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
Obj _3518608_37= co->res;
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
Obj _3518607_37= co->res;
Obj exp = R[1];
Obj v = _3518607_37;
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
Obj _3518601_37= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), w, makeCString(")"));
return;
}
case 2:
{
Obj _3518600_37= co->res;
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
Obj _3518599_37= co->res;
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
Obj _3518597_37= co->res;
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
Obj _3517126_37 = R[1];
Obj _3517127_37 = R[2];
Obj _3517128_37 = R[3];
Obj _3517129_37 = R[4];
Obj _3517130_37 = R[5];
Obj _3517131_37 = makeNative(1, clofun99, 0, 0);
Obj _3518575_37 = PRIM_ISCONS(_3517130_37);
if (True == _3518575_37) {
Obj _3518576_37 = PRIM_CAR(_3517130_37);
Obj _3518577_37 = PRIM_EQ(__symbolTable[62], _3518576_37);
if (True == _3518577_37) {
Obj _3518578_37 = PRIM_CDR(_3517130_37);
Obj _3518579_37 = PRIM_ISCONS(_3518578_37);
if (True == _3518579_37) {
Obj _3518580_37 = PRIM_CDR(_3517130_37);
Obj _3518581_37 = PRIM_CAR(_3518580_37);
Obj var = _3518581_37;
Obj _3518582_37 = PRIM_CDR(_3517130_37);
Obj _3518583_37 = PRIM_CDR(_3518582_37);
Obj _3518584_37 = PRIM_ISCONS(_3518583_37);
if (True == _3518584_37) {
Obj _3518585_37 = PRIM_CDR(_3517130_37);
Obj _3518586_37 = PRIM_CDR(_3518585_37);
Obj _3518587_37 = PRIM_CAR(_3518586_37);
Obj body = _3518587_37;
Obj _3518588_37 = PRIM_CDR(_3517130_37);
Obj _3518589_37 = PRIM_CDR(_3518588_37);
Obj _3518590_37 = PRIM_CDR(_3518589_37);
Obj fvs = _3518590_37;
R[1] = var;
R[2] = fvs;
R[3] = _3517126_37;
R[4] = _3517127_37;
R[5] = _3517128_37;
R[6] = _3517129_37;
R[7] = body;
struct frame __curr = {
.fn = clofun100,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), _3517129_37, makeCString("Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517131_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517131_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517131_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517131_37);
return;
}
}
case 1:
{
Obj _3518595_37= co->res;
Obj _3517126_37 = R[1];
Obj _3517127_37 = R[2];
Obj _3517128_37 = R[3];
Obj _3517129_37 = R[4];
Obj body = R[5];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[46]), 5, _3517126_37, _3517127_37, _3517128_37, _3517129_37, body);
return;
}
case 2:
{
Obj _3518594_37= co->res;
Obj fvs = R[1];
Obj _3517126_37 = R[2];
Obj _3517127_37 = R[3];
Obj _3517128_37 = R[4];
Obj _3517129_37 = R[5];
Obj body = R[6];
R[1] = _3517126_37;
R[2] = _3517127_37;
R[3] = _3517128_37;
R[4] = _3517129_37;
R[5] = body;
struct frame __curr = {
.fn = clofun100,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[45]), 5, _3517126_37, _3517127_37, _3517128_37, _3517129_37, fvs);
return;
}
case 3:
{
Obj _3518593_37= co->res;
Obj fvs = R[1];
Obj _3517126_37 = R[2];
Obj _3517127_37 = R[3];
Obj _3517128_37 = R[4];
Obj _3517129_37 = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = _3517126_37;
R[3] = _3517127_37;
R[4] = _3517128_37;
R[5] = _3517129_37;
R[6] = body;
struct frame __curr = {
.fn = clofun100,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), _3517129_37, makeCString("= co->res;\n"));
return;
}
case 4:
{
Obj _3518591_37= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj _3517126_37 = R[3];
Obj _3517127_37 = R[4];
Obj _3517128_37 = R[5];
Obj _3517129_37 = R[6];
Obj body = R[7];
Obj _3518592_37 = PRIM_CAR(var);
R[1] = fvs;
R[2] = _3517126_37;
R[3] = _3517127_37;
R[4] = _3517128_37;
R[5] = _3517129_37;
R[6] = body;
struct frame __curr = {
.fn = clofun100,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[44]), _3517129_37, _3518592_37);
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
Obj _3518561_37 = primGenSym();
Obj generate_45inst_45list_45h = _3518561_37;
Obj _3518572_37 = primSet(co, generate_45inst_45list_45h, makeNative(2, clofun97, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
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
Obj _3518573_37= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, _3518573_37, l);
return;
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3518562_37 = PRIM_EQ(Nil, x);
if (True == _3518562_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518563_37 = PRIM_ISCONS(x);
if (True == _3518563_37) {
Obj _3518564_37 = PRIM_CAR(x);
Obj a = _3518564_37;
Obj _3518565_37 = PRIM_CDR(x);
Obj b = _3518565_37;
R[1] = b;
struct frame __curr = {
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
Obj _3518570_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3518570_37, b);
return;
}
case 2:
{
Obj _3518569_37= co->res;
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
Obj _3518571_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, _3518571_37, b);
return;
}
case 4:
{
Obj _3518567_37= co->res;
Obj b = R[1];
Obj _3518568_37 = primNot(_3518567_37);
if (True == _3518568_37) {
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
Obj _3518566_37= co->res;
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
Obj _3518210_37 = primGenSym();
Obj generate_45inst_45h = _3518210_37;
Obj _3518558_37 = primSet(co, generate_45inst_45h, makeNative(3, clofun95, 2, 4, self, generate_45inst_45h, globals, w));
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
Obj _3518559_37= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, _3518559_37, x1, env1);
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
Obj _3518211_37 = primIsSymbol(x2);
if (True == _3518211_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[44]), closureRef(R[0], 3), x2);
return;
} else {
Obj _3517112_37 = makeNative(2, clofun94, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj _3518545_37 = PRIM_ISCONS(x2);
if (True == _3518545_37) {
Obj _3518546_37 = PRIM_CAR(x2);
Obj _3518547_37 = PRIM_EQ(__symbolTable[93], _3518546_37);
if (True == _3518547_37) {
Obj _3518548_37 = PRIM_CDR(x2);
Obj _3518549_37 = PRIM_ISCONS(_3518548_37);
if (True == _3518549_37) {
Obj _3518550_37 = PRIM_CDR(x2);
Obj _3518551_37 = PRIM_CAR(_3518550_37);
Obj x = _3518551_37;
Obj _3518552_37 = PRIM_CDR(x2);
Obj _3518553_37 = PRIM_CDR(_3518552_37);
Obj _3518554_37 = PRIM_EQ(Nil, _3518553_37);
if (True == _3518554_37) {
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
coraCall0(co, _3517112_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517112_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517112_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517112_37);
return;
}
}
}
case 1:
{
Obj _3518557_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 3), makeCString("])"));
return;
}
case 2:
{
Obj _3518556_37= co->res;
struct frame __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 3), _3518556_37);
return;
}
case 3:
{
Obj _3518555_37= co->res;
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
Obj _3517113_37 = makeNative(2, clofun93, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj _3518533_37 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == _3518533_37) {
Obj _3518534_37 = PRIM_CAR(closureRef(R[0], 4));
Obj _3518535_37 = PRIM_EQ(__symbolTable[77], _3518534_37);
if (True == _3518535_37) {
Obj _3518536_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3518537_37 = PRIM_ISCONS(_3518536_37);
if (True == _3518537_37) {
Obj _3518538_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3518539_37 = PRIM_CAR(_3518538_37);
Obj idx = _3518539_37;
Obj _3518540_37 = PRIM_CDR(closureRef(R[0], 4));
Obj _3518541_37 = PRIM_CDR(_3518540_37);
Obj _3518542_37 = PRIM_EQ(Nil, _3518541_37);
if (True == _3518542_37) {
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
coraCall0(co, _3517113_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517113_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517113_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517113_37);
return;
}
}
case 1:
{
Obj _3518544_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj _3518543_37= co->res;
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
Obj _3517114_37 = makeNative(4, clofun92, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3518509_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3518509_37) {
Obj _3518510_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3518511_37 = PRIM_EQ(__symbolTable[96], _3518510_37);
if (True == _3518511_37) {
Obj _3518512_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3518513_37 = PRIM_ISCONS(_3518512_37);
if (True == _3518513_37) {
Obj _3518514_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3518515_37 = PRIM_CAR(_3518514_37);
Obj x = _3518515_37;
Obj _3518516_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3518517_37 = PRIM_CDR(_3518516_37);
Obj _3518518_37 = PRIM_EQ(Nil, _3518517_37);
if (True == _3518518_37) {
Obj _3518519_37 = primIsSymbol(x);
if (True == _3518519_37) {
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
coraCall0(co, _3517114_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517114_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517114_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517114_37);
return;
}
}
case 1:
{
Obj _3518522_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("]"));
return;
}
case 2:
{
Obj _3518521_37= co->res;
struct frame __curr = {
.fn = clofun93,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), _3518521_37);
return;
}
case 3:
{
Obj _3518520_37= co->res;
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
Obj _3518525_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 5:
{
Obj _3518524_37= co->res;
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
Obj _3518529_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("\")"));
return;
}
case 7:
{
Obj _3518528_37= co->res;
struct frame __curr = {
.fn = clofun93,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), _3518528_37);
return;
}
case 8:
{
Obj _3518527_37= co->res;
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
Obj _3518523_37= co->res;
Obj x = R[1];
if (True == _3518523_37) {
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
Obj _3518526_37 = primIsString(x);
if (True == _3518526_37) {
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
Obj _3518530_37 = PRIM_EQ(x, Nil);
if (True == _3518530_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("Nil"));
return;
} else {
Obj _3518531_37 = PRIM_EQ(x, True);
if (True == _3518531_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("True"));
return;
} else {
Obj _3518532_37 = PRIM_EQ(x, False);
if (True == _3518532_37) {
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
Obj _3517115_37 = makeNative(3, clofun91, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3518466_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518466_37) {
Obj _3518467_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518468_37 = PRIM_EQ(__symbolTable[86], _3518467_37);
if (True == _3518468_37) {
Obj _3518469_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518470_37 = PRIM_ISCONS(_3518469_37);
if (True == _3518470_37) {
Obj _3518471_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518472_37 = PRIM_CAR(_3518471_37);
Obj a = _3518472_37;
Obj _3518473_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518474_37 = PRIM_CDR(_3518473_37);
Obj _3518475_37 = PRIM_ISCONS(_3518474_37);
if (True == _3518475_37) {
Obj _3518476_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518477_37 = PRIM_CDR(_3518476_37);
Obj _3518478_37 = PRIM_CAR(_3518477_37);
Obj b = _3518478_37;
Obj _3518479_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518480_37 = PRIM_CDR(_3518479_37);
Obj _3518481_37 = PRIM_CDR(_3518480_37);
Obj _3518482_37 = PRIM_ISCONS(_3518481_37);
if (True == _3518482_37) {
Obj _3518483_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518484_37 = PRIM_CDR(_3518483_37);
Obj _3518485_37 = PRIM_CDR(_3518484_37);
Obj _3518486_37 = PRIM_CAR(_3518485_37);
Obj c = _3518486_37;
Obj _3518487_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518488_37 = PRIM_CDR(_3518487_37);
Obj _3518489_37 = PRIM_CDR(_3518488_37);
Obj _3518490_37 = PRIM_CDR(_3518489_37);
Obj _3518491_37 = PRIM_EQ(Nil, _3518490_37);
if (True == _3518491_37) {
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
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
coraCall0(co, _3517115_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517115_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517115_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517115_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517115_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517115_37);
return;
}
}
case 1:
{
Obj _3518500_37= co->res;
Obj a = R[1];
Obj c = R[2];
Obj _3518501_37 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, _3518500_37, c, _3518501_37);
return;
}
case 2:
{
Obj _3518499_37= co->res;
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
Obj _3518498_37= co->res;
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
Obj _3518497_37= co->res;
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
coraCall2(co, _3518497_37, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj _3518496_37= co->res;
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
Obj _3518495_37= co->res;
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
Obj _3518494_37= co->res;
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
Obj _3518507_37= co->res;
Obj a = R[1];
Obj c = R[2];
Obj _3518508_37 = makeCons(a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, _3518507_37, c, _3518508_37);
return;
}
case 9:
{
Obj _3518506_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame __curr = {
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
Obj _3518505_37= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
struct frame __curr = {
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
Obj _3518504_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
struct frame __curr = {
.fn = clofun92,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518504_37, b, closureRef(R[0], 5));
return;
}
case 12:
{
Obj _3518503_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
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
Obj _3518502_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
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
Obj _3518492_37= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
Obj idx = _3518492_37;
Obj _3518493_37 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _3518493_37) {
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
} else {
Nil;
R[1] = b;
R[2] = a;
R[3] = c;
struct frame __curr = {
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
Obj _3517116_37 = makeNative(4, clofun90, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518442_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3518442_37) {
Obj _3518443_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518444_37 = PRIM_ISCONS(_3518443_37);
if (True == _3518444_37) {
Obj _3518445_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518446_37 = PRIM_CAR(_3518445_37);
Obj _3518447_37 = PRIM_EQ(__symbolTable[90], _3518446_37);
if (True == _3518447_37) {
Obj _3518448_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518449_37 = PRIM_CDR(_3518448_37);
Obj _3518450_37 = PRIM_ISCONS(_3518449_37);
if (True == _3518450_37) {
Obj _3518451_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518452_37 = PRIM_CDR(_3518451_37);
Obj _3518453_37 = PRIM_CAR(_3518452_37);
Obj f = _3518453_37;
Obj _3518454_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518455_37 = PRIM_CDR(_3518454_37);
Obj _3518456_37 = PRIM_CDR(_3518455_37);
Obj _3518457_37 = PRIM_EQ(Nil, _3518456_37);
if (True == _3518457_37) {
Obj _3518458_37 = PRIM_CDR(closureRef(R[0], 1));
Obj args = _3518458_37;
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
coraCall0(co, _3517116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517116_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517116_37);
return;
}
}
case 1:
{
Obj _3518463_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj _3518462_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518465_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 4:
{
Obj _3518464_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518460_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3518461_37 = PRIM_EQ(f, __symbolTable[121]);
if (True == _3518461_37) {
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
Obj _3518459_37= co->res;
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
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), _3518459_37);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517117_37 = makeNative(5, clofun89, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518407_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518407_37) {
Obj _3518408_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518409_37 = PRIM_EQ(__symbolTable[87], _3518408_37);
if (True == _3518409_37) {
Obj _3518410_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518411_37 = PRIM_ISCONS(_3518410_37);
if (True == _3518411_37) {
Obj _3518412_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518413_37 = PRIM_CAR(_3518412_37);
Obj a = _3518413_37;
Obj _3518414_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518415_37 = PRIM_CDR(_3518414_37);
Obj _3518416_37 = PRIM_ISCONS(_3518415_37);
if (True == _3518416_37) {
Obj _3518417_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518418_37 = PRIM_CDR(_3518417_37);
Obj _3518419_37 = PRIM_CAR(_3518418_37);
Obj b = _3518419_37;
Obj _3518420_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518421_37 = PRIM_CDR(_3518420_37);
Obj _3518422_37 = PRIM_CDR(_3518421_37);
Obj _3518423_37 = PRIM_ISCONS(_3518422_37);
if (True == _3518423_37) {
Obj _3518424_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518425_37 = PRIM_CDR(_3518424_37);
Obj _3518426_37 = PRIM_CDR(_3518425_37);
Obj _3518427_37 = PRIM_CAR(_3518426_37);
Obj c = _3518427_37;
Obj _3518428_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518429_37 = PRIM_CDR(_3518428_37);
Obj _3518430_37 = PRIM_CDR(_3518429_37);
Obj _3518431_37 = PRIM_CDR(_3518430_37);
Obj _3518432_37 = PRIM_EQ(Nil, _3518431_37);
if (True == _3518432_37) {
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
coraCall0(co, _3517117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517117_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517117_37);
return;
}
}
case 1:
{
Obj _3518441_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("}\n"));
return;
}
case 2:
{
Obj _3518440_37= co->res;
Obj c = R[1];
struct frame __curr = {
.fn = clofun90,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518440_37, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518439_37= co->res;
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
Obj _3518438_37= co->res;
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
Obj _3518437_37= co->res;
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
coraCall2(co, _3518437_37, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj _3518436_37= co->res;
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
Obj _3518435_37= co->res;
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
Obj _3518434_37= co->res;
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
coraCall2(co, _3518434_37, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj _3518433_37= co->res;
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
Obj _3517118_37 = makeNative(3, clofun88, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj _3518369_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3518369_37) {
Obj _3518370_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3518371_37 = PRIM_EQ(__symbolTable[78], _3518370_37);
if (True == _3518371_37) {
Obj _3518372_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518373_37 = PRIM_ISCONS(_3518372_37);
if (True == _3518373_37) {
Obj _3518374_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518375_37 = PRIM_CAR(_3518374_37);
Obj label = _3518375_37;
Obj _3518376_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518377_37 = PRIM_CDR(_3518376_37);
Obj _3518378_37 = PRIM_ISCONS(_3518377_37);
if (True == _3518378_37) {
Obj _3518379_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518380_37 = PRIM_CDR(_3518379_37);
Obj _3518381_37 = PRIM_CAR(_3518380_37);
Obj nargs = _3518381_37;
Obj _3518382_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518383_37 = PRIM_CDR(_3518382_37);
Obj _3518384_37 = PRIM_CDR(_3518383_37);
Obj _3518385_37 = PRIM_ISCONS(_3518384_37);
if (True == _3518385_37) {
Obj _3518386_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518387_37 = PRIM_CDR(_3518386_37);
Obj _3518388_37 = PRIM_CDR(_3518387_37);
Obj _3518389_37 = PRIM_CAR(_3518388_37);
Obj nframe = _3518389_37;
Obj _3518390_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3518391_37 = PRIM_CDR(_3518390_37);
Obj _3518392_37 = PRIM_CDR(_3518391_37);
Obj _3518393_37 = PRIM_CDR(_3518392_37);
Obj frees = _3518393_37;
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
coraCall0(co, _3517118_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517118_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517118_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517118_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517118_37);
return;
}
}
case 1:
{
Obj _3518406_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(")"));
return;
}
case 2:
{
Obj _3518405_37= co->res;
Obj frees = R[1];
struct frame __curr = {
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
Obj _3518403_37= co->res;
Obj frees = R[1];
Obj _3518404_37 = primNot(_3518403_37);
if (True == _3518404_37) {
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
Obj _3518402_37= co->res;
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
Obj _3518401_37= co->res;
Obj frees = R[1];
R[1] = frees;
struct frame __curr = {
.fn = clofun89,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[47]), closureRef(R[0], 5), _3518401_37);
return;
}
case 6:
{
Obj _3518400_37= co->res;
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
Obj _3518399_37= co->res;
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
Obj _3518398_37= co->res;
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
Obj _3518397_37= co->res;
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
Obj _3518396_37= co->res;
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
Obj _3518395_37= co->res;
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
Obj _3518394_37= co->res;
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
Obj _3517119_37 = makeNative(2, clofun87, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj _3518348_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518348_37) {
Obj _3518349_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518350_37 = PRIM_EQ(__symbolTable[85], _3518349_37);
if (True == _3518350_37) {
Obj _3518351_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518352_37 = PRIM_ISCONS(_3518351_37);
if (True == _3518352_37) {
Obj _3518353_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518354_37 = PRIM_CAR(_3518353_37);
Obj a = _3518354_37;
Obj _3518355_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518356_37 = PRIM_CDR(_3518355_37);
Obj _3518357_37 = PRIM_ISCONS(_3518356_37);
if (True == _3518357_37) {
Obj _3518358_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518359_37 = PRIM_CDR(_3518358_37);
Obj _3518360_37 = PRIM_CAR(_3518359_37);
Obj b = _3518360_37;
Obj _3518361_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518362_37 = PRIM_CDR(_3518361_37);
Obj _3518363_37 = PRIM_CDR(_3518362_37);
Obj _3518364_37 = PRIM_EQ(Nil, _3518363_37);
if (True == _3518364_37) {
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
coraCall0(co, _3517119_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517119_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517119_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517119_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517119_37);
return;
}
}
case 1:
{
Obj _3518368_37= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, _3518368_37, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj _3518367_37= co->res;
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
Obj _3518366_37= co->res;
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
Obj _3518365_37= co->res;
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
coraCall2(co, _3518365_37, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517120_37 = makeNative(2, clofun86, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518334_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518334_37) {
Obj _3518335_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518336_37 = PRIM_EQ(__symbolTable[72], _3518335_37);
if (True == _3518336_37) {
Obj _3518337_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518338_37 = PRIM_ISCONS(_3518337_37);
if (True == _3518338_37) {
Obj _3518339_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518340_37 = PRIM_CAR(_3518339_37);
Obj x = _3518340_37;
Obj _3518341_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518342_37 = PRIM_CDR(_3518341_37);
Obj _3518343_37 = PRIM_EQ(Nil, _3518342_37);
if (True == _3518343_37) {
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
coraCall0(co, _3517120_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517120_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517120_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517120_37);
return;
}
}
case 1:
{
Obj _3518347_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj _3518346_37= co->res;
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
Obj _3518345_37= co->res;
Obj x = R[1];
struct frame __curr = {
.fn = clofun87,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518345_37, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj _3518344_37= co->res;
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
Obj _3517121_37 = makeNative(3, clofun85, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518321_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3518321_37) {
Obj _3518322_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3518323_37 = PRIM_EQ(__symbolTable[74], _3518322_37);
if (True == _3518323_37) {
Obj _3518324_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518325_37 = PRIM_ISCONS(_3518324_37);
if (True == _3518325_37) {
Obj _3518326_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518327_37 = PRIM_CAR(_3518326_37);
Obj exp = _3518327_37;
Obj _3518328_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3518329_37 = PRIM_CDR(_3518328_37);
Obj _3518330_37 = PRIM_EQ(Nil, _3518329_37);
if (True == _3518330_37) {
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
coraCall0(co, _3517121_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517121_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517121_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517121_37);
return;
}
}
case 1:
{
Obj _3518333_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj _3518332_37= co->res;
Obj exp = R[1];
struct frame __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518332_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518331_37= co->res;
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
Obj _3517122_37 = makeNative(4, clofun84, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj _3518293_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518293_37) {
Obj _3518294_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518295_37 = PRIM_EQ(__symbolTable[73], _3518294_37);
if (True == _3518295_37) {
Obj _3518296_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518297_37 = PRIM_ISCONS(_3518296_37);
if (True == _3518297_37) {
Obj _3518298_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518299_37 = PRIM_CAR(_3518298_37);
Obj exp = _3518299_37;
Obj _3518300_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518301_37 = PRIM_CDR(_3518300_37);
Obj _3518302_37 = PRIM_ISCONS(_3518301_37);
if (True == _3518302_37) {
Obj _3518303_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518304_37 = PRIM_CDR(_3518303_37);
Obj _3518305_37 = PRIM_CAR(_3518304_37);
Obj label = _3518305_37;
Obj _3518306_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518307_37 = PRIM_CDR(_3518306_37);
Obj _3518308_37 = PRIM_CDR(_3518307_37);
Obj fvs = _3518308_37;
R[1] = label;
R[2] = exp;
struct frame __curr = {
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
coraCall0(co, _3517122_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517122_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517122_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517122_37);
return;
}
}
case 1:
{
Obj _3518320_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("return;\n"));
return;
}
case 2:
{
Obj _3518319_37= co->res;
Obj exp = R[1];
struct frame __curr = {
.fn = clofun85,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518319_37, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3518318_37= co->res;
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
Obj _3518317_37= co->res;
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
Obj _3518316_37= co->res;
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
Obj _3518315_37= co->res;
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
Obj _3518314_37= co->res;
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
Obj _3518313_37= co->res;
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
Obj _3518312_37= co->res;
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
Obj _3518311_37= co->res;
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
Obj _3518310_37= co->res;
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
Obj _3518309_37= co->res;
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
Obj _3518212_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518212_37) {
Obj _3518213_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518213_37;
Obj _3518214_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518214_37;
R[1] = f;
R[2] = args;
struct frame __curr = {
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
Obj _3518225_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 2:
{
Obj _3518224_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518222_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518223_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518223_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518221_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518228_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 6:
{
Obj _3518227_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518219_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518220_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518220_37) {
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518226_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518226_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518218_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518218_37, f, closureRef(R[0], 4));
return;
}
case 9:
{
Obj _3518217_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
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
Obj _3518238_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 11:
{
Obj _3518237_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518235_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518236_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518236_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518234_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518241_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 15:
{
Obj _3518240_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518232_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518233_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518233_37) {
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518239_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518239_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518231_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 16,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518231_37, f, closureRef(R[0], 4));
return;
}
case 18:
{
Obj _3518230_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
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
coraCall1(co, globalRef(__symbolTable[52]), closureRef(R[0], 1));
return;
}
case 19:
{
Obj _3518251_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 20:
{
Obj _3518250_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518248_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518249_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518249_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518247_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518254_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 24:
{
Obj _3518253_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518245_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518246_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518246_37) {
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518252_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518252_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518244_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 25,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518244_37, f, closureRef(R[0], 4));
return;
}
case 27:
{
Obj _3518243_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
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
Obj _3518264_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 29:
{
Obj _3518263_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518261_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518262_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518262_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518260_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518267_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 33:
{
Obj _3518266_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518258_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518259_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518259_37) {
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518265_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518265_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518257_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 34,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518257_37, f, closureRef(R[0], 4));
return;
}
case 36:
{
Obj _3518256_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
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
Obj _3518277_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 38:
{
Obj _3518276_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518274_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518275_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518275_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518273_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518280_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 42:
{
Obj _3518279_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518271_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518272_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518272_37) {
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518278_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518278_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518270_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 43,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518270_37, f, closureRef(R[0], 4));
return;
}
case 45:
{
Obj _3518269_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
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
Obj _3518289_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 47:
{
Obj _3518288_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518286_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518287_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518287_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518285_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518292_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString(");\n"));
return;
}
case 51:
{
Obj _3518291_37= co->res;
Obj args = R[1];
struct frame __curr = {
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
Obj _3518283_37= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj _3518284_37 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == _3518284_37) {
R[1] = nargs;
R[2] = args;
struct frame __curr = {
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
Obj _3518290_37 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == _3518290_37) {
R[1] = args;
struct frame __curr = {
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
Obj _3518282_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
struct frame __curr = {
.fn = clofun84,
.label = 52,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3518282_37, f, closureRef(R[0], 4));
return;
}
case 54:
{
Obj _3518281_37= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
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
Obj _3518215_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = _3518215_37;
Obj _3518216_37 = PRIM_EQ(nargs, MAKE_NUMBER(0));
if (True == _3518216_37) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall0(co, "));
return;
} else {
Obj _3518229_37 = PRIM_EQ(nargs, MAKE_NUMBER(1));
if (True == _3518229_37) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 18,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall1(co, "));
return;
} else {
Obj _3518242_37 = PRIM_EQ(nargs, MAKE_NUMBER(2));
if (True == _3518242_37) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 27,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall2(co, "));
return;
} else {
Obj _3518255_37 = PRIM_EQ(nargs, MAKE_NUMBER(3));
if (True == _3518255_37) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
.fn = clofun84,
.label = 36,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[48]), closureRef(R[0], 5), makeCString("coraCall3(co, "));
return;
} else {
Obj _3518268_37 = PRIM_EQ(nargs, MAKE_NUMBER(4));
if (True == _3518268_37) {
R[1] = f;
R[2] = nargs;
R[3] = args;
struct frame __curr = {
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
struct frame __curr = {
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
Obj _3518207_37= co->res;
Obj acc = R[1];
Obj _3518208_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518208_37);
return;
}
case 2:
{
Obj _3518206_37= co->res;
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
Obj _3518205_37= co->res;
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
Obj _3518204_37= co->res;
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
Obj _3518203_37= co->res;
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
Obj _3518200_37= co->res;
Obj acc = R[1];
Obj _3518201_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, _3518201_37);
return;
}
case 2:
{
Obj _3518199_37= co->res;
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
Obj _3518198_37= co->res;
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
coraCall(co, globalRef(__symbolTable[46]), 5, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v);
return;
}
case 4:
{
Obj _3518197_37= co->res;
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
Obj _3518196_37= co->res;
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
Obj _3518189_37= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == _3518189_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3518190_37 = PRIM_CAR(globals);
Obj _3518191_37 = PRIM_EQ(sym, _3518190_37);
if (True == _3518191_37) {
coraReturn(co, idx);
return;
} else {
Obj _3518192_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3518193_37 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[51]), _3518192_37, sym, _3518193_37);
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
Obj _3518185_37= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == _3518185_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3518186_37 = makeCons(sym, val);
Obj _3518187_37 = primSet(co, globals, _3518186_37);
coraReturn(co, _3518187_37);
return;
}
}
case 2:
{
Obj _3518184_37= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = _3518184_37;
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
Obj _3518177_37 = primGenSym();
Obj tmp = _3518177_37;
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
Obj _3518178_37= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj _3518179_37 = makeCons(_3518178_37, Nil);
Obj _3518180_37 = makeCons(x, _3518179_37);
Obj _3518181_37 = makeCons(tmp, _3518180_37);
Obj _3518182_37 = makeCons(__symbolTable[86], _3518181_37);
coraReturn(co, _3518182_37);
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
Obj _3518175_37= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj _3518170_37= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = _3518170_37;
Obj _3518171_37 = makeCons(val, Nil);
Obj _3518172_37 = makeCons(idx, _3518171_37);
Obj _3518173_37 = makeCons(_3518172_37, cur);
Obj cur1 = _3518173_37;
Obj _3518174_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
struct frame __curr = {
.fn = clofun75,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[53]), v, MAKE_NUMBER(0), _3518174_37);
return;
}
case 3:
{
Obj _3518169_37= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = _3518169_37;
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
Obj _3517107_37 = R[1];
Obj _3517108_37 = R[2];
Obj _3517109_37 = makeNative(1, clofun73, 0, 2, _3517107_37, _3517108_37);
Obj _3518120_37 = PRIM_ISCONS(_3517108_37);
if (True == _3518120_37) {
Obj _3518121_37 = PRIM_CAR(_3517108_37);
Obj _3518122_37 = PRIM_EQ(__symbolTable[78], _3518121_37);
if (True == _3518122_37) {
Obj _3518123_37 = PRIM_CDR(_3517108_37);
Obj _3518124_37 = PRIM_ISCONS(_3518123_37);
if (True == _3518124_37) {
Obj _3518125_37 = PRIM_CDR(_3517108_37);
Obj _3518126_37 = PRIM_CAR(_3518125_37);
Obj _3518127_37 = PRIM_ISCONS(_3518126_37);
if (True == _3518127_37) {
Obj _3518128_37 = PRIM_CDR(_3517108_37);
Obj _3518129_37 = PRIM_CAR(_3518128_37);
Obj _3518130_37 = PRIM_CAR(_3518129_37);
Obj _3518131_37 = PRIM_EQ(__symbolTable[89], _3518130_37);
if (True == _3518131_37) {
Obj _3518132_37 = PRIM_CDR(_3517108_37);
Obj _3518133_37 = PRIM_CAR(_3518132_37);
Obj _3518134_37 = PRIM_CDR(_3518133_37);
Obj _3518135_37 = PRIM_ISCONS(_3518134_37);
if (True == _3518135_37) {
Obj _3518136_37 = PRIM_CDR(_3517108_37);
Obj _3518137_37 = PRIM_CAR(_3518136_37);
Obj _3518138_37 = PRIM_CDR(_3518137_37);
Obj _3518139_37 = PRIM_CAR(_3518138_37);
Obj params = _3518139_37;
Obj _3518140_37 = PRIM_CDR(_3517108_37);
Obj _3518141_37 = PRIM_CAR(_3518140_37);
Obj _3518142_37 = PRIM_CDR(_3518141_37);
Obj _3518143_37 = PRIM_CDR(_3518142_37);
Obj _3518144_37 = PRIM_ISCONS(_3518143_37);
if (True == _3518144_37) {
Obj _3518145_37 = PRIM_CDR(_3517108_37);
Obj _3518146_37 = PRIM_CAR(_3518145_37);
Obj _3518147_37 = PRIM_CDR(_3518146_37);
Obj _3518148_37 = PRIM_CDR(_3518147_37);
Obj _3518149_37 = PRIM_CAR(_3518148_37);
Obj body = _3518149_37;
Obj _3518150_37 = PRIM_CDR(_3517108_37);
Obj _3518151_37 = PRIM_CAR(_3518150_37);
Obj _3518152_37 = PRIM_CDR(_3518151_37);
Obj _3518153_37 = PRIM_CDR(_3518152_37);
Obj _3518154_37 = PRIM_CDR(_3518153_37);
Obj _3518155_37 = PRIM_EQ(Nil, _3518154_37);
if (True == _3518155_37) {
Obj _3518156_37 = PRIM_CDR(_3517108_37);
Obj _3518157_37 = PRIM_CDR(_3518156_37);
Obj fvs = _3518157_37;
R[1] = _3517107_37;
R[2] = params;
R[3] = fvs;
struct frame __curr = {
.fn = clofun74,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), _3517107_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517109_37);
return;
}
}
case 1:
{
Obj _3518163_37= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj _3518164_37 = makeCons(nframe, fvs);
Obj _3518165_37 = makeCons(_3518163_37, _3518164_37);
Obj _3518166_37 = makeCons(cur, _3518165_37);
Obj _3518167_37 = makeCons(__symbolTable[78], _3518166_37);
coraReturn(co, _3518167_37);
return;
}
case 2:
{
Obj _3518162_37= co->res;
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
Obj _3518161_37= co->res;
Obj _3517107_37 = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = _3518161_37;
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
coraCall2(co, globalRef(__symbolTable[54]), _3517107_37, body2);
return;
}
case 4:
{
Obj _3518160_37= co->res;
Obj _3517107_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = _3518160_37;
R[1] = _3517107_37;
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
Obj _3518159_37= co->res;
Obj body1 = R[1];
Obj _3517107_37 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = _3518159_37;
R[1] = _3517107_37;
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
Obj _3518158_37= co->res;
Obj _3517107_37 = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = _3518158_37;
R[1] = body1;
R[2] = _3517107_37;
R[3] = params;
R[4] = fvs;
struct frame __curr = {
.fn = clofun74,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[55]), _3517107_37, MAKE_NUMBER(0));
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3518118_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3518118_37) {
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
Obj _3518119_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3518119_37, closureRef(R[0], 1));
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
Obj _3518116_37= co->res;
Obj _3518115_37 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), makeNative(3, clofun71, 2, 0), _3518115_37, _3518116_37);
return;
}
case 2:
{
Obj _3518110_37= co->res;
Obj lam = R[1];
Obj nargs = _3518110_37;
Obj _3518115_37 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = _3518115_37;
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
Obj _3518109_37= co->res;
Obj lam = R[1];
R[1] = lam;
struct frame __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), _3518109_37);
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
Obj _3518112_37= co->res;
Obj acc = R[1];
Obj _3518113_37 = PRIM_ADD(_3518112_37, MAKE_NUMBER(1));
Obj len = _3518113_37;
Obj _3518114_37 = PRIM_GT(len, acc);
if (True == _3518114_37) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj _3518111_37= co->res;
Obj acc = R[1];
R[1] = acc;
struct frame __curr = {
.fn = clofun71,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), _3518111_37);
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
Obj _3518104_37= co->res;
Obj body1 = R[1];
Obj _3518105_37 = makeCons(body1, _3518104_37);
Obj _3518106_37 = makeCons(closureRef(R[0], 0), _3518105_37);
Obj _3518107_37 = makeCons(__symbolTable[89], _3518106_37);
coraReturn(co, _3518107_37);
return;
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517101_37 = R[1];
Obj _3517102_37 = R[2];
Obj _3517103_37 = R[3];
Obj _3517104_37 = R[4];
Obj _3518098_37 = PRIM_EQ(Nil, _3517101_37);
if (True == _3518098_37) {
co->ctx.sp = R;
coraCall2(co, _3517104_37, _3517103_37, _3517102_37);
return;
} else {
Obj _3518099_37 = PRIM_ISCONS(_3517101_37);
if (True == _3518099_37) {
Obj _3518100_37 = PRIM_CAR(_3517101_37);
Obj f = _3518100_37;
Obj _3518101_37 = PRIM_CDR(_3517101_37);
Obj args = _3518101_37;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), f, _3517102_37, makeNative(3, clofun67, 2, 3, args, _3517103_37, _3517104_37));
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
Obj _3518102_37 = makeCons(closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3518102_37, conts2);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517095_37 = R[1];
Obj _3517096_37 = R[2];
Obj _3517097_37 = R[3];
Obj _3517171_37 = makeNative(2, clofun64, 1, 3, _3517095_37, _3517096_37, _3517097_37);
Obj _3518095_37 = primIsSymbol(_3517095_37);
if (True == _3518095_37) {
co->ctx.sp = R;
coraCall1(co, _3517171_37, True);
return;
} else {
R[1] = _3517171_37;
struct frame __curr = {
.fn = clofun65,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3517095_37);
return;
}
}
case 1:
{
Obj _3518096_37= co->res;
Obj _3517171_37 = R[1];
if (True == _3518096_37) {
co->ctx.sp = R;
coraCall1(co, _3517171_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517171_37, False);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517172_37 = R[1];
if (True == _3517172_37) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3517099_37 = makeNative(1, clofun62, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3518071_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518071_37) {
Obj _3518072_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518073_37 = PRIM_EQ(__symbolTable[73], _3518072_37);
if (True == _3518073_37) {
Obj _3518074_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518075_37 = PRIM_ISCONS(_3518074_37);
if (True == _3518075_37) {
Obj _3518076_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518077_37 = PRIM_CAR(_3518076_37);
Obj exp = _3518077_37;
Obj _3518078_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518079_37 = PRIM_CDR(_3518078_37);
Obj _3518080_37 = PRIM_ISCONS(_3518079_37);
if (True == _3518080_37) {
Obj _3518081_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518082_37 = PRIM_CDR(_3518081_37);
Obj _3518083_37 = PRIM_CAR(_3518082_37);
Obj cont = _3518083_37;
Obj _3518084_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518085_37 = PRIM_CDR(_3518084_37);
Obj _3518086_37 = PRIM_CDR(_3518085_37);
Obj _3518087_37 = PRIM_EQ(Nil, _3518086_37);
if (True == _3518087_37) {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[61]), cont, closureRef(R[0], 1), makeNative(4, clofun63, 2, 2, closureRef(R[0], 2), exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517099_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517099_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517099_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517099_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517099_37);
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
Obj _3518089_37= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj _3518090_37 = PRIM_ADD(_3518089_37, MAKE_NUMBER(1));
Obj _3518091_37 = makeCons(_3518090_37, fvs);
Obj _3518092_37 = makeCons(closureRef(R[0], 1), _3518091_37);
Obj _3518093_37 = makeCons(__symbolTable[73], _3518092_37);
Obj _3518094_37 = makeCons(cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), _3518093_37, _3518094_37);
return;
}
case 2:
{
Obj _3518088_37= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = _3518088_37;
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
Obj _3518067_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518067_37) {
Obj _3518068_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3518068_37;
Obj _3518069_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3518069_37;
Obj _3518070_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[60]), _3518070_37, closureRef(R[0], 1), Nil, closureRef(R[0], 2));
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
Obj _3517087_37 = R[1];
Obj _3517088_37 = R[2];
R[1] = _3517088_37;
R[2] = _3517087_37;
struct frame __curr = {
.fn = clofun61,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3517088_37);
return;
}
case 1:
{
Obj _3518062_37= co->res;
Obj args = R[1];
Obj _3518063_37 = makeCons(_3518062_37, Nil);
Obj _3518064_37 = makeCons(args, _3518063_37);
Obj _3518065_37 = makeCons(__symbolTable[89], _3518064_37);
coraReturn(co, _3518065_37);
return;
}
case 2:
{
Obj _3517990_37= co->res;
Obj _3517088_37 = R[1];
Obj _3517087_37 = R[2];
if (True == _3517990_37) {
coraReturn(co, _3517088_37);
return;
} else {
Obj _3517991_37 = primIsSymbol(_3517088_37);
if (True == _3517991_37) {
coraReturn(co, _3517088_37);
return;
} else {
Obj _3517091_37 = makeNative(4, clofun60, 0, 2, _3517088_37, _3517087_37);
Obj _3518045_37 = PRIM_ISCONS(_3517088_37);
if (True == _3518045_37) {
Obj _3518046_37 = PRIM_CAR(_3517088_37);
Obj _3518047_37 = PRIM_EQ(__symbolTable[89], _3518046_37);
if (True == _3518047_37) {
Obj _3518048_37 = PRIM_CDR(_3517088_37);
Obj _3518049_37 = PRIM_ISCONS(_3518048_37);
if (True == _3518049_37) {
Obj _3518050_37 = PRIM_CDR(_3517088_37);
Obj _3518051_37 = PRIM_CAR(_3518050_37);
Obj args = _3518051_37;
Obj _3518052_37 = PRIM_CDR(_3517088_37);
Obj _3518053_37 = PRIM_CDR(_3518052_37);
Obj _3518054_37 = PRIM_ISCONS(_3518053_37);
if (True == _3518054_37) {
Obj _3518055_37 = PRIM_CDR(_3517088_37);
Obj _3518056_37 = PRIM_CDR(_3518055_37);
Obj _3518057_37 = PRIM_CAR(_3518056_37);
Obj body = _3518057_37;
Obj _3518058_37 = PRIM_CDR(_3517088_37);
Obj _3518059_37 = PRIM_CDR(_3518058_37);
Obj _3518060_37 = PRIM_CDR(_3518059_37);
Obj _3518061_37 = PRIM_EQ(Nil, _3518060_37);
if (True == _3518061_37) {
R[1] = args;
struct frame __curr = {
.fn = clofun61,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[63]), _3517087_37, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517091_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517091_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517091_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517091_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517091_37);
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
Obj _3517092_37 = makeNative(3, clofun59, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3518020_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3518020_37) {
Obj _3518021_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3518022_37 = PRIM_EQ(__symbolTable[75], _3518021_37);
if (True == _3518022_37) {
Obj _3518023_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518024_37 = PRIM_ISCONS(_3518023_37);
if (True == _3518024_37) {
Obj _3518025_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518026_37 = PRIM_CAR(_3518025_37);
Obj val = _3518026_37;
Obj _3518027_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518028_37 = PRIM_CDR(_3518027_37);
Obj _3518029_37 = PRIM_ISCONS(_3518028_37);
if (True == _3518029_37) {
Obj _3518030_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518031_37 = PRIM_CDR(_3518030_37);
Obj _3518032_37 = PRIM_CAR(_3518031_37);
Obj body = _3518032_37;
Obj _3518033_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518034_37 = PRIM_CDR(_3518033_37);
Obj _3518035_37 = PRIM_CDR(_3518034_37);
Obj _3518036_37 = PRIM_EQ(Nil, _3518035_37);
if (True == _3518036_37) {
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
coraCall0(co, _3517092_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517092_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517092_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517092_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517092_37);
return;
}
}
case 1:
{
Obj _3518041_37= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj _3518042_37 = makeCons(_3518041_37, fvs2);
Obj _3518043_37 = makeCons(val, _3518042_37);
Obj _3518044_37 = makeCons(__symbolTable[62], _3518043_37);
coraReturn(co, _3518044_37);
return;
}
case 2:
{
Obj _3518040_37= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = _3518040_37;
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
Obj _3518039_37= co->res;
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
coraCall2(co, globalRef(__symbolTable[92]), _3518039_37, fvs1);
return;
}
case 4:
{
Obj _3518038_37= co->res;
Obj body = R[1];
Obj val = R[2];
Obj fvs1 = _3518038_37;
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
Obj _3518037_37= co->res;
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
coraCall2(co, globalRef(__symbolTable[80]), _3518037_37, val);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517093_37 = makeNative(3, clofun58, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517997_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517997_37) {
Obj _3517998_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517999_37 = PRIM_EQ(__symbolTable[73], _3517998_37);
if (True == _3517999_37) {
Obj _3518000_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518001_37 = PRIM_ISCONS(_3518000_37);
if (True == _3518001_37) {
Obj _3518002_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518003_37 = PRIM_CAR(_3518002_37);
Obj exp = _3518003_37;
Obj _3518004_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518005_37 = PRIM_CDR(_3518004_37);
Obj _3518006_37 = PRIM_ISCONS(_3518005_37);
if (True == _3518006_37) {
Obj _3518007_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518008_37 = PRIM_CDR(_3518007_37);
Obj _3518009_37 = PRIM_CAR(_3518008_37);
Obj cont = _3518009_37;
Obj _3518010_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3518011_37 = PRIM_CDR(_3518010_37);
Obj _3518012_37 = PRIM_CDR(_3518011_37);
Obj _3518013_37 = PRIM_EQ(Nil, _3518012_37);
if (True == _3518013_37) {
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
coraCall0(co, _3517093_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517093_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517093_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517093_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517093_37);
return;
}
}
case 1:
{
Obj _3518016_37= co->res;
Obj _3518015_37 = R[1];
Obj _3518017_37 = makeCons(_3518016_37, Nil);
Obj _3518018_37 = makeCons(_3518015_37, _3518017_37);
Obj _3518019_37 = makeCons(__symbolTable[73], _3518018_37);
coraReturn(co, _3518019_37);
return;
}
case 2:
{
Obj _3518015_37= co->res;
Obj cont = R[1];
R[1] = _3518015_37;
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
Obj _3518014_37= co->res;
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
coraCall2(co, globalRef(__symbolTable[92]), _3518014_37, exp);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517992_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517992_37) {
Obj _3517993_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517993_37;
Obj _3517994_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517994_37;
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
Obj _3517995_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517996_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3517995_37, _3517996_37);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517082_37 = R[1];
Obj _3517083_37 = R[2];
Obj _3517084_37 = R[3];
Obj _3517967_37 = PRIM_EQ(Nil, _3517082_37);
if (True == _3517967_37) {
R[1] = _3517084_37;
struct frame __curr = {
.fn = clofun57,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[67]), _3517083_37);
return;
} else {
Obj _3517985_37 = PRIM_ISCONS(_3517082_37);
if (True == _3517985_37) {
Obj _3517986_37 = PRIM_CAR(_3517082_37);
Obj hd = _3517986_37;
Obj _3517987_37 = PRIM_CDR(_3517082_37);
Obj tl = _3517987_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), hd, makeNative(2, clofun56, 1, 3, tl, _3517083_37, _3517084_37));
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
Obj _3517983_37= co->res;
Obj _3517169_37 = R[1];
Obj _3517984_37 = PRIM_EQ(_3517983_37, __symbolTable[90]);
if (True == _3517984_37) {
co->ctx.sp = R;
coraCall1(co, _3517169_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517169_37, False);
return;
}
}
case 2:
{
Obj _3517982_37= co->res;
Obj exp = R[1];
Obj _3517169_37 = R[2];
if (True == _3517982_37) {
R[1] = _3517169_37;
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
coraCall1(co, _3517169_37, False);
return;
}
}
case 3:
{
Obj _3517968_37= co->res;
Obj _3517084_37 = R[1];
Obj exp = _3517968_37;
Obj _3517169_37 = makeNative(2, clofun55, 1, 2, exp, _3517084_37);
Obj _3517981_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3517169_37;
struct frame __curr = {
.fn = clofun57,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[65]), _3517981_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj _3517988_37 = makeCons(hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), closureRef(R[0], 0), _3517988_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517170_37 = R[1];
if (True == _3517170_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[66]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3517969_37 = PRIM_EQ(closureRef(R[0], 1), globalRef(__symbolTable[70]));
if (True == _3517969_37) {
Obj _3517970_37 = makeCons(closureRef(R[0], 0), Nil);
Obj _3517971_37 = makeCons(__symbolTable[74], _3517970_37);
coraReturn(co, _3517971_37);
return;
} else {
Obj _3517972_37 = primGenSym();
Obj val = _3517972_37;
Obj _3517973_37 = makeCons(val, Nil);
R[1] = _3517973_37;
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
Obj _3517974_37= co->res;
Obj _3517973_37 = R[1];
Obj _3517975_37 = makeCons(_3517974_37, Nil);
Obj _3517976_37 = makeCons(_3517973_37, _3517975_37);
Obj _3517977_37 = makeCons(__symbolTable[75], _3517976_37);
Obj _3517978_37 = makeCons(_3517977_37, Nil);
Obj _3517979_37 = makeCons(closureRef(R[0], 0), _3517978_37);
Obj _3517980_37 = makeCons(__symbolTable[73], _3517979_37);
coraReturn(co, _3517980_37);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517073_37 = R[1];
Obj _3517074_37 = R[2];
Obj _3517167_37 = makeNative(2, clofun53, 1, 2, _3517073_37, _3517074_37);
Obj _3517964_37 = primIsSymbol(_3517073_37);
if (True == _3517964_37) {
co->ctx.sp = R;
coraCall1(co, _3517167_37, True);
return;
} else {
R[1] = _3517167_37;
struct frame __curr = {
.fn = clofun54,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3517073_37);
return;
}
}
case 1:
{
Obj _3517965_37= co->res;
Obj _3517167_37 = R[1];
if (True == _3517965_37) {
co->ctx.sp = R;
coraCall1(co, _3517167_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517167_37, False);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517168_37 = R[1];
if (True == _3517168_37) {
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
Obj _3517830_37= co->res;
if (True == _3517830_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
Obj _3517077_37 = makeNative(1, clofun51, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517932_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517932_37) {
Obj _3517933_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517934_37 = PRIM_EQ(__symbolTable[87], _3517933_37);
if (True == _3517934_37) {
Obj _3517935_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517936_37 = PRIM_ISCONS(_3517935_37);
if (True == _3517936_37) {
Obj _3517937_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517938_37 = PRIM_CAR(_3517937_37);
Obj a = _3517938_37;
Obj _3517939_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517940_37 = PRIM_CDR(_3517939_37);
Obj _3517941_37 = PRIM_ISCONS(_3517940_37);
if (True == _3517941_37) {
Obj _3517942_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517943_37 = PRIM_CDR(_3517942_37);
Obj _3517944_37 = PRIM_CAR(_3517943_37);
Obj b = _3517944_37;
Obj _3517945_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517946_37 = PRIM_CDR(_3517945_37);
Obj _3517947_37 = PRIM_CDR(_3517946_37);
Obj _3517948_37 = PRIM_ISCONS(_3517947_37);
if (True == _3517948_37) {
Obj _3517949_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517950_37 = PRIM_CDR(_3517949_37);
Obj _3517951_37 = PRIM_CDR(_3517950_37);
Obj _3517952_37 = PRIM_CAR(_3517951_37);
Obj c = _3517952_37;
Obj _3517953_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517954_37 = PRIM_CDR(_3517953_37);
Obj _3517955_37 = PRIM_CDR(_3517954_37);
Obj _3517956_37 = PRIM_CDR(_3517955_37);
Obj _3517957_37 = PRIM_EQ(Nil, _3517956_37);
if (True == _3517957_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative(3, clofun52, 1, 3, b, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517077_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517077_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517077_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517077_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517077_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517077_37);
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
Obj _3517959_37= co->res;
Obj _3517958_37 = R[1];
Obj ra = R[2];
Obj _3517960_37 = makeCons(_3517959_37, Nil);
Obj _3517961_37 = makeCons(_3517958_37, _3517960_37);
Obj _3517962_37 = makeCons(ra, _3517961_37);
Obj _3517963_37 = makeCons(__symbolTable[87], _3517962_37);
coraReturn(co, _3517963_37);
return;
}
case 2:
{
Obj _3517958_37= co->res;
Obj ra = R[1];
R[1] = _3517958_37;
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
Obj _3517078_37 = makeNative(1, clofun49, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517910_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517910_37) {
Obj _3517911_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517912_37 = PRIM_EQ(__symbolTable[85], _3517911_37);
if (True == _3517912_37) {
Obj _3517913_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517914_37 = PRIM_ISCONS(_3517913_37);
if (True == _3517914_37) {
Obj _3517915_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517916_37 = PRIM_CAR(_3517915_37);
Obj a = _3517916_37;
Obj _3517917_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517918_37 = PRIM_CDR(_3517917_37);
Obj _3517919_37 = PRIM_ISCONS(_3517918_37);
if (True == _3517919_37) {
Obj _3517920_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517921_37 = PRIM_CDR(_3517920_37);
Obj _3517922_37 = PRIM_CAR(_3517921_37);
Obj b = _3517922_37;
Obj _3517923_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517924_37 = PRIM_CDR(_3517923_37);
Obj _3517925_37 = PRIM_CDR(_3517924_37);
Obj _3517926_37 = PRIM_EQ(Nil, _3517925_37);
if (True == _3517926_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), a, makeNative(2, clofun50, 1, 2, b, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517078_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517078_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517078_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517078_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517078_37);
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
Obj _3517927_37 = primIsSymbol(ra);
if (True == _3517927_37) {
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
Obj _3517928_37= co->res;
Obj ra = R[1];
Obj _3517929_37 = makeCons(_3517928_37, Nil);
Obj _3517930_37 = makeCons(ra, _3517929_37);
Obj _3517931_37 = makeCons(__symbolTable[85], _3517930_37);
coraReturn(co, _3517931_37);
return;
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517079_37 = makeNative(3, clofun47, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517879_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517879_37) {
Obj _3517880_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517881_37 = PRIM_EQ(__symbolTable[86], _3517880_37);
if (True == _3517881_37) {
Obj _3517882_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517883_37 = PRIM_ISCONS(_3517882_37);
if (True == _3517883_37) {
Obj _3517884_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517885_37 = PRIM_CAR(_3517884_37);
Obj a = _3517885_37;
Obj _3517886_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517887_37 = PRIM_CDR(_3517886_37);
Obj _3517888_37 = PRIM_ISCONS(_3517887_37);
if (True == _3517888_37) {
Obj _3517889_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517890_37 = PRIM_CDR(_3517889_37);
Obj _3517891_37 = PRIM_CAR(_3517890_37);
Obj b = _3517891_37;
Obj _3517892_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517893_37 = PRIM_CDR(_3517892_37);
Obj _3517894_37 = PRIM_CDR(_3517893_37);
Obj _3517895_37 = PRIM_ISCONS(_3517894_37);
if (True == _3517895_37) {
Obj _3517896_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517897_37 = PRIM_CDR(_3517896_37);
Obj _3517898_37 = PRIM_CDR(_3517897_37);
Obj _3517899_37 = PRIM_CAR(_3517898_37);
Obj c = _3517899_37;
Obj _3517900_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517901_37 = PRIM_CDR(_3517900_37);
Obj _3517902_37 = PRIM_CDR(_3517901_37);
Obj _3517903_37 = PRIM_CDR(_3517902_37);
Obj _3517904_37 = PRIM_EQ(Nil, _3517903_37);
if (True == _3517904_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[69]), b, makeNative(2, clofun48, 1, 3, a, c, closureRef(R[0], 1)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517079_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517079_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517079_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517079_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517079_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517079_37);
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
Obj _3517905_37= co->res;
Obj rb = R[1];
Obj _3517906_37 = makeCons(_3517905_37, Nil);
Obj _3517907_37 = makeCons(rb, _3517906_37);
Obj _3517908_37 = makeCons(closureRef(R[0], 0), _3517907_37);
Obj _3517909_37 = makeCons(__symbolTable[86], _3517908_37);
coraReturn(co, _3517909_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517080_37 = makeNative(1, clofun46, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517835_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517835_37) {
Obj _3517836_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517837_37 = PRIM_EQ(__symbolTable[78], _3517836_37);
if (True == _3517837_37) {
Obj _3517838_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517839_37 = PRIM_ISCONS(_3517838_37);
if (True == _3517839_37) {
Obj _3517840_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517841_37 = PRIM_CAR(_3517840_37);
Obj _3517842_37 = PRIM_ISCONS(_3517841_37);
if (True == _3517842_37) {
Obj _3517843_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517844_37 = PRIM_CAR(_3517843_37);
Obj _3517845_37 = PRIM_CAR(_3517844_37);
Obj _3517846_37 = PRIM_EQ(__symbolTable[89], _3517845_37);
if (True == _3517846_37) {
Obj _3517847_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517848_37 = PRIM_CAR(_3517847_37);
Obj _3517849_37 = PRIM_CDR(_3517848_37);
Obj _3517850_37 = PRIM_ISCONS(_3517849_37);
if (True == _3517850_37) {
Obj _3517851_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517852_37 = PRIM_CAR(_3517851_37);
Obj _3517853_37 = PRIM_CDR(_3517852_37);
Obj _3517854_37 = PRIM_CAR(_3517853_37);
Obj args = _3517854_37;
Obj _3517855_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517856_37 = PRIM_CAR(_3517855_37);
Obj _3517857_37 = PRIM_CDR(_3517856_37);
Obj _3517858_37 = PRIM_CDR(_3517857_37);
Obj _3517859_37 = PRIM_ISCONS(_3517858_37);
if (True == _3517859_37) {
Obj _3517860_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517861_37 = PRIM_CAR(_3517860_37);
Obj _3517862_37 = PRIM_CDR(_3517861_37);
Obj _3517863_37 = PRIM_CDR(_3517862_37);
Obj _3517864_37 = PRIM_CAR(_3517863_37);
Obj body = _3517864_37;
Obj _3517865_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517866_37 = PRIM_CAR(_3517865_37);
Obj _3517867_37 = PRIM_CDR(_3517866_37);
Obj _3517868_37 = PRIM_CDR(_3517867_37);
Obj _3517869_37 = PRIM_CDR(_3517868_37);
Obj _3517870_37 = PRIM_EQ(Nil, _3517869_37);
if (True == _3517870_37) {
Obj _3517871_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517872_37 = PRIM_CDR(_3517871_37);
Obj frees = _3517872_37;
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
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517080_37);
return;
}
}
case 1:
{
Obj _3517873_37= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj _3517874_37 = makeCons(_3517873_37, Nil);
Obj _3517875_37 = makeCons(args, _3517874_37);
Obj _3517876_37 = makeCons(__symbolTable[89], _3517875_37);
Obj _3517877_37 = makeCons(_3517876_37, frees);
Obj _3517878_37 = makeCons(__symbolTable[78], _3517877_37);
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 1), _3517878_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517831_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517831_37) {
Obj _3517832_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517832_37;
Obj _3517833_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517833_37;
Obj _3517834_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[68]), _3517834_37, Nil, closureRef(R[0], 1));
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
Obj _3517827_37 = makeCons(x, Nil);
Obj _3517828_37 = makeCons(__symbolTable[72], _3517827_37);
coraReturn(co, _3517828_37);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517066_37 = R[1];
Obj _3517067_37 = R[2];
R[1] = _3517067_37;
R[2] = _3517066_37;
struct frame __curr = {
.fn = clofun44,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3517067_37);
return;
}
case 1:
{
Obj _3517756_37= co->res;
Obj _3517067_37 = R[1];
Obj pos = _3517756_37;
Obj _3517757_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3517757_37) {
coraReturn(co, _3517067_37);
return;
} else {
Obj _3517758_37 = makeCons(pos, Nil);
Obj _3517759_37 = makeCons(__symbolTable[77], _3517758_37);
coraReturn(co, _3517759_37);
return;
}
}
case 2:
{
Obj _3517823_37= co->res;
Obj _3517821_37 = R[1];
Obj _3517824_37 = makeCons(_3517821_37, _3517823_37);
Obj _3517825_37 = makeCons(__symbolTable[78], _3517824_37);
coraReturn(co, _3517825_37);
return;
}
case 3:
{
Obj _3517822_37= co->res;
Obj fvs1 = R[1];
Obj _3517821_37 = R[2];
R[1] = _3517821_37;
struct frame __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3517822_37, fvs1);
return;
}
case 4:
{
Obj _3517818_37= co->res;
Obj args = R[1];
Obj _3517066_37 = R[2];
Obj fvs1 = R[3];
Obj _3517819_37 = makeCons(_3517818_37, Nil);
Obj _3517820_37 = makeCons(args, _3517819_37);
Obj _3517821_37 = makeCons(__symbolTable[89], _3517820_37);
R[1] = fvs1;
R[2] = _3517821_37;
struct frame __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[71]), _3517066_37);
return;
}
case 5:
{
Obj _3517817_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3517066_37 = R[3];
Obj fvs1 = _3517817_37;
R[1] = args;
R[2] = _3517066_37;
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
Obj _3517754_37= co->res;
Obj _3517067_37 = R[1];
Obj _3517066_37 = R[2];
if (True == _3517754_37) {
coraReturn(co, _3517067_37);
return;
} else {
Obj _3517755_37 = primIsSymbol(_3517067_37);
if (True == _3517755_37) {
R[1] = _3517067_37;
struct frame __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), _3517067_37, _3517066_37);
return;
} else {
Obj _3517070_37 = makeNative(3, clofun43, 0, 2, _3517067_37, _3517066_37);
Obj _3517797_37 = PRIM_ISCONS(_3517067_37);
if (True == _3517797_37) {
Obj _3517798_37 = PRIM_CAR(_3517067_37);
Obj _3517799_37 = PRIM_EQ(__symbolTable[89], _3517798_37);
if (True == _3517799_37) {
Obj _3517800_37 = PRIM_CDR(_3517067_37);
Obj _3517801_37 = PRIM_ISCONS(_3517800_37);
if (True == _3517801_37) {
Obj _3517802_37 = PRIM_CDR(_3517067_37);
Obj _3517803_37 = PRIM_CAR(_3517802_37);
Obj args = _3517803_37;
Obj _3517804_37 = PRIM_CDR(_3517067_37);
Obj _3517805_37 = PRIM_CDR(_3517804_37);
Obj _3517806_37 = PRIM_ISCONS(_3517805_37);
if (True == _3517806_37) {
Obj _3517807_37 = PRIM_CDR(_3517067_37);
Obj _3517808_37 = PRIM_CDR(_3517807_37);
Obj _3517809_37 = PRIM_CAR(_3517808_37);
Obj body = _3517809_37;
Obj _3517810_37 = PRIM_CDR(_3517067_37);
Obj _3517811_37 = PRIM_CDR(_3517810_37);
Obj _3517812_37 = PRIM_CDR(_3517811_37);
Obj _3517813_37 = PRIM_EQ(Nil, _3517812_37);
if (True == _3517813_37) {
Obj _3517814_37 = makeCons(body, Nil);
Obj _3517815_37 = makeCons(args, _3517814_37);
Obj _3517816_37 = makeCons(__symbolTable[89], _3517815_37);
R[1] = body;
R[2] = args;
R[3] = _3517066_37;
struct frame __curr = {
.fn = clofun44,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[76]), _3517816_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517070_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517070_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517070_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517070_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517070_37);
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
Obj _3517071_37 = makeNative(3, clofun42, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3517765_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517765_37) {
Obj _3517766_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517767_37 = PRIM_EQ(__symbolTable[86], _3517766_37);
if (True == _3517767_37) {
Obj _3517768_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517769_37 = PRIM_ISCONS(_3517768_37);
if (True == _3517769_37) {
Obj _3517770_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517771_37 = PRIM_CAR(_3517770_37);
Obj a = _3517771_37;
Obj _3517772_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517773_37 = PRIM_CDR(_3517772_37);
Obj _3517774_37 = PRIM_ISCONS(_3517773_37);
if (True == _3517774_37) {
Obj _3517775_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517776_37 = PRIM_CDR(_3517775_37);
Obj _3517777_37 = PRIM_CAR(_3517776_37);
Obj b = _3517777_37;
Obj _3517778_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517779_37 = PRIM_CDR(_3517778_37);
Obj _3517780_37 = PRIM_CDR(_3517779_37);
Obj _3517781_37 = PRIM_ISCONS(_3517780_37);
if (True == _3517781_37) {
Obj _3517782_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517783_37 = PRIM_CDR(_3517782_37);
Obj _3517784_37 = PRIM_CDR(_3517783_37);
Obj _3517785_37 = PRIM_CAR(_3517784_37);
Obj c = _3517785_37;
Obj _3517786_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517787_37 = PRIM_CDR(_3517786_37);
Obj _3517788_37 = PRIM_CDR(_3517787_37);
Obj _3517789_37 = PRIM_CDR(_3517788_37);
Obj _3517790_37 = PRIM_EQ(Nil, _3517789_37);
if (True == _3517790_37) {
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
coraCall0(co, _3517071_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517071_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517071_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517071_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517071_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517071_37);
return;
}
}
case 1:
{
Obj _3517792_37= co->res;
Obj _3517791_37 = R[1];
Obj a = R[2];
Obj _3517793_37 = makeCons(_3517792_37, Nil);
Obj _3517794_37 = makeCons(_3517791_37, _3517793_37);
Obj _3517795_37 = makeCons(a, _3517794_37);
Obj _3517796_37 = makeCons(__symbolTable[86], _3517795_37);
coraReturn(co, _3517796_37);
return;
}
case 2:
{
Obj _3517791_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = _3517791_37;
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
Obj _3517760_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517760_37) {
Obj _3517761_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517761_37;
Obj _3517762_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517762_37;
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
Obj _3517763_37= co->res;
Obj f = R[1];
Obj args = R[2];
Obj _3517764_37 = makeCons(f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3517763_37, _3517764_37);
return;
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517053_37 = R[1];
R[1] = _3517053_37;
struct frame __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[79]), _3517053_37);
return;
}
case 1:
{
Obj _3517752_37= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), _3517752_37, args);
return;
}
case 2:
{
Obj _3517579_37= co->res;
Obj _3517053_37 = R[1];
if (True == _3517579_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517580_37 = primIsSymbol(_3517053_37);
if (True == _3517580_37) {
Obj _3517581_37 = makeCons(_3517053_37, Nil);
coraReturn(co, _3517581_37);
return;
} else {
Obj _3517056_37 = makeNative(1, clofun40, 0, 1, _3517053_37);
Obj _3517735_37 = PRIM_ISCONS(_3517053_37);
if (True == _3517735_37) {
Obj _3517736_37 = PRIM_CAR(_3517053_37);
Obj _3517737_37 = PRIM_EQ(__symbolTable[89], _3517736_37);
if (True == _3517737_37) {
Obj _3517738_37 = PRIM_CDR(_3517053_37);
Obj _3517739_37 = PRIM_ISCONS(_3517738_37);
if (True == _3517739_37) {
Obj _3517740_37 = PRIM_CDR(_3517053_37);
Obj _3517741_37 = PRIM_CAR(_3517740_37);
Obj args = _3517741_37;
Obj _3517742_37 = PRIM_CDR(_3517053_37);
Obj _3517743_37 = PRIM_CDR(_3517742_37);
Obj _3517744_37 = PRIM_ISCONS(_3517743_37);
if (True == _3517744_37) {
Obj _3517745_37 = PRIM_CDR(_3517053_37);
Obj _3517746_37 = PRIM_CDR(_3517745_37);
Obj _3517747_37 = PRIM_CAR(_3517746_37);
Obj body = _3517747_37;
Obj _3517748_37 = PRIM_CDR(_3517053_37);
Obj _3517749_37 = PRIM_CDR(_3517748_37);
Obj _3517750_37 = PRIM_CDR(_3517749_37);
Obj _3517751_37 = PRIM_EQ(Nil, _3517750_37);
if (True == _3517751_37) {
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
coraCall0(co, _3517056_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517056_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517056_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517056_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517056_37);
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
Obj _3517057_37 = makeNative(1, clofun39, 0, 1, closureRef(R[0], 0));
Obj _3517705_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517705_37) {
Obj _3517706_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517707_37 = PRIM_EQ(__symbolTable[87], _3517706_37);
if (True == _3517707_37) {
Obj _3517708_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517709_37 = PRIM_ISCONS(_3517708_37);
if (True == _3517709_37) {
Obj _3517710_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517711_37 = PRIM_CAR(_3517710_37);
Obj x = _3517711_37;
Obj _3517712_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517713_37 = PRIM_CDR(_3517712_37);
Obj _3517714_37 = PRIM_ISCONS(_3517713_37);
if (True == _3517714_37) {
Obj _3517715_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517716_37 = PRIM_CDR(_3517715_37);
Obj _3517717_37 = PRIM_CAR(_3517716_37);
Obj y = _3517717_37;
Obj _3517718_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517719_37 = PRIM_CDR(_3517718_37);
Obj _3517720_37 = PRIM_CDR(_3517719_37);
Obj _3517721_37 = PRIM_ISCONS(_3517720_37);
if (True == _3517721_37) {
Obj _3517722_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517723_37 = PRIM_CDR(_3517722_37);
Obj _3517724_37 = PRIM_CDR(_3517723_37);
Obj _3517725_37 = PRIM_CAR(_3517724_37);
Obj z = _3517725_37;
Obj _3517726_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517727_37 = PRIM_CDR(_3517726_37);
Obj _3517728_37 = PRIM_CDR(_3517727_37);
Obj _3517729_37 = PRIM_CDR(_3517728_37);
Obj _3517730_37 = PRIM_EQ(Nil, _3517729_37);
if (True == _3517730_37) {
Obj _3517731_37 = makeCons(z, Nil);
Obj _3517732_37 = makeCons(y, _3517731_37);
Obj _3517733_37 = makeCons(x, _3517732_37);
struct frame __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517733_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517057_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517057_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517057_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517057_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517057_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517057_37);
return;
}
}
case 1:
{
Obj _3517734_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517734_37);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517058_37 = makeNative(3, clofun38, 0, 1, closureRef(R[0], 0));
Obj _3517685_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517685_37) {
Obj _3517686_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517687_37 = PRIM_EQ(__symbolTable[85], _3517686_37);
if (True == _3517687_37) {
Obj _3517688_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517689_37 = PRIM_ISCONS(_3517688_37);
if (True == _3517689_37) {
Obj _3517690_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517691_37 = PRIM_CAR(_3517690_37);
Obj x = _3517691_37;
Obj _3517692_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517693_37 = PRIM_CDR(_3517692_37);
Obj _3517694_37 = PRIM_ISCONS(_3517693_37);
if (True == _3517694_37) {
Obj _3517695_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517696_37 = PRIM_CDR(_3517695_37);
Obj _3517697_37 = PRIM_CAR(_3517696_37);
Obj y = _3517697_37;
Obj _3517698_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517699_37 = PRIM_CDR(_3517698_37);
Obj _3517700_37 = PRIM_CDR(_3517699_37);
Obj _3517701_37 = PRIM_EQ(Nil, _3517700_37);
if (True == _3517701_37) {
Obj _3517702_37 = makeCons(y, Nil);
Obj _3517703_37 = makeCons(x, _3517702_37);
struct frame __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517703_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517058_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517058_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517058_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517058_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517058_37);
return;
}
}
case 1:
{
Obj _3517704_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517704_37);
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517059_37 = makeNative(1, clofun37, 0, 1, closureRef(R[0], 0));
Obj _3517655_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517655_37) {
Obj _3517656_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517657_37 = PRIM_EQ(__symbolTable[86], _3517656_37);
if (True == _3517657_37) {
Obj _3517658_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517659_37 = PRIM_ISCONS(_3517658_37);
if (True == _3517659_37) {
Obj _3517660_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517661_37 = PRIM_CAR(_3517660_37);
Obj a = _3517661_37;
Obj _3517662_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517663_37 = PRIM_CDR(_3517662_37);
Obj _3517664_37 = PRIM_ISCONS(_3517663_37);
if (True == _3517664_37) {
Obj _3517665_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517666_37 = PRIM_CDR(_3517665_37);
Obj _3517667_37 = PRIM_CAR(_3517666_37);
Obj b = _3517667_37;
Obj _3517668_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517669_37 = PRIM_CDR(_3517668_37);
Obj _3517670_37 = PRIM_CDR(_3517669_37);
Obj _3517671_37 = PRIM_ISCONS(_3517670_37);
if (True == _3517671_37) {
Obj _3517672_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517673_37 = PRIM_CDR(_3517672_37);
Obj _3517674_37 = PRIM_CDR(_3517673_37);
Obj _3517675_37 = PRIM_CAR(_3517674_37);
Obj c = _3517675_37;
Obj _3517676_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517677_37 = PRIM_CDR(_3517676_37);
Obj _3517678_37 = PRIM_CDR(_3517677_37);
Obj _3517679_37 = PRIM_CDR(_3517678_37);
Obj _3517680_37 = PRIM_EQ(Nil, _3517679_37);
if (True == _3517680_37) {
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
coraCall0(co, _3517059_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517059_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517059_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517059_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517059_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517059_37);
return;
}
}
case 1:
{
Obj _3517684_37= co->res;
Obj _3517681_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), _3517681_37, _3517684_37);
return;
}
case 2:
{
Obj _3517682_37= co->res;
Obj a = R[1];
Obj _3517681_37 = R[2];
Obj _3517683_37 = makeCons(a, Nil);
R[1] = _3517681_37;
struct frame __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[80]), _3517682_37, _3517683_37);
return;
}
case 3:
{
Obj _3517681_37= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = _3517681_37;
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
Obj _3517060_37 = makeNative(1, clofun36, 0, 1, closureRef(R[0], 0));
Obj _3517645_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517645_37) {
Obj _3517646_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517647_37 = PRIM_EQ(__symbolTable[78], _3517646_37);
if (True == _3517647_37) {
Obj _3517648_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517649_37 = PRIM_ISCONS(_3517648_37);
if (True == _3517649_37) {
Obj _3517650_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517651_37 = PRIM_CAR(_3517650_37);
Obj lam = _3517651_37;
Obj _3517652_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517653_37 = PRIM_CDR(_3517652_37);
Obj more = _3517653_37;
Obj _3517654_37 = makeCons(lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), _3517654_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517060_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517060_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517060_37);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517061_37 = makeNative(1, clofun35, 0, 1, closureRef(R[0], 0));
Obj _3517635_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517635_37) {
Obj _3517636_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517637_37 = PRIM_EQ(__symbolTable[72], _3517636_37);
if (True == _3517637_37) {
Obj _3517638_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517639_37 = PRIM_ISCONS(_3517638_37);
if (True == _3517639_37) {
Obj _3517640_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517641_37 = PRIM_CAR(_3517640_37);
Obj x = _3517641_37;
Obj _3517642_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517643_37 = PRIM_CDR(_3517642_37);
Obj _3517644_37 = PRIM_EQ(Nil, _3517643_37);
if (True == _3517644_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517061_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517061_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517061_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517061_37);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517062_37 = makeNative(1, clofun34, 0, 1, closureRef(R[0], 0));
Obj _3517615_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517615_37) {
Obj _3517616_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517617_37 = PRIM_EQ(__symbolTable[73], _3517616_37);
if (True == _3517617_37) {
Obj _3517618_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517619_37 = PRIM_ISCONS(_3517618_37);
if (True == _3517619_37) {
Obj _3517620_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517621_37 = PRIM_CAR(_3517620_37);
Obj exp = _3517621_37;
Obj _3517622_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517623_37 = PRIM_CDR(_3517622_37);
Obj _3517624_37 = PRIM_ISCONS(_3517623_37);
if (True == _3517624_37) {
Obj _3517625_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517626_37 = PRIM_CDR(_3517625_37);
Obj _3517627_37 = PRIM_CAR(_3517626_37);
Obj cont = _3517627_37;
Obj _3517628_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517629_37 = PRIM_CDR(_3517628_37);
Obj _3517630_37 = PRIM_CDR(_3517629_37);
Obj _3517631_37 = PRIM_EQ(Nil, _3517630_37);
if (True == _3517631_37) {
Obj _3517632_37 = makeCons(cont, Nil);
Obj _3517633_37 = makeCons(exp, _3517632_37);
struct frame __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517633_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517062_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517062_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517062_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517062_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517062_37);
return;
}
}
case 1:
{
Obj _3517634_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517634_37);
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517063_37 = makeNative(2, clofun33, 0, 1, closureRef(R[0], 0));
Obj _3517605_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517605_37) {
Obj _3517606_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517607_37 = PRIM_EQ(__symbolTable[74], _3517606_37);
if (True == _3517607_37) {
Obj _3517608_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517609_37 = PRIM_ISCONS(_3517608_37);
if (True == _3517609_37) {
Obj _3517610_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517611_37 = PRIM_CAR(_3517610_37);
Obj exp = _3517611_37;
Obj _3517612_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517613_37 = PRIM_CDR(_3517612_37);
Obj _3517614_37 = PRIM_EQ(Nil, _3517613_37);
if (True == _3517614_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[76]), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517063_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517063_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517063_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517063_37);
return;
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517064_37 = makeNative(1, clofun32, 0, 1, closureRef(R[0], 0));
Obj _3517587_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517587_37) {
Obj _3517588_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517589_37 = PRIM_EQ(__symbolTable[75], _3517588_37);
if (True == _3517589_37) {
Obj _3517590_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517591_37 = PRIM_ISCONS(_3517590_37);
if (True == _3517591_37) {
Obj _3517592_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517593_37 = PRIM_CAR(_3517592_37);
Obj arg = _3517593_37;
Obj _3517594_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517595_37 = PRIM_CDR(_3517594_37);
Obj _3517596_37 = PRIM_ISCONS(_3517595_37);
if (True == _3517596_37) {
Obj _3517597_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517598_37 = PRIM_CDR(_3517597_37);
Obj _3517599_37 = PRIM_CAR(_3517598_37);
Obj body = _3517599_37;
Obj _3517600_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517601_37 = PRIM_CDR(_3517600_37);
Obj _3517602_37 = PRIM_CDR(_3517601_37);
Obj _3517603_37 = PRIM_EQ(Nil, _3517602_37);
if (True == _3517603_37) {
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
coraCall0(co, _3517064_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517064_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517064_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517064_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517064_37);
return;
}
}
case 1:
{
Obj _3517604_37= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), _3517604_37, arg);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517582_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517582_37) {
Obj _3517583_37 = PRIM_CAR(closureRef(R[0], 0));
Obj f = _3517583_37;
Obj _3517584_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517584_37;
Obj _3517585_37 = makeCons(f, args);
struct frame __curr = {
.fn = clofun32,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), globalRef(__symbolTable[76]), _3517585_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3517586_37= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), globalRef(__symbolTable[81]), Nil, _3517586_37);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517045_37 = R[1];
Obj _3517046_37 = makeNative(1, clofun30, 0, 1, _3517045_37);
Obj _3517568_37 = PRIM_ISCONS(_3517045_37);
if (True == _3517568_37) {
Obj _3517569_37 = PRIM_CAR(_3517045_37);
Obj _3517570_37 = PRIM_EQ(__symbolTable[96], _3517569_37);
if (True == _3517570_37) {
Obj _3517571_37 = PRIM_CDR(_3517045_37);
Obj _3517572_37 = PRIM_ISCONS(_3517571_37);
if (True == _3517572_37) {
Obj _3517573_37 = PRIM_CDR(_3517045_37);
Obj _3517574_37 = PRIM_CAR(_3517573_37);
Obj _3517575_37 = PRIM_CDR(_3517045_37);
Obj _3517576_37 = PRIM_CDR(_3517575_37);
Obj _3517577_37 = PRIM_EQ(Nil, _3517576_37);
if (True == _3517577_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517046_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517046_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517046_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517046_37);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517047_37 = makeNative(1, clofun29, 0, 1, closureRef(R[0], 0));
Obj _3517558_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517558_37) {
Obj _3517559_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517560_37 = PRIM_EQ(__symbolTable[93], _3517559_37);
if (True == _3517560_37) {
Obj _3517561_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517562_37 = PRIM_ISCONS(_3517561_37);
if (True == _3517562_37) {
Obj _3517563_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517564_37 = PRIM_CAR(_3517563_37);
Obj _3517565_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517566_37 = PRIM_CDR(_3517565_37);
Obj _3517567_37 = PRIM_EQ(Nil, _3517566_37);
if (True == _3517567_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517047_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517047_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517047_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517047_37);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517048_37 = makeNative(1, clofun28, 0, 1, closureRef(R[0], 0));
Obj _3517548_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517548_37) {
Obj _3517549_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517550_37 = PRIM_EQ(__symbolTable[90], _3517549_37);
if (True == _3517550_37) {
Obj _3517551_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517552_37 = PRIM_ISCONS(_3517551_37);
if (True == _3517552_37) {
Obj _3517553_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517554_37 = PRIM_CAR(_3517553_37);
Obj _3517555_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517556_37 = PRIM_CDR(_3517555_37);
Obj _3517557_37 = PRIM_EQ(Nil, _3517556_37);
if (True == _3517557_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517048_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517048_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517048_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517048_37);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517049_37 = makeNative(1, clofun27, 0, 1, closureRef(R[0], 0));
Obj _3517538_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517538_37) {
Obj _3517539_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517540_37 = PRIM_EQ(__symbolTable[84], _3517539_37);
if (True == _3517540_37) {
Obj _3517541_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517542_37 = PRIM_ISCONS(_3517541_37);
if (True == _3517542_37) {
Obj _3517543_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517544_37 = PRIM_CAR(_3517543_37);
Obj _3517545_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517546_37 = PRIM_CDR(_3517545_37);
Obj _3517547_37 = PRIM_EQ(Nil, _3517546_37);
if (True == _3517547_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517049_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517049_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517049_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517049_37);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517050_37 = makeNative(2, clofun26, 0, 1, closureRef(R[0], 0));
Obj _3517528_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517528_37) {
Obj _3517529_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517530_37 = PRIM_EQ(__symbolTable[77], _3517529_37);
if (True == _3517530_37) {
Obj _3517531_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517532_37 = PRIM_ISCONS(_3517531_37);
if (True == _3517532_37) {
Obj _3517533_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517534_37 = PRIM_CAR(_3517533_37);
Obj _3517535_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517536_37 = PRIM_CDR(_3517535_37);
Obj _3517537_37 = PRIM_EQ(Nil, _3517536_37);
if (True == _3517537_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517050_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517050_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517050_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517050_37);
return;
}
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517051_37 = makeNative(1, clofun25, 0, 0);
Obj _3517518_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517518_37) {
Obj _3517519_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517520_37 = PRIM_EQ(__symbolTable[78], _3517519_37);
if (True == _3517520_37) {
Obj _3517521_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517522_37 = PRIM_ISCONS(_3517521_37);
if (True == _3517522_37) {
Obj _3517523_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517524_37 = PRIM_CAR(_3517523_37);
Obj label = _3517524_37;
Obj _3517525_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517526_37 = PRIM_CDR(_3517525_37);
R[1] = _3517051_37;
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
coraCall0(co, _3517051_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517051_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517051_37);
return;
}
}
case 1:
{
Obj _3517527_37= co->res;
Obj _3517051_37 = R[1];
if (True == _3517527_37) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517051_37);
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
Obj _3517040_37 = R[1];
Obj _3517041_37 = R[2];
Obj _3517507_37 = PRIM_EQ(Nil, _3517040_37);
if (True == _3517507_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517043_37 = makeNative(2, clofun23, 0, 2, _3517040_37, _3517041_37);
Obj _3517513_37 = PRIM_ISCONS(_3517040_37);
if (True == _3517513_37) {
Obj _3517514_37 = PRIM_CAR(_3517040_37);
Obj x = _3517514_37;
Obj _3517515_37 = PRIM_CDR(_3517040_37);
Obj y = _3517515_37;
R[1] = y;
R[2] = _3517041_37;
R[3] = _3517043_37;
struct frame __curr = {
.fn = clofun24,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, _3517041_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517043_37);
return;
}
}
}
case 1:
{
Obj _3517516_37= co->res;
Obj y = R[1];
Obj _3517041_37 = R[2];
Obj _3517043_37 = R[3];
if (True == _3517516_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[80]), y, _3517041_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517043_37);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517508_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517508_37) {
Obj _3517509_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517509_37;
Obj _3517510_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517510_37;
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
Obj _3517511_37= co->res;
Obj x = R[1];
Obj _3517512_37 = makeCons(x, _3517511_37);
coraReturn(co, _3517512_37);
return;
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517035_37 = R[1];
Obj _3517036_37 = R[2];
Obj _3517496_37 = PRIM_EQ(Nil, _3517035_37);
if (True == _3517496_37) {
coraReturn(co, _3517036_37);
return;
} else {
Obj _3517038_37 = makeNative(2, clofun21, 0, 2, _3517035_37, _3517036_37);
Obj _3517502_37 = PRIM_ISCONS(_3517035_37);
if (True == _3517502_37) {
Obj _3517503_37 = PRIM_CAR(_3517035_37);
Obj x = _3517503_37;
Obj _3517504_37 = PRIM_CDR(_3517035_37);
Obj y = _3517504_37;
R[1] = y;
R[2] = _3517036_37;
R[3] = _3517038_37;
struct frame __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[95]), x, _3517036_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517038_37);
return;
}
}
}
case 1:
{
Obj _3517505_37= co->res;
Obj y = R[1];
Obj _3517036_37 = R[2];
Obj _3517038_37 = R[3];
if (True == _3517505_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[81]), y, _3517036_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517038_37);
return;
}
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517497_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517497_37) {
Obj _3517498_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3517498_37;
Obj _3517499_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517499_37;
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
Obj _3517500_37= co->res;
Obj x = R[1];
Obj _3517501_37 = makeCons(x, _3517500_37);
coraReturn(co, _3517501_37);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517021_37 = R[1];
Obj _3517022_37 = R[2];
Obj _3517023_37 = R[3];
Obj _3517165_37 = makeNative(2, clofun19, 1, 3, _3517021_37, _3517023_37, _3517022_37);
R[1] = _3517023_37;
R[2] = _3517165_37;
struct frame __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[83]), _3517023_37);
return;
}
case 1:
{
Obj _3517494_37= co->res;
Obj _3517165_37 = R[1];
if (True == _3517494_37) {
co->ctx.sp = R;
coraCall1(co, _3517165_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3517165_37, False);
return;
}
}
case 2:
{
Obj _3517493_37= co->res;
Obj _3517023_37 = R[1];
Obj _3517165_37 = R[2];
if (True == _3517493_37) {
co->ctx.sp = R;
coraCall1(co, _3517165_37, True);
return;
} else {
R[1] = _3517165_37;
struct frame __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), _3517023_37);
return;
}
}
case 3:
{
Obj _3517491_37= co->res;
Obj _3517023_37 = R[1];
Obj _3517165_37 = R[2];
if (True == _3517491_37) {
co->ctx.sp = R;
coraCall1(co, _3517165_37, True);
return;
} else {
Obj _3517492_37 = primIsString(_3517023_37);
if (True == _3517492_37) {
co->ctx.sp = R;
coraCall1(co, _3517165_37, True);
return;
} else {
R[1] = _3517023_37;
R[2] = _3517165_37;
struct frame __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[82]), _3517023_37);
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
Obj _3517166_37 = R[1];
if (True == _3517166_37) {
Obj _3517302_37 = makeCons(closureRef(R[0], 1), Nil);
Obj _3517303_37 = makeCons(__symbolTable[96], _3517302_37);
coraReturn(co, _3517303_37);
return;
} else {
Obj _3517025_37 = makeNative(3, clofun18, 0, 3, closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 2));
Obj _3517478_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3517478_37) {
Obj _3517479_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3517480_37 = PRIM_EQ(__symbolTable[84], _3517479_37);
if (True == _3517480_37) {
Obj _3517481_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517482_37 = PRIM_ISCONS(_3517481_37);
if (True == _3517482_37) {
Obj _3517483_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517484_37 = PRIM_CAR(_3517483_37);
Obj x = _3517484_37;
Obj _3517485_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3517486_37 = PRIM_CDR(_3517485_37);
Obj _3517487_37 = PRIM_EQ(Nil, _3517486_37);
if (True == _3517487_37) {
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
coraCall0(co, _3517025_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517025_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517025_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517025_37);
return;
}
}
}
case 1:
{
Obj _3517488_37= co->res;
Obj x = R[1];
Obj _3517489_37 = makeCons(x, Nil);
Obj _3517490_37 = makeCons(__symbolTable[96], _3517489_37);
coraReturn(co, _3517490_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517304_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3517304_37) {
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
Obj _3517027_37 = makeNative(1, clofun17, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517456_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517456_37) {
Obj _3517457_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517458_37 = PRIM_EQ(__symbolTable[89], _3517457_37);
if (True == _3517458_37) {
Obj _3517459_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517460_37 = PRIM_ISCONS(_3517459_37);
if (True == _3517460_37) {
Obj _3517461_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517462_37 = PRIM_CAR(_3517461_37);
Obj args = _3517462_37;
Obj _3517463_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517464_37 = PRIM_CDR(_3517463_37);
Obj _3517465_37 = PRIM_ISCONS(_3517464_37);
if (True == _3517465_37) {
Obj _3517466_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517467_37 = PRIM_CDR(_3517466_37);
Obj _3517468_37 = PRIM_CAR(_3517467_37);
Obj body = _3517468_37;
Obj _3517469_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517470_37 = PRIM_CDR(_3517469_37);
Obj _3517471_37 = PRIM_CDR(_3517470_37);
Obj _3517472_37 = PRIM_EQ(Nil, _3517471_37);
if (True == _3517472_37) {
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
coraCall0(co, _3517027_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517027_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517027_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517027_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517027_37);
return;
}
}
}
case 1:
{
Obj _3517306_37= co->res;
Obj _3517307_37 = makeCons(closureRef(R[0], 0), Nil);
Obj _3517308_37 = makeCons(__symbolTable[93], _3517307_37);
coraReturn(co, _3517308_37);
return;
}
case 2:
{
Obj _3517305_37= co->res;
if (True == _3517305_37) {
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
Obj _3517474_37= co->res;
Obj args = R[1];
Obj _3517475_37 = makeCons(_3517474_37, Nil);
Obj _3517476_37 = makeCons(args, _3517475_37);
Obj _3517477_37 = makeCons(__symbolTable[89], _3517476_37);
coraReturn(co, _3517477_37);
return;
}
case 4:
{
Obj _3517473_37= co->res;
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
coraCall3(co, globalRef(__symbolTable[97]), _3517473_37, closureRef(R[0], 2), body);
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517028_37 = makeNative(2, clofun16, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517424_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517424_37) {
Obj _3517425_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517426_37 = PRIM_EQ(__symbolTable[87], _3517425_37);
if (True == _3517426_37) {
Obj _3517427_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517428_37 = PRIM_ISCONS(_3517427_37);
if (True == _3517428_37) {
Obj _3517429_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517430_37 = PRIM_CAR(_3517429_37);
Obj _3517431_37 = PRIM_ISCONS(_3517430_37);
if (True == _3517431_37) {
Obj _3517432_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517433_37 = PRIM_CAR(_3517432_37);
Obj _3517434_37 = PRIM_CAR(_3517433_37);
Obj _3517435_37 = PRIM_EQ(__symbolTable[87], _3517434_37);
if (True == _3517435_37) {
Obj _3517436_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517437_37 = PRIM_CAR(_3517436_37);
Obj _3517438_37 = PRIM_CDR(_3517437_37);
Obj exp1 = _3517438_37;
Obj _3517439_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517440_37 = PRIM_CDR(_3517439_37);
Obj exp2 = _3517440_37;
Obj _3517441_37 = primGenSym();
Obj f = _3517441_37;
Obj _3517442_37 = primGenSym();
Obj v = _3517442_37;
Obj _3517443_37 = makeCons(v, Nil);
Obj _3517444_37 = makeCons(v, exp2);
Obj _3517445_37 = makeCons(__symbolTable[87], _3517444_37);
Obj _3517446_37 = makeCons(_3517445_37, Nil);
Obj _3517447_37 = makeCons(_3517443_37, _3517446_37);
Obj _3517448_37 = makeCons(__symbolTable[89], _3517447_37);
Obj _3517449_37 = makeCons(__symbolTable[87], exp1);
Obj _3517450_37 = makeCons(_3517449_37, Nil);
Obj _3517451_37 = makeCons(f, _3517450_37);
Obj _3517452_37 = makeCons(_3517451_37, Nil);
Obj _3517453_37 = makeCons(_3517448_37, _3517452_37);
Obj _3517454_37 = makeCons(f, _3517453_37);
Obj _3517455_37 = makeCons(__symbolTable[86], _3517454_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3517455_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517028_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517028_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517028_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517028_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517028_37);
return;
}
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517029_37 = makeNative(2, clofun15, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517417_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517417_37) {
Obj _3517418_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517419_37 = PRIM_EQ(__symbolTable[87], _3517418_37);
if (True == _3517419_37) {
Obj _3517420_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517420_37;
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
coraCall0(co, _3517029_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517029_37);
return;
}
}
case 1:
{
Obj _3517422_37= co->res;
Obj _3517423_37 = makeCons(__symbolTable[87], _3517422_37);
coraReturn(co, _3517423_37);
return;
}
case 2:
{
Obj _3517421_37= co->res;
Obj args = R[1];
struct frame __curr = {
.fn = clofun16,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3517421_37, args);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517030_37 = makeNative(3, clofun14, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517395_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517395_37) {
Obj _3517396_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517397_37 = PRIM_EQ(__symbolTable[85], _3517396_37);
if (True == _3517397_37) {
Obj _3517398_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517399_37 = PRIM_ISCONS(_3517398_37);
if (True == _3517399_37) {
Obj _3517400_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517401_37 = PRIM_CAR(_3517400_37);
Obj x = _3517401_37;
Obj _3517402_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517403_37 = PRIM_CDR(_3517402_37);
Obj _3517404_37 = PRIM_ISCONS(_3517403_37);
if (True == _3517404_37) {
Obj _3517405_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517406_37 = PRIM_CDR(_3517405_37);
Obj _3517407_37 = PRIM_CAR(_3517406_37);
Obj y = _3517407_37;
Obj _3517408_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517409_37 = PRIM_CDR(_3517408_37);
Obj _3517410_37 = PRIM_CDR(_3517409_37);
Obj _3517411_37 = PRIM_EQ(Nil, _3517410_37);
if (True == _3517411_37) {
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
coraCall0(co, _3517030_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517030_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517030_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517030_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517030_37);
return;
}
}
case 1:
{
Obj _3517413_37= co->res;
Obj _3517412_37 = R[1];
Obj _3517414_37 = makeCons(_3517413_37, Nil);
Obj _3517415_37 = makeCons(_3517412_37, _3517414_37);
Obj _3517416_37 = makeCons(__symbolTable[85], _3517415_37);
coraReturn(co, _3517416_37);
return;
}
case 2:
{
Obj _3517412_37= co->res;
Obj y = R[1];
R[1] = _3517412_37;
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
Obj _3517031_37 = makeNative(1, clofun13, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517362_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517362_37) {
Obj _3517363_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517364_37 = PRIM_EQ(__symbolTable[86], _3517363_37);
if (True == _3517364_37) {
Obj _3517365_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517366_37 = PRIM_ISCONS(_3517365_37);
if (True == _3517366_37) {
Obj _3517367_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517368_37 = PRIM_CAR(_3517367_37);
Obj a = _3517368_37;
Obj _3517369_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517370_37 = PRIM_CDR(_3517369_37);
Obj _3517371_37 = PRIM_ISCONS(_3517370_37);
if (True == _3517371_37) {
Obj _3517372_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517373_37 = PRIM_CDR(_3517372_37);
Obj _3517374_37 = PRIM_CAR(_3517373_37);
Obj b = _3517374_37;
Obj _3517375_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517376_37 = PRIM_CDR(_3517375_37);
Obj _3517377_37 = PRIM_CDR(_3517376_37);
Obj _3517378_37 = PRIM_ISCONS(_3517377_37);
if (True == _3517378_37) {
Obj _3517379_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517380_37 = PRIM_CDR(_3517379_37);
Obj _3517381_37 = PRIM_CDR(_3517380_37);
Obj _3517382_37 = PRIM_CAR(_3517381_37);
Obj c = _3517382_37;
Obj _3517383_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517384_37 = PRIM_CDR(_3517383_37);
Obj _3517385_37 = PRIM_CDR(_3517384_37);
Obj _3517386_37 = PRIM_CDR(_3517385_37);
Obj _3517387_37 = PRIM_EQ(Nil, _3517386_37);
if (True == _3517387_37) {
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
coraCall0(co, _3517031_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517031_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517031_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517031_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517031_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517031_37);
return;
}
}
case 1:
{
Obj _3517390_37= co->res;
Obj _3517388_37 = R[1];
Obj a = R[2];
Obj _3517391_37 = makeCons(_3517390_37, Nil);
Obj _3517392_37 = makeCons(_3517388_37, _3517391_37);
Obj _3517393_37 = makeCons(a, _3517392_37);
Obj _3517394_37 = makeCons(__symbolTable[86], _3517393_37);
coraReturn(co, _3517394_37);
return;
}
case 2:
{
Obj _3517388_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3517389_37 = makeCons(a, closureRef(R[0], 1));
R[1] = _3517388_37;
R[2] = a;
struct frame __curr = {
.fn = clofun14,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[97]), _3517389_37, closureRef(R[0], 2), c);
return;
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517032_37 = makeNative(4, clofun12, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3517330_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517330_37) {
Obj _3517331_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517332_37 = PRIM_ISCONS(_3517331_37);
if (True == _3517332_37) {
Obj _3517333_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517334_37 = PRIM_CAR(_3517333_37);
Obj _3517335_37 = PRIM_EQ(__symbolTable[89], _3517334_37);
if (True == _3517335_37) {
Obj _3517336_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517337_37 = PRIM_CDR(_3517336_37);
Obj exp1 = _3517337_37;
Obj _3517338_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517339_37 = PRIM_ISCONS(_3517338_37);
if (True == _3517339_37) {
Obj _3517340_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517341_37 = PRIM_CAR(_3517340_37);
Obj _3517342_37 = PRIM_ISCONS(_3517341_37);
if (True == _3517342_37) {
Obj _3517343_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517344_37 = PRIM_CAR(_3517343_37);
Obj _3517345_37 = PRIM_CAR(_3517344_37);
Obj _3517346_37 = PRIM_EQ(__symbolTable[87], _3517345_37);
if (True == _3517346_37) {
Obj _3517347_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517348_37 = PRIM_CAR(_3517347_37);
Obj _3517349_37 = PRIM_CDR(_3517348_37);
Obj exp2 = _3517349_37;
Obj _3517350_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3517351_37 = PRIM_CDR(_3517350_37);
Obj _3517352_37 = PRIM_EQ(Nil, _3517351_37);
if (True == _3517352_37) {
Obj _3517353_37 = primGenSym();
Obj f = _3517353_37;
Obj _3517354_37 = makeCons(__symbolTable[89], exp1);
Obj _3517355_37 = makeCons(__symbolTable[87], exp2);
Obj _3517356_37 = makeCons(_3517355_37, Nil);
Obj _3517357_37 = makeCons(f, _3517356_37);
Obj _3517358_37 = makeCons(_3517357_37, Nil);
Obj _3517359_37 = makeCons(_3517354_37, _3517358_37);
Obj _3517360_37 = makeCons(f, _3517359_37);
Obj _3517361_37 = makeCons(__symbolTable[86], _3517360_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3517361_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517032_37);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517033_37 = makeNative(1, clofun11, 0, 3, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 0));
Obj _3517310_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517310_37) {
Obj _3517311_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3517311_37;
Obj _3517312_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3517312_37;
R[1] = op;
R[2] = args;
R[3] = _3517033_37;
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
coraCall0(co, _3517033_37);
return;
}
}
case 1:
{
Obj _3517320_37= co->res;
Obj _3517318_37 = R[1];
Obj _3517321_37 = makeCons(_3517318_37, _3517320_37);
coraReturn(co, _3517321_37);
return;
}
case 2:
{
Obj _3517319_37= co->res;
Obj args = R[1];
Obj _3517318_37 = R[2];
R[1] = _3517318_37;
struct frame __curr = {
.fn = clofun12,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[92]), _3517319_37, args);
return;
}
case 3:
{
Obj _3517326_37= co->res;
Obj tmp = R[1];
Obj _3517327_37 = makeCons(_3517326_37, Nil);
Obj _3517328_37 = makeCons(tmp, _3517327_37);
Obj _3517329_37 = makeCons(__symbolTable[89], _3517328_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[97]), closureRef(R[0], 1), closureRef(R[0], 2), _3517329_37);
return;
}
case 4:
{
Obj _3517324_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj tmp = _3517324_37;
Obj _3517325_37 = makeCons(op, args);
R[1] = tmp;
struct frame __curr = {
.fn = clofun12,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[88]), _3517325_37, tmp);
return;
}
case 5:
{
Obj _3517315_37= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj provided = _3517315_37;
Obj _3517316_37 = PRIM_EQ(required, provided);
if (True == _3517316_37) {
Obj _3517317_37 = makeCons(op, Nil);
Obj _3517318_37 = makeCons(__symbolTable[90], _3517317_37);
R[1] = args;
R[2] = _3517318_37;
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
Obj _3517322_37 = PRIM_GT(required, provided);
if (True == _3517322_37) {
Obj _3517323_37 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
struct frame __curr = {
.fn = clofun12,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), _3517323_37, Nil);
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
Obj _3517314_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj required = _3517314_37;
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
Obj _3517313_37= co->res;
Obj op = R[1];
Obj args = R[2];
Obj _3517033_37 = R[3];
if (True == _3517313_37) {
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
coraCall0(co, _3517033_37);
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
Obj _3517309_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[92]), _3517309_37, closureRef(R[0], 2));
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517017_37 = R[1];
Obj _3517018_37 = R[2];
Obj _3517297_37 = PRIM_EQ(MAKE_NUMBER(0), _3517017_37);
if (True == _3517297_37) {
coraReturn(co, _3517018_37);
return;
} else {
Obj _3517298_37 = PRIM_SUB(_3517017_37, MAKE_NUMBER(1));
Obj _3517299_37 = primGenSym();
Obj _3517300_37 = makeCons(_3517299_37, _3517018_37);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[98]), _3517298_37, _3517300_37);
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
Obj _3517295_37= co->res;
Obj find = R[1];
if (True == _3517295_37) {
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
Obj _3517294_37= co->res;
Obj find = _3517294_37;
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
Obj _3517292_37= co->res;
Obj find = R[1];
if (True == _3517292_37) {
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
Obj _3517291_37= co->res;
Obj find = _3517291_37;
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
Obj _3517288_37= co->res;
Obj _3517289_37 = primNot(_3517288_37);
coraReturn(co, _3517289_37);
return;
}
case 2:
{
Obj _3517287_37= co->res;
struct frame __curr = {
.fn = clofun7,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[103]), _3517287_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517013_37 = R[1];
Obj _3517014_37 = R[2];
Obj _3517211_37 = PRIM_EQ(Nil, _3517014_37);
if (True == _3517211_37) {
coraReturn(co, False);
return;
} else {
Obj _3517212_37 = PRIM_ISCONS(_3517014_37);
if (True == _3517212_37) {
Obj _3517213_37 = PRIM_CAR(_3517014_37);
Obj hd = _3517213_37;
Obj _3517214_37 = PRIM_CDR(_3517014_37);
Obj tl = _3517214_37;
R[1] = _3517013_37;
R[2] = tl;
struct frame __curr = {
.fn = clofun6,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[124]), _3517013_37, hd);
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
Obj _3517215_37= co->res;
Obj _3517013_37 = R[1];
Obj tl = R[2];
Obj _3517216_37 = PRIM_LT(_3517215_37, MAKE_NUMBER(0));
if (True == _3517216_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[123]), _3517013_37, tl);
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
Obj _3517007_37 = R[1];
Obj _3517008_37 = R[2];
Obj _3517009_37 = R[3];
Obj _3517200_37 = PRIM_EQ(Nil, _3517009_37);
if (True == _3517200_37) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj _3517011_37 = makeNative(1, clofun3, 0, 3, _3517009_37, _3517007_37, _3517008_37);
Obj _3517205_37 = PRIM_ISCONS(_3517009_37);
if (True == _3517205_37) {
Obj _3517206_37 = PRIM_CAR(_3517009_37);
Obj a = _3517206_37;
Obj _3517207_37 = PRIM_CDR(_3517009_37);
Obj _3517208_37 = PRIM_EQ(_3517008_37, a);
if (True == _3517208_37) {
coraReturn(co, _3517007_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3517011_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3517011_37);
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
Obj _3517201_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517201_37) {
Obj _3517202_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517203_37 = PRIM_CDR(closureRef(R[0], 0));
Obj b = _3517203_37;
Obj _3517204_37 = PRIM_ADD(closureRef(R[0], 1), MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[125]), _3517204_37, closureRef(R[0], 2), b);
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
Obj _3517002_37 = R[1];
Obj _3517003_37 = R[2];
Obj _3517004_37 = R[3];
Obj _3517194_37 = PRIM_EQ(Nil, _3517004_37);
if (True == _3517194_37) {
coraReturn(co, _3517003_37);
return;
} else {
Obj _3517195_37 = PRIM_ISCONS(_3517004_37);
if (True == _3517195_37) {
Obj _3517196_37 = PRIM_CAR(_3517004_37);
Obj x = _3517196_37;
Obj _3517197_37 = PRIM_CDR(_3517004_37);
Obj y = _3517197_37;
R[1] = _3517002_37;
R[2] = y;
struct frame __curr = {
.fn = clofun2,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, _3517002_37, _3517003_37, x);
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
Obj _3517198_37= co->res;
Obj _3517002_37 = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[126]), _3517002_37, _3517198_37, y);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3516997_37 = R[1];
Obj _3516998_37 = R[2];
Obj _3517179_37 = PRIM_EQ(Nil, _3516998_37);
if (True == _3517179_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3517000_37 = makeNative(1, clofun0, 0, 2, _3516998_37, _3516997_37);
Obj _3517183_37 = PRIM_ISCONS(_3516998_37);
if (True == _3517183_37) {
Obj _3517184_37 = PRIM_CAR(_3516998_37);
Obj _3517185_37 = PRIM_ISCONS(_3517184_37);
if (True == _3517185_37) {
Obj _3517186_37 = PRIM_CAR(_3516998_37);
Obj _3517187_37 = PRIM_CAR(_3517186_37);
Obj x = _3517187_37;
Obj _3517188_37 = PRIM_CAR(_3516998_37);
Obj _3517189_37 = PRIM_CDR(_3517188_37);
Obj y = _3517189_37;
Obj _3517190_37 = PRIM_CDR(_3516998_37);
Obj _3517191_37 = PRIM_EQ(_3516997_37, x);
if (True == _3517191_37) {
Obj _3517192_37 = makeCons(x, y);
coraReturn(co, _3517192_37);
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
}
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3517180_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3517180_37) {
Obj _3517181_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3517182_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3517182_37;
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

