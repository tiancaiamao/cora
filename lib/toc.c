#include "types.h"
#include "runtime.h"

static void clofun0(struct Cora* co);
static void clofun1(struct Cora* co);
static void clofun2(struct Cora* co);
static void clofun3(struct Cora* co);
static void clofun4(struct Cora* co);
static void clofun5(struct Cora* co);
static void clofun6(struct Cora* co);
static void clofun7(struct Cora* co);
static void clofun8(struct Cora* co);
static void clofun9(struct Cora* co);


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 136);
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
__symbolTable[26] = intern("cora/lib/toc#group-by-mod-h");
__symbolTable[27] = intern("cora/lib/toc#generate-toplevel-group");
__symbolTable[28] = intern("cora/lib/toc#generate-jumptable");
__symbolTable[29] = intern("cora/lib/toc#compile");
__symbolTable[30] = intern("cora/init#cddr");
__symbolTable[31] = intern("->");
__symbolTable[32] = intern("cora/init#add-to-*macros*");
__symbolTable[33] = intern("cora/lib/toc#rewrite-->macro");
__symbolTable[34] = intern("cora/init#vector");
__symbolTable[35] = intern("cora/lib/toc#collect-lambda-pass");
__symbolTable[36] = intern("cora/lib/toc#explicit-stack-pass");
__symbolTable[37] = intern("cora/lib/toc#tailify-pass");
__symbolTable[38] = intern("cora/lib/toc#closure-convert-pass");
__symbolTable[39] = intern("cora/lib/toc#parse-pass");
__symbolTable[40] = intern("cora/lib/io#display");
__symbolTable[41] = intern("cora/lib/toc#code-gen-toplevel");
__symbolTable[42] = intern("cora/lib/toc#generate-call-args-reverse");
__symbolTable[43] = intern("cora/lib/toc#local-from-cont");
__symbolTable[44] = intern("ignore");
__symbolTable[45] = intern("cora/lib/toc#local-from-params");
__symbolTable[46] = intern("cora/lib/toc#code-gen-func-declare");
__symbolTable[47] = intern("cora/lib/toc#for-each");
__symbolTable[48] = intern("%stack-ref");
__symbolTable[49] = intern("cora/lib/toc/internal#escape-str");
__symbolTable[50] = intern("cora/lib/toc#*mod-num*");
__symbolTable[51] = intern("cora/lib/hash-h#mod");
__symbolTable[52] = intern("cora/lib/toc#generate-cont");
__symbolTable[53] = intern("cora/lib/toc#generate-inst-list");
__symbolTable[54] = intern("cora/lib/toc#generate-group-name");
__symbolTable[55] = intern("cora/lib/toc/internal#generate-sym");
__symbolTable[56] = intern("cora/lib/toc#symbol-offset");
__symbolTable[57] = intern("cora/lib/toc#symbol-offset-h");
__symbolTable[58] = intern("cora/init#value");
__symbolTable[59] = intern("cora/lib/toc#generate-inst");
__symbolTable[60] = intern("cora/lib/toc/internal#generate-num");
__symbolTable[61] = intern("cora/lib/toc/internal#generate-str");
__symbolTable[62] = intern("cora/lib/toc#generate-call-list");
__symbolTable[63] = intern("cora/init#vector-set!");
__symbolTable[64] = intern("cora/lib/toc#append-result");
__symbolTable[65] = intern("cora/init#vector-ref");
__symbolTable[66] = intern("cora/lib/toc#collect-lambda");
__symbolTable[67] = intern("%continuation");
__symbolTable[68] = intern("cora/lib/toc#explicit-stack");
__symbolTable[69] = intern("cora/init#caar");
__symbolTable[70] = intern("cora/init#pair?");
__symbolTable[71] = intern("cora/lib/toc#wrap-var");
__symbolTable[72] = intern("cora/init#reverse");
__symbolTable[73] = intern("cora/lib/toc#tailify-list");
__symbolTable[74] = intern("cora/lib/toc#tailify");
__symbolTable[75] = intern("cora/lib/toc#id");
__symbolTable[76] = intern("cora/lib/toc#closure-convert");
__symbolTable[77] = intern("%closure");
__symbolTable[78] = intern("return");
__symbolTable[79] = intern("call");
__symbolTable[80] = intern("tailcall");
__symbolTable[81] = intern("continuation");
__symbolTable[82] = intern("cora/lib/toc#free-vars");
__symbolTable[83] = intern("%closure-ref");
__symbolTable[84] = intern("cora/lib/toc#convert-protect?");
__symbolTable[85] = intern("cora/lib/toc#diff");
__symbolTable[86] = intern("cora/lib/toc#union");
__symbolTable[87] = intern("cora/init#boolean?");
__symbolTable[88] = intern("cora/init#number?");
__symbolTable[89] = intern("quote");
__symbolTable[90] = intern("do");
__symbolTable[91] = intern("let");
__symbolTable[92] = intern("if");
__symbolTable[93] = intern("cora/init#append");
__symbolTable[94] = intern("lambda");
__symbolTable[95] = intern("%builtin");
__symbolTable[96] = intern("cora/init#length");
__symbolTable[97] = intern("cora/init#map");
__symbolTable[98] = intern("%global");
__symbolTable[99] = intern("cora/lib/toc#add-symbol-to-list");
__symbolTable[100] = intern("cora/init#elem?");
__symbolTable[101] = intern("%const");
__symbolTable[102] = intern("cora/lib/toc#parse");
__symbolTable[103] = intern("cora/lib/toc#temp-list");
__symbolTable[104] = intern("cora/init#cadr");
__symbolTable[105] = intern("cora/lib/toc#builtin->args");
__symbolTable[106] = intern("cora/init#caddr");
__symbolTable[107] = intern("cora/lib/toc#builtin->name");
__symbolTable[108] = intern("cora/init#null?");
__symbolTable[109] = intern("cora/lib/toc#builtin?");
__symbolTable[110] = intern("string?");
__symbolTable[111] = intern("integer?");
__symbolTable[112] = intern("not");
__symbolTable[113] = intern("symbol?");
__symbolTable[114] = intern("gensym");
__symbolTable[115] = intern("<");
__symbolTable[116] = intern(">");
__symbolTable[117] = intern("=");
__symbolTable[118] = intern("/");
__symbolTable[119] = intern("*");
__symbolTable[120] = intern("-");
__symbolTable[121] = intern("+");
__symbolTable[122] = intern("cons?");
__symbolTable[123] = intern("cons");
__symbolTable[124] = intern("cdr");
__symbolTable[125] = intern("car");
__symbolTable[126] = intern("set");
__symbolTable[127] = intern("cora/lib/toc#*builtin-prims*");
__symbolTable[128] = intern("cora/lib/toc#exist-in-env");
__symbolTable[129] = intern("cora/lib/toc#index");
__symbolTable[130] = intern("cora/lib/toc#pos-in-list0");
__symbolTable[131] = intern("cora/lib/toc#foldl");
__symbolTable[132] = intern("cora/lib/toc#error");
__symbolTable[133] = intern("cora/lib/toc#assq");
__symbolTable[134] = intern("cora/lib/toc#*ns-export*");
__symbolTable[135] = intern("cora/init#import");
clofun0(co);
}

static void clofun0(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
PUSH_CONT_0(co, 1, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/toc/internal"));
}

label1:
{
Obj x140690933021063 = __arg1;
PUSH_CONT_0(co, 2, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/io"));
}

label2:
{
Obj x140690933021223 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/hash-h"));
}

label3:
{
Obj x140690933021479 = __arg1;
Obj x140690933021639 = primSet(co, __symbolTable[134], Nil);
Obj x140690931218439 = primSet(co, __symbolTable[133], makeNative(18, clofun9, 2, 0));
Obj x140690931219815 = primSet(co, __symbolTable[131], makeNative(16, clofun9, 3, 0));
Obj x140690931148391 = primSet(co, __symbolTable[130], makeNative(14, clofun9, 3, 0));
Obj x140690931148679 = primSet(co, __symbolTable[129], makeNative(13, clofun9, 2, 0));
Obj x140690931150023 = primSet(co, __symbolTable[128], makeNative(11, clofun9, 2, 0));
Obj x140690931150471 = makeCons(makeCString("primSet"), Nil);
Obj x140690931150503 = makeCons(MAKE_NUMBER(2), x140690931150471);
Obj x140690931150535 = makeCons(__symbolTable[126], x140690931150503);
Obj x140690931150823 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140690931097607 = makeCons(MAKE_NUMBER(1), x140690931150823);
Obj x140690931097639 = makeCons(__symbolTable[125], x140690931097607);
Obj x140690931097927 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140690931097959 = makeCons(MAKE_NUMBER(1), x140690931097927);
Obj x140690931097991 = makeCons(__symbolTable[124], x140690931097959);
Obj x140690931098279 = makeCons(makeCString("makeCons"), Nil);
Obj x140690931098311 = makeCons(MAKE_NUMBER(2), x140690931098279);
Obj x140690931098343 = makeCons(__symbolTable[123], x140690931098311);
Obj x140690931098631 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140690931098663 = makeCons(MAKE_NUMBER(1), x140690931098631);
Obj x140690931098695 = makeCons(__symbolTable[122], x140690931098663);
Obj x140690931098983 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140690931099015 = makeCons(MAKE_NUMBER(2), x140690931098983);
Obj x140690931099047 = makeCons(__symbolTable[121], x140690931099015);
Obj x140690931099335 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140690931099367 = makeCons(MAKE_NUMBER(2), x140690931099335);
Obj x140690931099399 = makeCons(__symbolTable[120], x140690931099367);
Obj x140690931099687 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140690931099719 = makeCons(MAKE_NUMBER(2), x140690931099687);
Obj x140690931099751 = makeCons(__symbolTable[119], x140690931099719);
Obj x140690931100039 = makeCons(makeCString("primDiv"), Nil);
Obj x140690931100071 = makeCons(MAKE_NUMBER(2), x140690931100039);
Obj x140690931100103 = makeCons(__symbolTable[118], x140690931100071);
Obj x140690931100391 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140690931100423 = makeCons(MAKE_NUMBER(2), x140690931100391);
Obj x140690931100455 = makeCons(__symbolTable[117], x140690931100423);
Obj x140690931008423 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140690931008455 = makeCons(MAKE_NUMBER(2), x140690931008423);
Obj x140690931008487 = makeCons(__symbolTable[116], x140690931008455);
Obj x140690931008775 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140690931008807 = makeCons(MAKE_NUMBER(2), x140690931008775);
Obj x140690931008839 = makeCons(__symbolTable[115], x140690931008807);
Obj x140690931009127 = makeCons(makeCString("primGenSym"), Nil);
Obj x140690931009159 = makeCons(MAKE_NUMBER(0), x140690931009127);
Obj x140690931009191 = makeCons(__symbolTable[114], x140690931009159);
Obj x140690931009479 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140690931009511 = makeCons(MAKE_NUMBER(1), x140690931009479);
Obj x140690931009543 = makeCons(__symbolTable[113], x140690931009511);
Obj x140690931009831 = makeCons(makeCString("primNot"), Nil);
Obj x140690931009863 = makeCons(MAKE_NUMBER(1), x140690931009831);
Obj x140690931009895 = makeCons(__symbolTable[112], x140690931009863);
Obj x140690931010183 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140690931010215 = makeCons(MAKE_NUMBER(1), x140690931010183);
Obj x140690931010247 = makeCons(__symbolTable[111], x140690931010215);
Obj x140690931010535 = makeCons(makeCString("primIsString"), Nil);
Obj x140690931010567 = makeCons(MAKE_NUMBER(1), x140690931010535);
Obj x140690931010599 = makeCons(__symbolTable[110], x140690931010567);
Obj x140690931010631 = makeCons(x140690931010599, Nil);
Obj x140690931010663 = makeCons(x140690931010247, x140690931010631);
Obj x140690931010695 = makeCons(x140690931009895, x140690931010663);
Obj x140690931010727 = makeCons(x140690931009543, x140690931010695);
Obj x140690931010759 = makeCons(x140690931009191, x140690931010727);
Obj x140690931010791 = makeCons(x140690931008839, x140690931010759);
Obj x140690931010823 = makeCons(x140690931008487, x140690931010791);
Obj x140690931010855 = makeCons(x140690931100455, x140690931010823);
Obj x140690931010887 = makeCons(x140690931100103, x140690931010855);
Obj x140690931010919 = makeCons(x140690931099751, x140690931010887);
Obj x140690931010951 = makeCons(x140690931099399, x140690931010919);
Obj x140690931010983 = makeCons(x140690931099047, x140690931010951);
Obj x140690931011015 = makeCons(x140690931098695, x140690931010983);
Obj x140690931011047 = makeCons(x140690931098343, x140690931011015);
Obj x140690931011079 = makeCons(x140690931097991, x140690931011047);
Obj x140690931011111 = makeCons(x140690931097639, x140690931011079);
Obj x140690931011143 = makeCons(x140690931150535, x140690931011111);
Obj x140690931011175 = primSet(co, __symbolTable[127], x140690931011143);
Obj x140690930679911 = primSet(co, __symbolTable[109], makeNative(8, clofun9, 1, 0));
Obj x140690930680519 = primSet(co, __symbolTable[107], makeNative(5, clofun9, 1, 0));
Obj x140690930681127 = primSet(co, __symbolTable[105], makeNative(2, clofun9, 1, 0));
Obj x140690930681863 = primSet(co, __symbolTable[103], makeNative(1, clofun9, 2, 0));
Obj x140690930392231 = primSet(co, __symbolTable[102], makeNative(19, clofun8, 3, 0));
Obj x140690933063687 = primSet(co, __symbolTable[86], makeNative(15, clofun8, 2, 0));
Obj x140690933066823 = primSet(co, __symbolTable[85], makeNative(11, clofun8, 2, 0));
Obj x140690931149703 = primSet(co, __symbolTable[84], makeNative(5, clofun8, 1, 0));
Obj x140690930405127 = primSet(co, __symbolTable[82], makeNative(35, clofun7, 1, 0));
Obj x140690930368295 = primSet(co, __symbolTable[76], makeNative(23, clofun7, 2, 0));
Obj x140690929635527 = primSet(co, __symbolTable[75], makeNative(22, clofun7, 1, 0));
Obj x140690931148487 = primSet(co, __symbolTable[74], makeNative(6, clofun7, 2, 0));
Obj x140690931008903 = primSet(co, __symbolTable[73], makeNative(49, clofun6, 3, 0));
Obj x140690930556839 = primSet(co, __symbolTable[68], makeNative(34, clofun6, 2, 0));
Obj x140690930391015 = primSet(co, __symbolTable[66], makeNative(25, clofun6, 2, 0));
Obj x140690930392519 = primSet(co, __symbolTable[64], makeNative(21, clofun6, 2, 0));
Obj x140690930377191 = primSet(co, __symbolTable[71], makeNative(19, clofun6, 2, 0));
Obj x140690930364967 = primSet(co, __symbolTable[62], makeNative(7, clofun6, 5, 0));
Obj x140690930365991 = primSet(co, __symbolTable[99], makeNative(4, clofun6, 2, 0));
Obj x140690930367239 = primSet(co, __symbolTable[57], makeNative(2, clofun6, 3, 0));
Obj x140690930367527 = primSet(co, __symbolTable[56], makeNative(1, clofun6, 2, 0));
Obj x140690929635975 = primSet(co, __symbolTable[59], makeNative(45, clofun3, 5, 0));
Obj x140690929639399 = primSet(co, __symbolTable[53], makeNative(37, clofun3, 5, 0));
Obj x140690929558311 = primSet(co, __symbolTable[52], makeNative(13, clofun3, 5, 0));
Obj x140690929558567 = primSet(co, __symbolTable[50], MAKE_NUMBER(50));
Obj x140690929559495 = primSet(co, __symbolTable[54], makeNative(11, clofun3, 3, 0));
Obj x140690929560327 = primSet(co, __symbolTable[46], makeNative(7, clofun3, 3, 0));
Obj x140690929509095 = primSet(co, __symbolTable[45], makeNative(0, clofun3, 3, 0));
Obj x140690929510247 = primSet(co, __symbolTable[43], makeNative(45, clofun2, 3, 0));
Obj x140690929511815 = primSet(co, __symbolTable[42], makeNative(43, clofun2, 4, 0));
Obj x140690929453031 = primSet(co, __symbolTable[41], makeNative(32, clofun2, 4, 0));
Obj x140690929453319 = primSet(co, __symbolTable[39], makeNative(31, clofun2, 2, 0));
Obj x140690929453607 = primSet(co, __symbolTable[38], makeNative(30, clofun2, 1, 0));
Obj x140690929453895 = primSet(co, __symbolTable[37], makeNative(29, clofun2, 1, 0));
Obj x140690929454183 = primSet(co, __symbolTable[36], makeNative(28, clofun2, 1, 0));
Obj x140690929439271 = primSet(co, __symbolTable[35], makeNative(22, clofun2, 1, 0));
Obj x140690929440455 = primSet(co, __symbolTable[33], makeNative(21, clofun2, 2, 0));
PUSH_CONT_0(co, 4, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[32]), __symbolTable[31], makeNative(18, clofun2, 1, 0));
}

label4:
{
Obj x140690929441063 = __arg1;
Obj x140690929441831 = primSet(co, __symbolTable[29], makeNative(12, clofun2, 2, 0));
Obj x140690929418407 = primSet(co, __symbolTable[47], makeNative(10, clofun2, 2, 0));
Obj x140690929419655 = primSet(co, __symbolTable[28], makeNative(6, clofun2, 3, 0));
Obj x140690929415047 = primSet(co, __symbolTable[27], makeNative(34, clofun1, 4, 0));
Obj x140690933064807 = primSet(co, __symbolTable[26], makeNative(30, clofun1, 4, 0));
Obj x140690933021735 = primSet(co, __symbolTable[25], makeNative(15, clofun1, 2, 0));
Obj x140690931147495 = primSet(co, __symbolTable[23], makeNative(3, clofun1, 3, 0));
Obj x140690930573863 = primSet(co, __symbolTable[22], makeNative(47, clofun0, 1, 0));
Obj x140690930402343 = primSet(co, __symbolTable[17], makeNative(42, clofun0, 4, 0));
Obj x140690929636775 = primSet(co, __symbolTable[9], makeNative(33, clofun0, 2, 0));
Obj x140690929637287 = primSet(co, __symbolTable[8], makeNative(32, clofun0, 2, 0));
Obj x140690929582151 = primSet(co, __symbolTable[6], makeNative(23, clofun0, 1, 0));
Obj x140690929582407 = primSet(co, __symbolTable[7], False);
Obj x140690929585831 = primSet(co, __symbolTable[5], makeNative(13, clofun0, 1, 0));
Obj x140690929559367 = primSet(co, __symbolTable[3], makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = x140690929559367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj x140690929557607 = primGenSym();
Obj globals = x140690929557607;
Obj x140690929557863 = primSet(co, globals, Nil);
pushCont(co, 6, clofun0, 3, from, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[29]), globals);
}

label6:
{
Obj x140690929558183 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, x140690929558183, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[5]), from);
}

label7:
{
Obj x140690929558375 = __arg1;
Obj x140690929558183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, x140690929558183, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[2]), x140690929558375);
}

label8:
{
Obj x140690929558503 = __arg1;
Obj x140690929558183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
JUMP_WITH_ARGS_2(clofun0, x140690929558183, x140690929558503);
}

label9:
{
Obj x140690929558535 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = x140690929558535;
pushCont(co, 10, clofun0, 2, globals, bc);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[1]), to);
}

label10:
{
Obj x140690929558727 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = x140690929558727;
pushCont(co, 11, clofun0, 2, bc, stream);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[58]), globals);
}

label11:
{
Obj x140690929559047 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun0, 1, stream);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[23]), stream, bc, x140690929559047);
}

label12:
{
Obj x140690929559143 = __arg1;
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[0]), stream);
}

label13:
{
Obj file_45path = __arg1;
PUSH_CONT_0(co, 14, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[4]), file_45path);
}

label14:
{
Obj x140690929582951 = __arg1;
Obj sexp = x140690929582951;
Obj x140690933134311 = makeNative(22, clofun0, 1, 1, sexp);
pushCont(co, 15, clofun0, 2, x140690933134311, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[70]), sexp);
}

label15:
{
Obj x140690929584103 = __arg1;
Obj x140690933134311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690929584103) {
Obj x140690929584455 = PRIM_CAR(sexp);
Obj x140690929584615 = PRIM_EQ(__symbolTable[19], x140690929584455);
if (True == x140690929584615) {
pushCont(co, 20, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, x140690933134311, True);
} else {
pushCont(co, 18, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, x140690933134311, False);
}
} else {
pushCont(co, 16, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, x140690933134311, False);
}
}

label16:
{
Obj x140690929585511 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label17:
{
Obj x140690929585735 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label18:
{
Obj x140690929585063 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 19, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label19:
{
Obj x140690929585383 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label20:
{
Obj x140690929584647 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label21:
{
Obj x140690929584967 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label22:
{
Obj x140690933134375 = __arg1;
if (True == x140690933134375) {
Obj x140690929583591 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg1 = x140690929583591;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690929583719 = makeCons(closureRef(co, 0), Nil);
__nargs = 2;
__arg1 = x140690929583719;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label23:
{
Obj x140690933065639 = __arg1;
Obj x140690933065735 = makeNative(26, clofun0, 0, 1, x140690933065639);
Obj x140690929600711 = PRIM_ISCONS(x140690933065639);
if (True == x140690929600711) {
Obj x140690929601287 = PRIM_CAR(x140690933065639);
Obj x140690929601383 = PRIM_EQ(__symbolTable[18], x140690929601287);
if (True == x140690929601383) {
Obj x140690929601639 = PRIM_CDR(x140690933065639);
Obj more = x140690929601639;
Obj x140690929601831 = makeCons(__symbolTable[18], more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), x140690929601831, makeNative(24, clofun0, 1, 0));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933065735);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933065735);
}
}

label24:
{
Obj body = __arg1;
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = body;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(25, clofun0, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj type = __arg1;
Obj code = __arg2;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[8]), type, code);
}

label26:
{
Obj x140690933066119 = makeNative(29, clofun0, 0, 1, closureRef(co, 0));
Obj x140690929639335 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690929639335) {
Obj x140690929598919 = PRIM_CAR(closureRef(co, 0));
Obj x140690929598951 = PRIM_EQ(__symbolTable[19], x140690929598919);
if (True == x140690929598951) {
Obj x140690929599303 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690929599303;
Obj x140690929599559 = makeCons(__symbolTable[19], more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), x140690929599559, makeNative(27, clofun0, 1, 0));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066119);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066119);
}
}

label27:
{
Obj body = __arg1;
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = body;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(28, clofun0, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj type = __arg1;
Obj code = __arg2;
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[8]), type, code);
}

label29:
{
Obj x140690929638471 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = x140690929638471;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(30, clofun0, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj type = __arg1;
Obj code = __arg2;
PUSH_CONT_0(co, 31, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[8]), type, code);
}

label31:
{
Obj x140690929638887 = __arg1;
Obj x140690929638919 = makeCons(__symbolTable[19], x140690929638887);
__nargs = 2;
__arg1 = x140690929638919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(__symbolTable[7])) {
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[93]), type, code);
} else {
__nargs = 2;
__arg1 = code;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label33:
{
Obj x140690933133703 = __arg1;
Obj x140690933133735 = __arg2;
Obj x140690933134151 = makeNative(35, clofun0, 0, 2, x140690933133703, x140690933133735);
Obj x140690930367815 = PRIM_ISCONS(x140690933133703);
if (True == x140690930367815) {
Obj x140690930368231 = PRIM_CAR(x140690933133703);
Obj x140690930368263 = PRIM_EQ(__symbolTable[18], x140690930368231);
if (True == x140690930368263) {
Obj x140690929635431 = PRIM_CDR(x140690933133703);
Obj x140690929635559 = PRIM_ISCONS(x140690929635431);
if (True == x140690929635559) {
Obj x140690929635815 = PRIM_CDR(x140690933133703);
Obj x140690929635847 = PRIM_CAR(x140690929635815);
Obj name = x140690929635847;
Obj x140690929636135 = PRIM_CDR(x140690933133703);
Obj x140690929636167 = PRIM_CDR(x140690929636135);
Obj more = x140690929636167;
pushCont(co, 34, clofun0, 1, name);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, x140690933133735);
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933134151);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933134151);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933134151);
}
}

label34:
{
Obj x140690929636455 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690929636487 = makeCons(name, x140690929636455);
Obj x140690929636519 = makeCons(__symbolTable[18], x140690929636487);
__nargs = 2;
__arg1 = x140690929636519;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140690933135367 = makeNative(37, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690930377927 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930377927) {
Obj x140690930378343 = PRIM_CAR(closureRef(co, 0));
Obj x140690930378375 = PRIM_ISCONS(x140690930378343);
if (True == x140690930378375) {
Obj x140690930379143 = PRIM_CAR(closureRef(co, 0));
Obj x140690930379175 = PRIM_CAR(x140690930379143);
Obj x140690930379239 = PRIM_EQ(__symbolTable[21], x140690930379175);
if (True == x140690930379239) {
Obj x140690930379847 = PRIM_CAR(closureRef(co, 0));
Obj x140690930380039 = PRIM_CDR(x140690930379847);
Obj x140690930380167 = PRIM_ISCONS(x140690930380039);
if (True == x140690930380167) {
Obj x140690930364487 = PRIM_CAR(closureRef(co, 0));
Obj x140690930364551 = PRIM_CDR(x140690930364487);
Obj x140690930364583 = PRIM_CAR(x140690930364551);
Obj pkg = x140690930364583;
Obj x140690930365223 = PRIM_CAR(closureRef(co, 0));
Obj x140690930365255 = PRIM_CDR(x140690930365223);
Obj x140690930365351 = PRIM_CDR(x140690930365255);
Obj x140690930365383 = PRIM_EQ(Nil, x140690930365351);
if (True == x140690930365383) {
Obj x140690930365703 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690930365703;
Obj x140690930366311 = makeCons(pkg, Nil);
Obj x140690930366343 = makeCons(__symbolTable[21], x140690930366311);
pushCont(co, 36, clofun0, 1, x140690930366343);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135367);
}
}

label36:
{
Obj x140690930366503 = __arg1;
Obj x140690930366343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930366599 = makeCons(x140690930366343, x140690930366503);
__nargs = 2;
__arg1 = x140690930366599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x140690933136871 = makeNative(39, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690930390759 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930390759) {
Obj x140690930391303 = PRIM_CAR(closureRef(co, 0));
Obj x140690930391335 = PRIM_ISCONS(x140690930391303);
if (True == x140690930391335) {
Obj x140690930391783 = PRIM_CAR(closureRef(co, 0));
Obj x140690930391815 = PRIM_CAR(x140690930391783);
Obj x140690930391943 = PRIM_EQ(__symbolTable[20], x140690930391815);
if (True == x140690930391943) {
Obj x140690930392551 = PRIM_CAR(closureRef(co, 0));
Obj x140690930392615 = PRIM_CDR(x140690930392551);
Obj symbols = x140690930392615;
Obj x140690930392903 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690930392903;
Obj x140690930376743 = makeCons(__symbolTable[20], symbols);
pushCont(co, 38, clofun0, 1, x140690930376743);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933136871);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933136871);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933136871);
}
}

label38:
{
Obj x140690930377255 = __arg1;
Obj x140690930376743= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930377287 = makeCons(x140690930376743, x140690930377255);
__nargs = 2;
__arg1 = x140690930377287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj x140690933064519 = makeNative(41, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj x140690930405031 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930405031) {
Obj x140690930389351 = PRIM_CAR(closureRef(co, 0));
Obj x140690930389383 = PRIM_EQ(__symbolTable[19], x140690930389351);
if (True == x140690930389383) {
Obj x140690930389799 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690930389799;
PUSH_CONT_0(co, 40, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933064519);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933064519);
}
}

label40:
{
Obj x140690930390247 = __arg1;
Obj x140690930390279 = makeCons(__symbolTable[19], x140690930390247);
__nargs = 2;
__arg1 = x140690930390279;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
JUMP_WITH_ARGS_2(clofun0, closureRef(co, 0), closureRef(co, 1));
}

label42:
{
Obj x140690933064231 = __arg1;
Obj x140690933064295 = __arg2;
Obj x140690933064327 = __arg3;
Obj x140690933064359 = co->args[4];
Obj x140690930574887 = PRIM_EQ(Nil, x140690933064231);
if (True == x140690930574887) {
pushCont(co, 45, clofun0, 2, x140690933064327, x140690933064359);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[72]), x140690933064295);
} else {
Obj x140690933065447 = makeNative(43, clofun0, 0, 4, x140690933064231, x140690933064295, x140690933064327, x140690933064359);
Obj x140690930426727 = PRIM_ISCONS(x140690933064231);
if (True == x140690930426727) {
Obj x140690930427079 = PRIM_CAR(x140690933064231);
Obj x140690930427111 = PRIM_ISCONS(x140690930427079);
if (True == x140690930427111) {
Obj x140690930428167 = PRIM_CAR(x140690933064231);
Obj x140690930428199 = PRIM_CAR(x140690930428167);
Obj x140690930428647 = PRIM_EQ(__symbolTable[10], x140690930428199);
if (True == x140690930428647) {
Obj x140690930429031 = PRIM_CAR(x140690933064231);
Obj x140690930429063 = PRIM_CDR(x140690930429031);
Obj exp = x140690930429063;
Obj x140690930429703 = PRIM_CDR(x140690933064231);
Obj more = x140690930429703;
Obj x140690930401607 = makeCons(__symbolTable[19], exp);
Obj x140690930401639 = makeCons(x140690930401607, x140690933064295);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = x140690930401639;
__arg3 = x140690933064327;
co->args[4] = x140690933064359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933065447);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933065447);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933065447);
}
}
}

label43:
{
Obj x140690933066279 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140690930512327 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930512327) {
Obj x140690930512807 = PRIM_CAR(closureRef(co, 0));
Obj x140690930512839 = PRIM_ISCONS(x140690930512807);
if (True == x140690930512839) {
Obj x140690930513575 = PRIM_CAR(closureRef(co, 0));
Obj x140690930513735 = PRIM_CAR(x140690930513575);
Obj x140690930513767 = PRIM_EQ(__symbolTable[12], x140690930513735);
if (True == x140690930513767) {
Obj x140690930514439 = PRIM_CAR(closureRef(co, 0));
Obj x140690930514503 = PRIM_CDR(x140690930514439);
Obj exp = x140690930514503;
Obj x140690930515111 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690930515111;
Obj x140690930515655 = makeCons(__symbolTable[11], exp);
Obj x140690930515751 = makeCons(x140690930515655, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = x140690930515751;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066279);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066279);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933066279);
}
}

label44:
{
Obj x140690930576807 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930576807) {
Obj x140690930577319 = PRIM_CAR(closureRef(co, 0));
Obj exp = x140690930577319;
Obj x140690930553479 = PRIM_CDR(closureRef(co, 0));
Obj more = x140690930553479;
Obj x140690930555047 = makeCons(exp, Nil);
Obj x140690930555079 = makeCons(__symbolTable[14], x140690930555047);
Obj x140690930555399 = makeCons(x140690930555079, Nil);
Obj x140690930555431 = makeCons(__symbolTable[15], x140690930555399);
Obj x140690930556039 = makeCons(__symbolTable[13], Nil);
Obj x140690930556071 = makeCons(x140690930556039, Nil);
Obj x140690930556103 = makeCons(x140690930555431, x140690930556071);
Obj x140690930556135 = makeCons(__symbolTable[16], x140690930556103);
Obj x140690930556519 = makeCons(x140690930556135, closureRef(co, 1));
Obj x140690930556679 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = x140690930556519;
__arg3 = x140690930556679;
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label45:
{
Obj x140690930575431 = __arg1;
Obj x140690933064327= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933064359= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun0, 2, x140690933064359, x140690930575431);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[72]), x140690933064327);
}

label46:
{
Obj x140690930575527 = __arg1;
Obj x140690933064359= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930575431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun0, x140690933064359, x140690930575431, x140690930575527);
}

label47:
{
Obj x140690933133671 = __arg1;
Obj x140690933133895 = makeNative(48, clofun0, 0, 1, x140690933133671);
Obj x140690930628263 = PRIM_ISCONS(x140690933133671);
if (True == x140690930628263) {
Obj x140690930628615 = PRIM_CAR(x140690933133671);
Obj x140690930628647 = PRIM_EQ(__symbolTable[18], x140690930628615);
if (True == x140690930628647) {
Obj x140690930629191 = PRIM_CDR(x140690933133671);
Obj x140690930629255 = PRIM_ISCONS(x140690930629191);
if (True == x140690930629255) {
Obj x140690930629831 = PRIM_CDR(x140690933133671);
Obj x140690930629863 = PRIM_CAR(x140690930629831);
Obj x140690930630535 = PRIM_CDR(x140690933133671);
Obj x140690930630567 = PRIM_CDR(x140690930630535);
Obj remain = x140690930630567;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933133895);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933133895);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933133895);
}
}

label48:
{
Obj x140690933134759 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj x140690930683719 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930683719) {
Obj x140690930626887 = PRIM_CAR(closureRef(co, 0));
Obj x140690930626951 = PRIM_EQ(__symbolTable[19], x140690930626887);
if (True == x140690930626951) {
Obj x140690930627335 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140690930627335;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933134759);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933134759);
}
}

label49:
{
Obj x140690933135559 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj x140690931011559 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931011559) {
Obj x140690930680295 = PRIM_CAR(closureRef(co, 0));
Obj x140690930680487 = PRIM_ISCONS(x140690930680295);
if (True == x140690930680487) {
Obj x140690930681255 = PRIM_CAR(closureRef(co, 0));
Obj x140690930681287 = PRIM_CAR(x140690930681255);
Obj x140690930681319 = PRIM_EQ(__symbolTable[20], x140690930681287);
if (True == x140690930681319) {
Obj x140690930682119 = PRIM_CAR(closureRef(co, 0));
Obj x140690930682151 = PRIM_CDR(x140690930682119);
Obj x140690930682407 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140690930682407;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135559);
}
} else {
JUMP_WITH_ARGS_1(clofun0, x140690933135559);
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun1(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690933136519 = makeNative(2, clofun1, 0, 0);
Obj x140690931149671 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931149671) {
Obj x140690931150055 = PRIM_CAR(closureRef(co, 0));
Obj x140690931150087 = PRIM_ISCONS(x140690931150055);
if (True == x140690931150087) {
Obj x140690931097735 = PRIM_CAR(closureRef(co, 0));
Obj x140690931097767 = PRIM_CAR(x140690931097735);
Obj x140690931097799 = PRIM_EQ(__symbolTable[21], x140690931097767);
if (True == x140690931097799) {
Obj x140690931098855 = PRIM_CAR(closureRef(co, 0));
Obj x140690931098887 = PRIM_CDR(x140690931098855);
Obj x140690931098919 = PRIM_ISCONS(x140690931098887);
if (True == x140690931098919) {
Obj x140690931099879 = PRIM_CAR(closureRef(co, 0));
Obj x140690931099975 = PRIM_CDR(x140690931099879);
Obj x140690931100007 = PRIM_CAR(x140690931099975);
Obj pkg = x140690931100007;
Obj x140690931008647 = PRIM_CAR(closureRef(co, 0));
Obj x140690931008679 = PRIM_CDR(x140690931008647);
Obj x140690931008871 = PRIM_CDR(x140690931008679);
Obj x140690931008935 = PRIM_EQ(Nil, x140690931008871);
if (True == x140690931008935) {
Obj x140690931009351 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140690931009351;
pushCont(co, 1, clofun1, 1, remain);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[135]), pkg);
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
} else {
JUMP_WITH_ARGS_1(clofun1, x140690933136519);
}
}

label1:
{
Obj x140690931009735 = __arg1;
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[22]), remain);
}

label2:
{
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj to = __arg1;
Obj bc = __arg2;
Obj globals = __arg3;
pushCont(co, 4, clofun1, 3, bc, to, globals);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = Nil;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140690933022695 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = x140690933022695;
pushCont(co, 5, clofun1, 3, to, globals, groups);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[69]), bc);
}

label5:
{
Obj x140690931216775 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = x140690931216775;
pushCont(co, 6, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("#include \"types.h\"\n"));
}

label6:
{
Obj x140690931217255 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("#include \"runtime.h\"\n\n"));
}

label7:
{
Obj x140690931217767 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(12, clofun1, 1, 2, maxid, to), groups);
}

label8:
{
Obj x140690931219175 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("\n\n"));
}

label9:
{
Obj x140690931219943 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[25]), to, globals);
}

label10:
{
Obj x140690931220135 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(11, clofun1, 1, 3, to, maxid, globals), groups);
}

label11:
{
Obj group = __arg1;
__nargs = 5;
__arg0 = globalRef(__symbolTable[27]);
__arg1 = closureRef(co, 0);
__arg2 = group;
__arg3 = closureRef(co, 1);
co->args[4] = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj group = __arg1;
PUSH_CONT_0(co, 13, clofun1);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[69]), group);
}

label13:
{
Obj x140690931218887 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[46]), closureRef(co, 1), x140690931218887, closureRef(co, 0));
}

label14:
{
Obj x140690931218983 = __arg1;
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 1), makeCString(";\n"));
}

label15:
{
Obj to = __arg1;
Obj globals = __arg2;
pushCont(co, 16, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("static __thread Obj* __symbolTable;\n\n"));
}

label16:
{
Obj x140690933065671 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("void entry(struct Cora *co) {\n"));
}

label17:
{
Obj x140690933066183 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
}

label18:
{
Obj x140690933066439 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 19, clofun1, 2, globals, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), globals);
}

label19:
{
Obj x140690933067047 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[60]), to, x140690933067047);
}

label20:
{
Obj x140690933067079 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString(");\n"));
}

label21:
{
Obj x140690933067431 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun1, 1, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[131]), makeNative(23, clofun1, 2, 1, to), MAKE_NUMBER(0), globals);
}

label22:
{
Obj x140690933021575 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("clofun0(co);\n}\n\n"));
}

label23:
{
Obj acc = __arg1;
Obj sym = __arg2;
pushCont(co, 24, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("__symbolTable["));
}

label24:
{
Obj x140690933019111 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[60]), closureRef(co, 0), acc);
}

label25:
{
Obj x140690933019559 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("] = intern(\""));
}

label26:
{
Obj x140690933020103 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun1, 1, acc);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[24]), sym);
}

label27:
{
Obj x140690933020615 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), x140690933020615);
}

label28:
{
Obj x140690933020647 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun1, 1, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("\");\n"));
}

label29:
{
Obj x140690933021159 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933021287 = PRIM_ADD(acc, MAKE_NUMBER(1));
__nargs = 2;
__arg1 = x140690933021287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140690933137095 = __arg1;
Obj x140690933137127 = __arg2;
Obj x140690933137159 = __arg3;
Obj x140690933137223 = co->args[4];
Obj x140690929415399 = PRIM_EQ(Nil, x140690933137223);
if (True == x140690929415399) {
pushCont(co, 32, clofun1, 2, x140690933137159, x140690933137095);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[108]), x140690933137159);
} else {
Obj x140690933134727 = PRIM_ISCONS(x140690933137223);
if (True == x140690933134727) {
Obj x140690933135271 = PRIM_CAR(x140690933137223);
Obj bc = x140690933135271;
Obj x140690933136327 = PRIM_CDR(x140690933137223);
Obj more = x140690933136327;
Obj x140690933136551 = PRIM_EQ(x140690933137127, globalRef(__symbolTable[50]));
if (True == x140690933136551) {
pushCont(co, 31, clofun1, 3, x140690933137095, bc, more);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), x140690933137159);
} else {
Obj x140690933064199 = PRIM_ADD(x140690933137127, MAKE_NUMBER(1));
Obj x140690933064615 = makeCons(bc, x140690933137159);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = x140690933137095;
__arg2 = x140690933064199;
__arg3 = x140690933064615;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label31:
{
Obj x140690933137287 = __arg1;
Obj x140690933137095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933137319 = makeCons(x140690933137287, x140690933137095);
Obj x140690933063719 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = x140690933137319;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = x140690933063719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140690929415687 = __arg1;
Obj x140690933137159= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933137095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929415719 = primNot(x140690929415687);
if (True == x140690929415719) {
pushCont(co, 33, clofun1, 1, x140690933137095);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), x140690933137159);
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), x140690933137095);
}
}

label33:
{
Obj x140690929415879 = __arg1;
Obj x140690933137095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690929415911 = makeCons(x140690929415879, x140690933137095);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), x140690929415911);
}

label34:
{
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
Obj globals = co->args[4];
pushCont(co, 35, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[69]), group);
}

label35:
{
Obj x140690929420071 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[46]), to, x140690929420071, maxid);
}

label36:
{
Obj x140690929420103 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 37, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("{\n"));
}

label37:
{
Obj x140690929420263 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("int __nargs = co->nargs;\n"));
}

label38:
{
Obj x140690929420423 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 39, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg0 = co->args[0];\n"));
}

label39:
{
Obj x140690929420583 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 40, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg1 = co->args[1];\n"));
}

label40:
{
Obj x140690929420743 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 41, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg2 = co->args[2];\n"));
}

label41:
{
Obj x140690929420903 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg3 = co->args[3];\n\n"));
}

label42:
{
Obj x140690929421063 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 43, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("static void* jumpTable[] = {"));
}

label43:
{
Obj x140690929421223 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 44, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), group);
}

label44:
{
Obj x140690929421447 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[28]), to, MAKE_NUMBER(0), x140690929421447);
}

label45:
{
Obj x140690929421479 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 46, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("};\n\n"));
}

label46:
{
Obj x140690929421639 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 47, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("goto *jumpTable[co->ctx.pc.label];\n\n"));
}

label47:
{
Obj x140690929421799 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 48, clofun1, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(5, clofun2, 1, 3, to, maxid, globals), group);
}

label48:
{
Obj x140690929422183 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun1, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("fail:\n"));
}

label49:
{
Obj x140690929414151 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("co->nargs = __nargs;\n"));
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun2(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690929414311 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[0] = __arg0;\n"));
}

label1:
{
Obj x140690929414471 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 2, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[1] = __arg1;\n"));
}

label2:
{
Obj x140690929414631 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[2] = __arg2;\n"));
}

label3:
{
Obj x140690929414791 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 4, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[3] = __arg3;\n"));
}

label4:
{
Obj x140690929414951 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("\n}\n\n"));
}

label5:
{
Obj x = __arg1;
__nargs = 5;
__arg0 = globalRef(__symbolTable[41]);
__arg1 = closureRef(co, 0);
__arg2 = x;
__arg3 = closureRef(co, 1);
co->args[4] = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj x140690929418759 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == x140690929418759) {
pushCont(co, 9, clofun2, 2, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("&&label0"));
} else {
Obj x140690929419143 = PRIM_LT(i, n);
if (True == x140690929419143) {
pushCont(co, 7, clofun2, 3, i, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString(", &&label"));
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label7:
{
Obj x140690929419303 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun2, 3, i, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), to, i);
}

label8:
{
Obj x140690929419463 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690929419623 = PRIM_ADD(i, MAKE_NUMBER(1));
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[28]), to, x140690929419623, n);
}

label9:
{
Obj x140690929418919 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[28]), to, MAKE_NUMBER(1), n);
}

label10:
{
Obj x140690933135495 = __arg1;
Obj x140690933135527 = __arg2;
Obj x140690929442183 = PRIM_EQ(Nil, x140690933135527);
if (True == x140690929442183) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690929442343 = PRIM_ISCONS(x140690933135527);
if (True == x140690929442343) {
Obj x140690929442503 = PRIM_CAR(x140690933135527);
Obj x = x140690929442503;
Obj x140690929442663 = PRIM_CDR(x140690933135527);
Obj y = x140690929442663;
pushCont(co, 11, clofun2, 2, x140690933135495, y);
JUMP_WITH_ARGS_2(clofun2, x140690933135495, x);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label11:
{
Obj x140690929418247 = __arg1;
Obj x140690933135495= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[47]), x140690933135495, y);
}

label12:
{
Obj globals = __arg1;
Obj exp = __arg2;
pushCont(co, 13, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[39]), globals);
}

label13:
{
Obj x140690929441671 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
JUMP_WITH_ARGS_2(clofun2, x140690929441671, exp);
}

label14:
{
Obj x140690929441703 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[38]), x140690929441703);
}

label15:
{
Obj x140690929441735 = __arg1;
PUSH_CONT_0(co, 16, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[37]), x140690929441735);
}

label16:
{
Obj x140690929441767 = __arg1;
PUSH_CONT_0(co, 17, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[36]), x140690929441767);
}

label17:
{
Obj x140690929441799 = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[35]), x140690929441799);
}

label18:
{
Obj exp = __arg1;
pushCont(co, 19, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[104]), exp);
}

label19:
{
Obj x140690929440807 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = x140690929440807;
pushCont(co, 20, clofun2, 1, obj);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[30]), exp);
}

label20:
{
Obj x140690929440967 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = x140690929440967;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[33]), obj, fns);
}

label21:
{
Obj x140690933133415 = __arg1;
Obj x140690933133639 = __arg2;
Obj x140690929439623 = PRIM_EQ(Nil, x140690933133639);
if (True == x140690929439623) {
__nargs = 2;
__arg1 = x140690933133415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690929439783 = PRIM_ISCONS(x140690933133639);
if (True == x140690929439783) {
Obj x140690929439943 = PRIM_CAR(x140690933133639);
Obj hd = x140690929439943;
Obj x140690929440103 = PRIM_CDR(x140690933133639);
Obj more = x140690929440103;
Obj x140690929440327 = makeCons(x140690933133415, Nil);
Obj x140690929440359 = makeCons(hd, x140690929440327);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[33]), x140690929440359, more);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label22:
{
Obj exp = __arg1;
pushCont(co, 23, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[34]), MAKE_NUMBER(2));
}

label23:
{
Obj x140690929454535 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = x140690929454535;
pushCont(co, 24, clofun2, 2, exp, v);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[63]), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
}

label24:
{
Obj x140690929454695 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun2, 2, exp, v);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[63]), v, MAKE_NUMBER(1), Nil);
}

label25:
{
Obj x140690929454855 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun2, 1, v);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[66]), v, exp);
}

label26:
{
Obj x140690929455015 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = x140690929455015;
Obj x140690929439047 = makeCons(e1, Nil);
Obj x140690929439079 = makeCons(Nil, x140690929439047);
Obj x140690929439111 = makeCons(Nil, x140690929439079);
Obj x140690929439143 = makeCons(__symbolTable[94], x140690929439111);
pushCont(co, 27, clofun2, 1, v);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[64]), v, x140690929439143);
}

label27:
{
Obj x140690929439175 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[65]), v, MAKE_NUMBER(1));
}

label28:
{
Obj exp = __arg1;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[68]), Nil, exp);
}

label29:
{
Obj exp = __arg1;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[74]), exp, globalRef(__symbolTable[75]));
}

label30:
{
Obj exp = __arg1;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[76]), Nil, exp);
}

label31:
{
Obj globals = __arg1;
Obj exp = __arg2;
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[102]), Nil, globals, exp);
}

label32:
{
Obj x140690933063847 = __arg1;
Obj x140690933063879 = __arg2;
Obj x140690933063943 = __arg3;
Obj x140690933063975 = co->args[4];
Obj x140690933064263 = makeNative(40, clofun2, 0, 1, x140690933063879);
Obj x140690929471879 = PRIM_ISCONS(x140690933063879);
if (True == x140690929471879) {
Obj x140690929472071 = PRIM_CAR(x140690933063879);
Obj label = x140690929472071;
Obj x140690929474599 = PRIM_CDR(x140690933063879);
Obj x140690929474631 = PRIM_ISCONS(x140690929474599);
if (True == x140690929474631) {
Obj x140690929474919 = PRIM_CDR(x140690933063879);
Obj x140690929474951 = PRIM_CAR(x140690929474919);
Obj x140690929474983 = PRIM_ISCONS(x140690929474951);
if (True == x140690929474983) {
Obj x140690929475335 = PRIM_CDR(x140690933063879);
Obj x140690929475367 = PRIM_CAR(x140690929475335);
Obj x140690929475399 = PRIM_CAR(x140690929475367);
Obj x140690929475431 = PRIM_EQ(__symbolTable[94], x140690929475399);
if (True == x140690929475431) {
Obj x140690929467591 = PRIM_CDR(x140690933063879);
Obj x140690929467623 = PRIM_CAR(x140690929467591);
Obj x140690929467655 = PRIM_CDR(x140690929467623);
Obj x140690929467687 = PRIM_ISCONS(x140690929467655);
if (True == x140690929467687) {
Obj x140690929468039 = PRIM_CDR(x140690933063879);
Obj x140690929468071 = PRIM_CAR(x140690929468039);
Obj x140690929468103 = PRIM_CDR(x140690929468071);
Obj x140690929468135 = PRIM_CAR(x140690929468103);
Obj params = x140690929468135;
Obj x140690929468551 = PRIM_CDR(x140690933063879);
Obj x140690929468583 = PRIM_CAR(x140690929468551);
Obj x140690929468615 = PRIM_CDR(x140690929468583);
Obj x140690929468647 = PRIM_CDR(x140690929468615);
Obj x140690929468679 = PRIM_ISCONS(x140690929468647);
if (True == x140690929468679) {
Obj x140690929469095 = PRIM_CDR(x140690933063879);
Obj x140690929469127 = PRIM_CAR(x140690929469095);
Obj x140690929469159 = PRIM_CDR(x140690929469127);
Obj x140690929469191 = PRIM_CDR(x140690929469159);
Obj x140690929469223 = PRIM_CAR(x140690929469191);
Obj actives = x140690929469223;
Obj x140690929469703 = PRIM_CDR(x140690933063879);
Obj x140690929469735 = PRIM_CAR(x140690929469703);
Obj x140690929469767 = PRIM_CDR(x140690929469735);
Obj x140690929469799 = PRIM_CDR(x140690929469767);
Obj x140690929469831 = PRIM_CDR(x140690929469799);
Obj x140690929469863 = PRIM_ISCONS(x140690929469831);
if (True == x140690929469863) {
Obj x140690929470343 = PRIM_CDR(x140690933063879);
Obj x140690929470375 = PRIM_CAR(x140690929470343);
Obj x140690929470407 = PRIM_CDR(x140690929470375);
Obj x140690929470439 = PRIM_CDR(x140690929470407);
Obj x140690929470471 = PRIM_CDR(x140690929470439);
Obj x140690929470503 = PRIM_CAR(x140690929470471);
Obj body = x140690929470503;
Obj x140690929471047 = PRIM_CDR(x140690933063879);
Obj x140690929471079 = PRIM_CAR(x140690929471047);
Obj x140690929471111 = PRIM_CDR(x140690929471079);
Obj x140690929471143 = PRIM_CDR(x140690929471111);
Obj x140690929471175 = PRIM_CDR(x140690929471143);
Obj x140690929471207 = PRIM_CDR(x140690929471175);
Obj x140690929471239 = PRIM_EQ(Nil, x140690929471207);
if (True == x140690929471239) {
Obj x140690929451047 = PRIM_CDR(x140690933063879);
Obj x140690929451079 = PRIM_CDR(x140690929451047);
Obj x140690929451111 = PRIM_EQ(Nil, x140690929451079);
if (True == x140690929451111) {
pushCont(co, 33, clofun2, 7, actives, x140690933063943, label, x140690933063975, params, body, x140690933063847);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), x140690933063847, makeCString("label"));
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
} else {
JUMP_WITH_ARGS_1(clofun2, x140690933064263);
}
}

label33:
{
Obj x140690929451271 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933063943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933063975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj x140690929451559 = PRIM_SUB(x140690933063943, label);
pushCont(co, 34, clofun2, 7, actives, x140690933063943, label, x140690933063975, params, body, x140690933063847);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[51]), x140690929451559, globalRef(__symbolTable[50]));
}

label34:
{
Obj x140690929451591 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933063943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933063975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 35, clofun2, 7, actives, x140690933063943, label, x140690933063975, params, body, x140690933063847);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), x140690933063847, x140690929451591);
}

label35:
{
Obj x140690929451623 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933063943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933063975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 36, clofun2, 7, actives, x140690933063943, label, x140690933063975, params, body, x140690933063847);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), x140690933063847, makeCString(":\n{\n"));
}

label36:
{
Obj x140690929451783 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933063943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933063975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 37, clofun2, 7, actives, x140690933063943, label, x140690933063975, params, body, x140690933063847);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[45]);
__arg2 = x140690933063847;
__arg3 = MAKE_NUMBER(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140690929451943 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933063943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933063975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 38, clofun2, 6, x140690933063943, label, x140690933063975, params, body, x140690933063847);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[43]);
__arg2 = x140690933063847;
__arg3 = MAKE_NUMBER(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140690929452103 = __arg1;
Obj x140690933063943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933063975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140690929452327 = makeCons(x140690933063943, label);
pushCont(co, 39, clofun2, 1, x140690933063847);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = x140690933063975;
__arg2 = x140690929452327;
__arg3 = params;
co->args[4] = x140690933063847;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140690929452359 = __arg1;
Obj x140690933063847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), x140690933063847, makeCString("}\n\n"));
}

label40:
{
PUSH_CONT_0(co, 41, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), makeCString("wrong format of toplevel\n"));
}

label41:
{
Obj x140690929512423 = __arg1;
PUSH_CONT_0(co, 42, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), closureRef(co, 0));
}

label42:
{
Obj x140690929471655 = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), makeCString("\n"));
}

label43:
{
Obj x140690933135655 = __arg1;
Obj x140690933135687 = __arg2;
Obj x140690933135719 = __arg3;
Obj x140690933135847 = co->args[4];
Obj x140690929510727 = PRIM_EQ(Nil, x140690933135847);
if (True == x140690929510727) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690929510919 = PRIM_ISCONS(x140690933135847);
if (True == x140690929510919) {
Obj x140690929511079 = PRIM_CAR(x140690933135847);
Obj a = x140690929511079;
Obj x140690929511303 = PRIM_CDR(x140690933135847);
Obj b = x140690929511303;
pushCont(co, 44, clofun2, 4, x140690933135719, x140690933135655, x140690933135687, b);
JUMP_WITH_ARGS_4(clofun2, x140690933135655, x140690933135687, x140690933135719, a);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label44:
{
Obj x140690929511495 = __arg1;
Obj x140690933135719= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135655= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135687= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690929511687 = PRIM_ADD(x140690933135719, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = x140690933135655;
__arg2 = x140690933135687;
__arg3 = x140690929511687;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 46, clofun2, 3, var, i, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), w, makeCString("Obj "));
}

label46:
{
Obj x140690929509543 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 47, clofun2, 2, i, w);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = Nil;
__arg2 = __symbolTable[44];
__arg3 = Nil;
co->args[4] = w;
co->args[5] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140690929509703 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 48, clofun2, 2, i, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), w, makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + "));
}

label48:
{
Obj x140690929509927 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun2, 1, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), w, i);
}

label49:
{
Obj x140690929510151 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), w, makeCString("];\n"));
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun3(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 1, clofun3, 3, var, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("Obj "));
}

label1:
{
Obj x140690929560775 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun3, 2, i, w);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = Nil;
__arg2 = __symbolTable[44];
__arg3 = Nil;
co->args[4] = w;
co->args[5] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140690929560999 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929561191 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == x140690929561191) {
pushCont(co, 5, clofun3, 2, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(" = __arg"));
} else {
pushCont(co, 3, clofun3, 2, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(" = co->args["));
}
}

label3:
{
Obj x140690929508839 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, i);
}

label4:
{
Obj x140690929508999 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("];\n"));
}

label5:
{
Obj x140690929561415 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, i);
}

label6:
{
Obj x140690929508583 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(";\n"));
}

label7:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
pushCont(co, 8, clofun3, 3, label, maxid, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("static void "));
}

label8:
{
Obj x140690929559911 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun3, 1, w);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), w, label, maxid);
}

label9:
{
Obj x140690929560071 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("(struct Cora* co"));
}

label10:
{
Obj x140690929560231 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(")"));
}

label11:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj x140690929559079 = PRIM_SUB(maxid, label);
Obj x140690929559111 = primDiv(x140690929559079, globalRef(__symbolTable[50]));
Obj gid = x140690929559111;
pushCont(co, 12, clofun3, 2, w, gid);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("clofun"));
}

label12:
{
Obj x140690929559399 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, gid);
}

label13:
{
Obj x140690933133479 = __arg1;
Obj x140690933133511 = __arg2;
Obj x140690933133543 = __arg3;
Obj x140690933133575 = co->args[4];
Obj x140690933133607 = co->args[5];
Obj x140690933133991 = makeNative(36, clofun3, 0, 0);
Obj x140690929599367 = PRIM_ISCONS(x140690933133607);
if (True == x140690929599367) {
Obj x140690929599655 = PRIM_CAR(x140690933133607);
Obj x140690929599847 = PRIM_EQ(__symbolTable[67], x140690929599655);
if (True == x140690929599847) {
Obj x140690929600103 = PRIM_CDR(x140690933133607);
Obj x140690929600167 = PRIM_ISCONS(x140690929600103);
if (True == x140690929600167) {
Obj x140690929600583 = PRIM_CDR(x140690933133607);
Obj x140690929600615 = PRIM_CAR(x140690929600583);
Obj label = x140690929600615;
Obj x140690929601095 = PRIM_CDR(x140690933133607);
Obj x140690929601127 = PRIM_CDR(x140690929601095);
Obj stacks = x140690929601127;
Obj x140690929601447 = PRIM_EQ(stacks, Nil);
if (True == x140690929601447) {
pushCont(co, 25, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString("PUSH_CONT_0(co, "));
} else {
pushCont(co, 14, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString("pushCont(co, "));
}
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933133991);
}
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933133991);
}
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933133991);
}
}

label14:
{
Obj x140690929584007 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690929584487 = PRIM_CAR(x140690933133511);
Obj x140690929584519 = PRIM_SUB(x140690929584487, label);
pushCont(co, 15, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[51]), x140690929584519, globalRef(__symbolTable[50]));
}

label15:
{
Obj x140690929584551 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 16, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), x140690933133575, x140690929584551);
}

label16:
{
Obj x140690929584583 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 17, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(", "));
}

label17:
{
Obj x140690929584871 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690929585095 = PRIM_CAR(x140690933133511);
pushCont(co, 18, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), x140690933133575, label, x140690929585095);
}

label18:
{
Obj x140690929585127 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690929585447 = PRIM_EQ(stacks, Nil);
if (True == x140690929585447) {
Nil;
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(");\n"));
} else {
pushCont(co, 19, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(", "));
}
}

label19:
{
Obj x140690929585703 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[96]), stacks);
}

label20:
{
Obj x140690929585959 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 21, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), x140690933133575, x140690929585959);
}

label21:
{
Obj x140690929585991 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun3, 1, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[47]), makeNative(23, clofun3, 1, 3, x140690933133479, x140690933133511, x140690933133575), stacks);
}

label22:
{
Obj x140690929557959 = __arg1;
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(");\n"));
}

label23:
{
Obj x = __arg1;
pushCont(co, 24, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 2), makeCString(", "));
}

label24:
{
Obj x140690929557703 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
__arg3 = Nil;
co->args[4] = closureRef(co, 2);
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140690929601575 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690929602183 = PRIM_CAR(x140690933133511);
Obj x140690929602215 = PRIM_SUB(x140690929602183, label);
pushCont(co, 26, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[51]), x140690929602215, globalRef(__symbolTable[50]));
}

label26:
{
Obj x140690929602247 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), x140690933133575, x140690929602247);
}

label27:
{
Obj x140690929602279 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun3, 5, label, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(", "));
}

label28:
{
Obj x140690929602439 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690929582183 = PRIM_CAR(x140690933133511);
pushCont(co, 29, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), x140690933133575, label, x140690929582183);
}

label29:
{
Obj x140690929582215 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690929582471 = PRIM_EQ(stacks, Nil);
if (True == x140690929582471) {
Nil;
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(");\n"));
} else {
pushCont(co, 30, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(", "));
}
}

label30:
{
Obj x140690929582759 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[96]), stacks);
}

label31:
{
Obj x140690929583047 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun3, 4, x140690933133479, x140690933133511, stacks, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), x140690933133575, x140690929583047);
}

label32:
{
Obj x140690929583143 = __arg1;
Obj x140690933133479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 1, x140690933133575);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[47]), makeNative(34, clofun3, 1, 3, x140690933133479, x140690933133511, x140690933133575), stacks);
}

label33:
{
Obj x140690929583751 = __arg1;
Obj x140690933133575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), x140690933133575, makeCString(");\n"));
}

label34:
{
Obj x = __arg1;
pushCont(co, 35, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 2), makeCString(", "));
}

label35:
{
Obj x140690929583559 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
__arg3 = Nil;
co->args[4] = closureRef(co, 2);
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}

label37:
{
Obj globals = __arg1;
Obj self = __arg2;
Obj env = __arg3;
Obj w = co->args[4];
Obj l = co->args[5];
Obj x140690929636359 = primGenSym();
Obj generate_45inst_45list_45h = x140690929636359;
Obj x140690929639079 = primSet(co, generate_45inst_45list_45h, makeNative(39, clofun3, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
pushCont(co, 38, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), generate_45inst_45list_45h);
}

label38:
{
Obj x140690929639367 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, x140690929639367, l);
}

label39:
{
Obj x = __arg1;
Obj x140690929636711 = PRIM_EQ(Nil, x);
if (True == x140690929636711) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690929636871 = PRIM_ISCONS(x);
if (True == x140690929636871) {
Obj x140690929637063 = PRIM_CAR(x);
Obj a = x140690929637063;
Obj x140690929637255 = PRIM_CDR(x);
Obj b = x140690929637255;
pushCont(co, 40, clofun3, 1, b);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->args[5] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label40:
{
Obj x140690929637671 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 41, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[108]), b);
}

label41:
{
Obj x140690929638023 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690929638183 = primNot(x140690929638023);
if (True == x140690929638183) {
pushCont(co, 43, clofun3, 1, b);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(", "));
} else {
Nil;
pushCont(co, 42, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), closureRef(co, 4));
}
}

label42:
{
Obj x140690929638951 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, x140690929638951, b);
}

label43:
{
Obj x140690929638407 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label44:
{
Obj x140690929638631 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, x140690929638631, b);
}

label45:
{
Obj globals = __arg1;
Obj self = __arg2;
Obj env1 = __arg3;
Obj w = co->args[4];
Obj x1 = co->args[5];
Obj x140690930368135 = primGenSym();
Obj generate_45inst_45h = x140690930368135;
Obj x140690929635783 = primSet(co, generate_45inst_45h, makeNative(47, clofun3, 2, 4, self, generate_45inst_45h, globals, w));
pushCont(co, 46, clofun3, 2, x1, env1);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), generate_45inst_45h);
}

label46:
{
Obj x140690929635943 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun3, x140690929635943, x1, env1);
}

label47:
{
Obj x2 = __arg1;
Obj env = __arg2;
Obj x140690929635335 = primIsSymbol(x2);
if (True == x140690929635335) {
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[55]), closureRef(co, 3), x2);
} else {
Obj x140690933019143 = makeNative(1, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), env, closureRef(co, 2), x2, closureRef(co, 3));
Obj x140690930365735 = PRIM_ISCONS(x2);
if (True == x140690930365735) {
Obj x140690930366151 = PRIM_CAR(x2);
Obj x140690930366183 = PRIM_EQ(__symbolTable[98], x140690930366151);
if (True == x140690930366183) {
Obj x140690930366535 = PRIM_CDR(x2);
Obj x140690930366567 = PRIM_ISCONS(x140690930366535);
if (True == x140690930366567) {
Obj x140690930367015 = PRIM_CDR(x2);
Obj x140690930367047 = PRIM_CAR(x140690930367015);
Obj x = x140690930367047;
Obj x140690930367559 = PRIM_CDR(x2);
Obj x140690930367719 = PRIM_CDR(x140690930367559);
Obj x140690930367751 = PRIM_EQ(Nil, x140690930367719);
if (True == x140690930367751) {
pushCont(co, 48, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("globalRef(__symbolTable["));
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933019143);
}
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933019143);
}
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933019143);
}
} else {
JUMP_WITH_ARGS_1(clofun3, x140690933019143);
}
}
}

label48:
{
Obj x140690930368071 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 49, clofun3);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[56]), x, closureRef(co, 2));
}

label49:
{
Obj x140690930368423 = __arg1;
PUSH_CONT_0(co, 0, clofun4);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), closureRef(co, 3), x140690930368423);
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun4(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690930368455 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("])"));
}

label1:
{
Obj x140690933019847 = makeNative(4, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4), closureRef(co, 5));
Obj x140690930378567 = PRIM_ISCONS(closureRef(co, 4));
if (True == x140690930378567) {
Obj x140690930379079 = PRIM_CAR(closureRef(co, 4));
Obj x140690930379111 = PRIM_EQ(__symbolTable[83], x140690930379079);
if (True == x140690930379111) {
Obj x140690930379559 = PRIM_CDR(closureRef(co, 4));
Obj x140690930379591 = PRIM_ISCONS(x140690930379559);
if (True == x140690930379591) {
Obj x140690930380071 = PRIM_CDR(closureRef(co, 4));
Obj x140690930380103 = PRIM_CAR(x140690930380071);
Obj idx = x140690930380103;
Obj x140690930380711 = PRIM_CDR(closureRef(co, 4));
Obj x140690930380775 = PRIM_CDR(x140690930380711);
Obj x140690930364423 = PRIM_EQ(Nil, x140690930380775);
if (True == x140690930364423) {
pushCont(co, 2, clofun4, 1, idx);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("closureRef(co, "));
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933019847);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933019847);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933019847);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933019847);
}
}

label2:
{
Obj x140690930364647 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 3, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), idx);
}

label3:
{
Obj x140690930364935 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label4:
{
Obj x140690933020775 = makeNative(7, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 3), closureRef(co, 5));
Obj x140690930391527 = PRIM_ISCONS(closureRef(co, 4));
if (True == x140690930391527) {
Obj x140690930391847 = PRIM_CAR(closureRef(co, 4));
Obj x140690930391911 = PRIM_EQ(__symbolTable[48], x140690930391847);
if (True == x140690930391911) {
Obj x140690930392359 = PRIM_CDR(closureRef(co, 4));
Obj x140690930392455 = PRIM_ISCONS(x140690930392359);
if (True == x140690930392455) {
Obj x140690930392775 = PRIM_CDR(closureRef(co, 4));
Obj x140690930392807 = PRIM_CAR(x140690930392775);
Obj idx = x140690930392807;
Obj x140690930376871 = PRIM_CDR(closureRef(co, 4));
Obj x140690930376903 = PRIM_CDR(x140690930376871);
Obj x140690930376935 = PRIM_EQ(Nil, x140690930376903);
if (True == x140690930376935) {
pushCont(co, 5, clofun4, 1, idx);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("stackRef(co, "));
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933020775);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933020775);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933020775);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933020775);
}
}

label5:
{
Obj x140690930377447 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 6, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), idx);
}

label6:
{
Obj x140690930377735 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label7:
{
Obj x140690933021991 = makeNative(17, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 0), closureRef(co, 3), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2));
Obj x140690930426919 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140690930426919) {
Obj x140690930427207 = PRIM_CAR(closureRef(co, 3));
Obj x140690930427559 = PRIM_EQ(__symbolTable[101], x140690930427207);
if (True == x140690930427559) {
Obj x140690930428007 = PRIM_CDR(closureRef(co, 3));
Obj x140690930428039 = PRIM_ISCONS(x140690930428007);
if (True == x140690930428039) {
Obj x140690930428807 = PRIM_CDR(closureRef(co, 3));
Obj x140690930428839 = PRIM_CAR(x140690930428807);
Obj x = x140690930428839;
Obj x140690930429735 = PRIM_CDR(closureRef(co, 3));
Obj x140690930429895 = PRIM_CDR(x140690930429735);
Obj x140690930429927 = PRIM_EQ(Nil, x140690930429895);
if (True == x140690930429927) {
Obj x140690930401511 = primIsSymbol(x);
if (True == x140690930401511) {
pushCont(co, 14, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("__symbolTable["));
} else {
pushCont(co, 8, clofun4, 1, x);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[88]), x);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933021991);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933021991);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933021991);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690933021991);
}
}

label8:
{
Obj x140690930403015 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930403015) {
pushCont(co, 12, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("MAKE_NUMBER("));
} else {
Obj x140690930404679 = primIsString(x);
if (True == x140690930404679) {
pushCont(co, 9, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("makeCString(\""));
} else {
Obj x140690930389703 = PRIM_EQ(x, Nil);
if (True == x140690930389703) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("Nil"));
} else {
Obj x140690930390215 = PRIM_EQ(x, True);
if (True == x140690930390215) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("True"));
} else {
Obj x140690930390567 = PRIM_EQ(x, False);
if (True == x140690930390567) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("False"));
} else {
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[132]), makeCString("no cond match"));
}
}
}
}
}
}

label9:
{
Obj x140690930404999 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 10, clofun4);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[49]), x);
}

label10:
{
Obj x140690930405287 = __arg1;
PUSH_CONT_0(co, 11, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), x140690930405287);
}

label11:
{
Obj x140690930389287 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("\")"));
}

label12:
{
Obj x140690930403271 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), x);
}

label13:
{
Obj x140690930403943 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label14:
{
Obj x140690930401863 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 15, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[56]), x, closureRef(co, 4));
}

label15:
{
Obj x140690930402535 = __arg1;
PUSH_CONT_0(co, 16, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), x140690930402535);
}

label16:
{
Obj x140690930402567 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("]"));
}

label17:
{
Obj x140690931216519 = makeNative(32, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 5), closureRef(co, 3));
Obj x140690930629671 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140690930629671) {
Obj x140690930630215 = PRIM_CAR(closureRef(co, 2));
Obj x140690930630247 = PRIM_EQ(__symbolTable[91], x140690930630215);
if (True == x140690930630247) {
Obj x140690930573447 = PRIM_CDR(closureRef(co, 2));
Obj x140690930573479 = PRIM_ISCONS(x140690930573447);
if (True == x140690930573479) {
Obj x140690930574023 = PRIM_CDR(closureRef(co, 2));
Obj x140690930574119 = PRIM_CAR(x140690930574023);
Obj a = x140690930574119;
Obj x140690930574919 = PRIM_CDR(closureRef(co, 2));
Obj x140690930574951 = PRIM_CDR(x140690930574919);
Obj x140690930574983 = PRIM_ISCONS(x140690930574951);
if (True == x140690930574983) {
Obj x140690930575687 = PRIM_CDR(closureRef(co, 2));
Obj x140690930575719 = PRIM_CDR(x140690930575687);
Obj x140690930575751 = PRIM_CAR(x140690930575719);
Obj b = x140690930575751;
Obj x140690930576647 = PRIM_CDR(closureRef(co, 2));
Obj x140690930576679 = PRIM_CDR(x140690930576647);
Obj x140690930576711 = PRIM_CDR(x140690930576679);
Obj x140690930576743 = PRIM_ISCONS(x140690930576711);
if (True == x140690930576743) {
Obj x140690930553031 = PRIM_CDR(closureRef(co, 2));
Obj x140690930553063 = PRIM_CDR(x140690930553031);
Obj x140690930553095 = PRIM_CDR(x140690930553063);
Obj x140690930553223 = PRIM_CAR(x140690930553095);
Obj c = x140690930553223;
Obj x140690930554247 = PRIM_CDR(closureRef(co, 2));
Obj x140690930554279 = PRIM_CDR(x140690930554247);
Obj x140690930554407 = PRIM_CDR(x140690930554279);
Obj x140690930554439 = PRIM_CDR(x140690930554407);
Obj x140690930554599 = PRIM_EQ(Nil, x140690930554439);
if (True == x140690930554599) {
pushCont(co, 18, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[129]), a, closureRef(co, 5));
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931216519);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931216519);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931216519);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931216519);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931216519);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931216519);
}
}

label18:
{
Obj x140690930554983 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = x140690930554983;
Obj x140690930555495 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x140690930555495) {
pushCont(co, 25, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("Obj "));
} else {
Nil;
pushCont(co, 19, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[55]), closureRef(co, 3), a);
}
}

label19:
{
Obj x140690930513511 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 20, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(" = "));
}

label20:
{
Obj x140690930513927 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label21:
{
Obj x140690930514471 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, x140690930514471, b, closureRef(co, 5));
}

label22:
{
Obj x140690930514535 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label23:
{
Obj x140690930515079 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun4, 2, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label24:
{
Obj x140690930515559 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930515687 = makeCons(a, closureRef(co, 5));
JUMP_WITH_ARGS_3(clofun4, x140690930515559, c, x140690930515687);
}

label25:
{
Obj x140690930556007 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 26, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[55]), closureRef(co, 3), a);
}

label26:
{
Obj x140690930556487 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 27, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(" = "));
}

label27:
{
Obj x140690930556743 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 28, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label28:
{
Obj x140690930512231 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 29, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, x140690930512231, b, closureRef(co, 5));
}

label29:
{
Obj x140690930512295 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 30, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label30:
{
Obj x140690930512551 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun4, 2, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label31:
{
Obj x140690930512935 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930513063 = makeCons(a, closureRef(co, 5));
JUMP_WITH_ARGS_3(clofun4, x140690930512935, c, x140690930513063);
}

label32:
{
Obj x140690931218183 = makeNative(39, clofun4, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 0), closureRef(co, 4), closureRef(co, 5));
Obj x140690931010407 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690931010407) {
Obj x140690931011495 = PRIM_CAR(closureRef(co, 1));
Obj x140690931011527 = PRIM_ISCONS(x140690931011495);
if (True == x140690931011527) {
Obj x140690930680327 = PRIM_CAR(closureRef(co, 1));
Obj x140690930680359 = PRIM_CAR(x140690930680327);
Obj x140690930680391 = PRIM_EQ(__symbolTable[95], x140690930680359);
if (True == x140690930680391) {
Obj x140690930680999 = PRIM_CAR(closureRef(co, 1));
Obj x140690930681063 = PRIM_CDR(x140690930680999);
Obj x140690930681095 = PRIM_ISCONS(x140690930681063);
if (True == x140690930681095) {
Obj x140690930681703 = PRIM_CAR(closureRef(co, 1));
Obj x140690930681735 = PRIM_CDR(x140690930681703);
Obj x140690930681927 = PRIM_CAR(x140690930681735);
Obj f = x140690930681927;
Obj x140690930682535 = PRIM_CAR(closureRef(co, 1));
Obj x140690930682567 = PRIM_CDR(x140690930682535);
Obj x140690930682599 = PRIM_CDR(x140690930682567);
Obj x140690930682663 = PRIM_EQ(Nil, x140690930682599);
if (True == x140690930682663) {
Obj x140690930683079 = PRIM_CDR(closureRef(co, 1));
Obj args = x140690930683079;
pushCont(co, 33, clofun4, 2, f, args);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[107]), f);
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931218183);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931218183);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931218183);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931218183);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931218183);
}
}

label33:
{
Obj x140690930683591 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun4, 2, f, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), x140690930683591);
}

label34:
{
Obj x140690930683687 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930626791 = PRIM_EQ(f, __symbolTable[126]);
if (True == x140690930626791) {
pushCont(co, 37, clofun4, 1, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("(co, "));
} else {
pushCont(co, 35, clofun4, 1, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("("));
}
}

label35:
{
Obj x140690930628103 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 36, clofun4);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 4);
co->args[4] = closureRef(co, 5);
co->args[5] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140690930628487 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label37:
{
Obj x140690930626919 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 38, clofun4);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 4);
co->args[4] = closureRef(co, 5);
co->args[5] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140690930627719 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label39:
{
Obj x140690931219591 = makeNative(49, clofun4, 0, 6, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5));
Obj x140690931219015 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140690931219015) {
Obj x140690931219719 = PRIM_CAR(closureRef(co, 2));
Obj x140690931219751 = PRIM_EQ(__symbolTable[92], x140690931219719);
if (True == x140690931219751) {
Obj x140690931220167 = PRIM_CDR(closureRef(co, 2));
Obj x140690931220295 = PRIM_ISCONS(x140690931220167);
if (True == x140690931220295) {
Obj x140690931146983 = PRIM_CDR(closureRef(co, 2));
Obj x140690931147271 = PRIM_CAR(x140690931146983);
Obj a = x140690931147271;
Obj x140690931147751 = PRIM_CDR(closureRef(co, 2));
Obj x140690931147815 = PRIM_CDR(x140690931147751);
Obj x140690931147847 = PRIM_ISCONS(x140690931147815);
if (True == x140690931147847) {
Obj x140690931148583 = PRIM_CDR(closureRef(co, 2));
Obj x140690931148615 = PRIM_CDR(x140690931148583);
Obj x140690931148647 = PRIM_CAR(x140690931148615);
Obj b = x140690931148647;
Obj x140690931149447 = PRIM_CDR(closureRef(co, 2));
Obj x140690931149479 = PRIM_CDR(x140690931149447);
Obj x140690931149511 = PRIM_CDR(x140690931149479);
Obj x140690931149543 = PRIM_ISCONS(x140690931149511);
if (True == x140690931149543) {
Obj x140690931150215 = PRIM_CDR(closureRef(co, 2));
Obj x140690931150247 = PRIM_CDR(x140690931150215);
Obj x140690931150279 = PRIM_CDR(x140690931150247);
Obj x140690931150311 = PRIM_CAR(x140690931150279);
Obj c = x140690931150311;
Obj x140690931097863 = PRIM_CDR(closureRef(co, 2));
Obj x140690931097895 = PRIM_CDR(x140690931097863);
Obj x140690931098023 = PRIM_CDR(x140690931097895);
Obj x140690931098055 = PRIM_CDR(x140690931098023);
Obj x140690931098087 = PRIM_EQ(Nil, x140690931098055);
if (True == x140690931098087) {
pushCont(co, 40, clofun4, 3, a, b, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("if (True == "));
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931219591);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931219591);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931219591);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931219591);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931219591);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931219591);
}
}

label40:
{
Obj x140690931098727 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 41, clofun4, 3, a, b, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label41:
{
Obj x140690931099175 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun4, 2, b, c);
JUMP_WITH_ARGS_3(clofun4, x140690931099175, a, closureRef(co, 4));
}

label42:
{
Obj x140690931099239 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 43, clofun4, 2, b, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(") {\n"));
}

label43:
{
Obj x140690931099655 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun4, 2, b, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label44:
{
Obj x140690931100231 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 1, c);
JUMP_WITH_ARGS_3(clofun4, x140690931100231, b, closureRef(co, 4));
}

label45:
{
Obj x140690931100359 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 46, clofun4, 1, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("} else {\n"));
}

label46:
{
Obj x140690931008391 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 47, clofun4, 1, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label47:
{
Obj x140690931008967 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun4);
JUMP_WITH_ARGS_3(clofun4, x140690931008967, c, closureRef(co, 4));
}

label48:
{
Obj x140690931009031 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("}\n"));
}

label49:
{
Obj x140690931147207 = makeNative(13, clofun5, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 5), closureRef(co, 0), closureRef(co, 4));
Obj x140690933137255 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690933137255) {
Obj x140690933063815 = PRIM_CAR(closureRef(co, 1));
Obj x140690933064007 = PRIM_EQ(__symbolTable[77], x140690933063815);
if (True == x140690933064007) {
Obj x140690933064711 = PRIM_CDR(closureRef(co, 1));
Obj x140690933064743 = PRIM_ISCONS(x140690933064711);
if (True == x140690933064743) {
Obj x140690933065159 = PRIM_CDR(closureRef(co, 1));
Obj x140690933065191 = PRIM_CAR(x140690933065159);
Obj label = x140690933065191;
Obj x140690933065895 = PRIM_CDR(closureRef(co, 1));
Obj x140690933066055 = PRIM_CDR(x140690933065895);
Obj x140690933066087 = PRIM_ISCONS(x140690933066055);
if (True == x140690933066087) {
Obj x140690933066695 = PRIM_CDR(closureRef(co, 1));
Obj x140690933066727 = PRIM_CDR(x140690933066695);
Obj x140690933066759 = PRIM_CAR(x140690933066727);
Obj nargs = x140690933066759;
Obj x140690933067303 = PRIM_CDR(closureRef(co, 1));
Obj x140690933067335 = PRIM_CDR(x140690933067303);
Obj x140690933067367 = PRIM_CDR(x140690933067335);
Obj frees = x140690933067367;
pushCont(co, 0, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("makeNative("));
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931147207);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931147207);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931147207);
}
} else {
JUMP_WITH_ARGS_1(clofun4, x140690931147207);
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun5(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690933018631 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933019271 = PRIM_CAR(closureRef(co, 3));
Obj x140690933019367 = PRIM_SUB(x140690933019271, label);
pushCont(co, 1, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[51]), x140690933019367, globalRef(__symbolTable[50]));
}

label1:
{
Obj x140690933019399 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), x140690933019399);
}

label2:
{
Obj x140690933019431 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 3, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label3:
{
Obj x140690933019911 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933020263 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 4, clofun5, 2, nargs, frees);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 5), label, x140690933020263);
}

label4:
{
Obj x140690933020295 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 5, clofun5, 2, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label5:
{
Obj x140690933020679 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), nargs);
}

label6:
{
Obj x140690933021127 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 7, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label7:
{
Obj x140690933021607 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun5, 1, frees);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[96]), frees);
}

label8:
{
Obj x140690933022119 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 9, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), x140690933022119);
}

label9:
{
Obj x140690933022151 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun5, 1, frees);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[108]), frees);
}

label10:
{
Obj x140690931216487 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931216583 = primNot(x140690931216487);
if (True == x140690931216583) {
pushCont(co, 11, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
} else {
Nil;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}
}

label11:
{
Obj x140690931216967 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 4);
co->args[4] = closureRef(co, 5);
co->args[5] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140690931217351 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label13:
{
Obj x140690931147783 = makeNative(18, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 3));
Obj x140690929471975 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140690929471975) {
Obj x140690929472231 = PRIM_CAR(closureRef(co, 2));
Obj x140690929472263 = PRIM_EQ(__symbolTable[90], x140690929472231);
if (True == x140690929472263) {
Obj x140690929472519 = PRIM_CDR(closureRef(co, 2));
Obj x140690929472551 = PRIM_ISCONS(x140690929472519);
if (True == x140690929472551) {
Obj x140690929472807 = PRIM_CDR(closureRef(co, 2));
Obj x140690929472839 = PRIM_CAR(x140690929472807);
Obj a = x140690929472839;
Obj x140690929473159 = PRIM_CDR(closureRef(co, 2));
Obj x140690929473191 = PRIM_CDR(x140690929473159);
Obj x140690929473223 = PRIM_ISCONS(x140690929473191);
if (True == x140690929473223) {
Obj x140690929473543 = PRIM_CDR(closureRef(co, 2));
Obj x140690929473575 = PRIM_CDR(x140690929473543);
Obj x140690929473607 = PRIM_CAR(x140690929473575);
Obj b = x140690929473607;
Obj x140690929473991 = PRIM_CDR(closureRef(co, 2));
Obj x140690929474023 = PRIM_CDR(x140690929473991);
Obj x140690929474055 = PRIM_CDR(x140690929474023);
Obj x140690929474087 = PRIM_EQ(Nil, x140690929474055);
if (True == x140690929474087) {
pushCont(co, 14, clofun5, 2, a, b);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931147783);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931147783);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931147783);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931147783);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931147783);
}
}

label14:
{
Obj x140690929474343 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 1, b);
JUMP_WITH_ARGS_3(clofun5, x140690929474343, a, closureRef(co, 5));
}

label15:
{
Obj x140690929474407 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun5, 1, b);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label16:
{
Obj x140690933134791 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun5, 1, b);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label17:
{
Obj x140690933136007 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, x140690933136007, b, closureRef(co, 5));
}

label18:
{
Obj x140690931148871 = makeNative(28, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140690929509223 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690929509223) {
Obj x140690929509479 = PRIM_CAR(closureRef(co, 1));
Obj x140690929509511 = PRIM_EQ(__symbolTable[78], x140690929509479);
if (True == x140690929509511) {
Obj x140690929509767 = PRIM_CDR(closureRef(co, 1));
Obj x140690929509799 = PRIM_ISCONS(x140690929509767);
if (True == x140690929509799) {
Obj x140690929510055 = PRIM_CDR(closureRef(co, 1));
Obj x140690929510087 = PRIM_CAR(x140690929510055);
Obj x = x140690929510087;
Obj x140690929510407 = PRIM_CDR(closureRef(co, 1));
Obj x140690929510439 = PRIM_CDR(x140690929510407);
Obj x140690929510471 = PRIM_EQ(Nil, x140690929510439);
if (True == x140690929510471) {
pushCont(co, 19, clofun5, 1, x);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("__nargs = 2;\n"));
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931148871);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931148871);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931148871);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931148871);
}
}

label19:
{
Obj x140690929510663 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 20, clofun5, 1, x);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("__arg1 = "));
}

label20:
{
Obj x140690929510855 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun5, 1, x);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 2));
}

label21:
{
Obj x140690929511111 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 22, clofun5);
JUMP_WITH_ARGS_3(clofun5, x140690929511111, x, closureRef(co, 3));
}

label22:
{
Obj x140690929511175 = __arg1;
PUSH_CONT_0(co, 23, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(";\n"));
}

label23:
{
Obj x140690929511367 = __arg1;
PUSH_CONT_0(co, 24, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n"));
}

label24:
{
Obj x140690929511559 = __arg1;
PUSH_CONT_0(co, 25, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("if (co->ctx.pc.func != "));
}

label25:
{
Obj x140690929511751 = __arg1;
Obj x140690929512039 = PRIM_CDR(closureRef(co, 4));
Obj x140690929512167 = PRIM_CAR(closureRef(co, 4));
PUSH_CONT_0(co, 26, clofun5);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 5), x140690929512039, x140690929512167);
}

label26:
{
Obj x140690929512199 = __arg1;
PUSH_CONT_0(co, 27, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(") { goto fail; }\n"));
}

label27:
{
Obj x140690929512391 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("goto *jumpTable[co->ctx.pc.label];\n"));
}

label28:
{
Obj x140690931149639 = makeNative(30, clofun5, 0, 6, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5));
Obj x140690929560359 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140690929560359) {
Obj x140690929560615 = PRIM_CAR(closureRef(co, 3));
Obj x140690929560647 = PRIM_EQ(__symbolTable[80], x140690929560615);
if (True == x140690929560647) {
Obj x140690929560903 = PRIM_CDR(closureRef(co, 3));
Obj x140690929560935 = PRIM_ISCONS(x140690929560903);
if (True == x140690929560935) {
Obj x140690929561223 = PRIM_CDR(closureRef(co, 3));
Obj x140690929561255 = PRIM_CAR(x140690929561223);
Obj exp = x140690929561255;
Obj x140690929508487 = PRIM_CDR(closureRef(co, 3));
Obj x140690929508519 = PRIM_CDR(x140690929508487);
Obj x140690929508551 = PRIM_EQ(Nil, x140690929508519);
if (True == x140690929508551) {
pushCont(co, 29, clofun5, 1, exp);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931149639);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931149639);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931149639);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931149639);
}
}

label29:
{
Obj x140690929508743 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, x140690929508743, exp, closureRef(co, 5));
}

label30:
{
Obj x140690931150119 = makeNative(33, clofun5, 0, 5, closureRef(co, 0), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140690929585895 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690929585895) {
Obj x140690929586151 = PRIM_CAR(closureRef(co, 0));
Obj x140690929557511 = PRIM_EQ(__symbolTable[79], x140690929586151);
if (True == x140690929557511) {
Obj x140690929557767 = PRIM_CDR(closureRef(co, 0));
Obj x140690929557799 = PRIM_ISCONS(x140690929557767);
if (True == x140690929557799) {
Obj x140690929558055 = PRIM_CDR(closureRef(co, 0));
Obj x140690929558087 = PRIM_CAR(x140690929558055);
Obj exp = x140690929558087;
Obj x140690929558407 = PRIM_CDR(closureRef(co, 0));
Obj x140690929558439 = PRIM_CDR(x140690929558407);
Obj x140690929558471 = PRIM_ISCONS(x140690929558439);
if (True == x140690929558471) {
Obj x140690929558791 = PRIM_CDR(closureRef(co, 0));
Obj x140690929558823 = PRIM_CDR(x140690929558791);
Obj x140690929558855 = PRIM_CAR(x140690929558823);
Obj cont = x140690929558855;
Obj x140690929559239 = PRIM_CDR(closureRef(co, 0));
Obj x140690929559271 = PRIM_CDR(x140690929559239);
Obj x140690929559303 = PRIM_CDR(x140690929559271);
Obj x140690929559335 = PRIM_EQ(Nil, x140690929559303);
if (True == x140690929559335) {
pushCont(co, 31, clofun5, 1, exp);
__nargs = 6;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 5);
co->args[4] = closureRef(co, 3);
co->args[5] = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931150119);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931150119);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931150119);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931150119);
}
} else {
JUMP_WITH_ARGS_1(clofun5, x140690931150119);
}
}

label31:
{
Obj x140690929559623 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun5, 1, exp);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label32:
{
Obj x140690929559815 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, x140690929559815, exp, closureRef(co, 5));
}

label33:
{
Obj x140690929637383 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690929637383) {
Obj x140690929637607 = PRIM_CAR(closureRef(co, 0));
Obj f = x140690929637607;
Obj x140690929637831 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690929637831;
pushCont(co, 34, clofun5, 2, f, args);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[96]), args);
} else {
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label34:
{
Obj x140690929638119 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929638151 = PRIM_ADD(MAKE_NUMBER(1), x140690929638119);
Obj nargs = x140690929638151;
Obj x140690929638311 = PRIM_LT(nargs, MAKE_NUMBER(5));
if (True == x140690929638311) {
pushCont(co, 45, clofun5, 3, nargs, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("JUMP_WITH_ARGS_"));
} else {
pushCont(co, 35, clofun5, 3, nargs, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("__nargs = "));
}
}

label35:
{
Obj x140690929599943 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 36, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 4), nargs);
}

label36:
{
Obj x140690929600135 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 37, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(";\n"));
}

label37:
{
Obj x140690929600487 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929600807 = makeCons(f, args);
PUSH_CONT_0(co, 38, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 4);
co->args[4] = MAKE_NUMBER(0);
co->args[5] = x140690929600807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140690929600839 = __arg1;
PUSH_CONT_0(co, 39, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("co->ctx.frees = __arg0;\n"));
}

label39:
{
Obj x140690929601223 = __arg1;
PUSH_CONT_0(co, 40, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n"));
}

label40:
{
Obj x140690929601479 = __arg1;
PUSH_CONT_0(co, 41, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n"));
}

label41:
{
Obj x140690929601671 = __arg1;
PUSH_CONT_0(co, 42, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("if (ps.func != "));
}

label42:
{
Obj x140690929602055 = __arg1;
Obj x140690929585191 = PRIM_CDR(closureRef(co, 3));
Obj x140690929585319 = PRIM_CAR(closureRef(co, 3));
PUSH_CONT_0(co, 43, clofun5);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 4), x140690929585191, x140690929585319);
}

label43:
{
Obj x140690929585351 = __arg1;
PUSH_CONT_0(co, 44, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(") { co->ctx.pc = ps; goto fail; };\n"));
}

label44:
{
Obj x140690929585543 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("goto *jumpTable[ps.label];\n"));
}

label45:
{
Obj x140690929638567 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 46, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 4), nargs);
}

label46:
{
Obj x140690929638855 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("("));
}

label47:
{
Obj x140690929639047 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929598503 = PRIM_CDR(closureRef(co, 3));
Obj x140690929598631 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 48, clofun5, 2, f, args);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 4), x140690929598503, x140690929598631);
}

label48:
{
Obj x140690929598791 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(", "));
}

label49:
{
Obj x140690929598983 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929599463 = makeCons(f, args);
PUSH_CONT_0(co, 0, clofun6);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 1);
co->args[4] = closureRef(co, 4);
co->args[5] = x140690929599463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun6(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690929599495 = __arg1;
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(");\n"));
}

label1:
{
Obj sym = __arg1;
Obj globals = __arg2;
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[57]), MAKE_NUMBER(0), sym, globals);
}

label2:
{
Obj idx = __arg1;
Obj sym = __arg2;
Obj globals = __arg3;
pushCont(co, 3, clofun6, 3, idx, globals, sym);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[108]), globals);
}

label3:
{
Obj x140690930366439 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140690930366439) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930366791 = PRIM_CAR(globals);
Obj x140690930366823 = PRIM_EQ(sym, x140690930366791);
if (True == x140690930366823) {
__nargs = 2;
__arg1 = idx;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930366983 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x140690930367207 = PRIM_CDR(globals);
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[57]), x140690930366983, sym, x140690930367207);
}
}
}

label4:
{
Obj sym = __arg1;
Obj globals = __arg2;
pushCont(co, 5, clofun6, 2, sym, globals);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[58]), globals);
}

label5:
{
Obj x140690930365447 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = x140690930365447;
pushCont(co, 6, clofun6, 3, sym, val, globals);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[100]), sym, val);
}

label6:
{
Obj x140690930365671 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140690930365671) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930365831 = makeCons(sym, val);
Obj x140690930365959 = primSet(co, globals, x140690930365831);
__nargs = 2;
__arg1 = x140690930365959;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj x140690933135591 = __arg1;
Obj x140690933135783 = __arg2;
Obj x140690933135815 = __arg3;
Obj x140690933135943 = co->args[4];
Obj x140690933136103 = co->args[5];
Obj x140690930377607 = PRIM_EQ(Nil, x140690933136103);
if (True == x140690930377607) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930377831 = PRIM_ISCONS(x140690933136103);
if (True == x140690930377831) {
Obj x140690930377991 = PRIM_CAR(x140690933136103);
Obj x = x140690930377991;
Obj x140690930378247 = PRIM_CDR(x140690933136103);
Obj more = x140690930378247;
Obj x140690930378631 = PRIM_GT(x140690933135943, MAKE_NUMBER(3));
Obj x140690930378663 = primNot(x140690930378631);
if (True == x140690930378663) {
pushCont(co, 14, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString("__arg"));
} else {
pushCont(co, 8, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString("co->args["));
}
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label8:
{
Obj x140690930380135 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 9, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[60]), x140690933135815, x140690933135943);
}

label9:
{
Obj x140690930380295 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 10, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString("]"));
}

label10:
{
Obj x140690930380423 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 11, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString(" = "));
}

label11:
{
Obj x140690930380743 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 12, clofun6, 5, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = x140690933135591;
__arg2 = x140690933135783;
__arg3 = Nil;
co->args[4] = x140690933135815;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140690930364519 = __arg1;
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 13, clofun6, 5, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString(";\n"));
}

label13:
{
Obj x140690930364679 = __arg1;
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690930364871 = PRIM_ADD(x140690933135943, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = x140690933135591;
__arg2 = x140690933135783;
__arg3 = x140690933135815;
co->args[4] = x140690930364871;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140690930378823 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 15, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[60]), x140690933135815, x140690933135943);
}

label15:
{
Obj x140690930379047 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 16, clofun6, 6, x, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString(" = "));
}

label16:
{
Obj x140690930379207 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 17, clofun6, 5, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = x140690933135591;
__arg2 = x140690933135783;
__arg3 = Nil;
co->args[4] = x140690933135815;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140690930379495 = __arg1;
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 18, clofun6, 5, x140690933135943, x140690933135591, x140690933135783, x140690933135815, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), x140690933135815, makeCString(";\n"));
}

label18:
{
Obj x140690930379655 = __arg1;
Obj x140690933135943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933135783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690933135815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140690930379815 = PRIM_ADD(x140690933135943, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = x140690933135591;
__arg2 = x140690933135783;
__arg3 = x140690933135815;
co->args[4] = x140690930379815;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
Obj k = __arg2;
Obj x140690930392935 = primGenSym();
Obj tmp = x140690930392935;
pushCont(co, 20, clofun6, 2, x, tmp);
JUMP_WITH_ARGS_2(clofun6, k, tmp);
}

label20:
{
Obj x140690930376967 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930376999 = makeCons(x140690930376967, Nil);
Obj x140690930377031 = makeCons(x, x140690930376999);
Obj x140690930377063 = makeCons(tmp, x140690930377031);
Obj x140690930377159 = makeCons(__symbolTable[91], x140690930377063);
__nargs = 2;
__arg1 = x140690930377159;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj v = __arg1;
Obj val = __arg2;
pushCont(co, 22, clofun6, 2, val, v);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), v, MAKE_NUMBER(0));
}

label22:
{
Obj x140690930391495 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = x140690930391495;
pushCont(co, 23, clofun6, 3, val, idx, v);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), v, MAKE_NUMBER(1));
}

label23:
{
Obj x140690930391655 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = x140690930391655;
Obj x140690930392007 = makeCons(val, Nil);
Obj x140690930392071 = makeCons(idx, x140690930392007);
Obj x140690930392103 = makeCons(x140690930392071, cur);
Obj cur1 = x140690930392103;
Obj x140690930392391 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 24, clofun6, 2, v, cur1);
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[63]), v, MAKE_NUMBER(0), x140690930392391);
}

label24:
{
Obj x140690930392423 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[63]), v, MAKE_NUMBER(1), cur1);
}

label25:
{
Obj x140690931219623 = __arg1;
Obj x140690931219783 = __arg2;
Obj x140690931219975 = makeNative(32, clofun6, 0, 2, x140690931219623, x140690931219783);
Obj x140690930513383 = PRIM_ISCONS(x140690931219783);
if (True == x140690930513383) {
Obj x140690930513607 = PRIM_CAR(x140690931219783);
Obj clo_45or_45cont = x140690930513607;
Obj x140690930514023 = PRIM_CDR(x140690931219783);
Obj x140690930514055 = PRIM_ISCONS(x140690930514023);
if (True == x140690930514055) {
Obj x140690930514567 = PRIM_CDR(x140690931219783);
Obj x140690930514599 = PRIM_CAR(x140690930514567);
Obj x140690930514759 = PRIM_ISCONS(x140690930514599);
if (True == x140690930514759) {
Obj x140690930515367 = PRIM_CDR(x140690931219783);
Obj x140690930515399 = PRIM_CAR(x140690930515367);
Obj x140690930515431 = PRIM_CAR(x140690930515399);
Obj x140690930515463 = PRIM_EQ(__symbolTable[94], x140690930515431);
if (True == x140690930515463) {
Obj x140690930515943 = PRIM_CDR(x140690931219783);
Obj x140690930425863 = PRIM_CAR(x140690930515943);
Obj x140690930425895 = PRIM_CDR(x140690930425863);
Obj x140690930425927 = PRIM_ISCONS(x140690930425895);
if (True == x140690930425927) {
Obj x140690930426599 = PRIM_CDR(x140690931219783);
Obj x140690930426631 = PRIM_CAR(x140690930426599);
Obj x140690930426663 = PRIM_CDR(x140690930426631);
Obj x140690930426695 = PRIM_CAR(x140690930426663);
Obj params = x140690930426695;
Obj x140690930427335 = PRIM_CDR(x140690931219783);
Obj x140690930427367 = PRIM_CAR(x140690930427335);
Obj x140690930427399 = PRIM_CDR(x140690930427367);
Obj x140690930427495 = PRIM_CDR(x140690930427399);
Obj x140690930427527 = PRIM_ISCONS(x140690930427495);
if (True == x140690930427527) {
Obj x140690930428231 = PRIM_CDR(x140690931219783);
Obj x140690930428263 = PRIM_CAR(x140690930428231);
Obj x140690930428295 = PRIM_CDR(x140690930428263);
Obj x140690930428327 = PRIM_CDR(x140690930428295);
Obj x140690930428359 = PRIM_CAR(x140690930428327);
Obj body = x140690930428359;
Obj x140690930429415 = PRIM_CDR(x140690931219783);
Obj x140690930429479 = PRIM_CAR(x140690930429415);
Obj x140690930429511 = PRIM_CDR(x140690930429479);
Obj x140690930429543 = PRIM_CDR(x140690930429511);
Obj x140690930429575 = PRIM_CDR(x140690930429543);
Obj x140690930429639 = PRIM_EQ(Nil, x140690930429575);
if (True == x140690930429639) {
Obj x140690930401319 = PRIM_CDR(x140690931219783);
Obj x140690930401351 = PRIM_CDR(x140690930401319);
Obj fvs = x140690930401351;
Obj x140690933134119 = makeNative(26, clofun6, 1, 6, body, x140690931219623, params, clo_45or_45cont, fvs, x140690931219975);
Obj x140690930390087 = PRIM_EQ(clo_45or_45cont, __symbolTable[77]);
if (True == x140690930390087) {
JUMP_WITH_ARGS_2(clofun6, x140690933134119, True);
} else {
Obj x140690930390311 = PRIM_EQ(clo_45or_45cont, __symbolTable[67]);
if (True == x140690930390311) {
JUMP_WITH_ARGS_2(clofun6, x140690933134119, True);
} else {
JUMP_WITH_ARGS_2(clofun6, x140690933134119, False);
}
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931219975);
}
}

label26:
{
Obj x140690933134279 = __arg1;
if (True == x140690933134279) {
PUSH_CONT_0(co, 27, clofun6);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[66]), closureRef(co, 1), closureRef(co, 0));
} else {
JUMP_WITH_ARGS_1(clofun6, closureRef(co, 5));
}
}

label27:
{
Obj x140690930401991 = __arg1;
Obj body1 = x140690930401991;
pushCont(co, 28, clofun6, 1, body1);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), closureRef(co, 1), MAKE_NUMBER(0));
}

label28:
{
Obj x140690930402471 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = x140690930402471;
Obj x140690930402727 = PRIM_EQ(closureRef(co, 3), __symbolTable[77]);
if (True == x140690930402727) {
Obj x140690930403527 = makeCons(body1, Nil);
Obj x140690930403559 = makeCons(Nil, x140690930403527);
Obj x140690930403591 = makeCons(closureRef(co, 2), x140690930403559);
Obj x140690930403623 = makeCons(__symbolTable[94], x140690930403591);
pushCont(co, 30, clofun6, 1, cur);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[64]), closureRef(co, 1), x140690930403623);
} else {
Obj x140690930405351 = makeCons(body1, Nil);
Obj x140690930389127 = makeCons(closureRef(co, 4), x140690930405351);
Obj x140690930389159 = makeCons(closureRef(co, 2), x140690930389127);
Obj x140690930389191 = makeCons(__symbolTable[94], x140690930389159);
pushCont(co, 29, clofun6, 1, cur);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[64]), closureRef(co, 1), x140690930389191);
}
}

label29:
{
Obj x140690930389223 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930389511 = makeCons(cur, closureRef(co, 4));
Obj x140690930389543 = makeCons(closureRef(co, 3), x140690930389511);
__nargs = 2;
__arg1 = x140690930389543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140690930403719 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 31, clofun6, 1, cur);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[96]), closureRef(co, 2));
}

label31:
{
Obj x140690930404263 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930404551 = makeCons(x140690930404263, closureRef(co, 4));
Obj x140690930404583 = makeCons(cur, x140690930404551);
Obj x140690930404615 = makeCons(closureRef(co, 3), x140690930404583);
__nargs = 2;
__arg1 = x140690930404615;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140690930512647 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690930512647) {
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), makeNative(33, clofun6, 1, 1, closureRef(co, 0)), closureRef(co, 1));
} else {
__nargs = 2;
__arg1 = closureRef(co, 1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label33:
{
Obj e = __arg1;
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[66]), closureRef(co, 0), e);
}

label34:
{
Obj x140690933065287 = __arg1;
Obj x140690933065319 = __arg2;
pushCont(co, 35, clofun6, 2, x140690933065319, x140690933065287);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[84]), x140690933065319);
}

label35:
{
Obj x140690931009415 = __arg1;
Obj x140690933065319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933065287= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690931009415) {
__nargs = 2;
__arg1 = x140690933065319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931009767 = primIsSymbol(x140690933065319);
if (True == x140690931009767) {
__nargs = 2;
__arg1 = x140690933065319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933018759 = makeNative(37, clofun6, 0, 2, x140690933065319, x140690933065287);
Obj x140690930577127 = PRIM_ISCONS(x140690933065319);
if (True == x140690930577127) {
Obj x140690930577351 = PRIM_CAR(x140690933065319);
Obj x140690930577383 = PRIM_EQ(__symbolTable[94], x140690930577351);
if (True == x140690930577383) {
Obj x140690930553159 = PRIM_CDR(x140690933065319);
Obj x140690930553191 = PRIM_ISCONS(x140690930553159);
if (True == x140690930553191) {
Obj x140690930553575 = PRIM_CDR(x140690933065319);
Obj x140690930553607 = PRIM_CAR(x140690930553575);
Obj args = x140690930553607;
Obj x140690930554151 = PRIM_CDR(x140690933065319);
Obj x140690930554183 = PRIM_CDR(x140690930554151);
Obj x140690930554215 = PRIM_ISCONS(x140690930554183);
if (True == x140690930554215) {
Obj x140690930554823 = PRIM_CDR(x140690933065319);
Obj x140690930554855 = PRIM_CDR(x140690930554823);
Obj x140690930554887 = PRIM_CAR(x140690930554855);
Obj body = x140690930554887;
Obj x140690930555559 = PRIM_CDR(x140690933065319);
Obj x140690930555591 = PRIM_CDR(x140690930555559);
Obj x140690930555751 = PRIM_CDR(x140690930555591);
Obj x140690930555783 = PRIM_EQ(Nil, x140690930555751);
if (True == x140690930555783) {
pushCont(co, 36, clofun6, 1, args);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), x140690933065287, body);
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933018759);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933018759);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933018759);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933018759);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933018759);
}
}
}
}

label36:
{
Obj x140690930556327 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930556359 = makeCons(x140690930556327, Nil);
Obj x140690930556391 = makeCons(args, x140690930556359);
Obj x140690930556423 = makeCons(__symbolTable[94], x140690930556391);
__nargs = 2;
__arg1 = x140690930556423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x140690933020519 = makeNative(43, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690930628423 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930628423) {
Obj x140690930628807 = PRIM_CAR(closureRef(co, 0));
Obj x140690930628839 = PRIM_EQ(__symbolTable[81], x140690930628807);
if (True == x140690930628839) {
Obj x140690930629287 = PRIM_CDR(closureRef(co, 0));
Obj x140690930629319 = PRIM_ISCONS(x140690930629287);
if (True == x140690930629319) {
Obj x140690930629703 = PRIM_CDR(closureRef(co, 0));
Obj x140690930629735 = PRIM_CAR(x140690930629703);
Obj val = x140690930629735;
Obj x140690930630375 = PRIM_CDR(closureRef(co, 0));
Obj x140690930630407 = PRIM_CDR(x140690930630375);
Obj x140690930630439 = PRIM_ISCONS(x140690930630407);
if (True == x140690930630439) {
Obj x140690930573511 = PRIM_CDR(closureRef(co, 0));
Obj x140690930573543 = PRIM_CDR(x140690930573511);
Obj x140690930573575 = PRIM_CAR(x140690930573543);
Obj body = x140690930573575;
Obj x140690930574215 = PRIM_CDR(closureRef(co, 0));
Obj x140690930574247 = PRIM_CDR(x140690930574215);
Obj x140690930574279 = PRIM_CDR(x140690930574247);
Obj x140690930574439 = PRIM_EQ(Nil, x140690930574279);
if (True == x140690930574439) {
pushCont(co, 38, clofun6, 2, body, val);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933020519);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933020519);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933020519);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933020519);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690933020519);
}
}

label38:
{
Obj x140690930574823 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun6, 2, body, val);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[85]), x140690930574823, val);
}

label39:
{
Obj x140690930574855 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = x140690930574855;
pushCont(co, 40, clofun6, 3, fvs1, body, val);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
}

label40:
{
Obj x140690930575303 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 41, clofun6, 3, fvs1, body, val);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), x140690930575303, fvs1);
}

label41:
{
Obj x140690930575335 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = x140690930575335;
pushCont(co, 42, clofun6, 2, val, fvs2);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), fvs1, body);
}

label42:
{
Obj x140690930575911 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930576039 = makeCons(x140690930575911, Nil);
Obj x140690930576071 = makeCons(val, x140690930576039);
Obj x140690930576103 = makeCons(__symbolTable[94], x140690930576071);
Obj x140690930576135 = makeCons(x140690930576103, fvs2);
Obj x140690930576199 = makeCons(__symbolTable[67], x140690930576135);
__nargs = 2;
__arg1 = x140690930576199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj x140690931216391 = makeNative(47, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690930680967 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930680967) {
Obj x140690930681351 = PRIM_CAR(closureRef(co, 0));
Obj x140690930681383 = PRIM_EQ(__symbolTable[79], x140690930681351);
if (True == x140690930681383) {
Obj x140690930681767 = PRIM_CDR(closureRef(co, 0));
Obj x140690930681895 = PRIM_ISCONS(x140690930681767);
if (True == x140690930681895) {
Obj x140690930682247 = PRIM_CDR(closureRef(co, 0));
Obj x140690930682279 = PRIM_CAR(x140690930682247);
Obj exp = x140690930682279;
Obj x140690930682695 = PRIM_CDR(closureRef(co, 0));
Obj x140690930682727 = PRIM_CDR(x140690930682695);
Obj x140690930682759 = PRIM_ISCONS(x140690930682727);
if (True == x140690930682759) {
Obj x140690930683207 = PRIM_CDR(closureRef(co, 0));
Obj x140690930683335 = PRIM_CDR(x140690930683207);
Obj x140690930683367 = PRIM_CAR(x140690930683335);
Obj cont = x140690930683367;
Obj x140690930683879 = PRIM_CDR(closureRef(co, 0));
Obj x140690930626567 = PRIM_CDR(x140690930683879);
Obj x140690930626599 = PRIM_CDR(x140690930626567);
Obj x140690930626727 = PRIM_EQ(Nil, x140690930626599);
if (True == x140690930626727) {
pushCont(co, 44, clofun6, 2, exp, cont);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931216391);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931216391);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931216391);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931216391);
}
} else {
JUMP_WITH_ARGS_1(clofun6, x140690931216391);
}
}

label44:
{
Obj x140690930627143 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun6, 1, cont);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), x140690930627143, exp);
}

label45:
{
Obj x140690930627175 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 46, clofun6, 1, x140690930627175);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1), cont);
}

label46:
{
Obj x140690930627399 = __arg1;
Obj x140690930627175= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930627431 = makeCons(x140690930627399, Nil);
Obj x140690930627463 = makeCons(x140690930627175, x140690930627431);
Obj x140690930627655 = makeCons(__symbolTable[79], x140690930627463);
__nargs = 2;
__arg1 = x140690930627655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x140690931011303 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931011303) {
Obj x140690930680007 = PRIM_CAR(closureRef(co, 0));
Obj f = x140690930680007;
Obj x140690930680199 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690930680199;
pushCont(co, 48, clofun6, 2, f, args);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label48:
{
Obj x140690930680455 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930680615 = makeCons(f, args);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), x140690930680455, x140690930680615);
}

label49:
{
Obj x140690933135175 = __arg1;
Obj x140690933135239 = __arg2;
Obj x140690933135431 = __arg3;
Obj x140690931149031 = PRIM_EQ(Nil, x140690933135175);
if (True == x140690931149031) {
pushCont(co, 1, clofun7, 1, x140690933135431);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[72]), x140690933135239);
} else {
Obj x140690931099815 = PRIM_ISCONS(x140690933135175);
if (True == x140690931099815) {
Obj x140690931100135 = PRIM_CAR(x140690933135175);
Obj hd = x140690931100135;
Obj x140690931100327 = PRIM_CDR(x140690933135175);
Obj tl = x140690931100327;
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[74]), hd, makeNative(0, clofun7, 1, 3, tl, x140690933135239, x140690933135431));
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun7(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj hd1 = __arg1;
Obj x140690931008615 = makeCons(hd1, closureRef(co, 1));
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[73]), closureRef(co, 0), x140690931008615, closureRef(co, 2));
}

label1:
{
Obj x140690931149383 = __arg1;
Obj x140690933135431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = x140690931149383;
Obj x140690933133799 = makeNative(4, clofun7, 1, 2, exp, x140690933135431);
Obj x140690931099079 = PRIM_CAR(exp);
pushCont(co, 2, clofun7, 2, exp, x140690933133799);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[70]), x140690931099079);
}

label2:
{
Obj x140690931099143 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133799= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690931099143) {
pushCont(co, 3, clofun7, 1, x140690933133799);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[69]), exp);
} else {
JUMP_WITH_ARGS_2(clofun7, x140690933133799, False);
}
}

label3:
{
Obj x140690931099495 = __arg1;
Obj x140690933133799= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931099527 = PRIM_EQ(x140690931099495, __symbolTable[95]);
if (True == x140690931099527) {
JUMP_WITH_ARGS_2(clofun7, x140690933133799, True);
} else {
JUMP_WITH_ARGS_2(clofun7, x140690933133799, False);
}
}

label4:
{
Obj x140690933134055 = __arg1;
if (True == x140690933134055) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[71]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj x140690931150151 = PRIM_EQ(closureRef(co, 1), globalRef(__symbolTable[75]));
if (True == x140690931150151) {
Obj x140690931150407 = makeCons(closureRef(co, 0), Nil);
Obj x140690931150567 = makeCons(__symbolTable[80], x140690931150407);
__nargs = 2;
__arg1 = x140690931150567;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931150727 = primGenSym();
Obj val = x140690931150727;
Obj x140690931098119 = makeCons(val, Nil);
pushCont(co, 5, clofun7, 1, x140690931098119);
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), val);
}
}
}

label5:
{
Obj x140690931098407 = __arg1;
Obj x140690931098119= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690931098439 = makeCons(x140690931098407, Nil);
Obj x140690931098471 = makeCons(x140690931098119, x140690931098439);
Obj x140690931098503 = makeCons(__symbolTable[81], x140690931098471);
Obj x140690931098535 = makeCons(x140690931098503, Nil);
Obj x140690931098567 = makeCons(closureRef(co, 0), x140690931098535);
Obj x140690931098599 = makeCons(__symbolTable[79], x140690931098567);
__nargs = 2;
__arg1 = x140690931098599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x140690933135079 = __arg1;
Obj x140690933135143 = __arg2;
Obj x140690933133351 = makeNative(8, clofun7, 1, 2, x140690933135079, x140690933135143);
Obj x140690931148135 = primIsSymbol(x140690933135079);
if (True == x140690931148135) {
JUMP_WITH_ARGS_2(clofun7, x140690933133351, True);
} else {
pushCont(co, 7, clofun7, 1, x140690933133351);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), x140690933135079);
}
}

label7:
{
Obj x140690931148455 = __arg1;
Obj x140690933133351= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690931148455) {
JUMP_WITH_ARGS_2(clofun7, x140690933133351, True);
} else {
JUMP_WITH_ARGS_2(clofun7, x140690933133351, False);
}
}

label8:
{
Obj x140690933133447 = __arg1;
if (True == x140690933133447) {
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), closureRef(co, 0));
} else {
PUSH_CONT_0(co, 9, clofun7);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), closureRef(co, 0));
}
}

label9:
{
Obj x140690929636231 = __arg1;
if (True == x140690929636231) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933137191 = makeNative(13, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690933020551 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933020551) {
Obj x140690933020935 = PRIM_CAR(closureRef(co, 0));
Obj x140690933020967 = PRIM_EQ(__symbolTable[92], x140690933020935);
if (True == x140690933020967) {
Obj x140690933021415 = PRIM_CDR(closureRef(co, 0));
Obj x140690933021543 = PRIM_ISCONS(x140690933021415);
if (True == x140690933021543) {
Obj x140690933021927 = PRIM_CDR(closureRef(co, 0));
Obj x140690933021959 = PRIM_CAR(x140690933021927);
Obj a = x140690933021959;
Obj x140690933022439 = PRIM_CDR(closureRef(co, 0));
Obj x140690933022471 = PRIM_CDR(x140690933022439);
Obj x140690933022503 = PRIM_ISCONS(x140690933022471);
if (True == x140690933022503) {
Obj x140690931216807 = PRIM_CDR(closureRef(co, 0));
Obj x140690931216839 = PRIM_CDR(x140690931216807);
Obj x140690931216871 = PRIM_CAR(x140690931216839);
Obj b = x140690931216871;
Obj x140690931217575 = PRIM_CDR(closureRef(co, 0));
Obj x140690931217607 = PRIM_CDR(x140690931217575);
Obj x140690931217639 = PRIM_CDR(x140690931217607);
Obj x140690931217671 = PRIM_ISCONS(x140690931217639);
if (True == x140690931217671) {
Obj x140690931218407 = PRIM_CDR(closureRef(co, 0));
Obj x140690931218503 = PRIM_CDR(x140690931218407);
Obj x140690931218631 = PRIM_CDR(x140690931218503);
Obj x140690931218663 = PRIM_CAR(x140690931218631);
Obj c = x140690931218663;
Obj x140690931219303 = PRIM_CDR(closureRef(co, 0));
Obj x140690931219335 = PRIM_CDR(x140690931219303);
Obj x140690931219495 = PRIM_CDR(x140690931219335);
Obj x140690931219527 = PRIM_CDR(x140690931219495);
Obj x140690931219559 = PRIM_EQ(Nil, x140690931219527);
if (True == x140690931219559) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), a, makeNative(10, clofun7, 1, 3, b, c, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933137191);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933137191);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933137191);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933137191);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933137191);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933137191);
}
}
}

label10:
{
Obj ra = __arg1;
pushCont(co, 11, clofun7, 1, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 2));
}

label11:
{
Obj x140690931220391 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun7, 2, x140690931220391, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 1), closureRef(co, 2));
}

label12:
{
Obj x140690931147047 = __arg1;
Obj x140690931220391= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931147079 = makeCons(x140690931147047, Nil);
Obj x140690931147111 = makeCons(x140690931220391, x140690931147079);
Obj x140690931147143 = makeCons(ra, x140690931147111);
Obj x140690931147175 = makeCons(__symbolTable[92], x140690931147143);
__nargs = 2;
__arg1 = x140690931147175;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x140690933065479 = makeNative(16, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690933064679 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933064679) {
Obj x140690933064967 = PRIM_CAR(closureRef(co, 0));
Obj x140690933064999 = PRIM_EQ(__symbolTable[90], x140690933064967);
if (True == x140690933064999) {
Obj x140690933065511 = PRIM_CDR(closureRef(co, 0));
Obj x140690933065543 = PRIM_ISCONS(x140690933065511);
if (True == x140690933065543) {
Obj x140690933065927 = PRIM_CDR(closureRef(co, 0));
Obj x140690933065959 = PRIM_CAR(x140690933065927);
Obj a = x140690933065959;
Obj x140690933066471 = PRIM_CDR(closureRef(co, 0));
Obj x140690933066503 = PRIM_CDR(x140690933066471);
Obj x140690933066567 = PRIM_ISCONS(x140690933066503);
if (True == x140690933066567) {
Obj x140690933066951 = PRIM_CDR(closureRef(co, 0));
Obj x140690933066983 = PRIM_CDR(x140690933066951);
Obj x140690933067015 = PRIM_CAR(x140690933066983);
Obj b = x140690933067015;
Obj x140690933067495 = PRIM_CDR(closureRef(co, 0));
Obj x140690933067527 = PRIM_CDR(x140690933067495);
Obj x140690933067591 = PRIM_CDR(x140690933067527);
Obj x140690933067623 = PRIM_EQ(Nil, x140690933067591);
if (True == x140690933067623) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), a, makeNative(14, clofun7, 1, 2, b, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065479);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065479);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065479);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065479);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065479);
}
}

label14:
{
Obj ra = __arg1;
Obj x140690933018919 = primIsSymbol(ra);
if (True == x140690933018919) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 1));
} else {
pushCont(co, 15, clofun7, 1, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 1));
}
}

label15:
{
Obj x140690933019591 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933019687 = makeCons(x140690933019591, Nil);
Obj x140690933019719 = makeCons(ra, x140690933019687);
Obj x140690933019751 = makeCons(__symbolTable[90], x140690933019719);
__nargs = 2;
__arg1 = x140690933019751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x140690933067559 = makeNative(19, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690929582247 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690929582247) {
Obj x140690929582503 = PRIM_CAR(closureRef(co, 0));
Obj x140690929582535 = PRIM_EQ(__symbolTable[91], x140690929582503);
if (True == x140690929582535) {
Obj x140690929582791 = PRIM_CDR(closureRef(co, 0));
Obj x140690929582823 = PRIM_ISCONS(x140690929582791);
if (True == x140690929582823) {
Obj x140690929583079 = PRIM_CDR(closureRef(co, 0));
Obj x140690929583111 = PRIM_CAR(x140690929583079);
Obj a = x140690929583111;
Obj x140690929583431 = PRIM_CDR(closureRef(co, 0));
Obj x140690929583463 = PRIM_CDR(x140690929583431);
Obj x140690929583495 = PRIM_ISCONS(x140690929583463);
if (True == x140690929583495) {
Obj x140690929583815 = PRIM_CDR(closureRef(co, 0));
Obj x140690929583847 = PRIM_CDR(x140690929583815);
Obj x140690929583879 = PRIM_CAR(x140690929583847);
Obj b = x140690929583879;
Obj x140690929584263 = PRIM_CDR(closureRef(co, 0));
Obj x140690929584295 = PRIM_CDR(x140690929584263);
Obj x140690929584327 = PRIM_CDR(x140690929584295);
Obj x140690929584359 = PRIM_ISCONS(x140690929584327);
if (True == x140690929584359) {
Obj x140690929584743 = PRIM_CDR(closureRef(co, 0));
Obj x140690929584775 = PRIM_CDR(x140690929584743);
Obj x140690929584807 = PRIM_CDR(x140690929584775);
Obj x140690929584839 = PRIM_CAR(x140690929584807);
Obj c = x140690929584839;
Obj x140690933135303 = PRIM_CDR(closureRef(co, 0));
Obj x140690933135463 = PRIM_CDR(x140690933135303);
Obj x140690933135623 = PRIM_CDR(x140690933135463);
Obj x140690933135911 = PRIM_CDR(x140690933135623);
Obj x140690933135975 = PRIM_EQ(Nil, x140690933135911);
if (True == x140690933135975) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), b, makeNative(17, clofun7, 1, 3, a, c, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933067559);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933067559);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933067559);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933067559);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933067559);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933067559);
}
}

label17:
{
Obj rb = __arg1;
pushCont(co, 18, clofun7, 1, rb);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 1), closureRef(co, 2));
}

label18:
{
Obj x140690933136903 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933136935 = makeCons(x140690933136903, Nil);
Obj x140690933136967 = makeCons(rb, x140690933136935);
Obj x140690933136999 = makeCons(closureRef(co, 0), x140690933136967);
Obj x140690933137063 = makeCons(__symbolTable[91], x140690933136999);
__nargs = 2;
__arg1 = x140690933137063;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x140690933020487 = makeNative(21, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690929637799 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690929637799) {
Obj x140690929638055 = PRIM_CAR(closureRef(co, 0));
Obj x140690929638087 = PRIM_EQ(__symbolTable[77], x140690929638055);
if (True == x140690929638087) {
Obj x140690929638343 = PRIM_CDR(closureRef(co, 0));
Obj x140690929638375 = PRIM_ISCONS(x140690929638343);
if (True == x140690929638375) {
Obj x140690929638695 = PRIM_CDR(closureRef(co, 0));
Obj x140690929638727 = PRIM_CAR(x140690929638695);
Obj x140690929638759 = PRIM_ISCONS(x140690929638727);
if (True == x140690929638759) {
Obj x140690929639143 = PRIM_CDR(closureRef(co, 0));
Obj x140690929639175 = PRIM_CAR(x140690929639143);
Obj x140690929639207 = PRIM_CAR(x140690929639175);
Obj x140690929639239 = PRIM_EQ(__symbolTable[94], x140690929639207);
if (True == x140690929639239) {
Obj x140690929598663 = PRIM_CDR(closureRef(co, 0));
Obj x140690929598695 = PRIM_CAR(x140690929598663);
Obj x140690929598727 = PRIM_CDR(x140690929598695);
Obj x140690929598759 = PRIM_ISCONS(x140690929598727);
if (True == x140690929598759) {
Obj x140690929599143 = PRIM_CDR(closureRef(co, 0));
Obj x140690929599175 = PRIM_CAR(x140690929599143);
Obj x140690929599207 = PRIM_CDR(x140690929599175);
Obj x140690929599239 = PRIM_CAR(x140690929599207);
Obj args = x140690929599239;
Obj x140690929599687 = PRIM_CDR(closureRef(co, 0));
Obj x140690929599719 = PRIM_CAR(x140690929599687);
Obj x140690929599751 = PRIM_CDR(x140690929599719);
Obj x140690929599783 = PRIM_CDR(x140690929599751);
Obj x140690929599815 = PRIM_ISCONS(x140690929599783);
if (True == x140690929599815) {
Obj x140690929600263 = PRIM_CDR(closureRef(co, 0));
Obj x140690929600295 = PRIM_CAR(x140690929600263);
Obj x140690929600327 = PRIM_CDR(x140690929600295);
Obj x140690929600359 = PRIM_CDR(x140690929600327);
Obj x140690929600391 = PRIM_CAR(x140690929600359);
Obj body = x140690929600391;
Obj x140690929600903 = PRIM_CDR(closureRef(co, 0));
Obj x140690929600935 = PRIM_CAR(x140690929600903);
Obj x140690929600967 = PRIM_CDR(x140690929600935);
Obj x140690929600999 = PRIM_CDR(x140690929600967);
Obj x140690929601031 = PRIM_CDR(x140690929600999);
Obj x140690929601063 = PRIM_EQ(Nil, x140690929601031);
if (True == x140690929601063) {
Obj x140690929601319 = PRIM_CDR(closureRef(co, 0));
Obj x140690929601351 = PRIM_CDR(x140690929601319);
Obj frees = x140690929601351;
pushCont(co, 20, clofun7, 2, args, frees);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), body, globalRef(__symbolTable[75]));
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933020487);
}
}

label20:
{
Obj x140690929601863 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690929601895 = makeCons(x140690929601863, Nil);
Obj x140690929601927 = makeCons(args, x140690929601895);
Obj x140690929601959 = makeCons(__symbolTable[94], x140690929601927);
Obj x140690929601991 = makeCons(x140690929601959, frees);
Obj x140690929602023 = makeCons(__symbolTable[77], x140690929601991);
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), x140690929602023);
}

label21:
{
Obj x140690929636967 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690929636967) {
Obj x140690929637159 = PRIM_CAR(closureRef(co, 0));
Obj f = x140690929637159;
Obj x140690929637351 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690929637351;
Obj x140690929637511 = makeCons(f, args);
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[73]), x140690929637511, Nil, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label22:
{
Obj x = __arg1;
Obj x140690929635463 = makeCons(x, Nil);
Obj x140690929635495 = makeCons(__symbolTable[78], x140690929635463);
__nargs = 2;
__arg1 = x140690929635495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x140690933020807 = __arg1;
Obj x140690933020871 = __arg2;
pushCont(co, 24, clofun7, 2, x140690933020871, x140690933020807);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), x140690933020871);
}

label24:
{
Obj x140690930389255 = __arg1;
Obj x140690933020871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933020807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930389255) {
__nargs = 2;
__arg1 = x140690933020871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930389415 = primIsSymbol(x140690933020871);
if (True == x140690930389415) {
pushCont(co, 34, clofun7, 1, x140690933020871);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[129]), x140690933020871, x140690933020807);
} else {
Obj x140690931216647 = makeNative(29, clofun7, 0, 2, x140690933020871, x140690933020807);
Obj x140690930364807 = PRIM_ISCONS(x140690933020871);
if (True == x140690930364807) {
Obj x140690930365031 = PRIM_CAR(x140690933020871);
Obj x140690930365063 = PRIM_EQ(__symbolTable[94], x140690930365031);
if (True == x140690930365063) {
Obj x140690930365287 = PRIM_CDR(x140690933020871);
Obj x140690930365319 = PRIM_ISCONS(x140690930365287);
if (True == x140690930365319) {
Obj x140690930365543 = PRIM_CDR(x140690933020871);
Obj x140690930365575 = PRIM_CAR(x140690930365543);
Obj args = x140690930365575;
Obj x140690930365863 = PRIM_CDR(x140690933020871);
Obj x140690930365895 = PRIM_CDR(x140690930365863);
Obj x140690930365927 = PRIM_ISCONS(x140690930365895);
if (True == x140690930365927) {
Obj x140690930366215 = PRIM_CDR(x140690933020871);
Obj x140690930366247 = PRIM_CDR(x140690930366215);
Obj x140690930366279 = PRIM_CAR(x140690930366247);
Obj body = x140690930366279;
Obj x140690930366631 = PRIM_CDR(x140690933020871);
Obj x140690930366663 = PRIM_CDR(x140690930366631);
Obj x140690930366695 = PRIM_CDR(x140690930366663);
Obj x140690930366727 = PRIM_EQ(Nil, x140690930366695);
if (True == x140690930366727) {
Obj x140690930367079 = makeCons(body, Nil);
Obj x140690930367111 = makeCons(args, x140690930367079);
Obj x140690930367143 = makeCons(__symbolTable[94], x140690930367111);
pushCont(co, 25, clofun7, 3, body, args, x140690933020807);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), x140690930367143);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931216647);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931216647);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931216647);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931216647);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931216647);
}
}
}
}

label25:
{
Obj x140690930367175 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933020807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = x140690930367175;
pushCont(co, 26, clofun7, 3, args, x140690933020807, fvs1);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), fvs1, body);
}

label26:
{
Obj x140690930367591 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933020807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140690930367623 = makeCons(x140690930367591, Nil);
Obj x140690930367655 = makeCons(args, x140690930367623);
Obj x140690930367687 = makeCons(__symbolTable[94], x140690930367655);
pushCont(co, 27, clofun7, 2, fvs1, x140690930367687);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[76]), x140690933020807);
}

label27:
{
Obj x140690930367847 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930367687= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun7, 1, x140690930367687);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), x140690930367847, fvs1);
}

label28:
{
Obj x140690930367879 = __arg1;
Obj x140690930367687= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930367911 = makeCons(x140690930367687, x140690930367879);
Obj x140690930367943 = makeCons(__symbolTable[77], x140690930367911);
__nargs = 2;
__arg1 = x140690930367943;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj x140690931218471 = makeNative(32, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140690930376839 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930376839) {
Obj x140690930377095 = PRIM_CAR(closureRef(co, 0));
Obj x140690930377127 = PRIM_EQ(__symbolTable[91], x140690930377095);
if (True == x140690930377127) {
Obj x140690930377383 = PRIM_CDR(closureRef(co, 0));
Obj x140690930377415 = PRIM_ISCONS(x140690930377383);
if (True == x140690930377415) {
Obj x140690930377671 = PRIM_CDR(closureRef(co, 0));
Obj x140690930377703 = PRIM_CAR(x140690930377671);
Obj a = x140690930377703;
Obj x140690930378023 = PRIM_CDR(closureRef(co, 0));
Obj x140690930378055 = PRIM_CDR(x140690930378023);
Obj x140690930378087 = PRIM_ISCONS(x140690930378055);
if (True == x140690930378087) {
Obj x140690930378407 = PRIM_CDR(closureRef(co, 0));
Obj x140690930378439 = PRIM_CDR(x140690930378407);
Obj x140690930378471 = PRIM_CAR(x140690930378439);
Obj b = x140690930378471;
Obj x140690930378855 = PRIM_CDR(closureRef(co, 0));
Obj x140690930378887 = PRIM_CDR(x140690930378855);
Obj x140690930378919 = PRIM_CDR(x140690930378887);
Obj x140690930378951 = PRIM_ISCONS(x140690930378919);
if (True == x140690930378951) {
Obj x140690930379335 = PRIM_CDR(closureRef(co, 0));
Obj x140690930379367 = PRIM_CDR(x140690930379335);
Obj x140690930379399 = PRIM_CDR(x140690930379367);
Obj x140690930379431 = PRIM_CAR(x140690930379399);
Obj c = x140690930379431;
Obj x140690930379879 = PRIM_CDR(closureRef(co, 0));
Obj x140690930379911 = PRIM_CDR(x140690930379879);
Obj x140690930379943 = PRIM_CDR(x140690930379911);
Obj x140690930379975 = PRIM_CDR(x140690930379943);
Obj x140690930380007 = PRIM_EQ(Nil, x140690930379975);
if (True == x140690930380007) {
pushCont(co, 30, clofun7, 2, c, a);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1), b);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931218471);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931218471);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931218471);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931218471);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931218471);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931218471);
}
}

label30:
{
Obj x140690930380327 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun7, 2, x140690930380327, a);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1), c);
}

label31:
{
Obj x140690930380519 = __arg1;
Obj x140690930380327= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930380551 = makeCons(x140690930380519, Nil);
Obj x140690930380583 = makeCons(x140690930380327, x140690930380551);
Obj x140690930380615 = makeCons(a, x140690930380583);
Obj x140690930380647 = makeCons(__symbolTable[91], x140690930380615);
__nargs = 2;
__arg1 = x140690930380647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140690930390599 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930390599) {
Obj x140690930390887 = PRIM_CAR(closureRef(co, 0));
Obj f = x140690930390887;
Obj x140690930391111 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690930391111;
pushCont(co, 33, clofun7, 2, f, args);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label33:
{
Obj x140690930392871 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930392967 = makeCons(f, args);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), x140690930392871, x140690930392967);
}

label34:
{
Obj x140690930389575 = __arg1;
Obj x140690933020871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = x140690930389575;
Obj x140690930389767 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x140690930389767) {
__nargs = 2;
__arg1 = x140690933020871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930389991 = makeCons(pos, Nil);
Obj x140690930390023 = makeCons(__symbolTable[83], x140690930389991);
__nargs = 2;
__arg1 = x140690930390023;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label35:
{
Obj x140690931218279 = __arg1;
pushCont(co, 36, clofun7, 1, x140690931218279);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), x140690931218279);
}

label36:
{
Obj x140690931150183 = __arg1;
Obj x140690931218279= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690931150183) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931150343 = primIsSymbol(x140690931218279);
if (True == x140690931150343) {
Obj x140690931150439 = makeCons(x140690931218279, Nil);
__nargs = 2;
__arg1 = x140690931150439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931219431 = makeNative(38, clofun7, 0, 1, x140690931218279);
Obj x140690930401927 = PRIM_ISCONS(x140690931218279);
if (True == x140690930401927) {
Obj x140690930402375 = PRIM_CAR(x140690931218279);
Obj x140690930402407 = PRIM_EQ(__symbolTable[94], x140690930402375);
if (True == x140690930402407) {
Obj x140690930402631 = PRIM_CDR(x140690931218279);
Obj x140690930402663 = PRIM_ISCONS(x140690930402631);
if (True == x140690930402663) {
Obj x140690930402919 = PRIM_CDR(x140690931218279);
Obj x140690930402951 = PRIM_CAR(x140690930402919);
Obj args = x140690930402951;
Obj x140690930403303 = PRIM_CDR(x140690931218279);
Obj x140690930403335 = PRIM_CDR(x140690930403303);
Obj x140690930403431 = PRIM_ISCONS(x140690930403335);
if (True == x140690930403431) {
Obj x140690930403783 = PRIM_CDR(x140690931218279);
Obj x140690930403815 = PRIM_CDR(x140690930403783);
Obj x140690930403847 = PRIM_CAR(x140690930403815);
Obj body = x140690930403847;
Obj x140690930404295 = PRIM_CDR(x140690931218279);
Obj x140690930404327 = PRIM_CDR(x140690930404295);
Obj x140690930404359 = PRIM_CDR(x140690930404327);
Obj x140690930404487 = PRIM_EQ(Nil, x140690930404359);
if (True == x140690930404487) {
pushCont(co, 37, clofun7, 1, args);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931219431);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931219431);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931219431);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931219431);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931219431);
}
}
}
}

label37:
{
Obj x140690930404647 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), x140690930404647, args);
}

label38:
{
Obj x140690931146855 = makeNative(40, clofun7, 0, 1, closureRef(co, 0));
Obj x140690930515527 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930515527) {
Obj x140690930515783 = PRIM_CAR(closureRef(co, 0));
Obj x140690930515815 = PRIM_EQ(__symbolTable[92], x140690930515783);
if (True == x140690930515815) {
Obj x140690930426055 = PRIM_CDR(closureRef(co, 0));
Obj x140690930426087 = PRIM_ISCONS(x140690930426055);
if (True == x140690930426087) {
Obj x140690930426375 = PRIM_CDR(closureRef(co, 0));
Obj x140690930426407 = PRIM_CAR(x140690930426375);
Obj x = x140690930426407;
Obj x140690930426823 = PRIM_CDR(closureRef(co, 0));
Obj x140690930426855 = PRIM_CDR(x140690930426823);
Obj x140690930426887 = PRIM_ISCONS(x140690930426855);
if (True == x140690930426887) {
Obj x140690930427239 = PRIM_CDR(closureRef(co, 0));
Obj x140690930427271 = PRIM_CDR(x140690930427239);
Obj x140690930427303 = PRIM_CAR(x140690930427271);
Obj y = x140690930427303;
Obj x140690930427815 = PRIM_CDR(closureRef(co, 0));
Obj x140690930427847 = PRIM_CDR(x140690930427815);
Obj x140690930427879 = PRIM_CDR(x140690930427847);
Obj x140690930427911 = PRIM_ISCONS(x140690930427879);
if (True == x140690930427911) {
Obj x140690930428391 = PRIM_CDR(closureRef(co, 0));
Obj x140690930428423 = PRIM_CDR(x140690930428391);
Obj x140690930428455 = PRIM_CDR(x140690930428423);
Obj x140690930428487 = PRIM_CAR(x140690930428455);
Obj z = x140690930428487;
Obj x140690930429159 = PRIM_CDR(closureRef(co, 0));
Obj x140690930429191 = PRIM_CDR(x140690930429159);
Obj x140690930429223 = PRIM_CDR(x140690930429191);
Obj x140690930429319 = PRIM_CDR(x140690930429223);
Obj x140690930429351 = PRIM_EQ(Nil, x140690930429319);
if (True == x140690930429351) {
Obj x140690930429767 = makeCons(z, Nil);
Obj x140690930429799 = makeCons(y, x140690930429767);
Obj x140690930429831 = makeCons(x, x140690930429799);
PUSH_CONT_0(co, 39, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), x140690930429831);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931146855);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931146855);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931146855);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931146855);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931146855);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931146855);
}
}

label39:
{
Obj x140690930429863 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, x140690930429863);
}

label40:
{
Obj x140690931148167 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj x140690930556711 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930556711) {
Obj x140690930512103 = PRIM_CAR(closureRef(co, 0));
Obj x140690930512135 = PRIM_EQ(__symbolTable[90], x140690930512103);
if (True == x140690930512135) {
Obj x140690930512391 = PRIM_CDR(closureRef(co, 0));
Obj x140690930512423 = PRIM_ISCONS(x140690930512391);
if (True == x140690930512423) {
Obj x140690930512711 = PRIM_CDR(closureRef(co, 0));
Obj x140690930512743 = PRIM_CAR(x140690930512711);
Obj x = x140690930512743;
Obj x140690930513127 = PRIM_CDR(closureRef(co, 0));
Obj x140690930513223 = PRIM_CDR(x140690930513127);
Obj x140690930513255 = PRIM_ISCONS(x140690930513223);
if (True == x140690930513255) {
Obj x140690930513639 = PRIM_CDR(closureRef(co, 0));
Obj x140690930513671 = PRIM_CDR(x140690930513639);
Obj x140690930513703 = PRIM_CAR(x140690930513671);
Obj y = x140690930513703;
Obj x140690930514279 = PRIM_CDR(closureRef(co, 0));
Obj x140690930514311 = PRIM_CDR(x140690930514279);
Obj x140690930514343 = PRIM_CDR(x140690930514311);
Obj x140690930514375 = PRIM_EQ(Nil, x140690930514343);
if (True == x140690930514375) {
Obj x140690930514791 = makeCons(y, Nil);
Obj x140690930514823 = makeCons(x, x140690930514791);
PUSH_CONT_0(co, 41, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), x140690930514823);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931148167);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931148167);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931148167);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931148167);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931148167);
}
}

label41:
{
Obj x140690930514855 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, x140690930514855);
}

label42:
{
Obj x140690931149351 = makeNative(46, clofun7, 0, 1, closureRef(co, 0));
Obj x140690930575847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930575847) {
Obj x140690930576231 = PRIM_CAR(closureRef(co, 0));
Obj x140690930576263 = PRIM_EQ(__symbolTable[91], x140690930576231);
if (True == x140690930576263) {
Obj x140690930576519 = PRIM_CDR(closureRef(co, 0));
Obj x140690930576551 = PRIM_ISCONS(x140690930576519);
if (True == x140690930576551) {
Obj x140690930576839 = PRIM_CDR(closureRef(co, 0));
Obj x140690930577095 = PRIM_CAR(x140690930576839);
Obj a = x140690930577095;
Obj x140690930552839 = PRIM_CDR(closureRef(co, 0));
Obj x140690930552871 = PRIM_CDR(x140690930552839);
Obj x140690930552903 = PRIM_ISCONS(x140690930552871);
if (True == x140690930552903) {
Obj x140690930553255 = PRIM_CDR(closureRef(co, 0));
Obj x140690930553287 = PRIM_CDR(x140690930553255);
Obj x140690930553319 = PRIM_CAR(x140690930553287);
Obj b = x140690930553319;
Obj x140690930553831 = PRIM_CDR(closureRef(co, 0));
Obj x140690930553863 = PRIM_CDR(x140690930553831);
Obj x140690930553895 = PRIM_CDR(x140690930553863);
Obj x140690930553927 = PRIM_ISCONS(x140690930553895);
if (True == x140690930553927) {
Obj x140690930554471 = PRIM_CDR(closureRef(co, 0));
Obj x140690930554503 = PRIM_CDR(x140690930554471);
Obj x140690930554535 = PRIM_CDR(x140690930554503);
Obj x140690930554567 = PRIM_CAR(x140690930554535);
Obj c = x140690930554567;
Obj x140690930555111 = PRIM_CDR(closureRef(co, 0));
Obj x140690930555271 = PRIM_CDR(x140690930555111);
Obj x140690930555303 = PRIM_CDR(x140690930555271);
Obj x140690930555335 = PRIM_CDR(x140690930555303);
Obj x140690930555367 = PRIM_EQ(Nil, x140690930555335);
if (True == x140690930555367) {
pushCont(co, 43, clofun7, 2, c, a);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), b);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931149351);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931149351);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931149351);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931149351);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931149351);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690931149351);
}
}

label43:
{
Obj x140690930555527 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun7, 2, a, x140690930555527);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), c);
}

label44:
{
Obj x140690930555815 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930555527= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930555911 = makeCons(a, Nil);
pushCont(co, 45, clofun7, 1, x140690930555527);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), x140690930555815, x140690930555911);
}

label45:
{
Obj x140690930555943 = __arg1;
Obj x140690930555527= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[86]), x140690930555527, x140690930555943);
}

label46:
{
Obj x140690933136615 = makeNative(47, clofun7, 0, 1, closureRef(co, 0));
Obj x140690930573607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930573607) {
Obj x140690930573959 = PRIM_CAR(closureRef(co, 0));
Obj x140690930573991 = PRIM_EQ(__symbolTable[77], x140690930573959);
if (True == x140690930573991) {
Obj x140690930574311 = PRIM_CDR(closureRef(co, 0));
Obj x140690930574407 = PRIM_ISCONS(x140690930574311);
if (True == x140690930574407) {
Obj x140690930574663 = PRIM_CDR(closureRef(co, 0));
Obj x140690930574791 = PRIM_CAR(x140690930574663);
Obj lam = x140690930574791;
Obj x140690930575047 = PRIM_CDR(closureRef(co, 0));
Obj x140690930575079 = PRIM_CDR(x140690930575047);
Obj more = x140690930575079;
Obj x140690930575367 = makeCons(lam, more);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), x140690930575367);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933136615);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933136615);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933136615);
}
}

label47:
{
Obj x140690933063911 = makeNative(48, clofun7, 0, 1, closureRef(co, 0));
Obj x140690930628679 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930628679) {
Obj x140690930629095 = PRIM_CAR(closureRef(co, 0));
Obj x140690930629127 = PRIM_EQ(__symbolTable[78], x140690930629095);
if (True == x140690930629127) {
Obj x140690930629415 = PRIM_CDR(closureRef(co, 0));
Obj x140690930629511 = PRIM_ISCONS(x140690930629415);
if (True == x140690930629511) {
Obj x140690930629767 = PRIM_CDR(closureRef(co, 0));
Obj x140690930629799 = PRIM_CAR(x140690930629767);
Obj x = x140690930629799;
Obj x140690930630279 = PRIM_CDR(closureRef(co, 0));
Obj x140690930630311 = PRIM_CDR(x140690930630279);
Obj x140690930630343 = PRIM_EQ(Nil, x140690930630311);
if (True == x140690930630343) {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), x);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933063911);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933063911);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933063911);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933063911);
}
}

label48:
{
Obj x140690933065063 = makeNative(0, clofun8, 0, 1, closureRef(co, 0));
Obj x140690930682631 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930682631) {
Obj x140690930682919 = PRIM_CAR(closureRef(co, 0));
Obj x140690930682951 = PRIM_EQ(__symbolTable[79], x140690930682919);
if (True == x140690930682951) {
Obj x140690930683239 = PRIM_CDR(closureRef(co, 0));
Obj x140690930683303 = PRIM_ISCONS(x140690930683239);
if (True == x140690930683303) {
Obj x140690930683623 = PRIM_CDR(closureRef(co, 0));
Obj x140690930683655 = PRIM_CAR(x140690930683623);
Obj exp = x140690930683655;
Obj x140690930626631 = PRIM_CDR(closureRef(co, 0));
Obj x140690930626663 = PRIM_CDR(x140690930626631);
Obj x140690930626695 = PRIM_ISCONS(x140690930626663);
if (True == x140690930626695) {
Obj x140690930627015 = PRIM_CDR(closureRef(co, 0));
Obj x140690930627047 = PRIM_CDR(x140690930627015);
Obj x140690930627079 = PRIM_CAR(x140690930627047);
Obj cont = x140690930627079;
Obj x140690930627527 = PRIM_CDR(closureRef(co, 0));
Obj x140690930627559 = PRIM_CDR(x140690930627527);
Obj x140690930627591 = PRIM_CDR(x140690930627559);
Obj x140690930627623 = PRIM_EQ(Nil, x140690930627591);
if (True == x140690930627623) {
Obj x140690930627975 = makeCons(cont, Nil);
Obj x140690930628007 = makeCons(exp, x140690930627975);
PUSH_CONT_0(co, 49, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), x140690930628007);
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065063);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065063);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065063);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065063);
}
} else {
JUMP_WITH_ARGS_1(clofun7, x140690933065063);
}
}

label49:
{
Obj x140690930628071 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, x140690930628071);
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun8(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690933066535 = makeNative(1, clofun8, 0, 1, closureRef(co, 0));
Obj x140690930680551 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930680551) {
Obj x140690930680807 = PRIM_CAR(closureRef(co, 0));
Obj x140690930680839 = PRIM_EQ(__symbolTable[80], x140690930680807);
if (True == x140690930680839) {
Obj x140690930681191 = PRIM_CDR(closureRef(co, 0));
Obj x140690930681223 = PRIM_ISCONS(x140690930681191);
if (True == x140690930681223) {
Obj x140690930681511 = PRIM_CDR(closureRef(co, 0));
Obj x140690930681543 = PRIM_CAR(x140690930681511);
Obj exp = x140690930681543;
Obj x140690930681991 = PRIM_CDR(closureRef(co, 0));
Obj x140690930682023 = PRIM_CDR(x140690930681991);
Obj x140690930682055 = PRIM_EQ(Nil, x140690930682023);
if (True == x140690930682055) {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[82]), exp);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066535);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066535);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066535);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066535);
}
}

label1:
{
Obj x140690933018663 = makeNative(3, clofun8, 0, 1, closureRef(co, 0));
Obj x140690931100295 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931100295) {
Obj x140690931100647 = PRIM_CAR(closureRef(co, 0));
Obj x140690931100679 = PRIM_EQ(__symbolTable[81], x140690931100647);
if (True == x140690931100679) {
Obj x140690931008711 = PRIM_CDR(closureRef(co, 0));
Obj x140690931008743 = PRIM_ISCONS(x140690931008711);
if (True == x140690931008743) {
Obj x140690931009095 = PRIM_CDR(closureRef(co, 0));
Obj x140690931009223 = PRIM_CAR(x140690931009095);
Obj arg = x140690931009223;
Obj x140690931009639 = PRIM_CDR(closureRef(co, 0));
Obj x140690931009671 = PRIM_CDR(x140690931009639);
Obj x140690931009703 = PRIM_ISCONS(x140690931009671);
if (True == x140690931009703) {
Obj x140690931010119 = PRIM_CDR(closureRef(co, 0));
Obj x140690931010151 = PRIM_CDR(x140690931010119);
Obj x140690931010279 = PRIM_CAR(x140690931010151);
Obj body = x140690931010279;
Obj x140690931011335 = PRIM_CDR(closureRef(co, 0));
Obj x140690931011367 = PRIM_CDR(x140690931011335);
Obj x140690931011399 = PRIM_CDR(x140690931011367);
Obj x140690931011431 = PRIM_EQ(Nil, x140690931011399);
if (True == x140690931011431) {
pushCont(co, 2, clofun8, 1, arg);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018663);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018663);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018663);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018663);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018663);
}
}

label2:
{
Obj x140690930679943 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), x140690930679943, arg);
}

label3:
{
Obj x140690931099111 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931099111) {
Obj x140690931099303 = PRIM_CAR(closureRef(co, 0));
Obj f = x140690931099303;
Obj x140690931099591 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690931099591;
Obj x140690931099911 = makeCons(f, args);
PUSH_CONT_0(co, 4, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), x140690931099911);
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label4:
{
Obj x140690931099943 = __arg1;
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, x140690931099943);
}

label5:
{
Obj x140690933067751 = __arg1;
Obj x140690933018727 = makeNative(6, clofun8, 0, 1, x140690933067751);
Obj x140690931147911 = PRIM_ISCONS(x140690933067751);
if (True == x140690931147911) {
Obj x140690931148199 = PRIM_CAR(x140690933067751);
Obj x140690931148263 = PRIM_EQ(__symbolTable[101], x140690931148199);
if (True == x140690931148263) {
Obj x140690931148519 = PRIM_CDR(x140690933067751);
Obj x140690931148551 = PRIM_ISCONS(x140690931148519);
if (True == x140690931148551) {
Obj x140690931148807 = PRIM_CDR(x140690933067751);
Obj x140690931148839 = PRIM_CAR(x140690931148807);
Obj x140690931149191 = PRIM_CDR(x140690933067751);
Obj x140690931149255 = PRIM_CDR(x140690931149191);
Obj x140690931149287 = PRIM_EQ(Nil, x140690931149255);
if (True == x140690931149287) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018727);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018727);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018727);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933018727);
}
}

label6:
{
Obj x140690933019815 = makeNative(7, clofun8, 0, 1, closureRef(co, 0));
Obj x140690931219399 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931219399) {
Obj x140690931219879 = PRIM_CAR(closureRef(co, 0));
Obj x140690931219911 = PRIM_EQ(__symbolTable[98], x140690931219879);
if (True == x140690931219911) {
Obj x140690931220231 = PRIM_CDR(closureRef(co, 0));
Obj x140690931220263 = PRIM_ISCONS(x140690931220231);
if (True == x140690931220263) {
Obj x140690931146823 = PRIM_CDR(closureRef(co, 0));
Obj x140690931146887 = PRIM_CAR(x140690931146823);
Obj x140690931147303 = PRIM_CDR(closureRef(co, 0));
Obj x140690931147335 = PRIM_CDR(x140690931147303);
Obj x140690931147367 = PRIM_EQ(Nil, x140690931147335);
if (True == x140690931147367) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019815);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019815);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019815);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019815);
}
}

label7:
{
Obj x140690933020743 = makeNative(8, clofun8, 0, 1, closureRef(co, 0));
Obj x140690931217031 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931217031) {
Obj x140690931217383 = PRIM_CAR(closureRef(co, 0));
Obj x140690931217415 = PRIM_EQ(__symbolTable[95], x140690931217383);
if (True == x140690931217415) {
Obj x140690931217799 = PRIM_CDR(closureRef(co, 0));
Obj x140690931217831 = PRIM_ISCONS(x140690931217799);
if (True == x140690931217831) {
Obj x140690931218215 = PRIM_CDR(closureRef(co, 0));
Obj x140690931218247 = PRIM_CAR(x140690931218215);
Obj x140690931218759 = PRIM_CDR(closureRef(co, 0));
Obj x140690931218791 = PRIM_CDR(x140690931218759);
Obj x140690931218823 = PRIM_EQ(Nil, x140690931218791);
if (True == x140690931218823) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933020743);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933020743);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933020743);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933020743);
}
}

label8:
{
Obj x140690933021863 = makeNative(9, clofun8, 0, 1, closureRef(co, 0));
Obj x140690933021031 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933021031) {
Obj x140690933021447 = PRIM_CAR(closureRef(co, 0));
Obj x140690933021511 = PRIM_EQ(__symbolTable[89], x140690933021447);
if (True == x140690933021511) {
Obj x140690933021799 = PRIM_CDR(closureRef(co, 0));
Obj x140690933021831 = PRIM_ISCONS(x140690933021799);
if (True == x140690933021831) {
Obj x140690933022183 = PRIM_CDR(closureRef(co, 0));
Obj x140690933022215 = PRIM_CAR(x140690933022183);
Obj x140690933022599 = PRIM_CDR(closureRef(co, 0));
Obj x140690933022631 = PRIM_CDR(x140690933022599);
Obj x140690933022663 = PRIM_EQ(Nil, x140690933022631);
if (True == x140690933022663) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021863);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021863);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021863);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021863);
}
}

label9:
{
Obj x140690931216551 = makeNative(10, clofun8, 0, 0);
Obj x140690933019015 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933019015) {
Obj x140690933019303 = PRIM_CAR(closureRef(co, 0));
Obj x140690933019335 = PRIM_EQ(__symbolTable[83], x140690933019303);
if (True == x140690933019335) {
Obj x140690933019623 = PRIM_CDR(closureRef(co, 0));
Obj x140690933019655 = PRIM_ISCONS(x140690933019623);
if (True == x140690933019655) {
Obj x140690933019975 = PRIM_CDR(closureRef(co, 0));
Obj x140690933020007 = PRIM_CAR(x140690933019975);
Obj x140690933020327 = PRIM_CDR(closureRef(co, 0));
Obj x140690933020359 = PRIM_CDR(x140690933020327);
Obj x140690933020391 = PRIM_EQ(Nil, x140690933020359);
if (True == x140690933020391) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931216551);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931216551);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931216551);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931216551);
}
}

label10:
{
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj x140690933064135 = __arg1;
Obj x140690933064167 = __arg2;
Obj x140690933064583 = PRIM_EQ(Nil, x140690933064135);
if (True == x140690933064583) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933065351 = makeNative(13, clofun8, 0, 2, x140690933064135, x140690933064167);
Obj x140690933065991 = PRIM_ISCONS(x140690933064135);
if (True == x140690933065991) {
Obj x140690933066215 = PRIM_CAR(x140690933064135);
Obj x = x140690933066215;
Obj x140690933066407 = PRIM_CDR(x140690933064135);
Obj y = x140690933066407;
pushCont(co, 12, clofun8, 3, y, x140690933064167, x140690933065351);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), x, x140690933064167);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933065351);
}
}
}

label12:
{
Obj x140690933066599 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933064167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933065351= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140690933066599) {
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), y, x140690933064167);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933065351);
}
}

label13:
{
Obj x140690933064903 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933064903) {
Obj x140690933065127 = PRIM_CAR(closureRef(co, 0));
Obj x = x140690933065127;
Obj x140690933065415 = PRIM_CDR(closureRef(co, 0));
Obj y = x140690933065415;
pushCont(co, 14, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), y, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label14:
{
Obj x140690933065703 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933065767 = makeCons(x, x140690933065703);
__nargs = 2;
__arg1 = x140690933065767;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x140690933135015 = __arg1;
Obj x140690933135047 = __arg2;
Obj x140690930392583 = PRIM_EQ(Nil, x140690933135015);
if (True == x140690930392583) {
__nargs = 2;
__arg1 = x140690933135047;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933136135 = makeNative(17, clofun8, 0, 2, x140690933135015, x140690933135047);
Obj x140690933136455 = PRIM_ISCONS(x140690933135015);
if (True == x140690933136455) {
Obj x140690933136679 = PRIM_CAR(x140690933135015);
Obj x = x140690933136679;
Obj x140690933136839 = PRIM_CDR(x140690933135015);
Obj y = x140690933136839;
pushCont(co, 16, clofun8, 3, y, x140690933135047, x140690933136135);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), x, x140690933135047);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933136135);
}
}
}

label16:
{
Obj x140690933137031 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933135047= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690933136135= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140690933137031) {
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[86]), y, x140690933135047);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933136135);
}
}

label17:
{
Obj x140690933134695 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933134695) {
Obj x140690933135111 = PRIM_CAR(closureRef(co, 0));
Obj x = x140690933135111;
Obj x140690933135879 = PRIM_CDR(closureRef(co, 0));
Obj y = x140690933135879;
pushCont(co, 18, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[86]), y, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label18:
{
Obj x140690933136167 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933136199 = makeCons(x, x140690933136167);
__nargs = 2;
__arg1 = x140690933136199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x140690931218535 = __arg1;
Obj x140690931218567 = __arg2;
Obj x140690931218599 = __arg3;
Obj x140690933133383 = makeNative(23, clofun8, 1, 3, x140690931218535, x140690931218599, x140690931218567);
pushCont(co, 20, clofun8, 2, x140690931218599, x140690933133383);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[88]), x140690931218599);
}

label20:
{
Obj x140690930391719 = __arg1;
Obj x140690931218599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930391719) {
JUMP_WITH_ARGS_2(clofun8, x140690933133383, True);
} else {
Obj x140690930391879 = primIsString(x140690931218599);
if (True == x140690930391879) {
JUMP_WITH_ARGS_2(clofun8, x140690933133383, True);
} else {
pushCont(co, 21, clofun8, 2, x140690931218599, x140690933133383);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[87]), x140690931218599);
}
}
}

label21:
{
Obj x140690930392039 = __arg1;
Obj x140690931218599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690933133383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140690930392039) {
JUMP_WITH_ARGS_2(clofun8, x140690933133383, True);
} else {
pushCont(co, 22, clofun8, 1, x140690933133383);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[108]), x140690931218599);
}
}

label22:
{
Obj x140690930392199 = __arg1;
Obj x140690933133383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930392199) {
JUMP_WITH_ARGS_2(clofun8, x140690933133383, True);
} else {
JUMP_WITH_ARGS_2(clofun8, x140690933133383, False);
}
}

label23:
{
Obj x140690933134023 = __arg1;
if (True == x140690933134023) {
Obj x140690930682439 = makeCons(closureRef(co, 1), Nil);
Obj x140690930682471 = makeCons(__symbolTable[101], x140690930682439);
__nargs = 2;
__arg1 = x140690930682471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933135751 = makeNative(25, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj x140690930389607 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140690930389607) {
Obj x140690930389863 = PRIM_CAR(closureRef(co, 1));
Obj x140690930389895 = PRIM_EQ(__symbolTable[89], x140690930389863);
if (True == x140690930389895) {
Obj x140690930390151 = PRIM_CDR(closureRef(co, 1));
Obj x140690930390183 = PRIM_ISCONS(x140690930390151);
if (True == x140690930390183) {
Obj x140690930390439 = PRIM_CDR(closureRef(co, 1));
Obj x140690930390471 = PRIM_CAR(x140690930390439);
Obj x = x140690930390471;
Obj x140690930390791 = PRIM_CDR(closureRef(co, 1));
Obj x140690930390823 = PRIM_CDR(x140690930390791);
Obj x140690930390855 = PRIM_EQ(Nil, x140690930390823);
if (True == x140690930390855) {
pushCont(co, 24, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[99]), x, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933135751);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933135751);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933135751);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933135751);
}
}
}

label24:
{
Obj x140690930391047 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930391207 = makeCons(x, Nil);
Obj x140690930391239 = makeCons(__symbolTable[101], x140690930391207);
__nargs = 2;
__arg1 = x140690930391239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x140690930682791 = primIsSymbol(closureRef(co, 0));
if (True == x140690930682791) {
PUSH_CONT_0(co, 49, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj x140690933064071 = makeNative(28, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930402823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930402823) {
Obj x140690930403079 = PRIM_CAR(closureRef(co, 0));
Obj x140690930403111 = PRIM_EQ(__symbolTable[94], x140690930403079);
if (True == x140690930403111) {
Obj x140690930403367 = PRIM_CDR(closureRef(co, 0));
Obj x140690930403399 = PRIM_ISCONS(x140690930403367);
if (True == x140690930403399) {
Obj x140690930403655 = PRIM_CDR(closureRef(co, 0));
Obj x140690930403687 = PRIM_CAR(x140690930403655);
Obj args = x140690930403687;
Obj x140690930404007 = PRIM_CDR(closureRef(co, 0));
Obj x140690930404039 = PRIM_CDR(x140690930404007);
Obj x140690930404071 = PRIM_ISCONS(x140690930404039);
if (True == x140690930404071) {
Obj x140690930404391 = PRIM_CDR(closureRef(co, 0));
Obj x140690930404423 = PRIM_CDR(x140690930404391);
Obj x140690930404455 = PRIM_CAR(x140690930404423);
Obj body = x140690930404455;
Obj x140690930404839 = PRIM_CDR(closureRef(co, 0));
Obj x140690930404871 = PRIM_CDR(x140690930404839);
Obj x140690930404903 = PRIM_CDR(x140690930404871);
Obj x140690930404935 = PRIM_EQ(Nil, x140690930404903);
if (True == x140690930404935) {
pushCont(co, 26, clofun8, 2, body, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[93]), args, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933064071);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933064071);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933064071);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933064071);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933064071);
}
}
}

label26:
{
Obj x140690930405319 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun8, 1, args);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), x140690930405319, closureRef(co, 2), body);
}

label27:
{
Obj x140690930388999 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930389031 = makeCons(x140690930388999, Nil);
Obj x140690930389063 = makeCons(args, x140690930389031);
Obj x140690930389095 = makeCons(__symbolTable[94], x140690930389063);
__nargs = 2;
__arg1 = x140690930389095;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x140690933066023 = makeNative(29, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930427175 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930427175) {
Obj x140690930427431 = PRIM_CAR(closureRef(co, 0));
Obj x140690930427463 = PRIM_EQ(__symbolTable[92], x140690930427431);
if (True == x140690930427463) {
Obj x140690930427719 = PRIM_CDR(closureRef(co, 0));
Obj x140690930427751 = PRIM_ISCONS(x140690930427719);
if (True == x140690930427751) {
Obj x140690930428071 = PRIM_CDR(closureRef(co, 0));
Obj x140690930428103 = PRIM_CAR(x140690930428071);
Obj x140690930428135 = PRIM_ISCONS(x140690930428103);
if (True == x140690930428135) {
Obj x140690930428519 = PRIM_CDR(closureRef(co, 0));
Obj x140690930428551 = PRIM_CAR(x140690930428519);
Obj x140690930428583 = PRIM_CAR(x140690930428551);
Obj x140690930428615 = PRIM_EQ(__symbolTable[92], x140690930428583);
if (True == x140690930428615) {
Obj x140690930428935 = PRIM_CDR(closureRef(co, 0));
Obj x140690930428967 = PRIM_CAR(x140690930428935);
Obj x140690930428999 = PRIM_CDR(x140690930428967);
Obj exp1 = x140690930428999;
Obj x140690930429255 = PRIM_CDR(closureRef(co, 0));
Obj x140690930429287 = PRIM_CDR(x140690930429255);
Obj exp2 = x140690930429287;
Obj x140690930429447 = primGenSym();
Obj f = x140690930429447;
Obj x140690930429607 = primGenSym();
Obj v = x140690930429607;
Obj x140690930401479 = makeCons(v, Nil);
Obj x140690930401703 = makeCons(v, exp2);
Obj x140690930401735 = makeCons(__symbolTable[92], x140690930401703);
Obj x140690930401767 = makeCons(x140690930401735, Nil);
Obj x140690930401799 = makeCons(x140690930401479, x140690930401767);
Obj x140690930401831 = makeCons(__symbolTable[94], x140690930401799);
Obj x140690930402119 = makeCons(__symbolTable[92], exp1);
Obj x140690930402151 = makeCons(x140690930402119, Nil);
Obj x140690930402183 = makeCons(f, x140690930402151);
Obj x140690930402215 = makeCons(x140690930402183, Nil);
Obj x140690930402247 = makeCons(x140690930401831, x140690930402215);
Obj x140690930402279 = makeCons(f, x140690930402247);
Obj x140690930402311 = makeCons(__symbolTable[91], x140690930402279);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), x140690930402311);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066023);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066023);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066023);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066023);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933066023);
}
}

label29:
{
Obj x140690933067719 = makeNative(32, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930515847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930515847) {
Obj x140690930425991 = PRIM_CAR(closureRef(co, 0));
Obj x140690930426023 = PRIM_EQ(__symbolTable[92], x140690930425991);
if (True == x140690930426023) {
Obj x140690930426215 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690930426215;
pushCont(co, 30, clofun8, 1, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933067719);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933067719);
}
}

label30:
{
Obj x140690930426503 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 31, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), x140690930426503, args);
}

label31:
{
Obj x140690930426535 = __arg1;
Obj x140690930426567 = makeCons(__symbolTable[92], x140690930426535);
__nargs = 2;
__arg1 = x140690930426567;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140690933019463 = makeNative(35, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930512615 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930512615) {
Obj x140690930512871 = PRIM_CAR(closureRef(co, 0));
Obj x140690930512903 = PRIM_EQ(__symbolTable[90], x140690930512871);
if (True == x140690930512903) {
Obj x140690930513159 = PRIM_CDR(closureRef(co, 0));
Obj x140690930513191 = PRIM_ISCONS(x140690930513159);
if (True == x140690930513191) {
Obj x140690930513447 = PRIM_CDR(closureRef(co, 0));
Obj x140690930513479 = PRIM_CAR(x140690930513447);
Obj x = x140690930513479;
Obj x140690930513799 = PRIM_CDR(closureRef(co, 0));
Obj x140690930513831 = PRIM_CDR(x140690930513799);
Obj x140690930513863 = PRIM_ISCONS(x140690930513831);
if (True == x140690930513863) {
Obj x140690930514183 = PRIM_CDR(closureRef(co, 0));
Obj x140690930514215 = PRIM_CDR(x140690930514183);
Obj x140690930514247 = PRIM_CAR(x140690930514215);
Obj y = x140690930514247;
Obj x140690930514631 = PRIM_CDR(closureRef(co, 0));
Obj x140690930514663 = PRIM_CDR(x140690930514631);
Obj x140690930514695 = PRIM_CDR(x140690930514663);
Obj x140690930514727 = PRIM_EQ(Nil, x140690930514695);
if (True == x140690930514727) {
pushCont(co, 33, clofun8, 1, y);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), x);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019463);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019463);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019463);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019463);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933019463);
}
}

label33:
{
Obj x140690930515015 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 34, clofun8, 1, x140690930515015);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), y);
}

label34:
{
Obj x140690930515239 = __arg1;
Obj x140690930515015= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930515271 = makeCons(x140690930515239, Nil);
Obj x140690930515303 = makeCons(x140690930515015, x140690930515271);
Obj x140690930515335 = makeCons(__symbolTable[90], x140690930515303);
__nargs = 2;
__arg1 = x140690930515335;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140690933021383 = makeNative(38, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930553127 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930553127) {
Obj x140690930553383 = PRIM_CAR(closureRef(co, 0));
Obj x140690930553415 = PRIM_EQ(__symbolTable[91], x140690930553383);
if (True == x140690930553415) {
Obj x140690930553671 = PRIM_CDR(closureRef(co, 0));
Obj x140690930553703 = PRIM_ISCONS(x140690930553671);
if (True == x140690930553703) {
Obj x140690930553959 = PRIM_CDR(closureRef(co, 0));
Obj x140690930553991 = PRIM_CAR(x140690930553959);
Obj a = x140690930553991;
Obj x140690930554311 = PRIM_CDR(closureRef(co, 0));
Obj x140690930554343 = PRIM_CDR(x140690930554311);
Obj x140690930554375 = PRIM_ISCONS(x140690930554343);
if (True == x140690930554375) {
Obj x140690930554695 = PRIM_CDR(closureRef(co, 0));
Obj x140690930554727 = PRIM_CDR(x140690930554695);
Obj x140690930554759 = PRIM_CAR(x140690930554727);
Obj b = x140690930554759;
Obj x140690930555143 = PRIM_CDR(closureRef(co, 0));
Obj x140690930555175 = PRIM_CDR(x140690930555143);
Obj x140690930555207 = PRIM_CDR(x140690930555175);
Obj x140690930555239 = PRIM_ISCONS(x140690930555207);
if (True == x140690930555239) {
Obj x140690930555623 = PRIM_CDR(closureRef(co, 0));
Obj x140690930555655 = PRIM_CDR(x140690930555623);
Obj x140690930555687 = PRIM_CDR(x140690930555655);
Obj x140690930555719 = PRIM_CAR(x140690930555687);
Obj c = x140690930555719;
Obj x140690930556167 = PRIM_CDR(closureRef(co, 0));
Obj x140690930556199 = PRIM_CDR(x140690930556167);
Obj x140690930556231 = PRIM_CDR(x140690930556199);
Obj x140690930556263 = PRIM_CDR(x140690930556231);
Obj x140690930556295 = PRIM_EQ(Nil, x140690930556263);
if (True == x140690930556295) {
pushCont(co, 36, clofun8, 2, c, a);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), b);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021383);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021383);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021383);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021383);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021383);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690933021383);
}
}

label36:
{
Obj x140690930556647 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930556903 = makeCons(a, closureRef(co, 1));
pushCont(co, 37, clofun8, 2, x140690930556647, a);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), x140690930556903, closureRef(co, 2), c);
}

label37:
{
Obj x140690930511911 = __arg1;
Obj x140690930556647= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690930511943 = makeCons(x140690930511911, Nil);
Obj x140690930511975 = makeCons(x140690930556647, x140690930511943);
Obj x140690930512007 = makeCons(a, x140690930511975);
Obj x140690930512039 = makeCons(__symbolTable[91], x140690930512007);
__nargs = 2;
__arg1 = x140690930512039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x140690931217095 = makeNative(39, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140690930630471 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930630471) {
Obj x140690930573383 = PRIM_CAR(closureRef(co, 0));
Obj x140690930573415 = PRIM_ISCONS(x140690930573383);
if (True == x140690930573415) {
Obj x140690930573735 = PRIM_CAR(closureRef(co, 0));
Obj x140690930573767 = PRIM_CAR(x140690930573735);
Obj x140690930573799 = PRIM_EQ(__symbolTable[94], x140690930573767);
if (True == x140690930573799) {
Obj x140690930574055 = PRIM_CAR(closureRef(co, 0));
Obj x140690930574087 = PRIM_CDR(x140690930574055);
Obj exp1 = x140690930574087;
Obj x140690930574343 = PRIM_CDR(closureRef(co, 0));
Obj x140690930574375 = PRIM_ISCONS(x140690930574343);
if (True == x140690930574375) {
Obj x140690930574695 = PRIM_CDR(closureRef(co, 0));
Obj x140690930574727 = PRIM_CAR(x140690930574695);
Obj x140690930574759 = PRIM_ISCONS(x140690930574727);
if (True == x140690930574759) {
Obj x140690930575143 = PRIM_CDR(closureRef(co, 0));
Obj x140690930575175 = PRIM_CAR(x140690930575143);
Obj x140690930575207 = PRIM_CAR(x140690930575175);
Obj x140690930575239 = PRIM_EQ(__symbolTable[92], x140690930575207);
if (True == x140690930575239) {
Obj x140690930575559 = PRIM_CDR(closureRef(co, 0));
Obj x140690930575591 = PRIM_CAR(x140690930575559);
Obj x140690930575623 = PRIM_CDR(x140690930575591);
Obj exp2 = x140690930575623;
Obj x140690930575943 = PRIM_CDR(closureRef(co, 0));
Obj x140690930575975 = PRIM_CDR(x140690930575943);
Obj x140690930576007 = PRIM_EQ(Nil, x140690930575975);
if (True == x140690930576007) {
Obj x140690930576167 = primGenSym();
Obj f = x140690930576167;
Obj x140690930576583 = makeCons(__symbolTable[94], exp1);
Obj x140690930576871 = makeCons(__symbolTable[92], exp2);
Obj x140690930576903 = makeCons(x140690930576871, Nil);
Obj x140690930576935 = makeCons(f, x140690930576903);
Obj x140690930576967 = makeCons(x140690930576935, Nil);
Obj x140690930576999 = makeCons(x140690930576583, x140690930576967);
Obj x140690930577031 = makeCons(f, x140690930576999);
Obj x140690930577063 = makeCons(__symbolTable[91], x140690930577031);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), x140690930577063);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931217095);
}
}

label39:
{
Obj x140690931219367 = makeNative(47, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj x140690930627495 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690930627495) {
Obj x140690930627687 = PRIM_CAR(closureRef(co, 0));
Obj op = x140690930627687;
Obj x140690930627879 = PRIM_CDR(closureRef(co, 0));
Obj args = x140690930627879;
pushCont(co, 40, clofun8, 3, op, args, x140690931219367);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[109]), op);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931219367);
}
}

label40:
{
Obj x140690930628039 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931219367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140690930628039) {
pushCont(co, 41, clofun8, 2, op, args);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[105]), op);
} else {
JUMP_WITH_ARGS_1(clofun8, x140690931219367);
}
}

label41:
{
Obj x140690930628199 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = x140690930628199;
pushCont(co, 42, clofun8, 3, required, op, args);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[96]), args);
}

label42:
{
Obj x140690930628359 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = x140690930628359;
Obj x140690930628519 = PRIM_EQ(required, provided);
if (True == x140690930628519) {
Obj x140690930628743 = makeCons(op, Nil);
Obj x140690930628775 = makeCons(__symbolTable[95], x140690930628743);
pushCont(co, 45, clofun8, 2, args, x140690930628775);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2));
} else {
Obj x140690930629223 = PRIM_GT(required, provided);
if (True == x140690930629223) {
Obj x140690930629447 = PRIM_SUB(required, provided);
pushCont(co, 43, clofun8, 2, op, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[103]), x140690930629447, Nil);
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("primitive call mismatch"));
}
}
}

label43:
{
Obj x140690930629479 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = x140690930629479;
Obj x140690930629959 = makeCons(op, args);
pushCont(co, 44, clofun8, 1, tmp);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[93]), x140690930629959, tmp);
}

label44:
{
Obj x140690930629991 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930630023 = makeCons(x140690930629991, Nil);
Obj x140690930630055 = makeCons(tmp, x140690930630023);
Obj x140690930630087 = makeCons(__symbolTable[94], x140690930630055);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), x140690930630087);
}

label45:
{
Obj x140690930628999 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930628775= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun8, 1, x140690930628775);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), x140690930628999, args);
}

label46:
{
Obj x140690930629031 = __arg1;
Obj x140690930628775= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140690930629063 = makeCons(x140690930628775, x140690930629031);
__nargs = 2;
__arg1 = x140690930629063;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
PUSH_CONT_0(co, 48, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 0), closureRef(co, 1));
}

label48:
{
Obj x140690930627271 = __arg1;
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), x140690930627271, closureRef(co, 2));
}

label49:
{
Obj x140690930683015 = __arg1;
if (True == x140690930683015) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT_0(co, 0, clofun9);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[99]), closureRef(co, 0), closureRef(co, 2));
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun9(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140690930683271 = __arg1;
Obj x140690930683463 = makeCons(closureRef(co, 0), Nil);
Obj x140690930683495 = makeCons(__symbolTable[98], x140690930683463);
__nargs = 2;
__arg1 = x140690930683495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x140690931216711 = __arg1;
Obj x140690931216999 = __arg2;
Obj x140690930681479 = PRIM_EQ(MAKE_NUMBER(0), x140690931216711);
if (True == x140690930681479) {
__nargs = 2;
__arg1 = x140690931216999;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690930681639 = PRIM_SUB(x140690931216711, MAKE_NUMBER(1));
Obj x140690930681799 = primGenSym();
Obj x140690930681831 = makeCons(x140690930681799, x140690931216999);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[103]), x140690930681639, x140690930681831);
}
}

label2:
{
Obj x = __arg1;
PUSH_CONT_0(co, 3, clofun9);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[133]), x, globalRef(__symbolTable[127]));
}

label3:
{
Obj x140690930680871 = __arg1;
Obj find = x140690930680871;
pushCont(co, 4, clofun9, 1, find);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), find);
}

label4:
{
Obj x140690930681031 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930681031) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[104]), find);
}
}

label5:
{
Obj x = __arg1;
PUSH_CONT_0(co, 6, clofun9);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[133]), x, globalRef(__symbolTable[127]));
}

label6:
{
Obj x140690930680263 = __arg1;
Obj find = x140690930680263;
pushCont(co, 7, clofun9, 1, find);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), find);
}

label7:
{
Obj x140690930680423 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140690930680423) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[106]), find);
}
}

label8:
{
Obj x = __arg1;
PUSH_CONT_0(co, 9, clofun9);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[133]), x, globalRef(__symbolTable[127]));
}

label9:
{
Obj x140690930679815 = __arg1;
PUSH_CONT_0(co, 10, clofun9);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), x140690930679815);
}

label10:
{
Obj x140690930679847 = __arg1;
Obj x140690930679879 = primNot(x140690930679847);
__nargs = 2;
__arg1 = x140690930679879;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj x140690933021319 = __arg1;
Obj x140690933021351 = __arg2;
Obj x140690931149063 = PRIM_EQ(Nil, x140690933021351);
if (True == x140690931149063) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931149223 = PRIM_ISCONS(x140690933021351);
if (True == x140690931149223) {
Obj x140690931149415 = PRIM_CAR(x140690933021351);
Obj hd = x140690931149415;
Obj x140690931149575 = PRIM_CDR(x140690933021351);
Obj tl = x140690931149575;
pushCont(co, 12, clofun9, 2, x140690933021319, tl);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[129]), x140690933021319, hd);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label12:
{
Obj x140690931149831 = __arg1;
Obj x140690933021319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140690931149863 = PRIM_LT(x140690931149831, MAKE_NUMBER(0));
if (True == x140690931149863) {
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[128]), x140690933021319, tl);
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label13:
{
Obj x = __arg1;
Obj l = __arg2;
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[130]), MAKE_NUMBER(0), x, l);
}

label14:
{
Obj x140690933067111 = __arg1;
Obj x140690933067143 = __arg2;
Obj x140690933067271 = __arg3;
Obj x140690931220199 = PRIM_EQ(Nil, x140690933067271);
if (True == x140690931220199) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933018983 = makeNative(15, clofun9, 0, 3, x140690933067271, x140690933067111, x140690933067143);
Obj x140690931147687 = PRIM_ISCONS(x140690933067271);
if (True == x140690931147687) {
Obj x140690931147879 = PRIM_CAR(x140690933067271);
Obj a = x140690931147879;
Obj x140690931148039 = PRIM_CDR(x140690933067271);
Obj x140690931148231 = PRIM_EQ(x140690933067143, a);
if (True == x140690931148231) {
__nargs = 2;
__arg1 = x140690933067111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun9, x140690933018983);
}
} else {
JUMP_WITH_ARGS_1(clofun9, x140690933018983);
}
}
}

label15:
{
Obj x140690931146791 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690931146791) {
Obj x140690931147015 = PRIM_CAR(closureRef(co, 0));
Obj x140690931147239 = PRIM_CDR(closureRef(co, 0));
Obj b = x140690931147239;
Obj x140690931147431 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[130]), x140690931147431, closureRef(co, 2), b);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label16:
{
Obj x140690933064423 = __arg1;
Obj x140690933064455 = __arg2;
Obj x140690933064487 = __arg3;
Obj x140690931218919 = PRIM_EQ(Nil, x140690933064487);
if (True == x140690931218919) {
__nargs = 2;
__arg1 = x140690933064455;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690931219079 = PRIM_ISCONS(x140690933064487);
if (True == x140690931219079) {
Obj x140690931219239 = PRIM_CAR(x140690933064487);
Obj x = x140690931219239;
Obj x140690931219463 = PRIM_CDR(x140690933064487);
Obj y = x140690931219463;
pushCont(co, 17, clofun9, 2, x140690933064423, y);
JUMP_WITH_ARGS_3(clofun9, x140690933064423, x140690933064455, x);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label17:
{
Obj x140690931219687 = __arg1;
Obj x140690933064423= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[131]), x140690933064423, x140690931219687, y);
}

label18:
{
Obj x140690933135335 = __arg1;
Obj x140690933135399 = __arg2;
Obj x140690933022055 = PRIM_EQ(Nil, x140690933135399);
if (True == x140690933022055) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140690933136263 = makeNative(19, clofun9, 0, 2, x140690933135399, x140690933135335);
Obj x140690931216903 = PRIM_ISCONS(x140690933135399);
if (True == x140690931216903) {
Obj x140690931217191 = PRIM_CAR(x140690933135399);
Obj x140690931217223 = PRIM_ISCONS(x140690931217191);
if (True == x140690931217223) {
Obj x140690931217447 = PRIM_CAR(x140690933135399);
Obj x140690931217479 = PRIM_CAR(x140690931217447);
Obj x = x140690931217479;
Obj x140690931217703 = PRIM_CAR(x140690933135399);
Obj x140690931217735 = PRIM_CDR(x140690931217703);
Obj y = x140690931217735;
Obj x140690931217895 = PRIM_CDR(x140690933135399);
Obj x140690931218055 = PRIM_EQ(x140690933135335, x);
if (True == x140690931218055) {
Obj x140690931218151 = makeCons(x, y);
__nargs = 2;
__arg1 = x140690931218151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
JUMP_WITH_ARGS_1(clofun9, x140690933136263);
}
} else {
JUMP_WITH_ARGS_1(clofun9, x140690933136263);
}
} else {
JUMP_WITH_ARGS_1(clofun9, x140690933136263);
}
}
}

label19:
{
Obj x140690933022375 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140690933022375) {
Obj x140690933022567 = PRIM_CAR(closureRef(co, 0));
Obj x140690931216455 = PRIM_CDR(closureRef(co, 0));
Obj y = x140690931216455;
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[133]), closureRef(co, 1), y);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

