#include "types.h"
#include "runtime1.h"

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
Obj _3512865_37 = primSet(co, __symbolTable[161], makeNative1(2, clofun0, 1, 0));
Obj _3512868_37 = primSet(co, __symbolTable[160], makeNative1(2, clofun1, 1, 0));
Obj _3512871_37 = primSet(co, __symbolTable[159], makeNative1(2, clofun2, 1, 0));
Obj _3512874_37 = primSet(co, __symbolTable[158], makeNative1(2, clofun3, 1, 0));
Obj _3512877_37 = primSet(co, __symbolTable[157], makeNative1(2, clofun4, 1, 0));
Obj _3512881_37 = primSet(co, __symbolTable[156], makeNative1(2, clofun5, 1, 0));
Obj _3512886_37 = primSet(co, __symbolTable[155], makeNative1(2, clofun6, 1, 0));
Obj _3512890_37 = primSet(co, __symbolTable[154], makeNative1(2, clofun7, 1, 0));
Obj _3512898_37 = primSet(co, __symbolTable[153], makeNative1(2, clofun8, 1, 0));
Obj _3512900_37 = primSet(co, __symbolTable[151], makeNative1(2, clofun9, 1, 0));
Obj _3512905_37 = primSet(co, __symbolTable[150], makeNative1(3, clofun10, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 15,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[150]), Nil);
return;
}
case 1:
{
Obj _3513385_37= co->res;
Obj _3513391_37 = primSet(co, __symbolTable[76], makeNative1(3, clofun80, 2, 0));
Obj _3513403_37 = primSet(co, __symbolTable[71], makeNative1(5, clofun81, 3, 0));
Obj _3513404_37 = makeCons(makeCString("primSet"), Nil);
Obj _3513405_37 = makeCons(MAKE_NUMBER(2), _3513404_37);
Obj _3513406_37 = makeCons(__symbolTable[68], _3513405_37);
Obj _3513407_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3513408_37 = makeCons(MAKE_NUMBER(1), _3513407_37);
Obj _3513409_37 = makeCons(__symbolTable[115], _3513408_37);
Obj _3513410_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3513411_37 = makeCons(MAKE_NUMBER(1), _3513410_37);
Obj _3513412_37 = makeCons(__symbolTable[114], _3513411_37);
Obj _3513413_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3513414_37 = makeCons(MAKE_NUMBER(2), _3513413_37);
Obj _3513415_37 = makeCons(__symbolTable[152], _3513414_37);
Obj _3513416_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3513417_37 = makeCons(MAKE_NUMBER(1), _3513416_37);
Obj _3513418_37 = makeCons(__symbolTable[116], _3513417_37);
Obj _3513419_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3513420_37 = makeCons(MAKE_NUMBER(2), _3513419_37);
Obj _3513421_37 = makeCons(__symbolTable[67], _3513420_37);
Obj _3513422_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3513423_37 = makeCons(MAKE_NUMBER(2), _3513422_37);
Obj _3513424_37 = makeCons(__symbolTable[66], _3513423_37);
Obj _3513425_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3513426_37 = makeCons(MAKE_NUMBER(2), _3513425_37);
Obj _3513427_37 = makeCons(__symbolTable[65], _3513426_37);
Obj _3513428_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3513429_37 = makeCons(MAKE_NUMBER(2), _3513428_37);
Obj _3513430_37 = makeCons(__symbolTable[64], _3513429_37);
Obj _3513431_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3513432_37 = makeCons(MAKE_NUMBER(2), _3513431_37);
Obj _3513433_37 = makeCons(__symbolTable[113], _3513432_37);
Obj _3513434_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3513435_37 = makeCons(MAKE_NUMBER(2), _3513434_37);
Obj _3513436_37 = makeCons(__symbolTable[63], _3513435_37);
Obj _3513437_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3513438_37 = makeCons(MAKE_NUMBER(2), _3513437_37);
Obj _3513439_37 = makeCons(__symbolTable[62], _3513438_37);
Obj _3513440_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3513441_37 = makeCons(MAKE_NUMBER(0), _3513440_37);
Obj _3513442_37 = makeCons(__symbolTable[61], _3513441_37);
Obj _3513443_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3513444_37 = makeCons(MAKE_NUMBER(1), _3513443_37);
Obj _3513445_37 = makeCons(__symbolTable[60], _3513444_37);
Obj _3513446_37 = makeCons(makeCString("primNot"), Nil);
Obj _3513447_37 = makeCons(MAKE_NUMBER(1), _3513446_37);
Obj _3513448_37 = makeCons(__symbolTable[59], _3513447_37);
Obj _3513449_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3513450_37 = makeCons(MAKE_NUMBER(1), _3513449_37);
Obj _3513451_37 = makeCons(__symbolTable[58], _3513450_37);
Obj _3513452_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3513453_37 = makeCons(MAKE_NUMBER(1), _3513452_37);
Obj _3513454_37 = makeCons(__symbolTable[57], _3513453_37);
Obj _3513455_37 = makeCons(_3513454_37, Nil);
Obj _3513456_37 = makeCons(_3513451_37, _3513455_37);
Obj _3513457_37 = makeCons(_3513448_37, _3513456_37);
Obj _3513458_37 = makeCons(_3513445_37, _3513457_37);
Obj _3513459_37 = makeCons(_3513442_37, _3513458_37);
Obj _3513460_37 = makeCons(_3513439_37, _3513459_37);
Obj _3513461_37 = makeCons(_3513436_37, _3513460_37);
Obj _3513462_37 = makeCons(_3513433_37, _3513461_37);
Obj _3513463_37 = makeCons(_3513430_37, _3513462_37);
Obj _3513464_37 = makeCons(_3513427_37, _3513463_37);
Obj _3513465_37 = makeCons(_3513424_37, _3513464_37);
Obj _3513466_37 = makeCons(_3513421_37, _3513465_37);
Obj _3513467_37 = makeCons(_3513418_37, _3513466_37);
Obj _3513468_37 = makeCons(_3513415_37, _3513467_37);
Obj _3513469_37 = makeCons(_3513412_37, _3513468_37);
Obj _3513470_37 = makeCons(_3513409_37, _3513469_37);
Obj _3513471_37 = makeCons(_3513406_37, _3513470_37);
Obj _3513472_37 = primSet(co, __symbolTable[69], _3513471_37);
Obj _3513487_37 = primSet(co, __symbolTable[56], makeNative1(3, clofun83, 2, 0));
Obj _3513491_37 = primSet(co, __symbolTable[55], makeNative1(2, clofun84, 1, 0));
Obj _3513669_37 = primSet(co, __symbolTable[93], makeNative1(5, clofun94, 4, 0));
Obj _3513670_37 = makeCons(__symbolTable[98], Nil);
Obj _3513671_37 = makeCons(__symbolTable[99], _3513670_37);
Obj _3513672_37 = makeCons(__symbolTable[101], _3513671_37);
Obj _3513673_37 = makeCons(__symbolTable[132], _3513672_37);
Obj _3513674_37 = makeCons(__symbolTable[138], _3513673_37);
Obj _3513675_37 = makeCons(__symbolTable[147], _3513674_37);
Obj _3513676_37 = makeCons(__symbolTable[149], _3513675_37);
Obj _3513677_37 = makeCons(__symbolTable[39], _3513676_37);
Obj _3513678_37 = makeCons(__symbolTable[40], _3513677_37);
Obj _3513679_37 = makeCons(__symbolTable[41], _3513678_37);
Obj _3513680_37 = makeCons(__symbolTable[81], _3513679_37);
Obj _3513681_37 = makeCons(__symbolTable[42], _3513680_37);
Obj _3513682_37 = makeCons(__symbolTable[43], _3513681_37);
Obj _3513683_37 = makeCons(__symbolTable[70], _3513682_37);
Obj _3513684_37 = makeCons(__symbolTable[44], _3513683_37);
Obj _3513685_37 = makeCons(__symbolTable[45], _3513684_37);
Obj _3513686_37 = makeCons(__symbolTable[46], _3513685_37);
Obj _3513687_37 = makeCons(__symbolTable[47], _3513686_37);
Obj _3513688_37 = makeCons(__symbolTable[48], _3513687_37);
Obj _3513689_37 = makeCons(__symbolTable[49], _3513688_37);
Obj _3513690_37 = makeCons(__symbolTable[50], _3513689_37);
Obj _3513691_37 = makeCons(__symbolTable[51], _3513690_37);
Obj _3513692_37 = makeCons(__symbolTable[52], _3513691_37);
Obj _3513693_37 = makeCons(__symbolTable[72], _3513692_37);
Obj _3513694_37 = makeCons(__symbolTable[74], _3513693_37);
Obj _3513695_37 = makeCons(__symbolTable[73], _3513694_37);
Obj _3513696_37 = makeCons(__symbolTable[161], _3513695_37);
Obj _3513697_37 = makeCons(__symbolTable[54], _3513696_37);
Obj _3513698_37 = makeCons(__symbolTable[121], _3513697_37);
Obj _3513699_37 = makeCons(__symbolTable[131], _3513698_37);
Obj _3513700_37 = makeCons(__symbolTable[151], _3513699_37);
Obj _3513701_37 = makeCons(__symbolTable[154], _3513700_37);
Obj _3513702_37 = makeCons(__symbolTable[155], _3513701_37);
Obj _3513703_37 = makeCons(__symbolTable[156], _3513702_37);
Obj _3513704_37 = makeCons(__symbolTable[157], _3513703_37);
Obj _3513705_37 = makeCons(__symbolTable[158], _3513704_37);
Obj _3513706_37 = makeCons(__symbolTable[159], _3513705_37);
Obj _3513707_37 = makeCons(__symbolTable[160], _3513706_37);
Obj _3513708_37 = primSet(co, __symbolTable[53], _3513707_37);
Obj _3513709_37 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj _3513710_37 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj _3513711_37 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj _3513712_37 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj _3513713_37 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj _3513714_37 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj _3513715_37 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj _3513716_37 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj _3513717_37 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj _3513718_37 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj _3513719_37 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj _3513720_37 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj _3513721_37 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj _3513722_37 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj _3513723_37 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj _3513724_37 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj _3513725_37 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj _3513726_37 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj _3513727_37 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj _3513728_37 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj _3513729_37 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj _3513730_37 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj _3513731_37 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj _3513732_37 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj _3513733_37 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj _3513734_37 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj _3513735_37 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj _3513736_37 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj _3513737_37 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj _3513738_37 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj _3513739_37 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj _3513740_37 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj _3513741_37 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj _3513742_37 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj _3513743_37 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj _3513744_37 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj _3513745_37 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj _3513746_37 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj _3513747_37 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
coraReturn(co, _3513747_37);
return;
}
case 2:
{
Obj _3513335_37= co->res;
Obj _3513364_37 = primSet(co, __symbolTable[83], makeNative1(5, clofun75, 4, 0));
Obj _3513365_37 = primSet(co, __symbolTable[80], makeNative1(3, clofun76, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[79], makeNative1(2, clofun79, 1, 0));
return;
}
case 3:
{
Obj _3513318_37= co->res;
Obj _3513332_37 = primSet(co, __symbolTable[85], makeNative1(3, clofun71, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[84], makeNative1(2, clofun72, 1, 0));
return;
}
case 4:
{
Obj _3513296_37= co->res;
Obj _3513316_37 = primSet(co, __symbolTable[88], makeNative1(2, clofun69, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[86], makeNative1(2, clofun70, 1, 0));
return;
}
case 5:
{
Obj _3513265_37= co->res;
Obj _3513266_37 = primSet(co, __symbolTable[94], makeNative1(2, clofun61, 1, 0));
Obj _3513267_37 = primSet(co, __symbolTable[92], makeNative1(2, clofun62, 1, 0));
Obj _3513270_37 = primSet(co, __symbolTable[138], makeNative1(2, clofun63, 1, 0));
Obj _3513294_37 = primSet(co, __symbolTable[91], makeNative1(2, clofun66, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[89], makeNative1(2, clofun67, 1, 0));
return;
}
case 6:
{
Obj _3513157_37= co->res;
Obj _3513209_37 = primSet(co, __symbolTable[106], makeNative1(5, clofun48, 3, 0));
Obj _3513210_37 = primSet(co, __symbolTable[104], makeNative1(2, clofun49, 1, 0));
Obj _3513215_37 = primSet(co, __symbolTable[103], makeNative1(3, clofun50, 2, 0));
Obj _3513219_37 = primSet(co, __symbolTable[102], makeNative1(3, clofun51, 2, 0));
Obj _3513220_37 = primSet(co, __symbolTable[101], makeNative1(2, clofun52, 1, 0));
Obj _3513228_37 = primSet(co, __symbolTable[100], makeNative1(4, clofun53, 3, 0));
Obj _3513229_37 = primSet(co, __symbolTable[99], makeNative1(3, clofun54, 2, 0));
Obj _3513235_37 = primSet(co, __symbolTable[98], makeNative1(3, clofun55, 2, 0));
Obj _3513246_37 = primSet(co, __symbolTable[97], makeNative1(2, clofun58, 1, 0));
Obj _3513252_37 = primSet(co, __symbolTable[96], makeNative1(2, clofun59, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[95], makeNative1(3, clofun60, 1, 0));
return;
}
case 7:
{
Obj _3513052_37= co->res;
Obj _3513074_37 = primSet(co, __symbolTable[118], makeNative1(5, clofun36, 4, 0));
Obj _3513107_37 = primSet(co, __symbolTable[117], makeNative1(5, clofun38, 4, 0));
Obj _3513120_37 = primSet(co, __symbolTable[111], makeNative1(3, clofun40, 2, 0));
Obj _3513142_37 = primSet(co, __symbolTable[109], makeNative1(3, clofun42, 2, 0));
Obj _3513156_37 = primSet(co, __symbolTable[108], makeNative1(2, clofun44, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[107], makeNative1(2, clofun45, 1, 0));
return;
}
case 8:
{
Obj _3513037_37= co->res;
Obj _3513040_37 = primSet(co, __symbolTable[121], makeNative1(2, clofun32, 1, 0));
Obj _3513050_37 = primSet(co, __symbolTable[120], makeNative1(2, clofun33, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[119], makeNative1(2, clofun34, 1, 0));
return;
}
case 9:
{
Obj _3513023_37= co->res;
Obj _3513035_37 = primSet(co, __symbolTable[123], makeNative1(2, clofun30, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 8,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[122], makeNative1(2, clofun31, 1, 0));
return;
}
case 10:
{
Obj _3513009_37= co->res;
Obj _3513021_37 = primSet(co, __symbolTable[125], makeNative1(2, clofun28, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[124], makeNative1(2, clofun29, 1, 0));
return;
}
case 11:
{
Obj _3512995_37= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[128], makeNative1(3, clofun27, 1, 0));
return;
}
case 12:
{
Obj _3512973_37= co->res;
Obj _3512978_37 = primSet(co, __symbolTable[132], makeNative1(3, clofun23, 2, 0));
Obj _3512981_37 = primSet(co, __symbolTable[131], makeNative1(2, clofun24, 1, 0));
Obj _3512993_37 = primSet(co, __symbolTable[130], makeNative1(3, clofun25, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[129], makeNative1(2, clofun26, 1, 0));
return;
}
case 13:
{
Obj _3512963_37= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[134], makeNative1(3, clofun22, 1, 0));
return;
}
case 14:
{
Obj _3512961_37= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[135], makeNative1(2, clofun21, 1, 0));
return;
}
case 15:
{
Obj _3512906_37= co->res;
Obj _3512907_37 = primSet(co, __symbolTable[149], _3512906_37);
Obj _3512913_37 = primSet(co, __symbolTable[148], makeNative1(4, clofun11, 3, 0));
Obj _3512914_37 = primSet(co, __symbolTable[147], makeNative1(3, clofun12, 2, 0));
Obj _3512915_37 = primSet(co, __symbolTable[146], Nil);
Obj _3512916_37 = primGenSym();
Obj _3512917_37 = primSet(co, __symbolTable[145], _3512916_37);
Obj _3512921_37 = primSet(co, __symbolTable[144], makeNative1(3, clofun13, 2, 0));
Obj _3512930_37 = primSet(co, __symbolTable[143], makeNative1(3, clofun16, 2, 0));
Obj _3512931_37 = primSet(co, __symbolTable[142], makeNative1(2, clofun17, 1, 0));
Obj _3512948_37 = primSet(co, __symbolTable[141], makeNative1(2, clofun19, 1, 0));
Obj _3512949_37 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj _3512960_37 = primSet(co, __symbolTable[137], makeNative1(3, clofun20, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 14,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512836_37 = R[1];
Obj _3512837_37 = R[2];
Obj _3512838_37 = R[3];
Obj _3512839_37 = R[4];
Obj _3512860_37 = makeNative1(2, clofun93, 1, 4, _3512836_37, _3512837_37, _3512838_37, _3512839_37);
R[1] = _3512839_37;
R[2] = _3512860_37;
struct frame1 __curr = {
.fn = clofun94,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[54]), _3512839_37);
return;
}
case 1:
{
Obj _3513668_37= co->res;
Obj _3512860_37 = R[1];
if (True == _3513668_37) {
co->ctx.sp = R;
coraCall1(co, _3512860_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512860_37, False);
return;
}
}
case 2:
{
Obj _3513667_37= co->res;
Obj _3512839_37 = R[1];
Obj _3512860_37 = R[2];
if (True == _3513667_37) {
co->ctx.sp = R;
coraCall1(co, _3512860_37, True);
return;
} else {
R[1] = _3512860_37;
struct frame1 __curr = {
.fn = clofun94,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), _3512839_37);
return;
}
}
case 3:
{
Obj _3513665_37= co->res;
Obj _3512839_37 = R[1];
Obj _3512860_37 = R[2];
if (True == _3513665_37) {
co->ctx.sp = R;
coraCall1(co, _3512860_37, True);
return;
} else {
Obj _3513666_37 = primIsString(_3512839_37);
if (True == _3513666_37) {
co->ctx.sp = R;
coraCall1(co, _3512860_37, True);
return;
} else {
R[1] = _3512839_37;
R[2] = _3512860_37;
struct frame1 __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[121]), _3512839_37);
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
Obj _3512861_37 = R[1];
if (True == _3512861_37) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj _3512841_37 = makeNative1(3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3513653_37 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == _3513653_37) {
Obj _3513654_37 = PRIM_CAR(closureRef(R[0], 3));
Obj _3513655_37 = PRIM_EQ(__symbolTable[139], _3513654_37);
if (True == _3513655_37) {
Obj _3513656_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513657_37 = PRIM_ISCONS(_3513656_37);
if (True == _3513657_37) {
Obj _3513658_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513659_37 = PRIM_CAR(_3513658_37);
Obj x = _3513659_37;
Obj _3513660_37 = PRIM_CDR(closureRef(R[0], 3));
Obj _3513661_37 = PRIM_CDR(_3513660_37);
Obj _3513662_37 = PRIM_EQ(Nil, _3513661_37);
if (True == _3513662_37) {
Obj _3513663_37 = makeCons(x, Nil);
Obj _3513664_37 = makeCons(__symbolTable[139], _3513663_37);
coraReturn(co, _3513664_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512841_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512841_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512841_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512841_37);
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
Obj _3513492_37 = primIsSymbol(closureRef(R[0], 0));
if (True == _3513492_37) {
struct frame1 __curr = {
.fn = clofun92,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[132]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj _3512843_37 = makeNative1(3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513631_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513631_37) {
Obj _3513632_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513633_37 = PRIM_EQ(__symbolTable[140], _3513632_37);
if (True == _3513633_37) {
Obj _3513634_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513635_37 = PRIM_ISCONS(_3513634_37);
if (True == _3513635_37) {
Obj _3513636_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513637_37 = PRIM_CAR(_3513636_37);
Obj args = _3513637_37;
Obj _3513638_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513639_37 = PRIM_CDR(_3513638_37);
Obj _3513640_37 = PRIM_ISCONS(_3513639_37);
if (True == _3513640_37) {
Obj _3513641_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513642_37 = PRIM_CDR(_3513641_37);
Obj _3513643_37 = PRIM_CAR(_3513642_37);
Obj body = _3513643_37;
Obj _3513644_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513645_37 = PRIM_CDR(_3513644_37);
Obj _3513646_37 = PRIM_CDR(_3513645_37);
Obj _3513647_37 = PRIM_EQ(Nil, _3513646_37);
if (True == _3513647_37) {
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512843_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512843_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512843_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512843_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512843_37);
return;
}
}
}
case 1:
{
Obj _3513494_37= co->res;
if (True == _3513494_37) {
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
Obj _3513493_37= co->res;
if (True == _3513493_37) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
struct frame1 __curr = {
.fn = clofun92,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[55]), closureRef(R[0], 0));
return;
}
}
case 3:
{
Obj _3513649_37= co->res;
Obj args = R[1];
Obj _3513650_37 = makeCons(_3513649_37, Nil);
Obj _3513651_37 = makeCons(args, _3513650_37);
Obj _3513652_37 = makeCons(__symbolTable[140], _3513651_37);
coraReturn(co, _3513652_37);
return;
}
case 4:
{
Obj _3513648_37= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), _3513648_37, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512844_37 = makeNative1(1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513587_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513587_37) {
Obj _3513588_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513589_37 = PRIM_EQ(__symbolTable[90], _3513588_37);
if (True == _3513589_37) {
Obj _3513590_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513591_37 = PRIM_ISCONS(_3513590_37);
if (True == _3513591_37) {
Obj _3513592_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513593_37 = PRIM_CAR(_3513592_37);
Obj _3513594_37 = PRIM_ISCONS(_3513593_37);
if (True == _3513594_37) {
Obj _3513595_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513596_37 = PRIM_CAR(_3513595_37);
Obj _3513597_37 = PRIM_CAR(_3513596_37);
Obj _3513598_37 = PRIM_EQ(__symbolTable[81], _3513597_37);
if (True == _3513598_37) {
Obj _3513599_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513600_37 = PRIM_CAR(_3513599_37);
Obj _3513601_37 = PRIM_CDR(_3513600_37);
Obj _3513602_37 = PRIM_ISCONS(_3513601_37);
if (True == _3513602_37) {
Obj _3513603_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513604_37 = PRIM_CAR(_3513603_37);
Obj _3513605_37 = PRIM_CDR(_3513604_37);
Obj _3513606_37 = PRIM_CAR(_3513605_37);
Obj pkg = _3513606_37;
Obj _3513607_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513608_37 = PRIM_CAR(_3513607_37);
Obj _3513609_37 = PRIM_CDR(_3513608_37);
Obj _3513610_37 = PRIM_CDR(_3513609_37);
Obj _3513611_37 = PRIM_EQ(Nil, _3513610_37);
if (True == _3513611_37) {
Obj _3513612_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513613_37 = PRIM_CDR(_3513612_37);
Obj _3513614_37 = PRIM_ISCONS(_3513613_37);
if (True == _3513614_37) {
Obj _3513615_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513616_37 = PRIM_CDR(_3513615_37);
Obj _3513617_37 = PRIM_CAR(_3513616_37);
Obj y = _3513617_37;
Obj _3513618_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513619_37 = PRIM_CDR(_3513618_37);
Obj _3513620_37 = PRIM_CDR(_3513619_37);
Obj _3513621_37 = PRIM_EQ(Nil, _3513620_37);
if (True == _3513621_37) {
Obj _3513622_37 = primIsString(pkg);
if (True == _3513622_37) {
Obj _3513623_37 = makeCons(pkg, Nil);
Obj _3513624_37 = makeCons(__symbolTable[81], _3513623_37);
R[1] = pkg;
R[2] = y;
struct frame1 __curr = {
.fn = clofun91,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), _3513624_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512844_37);
return;
}
}
case 1:
{
Obj _3513627_37= co->res;
Obj _3513625_37 = R[1];
Obj _3513628_37 = makeCons(_3513627_37, Nil);
Obj _3513629_37 = makeCons(_3513625_37, _3513628_37);
Obj _3513630_37 = makeCons(__symbolTable[90], _3513629_37);
coraReturn(co, _3513630_37);
return;
}
case 2:
{
Obj _3513625_37= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj _3513626_37 = makeCons(pkg, closureRef(R[0], 3));
R[1] = _3513625_37;
struct frame1 __curr = {
.fn = clofun91,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), _3513626_37, y);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512845_37 = makeNative1(3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj _3513579_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513579_37) {
Obj _3513580_37 = PRIM_CAR(closureRef(R[0], 0));
Obj op = _3513580_37;
Obj _3513581_37 = PRIM_CDR(closureRef(R[0], 0));
Obj args = _3513581_37;
Obj _3512862_37 = makeNative1(2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, _3512845_37);
Obj _3513585_37 = PRIM_EQ(op, __symbolTable[126]);
if (True == _3513585_37) {
co->ctx.sp = R;
coraCall1(co, _3512862_37, True);
return;
} else {
Obj _3513586_37 = PRIM_EQ(op, __symbolTable[90]);
if (True == _3513586_37) {
co->ctx.sp = R;
coraCall1(co, _3512862_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512862_37, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512845_37);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512863_37 = R[1];
if (True == _3512863_37) {
struct frame1 __curr = {
.fn = clofun89,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3513583_37= co->res;
Obj _3513584_37 = makeCons(closureRef(R[0], 0), _3513583_37);
coraReturn(co, _3513584_37);
return;
}
case 2:
{
Obj _3513582_37= co->res;
struct frame1 __curr = {
.fn = clofun89,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), _3513582_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512846_37 = makeNative1(1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513546_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513546_37) {
Obj _3513547_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513548_37 = PRIM_EQ(__symbolTable[129], _3513547_37);
if (True == _3513548_37) {
Obj _3513549_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513550_37 = PRIM_ISCONS(_3513549_37);
if (True == _3513550_37) {
Obj _3513551_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513552_37 = PRIM_CAR(_3513551_37);
Obj a = _3513552_37;
Obj _3513553_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513554_37 = PRIM_CDR(_3513553_37);
Obj _3513555_37 = PRIM_ISCONS(_3513554_37);
if (True == _3513555_37) {
Obj _3513556_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513557_37 = PRIM_CDR(_3513556_37);
Obj _3513558_37 = PRIM_CAR(_3513557_37);
Obj b = _3513558_37;
Obj _3513559_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513560_37 = PRIM_CDR(_3513559_37);
Obj _3513561_37 = PRIM_CDR(_3513560_37);
Obj _3513562_37 = PRIM_ISCONS(_3513561_37);
if (True == _3513562_37) {
Obj _3513563_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513564_37 = PRIM_CDR(_3513563_37);
Obj _3513565_37 = PRIM_CDR(_3513564_37);
Obj _3513566_37 = PRIM_CAR(_3513565_37);
Obj c = _3513566_37;
Obj _3513567_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513568_37 = PRIM_CDR(_3513567_37);
Obj _3513569_37 = PRIM_CDR(_3513568_37);
Obj _3513570_37 = PRIM_CDR(_3513569_37);
Obj _3513571_37 = PRIM_EQ(Nil, _3513570_37);
if (True == _3513571_37) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
.fn = clofun88,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512846_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512846_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512846_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512846_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512846_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512846_37);
return;
}
}
case 1:
{
Obj _3513574_37= co->res;
Obj _3513572_37 = R[1];
Obj a = R[2];
Obj _3513575_37 = makeCons(_3513574_37, Nil);
Obj _3513576_37 = makeCons(_3513572_37, _3513575_37);
Obj _3513577_37 = makeCons(a, _3513576_37);
Obj _3513578_37 = makeCons(__symbolTable[129], _3513577_37);
coraReturn(co, _3513578_37);
return;
}
case 2:
{
Obj _3513572_37= co->res;
Obj c = R[1];
Obj a = R[2];
Obj _3513573_37 = makeCons(a, closureRef(R[0], 1));
R[1] = _3513572_37;
R[2] = a;
struct frame1 __curr = {
.fn = clofun88,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), _3513573_37, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512847_37 = makeNative1(2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513520_37 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == _3513520_37) {
Obj _3513521_37 = PRIM_CAR(closureRef(R[0], 2));
Obj _3513522_37 = PRIM_EQ(__symbolTable[78], _3513521_37);
if (True == _3513522_37) {
Obj _3513523_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513524_37 = PRIM_ISCONS(_3513523_37);
if (True == _3513524_37) {
Obj _3513525_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513526_37 = PRIM_CAR(_3513525_37);
Obj path = _3513526_37;
Obj _3513527_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513528_37 = PRIM_CDR(_3513527_37);
Obj _3513529_37 = PRIM_ISCONS(_3513528_37);
if (True == _3513529_37) {
Obj _3513530_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513531_37 = PRIM_CDR(_3513530_37);
Obj _3513532_37 = PRIM_CAR(_3513531_37);
Obj import = _3513532_37;
Obj _3513533_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513534_37 = PRIM_CDR(_3513533_37);
Obj _3513535_37 = PRIM_CDR(_3513534_37);
Obj _3513536_37 = PRIM_ISCONS(_3513535_37);
if (True == _3513536_37) {
Obj _3513537_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513538_37 = PRIM_CDR(_3513537_37);
Obj _3513539_37 = PRIM_CDR(_3513538_37);
Obj _3513540_37 = PRIM_CAR(_3513539_37);
Obj body = _3513540_37;
Obj _3513541_37 = PRIM_CDR(closureRef(R[0], 2));
Obj _3513542_37 = PRIM_CDR(_3513541_37);
Obj _3513543_37 = PRIM_CDR(_3513542_37);
Obj _3513544_37 = PRIM_CDR(_3513543_37);
Obj _3513545_37 = PRIM_EQ(Nil, _3513544_37);
if (True == _3513545_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512847_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512847_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512847_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512847_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512847_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512847_37);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512848_37 = makeNative1(1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj _3513496_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513496_37) {
Obj _3513497_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513498_37 = PRIM_EQ(__symbolTable[133], _3513497_37);
if (True == _3513498_37) {
Obj _3513499_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513500_37 = PRIM_ISCONS(_3513499_37);
if (True == _3513500_37) {
Obj _3513501_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513502_37 = PRIM_CAR(_3513501_37);
Obj var = _3513502_37;
Obj _3513503_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513504_37 = PRIM_CDR(_3513503_37);
Obj _3513505_37 = PRIM_ISCONS(_3513504_37);
if (True == _3513505_37) {
Obj _3513506_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513507_37 = PRIM_CDR(_3513506_37);
Obj _3513508_37 = PRIM_CAR(_3513507_37);
Obj val = _3513508_37;
Obj _3513509_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513510_37 = PRIM_CDR(_3513509_37);
Obj _3513511_37 = PRIM_CDR(_3513510_37);
Obj _3513512_37 = PRIM_EQ(Nil, _3513511_37);
if (True == _3513512_37) {
R[1] = val;
struct frame1 __curr = {
.fn = clofun86,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[76]), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512848_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512848_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512848_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512848_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512848_37);
return;
}
}
case 1:
{
Obj _3513516_37= co->res;
Obj _3513515_37 = R[1];
Obj _3513517_37 = makeCons(_3513516_37, Nil);
Obj _3513518_37 = makeCons(_3513515_37, _3513517_37);
Obj _3513519_37 = makeCons(__symbolTable[68], _3513518_37);
coraReturn(co, _3513519_37);
return;
}
case 2:
{
Obj _3513513_37= co->res;
Obj val = R[1];
Obj var1 = _3513513_37;
Obj _3513514_37 = makeCons(var1, Nil);
Obj _3513515_37 = makeCons(__symbolTable[139], _3513514_37);
R[1] = _3513515_37;
struct frame1 __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[93]), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), val);
return;
}
}
}

static void clofun85(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
.fn = clofun85,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall3(co, globalRef(__symbolTable[93]), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
return;
}
case 1:
{
Obj _3513495_37= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), _3513495_37, closureRef(R[0], 3));
return;
}
}
}

static void clofun84(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
struct frame1 __curr = {
.fn = clofun84,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), x, globalRef(__symbolTable[69]));
return;
}
case 1:
{
Obj _3513489_37= co->res;
Obj _3513490_37 = primNot(_3513489_37);
coraReturn(co, _3513490_37);
return;
}
case 2:
{
Obj _3513488_37= co->res;
struct frame1 __curr = {
.fn = clofun84,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), _3513488_37);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512831_37 = R[1];
Obj _3512832_37 = R[2];
Obj _3513473_37 = PRIM_EQ(Nil, _3512832_37);
if (True == _3513473_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3512834_37 = makeNative1(1, clofun82, 0, 2, _3512832_37, _3512831_37);
Obj _3513477_37 = PRIM_ISCONS(_3512832_37);
if (True == _3513477_37) {
Obj _3513478_37 = PRIM_CAR(_3512832_37);
Obj _3513479_37 = PRIM_ISCONS(_3513478_37);
if (True == _3513479_37) {
Obj _3513480_37 = PRIM_CAR(_3512832_37);
Obj _3513481_37 = PRIM_CAR(_3513480_37);
Obj x = _3513481_37;
Obj _3513482_37 = PRIM_CAR(_3512832_37);
Obj _3513483_37 = PRIM_CDR(_3513482_37);
Obj y = _3513483_37;
Obj _3513484_37 = PRIM_CDR(_3512832_37);
Obj _3513485_37 = PRIM_EQ(_3512831_37, x);
if (True == _3513485_37) {
Obj _3513486_37 = makeCons(x, y);
coraReturn(co, _3513486_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512834_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512834_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512834_37);
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
Obj _3513474_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513474_37) {
Obj _3513475_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513476_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513476_37;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[56]), closureRef(R[0], 1), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
}
}

static void clofun81(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512826_37 = R[1];
Obj _3512827_37 = R[2];
Obj _3512828_37 = R[3];
Obj _3513392_37 = PRIM_EQ(Nil, _3512828_37);
if (True == _3513392_37) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[76]), _3512826_37, _3512827_37);
return;
} else {
Obj _3513393_37 = PRIM_ISCONS(_3512828_37);
if (True == _3513393_37) {
Obj _3513394_37 = PRIM_CAR(_3512828_37);
Obj import = _3513394_37;
Obj _3513395_37 = PRIM_CDR(_3512828_37);
Obj more = _3513395_37;
R[1] = import;
R[2] = _3512826_37;
R[3] = _3512827_37;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), import, makeCString("#*ns-export*"));
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
Obj _3513402_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), _3513402_37);
return;
}
case 2:
{
Obj _3513401_37= co->res;
Obj import = R[1];
struct frame1 __curr = {
.fn = clofun81,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), import, _3513401_37);
return;
}
case 3:
{
Obj _3513400_37= co->res;
Obj import = R[1];
R[1] = import;
struct frame1 __curr = {
.fn = clofun81,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), makeCString("#"), _3513400_37);
return;
}
case 4:
{
Obj _3513399_37= co->res;
Obj import = R[1];
Obj _3512826_37 = R[2];
Obj _3512827_37 = R[3];
Obj more = R[4];
if (True == _3513399_37) {
R[1] = import;
struct frame1 __curr = {
.fn = clofun81,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[72]), _3512826_37);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), _3512826_37, _3512827_37, more);
return;
}
}
case 5:
{
Obj _3513398_37= co->res;
Obj import = R[1];
Obj _3512826_37 = R[2];
Obj _3512827_37 = R[3];
Obj more = R[4];
Obj export = _3513398_37;
R[1] = import;
R[2] = _3512826_37;
R[3] = _3512827_37;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[132]), _3512826_37, export);
return;
}
case 6:
{
Obj _3513397_37= co->res;
Obj import = R[1];
Obj _3512826_37 = R[2];
Obj _3512827_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3512826_37;
R[3] = _3512827_37;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[70]), _3513397_37, Nil);
return;
}
case 7:
{
Obj _3513396_37= co->res;
Obj import = R[1];
Obj _3512826_37 = R[2];
Obj _3512827_37 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = _3512826_37;
R[3] = _3512827_37;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[74]), _3513396_37);
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
Obj _3513386_37 = PRIM_EQ(ns, makeCString(""));
if (True == _3513386_37) {
coraReturn(co, var);
return;
} else {
R[1] = var;
R[2] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[75]), var);
return;
}
}
case 1:
{
Obj _3513390_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), _3513390_37);
return;
}
case 2:
{
Obj _3513389_37= co->res;
Obj ns = R[1];
struct frame1 __curr = {
.fn = clofun80,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), ns, _3513389_37);
return;
}
case 3:
{
Obj _3513388_37= co->res;
Obj ns = R[1];
R[1] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), makeCString("#"), _3513388_37);
return;
}
case 4:
{
Obj _3513387_37= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == _3513387_37) {
coraReturn(co, var);
return;
} else {
R[1] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
struct frame1 __curr = {
.fn = clofun79,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), sexp);
return;
}
case 1:
{
Obj _3513368_37= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, _3513368_37, makeNative1(4, clofun78, 3, 1, path));
return;
}
case 2:
{
Obj _3513367_37= co->res;
Obj path = R[1];
R[1] = path;
struct frame1 __curr = {
.fn = clofun79,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[80]), _3513367_37);
return;
}
case 3:
{
Obj _3513366_37= co->res;
Obj sexp = R[1];
Obj path = _3513366_37;
R[1] = path;
struct frame1 __curr = {
.fn = clofun79,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3513369_37 = makeCons(makeCString("cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = _3513369_37;
struct frame1 __curr = {
.fn = clofun78,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), makeNative1(2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj _3513379_37= co->res;
Obj _3513369_37 = R[1];
Obj _3513380_37 = makeCons(__symbolTable[89], _3513379_37);
Obj _3513381_37 = makeCons(_3513380_37, Nil);
Obj _3513382_37 = makeCons(_3513369_37, _3513381_37);
Obj _3513383_37 = makeCons(closureRef(R[0], 0), _3513382_37);
Obj _3513384_37 = makeCons(__symbolTable[78], _3513383_37);
coraReturn(co, _3513384_37);
return;
}
case 2:
{
Obj _3513372_37= co->res;
Obj export = R[1];
Obj body = R[2];
Obj _3513369_37 = R[3];
Obj _3513373_37 = makeCons(export, Nil);
Obj _3513374_37 = makeCons(__symbolTable[86], _3513373_37);
Obj _3513375_37 = makeCons(_3513374_37, Nil);
Obj _3513376_37 = makeCons(__symbolTable[77], _3513375_37);
Obj _3513377_37 = makeCons(__symbolTable[133], _3513376_37);
Obj _3513378_37 = makeCons(_3513377_37, body);
R[1] = _3513369_37;
struct frame1 __curr = {
.fn = clofun78,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), _3513372_37, _3513378_37);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj _3513370_37 = makeCons(imp, Nil);
Obj _3513371_37 = makeCons(__symbolTable[81], _3513370_37);
coraReturn(co, _3513371_37);
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
Obj _3512819_37 = R[1];
Obj _3512820_37 = R[2];
Obj _3512821_37 = R[3];
Obj _3512822_37 = R[4];
Obj _3512823_37 = makeNative1(1, clofun74, 0, 4, _3512821_37, _3512819_37, _3512820_37, _3512822_37);
Obj _3513346_37 = PRIM_ISCONS(_3512819_37);
if (True == _3513346_37) {
Obj _3513347_37 = PRIM_CAR(_3512819_37);
Obj _3513348_37 = PRIM_ISCONS(_3513347_37);
if (True == _3513348_37) {
Obj _3513349_37 = PRIM_CAR(_3512819_37);
Obj _3513350_37 = PRIM_CAR(_3513349_37);
Obj _3513351_37 = PRIM_EQ(__symbolTable[81], _3513350_37);
if (True == _3513351_37) {
Obj _3513352_37 = PRIM_CAR(_3512819_37);
Obj _3513353_37 = PRIM_CDR(_3513352_37);
Obj _3513354_37 = PRIM_ISCONS(_3513353_37);
if (True == _3513354_37) {
Obj _3513355_37 = PRIM_CAR(_3512819_37);
Obj _3513356_37 = PRIM_CDR(_3513355_37);
Obj _3513357_37 = PRIM_CAR(_3513356_37);
Obj lib = _3513357_37;
Obj _3513358_37 = PRIM_CAR(_3512819_37);
Obj _3513359_37 = PRIM_CDR(_3513358_37);
Obj _3513360_37 = PRIM_CDR(_3513359_37);
Obj _3513361_37 = PRIM_EQ(Nil, _3513360_37);
if (True == _3513361_37) {
Obj _3513362_37 = PRIM_CDR(_3512819_37);
Obj rest = _3513362_37;
Obj _3513363_37 = makeCons(lib, _3512820_37);
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, _3513363_37, _3512821_37, _3512822_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512823_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512823_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512823_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512823_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512823_37);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512824_37 = makeNative1(1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj _3513337_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3513337_37) {
Obj _3513338_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513339_37 = PRIM_ISCONS(_3513338_37);
if (True == _3513339_37) {
Obj _3513340_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513341_37 = PRIM_CAR(_3513340_37);
Obj _3513342_37 = PRIM_EQ(__symbolTable[82], _3513341_37);
if (True == _3513342_37) {
Obj _3513343_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3513344_37 = PRIM_CDR(_3513343_37);
Obj more = _3513344_37;
Obj _3513345_37 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = _3513345_37;
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[83]), rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512824_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512824_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512824_37);
return;
}
}
}
}

static void clofun73(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
struct frame1 __curr = {
.fn = clofun73,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
}
case 1:
{
Obj _3513336_37= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), _3513336_37, closureRef(R[0], 2), closureRef(R[0], 3));
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
struct frame1 __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3513334_37= co->res;
Obj _3513333_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[85]), _3513333_37, _3513334_37);
return;
}
case 2:
{
Obj _3513333_37= co->res;
Obj exp = R[1];
R[1] = _3513333_37;
struct frame1 __curr = {
.fn = clofun72,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
struct frame1 __curr = {
.fn = clofun71,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), arglist);
return;
}
case 1:
{
Obj _3513322_37= co->res;
Obj _3513321_37 = R[1];
Obj fn = R[2];
Obj _3513323_37 = makeCons(_3513322_37, Nil);
Obj _3513324_37 = makeCons(_3513321_37, _3513323_37);
Obj _3513325_37 = makeCons(fn, _3513324_37);
coraReturn(co, _3513325_37);
return;
}
case 2:
{
Obj _3513328_37= co->res;
Obj _3513326_37 = R[1];
Obj fn = R[2];
Obj _3513329_37 = makeCons(_3513328_37, Nil);
Obj _3513330_37 = makeCons(_3513326_37, _3513329_37);
Obj _3513331_37 = makeCons(fn, _3513330_37);
coraReturn(co, _3513331_37);
return;
}
case 3:
{
Obj _3513320_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == _3513320_37) {
Obj _3513321_37 = PRIM_CAR(arglist);
R[1] = _3513321_37;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), arglist);
return;
} else {
Obj _3513326_37 = PRIM_CAR(arglist);
Obj _3513327_37 = PRIM_CDR(arglist);
R[1] = _3513326_37;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[85]), fn, _3513327_37);
return;
}
}
case 4:
{
Obj _3513319_37= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), _3513319_37);
return;
}
}
}

static void clofun70(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun70,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3513317_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[88]), _3513317_37);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512814_37 = R[1];
Obj _3513297_37 = primIsSymbol(_3512814_37);
if (True == _3513297_37) {
Obj _3513298_37 = makeCons(_3512814_37, Nil);
Obj _3513299_37 = makeCons(__symbolTable[139], _3513298_37);
coraReturn(co, _3513299_37);
return;
} else {
Obj _3512816_37 = makeNative1(1, clofun68, 0, 1, _3512814_37);
Obj _3513306_37 = PRIM_ISCONS(_3512814_37);
if (True == _3513306_37) {
Obj _3513307_37 = PRIM_CAR(_3512814_37);
Obj _3513308_37 = PRIM_EQ(__symbolTable[87], _3513307_37);
if (True == _3513308_37) {
Obj _3513309_37 = PRIM_CDR(_3512814_37);
Obj _3513310_37 = PRIM_ISCONS(_3513309_37);
if (True == _3513310_37) {
Obj _3513311_37 = PRIM_CDR(_3512814_37);
Obj _3513312_37 = PRIM_CAR(_3513311_37);
Obj x = _3513312_37;
Obj _3513313_37 = PRIM_CDR(_3512814_37);
Obj _3513314_37 = PRIM_CDR(_3513313_37);
Obj _3513315_37 = PRIM_EQ(Nil, _3513314_37);
if (True == _3513315_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512816_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512816_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512816_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512816_37);
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
Obj _3513300_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513300_37) {
Obj _3513301_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513301_37;
Obj _3513302_37 = PRIM_CDR(closureRef(R[0], 0));
Obj more = _3513302_37;
Obj _3513303_37 = makeCons(x, more);
struct frame1 __curr = {
.fn = clofun68,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), _3513303_37);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj _3513304_37= co->res;
Obj _3513305_37 = makeCons(__symbolTable[135], _3513304_37);
coraReturn(co, _3513305_37);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3513295_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[91]), _3513295_37);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512810_37 = R[1];
Obj _3512811_37 = makeNative1(1, clofun65, 0, 1, _3512810_37);
Obj _3513290_37 = PRIM_ISCONS(_3512810_37);
if (True == _3513290_37) {
Obj _3513291_37 = PRIM_CAR(_3512810_37);
Obj x = _3513291_37;
Obj _3513292_37 = PRIM_CDR(_3512810_37);
Obj _3513293_37 = PRIM_EQ(Nil, _3513292_37);
if (True == _3513293_37) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512811_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512811_37);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512812_37 = makeNative1(2, clofun64, 0, 1, closureRef(R[0], 0));
Obj _3513278_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513278_37) {
Obj _3513279_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513279_37;
Obj _3513280_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513281_37 = PRIM_ISCONS(_3513280_37);
if (True == _3513281_37) {
Obj _3513282_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513283_37 = PRIM_CAR(_3513282_37);
Obj y = _3513283_37;
Obj _3513284_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513285_37 = PRIM_CDR(_3513284_37);
Obj _3513286_37 = PRIM_EQ(Nil, _3513285_37);
if (True == _3513286_37) {
Obj _3513287_37 = makeCons(y, Nil);
Obj _3513288_37 = makeCons(x, _3513287_37);
Obj _3513289_37 = makeCons(__symbolTable[90], _3513288_37);
coraReturn(co, _3513289_37);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512812_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512812_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512812_37);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513271_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513271_37) {
Obj _3513272_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513272_37;
Obj _3513273_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513273_37;
R[1] = x;
struct frame1 __curr = {
.fn = clofun64,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[91]), y);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no match-help found!"));
return;
}
}
case 1:
{
Obj _3513274_37= co->res;
Obj x = R[1];
Obj _3513275_37 = makeCons(_3513274_37, Nil);
Obj _3513276_37 = makeCons(x, _3513275_37);
Obj _3513277_37 = makeCons(__symbolTable[90], _3513276_37);
coraReturn(co, _3513277_37);
return;
}
}
}

static void clofun63(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
struct frame1 __curr = {
.fn = clofun63,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[141]), exp);
return;
}
case 1:
{
Obj _3513269_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[92]), _3513269_37);
return;
}
case 2:
{
Obj _3513268_37= co->res;
struct frame1 __curr = {
.fn = clofun63,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[94]), _3513268_37);
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
coraCall4(co, globalRef(__symbolTable[93]), Nil, makeCString(""), Nil, exp);
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
struct frame1 __curr = {
.fn = clofun60,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 1:
{
Obj _3513257_37= co->res;
Obj body = R[1];
Obj args = R[2];
Obj _3513258_37 = makeCons(__symbolTable[135], args);
Obj _3513259_37 = makeCons(_3513258_37, body);
Obj _3513260_37 = makeCons(__symbolTable[107], _3513259_37);
Obj _3513261_37 = makeCons(_3513260_37, Nil);
Obj _3513262_37 = makeCons(args, _3513261_37);
Obj _3513263_37 = makeCons(_3513257_37, _3513262_37);
Obj _3513264_37 = makeCons(__symbolTable[134], _3513263_37);
coraReturn(co, _3513264_37);
return;
}
case 2:
{
Obj _3513256_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = _3513256_37;
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun60,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 3:
{
Obj _3513255_37= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = _3513255_37;
R[1] = exp;
R[2] = body;
struct frame1 __curr = {
.fn = clofun60,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[96]), nargs);
return;
}
case 4:
{
Obj _3513254_37= co->res;
Obj exp = R[1];
Obj body = _3513254_37;
R[1] = exp;
R[2] = body;
struct frame1 __curr = {
.fn = clofun60,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[97]), body);
return;
}
case 5:
{
Obj _3513253_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun60,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[104]), _3513253_37);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj _3513247_37 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _3513247_37) {
coraReturn(co, Nil);
return;
} else {
Obj _3513248_37 = primGenSym();
Obj _3513249_37 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = _3513248_37;
struct frame1 __curr = {
.fn = clofun59,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[96]), _3513249_37);
return;
}
}
case 1:
{
Obj _3513250_37= co->res;
Obj _3513248_37 = R[1];
Obj _3513251_37 = makeCons(_3513248_37, _3513250_37);
coraReturn(co, _3513251_37);
return;
}
}
}

static void clofun58(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj rules = R[1];
struct frame1 __curr = {
.fn = clofun58,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[103]), Nil, rules);
return;
}
case 1:
{
Obj _3513244_37= co->res;
Obj n = R[1];
Obj _3513245_37 = primNot(_3513244_37);
if (True == _3513245_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("inconsistent func rule args count"));
return;
} else {
coraReturn(co, n);
return;
}
}
case 2:
{
Obj _3513243_37= co->res;
Obj n = R[1];
R[1] = n;
struct frame1 __curr = {
.fn = clofun58,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), _3513243_37);
return;
}
case 3:
{
Obj _3513238_37= co->res;
Obj counts = _3513238_37;
Obj _3513239_37 = PRIM_CAR(counts);
Obj n = _3513239_37;
Obj _3513242_37 = PRIM_CDR(counts);
R[1] = n;
struct frame1 __curr = {
.fn = clofun58,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[99]), makeNative1(2, clofun57, 1, 1, n), _3513242_37);
return;
}
case 4:
{
Obj _3513236_37= co->res;
Obj pats = _3513236_37;
struct frame1 __curr = {
.fn = clofun58,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), makeNative1(2, clofun56, 1, 0), pats);
return;
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513240_37 = PRIM_EQ(closureRef(R[0], 0), x);
Obj _3513241_37 = primNot(_3513240_37);
coraReturn(co, _3513241_37);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3513237_37 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), _3513237_37);
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
Obj _3513230_37 = PRIM_EQ(l1, Nil);
if (True == _3513230_37) {
coraReturn(co, l2);
return;
} else {
Obj _3513231_37 = PRIM_CAR(l1);
Obj _3513232_37 = PRIM_CDR(l1);
R[1] = _3513231_37;
struct frame1 __curr = {
.fn = clofun55,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), _3513232_37, l2);
return;
}
}
case 1:
{
Obj _3513233_37= co->res;
Obj _3513231_37 = R[1];
Obj _3513234_37 = makeCons(_3513231_37, _3513233_37);
coraReturn(co, _3513234_37);
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
Obj _3513221_37 = PRIM_ISCONS(l);
if (True == _3513221_37) {
Obj _3513222_37 = PRIM_CAR(l);
R[1] = l;
R[2] = res;
R[3] = fn;
struct frame1 __curr = {
.fn = clofun53,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, fn, _3513222_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj _3513223_37= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == _3513223_37) {
Obj _3513224_37 = PRIM_CAR(l);
Obj _3513225_37 = makeCons(_3513224_37, res);
Obj _3513226_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), _3513225_37, fn, _3513226_37);
return;
} else {
Obj _3513227_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), res, fn, _3513227_37);
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
Obj _3513216_37 = PRIM_EQ(l, Nil);
if (True == _3513216_37) {
coraReturn(co, i);
return;
} else {
Obj _3513217_37 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _3513218_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), _3513217_37, _3513218_37);
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
struct frame1 __curr = {
.fn = clofun50,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj _3513214_37= co->res;
Obj _3513213_37 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[103]), _3513213_37, _3513214_37);
return;
}
case 2:
{
Obj _3513211_37= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == _3513211_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
} else {
Obj _3513212_37 = PRIM_CAR(rules);
Obj _3513213_37 = makeCons(_3513212_37, res);
R[1] = _3513213_37;
struct frame1 __curr = {
.fn = clofun50,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3513158_37 = PRIM_EQ(Nil, input);
if (True == _3513158_37) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), result);
return;
} else {
Obj _3512807_37 = makeNative1(3, clofun47, 0, 3, input, current, result);
Obj _3513176_37 = PRIM_ISCONS(input);
if (True == _3513176_37) {
Obj _3513177_37 = PRIM_CAR(input);
Obj _3513178_37 = PRIM_EQ(__symbolTable[105], _3513177_37);
if (True == _3513178_37) {
Obj _3513179_37 = PRIM_CDR(input);
Obj _3513180_37 = PRIM_ISCONS(_3513179_37);
if (True == _3513180_37) {
Obj _3513181_37 = PRIM_CDR(input);
Obj _3513182_37 = PRIM_CAR(_3513181_37);
Obj act = _3513182_37;
Obj _3513183_37 = PRIM_CDR(input);
Obj _3513184_37 = PRIM_CDR(_3513183_37);
Obj _3513185_37 = PRIM_ISCONS(_3513184_37);
if (True == _3513185_37) {
Obj _3513186_37 = PRIM_CDR(input);
Obj _3513187_37 = PRIM_CDR(_3513186_37);
Obj _3513188_37 = PRIM_CAR(_3513187_37);
Obj _3513189_37 = PRIM_EQ(__symbolTable[110], _3513188_37);
if (True == _3513189_37) {
Obj _3513190_37 = PRIM_CDR(input);
Obj _3513191_37 = PRIM_CDR(_3513190_37);
Obj _3513192_37 = PRIM_CDR(_3513191_37);
Obj _3513193_37 = PRIM_ISCONS(_3513192_37);
if (True == _3513193_37) {
Obj _3513194_37 = PRIM_CDR(input);
Obj _3513195_37 = PRIM_CDR(_3513194_37);
Obj _3513196_37 = PRIM_CDR(_3513195_37);
Obj _3513197_37 = PRIM_CAR(_3513196_37);
Obj pred = _3513197_37;
Obj _3513198_37 = PRIM_CDR(input);
Obj _3513199_37 = PRIM_CDR(_3513198_37);
Obj _3513200_37 = PRIM_CDR(_3513199_37);
Obj _3513201_37 = PRIM_CDR(_3513200_37);
Obj remain = _3513201_37;
R[1] = act;
R[2] = pred;
R[3] = result;
R[4] = remain;
struct frame1 __curr = {
.fn = clofun48,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[149]), current);
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512807_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512807_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512807_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512807_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512807_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512807_37);
return;
}
}
}
case 1:
{
Obj _3513202_37= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj _3513203_37 = makeCons(__symbolTable[135], _3513202_37);
Obj pat = _3513203_37;
Obj _3513204_37 = makeCons(act, Nil);
Obj _3513205_37 = makeCons(pred, _3513204_37);
Obj _3513206_37 = makeCons(__symbolTable[110], _3513205_37);
Obj _3513207_37 = makeCons(pat, result);
Obj _3513208_37 = makeCons(_3513206_37, _3513207_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, _3513208_37);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512808_37 = makeNative1(1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj _3513163_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513163_37) {
Obj _3513164_37 = PRIM_CAR(closureRef(R[0], 0));
Obj _3513165_37 = PRIM_EQ(__symbolTable[105], _3513164_37);
if (True == _3513165_37) {
Obj _3513166_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513167_37 = PRIM_ISCONS(_3513166_37);
if (True == _3513167_37) {
Obj _3513168_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513169_37 = PRIM_CAR(_3513168_37);
Obj act = _3513169_37;
Obj _3513170_37 = PRIM_CDR(closureRef(R[0], 0));
Obj _3513171_37 = PRIM_CDR(_3513170_37);
Obj remain = _3513171_37;
R[1] = act;
R[2] = remain;
struct frame1 __curr = {
.fn = clofun47,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[149]), closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, _3512808_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512808_37);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, _3512808_37);
return;
}
}
case 1:
{
Obj _3513172_37= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj _3513173_37 = makeCons(__symbolTable[135], _3513172_37);
Obj pat = _3513173_37;
Obj _3513174_37 = makeCons(pat, closureRef(R[0], 2));
Obj _3513175_37 = makeCons(act, _3513174_37);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, _3513175_37);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3513159_37 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == _3513159_37) {
Obj _3513160_37 = PRIM_CAR(closureRef(R[0], 0));
Obj x = _3513160_37;
Obj _3513161_37 = PRIM_CDR(closureRef(R[0], 0));
Obj y = _3513161_37;
Obj _3513162_37 = makeCons(x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), y, _3513162_37, closureRef(R[0], 2));
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
struct frame1 __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3513145_37= co->res;
Obj value = R[1];
Obj rules = _3513145_37;
Obj _3512858_37 = makeNative1(2, clofun43, 1, 2, value, rules);
Obj _3513152_37 = PRIM_ISCONS(value);
if (True == _3513152_37) {
Obj _3513153_37 = PRIM_CAR(value);
Obj _3513154_37 = PRIM_EQ(__symbolTable[152], _3513153_37);
Obj _3513155_37 = primNot(_3513154_37);
if (True == _3513155_37) {
co->ctx.sp = R;
coraCall1(co, _3512858_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512858_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512858_37, False);
return;
}
}
case 2:
{
Obj _3513144_37= co->res;
Obj exp = R[1];
Obj value = _3513144_37;
R[1] = value;
struct frame1 __curr = {
.fn = clofun44,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj _3513143_37= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[138]), _3513143_37);
return;
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512859_37 = R[1];
if (True == _3512859_37) {
Obj _3513146_37 = primGenSym();
Obj val = _3513146_37;
R[1] = val;
struct frame1 __curr = {
.fn = clofun43,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3513147_37= co->res;
Obj val = R[1];
Obj _3513148_37 = makeCons(_3513147_37, Nil);
Obj _3513149_37 = makeCons(closureRef(R[0], 0), _3513148_37);
Obj _3513150_37 = makeCons(val, _3513149_37);
Obj _3513151_37 = makeCons(__symbolTable[129], _3513150_37);
coraReturn(co, _3513151_37);
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
struct frame1 __curr = {
.fn = clofun42,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj _3513141_37= co->res;
Obj _3512856_37 = R[1];
if (True == _3513141_37) {
co->ctx.sp = R;
coraCall1(co, _3512856_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512856_37, False);
return;
}
}
case 2:
{
Obj _3513139_37= co->res;
Obj rules = R[1];
Obj _3512856_37 = R[2];
if (True == _3513139_37) {
Obj _3513140_37 = PRIM_CDR(rules);
R[1] = _3512856_37;
struct frame1 __curr = {
.fn = clofun42,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), _3513140_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512856_37, False);
return;
}
}
case 3:
{
Obj _3513121_37= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == _3513121_37) {
Obj _3513122_37 = makeCons(makeCString("no match-help found!"), Nil);
Obj _3513123_37 = makeCons(__symbolTable[127], _3513122_37);
coraReturn(co, _3513123_37);
return;
} else {
Obj _3512856_37 = makeNative1(3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = _3512856_37;
struct frame1 __curr = {
.fn = clofun42,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3512857_37 = R[1];
if (True == _3512857_37) {
Obj _3513124_37 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = _3513124_37;
Obj _3513125_37 = primGenSym();
Obj cc = _3513125_37;
R[1] = pat;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[111]), closureRef(R[0], 1), cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no cond match"));
return;
}
}
case 1:
{
Obj _3513131_37= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = _3513131_37;
Obj _3513132_37 = makeCons(rest, Nil);
Obj _3513133_37 = makeCons(Nil, _3513132_37);
Obj _3513134_37 = makeCons(__symbolTable[140], _3513133_37);
Obj _3513135_37 = makeCons(curr, Nil);
Obj _3513136_37 = makeCons(_3513134_37, _3513135_37);
Obj _3513137_37 = makeCons(cc, _3513136_37);
Obj _3513138_37 = makeCons(__symbolTable[129], _3513137_37);
coraReturn(co, _3513138_37);
return;
}
case 2:
{
Obj _3513128_37= co->res;
Obj cc = R[1];
Obj curr = _3513128_37;
Obj _3513129_37 = PRIM_CDR(closureRef(R[0], 1));
Obj _3513130_37 = PRIM_CDR(_3513129_37);
R[1] = curr;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), _3513130_37);
return;
}
case 3:
{
Obj _3513127_37= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), _3513127_37, closureRef(R[0], 0), action, cc);
return;
}
case 4:
{
Obj _3513126_37= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = _3513126_37;
R[1] = action;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3513108_37 = PRIM_CDR(rules);
Obj _3513109_37 = PRIM_CAR(_3513108_37);
Obj action = _3513109_37;
Obj _3512854_37 = makeNative1(2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = _3512854_37;
struct frame1 __curr = {
.fn = clofun40,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), action);
return;
}
case 1:
{
Obj _3513117_37= co->res;
Obj action = R[1];
Obj _3512854_37 = R[2];
if (True == _3513117_37) {
Obj _3513118_37 = PRIM_CAR(action);
Obj _3513119_37 = PRIM_EQ(_3513118_37, __symbolTable[110]);
if (True == _3513119_37) {
co->ctx.sp = R;
coraCall1(co, _3512854_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512854_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512854_37, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512855_37 = R[1];
if (True == _3512855_37) {
struct frame1 __curr = {
.fn = clofun39,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 1));
return;
} else {
coraReturn(co, closureRef(R[0], 1));
return;
}
}
case 1:
{
Obj _3513111_37= co->res;
Obj _3513110_37 = R[1];
Obj _3513112_37 = makeCons(closureRef(R[0], 0), Nil);
Obj _3513113_37 = makeCons(_3513112_37, Nil);
Obj _3513114_37 = makeCons(_3513111_37, _3513113_37);
Obj _3513115_37 = makeCons(_3513110_37, _3513114_37);
Obj _3513116_37 = makeCons(__symbolTable[126], _3513115_37);
coraReturn(co, _3513116_37);
return;
}
case 2:
{
Obj _3513110_37= co->res;
R[1] = _3513110_37;
struct frame1 __curr = {
.fn = clofun39,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
struct frame1 __curr = {
.fn = clofun38,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, makeNative1(2, clofun37, 1, 0), pat);
return;
}
case 1:
{
Obj _3513106_37= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), _3513106_37);
return;
}
case 2:
{
Obj _3513093_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3513093_37) {
Obj _3513094_37 = PRIM_CAR(pat);
Obj _3513095_37 = PRIM_EQ(_3513094_37, __symbolTable[139]);
if (True == _3513095_37) {
Obj _3513096_37 = makeCons(expr, Nil);
Obj _3513097_37 = makeCons(pat, _3513096_37);
Obj _3513098_37 = makeCons(__symbolTable[113], _3513097_37);
Obj _3513099_37 = makeCons(cc, Nil);
Obj _3513100_37 = makeCons(_3513099_37, Nil);
Obj _3513101_37 = makeCons(body, _3513100_37);
Obj _3513102_37 = makeCons(_3513098_37, _3513101_37);
Obj _3513103_37 = makeCons(__symbolTable[126], _3513102_37);
coraReturn(co, _3513103_37);
return;
} else {
Obj _3513104_37 = PRIM_CAR(pat);
Obj _3513105_37 = PRIM_EQ(_3513104_37, __symbolTable[152]);
if (True == _3513105_37) {
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[118]), pat, expr, body, cc);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("no cond match"));
return;
}
}
} else {
struct frame1 __curr = {
.fn = clofun38,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[112]), makeCString("match fail "), pat);
return;
}
}
case 3:
{
Obj _3513078_37= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == _3513078_37) {
Obj _3513079_37 = PRIM_EQ(pat, expr);
if (True == _3513079_37) {
coraReturn(co, body);
return;
} else {
Obj _3513080_37 = makeCons(expr, Nil);
Obj _3513081_37 = makeCons(pat, _3513080_37);
Obj _3513082_37 = makeCons(__symbolTable[113], _3513081_37);
Obj _3513083_37 = makeCons(cc, Nil);
Obj _3513084_37 = makeCons(_3513083_37, Nil);
Obj _3513085_37 = makeCons(body, _3513084_37);
Obj _3513086_37 = makeCons(_3513082_37, _3513085_37);
Obj _3513087_37 = makeCons(__symbolTable[126], _3513086_37);
coraReturn(co, _3513087_37);
return;
}
} else {
Obj _3513088_37 = primIsSymbol(pat);
if (True == _3513088_37) {
Obj _3513089_37 = makeCons(body, Nil);
Obj _3513090_37 = makeCons(expr, _3513089_37);
Obj _3513091_37 = makeCons(pat, _3513090_37);
Obj _3513092_37 = makeCons(__symbolTable[129], _3513091_37);
coraReturn(co, _3513092_37);
return;
} else {
R[1] = expr;
R[2] = body;
R[3] = cc;
R[4] = pat;
struct frame1 __curr = {
.fn = clofun38,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
struct frame1 __curr = {
.fn = clofun37,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[131]), x);
return;
}
case 1:
{
Obj _3513075_37= co->res;
Obj x = R[1];
if (True == _3513075_37) {
Obj _3513076_37 = primIsSymbol(x);
Obj _3513077_37 = primNot(_3513076_37);
if (True == _3513077_37) {
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
struct frame1 __curr = {
.fn = clofun36,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), pat);
return;
}
case 1:
{
Obj _3513054_37= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = _3513054_37;
Obj _3512852_37 = makeNative1(3, clofun35, 1, 5, x, y, expr, body, cc);
Obj _3513071_37 = PRIM_ISCONS(expr);
if (True == _3513071_37) {
Obj _3513072_37 = PRIM_CAR(expr);
Obj _3513073_37 = PRIM_EQ(_3513072_37, __symbolTable[152]);
if (True == _3513073_37) {
co->ctx.sp = R;
coraCall1(co, _3512852_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512852_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512852_37, False);
return;
}
}
case 2:
{
Obj _3513053_37= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = _3513053_37;
R[1] = x;
R[2] = body;
R[3] = cc;
R[4] = expr;
struct frame1 __curr = {
.fn = clofun36,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), pat);
return;
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512853_37 = R[1];
if (True == _3512853_37) {
struct frame1 __curr = {
.fn = clofun35,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 2));
return;
} else {
Obj _3513058_37 = makeCons(closureRef(R[0], 2), Nil);
Obj _3513059_37 = makeCons(__symbolTable[116], _3513058_37);
Obj _3513060_37 = makeCons(closureRef(R[0], 2), Nil);
Obj _3513061_37 = makeCons(__symbolTable[115], _3513060_37);
Obj _3513062_37 = makeCons(closureRef(R[0], 2), Nil);
Obj _3513063_37 = makeCons(__symbolTable[114], _3513062_37);
R[1] = _3513061_37;
R[2] = _3513059_37;
struct frame1 __curr = {
.fn = clofun35,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), _3513063_37, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj _3513057_37= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), e1, _3513057_37, closureRef(R[0], 4));
return;
}
case 2:
{
Obj _3513056_37= co->res;
Obj e1 = R[1];
Obj e2 = _3513056_37;
R[1] = e1;
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 3:
{
Obj _3513055_37= co->res;
Obj e1 = _3513055_37;
R[1] = e1;
struct frame1 __curr = {
.fn = clofun35,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 2));
return;
}
case 4:
{
Obj _3513065_37= co->res;
Obj _3513059_37 = R[1];
Obj _3513066_37 = makeCons(closureRef(R[0], 4), Nil);
Obj _3513067_37 = makeCons(_3513066_37, Nil);
Obj _3513068_37 = makeCons(_3513065_37, _3513067_37);
Obj _3513069_37 = makeCons(_3513059_37, _3513068_37);
Obj _3513070_37 = makeCons(__symbolTable[126], _3513069_37);
coraReturn(co, _3513070_37);
return;
}
case 5:
{
Obj _3513064_37= co->res;
Obj _3513061_37 = R[1];
Obj _3513059_37 = R[2];
R[1] = _3513059_37;
struct frame1 __curr = {
.fn = clofun35,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall4(co, globalRef(__symbolTable[117]), closureRef(R[0], 0), _3513061_37, _3513064_37, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3513051_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[120]), _3513051_37);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj _3513041_37 = PRIM_CDR(pat);
R[1] = pat;
struct frame1 __curr = {
.fn = clofun33,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), _3513041_37);
return;
}
case 1:
{
Obj _3513046_37= co->res;
Obj _3513044_37 = R[1];
Obj _3513047_37 = makeCons(_3513046_37, Nil);
Obj _3513048_37 = makeCons(_3513044_37, _3513047_37);
Obj _3513049_37 = makeCons(__symbolTable[152], _3513048_37);
coraReturn(co, _3513049_37);
return;
}
case 2:
{
Obj _3513042_37= co->res;
Obj pat = R[1];
if (True == _3513042_37) {
Obj _3513043_37 = PRIM_CAR(pat);
coraReturn(co, _3513043_37);
return;
} else {
Obj _3513044_37 = PRIM_CAR(pat);
Obj _3513045_37 = PRIM_CDR(pat);
R[1] = _3513044_37;
struct frame1 __curr = {
.fn = clofun33,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[120]), _3513045_37);
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
Obj _3513038_37 = PRIM_EQ(x, True);
if (True == _3513038_37) {
coraReturn(co, True);
return;
} else {
Obj _3513039_37 = PRIM_EQ(x, False);
if (True == _3513039_37) {
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
Obj _3513036_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[123]), _3513036_37);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3513024_37 = PRIM_EQ(Nil, l);
if (True == _3513024_37) {
coraReturn(co, True);
return;
} else {
Obj _3513025_37 = PRIM_CAR(l);
Obj _3513026_37 = PRIM_EQ(_3513025_37, False);
if (True == _3513026_37) {
coraReturn(co, False);
return;
} else {
Obj _3513027_37 = PRIM_CDR(l);
R[1] = l;
struct frame1 __curr = {
.fn = clofun30,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[123]), _3513027_37);
return;
}
}
}
case 1:
{
Obj _3513028_37= co->res;
Obj l = R[1];
Obj more = _3513028_37;
Obj _3513029_37 = PRIM_EQ(more, False);
if (True == _3513029_37) {
coraReturn(co, False);
return;
} else {
Obj _3513030_37 = PRIM_CAR(l);
Obj _3513031_37 = makeCons(False, Nil);
Obj _3513032_37 = makeCons(more, _3513031_37);
Obj _3513033_37 = makeCons(_3513030_37, _3513032_37);
Obj _3513034_37 = makeCons(__symbolTable[126], _3513033_37);
coraReturn(co, _3513034_37);
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
Obj _3513022_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[125]), _3513022_37);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj _3513010_37 = PRIM_EQ(l, Nil);
if (True == _3513010_37) {
coraReturn(co, False);
return;
} else {
Obj _3513011_37 = PRIM_CAR(l);
Obj _3513012_37 = PRIM_EQ(_3513011_37, True);
if (True == _3513012_37) {
coraReturn(co, True);
return;
} else {
Obj _3513013_37 = PRIM_CDR(l);
R[1] = l;
struct frame1 __curr = {
.fn = clofun28,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[125]), _3513013_37);
return;
}
}
}
case 1:
{
Obj _3513014_37= co->res;
Obj l = R[1];
Obj more = _3513014_37;
Obj _3513015_37 = PRIM_EQ(more, True);
if (True == _3513015_37) {
coraReturn(co, True);
return;
} else {
Obj _3513016_37 = PRIM_CAR(l);
Obj _3513017_37 = makeCons(more, Nil);
Obj _3513018_37 = makeCons(True, _3513017_37);
Obj _3513019_37 = makeCons(_3513016_37, _3513018_37);
Obj _3513020_37 = makeCons(__symbolTable[126], _3513019_37);
coraReturn(co, _3513020_37);
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
Obj _3512996_37 = PRIM_CDR(exp);
Obj _3512997_37 = PRIM_EQ(Nil, _3512996_37);
if (True == _3512997_37) {
Obj _3512998_37 = makeCons(makeCString("no cond match"), Nil);
Obj _3512999_37 = makeCons(__symbolTable[127], _3512998_37);
coraReturn(co, _3512999_37);
return;
} else {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun27,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
case 1:
{
Obj _3513003_37= co->res;
Obj _3513002_37 = R[1];
Obj _3513001_37 = R[2];
Obj _3513004_37 = makeCons(__symbolTable[128], _3513003_37);
Obj _3513005_37 = makeCons(_3513004_37, Nil);
Obj _3513006_37 = makeCons(_3513002_37, _3513005_37);
Obj _3513007_37 = makeCons(_3513001_37, _3513006_37);
Obj _3513008_37 = makeCons(__symbolTable[126], _3513007_37);
coraReturn(co, _3513008_37);
return;
}
case 2:
{
Obj _3513002_37= co->res;
Obj exp = R[1];
Obj _3513001_37 = R[2];
R[1] = _3513002_37;
R[2] = _3513001_37;
struct frame1 __curr = {
.fn = clofun27,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj _3513000_37= co->res;
Obj exp = R[1];
Obj curr = _3513000_37;
Obj _3513001_37 = PRIM_CAR(curr);
R[1] = exp;
R[2] = _3513001_37;
struct frame1 __curr = {
.fn = clofun27,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3512994_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[130]), _3512994_37);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512982_37 = PRIM_CDR(exp);
R[1] = exp;
struct frame1 __curr = {
.fn = clofun25,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), _3512982_37);
return;
}
case 1:
{
Obj _3512988_37= co->res;
Obj _3512986_37 = R[1];
Obj _3512985_37 = R[2];
Obj _3512989_37 = makeCons(_3512988_37, Nil);
Obj _3512990_37 = makeCons(_3512986_37, _3512989_37);
Obj _3512991_37 = makeCons(_3512985_37, _3512990_37);
Obj _3512992_37 = makeCons(__symbolTable[129], _3512991_37);
coraReturn(co, _3512992_37);
return;
}
case 2:
{
Obj _3512987_37= co->res;
Obj _3512986_37 = R[1];
Obj _3512985_37 = R[2];
R[1] = _3512986_37;
R[2] = _3512985_37;
struct frame1 __curr = {
.fn = clofun25,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), _3512987_37);
return;
}
case 3:
{
Obj _3512986_37= co->res;
Obj exp = R[1];
Obj _3512985_37 = R[2];
R[1] = _3512986_37;
R[2] = _3512985_37;
struct frame1 __curr = {
.fn = clofun25,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 4:
{
Obj _3512983_37= co->res;
Obj exp = R[1];
if (True == _3512983_37) {
Obj _3512984_37 = PRIM_CAR(exp);
coraReturn(co, _3512984_37);
return;
} else {
Obj _3512985_37 = PRIM_CAR(exp);
R[1] = exp;
R[2] = _3512985_37;
struct frame1 __curr = {
.fn = clofun25,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3512979_37 = PRIM_ISCONS(x);
Obj _3512980_37 = primNot(_3512979_37);
coraReturn(co, _3512980_37);
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
Obj _3512974_37 = PRIM_ISCONS(l);
if (True == _3512974_37) {
Obj _3512975_37 = PRIM_CAR(l);
Obj _3512976_37 = PRIM_EQ(_3512975_37, x);
if (True == _3512976_37) {
coraReturn(co, True);
return;
} else {
Obj _3512977_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[132]), x, _3512977_37);
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
struct frame1 __curr = {
.fn = clofun22,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512966_37= co->res;
Obj _3512965_37 = R[1];
Obj _3512964_37 = R[2];
Obj _3512967_37 = makeCons(_3512966_37, Nil);
Obj _3512968_37 = makeCons(_3512965_37, _3512967_37);
Obj _3512969_37 = makeCons(__symbolTable[140], _3512968_37);
Obj _3512970_37 = makeCons(_3512969_37, Nil);
Obj _3512971_37 = makeCons(_3512964_37, _3512970_37);
Obj _3512972_37 = makeCons(__symbolTable[133], _3512971_37);
coraReturn(co, _3512972_37);
return;
}
case 2:
{
Obj _3512965_37= co->res;
Obj exp = R[1];
Obj _3512964_37 = R[2];
R[1] = _3512965_37;
R[2] = _3512964_37;
struct frame1 __curr = {
.fn = clofun22,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[155]), exp);
return;
}
case 3:
{
Obj _3512964_37= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = _3512964_37;
struct frame1 __curr = {
.fn = clofun22,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3512962_37 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[153]), _3512962_37);
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
struct frame1 __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 1:
{
Obj _3512954_37= co->res;
Obj _3512953_37 = R[1];
Obj _3512952_37 = R[2];
Obj _3512955_37 = makeCons(_3512953_37, _3512954_37);
Obj _3512956_37 = makeCons(__symbolTable[140], _3512955_37);
Obj _3512957_37 = makeCons(_3512956_37, Nil);
Obj _3512958_37 = makeCons(_3512952_37, _3512957_37);
Obj _3512959_37 = makeCons(__symbolTable[144], _3512958_37);
coraReturn(co, _3512959_37);
return;
}
case 2:
{
Obj _3512953_37= co->res;
Obj exp = R[1];
Obj _3512952_37 = R[2];
R[1] = _3512953_37;
R[2] = _3512952_37;
struct frame1 __curr = {
.fn = clofun20,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[154]), exp);
return;
}
case 3:
{
Obj _3512950_37= co->res;
Obj exp = R[1];
Obj _3512951_37 = makeCons(_3512950_37, Nil);
Obj _3512952_37 = makeCons(__symbolTable[139], _3512951_37);
R[1] = exp;
R[2] = _3512952_37;
struct frame1 __curr = {
.fn = clofun20,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3512932_37 = PRIM_ISCONS(exp);
if (True == _3512932_37) {
Obj _3512933_37 = PRIM_CAR(exp);
Obj _3512934_37 = PRIM_EQ(_3512933_37, globalRef(__symbolTable[145]));
if (True == _3512934_37) {
Obj _3512935_37 = PRIM_CDR(exp);
coraReturn(co, _3512935_37);
return;
} else {
Obj _3512936_37 = PRIM_CAR(exp);
Obj _3512937_37 = PRIM_EQ(_3512936_37, __symbolTable[140]);
if (True == _3512937_37) {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun19,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
} else {
Obj _3512944_37 = PRIM_CAR(exp);
Obj _3512945_37 = PRIM_EQ(_3512944_37, __symbolTable[139]);
if (True == _3512945_37) {
coraReturn(co, exp);
return;
} else {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun19,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
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
Obj _3512940_37= co->res;
Obj _3512938_37 = R[1];
Obj _3512941_37 = makeCons(_3512940_37, Nil);
Obj _3512942_37 = makeCons(_3512938_37, _3512941_37);
Obj _3512943_37 = makeCons(__symbolTable[140], _3512942_37);
coraReturn(co, _3512943_37);
return;
}
case 2:
{
Obj _3512939_37= co->res;
Obj _3512938_37 = R[1];
R[1] = _3512938_37;
struct frame1 __curr = {
.fn = clofun19,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[141]), _3512939_37);
return;
}
case 3:
{
Obj _3512938_37= co->res;
Obj exp = R[1];
R[1] = _3512938_37;
struct frame1 __curr = {
.fn = clofun19,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), exp);
return;
}
case 4:
{
Obj _3512947_37= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative1(2, clofun18, 1, 1, exp), _3512947_37);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj _3512946_37 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == _3512946_37) {
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
Obj _3512922_37 = PRIM_EQ(Nil, macros);
if (True == _3512922_37) {
coraReturn(co, exp);
return;
} else {
Obj _3512929_37 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative1(2, clofun15, 1, 2, macros, exp), _3512929_37);
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
Obj _3512850_37 = makeNative1(2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj _3512925_37 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == _3512925_37) {
Obj _3512926_37 = PRIM_CAR(closureRef(R[0], 1));
Obj _3512927_37 = PRIM_CAR(item);
Obj _3512928_37 = PRIM_EQ(_3512926_37, _3512927_37);
if (True == _3512928_37) {
co->ctx.sp = R;
coraCall1(co, _3512850_37, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, _3512850_37, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, _3512850_37, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj _3512851_37 = R[1];
if (True == _3512851_37) {
Obj _3512923_37 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, _3512923_37, closureRef(R[0], 1));
return;
} else {
Obj _3512924_37 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), closureRef(R[0], 1), _3512924_37);
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
Obj _3512918_37 = makeCons(n, v);
Obj _3512919_37 = makeCons(_3512918_37, globalRef(__symbolTable[146]));
Obj _3512920_37 = primSet(co, __symbolTable[146], _3512919_37);
coraReturn(co, _3512920_37);
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
Obj _3512908_37 = PRIM_ISCONS(l);
if (True == _3512908_37) {
Obj _3512909_37 = PRIM_CAR(l);
R[1] = res;
R[2] = l;
R[3] = f;
struct frame1 __curr = {
.fn = clofun11,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, f, _3512909_37);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj _3512910_37= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj _3512911_37 = makeCons(_3512910_37, res);
Obj _3512912_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), _3512911_37, f, _3512912_37);
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
Obj _3512901_37 = PRIM_ISCONS(l);
if (True == _3512901_37) {
Obj _3512902_37 = PRIM_CAR(l);
Obj _3512903_37 = makeCons(_3512902_37, res);
Obj _3512904_37 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[150]), _3512903_37, _3512904_37);
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
Obj _3512899_37 = PRIM_ISCONS(x);
coraReturn(co, _3512899_37);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj _3512891_37 = PRIM_ISCONS(exp);
if (True == _3512891_37) {
Obj _3512892_37 = PRIM_CAR(exp);
Obj _3512893_37 = PRIM_CDR(exp);
R[1] = _3512892_37;
struct frame1 __curr = {
.fn = clofun8,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[153]), _3512893_37);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj _3512894_37= co->res;
Obj _3512892_37 = R[1];
Obj _3512895_37 = makeCons(_3512894_37, Nil);
Obj _3512896_37 = makeCons(_3512892_37, _3512895_37);
Obj _3512897_37 = makeCons(__symbolTable[152], _3512896_37);
coraReturn(co, _3512897_37);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512887_37 = PRIM_CDR(x);
Obj _3512888_37 = PRIM_CDR(_3512887_37);
Obj _3512889_37 = PRIM_CDR(_3512888_37);
coraReturn(co, _3512889_37);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512882_37 = PRIM_CDR(x);
Obj _3512883_37 = PRIM_CDR(_3512882_37);
Obj _3512884_37 = PRIM_CDR(_3512883_37);
Obj _3512885_37 = PRIM_CAR(_3512884_37);
coraReturn(co, _3512885_37);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512878_37 = PRIM_CDR(x);
Obj _3512879_37 = PRIM_CDR(_3512878_37);
Obj _3512880_37 = PRIM_CAR(_3512879_37);
coraReturn(co, _3512880_37);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512875_37 = PRIM_CDR(x);
Obj _3512876_37 = PRIM_CDR(_3512875_37);
coraReturn(co, _3512876_37);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512872_37 = PRIM_CAR(x);
Obj _3512873_37 = PRIM_CDR(_3512872_37);
coraReturn(co, _3512873_37);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512869_37 = PRIM_CAR(x);
Obj _3512870_37 = PRIM_CAR(_3512869_37);
coraReturn(co, _3512870_37);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512866_37 = PRIM_CDR(x);
Obj _3512867_37 = PRIM_CAR(_3512866_37);
coraReturn(co, _3512867_37);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj _3512864_37 = PRIM_EQ(x, Nil);
coraReturn(co, _3512864_37);
return;
}
}
}

