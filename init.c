#include "types.h"
#include "runtime.h"

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
__symbolTable = (Obj*)malloc(sizeof(Obj) * 162);
__symbolTable[0] = intern("cora/init#assq");
__symbolTable[1] = intern("cora/init#append");
__symbolTable[2] = intern("cora/init#filter");
__symbolTable[3] = intern("cora/init#length");
__symbolTable[4] = intern("cora/init#elem?");
__symbolTable[5] = intern("cora/init#macroexpand");
__symbolTable[6] = intern("cora/init#map");
__symbolTable[7] = intern("cora/init#reverse");
__symbolTable[8] = intern("cora/init#throw");
__symbolTable[9] = intern("cora/init#try");
__symbolTable[10] = intern("cora/init#import");
__symbolTable[11] = intern("cora/init#load-so");
__symbolTable[12] = intern("cora/init#load");
__symbolTable[13] = intern("cora/init#apply");
__symbolTable[14] = intern("cora/init#read-file-as-sexp");
__symbolTable[15] = intern("cora/init#value-or");
__symbolTable[16] = intern("cora/init#value");
__symbolTable[17] = intern("cora/init#bytes-length");
__symbolTable[18] = intern("cora/init#bytes");
__symbolTable[19] = intern("cora/init#vector-length");
__symbolTable[20] = intern("cora/init#vector-ref");
__symbolTable[21] = intern("cora/init#vector-set!");
__symbolTable[22] = intern("cora/init#vector?");
__symbolTable[23] = intern("cora/init#vector");
__symbolTable[24] = intern("cora/init#symbol->string");
__symbolTable[25] = intern("cora/init#intern");
__symbolTable[26] = intern("cora/init#string-append");
__symbolTable[27] = intern("cora/init#number?");
__symbolTable[28] = intern("cora/init#null?");
__symbolTable[29] = intern("cora/init#boolean?");
__symbolTable[30] = intern("cora/init#atom?");
__symbolTable[31] = intern("cora/init#pair?");
__symbolTable[32] = intern("cora/init#cdddr");
__symbolTable[33] = intern("cora/init#cadddr");
__symbolTable[34] = intern("cora/init#caddr");
__symbolTable[35] = intern("cora/init#cddr");
__symbolTable[36] = intern("cora/init#cdar");
__symbolTable[37] = intern("cora/init#caar");
__symbolTable[38] = intern("cora/init#cadr");
__symbolTable[39] = intern("throw");
__symbolTable[40] = intern("try");
__symbolTable[41] = intern("load");
__symbolTable[42] = intern("load-so");
__symbolTable[43] = intern("apply");
__symbolTable[44] = intern("value");
__symbolTable[45] = intern("read-file-as-sexp");
__symbolTable[46] = intern("bytes-length");
__symbolTable[47] = intern("bytes");
__symbolTable[48] = intern("vector-length");
__symbolTable[49] = intern("vector-ref");
__symbolTable[50] = intern("vector-set!");
__symbolTable[51] = intern("vector?");
__symbolTable[52] = intern("vector");
__symbolTable[53] = intern("cora/init#*ns-export*");
__symbolTable[54] = intern("number?");
__symbolTable[55] = intern("cora/init#builtin?");
__symbolTable[56] = intern("assq");
__symbolTable[57] = intern("string?");
__symbolTable[58] = intern("integer?");
__symbolTable[59] = intern("not");
__symbolTable[60] = intern("symbol?");
__symbolTable[61] = intern("gensym");
__symbolTable[62] = intern("<");
__symbolTable[63] = intern(">");
__symbolTable[64] = intern("/");
__symbolTable[65] = intern("*");
__symbolTable[66] = intern("-");
__symbolTable[67] = intern("+");
__symbolTable[68] = intern("set");
__symbolTable[69] = intern("cora/init#*builtin-prims*");
__symbolTable[70] = intern("value-or");
__symbolTable[71] = intern("cora/init#lookup-var");
__symbolTable[72] = intern("symbol->string");
__symbolTable[73] = intern("string-append");
__symbolTable[74] = intern("intern");
__symbolTable[75] = intern("symbol-cooked?");
__symbolTable[76] = intern("cora/init#var-with-ns");
__symbolTable[77] = intern("*ns-export*");
__symbolTable[78] = intern("ns");
__symbolTable[79] = intern("package");
__symbolTable[80] = intern("cora/init#parse-package");
__symbolTable[81] = intern("import");
__symbolTable[82] = intern("export");
__symbolTable[83] = intern("cora/init#parse-package-h");
__symbolTable[84] = intern("fold-apply");
__symbolTable[85] = intern("cora/init#rewrite-fold-apply");
__symbolTable[86] = intern("backquote");
__symbolTable[87] = intern("unquote");
__symbolTable[88] = intern("cora/init#rewrite-backquote");
__symbolTable[89] = intern("begin");
__symbolTable[90] = intern("do");
__symbolTable[91] = intern("cora/init#rewrite-begin");
__symbolTable[92] = intern("cora/init#peval");
__symbolTable[93] = intern("cora/init#parse");
__symbolTable[94] = intern("cora/init#rewrite-namespace");
__symbolTable[95] = intern("func");
__symbolTable[96] = intern("cora/init#gen-paramenters");
__symbolTable[97] = intern("cora/init#rules-arg-count");
__symbolTable[98] = intern("append");
__symbolTable[99] = intern("filter");
__symbolTable[100] = intern("cora/init#filter-h");
__symbolTable[101] = intern("length");
__symbolTable[102] = intern("cora/init#length-h");
__symbolTable[103] = intern("cora/init#rules-patterns");
__symbolTable[104] = intern("cora/init#extract-rules");
__symbolTable[105] = intern("=>");
__symbolTable[106] = intern("cora/init#extract-rules1");
__symbolTable[107] = intern("match");
__symbolTable[108] = intern("cora/init#rewrite-match");
__symbolTable[109] = intern("cora/init#match-helper");
__symbolTable[110] = intern("where");
__symbolTable[111] = intern("cora/init#extract-rule-action");
__symbolTable[112] = intern("str");
__symbolTable[113] = intern("=");
__symbolTable[114] = intern("cdr");
__symbolTable[115] = intern("car");
__symbolTable[116] = intern("cons?");
__symbolTable[117] = intern("cora/init#match1");
__symbolTable[118] = intern("cora/init#match-cons-expander");
__symbolTable[119] = intern("list-rest");
__symbolTable[120] = intern("cora/init#rcons1");
__symbolTable[121] = intern("boolean?");
__symbolTable[122] = intern("and");
__symbolTable[123] = intern("cora/init#rewrite-and");
__symbolTable[124] = intern("or");
__symbolTable[125] = intern("cora/init#rewrite-or");
__symbolTable[126] = intern("if");
__symbolTable[127] = intern("error");
__symbolTable[128] = intern("cond");
__symbolTable[129] = intern("let");
__symbolTable[130] = intern("cora/init#rewrite-let");
__symbolTable[131] = intern("atom?");
__symbolTable[132] = intern("elem?");
__symbolTable[133] = intern("def");
__symbolTable[134] = intern("defun");
__symbolTable[135] = intern("list");
__symbolTable[136] = intern("defmacro");
__symbolTable[137] = intern("defmacro-macro");
__symbolTable[138] = intern("macroexpand");
__symbolTable[139] = intern("quote");
__symbolTable[140] = intern("lambda");
__symbolTable[141] = intern("cora/init#macroexpand-boot");
__symbolTable[142] = intern("cora/init#macroexpand1");
__symbolTable[143] = intern("cora/init#macroexpand1-h");
__symbolTable[144] = intern("cora/init#add-to-*macros*");
__symbolTable[145] = intern("*protect-symbol*");
__symbolTable[146] = intern("*macros*");
__symbolTable[147] = intern("map");
__symbolTable[148] = intern("map-h");
__symbolTable[149] = intern("reverse");
__symbolTable[150] = intern("cora/init#reverse-h");
__symbolTable[151] = intern("pair?");
__symbolTable[152] = intern("cons");
__symbolTable[153] = intern("rcons");
__symbolTable[154] = intern("cdddr");
__symbolTable[155] = intern("cadddr");
__symbolTable[156] = intern("caddr");
__symbolTable[157] = intern("cddr");
__symbolTable[158] = intern("cdar");
__symbolTable[159] = intern("caar");
__symbolTable[160] = intern("cadr");
__symbolTable[161] = intern("null?");
co->ctx.fn = clofun95;
co->ctx.label = 0;
}

static void clofun95(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512352_37 = primSet(co, __symbolTable[161], makeNative(co->gc, 2, clofun0, 1, 0));
Obj _3512355_37 = primSet(co, __symbolTable[160], makeNative(co->gc, 2, clofun1, 1, 0));
Obj _3512358_37 = primSet(co, __symbolTable[159], makeNative(co->gc, 2, clofun2, 1, 0));
Obj _3512361_37 = primSet(co, __symbolTable[158], makeNative(co->gc, 2, clofun3, 1, 0));
Obj _3512364_37 = primSet(co, __symbolTable[157], makeNative(co->gc, 2, clofun4, 1, 0));
Obj _3512368_37 = primSet(co, __symbolTable[156], makeNative(co->gc, 2, clofun5, 1, 0));
Obj _3512373_37 = primSet(co, __symbolTable[155], makeNative(co->gc, 2, clofun6, 1, 0));
Obj _3512377_37 = primSet(co, __symbolTable[154], makeNative(co->gc, 2, clofun7, 1, 0));
Obj _3512385_37 = primSet(co, __symbolTable[153], makeNative(co->gc, 2, clofun8, 1, 0));
Obj _3512387_37 = primSet(co, __symbolTable[151], makeNative(co->gc, 2, clofun9, 1, 0));
Obj _3512392_37 = primSet(co, __symbolTable[150], makeNative(co->gc, 3, clofun10, 2, 0));
saveCont(co, clofun95, 15, R);
coraCall1(co, globalRef(__symbolTable[150]), Nil);
return;
}
case 1:
{
Obj _3512872_37= co->res;
Obj _3512878_37 = primSet(co, __symbolTable[76], makeNative(co->gc, 3, clofun80, 2, 0));
Obj _3512890_37 = primSet(co, __symbolTable[71], makeNative(co->gc, 5, clofun81, 3, 0));
Obj _3512891_37 = makeCons(co->gc, makeCString(co->gc, "primSet"), Nil);
Obj _3512892_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512891_37);
Obj _3512893_37 = makeCons(co->gc, __symbolTable[68], _3512892_37);
Obj _3512894_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CAR"), Nil);
Obj _3512895_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512894_37);
Obj _3512896_37 = makeCons(co->gc, __symbolTable[115], _3512895_37);
Obj _3512897_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_CDR"), Nil);
Obj _3512898_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512897_37);
Obj _3512899_37 = makeCons(co->gc, __symbolTable[114], _3512898_37);
Obj _3512900_37 = makeCons(co->gc, makeCString(co->gc, "makeCons"), Nil);
Obj _3512901_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512900_37);
Obj _3512902_37 = makeCons(co->gc, __symbolTable[152], _3512901_37);
Obj _3512903_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ISCONS"), Nil);
Obj _3512904_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512903_37);
Obj _3512905_37 = makeCons(co->gc, __symbolTable[116], _3512904_37);
Obj _3512906_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_ADD"), Nil);
Obj _3512907_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512906_37);
Obj _3512908_37 = makeCons(co->gc, __symbolTable[67], _3512907_37);
Obj _3512909_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_SUB"), Nil);
Obj _3512910_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512909_37);
Obj _3512911_37 = makeCons(co->gc, __symbolTable[66], _3512910_37);
Obj _3512912_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_MUL"), Nil);
Obj _3512913_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512912_37);
Obj _3512914_37 = makeCons(co->gc, __symbolTable[65], _3512913_37);
Obj _3512915_37 = makeCons(co->gc, makeCString(co->gc, "primDiv"), Nil);
Obj _3512916_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512915_37);
Obj _3512917_37 = makeCons(co->gc, __symbolTable[64], _3512916_37);
Obj _3512918_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_EQ"), Nil);
Obj _3512919_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512918_37);
Obj _3512920_37 = makeCons(co->gc, __symbolTable[113], _3512919_37);
Obj _3512921_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_GT"), Nil);
Obj _3512922_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512921_37);
Obj _3512923_37 = makeCons(co->gc, __symbolTable[63], _3512922_37);
Obj _3512924_37 = makeCons(co->gc, makeCString(co->gc, "PRIM_LT"), Nil);
Obj _3512925_37 = makeCons(co->gc, MAKE_NUMBER(2), _3512924_37);
Obj _3512926_37 = makeCons(co->gc, __symbolTable[62], _3512925_37);
Obj _3512927_37 = makeCons(co->gc, makeCString(co->gc, "primGenSym"), Nil);
Obj _3512928_37 = makeCons(co->gc, MAKE_NUMBER(0), _3512927_37);
Obj _3512929_37 = makeCons(co->gc, __symbolTable[61], _3512928_37);
Obj _3512930_37 = makeCons(co->gc, makeCString(co->gc, "primIsSymbol"), Nil);
Obj _3512931_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512930_37);
Obj _3512932_37 = makeCons(co->gc, __symbolTable[60], _3512931_37);
Obj _3512933_37 = makeCons(co->gc, makeCString(co->gc, "primNot"), Nil);
Obj _3512934_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512933_37);
Obj _3512935_37 = makeCons(co->gc, __symbolTable[59], _3512934_37);
Obj _3512936_37 = makeCons(co->gc, makeCString(co->gc, "primIsNumber"), Nil);
Obj _3512937_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512936_37);
Obj _3512938_37 = makeCons(co->gc, __symbolTable[58], _3512937_37);
Obj _3512939_37 = makeCons(co->gc, makeCString(co->gc, "primIsString"), Nil);
Obj _3512940_37 = makeCons(co->gc, MAKE_NUMBER(1), _3512939_37);
Obj _3512941_37 = makeCons(co->gc, __symbolTable[57], _3512940_37);
Obj _3512942_37 = makeCons(co->gc, _3512941_37, Nil);
Obj _3512943_37 = makeCons(co->gc, _3512938_37, _3512942_37);
Obj _3512944_37 = makeCons(co->gc, _3512935_37, _3512943_37);
Obj _3512945_37 = makeCons(co->gc, _3512932_37, _3512944_37);
Obj _3512946_37 = makeCons(co->gc, _3512929_37, _3512945_37);
Obj _3512947_37 = makeCons(co->gc, _3512926_37, _3512946_37);
Obj _3512948_37 = makeCons(co->gc, _3512923_37, _3512947_37);
Obj _3512949_37 = makeCons(co->gc, _3512920_37, _3512948_37);
Obj _3512950_37 = makeCons(co->gc, _3512917_37, _3512949_37);
Obj _3512951_37 = makeCons(co->gc, _3512914_37, _3512950_37);
Obj _3512952_37 = makeCons(co->gc, _3512911_37, _3512951_37);
Obj _3512953_37 = makeCons(co->gc, _3512908_37, _3512952_37);
Obj _3512954_37 = makeCons(co->gc, _3512905_37, _3512953_37);
Obj _3512955_37 = makeCons(co->gc, _3512902_37, _3512954_37);
Obj _3512956_37 = makeCons(co->gc, _3512899_37, _3512955_37);
Obj _3512957_37 = makeCons(co->gc, _3512896_37, _3512956_37);
Obj _3512958_37 = makeCons(co->gc, _3512893_37, _3512957_37);
Obj _3512959_37 = primSet(co, __symbolTable[69], _3512958_37);
Obj _3512974_37 = primSet(co, __symbolTable[56], makeNative(co->gc, 3, clofun83, 2, 0));
Obj _3512978_37 = primSet(co, __symbolTable[55], makeNative(co->gc, 2, clofun84, 1, 0));
Obj _3513156_37 = primSet(co, __symbolTable[93], makeNative(co->gc, 5, clofun94, 4, 0));
Obj _3513157_37 = makeCons(co->gc, __symbolTable[98], Nil);
Obj _3513158_37 = makeCons(co->gc, __symbolTable[99], _3513157_37);
Obj _3513159_37 = makeCons(co->gc, __symbolTable[101], _3513158_37);
Obj _3513160_37 = makeCons(co->gc, __symbolTable[132], _3513159_37);
Obj _3513161_37 = makeCons(co->gc, __symbolTable[138], _3513160_37);
Obj _3513162_37 = makeCons(co->gc, __symbolTable[147], _3513161_37);
Obj _3513163_37 = makeCons(co->gc, __symbolTable[149], _3513162_37);
Obj _3513164_37 = makeCons(co->gc, __symbolTable[39], _3513163_37);
Obj _3513165_37 = makeCons(co->gc, __symbolTable[40], _3513164_37);
Obj _3513166_37 = makeCons(co->gc, __symbolTable[41], _3513165_37);
Obj _3513167_37 = makeCons(co->gc, __symbolTable[81], _3513166_37);
Obj _3513168_37 = makeCons(co->gc, __symbolTable[42], _3513167_37);
Obj _3513169_37 = makeCons(co->gc, __symbolTable[43], _3513168_37);
Obj _3513170_37 = makeCons(co->gc, __symbolTable[70], _3513169_37);
Obj _3513171_37 = makeCons(co->gc, __symbolTable[44], _3513170_37);
Obj _3513172_37 = makeCons(co->gc, __symbolTable[45], _3513171_37);
Obj _3513173_37 = makeCons(co->gc, __symbolTable[46], _3513172_37);
Obj _3513174_37 = makeCons(co->gc, __symbolTable[47], _3513173_37);
Obj _3513175_37 = makeCons(co->gc, __symbolTable[48], _3513174_37);
Obj _3513176_37 = makeCons(co->gc, __symbolTable[49], _3513175_37);
Obj _3513177_37 = makeCons(co->gc, __symbolTable[50], _3513176_37);
Obj _3513178_37 = makeCons(co->gc, __symbolTable[51], _3513177_37);
Obj _3513179_37 = makeCons(co->gc, __symbolTable[52], _3513178_37);
Obj _3513180_37 = makeCons(co->gc, __symbolTable[72], _3513179_37);
Obj _3513181_37 = makeCons(co->gc, __symbolTable[74], _3513180_37);
Obj _3513182_37 = makeCons(co->gc, __symbolTable[73], _3513181_37);
Obj _3513183_37 = makeCons(co->gc, __symbolTable[161], _3513182_37);
Obj _3513184_37 = makeCons(co->gc, __symbolTable[54], _3513183_37);
Obj _3513185_37 = makeCons(co->gc, __symbolTable[121], _3513184_37);
Obj _3513186_37 = makeCons(co->gc, __symbolTable[131], _3513185_37);
Obj _3513187_37 = makeCons(co->gc, __symbolTable[151], _3513186_37);
Obj _3513188_37 = makeCons(co->gc, __symbolTable[154], _3513187_37);
Obj _3513189_37 = makeCons(co->gc, __symbolTable[155], _3513188_37);
Obj _3513190_37 = makeCons(co->gc, __symbolTable[156], _3513189_37);
Obj _3513191_37 = makeCons(co->gc, __symbolTable[157], _3513190_37);
Obj _3513192_37 = makeCons(co->gc, __symbolTable[158], _3513191_37);
Obj _3513193_37 = makeCons(co->gc, __symbolTable[159], _3513192_37);
Obj _3513194_37 = makeCons(co->gc, __symbolTable[160], _3513193_37);
Obj _3513195_37 = primSet(co, __symbolTable[53], _3513194_37);
Obj _3513196_37 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj _3513197_37 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj _3513198_37 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj _3513199_37 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj _3513200_37 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj _3513201_37 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj _3513202_37 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj _3513203_37 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj _3513204_37 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj _3513205_37 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj _3513206_37 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj _3513207_37 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj _3513208_37 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj _3513209_37 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj _3513210_37 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj _3513211_37 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj _3513212_37 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj _3513213_37 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj _3513214_37 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj _3513215_37 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj _3513216_37 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj _3513217_37 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj _3513218_37 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj _3513219_37 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj _3513220_37 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj _3513221_37 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj _3513222_37 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj _3513223_37 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj _3513224_37 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj _3513225_37 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj _3513226_37 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj _3513227_37 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj _3513228_37 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj _3513229_37 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj _3513230_37 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj _3513231_37 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj _3513232_37 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj _3513233_37 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj _3513234_37 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
coraReturn(co, _3513234_37);
return;
}
case 2:
{
Obj _3512822_37= co->res;
Obj _3512851_37 = primSet(co, __symbolTable[83], makeNative(co->gc, 5, clofun75, 4, 0));
Obj _3512852_37 = primSet(co, __symbolTable[80], makeNative(co->gc, 3, clofun76, 2, 0));
saveCont(co, clofun95, 1, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[79], makeNative(co->gc, 2, clofun79, 1, 0));
return;
}
case 3:
{
Obj _3512805_37= co->res;
Obj _3512819_37 = primSet(co, __symbolTable[85], makeNative(co->gc, 3, clofun71, 2, 0));
saveCont(co, clofun95, 2, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[84], makeNative(co->gc, 2, clofun72, 1, 0));
return;
}
case 4:
{
Obj _3512783_37= co->res;
Obj _3512803_37 = primSet(co, __symbolTable[88], makeNative(co->gc, 2, clofun69, 1, 0));
saveCont(co, clofun95, 3, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[86], makeNative(co->gc, 2, clofun70, 1, 0));
return;
}
case 5:
{
Obj _3512752_37= co->res;
Obj _3512753_37 = primSet(co, __symbolTable[94], makeNative(co->gc, 2, clofun61, 1, 0));
Obj _3512754_37 = primSet(co, __symbolTable[92], makeNative(co->gc, 2, clofun62, 1, 0));
Obj _3512757_37 = primSet(co, __symbolTable[138], makeNative(co->gc, 2, clofun63, 1, 0));
Obj _3512781_37 = primSet(co, __symbolTable[91], makeNative(co->gc, 2, clofun66, 1, 0));
saveCont(co, clofun95, 4, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[89], makeNative(co->gc, 2, clofun67, 1, 0));
return;
}
case 6:
{
Obj _3512644_37= co->res;
Obj _3512696_37 = primSet(co, __symbolTable[106], makeNative(co->gc, 5, clofun48, 3, 0));
Obj _3512697_37 = primSet(co, __symbolTable[104], makeNative(co->gc, 2, clofun49, 1, 0));
Obj _3512702_37 = primSet(co, __symbolTable[103], makeNative(co->gc, 3, clofun50, 2, 0));
Obj _3512706_37 = primSet(co, __symbolTable[102], makeNative(co->gc, 3, clofun51, 2, 0));
Obj _3512707_37 = primSet(co, __symbolTable[101], makeNative(co->gc, 2, clofun52, 1, 0));
Obj _3512715_37 = primSet(co, __symbolTable[100], makeNative(co->gc, 4, clofun53, 3, 0));
Obj _3512716_37 = primSet(co, __symbolTable[99], makeNative(co->gc, 3, clofun54, 2, 0));
Obj _3512722_37 = primSet(co, __symbolTable[98], makeNative(co->gc, 3, clofun55, 2, 0));
Obj _3512733_37 = primSet(co, __symbolTable[97], makeNative(co->gc, 2, clofun58, 1, 0));
Obj _3512739_37 = primSet(co, __symbolTable[96], makeNative(co->gc, 2, clofun59, 1, 0));
saveCont(co, clofun95, 5, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[95], makeNative(co->gc, 3, clofun60, 1, 0));
return;
}
case 7:
{
Obj _3512539_37= co->res;
Obj _3512561_37 = primSet(co, __symbolTable[118], makeNative(co->gc, 5, clofun36, 4, 0));
Obj _3512594_37 = primSet(co, __symbolTable[117], makeNative(co->gc, 5, clofun38, 4, 0));
Obj _3512607_37 = primSet(co, __symbolTable[111], makeNative(co->gc, 3, clofun40, 2, 0));
Obj _3512629_37 = primSet(co, __symbolTable[109], makeNative(co->gc, 3, clofun42, 2, 0));
Obj _3512643_37 = primSet(co, __symbolTable[108], makeNative(co->gc, 2, clofun44, 1, 0));
saveCont(co, clofun95, 6, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[107], makeNative(co->gc, 2, clofun45, 1, 0));
return;
}
case 8:
{
Obj _3512524_37= co->res;
Obj _3512527_37 = primSet(co, __symbolTable[121], makeNative(co->gc, 2, clofun32, 1, 0));
Obj _3512537_37 = primSet(co, __symbolTable[120], makeNative(co->gc, 2, clofun33, 1, 0));
saveCont(co, clofun95, 7, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[119], makeNative(co->gc, 2, clofun34, 1, 0));
return;
}
case 9:
{
Obj _3512510_37= co->res;
Obj _3512522_37 = primSet(co, __symbolTable[123], makeNative(co->gc, 2, clofun30, 1, 0));
saveCont(co, clofun95, 8, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[122], makeNative(co->gc, 2, clofun31, 1, 0));
return;
}
case 10:
{
Obj _3512496_37= co->res;
Obj _3512508_37 = primSet(co, __symbolTable[125], makeNative(co->gc, 2, clofun28, 1, 0));
saveCont(co, clofun95, 9, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[124], makeNative(co->gc, 2, clofun29, 1, 0));
return;
}
case 11:
{
Obj _3512482_37= co->res;
saveCont(co, clofun95, 10, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[128], makeNative(co->gc, 3, clofun27, 1, 0));
return;
}
case 12:
{
Obj _3512460_37= co->res;
Obj _3512465_37 = primSet(co, __symbolTable[132], makeNative(co->gc, 3, clofun23, 2, 0));
Obj _3512468_37 = primSet(co, __symbolTable[131], makeNative(co->gc, 2, clofun24, 1, 0));
Obj _3512480_37 = primSet(co, __symbolTable[130], makeNative(co->gc, 3, clofun25, 1, 0));
saveCont(co, clofun95, 11, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[129], makeNative(co->gc, 2, clofun26, 1, 0));
return;
}
case 13:
{
Obj _3512450_37= co->res;
saveCont(co, clofun95, 12, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[134], makeNative(co->gc, 3, clofun22, 1, 0));
return;
}
case 14:
{
Obj _3512448_37= co->res;
saveCont(co, clofun95, 13, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[135], makeNative(co->gc, 2, clofun21, 1, 0));
return;
}
case 15:
{
Obj _3512393_37= co->res;
Obj _3512394_37 = primSet(co, __symbolTable[149], _3512393_37);
Obj _3512400_37 = primSet(co, __symbolTable[148], makeNative(co->gc, 4, clofun11, 3, 0));
Obj _3512401_37 = primSet(co, __symbolTable[147], makeNative(co->gc, 3, clofun12, 2, 0));
Obj _3512402_37 = primSet(co, __symbolTable[146], Nil);
Obj _3512403_37 = primGenSym(co);
Obj _3512404_37 = primSet(co, __symbolTable[145], _3512403_37);
Obj _3512408_37 = primSet(co, __symbolTable[144], makeNative(co->gc, 3, clofun13, 2, 0));
Obj _3512417_37 = primSet(co, __symbolTable[143], makeNative(co->gc, 3, clofun16, 2, 0));
Obj _3512418_37 = primSet(co, __symbolTable[142], makeNative(co->gc, 2, clofun17, 1, 0));
Obj _3512435_37 = primSet(co, __symbolTable[141], makeNative(co->gc, 2, clofun19, 1, 0));
Obj _3512436_37 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj _3512447_37 = primSet(co, __symbolTable[137], makeNative(co->gc, 3, clofun20, 1, 0));
saveCont(co, clofun95, 14, R);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512323_37 = R[1];
Obj _3512324_37 = R[2];
Obj _3512325_37 = R[3];
Obj _3512326_37 = R[4];
Obj _3512347_37 = makeNative(co->gc, 2, clofun93, 1, 4, _3512323_37, _3512324_37, _3512325_37, _3512326_37);
R[1] = _3512326_37;
R[2] = _3512347_37;
saveCont(co, clofun94, 3, R);
coraCall1(co, globalRef(__symbolTable[54]), _3512326_37);
return;
}
case 1:
{
Obj _3513155_37= co->res;
Obj _3512347_37 = R[1];
if (True == _3513155_37) {
co->ctx.sp = R;
coraCall1(co, _3512347_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512347_37, False);
return;
}
}
case 2:
{
Obj _3513154_37= co->res;
Obj _3512326_37 = R[1];
Obj _3512347_37 = R[2];
if (True == _3513154_37) {
co->ctx.sp = R;
coraCall1(co, _3512347_37, True);
return;
} else {
R[1] = _3512347_37;
saveCont(co, clofun94, 1, R);
coraCall1(co, globalRef(__symbolTable[161]), _3512326_37);
return;
}
}
case 3:
{
Obj _3513152_37= co->res;
Obj _3512326_37 = R[1];
Obj _3512347_37 = R[2];
if (True == _3513152_37) {
co->ctx.sp = R;
coraCall1(co, _3512347_37, True);
return;
} else {
Obj _3513153_37 = primIsString(_3512326_37);
if (True == _3513153_37) {
co->ctx.sp = R;
coraCall1(co, _3512347_37, True);
return;
} else {
R[1] = _3512326_37;
R[2] = _3512347_37;
saveCont(co, clofun94, 2, R);
coraCall1(co, globalRef(__symbolTable[121]), _3512326_37);
return;
}
}
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512348_37 = R[1];
if (True == _3512348_37) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj _3512328_37 = makeNative(co->gc, 3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3513140_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3513140_37) {
Obj _3513141_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3513142_37 = PRIM_EQ(__symbolTable[139], _3513141_37);
if (True == _3513142_37) {
Obj _3513143_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513144_37 = PRIM_ISCONS(_3513143_37);
if (True == _3513144_37) {
Obj _3513145_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513146_37 = PRIM_CAR(_3513145_37);
Obj x = _3513146_37;
Obj _3513147_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513148_37 = PRIM_CDR(_3513147_37);
Obj _3513149_37 = PRIM_EQ(Nil, _3513148_37);
if (True == _3513149_37) {
Obj _3513150_37 = makeCons(co->gc, x, Nil);
Obj _3513151_37 = makeCons(co->gc, __symbolTable[139], _3513150_37);
coraReturn(co, _3513151_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512328_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512328_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512328_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512328_37);
return;
}
}
}
}
}

static void clofun92(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512979_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3512979_37) {
saveCont(co, clofun92, 2, R);
coraCall2(co, globalRef(__symbolTable[132]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3512330_37 = makeNative(co->gc, 3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513118_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513118_37) {
Obj _3513119_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513120_37 = PRIM_EQ(__symbolTable[140], _3513119_37);
if (True == _3513120_37) {
Obj _3513121_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513122_37 = PRIM_ISCONS(_3513121_37);
if (True == _3513122_37) {
Obj _3513123_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513124_37 = PRIM_CAR(_3513123_37);
Obj args = _3513124_37;
Obj _3513125_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513126_37 = PRIM_CDR(_3513125_37);
Obj _3513127_37 = PRIM_ISCONS(_3513126_37);
if (True == _3513127_37) {
Obj _3513128_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513129_37 = PRIM_CDR(_3513128_37);
Obj _3513130_37 = PRIM_CAR(_3513129_37);
Obj body = _3513130_37;
Obj _3513131_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513132_37 = PRIM_CDR(_3513131_37);
Obj _3513133_37 = PRIM_CDR(_3513132_37);
Obj _3513134_37 = PRIM_EQ(Nil, _3513133_37);
if (True == _3513134_37) {
R[1] = body;
R[2] = args;
saveCont(co, clofun92, 4, R);
coraCall2(co, globalRef(__symbolTable[98]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512330_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512330_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512330_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512330_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512330_37);
return;
}
}
}
case 1:
{
Obj _3512981_37= co->res;
if (True == _3512981_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), closureRef(R[0], 0), closureRef(R[0], 2), closureRef(R[0], 3));
return;
}
}
case 2:
{
Obj _3512980_37= co->res;
if (True == _3512980_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
saveCont(co, clofun92, 1, R);
coraCall1(co, globalRef(__symbolTable[55]), closureRef(R[0], 0));
return;
}
}
case 3:
{
Obj _3513136_37= co->res;
Obj args = R[1];
Obj _3513137_37 = makeCons(co->gc, _3513136_37, Nil);
Obj _3513138_37 = makeCons(co->gc, args, _3513137_37);
Obj _3513139_37 = makeCons(co->gc, __symbolTable[140], _3513138_37);
coraReturn(co, _3513139_37);
return;
}
case 4:
{
Obj _3513135_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
saveCont(co, clofun92, 3, R);
coraCall4(co, globalRef(__symbolTable[93]), _3513135_37, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512331_37 = makeNative(co->gc, 1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513074_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513074_37) {
Obj _3513075_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513076_37 = PRIM_EQ(__symbolTable[90], _3513075_37);
if (True == _3513076_37) {
Obj _3513077_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513078_37 = PRIM_ISCONS(_3513077_37);
if (True == _3513078_37) {
Obj _3513079_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513080_37 = PRIM_CAR(_3513079_37);
Obj _3513081_37 = PRIM_ISCONS(_3513080_37);
if (True == _3513081_37) {
Obj _3513082_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513083_37 = PRIM_CAR(_3513082_37);
Obj _3513084_37 = PRIM_CAR(_3513083_37);
Obj _3513085_37 = PRIM_EQ(__symbolTable[81], _3513084_37);
if (True == _3513085_37) {
Obj _3513086_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513087_37 = PRIM_CAR(_3513086_37);
Obj _3513088_37 = PRIM_CDR(_3513087_37);
Obj _3513089_37 = PRIM_ISCONS(_3513088_37);
if (True == _3513089_37) {
Obj _3513090_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513091_37 = PRIM_CAR(_3513090_37);
Obj _3513092_37 = PRIM_CDR(_3513091_37);
Obj _3513093_37 = PRIM_CAR(_3513092_37);
Obj pkg = _3513093_37;
Obj _3513094_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513095_37 = PRIM_CAR(_3513094_37);
Obj _3513096_37 = PRIM_CDR(_3513095_37);
Obj _3513097_37 = PRIM_CDR(_3513096_37);
Obj _3513098_37 = PRIM_EQ(Nil, _3513097_37);
if (True == _3513098_37) {
Obj _3513099_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513100_37 = PRIM_CDR(_3513099_37);
Obj _3513101_37 = PRIM_ISCONS(_3513100_37);
if (True == _3513101_37) {
Obj _3513102_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513103_37 = PRIM_CDR(_3513102_37);
Obj _3513104_37 = PRIM_CAR(_3513103_37);
Obj y = _3513104_37;
Obj _3513105_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513106_37 = PRIM_CDR(_3513105_37);
Obj _3513107_37 = PRIM_CDR(_3513106_37);
Obj _3513108_37 = PRIM_EQ(Nil, _3513107_37);
if (True == _3513108_37) {
Obj _3513109_37 = primIsString(pkg);
if (True == _3513109_37) {
Obj _3513110_37 = makeCons(co->gc, pkg, Nil);
Obj _3513111_37 = makeCons(co->gc, __symbolTable[81], _3513110_37);
R[1] = pkg;
R[2] = y;
saveCont(co, clofun91, 2, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), _3513111_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512331_37);
return;
}
}
case 1:
{
Obj _3513114_37= co->res;
Obj _3513112_37 = R[1];
Obj _3513115_37 = makeCons(co->gc, _3513114_37, Nil);
Obj _3513116_37 = makeCons(co->gc, _3513112_37, _3513115_37);
Obj _3513117_37 = makeCons(co->gc, __symbolTable[90], _3513116_37);
coraReturn(co, _3513117_37);
return;
}
case 2:
{
Obj _3513112_37= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj _3513113_37 = makeCons(co->gc, pkg, closureRef(R[0], 3));
R[1] = _3513112_37;
saveCont(co, clofun91, 1, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), _3513113_37, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512332_37 = makeNative(co->gc, 3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513066_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513066_37) {
Obj _3513067_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3513067_37;
Obj _3513068_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3513068_37;
Obj _3512349_37 = makeNative(co->gc, 2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, _3512332_37);
Obj _3513072_37 = PRIM_EQ(op, __symbolTable[126]);
if (True == _3513072_37) {
co->ctx.sp = R;
coraCall1(co, _3512349_37, True);
return;
} else {
Obj _3513073_37 = PRIM_EQ(op, __symbolTable[90]);
if (True == _3513073_37) {
co->ctx.sp = R;
coraCall1(co, _3512349_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512349_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512332_37);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512350_37 = R[1];
if (True == _3512350_37) {
saveCont(co, clofun89, 2, R);
coraCall3(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, closureRef(R[0], 5));
return;
}
}
case 1:
{
Obj _3513070_37= co->res;
Obj _3513071_37 = makeCons(co->gc, closureRef(R[0], 0), _3513070_37);
coraReturn(co, _3513071_37);
return;
}
case 2:
{
Obj _3513069_37= co->res;
saveCont(co, clofun89, 1, R);
coraCall2(co, globalRef(__symbolTable[147]), _3513069_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512333_37 = makeNative(co->gc, 1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513033_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513033_37) {
Obj _3513034_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513035_37 = PRIM_EQ(__symbolTable[129], _3513034_37);
if (True == _3513035_37) {
Obj _3513036_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513037_37 = PRIM_ISCONS(_3513036_37);
if (True == _3513037_37) {
Obj _3513038_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513039_37 = PRIM_CAR(_3513038_37);
Obj a = _3513039_37;
Obj _3513040_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513041_37 = PRIM_CDR(_3513040_37);
Obj _3513042_37 = PRIM_ISCONS(_3513041_37);
if (True == _3513042_37) {
Obj _3513043_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513044_37 = PRIM_CDR(_3513043_37);
Obj _3513045_37 = PRIM_CAR(_3513044_37);
Obj b = _3513045_37;
Obj _3513046_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513047_37 = PRIM_CDR(_3513046_37);
Obj _3513048_37 = PRIM_CDR(_3513047_37);
Obj _3513049_37 = PRIM_ISCONS(_3513048_37);
if (True == _3513049_37) {
Obj _3513050_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513051_37 = PRIM_CDR(_3513050_37);
Obj _3513052_37 = PRIM_CDR(_3513051_37);
Obj _3513053_37 = PRIM_CAR(_3513052_37);
Obj c = _3513053_37;
Obj _3513054_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513055_37 = PRIM_CDR(_3513054_37);
Obj _3513056_37 = PRIM_CDR(_3513055_37);
Obj _3513057_37 = PRIM_CDR(_3513056_37);
Obj _3513058_37 = PRIM_EQ(Nil, _3513057_37);
if (True == _3513058_37) {
R[1] = c;
R[2] = a;
saveCont(co, clofun88, 2, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512333_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512333_37);
return;
}
}
case 1:
{
Obj _3513061_37= co->res;
Obj _3513059_37 = R[1];
Obj a = R[2];
Obj _3513062_37 = makeCons(co->gc, _3513061_37, Nil);
Obj _3513063_37 = makeCons(co->gc, _3513059_37, _3513062_37);
Obj _3513064_37 = makeCons(co->gc, a, _3513063_37);
Obj _3513065_37 = makeCons(co->gc, __symbolTable[129], _3513064_37);
coraReturn(co, _3513065_37);
return;
}
case 2:
{
Obj _3513059_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3513060_37 = makeCons(co->gc, a, closureRef(R[0], 1));
R[1] = _3513059_37;
R[2] = a;
saveCont(co, clofun88, 1, R);
coraCall4(co, globalRef(__symbolTable[93]), _3513060_37, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512334_37 = makeNative(co->gc, 2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513007_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3513007_37) {
Obj _3513008_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3513009_37 = PRIM_EQ(__symbolTable[78], _3513008_37);
if (True == _3513009_37) {
Obj _3513010_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513011_37 = PRIM_ISCONS(_3513010_37);
if (True == _3513011_37) {
Obj _3513012_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513013_37 = PRIM_CAR(_3513012_37);
Obj path = _3513013_37;
Obj _3513014_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513015_37 = PRIM_CDR(_3513014_37);
Obj _3513016_37 = PRIM_ISCONS(_3513015_37);
if (True == _3513016_37) {
Obj _3513017_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513018_37 = PRIM_CDR(_3513017_37);
Obj _3513019_37 = PRIM_CAR(_3513018_37);
Obj import = _3513019_37;
Obj _3513020_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513021_37 = PRIM_CDR(_3513020_37);
Obj _3513022_37 = PRIM_CDR(_3513021_37);
Obj _3513023_37 = PRIM_ISCONS(_3513022_37);
if (True == _3513023_37) {
Obj _3513024_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513025_37 = PRIM_CDR(_3513024_37);
Obj _3513026_37 = PRIM_CDR(_3513025_37);
Obj _3513027_37 = PRIM_CAR(_3513026_37);
Obj body = _3513027_37;
Obj _3513028_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513029_37 = PRIM_CDR(_3513028_37);
Obj _3513030_37 = PRIM_CDR(_3513029_37);
Obj _3513031_37 = PRIM_CDR(_3513030_37);
Obj _3513032_37 = PRIM_EQ(Nil, _3513031_37);
if (True == _3513032_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512334_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512334_37);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512335_37 = makeNative(co->gc, 1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj _3512983_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512983_37) {
Obj _3512984_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3512985_37 = PRIM_EQ(__symbolTable[133], _3512984_37);
if (True == _3512985_37) {
Obj _3512986_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512987_37 = PRIM_ISCONS(_3512986_37);
if (True == _3512987_37) {
Obj _3512988_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512989_37 = PRIM_CAR(_3512988_37);
Obj var = _3512989_37;
Obj _3512990_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512991_37 = PRIM_CDR(_3512990_37);
Obj _3512992_37 = PRIM_ISCONS(_3512991_37);
if (True == _3512992_37) {
Obj _3512993_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512994_37 = PRIM_CDR(_3512993_37);
Obj _3512995_37 = PRIM_CAR(_3512994_37);
Obj val = _3512995_37;
Obj _3512996_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512997_37 = PRIM_CDR(_3512996_37);
Obj _3512998_37 = PRIM_CDR(_3512997_37);
Obj _3512999_37 = PRIM_EQ(Nil, _3512998_37);
if (True == _3512999_37) {
R[1] = val;
saveCont(co, clofun86, 2, R);
coraCall2(co, globalRef(__symbolTable[76]), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512335_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512335_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512335_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512335_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512335_37);
return;
}
}
case 1:
{
Obj _3513003_37= co->res;
Obj _3513002_37 = R[1];
Obj _3513004_37 = makeCons(co->gc, _3513003_37, Nil);
Obj _3513005_37 = makeCons(co->gc, _3513002_37, _3513004_37);
Obj _3513006_37 = makeCons(co->gc, __symbolTable[68], _3513005_37);
coraReturn(co, _3513006_37);
return;
}
case 2:
{
Obj _3513000_37= co->res;
Obj val = R[1];
Obj var1 = _3513000_37;
Obj _3513001_37 = makeCons(co->gc, var1, Nil);
Obj _3513002_37 = makeCons(co->gc, __symbolTable[139], _3513001_37);
R[1] = _3513002_37;
saveCont(co, clofun86, 1, R);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), val);
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun85, 1, R);
coraCall3(co, globalRef(__symbolTable[93]), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3512982_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), _3512982_37, closureRef(R[0], 3));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
saveCont(co, clofun84, 2, R);
coraCall2(co, globalRef(__symbolTable[56]), x, globalRef(__symbolTable[69]));
return;
}
case 1:
{
Obj _3512976_37= co->res;
Obj _3512977_37 = primNot(_3512976_37);
coraReturn(co, _3512977_37);
return;
}
case 2:
{
Obj _3512975_37= co->res;
saveCont(co, clofun84, 1, R);
coraCall1(co, globalRef(__symbolTable[161]), _3512975_37);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512318_37 = R[1];
Obj _3512319_37 = R[2];
Obj _3512960_37 = PRIM_EQ(Nil, _3512319_37);
if (True == _3512960_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3512321_37 = makeNative(co->gc, 1, clofun82, 0, 2, _3512319_37, _3512318_37);
Obj _3512964_37 = PRIM_ISCONS(_3512319_37);
if (True == _3512964_37) {
Obj _3512965_37 = PRIM_CAR(_3512319_37);
Obj _3512966_37 = PRIM_ISCONS(_3512965_37);
if (True == _3512966_37) {
Obj _3512967_37 = PRIM_CAR(_3512319_37);
Obj _3512968_37 = PRIM_CAR(_3512967_37);
Obj x = _3512968_37;
Obj _3512969_37 = PRIM_CAR(_3512319_37);
Obj _3512970_37 = PRIM_CDR(_3512969_37);
Obj y = _3512970_37;
Obj _3512971_37 = PRIM_CDR(_3512319_37);
Obj _3512972_37 = PRIM_EQ(_3512318_37, x);
if (True == _3512972_37) {
Obj _3512973_37 = makeCons(co->gc, x, y);
coraReturn(co, _3512973_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512321_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512321_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512321_37);
return;
}
}
}
}
}

static void clofun82(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512961_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512961_37) {
Obj _3512962_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3512963_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3512963_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[56]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512313_37 = R[1];
Obj _3512314_37 = R[2];
Obj _3512315_37 = R[3];
Obj _3512879_37 = PRIM_EQ(Nil, _3512315_37);
if (True == _3512879_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[76]), _3512313_37, _3512314_37);
return;
} else {
Obj _3512880_37 = PRIM_ISCONS(_3512315_37);
if (True == _3512880_37) {
Obj _3512881_37 = PRIM_CAR(_3512315_37);
Obj import = _3512881_37;
Obj _3512882_37 = PRIM_CDR(_3512315_37);
Obj more = _3512882_37;
R[1] = import;
R[2] = _3512313_37;
R[3] = _3512314_37;
R[4] = more;
saveCont(co, clofun81, 7, R);
coraCall2(co, globalRef(__symbolTable[73]), import, makeCString(co->gc, "#*ns-export*"));
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
Obj _3512889_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), _3512889_37);
return;
}
case 2:
{
Obj _3512888_37= co->res;
Obj import = R[1];
saveCont(co, clofun81, 1, R);
coraCall2(co, globalRef(__symbolTable[73]), import, _3512888_37);
return;
}
case 3:
{
Obj _3512887_37= co->res;
Obj import = R[1];
R[1] = import;
saveCont(co, clofun81, 2, R);
coraCall2(co, globalRef(__symbolTable[73]), makeCString(co->gc, "#"), _3512887_37);
return;
}
case 4:
{
Obj _3512886_37= co->res;
Obj import = R[1];
Obj _3512313_37 = R[2];
Obj _3512314_37 = R[3];
Obj more = R[4];
if (True == _3512886_37) {
R[1] = import;
saveCont(co, clofun81, 3, R);
coraCall1(co, globalRef(__symbolTable[72]), _3512313_37);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), _3512313_37, _3512314_37, more);
return;
}
}
case 5:
{
Obj _3512885_37= co->res;
Obj import = R[1];
Obj _3512313_37 = R[2];
Obj _3512314_37 = R[3];
Obj more = R[4];
Obj export = _3512885_37;
R[1] = import;
R[2] = _3512313_37;
R[3] = _3512314_37;
R[4] = more;
saveCont(co, clofun81, 4, R);
coraCall2(co, globalRef(__symbolTable[132]), _3512313_37, export);
return;
}
case 6:
{
Obj _3512884_37= co->res;
Obj import = R[1];
Obj _3512313_37 = R[2];
Obj _3512314_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3512313_37;
R[3] = _3512314_37;
R[4] = more;
saveCont(co, clofun81, 5, R);
coraCall2(co, globalRef(__symbolTable[70]), _3512884_37, Nil);
return;
}
case 7:
{
Obj _3512883_37= co->res;
Obj import = R[1];
Obj _3512313_37 = R[2];
Obj _3512314_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3512313_37;
R[3] = _3512314_37;
R[4] = more;
saveCont(co, clofun81, 6, R);
coraCall1(co, globalRef(__symbolTable[74]), _3512883_37);
return;
}
}
}

static void clofun80(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj var = R[1];
Obj ns = R[2];
Obj _3512873_37 = PRIM_EQ(ns, makeCString(co->gc, ""));
if (True == _3512873_37) {
coraReturn(co, var);
return;
} else {
R[1] = var;
R[2] = ns;
saveCont(co, clofun80, 4, R);
coraCall1(co, globalRef(__symbolTable[75]), var);
return;
}
}
case 1:
{
Obj _3512877_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), _3512877_37);
return;
}
case 2:
{
Obj _3512876_37= co->res;
Obj ns = R[1];
saveCont(co, clofun80, 1, R);
coraCall2(co, globalRef(__symbolTable[73]), ns, _3512876_37);
return;
}
case 3:
{
Obj _3512875_37= co->res;
Obj ns = R[1];
R[1] = ns;
saveCont(co, clofun80, 2, R);
coraCall2(co, globalRef(__symbolTable[73]), makeCString(co->gc, "#"), _3512875_37);
return;
}
case 4:
{
Obj _3512874_37= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == _3512874_37) {
coraReturn(co, var);
return;
} else {
R[1] = ns;
saveCont(co, clofun80, 3, R);
coraCall1(co, globalRef(__symbolTable[72]), var);
return;
}
}
}
}

static void clofun79(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj sexp = R[1];
R[1] = sexp;
saveCont(co, clofun79, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), sexp);
return;
}
case 1:
{
Obj _3512855_37= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, _3512855_37, makeNative(co->gc, 4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj _3512854_37= co->res;
Obj path = R[1];
R[1] = path;
saveCont(co, clofun79, 1, R);
coraCall1(co, globalRef(__symbolTable[80]), _3512854_37);
return;
}
case 3:
{
Obj _3512853_37= co->res;
Obj sexp = R[1];
Obj path = _3512853_37;
R[1] = path;
saveCont(co, clofun79, 2, R);
coraCall1(co, globalRef(__symbolTable[157]), sexp);
return;
}
}
}

static void clofun78(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj import = R[1];
Obj export = R[2];
Obj body = R[3];
Obj _3512856_37 = makeCons(co->gc, makeCString(co->gc, "cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = _3512856_37;
saveCont(co, clofun78, 2, R);
coraCall2(co, globalRef(__symbolTable[147]), makeNative(co->gc, 2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj _3512866_37= co->res;
Obj _3512856_37 = R[1];
Obj _3512867_37 = makeCons(co->gc, __symbolTable[89], _3512866_37);
Obj _3512868_37 = makeCons(co->gc, _3512867_37, Nil);
Obj _3512869_37 = makeCons(co->gc, _3512856_37, _3512868_37);
Obj _3512870_37 = makeCons(co->gc, closureRef(R[0], 0), _3512869_37);
Obj _3512871_37 = makeCons(co->gc, __symbolTable[78], _3512870_37);
coraReturn(co, _3512871_37);
return;
}
case 2:
{
Obj _3512859_37= co->res;
Obj export = R[1];
Obj body = R[2];
Obj _3512856_37 = R[3];
Obj _3512860_37 = makeCons(co->gc, export, Nil);
Obj _3512861_37 = makeCons(co->gc, __symbolTable[86], _3512860_37);
Obj _3512862_37 = makeCons(co->gc, _3512861_37, Nil);
Obj _3512863_37 = makeCons(co->gc, __symbolTable[77], _3512862_37);
Obj _3512864_37 = makeCons(co->gc, __symbolTable[133], _3512863_37);
Obj _3512865_37 = makeCons(co->gc, _3512864_37, body);
R[1] = _3512856_37;
saveCont(co, clofun78, 1, R);
coraCall2(co, globalRef(__symbolTable[98]), _3512859_37, _3512865_37);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj _3512857_37 = makeCons(co->gc, imp, Nil);
Obj _3512858_37 = makeCons(co->gc, __symbolTable[81], _3512857_37);
coraReturn(co, _3512858_37);
return;
}
}
}

static void clofun76(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj data = R[1];
Obj k = R[2];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), data, Nil, Nil, k);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512306_37 = R[1];
Obj _3512307_37 = R[2];
Obj _3512308_37 = R[3];
Obj _3512309_37 = R[4];
Obj _3512310_37 = makeNative(co->gc, 1, clofun74, 0, 4, _3512308_37, _3512306_37, _3512307_37, _3512309_37);
Obj _3512833_37 = PRIM_ISCONS(_3512306_37);
if (True == _3512833_37) {
Obj _3512834_37 = PRIM_CAR(_3512306_37);
Obj _3512835_37 = PRIM_ISCONS(_3512834_37);
if (True == _3512835_37) {
Obj _3512836_37 = PRIM_CAR(_3512306_37);
Obj _3512837_37 = PRIM_CAR(_3512836_37);
Obj _3512838_37 = PRIM_EQ(__symbolTable[81], _3512837_37);
if (True == _3512838_37) {
Obj _3512839_37 = PRIM_CAR(_3512306_37);
Obj _3512840_37 = PRIM_CDR(_3512839_37);
Obj _3512841_37 = PRIM_ISCONS(_3512840_37);
if (True == _3512841_37) {
Obj _3512842_37 = PRIM_CAR(_3512306_37);
Obj _3512843_37 = PRIM_CDR(_3512842_37);
Obj _3512844_37 = PRIM_CAR(_3512843_37);
Obj lib = _3512844_37;
Obj _3512845_37 = PRIM_CAR(_3512306_37);
Obj _3512846_37 = PRIM_CDR(_3512845_37);
Obj _3512847_37 = PRIM_CDR(_3512846_37);
Obj _3512848_37 = PRIM_EQ(Nil, _3512847_37);
if (True == _3512848_37) {
Obj _3512849_37 = PRIM_CDR(_3512306_37);
Obj rest = _3512849_37;
Obj _3512850_37 = makeCons(co->gc, lib, _3512307_37);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, _3512850_37, _3512308_37, _3512309_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512310_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512310_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512310_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512310_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512310_37);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512311_37 = makeNative(co->gc, 1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3512824_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3512824_37) {
Obj _3512825_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512826_37 = PRIM_ISCONS(_3512825_37);
if (True == _3512826_37) {
Obj _3512827_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512828_37 = PRIM_CAR(_3512827_37);
Obj _3512829_37 = PRIM_EQ(__symbolTable[82], _3512828_37);
if (True == _3512829_37) {
Obj _3512830_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512831_37 = PRIM_CDR(_3512830_37);
Obj more = _3512831_37;
Obj _3512832_37 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = _3512832_37;
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512311_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512311_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512311_37);
return;
}
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
saveCont(co, clofun73, 1, R);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
}
case 1:
{
Obj _3512823_37= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), _3512823_37, closureRef(R[0], 2), closureRef(R[0], 3));
return;
}
}
}

static void clofun72(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun72, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512821_37= co->res;
Obj _3512820_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[85]), _3512820_37, _3512821_37);
return;
}
case 2:
{
Obj _3512820_37= co->res;
Obj exp = R[1];
R[1] = _3512820_37;
saveCont(co, clofun72, 1, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
}
}

static void clofun71(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj fn = R[1];
Obj arglist = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 4, R);
coraCall1(co, globalRef(__symbolTable[157]), arglist);
return;
}
case 1:
{
Obj _3512809_37= co->res;
Obj _3512808_37 = R[1];
Obj fn = R[2];
Obj _3512810_37 = makeCons(co->gc, _3512809_37, Nil);
Obj _3512811_37 = makeCons(co->gc, _3512808_37, _3512810_37);
Obj _3512812_37 = makeCons(co->gc, fn, _3512811_37);
coraReturn(co, _3512812_37);
return;
}
case 2:
{
Obj _3512815_37= co->res;
Obj _3512813_37 = R[1];
Obj fn = R[2];
Obj _3512816_37 = makeCons(co->gc, _3512815_37, Nil);
Obj _3512817_37 = makeCons(co->gc, _3512813_37, _3512816_37);
Obj _3512818_37 = makeCons(co->gc, fn, _3512817_37);
coraReturn(co, _3512818_37);
return;
}
case 3:
{
Obj _3512807_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == _3512807_37) {
Obj _3512808_37 = PRIM_CAR(arglist);
R[1] = _3512808_37;
R[2] = fn;
saveCont(co, clofun71, 1, R);
coraCall1(co, globalRef(__symbolTable[160]), arglist);
return;
} else {
Obj _3512813_37 = PRIM_CAR(arglist);
Obj _3512814_37 = PRIM_CDR(arglist);
R[1] = _3512813_37;
R[2] = fn;
saveCont(co, clofun71, 2, R);
coraCall2(co, globalRef(__symbolTable[85]), fn, _3512814_37);
return;
}
}
case 4:
{
Obj _3512806_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
saveCont(co, clofun71, 3, R);
coraCall1(co, globalRef(__symbolTable[161]), _3512806_37);
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
saveCont(co, clofun70, 1, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512804_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[88]), _3512804_37);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512301_37 = R[1];
Obj _3512784_37 = primIsSymbol(_3512301_37);
if (True == _3512784_37) {
Obj _3512785_37 = makeCons(co->gc, _3512301_37, Nil);
Obj _3512786_37 = makeCons(co->gc, __symbolTable[139], _3512785_37);
coraReturn(co, _3512786_37);
return;
} else {
Obj _3512303_37 = makeNative(co->gc, 1, clofun68, 0, 1, _3512301_37);
Obj _3512793_37 = PRIM_ISCONS(_3512301_37);
if (True == _3512793_37) {
Obj _3512794_37 = PRIM_CAR(_3512301_37);
Obj _3512795_37 = PRIM_EQ(__symbolTable[87], _3512794_37);
if (True == _3512795_37) {
Obj _3512796_37 = PRIM_CDR(_3512301_37);
Obj _3512797_37 = PRIM_ISCONS(_3512796_37);
if (True == _3512797_37) {
Obj _3512798_37 = PRIM_CDR(_3512301_37);
Obj _3512799_37 = PRIM_CAR(_3512798_37);
Obj x = _3512799_37;
Obj _3512800_37 = PRIM_CDR(_3512301_37);
Obj _3512801_37 = PRIM_CDR(_3512800_37);
Obj _3512802_37 = PRIM_EQ(Nil, _3512801_37);
if (True == _3512802_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512303_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512303_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512303_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512303_37);
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
Obj _3512787_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512787_37) {
Obj _3512788_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512788_37;
Obj _3512789_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3512789_37;
Obj _3512790_37 = makeCons(co->gc, x, more);
saveCont(co, clofun68, 1, R);
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), _3512790_37);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3512791_37= co->res;
Obj _3512792_37 = makeCons(co->gc, __symbolTable[135], _3512791_37);
coraReturn(co, _3512792_37);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512782_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[91]), _3512782_37);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512297_37 = R[1];
Obj _3512298_37 = makeNative(co->gc, 1, clofun65, 0, 1, _3512297_37);
Obj _3512777_37 = PRIM_ISCONS(_3512297_37);
if (True == _3512777_37) {
Obj _3512778_37 = PRIM_CAR(_3512297_37);
Obj x = _3512778_37;
Obj _3512779_37 = PRIM_CDR(_3512297_37);
Obj _3512780_37 = PRIM_EQ(Nil, _3512779_37);
if (True == _3512780_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512298_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512298_37);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512299_37 = makeNative(co->gc, 2, clofun64, 0, 1, closureRef(R[0], 0));
Obj _3512765_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512765_37) {
Obj _3512766_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512766_37;
Obj _3512767_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512768_37 = PRIM_ISCONS(_3512767_37);
if (True == _3512768_37) {
Obj _3512769_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512770_37 = PRIM_CAR(_3512769_37);
Obj y = _3512770_37;
Obj _3512771_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512772_37 = PRIM_CDR(_3512771_37);
Obj _3512773_37 = PRIM_EQ(Nil, _3512772_37);
if (True == _3512773_37) {
Obj _3512774_37 = makeCons(co->gc, y, Nil);
Obj _3512775_37 = makeCons(co->gc, x, _3512774_37);
Obj _3512776_37 = makeCons(co->gc, __symbolTable[90], _3512775_37);
coraReturn(co, _3512776_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512299_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512299_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512299_37);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512758_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512758_37) {
Obj _3512759_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512759_37;
Obj _3512760_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3512760_37;
R[1] = x;
saveCont(co, clofun64, 1, R);
coraCall1(co, globalRef(__symbolTable[91]), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no match-help found!"));
return;
}
}
case 1:
{
Obj _3512761_37= co->res;
Obj x = R[1];
Obj _3512762_37 = makeCons(co->gc, _3512761_37, Nil);
Obj _3512763_37 = makeCons(co->gc, x, _3512762_37);
Obj _3512764_37 = makeCons(co->gc, __symbolTable[90], _3512763_37);
coraReturn(co, _3512764_37);
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
saveCont(co, clofun63, 2, R);
coraCall1(co, globalRef(__symbolTable[141]), exp);
return;
}
case 1:
{
Obj _3512756_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[92]), _3512756_37);
return;
}
case 2:
{
Obj _3512755_37= co->res;
saveCont(co, clofun63, 1, R);
coraCall1(co, globalRef(__symbolTable[94]), _3512755_37);
return;
}
}
}

static void clofun62(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
coraReturn(co, x);
return;
}
}
}

static void clofun61(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[93]), Nil, makeCString(co->gc, ""), Nil, exp);
return;
}
}
}

static void clofun60(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 5, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 1:
{
Obj _3512744_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3512745_37 = makeCons(co->gc, __symbolTable[135], args);
Obj _3512746_37 = makeCons(co->gc, _3512745_37, body);
Obj _3512747_37 = makeCons(co->gc, __symbolTable[107], _3512746_37);
Obj _3512748_37 = makeCons(co->gc, _3512747_37, Nil);
Obj _3512749_37 = makeCons(co->gc, args, _3512748_37);
Obj _3512750_37 = makeCons(co->gc, _3512744_37, _3512749_37);
Obj _3512751_37 = makeCons(co->gc, __symbolTable[134], _3512750_37);
coraReturn(co, _3512751_37);
return;
}
case 2:
{
Obj _3512743_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = _3512743_37;
R[1] = body;
R[2] = args;
saveCont(co, clofun60, 1, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 3:
{
Obj _3512742_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = _3512742_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 2, R);
coraCall1(co, globalRef(__symbolTable[96]), nargs);
return;
}
case 4:
{
Obj _3512741_37= co->res;
Obj exp = R[1];
Obj body = _3512741_37;
R[1] = exp;
R[2] = body;
saveCont(co, clofun60, 3, R);
coraCall1(co, globalRef(__symbolTable[97]), body);
return;
}
case 5:
{
Obj _3512740_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun60, 4, R);
coraCall1(co, globalRef(__symbolTable[104]), _3512740_37);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj _3512734_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3512734_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3512735_37 = primGenSym(co);
Obj _3512736_37 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = _3512735_37;
saveCont(co, clofun59, 1, R);
coraCall1(co, globalRef(__symbolTable[96]), _3512736_37);
return;
}
}
case 1:
{
Obj _3512737_37= co->res;
Obj _3512735_37 = R[1];
Obj _3512738_37 = makeCons(co->gc, _3512735_37, _3512737_37);
coraReturn(co, _3512738_37);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rules = R[1];
saveCont(co, clofun58, 4, R);
coraCall2(co, globalRef(__symbolTable[103]), Nil, rules);
return;
}
case 1:
{
Obj _3512731_37= co->res;
Obj n = R[1];
Obj _3512732_37 = primNot(_3512731_37);
if (True == _3512732_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "inconsistent func rule args count"));
return;
} else {
coraReturn(co, n);
return;
}
}
case 2:
{
Obj _3512730_37= co->res;
Obj n = R[1];
R[1] = n;
saveCont(co, clofun58, 1, R);
coraCall1(co, globalRef(__symbolTable[161]), _3512730_37);
return;
}
case 3:
{
Obj _3512725_37= co->res;
Obj counts = _3512725_37;
Obj _3512726_37 = PRIM_CAR(counts);
Obj n = _3512726_37;
Obj _3512729_37 = PRIM_CDR(counts);
R[1] = n;
saveCont(co, clofun58, 2, R);
coraCall2(co, globalRef(__symbolTable[99]), makeNative(co->gc, 2, clofun57, 1, 1, n), _3512729_37);
return;
}
case 4:
{
Obj _3512723_37= co->res;
Obj pats = _3512723_37;
saveCont(co, clofun58, 3, R);
coraCall2(co, globalRef(__symbolTable[147]), makeNative(co->gc, 2, clofun56, 1, 0), pats);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512727_37 = PRIM_EQ(closureRef(R[0], 0), x);
Obj _3512728_37 = primNot(_3512727_37);
coraReturn(co, _3512728_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512724_37 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), _3512724_37);
return;
}
}
}

static void clofun55(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l1 = R[1];
Obj l2 = R[2];
Obj _3512717_37 = PRIM_EQ(l1, Nil);
if (True == _3512717_37) {
coraReturn(co, l2);
return;
} else {
Obj _3512718_37 = PRIM_CAR(l1);
Obj _3512719_37 = PRIM_CDR(l1);
R[1] = _3512718_37;
saveCont(co, clofun55, 1, R);
coraCall2(co, globalRef(__symbolTable[98]), _3512719_37, l2);
return;
}
}
case 1:
{
Obj _3512720_37= co->res;
Obj _3512718_37 = R[1];
Obj _3512721_37 = makeCons(co->gc, _3512718_37, _3512720_37);
coraReturn(co, _3512721_37);
return;
}
}
}

static void clofun54(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj fn = R[1];
Obj l = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), Nil, fn, l);
return;
}
}
}

static void clofun53(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj fn = R[2];
Obj l = R[3];
Obj _3512708_37 = PRIM_ISCONS(l);
if (True == _3512708_37) {
Obj _3512709_37 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
saveCont(co, clofun53, 1, R);
coraCall1(co, fn, _3512709_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj _3512710_37= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == _3512710_37) {
Obj _3512711_37 = PRIM_CAR(l);
Obj _3512712_37 = makeCons(co->gc, _3512711_37, res);
Obj _3512713_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), _3512712_37, fn, _3512713_37);
return;
} else {
Obj _3512714_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), res, fn, _3512714_37);
return;
}
}
}
}

static void clofun52(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), MAKE_NUMBER(0), l);
return;
}
}
}

static void clofun51(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj i = R[1];
Obj l = R[2];
Obj _3512703_37 = PRIM_EQ(l, Nil);
if (True == _3512703_37) {
coraReturn(co, i);
return;
} else {
Obj _3512704_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3512705_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), _3512704_37, _3512705_37);
return;
}
}
}
}

static void clofun50(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj rules = R[2];
R[1] = res;
R[2] = rules;
saveCont(co, clofun50, 2, R);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj _3512701_37= co->res;
Obj _3512700_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[103]), _3512700_37, _3512701_37);
return;
}
case 2:
{
Obj _3512698_37= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == _3512698_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
} else {
Obj _3512699_37 = PRIM_CAR(rules);
Obj _3512700_37 = makeCons(co->gc, _3512699_37, res);
R[1] = _3512700_37;
saveCont(co, clofun50, 1, R);
coraCall1(co, globalRef(__symbolTable[157]), rules);
return;
}
}
}
}

static void clofun49(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj input = R[1];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), input, Nil, Nil);
return;
}
}
}

static void clofun48(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj input = R[1];
Obj current = R[2];
Obj result = R[3];
Obj _3512645_37 = PRIM_EQ(Nil, input);
if (True == _3512645_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), result);
return;
} else {
Obj _3512294_37 = makeNative(co->gc, 3, clofun47, 0, 3, input, current, result);
Obj _3512663_37 = PRIM_ISCONS(input);
if (True == _3512663_37) {
Obj _3512664_37 = PRIM_CAR(input);
Obj _3512665_37 = PRIM_EQ(__symbolTable[105], _3512664_37);
if (True == _3512665_37) {
Obj _3512666_37 = PRIM_CDR(input);
Obj _3512667_37 = PRIM_ISCONS(_3512666_37);
if (True == _3512667_37) {
Obj _3512668_37 = PRIM_CDR(input);
Obj _3512669_37 = PRIM_CAR(_3512668_37);
Obj act = _3512669_37;
Obj _3512670_37 = PRIM_CDR(input);
Obj _3512671_37 = PRIM_CDR(_3512670_37);
Obj _3512672_37 = PRIM_ISCONS(_3512671_37);
if (True == _3512672_37) {
Obj _3512673_37 = PRIM_CDR(input);
Obj _3512674_37 = PRIM_CDR(_3512673_37);
Obj _3512675_37 = PRIM_CAR(_3512674_37);
Obj _3512676_37 = PRIM_EQ(__symbolTable[110], _3512675_37);
if (True == _3512676_37) {
Obj _3512677_37 = PRIM_CDR(input);
Obj _3512678_37 = PRIM_CDR(_3512677_37);
Obj _3512679_37 = PRIM_CDR(_3512678_37);
Obj _3512680_37 = PRIM_ISCONS(_3512679_37);
if (True == _3512680_37) {
Obj _3512681_37 = PRIM_CDR(input);
Obj _3512682_37 = PRIM_CDR(_3512681_37);
Obj _3512683_37 = PRIM_CDR(_3512682_37);
Obj _3512684_37 = PRIM_CAR(_3512683_37);
Obj pred = _3512684_37;
Obj _3512685_37 = PRIM_CDR(input);
Obj _3512686_37 = PRIM_CDR(_3512685_37);
Obj _3512687_37 = PRIM_CDR(_3512686_37);
Obj _3512688_37 = PRIM_CDR(_3512687_37);
Obj remain = _3512688_37;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
saveCont(co, clofun48, 1, R);
coraCall1(co, globalRef(__symbolTable[149]), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512294_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512294_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512294_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512294_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512294_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512294_37);
return;
}
}
}
case 1:
{
Obj _3512689_37= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj _3512690_37 = makeCons(co->gc, __symbolTable[135], _3512689_37);
Obj pat = _3512690_37;
Obj _3512691_37 = makeCons(co->gc, act, Nil);
Obj _3512692_37 = makeCons(co->gc, pred, _3512691_37);
Obj _3512693_37 = makeCons(co->gc, __symbolTable[110], _3512692_37);
Obj _3512694_37 = makeCons(co->gc, pat, result);
Obj _3512695_37 = makeCons(co->gc, _3512693_37, _3512694_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, _3512695_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512295_37 = makeNative(co->gc, 1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3512650_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512650_37) {
Obj _3512651_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3512652_37 = PRIM_EQ(__symbolTable[105], _3512651_37);
if (True == _3512652_37) {
Obj _3512653_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512654_37 = PRIM_ISCONS(_3512653_37);
if (True == _3512654_37) {
Obj _3512655_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512656_37 = PRIM_CAR(_3512655_37);
Obj act = _3512656_37;
Obj _3512657_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3512658_37 = PRIM_CDR(_3512657_37);
Obj remain = _3512658_37;
R[1] = act;
R[2] = remain;
saveCont(co, clofun47, 1, R);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512295_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512295_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512295_37);
return;
}
}
case 1:
{
Obj _3512659_37= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj _3512660_37 = makeCons(co->gc, __symbolTable[135], _3512659_37);
Obj pat = _3512660_37;
Obj _3512661_37 = makeCons(co->gc, pat, closureRef(R[0], 2));
Obj _3512662_37 = makeCons(co->gc, act, _3512661_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, _3512662_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512646_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3512646_37) {
Obj _3512647_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3512647_37;
Obj _3512648_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3512648_37;
Obj _3512649_37 = makeCons(co->gc, x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), y, _3512649_37, closureRef(R[0], 2));
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
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[108]), exp);
return;
}
}
}

static void clofun44(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512632_37= co->res;
Obj value = R[1];
Obj rules = _3512632_37;
Obj _3512345_37 = makeNative(co->gc, 2, clofun43, 1, 2, value, rules);
Obj _3512639_37 = PRIM_ISCONS(value);
if (True == _3512639_37) {
Obj _3512640_37 = PRIM_CAR(value);
Obj _3512641_37 = PRIM_EQ(__symbolTable[152], _3512640_37);
Obj _3512642_37 = primNot(_3512641_37);
if (True == _3512642_37) {
co->ctx.sp = R;
coraCall1(co, _3512345_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512345_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512345_37, False);
return;
}
}
case 2:
{
Obj _3512631_37= co->res;
Obj exp = R[1];
Obj value = _3512631_37;
R[1] = value;
saveCont(co, clofun44, 1, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj _3512630_37= co->res;
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun44, 2, R);
coraCall1(co, globalRef(__symbolTable[138]), _3512630_37);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512346_37 = R[1];
if (True == _3512346_37) {
Obj _3512633_37 = primGenSym(co);
Obj val = _3512633_37;
R[1] = val;
saveCont(co, clofun43, 1, R);
coraCall2(co, globalRef(__symbolTable[109]), val, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3512634_37= co->res;
Obj val = R[1];
Obj _3512635_37 = makeCons(co->gc, _3512634_37, Nil);
Obj _3512636_37 = makeCons(co->gc, closureRef(R[0], 0), _3512635_37);
Obj _3512637_37 = makeCons(co->gc, val, _3512636_37);
Obj _3512638_37 = makeCons(co->gc, __symbolTable[129], _3512637_37);
coraReturn(co, _3512638_37);
return;
}
}
}

static void clofun42(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj value = R[1];
Obj rules = R[2];
R[1] = value;
R[2] = rules;
saveCont(co, clofun42, 3, R);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj _3512628_37= co->res;
Obj _3512343_37 = R[1];
if (True == _3512628_37) {
co->ctx.sp = R;
coraCall1(co, _3512343_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512343_37, False);
return;
}
}
case 2:
{
Obj _3512626_37= co->res;
Obj rules = R[1];
Obj _3512343_37 = R[2];
if (True == _3512626_37) {
Obj _3512627_37 = PRIM_CDR(rules);
R[1] = _3512343_37;
saveCont(co, clofun42, 1, R);
coraCall1(co, globalRef(__symbolTable[151]), _3512627_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512343_37, False);
return;
}
}
case 3:
{
Obj _3512608_37= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == _3512608_37) {
Obj _3512609_37 = makeCons(co->gc, makeCString(co->gc, "no match-help found!"), Nil);
Obj _3512610_37 = makeCons(co->gc, __symbolTable[127], _3512609_37);
coraReturn(co, _3512610_37);
return;
} else {
Obj _3512343_37 = makeNative(co->gc, 3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = _3512343_37;
saveCont(co, clofun42, 2, R);
coraCall1(co, globalRef(__symbolTable[151]), rules);
return;
}
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512344_37 = R[1];
if (True == _3512344_37) {
Obj _3512611_37 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = _3512611_37;
Obj _3512612_37 = primGenSym(co);
Obj cc = _3512612_37;
R[1] = pat;
R[2] = cc;
saveCont(co, clofun41, 4, R);
coraCall2(co, globalRef(__symbolTable[111]), closureRef(R[0], 1), cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no cond match"));
return;
}
}
case 1:
{
Obj _3512618_37= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = _3512618_37;
Obj _3512619_37 = makeCons(co->gc, rest, Nil);
Obj _3512620_37 = makeCons(co->gc, Nil, _3512619_37);
Obj _3512621_37 = makeCons(co->gc, __symbolTable[140], _3512620_37);
Obj _3512622_37 = makeCons(co->gc, curr, Nil);
Obj _3512623_37 = makeCons(co->gc, _3512621_37, _3512622_37);
Obj _3512624_37 = makeCons(co->gc, cc, _3512623_37);
Obj _3512625_37 = makeCons(co->gc, __symbolTable[129], _3512624_37);
coraReturn(co, _3512625_37);
return;
}
case 2:
{
Obj _3512615_37= co->res;
Obj cc = R[1];
Obj curr = _3512615_37;
Obj _3512616_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3512617_37 = PRIM_CDR(_3512616_37);
R[1] = curr;
R[2] = cc;
saveCont(co, clofun41, 1, R);
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), _3512617_37);
return;
}
case 3:
{
Obj _3512614_37= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
saveCont(co, clofun41, 2, R);
coraCall4(co, globalRef(__symbolTable[117]), _3512614_37, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj _3512613_37= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = _3512613_37;
R[1] = action;
R[2] = cc;
saveCont(co, clofun41, 3, R);
coraCall1(co, globalRef(__symbolTable[138]), pat);
return;
}
}
}

static void clofun40(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rules = R[1];
Obj cc = R[2];
Obj _3512595_37 = PRIM_CDR(rules);
Obj _3512596_37 = PRIM_CAR(_3512595_37);
Obj action = _3512596_37;
Obj _3512341_37 = makeNative(co->gc, 2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = _3512341_37;
saveCont(co, clofun40, 1, R);
coraCall1(co, globalRef(__symbolTable[151]), action);
return;
}
case 1:
{
Obj _3512604_37= co->res;
Obj action = R[1];
Obj _3512341_37 = R[2];
if (True == _3512604_37) {
Obj _3512605_37 = PRIM_CAR(action);
Obj _3512606_37 = PRIM_EQ(_3512605_37, __symbolTable[110]);
if (True == _3512606_37) {
co->ctx.sp = R;
coraCall1(co, _3512341_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512341_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512341_37, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512342_37 = R[1];
if (True == _3512342_37) {
saveCont(co, clofun39, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 1));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3512598_37= co->res;
Obj _3512597_37 = R[1];
Obj _3512599_37 = makeCons(co->gc, closureRef(R[0], 0), Nil);
Obj _3512600_37 = makeCons(co->gc, _3512599_37, Nil);
Obj _3512601_37 = makeCons(co->gc, _3512598_37, _3512600_37);
Obj _3512602_37 = makeCons(co->gc, _3512597_37, _3512601_37);
Obj _3512603_37 = makeCons(co->gc, __symbolTable[126], _3512602_37);
coraReturn(co, _3512603_37);
return;
}
case 2:
{
Obj _3512597_37= co->res;
R[1] = _3512597_37;
saveCont(co, clofun39, 1, R);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 1));
return;
}
}
}

static void clofun38(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj expr = R[2];
Obj body = R[3];
Obj cc = R[4];
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
saveCont(co, clofun38, 3, R);
coraCall1(co, makeNative(co->gc, 2, clofun37, 1, 0), pat);
return;
}
case 1:
{
Obj _3512593_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), _3512593_37);
return;
}
case 2:
{
Obj _3512580_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3512580_37) {
Obj _3512581_37 = PRIM_CAR(pat);
Obj _3512582_37 = PRIM_EQ(_3512581_37, __symbolTable[139]);
if (True == _3512582_37) {
Obj _3512583_37 = makeCons(co->gc, expr, Nil);
Obj _3512584_37 = makeCons(co->gc, pat, _3512583_37);
Obj _3512585_37 = makeCons(co->gc, __symbolTable[113], _3512584_37);
Obj _3512586_37 = makeCons(co->gc, cc, Nil);
Obj _3512587_37 = makeCons(co->gc, _3512586_37, Nil);
Obj _3512588_37 = makeCons(co->gc, body, _3512587_37);
Obj _3512589_37 = makeCons(co->gc, _3512585_37, _3512588_37);
Obj _3512590_37 = makeCons(co->gc, __symbolTable[126], _3512589_37);
coraReturn(co, _3512590_37);
return;
} else {
Obj _3512591_37 = PRIM_CAR(pat);
Obj _3512592_37 = PRIM_EQ(_3512591_37, __symbolTable[152]);
if (True == _3512592_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[118]), pat, expr, body, cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString(co->gc, "no cond match"));
return;
}
}
} else {
saveCont(co, clofun38, 1, R);
coraCall2(co, globalRef(__symbolTable[112]), makeCString(co->gc, "match fail "), pat);
return;
}
}
case 3:
{
Obj _3512565_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3512565_37) {
Obj _3512566_37 = PRIM_EQ(pat, expr);
if (True == _3512566_37) {
coraReturn(co, body);
return;
} else {
Obj _3512567_37 = makeCons(co->gc, expr, Nil);
Obj _3512568_37 = makeCons(co->gc, pat, _3512567_37);
Obj _3512569_37 = makeCons(co->gc, __symbolTable[113], _3512568_37);
Obj _3512570_37 = makeCons(co->gc, cc, Nil);
Obj _3512571_37 = makeCons(co->gc, _3512570_37, Nil);
Obj _3512572_37 = makeCons(co->gc, body, _3512571_37);
Obj _3512573_37 = makeCons(co->gc, _3512569_37, _3512572_37);
Obj _3512574_37 = makeCons(co->gc, __symbolTable[126], _3512573_37);
coraReturn(co, _3512574_37);
return;
}
} else {
Obj _3512575_37 = primIsSymbol(pat);
if (True == _3512575_37) {
Obj _3512576_37 = makeCons(co->gc, body, Nil);
Obj _3512577_37 = makeCons(co->gc, expr, _3512576_37);
Obj _3512578_37 = makeCons(co->gc, pat, _3512577_37);
Obj _3512579_37 = makeCons(co->gc, __symbolTable[129], _3512578_37);
coraReturn(co, _3512579_37);
return;
} else {
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
saveCont(co, clofun38, 2, R);
coraCall1(co, globalRef(__symbolTable[151]), pat);
return;
}
}
}
}
}

static void clofun37(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
R[1] = x;
saveCont(co, clofun37, 1, R);
coraCall1(co, globalRef(__symbolTable[131]), x);
return;
}
case 1:
{
Obj _3512562_37= co->res;
Obj x = R[1];
if (True == _3512562_37) {
Obj _3512563_37 = primIsSymbol(x);
Obj _3512564_37 = primNot(_3512563_37);
if (True == _3512564_37) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
} else {
coraReturn(co, False);
return;
}
}
}
}

static void clofun36(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj expr = R[2];
Obj body = R[3];
Obj cc = R[4];
R[1] = pat;
R[2] = body;
R[3] = cc;
R[4] = expr;
saveCont(co, clofun36, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), pat);
return;
}
case 1:
{
Obj _3512541_37= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = _3512541_37;
Obj _3512339_37 = makeNative(co->gc, 3, clofun35, 1, 5, x, y, expr, body, cc);
Obj _3512558_37 = PRIM_ISCONS(expr);
if (True == _3512558_37) {
Obj _3512559_37 = PRIM_CAR(expr);
Obj _3512560_37 = PRIM_EQ(_3512559_37, __symbolTable[152]);
if (True == _3512560_37) {
co->ctx.sp = R;
coraCall1(co, _3512339_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512339_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512339_37, False);
return;
}
}
case 2:
{
Obj _3512540_37= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = _3512540_37;
R[1] = x;
R[2] = body;
R[3] = cc;
R[4] = expr;
saveCont(co, clofun36, 1, R);
coraCall1(co, globalRef(__symbolTable[156]), pat);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512340_37 = R[1];
if (True == _3512340_37) {
saveCont(co, clofun35, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 2));
return;
} else {
Obj _3512545_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3512546_37 = makeCons(co->gc, __symbolTable[116], _3512545_37);
Obj _3512547_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3512548_37 = makeCons(co->gc, __symbolTable[115], _3512547_37);
Obj _3512549_37 = makeCons(co->gc, closureRef(R[0], 2), Nil);
Obj _3512550_37 = makeCons(co->gc, __symbolTable[114], _3512549_37);
R[1] = _3512548_37;
R[2] = _3512546_37;
saveCont(co, clofun35, 5, R);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), _3512550_37, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj _3512544_37= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), e1, _3512544_37, closureRef(R[0], 4));
return;
}
case 2:
{
Obj _3512543_37= co->res;
Obj e1 = R[1];
Obj e2 = _3512543_37;
R[1] = e1;
saveCont(co, clofun35, 1, R);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3512542_37= co->res;
Obj e1 = _3512542_37;
R[1] = e1;
saveCont(co, clofun35, 2, R);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 2));
return;
}
case 4:
{
Obj _3512552_37= co->res;
Obj _3512546_37 = R[1];
Obj _3512553_37 = makeCons(co->gc, closureRef(R[0], 4), Nil);
Obj _3512554_37 = makeCons(co->gc, _3512553_37, Nil);
Obj _3512555_37 = makeCons(co->gc, _3512552_37, _3512554_37);
Obj _3512556_37 = makeCons(co->gc, _3512546_37, _3512555_37);
Obj _3512557_37 = makeCons(co->gc, __symbolTable[126], _3512556_37);
coraReturn(co, _3512557_37);
return;
}
case 5:
{
Obj _3512551_37= co->res;
Obj _3512548_37 = R[1];
Obj _3512546_37 = R[2];
R[1] = _3512546_37;
saveCont(co, clofun35, 4, R);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), _3512548_37, _3512551_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512538_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[120]), _3512538_37);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj _3512528_37 = PRIM_CDR(pat);
R[1] = pat;
saveCont(co, clofun33, 2, R);
coraCall1(co, globalRef(__symbolTable[161]), _3512528_37);
return;
}
case 1:
{
Obj _3512533_37= co->res;
Obj _3512531_37 = R[1];
Obj _3512534_37 = makeCons(co->gc, _3512533_37, Nil);
Obj _3512535_37 = makeCons(co->gc, _3512531_37, _3512534_37);
Obj _3512536_37 = makeCons(co->gc, __symbolTable[152], _3512535_37);
coraReturn(co, _3512536_37);
return;
}
case 2:
{
Obj _3512529_37= co->res;
Obj pat = R[1];
if (True == _3512529_37) {
Obj _3512530_37 = PRIM_CAR(pat);
coraReturn(co, _3512530_37);
return;
} else {
Obj _3512531_37 = PRIM_CAR(pat);
Obj _3512532_37 = PRIM_CDR(pat);
R[1] = _3512531_37;
saveCont(co, clofun33, 1, R);
coraCall1(co, globalRef(__symbolTable[120]), _3512532_37);
return;
}
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512525_37 = PRIM_EQ(x, True);
if (True == _3512525_37) {
coraReturn(co, True);
return;
} else {
Obj _3512526_37 = PRIM_EQ(x, False);
if (True == _3512526_37) {
coraReturn(co, True);
return;
} else {
coraReturn(co, False);
return;
}
}
}
}
}

static void clofun31(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512523_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[123]), _3512523_37);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3512511_37 = PRIM_EQ(Nil, l);
if (True == _3512511_37) {
coraReturn(co, True);
return;
} else {
Obj _3512512_37 = PRIM_CAR(l);
Obj _3512513_37 = PRIM_EQ(_3512512_37, False);
if (True == _3512513_37) {
coraReturn(co, False);
return;
} else {
Obj _3512514_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun30, 1, R);
coraCall1(co, globalRef(__symbolTable[123]), _3512514_37);
return;
}
}
}
case 1:
{
Obj _3512515_37= co->res;
Obj l = R[1];
Obj more = _3512515_37;
Obj _3512516_37 = PRIM_EQ(more, False);
if (True == _3512516_37) {
coraReturn(co, False);
return;
} else {
Obj _3512517_37 = PRIM_CAR(l);
Obj _3512518_37 = makeCons(co->gc, False, Nil);
Obj _3512519_37 = makeCons(co->gc, more, _3512518_37);
Obj _3512520_37 = makeCons(co->gc, _3512517_37, _3512519_37);
Obj _3512521_37 = makeCons(co->gc, __symbolTable[126], _3512520_37);
coraReturn(co, _3512521_37);
return;
}
}
}
}

static void clofun29(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512509_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[125]), _3512509_37);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3512497_37 = PRIM_EQ(l, Nil);
if (True == _3512497_37) {
coraReturn(co, False);
return;
} else {
Obj _3512498_37 = PRIM_CAR(l);
Obj _3512499_37 = PRIM_EQ(_3512498_37, True);
if (True == _3512499_37) {
coraReturn(co, True);
return;
} else {
Obj _3512500_37 = PRIM_CDR(l);
R[1] = l;
saveCont(co, clofun28, 1, R);
coraCall1(co, globalRef(__symbolTable[125]), _3512500_37);
return;
}
}
}
case 1:
{
Obj _3512501_37= co->res;
Obj l = R[1];
Obj more = _3512501_37;
Obj _3512502_37 = PRIM_EQ(more, True);
if (True == _3512502_37) {
coraReturn(co, True);
return;
} else {
Obj _3512503_37 = PRIM_CAR(l);
Obj _3512504_37 = makeCons(co->gc, more, Nil);
Obj _3512505_37 = makeCons(co->gc, True, _3512504_37);
Obj _3512506_37 = makeCons(co->gc, _3512503_37, _3512505_37);
Obj _3512507_37 = makeCons(co->gc, __symbolTable[126], _3512506_37);
coraReturn(co, _3512507_37);
return;
}
}
}
}

static void clofun27(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512483_37 = PRIM_CDR(exp);
Obj _3512484_37 = PRIM_EQ(Nil, _3512483_37);
if (True == _3512484_37) {
Obj _3512485_37 = makeCons(co->gc, makeCString(co->gc, "no cond match"), Nil);
Obj _3512486_37 = makeCons(co->gc, __symbolTable[127], _3512485_37);
coraReturn(co, _3512486_37);
return;
} else {
R[1] = exp;
saveCont(co, clofun27, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
case 1:
{
Obj _3512490_37= co->res;
Obj _3512489_37 = R[1];
Obj _3512488_37 = R[2];
Obj _3512491_37 = makeCons(co->gc, __symbolTable[128], _3512490_37);
Obj _3512492_37 = makeCons(co->gc, _3512491_37, Nil);
Obj _3512493_37 = makeCons(co->gc, _3512489_37, _3512492_37);
Obj _3512494_37 = makeCons(co->gc, _3512488_37, _3512493_37);
Obj _3512495_37 = makeCons(co->gc, __symbolTable[126], _3512494_37);
coraReturn(co, _3512495_37);
return;
}
case 2:
{
Obj _3512489_37= co->res;
Obj exp = R[1];
Obj _3512488_37 = R[2];
R[1] = _3512489_37;
R[2] = _3512488_37;
saveCont(co, clofun27, 1, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj _3512487_37= co->res;
Obj exp = R[1];
Obj curr = _3512487_37;
Obj _3512488_37 = PRIM_CAR(curr);
R[1] = exp;
R[2] = _3512488_37;
saveCont(co, clofun27, 2, R);
coraCall1(co, globalRef(__symbolTable[160]), curr);
return;
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512481_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[130]), _3512481_37);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512469_37 = PRIM_CDR(exp);
R[1] = exp;
saveCont(co, clofun25, 4, R);
coraCall1(co, globalRef(__symbolTable[161]), _3512469_37);
return;
}
case 1:
{
Obj _3512475_37= co->res;
Obj _3512473_37 = R[1];
Obj _3512472_37 = R[2];
Obj _3512476_37 = makeCons(co->gc, _3512475_37, Nil);
Obj _3512477_37 = makeCons(co->gc, _3512473_37, _3512476_37);
Obj _3512478_37 = makeCons(co->gc, _3512472_37, _3512477_37);
Obj _3512479_37 = makeCons(co->gc, __symbolTable[129], _3512478_37);
coraReturn(co, _3512479_37);
return;
}
case 2:
{
Obj _3512474_37= co->res;
Obj _3512473_37 = R[1];
Obj _3512472_37 = R[2];
R[1] = _3512473_37;
R[2] = _3512472_37;
saveCont(co, clofun25, 1, R);
coraCall1(co, globalRef(__symbolTable[130]), _3512474_37);
return;
}
case 3:
{
Obj _3512473_37= co->res;
Obj exp = R[1];
Obj _3512472_37 = R[2];
R[1] = _3512473_37;
R[2] = _3512472_37;
saveCont(co, clofun25, 2, R);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 4:
{
Obj _3512470_37= co->res;
Obj exp = R[1];
if (True == _3512470_37) {
Obj _3512471_37 = PRIM_CAR(exp);
coraReturn(co, _3512471_37);
return;
} else {
Obj _3512472_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3512472_37;
saveCont(co, clofun25, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
}
}

static void clofun24(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512466_37 = PRIM_ISCONS(x);
Obj _3512467_37 = primNot(_3512466_37);
coraReturn(co, _3512467_37);
return;
}
}
}

static void clofun23(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj l = R[2];
Obj _3512461_37 = PRIM_ISCONS(l);
if (True == _3512461_37) {
Obj _3512462_37 = PRIM_CAR(l);
Obj _3512463_37 = PRIM_EQ(_3512462_37, x);
if (True == _3512463_37) {
coraReturn(co, True);
return;
} else {
Obj _3512464_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[132]), x, _3512464_37);
return;
}
} else {
coraReturn(co, False);
return;
}
}
}
}

static void clofun22(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun22, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512453_37= co->res;
Obj _3512452_37 = R[1];
Obj _3512451_37 = R[2];
Obj _3512454_37 = makeCons(co->gc, _3512453_37, Nil);
Obj _3512455_37 = makeCons(co->gc, _3512452_37, _3512454_37);
Obj _3512456_37 = makeCons(co->gc, __symbolTable[140], _3512455_37);
Obj _3512457_37 = makeCons(co->gc, _3512456_37, Nil);
Obj _3512458_37 = makeCons(co->gc, _3512451_37, _3512457_37);
Obj _3512459_37 = makeCons(co->gc, __symbolTable[133], _3512458_37);
coraReturn(co, _3512459_37);
return;
}
case 2:
{
Obj _3512452_37= co->res;
Obj exp = R[1];
Obj _3512451_37 = R[2];
R[1] = _3512452_37;
R[2] = _3512451_37;
saveCont(co, clofun22, 1, R);
coraCall1(co, globalRef(__symbolTable[155]), exp);
return;
}
case 3:
{
Obj _3512451_37= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = _3512451_37;
saveCont(co, clofun22, 2, R);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512449_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[153]), _3512449_37);
return;
}
}
}

static void clofun20(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
R[1] = exp;
saveCont(co, clofun20, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512441_37= co->res;
Obj _3512440_37 = R[1];
Obj _3512439_37 = R[2];
Obj _3512442_37 = makeCons(co->gc, _3512440_37, _3512441_37);
Obj _3512443_37 = makeCons(co->gc, __symbolTable[140], _3512442_37);
Obj _3512444_37 = makeCons(co->gc, _3512443_37, Nil);
Obj _3512445_37 = makeCons(co->gc, _3512439_37, _3512444_37);
Obj _3512446_37 = makeCons(co->gc, __symbolTable[144], _3512445_37);
coraReturn(co, _3512446_37);
return;
}
case 2:
{
Obj _3512440_37= co->res;
Obj exp = R[1];
Obj _3512439_37 = R[2];
R[1] = _3512440_37;
R[2] = _3512439_37;
saveCont(co, clofun20, 1, R);
coraCall1(co, globalRef(__symbolTable[154]), exp);
return;
}
case 3:
{
Obj _3512437_37= co->res;
Obj exp = R[1];
Obj _3512438_37 = makeCons(co->gc, _3512437_37, Nil);
Obj _3512439_37 = makeCons(co->gc, __symbolTable[139], _3512438_37);
R[1] = exp;
R[2] = _3512439_37;
saveCont(co, clofun20, 2, R);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512419_37 = PRIM_ISCONS(exp);
if (True == _3512419_37) {
Obj _3512420_37 = PRIM_CAR(exp);
Obj _3512421_37 = PRIM_EQ(_3512420_37, globalRef(__symbolTable[145]));
if (True == _3512421_37) {
Obj _3512422_37 = PRIM_CDR(exp);
coraReturn(co, _3512422_37);
return;
} else {
Obj _3512423_37 = PRIM_CAR(exp);
Obj _3512424_37 = PRIM_EQ(_3512423_37, __symbolTable[140]);
if (True == _3512424_37) {
R[1] = exp;
saveCont(co, clofun19, 3, R);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
} else {
Obj _3512431_37 = PRIM_CAR(exp);
Obj _3512432_37 = PRIM_EQ(_3512431_37, __symbolTable[139]);
if (True == _3512432_37) {
coraReturn(co, exp);
return;
} else {
R[1] = exp;
saveCont(co, clofun19, 4, R);
coraCall1(co, globalRef(__symbolTable[142]), exp);
return;
}
}
}
} else {
coraReturn(co, exp);
return;
}
}
case 1:
{
Obj _3512427_37= co->res;
Obj _3512425_37 = R[1];
Obj _3512428_37 = makeCons(co->gc, _3512427_37, Nil);
Obj _3512429_37 = makeCons(co->gc, _3512425_37, _3512428_37);
Obj _3512430_37 = makeCons(co->gc, __symbolTable[140], _3512429_37);
coraReturn(co, _3512430_37);
return;
}
case 2:
{
Obj _3512426_37= co->res;
Obj _3512425_37 = R[1];
R[1] = _3512425_37;
saveCont(co, clofun19, 1, R);
coraCall1(co, globalRef(__symbolTable[141]), _3512426_37);
return;
}
case 3:
{
Obj _3512425_37= co->res;
Obj exp = R[1];
R[1] = _3512425_37;
saveCont(co, clofun19, 2, R);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
case 4:
{
Obj _3512434_37= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun18, 1, 1, exp), _3512434_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj _3512433_37 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == _3512433_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[141]), exp1);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[141]), exp1);
return;
}
}
}
}

static void clofun17(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), exp, globalRef(__symbolTable[146]));
return;
}
}
}

static void clofun16(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj macros = R[2];
Obj _3512409_37 = PRIM_EQ(Nil, macros);
if (True == _3512409_37) {
coraReturn(co, exp);
return;
} else {
Obj _3512416_37 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative(co->gc, 2, clofun15, 1, 2, macros, exp), _3512416_37);
return;
}
}
}
}

static void clofun15(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj item = R[1];
Obj _3512337_37 = makeNative(co->gc, 2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3512412_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3512412_37) {
Obj _3512413_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512414_37 = PRIM_CAR(item);
Obj _3512415_37 = PRIM_EQ(_3512413_37, _3512414_37);
if (True == _3512415_37) {
co->ctx.sp = R;
coraCall1(co, _3512337_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512337_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512337_37, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512338_37 = R[1];
if (True == _3512338_37) {
Obj _3512410_37 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, _3512410_37, closureRef(R[0], 1));
return;
} else {
Obj _3512411_37 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), closureRef(R[0], 1), _3512411_37);
return;
}
}
}
}

static void clofun13(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj v = R[2];
Obj _3512405_37 = makeCons(co->gc, n, v);
Obj _3512406_37 = makeCons(co->gc, _3512405_37, globalRef(__symbolTable[146]));
Obj _3512407_37 = primSet(co, __symbolTable[146], _3512406_37);
coraReturn(co, _3512407_37);
return;
}
}
}

static void clofun12(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj f = R[1];
Obj l = R[2];
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), Nil, f, l);
return;
}
}
}

static void clofun11(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj f = R[2];
Obj l = R[3];
Obj _3512395_37 = PRIM_ISCONS(l);
if (True == _3512395_37) {
Obj _3512396_37 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
saveCont(co, clofun11, 1, R);
coraCall1(co, f, _3512396_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj _3512397_37= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj _3512398_37 = makeCons(co->gc, _3512397_37, res);
Obj _3512399_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), _3512398_37, f, _3512399_37);
return;
}
}
}

static void clofun10(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj res = R[1];
Obj l = R[2];
Obj _3512388_37 = PRIM_ISCONS(l);
if (True == _3512388_37) {
Obj _3512389_37 = PRIM_CAR(l);
Obj _3512390_37 = makeCons(co->gc, _3512389_37, res);
Obj _3512391_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[150]), _3512390_37, _3512391_37);
return;
} else {
coraReturn(co, res);
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
Obj _3512386_37 = PRIM_ISCONS(x);
coraReturn(co, _3512386_37);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512378_37 = PRIM_ISCONS(exp);
if (True == _3512378_37) {
Obj _3512379_37 = PRIM_CAR(exp);
Obj _3512380_37 = PRIM_CDR(exp);
R[1] = _3512379_37;
saveCont(co, clofun8, 1, R);
coraCall1(co, globalRef(__symbolTable[153]), _3512380_37);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj _3512381_37= co->res;
Obj _3512379_37 = R[1];
Obj _3512382_37 = makeCons(co->gc, _3512381_37, Nil);
Obj _3512383_37 = makeCons(co->gc, _3512379_37, _3512382_37);
Obj _3512384_37 = makeCons(co->gc, __symbolTable[152], _3512383_37);
coraReturn(co, _3512384_37);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512374_37 = PRIM_CDR(x);
Obj _3512375_37 = PRIM_CDR(_3512374_37);
Obj _3512376_37 = PRIM_CDR(_3512375_37);
coraReturn(co, _3512376_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512369_37 = PRIM_CDR(x);
Obj _3512370_37 = PRIM_CDR(_3512369_37);
Obj _3512371_37 = PRIM_CDR(_3512370_37);
Obj _3512372_37 = PRIM_CAR(_3512371_37);
coraReturn(co, _3512372_37);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512365_37 = PRIM_CDR(x);
Obj _3512366_37 = PRIM_CDR(_3512365_37);
Obj _3512367_37 = PRIM_CAR(_3512366_37);
coraReturn(co, _3512367_37);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512362_37 = PRIM_CDR(x);
Obj _3512363_37 = PRIM_CDR(_3512362_37);
coraReturn(co, _3512363_37);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512359_37 = PRIM_CAR(x);
Obj _3512360_37 = PRIM_CDR(_3512359_37);
coraReturn(co, _3512360_37);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512356_37 = PRIM_CAR(x);
Obj _3512357_37 = PRIM_CAR(_3512356_37);
coraReturn(co, _3512357_37);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512353_37 = PRIM_CDR(x);
Obj _3512354_37 = PRIM_CAR(_3512353_37);
coraReturn(co, _3512354_37);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512351_37 = PRIM_EQ(x, Nil);
coraReturn(co, _3512351_37);
return;
}
}
}

