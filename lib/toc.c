#include "types.h"
#include "runtime.h"

static int packageID = -1;
static void clofun205(struct Cora* co, int label, Obj *R);
static void clofun204(struct Cora* co, int label, Obj *R);
static void clofun203(struct Cora* co, int label, Obj *R);
static void clofun202(struct Cora* co, int label, Obj *R);
static void clofun201(struct Cora* co, int label, Obj *R);
static void clofun200(struct Cora* co, int label, Obj *R);
static void clofun199(struct Cora* co, int label, Obj *R);
static void clofun198(struct Cora* co, int label, Obj *R);
static void clofun197(struct Cora* co, int label, Obj *R);
static void clofun196(struct Cora* co, int label, Obj *R);
static void clofun195(struct Cora* co, int label, Obj *R);
static void clofun194(struct Cora* co, int label, Obj *R);
static void clofun193(struct Cora* co, int label, Obj *R);
static void clofun192(struct Cora* co, int label, Obj *R);
static void clofun191(struct Cora* co, int label, Obj *R);
static void clofun190(struct Cora* co, int label, Obj *R);
static void clofun189(struct Cora* co, int label, Obj *R);
static void clofun188(struct Cora* co, int label, Obj *R);
static void clofun187(struct Cora* co, int label, Obj *R);
static void clofun186(struct Cora* co, int label, Obj *R);
static void clofun185(struct Cora* co, int label, Obj *R);
static void clofun184(struct Cora* co, int label, Obj *R);
static void clofun183(struct Cora* co, int label, Obj *R);
static void clofun182(struct Cora* co, int label, Obj *R);
static void clofun181(struct Cora* co, int label, Obj *R);
static void clofun180(struct Cora* co, int label, Obj *R);
static void clofun179(struct Cora* co, int label, Obj *R);
static void clofun178(struct Cora* co, int label, Obj *R);
static void clofun177(struct Cora* co, int label, Obj *R);
static void clofun176(struct Cora* co, int label, Obj *R);
static void clofun175(struct Cora* co, int label, Obj *R);
static void clofun174(struct Cora* co, int label, Obj *R);
static void clofun173(struct Cora* co, int label, Obj *R);
static void clofun172(struct Cora* co, int label, Obj *R);
static void clofun171(struct Cora* co, int label, Obj *R);
static void clofun170(struct Cora* co, int label, Obj *R);
static void clofun169(struct Cora* co, int label, Obj *R);
static void clofun168(struct Cora* co, int label, Obj *R);
static void clofun167(struct Cora* co, int label, Obj *R);
static void clofun166(struct Cora* co, int label, Obj *R);
static void clofun165(struct Cora* co, int label, Obj *R);
static void clofun164(struct Cora* co, int label, Obj *R);
static void clofun163(struct Cora* co, int label, Obj *R);
static void clofun162(struct Cora* co, int label, Obj *R);
static void clofun161(struct Cora* co, int label, Obj *R);
static void clofun160(struct Cora* co, int label, Obj *R);
static void clofun159(struct Cora* co, int label, Obj *R);
static void clofun158(struct Cora* co, int label, Obj *R);
static void clofun157(struct Cora* co, int label, Obj *R);
static void clofun156(struct Cora* co, int label, Obj *R);
static void clofun155(struct Cora* co, int label, Obj *R);
static void clofun154(struct Cora* co, int label, Obj *R);
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
__symbolTable[90] = bindSymbol(co, intern("%const"));
__symbolTable[91] = bindSymbol(co, intern("quote"));
__symbolTable[92] = bindSymbol(co, intern("%global"));
__symbolTable[93] = bindSymbol(co, intern("cora/lib/toc#add-symbol-to-list"));
__symbolTable[94] = bindSymbol(co, intern("cora/init#elem?"));
__symbolTable[95] = bindSymbol(co, intern("do"));
__symbolTable[96] = bindSymbol(co, intern("let"));
__symbolTable[97] = bindSymbol(co, intern("if"));
__symbolTable[98] = bindSymbol(co, intern("cora/init#append"));
__symbolTable[99] = bindSymbol(co, intern("lambda"));
__symbolTable[100] = bindSymbol(co, intern("%builtin"));
__symbolTable[101] = bindSymbol(co, intern("cora/init#length"));
__symbolTable[102] = bindSymbol(co, intern("cora/init#map"));
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
co->ctx.fn = clofun205;
co->ctx.label = 0;
}

static void clofun205(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun205, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/toc/internal"));
return;
}
case 1:
{
Obj x9223090566220561952= co->res;
Obj x9223090566220571616 = primSet(co, getBinding(co, packageID, 34).name, makeNative(co->gc, 3, clofun154, 2, 0));
Obj x9223090566220574272 = primSet(co, getBinding(co, packageID, 33).name, makeNative(co->gc, 3, clofun157, 2, 0));
Obj x9223090566220595200 = primSet(co, getBinding(co, packageID, 32).name, makeNative(co->gc, 7, clofun159, 3, 0));
Obj x9223090566220584864 = primSet(co, getBinding(co, packageID, 31).name, makeNative(co->gc, 4, clofun161, 3, 0));
Obj x9223090566220572384 = primSet(co, getBinding(co, packageID, 29).name, makeNative(co->gc, 4, clofun164, 3, 0));
Obj x9223090566220456128 = primSet(co, getBinding(co, packageID, 28).name, makeNative(co->gc, 2, clofun170, 1, 0));
Obj x9223090566219550336 = primSet(co, getBinding(co, packageID, 23).name, makeNative(co->gc, 5, clofun179, 4, 0));
Obj x9223090566219489088 = primSet(co, getBinding(co, packageID, 13).name, makeNative(co->gc, 2, clofun183, 1, 0));
Obj x9223090566219202784 = primSet(co, getBinding(co, packageID, 12).name, makeNative(co->gc, 3, clofun189, 2, 0));
Obj x9223090566219203936 = primSet(co, getBinding(co, packageID, 11).name, makeNative(co->gc, 3, clofun190, 2, 0));
Obj x9223090566218780736 = primSet(co, getBinding(co, packageID, 8).name, makeNative(co->gc, 2, clofun199, 1, 0));
Obj x9223090566218781312 = primSet(co, getBinding(co, packageID, 9).name, False);
Obj x9223090566218782720 = primSet(co, getBinding(co, packageID, 7).name, makeNative(co->gc, 2, clofun200, 1, 0));
Obj x9223090566218685760 = primSet(co, getBinding(co, packageID, 5).name, makeNative(co->gc, 2, clofun203, 1, 0));
Obj x9223090566218518720 = primSet(co, getBinding(co, packageID, 2).name, makeNative(co->gc, 4, clofun204, 2, 0));
coraReturn(co, x9223090566218518720);
return;
}
case 2:
{
Obj x9223090566218952288= co->res;
Obj x9223090566218952576 = primSet(co, getBinding(co, packageID, 135).name, Nil);
Obj x9223090566218732640 = primSet(co, getBinding(co, packageID, 134).name, makeNative(co->gc, 3, clofun3, 2, 0));
Obj x9223090566218735552 = primSet(co, getBinding(co, packageID, 132).name, makeNative(co->gc, 4, clofun6, 3, 0));
Obj x9223090566218647456 = primSet(co, getBinding(co, packageID, 131).name, makeNative(co->gc, 4, clofun10, 3, 0));
Obj x9223090566218648032 = primSet(co, getBinding(co, packageID, 130).name, makeNative(co->gc, 3, clofun11, 2, 0));
Obj x9223090566218519872 = primSet(co, getBinding(co, packageID, 129).name, makeNative(co->gc, 3, clofun14, 2, 0));
Obj x9223090566218520896 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj x9223090566218520928 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566218520896);
Obj x9223090566218520960 = makeCons(co->gc, getBinding(co, packageID, 127).name, x9223090566218520928);
Obj x9223090566218521760 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj x9223090566218521792 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566218521760);
Obj x9223090566218521824 = makeCons(co->gc, getBinding(co, packageID, 126).name, x9223090566218521792);
Obj x9223090566218436608 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj x9223090566218436640 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566218436608);
Obj x9223090566218436672 = makeCons(co->gc, getBinding(co, packageID, 125).name, x9223090566218436640);
Obj x9223090566220103680 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj x9223090566220103712 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220103680);
Obj x9223090566220103744 = makeCons(co->gc, getBinding(co, packageID, 124).name, x9223090566220103712);
Obj x9223090566220104544 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj x9223090566220104576 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566220104544);
Obj x9223090566220104608 = makeCons(co->gc, getBinding(co, packageID, 123).name, x9223090566220104576);
Obj x9223090566220105408 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj x9223090566220105440 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220105408);
Obj x9223090566220105472 = makeCons(co->gc, getBinding(co, packageID, 122).name, x9223090566220105440);
Obj x9223090566220106272 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj x9223090566220106304 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220106272);
Obj x9223090566220106336 = makeCons(co->gc, getBinding(co, packageID, 121).name, x9223090566220106304);
Obj x9223090566220107136 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj x9223090566220107168 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220107136);
Obj x9223090566220107200 = makeCons(co->gc, getBinding(co, packageID, 120).name, x9223090566220107168);
Obj x9223090566220017888 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj x9223090566220017920 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220017888);
Obj x9223090566220017952 = makeCons(co->gc, getBinding(co, packageID, 119).name, x9223090566220017920);
Obj x9223090566220018752 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj x9223090566220018784 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220018752);
Obj x9223090566220018816 = makeCons(co->gc, getBinding(co, packageID, 118).name, x9223090566220018784);
Obj x9223090566220019616 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj x9223090566220019648 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220019616);
Obj x9223090566220019680 = makeCons(co->gc, getBinding(co, packageID, 117).name, x9223090566220019648);
Obj x9223090566220020480 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj x9223090566220020512 = makeCons(co->gc, MAKE_NUMBER(2), x9223090566220020480);
Obj x9223090566220020544 = makeCons(co->gc, getBinding(co, packageID, 116).name, x9223090566220020512);
Obj x9223090566220021344 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj x9223090566220021376 = makeCons(co->gc, MAKE_NUMBER(0), x9223090566220021344);
Obj x9223090566220021408 = makeCons(co->gc, getBinding(co, packageID, 115).name, x9223090566220021376);
Obj x9223090566219903424 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj x9223090566219903456 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566219903424);
Obj x9223090566219903488 = makeCons(co->gc, getBinding(co, packageID, 114).name, x9223090566219903456);
Obj x9223090566219904288 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj x9223090566219904320 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566219904288);
Obj x9223090566219904352 = makeCons(co->gc, getBinding(co, packageID, 113).name, x9223090566219904320);
Obj x9223090566219905152 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj x9223090566219905184 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566219905152);
Obj x9223090566219905216 = makeCons(co->gc, getBinding(co, packageID, 112).name, x9223090566219905184);
Obj x9223090566219906016 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj x9223090566219906048 = makeCons(co->gc, MAKE_NUMBER(1), x9223090566219906016);
Obj x9223090566219906080 = makeCons(co->gc, getBinding(co, packageID, 111).name, x9223090566219906048);
Obj x9223090566219906144 = makeCons(co->gc, x9223090566219906080, Nil);
Obj x9223090566219906176 = makeCons(co->gc, x9223090566219905216, x9223090566219906144);
Obj x9223090566219906208 = makeCons(co->gc, x9223090566219904352, x9223090566219906176);
Obj x9223090566219906240 = makeCons(co->gc, x9223090566219903488, x9223090566219906208);
Obj x9223090566219906272 = makeCons(co->gc, x9223090566220021408, x9223090566219906240);
Obj x9223090566219906304 = makeCons(co->gc, x9223090566220020544, x9223090566219906272);
Obj x9223090566219906336 = makeCons(co->gc, x9223090566220019680, x9223090566219906304);
Obj x9223090566219906368 = makeCons(co->gc, x9223090566220018816, x9223090566219906336);
Obj x9223090566219906400 = makeCons(co->gc, x9223090566220017952, x9223090566219906368);
Obj x9223090566219906432 = makeCons(co->gc, x9223090566220107200, x9223090566219906400);
Obj x9223090566219906464 = makeCons(co->gc, x9223090566220106336, x9223090566219906432);
Obj x9223090566219906496 = makeCons(co->gc, x9223090566220105472, x9223090566219906464);
Obj x9223090566219906528 = makeCons(co->gc, x9223090566220104608, x9223090566219906496);
Obj x9223090566219906560 = makeCons(co->gc, x9223090566220103744, x9223090566219906528);
Obj x9223090566219906592 = makeCons(co->gc, x9223090566218436672, x9223090566219906560);
Obj x9223090566219906624 = makeCons(co->gc, x9223090566218521824, x9223090566219906592);
Obj x9223090566219906656 = makeCons(co->gc, x9223090566218520960, x9223090566219906624);
Obj x9223090566219906688 = primSet(co, getBinding(co, packageID, 128).name, x9223090566219906656);
Obj x9223090566219719232 = primSet(co, getBinding(co, packageID, 110).name, makeNative(co->gc, 2, clofun15, 1, 0));
Obj x9223090566219720288 = primSet(co, getBinding(co, packageID, 108).name, makeNative(co->gc, 2, clofun16, 1, 0));
Obj x9223090566219721344 = primSet(co, getBinding(co, packageID, 106).name, makeNative(co->gc, 2, clofun17, 1, 0));
Obj x9223090566219547392 = primSet(co, getBinding(co, packageID, 104).name, makeNative(co->gc, 3, clofun20, 2, 0));
Obj x9223090566218784448 = primSet(co, getBinding(co, packageID, 103).name, makeNative(co->gc, 4, clofun34, 3, 0));
Obj x9223090566218684096 = primSet(co, getBinding(co, packageID, 87).name, makeNative(co->gc, 3, clofun38, 2, 0));
Obj x9223090566218648288 = primSet(co, getBinding(co, packageID, 86).name, makeNative(co->gc, 3, clofun42, 2, 0));
Obj x9223090566220020352 = primSet(co, getBinding(co, packageID, 85).name, makeNative(co->gc, 2, clofun50, 1, 0));
Obj x9223090566219092992 = primSet(co, getBinding(co, packageID, 82).name, makeNative(co->gc, 2, clofun63, 1, 0));
Obj x9223090566218520000 = primSet(co, getBinding(co, packageID, 77).name, makeNative(co->gc, 3, clofun69, 2, 0));
Obj x9223090566218521088 = primSet(co, getBinding(co, packageID, 76).name, makeNative(co->gc, 2, clofun70, 1, 0));
Obj x9223090566219905664 = primSet(co, getBinding(co, packageID, 75).name, makeNative(co->gc, 3, clofun82, 2, 0));
Obj x9223090566219518336 = primSet(co, getBinding(co, packageID, 74).name, makeNative(co->gc, 4, clofun87, 3, 0));
Obj x9223090566219386304 = primSet(co, getBinding(co, packageID, 69).name, makeNative(co->gc, 3, clofun94, 2, 0));
Obj x9223090566219092736 = primSet(co, getBinding(co, packageID, 67).name, makeNative(co->gc, 4, clofun100, 3, 0));
Obj x9223090566218949792 = primSet(co, getBinding(co, packageID, 66).name, makeNative(co->gc, 5, clofun105, 4, 0));
Obj x9223090566218951744 = primSet(co, getBinding(co, packageID, 64).name, makeNative(co->gc, 3, clofun107, 2, 0));
Obj x9223090566218783264 = primSet(co, getBinding(co, packageID, 63).name, makeNative(co->gc, 2, clofun109, 1, 0));
Obj x9223090566218438720 = primSet(co, getBinding(co, packageID, 62).name, makeNative(co->gc, 6, clofun113, 2, 0));
Obj x9223090566218224736 = primSet(co, getBinding(co, packageID, 60).name, makeNative(co->gc, 4, clofun114, 2, 0));
Obj x9223090566218226880 = primSet(co, getBinding(co, packageID, 72).name, makeNative(co->gc, 3, clofun115, 2, 0));
Obj x9223090566217933728 = primSet(co, getBinding(co, packageID, 93).name, makeNative(co->gc, 4, clofun116, 2, 0));
Obj x9223090566217935936 = primSet(co, getBinding(co, packageID, 57).name, makeNative(co->gc, 4, clofun117, 3, 0));
Obj x9223090566217936512 = primSet(co, getBinding(co, packageID, 56).name, makeNative(co->gc, 3, clofun118, 2, 0));
Obj x9223090566220449248 = primSet(co, getBinding(co, packageID, 55).name, makeNative(co->gc, 6, clofun120, 5, 0));
Obj x9223090566220451648 = primSet(co, getBinding(co, packageID, 51).name, makeNative(co->gc, 6, clofun122, 5, 0));
Obj x9223090566218732064 = primSet(co, getBinding(co, packageID, 52).name, makeNative(co->gc, 6, clofun136, 5, 0));
Obj x9223090566218647040 = primSet(co, getBinding(co, packageID, 49).name, makeNative(co->gc, 6, clofun140, 5, 0));
Obj x9223090566218439936 = primSet(co, getBinding(co, packageID, 46).name, makeNative(co->gc, 8, clofun142, 5, 0));
Obj x9223090566218224000 = primSet(co, getBinding(co, packageID, 48).name, makeNative(co->gc, 3, clofun143, 2, 0));
Obj x9223090566218226176 = primSet(co, getBinding(co, packageID, 45).name, makeNative(co->gc, 3, clofun144, 2, 0));
Obj x9223090566218227104 = primSet(co, getBinding(co, packageID, 44).name, makeNative(co->gc, 3, clofun145, 2, 0));
Obj x9223090566217932928 = primSet(co, getBinding(co, packageID, 43).name, makeNative(co->gc, 2, clofun146, 1, 0));
Obj x9223090566217933760 = primSet(co, getBinding(co, packageID, 42).name, makeNative(co->gc, 2, clofun147, 1, 0));
Obj x9223090566217934336 = primSet(co, getBinding(co, packageID, 41).name, makeNative(co->gc, 2, clofun148, 1, 0));
Obj x9223090566217776992 = primSet(co, getBinding(co, packageID, 40).name, makeNative(co->gc, 3, clofun149, 1, 0));
Obj x9223090566220560896 = primSet(co, getBinding(co, packageID, 38).name, makeNative(co->gc, 3, clofun152, 2, 0));
saveCont(co, clofun205, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 37)), getBinding(co, packageID, 36).name, makeNative(co->gc, 2, clofun153, 1, 0));
return;
}
case 3:
{
Obj x9223090566218952032= co->res;
saveCont(co, clofun205, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/hash-h"));
return;
}
case 4:
{
Obj x9223090566218951776= co->res;
saveCont(co, clofun205, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/io"));
return;
}
}
}

static void clofun204(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj from = R[1];
Obj to = R[2];
Obj x9223090566218645600 = primGenSym(co);
Obj globals = x9223090566218645600;
Obj x9223090566218646144 = primSet(co, globals, Nil);
R[1] = from;
R[2] = to;
R[3] = globals;
saveCont(co, clofun204, 9, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 34)), globals);
return;
}
case 1:
{
Obj x9223090566218649472= co->res;
Obj stream = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 0)), stream);
return;
}
case 2:
{
Obj x9223090566218649440= co->res;
Obj bc = R[1];
Obj stream = R[2];
R[1] = stream;
saveCont(co, clofun204, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 29)), stream, bc, x9223090566218649440);
return;
}
case 3:
{
Obj x9223090566218648640= co->res;
Obj globals = R[1];
Obj bc = R[2];
Obj stream = x9223090566218648640;
R[1] = bc;
R[2] = stream;
saveCont(co, clofun204, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), globals);
return;
}
case 4:
{
Obj x9223090566218648384= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = x9223090566218648384;
R[1] = globals;
R[2] = bc;
saveCont(co, clofun204, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 1)), to);
return;
}
case 5:
{
Obj x9223090566218648352= co->res;
Obj x9223090566218646848 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
saveCont(co, clofun204, 4, R);
coraCall1(co, x9223090566218646848, x9223090566218648352);
return;
}
case 6:
{
Obj x9223090566218648320= co->res;
Obj x9223090566218646848 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x9223090566218646848;
R[2] = to;
R[3] = globals;
saveCont(co, clofun204, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 3)), x9223090566218648320);
return;
}
case 7:
{
Obj x9223090566218648256= co->res;
Obj x9223090566218646848 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x9223090566218646848;
R[2] = to;
R[3] = globals;
saveCont(co, clofun204, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 8)), x9223090566218648256);
return;
}
case 8:
{
Obj x9223090566218648224= co->res;
Obj x9223090566218646848 = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x9223090566218646848;
R[2] = to;
R[3] = globals;
saveCont(co, clofun204, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 5)), x9223090566218648224);
return;
}
case 9:
{
Obj x9223090566218646848= co->res;
Obj from = R[1];
Obj to = R[2];
Obj globals = R[3];
R[1] = x9223090566218646848;
R[2] = to;
R[3] = globals;
saveCont(co, clofun204, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 7)), from);
return;
}
}
}

static void clofun203(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sexp = R[1];
Obj x9223090566218683904 = makeNative(co->gc, 2, clofun202, 0, 1, sexp);
Obj x9223090566218732800 = PRIM_ISCONS(sexp);
if (True == x9223090566218732800) {
Obj x9223090566218733344 = PRIM_CAR(sexp);
Obj x9223090566218733376 = PRIM_EQ(getBinding(co, packageID, 24).name, x9223090566218733344);
if (True == x9223090566218733376) {
Obj x9223090566218734208 = PRIM_CDR(sexp);
Obj x9223090566218734240 = PRIM_ISCONS(x9223090566218734208);
if (True == x9223090566218734240) {
Obj x9223090566218735520 = PRIM_CDR(sexp);
Obj x9223090566218735584 = PRIM_CAR(x9223090566218735520);
Obj x9223090566218682592 = PRIM_EQ(makeCString(co->gc, "cora/lib/resolve"), x9223090566218735584);
if (True == x9223090566218682592) {
Obj x9223090566218684224 = PRIM_CDR(sexp);
Obj x9223090566218684448 = PRIM_CDR(x9223090566218684224);
Obj __ = x9223090566218684448;
coraReturn(co, sexp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683904);
return;
}
}
}
}

static void clofun202(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684352 = makeNative(co->gc, 1, clofun201, 0, 0);
Obj __ = closureRef(R[0], 0);
saveCont(co, clofun202, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), makeCString(co->gc, "cora/lib/resolve"));
return;
}
case 1:
{
Obj x9223090566218732352= co->res;
coraReturn(co, closureRef(R[0], 0));
return;
}
case 2:
{
Obj x9223090566218732320= co->res;
Obj x9223090566218732096 = R[1];
saveCont(co, clofun202, 1, R);
coraCall1(co, x9223090566218732096, x9223090566218732320);
return;
}
case 3:
{
Obj x9223090566218732096= co->res;
R[1] = x9223090566218732096;
saveCont(co, clofun202, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 3)), closureRef(R[0], 0));
return;
}
case 4:
{
Obj x9223090566218784608= co->res;
saveCont(co, clofun202, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), getBinding(co, packageID, 4).name);
return;
}
}
}

static void clofun201(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun200(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj file_45path = R[1];
saveCont(co, clofun200, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 6)), file_45path);
return;
}
case 1:
{
Obj x9223090566218782688= co->res;
Obj sexp = R[1];
coraReturn(co, sexp);
return;
}
case 2:
{
Obj x9223090566218782368= co->res;
Obj sexp = x9223090566218782368;
R[1] = sexp;
saveCont(co, clofun200, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), sexp);
return;
}
}
}

static void clofun199(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682400 = R[1];
Obj x9223090566218682432 = makeNative(co->gc, 1, clofun196, 0, 1, x9223090566218682400);
Obj x9223090566218949440 = PRIM_ISCONS(x9223090566218682400);
if (True == x9223090566218949440) {
Obj x9223090566218950176 = PRIM_CAR(x9223090566218682400);
Obj x9223090566218950208 = PRIM_EQ(getBinding(co, packageID, 24).name, x9223090566218950176);
if (True == x9223090566218950208) {
Obj x9223090566218950528 = PRIM_CDR(x9223090566218682400);
Obj more = x9223090566218950528;
Obj x9223090566218950976 = makeCons(co->gc, getBinding(co, packageID, 24).name, more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), x9223090566218950976, makeNative(co->gc, 2, clofun198, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682432);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682432);
return;
}
}
}
}

static void clofun198(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), body, Nil, Nil, makeNative(co->gc, 3, clofun197, 2, 0));
return;
}
}
}

static void clofun197(struct Cora* co, int label, Obj *R) {
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

static void clofun196(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683104 = makeNative(co->gc, 1, clofun193, 0, 1, closureRef(R[0], 0));
Obj x9223090566219093568 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219093568) {
Obj x9223090566219094080 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219094240 = PRIM_EQ(getBinding(co, packageID, 25).name, x9223090566219094080);
if (True == x9223090566219094240) {
Obj x9223090566219094624 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566219094624;
Obj x9223090566219095168 = makeCons(co->gc, getBinding(co, packageID, 25).name, more);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), x9223090566219095168, makeNative(co->gc, 2, clofun195, 1, 0));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683104);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683104);
return;
}
}
}
}

static void clofun195(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), body, Nil, Nil, makeNative(co->gc, 3, clofun194, 2, 0));
return;
}
}
}

static void clofun194(struct Cora* co, int label, Obj *R) {
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

static void clofun193(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683680 = makeNative(co->gc, 1, clofun191, 0, 0);
Obj single = closureRef(R[0], 0);
Obj x9223090566219206208 = makeCons(co->gc, single, Nil);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), x9223090566219206208, Nil, Nil, makeNative(co->gc, 3, clofun192, 2, 1, single));
return;
}
}
}

static void clofun192(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
R[1] = type;
R[2] = code;
saveCont(co, clofun192, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 13)), closureRef(R[0], 0));
return;
}
case 1:
{
Obj x9223090566219092960= co->res;
Obj body = R[1];
if (True == x9223090566219092960) {
coraReturn(co, Nil);
return;
} else {
Obj x9223090566219093216 = makeCons(co->gc, getBinding(co, packageID, 25).name, body);
coraReturn(co, x9223090566219093216);
return;
}
}
case 2:
{
Obj x9223090566219092512= co->res;
Obj body = x9223090566219092512;
R[1] = body;
saveCont(co, clofun192, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), body);
return;
}
case 3:
{
Obj x9223090566219092128= co->res;
Obj type = R[1];
Obj code = R[2];
if (True == x9223090566219092128) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun192, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 11)), type, code);
return;
}
}
}
}

static void clofun191(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun190(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj type = R[1];
Obj code = R[2];
R[1] = type;
R[2] = code;
saveCont(co, clofun190, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 10)), getBinding(co, packageID, 9).name, False);
return;
}
case 1:
{
Obj x9223090566219203712= co->res;
Obj type = R[1];
Obj code = R[2];
if (True == x9223090566219203712) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), type, code);
return;
} else {
coraReturn(co, code);
return;
}
}
}
}

static void clofun189(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683936 = R[1];
Obj x9223090566218683968 = R[2];
Obj x9223090566218684064 = makeNative(co->gc, 2, clofun188, 0, 2, x9223090566218683936, x9223090566218683968);
Obj x9223090566219312480 = PRIM_ISCONS(x9223090566218683936);
if (True == x9223090566219312480) {
Obj x9223090566219276480 = PRIM_CAR(x9223090566218683936);
Obj x9223090566219276608 = PRIM_EQ(getBinding(co, packageID, 24).name, x9223090566219276480);
if (True == x9223090566219276608) {
Obj x9223090566219277152 = PRIM_CDR(x9223090566218683936);
Obj x9223090566219277184 = PRIM_ISCONS(x9223090566219277152);
if (True == x9223090566219277184) {
Obj x9223090566219278144 = PRIM_CDR(x9223090566218683936);
Obj x9223090566219278176 = PRIM_CAR(x9223090566219278144);
Obj name = x9223090566219278176;
Obj x9223090566219278848 = PRIM_CDR(x9223090566218683936);
Obj x9223090566219278880 = PRIM_CDR(x9223090566219278848);
Obj more = x9223090566219278880;
Obj k = x9223090566218683968;
R[1] = name;
saveCont(co, clofun189, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684064);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684064);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684064);
return;
}
}
case 1:
{
Obj x9223090566219279872= co->res;
Obj name = R[1];
Obj x9223090566219279968 = makeCons(co->gc, name, x9223090566219279872);
Obj x9223090566219280000 = makeCons(co->gc, getBinding(co, packageID, 24).name, x9223090566219279968);
coraReturn(co, x9223090566219280000);
return;
}
}
}

static void clofun188(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684480 = makeNative(co->gc, 2, clofun187, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566219389568 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219389568) {
Obj x9223090566219390336 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219390368 = PRIM_ISCONS(x9223090566219390336);
if (True == x9223090566219390368) {
Obj x9223090566219383360 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219383392 = PRIM_CAR(x9223090566219383360);
Obj x9223090566219383424 = PRIM_EQ(getBinding(co, packageID, 27).name, x9223090566219383392);
if (True == x9223090566219383424) {
Obj x9223090566219384576 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219384608 = PRIM_CDR(x9223090566219384576);
Obj x9223090566219384640 = PRIM_ISCONS(x9223090566219384608);
if (True == x9223090566219384640) {
Obj x9223090566219385536 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219385632 = PRIM_CDR(x9223090566219385536);
Obj x9223090566219385664 = PRIM_CAR(x9223090566219385632);
Obj pkg = x9223090566219385664;
Obj x9223090566219309088 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219309120 = PRIM_CDR(x9223090566219309088);
Obj x9223090566219309152 = PRIM_CDR(x9223090566219309120);
Obj x9223090566219309184 = PRIM_EQ(Nil, x9223090566219309152);
if (True == x9223090566219309184) {
Obj x9223090566219309568 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566219309568;
Obj k = closureRef(R[0], 1);
Obj x9223090566219310560 = makeCons(co->gc, pkg, Nil);
Obj x9223090566219310592 = makeCons(co->gc, getBinding(co, packageID, 27).name, x9223090566219310560);
R[1] = x9223090566219310592;
saveCont(co, clofun188, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684480);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684480);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684480);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684480);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684480);
return;
}
}
case 1:
{
Obj x9223090566219310880= co->res;
Obj x9223090566219310592 = R[1];
Obj x9223090566219310912 = makeCons(co->gc, x9223090566219310592, x9223090566219310880);
coraReturn(co, x9223090566219310912);
return;
}
}
}

static void clofun187(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684992 = makeNative(co->gc, 1, clofun186, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566219408832 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219408832) {
Obj x9223090566219409568 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219409600 = PRIM_ISCONS(x9223090566219409568);
if (True == x9223090566219409600) {
Obj x9223090566219410688 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219410720 = PRIM_CAR(x9223090566219410688);
Obj x9223090566219410816 = PRIM_EQ(getBinding(co, packageID, 26).name, x9223090566219410720);
if (True == x9223090566219410816) {
Obj x9223090566219411360 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219411392 = PRIM_CDR(x9223090566219411360);
Obj symbols = x9223090566219411392;
Obj x9223090566219387360 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566219387360;
Obj k = closureRef(R[0], 1);
Obj x9223090566219388032 = makeCons(co->gc, getBinding(co, packageID, 26).name, symbols);
R[1] = x9223090566219388032;
saveCont(co, clofun187, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684992);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684992);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684992);
return;
}
}
case 1:
{
Obj x9223090566219388416= co->res;
Obj x9223090566219388032 = R[1];
Obj x9223090566219388480 = makeCons(co->gc, x9223090566219388032, x9223090566219388416);
coraReturn(co, x9223090566219388480);
return;
}
}
}

static void clofun186(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218685344 = makeNative(co->gc, 1, clofun185, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566219459136 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219459136) {
Obj x9223090566219459872 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219459904 = PRIM_EQ(getBinding(co, packageID, 25).name, x9223090566219459872);
if (True == x9223090566219459904) {
Obj x9223090566219460288 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566219460288;
Obj k = closureRef(R[0], 1);
saveCont(co, clofun186, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 12)), more, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218685344);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218685344);
return;
}
}
case 1:
{
Obj x9223090566219407904= co->res;
Obj x9223090566219407968 = makeCons(co->gc, getBinding(co, packageID, 25).name, x9223090566219407904);
coraReturn(co, x9223090566219407968);
return;
}
}
}

static void clofun185(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218685600 = makeNative(co->gc, 1, clofun184, 0, 0);
Obj other = closureRef(R[0], 0);
Obj k = closureRef(R[0], 1);
co->ctx.sp = R;
coraCall1(co, k, other);
return;
}
}
}

static void clofun184(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun183(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009952 = R[1];
Obj x9223090566219009984 = makeNative(co->gc, 1, clofun182, 0, 1, x9223090566219009952);
Obj x9223090566219492000 = PRIM_ISCONS(x9223090566219009952);
if (True == x9223090566219492000) {
Obj x9223090566219492832 = PRIM_CAR(x9223090566219009952);
Obj x9223090566219492864 = PRIM_EQ(getBinding(co, packageID, 14).name, x9223090566219492832);
if (True == x9223090566219492864) {
Obj x9223090566219485504 = PRIM_CDR(x9223090566219009952);
Obj x9223090566219485536 = PRIM_ISCONS(x9223090566219485504);
if (True == x9223090566219485536) {
Obj x9223090566219486272 = PRIM_CDR(x9223090566219009952);
Obj x9223090566219486304 = PRIM_CAR(x9223090566219486272);
Obj on = x9223090566219486304;
Obj x9223090566219487392 = PRIM_CDR(x9223090566219009952);
Obj x9223090566219487456 = PRIM_CDR(x9223090566219487392);
Obj x9223090566219487488 = PRIM_EQ(Nil, x9223090566219487456);
if (True == x9223090566219487488) {
Obj x9223090566219488000 = PRIM_EQ(on, True);
if (True == x9223090566219488000) {
coraReturn(co, True);
return;
} else {
Obj x9223090566219488384 = PRIM_EQ(on, False);
if (True == x9223090566219488384) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009984);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009984);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009984);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009984);
return;
}
}
}
}

static void clofun182(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683040 = makeNative(co->gc, 1, clofun181, 0, 1, closureRef(R[0], 0));
Obj x9223090566219519456 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219519456) {
Obj x9223090566219520128 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219520160 = PRIM_EQ(getBinding(co, packageID, 15).name, x9223090566219520128);
if (True == x9223090566219520160) {
Obj x9223090566219520864 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219520896 = PRIM_ISCONS(x9223090566219520864);
if (True == x9223090566219520896) {
Obj x9223090566219521408 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219521568 = PRIM_CAR(x9223090566219521408);
Obj on = x9223090566219521568;
Obj x9223090566219489856 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219489888 = PRIM_CDR(x9223090566219489856);
Obj x9223090566219489920 = PRIM_EQ(Nil, x9223090566219489888);
if (True == x9223090566219489920) {
Obj x9223090566219490208 = PRIM_EQ(on, True);
if (True == x9223090566219490208) {
coraReturn(co, True);
return;
} else {
Obj x9223090566219490656 = PRIM_EQ(on, False);
if (True == x9223090566219490656) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683040);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683040);
return;
}
}
}
}

static void clofun181(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683712 = makeNative(co->gc, 1, clofun180, 0, 0);
Obj __ = closureRef(R[0], 0);
coraReturn(co, False);
return;
}
}
}

static void clofun180(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun179(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008000 = R[1];
Obj x9223090566219008896 = R[2];
Obj x9223090566219008960 = R[3];
Obj x9223090566219009024 = R[4];
Obj x9223090566219009728 = makeNative(co->gc, 1, clofun178, 0, 4, x9223090566219008000, x9223090566219008896, x9223090566219008960, x9223090566219009024);
Obj x9223090566219548768 = PRIM_EQ(Nil, x9223090566219008000);
if (True == x9223090566219548768) {
Obj type = x9223090566219008896;
Obj code = x9223090566219008960;
Obj k = x9223090566219009024;
R[1] = code;
R[2] = k;
saveCont(co, clofun179, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), type);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009728);
return;
}
}
case 1:
{
Obj x9223090566219550080= co->res;
Obj k = R[1];
Obj x9223090566219549792 = R[2];
co->ctx.sp = R;
coraCall2(co, k, x9223090566219549792, x9223090566219550080);
return;
}
case 2:
{
Obj x9223090566219549792= co->res;
Obj code = R[1];
Obj k = R[2];
R[1] = k;
R[2] = x9223090566219549792;
saveCont(co, clofun179, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), code);
return;
}
}
}

static void clofun178(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683008 = makeNative(co->gc, 1, clofun176, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566219903840 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219903840) {
Obj x9223090566219904448 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219904512 = PRIM_ISCONS(x9223090566219904448);
if (True == x9223090566219904512) {
Obj x9223090566219905280 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219905344 = PRIM_CAR(x9223090566219905280);
Obj x9223090566219905376 = PRIM_EQ(getBinding(co, packageID, 14).name, x9223090566219905344);
if (True == x9223090566219905376) {
Obj x9223090566219906784 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219906816 = PRIM_CDR(x9223090566219906784);
Obj x9223090566219906880 = PRIM_ISCONS(x9223090566219906816);
if (True == x9223090566219906880) {
Obj x9223090566219719392 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219719424 = PRIM_CDR(x9223090566219719392);
Obj x9223090566219719488 = PRIM_CAR(x9223090566219719424);
Obj on = x9223090566219719488;
Obj x9223090566219720672 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219720704 = PRIM_CDR(x9223090566219720672);
Obj x9223090566219720736 = PRIM_CDR(x9223090566219720704);
Obj x9223090566219720800 = PRIM_EQ(Nil, x9223090566219720736);
if (True == x9223090566219720800) {
Obj x9223090566219721312 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566219721312;
Obj type = closureRef(R[0], 1);
Obj code = closureRef(R[0], 2);
Obj k = closureRef(R[0], 3);
Obj x9223090566218734752 = makeNative(co->gc, 2, clofun177, 1, 5, more, type, code, k, x9223090566218683008);
Obj x9223090566219547072 = PRIM_EQ(on, True);
if (True == x9223090566219547072) {
co->ctx.sp = R;
coraCall1(co, x9223090566218734752, True);
return;
} else {
Obj x9223090566219547488 = PRIM_EQ(on, False);
if (True == x9223090566219547488) {
co->ctx.sp = R;
coraCall1(co, x9223090566218734752, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566218734752, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683008);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683008);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683008);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683008);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683008);
return;
}
}
}
}

static void clofun177(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218734784 = R[1];
if (True == x9223090566218734784) {
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

static void clofun176(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684032 = makeNative(co->gc, 1, clofun174, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566220361024 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220361024) {
Obj x9223090566220361696 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220103776 = PRIM_ISCONS(x9223090566220361696);
if (True == x9223090566220103776) {
Obj x9223090566220104736 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220104768 = PRIM_CAR(x9223090566220104736);
Obj x9223090566220104896 = PRIM_EQ(getBinding(co, packageID, 15).name, x9223090566220104768);
if (True == x9223090566220104896) {
Obj x9223090566220105792 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220105824 = PRIM_CDR(x9223090566220105792);
Obj x9223090566220105856 = PRIM_ISCONS(x9223090566220105824);
if (True == x9223090566220105856) {
Obj x9223090566220106912 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220107072 = PRIM_CDR(x9223090566220106912);
Obj x9223090566220107104 = PRIM_CAR(x9223090566220107072);
Obj on = x9223090566220107104;
Obj x9223090566220018304 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220018336 = PRIM_CDR(x9223090566220018304);
Obj x9223090566220018560 = PRIM_CDR(x9223090566220018336);
Obj x9223090566220018592 = PRIM_EQ(Nil, x9223090566220018560);
if (True == x9223090566220018592) {
Obj x9223090566220018976 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566220018976;
Obj type = closureRef(R[0], 1);
Obj code = closureRef(R[0], 2);
Obj k = closureRef(R[0], 3);
Obj x9223090566219205056 = makeNative(co->gc, 2, clofun175, 1, 5, more, type, code, k, x9223090566218684032);
Obj x9223090566220020896 = PRIM_EQ(on, True);
if (True == x9223090566220020896) {
co->ctx.sp = R;
coraCall1(co, x9223090566219205056, True);
return;
} else {
Obj x9223090566220021504 = PRIM_EQ(on, False);
if (True == x9223090566220021504) {
co->ctx.sp = R;
coraCall1(co, x9223090566219205056, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566219205056, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684032);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684032);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684032);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684032);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684032);
return;
}
}
}
}

static void clofun175(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219205088 = R[1];
if (True == x9223090566219205088) {
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

static void clofun174(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684704 = makeNative(co->gc, 1, clofun173, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566220364448 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220364448) {
Obj x9223090566220365248 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220365280 = PRIM_ISCONS(x9223090566220365248);
if (True == x9223090566220365280) {
Obj x9223090566220357920 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220357952 = PRIM_CAR(x9223090566220357920);
Obj x9223090566220357984 = PRIM_EQ(getBinding(co, packageID, 16).name, x9223090566220357952);
if (True == x9223090566220357984) {
Obj x9223090566220358496 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220358528 = PRIM_CDR(x9223090566220358496);
Obj exp = x9223090566220358528;
Obj x9223090566220358848 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566220358848;
Obj type = closureRef(R[0], 1);
Obj code = closureRef(R[0], 2);
Obj k = closureRef(R[0], 3);
Obj x9223090566220359904 = makeCons(co->gc, getBinding(co, packageID, 25).name, exp);
Obj x9223090566220360032 = makeCons(co->gc, x9223090566220359904, type);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), more, x9223090566220360032, code, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684704);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684704);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684704);
return;
}
}
}
}

static void clofun173(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218685184 = makeNative(co->gc, 1, clofun172, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x9223090566220449952 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220449952) {
Obj x9223090566220450400 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220450432 = PRIM_ISCONS(x9223090566220450400);
if (True == x9223090566220450432) {
Obj x9223090566220451168 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220451264 = PRIM_CAR(x9223090566220451168);
Obj x9223090566220451296 = PRIM_EQ(getBinding(co, packageID, 18).name, x9223090566220451264);
if (True == x9223090566220451296) {
Obj x9223090566220361760 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220361792 = PRIM_CDR(x9223090566220361760);
Obj exp = x9223090566220361792;
Obj x9223090566220362080 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566220362080;
Obj type = closureRef(R[0], 1);
Obj code = closureRef(R[0], 2);
Obj k = closureRef(R[0], 3);
Obj x9223090566220363264 = makeCons(co->gc, getBinding(co, packageID, 17).name, exp);
Obj x9223090566220363328 = makeCons(co->gc, x9223090566220363264, type);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), more, x9223090566220363328, code, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218685184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218685184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218685184);
return;
}
}
}
}

static void clofun172(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218685632 = makeNative(co->gc, 1, clofun171, 0, 0);
Obj x9223090566220457888 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220457888) {
Obj x9223090566220458144 = PRIM_CAR(closureRef(R[0], 0));
Obj exp = x9223090566220458144;
Obj x9223090566220458400 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x9223090566220458400;
Obj type = closureRef(R[0], 1);
Obj code = closureRef(R[0], 2);
Obj k = closureRef(R[0], 3);
Obj x9223090566220448160 = makeCons(co->gc, exp, Nil);
Obj x9223090566220448192 = makeCons(co->gc, getBinding(co, packageID, 20).name, x9223090566220448160);
Obj x9223090566220448288 = makeCons(co->gc, x9223090566220448192, Nil);
Obj x9223090566220448320 = makeCons(co->gc, getBinding(co, packageID, 21).name, x9223090566220448288);
Obj x9223090566220448896 = makeCons(co->gc, getBinding(co, packageID, 19).name, Nil);
Obj x9223090566220448992 = makeCons(co->gc, x9223090566220448896, Nil);
Obj x9223090566220449024 = makeCons(co->gc, x9223090566220448320, x9223090566220448992);
Obj x9223090566220449056 = makeCons(co->gc, getBinding(co, packageID, 22).name, x9223090566220449024);
Obj x9223090566220449120 = makeCons(co->gc, x9223090566220449056, type);
Obj x9223090566220449504 = makeCons(co->gc, exp, code);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 23)), more, x9223090566220449120, x9223090566220449504, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218685632);
return;
}
}
}
}

static void clofun171(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun170(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683296 = R[1];
Obj x9223090566218683328 = makeNative(co->gc, 1, clofun169, 0, 1, x9223090566218683296);
Obj x9223090566220461344 = PRIM_ISCONS(x9223090566218683296);
if (True == x9223090566220461344) {
Obj x9223090566220461920 = PRIM_CAR(x9223090566218683296);
Obj x9223090566220461952 = PRIM_EQ(getBinding(co, packageID, 24).name, x9223090566220461920);
if (True == x9223090566220461952) {
Obj x9223090566220462432 = PRIM_CDR(x9223090566218683296);
Obj x9223090566220462464 = PRIM_ISCONS(x9223090566220462432);
if (True == x9223090566220462464) {
Obj x9223090566220462976 = PRIM_CDR(x9223090566218683296);
Obj x9223090566220463008 = PRIM_CAR(x9223090566220462976);
Obj __ = x9223090566220463008;
Obj x9223090566220463520 = PRIM_CDR(x9223090566218683296);
Obj x9223090566220463552 = PRIM_CDR(x9223090566220463520);
Obj remain = x9223090566220463552;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683328);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683328);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683328);
return;
}
}
}
}

static void clofun169(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683776 = makeNative(co->gc, 1, clofun168, 0, 1, closureRef(R[0], 0));
Obj x9223090566220480096 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220480096) {
Obj x9223090566220460128 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220460192 = PRIM_EQ(getBinding(co, packageID, 25).name, x9223090566220460128);
if (True == x9223090566220460192) {
Obj x9223090566220460512 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x9223090566220460512;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683776);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683776);
return;
}
}
}
}

static void clofun168(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684000 = makeNative(co->gc, 2, clofun167, 0, 1, closureRef(R[0], 0));
Obj x9223090566220476896 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220476896) {
Obj x9223090566220477504 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220477536 = PRIM_ISCONS(x9223090566220477504);
if (True == x9223090566220477536) {
Obj x9223090566220478272 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220478304 = PRIM_CAR(x9223090566220478272);
Obj x9223090566220478336 = PRIM_EQ(getBinding(co, packageID, 26).name, x9223090566220478304);
if (True == x9223090566220478336) {
Obj x9223090566220478784 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220478816 = PRIM_CDR(x9223090566220478784);
Obj more = x9223090566220478816;
Obj x9223090566220479168 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x9223090566220479168;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684000);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684000);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684000);
return;
}
}
}
}

static void clofun167(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684288 = makeNative(co->gc, 1, clofun166, 0, 1, closureRef(R[0], 0));
Obj x9223090566220573952 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220573952) {
Obj x9223090566220574432 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220574464 = PRIM_ISCONS(x9223090566220574432);
if (True == x9223090566220574464) {
Obj x9223090566220558688 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220558720 = PRIM_CAR(x9223090566220558688);
Obj x9223090566220558752 = PRIM_EQ(getBinding(co, packageID, 27).name, x9223090566220558720);
if (True == x9223090566220558752) {
Obj x9223090566220559392 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220559424 = PRIM_CDR(x9223090566220559392);
Obj x9223090566220559456 = PRIM_ISCONS(x9223090566220559424);
if (True == x9223090566220559456) {
Obj x9223090566220560064 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220560096 = PRIM_CDR(x9223090566220560064);
Obj x9223090566220560128 = PRIM_CAR(x9223090566220560096);
Obj pkg = x9223090566220560128;
Obj x9223090566220561024 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220561056 = PRIM_CDR(x9223090566220561024);
Obj x9223090566220561088 = PRIM_CDR(x9223090566220561056);
Obj x9223090566220561120 = PRIM_EQ(Nil, x9223090566220561088);
if (True == x9223090566220561120) {
Obj x9223090566220561376 = PRIM_CDR(closureRef(R[0], 0));
Obj remain = x9223090566220561376;
R[1] = remain;
saveCont(co, clofun167, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 136)), pkg);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684288);
return;
}
}
case 1:
{
Obj x9223090566220561664= co->res;
Obj remain = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 28)), remain);
return;
}
}
}

static void clofun166(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684672 = makeNative(co->gc, 1, clofun165, 0, 0);
Obj __ = closureRef(R[0], 0);
coraReturn(co, Nil);
return;
}
}
}

static void clofun165(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun164(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj bc = R[2];
Obj globals = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "#include \"types.h\"\n"));
return;
}
case 1:
{
Obj x9223090566220571872= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 33)), makeNative(co->gc, 2, clofun163, 1, 2, to, globals), bc);
return;
}
case 2:
{
Obj x9223090566220571840= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 31)), to, globals, x9223090566220571840);
return;
}
case 3:
{
Obj x9223090566220571168= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 70)), bc);
return;
}
case 4:
{
Obj x9223090566220570880= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "\n\n"));
return;
}
case 5:
{
Obj x9223090566220586176= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 33)), makeNative(co->gc, 2, clofun162, 1, 1, to), bc);
return;
}
case 6:
{
Obj x9223090566220585856= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "static int packageID = -1;\n"));
return;
}
case 7:
{
Obj x9223090566220585536= co->res;
Obj to = R[1];
Obj globals = R[2];
Obj bc = R[3];
R[1] = to;
R[2] = globals;
R[3] = bc;
saveCont(co, clofun164, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "#include \"runtime.h\"\n\n"));
return;
}
}
}

static void clofun163(struct Cora* co, int label, Obj *R) {
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

static void clofun162(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj group = R[1];
Obj x9223090566220586976 = PRIM_CAR(group);
saveCont(co, clofun162, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 45)), closureRef(R[0], 0), x9223090566220586976);
return;
}
case 1:
{
Obj x9223090566220570624= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, ";\n"));
return;
}
}
}

static void clofun161(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj globals = R[2];
Obj label = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun161, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "void entry(struct Cora *co, int label, Obj *R) {\n"));
return;
}
case 1:
{
Obj x9223090566220584608= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "co->ctx.label = 0;\n}\n\n"));
return;
}
case 2:
{
Obj x9223090566220584288= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun161, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj x9223090566220583968= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = to;
saveCont(co, clofun161, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), to, label);
return;
}
case 4:
{
Obj x9223090566220583648= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun161, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "co->ctx.fn = "));
return;
}
case 5:
{
Obj x9223090566220583328= co->res;
Obj label = R[1];
Obj to = R[2];
R[1] = label;
R[2] = to;
saveCont(co, clofun161, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "addPackage(co, packageID, __symbolTable);\n"));
return;
}
case 6:
{
Obj x9223090566220597408= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = label;
R[2] = to;
saveCont(co, clofun161, 5, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun160, 2, 1, to), MAKE_NUMBER(0), globals);
return;
}
case 7:
{
Obj x9223090566220597120= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun161, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, ");\n"));
return;
}
case 8:
{
Obj x9223090566220597088= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun161, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), to, x9223090566220597088);
return;
}
case 9:
{
Obj x9223090566220596544= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun161, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), globals);
return;
}
case 10:
{
Obj x9223090566220596192= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun161, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "Binding *__symbolTable = malloc(sizeof(Binding) * "));
return;
}
case 11:
{
Obj x9223090566220595872= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun161, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "if (packageID == -1) { packageID = packageIDAlloc(); }\n"));
return;
}
}
}

static void clofun160(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj sym = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun160, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, "__symbolTable["));
return;
}
case 1:
{
Obj x9223090566220582944= co->res;
Obj acc = R[1];
Obj x9223090566220583200 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x9223090566220583200);
return;
}
case 2:
{
Obj x9223090566220599040= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun160, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, "\"));\n"));
return;
}
case 3:
{
Obj x9223090566220599008= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun160, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), x9223090566220599008);
return;
}
case 4:
{
Obj x9223090566220598560= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun160, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 30)), sym);
return;
}
case 5:
{
Obj x9223090566220598272= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun160, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 0), makeCString(co->gc, "] = bindSymbol(co, intern(\""));
return;
}
case 6:
{
Obj x9223090566220597984= co->res;
Obj sym = R[1];
Obj acc = R[2];
R[1] = sym;
R[2] = acc;
saveCont(co, clofun160, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 0), acc);
return;
}
}
}

static void clofun159(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj to = R[1];
Obj group = R[2];
Obj globals = R[3];
Obj x9223090566220583040 = PRIM_CAR(group);
Obj label = x9223090566220583040;
R[1] = globals;
R[2] = label;
R[3] = to;
saveCont(co, clofun159, 13, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), group);
return;
}
case 1:
{
Obj x9223090566220597024= co->res;
Obj to = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "}\n\n"));
return;
}
case 2:
{
Obj x9223090566220596736= co->res;
Obj to = R[1];
R[1] = to;
saveCont(co, clofun159, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj x9223090566220596704= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = to;
saveCont(co, clofun159, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun158, 2, 4, globals, label, lam, to), MAKE_NUMBER(1), x9223090566220596704);
return;
}
case 4:
{
Obj x9223090566220586016= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun159, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), lam);
return;
}
case 5:
{
Obj x9223090566220585728= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun159, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "}\n"));
return;
}
case 6:
{
Obj x9223090566220585344= co->res;
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
saveCont(co, clofun159, 5, R);
Obj __args[5] = {globals, label, params, to, first_45stmt};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
case 7:
{
Obj x9223090566220584960= co->res;
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
saveCont(co, clofun159, 6, R);
Obj __args[5] = {globals, label, Nil, to, params};
coraCall(co, globalRef(co, getBinding(co, packageID, 51)), 5, __args);
return;
}
case 8:
{
Obj x9223090566220584672= co->res;
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
saveCont(co, clofun159, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, "case 0:\n{\n"));
return;
}
case 9:
{
Obj x9223090566220584384= co->res;
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
saveCont(co, clofun159, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, " switch (label) {\n"));
return;
}
case 10:
{
Obj x9223090566220584096= co->res;
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
saveCont(co, clofun159, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), to, makeCString(co->gc, " {\n"));
return;
}
case 11:
{
Obj x9223090566220583808= co->res;
Obj params = R[1];
Obj globals = R[2];
Obj label = R[3];
Obj lam = R[4];
Obj to = R[5];
Obj first_45stmt = x9223090566220583808;
R[1] = params;
R[2] = first_45stmt;
R[3] = globals;
R[4] = label;
R[5] = lam;
R[6] = to;
saveCont(co, clofun159, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 45)), to, label);
return;
}
case 12:
{
Obj x9223090566220583552= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj lam = R[3];
Obj to = R[4];
Obj params = x9223090566220583552;
R[1] = params;
R[2] = globals;
R[3] = label;
R[4] = lam;
R[5] = to;
saveCont(co, clofun159, 11, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 107)), lam);
return;
}
case 13:
{
Obj x9223090566220583296= co->res;
Obj globals = R[1];
Obj label = R[2];
Obj to = R[3];
Obj lam = x9223090566220583296;
R[1] = globals;
R[2] = label;
R[3] = lam;
R[4] = to;
saveCont(co, clofun159, 12, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), lam);
return;
}
}
}

static void clofun158(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj cont = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun158, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "case "));
return;
}
case 1:
{
Obj x9223090566220596224= co->res;
Obj acc = R[1];
Obj x9223090566220596448 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x9223090566220596448);
return;
}
case 2:
{
Obj x9223090566220595936= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun158, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "}\n"));
return;
}
case 3:
{
Obj x9223090566220595840= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun158, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), x9223090566220595840, closureRef(R[0], 3), cont};
coraCall(co, globalRef(co, getBinding(co, packageID, 46)), 5, __args);
return;
}
case 4:
{
Obj x9223090566220595360= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun158, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), closureRef(R[0], 2));
return;
}
case 5:
{
Obj x9223090566220586880= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun158, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ":\n{\n"));
return;
}
case 6:
{
Obj x9223090566220586592= co->res;
Obj cont = R[1];
Obj acc = R[2];
R[1] = cont;
R[2] = acc;
saveCont(co, clofun158, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun157(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009824 = R[1];
Obj x9223090566219009856 = R[2];
Obj x9223090566219009920 = makeNative(co->gc, 3, clofun156, 0, 2, x9223090566219009824, x9223090566219009856);
Obj fn = x9223090566219009824;
Obj x9223090566220574112 = PRIM_EQ(Nil, x9223090566219009856);
if (True == x9223090566220574112) {
coraReturn(co, Nil);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009920);
return;
}
}
}
}

static void clofun156(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682752 = makeNative(co->gc, 1, clofun155, 0, 0);
Obj fn = closureRef(R[0], 0);
Obj x9223090566220572672 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566220572672) {
Obj x9223090566220572928 = PRIM_CAR(closureRef(R[0], 1));
Obj x = x9223090566220572928;
Obj x9223090566220573184 = PRIM_CDR(closureRef(R[0], 1));
Obj y = x9223090566220573184;
R[1] = fn;
R[2] = y;
saveCont(co, clofun156, 1, R);
coraCall1(co, fn, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682752);
return;
}
}
case 1:
{
Obj x9223090566220573440= co->res;
Obj fn = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 33)), fn, y);
return;
}
}
}

static void clofun155(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun154(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun154, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 44)), globals);
return;
}
case 1:
{
Obj x9223090566220571584= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 40)), x9223090566220571584);
return;
}
case 2:
{
Obj x9223090566220571552= co->res;
saveCont(co, clofun154, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 41)), x9223090566220571552);
return;
}
case 3:
{
Obj x9223090566220571520= co->res;
saveCont(co, clofun154, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 42)), x9223090566220571520);
return;
}
case 4:
{
Obj x9223090566220571488= co->res;
saveCont(co, clofun154, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 43)), x9223090566220571488);
return;
}
case 5:
{
Obj x9223090566220571424= co->res;
Obj exp = R[1];
saveCont(co, clofun154, 4, R);
coraCall1(co, x9223090566220571424, exp);
return;
}
}
}

static void clofun153(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun153, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), exp);
return;
}
case 1:
{
Obj x9223090566220561728= co->res;
Obj obj = R[1];
Obj fns = x9223090566220561728;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 38)), obj, fns);
return;
}
case 2:
{
Obj x9223090566220561472= co->res;
Obj exp = R[1];
Obj obj = x9223090566220561472;
R[1] = obj;
saveCont(co, clofun153, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 35)), exp);
return;
}
}
}

static void clofun152(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683200 = R[1];
Obj x9223090566218683232 = R[2];
Obj x9223090566218683264 = makeNative(co->gc, 1, clofun151, 0, 2, x9223090566218683200, x9223090566218683232);
Obj obj = x9223090566218683200;
Obj x9223090566220560736 = PRIM_EQ(Nil, x9223090566218683232);
if (True == x9223090566220560736) {
coraReturn(co, obj);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683264);
return;
}
}
}
}

static void clofun151(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683616 = makeNative(co->gc, 1, clofun150, 0, 0);
Obj obj = closureRef(R[0], 0);
Obj x9223090566220559104 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566220559104) {
Obj x9223090566220559360 = PRIM_CAR(closureRef(R[0], 1));
Obj hd = x9223090566220559360;
Obj x9223090566220559616 = PRIM_CDR(closureRef(R[0], 1));
Obj more = x9223090566220559616;
Obj x9223090566220560192 = makeCons(co->gc, obj, Nil);
Obj x9223090566220560224 = makeCons(co->gc, hd, x9223090566220560192);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 38)), x9223090566220560224, more);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683616);
return;
}
}
}
}

static void clofun150(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun149(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun149, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 39)), MAKE_NUMBER(2));
return;
}
case 1:
{
Obj x9223090566217775360= co->res;
Obj v = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(1));
return;
}
case 2:
{
Obj x9223090566217936576= co->res;
Obj v = R[1];
Obj e2 = x9223090566217936576;
R[1] = v;
saveCont(co, clofun149, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 60)), v, e2);
return;
}
case 3:
{
Obj x9223090566217936256= co->res;
Obj v = R[1];
Obj e1 = x9223090566217936256;
R[1] = v;
saveCont(co, clofun149, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 64)), Nil, e1);
return;
}
case 4:
{
Obj x9223090566217935968= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = v;
saveCont(co, clofun149, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 62)), v, exp);
return;
}
case 5:
{
Obj x9223090566217935584= co->res;
Obj exp = R[1];
Obj v = R[2];
R[1] = exp;
R[2] = v;
saveCont(co, clofun149, 4, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(1), Nil);
return;
}
case 6:
{
Obj x9223090566217935168= co->res;
Obj exp = R[1];
Obj v = x9223090566217935168;
R[1] = exp;
R[2] = v;
saveCont(co, clofun149, 5, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
return;
}
}
}

static void clofun148(struct Cora* co, int label, Obj *R) {
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

static void clofun147(struct Cora* co, int label, Obj *R) {
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

static void clofun146(struct Cora* co, int label, Obj *R) {
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

static void clofun145(struct Cora* co, int label, Obj *R) {
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

static void clofun144(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj w = R[1];
Obj label = R[2];
R[1] = label;
R[2] = w;
saveCont(co, clofun144, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "static void "));
return;
}
case 1:
{
Obj x9223090566218225760= co->res;
Obj w = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x9223090566218225440= co->res;
Obj w = R[1];
R[1] = w;
saveCont(co, clofun144, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "(struct Cora* co, int label, Obj *R"));
return;
}
case 3:
{
Obj x9223090566218224960= co->res;
Obj label = R[1];
Obj w = R[2];
R[1] = w;
saveCont(co, clofun144, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), w, label);
return;
}
}
}

static void clofun143(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj w = R[1];
Obj label = R[2];
R[1] = w;
R[2] = label;
saveCont(co, clofun143, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "clofun"));
return;
}
case 1:
{
Obj x9223090566218223776= co->res;
Obj w = R[1];
Obj label = R[2];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), w, label);
return;
}
}
}

static void clofun142(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009088 = R[1];
Obj x9223090566219009312 = R[2];
Obj x9223090566219009344 = R[3];
Obj x9223090566219009376 = R[4];
Obj x9223090566219009568 = R[5];
Obj x9223090566219009664 = makeNative(co->gc, 1, clofun141, 0, 0);
Obj globals = x9223090566219009088;
Obj self = x9223090566219009312;
Obj env = x9223090566219009344;
Obj w = x9223090566219009376;
Obj x9223090566218648768 = PRIM_ISCONS(x9223090566219009568);
if (True == x9223090566218648768) {
Obj x9223090566218649504 = PRIM_CAR(x9223090566219009568);
Obj x9223090566218649536 = PRIM_EQ(getBinding(co, packageID, 68).name, x9223090566218649504);
if (True == x9223090566218649536) {
Obj x9223090566218518944 = PRIM_CDR(x9223090566219009568);
Obj x9223090566218519008 = PRIM_ISCONS(x9223090566218518944);
if (True == x9223090566218519008) {
Obj x9223090566218519904 = PRIM_CDR(x9223090566219009568);
Obj x9223090566218519936 = PRIM_CAR(x9223090566218519904);
Obj var = x9223090566218519936;
Obj x9223090566218520768 = PRIM_CDR(x9223090566219009568);
Obj x9223090566218520832 = PRIM_CDR(x9223090566218520768);
Obj x9223090566218521120 = PRIM_ISCONS(x9223090566218520832);
if (True == x9223090566218521120) {
Obj x9223090566218521888 = PRIM_CDR(x9223090566219009568);
Obj x9223090566218521920 = PRIM_CDR(x9223090566218521888);
Obj x9223090566218521952 = PRIM_CAR(x9223090566218521920);
Obj body = x9223090566218521952;
Obj x9223090566218522592 = PRIM_CDR(x9223090566219009568);
Obj x9223090566218436768 = PRIM_CDR(x9223090566218522592);
Obj x9223090566218436800 = PRIM_CDR(x9223090566218436768);
Obj fvs = x9223090566218436800;
R[1] = var;
R[2] = fvs;
R[3] = globals;
R[4] = self;
R[5] = env;
R[6] = w;
R[7] = body;
saveCont(co, clofun142, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "Obj "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009664);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009664);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009664);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009664);
return;
}
}
case 1:
{
Obj x9223090566218438816= co->res;
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj body = R[5];
co->ctx.sp = R;
Obj __args[5] = {globals, self, env, w, body};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
case 2:
{
Obj x9223090566218438272= co->res;
Obj fvs = R[1];
Obj globals = R[2];
Obj self = R[3];
Obj env = R[4];
Obj w = R[5];
Obj body = R[6];
R[1] = globals;
R[2] = self;
R[3] = env;
R[4] = w;
R[5] = body;
saveCont(co, clofun142, 1, R);
Obj __args[5] = {globals, self, env, w, fvs};
coraCall(co, globalRef(co, getBinding(co, packageID, 51)), 5, __args);
return;
}
case 3:
{
Obj x9223090566218437952= co->res;
Obj fvs = R[1];
Obj globals = R[2];
Obj self = R[3];
Obj env = R[4];
Obj w = R[5];
Obj body = R[6];
R[1] = fvs;
R[2] = globals;
R[3] = self;
R[4] = env;
R[5] = w;
R[6] = body;
saveCont(co, clofun142, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), w, makeCString(co->gc, "= co->res;\n"));
return;
}
case 4:
{
Obj x9223090566218437216= co->res;
Obj var = R[1];
Obj fvs = R[2];
Obj globals = R[3];
Obj self = R[4];
Obj env = R[5];
Obj w = R[6];
Obj body = R[7];
Obj x9223090566218437920 = PRIM_CAR(var);
R[1] = fvs;
R[2] = globals;
R[3] = self;
R[4] = env;
R[5] = w;
R[6] = body;
saveCont(co, clofun142, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), w, x9223090566218437920);
return;
}
}
}

static void clofun141(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun140(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj l = R[5];
Obj x9223090566218732768 = primGenSym(co);
Obj generate_45inst_45list_45h = x9223090566218732768;
Obj x9223090566218646560 = primSet(co, generate_45inst_45list_45h, makeNative(co->gc, 2, clofun139, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
R[1] = l;
saveCont(co, clofun140, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), generate_45inst_45list_45h);
return;
}
case 1:
{
Obj x9223090566218646976= co->res;
Obj l = R[1];
co->ctx.sp = R;
coraCall1(co, x9223090566218646976, l);
return;
}
}
}

static void clofun139(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566219007136 = makeNative(co->gc, 2, clofun138, 0, 6, x, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4));
Obj x9223090566218646400 = PRIM_EQ(Nil, x);
if (True == x9223090566218646400) {
coraReturn(co, Nil);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007136);
return;
}
}
}
}

static void clofun138(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007360 = makeNative(co->gc, 1, clofun137, 0, 0);
Obj x9223090566218734304 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218734304) {
Obj x9223090566218734848 = PRIM_CAR(closureRef(R[0], 0));
Obj a = x9223090566218734848;
Obj x9223090566218735136 = PRIM_CDR(closureRef(R[0], 0));
Obj b = x9223090566218735136;
R[1] = b;
saveCont(co, clofun138, 5, R);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), a};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007360);
return;
}
}
case 1:
{
Obj x9223090566218685888= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x9223090566218685888, b);
return;
}
case 2:
{
Obj x9223090566218685248= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun138, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 5));
return;
}
case 3:
{
Obj x9223090566218645504= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall1(co, x9223090566218645504, b);
return;
}
case 4:
{
Obj x9223090566218684896= co->res;
Obj b = R[1];
Obj x9223090566218684928 = primNot(x9223090566218684896);
if (True == x9223090566218684928) {
R[1] = b;
saveCont(co, clofun138, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 4), makeCString(co->gc, ", "));
return;
} else {
Nil;
R[1] = b;
saveCont(co, clofun138, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 5));
return;
}
}
case 5:
{
Obj x9223090566218683168= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun138, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), b);
return;
}
}
}

static void clofun137(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun136(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env1 = R[3];
Obj w = R[4];
Obj x1 = R[5];
Obj x9223090566220456288 = primGenSym(co);
Obj generate_45inst_45h = x9223090566220456288;
Obj x9223090566218784640 = primSet(co, generate_45inst_45h, makeNative(co->gc, 3, clofun135, 2, 4, self, generate_45inst_45h, globals, w));
R[1] = x1;
R[2] = env1;
saveCont(co, clofun136, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), generate_45inst_45h);
return;
}
case 1:
{
Obj x9223090566218731936= co->res;
Obj x1 = R[1];
Obj env1 = R[2];
co->ctx.sp = R;
coraCall2(co, x9223090566218731936, x1, env1);
return;
}
}
}

static void clofun135(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x2 = R[1];
Obj env = R[2];
Obj x9223090566220456864 = primIsSymbol(x2);
if (True == x9223090566220456864) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), closureRef(R[0], 3), x2);
return;
} else {
Obj x9223090566219007968 = makeNative(co->gc, 2, clofun134, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), env, closureRef(R[0], 2), x2, closureRef(R[0], 3));
Obj x9223090566218950912 = PRIM_ISCONS(x2);
if (True == x9223090566218950912) {
Obj x9223090566218951584 = PRIM_CAR(x2);
Obj x9223090566218951808 = PRIM_EQ(getBinding(co, packageID, 92).name, x9223090566218951584);
if (True == x9223090566218951808) {
Obj x9223090566218952448 = PRIM_CDR(x2);
Obj x9223090566218952480 = PRIM_ISCONS(x9223090566218952448);
if (True == x9223090566218952480) {
Obj x9223090566218781216 = PRIM_CDR(x2);
Obj x9223090566218781248 = PRIM_CAR(x9223090566218781216);
Obj x = x9223090566218781248;
Obj x9223090566218782208 = PRIM_CDR(x2);
Obj x9223090566218782272 = PRIM_CDR(x9223090566218782208);
Obj x9223090566218782304 = PRIM_EQ(Nil, x9223090566218782272);
if (True == x9223090566218782304) {
R[1] = x;
saveCont(co, clofun135, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "globalRef(co, getBinding(co, packageID, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007968);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007968);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007968);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007968);
return;
}
}
}
case 1:
{
Obj x9223090566218783584= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "))"));
return;
}
case 2:
{
Obj x9223090566218783552= co->res;
saveCont(co, clofun135, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), x9223090566218783552);
return;
}
case 3:
{
Obj x9223090566218782624= co->res;
Obj x = R[1];
saveCont(co, clofun135, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), x, closureRef(R[0], 2));
return;
}
}
}

static void clofun134(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007424 = makeNative(co->gc, 2, clofun133, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 3), closureRef(R[0], 5));
Obj x9223090566219093696 = PRIM_ISCONS(closureRef(R[0], 4));
if (True == x9223090566219093696) {
Obj x9223090566219094336 = PRIM_CAR(closureRef(R[0], 4));
Obj x9223090566219094368 = PRIM_EQ(getBinding(co, packageID, 83).name, x9223090566219094336);
if (True == x9223090566219094368) {
Obj x9223090566219094848 = PRIM_CDR(closureRef(R[0], 4));
Obj x9223090566219094880 = PRIM_ISCONS(x9223090566219094848);
if (True == x9223090566219094880) {
Obj x9223090566219095520 = PRIM_CDR(closureRef(R[0], 4));
Obj x9223090566219095552 = PRIM_CAR(x9223090566219095520);
Obj idx = x9223090566219095552;
Obj x9223090566218948768 = PRIM_CDR(closureRef(R[0], 4));
Obj x9223090566218948800 = PRIM_CDR(x9223090566218948768);
Obj x9223090566218948832 = PRIM_EQ(Nil, x9223090566218948800);
if (True == x9223090566218948832) {
R[1] = idx;
saveCont(co, clofun134, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "closureRef(R[0], "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007424);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007424);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007424);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007424);
return;
}
}
case 1:
{
Obj x9223090566218949696= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x9223090566218949280= co->res;
Obj idx = R[1];
saveCont(co, clofun134, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), idx);
return;
}
}
}

static void clofun133(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009216 = makeNative(co->gc, 4, clofun132, 0, 6, closureRef(R[0], 4), closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 5), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x9223090566219311616 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x9223090566219311616) {
Obj x9223090566219312384 = PRIM_CAR(closureRef(R[0], 3));
Obj x9223090566219312416 = PRIM_EQ(getBinding(co, packageID, 90).name, x9223090566219312384);
if (True == x9223090566219312416) {
Obj x9223090566219312960 = PRIM_CDR(closureRef(R[0], 3));
Obj x9223090566219312992 = PRIM_ISCONS(x9223090566219312960);
if (True == x9223090566219312992) {
Obj x9223090566219276864 = PRIM_CDR(closureRef(R[0], 3));
Obj x9223090566219276896 = PRIM_CAR(x9223090566219276864);
Obj x = x9223090566219276896;
Obj x9223090566219277920 = PRIM_CDR(closureRef(R[0], 3));
Obj x9223090566219277952 = PRIM_CDR(x9223090566219277920);
Obj x9223090566219277984 = PRIM_EQ(Nil, x9223090566219277952);
if (True == x9223090566219277984) {
Obj x9223090566219278336 = primIsSymbol(x);
if (True == x9223090566219278336) {
R[1] = x;
saveCont(co, clofun133, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "getBinding(co, packageID, "));
return;
} else {
R[1] = x;
saveCont(co, clofun133, 9, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 89)), x);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009216);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009216);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009216);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009216);
return;
}
}
case 1:
{
Obj x9223090566219279392= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ").name"));
return;
}
case 2:
{
Obj x9223090566219279360= co->res;
saveCont(co, clofun133, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), x9223090566219279360);
return;
}
case 3:
{
Obj x9223090566219278816= co->res;
Obj x = R[1];
saveCont(co, clofun133, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 56)), x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x9223090566219202976= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 5:
{
Obj x9223090566219202656= co->res;
Obj x = R[1];
saveCont(co, clofun133, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), x);
return;
}
case 6:
{
Obj x9223090566219204960= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "\")"));
return;
}
case 7:
{
Obj x9223090566219204928= co->res;
saveCont(co, clofun133, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), x9223090566219204928);
return;
}
case 8:
{
Obj x9223090566219204160= co->res;
Obj x = R[1];
saveCont(co, clofun133, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 47)), x);
return;
}
case 9:
{
Obj x9223090566219280096= co->res;
Obj x = R[1];
if (True == x9223090566219280096) {
R[1] = x;
saveCont(co, clofun133, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "MAKE_NUMBER("));
return;
} else {
Obj x9223090566219203680 = primIsString(x);
if (True == x9223090566219203680) {
R[1] = x;
saveCont(co, clofun133, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "makeCString(co->gc, \""));
return;
} else {
Obj x9223090566219205696 = PRIM_EQ(x, Nil);
if (True == x9223090566219205696) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "Nil"));
return;
} else {
Obj x9223090566219206240 = PRIM_EQ(x, True);
if (True == x9223090566219206240) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "True"));
return;
} else {
Obj x9223090566219092192 = PRIM_EQ(x, False);
if (True == x9223090566219092192) {
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

static void clofun132(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009696 = makeNative(co->gc, 3, clofun131, 0, 6, closureRef(R[0], 4), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x9223090566219409440 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219409440) {
Obj x9223090566219410048 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219410080 = PRIM_EQ(getBinding(co, packageID, 96).name, x9223090566219410048);
if (True == x9223090566219410080) {
Obj x9223090566219410752 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219410784 = PRIM_ISCONS(x9223090566219410752);
if (True == x9223090566219410784) {
Obj x9223090566219411264 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219411296 = PRIM_CAR(x9223090566219411264);
Obj a = x9223090566219411296;
Obj x9223090566219387584 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219387616 = PRIM_CDR(x9223090566219387584);
Obj x9223090566219387648 = PRIM_ISCONS(x9223090566219387616);
if (True == x9223090566219387648) {
Obj x9223090566219388512 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219388544 = PRIM_CDR(x9223090566219388512);
Obj x9223090566219388576 = PRIM_CAR(x9223090566219388544);
Obj b = x9223090566219388576;
Obj x9223090566219389664 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219389696 = PRIM_CDR(x9223090566219389664);
Obj x9223090566219389728 = PRIM_CDR(x9223090566219389696);
Obj x9223090566219389760 = PRIM_ISCONS(x9223090566219389728);
if (True == x9223090566219389760) {
Obj x9223090566219390784 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219390816 = PRIM_CDR(x9223090566219390784);
Obj x9223090566219390848 = PRIM_CDR(x9223090566219390816);
Obj x9223090566219383008 = PRIM_CAR(x9223090566219390848);
Obj c = x9223090566219383008;
Obj x9223090566219384320 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219384352 = PRIM_CDR(x9223090566219384320);
Obj x9223090566219384480 = PRIM_CDR(x9223090566219384352);
Obj x9223090566219384512 = PRIM_CDR(x9223090566219384480);
Obj x9223090566219384544 = PRIM_EQ(Nil, x9223090566219384512);
if (True == x9223090566219384544) {
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun132, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 130)), a, closureRef(R[0], 5));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009696);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009696);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009696);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009696);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009696);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009696);
return;
}
}
case 1:
{
Obj x9223090566219309728= co->res;
Obj a = R[1];
Obj c = R[2];
Obj x9223090566219310176 = makeCons(co->gc, a, closureRef(R[0], 5));
co->ctx.sp = R;
coraCall2(co, x9223090566219309728, c, x9223090566219310176);
return;
}
case 2:
{
Obj x9223090566219309312= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun132, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x9223090566219386848= co->res;
Obj a = R[1];
Obj c = R[2];
R[1] = a;
R[2] = c;
saveCont(co, clofun132, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj x9223090566219386752= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = a;
R[2] = c;
saveCont(co, clofun132, 3, R);
coraCall2(co, x9223090566219386752, b, closureRef(R[0], 5));
return;
}
case 5:
{
Obj x9223090566219386112= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun132, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 6:
{
Obj x9223090566219385728= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun132, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, " = "));
return;
}
case 7:
{
Obj x9223090566219385152= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun132, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 50)), closureRef(R[0], 3), a);
return;
}
case 8:
{
Obj x9223090566219384832= co->res;
Obj b = R[1];
Obj a = R[2];
Obj c = R[3];
Obj idx = x9223090566219384832;
R[1] = b;
R[2] = a;
R[3] = c;
saveCont(co, clofun132, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
}
}

static void clofun131(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682624 = makeNative(co->gc, 4, clofun130, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 0), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x9223090566219521696 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566219521696) {
Obj x9223090566219489376 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219489408 = PRIM_ISCONS(x9223090566219489376);
if (True == x9223090566219489408) {
Obj x9223090566219490368 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219490400 = PRIM_CAR(x9223090566219490368);
Obj x9223090566219490432 = PRIM_EQ(getBinding(co, packageID, 100).name, x9223090566219490400);
if (True == x9223090566219490432) {
Obj x9223090566219491200 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219491232 = PRIM_CDR(x9223090566219491200);
Obj x9223090566219491392 = PRIM_ISCONS(x9223090566219491232);
if (True == x9223090566219491392) {
Obj x9223090566219492224 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219492384 = PRIM_CDR(x9223090566219492224);
Obj x9223090566219492416 = PRIM_CAR(x9223090566219492384);
Obj f = x9223090566219492416;
Obj x9223090566219485344 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219485376 = PRIM_CDR(x9223090566219485344);
Obj x9223090566219485408 = PRIM_CDR(x9223090566219485376);
Obj x9223090566219485440 = PRIM_EQ(Nil, x9223090566219485408);
if (True == x9223090566219485440) {
Obj x9223090566219485696 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x9223090566219485696;
R[1] = f;
R[2] = args;
saveCont(co, clofun131, 12, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 108)), f);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682624);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682624);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682624);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682624);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682624);
return;
}
}
case 1:
{
Obj x9223090566219488032= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x9223090566219487424= co->res;
Obj args = R[1];
saveCont(co, clofun131, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 3:
{
Obj x9223090566219456704= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 4:
{
Obj x9223090566219488896= co->res;
Obj args = R[1];
saveCont(co, clofun131, 3, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 5:
{
Obj x9223090566219458272= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 6:
{
Obj x9223090566219457728= co->res;
Obj args = R[1];
saveCont(co, clofun131, 5, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 7:
{
Obj x9223090566219459712= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 8:
{
Obj x9223090566219459072= co->res;
Obj args = R[1];
saveCont(co, clofun131, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 9:
{
Obj x9223090566219407680= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 10:
{
Obj x9223090566219460192= co->res;
Obj args = R[1];
saveCont(co, clofun131, 9, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 11:
{
Obj x9223090566219486464= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x9223090566219487104 = PRIM_EQ(f, getBinding(co, packageID, 127).name);
if (True == x9223090566219487104) {
R[1] = args;
saveCont(co, clofun131, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
} else {
Obj x9223090566219488640 = PRIM_EQ(f, getBinding(co, packageID, 115).name);
if (True == x9223090566219488640) {
R[1] = args;
saveCont(co, clofun131, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co"));
return;
} else {
Obj x9223090566219457440 = PRIM_EQ(f, getBinding(co, packageID, 124).name);
if (True == x9223090566219457440) {
R[1] = args;
saveCont(co, clofun131, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co->gc, "));
return;
} else {
if (True == True) {
R[1] = args;
saveCont(co, clofun131, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "("));
return;
} else {
R[1] = args;
saveCont(co, clofun131, 10, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no cond match"));
return;
}
}
}
}
}
case 12:
{
Obj x9223090566219486432= co->res;
Obj f = R[1];
Obj args = R[2];
R[1] = f;
R[2] = args;
saveCont(co, clofun131, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), x9223090566219486432);
return;
}
}
}

static void clofun130(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683072 = makeNative(co->gc, 5, clofun129, 0, 6, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x9223090566219906848 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219906848) {
Obj x9223090566219718944 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219718976 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566219718944);
if (True == x9223090566219718976) {
Obj x9223090566219719712 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219719744 = PRIM_ISCONS(x9223090566219719712);
if (True == x9223090566219719744) {
Obj x9223090566219720256 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219720416 = PRIM_CAR(x9223090566219720256);
Obj a = x9223090566219720416;
Obj x9223090566219721184 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219721216 = PRIM_CDR(x9223090566219721184);
Obj x9223090566219721248 = PRIM_ISCONS(x9223090566219721216);
if (True == x9223090566219721248) {
Obj x9223090566219722048 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219722080 = PRIM_CDR(x9223090566219722048);
Obj x9223090566219722112 = PRIM_CAR(x9223090566219722080);
Obj b = x9223090566219722112;
Obj x9223090566219546848 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219546912 = PRIM_CDR(x9223090566219546848);
Obj x9223090566219546944 = PRIM_CDR(x9223090566219546912);
Obj x9223090566219546976 = PRIM_ISCONS(x9223090566219546944);
if (True == x9223090566219546976) {
Obj x9223090566219547968 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219548000 = PRIM_CDR(x9223090566219547968);
Obj x9223090566219548032 = PRIM_CDR(x9223090566219548000);
Obj x9223090566219548064 = PRIM_CAR(x9223090566219548032);
Obj c = x9223090566219548064;
Obj x9223090566219549376 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219549504 = PRIM_CDR(x9223090566219549376);
Obj x9223090566219549536 = PRIM_CDR(x9223090566219549504);
Obj x9223090566219549568 = PRIM_CDR(x9223090566219549536);
Obj x9223090566219549600 = PRIM_EQ(Nil, x9223090566219549568);
if (True == x9223090566219549600) {
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun130, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "if (True == "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683072);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683072);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683072);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683072);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683072);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683072);
return;
}
}
case 1:
{
Obj x9223090566219519936= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "}\n"));
return;
}
case 2:
{
Obj x9223090566219519680= co->res;
Obj c = R[1];
saveCont(co, clofun130, 1, R);
coraCall2(co, x9223090566219519680, c, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x9223090566219519296= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun130, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
case 4:
{
Obj x9223090566219518880= co->res;
Obj c = R[1];
R[1] = c;
saveCont(co, clofun130, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "} else {\n"));
return;
}
case 5:
{
Obj x9223090566219518784= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = c;
saveCont(co, clofun130, 4, R);
coraCall2(co, x9223090566219518784, b, closureRef(R[0], 4));
return;
}
case 6:
{
Obj x9223090566219518240= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun130, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
case 7:
{
Obj x9223090566219550528= co->res;
Obj b = R[1];
Obj c = R[2];
R[1] = b;
R[2] = c;
saveCont(co, clofun130, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ") {\n"));
return;
}
case 8:
{
Obj x9223090566219550432= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = b;
R[2] = c;
saveCont(co, clofun130, 7, R);
coraCall2(co, x9223090566219550432, a, closureRef(R[0], 4));
return;
}
case 9:
{
Obj x9223090566219549888= co->res;
Obj a = R[1];
Obj b = R[2];
Obj c = R[3];
R[1] = a;
R[2] = b;
R[3] = c;
saveCont(co, clofun130, 8, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
}
}

static void clofun129(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683552 = makeNative(co->gc, 3, clofun128, 0, 6, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 5), closureRef(R[0], 0), closureRef(R[0], 4));
Obj x9223090566220359296 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566220359296) {
Obj x9223090566220359936 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566220359968 = PRIM_EQ(getBinding(co, packageID, 84).name, x9223090566220359936);
if (True == x9223090566220359968) {
Obj x9223090566220360480 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220360512 = PRIM_ISCONS(x9223090566220360480);
if (True == x9223090566220360512) {
Obj x9223090566220361056 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220361088 = PRIM_CAR(x9223090566220361056);
Obj label = x9223090566220361088;
Obj x9223090566220103968 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220104000 = PRIM_CDR(x9223090566220103968);
Obj x9223090566220104032 = PRIM_ISCONS(x9223090566220104000);
if (True == x9223090566220104032) {
Obj x9223090566220104800 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220104832 = PRIM_CDR(x9223090566220104800);
Obj x9223090566220104864 = PRIM_CAR(x9223090566220104832);
Obj nargs = x9223090566220104864;
Obj x9223090566220106080 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220106112 = PRIM_CDR(x9223090566220106080);
Obj x9223090566220106144 = PRIM_CDR(x9223090566220106112);
Obj x9223090566220106176 = PRIM_ISCONS(x9223090566220106144);
if (True == x9223090566220106176) {
Obj x9223090566220107328 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220107360 = PRIM_CDR(x9223090566220107328);
Obj x9223090566220107392 = PRIM_CDR(x9223090566220107360);
Obj x9223090566220107424 = PRIM_CAR(x9223090566220107392);
Obj nframe = x9223090566220107424;
Obj x9223090566220018368 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566220018400 = PRIM_CDR(x9223090566220018368);
Obj x9223090566220018432 = PRIM_CDR(x9223090566220018400);
Obj x9223090566220018528 = PRIM_CDR(x9223090566220018432);
Obj frees = x9223090566220018528;
R[1] = nframe;
R[2] = label;
R[3] = nargs;
R[4] = frees;
saveCont(co, clofun129, 12, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "makeNative(co->gc, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683552);
return;
}
}
case 1:
{
Obj x9223090566219904576= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ")"));
return;
}
case 2:
{
Obj x9223090566219904096= co->res;
Obj frees = R[1];
saveCont(co, clofun129, 1, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), frees};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 3:
{
Obj x9223090566219903744= co->res;
Obj frees = R[1];
Obj x9223090566219903776 = primNot(x9223090566219903744);
if (True == x9223090566219903776) {
R[1] = frees;
saveCont(co, clofun129, 2, R);
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
Obj x9223090566219903168= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun129, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), frees);
return;
}
case 5:
{
Obj x9223090566219903136= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun129, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), x9223090566219903136);
return;
}
case 6:
{
Obj x9223090566220021472= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun129, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), frees);
return;
}
case 7:
{
Obj x9223090566220020928= co->res;
Obj frees = R[1];
R[1] = frees;
saveCont(co, clofun129, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 8:
{
Obj x9223090566220020608= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = frees;
saveCont(co, clofun129, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 9:
{
Obj x9223090566220020192= co->res;
Obj nargs = R[1];
Obj frees = R[2];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun129, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 10:
{
Obj x9223090566220019904= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = nargs;
R[2] = frees;
saveCont(co, clofun129, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), label);
return;
}
case 11:
{
Obj x9223090566220019424= co->res;
Obj label = R[1];
Obj nargs = R[2];
Obj frees = R[3];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun129, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 12:
{
Obj x9223090566220018912= co->res;
Obj nframe = R[1];
Obj label = R[2];
Obj nargs = R[3];
Obj frees = R[4];
R[1] = label;
R[2] = nargs;
R[3] = frees;
saveCont(co, clofun129, 11, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nframe);
return;
}
}
}

static void clofun128(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683872 = makeNative(co->gc, 2, clofun127, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), closureRef(R[0], 3));
Obj x9223090566220450688 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566220450688) {
Obj x9223090566220451200 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566220451232 = PRIM_EQ(getBinding(co, packageID, 95).name, x9223090566220451200);
if (True == x9223090566220451232) {
Obj x9223090566220451744 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220451776 = PRIM_ISCONS(x9223090566220451744);
if (True == x9223090566220451776) {
Obj x9223090566220362112 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220362144 = PRIM_CAR(x9223090566220362112);
Obj a = x9223090566220362144;
Obj x9223090566220362976 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220363008 = PRIM_CDR(x9223090566220362976);
Obj x9223090566220363040 = PRIM_ISCONS(x9223090566220363008);
if (True == x9223090566220363040) {
Obj x9223090566220363840 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220363872 = PRIM_CDR(x9223090566220363840);
Obj x9223090566220363904 = PRIM_CAR(x9223090566220363872);
Obj b = x9223090566220363904;
Obj x9223090566220365024 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220365056 = PRIM_CDR(x9223090566220365024);
Obj x9223090566220365088 = PRIM_CDR(x9223090566220365056);
Obj x9223090566220365120 = PRIM_EQ(Nil, x9223090566220365088);
if (True == x9223090566220365120) {
R[1] = a;
R[2] = b;
saveCont(co, clofun128, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683872);
return;
}
}
case 1:
{
Obj x9223090566220358176= co->res;
Obj b = R[1];
co->ctx.sp = R;
coraCall2(co, x9223090566220358176, b, closureRef(R[0], 5));
return;
}
case 2:
{
Obj x9223090566220357824= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun128, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 4));
return;
}
case 3:
{
Obj x9223090566220365600= co->res;
Obj b = R[1];
R[1] = b;
saveCont(co, clofun128, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 4:
{
Obj x9223090566220365504= co->res;
Obj a = R[1];
Obj b = R[2];
R[1] = b;
saveCont(co, clofun128, 3, R);
coraCall2(co, x9223090566220365504, a, closureRef(R[0], 5));
return;
}
}
}

static void clofun127(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684128 = makeNative(co->gc, 2, clofun126, 0, 6, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x9223090566220458528 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566220458528) {
Obj x9223090566220458976 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566220459040 = PRIM_EQ(getBinding(co, packageID, 78).name, x9223090566220458976);
if (True == x9223090566220459040) {
Obj x9223090566220459488 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220459552 = PRIM_ISCONS(x9223090566220459488);
if (True == x9223090566220459552) {
Obj x9223090566220460000 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220447744 = PRIM_CAR(x9223090566220460000);
Obj x = x9223090566220447744;
Obj x9223090566220448416 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220448448 = PRIM_CDR(x9223090566220448416);
Obj x9223090566220448480 = PRIM_EQ(Nil, x9223090566220448448);
if (True == x9223090566220448480) {
R[1] = x;
saveCont(co, clofun127, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "coraReturn(co, "));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684128);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684128);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684128);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684128);
return;
}
}
case 1:
{
Obj x9223090566220449664= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj x9223090566220449376= co->res;
saveCont(co, clofun127, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 3:
{
Obj x9223090566220449280= co->res;
Obj x = R[1];
saveCont(co, clofun127, 2, R);
coraCall2(co, x9223090566220449280, x, closureRef(R[0], 4));
return;
}
case 4:
{
Obj x9223090566220448800= co->res;
Obj x = R[1];
R[1] = x;
saveCont(co, clofun127, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
}
}

static void clofun126(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684320 = makeNative(co->gc, 3, clofun125, 0, 6, closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x9223090566220462752 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566220462752) {
Obj x9223090566220463232 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566220463264 = PRIM_EQ(getBinding(co, packageID, 80).name, x9223090566220463232);
if (True == x9223090566220463264) {
Obj x9223090566220463744 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220463776 = PRIM_ISCONS(x9223090566220463744);
if (True == x9223090566220463776) {
Obj x9223090566220456032 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220456064 = PRIM_CAR(x9223090566220456032);
Obj exp = x9223090566220456064;
Obj x9223090566220456704 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566220456736 = PRIM_CDR(x9223090566220456704);
Obj x9223090566220456768 = PRIM_EQ(Nil, x9223090566220456736);
if (True == x9223090566220456768) {
R[1] = exp;
saveCont(co, clofun126, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "co->ctx.sp = R;\n"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684320);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684320);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684320);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684320);
return;
}
}
case 1:
{
Obj x9223090566220457568= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj x9223090566220457472= co->res;
Obj exp = R[1];
saveCont(co, clofun126, 1, R);
coraCall2(co, x9223090566220457472, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x9223090566220457088= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun126, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
}
}

static void clofun125(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684512 = makeNative(co->gc, 4, clofun124, 0, 6, closureRef(R[0], 0), closureRef(R[0], 3), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5));
Obj x9223090566220478496 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220478496) {
Obj x9223090566220476416 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220476448 = PRIM_EQ(getBinding(co, packageID, 79).name, x9223090566220476416);
if (True == x9223090566220476448) {
Obj x9223090566220476928 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220476960 = PRIM_ISCONS(x9223090566220476928);
if (True == x9223090566220476960) {
Obj x9223090566220477440 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220477472 = PRIM_CAR(x9223090566220477440);
Obj exp = x9223090566220477472;
Obj x9223090566220478080 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220478112 = PRIM_CDR(x9223090566220478080);
Obj x9223090566220478144 = PRIM_ISCONS(x9223090566220478112);
if (True == x9223090566220478144) {
Obj x9223090566220478944 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220478976 = PRIM_CDR(x9223090566220478944);
Obj x9223090566220479008 = PRIM_CAR(x9223090566220478976);
Obj label = x9223090566220479008;
Obj x9223090566220479584 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220479616 = PRIM_CDR(x9223090566220479584);
Obj x9223090566220479648 = PRIM_CDR(x9223090566220479616);
Obj fvs = x9223090566220479648;
R[1] = label;
R[2] = exp;
saveCont(co, clofun125, 8, R);
Obj __args[5] = {closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 4), closureRef(R[0], 5), fvs};
coraCall(co, globalRef(co, getBinding(co, packageID, 55)), 5, __args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684512);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684512);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684512);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684512);
return;
}
}
case 1:
{
Obj x9223090566220461664= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "return;\n"));
return;
}
case 2:
{
Obj x9223090566220461536= co->res;
Obj exp = R[1];
saveCont(co, clofun125, 1, R);
coraCall2(co, x9223090566220461536, exp, closureRef(R[0], 4));
return;
}
case 3:
{
Obj x9223090566220461120= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun125, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 3));
return;
}
case 4:
{
Obj x9223090566220460800= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun125, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", R);\n"));
return;
}
case 5:
{
Obj x9223090566220460480= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = exp;
saveCont(co, clofun125, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), label);
return;
}
case 6:
{
Obj x9223090566220460160= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun125, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 7:
{
Obj x9223090566220480320= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun125, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 48)), closureRef(R[0], 5), closureRef(R[0], 2));
return;
}
case 8:
{
Obj x9223090566220480032= co->res;
Obj label = R[1];
Obj exp = R[2];
R[1] = label;
R[2] = exp;
saveCont(co, clofun125, 7, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "saveCont(co, "));
return;
}
}
}

static void clofun124(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218684768 = makeNative(co->gc, 1, clofun123, 0, 0);
Obj x9223090566220459008 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220459008) {
Obj x9223090566220459264 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x9223090566220459264;
Obj x9223090566220459520 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x9223090566220459520;
R[1] = f;
R[2] = args;
saveCont(co, clofun124, 18, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), args);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218684768);
return;
}
}
case 1:
{
Obj x9223090566220462944= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", __args);\n"));
return;
}
case 2:
{
Obj x9223090566220462656= co->res;
Obj nargs = R[1];
saveCont(co, clofun124, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 3:
{
Obj x9223090566220462368= co->res;
Obj nargs = R[1];
R[1] = nargs;
saveCont(co, clofun124, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ", "));
return;
}
case 4:
{
Obj x9223090566220462272= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = nargs;
saveCont(co, clofun124, 3, R);
coraCall2(co, x9223090566220462272, f, closureRef(R[0], 4));
return;
}
case 5:
{
Obj x9223090566220461888= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun124, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 1));
return;
}
case 6:
{
Obj x9223090566220461600= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun124, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "coraCall(co, "));
return;
}
case 7:
{
Obj x9223090566220461312= co->res;
Obj f = R[1];
Obj nargs = R[2];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun124, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "};\n"));
return;
}
case 8:
{
Obj x9223090566220460928= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = f;
R[2] = nargs;
saveCont(co, clofun124, 7, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 9:
{
Obj x9223090566220460640= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun124, 8, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "] = {"));
return;
}
case 10:
{
Obj x9223090566220460352= co->res;
Obj args = R[1];
Obj f = R[2];
Obj nargs = R[3];
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun124, 9, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 11:
{
Obj x9223090566220477728= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, ");\n"));
return;
}
case 12:
{
Obj x9223090566220477408= co->res;
Obj args = R[1];
saveCont(co, clofun124, 11, R);
Obj __args[5] = {closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 4), closureRef(R[0], 5), args};
coraCall(co, globalRef(co, getBinding(co, packageID, 49)), 5, __args);
return;
}
case 13:
{
Obj x9223090566220476768= co->res;
Obj nargs = R[1];
Obj args = R[2];
Obj x9223090566220477120 = PRIM_GT(nargs, MAKE_NUMBER(0));
if (True == x9223090566220477120) {
R[1] = args;
saveCont(co, clofun124, 12, R);
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
Obj x9223090566220476672= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = nargs;
R[2] = args;
saveCont(co, clofun124, 13, R);
coraCall2(co, x9223090566220476672, f, closureRef(R[0], 4));
return;
}
case 15:
{
Obj x9223090566220464000= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun124, 14, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), closureRef(R[0], 1));
return;
}
case 16:
{
Obj x9223090566220463712= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun124, 15, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "(co, "));
return;
}
case 17:
{
Obj x9223090566220463424= co->res;
Obj f = R[1];
Obj nargs = R[2];
Obj args = R[3];
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun124, 16, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 5), nargs);
return;
}
case 18:
{
Obj x9223090566220459776= co->res;
Obj f = R[1];
Obj args = R[2];
Obj nargs = x9223090566220459776;
Obj x9223090566220460064 = PRIM_GT(nargs, MAKE_NUMBER(4));
if (True == x9223090566220460064) {
R[1] = args;
R[2] = f;
R[3] = nargs;
saveCont(co, clofun124, 10, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "Obj __args["));
return;
} else {
R[1] = f;
R[2] = nargs;
R[3] = args;
saveCont(co, clofun124, 17, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 5), makeCString(co->gc, "coraCall"));
return;
}
}
}
}

static void clofun123(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun122(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj ls = R[5];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun121, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
return;
}
}
}

static void clofun121(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj v = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun121, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "Obj "));
return;
}
case 1:
{
Obj x9223090566220451328= co->res;
Obj acc = R[1];
Obj x9223090566220451552 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x9223090566220451552);
return;
}
case 2:
{
Obj x9223090566220451040= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun121, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "];\n"));
return;
}
case 3:
{
Obj x9223090566220450752= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun121, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), acc);
return;
}
case 4:
{
Obj x9223090566220450464= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun121, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, " = R["));
return;
}
case 5:
{
Obj x9223090566220450080= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun121, 4, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
}
}

static void clofun120(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj globals = R[1];
Obj self = R[2];
Obj env = R[3];
Obj w = R[4];
Obj ls = R[5];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun119, 2, 4, globals, self, env, w), MAKE_NUMBER(1), ls);
return;
}
}
}

static void clofun119(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj v = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun119, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "R["));
return;
}
case 1:
{
Obj x9223090566220448928= co->res;
Obj acc = R[1];
Obj x9223090566220449152 = PRIM_ADD(acc, MAKE_NUMBER(1));
coraReturn(co, x9223090566220449152);
return;
}
case 2:
{
Obj x9223090566220448640= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun119, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, ";\n"));
return;
}
case 3:
{
Obj x9223090566220448256= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = acc;
saveCont(co, clofun119, 2, R);
Obj __args[5] = {closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), v};
coraCall(co, globalRef(co, getBinding(co, packageID, 52)), 5, __args);
return;
}
case 4:
{
Obj x9223090566220447968= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun119, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 54)), closureRef(R[0], 3), makeCString(co->gc, "] = "));
return;
}
case 5:
{
Obj x9223090566217747712= co->res;
Obj v = R[1];
Obj acc = R[2];
R[1] = v;
R[2] = acc;
saveCont(co, clofun119, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 53)), closureRef(R[0], 3), acc);
return;
}
}
}

static void clofun118(struct Cora* co, int label, Obj *R) {
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

static void clofun117(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj idx = R[1];
Obj sym = R[2];
Obj globals = R[3];
R[1] = idx;
R[2] = globals;
R[3] = sym;
saveCont(co, clofun117, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), globals);
return;
}
case 1:
{
Obj x9223090566217934304= co->res;
Obj idx = R[1];
Obj globals = R[2];
Obj sym = R[3];
if (True == x9223090566217934304) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
Obj x9223090566217934944 = PRIM_CAR(globals);
Obj x9223090566217934976 = PRIM_EQ(sym, x9223090566217934944);
if (True == x9223090566217934976) {
coraReturn(co, idx);
return;
} else {
if (True == True) {
Obj x9223090566217935488 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x9223090566217935744 = PRIM_CDR(globals);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 57)), x9223090566217935488, sym, x9223090566217935744);
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

static void clofun116(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sym = R[1];
Obj globals = R[2];
R[1] = sym;
R[2] = globals;
saveCont(co, clofun116, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 58)), globals);
return;
}
case 1:
{
Obj x9223090566217933088= co->res;
Obj sym = R[1];
Obj val = R[2];
Obj globals = R[3];
if (True == x9223090566217933088) {
coraReturn(co, Nil);
return;
} else {
Obj x9223090566217933664 = makeCons(co->gc, sym, val);
Obj x9223090566217933696 = primSet(co, globals, x9223090566217933664);
coraReturn(co, x9223090566217933696);
return;
}
}
case 2:
{
Obj x9223090566217932800= co->res;
Obj sym = R[1];
Obj globals = R[2];
Obj val = x9223090566217932800;
R[1] = sym;
R[2] = val;
R[3] = globals;
saveCont(co, clofun116, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), sym, val);
return;
}
}
}

static void clofun115(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj k = R[2];
Obj x9223090566218225504 = primGenSym(co);
Obj tmp = x9223090566218225504;
R[1] = x;
R[2] = tmp;
saveCont(co, clofun115, 1, R);
coraCall1(co, k, tmp);
return;
}
case 1:
{
Obj x9223090566218226688= co->res;
Obj x = R[1];
Obj tmp = R[2];
Obj x9223090566218226752 = makeCons(co->gc, x9223090566218226688, Nil);
Obj x9223090566218226784 = makeCons(co->gc, x, x9223090566218226752);
Obj x9223090566218226816 = makeCons(co->gc, tmp, x9223090566218226784);
Obj x9223090566218226848 = makeCons(co->gc, getBinding(co, packageID, 96).name, x9223090566218226816);
coraReturn(co, x9223090566218226848);
return;
}
}
}

static void clofun114(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj v = R[1];
Obj val = R[2];
R[1] = val;
R[2] = v;
saveCont(co, clofun114, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(0));
return;
}
case 1:
{
Obj x9223090566218224480= co->res;
Obj v = R[1];
Obj cur1 = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(1), cur1);
return;
}
case 2:
{
Obj x9223090566218439840= co->res;
Obj val = R[1];
Obj idx = R[2];
Obj v = R[3];
Obj cur = x9223090566218439840;
Obj x9223090566218223616 = makeCons(co->gc, val, Nil);
Obj x9223090566218223648 = makeCons(co->gc, idx, x9223090566218223616);
Obj x9223090566218223712 = makeCons(co->gc, x9223090566218223648, cur);
Obj cur1 = x9223090566218223712;
Obj x9223090566218224448 = PRIM_ADD(idx, MAKE_NUMBER(1));
R[1] = v;
R[2] = cur1;
saveCont(co, clofun114, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 59)), v, MAKE_NUMBER(0), x9223090566218224448);
return;
}
case 3:
{
Obj x9223090566218439424= co->res;
Obj val = R[1];
Obj v = R[2];
Obj idx = x9223090566218439424;
R[1] = val;
R[2] = idx;
R[3] = v;
saveCont(co, clofun114, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(1));
return;
}
}
}

static void clofun113(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682656 = R[1];
Obj x9223090566218682688 = R[2];
Obj x9223090566218682720 = makeNative(co->gc, 2, clofun112, 0, 2, x9223090566218682656, x9223090566218682688);
Obj v = x9223090566218682656;
Obj x9223090566218733056 = PRIM_ISCONS(x9223090566218682688);
if (True == x9223090566218733056) {
Obj x9223090566218733696 = PRIM_CAR(x9223090566218682688);
Obj x9223090566218733728 = PRIM_EQ(getBinding(co, packageID, 84).name, x9223090566218733696);
if (True == x9223090566218733728) {
Obj x9223090566218734368 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218734400 = PRIM_ISCONS(x9223090566218734368);
if (True == x9223090566218734400) {
Obj x9223090566218735200 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218735232 = PRIM_CAR(x9223090566218735200);
Obj x9223090566218735264 = PRIM_ISCONS(x9223090566218735232);
if (True == x9223090566218735264) {
Obj x9223090566218684608 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218684640 = PRIM_CAR(x9223090566218684608);
Obj x9223090566218684736 = PRIM_CAR(x9223090566218684640);
Obj x9223090566218684800 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566218684736);
if (True == x9223090566218684800) {
Obj x9223090566218685952 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218685984 = PRIM_CAR(x9223090566218685952);
Obj x9223090566218686048 = PRIM_CDR(x9223090566218685984);
Obj x9223090566218686080 = PRIM_ISCONS(x9223090566218686048);
if (True == x9223090566218686080) {
Obj x9223090566218646176 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218646208 = PRIM_CAR(x9223090566218646176);
Obj x9223090566218646240 = PRIM_CDR(x9223090566218646208);
Obj x9223090566218646272 = PRIM_CAR(x9223090566218646240);
Obj params = x9223090566218646272;
Obj x9223090566218647552 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218647584 = PRIM_CAR(x9223090566218647552);
Obj x9223090566218647616 = PRIM_CDR(x9223090566218647584);
Obj x9223090566218647648 = PRIM_CDR(x9223090566218647616);
Obj x9223090566218647680 = PRIM_ISCONS(x9223090566218647648);
if (True == x9223090566218647680) {
Obj x9223090566218648800 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218648832 = PRIM_CAR(x9223090566218648800);
Obj x9223090566218648864 = PRIM_CDR(x9223090566218648832);
Obj x9223090566218648896 = PRIM_CDR(x9223090566218648864);
Obj x9223090566218648928 = PRIM_CAR(x9223090566218648896);
Obj body = x9223090566218648928;
Obj x9223090566218519296 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218519328 = PRIM_CAR(x9223090566218519296);
Obj x9223090566218519360 = PRIM_CDR(x9223090566218519328);
Obj x9223090566218519392 = PRIM_CDR(x9223090566218519360);
Obj x9223090566218519424 = PRIM_CDR(x9223090566218519392);
Obj x9223090566218519456 = PRIM_EQ(Nil, x9223090566218519424);
if (True == x9223090566218519456) {
Obj x9223090566218520128 = PRIM_CDR(x9223090566218682688);
Obj x9223090566218520160 = PRIM_CDR(x9223090566218520128);
Obj fvs = x9223090566218520160;
R[1] = v;
R[2] = params;
R[3] = fvs;
saveCont(co, clofun113, 6, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 62)), v, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682720);
return;
}
}
case 1:
{
Obj x9223090566218436928= co->res;
Obj nframe = R[1];
Obj fvs = R[2];
Obj cur = R[3];
Obj x9223090566218437280 = makeCons(co->gc, nframe, fvs);
Obj x9223090566218437312 = makeCons(co->gc, x9223090566218436928, x9223090566218437280);
Obj x9223090566218437376 = makeCons(co->gc, cur, x9223090566218437312);
Obj x9223090566218437408 = makeCons(co->gc, getBinding(co, packageID, 84).name, x9223090566218437376);
coraReturn(co, x9223090566218437408);
return;
}
case 2:
{
Obj x9223090566218522016= co->res;
Obj params = R[1];
Obj nframe = R[2];
Obj fvs = R[3];
Obj cur = R[4];
R[1] = nframe;
R[2] = fvs;
R[3] = cur;
saveCont(co, clofun113, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), params);
return;
}
case 3:
{
Obj x9223090566218521632= co->res;
Obj v = R[1];
Obj body2 = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = R[5];
Obj nframe = x9223090566218521632;
R[1] = params;
R[2] = nframe;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun113, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 60)), v, body2);
return;
}
case 4:
{
Obj x9223090566218521376= co->res;
Obj v = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj cur = R[4];
Obj body2 = x9223090566218521376;
R[1] = v;
R[2] = body2;
R[3] = params;
R[4] = fvs;
R[5] = cur;
saveCont(co, clofun113, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 63)), body2);
return;
}
case 5:
{
Obj x9223090566218520800= co->res;
Obj body1 = R[1];
Obj v = R[2];
Obj params = R[3];
Obj fvs = R[4];
Obj cur = x9223090566218520800;
R[1] = v;
R[2] = params;
R[3] = fvs;
R[4] = cur;
saveCont(co, clofun113, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 64)), params, body1);
return;
}
case 6:
{
Obj x9223090566218520448= co->res;
Obj v = R[1];
Obj params = R[2];
Obj fvs = R[3];
Obj body1 = x9223090566218520448;
R[1] = body1;
R[2] = v;
R[3] = params;
R[4] = fvs;
saveCont(co, clofun113, 5, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 61)), v, MAKE_NUMBER(0));
return;
}
}
}

static void clofun112(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683392 = makeNative(co->gc, 1, clofun111, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj v = closureRef(R[0], 0);
Obj f_45args = closureRef(R[0], 1);
Obj x9223090566218732032 = PRIM_ISCONS(f_45args);
if (True == x9223090566218732032) {
R[1] = f_45args;
saveCont(co, clofun112, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 62)), v);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683392);
return;
}
}
case 1:
{
Obj x9223090566218732384= co->res;
Obj f_45args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566218732384, f_45args);
return;
}
}
}

static void clofun111(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006816 = makeNative(co->gc, 1, clofun110, 0, 0);
Obj v = closureRef(R[0], 0);
Obj x = closureRef(R[0], 1);
coraReturn(co, x);
return;
}
}
}

static void clofun110(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun109(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun109, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 105)), lam);
return;
}
case 1:
{
Obj x9223090566218783232= co->res;
Obj x9223090566218782752 = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), makeNative(co->gc, 3, clofun108, 2, 0), x9223090566218782752, x9223090566218783232);
return;
}
case 2:
{
Obj x9223090566218780864= co->res;
Obj lam = R[1];
Obj nargs = x9223090566218780864;
Obj x9223090566218782752 = PRIM_ADD(nargs, MAKE_NUMBER(1));
R[1] = x9223090566218782752;
saveCont(co, clofun109, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), lam);
return;
}
case 3:
{
Obj x9223090566218780832= co->res;
Obj lam = R[1];
R[1] = lam;
saveCont(co, clofun109, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), x9223090566218780832);
return;
}
}
}

static void clofun108(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj acc = R[1];
Obj x = R[2];
R[1] = acc;
saveCont(co, clofun108, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), x);
return;
}
case 1:
{
Obj x9223090566218782112= co->res;
Obj acc = R[1];
Obj x9223090566218782176 = PRIM_ADD(x9223090566218782112, MAKE_NUMBER(1));
Obj len = x9223090566218782176;
Obj x9223090566218782496 = PRIM_GT(len, acc);
if (True == x9223090566218782496) {
coraReturn(co, len);
return;
} else {
coraReturn(co, acc);
return;
}
}
case 2:
{
Obj x9223090566218782080= co->res;
Obj acc = R[1];
R[1] = acc;
saveCont(co, clofun108, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), x9223090566218782080);
return;
}
}
}

static void clofun107(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj params = R[1];
Obj body = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 67)), body, Nil, makeNative(co->gc, 3, clofun106, 2, 1, params));
return;
}
}
}

static void clofun106(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj body1 = R[1];
Obj conts = R[2];
R[1] = body1;
saveCont(co, clofun106, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), conts);
return;
}
case 1:
{
Obj x9223090566218951616= co->res;
Obj body1 = R[1];
Obj x9223090566218951648 = makeCons(co->gc, body1, x9223090566218951616);
Obj x9223090566218951680 = makeCons(co->gc, closureRef(R[0], 0), x9223090566218951648);
Obj x9223090566218951712 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566218951680);
coraReturn(co, x9223090566218951712);
return;
}
}
}

static void clofun105(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008032 = R[1];
Obj x9223090566219008064 = R[2];
Obj x9223090566219008192 = R[3];
Obj x9223090566219008320 = R[4];
Obj x9223090566219008544 = makeNative(co->gc, 1, clofun104, 0, 4, x9223090566219008032, x9223090566219008064, x9223090566219008192, x9223090566219008320);
Obj x9223090566218949120 = PRIM_EQ(Nil, x9223090566219008032);
if (True == x9223090566218949120) {
Obj conts = x9223090566219008064;
Obj ret = x9223090566219008192;
Obj k = x9223090566219008320;
co->ctx.sp = R;
coraCall2(co, k, ret, conts);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008544);
return;
}
}
}
}

static void clofun104(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009600 = makeNative(co->gc, 1, clofun101, 0, 0);
Obj x9223090566219093888 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219093888) {
Obj x9223090566219094272 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x9223090566219094272;
Obj x9223090566219094528 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x9223090566219094528;
Obj conts = closureRef(R[0], 1);
Obj ret = closureRef(R[0], 2);
Obj k = closureRef(R[0], 3);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 67)), f, conts, makeNative(co->gc, 3, clofun103, 2, 3, args, ret, k));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009600);
return;
}
}
}
}

static void clofun103(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj f1 = R[1];
Obj conts1 = R[2];
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 66)), closureRef(R[0], 0), conts1, closureRef(R[0], 1), makeNative(co->gc, 3, clofun102, 2, 2, closureRef(R[0], 2), f1));
return;
}
}
}

static void clofun102(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj args1 = R[1];
Obj conts2 = R[2];
Obj x9223090566219096032 = makeCons(co->gc, closureRef(R[0], 1), args1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x9223090566219096032, conts2);
return;
}
}
}

static void clofun101(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun100(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007616 = R[1];
Obj x9223090566219007680 = R[2];
Obj x9223090566219007840 = R[3];
Obj x9223090566219007936 = makeNative(co->gc, 1, clofun98, 0, 3, x9223090566219007616, x9223090566219007680, x9223090566219007840);
Obj x = x9223090566219007616;
Obj conts = x9223090566219007680;
Obj k = x9223090566219007840;
Obj x9223090566218949056 = makeNative(co->gc, 2, clofun99, 1, 4, k, x, conts, x9223090566219007936);
Obj x9223090566219092352 = primIsSymbol(x);
if (True == x9223090566219092352) {
co->ctx.sp = R;
coraCall1(co, x9223090566218949056, True);
return;
} else {
R[1] = x9223090566218949056;
saveCont(co, clofun100, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), x);
return;
}
}
case 1:
{
Obj x9223090566219092608= co->res;
Obj x9223090566218949056 = R[1];
if (True == x9223090566219092608) {
co->ctx.sp = R;
coraCall1(co, x9223090566218949056, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566218949056, False);
return;
}
}
}
}

static void clofun99(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218949088 = R[1];
if (True == x9223090566218949088) {
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 3));
return;
}
}
}
}

static void clofun98(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008800 = makeNative(co->gc, 1, clofun96, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x9223090566219311936 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219311936) {
Obj x9223090566219312576 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219312608 = PRIM_EQ(getBinding(co, packageID, 79).name, x9223090566219312576);
if (True == x9223090566219312608) {
Obj x9223090566219313088 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219313120 = PRIM_ISCONS(x9223090566219313088);
if (True == x9223090566219313120) {
Obj x9223090566219276928 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219276960 = PRIM_CAR(x9223090566219276928);
Obj exp = x9223090566219276960;
Obj x9223090566219277792 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219277824 = PRIM_CDR(x9223090566219277792);
Obj x9223090566219277856 = PRIM_ISCONS(x9223090566219277824);
if (True == x9223090566219277856) {
Obj x9223090566219278592 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219278624 = PRIM_CDR(x9223090566219278592);
Obj x9223090566219278656 = PRIM_CAR(x9223090566219278624);
Obj cont = x9223090566219278656;
Obj x9223090566219279584 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219279616 = PRIM_CDR(x9223090566219279584);
Obj x9223090566219279648 = PRIM_CDR(x9223090566219279616);
Obj x9223090566219279680 = PRIM_EQ(Nil, x9223090566219279648);
if (True == x9223090566219279680) {
Obj conts = closureRef(R[0], 1);
Obj k = closureRef(R[0], 2);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 67)), cont, conts, makeNative(co->gc, 4, clofun97, 2, 2, k, exp));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008800);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008800);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008800);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008800);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008800);
return;
}
}
}
}

static void clofun97(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj cont1 = R[1];
Obj conts1 = R[2];
R[1] = cont1;
R[2] = conts1;
saveCont(co, clofun97, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 65)), cont1);
return;
}
case 1:
{
Obj x9223090566219204320= co->res;
Obj fvs = R[1];
Obj cont1 = R[2];
Obj conts1 = R[3];
Obj x9223090566219204384 = PRIM_ADD(x9223090566219204320, MAKE_NUMBER(1));
Obj x9223090566219204448 = makeCons(co->gc, x9223090566219204384, fvs);
Obj x9223090566219204480 = makeCons(co->gc, closureRef(R[0], 1), x9223090566219204448);
Obj x9223090566219204512 = makeCons(co->gc, getBinding(co, packageID, 79).name, x9223090566219204480);
Obj x9223090566219204768 = makeCons(co->gc, cont1, conts1);
co->ctx.sp = R;
coraCall2(co, closureRef(R[0], 0), x9223090566219204512, x9223090566219204768);
return;
}
case 2:
{
Obj x9223090566219202688= co->res;
Obj cont1 = R[1];
Obj conts1 = R[2];
Obj fvs = x9223090566219202688;
R[1] = fvs;
R[2] = cont1;
R[3] = conts1;
saveCont(co, clofun97, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), conts1);
return;
}
}
}

static void clofun96(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009760 = makeNative(co->gc, 1, clofun95, 0, 0);
Obj x9223090566219309920 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219309920) {
Obj x9223090566219310336 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x9223090566219310336;
Obj x9223090566219310624 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x9223090566219310624;
Obj conts = closureRef(R[0], 1);
Obj k = closureRef(R[0], 2);
Obj x9223090566219311360 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall4(co, globalRef(co, getBinding(co, packageID, 66)), x9223090566219311360, conts, Nil, k);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009760);
return;
}
}
}
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008384 = R[1];
Obj x9223090566219008416 = R[2];
Obj x9223090566219008512 = makeNative(co->gc, 1, clofun93, 0, 2, x9223090566219008384, x9223090566219008416);
Obj __ = x9223090566219008384;
Obj x = x9223090566219008416;
R[1] = x;
R[2] = x9223090566219008512;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), x);
return;
}
case 1:
{
Obj x9223090566219386144= co->res;
Obj x = R[1];
Obj x9223090566219008512 = R[2];
if (True == x9223090566219386144) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008512);
return;
}
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009056 = makeNative(co->gc, 2, clofun92, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj var = closureRef(R[0], 1);
Obj x9223090566219385472 = primIsSymbol(var);
if (True == x9223090566219385472) {
coraReturn(co, var);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009056);
return;
}
}
}
}

static void clofun92(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009408 = makeNative(co->gc, 4, clofun91, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj x9223090566219411200 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566219411200) {
Obj x9223090566219387168 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219387328 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566219387168);
if (True == x9223090566219387328) {
Obj x9223090566219387808 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219387840 = PRIM_ISCONS(x9223090566219387808);
if (True == x9223090566219387840) {
Obj x9223090566219388320 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219388352 = PRIM_CAR(x9223090566219388320);
Obj args = x9223090566219388352;
Obj x9223090566219389088 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219389120 = PRIM_CDR(x9223090566219389088);
Obj x9223090566219389152 = PRIM_ISCONS(x9223090566219389120);
if (True == x9223090566219389152) {
Obj x9223090566219389856 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219389888 = PRIM_CDR(x9223090566219389856);
Obj x9223090566219389920 = PRIM_CAR(x9223090566219389888);
Obj body = x9223090566219389920;
Obj x9223090566219390944 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219382912 = PRIM_CDR(x9223090566219390944);
Obj x9223090566219382944 = PRIM_CDR(x9223090566219382912);
Obj x9223090566219382976 = PRIM_EQ(Nil, x9223090566219382944);
if (True == x9223090566219382976) {
R[1] = args;
saveCont(co, clofun92, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), fvs, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009408);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009408);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009408);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009408);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009408);
return;
}
}
case 1:
{
Obj x9223090566219384000= co->res;
Obj args = R[1];
Obj x9223090566219384064 = makeCons(co->gc, x9223090566219384000, Nil);
Obj x9223090566219384096 = makeCons(co->gc, args, x9223090566219384064);
Obj x9223090566219384128 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566219384096);
coraReturn(co, x9223090566219384128);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219010016 = makeNative(co->gc, 4, clofun90, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj x9223090566219488832 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566219488832) {
Obj x9223090566219456544 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219456608 = PRIM_EQ(getBinding(co, packageID, 81).name, x9223090566219456544);
if (True == x9223090566219456608) {
Obj x9223090566219457280 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219457312 = PRIM_ISCONS(x9223090566219457280);
if (True == x9223090566219457312) {
Obj x9223090566219457792 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219457824 = PRIM_CAR(x9223090566219457792);
Obj val = x9223090566219457824;
Obj x9223090566219458496 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219458528 = PRIM_CDR(x9223090566219458496);
Obj x9223090566219458624 = PRIM_ISCONS(x9223090566219458528);
if (True == x9223090566219458624) {
Obj x9223090566219459520 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219459552 = PRIM_CDR(x9223090566219459520);
Obj x9223090566219459584 = PRIM_CAR(x9223090566219459552);
Obj body = x9223090566219459584;
Obj x9223090566219460576 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219407360 = PRIM_CDR(x9223090566219460576);
Obj x9223090566219407392 = PRIM_CDR(x9223090566219407360);
Obj x9223090566219407424 = PRIM_EQ(Nil, x9223090566219407392);
if (True == x9223090566219407424) {
R[1] = fvs;
R[2] = body;
R[3] = val;
saveCont(co, clofun91, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219010016);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219010016);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219010016);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219010016);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219010016);
return;
}
}
case 1:
{
Obj x9223090566219409824= co->res;
Obj fvs2 = R[1];
Obj val = R[2];
Obj x9223090566219409888 = makeCons(co->gc, x9223090566219409824, fvs2);
Obj x9223090566219409920 = makeCons(co->gc, val, x9223090566219409888);
Obj x9223090566219409952 = makeCons(co->gc, getBinding(co, packageID, 68).name, x9223090566219409920);
coraReturn(co, x9223090566219409952);
return;
}
case 2:
{
Obj x9223090566219408736= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs2 = x9223090566219408736;
R[1] = fvs2;
R[2] = val;
saveCont(co, clofun91, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), fvs1, body);
return;
}
case 3:
{
Obj x9223090566219408672= co->res;
Obj fvs1 = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun91, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219408672, fvs1);
return;
}
case 4:
{
Obj x9223090566219408128= co->res;
Obj fvs = R[1];
Obj body = R[2];
Obj val = R[3];
Obj fvs1 = x9223090566219408128;
R[1] = fvs1;
R[2] = body;
R[3] = val;
saveCont(co, clofun91, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 69)), fvs);
return;
}
case 5:
{
Obj x9223090566219407936= co->res;
Obj fvs = R[1];
Obj body = R[2];
Obj val = R[3];
R[1] = fvs;
R[2] = body;
R[3] = val;
saveCont(co, clofun91, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), x9223090566219407936, val);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682944 = makeNative(co->gc, 3, clofun89, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj x9223090566219489600 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566219489600) {
Obj x9223090566219490240 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566219490272 = PRIM_EQ(getBinding(co, packageID, 79).name, x9223090566219490240);
if (True == x9223090566219490272) {
Obj x9223090566219490688 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219490784 = PRIM_ISCONS(x9223090566219490688);
if (True == x9223090566219490784) {
Obj x9223090566219491328 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219491360 = PRIM_CAR(x9223090566219491328);
Obj exp = x9223090566219491360;
Obj x9223090566219492096 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219492128 = PRIM_CDR(x9223090566219492096);
Obj x9223090566219492160 = PRIM_ISCONS(x9223090566219492128);
if (True == x9223090566219492160) {
Obj x9223090566219492928 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219492960 = PRIM_CDR(x9223090566219492928);
Obj x9223090566219492992 = PRIM_CAR(x9223090566219492960);
Obj cont = x9223090566219492992;
Obj x9223090566219485760 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566219485792 = PRIM_CDR(x9223090566219485760);
Obj x9223090566219485824 = PRIM_CDR(x9223090566219485792);
Obj x9223090566219485856 = PRIM_EQ(Nil, x9223090566219485824);
if (True == x9223090566219485856) {
R[1] = exp;
R[2] = fvs;
R[3] = cont;
saveCont(co, clofun90, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 69)), fvs);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682944);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682944);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682944);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682944);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682944);
return;
}
}
case 1:
{
Obj x9223090566219487520= co->res;
Obj x9223090566219486944 = R[1];
Obj x9223090566219487680 = makeCons(co->gc, x9223090566219487520, Nil);
Obj x9223090566219487712 = makeCons(co->gc, x9223090566219486944, x9223090566219487680);
Obj x9223090566219487744 = makeCons(co->gc, getBinding(co, packageID, 79).name, x9223090566219487712);
coraReturn(co, x9223090566219487744);
return;
}
case 2:
{
Obj x9223090566219486944= co->res;
Obj fvs = R[1];
Obj cont = R[2];
R[1] = x9223090566219486944;
saveCont(co, clofun90, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 69)), fvs, cont);
return;
}
case 3:
{
Obj x9223090566219486880= co->res;
Obj exp = R[1];
Obj fvs = R[2];
Obj cont = R[3];
R[1] = fvs;
R[2] = cont;
saveCont(co, clofun90, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219486880, exp);
return;
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683360 = makeNative(co->gc, 1, clofun88, 0, 0);
Obj fvs = closureRef(R[0], 0);
Obj x9223090566219520416 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566219520416) {
Obj x9223090566219520800 = PRIM_CAR(closureRef(R[0], 1));
Obj f = x9223090566219520800;
Obj x9223090566219521088 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x9223090566219521088;
R[1] = f;
R[2] = args;
saveCont(co, clofun89, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 69)), fvs);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683360);
return;
}
}
case 1:
{
Obj x9223090566219521600= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x9223090566219521856 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219521600, x9223090566219521856);
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006560 = R[1];
Obj x9223090566219006592 = R[2];
Obj x9223090566219006656 = R[3];
Obj x9223090566219006784 = makeNative(co->gc, 1, clofun85, 0, 3, x9223090566219006560, x9223090566219006592, x9223090566219006656);
Obj x9223090566219721408 = PRIM_EQ(Nil, x9223090566219006560);
if (True == x9223090566219721408) {
Obj ls = x9223090566219006592;
Obj next = x9223090566219006656;
R[1] = next;
saveCont(co, clofun87, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 73)), ls);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006784);
return;
}
}
case 1:
{
Obj x9223090566219518016= co->res;
Obj x9223090566218733408 = R[1];
Obj x9223090566219518176 = PRIM_EQ(x9223090566219518016, getBinding(co, packageID, 100).name);
if (True == x9223090566219518176) {
co->ctx.sp = R;
coraCall1(co, x9223090566218733408, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566218733408, False);
return;
}
}
case 2:
{
Obj x9223090566219550272= co->res;
Obj exp = R[1];
Obj x9223090566218733408 = R[2];
if (True == x9223090566219550272) {
R[1] = x9223090566218733408;
saveCont(co, clofun87, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 70)), exp);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566218733408, False);
return;
}
}
case 3:
{
Obj x9223090566219721792= co->res;
Obj next = R[1];
Obj exp = x9223090566219721792;
Obj x9223090566218733408 = makeNative(co->gc, 2, clofun86, 1, 2, exp, next);
Obj x9223090566219550240 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x9223090566218733408;
saveCont(co, clofun87, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 71)), x9223090566219550240);
return;
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218733440 = R[1];
if (True == x9223090566218733440) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 72)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x9223090566219722656 = PRIM_EQ(closureRef(R[0], 1), globalRef(co, getBinding(co, packageID, 76)));
if (True == x9223090566219722656) {
Obj x9223090566219547008 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj x9223090566219547040 = makeCons(co->gc, getBinding(co, packageID, 80).name, x9223090566219547008);
coraReturn(co, x9223090566219547040);
return;
} else {
if (True == True) {
Obj x9223090566219547424 = primGenSym(co);
Obj val = x9223090566219547424;
Obj x9223090566219548736 = makeCons(co->gc, val, Nil);
R[1] = x9223090566219548736;
saveCont(co, clofun86, 1, R);
coraCall1(co, closureRef(R[0], 1), val);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no cond match"));
return;
}
}
}
}
case 1:
{
Obj x9223090566219549120= co->res;
Obj x9223090566219548736 = R[1];
Obj x9223090566219549184 = makeCons(co->gc, x9223090566219549120, Nil);
Obj x9223090566219549216 = makeCons(co->gc, x9223090566219548736, x9223090566219549184);
Obj x9223090566219549248 = makeCons(co->gc, getBinding(co, packageID, 81).name, x9223090566219549216);
Obj x9223090566219549408 = makeCons(co->gc, x9223090566219549248, Nil);
Obj x9223090566219549440 = makeCons(co->gc, closureRef(R[0], 0), x9223090566219549408);
Obj x9223090566219549472 = makeCons(co->gc, getBinding(co, packageID, 79).name, x9223090566219549440);
coraReturn(co, x9223090566219549472);
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007584 = makeNative(co->gc, 1, clofun83, 0, 0);
Obj x9223090566219719008 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219719008) {
Obj x9223090566219719456 = PRIM_CAR(closureRef(R[0], 0));
Obj hd = x9223090566219719456;
Obj x9223090566219719776 = PRIM_CDR(closureRef(R[0], 0));
Obj tl = x9223090566219719776;
Obj ls = closureRef(R[0], 1);
Obj next = closureRef(R[0], 2);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), hd, makeNative(co->gc, 2, clofun84, 1, 3, tl, ls, next));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007584);
return;
}
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj hd1 = R[1];
Obj x9223090566219720768 = makeCons(co->gc, hd1, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 74)), closureRef(R[0], 0), x9223090566219720768, closureRef(R[0], 2));
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun82(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006272 = R[1];
Obj x9223090566219006336 = R[2];
Obj x9223090566219006368 = makeNative(co->gc, 3, clofun80, 0, 2, x9223090566219006272, x9223090566219006336);
Obj x = x9223090566219006272;
Obj next = x9223090566219006336;
Obj x9223090566219311872 = makeNative(co->gc, 2, clofun81, 1, 3, next, x, x9223090566219006368);
Obj x9223090566219905312 = primIsSymbol(x);
if (True == x9223090566219905312) {
co->ctx.sp = R;
coraCall1(co, x9223090566219311872, True);
return;
} else {
R[1] = x9223090566219311872;
saveCont(co, clofun82, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), x);
return;
}
}
case 1:
{
Obj x9223090566219905632= co->res;
Obj x9223090566219311872 = R[1];
if (True == x9223090566219905632) {
co->ctx.sp = R;
coraCall1(co, x9223090566219311872, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566219311872, False);
return;
}
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219311904 = R[1];
if (True == x9223090566219311904) {
co->ctx.sp = R;
coraCall1(co, closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 2));
return;
}
}
}
}

static void clofun80(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007040 = makeNative(co->gc, 1, clofun79, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x = closureRef(R[0], 0);
Obj __ = closureRef(R[0], 1);
R[1] = x;
R[2] = x9223090566219007040;
saveCont(co, clofun80, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), x);
return;
}
case 1:
{
Obj x9223090566219903872= co->res;
Obj x = R[1];
Obj x9223090566219007040 = R[2];
if (True == x9223090566219903872) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007040);
return;
}
}
}
}

static void clofun79(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007488 = makeNative(co->gc, 1, clofun77, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566220360672 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220360672) {
Obj x9223090566220361216 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220361248 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566220361216);
if (True == x9223090566220361248) {
Obj x9223090566220103840 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220103872 = PRIM_ISCONS(x9223090566220103840);
if (True == x9223090566220103872) {
Obj x9223090566220104288 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220104320 = PRIM_CAR(x9223090566220104288);
Obj a = x9223090566220104320;
Obj x9223090566220105088 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220105120 = PRIM_CDR(x9223090566220105088);
Obj x9223090566220105152 = PRIM_ISCONS(x9223090566220105120);
if (True == x9223090566220105152) {
Obj x9223090566220105888 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220105984 = PRIM_CDR(x9223090566220105888);
Obj x9223090566220106016 = PRIM_CAR(x9223090566220105984);
Obj b = x9223090566220106016;
Obj x9223090566220106944 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220106976 = PRIM_CDR(x9223090566220106944);
Obj x9223090566220107008 = PRIM_CDR(x9223090566220106976);
Obj x9223090566220107040 = PRIM_ISCONS(x9223090566220107008);
if (True == x9223090566220107040) {
Obj x9223090566220017792 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220017824 = PRIM_CDR(x9223090566220017792);
Obj x9223090566220017856 = PRIM_CDR(x9223090566220017824);
Obj x9223090566220017984 = PRIM_CAR(x9223090566220017856);
Obj c = x9223090566220017984;
Obj x9223090566220019200 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220019232 = PRIM_CDR(x9223090566220019200);
Obj x9223090566220019264 = PRIM_CDR(x9223090566220019232);
Obj x9223090566220019296 = PRIM_CDR(x9223090566220019264);
Obj x9223090566220019328 = PRIM_EQ(Nil, x9223090566220019296);
if (True == x9223090566220019328) {
Obj next = closureRef(R[0], 1);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), a, makeNative(co->gc, 3, clofun78, 1, 3, b, c, next));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007488);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007488);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007488);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007488);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007488);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007488);
return;
}
}
}
}

static void clofun78(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
R[1] = ra;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 0), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x9223090566220021152= co->res;
Obj x9223090566220020736 = R[1];
Obj ra = R[2];
Obj x9223090566220021216 = makeCons(co->gc, x9223090566220021152, Nil);
Obj x9223090566220021248 = makeCons(co->gc, x9223090566220020736, x9223090566220021216);
Obj x9223090566220021280 = makeCons(co->gc, ra, x9223090566220021248);
Obj x9223090566220021312 = makeCons(co->gc, getBinding(co, packageID, 97).name, x9223090566220021280);
coraReturn(co, x9223090566220021312);
return;
}
case 2:
{
Obj x9223090566220020736= co->res;
Obj ra = R[1];
R[1] = x9223090566220020736;
R[2] = ra;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008288 = makeNative(co->gc, 1, clofun75, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566220361888 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220361888) {
Obj x9223090566220362336 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220362496 = PRIM_EQ(getBinding(co, packageID, 95).name, x9223090566220362336);
if (True == x9223090566220362496) {
Obj x9223090566220362912 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220362944 = PRIM_ISCONS(x9223090566220362912);
if (True == x9223090566220362944) {
Obj x9223090566220363360 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220363552 = PRIM_CAR(x9223090566220363360);
Obj a = x9223090566220363552;
Obj x9223090566220364128 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220364160 = PRIM_CDR(x9223090566220364128);
Obj x9223090566220364192 = PRIM_ISCONS(x9223090566220364160);
if (True == x9223090566220364192) {
Obj x9223090566220364768 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220364832 = PRIM_CDR(x9223090566220364768);
Obj x9223090566220364992 = PRIM_CAR(x9223090566220364832);
Obj b = x9223090566220364992;
Obj x9223090566220357696 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220357728 = PRIM_CDR(x9223090566220357696);
Obj x9223090566220357760 = PRIM_CDR(x9223090566220357728);
Obj x9223090566220357792 = PRIM_EQ(Nil, x9223090566220357760);
if (True == x9223090566220357792) {
Obj next = closureRef(R[0], 1);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), a, makeNative(co->gc, 2, clofun76, 1, 2, b, next));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008288);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008288);
return;
}
}
}
}

static void clofun76(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj ra = R[1];
Obj x9223090566220358400 = primIsSymbol(ra);
if (True == x9223090566220358400) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
R[1] = ra;
saveCont(co, clofun76, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj x9223090566220359552= co->res;
Obj ra = R[1];
Obj x9223090566220359616 = makeCons(co->gc, x9223090566220359552, Nil);
Obj x9223090566220359648 = makeCons(co->gc, ra, x9223090566220359616);
Obj x9223090566220359680 = makeCons(co->gc, getBinding(co, packageID, 95).name, x9223090566220359648);
coraReturn(co, x9223090566220359680);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009184 = makeNative(co->gc, 4, clofun73, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566220358144 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220358144) {
Obj x9223090566220358592 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220358624 = PRIM_EQ(getBinding(co, packageID, 96).name, x9223090566220358592);
if (True == x9223090566220358624) {
Obj x9223090566220359040 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220359072 = PRIM_ISCONS(x9223090566220359040);
if (True == x9223090566220359072) {
Obj x9223090566220359488 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220359520 = PRIM_CAR(x9223090566220359488);
Obj a = x9223090566220359520;
Obj x9223090566220360096 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220360128 = PRIM_CDR(x9223090566220360096);
Obj x9223090566220360160 = PRIM_ISCONS(x9223090566220360128);
if (True == x9223090566220360160) {
Obj x9223090566220360736 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220360768 = PRIM_CDR(x9223090566220360736);
Obj x9223090566220360800 = PRIM_CAR(x9223090566220360768);
Obj b = x9223090566220360800;
Obj x9223090566220361536 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220361568 = PRIM_CDR(x9223090566220361536);
Obj x9223090566220361600 = PRIM_CDR(x9223090566220361568);
Obj x9223090566220361632 = PRIM_ISCONS(x9223090566220361600);
if (True == x9223090566220361632) {
Obj x9223090566220362368 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220362400 = PRIM_CDR(x9223090566220362368);
Obj x9223090566220362432 = PRIM_CDR(x9223090566220362400);
Obj x9223090566220362464 = PRIM_CAR(x9223090566220362432);
Obj c = x9223090566220362464;
Obj x9223090566220363392 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220363424 = PRIM_CDR(x9223090566220363392);
Obj x9223090566220363456 = PRIM_CDR(x9223090566220363424);
Obj x9223090566220363488 = PRIM_CDR(x9223090566220363456);
Obj x9223090566220363520 = PRIM_EQ(Nil, x9223090566220363488);
if (True == x9223090566220363520) {
Obj next = closureRef(R[0], 1);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), b, makeNative(co->gc, 2, clofun74, 1, 3, a, c, next));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009184);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009184);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rb = R[1];
R[1] = rb;
saveCont(co, clofun74, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj x9223090566220364800= co->res;
Obj rb = R[1];
Obj x9223090566220364864 = makeCons(co->gc, x9223090566220364800, Nil);
Obj x9223090566220364896 = makeCons(co->gc, rb, x9223090566220364864);
Obj x9223090566220364928 = makeCons(co->gc, closureRef(R[0], 0), x9223090566220364896);
Obj x9223090566220364960 = makeCons(co->gc, getBinding(co, packageID, 96).name, x9223090566220364928);
coraReturn(co, x9223090566220364960);
return;
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009888 = makeNative(co->gc, 1, clofun72, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566218438656 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218438656) {
Obj x9223090566218439104 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566218439136 = PRIM_EQ(getBinding(co, packageID, 84).name, x9223090566218439104);
if (True == x9223090566218439136) {
Obj x9223090566218439584 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218439616 = PRIM_ISCONS(x9223090566218439584);
if (True == x9223090566218439616) {
Obj x9223090566218440320 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218440352 = PRIM_CAR(x9223090566218440320);
Obj x9223090566218440384 = PRIM_ISCONS(x9223090566218440352);
if (True == x9223090566218440384) {
Obj x9223090566218224224 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218224256 = PRIM_CAR(x9223090566218224224);
Obj x9223090566218224288 = PRIM_CAR(x9223090566218224256);
Obj x9223090566218224320 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566218224288);
if (True == x9223090566218224320) {
Obj x9223090566218225088 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218225120 = PRIM_CAR(x9223090566218225088);
Obj x9223090566218225152 = PRIM_CDR(x9223090566218225120);
Obj x9223090566218225184 = PRIM_ISCONS(x9223090566218225152);
if (True == x9223090566218225184) {
Obj x9223090566218226048 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218226080 = PRIM_CAR(x9223090566218226048);
Obj x9223090566218226112 = PRIM_CDR(x9223090566218226080);
Obj x9223090566218226144 = PRIM_CAR(x9223090566218226112);
Obj args = x9223090566218226144;
Obj x9223090566218227328 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218227360 = PRIM_CAR(x9223090566218227328);
Obj x9223090566218227392 = PRIM_CDR(x9223090566218227360);
Obj x9223090566218227424 = PRIM_CDR(x9223090566218227392);
Obj x9223090566218227456 = PRIM_ISCONS(x9223090566218227424);
if (True == x9223090566218227456) {
Obj x9223090566217933440 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566217933472 = PRIM_CAR(x9223090566217933440);
Obj x9223090566217933504 = PRIM_CDR(x9223090566217933472);
Obj x9223090566217933536 = PRIM_CDR(x9223090566217933504);
Obj x9223090566217933568 = PRIM_CAR(x9223090566217933536);
Obj body = x9223090566217933568;
Obj x9223090566217934656 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566217934688 = PRIM_CAR(x9223090566217934656);
Obj x9223090566217934720 = PRIM_CDR(x9223090566217934688);
Obj x9223090566217934752 = PRIM_CDR(x9223090566217934720);
Obj x9223090566217934784 = PRIM_CDR(x9223090566217934752);
Obj x9223090566217934816 = PRIM_EQ(Nil, x9223090566217934784);
if (True == x9223090566217934816) {
Obj x9223090566217935232 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566217935264 = PRIM_CDR(x9223090566217935232);
Obj frees = x9223090566217935264;
Obj next = closureRef(R[0], 1);
R[1] = args;
R[2] = frees;
R[3] = next;
saveCont(co, clofun73, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 75)), body, globalRef(co, getBinding(co, packageID, 76)));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009888);
return;
}
}
case 1:
{
Obj x9223090566217936608= co->res;
Obj args = R[1];
Obj frees = R[2];
Obj next = R[3];
Obj x9223090566217936672 = makeCons(co->gc, x9223090566217936608, Nil);
Obj x9223090566217936704 = makeCons(co->gc, args, x9223090566217936672);
Obj x9223090566217936736 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566217936704);
Obj x9223090566217936800 = makeCons(co->gc, x9223090566217936736, frees);
Obj x9223090566217936832 = makeCons(co->gc, getBinding(co, packageID, 84).name, x9223090566217936800);
co->ctx.sp = R;
coraCall1(co, next, x9223090566217936832);
return;
}
}
}

static void clofun72(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007808 = makeNative(co->gc, 1, clofun71, 0, 0);
Obj x9223090566218437024 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218437024) {
Obj x9223090566218437344 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x9223090566218437344;
Obj x9223090566218437600 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x9223090566218437600;
Obj next = closureRef(R[0], 1);
Obj x9223090566218438112 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 74)), x9223090566218438112, Nil, next);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007808);
return;
}
}
}
}

static void clofun71(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x9223090566218520864 = makeCons(co->gc, x, Nil);
Obj x9223090566218520992 = makeCons(co->gc, getBinding(co, packageID, 78).name, x9223090566218520864);
coraReturn(co, x9223090566218520992);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006176 = R[1];
Obj x9223090566219006208 = R[2];
Obj x9223090566219006240 = makeNative(co->gc, 2, clofun68, 0, 2, x9223090566219006176, x9223090566219006208);
Obj __ = x9223090566219006176;
Obj x = x9223090566219006208;
R[1] = x;
R[2] = x9223090566219006240;
saveCont(co, clofun69, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), x);
return;
}
case 1:
{
Obj x9223090566218519808= co->res;
Obj x = R[1];
Obj x9223090566219006240 = R[2];
if (True == x9223090566218519808) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006240);
return;
}
}
}
}

static void clofun68(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006624 = makeNative(co->gc, 4, clofun67, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj var = closureRef(R[0], 1);
Obj x9223090566218649056 = primIsSymbol(var);
if (True == x9223090566218649056) {
R[1] = var;
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 130)), var, fvs);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006624);
return;
}
}
case 1:
{
Obj x9223090566218649408= co->res;
Obj var = R[1];
Obj pos = x9223090566218649408;
Obj x9223090566218518656 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x9223090566218518656) {
coraReturn(co, var);
return;
} else {
Obj x9223090566218519168 = makeCons(co->gc, pos, Nil);
Obj x9223090566218519200 = makeCons(co->gc, getBinding(co, packageID, 83).name, x9223090566218519168);
coraReturn(co, x9223090566218519200);
return;
}
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007104 = makeNative(co->gc, 4, clofun66, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj x9223090566218732960 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566218732960) {
Obj x9223090566218733504 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566218733600 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566218733504);
if (True == x9223090566218733600) {
Obj x9223090566218734112 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218734144 = PRIM_ISCONS(x9223090566218734112);
if (True == x9223090566218734144) {
Obj x9223090566218734656 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218734688 = PRIM_CAR(x9223090566218734656);
Obj args = x9223090566218734688;
Obj x9223090566218735424 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218735456 = PRIM_CDR(x9223090566218735424);
Obj x9223090566218735488 = PRIM_ISCONS(x9223090566218735456);
if (True == x9223090566218735488) {
Obj x9223090566218684256 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218684384 = PRIM_CDR(x9223090566218684256);
Obj x9223090566218684416 = PRIM_CAR(x9223090566218684384);
Obj body = x9223090566218684416;
Obj x9223090566218685472 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218685536 = PRIM_CDR(x9223090566218685472);
Obj x9223090566218685568 = PRIM_CDR(x9223090566218685536);
Obj x9223090566218685664 = PRIM_EQ(Nil, x9223090566218685568);
if (True == x9223090566218685664) {
Obj x9223090566218645696 = makeCons(co->gc, body, Nil);
Obj x9223090566218645728 = makeCons(co->gc, args, x9223090566218645696);
Obj x9223090566218645760 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566218645728);
R[1] = body;
R[2] = args;
R[3] = fvs;
saveCont(co, clofun67, 4, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), x9223090566218645760);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007104);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007104);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007104);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007104);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007104);
return;
}
}
case 1:
{
Obj x9223090566218647872= co->res;
Obj x9223090566218647392 = R[1];
Obj x9223090566218647904 = makeCons(co->gc, x9223090566218647392, x9223090566218647872);
Obj x9223090566218647936 = makeCons(co->gc, getBinding(co, packageID, 84).name, x9223090566218647904);
coraReturn(co, x9223090566218647936);
return;
}
case 2:
{
Obj x9223090566218647808= co->res;
Obj fvs1 = R[1];
Obj x9223090566218647392 = R[2];
R[1] = x9223090566218647392;
saveCont(co, clofun67, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566218647808, fvs1);
return;
}
case 3:
{
Obj x9223090566218647200= co->res;
Obj args = R[1];
Obj fvs = R[2];
Obj fvs1 = R[3];
Obj x9223090566218647328 = makeCons(co->gc, x9223090566218647200, Nil);
Obj x9223090566218647360 = makeCons(co->gc, args, x9223090566218647328);
Obj x9223090566218647392 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566218647360);
R[1] = fvs1;
R[2] = x9223090566218647392;
saveCont(co, clofun67, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 77)), fvs);
return;
}
case 4:
{
Obj x9223090566218645792= co->res;
Obj body = R[1];
Obj args = R[2];
Obj fvs = R[3];
Obj fvs1 = x9223090566218645792;
R[1] = args;
R[2] = fvs;
R[3] = fvs1;
saveCont(co, clofun67, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), fvs1, body);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007872 = makeNative(co->gc, 3, clofun65, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj fvs = closureRef(R[0], 0);
Obj x9223090566218948896 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566218948896) {
Obj x9223090566218949472 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566218949504 = PRIM_EQ(getBinding(co, packageID, 96).name, x9223090566218949472);
if (True == x9223090566218949504) {
Obj x9223090566218949952 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218949984 = PRIM_ISCONS(x9223090566218949952);
if (True == x9223090566218949984) {
Obj x9223090566218950464 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218950496 = PRIM_CAR(x9223090566218950464);
Obj a = x9223090566218950496;
Obj x9223090566218951168 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218951200 = PRIM_CDR(x9223090566218951168);
Obj x9223090566218951232 = PRIM_ISCONS(x9223090566218951200);
if (True == x9223090566218951232) {
Obj x9223090566218951904 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218952000 = PRIM_CDR(x9223090566218951904);
Obj x9223090566218952064 = PRIM_CAR(x9223090566218952000);
Obj b = x9223090566218952064;
Obj x9223090566218780928 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218780960 = PRIM_CDR(x9223090566218780928);
Obj x9223090566218781024 = PRIM_CDR(x9223090566218780960);
Obj x9223090566218781056 = PRIM_ISCONS(x9223090566218781024);
if (True == x9223090566218781056) {
Obj x9223090566218781888 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218781920 = PRIM_CDR(x9223090566218781888);
Obj x9223090566218781952 = PRIM_CDR(x9223090566218781920);
Obj x9223090566218782016 = PRIM_CAR(x9223090566218781952);
Obj c = x9223090566218782016;
Obj x9223090566218783072 = PRIM_CDR(closureRef(R[0], 1));
Obj x9223090566218783104 = PRIM_CDR(x9223090566218783072);
Obj x9223090566218783136 = PRIM_CDR(x9223090566218783104);
Obj x9223090566218783168 = PRIM_CDR(x9223090566218783136);
Obj x9223090566218783200 = PRIM_EQ(Nil, x9223090566218783168);
if (True == x9223090566218783200) {
R[1] = fvs;
R[2] = c;
R[3] = a;
saveCont(co, clofun66, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), fvs, b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007872);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007872);
return;
}
}
case 1:
{
Obj x9223090566218731552= co->res;
Obj x9223090566218784256 = R[1];
Obj a = R[2];
Obj x9223090566218731616 = makeCons(co->gc, x9223090566218731552, Nil);
Obj x9223090566218731648 = makeCons(co->gc, x9223090566218784256, x9223090566218731616);
Obj x9223090566218731680 = makeCons(co->gc, a, x9223090566218731648);
Obj x9223090566218731712 = makeCons(co->gc, getBinding(co, packageID, 96).name, x9223090566218731680);
coraReturn(co, x9223090566218731712);
return;
}
case 2:
{
Obj x9223090566218784256= co->res;
Obj fvs = R[1];
Obj c = R[2];
Obj a = R[3];
R[1] = x9223090566218784256;
R[2] = a;
saveCont(co, clofun66, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 77)), fvs, c);
return;
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008704 = makeNative(co->gc, 1, clofun64, 0, 0);
Obj fvs = closureRef(R[0], 0);
Obj x9223090566219094656 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566219094656) {
Obj x9223090566219094912 = PRIM_CAR(closureRef(R[0], 1));
Obj f = x9223090566219094912;
Obj x9223090566219095200 = PRIM_CDR(closureRef(R[0], 1));
Obj args = x9223090566219095200;
R[1] = f;
R[2] = args;
saveCont(co, clofun65, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 77)), fvs);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008704);
return;
}
}
case 1:
{
Obj x9223090566219095680= co->res;
Obj f = R[1];
Obj args = R[2];
Obj x9223090566219095936 = makeCons(co->gc, f, args);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219095680, x9223090566219095936);
return;
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008736 = R[1];
Obj x9223090566219008768 = makeNative(co->gc, 1, clofun62, 0, 1, x9223090566219008736);
Obj x = x9223090566219008736;
R[1] = x9223090566219008768;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 85)), x);
return;
}
case 1:
{
Obj x9223090566219092832= co->res;
Obj x9223090566219008768 = R[1];
if (True == x9223090566219092832) {
coraReturn(co, Nil);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008768);
return;
}
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008992 = makeNative(co->gc, 2, clofun61, 0, 1, closureRef(R[0], 0));
Obj x = closureRef(R[0], 0);
Obj x9223090566219092000 = primIsSymbol(x);
if (True == x9223090566219092000) {
Obj x9223090566219092288 = makeCons(co->gc, x, Nil);
coraReturn(co, x9223090566219092288);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008992);
return;
}
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009120 = makeNative(co->gc, 1, clofun60, 0, 1, closureRef(R[0], 0));
Obj x9223090566219279008 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219279008) {
Obj x9223090566219279456 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219279488 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566219279456);
if (True == x9223090566219279488) {
Obj x9223090566219279904 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219279936 = PRIM_ISCONS(x9223090566219279904);
if (True == x9223090566219279936) {
Obj x9223090566219202560 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219202592 = PRIM_CAR(x9223090566219202560);
Obj args = x9223090566219202592;
Obj x9223090566219203328 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219203360 = PRIM_CDR(x9223090566219203328);
Obj x9223090566219203392 = PRIM_ISCONS(x9223090566219203360);
if (True == x9223090566219203392) {
Obj x9223090566219203968 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219204000 = PRIM_CDR(x9223090566219203968);
Obj x9223090566219204064 = PRIM_CAR(x9223090566219204000);
Obj body = x9223090566219204064;
Obj x9223090566219205024 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219205120 = PRIM_CDR(x9223090566219205024);
Obj x9223090566219205152 = PRIM_CDR(x9223090566219205120);
Obj x9223090566219205184 = PRIM_EQ(Nil, x9223090566219205152);
if (True == x9223090566219205184) {
R[1] = args;
saveCont(co, clofun61, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009120);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009120);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009120);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009120);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009120);
return;
}
}
case 1:
{
Obj x9223090566219205568= co->res;
Obj args = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), x9223090566219205568, args);
return;
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009632 = makeNative(co->gc, 1, clofun59, 0, 1, closureRef(R[0], 0));
Obj x9223090566219384928 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219384928) {
Obj x9223090566219385568 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219385600 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566219385568);
if (True == x9223090566219385600) {
Obj x9223090566219386048 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219386080 = PRIM_ISCONS(x9223090566219386048);
if (True == x9223090566219386080) {
Obj x9223090566219386624 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219386656 = PRIM_CAR(x9223090566219386624);
Obj x = x9223090566219386656;
Obj x9223090566219309408 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219309440 = PRIM_CDR(x9223090566219309408);
Obj x9223090566219309472 = PRIM_ISCONS(x9223090566219309440);
if (True == x9223090566219309472) {
Obj x9223090566219310080 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219310112 = PRIM_CDR(x9223090566219310080);
Obj x9223090566219310144 = PRIM_CAR(x9223090566219310112);
Obj y = x9223090566219310144;
Obj x9223090566219310976 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219311008 = PRIM_CDR(x9223090566219310976);
Obj x9223090566219311040 = PRIM_CDR(x9223090566219311008);
Obj x9223090566219311104 = PRIM_ISCONS(x9223090566219311040);
if (True == x9223090566219311104) {
Obj x9223090566219312000 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219312032 = PRIM_CDR(x9223090566219312000);
Obj x9223090566219312064 = PRIM_CDR(x9223090566219312032);
Obj x9223090566219312096 = PRIM_CAR(x9223090566219312064);
Obj z = x9223090566219312096;
Obj x9223090566219276288 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219276320 = PRIM_CDR(x9223090566219276288);
Obj x9223090566219276352 = PRIM_CDR(x9223090566219276320);
Obj x9223090566219276384 = PRIM_CDR(x9223090566219276352);
Obj x9223090566219276416 = PRIM_EQ(Nil, x9223090566219276384);
if (True == x9223090566219276416) {
Obj x9223090566219277664 = makeCons(co->gc, z, Nil);
Obj x9223090566219277696 = makeCons(co->gc, y, x9223090566219277664);
Obj x9223090566219277728 = makeCons(co->gc, x, x9223090566219277696);
saveCont(co, clofun60, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), globalRef(co, getBinding(co, packageID, 82)), x9223090566219277728);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009632);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009632);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009632);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009632);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009632);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009632);
return;
}
}
case 1:
{
Obj x9223090566219277760= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, x9223090566219277760);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682368 = makeNative(co->gc, 3, clofun58, 0, 1, closureRef(R[0], 0));
Obj x9223090566219387104 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219387104) {
Obj x9223090566219387712 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219387744 = PRIM_EQ(getBinding(co, packageID, 95).name, x9223090566219387712);
if (True == x9223090566219387744) {
Obj x9223090566219388160 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219388192 = PRIM_ISCONS(x9223090566219388160);
if (True == x9223090566219388192) {
Obj x9223090566219388640 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219388672 = PRIM_CAR(x9223090566219388640);
Obj x = x9223090566219388672;
Obj x9223090566219389344 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219389376 = PRIM_CDR(x9223090566219389344);
Obj x9223090566219389408 = PRIM_ISCONS(x9223090566219389376);
if (True == x9223090566219389408) {
Obj x9223090566219390016 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219390048 = PRIM_CDR(x9223090566219390016);
Obj x9223090566219390080 = PRIM_CAR(x9223090566219390048);
Obj y = x9223090566219390080;
Obj x9223090566219382784 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219382816 = PRIM_CDR(x9223090566219382784);
Obj x9223090566219382848 = PRIM_CDR(x9223090566219382816);
Obj x9223090566219382880 = PRIM_EQ(Nil, x9223090566219382848);
if (True == x9223090566219382880) {
Obj x9223090566219383872 = makeCons(co->gc, y, Nil);
Obj x9223090566219383904 = makeCons(co->gc, x, x9223090566219383872);
saveCont(co, clofun59, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), globalRef(co, getBinding(co, packageID, 82)), x9223090566219383904);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682368);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682368);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682368);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682368);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682368);
return;
}
}
case 1:
{
Obj x9223090566219383936= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, x9223090566219383936);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682848 = makeNative(co->gc, 1, clofun57, 0, 1, closureRef(R[0], 0));
Obj x9223090566219489152 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219489152) {
Obj x9223090566219457056 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219457088 = PRIM_EQ(getBinding(co, packageID, 96).name, x9223090566219457056);
if (True == x9223090566219457088) {
Obj x9223090566219457504 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219457536 = PRIM_ISCONS(x9223090566219457504);
if (True == x9223090566219457536) {
Obj x9223090566219457952 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219457984 = PRIM_CAR(x9223090566219457952);
Obj a = x9223090566219457984;
Obj x9223090566219458656 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219458688 = PRIM_CDR(x9223090566219458656);
Obj x9223090566219458720 = PRIM_ISCONS(x9223090566219458688);
if (True == x9223090566219458720) {
Obj x9223090566219459360 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219459392 = PRIM_CDR(x9223090566219459360);
Obj x9223090566219459424 = PRIM_CAR(x9223090566219459392);
Obj b = x9223090566219459424;
Obj x9223090566219460320 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219460352 = PRIM_CDR(x9223090566219460320);
Obj x9223090566219460384 = PRIM_CDR(x9223090566219460352);
Obj x9223090566219460416 = PRIM_ISCONS(x9223090566219460384);
if (True == x9223090566219460416) {
Obj x9223090566219408000 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219408032 = PRIM_CDR(x9223090566219408000);
Obj x9223090566219408064 = PRIM_CDR(x9223090566219408032);
Obj x9223090566219408096 = PRIM_CAR(x9223090566219408064);
Obj c = x9223090566219408096;
Obj x9223090566219409280 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219409312 = PRIM_CDR(x9223090566219409280);
Obj x9223090566219409344 = PRIM_CDR(x9223090566219409312);
Obj x9223090566219409376 = PRIM_CDR(x9223090566219409344);
Obj x9223090566219409408 = PRIM_EQ(Nil, x9223090566219409376);
if (True == x9223090566219409408) {
R[1] = c;
R[2] = a;
saveCont(co, clofun58, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682848);
return;
}
}
case 1:
{
Obj x9223090566219410592= co->res;
Obj x9223090566219409760 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 87)), x9223090566219409760, x9223090566219410592);
return;
}
case 2:
{
Obj x9223090566219410304= co->res;
Obj a = R[1];
Obj x9223090566219409760 = R[2];
Obj x9223090566219410560 = makeCons(co->gc, a, Nil);
R[1] = x9223090566219409760;
saveCont(co, clofun58, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), x9223090566219410304, x9223090566219410560);
return;
}
case 3:
{
Obj x9223090566219409760= co->res;
Obj c = R[1];
Obj a = R[2];
R[1] = a;
R[2] = x9223090566219409760;
saveCont(co, clofun58, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), c);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006752 = makeNative(co->gc, 1, clofun56, 0, 1, closureRef(R[0], 0));
Obj x9223090566219485920 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219485920) {
Obj x9223090566219486496 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219486528 = PRIM_EQ(getBinding(co, packageID, 84).name, x9223090566219486496);
if (True == x9223090566219486528) {
Obj x9223090566219487040 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219487072 = PRIM_ISCONS(x9223090566219487040);
if (True == x9223090566219487072) {
Obj x9223090566219487616 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219487648 = PRIM_CAR(x9223090566219487616);
Obj lam = x9223090566219487648;
Obj x9223090566219488064 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219488096 = PRIM_CDR(x9223090566219488064);
Obj more = x9223090566219488096;
Obj x9223090566219488480 = makeCons(co->gc, lam, more);
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), x9223090566219488480);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006752);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006752);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006752);
return;
}
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007328 = makeNative(co->gc, 1, clofun55, 0, 1, closureRef(R[0], 0));
Obj x9223090566219490752 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219490752) {
Obj x9223090566219491264 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219491296 = PRIM_EQ(getBinding(co, packageID, 78).name, x9223090566219491264);
if (True == x9223090566219491296) {
Obj x9223090566219491712 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219491744 = PRIM_ISCONS(x9223090566219491712);
if (True == x9223090566219491744) {
Obj x9223090566219492320 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219492352 = PRIM_CAR(x9223090566219492320);
Obj x = x9223090566219492352;
Obj x9223090566219493024 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219493056 = PRIM_CDR(x9223090566219493024);
Obj x9223090566219493088 = PRIM_EQ(Nil, x9223090566219493056);
if (True == x9223090566219493088) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007328);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007328);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007328);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007328);
return;
}
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007712 = makeNative(co->gc, 1, clofun54, 0, 1, closureRef(R[0], 0));
Obj x9223090566219550304 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219550304) {
Obj x9223090566219518048 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219518080 = PRIM_EQ(getBinding(co, packageID, 79).name, x9223090566219518048);
if (True == x9223090566219518080) {
Obj x9223090566219518560 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219518592 = PRIM_ISCONS(x9223090566219518560);
if (True == x9223090566219518592) {
Obj x9223090566219519072 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219519104 = PRIM_CAR(x9223090566219519072);
Obj exp = x9223090566219519104;
Obj x9223090566219519712 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219519744 = PRIM_CDR(x9223090566219519712);
Obj x9223090566219519840 = PRIM_ISCONS(x9223090566219519744);
if (True == x9223090566219519840) {
Obj x9223090566219520512 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219520544 = PRIM_CDR(x9223090566219520512);
Obj x9223090566219520576 = PRIM_CAR(x9223090566219520544);
Obj cont = x9223090566219520576;
Obj x9223090566219521440 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219521472 = PRIM_CDR(x9223090566219521440);
Obj x9223090566219521504 = PRIM_CDR(x9223090566219521472);
Obj x9223090566219521536 = PRIM_EQ(Nil, x9223090566219521504);
if (True == x9223090566219521536) {
Obj x9223090566219489760 = makeCons(co->gc, cont, Nil);
Obj x9223090566219489792 = makeCons(co->gc, exp, x9223090566219489760);
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), globalRef(co, getBinding(co, packageID, 82)), x9223090566219489792);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007712);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007712);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007712);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007712);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007712);
return;
}
}
case 1:
{
Obj x9223090566219489824= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, x9223090566219489824);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008224 = makeNative(co->gc, 2, clofun53, 0, 1, closureRef(R[0], 0));
Obj x9223090566219547264 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219547264) {
Obj x9223090566219547744 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219547776 = PRIM_EQ(getBinding(co, packageID, 80).name, x9223090566219547744);
if (True == x9223090566219547776) {
Obj x9223090566219548192 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219548224 = PRIM_ISCONS(x9223090566219548192);
if (True == x9223090566219548224) {
Obj x9223090566219548640 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219548672 = PRIM_CAR(x9223090566219548640);
Obj exp = x9223090566219548672;
Obj x9223090566219549280 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219549312 = PRIM_CDR(x9223090566219549280);
Obj x9223090566219549344 = PRIM_EQ(Nil, x9223090566219549312);
if (True == x9223090566219549344) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), exp);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008224);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008224);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008224);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008224);
return;
}
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008672 = makeNative(co->gc, 1, clofun52, 0, 1, closureRef(R[0], 0));
Obj x9223090566219905888 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219905888) {
Obj x9223090566219907008 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566219907040 = PRIM_EQ(getBinding(co, packageID, 81).name, x9223090566219907008);
if (True == x9223090566219907040) {
Obj x9223090566219719040 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219719072 = PRIM_ISCONS(x9223090566219719040);
if (True == x9223090566219719072) {
Obj x9223090566219719616 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219719648 = PRIM_CAR(x9223090566219719616);
Obj arg = x9223090566219719648;
Obj x9223090566219720320 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219720352 = PRIM_CDR(x9223090566219720320);
Obj x9223090566219720384 = PRIM_ISCONS(x9223090566219720352);
if (True == x9223090566219720384) {
Obj x9223090566219720992 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219721024 = PRIM_CDR(x9223090566219720992);
Obj x9223090566219721056 = PRIM_CAR(x9223090566219721024);
Obj body = x9223090566219721056;
Obj x9223090566219721888 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566219721920 = PRIM_CDR(x9223090566219721888);
Obj x9223090566219721952 = PRIM_CDR(x9223090566219721920);
Obj x9223090566219721984 = PRIM_EQ(Nil, x9223090566219721952);
if (True == x9223090566219721984) {
R[1] = arg;
saveCont(co, clofun53, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 82)), body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008672);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008672);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008672);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008672);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008672);
return;
}
}
case 1:
{
Obj x9223090566219722336= co->res;
Obj arg = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), x9223090566219722336, arg);
return;
}
}
}

static void clofun52(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009248 = makeNative(co->gc, 1, clofun51, 0, 0);
Obj x9223090566219904128 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566219904128) {
Obj x9223090566219904480 = PRIM_CAR(closureRef(R[0], 0));
Obj f = x9223090566219904480;
Obj x9223090566219904736 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x9223090566219904736;
Obj x9223090566219905472 = makeCons(co->gc, f, args);
saveCont(co, clofun52, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), globalRef(co, getBinding(co, packageID, 82)), x9223090566219905472);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009248);
return;
}
}
case 1:
{
Obj x9223090566219905504= co->res;
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), globalRef(co, getBinding(co, packageID, 87)), Nil, x9223090566219905504);
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun50(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008096 = R[1];
Obj x9223090566219005984 = makeNative(co->gc, 1, clofun49, 0, 1, x9223090566219008096);
Obj x9223090566220107584 = PRIM_ISCONS(x9223090566219008096);
if (True == x9223090566220107584) {
Obj x9223090566220018016 = PRIM_CAR(x9223090566219008096);
Obj x9223090566220018048 = PRIM_EQ(getBinding(co, packageID, 90).name, x9223090566220018016);
if (True == x9223090566220018048) {
Obj x9223090566220018464 = PRIM_CDR(x9223090566219008096);
Obj x9223090566220018496 = PRIM_ISCONS(x9223090566220018464);
if (True == x9223090566220018496) {
Obj x9223090566220019008 = PRIM_CDR(x9223090566219008096);
Obj x9223090566220019040 = PRIM_CAR(x9223090566220019008);
Obj x = x9223090566220019040;
Obj x9223090566220019744 = PRIM_CDR(x9223090566219008096);
Obj x9223090566220019776 = PRIM_CDR(x9223090566220019744);
Obj x9223090566220019808 = PRIM_EQ(Nil, x9223090566220019776);
if (True == x9223090566220019808) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219005984);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219005984);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219005984);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219005984);
return;
}
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006400 = makeNative(co->gc, 1, clofun48, 0, 1, closureRef(R[0], 0));
Obj x9223090566220104384 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566220104384) {
Obj x9223090566220104928 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566220104960 = PRIM_EQ(getBinding(co, packageID, 92).name, x9223090566220104928);
if (True == x9223090566220104960) {
Obj x9223090566220105376 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220105504 = PRIM_ISCONS(x9223090566220105376);
if (True == x9223090566220105504) {
Obj x9223090566220105920 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220105952 = PRIM_CAR(x9223090566220105920);
Obj x = x9223090566220105952;
Obj x9223090566220106656 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566220106688 = PRIM_CDR(x9223090566220106656);
Obj x9223090566220106720 = PRIM_EQ(Nil, x9223090566220106688);
if (True == x9223090566220106720) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006400);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006400);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006400);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006400);
return;
}
}
}
}

static void clofun48(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006848 = makeNative(co->gc, 1, clofun47, 0, 1, closureRef(R[0], 0));
Obj x9223090566218224928 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218224928) {
Obj x9223090566218225376 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566218225408 = PRIM_EQ(getBinding(co, packageID, 100).name, x9223090566218225376);
if (True == x9223090566218225408) {
Obj x9223090566218225824 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218225856 = PRIM_ISCONS(x9223090566218225824);
if (True == x9223090566218225856) {
Obj x9223090566218226272 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218226304 = PRIM_CAR(x9223090566218226272);
Obj op = x9223090566218226304;
Obj x9223090566218226912 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218226944 = PRIM_CDR(x9223090566218226912);
Obj x9223090566218226976 = PRIM_EQ(Nil, x9223090566218226944);
if (True == x9223090566218226976) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006848);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006848);
return;
}
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007392 = makeNative(co->gc, 1, clofun46, 0, 1, closureRef(R[0], 0));
Obj x9223090566218439200 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218439200) {
Obj x9223090566218439648 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566218439680 = PRIM_EQ(getBinding(co, packageID, 91).name, x9223090566218439648);
if (True == x9223090566218439680) {
Obj x9223090566218440096 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218440128 = PRIM_ISCONS(x9223090566218440096);
if (True == x9223090566218440128) {
Obj x9223090566218440544 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218440576 = PRIM_CAR(x9223090566218440544);
Obj x = x9223090566218440576;
Obj x9223090566218224096 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218224128 = PRIM_CDR(x9223090566218224096);
Obj x9223090566218224160 = PRIM_EQ(Nil, x9223090566218224128);
if (True == x9223090566218224160) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007392);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007392);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007392);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007392);
return;
}
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007744 = makeNative(co->gc, 2, clofun45, 0, 1, closureRef(R[0], 0));
Obj x9223090566218522176 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218522176) {
Obj x9223090566218436704 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566218436736 = PRIM_EQ(getBinding(co, packageID, 83).name, x9223090566218436704);
if (True == x9223090566218436736) {
Obj x9223090566218437152 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218437184 = PRIM_ISCONS(x9223090566218437152);
if (True == x9223090566218437184) {
Obj x9223090566218437728 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218437760 = PRIM_CAR(x9223090566218437728);
Obj __ = x9223090566218437760;
Obj x9223090566218438368 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218438400 = PRIM_CDR(x9223090566218438368);
Obj x9223090566218438432 = PRIM_EQ(Nil, x9223090566218438400);
if (True == x9223090566218438432) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007744);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007744);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007744);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007744);
return;
}
}
}
}

static void clofun45(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008160 = makeNative(co->gc, 1, clofun44, 0, 1, closureRef(R[0], 0));
Obj x9223090566218519072 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218519072) {
Obj x9223090566218519520 = PRIM_CAR(closureRef(R[0], 0));
Obj x9223090566218519552 = PRIM_EQ(getBinding(co, packageID, 84).name, x9223090566218519520);
if (True == x9223090566218519552) {
Obj x9223090566218520032 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218520064 = PRIM_ISCONS(x9223090566218520032);
if (True == x9223090566218520064) {
Obj x9223090566218520480 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218520512 = PRIM_CAR(x9223090566218520480);
Obj label = x9223090566218520512;
Obj x9223090566218521024 = PRIM_CDR(closureRef(R[0], 0));
Obj x9223090566218521056 = PRIM_CDR(x9223090566218521024);
Obj __ = x9223090566218521056;
R[1] = x9223090566219008160;
saveCont(co, clofun45, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 89)), label);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008160);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008160);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008160);
return;
}
}
case 1:
{
Obj x9223090566218521312= co->res;
Obj x9223090566219008160 = R[1];
if (True == x9223090566218521312) {
coraReturn(co, True);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008160);
return;
}
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008448 = makeNative(co->gc, 1, clofun43, 0, 0);
Obj x = closureRef(R[0], 0);
coraReturn(co, False);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007168 = R[1];
Obj x9223090566219007200 = R[2];
Obj x9223090566219007232 = makeNative(co->gc, 4, clofun41, 0, 2, x9223090566219007168, x9223090566219007200);
Obj x9223090566218648064 = PRIM_EQ(Nil, x9223090566219007168);
if (True == x9223090566218648064) {
Obj __ = x9223090566219007200;
coraReturn(co, Nil);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007232);
return;
}
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007456 = makeNative(co->gc, 2, clofun40, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566218646304 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218646304) {
Obj x9223090566218646592 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566218646592;
Obj x9223090566218646880 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566218646880;
Obj s2 = closureRef(R[0], 1);
R[1] = y;
R[2] = s2;
R[3] = x9223090566219007456;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), x, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007456);
return;
}
}
case 1:
{
Obj x9223090566218647232= co->res;
Obj y = R[1];
Obj s2 = R[2];
Obj x9223090566219007456 = R[3];
if (True == x9223090566218647232) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), y, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007456);
return;
}
}
}
}

static void clofun40(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007776 = makeNative(co->gc, 1, clofun39, 0, 0);
Obj x9223090566218685728 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218685728) {
Obj x9223090566218686016 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566218686016;
Obj x9223090566218686304 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566218686304;
Obj s2 = closureRef(R[0], 1);
R[1] = x;
saveCont(co, clofun40, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 86)), y, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007776);
return;
}
}
case 1:
{
Obj x9223090566218645856= co->res;
Obj x = R[1];
Obj x9223090566218645888 = makeCons(co->gc, x, x9223090566218645856);
coraReturn(co, x9223090566218645888);
return;
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006016 = R[1];
Obj x9223090566219006048 = R[2];
Obj x9223090566219006080 = makeNative(co->gc, 4, clofun37, 0, 2, x9223090566219006016, x9223090566219006048);
Obj x9223090566218683424 = PRIM_EQ(Nil, x9223090566219006016);
if (True == x9223090566218683424) {
Obj s2 = x9223090566219006048;
coraReturn(co, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006080);
return;
}
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006304 = makeNative(co->gc, 2, clofun36, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj x9223090566218733984 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218733984) {
Obj x9223090566218734272 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566218734272;
Obj x9223090566218734560 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566218734560;
Obj s2 = closureRef(R[0], 1);
R[1] = y;
R[2] = s2;
R[3] = x9223090566219006304;
saveCont(co, clofun37, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), x, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006304);
return;
}
}
case 1:
{
Obj x9223090566218735008= co->res;
Obj y = R[1];
Obj s2 = R[2];
Obj x9223090566219006304 = R[3];
if (True == x9223090566218735008) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 87)), y, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006304);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006720 = makeNative(co->gc, 1, clofun35, 0, 0);
Obj x9223090566218732416 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x9223090566218732416) {
Obj x9223090566218732736 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x9223090566218732736;
Obj x9223090566218732992 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x9223090566218732992;
Obj s2 = closureRef(R[0], 1);
R[1] = x;
saveCont(co, clofun36, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 87)), y, s2);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006720);
return;
}
}
case 1:
{
Obj x9223090566218733536= co->res;
Obj x = R[1];
Obj x9223090566218733568 = makeCons(co->gc, x, x9223090566218733536);
coraReturn(co, x9223090566218733568);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006912 = R[1];
Obj x9223090566219006944 = R[2];
Obj x9223090566219006976 = R[3];
Obj x9223090566219007008 = makeNative(co->gc, 2, clofun32, 0, 3, x9223090566219006912, x9223090566219006944, x9223090566219006976);
Obj __ = x9223090566219006912;
Obj globals = x9223090566219006944;
Obj x = x9223090566219006976;
Obj x9223090566219385344 = makeNative(co->gc, 2, clofun33, 1, 2, x, x9223090566219007008);
R[1] = x;
R[2] = x9223090566219385344;
saveCont(co, clofun34, 3, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 89)), x);
return;
}
case 1:
{
Obj x9223090566218784416= co->res;
Obj x9223090566219385344 = R[1];
if (True == x9223090566218784416) {
co->ctx.sp = R;
coraCall1(co, x9223090566219385344, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x9223090566219385344, False);
return;
}
}
case 2:
{
Obj x9223090566218784096= co->res;
Obj x = R[1];
Obj x9223090566219385344 = R[2];
if (True == x9223090566218784096) {
co->ctx.sp = R;
coraCall1(co, x9223090566219385344, True);
return;
} else {
R[1] = x9223090566219385344;
saveCont(co, clofun34, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), x);
return;
}
}
case 3:
{
Obj x9223090566218783520= co->res;
Obj x = R[1];
Obj x9223090566219385344 = R[2];
if (True == x9223090566218783520) {
co->ctx.sp = R;
coraCall1(co, x9223090566219385344, True);
return;
} else {
Obj x9223090566218783840 = primIsString(x);
if (True == x9223090566218783840) {
co->ctx.sp = R;
coraCall1(co, x9223090566219385344, True);
return;
} else {
R[1] = x;
R[2] = x9223090566219385344;
saveCont(co, clofun34, 2, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 88)), x);
return;
}
}
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219385376 = R[1];
if (True == x9223090566219385376) {
Obj x9223090566218782848 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj x9223090566218782912 = makeCons(co->gc, getBinding(co, packageID, 90).name, x9223090566218782848);
coraReturn(co, x9223090566218782912);
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 1));
return;
}
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007264 = makeNative(co->gc, 3, clofun31, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj __ = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566218950560 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566218950560) {
Obj x9223090566218951008 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566218951040 = PRIM_EQ(getBinding(co, packageID, 91).name, x9223090566218951008);
if (True == x9223090566218951040) {
Obj x9223090566218951456 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566218951488 = PRIM_ISCONS(x9223090566218951456);
if (True == x9223090566218951488) {
Obj x9223090566218951936 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566218951968 = PRIM_CAR(x9223090566218951936);
Obj x = x9223090566218951968;
Obj x9223090566218952672 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566218780672 = PRIM_CDR(x9223090566218952672);
Obj x9223090566218780704 = PRIM_EQ(Nil, x9223090566218780672);
if (True == x9223090566218780704) {
R[1] = x;
saveCont(co, clofun32, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 93)), x, globals);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007264);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007264);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007264);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007264);
return;
}
}
case 1:
{
Obj x9223090566218780992= co->res;
Obj x = R[1];
Obj x9223090566218781408 = makeCons(co->gc, x, Nil);
Obj x9223090566218781440 = makeCons(co->gc, getBinding(co, packageID, 90).name, x9223090566218781408);
coraReturn(co, x9223090566218781440);
return;
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007648 = makeNative(co->gc, 4, clofun30, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x = closureRef(R[0], 2);
Obj x9223090566218948960 = primIsSymbol(x);
if (True == x9223090566218948960) {
R[1] = globals;
R[2] = x;
saveCont(co, clofun31, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 94)), x, env);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007648);
return;
}
}
case 1:
{
Obj x9223090566218949600= co->res;
Obj x = R[1];
Obj x9223090566218950016 = makeCons(co->gc, x, Nil);
Obj x9223090566218950048 = makeCons(co->gc, getBinding(co, packageID, 92).name, x9223090566218950016);
coraReturn(co, x9223090566218950048);
return;
}
case 2:
{
Obj x9223090566218949312= co->res;
Obj globals = R[1];
Obj x = R[2];
if (True == x9223090566218949312) {
coraReturn(co, x);
return;
} else {
R[1] = x;
saveCont(co, clofun31, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 93)), x, globals);
return;
}
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007904 = makeNative(co->gc, 1, clofun29, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219205376 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219205376) {
Obj x9223090566219205824 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219205856 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566219205824);
if (True == x9223090566219205856) {
Obj x9223090566219206272 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219206304 = PRIM_ISCONS(x9223090566219206272);
if (True == x9223090566219206304) {
Obj x9223090566219092032 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219092064 = PRIM_CAR(x9223090566219092032);
Obj args = x9223090566219092064;
Obj x9223090566219092640 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219092672 = PRIM_CDR(x9223090566219092640);
Obj x9223090566219092704 = PRIM_ISCONS(x9223090566219092672);
if (True == x9223090566219092704) {
Obj x9223090566219093280 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219093312 = PRIM_CDR(x9223090566219093280);
Obj x9223090566219093344 = PRIM_CAR(x9223090566219093312);
Obj body = x9223090566219093344;
Obj x9223090566219094112 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219094144 = PRIM_CDR(x9223090566219094112);
Obj x9223090566219094176 = PRIM_CDR(x9223090566219094144);
Obj x9223090566219094208 = PRIM_EQ(Nil, x9223090566219094176);
if (True == x9223090566219094208) {
R[1] = globals;
R[2] = body;
R[3] = args;
saveCont(co, clofun30, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), args, env);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007904);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007904);
return;
}
}
case 1:
{
Obj x9223090566219095232= co->res;
Obj args = R[1];
Obj x9223090566219095296 = makeCons(co->gc, x9223090566219095232, Nil);
Obj x9223090566219095328 = makeCons(co->gc, args, x9223090566219095296);
Obj x9223090566219095360 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566219095328);
coraReturn(co, x9223090566219095360);
return;
}
case 2:
{
Obj x9223090566219095136= co->res;
Obj globals = R[1];
Obj body = R[2];
Obj args = R[3];
R[1] = args;
saveCont(co, clofun30, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), x9223090566219095136, globals, body);
return;
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008352 = makeNative(co->gc, 2, clofun28, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219311808 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219311808) {
Obj x9223090566219312320 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219312352 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566219312320);
if (True == x9223090566219312352) {
Obj x9223090566219312768 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219312800 = PRIM_ISCONS(x9223090566219312768);
if (True == x9223090566219312800) {
Obj x9223090566219276512 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219276544 = PRIM_CAR(x9223090566219276512);
Obj x9223090566219276576 = PRIM_ISCONS(x9223090566219276544);
if (True == x9223090566219276576) {
Obj x9223090566219277344 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219277376 = PRIM_CAR(x9223090566219277344);
Obj x9223090566219277408 = PRIM_CAR(x9223090566219277376);
Obj x9223090566219277440 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566219277408);
if (True == x9223090566219277440) {
Obj x9223090566219278016 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219278048 = PRIM_CAR(x9223090566219278016);
Obj x9223090566219278080 = PRIM_CDR(x9223090566219278048);
Obj exp1 = x9223090566219278080;
Obj x9223090566219278496 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219278528 = PRIM_CDR(x9223090566219278496);
Obj exp2 = x9223090566219278528;
Obj x9223090566219278752 = primGenSym(co);
Obj f = x9223090566219278752;
Obj x9223090566219278976 = primGenSym(co);
Obj v = x9223090566219278976;
Obj x9223090566219280320 = makeCons(co->gc, v, Nil);
Obj x9223090566219203104 = makeCons(co->gc, v, exp2);
Obj x9223090566219203136 = makeCons(co->gc, getBinding(co, packageID, 97).name, x9223090566219203104);
Obj x9223090566219203200 = makeCons(co->gc, x9223090566219203136, Nil);
Obj x9223090566219203232 = makeCons(co->gc, x9223090566219280320, x9223090566219203200);
Obj x9223090566219203264 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566219203232);
Obj x9223090566219204032 = makeCons(co->gc, getBinding(co, packageID, 97).name, exp1);
Obj x9223090566219204096 = makeCons(co->gc, x9223090566219204032, Nil);
Obj x9223090566219204128 = makeCons(co->gc, f, x9223090566219204096);
Obj x9223090566219204192 = makeCons(co->gc, x9223090566219204128, Nil);
Obj x9223090566219204224 = makeCons(co->gc, x9223090566219203264, x9223090566219204192);
Obj x9223090566219204256 = makeCons(co->gc, f, x9223090566219204224);
Obj x9223090566219204288 = makeCons(co->gc, getBinding(co, packageID, 96).name, x9223090566219204256);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), env, globals, x9223090566219204288);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008352);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008352);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008352);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008352);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008352);
return;
}
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008928 = makeNative(co->gc, 4, clofun27, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219309760 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219309760) {
Obj x9223090566219310208 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219310240 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566219310208);
if (True == x9223090566219310240) {
Obj x9223090566219310496 = PRIM_CDR(closureRef(R[0], 2));
Obj args = x9223090566219310496;
R[1] = args;
saveCont(co, clofun28, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), env, globals);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008928);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008928);
return;
}
}
case 1:
{
Obj x9223090566219311136= co->res;
Obj x9223090566219311168 = makeCons(co->gc, getBinding(co, packageID, 97).name, x9223090566219311136);
coraReturn(co, x9223090566219311168);
return;
}
case 2:
{
Obj x9223090566219311072= co->res;
Obj args = R[1];
saveCont(co, clofun28, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219311072, args);
return;
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009280 = makeNative(co->gc, 1, clofun26, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219389984 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219389984) {
Obj x9223090566219390432 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219390464 = PRIM_EQ(getBinding(co, packageID, 95).name, x9223090566219390432);
if (True == x9223090566219390464) {
Obj x9223090566219390880 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219390912 = PRIM_ISCONS(x9223090566219390880);
if (True == x9223090566219390912) {
Obj x9223090566219383136 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219383168 = PRIM_CAR(x9223090566219383136);
Obj x = x9223090566219383168;
Obj x9223090566219383744 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219383776 = PRIM_CDR(x9223090566219383744);
Obj x9223090566219383808 = PRIM_ISCONS(x9223090566219383776);
if (True == x9223090566219383808) {
Obj x9223090566219384384 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219384416 = PRIM_CDR(x9223090566219384384);
Obj x9223090566219384448 = PRIM_CAR(x9223090566219384416);
Obj y = x9223090566219384448;
Obj x9223090566219385216 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219385248 = PRIM_CDR(x9223090566219385216);
Obj x9223090566219385280 = PRIM_CDR(x9223090566219385248);
Obj x9223090566219385312 = PRIM_EQ(Nil, x9223090566219385280);
if (True == x9223090566219385312) {
R[1] = env;
R[2] = globals;
R[3] = y;
saveCont(co, clofun27, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), env, globals, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009280);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009280);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009280);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009280);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009280);
return;
}
}
case 1:
{
Obj x9223090566219386432= co->res;
Obj x9223090566219385984 = R[1];
Obj x9223090566219386496 = makeCons(co->gc, x9223090566219386432, Nil);
Obj x9223090566219386528 = makeCons(co->gc, x9223090566219385984, x9223090566219386496);
Obj x9223090566219386560 = makeCons(co->gc, getBinding(co, packageID, 95).name, x9223090566219386528);
coraReturn(co, x9223090566219386560);
return;
}
case 2:
{
Obj x9223090566219385984= co->res;
Obj env = R[1];
Obj globals = R[2];
Obj y = R[3];
R[1] = x9223090566219385984;
saveCont(co, clofun27, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), env, globals, y);
return;
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006528 = makeNative(co->gc, 5, clofun25, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219388448 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219388448) {
Obj x9223090566219388896 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219388928 = PRIM_EQ(getBinding(co, packageID, 95).name, x9223090566219388896);
if (True == x9223090566219388928) {
Obj x9223090566219389184 = PRIM_CDR(closureRef(R[0], 2));
Obj args = x9223090566219389184;
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "do expects exactly 2 expressions; use begin for multiple"));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006528);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006528);
return;
}
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006880 = makeNative(co->gc, 1, clofun24, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219458112 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219458112) {
Obj x9223090566219458560 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219458592 = PRIM_EQ(getBinding(co, packageID, 96).name, x9223090566219458560);
if (True == x9223090566219458592) {
Obj x9223090566219459008 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219459040 = PRIM_ISCONS(x9223090566219459008);
if (True == x9223090566219459040) {
Obj x9223090566219459456 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219459488 = PRIM_CAR(x9223090566219459456);
Obj a = x9223090566219459488;
Obj x9223090566219460064 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219460096 = PRIM_CDR(x9223090566219460064);
Obj x9223090566219460128 = PRIM_ISCONS(x9223090566219460096);
if (True == x9223090566219460128) {
Obj x9223090566219407456 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219407488 = PRIM_CDR(x9223090566219407456);
Obj x9223090566219407520 = PRIM_CAR(x9223090566219407488);
Obj b = x9223090566219407520;
Obj x9223090566219408256 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219408288 = PRIM_CDR(x9223090566219408256);
Obj x9223090566219408320 = PRIM_CDR(x9223090566219408288);
Obj x9223090566219408352 = PRIM_ISCONS(x9223090566219408320);
if (True == x9223090566219408352) {
Obj x9223090566219409088 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219409120 = PRIM_CDR(x9223090566219409088);
Obj x9223090566219409152 = PRIM_CDR(x9223090566219409120);
Obj x9223090566219409184 = PRIM_CAR(x9223090566219409152);
Obj c = x9223090566219409184;
Obj x9223090566219410112 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219410144 = PRIM_CDR(x9223090566219410112);
Obj x9223090566219410176 = PRIM_CDR(x9223090566219410144);
Obj x9223090566219410208 = PRIM_CDR(x9223090566219410176);
Obj x9223090566219410240 = PRIM_EQ(Nil, x9223090566219410208);
if (True == x9223090566219410240) {
R[1] = env;
R[2] = globals;
R[3] = c;
R[4] = a;
saveCont(co, clofun25, 2, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), env, globals, b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006880);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006880);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006880);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006880);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006880);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006880);
return;
}
}
case 1:
{
Obj x9223090566219387136= co->res;
Obj x9223090566219411040 = R[1];
Obj a = R[2];
Obj x9223090566219387200 = makeCons(co->gc, x9223090566219387136, Nil);
Obj x9223090566219387232 = makeCons(co->gc, x9223090566219411040, x9223090566219387200);
Obj x9223090566219387264 = makeCons(co->gc, a, x9223090566219387232);
Obj x9223090566219387296 = makeCons(co->gc, getBinding(co, packageID, 96).name, x9223090566219387264);
coraReturn(co, x9223090566219387296);
return;
}
case 2:
{
Obj x9223090566219411040= co->res;
Obj env = R[1];
Obj globals = R[2];
Obj c = R[3];
Obj a = R[4];
Obj x9223090566219387040 = makeCons(co->gc, a, env);
R[1] = x9223090566219411040;
R[2] = a;
saveCont(co, clofun25, 1, R);
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), x9223090566219387040, globals, c);
return;
}
}
}

static void clofun24(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219007552 = makeNative(co->gc, 6, clofun23, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219490720 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219490720) {
Obj x9223090566219491136 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219491168 = PRIM_ISCONS(x9223090566219491136);
if (True == x9223090566219491168) {
Obj x9223090566219491776 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219491808 = PRIM_CAR(x9223090566219491776);
Obj x9223090566219491840 = PRIM_EQ(getBinding(co, packageID, 99).name, x9223090566219491808);
if (True == x9223090566219491840) {
Obj x9223090566219492256 = PRIM_CAR(closureRef(R[0], 2));
Obj x9223090566219492288 = PRIM_CDR(x9223090566219492256);
Obj exp1 = x9223090566219492288;
Obj x9223090566219492704 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219492736 = PRIM_ISCONS(x9223090566219492704);
if (True == x9223090566219492736) {
Obj x9223090566219493312 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219493344 = PRIM_CAR(x9223090566219493312);
Obj x9223090566219485184 = PRIM_ISCONS(x9223090566219493344);
if (True == x9223090566219485184) {
Obj x9223090566219485952 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219485984 = PRIM_CAR(x9223090566219485952);
Obj x9223090566219486016 = PRIM_CAR(x9223090566219485984);
Obj x9223090566219486048 = PRIM_EQ(getBinding(co, packageID, 97).name, x9223090566219486016);
if (True == x9223090566219486048) {
Obj x9223090566219486624 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219486656 = PRIM_CAR(x9223090566219486624);
Obj x9223090566219486688 = PRIM_CDR(x9223090566219486656);
Obj exp2 = x9223090566219486688;
Obj x9223090566219487296 = PRIM_CDR(closureRef(R[0], 2));
Obj x9223090566219487328 = PRIM_CDR(x9223090566219487296);
Obj x9223090566219487360 = PRIM_EQ(Nil, x9223090566219487328);
if (True == x9223090566219487360) {
Obj x9223090566219487584 = primGenSym(co);
Obj f = x9223090566219487584;
Obj x9223090566219488576 = makeCons(co->gc, getBinding(co, packageID, 99).name, exp1);
Obj x9223090566219456576 = makeCons(co->gc, getBinding(co, packageID, 97).name, exp2);
Obj x9223090566219456640 = makeCons(co->gc, x9223090566219456576, Nil);
Obj x9223090566219456672 = makeCons(co->gc, f, x9223090566219456640);
Obj x9223090566219456736 = makeCons(co->gc, x9223090566219456672, Nil);
Obj x9223090566219456768 = makeCons(co->gc, x9223090566219488576, x9223090566219456736);
Obj x9223090566219456800 = makeCons(co->gc, f, x9223090566219456768);
Obj x9223090566219456832 = makeCons(co->gc, getBinding(co, packageID, 96).name, x9223090566219456800);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), env, globals, x9223090566219456832);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219007552);
return;
}
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008128 = makeNative(co->gc, 2, clofun22, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj x9223090566219550400 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566219550400) {
Obj x9223090566219550656 = PRIM_CAR(closureRef(R[0], 2));
Obj op = x9223090566219550656;
Obj x9223090566219518144 = PRIM_CDR(closureRef(R[0], 2));
Obj args = x9223090566219518144;
R[1] = op;
R[2] = args;
R[3] = env;
R[4] = globals;
R[5] = x9223090566219008128;
saveCont(co, clofun23, 7, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 110)), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008128);
return;
}
}
case 1:
{
Obj x9223090566219520288= co->res;
Obj x9223090566219519808 = R[1];
Obj x9223090566219520320 = makeCons(co->gc, x9223090566219519808, x9223090566219520288);
coraReturn(co, x9223090566219520320);
return;
}
case 2:
{
Obj x9223090566219520224= co->res;
Obj args = R[1];
Obj x9223090566219519808 = R[2];
R[1] = x9223090566219519808;
saveCont(co, clofun23, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219520224, args);
return;
}
case 3:
{
Obj x9223090566219489568= co->res;
Obj tmp = R[1];
Obj env = R[2];
Obj globals = R[3];
Obj x9223090566219489632 = makeCons(co->gc, x9223090566219489568, Nil);
Obj x9223090566219489664 = makeCons(co->gc, tmp, x9223090566219489632);
Obj x9223090566219489696 = makeCons(co->gc, getBinding(co, packageID, 99).name, x9223090566219489664);
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 103)), env, globals, x9223090566219489696);
return;
}
case 4:
{
Obj x9223090566219521120= co->res;
Obj op = R[1];
Obj args = R[2];
Obj env = R[3];
Obj globals = R[4];
Obj tmp = x9223090566219521120;
Obj x9223090566219489504 = makeCons(co->gc, op, args);
R[1] = tmp;
R[2] = env;
R[3] = globals;
saveCont(co, clofun23, 3, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 98)), x9223090566219489504, tmp);
return;
}
case 5:
{
Obj x9223090566219518912= co->res;
Obj required = R[1];
Obj op = R[2];
Obj args = R[3];
Obj env = R[4];
Obj globals = R[5];
Obj provided = x9223090566219518912;
Obj x9223090566219519200 = PRIM_EQ(required, provided);
if (True == x9223090566219519200) {
Obj x9223090566219519776 = makeCons(co->gc, op, Nil);
Obj x9223090566219519808 = makeCons(co->gc, getBinding(co, packageID, 100).name, x9223090566219519776);
R[1] = args;
R[2] = x9223090566219519808;
saveCont(co, clofun23, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), env, globals);
return;
} else {
Obj x9223090566219520608 = PRIM_GT(required, provided);
if (True == x9223090566219520608) {
Obj x9223090566219521056 = PRIM_SUB(required, provided);
R[1] = op;
R[2] = args;
R[3] = env;
R[4] = globals;
saveCont(co, clofun23, 4, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 104)), x9223090566219521056, Nil);
return;
} else {
if (True == True) {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "primitive call mismatch"));
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no cond match"));
return;
}
}
}
}
case 6:
{
Obj x9223090566219518656= co->res;
Obj op = R[1];
Obj args = R[2];
Obj env = R[3];
Obj globals = R[4];
Obj required = x9223090566219518656;
R[1] = required;
R[2] = op;
R[3] = args;
R[4] = env;
R[5] = globals;
saveCont(co, clofun23, 5, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 101)), args);
return;
}
case 7:
{
Obj x9223090566219518400= co->res;
Obj op = R[1];
Obj args = R[2];
Obj env = R[3];
Obj globals = R[4];
Obj x9223090566219008128 = R[5];
if (True == x9223090566219518400) {
R[1] = op;
R[2] = args;
R[3] = env;
R[4] = globals;
saveCont(co, clofun23, 6, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 106)), op);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008128);
return;
}
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008480 = makeNative(co->gc, 1, clofun21, 0, 0);
Obj env = closureRef(R[0], 0);
Obj globals = closureRef(R[0], 1);
Obj ls = closureRef(R[0], 2);
R[1] = ls;
saveCont(co, clofun22, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 103)), env, globals);
return;
}
case 1:
{
Obj x9223090566219549984= co->res;
Obj ls = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 102)), x9223090566219549984, ls);
return;
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006432 = R[1];
Obj x9223090566219006464 = R[2];
Obj x9223090566219006496 = makeNative(co->gc, 1, clofun19, 0, 2, x9223090566219006432, x9223090566219006464);
Obj x9223090566219547168 = PRIM_EQ(MAKE_NUMBER(0), x9223090566219006432);
if (True == x9223090566219547168) {
Obj res = x9223090566219006464;
coraReturn(co, res);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006496);
return;
}
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006688 = makeNative(co->gc, 1, clofun18, 0, 0);
Obj n = closureRef(R[0], 0);
Obj res = closureRef(R[0], 1);
Obj x9223090566219722592 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj x9223090566219546816 = primGenSym(co);
Obj x9223090566219546880 = makeCons(co->gc, x9223090566219546816, res);
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 104)), x9223090566219722592, x9223090566219546880);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun17, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), x, globalRef(co, getBinding(co, packageID, 128)));
return;
}
case 1:
{
Obj x9223090566219721152= co->res;
Obj find = R[1];
if (True == x9223090566219721152) {
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
Obj x9223090566219720896= co->res;
Obj find = x9223090566219720896;
R[1] = find;
saveCont(co, clofun17, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), find);
return;
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun16, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), x, globalRef(co, getBinding(co, packageID, 128)));
return;
}
case 1:
{
Obj x9223090566219720096= co->res;
Obj find = R[1];
if (True == x9223090566219720096) {
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
Obj x9223090566219719840= co->res;
Obj find = x9223090566219719840;
R[1] = find;
saveCont(co, clofun16, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), find);
return;
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun15, 2, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), x, globalRef(co, getBinding(co, packageID, 128)));
return;
}
case 1:
{
Obj x9223090566219719168= co->res;
Obj x9223090566219719200 = primNot(x9223090566219719168);
coraReturn(co, x9223090566219719200);
return;
}
case 2:
{
Obj x9223090566219719136= co->res;
saveCont(co, clofun15, 1, R);
coraCall1(co, globalRef(co, getBinding(co, packageID, 109)), x9223090566219719136);
return;
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683488 = R[1];
Obj x9223090566218683520 = R[2];
Obj x9223090566219005952 = makeNative(co->gc, 3, clofun13, 0, 2, x9223090566218683488, x9223090566218683520);
Obj x = x9223090566218683488;
Obj x9223090566218519712 = PRIM_EQ(Nil, x9223090566218683520);
if (True == x9223090566218519712) {
coraReturn(co, False);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219005952);
return;
}
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219006144 = makeNative(co->gc, 1, clofun12, 0, 0);
Obj x = closureRef(R[0], 0);
Obj x9223090566218649088 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566218649088) {
Obj x9223090566218649344 = PRIM_CAR(closureRef(R[0], 1));
Obj hd = x9223090566218649344;
Obj x9223090566218518528 = PRIM_CDR(closureRef(R[0], 1));
Obj tl = x9223090566218518528;
R[1] = x;
R[2] = tl;
saveCont(co, clofun13, 1, R);
coraCall2(co, globalRef(co, getBinding(co, packageID, 130)), x, hd);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219006144);
return;
}
}
case 1:
{
Obj x9223090566218518976= co->res;
Obj x = R[1];
Obj tl = R[2];
Obj x9223090566218519040 = PRIM_LT(x9223090566218518976, MAKE_NUMBER(0));
if (True == x9223090566218519040) {
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 129)), x, tl);
return;
} else {
coraReturn(co, True);
return;
}
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun11(struct Cora* co, int label, Obj *R) {
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

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682464 = R[1];
Obj x9223090566218682496 = R[2];
Obj x9223090566218682528 = R[3];
Obj x9223090566218682560 = makeNative(co->gc, 1, clofun9, 0, 3, x9223090566218682464, x9223090566218682496, x9223090566218682528);
Obj __ = x9223090566218682464;
Obj x = x9223090566218682496;
Obj x9223090566218647296 = PRIM_EQ(Nil, x9223090566218682528);
if (True == x9223090566218647296) {
coraReturn(co, MAKE_NUMBER(-1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682560);
return;
}
}
}
}

static void clofun9(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218682816 = makeNative(co->gc, 1, clofun8, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj pos = closureRef(R[0], 0);
Obj x = closureRef(R[0], 1);
Obj x9223090566218645824 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566218645824) {
Obj x9223090566218646080 = PRIM_CAR(closureRef(R[0], 2));
Obj a = x9223090566218646080;
Obj x9223090566218646336 = PRIM_CDR(closureRef(R[0], 2));
Obj b = x9223090566218646336;
Obj x9223090566218646624 = PRIM_EQ(x, a);
if (True == x9223090566218646624) {
coraReturn(co, pos);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682816);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218682816);
return;
}
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566218683136 = makeNative(co->gc, 1, clofun7, 0, 0);
Obj pos = closureRef(R[0], 0);
Obj x = closureRef(R[0], 1);
Obj x9223090566218685216 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566218685216) {
Obj x9223090566218685504 = PRIM_CAR(closureRef(R[0], 2));
Obj a = x9223090566218685504;
Obj x9223090566218685824 = PRIM_CDR(closureRef(R[0], 2));
Obj b = x9223090566218685824;
Obj x9223090566218686208 = PRIM_ADD(pos, MAKE_NUMBER(1));
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 131)), x9223090566218686208, x, b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566218683136);
return;
}
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009440 = R[1];
Obj x9223090566219009472 = R[2];
Obj x9223090566219009504 = R[3];
Obj x9223090566219009536 = makeNative(co->gc, 3, clofun5, 0, 3, x9223090566219009440, x9223090566219009472, x9223090566219009504);
Obj f = x9223090566219009440;
Obj acc = x9223090566219009472;
Obj x9223090566218735392 = PRIM_EQ(Nil, x9223090566219009504);
if (True == x9223090566218735392) {
coraReturn(co, acc);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009536);
return;
}
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009792 = makeNative(co->gc, 1, clofun4, 0, 0);
Obj f = closureRef(R[0], 0);
Obj acc = closureRef(R[0], 1);
Obj x9223090566218733824 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x9223090566218733824) {
Obj x9223090566218734080 = PRIM_CAR(closureRef(R[0], 2));
Obj x = x9223090566218734080;
Obj x9223090566218734336 = PRIM_CDR(closureRef(R[0], 2));
Obj y = x9223090566218734336;
R[1] = f;
R[2] = y;
saveCont(co, clofun5, 1, R);
coraCall2(co, f, acc, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009792);
return;
}
}
case 1:
{
Obj x9223090566218734816= co->res;
Obj f = R[1];
Obj y = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(co, getBinding(co, packageID, 132)), f, x9223090566218734816, y);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008576 = R[1];
Obj x9223090566219008608 = R[2];
Obj x9223090566219008640 = makeNative(co->gc, 1, clofun2, 0, 2, x9223090566219008576, x9223090566219008608);
Obj var = x9223090566219008576;
Obj x9223090566218732480 = PRIM_EQ(Nil, x9223090566219008608);
if (True == x9223090566218732480) {
coraReturn(co, Nil);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008640);
return;
}
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219008832 = makeNative(co->gc, 1, clofun1, 0, 2, closureRef(R[0], 0), closureRef(R[0], 1));
Obj var = closureRef(R[0], 0);
Obj x9223090566218782880 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566218782880) {
Obj x9223090566218783296 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566218783328 = PRIM_ISCONS(x9223090566218783296);
if (True == x9223090566218783328) {
Obj x9223090566218783744 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566218783776 = PRIM_CAR(x9223090566218783744);
Obj x = x9223090566218783776;
Obj x9223090566218784192 = PRIM_CAR(closureRef(R[0], 1));
Obj x9223090566218784224 = PRIM_CDR(x9223090566218784192);
Obj y = x9223090566218784224;
Obj x9223090566218784480 = PRIM_CDR(closureRef(R[0], 1));
Obj __ = x9223090566218784480;
Obj x9223090566218731520 = PRIM_EQ(var, x);
if (True == x9223090566218731520) {
Obj x9223090566218731744 = makeCons(co->gc, x, y);
coraReturn(co, x9223090566218731744);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008832);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008832);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219008832);
return;
}
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x9223090566219009152 = makeNative(co->gc, 1, clofun0, 0, 0);
Obj var = closureRef(R[0], 0);
Obj x9223090566218781728 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x9223090566218781728) {
Obj x9223090566218781984 = PRIM_CAR(closureRef(R[0], 1));
Obj __ = x9223090566218781984;
Obj x9223090566218782240 = PRIM_CDR(closureRef(R[0], 1));
Obj y = x9223090566218782240;
co->ctx.sp = R;
coraCall2(co, globalRef(co, getBinding(co, packageID, 134)), var, y);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x9223090566219009152);
return;
}
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall1(co, globalRef(co, getBinding(co, packageID, 133)), makeCString(co->gc, "no match-help found!"));
return;
}
}
}

