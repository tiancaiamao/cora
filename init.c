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

void entry(struct Cora *co) {
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
Obj x105553288510023 = primSet(co, __symbolTable[161], makeNative1(2, clofun0, 1, 0));
Obj x105553288511463 = primSet(co, __symbolTable[160], makeNative1(2, clofun1, 1, 0));
Obj x105553288512903 = primSet(co, __symbolTable[159], makeNative1(2, clofun2, 1, 0));
Obj x105553288514343 = primSet(co, __symbolTable[158], makeNative1(2, clofun3, 1, 0));
Obj x105553288515783 = primSet(co, __symbolTable[157], makeNative1(2, clofun4, 1, 0));
Obj x105553288517607 = primSet(co, __symbolTable[156], makeNative1(2, clofun5, 1, 0));
Obj x105553288519815 = primSet(co, __symbolTable[155], makeNative1(2, clofun6, 1, 0));
Obj x105553288521639 = primSet(co, __symbolTable[154], makeNative1(2, clofun7, 1, 0));
Obj x105553288525543 = primSet(co, __symbolTable[153], makeNative1(2, clofun8, 1, 0));
Obj x105553288526599 = primSet(co, __symbolTable[151], makeNative1(2, clofun9, 1, 0));
Obj x105553288529415 = primSet(co, __symbolTable[150], makeNative1(3, clofun10, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[150]), Nil);
return;
}
case 1:
{
Obj x105553288529895= co->res;
Obj x105553288530087 = primSet(co, __symbolTable[149], x105553288529895);
Obj x105553288533671 = primSet(co, __symbolTable[148], makeNative1(4, clofun11, 3, 0));
Obj x105553288534695 = primSet(co, __symbolTable[147], makeNative1(3, clofun12, 2, 0));
Obj x105553288535079 = primSet(co, __symbolTable[146], Nil);
Obj x105553288535495 = primGenSym();
Obj x105553288535655 = primSet(co, __symbolTable[145], x105553288535495);
Obj x105553288537671 = primSet(co, __symbolTable[144], makeNative1(3, clofun13, 2, 0));
Obj x105553288544487 = primSet(co, __symbolTable[143], makeNative1(3, clofun16, 2, 0));
Obj x105553288545447 = primSet(co, __symbolTable[142], makeNative1(2, clofun17, 1, 0));
Obj x105553288555399 = primSet(co, __symbolTable[141], makeNative1(2, clofun19, 1, 0));
Obj x105553288555783 = primSet(co, __symbolTable[138], globalRef(__symbolTable[141]));
Obj x105553288692103 = primSet(co, __symbolTable[137], makeNative1(3, clofun20, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[136], globalRef(__symbolTable[137]));
return;
}
case 2:
{
Obj x105553288692487= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[135], makeNative1(2, clofun21, 1, 0));
return;
}
case 3:
{
Obj x105553288693799= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[134], makeNative1(3, clofun22, 1, 0));
return;
}
case 4:
{
Obj x105553288698631= co->res;
Obj x105553288701735 = primSet(co, __symbolTable[132], makeNative1(3, clofun23, 2, 0));
Obj x105553288703175 = primSet(co, __symbolTable[131], makeNative1(2, clofun24, 1, 0));
Obj x105553288708967 = primSet(co, __symbolTable[130], makeNative1(3, clofun25, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[129], makeNative1(2, clofun26, 1, 0));
return;
}
case 5:
{
Obj x105553288710247= co->res;
struct frame1 __curr = {
.fn = clofun95,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[128], makeNative1(3, clofun27, 1, 0));
return;
}
case 6:
{
Obj x105553288717191= co->res;
Obj x105553288723623 = primSet(co, __symbolTable[125], makeNative1(2, clofun28, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[124], makeNative1(2, clofun29, 1, 0));
return;
}
case 7:
{
Obj x105553288724903= co->res;
Obj x105553288731335 = primSet(co, __symbolTable[123], makeNative1(2, clofun30, 1, 0));
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
case 8:
{
Obj x105553288732615= co->res;
Obj x105553288734727 = primSet(co, __symbolTable[121], makeNative1(2, clofun32, 1, 0));
Obj x105553288739495 = primSet(co, __symbolTable[120], makeNative1(2, clofun33, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 9,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[119], makeNative1(2, clofun34, 1, 0));
return;
}
case 9:
{
Obj x105553288740775= co->res;
Obj x105553288754407 = primSet(co, __symbolTable[118], makeNative1(5, clofun36, 4, 0));
Obj x105553288641415 = primSet(co, __symbolTable[117], makeNative1(5, clofun38, 4, 0));
Obj x105553288649223 = primSet(co, __symbolTable[111], makeNative1(3, clofun40, 2, 0));
Obj x105553288662567 = primSet(co, __symbolTable[109], makeNative1(3, clofun42, 2, 0));
Obj x105553288671463 = primSet(co, __symbolTable[108], makeNative1(2, clofun44, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 10,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[107], makeNative1(2, clofun45, 1, 0));
return;
}
case 10:
{
Obj x105553288672359= co->res;
Obj x105553288833255 = primSet(co, __symbolTable[106], makeNative1(5, clofun48, 3, 0));
Obj x105553288834279 = primSet(co, __symbolTable[104], makeNative1(2, clofun49, 1, 0));
Obj x105553288837511 = primSet(co, __symbolTable[103], makeNative1(3, clofun50, 2, 0));
Obj x105553288840007 = primSet(co, __symbolTable[102], makeNative1(3, clofun51, 2, 0));
Obj x105553288840967 = primSet(co, __symbolTable[101], makeNative1(2, clofun52, 1, 0));
Obj x105553288845927 = primSet(co, __symbolTable[100], makeNative1(4, clofun53, 3, 0));
Obj x105553288846951 = primSet(co, __symbolTable[99], makeNative1(3, clofun54, 2, 0));
Obj x105553288850087 = primSet(co, __symbolTable[98], makeNative1(3, clofun55, 2, 0));
Obj x105553288857095 = primSet(co, __symbolTable[97], makeNative1(2, clofun58, 1, 0));
Obj x105553288860167 = primSet(co, __symbolTable[96], makeNative1(2, clofun59, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 11,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[95], makeNative1(3, clofun60, 1, 0));
return;
}
case 11:
{
Obj x105553288866951= co->res;
Obj x105553288868071 = primSet(co, __symbolTable[94], makeNative1(2, clofun61, 1, 0));
Obj x105553288868743 = primSet(co, __symbolTable[92], makeNative1(2, clofun62, 1, 0));
Obj x105553288870599 = primSet(co, __symbolTable[138], makeNative1(2, clofun63, 1, 0));
Obj x105553288885191 = primSet(co, __symbolTable[91], makeNative1(2, clofun66, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 12,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[89], makeNative1(2, clofun67, 1, 0));
return;
}
case 12:
{
Obj x105553288886471= co->res;
Obj x105553288767175 = primSet(co, __symbolTable[88], makeNative1(2, clofun69, 1, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 13,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[86], makeNative1(2, clofun70, 1, 0));
return;
}
case 13:
{
Obj x105553288768551= co->res;
Obj x105553288775335 = primSet(co, __symbolTable[85], makeNative1(3, clofun71, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 14,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[84], makeNative1(2, clofun72, 1, 0));
return;
}
case 14:
{
Obj x105553288777255= co->res;
Obj x105553288795303 = primSet(co, __symbolTable[83], makeNative1(5, clofun75, 4, 0));
Obj x105553288796391 = primSet(co, __symbolTable[80], makeNative1(3, clofun76, 2, 0));
struct frame1 __curr = {
.fn = clofun95,
.label = 15,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[144]), __symbolTable[79], makeNative1(2, clofun79, 1, 0));
return;
}
case 15:
{
Obj x105553288806855= co->res;
Obj x105553288810791 = primSet(co, __symbolTable[76], makeNative1(3, clofun80, 2, 0));
Obj x105553288819175 = primSet(co, __symbolTable[71], makeNative1(5, clofun81, 3, 0));
Obj x105553288820167 = makeCons(makeCString("primSet"), Nil);
Obj x105553288820327 = makeCons(MAKE_NUMBER(2), x105553288820167);
Obj x105553288820487 = makeCons(__symbolTable[68], x105553288820327);
Obj x105553288821287 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x105553288821447 = makeCons(MAKE_NUMBER(1), x105553288821287);
Obj x105553288821607 = makeCons(__symbolTable[115], x105553288821447);
Obj x105553288822407 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x105553288822567 = makeCons(MAKE_NUMBER(1), x105553288822407);
Obj x105553288822727 = makeCons(__symbolTable[114], x105553288822567);
Obj x105553288954599 = makeCons(makeCString("makeCons"), Nil);
Obj x105553288954759 = makeCons(MAKE_NUMBER(2), x105553288954599);
Obj x105553288954919 = makeCons(__symbolTable[152], x105553288954759);
Obj x105553288955719 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x105553288955879 = makeCons(MAKE_NUMBER(1), x105553288955719);
Obj x105553288956039 = makeCons(__symbolTable[116], x105553288955879);
Obj x105553288956839 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x105553288956999 = makeCons(MAKE_NUMBER(2), x105553288956839);
Obj x105553288957159 = makeCons(__symbolTable[67], x105553288956999);
Obj x105553288957959 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x105553288958119 = makeCons(MAKE_NUMBER(2), x105553288957959);
Obj x105553288958279 = makeCons(__symbolTable[66], x105553288958119);
Obj x105553288959079 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x105553288959239 = makeCons(MAKE_NUMBER(2), x105553288959079);
Obj x105553288959399 = makeCons(__symbolTable[65], x105553288959239);
Obj x105553288960199 = makeCons(makeCString("primDiv"), Nil);
Obj x105553288960359 = makeCons(MAKE_NUMBER(2), x105553288960199);
Obj x105553288960519 = makeCons(__symbolTable[64], x105553288960359);
Obj x105553288961319 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x105553288961479 = makeCons(MAKE_NUMBER(2), x105553288961319);
Obj x105553288961639 = makeCons(__symbolTable[113], x105553288961479);
Obj x105553288962439 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x105553288962599 = makeCons(MAKE_NUMBER(2), x105553288962439);
Obj x105553288962759 = makeCons(__symbolTable[63], x105553288962599);
Obj x105553288963559 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x105553288963719 = makeCons(MAKE_NUMBER(2), x105553288963559);
Obj x105553288963879 = makeCons(__symbolTable[62], x105553288963719);
Obj x105553288964679 = makeCons(makeCString("primGenSym"), Nil);
Obj x105553288964839 = makeCons(MAKE_NUMBER(0), x105553288964679);
Obj x105553288964999 = makeCons(__symbolTable[61], x105553288964839);
Obj x105553288965799 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x105553288965959 = makeCons(MAKE_NUMBER(1), x105553288965799);
Obj x105553288966119 = makeCons(__symbolTable[60], x105553288965959);
Obj x105553288966919 = makeCons(makeCString("primNot"), Nil);
Obj x105553288967079 = makeCons(MAKE_NUMBER(1), x105553288966919);
Obj x105553288967239 = makeCons(__symbolTable[59], x105553288967079);
Obj x105553288968039 = makeCons(makeCString("primIsNumber"), Nil);
Obj x105553288968199 = makeCons(MAKE_NUMBER(1), x105553288968039);
Obj x105553288968359 = makeCons(__symbolTable[58], x105553288968199);
Obj x105553288969159 = makeCons(makeCString("primIsString"), Nil);
Obj x105553288969319 = makeCons(MAKE_NUMBER(1), x105553288969159);
Obj x105553288969479 = makeCons(__symbolTable[57], x105553288969319);
Obj x105553288969671 = makeCons(x105553288969479, Nil);
Obj x105553288969831 = makeCons(x105553288968359, x105553288969671);
Obj x105553288969991 = makeCons(x105553288967239, x105553288969831);
Obj x105553288970151 = makeCons(x105553288966119, x105553288969991);
Obj x105553288970311 = makeCons(x105553288964999, x105553288970151);
Obj x105553288970471 = makeCons(x105553288963879, x105553288970311);
Obj x105553288970631 = makeCons(x105553288962759, x105553288970471);
Obj x105553288970791 = makeCons(x105553288961639, x105553288970631);
Obj x105553288970951 = makeCons(x105553288960519, x105553288970791);
Obj x105553288971111 = makeCons(x105553288959399, x105553288970951);
Obj x105553288971271 = makeCons(x105553288958279, x105553288971111);
Obj x105553288971431 = makeCons(x105553288957159, x105553288971271);
Obj x105553288971591 = makeCons(x105553288956039, x105553288971431);
Obj x105553288971751 = makeCons(x105553288954919, x105553288971591);
Obj x105553288971911 = makeCons(x105553288822727, x105553288971751);
Obj x105553288972071 = makeCons(x105553288821607, x105553288971911);
Obj x105553288972231 = makeCons(x105553288820487, x105553288972071);
Obj x105553288972391 = primSet(co, __symbolTable[69], x105553288972231);
Obj x105553288982087 = primSet(co, __symbolTable[56], makeNative1(3, clofun83, 2, 0));
Obj x105553288984167 = primSet(co, __symbolTable[55], makeNative1(2, clofun84, 1, 0));
Obj x105553289086279 = primSet(co, __symbolTable[93], makeNative1(5, clofun94, 4, 0));
Obj x105553289092743 = makeCons(__symbolTable[98], Nil);
Obj x105553289092903 = makeCons(__symbolTable[99], x105553289092743);
Obj x105553289093063 = makeCons(__symbolTable[101], x105553289092903);
Obj x105553289093223 = makeCons(__symbolTable[132], x105553289093063);
Obj x105553289093383 = makeCons(__symbolTable[138], x105553289093223);
Obj x105553289093543 = makeCons(__symbolTable[147], x105553289093383);
Obj x105553289093703 = makeCons(__symbolTable[149], x105553289093543);
Obj x105553289093863 = makeCons(__symbolTable[39], x105553289093703);
Obj x105553289094023 = makeCons(__symbolTable[40], x105553289093863);
Obj x105553289094183 = makeCons(__symbolTable[41], x105553289094023);
Obj x105553289094343 = makeCons(__symbolTable[81], x105553289094183);
Obj x105553289094503 = makeCons(__symbolTable[42], x105553289094343);
Obj x105553289094663 = makeCons(__symbolTable[43], x105553289094503);
Obj x105553289094823 = makeCons(__symbolTable[70], x105553289094663);
Obj x105553289094983 = makeCons(__symbolTable[44], x105553289094823);
Obj x105553289095143 = makeCons(__symbolTable[45], x105553289094983);
Obj x105553289095303 = makeCons(__symbolTable[46], x105553289095143);
Obj x105553289095463 = makeCons(__symbolTable[47], x105553289095303);
Obj x105553289095623 = makeCons(__symbolTable[48], x105553289095463);
Obj x105553289095783 = makeCons(__symbolTable[49], x105553289095623);
Obj x105553289095943 = makeCons(__symbolTable[50], x105553289095783);
Obj x105553289096103 = makeCons(__symbolTable[51], x105553289095943);
Obj x105553289096263 = makeCons(__symbolTable[52], x105553289096103);
Obj x105553289096423 = makeCons(__symbolTable[72], x105553289096263);
Obj x105553289096583 = makeCons(__symbolTable[74], x105553289096423);
Obj x105553289096743 = makeCons(__symbolTable[73], x105553289096583);
Obj x105553289096903 = makeCons(__symbolTable[161], x105553289096743);
Obj x105553289097063 = makeCons(__symbolTable[54], x105553289096903);
Obj x105553289097223 = makeCons(__symbolTable[121], x105553289097063);
Obj x105553289097383 = makeCons(__symbolTable[131], x105553289097223);
Obj x105553289097543 = makeCons(__symbolTable[151], x105553289097383);
Obj x105553289097703 = makeCons(__symbolTable[154], x105553289097543);
Obj x105553289097863 = makeCons(__symbolTable[155], x105553289097703);
Obj x105553289098023 = makeCons(__symbolTable[156], x105553289097863);
Obj x105553289098183 = makeCons(__symbolTable[157], x105553289098023);
Obj x105553289098343 = makeCons(__symbolTable[158], x105553289098183);
Obj x105553289098503 = makeCons(__symbolTable[159], x105553289098343);
Obj x105553289098663 = makeCons(__symbolTable[160], x105553289098503);
Obj x105553289098823 = primSet(co, __symbolTable[53], x105553289098663);
Obj x105553289099207 = primSet(co, __symbolTable[38], globalRef(__symbolTable[160]));
Obj x105553289099591 = primSet(co, __symbolTable[37], globalRef(__symbolTable[159]));
Obj x105553289099975 = primSet(co, __symbolTable[36], globalRef(__symbolTable[158]));
Obj x105553289100359 = primSet(co, __symbolTable[35], globalRef(__symbolTable[157]));
Obj x105553289100743 = primSet(co, __symbolTable[34], globalRef(__symbolTable[156]));
Obj x105553289101127 = primSet(co, __symbolTable[33], globalRef(__symbolTable[155]));
Obj x105553289101511 = primSet(co, __symbolTable[32], globalRef(__symbolTable[154]));
Obj x105553289101895 = primSet(co, __symbolTable[31], globalRef(__symbolTable[151]));
Obj x105553289102279 = primSet(co, __symbolTable[30], globalRef(__symbolTable[131]));
Obj x105553289102663 = primSet(co, __symbolTable[29], globalRef(__symbolTable[121]));
Obj x105553289103047 = primSet(co, __symbolTable[28], globalRef(__symbolTable[161]));
Obj x105553289103431 = primSet(co, __symbolTable[27], globalRef(__symbolTable[54]));
Obj x105553289103815 = primSet(co, __symbolTable[26], globalRef(__symbolTable[73]));
Obj x105553289104199 = primSet(co, __symbolTable[25], globalRef(__symbolTable[74]));
Obj x105553289104583 = primSet(co, __symbolTable[24], globalRef(__symbolTable[72]));
Obj x105553289104967 = primSet(co, __symbolTable[23], globalRef(__symbolTable[52]));
Obj x105553289105351 = primSet(co, __symbolTable[22], globalRef(__symbolTable[51]));
Obj x105553289105735 = primSet(co, __symbolTable[21], globalRef(__symbolTable[50]));
Obj x105553289106119 = primSet(co, __symbolTable[20], globalRef(__symbolTable[49]));
Obj x105553289106503 = primSet(co, __symbolTable[19], globalRef(__symbolTable[48]));
Obj x105553289106887 = primSet(co, __symbolTable[18], globalRef(__symbolTable[47]));
Obj x105553289107271 = primSet(co, __symbolTable[17], globalRef(__symbolTable[46]));
Obj x105553289107655 = primSet(co, __symbolTable[16], globalRef(__symbolTable[44]));
Obj x105553289108039 = primSet(co, __symbolTable[15], globalRef(__symbolTable[70]));
Obj x105553289108423 = primSet(co, __symbolTable[14], globalRef(__symbolTable[45]));
Obj x105553289108807 = primSet(co, __symbolTable[13], globalRef(__symbolTable[43]));
Obj x105553289109191 = primSet(co, __symbolTable[12], globalRef(__symbolTable[41]));
Obj x105553289109575 = primSet(co, __symbolTable[11], globalRef(__symbolTable[42]));
Obj x105553289109959 = primSet(co, __symbolTable[10], globalRef(__symbolTable[81]));
Obj x105553289110343 = primSet(co, __symbolTable[9], globalRef(__symbolTable[40]));
Obj x105553289110727 = primSet(co, __symbolTable[8], globalRef(__symbolTable[39]));
Obj x105553289111111 = primSet(co, __symbolTable[7], globalRef(__symbolTable[149]));
Obj x105553289111495 = primSet(co, __symbolTable[6], globalRef(__symbolTable[147]));
Obj x105553289111879 = primSet(co, __symbolTable[5], globalRef(__symbolTable[138]));
Obj x105553289112263 = primSet(co, __symbolTable[4], globalRef(__symbolTable[132]));
Obj x105553289112647 = primSet(co, __symbolTable[3], globalRef(__symbolTable[101]));
Obj x105553289113031 = primSet(co, __symbolTable[2], globalRef(__symbolTable[99]));
Obj x105553289113415 = primSet(co, __symbolTable[1], globalRef(__symbolTable[98]));
Obj x105553289113735 = primSet(co, __symbolTable[0], globalRef(__symbolTable[56]));
coraReturn(co, x105553289113735);
return;
}
}
}

static void clofun94(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228941639 = R[1];
Obj x105553228941671 = R[2];
Obj x105553228941703 = R[3];
Obj x105553228941735 = R[4];
Obj x105553287431495 = makeNative1(2, clofun93, 1, 4, x105553228941639, x105553228941671, x105553228941703, x105553228941735);
R[1] = x105553228941735;
R[2] = x105553287431495;
struct frame1 __curr = {
.fn = clofun94,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[54]), x105553228941735);
return;
}
case 1:
{
Obj x105553288951687= co->res;
Obj x105553228941735 = R[1];
Obj x105553287431495 = R[2];
if (True == x105553288951687) {
co->ctx.sp = R;
coraCall1(co, x105553287431495, True);
return;
} else {
Obj x105553288952199 = primIsString(x105553228941735);
if (True == x105553288952199) {
co->ctx.sp = R;
coraCall1(co, x105553287431495, True);
return;
} else {
R[1] = x105553228941735;
R[2] = x105553287431495;
struct frame1 __curr = {
.fn = clofun94,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[121]), x105553228941735);
return;
}
}
}
case 2:
{
Obj x105553288952679= co->res;
Obj x105553228941735 = R[1];
Obj x105553287431495 = R[2];
if (True == x105553288952679) {
co->ctx.sp = R;
coraCall1(co, x105553287431495, True);
return;
} else {
R[1] = x105553287431495;
struct frame1 __curr = {
.fn = clofun94,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x105553228941735);
return;
}
}
case 3:
{
Obj x105553288953191= co->res;
Obj x105553287431495 = R[1];
if (True == x105553288953191) {
co->ctx.sp = R;
coraCall1(co, x105553287431495, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287431495, False);
return;
}
}
}
}

static void clofun93(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287431527 = R[1];
if (True == x105553287431527) {
coraReturn(co, closureRef(R[0], 3));
return;
} else {
Obj x105553228949575 = makeNative1(3, clofun92, 0, 4, closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553288944359 = PRIM_ISCONS(closureRef(R[0], 3));
if (True == x105553288944359) {
Obj x105553288944839 = PRIM_CAR(closureRef(R[0], 3));
Obj x105553288944999 = PRIM_EQ(__symbolTable[139], x105553288944839);
if (True == x105553288944999) {
Obj x105553288945447 = PRIM_CDR(closureRef(R[0], 3));
Obj x105553288945575 = PRIM_ISCONS(x105553288945447);
if (True == x105553288945575) {
Obj x105553288946023 = PRIM_CDR(closureRef(R[0], 3));
Obj x105553288946151 = PRIM_CAR(x105553288946023);
Obj x = x105553288946151;
Obj x105553288946759 = PRIM_CDR(closureRef(R[0], 3));
Obj x105553288946887 = PRIM_CDR(x105553288946759);
Obj x105553288947047 = PRIM_EQ(Nil, x105553288946887);
if (True == x105553288947047) {
Obj x105553288947527 = makeCons(x, Nil);
Obj x105553288947687 = makeCons(__symbolTable[139], x105553288947527);
coraReturn(co, x105553288947687);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228949575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228949575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228949575);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228949575);
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
Obj x105553288985159 = primIsSymbol(closureRef(R[0], 0));
if (True == x105553288985159) {
struct frame1 __curr = {
.fn = clofun92,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[132]), closureRef(R[0], 0), closureRef(R[0], 1));
return;
} else {
Obj x105553228960647 = makeNative1(3, clofun91, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x105553288932071 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288932071) {
Obj x105553288932551 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553288932711 = PRIM_EQ(__symbolTable[140], x105553288932551);
if (True == x105553288932711) {
Obj x105553288933159 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288933287 = PRIM_ISCONS(x105553288933159);
if (True == x105553288933287) {
Obj x105553288933735 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288933863 = PRIM_CAR(x105553288933735);
Obj args = x105553288933863;
Obj x105553288934439 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288934567 = PRIM_CDR(x105553288934439);
Obj x105553288934695 = PRIM_ISCONS(x105553288934567);
if (True == x105553288934695) {
Obj x105553288935271 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288935399 = PRIM_CDR(x105553288935271);
Obj x105553288935527 = PRIM_CAR(x105553288935399);
Obj body = x105553288935527;
Obj x105553288936263 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288936391 = PRIM_CDR(x105553288936263);
Obj x105553288936519 = PRIM_CDR(x105553288936391);
Obj x105553288936679 = PRIM_EQ(Nil, x105553288936519);
if (True == x105553288936679) {
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), args, closureRef(R[0], 1));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228960647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228960647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228960647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228960647);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228960647);
return;
}
}
}
case 1:
{
Obj x105553288937575= co->res;
Obj body = R[1];
Obj args = R[2];
R[1] = args;
struct frame1 __curr = {
.fn = clofun92,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[93]), 4, x105553288937575, closureRef(R[0], 2), closureRef(R[0], 3), body);
return;
}
case 2:
{
Obj x105553288937927= co->res;
Obj args = R[1];
Obj x105553288938151 = makeCons(x105553288937927, Nil);
Obj x105553288938311 = makeCons(args, x105553288938151);
Obj x105553288938471 = makeCons(__symbolTable[140], x105553288938311);
coraReturn(co, x105553288938471);
return;
}
case 3:
{
Obj x105553288985543= co->res;
if (True == x105553288985543) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
struct frame1 __curr = {
.fn = clofun92,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[55]), closureRef(R[0], 0));
return;
}
}
case 4:
{
Obj x105553288985959= co->res;
if (True == x105553288985959) {
coraReturn(co, closureRef(R[0], 0));
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), closureRef(R[0], 0), closureRef(R[0], 2), closureRef(R[0], 3));
return;
}
}
}
}

static void clofun91(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228968935 = makeNative1(1, clofun90, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x105553288909063 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288909063) {
Obj x105553288909543 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553288909703 = PRIM_EQ(__symbolTable[90], x105553288909543);
if (True == x105553288909703) {
Obj x105553288910151 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288910279 = PRIM_ISCONS(x105553288910151);
if (True == x105553288910279) {
Obj x105553288910855 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288910983 = PRIM_CAR(x105553288910855);
Obj x105553288911111 = PRIM_ISCONS(x105553288910983);
if (True == x105553288911111) {
Obj x105553288911847 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288911975 = PRIM_CAR(x105553288911847);
Obj x105553288912103 = PRIM_CAR(x105553288911975);
Obj x105553288912263 = PRIM_EQ(__symbolTable[81], x105553288912103);
if (True == x105553288912263) {
Obj x105553288912967 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288913095 = PRIM_CAR(x105553288912967);
Obj x105553288913223 = PRIM_CDR(x105553288913095);
Obj x105553288913351 = PRIM_ISCONS(x105553288913223);
if (True == x105553288913351) {
Obj x105553288914055 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288914183 = PRIM_CAR(x105553288914055);
Obj x105553288914311 = PRIM_CDR(x105553288914183);
Obj x105553288914439 = PRIM_CAR(x105553288914311);
Obj pkg = x105553288914439;
Obj x105553288915303 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288915431 = PRIM_CAR(x105553288915303);
Obj x105553288915559 = PRIM_CDR(x105553288915431);
Obj x105553288915687 = PRIM_CDR(x105553288915559);
Obj x105553288915847 = PRIM_EQ(Nil, x105553288915687);
if (True == x105553288915847) {
Obj x105553288916423 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288916551 = PRIM_CDR(x105553288916423);
Obj x105553288916679 = PRIM_ISCONS(x105553288916551);
if (True == x105553288916679) {
Obj x105553288917255 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288917383 = PRIM_CDR(x105553288917255);
Obj x105553288917511 = PRIM_CAR(x105553288917383);
Obj y = x105553288917511;
Obj x105553288918247 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288918375 = PRIM_CDR(x105553288918247);
Obj x105553288918503 = PRIM_CDR(x105553288918375);
Obj x105553288918663 = PRIM_EQ(Nil, x105553288918503);
if (True == x105553288918663) {
Obj x105553288918983 = primIsString(pkg);
if (True == x105553288918983) {
Obj x105553288919975 = makeCons(pkg, Nil);
Obj x105553288920135 = makeCons(__symbolTable[81], x105553288919975);
R[1] = pkg;
R[2] = y;
struct frame1 __curr = {
.fn = clofun91,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[93]), 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), x105553288920135);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228968935);
return;
}
}
case 1:
{
Obj x105553288920359= co->res;
Obj pkg = R[1];
Obj y = R[2];
Obj x105553288921063 = makeCons(pkg, closureRef(R[0], 3));
R[1] = x105553288920359;
struct frame1 __curr = {
.fn = clofun91,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[93]), 4, closureRef(R[0], 1), closureRef(R[0], 2), x105553288921063, y);
return;
}
case 2:
{
Obj x105553288921319= co->res;
Obj x105553288920359 = R[1];
Obj x105553288921543 = makeCons(x105553288921319, Nil);
Obj x105553288921703 = makeCons(x105553288920359, x105553288921543);
Obj x105553288921863 = makeCons(__symbolTable[90], x105553288921703);
coraReturn(co, x105553288921863);
return;
}
}
}

static void clofun90(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228980423 = makeNative1(3, clofun88, 0, 4, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3));
Obj x105553288902439 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288902439) {
Obj x105553288902759 = PRIM_CAR(closureRef(R[0], 0));
Obj op = x105553288902759;
Obj x105553288903079 = PRIM_CDR(closureRef(R[0], 0));
Obj args = x105553288903079;
Obj x105553287332359 = makeNative1(2, clofun89, 1, 6, op, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), args, x105553228980423);
Obj x105553288905959 = PRIM_EQ(op, __symbolTable[126]);
if (True == x105553288905959) {
co->ctx.sp = R;
coraCall1(co, x105553287332359, True);
return;
} else {
Obj x105553288906503 = PRIM_EQ(op, __symbolTable[90]);
if (True == x105553288906503) {
co->ctx.sp = R;
coraCall1(co, x105553287332359, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287332359, False);
return;
}
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228980423);
return;
}
}
}
}

static void clofun89(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287332391 = R[1];
if (True == x105553287332391) {
struct frame1 __curr = {
.fn = clofun89,
.label = 1,
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
Obj x105553288903943= co->res;
struct frame1 __curr = {
.fn = clofun89,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), x105553288903943, closureRef(R[0], 4));
return;
}
case 2:
{
Obj x105553288904167= co->res;
Obj x105553288904359 = makeCons(closureRef(R[0], 0), x105553288904167);
coraReturn(co, x105553288904359);
return;
}
}
}

static void clofun88(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228985831 = makeNative1(1, clofun87, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553289016391 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553289016391) {
Obj x105553289016871 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553289017031 = PRIM_EQ(__symbolTable[129], x105553289016871);
if (True == x105553289017031) {
Obj x105553289017479 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553289017607 = PRIM_ISCONS(x105553289017479);
if (True == x105553289017607) {
Obj x105553289018055 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553289018183 = PRIM_CAR(x105553289018055);
Obj a = x105553289018183;
Obj x105553289018759 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553289018887 = PRIM_CDR(x105553289018759);
Obj x105553289019015 = PRIM_ISCONS(x105553289018887);
if (True == x105553289019015) {
Obj x105553288888519 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288888647 = PRIM_CDR(x105553288888519);
Obj x105553288888775 = PRIM_CAR(x105553288888647);
Obj b = x105553288888775;
Obj x105553288889479 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288889607 = PRIM_CDR(x105553288889479);
Obj x105553288889735 = PRIM_CDR(x105553288889607);
Obj x105553288889863 = PRIM_ISCONS(x105553288889735);
if (True == x105553288889863) {
Obj x105553288890567 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288890695 = PRIM_CDR(x105553288890567);
Obj x105553288890823 = PRIM_CDR(x105553288890695);
Obj x105553288890951 = PRIM_CAR(x105553288890823);
Obj c = x105553288890951;
Obj x105553288891815 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288891943 = PRIM_CDR(x105553288891815);
Obj x105553288892071 = PRIM_CDR(x105553288891943);
Obj x105553288892199 = PRIM_CDR(x105553288892071);
Obj x105553288892359 = PRIM_EQ(Nil, x105553288892199);
if (True == x105553288892359) {
R[1] = c;
R[2] = a;
struct frame1 __curr = {
.fn = clofun88,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[93]), 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), b);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228985831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228985831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228985831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228985831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228985831);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228985831);
return;
}
}
case 1:
{
Obj x105553288893255= co->res;
Obj c = R[1];
Obj a = R[2];
Obj x105553288893895 = makeCons(a, closureRef(R[0], 1));
R[1] = x105553288893255;
R[2] = a;
struct frame1 __curr = {
.fn = clofun88,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[93]), 4, x105553288893895, closureRef(R[0], 2), closureRef(R[0], 3), c);
return;
}
case 2:
{
Obj x105553288894215= co->res;
Obj x105553288893255 = R[1];
Obj a = R[2];
Obj x105553288894439 = makeCons(x105553288894215, Nil);
Obj x105553288894599 = makeCons(x105553288893255, x105553288894439);
Obj x105553288894759 = makeCons(a, x105553288894599);
Obj x105553288894919 = makeCons(__symbolTable[129], x105553288894759);
coraReturn(co, x105553288894919);
return;
}
}
}

static void clofun87(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228864359 = makeNative1(2, clofun86, 0, 4, closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553289002439 = PRIM_ISCONS(closureRef(R[0], 2));
if (True == x105553289002439) {
Obj x105553289002919 = PRIM_CAR(closureRef(R[0], 2));
Obj x105553289003079 = PRIM_EQ(__symbolTable[78], x105553289002919);
if (True == x105553289003079) {
Obj x105553289003527 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289003655 = PRIM_ISCONS(x105553289003527);
if (True == x105553289003655) {
Obj x105553289004103 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289004231 = PRIM_CAR(x105553289004103);
Obj path = x105553289004231;
Obj x105553289004807 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289004935 = PRIM_CDR(x105553289004807);
Obj x105553289005063 = PRIM_ISCONS(x105553289004935);
if (True == x105553289005063) {
Obj x105553289005639 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289005767 = PRIM_CDR(x105553289005639);
Obj x105553289005895 = PRIM_CAR(x105553289005767);
Obj import = x105553289005895;
Obj x105553289006599 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289006727 = PRIM_CDR(x105553289006599);
Obj x105553289006855 = PRIM_CDR(x105553289006727);
Obj x105553289006983 = PRIM_ISCONS(x105553289006855);
if (True == x105553289006983) {
Obj x105553289007687 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289007815 = PRIM_CDR(x105553289007687);
Obj x105553289007943 = PRIM_CDR(x105553289007815);
Obj x105553289008071 = PRIM_CAR(x105553289007943);
Obj body = x105553289008071;
Obj x105553289008935 = PRIM_CDR(closureRef(R[0], 2));
Obj x105553289009063 = PRIM_CDR(x105553289008935);
Obj x105553289009191 = PRIM_CDR(x105553289009063);
Obj x105553289009319 = PRIM_CDR(x105553289009191);
Obj x105553289009479 = PRIM_EQ(Nil, x105553289009319);
if (True == x105553289009479) {
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[93]), 4, closureRef(R[0], 3), path, import, body);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228864359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228864359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228864359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228864359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228864359);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228864359);
return;
}
}
}
}

static void clofun86(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228873959 = makeNative1(1, clofun85, 0, 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), closureRef(R[0], 0));
Obj x105553288989319 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288989319) {
Obj x105553288989799 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553288989959 = PRIM_EQ(__symbolTable[133], x105553288989799);
if (True == x105553288989959) {
Obj x105553288990407 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288990535 = PRIM_ISCONS(x105553288990407);
if (True == x105553288990535) {
Obj x105553288990983 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288991111 = PRIM_CAR(x105553288990983);
Obj var = x105553288991111;
Obj x105553288991687 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288991815 = PRIM_CDR(x105553288991687);
Obj x105553288991943 = PRIM_ISCONS(x105553288991815);
if (True == x105553288991943) {
Obj x105553288992519 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288992647 = PRIM_CDR(x105553288992519);
Obj x105553288992775 = PRIM_CAR(x105553288992647);
Obj val = x105553288992775;
Obj x105553288993511 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288993639 = PRIM_CDR(x105553288993511);
Obj x105553288993767 = PRIM_CDR(x105553288993639);
Obj x105553288993927 = PRIM_EQ(Nil, x105553288993767);
if (True == x105553288993927) {
R[1] = val;
struct frame1 __curr = {
.fn = clofun86,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[76]), var, closureRef(R[0], 2));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228873959);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228873959);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228873959);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228873959);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228873959);
return;
}
}
case 1:
{
Obj x105553288994311= co->res;
Obj val = R[1];
Obj var1 = x105553288994311;
Obj x105553288995111 = makeCons(var1, Nil);
Obj x105553288995271 = makeCons(__symbolTable[139], x105553288995111);
R[1] = x105553288995271;
struct frame1 __curr = {
.fn = clofun86,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[93]), 4, closureRef(R[0], 1), closureRef(R[0], 2), closureRef(R[0], 3), val);
return;
}
case 2:
{
Obj x105553288995879= co->res;
Obj x105553288995271 = R[1];
Obj x105553288996103 = makeCons(x105553288995879, Nil);
Obj x105553288996263 = makeCons(x105553288995271, x105553288996103);
Obj x105553288996423 = makeCons(__symbolTable[68], x105553288996263);
coraReturn(co, x105553288996423);
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
Obj x105553288988391= co->res;
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[147]), x105553288988391, closureRef(R[0], 3));
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[56]), x, globalRef(__symbolTable[69]));
return;
}
case 1:
{
Obj x105553288982951= co->res;
struct frame1 __curr = {
.fn = clofun84,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x105553288982951);
return;
}
case 2:
{
Obj x105553288983111= co->res;
Obj x105553288983271 = primNot(x105553288983111);
coraReturn(co, x105553288983271);
return;
}
}
}

static void clofun83(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228781895 = R[1];
Obj x105553228781927 = R[2];
Obj x105553288973063 = PRIM_EQ(Nil, x105553228781927);
if (True == x105553288973063) {
coraReturn(co, Nil);
return;
} else {
Obj x105553228786247 = makeNative1(1, clofun82, 0, 2, x105553228781927, x105553228781895);
Obj x105553288975975 = PRIM_ISCONS(x105553228781927);
if (True == x105553288975975) {
Obj x105553288976423 = PRIM_CAR(x105553228781927);
Obj x105553288976551 = PRIM_ISCONS(x105553288976423);
if (True == x105553288976551) {
Obj x105553288976999 = PRIM_CAR(x105553228781927);
Obj x105553288977127 = PRIM_CAR(x105553288976999);
Obj x = x105553288977127;
Obj x105553288977575 = PRIM_CAR(x105553228781927);
Obj x105553288977703 = PRIM_CDR(x105553288977575);
Obj y = x105553288977703;
Obj x105553288978023 = PRIM_CDR(x105553228781927);
Obj x105553288978407 = PRIM_EQ(x105553228781895, x);
if (True == x105553288978407) {
Obj x105553288978727 = makeCons(x, y);
coraReturn(co, x105553288978727);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228786247);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228786247);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228786247);
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
Obj x105553288973575 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288973575) {
Obj x105553288973895 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553288974215 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x105553288974215;
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
Obj x105553228742407 = R[1];
Obj x105553228742439 = R[2];
Obj x105553228742471 = R[3];
Obj x105553288811463 = PRIM_EQ(Nil, x105553228742471);
if (True == x105553288811463) {
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[76]), x105553228742407, x105553228742439);
return;
} else {
Obj x105553288812135 = PRIM_ISCONS(x105553228742471);
if (True == x105553288812135) {
Obj x105553288812455 = PRIM_CAR(x105553228742471);
Obj import = x105553288812455;
Obj x105553288812775 = PRIM_CDR(x105553228742471);
Obj more = x105553288812775;
R[1] = import;
R[2] = x105553228742407;
R[3] = x105553228742439;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 1,
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
Obj x105553288813415= co->res;
Obj import = R[1];
Obj x105553228742407 = R[2];
Obj x105553228742439 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x105553228742407;
R[3] = x105553228742439;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[74]), x105553288813415);
return;
}
case 2:
{
Obj x105553288813575= co->res;
Obj import = R[1];
Obj x105553228742407 = R[2];
Obj x105553228742439 = R[3];
Obj more = R[4];
R[1] = import;
R[2] = x105553228742407;
R[3] = x105553228742439;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[70]), x105553288813575, Nil);
return;
}
case 3:
{
Obj x105553288813799= co->res;
Obj import = R[1];
Obj x105553228742407 = R[2];
Obj x105553228742439 = R[3];
Obj more = R[4];
Obj export = x105553288813799;
R[1] = import;
R[2] = x105553228742407;
R[3] = x105553228742439;
R[4] = more;
struct frame1 __curr = {
.fn = clofun81,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[132]), x105553228742407, export);
return;
}
case 4:
{
Obj x105553288814215= co->res;
Obj import = R[1];
Obj x105553228742407 = R[2];
Obj x105553228742439 = R[3];
Obj more = R[4];
if (True == x105553288814215) {
R[1] = import;
struct frame1 __curr = {
.fn = clofun81,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[72]), x105553228742407);
return;
} else {
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[71]), x105553228742407, x105553228742439, more);
return;
}
}
case 5:
{
Obj x105553288814951= co->res;
Obj import = R[1];
R[1] = import;
struct frame1 __curr = {
.fn = clofun81,
.label = 6,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), makeCString("#"), x105553288814951);
return;
}
case 6:
{
Obj x105553288815143= co->res;
Obj import = R[1];
struct frame1 __curr = {
.fn = clofun81,
.label = 7,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), import, x105553288815143);
return;
}
case 7:
{
Obj x105553288815335= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), x105553288815335);
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
Obj x105553288807559 = PRIM_EQ(ns, makeCString(""));
if (True == x105553288807559) {
coraReturn(co, var);
return;
} else {
R[1] = var;
R[2] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 1,
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
Obj x105553288807943= co->res;
Obj var = R[1];
Obj ns = R[2];
if (True == x105553288807943) {
coraReturn(co, var);
return;
} else {
R[1] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[72]), var);
return;
}
}
case 2:
{
Obj x105553288808743= co->res;
Obj ns = R[1];
R[1] = ns;
struct frame1 __curr = {
.fn = clofun80,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), makeCString("#"), x105553288808743);
return;
}
case 3:
{
Obj x105553288808935= co->res;
Obj ns = R[1];
struct frame1 __curr = {
.fn = clofun80,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[73]), ns, x105553288808935);
return;
}
case 4:
{
Obj x105553288809127= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[74]), x105553288809127);
return;
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), sexp);
return;
}
case 1:
{
Obj x105553288796999= co->res;
Obj sexp = R[1];
Obj path = x105553288796999;
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
case 2:
{
Obj x105553288797511= co->res;
Obj path = R[1];
R[1] = path;
struct frame1 __curr = {
.fn = clofun79,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[80]), x105553288797511);
return;
}
case 3:
{
Obj x105553288797671= co->res;
Obj path = R[1];
co->ctx.sp = R;
coraCall1(co, x105553288797671, makeNative1(4, clofun78, 3, 1, path));
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
Obj x105553288798567 = makeCons(makeCString("cora/init"), import);
R[1] = export;
R[2] = body;
R[3] = x105553288798567;
struct frame1 __curr = {
.fn = clofun78,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), makeNative1(2, clofun77, 1, 0), import);
return;
}
case 1:
{
Obj x105553288800519= co->res;
Obj export = R[1];
Obj body = R[2];
Obj x105553288798567 = R[3];
Obj x105553288801639 = makeCons(export, Nil);
Obj x105553288801799 = makeCons(__symbolTable[86], x105553288801639);
Obj x105553288801991 = makeCons(x105553288801799, Nil);
Obj x105553288802151 = makeCons(__symbolTable[77], x105553288801991);
Obj x105553288802311 = makeCons(__symbolTable[133], x105553288802151);
Obj x105553288802503 = makeCons(x105553288802311, body);
R[1] = x105553288798567;
struct frame1 __curr = {
.fn = clofun78,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x105553288800519, x105553288802503);
return;
}
case 2:
{
Obj x105553288802663= co->res;
Obj x105553288798567 = R[1];
Obj x105553288802855 = makeCons(__symbolTable[89], x105553288802663);
Obj x105553288803047 = makeCons(x105553288802855, Nil);
Obj x105553288803207 = makeCons(x105553288798567, x105553288803047);
Obj x105553288803367 = makeCons(closureRef(R[0], 0), x105553288803207);
Obj x105553288803527 = makeCons(__symbolTable[78], x105553288803367);
coraReturn(co, x105553288803527);
return;
}
}
}

static void clofun77(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj imp = R[1];
Obj x105553288799687 = makeCons(imp, Nil);
Obj x105553288799847 = makeCons(__symbolTable[81], x105553288799687);
coraReturn(co, x105553288799847);
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
coraCall(co, globalRef(__symbolTable[83]), 4, data, Nil, Nil, k);
return;
}
}
}

static void clofun75(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228824615 = R[1];
Obj x105553228824647 = R[2];
Obj x105553228824679 = R[3];
Obj x105553228824711 = R[4];
Obj x105553228828455 = makeNative1(1, clofun74, 0, 4, x105553228824679, x105553228824615, x105553228824647, x105553228824711);
Obj x105553288785127 = PRIM_ISCONS(x105553228824615);
if (True == x105553288785127) {
Obj x105553288785575 = PRIM_CAR(x105553228824615);
Obj x105553288785703 = PRIM_ISCONS(x105553288785575);
if (True == x105553288785703) {
Obj x105553288786311 = PRIM_CAR(x105553228824615);
Obj x105553288786439 = PRIM_CAR(x105553288786311);
Obj x105553288786599 = PRIM_EQ(__symbolTable[81], x105553288786439);
if (True == x105553288786599) {
Obj x105553288787175 = PRIM_CAR(x105553228824615);
Obj x105553288787303 = PRIM_CDR(x105553288787175);
Obj x105553288787431 = PRIM_ISCONS(x105553288787303);
if (True == x105553288787431) {
Obj x105553288788007 = PRIM_CAR(x105553228824615);
Obj x105553288788135 = PRIM_CDR(x105553288788007);
Obj x105553288788263 = PRIM_CAR(x105553288788135);
Obj lib = x105553288788263;
Obj x105553288788999 = PRIM_CAR(x105553228824615);
Obj x105553288789127 = PRIM_CDR(x105553288788999);
Obj x105553288789255 = PRIM_CDR(x105553288789127);
Obj x105553288789415 = PRIM_EQ(Nil, x105553288789255);
if (True == x105553288789415) {
Obj x105553288789735 = PRIM_CDR(x105553228824615);
Obj rest = x105553288789735;
Obj x105553288790215 = makeCons(lib, x105553228824647);
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[83]), 4, rest, x105553288790215, x105553228824679, x105553228824711);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228828455);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228828455);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228828455);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228828455);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228828455);
return;
}
}
}
}

static void clofun74(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228836743 = makeNative1(1, clofun73, 0, 4, closureRef(R[0], 3), closureRef(R[0], 2), closureRef(R[0], 0), closureRef(R[0], 1));
Obj x105553288779207 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x105553288779207) {
Obj x105553288779655 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553288779783 = PRIM_ISCONS(x105553288779655);
if (True == x105553288779783) {
Obj x105553288780391 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553288780519 = PRIM_CAR(x105553288780391);
Obj x105553288780679 = PRIM_EQ(__symbolTable[82], x105553288780519);
if (True == x105553288780679) {
Obj x105553288781127 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553288781255 = PRIM_CDR(x105553288781127);
Obj more = x105553288781255;
Obj x105553288781575 = PRIM_CDR(closureRef(R[0], 1));
Obj rest = x105553288781575;
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[83]), 4, rest, closureRef(R[0], 2), more, closureRef(R[0], 3));
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228836743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228836743);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228836743);
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
Obj x105553288778215= co->res;
co->ctx.sp = R;
coraCall3(co, closureRef(R[0], 0), x105553288778215, closureRef(R[0], 2), closureRef(R[0], 3));
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
Obj x105553288776007= co->res;
Obj exp = R[1];
R[1] = x105553288776007;
struct frame1 __curr = {
.fn = clofun72,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 2:
{
Obj x105553288776327= co->res;
Obj x105553288776007 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[85]), x105553288776007, x105553288776327);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), arglist);
return;
}
case 1:
{
Obj x105553288769319= co->res;
Obj arglist = R[1];
Obj fn = R[2];
R[1] = arglist;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x105553288769319);
return;
}
case 2:
{
Obj x105553288769479= co->res;
Obj arglist = R[1];
Obj fn = R[2];
if (True == x105553288769479) {
Obj x105553288770055 = PRIM_CAR(arglist);
R[1] = x105553288770055;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), arglist);
return;
} else {
Obj x105553288772327 = PRIM_CAR(arglist);
Obj x105553288772903 = PRIM_CDR(arglist);
R[1] = x105553288772327;
R[2] = fn;
struct frame1 __curr = {
.fn = clofun71,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[85]), fn, x105553288772903);
return;
}
}
case 3:
{
Obj x105553288773063= co->res;
Obj x105553288772327 = R[1];
Obj fn = R[2];
Obj x105553288773287 = makeCons(x105553288773063, Nil);
Obj x105553288773447 = makeCons(x105553288772327, x105553288773287);
Obj x105553288773607 = makeCons(fn, x105553288773447);
coraReturn(co, x105553288773607);
return;
}
case 4:
{
Obj x105553288770471= co->res;
Obj x105553288770055 = R[1];
Obj fn = R[2];
Obj x105553288770695 = makeCons(x105553288770471, Nil);
Obj x105553288770855 = makeCons(x105553288770055, x105553288770695);
Obj x105553288771015 = makeCons(fn, x105553288770855);
coraReturn(co, x105553288771015);
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
Obj x105553288767847= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[88]), x105553288767847);
return;
}
}
}

static void clofun69(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228797127 = R[1];
Obj x105553288887111 = primIsSymbol(x105553228797127);
if (True == x105553288887111) {
Obj x105553288887591 = makeCons(x105553228797127, Nil);
Obj x105553288887751 = makeCons(__symbolTable[139], x105553288887591);
coraReturn(co, x105553288887751);
return;
} else {
Obj x105553228799687 = makeNative1(1, clofun68, 0, 1, x105553228797127);
Obj x105553288760903 = PRIM_ISCONS(x105553228797127);
if (True == x105553288760903) {
Obj x105553288761383 = PRIM_CAR(x105553228797127);
Obj x105553288761543 = PRIM_EQ(__symbolTable[87], x105553288761383);
if (True == x105553288761543) {
Obj x105553288761991 = PRIM_CDR(x105553228797127);
Obj x105553288762119 = PRIM_ISCONS(x105553288761991);
if (True == x105553288762119) {
Obj x105553288762567 = PRIM_CDR(x105553228797127);
Obj x105553288762695 = PRIM_CAR(x105553288762567);
Obj x = x105553288762695;
Obj x105553288763303 = PRIM_CDR(x105553228797127);
Obj x105553288763431 = PRIM_CDR(x105553288763303);
Obj x105553288763591 = PRIM_EQ(Nil, x105553288763431);
if (True == x105553288763591) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228799687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228799687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228799687);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228799687);
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
Obj x105553288757447 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288757447) {
Obj x105553288757767 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x105553288757767;
Obj x105553288758087 = PRIM_CDR(closureRef(R[0], 0));
Obj more = x105553288758087;
Obj x105553288758727 = makeCons(x, more);
struct frame1 __curr = {
.fn = clofun68,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), globalRef(__symbolTable[88]), x105553288758727);
return;
} else {
coraReturn(co, closureRef(R[0], 0));
return;
}
}
case 1:
{
Obj x105553288758887= co->res;
Obj x105553288759079 = makeCons(__symbolTable[135], x105553288758887);
coraReturn(co, x105553288759079);
return;
}
}
}

static void clofun67(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288885863 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[91]), x105553288885863);
return;
}
}
}

static void clofun66(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228643143 = R[1];
Obj x105553228644487 = makeNative1(1, clofun65, 0, 1, x105553228643143);
Obj x105553288882375 = PRIM_ISCONS(x105553228643143);
if (True == x105553288882375) {
Obj x105553288882695 = PRIM_CAR(x105553228643143);
Obj x = x105553288882695;
Obj x105553288883175 = PRIM_CDR(x105553228643143);
Obj x105553288883335 = PRIM_EQ(Nil, x105553288883175);
if (True == x105553288883335) {
coraReturn(co, x);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228644487);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228644487);
return;
}
}
}
}

static void clofun65(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228647015 = makeNative1(2, clofun64, 0, 1, closureRef(R[0], 0));
Obj x105553288875527 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288875527) {
Obj x105553288875847 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x105553288875847;
Obj x105553288876295 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288876423 = PRIM_ISCONS(x105553288876295);
if (True == x105553288876423) {
Obj x105553288876871 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288876999 = PRIM_CAR(x105553288876871);
Obj y = x105553288876999;
Obj x105553288877607 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288877735 = PRIM_CDR(x105553288877607);
Obj x105553288877895 = PRIM_EQ(Nil, x105553288877735);
if (True == x105553288877895) {
Obj x105553288878535 = makeCons(y, Nil);
Obj x105553288878695 = makeCons(x, x105553288878535);
Obj x105553288878855 = makeCons(__symbolTable[90], x105553288878695);
coraReturn(co, x105553288878855);
return;
} else {
co->ctx.sp = R;
coraCall0(co, x105553228647015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228647015);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228647015);
return;
}
}
}
}

static void clofun64(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553288871463 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288871463) {
Obj x105553288871783 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x105553288871783;
Obj x105553288872103 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x105553288872103;
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
Obj x105553288872807= co->res;
Obj x = R[1];
Obj x105553288873031 = makeCons(x105553288872807, Nil);
Obj x105553288873191 = makeCons(x, x105553288873031);
Obj x105553288873351 = makeCons(__symbolTable[90], x105553288873191);
coraReturn(co, x105553288873351);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[141]), exp);
return;
}
case 1:
{
Obj x105553288869543= co->res;
struct frame1 __curr = {
.fn = clofun63,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[94]), x105553288869543);
return;
}
case 2:
{
Obj x105553288869703= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[92]), x105553288869703);
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
coraCall(co, globalRef(__symbolTable[93]), 4, Nil, makeCString(""), Nil, exp);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 1:
{
Obj x105553288860903= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun60,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[104]), x105553288860903);
return;
}
case 2:
{
Obj x105553288861063= co->res;
Obj exp = R[1];
Obj body = x105553288861063;
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
case 3:
{
Obj x105553288861415= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj nargs = x105553288861415;
R[1] = exp;
R[2] = body;
struct frame1 __curr = {
.fn = clofun60,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[96]), nargs);
return;
}
case 4:
{
Obj x105553288861767= co->res;
Obj exp = R[1];
Obj body = R[2];
Obj args = x105553288861767;
R[1] = body;
R[2] = args;
struct frame1 __curr = {
.fn = clofun60,
.label = 5,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
case 5:
{
Obj x105553288862343= co->res;
Obj body = R[1];
Obj args = R[2];
Obj x105553288863303 = makeCons(__symbolTable[135], args);
Obj x105553288863495 = makeCons(x105553288863303, body);
Obj x105553288863655 = makeCons(__symbolTable[107], x105553288863495);
Obj x105553288863847 = makeCons(x105553288863655, Nil);
Obj x105553288864007 = makeCons(args, x105553288863847);
Obj x105553288864167 = makeCons(x105553288862343, x105553288864007);
Obj x105553288864327 = makeCons(__symbolTable[134], x105553288864167);
coraReturn(co, x105553288864327);
return;
}
}
}

static void clofun59(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj n = R[1];
Obj x105553288857767 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x105553288857767) {
coraReturn(co, Nil);
return;
} else {
Obj x105553288858151 = primGenSym();
Obj x105553288858631 = PRIM_SUB(n, MAKE_NUMBER(1));
R[1] = x105553288858151;
struct frame1 __curr = {
.fn = clofun59,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[96]), x105553288858631);
return;
}
}
case 1:
{
Obj x105553288858759= co->res;
Obj x105553288858151 = R[1];
Obj x105553288858951 = makeCons(x105553288858151, x105553288858759);
coraReturn(co, x105553288858951);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[103]), Nil, rules);
return;
}
case 1:
{
Obj x105553288850759= co->res;
Obj pats = x105553288850759;
struct frame1 __curr = {
.fn = clofun58,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[147]), makeNative1(2, clofun56, 1, 0), pats);
return;
}
case 2:
{
Obj x105553288852071= co->res;
Obj counts = x105553288852071;
Obj x105553288852423 = PRIM_CAR(counts);
Obj n = x105553288852423;
Obj x105553288854279 = PRIM_CDR(counts);
R[1] = n;
struct frame1 __curr = {
.fn = clofun58,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[99]), makeNative1(2, clofun57, 1, 1, n), x105553288854279);
return;
}
case 3:
{
Obj x105553288854439= co->res;
Obj n = R[1];
R[1] = n;
struct frame1 __curr = {
.fn = clofun58,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x105553288854439);
return;
}
case 4:
{
Obj x105553288854599= co->res;
Obj n = R[1];
Obj x105553288854759 = primNot(x105553288854599);
if (True == x105553288854759) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), makeCString("inconsistent func rule args count"));
return;
} else {
coraReturn(co, n);
return;
}
}
}
}

static void clofun57(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288853383 = PRIM_EQ(closureRef(R[0], 0), x);
Obj x105553288853511 = primNot(x105553288853383);
coraReturn(co, x105553288853511);
return;
}
}
}

static void clofun56(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288851431 = PRIM_CDR(x);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[101]), x105553288851431);
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
Obj x105553288847623 = PRIM_EQ(l1, Nil);
if (True == x105553288847623) {
coraReturn(co, l2);
return;
} else {
Obj x105553288848071 = PRIM_CAR(l1);
Obj x105553288848487 = PRIM_CDR(l1);
R[1] = x105553288848071;
struct frame1 __curr = {
.fn = clofun55,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[98]), x105553288848487, l2);
return;
}
}
case 1:
{
Obj x105553288848679= co->res;
Obj x105553288848071 = R[1];
Obj x105553288848871 = makeCons(x105553288848071, x105553288848679);
coraReturn(co, x105553288848871);
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
Obj x105553288841575 = PRIM_ISCONS(l);
if (True == x105553288841575) {
Obj x105553288842023 = PRIM_CAR(l);
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
coraCall1(co, fn, x105553288842023);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj x105553288842151= co->res;
Obj l = R[1];
Obj res = R[2];
Obj fn = R[3];
if (True == x105553288842151) {
Obj x105553288842695 = PRIM_CAR(l);
Obj x105553288842887 = makeCons(x105553288842695, res);
Obj x105553288843207 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), x105553288842887, fn, x105553288843207);
return;
} else {
Obj x105553288844263 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[100]), res, fn, x105553288844263);
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
Obj x105553288838183 = PRIM_EQ(l, Nil);
if (True == x105553288838183) {
coraReturn(co, i);
return;
} else {
Obj x105553288838695 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x105553288838983 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[102]), x105553288838695, x105553288838983);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj x105553288834887= co->res;
Obj res = R[1];
Obj rules = R[2];
if (True == x105553288834887) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
} else {
Obj x105553288835719 = PRIM_CAR(rules);
Obj x105553288835911 = makeCons(x105553288835719, res);
R[1] = x105553288835911;
struct frame1 __curr = {
.fn = clofun50,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), rules);
return;
}
}
case 2:
{
Obj x105553288836199= co->res;
Obj x105553288835911 = R[1];
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[103]), x105553288835911, x105553288836199);
return;
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
Obj x105553288673063 = PRIM_EQ(Nil, input);
if (True == x105553288673063) {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), result);
return;
} else {
Obj x105553228721223 = makeNative1(3, clofun47, 0, 3, input, current, result);
Obj x105553288684839 = PRIM_ISCONS(input);
if (True == x105553288684839) {
Obj x105553288685319 = PRIM_CAR(input);
Obj x105553288685479 = PRIM_EQ(__symbolTable[105], x105553288685319);
if (True == x105553288685479) {
Obj x105553288685927 = PRIM_CDR(input);
Obj x105553288686055 = PRIM_ISCONS(x105553288685927);
if (True == x105553288686055) {
Obj x105553288686503 = PRIM_CDR(input);
Obj x105553288686631 = PRIM_CAR(x105553288686503);
Obj act = x105553288686631;
Obj x105553288687207 = PRIM_CDR(input);
Obj x105553288687335 = PRIM_CDR(x105553288687207);
Obj x105553288687463 = PRIM_ISCONS(x105553288687335);
if (True == x105553288687463) {
Obj x105553288688199 = PRIM_CDR(input);
Obj x105553288688327 = PRIM_CDR(x105553288688199);
Obj x105553288688455 = PRIM_CAR(x105553288688327);
Obj x105553288688615 = PRIM_EQ(__symbolTable[110], x105553288688455);
if (True == x105553288688615) {
Obj x105553288689319 = PRIM_CDR(input);
Obj x105553288689447 = PRIM_CDR(x105553288689319);
Obj x105553288689575 = PRIM_CDR(x105553288689447);
Obj x105553288689703 = PRIM_ISCONS(x105553288689575);
if (True == x105553288689703) {
Obj x105553288690407 = PRIM_CDR(input);
Obj x105553288690535 = PRIM_CDR(x105553288690407);
Obj x105553288690663 = PRIM_CDR(x105553288690535);
Obj x105553288690791 = PRIM_CAR(x105553288690663);
Obj pred = x105553288690791;
Obj x105553288691495 = PRIM_CDR(input);
Obj x105553288691623 = PRIM_CDR(x105553288691495);
Obj x105553288822823 = PRIM_CDR(x105553288691623);
Obj x105553288822951 = PRIM_CDR(x105553288822823);
Obj remain = x105553288822951;
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
coraCall0(co, x105553228721223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228721223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228721223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228721223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228721223);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228721223);
return;
}
}
}
case 1:
{
Obj x105553288823431= co->res;
Obj act = R[1];
Obj pred = R[2];
Obj result = R[3];
Obj remain = R[4];
Obj x105553288823623 = makeCons(__symbolTable[135], x105553288823431);
Obj pat = x105553288823623;
Obj x105553288824583 = makeCons(act, Nil);
Obj x105553288824743 = makeCons(pred, x105553288824583);
Obj x105553288824903 = makeCons(__symbolTable[110], x105553288824743);
Obj x105553288825255 = makeCons(pat, result);
Obj x105553288825415 = makeCons(x105553288824903, x105553288825255);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, x105553288825415);
return;
}
}
}

static void clofun47(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553228596103 = makeNative1(1, clofun46, 0, 3, closureRef(R[0], 0), closureRef(R[0], 1), closureRef(R[0], 2));
Obj x105553288676967 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288676967) {
Obj x105553288677447 = PRIM_CAR(closureRef(R[0], 0));
Obj x105553288677607 = PRIM_EQ(__symbolTable[105], x105553288677447);
if (True == x105553288677607) {
Obj x105553288678055 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288678183 = PRIM_ISCONS(x105553288678055);
if (True == x105553288678183) {
Obj x105553288678631 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288678759 = PRIM_CAR(x105553288678631);
Obj act = x105553288678759;
Obj x105553288679207 = PRIM_CDR(closureRef(R[0], 0));
Obj x105553288679335 = PRIM_CDR(x105553288679207);
Obj remain = x105553288679335;
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
coraCall0(co, x105553228596103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228596103);
return;
}
} else {
co->ctx.sp = R;
coraCall0(co, x105553228596103);
return;
}
}
case 1:
{
Obj x105553288679815= co->res;
Obj act = R[1];
Obj remain = R[2];
Obj x105553288680007 = makeCons(__symbolTable[135], x105553288679815);
Obj pat = x105553288680007;
Obj x105553288680679 = makeCons(pat, closureRef(R[0], 2));
Obj x105553288680839 = makeCons(act, x105553288680679);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), remain, Nil, x105553288680839);
return;
}
}
}

static void clofun46(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553288673927 = PRIM_ISCONS(closureRef(R[0], 0));
if (True == x105553288673927) {
Obj x105553288674247 = PRIM_CAR(closureRef(R[0], 0));
Obj x = x105553288674247;
Obj x105553288674567 = PRIM_CDR(closureRef(R[0], 0));
Obj y = x105553288674567;
Obj x105553288675047 = makeCons(x, closureRef(R[0], 1));
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[106]), y, x105553288675047, closureRef(R[0], 2));
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
Obj x105553288663303= co->res;
Obj exp = R[1];
R[1] = exp;
struct frame1 __curr = {
.fn = clofun44,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[138]), x105553288663303);
return;
}
case 2:
{
Obj x105553288663463= co->res;
Obj exp = R[1];
Obj value = x105553288663463;
R[1] = value;
struct frame1 __curr = {
.fn = clofun44,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x105553288663815= co->res;
Obj value = R[1];
Obj rules = x105553288663815;
Obj x105553287293863 = makeNative1(2, clofun43, 1, 2, value, rules);
Obj x105553288668039 = PRIM_ISCONS(value);
if (True == x105553288668039) {
Obj x105553288668647 = PRIM_CAR(value);
Obj x105553288668807 = PRIM_EQ(__symbolTable[152], x105553288668647);
Obj x105553288668935 = primNot(x105553288668807);
if (True == x105553288668935) {
co->ctx.sp = R;
coraCall1(co, x105553287293863, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287293863, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x105553287293863, False);
return;
}
}
}
}

static void clofun43(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287293895 = R[1];
if (True == x105553287293895) {
Obj x105553288664295 = primGenSym();
Obj val = x105553288664295;
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
Obj x105553288665223= co->res;
Obj val = R[1];
Obj x105553288665447 = makeCons(x105553288665223, Nil);
Obj x105553288665607 = makeCons(closureRef(R[0], 0), x105553288665447);
Obj x105553288665767 = makeCons(val, x105553288665607);
Obj x105553288665927 = makeCons(__symbolTable[129], x105553288665767);
coraReturn(co, x105553288665927);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), rules);
return;
}
case 1:
{
Obj x105553288649831= co->res;
Obj value = R[1];
Obj rules = R[2];
if (True == x105553288649831) {
Obj x105553288650343 = makeCons(makeCString("no match-help found!"), Nil);
Obj x105553288650503 = makeCons(__symbolTable[127], x105553288650343);
coraReturn(co, x105553288650503);
return;
} else {
Obj x105553287284871 = makeNative1(3, clofun41, 1, 2, value, rules);
R[1] = rules;
R[2] = x105553287284871;
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
case 2:
{
Obj x105553288659911= co->res;
Obj rules = R[1];
Obj x105553287284871 = R[2];
if (True == x105553288659911) {
Obj x105553288660391 = PRIM_CDR(rules);
R[1] = x105553287284871;
struct frame1 __curr = {
.fn = clofun42,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[151]), x105553288660391);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287284871, False);
return;
}
}
case 3:
{
Obj x105553288660519= co->res;
Obj x105553287284871 = R[1];
if (True == x105553288660519) {
co->ctx.sp = R;
coraCall1(co, x105553287284871, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287284871, False);
return;
}
}
}
}

static void clofun41(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287284903 = R[1];
if (True == x105553287284903) {
Obj x105553288651335 = PRIM_CAR(closureRef(R[0], 1));
Obj pat = x105553288651335;
Obj x105553288651591 = primGenSym();
Obj cc = x105553288651591;
R[1] = pat;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 1,
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
Obj x105553288651975= co->res;
Obj pat = R[1];
Obj cc = R[2];
Obj action = x105553288651975;
R[1] = action;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[138]), pat);
return;
}
case 2:
{
Obj x105553288652455= co->res;
Obj action = R[1];
Obj cc = R[2];
R[1] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[117]), 4, x105553288652455, closureRef(R[0], 0), action, cc);
return;
}
case 3:
{
Obj x105553288652807= co->res;
Obj cc = R[1];
Obj curr = x105553288652807;
Obj x105553288653447 = PRIM_CDR(closureRef(R[0], 1));
Obj x105553288653575 = PRIM_CDR(x105553288653447);
R[1] = curr;
R[2] = cc;
struct frame1 __curr = {
.fn = clofun41,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall2(co, globalRef(__symbolTable[109]), closureRef(R[0], 0), x105553288653575);
return;
}
case 4:
{
Obj x105553288653735= co->res;
Obj curr = R[1];
Obj cc = R[2];
Obj rest = x105553288653735;
Obj x105553288654855 = makeCons(rest, Nil);
Obj x105553288655015 = makeCons(Nil, x105553288654855);
Obj x105553288655175 = makeCons(__symbolTable[140], x105553288655015);
Obj x105553288655527 = makeCons(curr, Nil);
Obj x105553288655687 = makeCons(x105553288655175, x105553288655527);
Obj x105553288655847 = makeCons(cc, x105553288655687);
Obj x105553288656007 = makeCons(__symbolTable[129], x105553288655847);
coraReturn(co, x105553288656007);
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
Obj x105553288642151 = PRIM_CDR(rules);
Obj x105553288642279 = PRIM_CAR(x105553288642151);
Obj action = x105553288642279;
Obj x105553287278599 = makeNative1(2, clofun39, 1, 2, cc, action);
R[1] = action;
R[2] = x105553287278599;
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
Obj x105553288646535= co->res;
Obj action = R[1];
Obj x105553287278599 = R[2];
if (True == x105553288646535) {
Obj x105553288647015 = PRIM_CAR(action);
Obj x105553288647207 = PRIM_EQ(x105553288647015, __symbolTable[110]);
if (True == x105553288647207) {
co->ctx.sp = R;
coraCall1(co, x105553287278599, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287278599, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x105553287278599, False);
return;
}
}
}
}

static void clofun39(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287278631 = R[1];
if (True == x105553287278631) {
struct frame1 __curr = {
.fn = clofun39,
.label = 1,
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
Obj x105553288643015= co->res;
R[1] = x105553288643015;
struct frame1 __curr = {
.fn = clofun39,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[156]), closureRef(R[0], 1));
return;
}
case 2:
{
Obj x105553288643463= co->res;
Obj x105553288643015 = R[1];
Obj x105553288643975 = makeCons(closureRef(R[0], 0), Nil);
Obj x105553288644167 = makeCons(x105553288643975, Nil);
Obj x105553288644327 = makeCons(x105553288643463, x105553288644167);
Obj x105553288644487 = makeCons(x105553288643015, x105553288644327);
Obj x105553288644647 = makeCons(__symbolTable[126], x105553288644487);
coraReturn(co, x105553288644647);
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, makeNative1(2, clofun37, 1, 0), pat);
return;
}
case 1:
{
Obj x105553288757063= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x105553288757063) {
Obj x105553288626407 = PRIM_EQ(pat, expr);
if (True == x105553288626407) {
coraReturn(co, body);
return;
} else {
Obj x105553288627399 = makeCons(expr, Nil);
Obj x105553288627559 = makeCons(pat, x105553288627399);
Obj x105553288627719 = makeCons(__symbolTable[113], x105553288627559);
Obj x105553288628359 = makeCons(cc, Nil);
Obj x105553288628551 = makeCons(x105553288628359, Nil);
Obj x105553288628711 = makeCons(body, x105553288628551);
Obj x105553288628871 = makeCons(x105553288627719, x105553288628711);
Obj x105553288629031 = makeCons(__symbolTable[126], x105553288628871);
coraReturn(co, x105553288629031);
return;
}
} else {
Obj x105553288630695 = primIsSymbol(pat);
if (True == x105553288630695) {
Obj x105553288631495 = makeCons(body, Nil);
Obj x105553288631655 = makeCons(expr, x105553288631495);
Obj x105553288631815 = makeCons(pat, x105553288631655);
Obj x105553288631975 = makeCons(__symbolTable[129], x105553288631815);
coraReturn(co, x105553288631975);
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
case 2:
{
Obj x105553288632871= co->res;
Obj expr = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj pat = R[4];
if (True == x105553288632871) {
Obj x105553288633351 = PRIM_CAR(pat);
Obj x105553288633543 = PRIM_EQ(x105553288633351, __symbolTable[139]);
if (True == x105553288633543) {
Obj x105553288634471 = makeCons(expr, Nil);
Obj x105553288634631 = makeCons(pat, x105553288634471);
Obj x105553288634791 = makeCons(__symbolTable[113], x105553288634631);
Obj x105553288635431 = makeCons(cc, Nil);
Obj x105553288635623 = makeCons(x105553288635431, Nil);
Obj x105553288635783 = makeCons(body, x105553288635623);
Obj x105553288635943 = makeCons(x105553288634791, x105553288635783);
Obj x105553288636103 = makeCons(__symbolTable[126], x105553288635943);
coraReturn(co, x105553288636103);
return;
} else {
Obj x105553288637639 = PRIM_CAR(pat);
Obj x105553288637831 = PRIM_EQ(x105553288637639, __symbolTable[152]);
if (True == x105553288637831) {
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[118]), 4, pat, expr, body, cc);
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
.label = 3,
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
Obj x105553288639815= co->res;
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[127]), x105553288639815);
return;
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
Obj x105553288755239= co->res;
Obj x = R[1];
if (True == x105553288755239) {
Obj x105553288755719 = primIsSymbol(x);
Obj x105553288755847 = primNot(x105553288755719);
if (True == x105553288755847) {
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
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), pat);
return;
}
case 1:
{
Obj x105553288741415= co->res;
Obj pat = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj x = x105553288741415;
R[1] = x;
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
coraCall1(co, globalRef(__symbolTable[156]), pat);
return;
}
case 2:
{
Obj x105553288741767= co->res;
Obj x = R[1];
Obj body = R[2];
Obj cc = R[3];
Obj expr = R[4];
Obj y = x105553288741767;
Obj x105553287255591 = makeNative1(3, clofun35, 1, 5, x, y, expr, body, cc);
Obj x105553288751559 = PRIM_ISCONS(expr);
if (True == x105553288751559) {
Obj x105553288752007 = PRIM_CAR(expr);
Obj x105553288752199 = PRIM_EQ(x105553288752007, __symbolTable[152]);
if (True == x105553288752199) {
co->ctx.sp = R;
coraCall1(co, x105553287255591, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287255591, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x105553287255591, False);
return;
}
}
}
}

static void clofun35(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287255623 = R[1];
if (True == x105553287255623) {
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), closureRef(R[0], 2));
return;
} else {
Obj x105553288745255 = makeCons(closureRef(R[0], 2), Nil);
Obj x105553288745415 = makeCons(__symbolTable[116], x105553288745255);
Obj x105553288746215 = makeCons(closureRef(R[0], 2), Nil);
Obj x105553288746375 = makeCons(__symbolTable[115], x105553288746215);
Obj x105553288747047 = makeCons(closureRef(R[0], 2), Nil);
Obj x105553288747207 = makeCons(__symbolTable[114], x105553288747047);
R[1] = x105553288746375;
R[2] = x105553288745415;
struct frame1 __curr = {
.fn = clofun35,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[117]), 4, closureRef(R[0], 1), x105553288747207, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
}
case 1:
{
Obj x105553288747495= co->res;
Obj x105553288746375 = R[1];
Obj x105553288745415 = R[2];
R[1] = x105553288745415;
struct frame1 __curr = {
.fn = clofun35,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[117]), 4, closureRef(R[0], 0), x105553288746375, x105553288747495, closureRef(R[0], 4));
return;
}
case 2:
{
Obj x105553288747783= co->res;
Obj x105553288745415 = R[1];
Obj x105553288748295 = makeCons(closureRef(R[0], 4), Nil);
Obj x105553288748487 = makeCons(x105553288748295, Nil);
Obj x105553288748647 = makeCons(x105553288747783, x105553288748487);
Obj x105553288748807 = makeCons(x105553288745415, x105553288748647);
Obj x105553288748967 = makeCons(__symbolTable[126], x105553288748807);
coraReturn(co, x105553288748967);
return;
}
case 3:
{
Obj x105553288742311= co->res;
Obj e1 = x105553288742311;
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
Obj x105553288742663= co->res;
Obj e1 = R[1];
Obj e2 = x105553288742663;
R[1] = e1;
struct frame1 __curr = {
.fn = clofun35,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall(co, globalRef(__symbolTable[117]), 4, closureRef(R[0], 1), e2, closureRef(R[0], 3), closureRef(R[0], 4));
return;
}
case 5:
{
Obj x105553288743335= co->res;
Obj e1 = R[1];
co->ctx.sp = R;
coraCall(co, globalRef(__symbolTable[117]), 4, closureRef(R[0], 0), e1, x105553288743335, closureRef(R[0], 4));
return;
}
}
}

static void clofun34(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288740167 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[120]), x105553288740167);
return;
}
}
}

static void clofun33(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj pat = R[1];
Obj x105553288735463 = PRIM_CDR(pat);
R[1] = pat;
struct frame1 __curr = {
.fn = clofun33,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x105553288735463);
return;
}
case 1:
{
Obj x105553288735591= co->res;
Obj pat = R[1];
if (True == x105553288735591) {
Obj x105553288735879 = PRIM_CAR(pat);
coraReturn(co, x105553288735879);
return;
} else {
Obj x105553288736615 = PRIM_CAR(pat);
Obj x105553288737159 = PRIM_CDR(pat);
R[1] = x105553288736615;
struct frame1 __curr = {
.fn = clofun33,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[120]), x105553288737159);
return;
}
}
case 2:
{
Obj x105553288737287= co->res;
Obj x105553288736615 = R[1];
Obj x105553288737511 = makeCons(x105553288737287, Nil);
Obj x105553288737671 = makeCons(x105553288736615, x105553288737511);
Obj x105553288737831 = makeCons(__symbolTable[152], x105553288737671);
coraReturn(co, x105553288737831);
return;
}
}
}

static void clofun32(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288733319 = PRIM_EQ(x, True);
if (True == x105553288733319) {
coraReturn(co, True);
return;
} else {
Obj x105553288733767 = PRIM_EQ(x, False);
if (True == x105553288733767) {
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
Obj x105553288732007 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[123]), x105553288732007);
return;
}
}
}

static void clofun30(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x105553288725607 = PRIM_EQ(Nil, l);
if (True == x105553288725607) {
coraReturn(co, True);
return;
} else {
Obj x105553288726119 = PRIM_CAR(l);
Obj x105553288726311 = PRIM_EQ(x105553288726119, False);
if (True == x105553288726311) {
coraReturn(co, False);
return;
} else {
Obj x105553288726823 = PRIM_CDR(l);
R[1] = l;
struct frame1 __curr = {
.fn = clofun30,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[123]), x105553288726823);
return;
}
}
}
case 1:
{
Obj x105553288726951= co->res;
Obj l = R[1];
Obj more = x105553288726951;
Obj x105553288727367 = PRIM_EQ(more, False);
if (True == x105553288727367) {
coraReturn(co, False);
return;
} else {
Obj x105553288727975 = PRIM_CAR(l);
Obj x105553288728487 = makeCons(False, Nil);
Obj x105553288728647 = makeCons(more, x105553288728487);
Obj x105553288728807 = makeCons(x105553288727975, x105553288728647);
Obj x105553288728967 = makeCons(__symbolTable[126], x105553288728807);
coraReturn(co, x105553288728967);
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
Obj x105553288724295 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[125]), x105553288724295);
return;
}
}
}

static void clofun28(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj l = R[1];
Obj x105553288717895 = PRIM_EQ(l, Nil);
if (True == x105553288717895) {
coraReturn(co, False);
return;
} else {
Obj x105553288718407 = PRIM_CAR(l);
Obj x105553288718599 = PRIM_EQ(x105553288718407, True);
if (True == x105553288718599) {
coraReturn(co, True);
return;
} else {
Obj x105553288719111 = PRIM_CDR(l);
R[1] = l;
struct frame1 __curr = {
.fn = clofun28,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[125]), x105553288719111);
return;
}
}
}
case 1:
{
Obj x105553288719239= co->res;
Obj l = R[1];
Obj more = x105553288719239;
Obj x105553288719655 = PRIM_EQ(more, True);
if (True == x105553288719655) {
coraReturn(co, True);
return;
} else {
Obj x105553288720263 = PRIM_CAR(l);
Obj x105553288720775 = makeCons(more, Nil);
Obj x105553288720935 = makeCons(True, x105553288720775);
Obj x105553288721095 = makeCons(x105553288720263, x105553288720935);
Obj x105553288721255 = makeCons(__symbolTable[126], x105553288721095);
coraReturn(co, x105553288721255);
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
Obj x105553288711047 = PRIM_CDR(exp);
Obj x105553288711207 = PRIM_EQ(Nil, x105553288711047);
if (True == x105553288711207) {
Obj x105553288711687 = makeCons(makeCString("no cond match"), Nil);
Obj x105553288711847 = makeCons(__symbolTable[127], x105553288711687);
coraReturn(co, x105553288711847);
return;
} else {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun27,
.label = 1,
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
Obj x105553288712487= co->res;
Obj exp = R[1];
Obj curr = x105553288712487;
Obj x105553288713063 = PRIM_CAR(curr);
R[1] = exp;
R[2] = x105553288713063;
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
case 2:
{
Obj x105553288713479= co->res;
Obj exp = R[1];
Obj x105553288713063 = R[2];
R[1] = x105553288713479;
R[2] = x105553288713063;
struct frame1 __curr = {
.fn = clofun27,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x105553288714087= co->res;
Obj x105553288713479 = R[1];
Obj x105553288713063 = R[2];
Obj x105553288714279 = makeCons(__symbolTable[128], x105553288714087);
Obj x105553288714471 = makeCons(x105553288714279, Nil);
Obj x105553288714631 = makeCons(x105553288713479, x105553288714471);
Obj x105553288714791 = makeCons(x105553288713063, x105553288714631);
Obj x105553288714951 = makeCons(__symbolTable[126], x105553288714791);
coraReturn(co, x105553288714951);
return;
}
}
}

static void clofun26(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288709639 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[130]), x105553288709639);
return;
}
}
}

static void clofun25(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288703911 = PRIM_CDR(exp);
R[1] = exp;
struct frame1 __curr = {
.fn = clofun25,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[161]), x105553288703911);
return;
}
case 1:
{
Obj x105553288704039= co->res;
Obj exp = R[1];
if (True == x105553288704039) {
Obj x105553288704327 = PRIM_CAR(exp);
coraReturn(co, x105553288704327);
return;
} else {
Obj x105553288705063 = PRIM_CAR(exp);
R[1] = exp;
R[2] = x105553288705063;
struct frame1 __curr = {
.fn = clofun25,
.label = 2,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
}
}
case 2:
{
Obj x105553288705479= co->res;
Obj exp = R[1];
Obj x105553288705063 = R[2];
R[1] = x105553288705479;
R[2] = x105553288705063;
struct frame1 __curr = {
.fn = clofun25,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[157]), exp);
return;
}
case 3:
{
Obj x105553288706055= co->res;
Obj x105553288705479 = R[1];
Obj x105553288705063 = R[2];
R[1] = x105553288705479;
R[2] = x105553288705063;
struct frame1 __curr = {
.fn = clofun25,
.label = 4,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[130]), x105553288706055);
return;
}
case 4:
{
Obj x105553288706215= co->res;
Obj x105553288705479 = R[1];
Obj x105553288705063 = R[2];
Obj x105553288706439 = makeCons(x105553288706215, Nil);
Obj x105553288706599 = makeCons(x105553288705479, x105553288706439);
Obj x105553288706759 = makeCons(x105553288705063, x105553288706599);
Obj x105553288706919 = makeCons(__symbolTable[129], x105553288706759);
coraReturn(co, x105553288706919);
return;
}
}
}

static void clofun24(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288702407 = PRIM_ISCONS(x);
Obj x105553288702535 = primNot(x105553288702407);
coraReturn(co, x105553288702535);
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
Obj x105553288699271 = PRIM_ISCONS(l);
if (True == x105553288699271) {
Obj x105553288699719 = PRIM_CAR(l);
Obj x105553288699911 = PRIM_EQ(x105553288699719, x);
if (True == x105553288699911) {
coraReturn(co, True);
return;
} else {
Obj x105553288700391 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[132]), x, x105553288700391);
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
Obj x105553288694663= co->res;
Obj exp = R[1];
R[1] = exp;
R[2] = x105553288694663;
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
case 2:
{
Obj x105553288695399= co->res;
Obj exp = R[1];
Obj x105553288694663 = R[2];
R[1] = x105553288695399;
R[2] = x105553288694663;
struct frame1 __curr = {
.fn = clofun22,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[155]), exp);
return;
}
case 3:
{
Obj x105553288695847= co->res;
Obj x105553288695399 = R[1];
Obj x105553288694663 = R[2];
Obj x105553288696071 = makeCons(x105553288695847, Nil);
Obj x105553288696231 = makeCons(x105553288695399, x105553288696071);
Obj x105553288696391 = makeCons(__symbolTable[140], x105553288696231);
Obj x105553288696583 = makeCons(x105553288696391, Nil);
Obj x105553288696743 = makeCons(x105553288694663, x105553288696583);
Obj x105553288696903 = makeCons(__symbolTable[133], x105553288696743);
coraReturn(co, x105553288696903);
return;
}
}
}

static void clofun21(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288693191 = PRIM_CDR(exp);
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[153]), x105553288693191);
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
Obj x105553288556903= co->res;
Obj exp = R[1];
Obj x105553288557127 = makeCons(x105553288556903, Nil);
Obj x105553288557287 = makeCons(__symbolTable[139], x105553288557127);
R[1] = exp;
R[2] = x105553288557287;
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
case 2:
{
Obj x105553288557991= co->res;
Obj exp = R[1];
Obj x105553288557287 = R[2];
R[1] = x105553288557991;
R[2] = x105553288557287;
struct frame1 __curr = {
.fn = clofun20,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[154]), exp);
return;
}
case 3:
{
Obj x105553288558311= co->res;
Obj x105553288557991 = R[1];
Obj x105553288557287 = R[2];
Obj x105553288558503 = makeCons(x105553288557991, x105553288558311);
Obj x105553288558663 = makeCons(__symbolTable[140], x105553288558503);
Obj x105553288558855 = makeCons(x105553288558663, Nil);
Obj x105553288559015 = makeCons(x105553288557287, x105553288558855);
Obj x105553288559175 = makeCons(__symbolTable[144], x105553288559015);
coraReturn(co, x105553288559175);
return;
}
}
}

static void clofun19(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288546055 = PRIM_ISCONS(exp);
if (True == x105553288546055) {
Obj x105553288546503 = PRIM_CAR(exp);
Obj x105553288546695 = PRIM_EQ(x105553288546503, globalRef(__symbolTable[145]));
if (True == x105553288546695) {
Obj x105553288546951 = PRIM_CDR(exp);
coraReturn(co, x105553288546951);
return;
} else {
Obj x105553288547591 = PRIM_CAR(exp);
Obj x105553288547783 = PRIM_EQ(x105553288547591, __symbolTable[140]);
if (True == x105553288547783) {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun19,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[160]), exp);
return;
} else {
Obj x105553288551079 = PRIM_CAR(exp);
Obj x105553288551271 = PRIM_EQ(x105553288551079, __symbolTable[139]);
if (True == x105553288551271) {
coraReturn(co, exp);
return;
} else {
R[1] = exp;
struct frame1 __curr = {
.fn = clofun19,
.label = 1,
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
Obj x105553288553223= co->res;
Obj exp = R[1];
co->ctx.sp = R;
coraCall1(co, makeNative1(2, clofun18, 1, 1, exp), x105553288553223);
return;
}
case 2:
{
Obj x105553288548327= co->res;
Obj exp = R[1];
R[1] = x105553288548327;
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
case 3:
{
Obj x105553288548903= co->res;
Obj x105553288548327 = R[1];
R[1] = x105553288548327;
struct frame1 __curr = {
.fn = clofun19,
.label = 3,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[141]), x105553288548903);
return;
}
case 4:
{
Obj x105553288549063= co->res;
Obj x105553288548327 = R[1];
Obj x105553288549287 = makeCons(x105553288549063, Nil);
Obj x105553288549447 = makeCons(x105553288548327, x105553288549287);
Obj x105553288549607 = makeCons(__symbolTable[140], x105553288549447);
coraReturn(co, x105553288549607);
return;
}
}
}

static void clofun18(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp1 = R[1];
Obj x105553288551879 = PRIM_EQ(exp1, closureRef(R[0], 0));
if (True == x105553288551879) {
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
Obj x105553288538343 = PRIM_EQ(Nil, macros);
if (True == x105553288538343) {
coraReturn(co, exp);
return;
} else {
Obj x105553288543623 = PRIM_CAR(macros);
co->ctx.sp = R;
coraCall1(co, makeNative1(2, clofun15, 1, 2, macros, exp), x105553288543623);
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
Obj x105553287074023 = makeNative1(2, clofun14, 1, 3, item, closureRef(R[0], 1), closureRef(R[0], 0));
Obj x105553288540903 = PRIM_ISCONS(closureRef(R[0], 1));
if (True == x105553288540903) {
Obj x105553288541351 = PRIM_CAR(closureRef(R[0], 1));
Obj x105553288541639 = PRIM_CAR(item);
Obj x105553288541799 = PRIM_EQ(x105553288541351, x105553288541639);
if (True == x105553288541799) {
co->ctx.sp = R;
coraCall1(co, x105553287074023, True);
return;
} else {
co->ctx.sp = R;
coraCall1(co, x105553287074023, False);
return;
}
} else {
co->ctx.sp = R;
coraCall1(co, x105553287074023, False);
return;
}
}
}
}

static void clofun14(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x105553287074055 = R[1];
if (True == x105553287074055) {
Obj x105553288539111 = PRIM_CDR(closureRef(R[0], 0));
co->ctx.sp = R;
coraCall1(co, x105553288539111, closureRef(R[0], 1));
return;
} else {
Obj x105553288539847 = PRIM_CDR(closureRef(R[0], 2));
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[143]), closureRef(R[0], 1), x105553288539847);
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
Obj x105553288536551 = makeCons(n, v);
Obj x105553288536743 = makeCons(x105553288536551, globalRef(__symbolTable[146]));
Obj x105553288536903 = primSet(co, __symbolTable[146], x105553288536743);
coraReturn(co, x105553288536903);
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
Obj x105553288530695 = PRIM_ISCONS(l);
if (True == x105553288530695) {
Obj x105553288531335 = PRIM_CAR(l);
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
coraCall1(co, f, x105553288531335);
return;
} else {
co->ctx.sp = R;
coraCall1(co, globalRef(__symbolTable[149]), res);
return;
}
}
case 1:
{
Obj x105553288531463= co->res;
Obj res = R[1];
Obj l = R[2];
Obj f = R[3];
Obj x105553288531687 = makeCons(x105553288531463, res);
Obj x105553288532007 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall3(co, globalRef(__symbolTable[148]), x105553288531687, f, x105553288532007);
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
Obj x105553288527207 = PRIM_ISCONS(l);
if (True == x105553288527207) {
Obj x105553288527719 = PRIM_CAR(l);
Obj x105553288527911 = makeCons(x105553288527719, res);
Obj x105553288528199 = PRIM_CDR(l);
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[150]), x105553288527911, x105553288528199);
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
Obj x105553288526087 = PRIM_ISCONS(x);
coraReturn(co, x105553288526087);
return;
}
}
}

static void clofun8(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj exp = R[1];
Obj x105553288522247 = PRIM_ISCONS(exp);
if (True == x105553288522247) {
Obj x105553288522791 = PRIM_CAR(exp);
Obj x105553288523335 = PRIM_CDR(exp);
R[1] = x105553288522791;
struct frame1 __curr = {
.fn = clofun8,
.label = 1,
.bp = R,
.sp = co->ctx.sp,
};
vecAppend(&co->callstack, __curr);
coraCall1(co, globalRef(__symbolTable[153]), x105553288523335);
return;
} else {
coraReturn(co, Nil);
return;
}
}
case 1:
{
Obj x105553288523463= co->res;
Obj x105553288522791 = R[1];
Obj x105553288523687 = makeCons(x105553288523463, Nil);
Obj x105553288523847 = makeCons(x105553288522791, x105553288523687);
Obj x105553288524007 = makeCons(__symbolTable[152], x105553288523847);
coraReturn(co, x105553288524007);
return;
}
}
}

static void clofun7(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288520615 = PRIM_CDR(x);
Obj x105553288520743 = PRIM_CDR(x105553288520615);
Obj x105553288520871 = PRIM_CDR(x105553288520743);
coraReturn(co, x105553288520871);
return;
}
}
}

static void clofun6(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288518535 = PRIM_CDR(x);
Obj x105553288518663 = PRIM_CDR(x105553288518535);
Obj x105553288518791 = PRIM_CDR(x105553288518663);
Obj x105553288518919 = PRIM_CAR(x105553288518791);
coraReturn(co, x105553288518919);
return;
}
}
}

static void clofun5(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288516583 = PRIM_CDR(x);
Obj x105553288516711 = PRIM_CDR(x105553288516583);
Obj x105553288516839 = PRIM_CAR(x105553288516711);
coraReturn(co, x105553288516839);
return;
}
}
}

static void clofun4(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288515015 = PRIM_CDR(x);
Obj x105553288515143 = PRIM_CDR(x105553288515015);
coraReturn(co, x105553288515143);
return;
}
}
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288513575 = PRIM_CAR(x);
Obj x105553288513703 = PRIM_CDR(x105553288513575);
coraReturn(co, x105553288513703);
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288512135 = PRIM_CAR(x);
Obj x105553288512263 = PRIM_CAR(x105553288512135);
coraReturn(co, x105553288512263);
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288510695 = PRIM_CDR(x);
Obj x105553288510823 = PRIM_CAR(x105553288510695);
coraReturn(co, x105553288510823);
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj x = R[1];
Obj x105553288509511 = PRIM_EQ(x, Nil);
coraReturn(co, x105553288509511);
return;
}
}
}

