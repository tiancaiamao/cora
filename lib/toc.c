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
Obj _3514867_37 = __arg1;
PUSH_CONT_0(co, 2, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/io"));
}

label2:
{
Obj _3514868_37 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/hash-h"));
}

label3:
{
Obj _3514869_37 = __arg1;
Obj _3514870_37 = primSet(co, __symbolTable[134], Nil);
Obj _3514885_37 = primSet(co, __symbolTable[133], makeNative(14, clofun9, 2, 0));
Obj _3514891_37 = primSet(co, __symbolTable[131], makeNative(12, clofun9, 3, 0));
Obj _3514901_37 = primSet(co, __symbolTable[130], makeNative(10, clofun9, 3, 0));
Obj _3514902_37 = primSet(co, __symbolTable[129], makeNative(9, clofun9, 2, 0));
Obj _3514909_37 = primSet(co, __symbolTable[128], makeNative(7, clofun9, 2, 0));
Obj _3514910_37 = makeCons(makeCString("primSet"), Nil);
Obj _3514911_37 = makeCons(MAKE_NUMBER(2), _3514910_37);
Obj _3514912_37 = makeCons(__symbolTable[126], _3514911_37);
Obj _3514913_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3514914_37 = makeCons(MAKE_NUMBER(1), _3514913_37);
Obj _3514915_37 = makeCons(__symbolTable[125], _3514914_37);
Obj _3514916_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3514917_37 = makeCons(MAKE_NUMBER(1), _3514916_37);
Obj _3514918_37 = makeCons(__symbolTable[124], _3514917_37);
Obj _3514919_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3514920_37 = makeCons(MAKE_NUMBER(2), _3514919_37);
Obj _3514921_37 = makeCons(__symbolTable[123], _3514920_37);
Obj _3514922_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3514923_37 = makeCons(MAKE_NUMBER(1), _3514922_37);
Obj _3514924_37 = makeCons(__symbolTable[122], _3514923_37);
Obj _3514925_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3514926_37 = makeCons(MAKE_NUMBER(2), _3514925_37);
Obj _3514927_37 = makeCons(__symbolTable[121], _3514926_37);
Obj _3514928_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3514929_37 = makeCons(MAKE_NUMBER(2), _3514928_37);
Obj _3514930_37 = makeCons(__symbolTable[120], _3514929_37);
Obj _3514931_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3514932_37 = makeCons(MAKE_NUMBER(2), _3514931_37);
Obj _3514933_37 = makeCons(__symbolTable[119], _3514932_37);
Obj _3514934_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3514935_37 = makeCons(MAKE_NUMBER(2), _3514934_37);
Obj _3514936_37 = makeCons(__symbolTable[118], _3514935_37);
Obj _3514937_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3514938_37 = makeCons(MAKE_NUMBER(2), _3514937_37);
Obj _3514939_37 = makeCons(__symbolTable[117], _3514938_37);
Obj _3514940_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3514941_37 = makeCons(MAKE_NUMBER(2), _3514940_37);
Obj _3514942_37 = makeCons(__symbolTable[116], _3514941_37);
Obj _3514943_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3514944_37 = makeCons(MAKE_NUMBER(2), _3514943_37);
Obj _3514945_37 = makeCons(__symbolTable[115], _3514944_37);
Obj _3514946_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3514947_37 = makeCons(MAKE_NUMBER(0), _3514946_37);
Obj _3514948_37 = makeCons(__symbolTable[114], _3514947_37);
Obj _3514949_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3514950_37 = makeCons(MAKE_NUMBER(1), _3514949_37);
Obj _3514951_37 = makeCons(__symbolTable[113], _3514950_37);
Obj _3514952_37 = makeCons(makeCString("primNot"), Nil);
Obj _3514953_37 = makeCons(MAKE_NUMBER(1), _3514952_37);
Obj _3514954_37 = makeCons(__symbolTable[112], _3514953_37);
Obj _3514955_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3514956_37 = makeCons(MAKE_NUMBER(1), _3514955_37);
Obj _3514957_37 = makeCons(__symbolTable[111], _3514956_37);
Obj _3514958_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3514959_37 = makeCons(MAKE_NUMBER(1), _3514958_37);
Obj _3514960_37 = makeCons(__symbolTable[110], _3514959_37);
Obj _3514961_37 = makeCons(_3514960_37, Nil);
Obj _3514962_37 = makeCons(_3514957_37, _3514961_37);
Obj _3514963_37 = makeCons(_3514954_37, _3514962_37);
Obj _3514964_37 = makeCons(_3514951_37, _3514963_37);
Obj _3514965_37 = makeCons(_3514948_37, _3514964_37);
Obj _3514966_37 = makeCons(_3514945_37, _3514965_37);
Obj _3514967_37 = makeCons(_3514942_37, _3514966_37);
Obj _3514968_37 = makeCons(_3514939_37, _3514967_37);
Obj _3514969_37 = makeCons(_3514936_37, _3514968_37);
Obj _3514970_37 = makeCons(_3514933_37, _3514969_37);
Obj _3514971_37 = makeCons(_3514930_37, _3514970_37);
Obj _3514972_37 = makeCons(_3514927_37, _3514971_37);
Obj _3514973_37 = makeCons(_3514924_37, _3514972_37);
Obj _3514974_37 = makeCons(_3514921_37, _3514973_37);
Obj _3514975_37 = makeCons(_3514918_37, _3514974_37);
Obj _3514976_37 = makeCons(_3514915_37, _3514975_37);
Obj _3514977_37 = makeCons(_3514912_37, _3514976_37);
Obj _3514978_37 = primSet(co, __symbolTable[127], _3514977_37);
Obj _3514982_37 = primSet(co, __symbolTable[109], makeNative(4, clofun9, 1, 0));
Obj _3514985_37 = primSet(co, __symbolTable[107], makeNative(1, clofun9, 1, 0));
Obj _3514988_37 = primSet(co, __symbolTable[105], makeNative(48, clofun8, 1, 0));
Obj _3514993_37 = primSet(co, __symbolTable[103], makeNative(47, clofun8, 2, 0));
Obj _3515187_37 = primSet(co, __symbolTable[102], makeNative(15, clofun8, 3, 0));
Obj _3515198_37 = primSet(co, __symbolTable[86], makeNative(11, clofun8, 2, 0));
Obj _3515209_37 = primSet(co, __symbolTable[85], makeNative(7, clofun8, 2, 0));
Obj _3515260_37 = primSet(co, __symbolTable[84], makeNative(1, clofun8, 1, 0));
Obj _3515435_37 = primSet(co, __symbolTable[82], makeNative(31, clofun7, 1, 0));
Obj _3515508_37 = primSet(co, __symbolTable[76], makeNative(19, clofun7, 2, 0));
Obj _3515511_37 = primSet(co, __symbolTable[75], makeNative(18, clofun7, 1, 0));
Obj _3515648_37 = primSet(co, __symbolTable[74], makeNative(2, clofun7, 2, 0));
Obj _3515671_37 = primSet(co, __symbolTable[73], makeNative(45, clofun6, 3, 0));
Obj _3515750_37 = primSet(co, __symbolTable[68], makeNative(30, clofun6, 2, 0));
Obj _3515810_37 = primSet(co, __symbolTable[66], makeNative(21, clofun6, 2, 0));
Obj _3515818_37 = primSet(co, __symbolTable[64], makeNative(17, clofun6, 2, 0));
Obj _3515825_37 = primSet(co, __symbolTable[71], makeNative(15, clofun6, 2, 0));
Obj _3515845_37 = primSet(co, __symbolTable[62], makeNative(3, clofun6, 5, 0));
Obj _3515850_37 = primSet(co, __symbolTable[99], makeNative(0, clofun6, 2, 0));
Obj _3515856_37 = primSet(co, __symbolTable[57], makeNative(48, clofun5, 3, 0));
Obj _3515857_37 = primSet(co, __symbolTable[56], makeNative(47, clofun5, 2, 0));
Obj _3516154_37 = primSet(co, __symbolTable[59], makeNative(45, clofun3, 5, 0));
Obj _3516168_37 = primSet(co, __symbolTable[53], makeNative(37, clofun3, 5, 0));
Obj _3516207_37 = primSet(co, __symbolTable[52], makeNative(13, clofun3, 5, 0));
Obj _3516208_37 = primSet(co, __symbolTable[50], MAKE_NUMBER(50));
Obj _3516212_37 = primSet(co, __symbolTable[54], makeNative(11, clofun3, 3, 0));
Obj _3516216_37 = primSet(co, __symbolTable[46], makeNative(7, clofun3, 3, 0));
Obj _3516224_37 = primSet(co, __symbolTable[45], makeNative(0, clofun3, 3, 0));
Obj _3516229_37 = primSet(co, __symbolTable[43], makeNative(45, clofun2, 3, 0));
Obj _3516236_37 = primSet(co, __symbolTable[42], makeNative(43, clofun2, 4, 0));
Obj _3516299_37 = primSet(co, __symbolTable[41], makeNative(32, clofun2, 4, 0));
Obj _3516300_37 = primSet(co, __symbolTable[39], makeNative(31, clofun2, 2, 0));
Obj _3516301_37 = primSet(co, __symbolTable[38], makeNative(30, clofun2, 1, 0));
Obj _3516302_37 = primSet(co, __symbolTable[37], makeNative(29, clofun2, 1, 0));
Obj _3516303_37 = primSet(co, __symbolTable[36], makeNative(28, clofun2, 1, 0));
Obj _3516313_37 = primSet(co, __symbolTable[35], makeNative(22, clofun2, 1, 0));
Obj _3516320_37 = primSet(co, __symbolTable[33], makeNative(21, clofun2, 2, 0));
PUSH_CONT_0(co, 4, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[32]), __symbolTable[31], makeNative(18, clofun2, 1, 0));
}

label4:
{
Obj _3516323_37 = __arg1;
Obj _3516329_37 = primSet(co, __symbolTable[29], makeNative(12, clofun2, 2, 0));
Obj _3516335_37 = primSet(co, __symbolTable[47], makeNative(10, clofun2, 2, 0));
Obj _3516342_37 = primSet(co, __symbolTable[28], makeNative(6, clofun2, 3, 0));
Obj _3516363_37 = primSet(co, __symbolTable[27], makeNative(34, clofun1, 4, 0));
Obj _3516378_37 = primSet(co, __symbolTable[26], makeNative(30, clofun1, 4, 0));
Obj _3516393_37 = primSet(co, __symbolTable[25], makeNative(15, clofun1, 2, 0));
Obj _3516403_37 = primSet(co, __symbolTable[23], makeNative(3, clofun1, 3, 0));
Obj _3516444_37 = primSet(co, __symbolTable[22], makeNative(47, clofun0, 1, 0));
Obj _3516483_37 = primSet(co, __symbolTable[17], makeNative(42, clofun0, 4, 0));
Obj _3516535_37 = primSet(co, __symbolTable[9], makeNative(33, clofun0, 2, 0));
Obj _3516536_37 = primSet(co, __symbolTable[8], makeNative(32, clofun0, 2, 0));
Obj _3516550_37 = primSet(co, __symbolTable[6], makeNative(23, clofun0, 1, 0));
Obj _3516551_37 = primSet(co, __symbolTable[7], False);
Obj _3516564_37 = primSet(co, __symbolTable[5], makeNative(13, clofun0, 1, 0));
Obj _3516574_37 = primSet(co, __symbolTable[3], makeNative(5, clofun0, 2, 0));
JUMP_RETURN(clofun0, _3516574_37);
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _3516565_37 = primGenSym();
Obj globals = _3516565_37;
Obj _3516566_37 = primSet(co, globals, Nil);
pushCont(co, 6, clofun0, 3, from, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[29]), globals);
}

label6:
{
Obj _3516567_37 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, _3516567_37, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[5]), from);
}

label7:
{
Obj _3516568_37 = __arg1;
Obj _3516567_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, _3516567_37, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[2]), _3516568_37);
}

label8:
{
Obj _3516569_37 = __arg1;
Obj _3516567_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
JUMP_WITH_ARGS_2(clofun0, _3516567_37, _3516569_37);
}

label9:
{
Obj _3516570_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = _3516570_37;
pushCont(co, 10, clofun0, 2, globals, bc);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[1]), to);
}

label10:
{
Obj _3516571_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = _3516571_37;
pushCont(co, 11, clofun0, 2, bc, stream);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[58]), globals);
}

label11:
{
Obj _3516572_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun0, 1, stream);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[23]), stream, bc, _3516572_37);
}

label12:
{
Obj _3516573_37 = __arg1;
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
Obj _3516552_37 = __arg1;
Obj sexp = _3516552_37;
Obj _3514865_37 = makeNative(22, clofun0, 1, 1, sexp);
pushCont(co, 15, clofun0, 2, _3514865_37, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[70]), sexp);
}

label15:
{
Obj _3516555_37 = __arg1;
Obj _3514865_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3516555_37) {
Obj _3516556_37 = PRIM_CAR(sexp);
Obj _3516557_37 = PRIM_EQ(__symbolTable[19], _3516556_37);
if (True == _3516557_37) {
pushCont(co, 20, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, _3514865_37, True);
} else {
pushCont(co, 18, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, _3514865_37, False);
}
} else {
pushCont(co, 16, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, _3514865_37, False);
}
}

label16:
{
Obj _3516562_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label17:
{
Obj _3516563_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label18:
{
Obj _3516560_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 19, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label19:
{
Obj _3516561_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label20:
{
Obj _3516558_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label21:
{
Obj _3516559_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label22:
{
Obj _3514866_37 = __arg1;
if (True == _3514866_37) {
Obj _3516553_37 = PRIM_CDR(closureRef(co, 0));
JUMP_RETURN(clofun0, _3516553_37);
} else {
Obj _3516554_37 = makeCons(closureRef(co, 0), Nil);
JUMP_RETURN(clofun0, _3516554_37);
}
}

label23:
{
Obj _3514853_37 = __arg1;
Obj _3514854_37 = makeNative(26, clofun0, 0, 1, _3514853_37);
Obj _3516545_37 = PRIM_ISCONS(_3514853_37);
if (True == _3516545_37) {
Obj _3516546_37 = PRIM_CAR(_3514853_37);
Obj _3516547_37 = PRIM_EQ(__symbolTable[18], _3516546_37);
if (True == _3516547_37) {
Obj _3516548_37 = PRIM_CDR(_3514853_37);
Obj more = _3516548_37;
Obj _3516549_37 = makeCons(__symbolTable[18], more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), _3516549_37, makeNative(24, clofun0, 1, 0));
} else {
JUMP_WITH_ARGS_1(clofun0, _3514854_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514854_37);
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
Obj _3514855_37 = makeNative(29, clofun0, 0, 1, closureRef(co, 0));
Obj _3516540_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516540_37) {
Obj _3516541_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516542_37 = PRIM_EQ(__symbolTable[19], _3516541_37);
if (True == _3516542_37) {
Obj _3516543_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3516543_37;
Obj _3516544_37 = makeCons(__symbolTable[19], more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), _3516544_37, makeNative(27, clofun0, 1, 0));
} else {
JUMP_WITH_ARGS_1(clofun0, _3514855_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514855_37);
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
Obj _3516537_37 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = _3516537_37;
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
Obj _3516538_37 = __arg1;
Obj _3516539_37 = makeCons(__symbolTable[19], _3516538_37);
JUMP_RETURN(clofun0, _3516539_37);
}

label32:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(__symbolTable[7])) {
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[93]), type, code);
} else {
JUMP_RETURN(clofun0, code);
}
}

label33:
{
Obj _3514846_37 = __arg1;
Obj _3514847_37 = __arg2;
Obj _3514848_37 = makeNative(35, clofun0, 0, 2, _3514846_37, _3514847_37);
Obj _3516523_37 = PRIM_ISCONS(_3514846_37);
if (True == _3516523_37) {
Obj _3516524_37 = PRIM_CAR(_3514846_37);
Obj _3516525_37 = PRIM_EQ(__symbolTable[18], _3516524_37);
if (True == _3516525_37) {
Obj _3516526_37 = PRIM_CDR(_3514846_37);
Obj _3516527_37 = PRIM_ISCONS(_3516526_37);
if (True == _3516527_37) {
Obj _3516528_37 = PRIM_CDR(_3514846_37);
Obj _3516529_37 = PRIM_CAR(_3516528_37);
Obj name = _3516529_37;
Obj _3516530_37 = PRIM_CDR(_3514846_37);
Obj _3516531_37 = PRIM_CDR(_3516530_37);
Obj more = _3516531_37;
pushCont(co, 34, clofun0, 1, name);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, _3514847_37);
} else {
JUMP_WITH_ARGS_1(clofun0, _3514848_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514848_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514848_37);
}
}

label34:
{
Obj _3516532_37 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516533_37 = makeCons(name, _3516532_37);
Obj _3516534_37 = makeCons(__symbolTable[18], _3516533_37);
JUMP_RETURN(clofun0, _3516534_37);
}

label35:
{
Obj _3514849_37 = makeNative(37, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3516502_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516502_37) {
Obj _3516503_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516504_37 = PRIM_ISCONS(_3516503_37);
if (True == _3516504_37) {
Obj _3516505_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516506_37 = PRIM_CAR(_3516505_37);
Obj _3516507_37 = PRIM_EQ(__symbolTable[21], _3516506_37);
if (True == _3516507_37) {
Obj _3516508_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516509_37 = PRIM_CDR(_3516508_37);
Obj _3516510_37 = PRIM_ISCONS(_3516509_37);
if (True == _3516510_37) {
Obj _3516511_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516512_37 = PRIM_CDR(_3516511_37);
Obj _3516513_37 = PRIM_CAR(_3516512_37);
Obj pkg = _3516513_37;
Obj _3516514_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516515_37 = PRIM_CDR(_3516514_37);
Obj _3516516_37 = PRIM_CDR(_3516515_37);
Obj _3516517_37 = PRIM_EQ(Nil, _3516516_37);
if (True == _3516517_37) {
Obj _3516518_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3516518_37;
Obj _3516519_37 = makeCons(pkg, Nil);
Obj _3516520_37 = makeCons(__symbolTable[21], _3516519_37);
pushCont(co, 36, clofun0, 1, _3516520_37);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3514849_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514849_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514849_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514849_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514849_37);
}
}

label36:
{
Obj _3516521_37 = __arg1;
Obj _3516520_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516522_37 = makeCons(_3516520_37, _3516521_37);
JUMP_RETURN(clofun0, _3516522_37);
}

label37:
{
Obj _3514850_37 = makeNative(39, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3516490_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516490_37) {
Obj _3516491_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516492_37 = PRIM_ISCONS(_3516491_37);
if (True == _3516492_37) {
Obj _3516493_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516494_37 = PRIM_CAR(_3516493_37);
Obj _3516495_37 = PRIM_EQ(__symbolTable[20], _3516494_37);
if (True == _3516495_37) {
Obj _3516496_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516497_37 = PRIM_CDR(_3516496_37);
Obj symbols = _3516497_37;
Obj _3516498_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3516498_37;
Obj _3516499_37 = makeCons(__symbolTable[20], symbols);
pushCont(co, 38, clofun0, 1, _3516499_37);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3514850_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514850_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514850_37);
}
}

label38:
{
Obj _3516500_37 = __arg1;
Obj _3516499_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516501_37 = makeCons(_3516499_37, _3516500_37);
JUMP_RETURN(clofun0, _3516501_37);
}

label39:
{
Obj _3514851_37 = makeNative(41, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj _3516484_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516484_37) {
Obj _3516485_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516486_37 = PRIM_EQ(__symbolTable[19], _3516485_37);
if (True == _3516486_37) {
Obj _3516487_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3516487_37;
PUSH_CONT_0(co, 40, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3514851_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514851_37);
}
}

label40:
{
Obj _3516488_37 = __arg1;
Obj _3516489_37 = makeCons(__symbolTable[19], _3516488_37);
JUMP_RETURN(clofun0, _3516489_37);
}

label41:
{
JUMP_WITH_ARGS_2(clofun0, closureRef(co, 0), closureRef(co, 1));
}

label42:
{
Obj _3514838_37 = __arg1;
Obj _3514839_37 = __arg2;
Obj _3514840_37 = __arg3;
Obj _3514841_37 = co->args[4];
Obj _3516445_37 = PRIM_EQ(Nil, _3514838_37);
if (True == _3516445_37) {
pushCont(co, 45, clofun0, 2, _3514840_37, _3514841_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[72]), _3514839_37);
} else {
Obj _3514843_37 = makeNative(43, clofun0, 0, 4, _3514838_37, _3514839_37, _3514840_37, _3514841_37);
Obj _3516472_37 = PRIM_ISCONS(_3514838_37);
if (True == _3516472_37) {
Obj _3516473_37 = PRIM_CAR(_3514838_37);
Obj _3516474_37 = PRIM_ISCONS(_3516473_37);
if (True == _3516474_37) {
Obj _3516475_37 = PRIM_CAR(_3514838_37);
Obj _3516476_37 = PRIM_CAR(_3516475_37);
Obj _3516477_37 = PRIM_EQ(__symbolTable[10], _3516476_37);
if (True == _3516477_37) {
Obj _3516478_37 = PRIM_CAR(_3514838_37);
Obj _3516479_37 = PRIM_CDR(_3516478_37);
Obj exp = _3516479_37;
Obj _3516480_37 = PRIM_CDR(_3514838_37);
Obj more = _3516480_37;
Obj _3516481_37 = makeCons(__symbolTable[19], exp);
Obj _3516482_37 = makeCons(_3516481_37, _3514839_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3516482_37;
__arg3 = _3514840_37;
co->args[4] = _3514841_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, _3514843_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514843_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514843_37);
}
}
}

label43:
{
Obj _3514844_37 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3516461_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516461_37) {
Obj _3516462_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516463_37 = PRIM_ISCONS(_3516462_37);
if (True == _3516463_37) {
Obj _3516464_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516465_37 = PRIM_CAR(_3516464_37);
Obj _3516466_37 = PRIM_EQ(__symbolTable[12], _3516465_37);
if (True == _3516466_37) {
Obj _3516467_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516468_37 = PRIM_CDR(_3516467_37);
Obj exp = _3516468_37;
Obj _3516469_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3516469_37;
Obj _3516470_37 = makeCons(__symbolTable[11], exp);
Obj _3516471_37 = makeCons(_3516470_37, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3516471_37;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, _3514844_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514844_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514844_37);
}
}

label44:
{
Obj _3516448_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516448_37) {
Obj _3516449_37 = PRIM_CAR(closureRef(co, 0));
Obj exp = _3516449_37;
Obj _3516450_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3516450_37;
Obj _3516451_37 = makeCons(exp, Nil);
Obj _3516452_37 = makeCons(__symbolTable[14], _3516451_37);
Obj _3516453_37 = makeCons(_3516452_37, Nil);
Obj _3516454_37 = makeCons(__symbolTable[15], _3516453_37);
Obj _3516455_37 = makeCons(__symbolTable[13], Nil);
Obj _3516456_37 = makeCons(_3516455_37, Nil);
Obj _3516457_37 = makeCons(_3516454_37, _3516456_37);
Obj _3516458_37 = makeCons(__symbolTable[16], _3516457_37);
Obj _3516459_37 = makeCons(_3516458_37, closureRef(co, 1));
Obj _3516460_37 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3516459_37;
__arg3 = _3516460_37;
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
Obj _3516446_37 = __arg1;
Obj _3514840_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514841_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun0, 2, _3514841_37, _3516446_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[72]), _3514840_37);
}

label46:
{
Obj _3516447_37 = __arg1;
Obj _3514841_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516446_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun0, _3514841_37, _3516446_37, _3516447_37);
}

label47:
{
Obj _3514832_37 = __arg1;
Obj _3514833_37 = makeNative(48, clofun0, 0, 1, _3514832_37);
Obj _3516435_37 = PRIM_ISCONS(_3514832_37);
if (True == _3516435_37) {
Obj _3516436_37 = PRIM_CAR(_3514832_37);
Obj _3516437_37 = PRIM_EQ(__symbolTable[18], _3516436_37);
if (True == _3516437_37) {
Obj _3516438_37 = PRIM_CDR(_3514832_37);
Obj _3516439_37 = PRIM_ISCONS(_3516438_37);
if (True == _3516439_37) {
Obj _3516440_37 = PRIM_CDR(_3514832_37);
Obj _3516441_37 = PRIM_CAR(_3516440_37);
Obj _3516442_37 = PRIM_CDR(_3514832_37);
Obj _3516443_37 = PRIM_CDR(_3516442_37);
Obj remain = _3516443_37;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, _3514833_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514833_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514833_37);
}
}

label48:
{
Obj _3514834_37 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj _3516431_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516431_37) {
Obj _3516432_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516433_37 = PRIM_EQ(__symbolTable[19], _3516432_37);
if (True == _3516433_37) {
Obj _3516434_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3516434_37;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, _3514834_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514834_37);
}
}

label49:
{
Obj _3514835_37 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj _3516422_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516422_37) {
Obj _3516423_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516424_37 = PRIM_ISCONS(_3516423_37);
if (True == _3516424_37) {
Obj _3516425_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516426_37 = PRIM_CAR(_3516425_37);
Obj _3516427_37 = PRIM_EQ(__symbolTable[20], _3516426_37);
if (True == _3516427_37) {
Obj _3516428_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516429_37 = PRIM_CDR(_3516428_37);
Obj _3516430_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3516430_37;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, _3514835_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514835_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3514835_37);
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
Obj _3514836_37 = makeNative(2, clofun1, 0, 0);
Obj _3516404_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3516404_37) {
Obj _3516405_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516406_37 = PRIM_ISCONS(_3516405_37);
if (True == _3516406_37) {
Obj _3516407_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516408_37 = PRIM_CAR(_3516407_37);
Obj _3516409_37 = PRIM_EQ(__symbolTable[21], _3516408_37);
if (True == _3516409_37) {
Obj _3516410_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516411_37 = PRIM_CDR(_3516410_37);
Obj _3516412_37 = PRIM_ISCONS(_3516411_37);
if (True == _3516412_37) {
Obj _3516413_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516414_37 = PRIM_CDR(_3516413_37);
Obj _3516415_37 = PRIM_CAR(_3516414_37);
Obj pkg = _3516415_37;
Obj _3516416_37 = PRIM_CAR(closureRef(co, 0));
Obj _3516417_37 = PRIM_CDR(_3516416_37);
Obj _3516418_37 = PRIM_CDR(_3516417_37);
Obj _3516419_37 = PRIM_EQ(Nil, _3516418_37);
if (True == _3516419_37) {
Obj _3516420_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3516420_37;
pushCont(co, 1, clofun1, 1, remain);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[135]), pkg);
} else {
JUMP_WITH_ARGS_1(clofun1, _3514836_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514836_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514836_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514836_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3514836_37);
}
}

label1:
{
Obj _3516421_37 = __arg1;
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[22]), remain);
}

label2:
{
JUMP_RETURN(clofun1, Nil);
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
Obj _3516394_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = _3516394_37;
pushCont(co, 5, clofun1, 3, to, globals, groups);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[69]), bc);
}

label5:
{
Obj _3516395_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = _3516395_37;
pushCont(co, 6, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("#include \"types.h\"\n"));
}

label6:
{
Obj _3516396_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("#include \"runtime.h\"\n\n"));
}

label7:
{
Obj _3516397_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(12, clofun1, 1, 2, maxid, to), groups);
}

label8:
{
Obj _3516400_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("\n\n"));
}

label9:
{
Obj _3516401_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[25]), to, globals);
}

label10:
{
Obj _3516402_37 = __arg1;
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
Obj _3516398_37 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[46]), closureRef(co, 1), _3516398_37, closureRef(co, 0));
}

label14:
{
Obj _3516399_37 = __arg1;
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
Obj _3516379_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("void entry(struct Cora *co) {\n"));
}

label17:
{
Obj _3516380_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
}

label18:
{
Obj _3516381_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 19, clofun1, 2, globals, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), globals);
}

label19:
{
Obj _3516382_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[60]), to, _3516382_37);
}

label20:
{
Obj _3516383_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString(");\n"));
}

label21:
{
Obj _3516384_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun1, 1, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[131]), makeNative(23, clofun1, 2, 1, to), MAKE_NUMBER(0), globals);
}

label22:
{
Obj _3516392_37 = __arg1;
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
Obj _3516385_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[60]), closureRef(co, 0), acc);
}

label25:
{
Obj _3516386_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("] = intern(\""));
}

label26:
{
Obj _3516387_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun1, 1, acc);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[24]), sym);
}

label27:
{
Obj _3516388_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), _3516388_37);
}

label28:
{
Obj _3516389_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun1, 1, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("\");\n"));
}

label29:
{
Obj _3516390_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516391_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
JUMP_RETURN(clofun1, _3516391_37);
}

label30:
{
Obj _3514826_37 = __arg1;
Obj _3514827_37 = __arg2;
Obj _3514828_37 = __arg3;
Obj _3514829_37 = co->args[4];
Obj _3516364_37 = PRIM_EQ(Nil, _3514829_37);
if (True == _3516364_37) {
pushCont(co, 32, clofun1, 2, _3514828_37, _3514826_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[108]), _3514828_37);
} else {
Obj _3516369_37 = PRIM_ISCONS(_3514829_37);
if (True == _3516369_37) {
Obj _3516370_37 = PRIM_CAR(_3514829_37);
Obj bc = _3516370_37;
Obj _3516371_37 = PRIM_CDR(_3514829_37);
Obj more = _3516371_37;
Obj _3516372_37 = PRIM_EQ(_3514827_37, globalRef(__symbolTable[50]));
if (True == _3516372_37) {
pushCont(co, 31, clofun1, 3, _3514826_37, bc, more);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3514828_37);
} else {
Obj _3516376_37 = PRIM_ADD(_3514827_37, MAKE_NUMBER(1));
Obj _3516377_37 = makeCons(bc, _3514828_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3514826_37;
__arg2 = _3516376_37;
__arg3 = _3516377_37;
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
Obj _3516373_37 = __arg1;
Obj _3514826_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3516374_37 = makeCons(_3516373_37, _3514826_37);
Obj _3516375_37 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3516374_37;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _3516375_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3516365_37 = __arg1;
Obj _3514828_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514826_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3516366_37 = primNot(_3516365_37);
if (True == _3516366_37) {
pushCont(co, 33, clofun1, 1, _3514826_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3514828_37);
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3514826_37);
}
}

label33:
{
Obj _3516367_37 = __arg1;
Obj _3514826_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516368_37 = makeCons(_3516367_37, _3514826_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3516368_37);
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
Obj _3516343_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[46]), to, _3516343_37, maxid);
}

label36:
{
Obj _3516344_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 37, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("{\n"));
}

label37:
{
Obj _3516345_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("int __nargs = co->nargs;\n"));
}

label38:
{
Obj _3516346_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 39, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg0 = co->args[0];\n"));
}

label39:
{
Obj _3516347_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 40, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg1 = co->args[1];\n"));
}

label40:
{
Obj _3516348_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 41, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg2 = co->args[2];\n"));
}

label41:
{
Obj _3516349_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg3 = co->args[3];\n\n"));
}

label42:
{
Obj _3516350_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 43, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("static void* jumpTable[] = {"));
}

label43:
{
Obj _3516351_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 44, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), group);
}

label44:
{
Obj _3516352_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[28]), to, MAKE_NUMBER(0), _3516352_37);
}

label45:
{
Obj _3516353_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 46, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("};\n\n"));
}

label46:
{
Obj _3516354_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 47, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("goto *jumpTable[co->ctx.pc.label];\n\n"));
}

label47:
{
Obj _3516355_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 48, clofun1, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(5, clofun2, 1, 3, to, maxid, globals), group);
}

label48:
{
Obj _3516356_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun1, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("fail:\n"));
}

label49:
{
Obj _3516357_37 = __arg1;
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
Obj _3516358_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[0] = __arg0;\n"));
}

label1:
{
Obj _3516359_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 2, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[1] = __arg1;\n"));
}

label2:
{
Obj _3516360_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[2] = __arg2;\n"));
}

label3:
{
Obj _3516361_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 4, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[3] = __arg3;\n"));
}

label4:
{
Obj _3516362_37 = __arg1;
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
Obj _3516336_37 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _3516336_37) {
pushCont(co, 9, clofun2, 2, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("&&label0"));
} else {
Obj _3516338_37 = PRIM_LT(i, n);
if (True == _3516338_37) {
pushCont(co, 7, clofun2, 3, i, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString(", &&label"));
} else {
JUMP_RETURN(clofun2, Nil);
}
}
}

label7:
{
Obj _3516339_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun2, 3, i, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), to, i);
}

label8:
{
Obj _3516340_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3516341_37 = PRIM_ADD(i, MAKE_NUMBER(1));
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[28]), to, _3516341_37, n);
}

label9:
{
Obj _3516337_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[28]), to, MAKE_NUMBER(1), n);
}

label10:
{
Obj _3514822_37 = __arg1;
Obj _3514823_37 = __arg2;
Obj _3516330_37 = PRIM_EQ(Nil, _3514823_37);
if (True == _3516330_37) {
JUMP_RETURN(clofun2, Nil);
} else {
Obj _3516331_37 = PRIM_ISCONS(_3514823_37);
if (True == _3516331_37) {
Obj _3516332_37 = PRIM_CAR(_3514823_37);
Obj x = _3516332_37;
Obj _3516333_37 = PRIM_CDR(_3514823_37);
Obj y = _3516333_37;
pushCont(co, 11, clofun2, 2, _3514822_37, y);
JUMP_WITH_ARGS_2(clofun2, _3514822_37, x);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label11:
{
Obj _3516334_37 = __arg1;
Obj _3514822_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[47]), _3514822_37, y);
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
Obj _3516324_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
JUMP_WITH_ARGS_2(clofun2, _3516324_37, exp);
}

label14:
{
Obj _3516325_37 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[38]), _3516325_37);
}

label15:
{
Obj _3516326_37 = __arg1;
PUSH_CONT_0(co, 16, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[37]), _3516326_37);
}

label16:
{
Obj _3516327_37 = __arg1;
PUSH_CONT_0(co, 17, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[36]), _3516327_37);
}

label17:
{
Obj _3516328_37 = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[35]), _3516328_37);
}

label18:
{
Obj exp = __arg1;
pushCont(co, 19, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[104]), exp);
}

label19:
{
Obj _3516321_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = _3516321_37;
pushCont(co, 20, clofun2, 1, obj);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[30]), exp);
}

label20:
{
Obj _3516322_37 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = _3516322_37;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[33]), obj, fns);
}

label21:
{
Obj _3514818_37 = __arg1;
Obj _3514819_37 = __arg2;
Obj _3516314_37 = PRIM_EQ(Nil, _3514819_37);
if (True == _3516314_37) {
JUMP_RETURN(clofun2, _3514818_37);
} else {
Obj _3516315_37 = PRIM_ISCONS(_3514819_37);
if (True == _3516315_37) {
Obj _3516316_37 = PRIM_CAR(_3514819_37);
Obj hd = _3516316_37;
Obj _3516317_37 = PRIM_CDR(_3514819_37);
Obj more = _3516317_37;
Obj _3516318_37 = makeCons(_3514818_37, Nil);
Obj _3516319_37 = makeCons(hd, _3516318_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[33]), _3516319_37, more);
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
Obj _3516304_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = _3516304_37;
pushCont(co, 24, clofun2, 2, exp, v);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[63]), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
}

label24:
{
Obj _3516305_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun2, 2, exp, v);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[63]), v, MAKE_NUMBER(1), Nil);
}

label25:
{
Obj _3516306_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun2, 1, v);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[66]), v, exp);
}

label26:
{
Obj _3516307_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = _3516307_37;
Obj _3516308_37 = makeCons(e1, Nil);
Obj _3516309_37 = makeCons(Nil, _3516308_37);
Obj _3516310_37 = makeCons(Nil, _3516309_37);
Obj _3516311_37 = makeCons(__symbolTable[94], _3516310_37);
pushCont(co, 27, clofun2, 1, v);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[64]), v, _3516311_37);
}

label27:
{
Obj _3516312_37 = __arg1;
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
Obj _3514812_37 = __arg1;
Obj _3514813_37 = __arg2;
Obj _3514814_37 = __arg3;
Obj _3514815_37 = co->args[4];
Obj _3514816_37 = makeNative(40, clofun2, 0, 1, _3514813_37);
Obj _3516239_37 = PRIM_ISCONS(_3514813_37);
if (True == _3516239_37) {
Obj _3516240_37 = PRIM_CAR(_3514813_37);
Obj label = _3516240_37;
Obj _3516241_37 = PRIM_CDR(_3514813_37);
Obj _3516242_37 = PRIM_ISCONS(_3516241_37);
if (True == _3516242_37) {
Obj _3516243_37 = PRIM_CDR(_3514813_37);
Obj _3516244_37 = PRIM_CAR(_3516243_37);
Obj _3516245_37 = PRIM_ISCONS(_3516244_37);
if (True == _3516245_37) {
Obj _3516246_37 = PRIM_CDR(_3514813_37);
Obj _3516247_37 = PRIM_CAR(_3516246_37);
Obj _3516248_37 = PRIM_CAR(_3516247_37);
Obj _3516249_37 = PRIM_EQ(__symbolTable[94], _3516248_37);
if (True == _3516249_37) {
Obj _3516250_37 = PRIM_CDR(_3514813_37);
Obj _3516251_37 = PRIM_CAR(_3516250_37);
Obj _3516252_37 = PRIM_CDR(_3516251_37);
Obj _3516253_37 = PRIM_ISCONS(_3516252_37);
if (True == _3516253_37) {
Obj _3516254_37 = PRIM_CDR(_3514813_37);
Obj _3516255_37 = PRIM_CAR(_3516254_37);
Obj _3516256_37 = PRIM_CDR(_3516255_37);
Obj _3516257_37 = PRIM_CAR(_3516256_37);
Obj params = _3516257_37;
Obj _3516258_37 = PRIM_CDR(_3514813_37);
Obj _3516259_37 = PRIM_CAR(_3516258_37);
Obj _3516260_37 = PRIM_CDR(_3516259_37);
Obj _3516261_37 = PRIM_CDR(_3516260_37);
Obj _3516262_37 = PRIM_ISCONS(_3516261_37);
if (True == _3516262_37) {
Obj _3516263_37 = PRIM_CDR(_3514813_37);
Obj _3516264_37 = PRIM_CAR(_3516263_37);
Obj _3516265_37 = PRIM_CDR(_3516264_37);
Obj _3516266_37 = PRIM_CDR(_3516265_37);
Obj _3516267_37 = PRIM_CAR(_3516266_37);
Obj actives = _3516267_37;
Obj _3516268_37 = PRIM_CDR(_3514813_37);
Obj _3516269_37 = PRIM_CAR(_3516268_37);
Obj _3516270_37 = PRIM_CDR(_3516269_37);
Obj _3516271_37 = PRIM_CDR(_3516270_37);
Obj _3516272_37 = PRIM_CDR(_3516271_37);
Obj _3516273_37 = PRIM_ISCONS(_3516272_37);
if (True == _3516273_37) {
Obj _3516274_37 = PRIM_CDR(_3514813_37);
Obj _3516275_37 = PRIM_CAR(_3516274_37);
Obj _3516276_37 = PRIM_CDR(_3516275_37);
Obj _3516277_37 = PRIM_CDR(_3516276_37);
Obj _3516278_37 = PRIM_CDR(_3516277_37);
Obj _3516279_37 = PRIM_CAR(_3516278_37);
Obj body = _3516279_37;
Obj _3516280_37 = PRIM_CDR(_3514813_37);
Obj _3516281_37 = PRIM_CAR(_3516280_37);
Obj _3516282_37 = PRIM_CDR(_3516281_37);
Obj _3516283_37 = PRIM_CDR(_3516282_37);
Obj _3516284_37 = PRIM_CDR(_3516283_37);
Obj _3516285_37 = PRIM_CDR(_3516284_37);
Obj _3516286_37 = PRIM_EQ(Nil, _3516285_37);
if (True == _3516286_37) {
Obj _3516287_37 = PRIM_CDR(_3514813_37);
Obj _3516288_37 = PRIM_CDR(_3516287_37);
Obj _3516289_37 = PRIM_EQ(Nil, _3516288_37);
if (True == _3516289_37) {
pushCont(co, 33, clofun2, 7, actives, _3514814_37, label, _3514815_37, params, body, _3514812_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), _3514812_37, makeCString("label"));
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3514816_37);
}
}

label33:
{
Obj _3516290_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514815_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj _3516291_37 = PRIM_SUB(_3514814_37, label);
pushCont(co, 34, clofun2, 7, actives, _3514814_37, label, _3514815_37, params, body, _3514812_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[51]), _3516291_37, globalRef(__symbolTable[50]));
}

label34:
{
Obj _3516292_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514815_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 35, clofun2, 7, actives, _3514814_37, label, _3514815_37, params, body, _3514812_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), _3514812_37, _3516292_37);
}

label35:
{
Obj _3516293_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514815_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 36, clofun2, 7, actives, _3514814_37, label, _3514815_37, params, body, _3514812_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), _3514812_37, makeCString(":\n{\n"));
}

label36:
{
Obj _3516294_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514815_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 37, clofun2, 7, actives, _3514814_37, label, _3514815_37, params, body, _3514812_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[45]);
__arg2 = _3514812_37;
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
Obj _3516295_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514815_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 38, clofun2, 6, _3514814_37, label, _3514815_37, params, body, _3514812_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[43]);
__arg2 = _3514812_37;
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
Obj _3516296_37 = __arg1;
Obj _3514814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514815_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3516297_37 = makeCons(_3514814_37, label);
pushCont(co, 39, clofun2, 1, _3514812_37);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3514815_37;
__arg2 = _3516297_37;
__arg3 = params;
co->args[4] = _3514812_37;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3516298_37 = __arg1;
Obj _3514812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), _3514812_37, makeCString("}\n\n"));
}

label40:
{
PUSH_CONT_0(co, 41, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), makeCString("wrong format of toplevel\n"));
}

label41:
{
Obj _3516237_37 = __arg1;
PUSH_CONT_0(co, 42, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), closureRef(co, 0));
}

label42:
{
Obj _3516238_37 = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), makeCString("\n"));
}

label43:
{
Obj _3514806_37 = __arg1;
Obj _3514807_37 = __arg2;
Obj _3514808_37 = __arg3;
Obj _3514809_37 = co->args[4];
Obj _3516230_37 = PRIM_EQ(Nil, _3514809_37);
if (True == _3516230_37) {
JUMP_RETURN(clofun2, Nil);
} else {
Obj _3516231_37 = PRIM_ISCONS(_3514809_37);
if (True == _3516231_37) {
Obj _3516232_37 = PRIM_CAR(_3514809_37);
Obj a = _3516232_37;
Obj _3516233_37 = PRIM_CDR(_3514809_37);
Obj b = _3516233_37;
pushCont(co, 44, clofun2, 4, _3514808_37, _3514806_37, _3514807_37, b);
JUMP_WITH_ARGS_4(clofun2, _3514806_37, _3514807_37, _3514808_37, a);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label44:
{
Obj _3516234_37 = __arg1;
Obj _3514808_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514806_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514807_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3516235_37 = PRIM_ADD(_3514808_37, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = _3514806_37;
__arg2 = _3514807_37;
__arg3 = _3516235_37;
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
Obj _3516225_37 = __arg1;
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
Obj _3516226_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 48, clofun2, 2, i, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), w, makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + "));
}

label48:
{
Obj _3516227_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun2, 1, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), w, i);
}

label49:
{
Obj _3516228_37 = __arg1;
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
Obj _3516217_37 = __arg1;
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
Obj _3516218_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3516219_37 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _3516219_37) {
pushCont(co, 5, clofun3, 2, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(" = __arg"));
} else {
pushCont(co, 3, clofun3, 2, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(" = co->args["));
}
}

label3:
{
Obj _3516222_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, i);
}

label4:
{
Obj _3516223_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("];\n"));
}

label5:
{
Obj _3516220_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, i);
}

label6:
{
Obj _3516221_37 = __arg1;
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
Obj _3516213_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun3, 1, w);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), w, label, maxid);
}

label9:
{
Obj _3516214_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("(struct Cora* co"));
}

label10:
{
Obj _3516215_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(")"));
}

label11:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj _3516209_37 = PRIM_SUB(maxid, label);
Obj _3516210_37 = primDiv(_3516209_37, globalRef(__symbolTable[50]));
Obj gid = _3516210_37;
pushCont(co, 12, clofun3, 2, w, gid);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("clofun"));
}

label12:
{
Obj _3516211_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, gid);
}

label13:
{
Obj _3514800_37 = __arg1;
Obj _3514801_37 = __arg2;
Obj _3514802_37 = __arg3;
Obj _3514803_37 = co->args[4];
Obj _3514804_37 = co->args[5];
Obj _3514805_37 = makeNative(36, clofun3, 0, 0);
Obj _3516169_37 = PRIM_ISCONS(_3514804_37);
if (True == _3516169_37) {
Obj _3516170_37 = PRIM_CAR(_3514804_37);
Obj _3516171_37 = PRIM_EQ(__symbolTable[67], _3516170_37);
if (True == _3516171_37) {
Obj _3516172_37 = PRIM_CDR(_3514804_37);
Obj _3516173_37 = PRIM_ISCONS(_3516172_37);
if (True == _3516173_37) {
Obj _3516174_37 = PRIM_CDR(_3514804_37);
Obj _3516175_37 = PRIM_CAR(_3516174_37);
Obj label = _3516175_37;
Obj _3516176_37 = PRIM_CDR(_3514804_37);
Obj _3516177_37 = PRIM_CDR(_3516176_37);
Obj stacks = _3516177_37;
Obj _3516178_37 = PRIM_EQ(stacks, Nil);
if (True == _3516178_37) {
pushCont(co, 25, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString("PUSH_CONT_0(co, "));
} else {
pushCont(co, 14, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString("pushCont(co, "));
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3514805_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3514805_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3514805_37);
}
}

label14:
{
Obj _3516193_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3516194_37 = PRIM_CAR(_3514801_37);
Obj _3516195_37 = PRIM_SUB(_3516194_37, label);
pushCont(co, 15, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[51]), _3516195_37, globalRef(__symbolTable[50]));
}

label15:
{
Obj _3516196_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 16, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3514803_37, _3516196_37);
}

label16:
{
Obj _3516197_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 17, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(", "));
}

label17:
{
Obj _3516198_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3516199_37 = PRIM_CAR(_3514801_37);
pushCont(co, 18, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), _3514803_37, label, _3516199_37);
}

label18:
{
Obj _3516200_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3516201_37 = PRIM_EQ(stacks, Nil);
if (True == _3516201_37) {
Nil;
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(");\n"));
} else {
pushCont(co, 19, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(", "));
}
}

label19:
{
Obj _3516202_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[96]), stacks);
}

label20:
{
Obj _3516203_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 21, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3514803_37, _3516203_37);
}

label21:
{
Obj _3516204_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun3, 1, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[47]), makeNative(23, clofun3, 1, 3, _3514800_37, _3514801_37, _3514803_37), stacks);
}

label22:
{
Obj _3516206_37 = __arg1;
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(");\n"));
}

label23:
{
Obj x = __arg1;
pushCont(co, 24, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 2), makeCString(", "));
}

label24:
{
Obj _3516205_37 = __arg1;
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
Obj _3516179_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3516180_37 = PRIM_CAR(_3514801_37);
Obj _3516181_37 = PRIM_SUB(_3516180_37, label);
pushCont(co, 26, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[51]), _3516181_37, globalRef(__symbolTable[50]));
}

label26:
{
Obj _3516182_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3514803_37, _3516182_37);
}

label27:
{
Obj _3516183_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun3, 5, label, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(", "));
}

label28:
{
Obj _3516184_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3516185_37 = PRIM_CAR(_3514801_37);
pushCont(co, 29, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), _3514803_37, label, _3516185_37);
}

label29:
{
Obj _3516186_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3516187_37 = PRIM_EQ(stacks, Nil);
if (True == _3516187_37) {
Nil;
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(");\n"));
} else {
pushCont(co, 30, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(", "));
}
}

label30:
{
Obj _3516188_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[96]), stacks);
}

label31:
{
Obj _3516189_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun3, 4, _3514800_37, _3514801_37, stacks, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3514803_37, _3516189_37);
}

label32:
{
Obj _3516190_37 = __arg1;
Obj _3514800_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514801_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 1, _3514803_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[47]), makeNative(34, clofun3, 1, 3, _3514800_37, _3514801_37, _3514803_37), stacks);
}

label33:
{
Obj _3516192_37 = __arg1;
Obj _3514803_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3514803_37, makeCString(");\n"));
}

label34:
{
Obj x = __arg1;
pushCont(co, 35, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 2), makeCString(", "));
}

label35:
{
Obj _3516191_37 = __arg1;
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
Obj _3516155_37 = primGenSym();
Obj generate_45inst_45list_45h = _3516155_37;
Obj _3516166_37 = primSet(co, generate_45inst_45list_45h, makeNative(39, clofun3, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
pushCont(co, 38, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), generate_45inst_45list_45h);
}

label38:
{
Obj _3516167_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, _3516167_37, l);
}

label39:
{
Obj x = __arg1;
Obj _3516156_37 = PRIM_EQ(Nil, x);
if (True == _3516156_37) {
JUMP_RETURN(clofun3, Nil);
} else {
Obj _3516157_37 = PRIM_ISCONS(x);
if (True == _3516157_37) {
Obj _3516158_37 = PRIM_CAR(x);
Obj a = _3516158_37;
Obj _3516159_37 = PRIM_CDR(x);
Obj b = _3516159_37;
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
Obj _3516160_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 41, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[108]), b);
}

label41:
{
Obj _3516161_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3516162_37 = primNot(_3516161_37);
if (True == _3516162_37) {
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
Obj _3516165_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, _3516165_37, b);
}

label43:
{
Obj _3516163_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label44:
{
Obj _3516164_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, _3516164_37, b);
}

label45:
{
Obj globals = __arg1;
Obj self = __arg2;
Obj env1 = __arg3;
Obj w = co->args[4];
Obj x1 = co->args[5];
Obj _3515858_37 = primGenSym();
Obj generate_45inst_45h = _3515858_37;
Obj _3516152_37 = primSet(co, generate_45inst_45h, makeNative(47, clofun3, 2, 4, self, generate_45inst_45h, globals, w));
pushCont(co, 46, clofun3, 2, x1, env1);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), generate_45inst_45h);
}

label46:
{
Obj _3516153_37 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun3, _3516153_37, x1, env1);
}

label47:
{
Obj x2 = __arg1;
Obj env = __arg2;
Obj _3515859_37 = primIsSymbol(x2);
if (True == _3515859_37) {
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[55]), closureRef(co, 3), x2);
} else {
Obj _3514785_37 = makeNative(1, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), env, closureRef(co, 2), x2, closureRef(co, 3));
Obj _3516139_37 = PRIM_ISCONS(x2);
if (True == _3516139_37) {
Obj _3516140_37 = PRIM_CAR(x2);
Obj _3516141_37 = PRIM_EQ(__symbolTable[98], _3516140_37);
if (True == _3516141_37) {
Obj _3516142_37 = PRIM_CDR(x2);
Obj _3516143_37 = PRIM_ISCONS(_3516142_37);
if (True == _3516143_37) {
Obj _3516144_37 = PRIM_CDR(x2);
Obj _3516145_37 = PRIM_CAR(_3516144_37);
Obj x = _3516145_37;
Obj _3516146_37 = PRIM_CDR(x2);
Obj _3516147_37 = PRIM_CDR(_3516146_37);
Obj _3516148_37 = PRIM_EQ(Nil, _3516147_37);
if (True == _3516148_37) {
pushCont(co, 48, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("globalRef(__symbolTable["));
} else {
JUMP_WITH_ARGS_1(clofun3, _3514785_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3514785_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3514785_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3514785_37);
}
}
}

label48:
{
Obj _3516149_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 49, clofun3);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[56]), x, closureRef(co, 2));
}

label49:
{
Obj _3516150_37 = __arg1;
PUSH_CONT_0(co, 0, clofun4);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), closureRef(co, 3), _3516150_37);
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
Obj _3516151_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("])"));
}

label1:
{
Obj _3514786_37 = makeNative(4, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4), closureRef(co, 5));
Obj _3516127_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3516127_37) {
Obj _3516128_37 = PRIM_CAR(closureRef(co, 4));
Obj _3516129_37 = PRIM_EQ(__symbolTable[83], _3516128_37);
if (True == _3516129_37) {
Obj _3516130_37 = PRIM_CDR(closureRef(co, 4));
Obj _3516131_37 = PRIM_ISCONS(_3516130_37);
if (True == _3516131_37) {
Obj _3516132_37 = PRIM_CDR(closureRef(co, 4));
Obj _3516133_37 = PRIM_CAR(_3516132_37);
Obj idx = _3516133_37;
Obj _3516134_37 = PRIM_CDR(closureRef(co, 4));
Obj _3516135_37 = PRIM_CDR(_3516134_37);
Obj _3516136_37 = PRIM_EQ(Nil, _3516135_37);
if (True == _3516136_37) {
pushCont(co, 2, clofun4, 1, idx);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("closureRef(co, "));
} else {
JUMP_WITH_ARGS_1(clofun4, _3514786_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514786_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514786_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514786_37);
}
}

label2:
{
Obj _3516137_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 3, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), idx);
}

label3:
{
Obj _3516138_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label4:
{
Obj _3514787_37 = makeNative(7, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 3), closureRef(co, 5));
Obj _3516115_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3516115_37) {
Obj _3516116_37 = PRIM_CAR(closureRef(co, 4));
Obj _3516117_37 = PRIM_EQ(__symbolTable[48], _3516116_37);
if (True == _3516117_37) {
Obj _3516118_37 = PRIM_CDR(closureRef(co, 4));
Obj _3516119_37 = PRIM_ISCONS(_3516118_37);
if (True == _3516119_37) {
Obj _3516120_37 = PRIM_CDR(closureRef(co, 4));
Obj _3516121_37 = PRIM_CAR(_3516120_37);
Obj idx = _3516121_37;
Obj _3516122_37 = PRIM_CDR(closureRef(co, 4));
Obj _3516123_37 = PRIM_CDR(_3516122_37);
Obj _3516124_37 = PRIM_EQ(Nil, _3516123_37);
if (True == _3516124_37) {
pushCont(co, 5, clofun4, 1, idx);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("stackRef(co, "));
} else {
JUMP_WITH_ARGS_1(clofun4, _3514787_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514787_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514787_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514787_37);
}
}

label5:
{
Obj _3516125_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 6, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), idx);
}

label6:
{
Obj _3516126_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label7:
{
Obj _3514788_37 = makeNative(17, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 0), closureRef(co, 3), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2));
Obj _3516091_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3516091_37) {
Obj _3516092_37 = PRIM_CAR(closureRef(co, 3));
Obj _3516093_37 = PRIM_EQ(__symbolTable[101], _3516092_37);
if (True == _3516093_37) {
Obj _3516094_37 = PRIM_CDR(closureRef(co, 3));
Obj _3516095_37 = PRIM_ISCONS(_3516094_37);
if (True == _3516095_37) {
Obj _3516096_37 = PRIM_CDR(closureRef(co, 3));
Obj _3516097_37 = PRIM_CAR(_3516096_37);
Obj x = _3516097_37;
Obj _3516098_37 = PRIM_CDR(closureRef(co, 3));
Obj _3516099_37 = PRIM_CDR(_3516098_37);
Obj _3516100_37 = PRIM_EQ(Nil, _3516099_37);
if (True == _3516100_37) {
Obj _3516101_37 = primIsSymbol(x);
if (True == _3516101_37) {
pushCont(co, 14, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("__symbolTable["));
} else {
pushCont(co, 8, clofun4, 1, x);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[88]), x);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514788_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514788_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514788_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514788_37);
}
}

label8:
{
Obj _3516105_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3516105_37) {
pushCont(co, 12, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("MAKE_NUMBER("));
} else {
Obj _3516108_37 = primIsString(x);
if (True == _3516108_37) {
pushCont(co, 9, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("makeCString(\""));
} else {
Obj _3516112_37 = PRIM_EQ(x, Nil);
if (True == _3516112_37) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("Nil"));
} else {
Obj _3516113_37 = PRIM_EQ(x, True);
if (True == _3516113_37) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("True"));
} else {
Obj _3516114_37 = PRIM_EQ(x, False);
if (True == _3516114_37) {
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
Obj _3516109_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 10, clofun4);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[49]), x);
}

label10:
{
Obj _3516110_37 = __arg1;
PUSH_CONT_0(co, 11, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), _3516110_37);
}

label11:
{
Obj _3516111_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("\")"));
}

label12:
{
Obj _3516106_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), x);
}

label13:
{
Obj _3516107_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label14:
{
Obj _3516102_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 15, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[56]), x, closureRef(co, 4));
}

label15:
{
Obj _3516103_37 = __arg1;
PUSH_CONT_0(co, 16, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), _3516103_37);
}

label16:
{
Obj _3516104_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("]"));
}

label17:
{
Obj _3514789_37 = makeNative(32, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 5), closureRef(co, 3));
Obj _3516048_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3516048_37) {
Obj _3516049_37 = PRIM_CAR(closureRef(co, 2));
Obj _3516050_37 = PRIM_EQ(__symbolTable[91], _3516049_37);
if (True == _3516050_37) {
Obj _3516051_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516052_37 = PRIM_ISCONS(_3516051_37);
if (True == _3516052_37) {
Obj _3516053_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516054_37 = PRIM_CAR(_3516053_37);
Obj a = _3516054_37;
Obj _3516055_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516056_37 = PRIM_CDR(_3516055_37);
Obj _3516057_37 = PRIM_ISCONS(_3516056_37);
if (True == _3516057_37) {
Obj _3516058_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516059_37 = PRIM_CDR(_3516058_37);
Obj _3516060_37 = PRIM_CAR(_3516059_37);
Obj b = _3516060_37;
Obj _3516061_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516062_37 = PRIM_CDR(_3516061_37);
Obj _3516063_37 = PRIM_CDR(_3516062_37);
Obj _3516064_37 = PRIM_ISCONS(_3516063_37);
if (True == _3516064_37) {
Obj _3516065_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516066_37 = PRIM_CDR(_3516065_37);
Obj _3516067_37 = PRIM_CDR(_3516066_37);
Obj _3516068_37 = PRIM_CAR(_3516067_37);
Obj c = _3516068_37;
Obj _3516069_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516070_37 = PRIM_CDR(_3516069_37);
Obj _3516071_37 = PRIM_CDR(_3516070_37);
Obj _3516072_37 = PRIM_CDR(_3516071_37);
Obj _3516073_37 = PRIM_EQ(Nil, _3516072_37);
if (True == _3516073_37) {
pushCont(co, 18, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[129]), a, closureRef(co, 5));
} else {
JUMP_WITH_ARGS_1(clofun4, _3514789_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514789_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514789_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514789_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514789_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514789_37);
}
}

label18:
{
Obj _3516074_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = _3516074_37;
Obj _3516075_37 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _3516075_37) {
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
Obj _3516084_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 20, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(" = "));
}

label20:
{
Obj _3516085_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label21:
{
Obj _3516086_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, _3516086_37, b, closureRef(co, 5));
}

label22:
{
Obj _3516087_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label23:
{
Obj _3516088_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun4, 2, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label24:
{
Obj _3516089_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3516090_37 = makeCons(a, closureRef(co, 5));
JUMP_WITH_ARGS_3(clofun4, _3516089_37, c, _3516090_37);
}

label25:
{
Obj _3516076_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 26, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[55]), closureRef(co, 3), a);
}

label26:
{
Obj _3516077_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 27, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(" = "));
}

label27:
{
Obj _3516078_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 28, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label28:
{
Obj _3516079_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 29, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, _3516079_37, b, closureRef(co, 5));
}

label29:
{
Obj _3516080_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 30, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label30:
{
Obj _3516081_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun4, 2, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label31:
{
Obj _3516082_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3516083_37 = makeCons(a, closureRef(co, 5));
JUMP_WITH_ARGS_3(clofun4, _3516082_37, c, _3516083_37);
}

label32:
{
Obj _3514790_37 = makeNative(39, clofun4, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 0), closureRef(co, 4), closureRef(co, 5));
Obj _3516024_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3516024_37) {
Obj _3516025_37 = PRIM_CAR(closureRef(co, 1));
Obj _3516026_37 = PRIM_ISCONS(_3516025_37);
if (True == _3516026_37) {
Obj _3516027_37 = PRIM_CAR(closureRef(co, 1));
Obj _3516028_37 = PRIM_CAR(_3516027_37);
Obj _3516029_37 = PRIM_EQ(__symbolTable[95], _3516028_37);
if (True == _3516029_37) {
Obj _3516030_37 = PRIM_CAR(closureRef(co, 1));
Obj _3516031_37 = PRIM_CDR(_3516030_37);
Obj _3516032_37 = PRIM_ISCONS(_3516031_37);
if (True == _3516032_37) {
Obj _3516033_37 = PRIM_CAR(closureRef(co, 1));
Obj _3516034_37 = PRIM_CDR(_3516033_37);
Obj _3516035_37 = PRIM_CAR(_3516034_37);
Obj f = _3516035_37;
Obj _3516036_37 = PRIM_CAR(closureRef(co, 1));
Obj _3516037_37 = PRIM_CDR(_3516036_37);
Obj _3516038_37 = PRIM_CDR(_3516037_37);
Obj _3516039_37 = PRIM_EQ(Nil, _3516038_37);
if (True == _3516039_37) {
Obj _3516040_37 = PRIM_CDR(closureRef(co, 1));
Obj args = _3516040_37;
pushCont(co, 33, clofun4, 2, f, args);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[107]), f);
} else {
JUMP_WITH_ARGS_1(clofun4, _3514790_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514790_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514790_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514790_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514790_37);
}
}

label33:
{
Obj _3516041_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun4, 2, f, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), _3516041_37);
}

label34:
{
Obj _3516042_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3516043_37 = PRIM_EQ(f, __symbolTable[126]);
if (True == _3516043_37) {
pushCont(co, 37, clofun4, 1, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("(co, "));
} else {
pushCont(co, 35, clofun4, 1, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("("));
}
}

label35:
{
Obj _3516046_37 = __arg1;
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
Obj _3516047_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label37:
{
Obj _3516044_37 = __arg1;
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
Obj _3516045_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label39:
{
Obj _3514791_37 = makeNative(49, clofun4, 0, 6, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5));
Obj _3515989_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3515989_37) {
Obj _3515990_37 = PRIM_CAR(closureRef(co, 2));
Obj _3515991_37 = PRIM_EQ(__symbolTable[92], _3515990_37);
if (True == _3515991_37) {
Obj _3515992_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515993_37 = PRIM_ISCONS(_3515992_37);
if (True == _3515993_37) {
Obj _3515994_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515995_37 = PRIM_CAR(_3515994_37);
Obj a = _3515995_37;
Obj _3515996_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515997_37 = PRIM_CDR(_3515996_37);
Obj _3515998_37 = PRIM_ISCONS(_3515997_37);
if (True == _3515998_37) {
Obj _3515999_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516000_37 = PRIM_CDR(_3515999_37);
Obj _3516001_37 = PRIM_CAR(_3516000_37);
Obj b = _3516001_37;
Obj _3516002_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516003_37 = PRIM_CDR(_3516002_37);
Obj _3516004_37 = PRIM_CDR(_3516003_37);
Obj _3516005_37 = PRIM_ISCONS(_3516004_37);
if (True == _3516005_37) {
Obj _3516006_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516007_37 = PRIM_CDR(_3516006_37);
Obj _3516008_37 = PRIM_CDR(_3516007_37);
Obj _3516009_37 = PRIM_CAR(_3516008_37);
Obj c = _3516009_37;
Obj _3516010_37 = PRIM_CDR(closureRef(co, 2));
Obj _3516011_37 = PRIM_CDR(_3516010_37);
Obj _3516012_37 = PRIM_CDR(_3516011_37);
Obj _3516013_37 = PRIM_CDR(_3516012_37);
Obj _3516014_37 = PRIM_EQ(Nil, _3516013_37);
if (True == _3516014_37) {
pushCont(co, 40, clofun4, 3, a, b, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("if (True == "));
} else {
JUMP_WITH_ARGS_1(clofun4, _3514791_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514791_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514791_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514791_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514791_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514791_37);
}
}

label40:
{
Obj _3516015_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 41, clofun4, 3, a, b, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label41:
{
Obj _3516016_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun4, 2, b, c);
JUMP_WITH_ARGS_3(clofun4, _3516016_37, a, closureRef(co, 4));
}

label42:
{
Obj _3516017_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 43, clofun4, 2, b, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(") {\n"));
}

label43:
{
Obj _3516018_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun4, 2, b, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label44:
{
Obj _3516019_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 1, c);
JUMP_WITH_ARGS_3(clofun4, _3516019_37, b, closureRef(co, 4));
}

label45:
{
Obj _3516020_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 46, clofun4, 1, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("} else {\n"));
}

label46:
{
Obj _3516021_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 47, clofun4, 1, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label47:
{
Obj _3516022_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun4);
JUMP_WITH_ARGS_3(clofun4, _3516022_37, c, closureRef(co, 4));
}

label48:
{
Obj _3516023_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("}\n"));
}

label49:
{
Obj _3514792_37 = makeNative(13, clofun5, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 5), closureRef(co, 0), closureRef(co, 4));
Obj _3515956_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3515956_37) {
Obj _3515957_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515958_37 = PRIM_EQ(__symbolTable[77], _3515957_37);
if (True == _3515958_37) {
Obj _3515959_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515960_37 = PRIM_ISCONS(_3515959_37);
if (True == _3515960_37) {
Obj _3515961_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515962_37 = PRIM_CAR(_3515961_37);
Obj label = _3515962_37;
Obj _3515963_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515964_37 = PRIM_CDR(_3515963_37);
Obj _3515965_37 = PRIM_ISCONS(_3515964_37);
if (True == _3515965_37) {
Obj _3515966_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515967_37 = PRIM_CDR(_3515966_37);
Obj _3515968_37 = PRIM_CAR(_3515967_37);
Obj nargs = _3515968_37;
Obj _3515969_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515970_37 = PRIM_CDR(_3515969_37);
Obj _3515971_37 = PRIM_CDR(_3515970_37);
Obj frees = _3515971_37;
pushCont(co, 0, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("makeNative("));
} else {
JUMP_WITH_ARGS_1(clofun4, _3514792_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514792_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514792_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3514792_37);
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
Obj _3515972_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515973_37 = PRIM_CAR(closureRef(co, 3));
Obj _3515974_37 = PRIM_SUB(_3515973_37, label);
pushCont(co, 1, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[51]), _3515974_37, globalRef(__symbolTable[50]));
}

label1:
{
Obj _3515975_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), _3515975_37);
}

label2:
{
Obj _3515976_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 3, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label3:
{
Obj _3515977_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515978_37 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 4, clofun5, 2, nargs, frees);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 5), label, _3515978_37);
}

label4:
{
Obj _3515979_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 5, clofun5, 2, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label5:
{
Obj _3515980_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), nargs);
}

label6:
{
Obj _3515981_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 7, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label7:
{
Obj _3515982_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun5, 1, frees);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[96]), frees);
}

label8:
{
Obj _3515983_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 9, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), _3515983_37);
}

label9:
{
Obj _3515984_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun5, 1, frees);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[108]), frees);
}

label10:
{
Obj _3515985_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515986_37 = primNot(_3515985_37);
if (True == _3515986_37) {
pushCont(co, 11, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
} else {
Nil;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}
}

label11:
{
Obj _3515987_37 = __arg1;
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
Obj _3515988_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label13:
{
Obj _3514793_37 = makeNative(18, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5), closureRef(co, 3));
Obj _3515935_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3515935_37) {
Obj _3515936_37 = PRIM_CAR(closureRef(co, 2));
Obj _3515937_37 = PRIM_EQ(__symbolTable[90], _3515936_37);
if (True == _3515937_37) {
Obj _3515938_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515939_37 = PRIM_ISCONS(_3515938_37);
if (True == _3515939_37) {
Obj _3515940_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515941_37 = PRIM_CAR(_3515940_37);
Obj a = _3515941_37;
Obj _3515942_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515943_37 = PRIM_CDR(_3515942_37);
Obj _3515944_37 = PRIM_ISCONS(_3515943_37);
if (True == _3515944_37) {
Obj _3515945_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515946_37 = PRIM_CDR(_3515945_37);
Obj _3515947_37 = PRIM_CAR(_3515946_37);
Obj b = _3515947_37;
Obj _3515948_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515949_37 = PRIM_CDR(_3515948_37);
Obj _3515950_37 = PRIM_CDR(_3515949_37);
Obj _3515951_37 = PRIM_EQ(Nil, _3515950_37);
if (True == _3515951_37) {
pushCont(co, 14, clofun5, 2, a, b);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
} else {
JUMP_WITH_ARGS_1(clofun5, _3514793_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514793_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514793_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514793_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514793_37);
}
}

label14:
{
Obj _3515952_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 1, b);
JUMP_WITH_ARGS_3(clofun5, _3515952_37, a, closureRef(co, 5));
}

label15:
{
Obj _3515953_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun5, 1, b);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label16:
{
Obj _3515954_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun5, 1, b);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label17:
{
Obj _3515955_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, _3515955_37, b, closureRef(co, 5));
}

label18:
{
Obj _3514794_37 = makeNative(24, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 5), closureRef(co, 1), closureRef(co, 3), closureRef(co, 4));
Obj _3515918_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3515918_37) {
Obj _3515919_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515920_37 = PRIM_EQ(__symbolTable[78], _3515919_37);
if (True == _3515920_37) {
Obj _3515921_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515922_37 = PRIM_ISCONS(_3515921_37);
if (True == _3515922_37) {
Obj _3515923_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515924_37 = PRIM_CAR(_3515923_37);
Obj x = _3515924_37;
Obj _3515925_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515926_37 = PRIM_CDR(_3515925_37);
Obj _3515927_37 = PRIM_EQ(Nil, _3515926_37);
if (True == _3515927_37) {
pushCont(co, 19, clofun5, 1, x);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("JUMP_RETURN("));
} else {
JUMP_WITH_ARGS_1(clofun5, _3514794_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514794_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514794_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514794_37);
}
}

label19:
{
Obj _3515928_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515929_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515930_37 = PRIM_CAR(closureRef(co, 2));
pushCont(co, 20, clofun5, 1, x);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 5), _3515929_37, _3515930_37);
}

label20:
{
Obj _3515931_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun5, 1, x);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label21:
{
Obj _3515932_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 22, clofun5, 1, x);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label22:
{
Obj _3515933_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 23, clofun5);
JUMP_WITH_ARGS_3(clofun5, _3515933_37, x, closureRef(co, 4));
}

label23:
{
Obj _3515934_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(");\n"));
}

label24:
{
Obj _3514795_37 = makeNative(26, clofun5, 0, 6, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5));
Obj _3515907_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3515907_37) {
Obj _3515908_37 = PRIM_CAR(closureRef(co, 3));
Obj _3515909_37 = PRIM_EQ(__symbolTable[80], _3515908_37);
if (True == _3515909_37) {
Obj _3515910_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515911_37 = PRIM_ISCONS(_3515910_37);
if (True == _3515911_37) {
Obj _3515912_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515913_37 = PRIM_CAR(_3515912_37);
Obj exp = _3515913_37;
Obj _3515914_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515915_37 = PRIM_CDR(_3515914_37);
Obj _3515916_37 = PRIM_EQ(Nil, _3515915_37);
if (True == _3515916_37) {
pushCont(co, 25, clofun5, 1, exp);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
} else {
JUMP_WITH_ARGS_1(clofun5, _3514795_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514795_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514795_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514795_37);
}
}

label25:
{
Obj _3515917_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, _3515917_37, exp, closureRef(co, 5));
}

label26:
{
Obj _3514796_37 = makeNative(29, clofun5, 0, 5, closureRef(co, 0), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3515888_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515888_37) {
Obj _3515889_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515890_37 = PRIM_EQ(__symbolTable[79], _3515889_37);
if (True == _3515890_37) {
Obj _3515891_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515892_37 = PRIM_ISCONS(_3515891_37);
if (True == _3515892_37) {
Obj _3515893_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515894_37 = PRIM_CAR(_3515893_37);
Obj exp = _3515894_37;
Obj _3515895_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515896_37 = PRIM_CDR(_3515895_37);
Obj _3515897_37 = PRIM_ISCONS(_3515896_37);
if (True == _3515897_37) {
Obj _3515898_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515899_37 = PRIM_CDR(_3515898_37);
Obj _3515900_37 = PRIM_CAR(_3515899_37);
Obj cont = _3515900_37;
Obj _3515901_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515902_37 = PRIM_CDR(_3515901_37);
Obj _3515903_37 = PRIM_CDR(_3515902_37);
Obj _3515904_37 = PRIM_EQ(Nil, _3515903_37);
if (True == _3515904_37) {
pushCont(co, 27, clofun5, 1, exp);
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
JUMP_WITH_ARGS_1(clofun5, _3514796_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514796_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514796_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514796_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3514796_37);
}
}

label27:
{
Obj _3515905_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun5, 1, exp);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label28:
{
Obj _3515906_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, _3515906_37, exp, closureRef(co, 5));
}

label29:
{
Obj _3515860_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515860_37) {
Obj _3515861_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3515861_37;
Obj _3515862_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515862_37;
pushCont(co, 30, clofun5, 2, f, args);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[96]), args);
} else {
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label30:
{
Obj _3515863_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515864_37 = PRIM_ADD(MAKE_NUMBER(1), _3515863_37);
Obj nargs = _3515864_37;
Obj _3515865_37 = PRIM_LT(nargs, MAKE_NUMBER(5));
if (True == _3515865_37) {
pushCont(co, 41, clofun5, 3, nargs, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("JUMP_WITH_ARGS_"));
} else {
pushCont(co, 31, clofun5, 3, nargs, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("__nargs = "));
}
}

label31:
{
Obj _3515875_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 32, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 4), nargs);
}

label32:
{
Obj _3515876_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(";\n"));
}

label33:
{
Obj _3515877_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515878_37 = makeCons(f, args);
PUSH_CONT_0(co, 34, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 4);
co->args[4] = MAKE_NUMBER(0);
co->args[5] = _3515878_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3515879_37 = __arg1;
PUSH_CONT_0(co, 35, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("co->ctx.frees = __arg0;\n"));
}

label35:
{
Obj _3515880_37 = __arg1;
PUSH_CONT_0(co, 36, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n"));
}

label36:
{
Obj _3515881_37 = __arg1;
PUSH_CONT_0(co, 37, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n"));
}

label37:
{
Obj _3515882_37 = __arg1;
PUSH_CONT_0(co, 38, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("if (ps.func != "));
}

label38:
{
Obj _3515883_37 = __arg1;
Obj _3515884_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515885_37 = PRIM_CAR(closureRef(co, 3));
PUSH_CONT_0(co, 39, clofun5);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 4), _3515884_37, _3515885_37);
}

label39:
{
Obj _3515886_37 = __arg1;
PUSH_CONT_0(co, 40, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(") { co->ctx.pc = ps; goto fail; };\n"));
}

label40:
{
Obj _3515887_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("goto *jumpTable[ps.label];\n"));
}

label41:
{
Obj _3515866_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 4), nargs);
}

label42:
{
Obj _3515867_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 43, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("("));
}

label43:
{
Obj _3515868_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515869_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515870_37 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 44, clofun5, 2, f, args);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 4), _3515869_37, _3515870_37);
}

label44:
{
Obj _3515871_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(", "));
}

label45:
{
Obj _3515872_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515873_37 = makeCons(f, args);
PUSH_CONT_0(co, 46, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 1);
co->args[4] = closureRef(co, 4);
co->args[5] = _3515873_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3515874_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(");\n"));
}

label47:
{
Obj sym = __arg1;
Obj globals = __arg2;
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[57]), MAKE_NUMBER(0), sym, globals);
}

label48:
{
Obj idx = __arg1;
Obj sym = __arg2;
Obj globals = __arg3;
pushCont(co, 49, clofun5, 3, idx, globals, sym);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[108]), globals);
}

label49:
{
Obj _3515851_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3515851_37) {
JUMP_RETURN(clofun5, MAKE_NUMBER(-1));
} else {
Obj _3515852_37 = PRIM_CAR(globals);
Obj _3515853_37 = PRIM_EQ(sym, _3515852_37);
if (True == _3515853_37) {
JUMP_RETURN(clofun5, idx);
} else {
Obj _3515854_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3515855_37 = PRIM_CDR(globals);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[57]), _3515854_37, sym, _3515855_37);
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
Obj sym = __arg1;
Obj globals = __arg2;
pushCont(co, 1, clofun6, 2, sym, globals);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[58]), globals);
}

label1:
{
Obj _3515846_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = _3515846_37;
pushCont(co, 2, clofun6, 3, sym, val, globals);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[100]), sym, val);
}

label2:
{
Obj _3515847_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3515847_37) {
JUMP_RETURN(clofun6, Nil);
} else {
Obj _3515848_37 = makeCons(sym, val);
Obj _3515849_37 = primSet(co, globals, _3515848_37);
JUMP_RETURN(clofun6, _3515849_37);
}
}

label3:
{
Obj _3514778_37 = __arg1;
Obj _3514779_37 = __arg2;
Obj _3514780_37 = __arg3;
Obj _3514781_37 = co->args[4];
Obj _3514782_37 = co->args[5];
Obj _3515826_37 = PRIM_EQ(Nil, _3514782_37);
if (True == _3515826_37) {
JUMP_RETURN(clofun6, Nil);
} else {
Obj _3515827_37 = PRIM_ISCONS(_3514782_37);
if (True == _3515827_37) {
Obj _3515828_37 = PRIM_CAR(_3514782_37);
Obj x = _3515828_37;
Obj _3515829_37 = PRIM_CDR(_3514782_37);
Obj more = _3515829_37;
Obj _3515830_37 = PRIM_GT(_3514781_37, MAKE_NUMBER(3));
Obj _3515831_37 = primNot(_3515830_37);
if (True == _3515831_37) {
pushCont(co, 10, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString("__arg"));
} else {
pushCont(co, 4, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString("co->args["));
}
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label4:
{
Obj _3515838_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 5, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[60]), _3514780_37, _3514781_37);
}

label5:
{
Obj _3515839_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 6, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString("]"));
}

label6:
{
Obj _3515840_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 7, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString(" = "));
}

label7:
{
Obj _3515841_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 8, clofun6, 5, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3514778_37;
__arg2 = _3514779_37;
__arg3 = Nil;
co->args[4] = _3514780_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3515842_37 = __arg1;
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 9, clofun6, 5, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString(";\n"));
}

label9:
{
Obj _3515843_37 = __arg1;
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3515844_37 = PRIM_ADD(_3514781_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3514778_37;
__arg2 = _3514779_37;
__arg3 = _3514780_37;
co->args[4] = _3515844_37;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3515832_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 11, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[60]), _3514780_37, _3514781_37);
}

label11:
{
Obj _3515833_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 12, clofun6, 6, x, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString(" = "));
}

label12:
{
Obj _3515834_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 13, clofun6, 5, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3514778_37;
__arg2 = _3514779_37;
__arg3 = Nil;
co->args[4] = _3514780_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3515835_37 = __arg1;
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 14, clofun6, 5, _3514781_37, _3514778_37, _3514779_37, _3514780_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3514780_37, makeCString(";\n"));
}

label14:
{
Obj _3515836_37 = __arg1;
Obj _3514781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514778_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514779_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514780_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3515837_37 = PRIM_ADD(_3514781_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3514778_37;
__arg2 = _3514779_37;
__arg3 = _3514780_37;
co->args[4] = _3515837_37;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _3515819_37 = primGenSym();
Obj tmp = _3515819_37;
pushCont(co, 16, clofun6, 2, x, tmp);
JUMP_WITH_ARGS_2(clofun6, k, tmp);
}

label16:
{
Obj _3515820_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515821_37 = makeCons(_3515820_37, Nil);
Obj _3515822_37 = makeCons(x, _3515821_37);
Obj _3515823_37 = makeCons(tmp, _3515822_37);
Obj _3515824_37 = makeCons(__symbolTable[91], _3515823_37);
JUMP_RETURN(clofun6, _3515824_37);
}

label17:
{
Obj v = __arg1;
Obj val = __arg2;
pushCont(co, 18, clofun6, 2, val, v);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), v, MAKE_NUMBER(0));
}

label18:
{
Obj _3515811_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = _3515811_37;
pushCont(co, 19, clofun6, 3, val, idx, v);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), v, MAKE_NUMBER(1));
}

label19:
{
Obj _3515812_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = _3515812_37;
Obj _3515813_37 = makeCons(val, Nil);
Obj _3515814_37 = makeCons(idx, _3515813_37);
Obj _3515815_37 = makeCons(_3515814_37, cur);
Obj cur1 = _3515815_37;
Obj _3515816_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 20, clofun6, 2, v, cur1);
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[63]), v, MAKE_NUMBER(0), _3515816_37);
}

label20:
{
Obj _3515817_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[63]), v, MAKE_NUMBER(1), cur1);
}

label21:
{
Obj _3514773_37 = __arg1;
Obj _3514774_37 = __arg2;
Obj _3514775_37 = makeNative(28, clofun6, 0, 2, _3514773_37, _3514774_37);
Obj _3515752_37 = PRIM_ISCONS(_3514774_37);
if (True == _3515752_37) {
Obj _3515753_37 = PRIM_CAR(_3514774_37);
Obj clo_45or_45cont = _3515753_37;
Obj _3515754_37 = PRIM_CDR(_3514774_37);
Obj _3515755_37 = PRIM_ISCONS(_3515754_37);
if (True == _3515755_37) {
Obj _3515756_37 = PRIM_CDR(_3514774_37);
Obj _3515757_37 = PRIM_CAR(_3515756_37);
Obj _3515758_37 = PRIM_ISCONS(_3515757_37);
if (True == _3515758_37) {
Obj _3515759_37 = PRIM_CDR(_3514774_37);
Obj _3515760_37 = PRIM_CAR(_3515759_37);
Obj _3515761_37 = PRIM_CAR(_3515760_37);
Obj _3515762_37 = PRIM_EQ(__symbolTable[94], _3515761_37);
if (True == _3515762_37) {
Obj _3515763_37 = PRIM_CDR(_3514774_37);
Obj _3515764_37 = PRIM_CAR(_3515763_37);
Obj _3515765_37 = PRIM_CDR(_3515764_37);
Obj _3515766_37 = PRIM_ISCONS(_3515765_37);
if (True == _3515766_37) {
Obj _3515767_37 = PRIM_CDR(_3514774_37);
Obj _3515768_37 = PRIM_CAR(_3515767_37);
Obj _3515769_37 = PRIM_CDR(_3515768_37);
Obj _3515770_37 = PRIM_CAR(_3515769_37);
Obj params = _3515770_37;
Obj _3515771_37 = PRIM_CDR(_3514774_37);
Obj _3515772_37 = PRIM_CAR(_3515771_37);
Obj _3515773_37 = PRIM_CDR(_3515772_37);
Obj _3515774_37 = PRIM_CDR(_3515773_37);
Obj _3515775_37 = PRIM_ISCONS(_3515774_37);
if (True == _3515775_37) {
Obj _3515776_37 = PRIM_CDR(_3514774_37);
Obj _3515777_37 = PRIM_CAR(_3515776_37);
Obj _3515778_37 = PRIM_CDR(_3515777_37);
Obj _3515779_37 = PRIM_CDR(_3515778_37);
Obj _3515780_37 = PRIM_CAR(_3515779_37);
Obj body = _3515780_37;
Obj _3515781_37 = PRIM_CDR(_3514774_37);
Obj _3515782_37 = PRIM_CAR(_3515781_37);
Obj _3515783_37 = PRIM_CDR(_3515782_37);
Obj _3515784_37 = PRIM_CDR(_3515783_37);
Obj _3515785_37 = PRIM_CDR(_3515784_37);
Obj _3515786_37 = PRIM_EQ(Nil, _3515785_37);
if (True == _3515786_37) {
Obj _3515787_37 = PRIM_CDR(_3514774_37);
Obj _3515788_37 = PRIM_CDR(_3515787_37);
Obj fvs = _3515788_37;
Obj _3514863_37 = makeNative(22, clofun6, 1, 6, body, _3514773_37, params, clo_45or_45cont, fvs, _3514775_37);
Obj _3515808_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[77]);
if (True == _3515808_37) {
JUMP_WITH_ARGS_2(clofun6, _3514863_37, True);
} else {
Obj _3515809_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[67]);
if (True == _3515809_37) {
JUMP_WITH_ARGS_2(clofun6, _3514863_37, True);
} else {
JUMP_WITH_ARGS_2(clofun6, _3514863_37, False);
}
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514775_37);
}
}

label22:
{
Obj _3514864_37 = __arg1;
if (True == _3514864_37) {
PUSH_CONT_0(co, 23, clofun6);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[66]), closureRef(co, 1), closureRef(co, 0));
} else {
JUMP_WITH_ARGS_1(clofun6, closureRef(co, 5));
}
}

label23:
{
Obj _3515789_37 = __arg1;
Obj body1 = _3515789_37;
pushCont(co, 24, clofun6, 1, body1);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), closureRef(co, 1), MAKE_NUMBER(0));
}

label24:
{
Obj _3515790_37 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = _3515790_37;
Obj _3515791_37 = PRIM_EQ(closureRef(co, 3), __symbolTable[77]);
if (True == _3515791_37) {
Obj _3515792_37 = makeCons(body1, Nil);
Obj _3515793_37 = makeCons(Nil, _3515792_37);
Obj _3515794_37 = makeCons(closureRef(co, 2), _3515793_37);
Obj _3515795_37 = makeCons(__symbolTable[94], _3515794_37);
pushCont(co, 26, clofun6, 1, cur);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[64]), closureRef(co, 1), _3515795_37);
} else {
Obj _3515801_37 = makeCons(body1, Nil);
Obj _3515802_37 = makeCons(closureRef(co, 4), _3515801_37);
Obj _3515803_37 = makeCons(closureRef(co, 2), _3515802_37);
Obj _3515804_37 = makeCons(__symbolTable[94], _3515803_37);
pushCont(co, 25, clofun6, 1, cur);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[64]), closureRef(co, 1), _3515804_37);
}
}

label25:
{
Obj _3515805_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515806_37 = makeCons(cur, closureRef(co, 4));
Obj _3515807_37 = makeCons(closureRef(co, 3), _3515806_37);
JUMP_RETURN(clofun6, _3515807_37);
}

label26:
{
Obj _3515796_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 27, clofun6, 1, cur);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[96]), closureRef(co, 2));
}

label27:
{
Obj _3515797_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515798_37 = makeCons(_3515797_37, closureRef(co, 4));
Obj _3515799_37 = makeCons(cur, _3515798_37);
Obj _3515800_37 = makeCons(closureRef(co, 3), _3515799_37);
JUMP_RETURN(clofun6, _3515800_37);
}

label28:
{
Obj _3515751_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3515751_37) {
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), makeNative(29, clofun6, 1, 1, closureRef(co, 0)), closureRef(co, 1));
} else {
JUMP_RETURN(clofun6, closureRef(co, 1));
}
}

label29:
{
Obj e = __arg1;
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[66]), closureRef(co, 0), e);
}

label30:
{
Obj _3514765_37 = __arg1;
Obj _3514766_37 = __arg2;
pushCont(co, 31, clofun6, 2, _3514766_37, _3514765_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[84]), _3514766_37);
}

label31:
{
Obj _3515672_37 = __arg1;
Obj _3514766_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514765_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515672_37) {
JUMP_RETURN(clofun6, _3514766_37);
} else {
Obj _3515673_37 = primIsSymbol(_3514766_37);
if (True == _3515673_37) {
JUMP_RETURN(clofun6, _3514766_37);
} else {
Obj _3514769_37 = makeNative(33, clofun6, 0, 2, _3514766_37, _3514765_37);
Obj _3515729_37 = PRIM_ISCONS(_3514766_37);
if (True == _3515729_37) {
Obj _3515730_37 = PRIM_CAR(_3514766_37);
Obj _3515731_37 = PRIM_EQ(__symbolTable[94], _3515730_37);
if (True == _3515731_37) {
Obj _3515732_37 = PRIM_CDR(_3514766_37);
Obj _3515733_37 = PRIM_ISCONS(_3515732_37);
if (True == _3515733_37) {
Obj _3515734_37 = PRIM_CDR(_3514766_37);
Obj _3515735_37 = PRIM_CAR(_3515734_37);
Obj args = _3515735_37;
Obj _3515736_37 = PRIM_CDR(_3514766_37);
Obj _3515737_37 = PRIM_CDR(_3515736_37);
Obj _3515738_37 = PRIM_ISCONS(_3515737_37);
if (True == _3515738_37) {
Obj _3515739_37 = PRIM_CDR(_3514766_37);
Obj _3515740_37 = PRIM_CDR(_3515739_37);
Obj _3515741_37 = PRIM_CAR(_3515740_37);
Obj body = _3515741_37;
Obj _3515742_37 = PRIM_CDR(_3514766_37);
Obj _3515743_37 = PRIM_CDR(_3515742_37);
Obj _3515744_37 = PRIM_CDR(_3515743_37);
Obj _3515745_37 = PRIM_EQ(Nil, _3515744_37);
if (True == _3515745_37) {
pushCont(co, 32, clofun6, 1, args);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), _3514765_37, body);
} else {
JUMP_WITH_ARGS_1(clofun6, _3514769_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514769_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514769_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514769_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514769_37);
}
}
}
}

label32:
{
Obj _3515746_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515747_37 = makeCons(_3515746_37, Nil);
Obj _3515748_37 = makeCons(args, _3515747_37);
Obj _3515749_37 = makeCons(__symbolTable[94], _3515748_37);
JUMP_RETURN(clofun6, _3515749_37);
}

label33:
{
Obj _3514770_37 = makeNative(39, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515702_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515702_37) {
Obj _3515703_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515704_37 = PRIM_EQ(__symbolTable[81], _3515703_37);
if (True == _3515704_37) {
Obj _3515705_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515706_37 = PRIM_ISCONS(_3515705_37);
if (True == _3515706_37) {
Obj _3515707_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515708_37 = PRIM_CAR(_3515707_37);
Obj val = _3515708_37;
Obj _3515709_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515710_37 = PRIM_CDR(_3515709_37);
Obj _3515711_37 = PRIM_ISCONS(_3515710_37);
if (True == _3515711_37) {
Obj _3515712_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515713_37 = PRIM_CDR(_3515712_37);
Obj _3515714_37 = PRIM_CAR(_3515713_37);
Obj body = _3515714_37;
Obj _3515715_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515716_37 = PRIM_CDR(_3515715_37);
Obj _3515717_37 = PRIM_CDR(_3515716_37);
Obj _3515718_37 = PRIM_EQ(Nil, _3515717_37);
if (True == _3515718_37) {
pushCont(co, 34, clofun6, 2, body, val);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun6, _3514770_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514770_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514770_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514770_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514770_37);
}
}

label34:
{
Obj _3515719_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 35, clofun6, 2, body, val);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[85]), _3515719_37, val);
}

label35:
{
Obj _3515720_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = _3515720_37;
pushCont(co, 36, clofun6, 3, fvs1, body, val);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
}

label36:
{
Obj _3515721_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 37, clofun6, 3, fvs1, body, val);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), _3515721_37, fvs1);
}

label37:
{
Obj _3515722_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = _3515722_37;
pushCont(co, 38, clofun6, 2, val, fvs2);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), fvs1, body);
}

label38:
{
Obj _3515723_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515724_37 = makeCons(_3515723_37, Nil);
Obj _3515725_37 = makeCons(val, _3515724_37);
Obj _3515726_37 = makeCons(__symbolTable[94], _3515725_37);
Obj _3515727_37 = makeCons(_3515726_37, fvs2);
Obj _3515728_37 = makeCons(__symbolTable[67], _3515727_37);
JUMP_RETURN(clofun6, _3515728_37);
}

label39:
{
Obj _3514771_37 = makeNative(43, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515679_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515679_37) {
Obj _3515680_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515681_37 = PRIM_EQ(__symbolTable[79], _3515680_37);
if (True == _3515681_37) {
Obj _3515682_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515683_37 = PRIM_ISCONS(_3515682_37);
if (True == _3515683_37) {
Obj _3515684_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515685_37 = PRIM_CAR(_3515684_37);
Obj exp = _3515685_37;
Obj _3515686_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515687_37 = PRIM_CDR(_3515686_37);
Obj _3515688_37 = PRIM_ISCONS(_3515687_37);
if (True == _3515688_37) {
Obj _3515689_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515690_37 = PRIM_CDR(_3515689_37);
Obj _3515691_37 = PRIM_CAR(_3515690_37);
Obj cont = _3515691_37;
Obj _3515692_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515693_37 = PRIM_CDR(_3515692_37);
Obj _3515694_37 = PRIM_CDR(_3515693_37);
Obj _3515695_37 = PRIM_EQ(Nil, _3515694_37);
if (True == _3515695_37) {
pushCont(co, 40, clofun6, 2, exp, cont);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun6, _3514771_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514771_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514771_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514771_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3514771_37);
}
}

label40:
{
Obj _3515696_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun6, 1, cont);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), _3515696_37, exp);
}

label41:
{
Obj _3515697_37 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 42, clofun6, 1, _3515697_37);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1), cont);
}

label42:
{
Obj _3515698_37 = __arg1;
Obj _3515697_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515699_37 = makeCons(_3515698_37, Nil);
Obj _3515700_37 = makeCons(_3515697_37, _3515699_37);
Obj _3515701_37 = makeCons(__symbolTable[79], _3515700_37);
JUMP_RETURN(clofun6, _3515701_37);
}

label43:
{
Obj _3515674_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515674_37) {
Obj _3515675_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3515675_37;
Obj _3515676_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515676_37;
pushCont(co, 44, clofun6, 2, f, args);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label44:
{
Obj _3515677_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515678_37 = makeCons(f, args);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), _3515677_37, _3515678_37);
}

label45:
{
Obj _3514760_37 = __arg1;
Obj _3514761_37 = __arg2;
Obj _3514762_37 = __arg3;
Obj _3515649_37 = PRIM_EQ(Nil, _3514760_37);
if (True == _3515649_37) {
pushCont(co, 47, clofun6, 1, _3514762_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[72]), _3514761_37);
} else {
Obj _3515667_37 = PRIM_ISCONS(_3514760_37);
if (True == _3515667_37) {
Obj _3515668_37 = PRIM_CAR(_3514760_37);
Obj hd = _3515668_37;
Obj _3515669_37 = PRIM_CDR(_3514760_37);
Obj tl = _3515669_37;
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[74]), hd, makeNative(46, clofun6, 1, 3, tl, _3514761_37, _3514762_37));
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label46:
{
Obj hd1 = __arg1;
Obj _3515670_37 = makeCons(hd1, closureRef(co, 1));
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[73]), closureRef(co, 0), _3515670_37, closureRef(co, 2));
}

label47:
{
Obj _3515650_37 = __arg1;
Obj _3514762_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = _3515650_37;
Obj _3514861_37 = makeNative(0, clofun7, 1, 2, exp, _3514762_37);
Obj _3515663_37 = PRIM_CAR(exp);
pushCont(co, 48, clofun6, 2, exp, _3514861_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[70]), _3515663_37);
}

label48:
{
Obj _3515664_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514861_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515664_37) {
pushCont(co, 49, clofun6, 1, _3514861_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[69]), exp);
} else {
JUMP_WITH_ARGS_2(clofun6, _3514861_37, False);
}
}

label49:
{
Obj _3515665_37 = __arg1;
Obj _3514861_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515666_37 = PRIM_EQ(_3515665_37, __symbolTable[95]);
if (True == _3515666_37) {
JUMP_WITH_ARGS_2(clofun6, _3514861_37, True);
} else {
JUMP_WITH_ARGS_2(clofun6, _3514861_37, False);
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
Obj _3514862_37 = __arg1;
if (True == _3514862_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[71]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj _3515651_37 = PRIM_EQ(closureRef(co, 1), globalRef(__symbolTable[75]));
if (True == _3515651_37) {
Obj _3515652_37 = makeCons(closureRef(co, 0), Nil);
Obj _3515653_37 = makeCons(__symbolTable[80], _3515652_37);
JUMP_RETURN(clofun7, _3515653_37);
} else {
Obj _3515654_37 = primGenSym();
Obj val = _3515654_37;
Obj _3515655_37 = makeCons(val, Nil);
pushCont(co, 1, clofun7, 1, _3515655_37);
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), val);
}
}
}

label1:
{
Obj _3515656_37 = __arg1;
Obj _3515655_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515657_37 = makeCons(_3515656_37, Nil);
Obj _3515658_37 = makeCons(_3515655_37, _3515657_37);
Obj _3515659_37 = makeCons(__symbolTable[81], _3515658_37);
Obj _3515660_37 = makeCons(_3515659_37, Nil);
Obj _3515661_37 = makeCons(closureRef(co, 0), _3515660_37);
Obj _3515662_37 = makeCons(__symbolTable[79], _3515661_37);
JUMP_RETURN(clofun7, _3515662_37);
}

label2:
{
Obj _3514751_37 = __arg1;
Obj _3514752_37 = __arg2;
Obj _3514859_37 = makeNative(4, clofun7, 1, 2, _3514751_37, _3514752_37);
Obj _3515646_37 = primIsSymbol(_3514751_37);
if (True == _3515646_37) {
JUMP_WITH_ARGS_2(clofun7, _3514859_37, True);
} else {
pushCont(co, 3, clofun7, 1, _3514859_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), _3514751_37);
}
}

label3:
{
Obj _3515647_37 = __arg1;
Obj _3514859_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515647_37) {
JUMP_WITH_ARGS_2(clofun7, _3514859_37, True);
} else {
JUMP_WITH_ARGS_2(clofun7, _3514859_37, False);
}
}

label4:
{
Obj _3514860_37 = __arg1;
if (True == _3514860_37) {
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), closureRef(co, 0));
} else {
PUSH_CONT_0(co, 5, clofun7);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), closureRef(co, 0));
}
}

label5:
{
Obj _3515512_37 = __arg1;
if (True == _3515512_37) {
JUMP_RETURN(clofun7, closureRef(co, 0));
} else {
Obj _3514755_37 = makeNative(9, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515614_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515614_37) {
Obj _3515615_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515616_37 = PRIM_EQ(__symbolTable[92], _3515615_37);
if (True == _3515616_37) {
Obj _3515617_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515618_37 = PRIM_ISCONS(_3515617_37);
if (True == _3515618_37) {
Obj _3515619_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515620_37 = PRIM_CAR(_3515619_37);
Obj a = _3515620_37;
Obj _3515621_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515622_37 = PRIM_CDR(_3515621_37);
Obj _3515623_37 = PRIM_ISCONS(_3515622_37);
if (True == _3515623_37) {
Obj _3515624_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515625_37 = PRIM_CDR(_3515624_37);
Obj _3515626_37 = PRIM_CAR(_3515625_37);
Obj b = _3515626_37;
Obj _3515627_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515628_37 = PRIM_CDR(_3515627_37);
Obj _3515629_37 = PRIM_CDR(_3515628_37);
Obj _3515630_37 = PRIM_ISCONS(_3515629_37);
if (True == _3515630_37) {
Obj _3515631_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515632_37 = PRIM_CDR(_3515631_37);
Obj _3515633_37 = PRIM_CDR(_3515632_37);
Obj _3515634_37 = PRIM_CAR(_3515633_37);
Obj c = _3515634_37;
Obj _3515635_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515636_37 = PRIM_CDR(_3515635_37);
Obj _3515637_37 = PRIM_CDR(_3515636_37);
Obj _3515638_37 = PRIM_CDR(_3515637_37);
Obj _3515639_37 = PRIM_EQ(Nil, _3515638_37);
if (True == _3515639_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), a, makeNative(6, clofun7, 1, 3, b, c, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, _3514755_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514755_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514755_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514755_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514755_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514755_37);
}
}
}

label6:
{
Obj ra = __arg1;
pushCont(co, 7, clofun7, 1, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 2));
}

label7:
{
Obj _3515640_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun7, 2, _3515640_37, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 1), closureRef(co, 2));
}

label8:
{
Obj _3515641_37 = __arg1;
Obj _3515640_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515642_37 = makeCons(_3515641_37, Nil);
Obj _3515643_37 = makeCons(_3515640_37, _3515642_37);
Obj _3515644_37 = makeCons(ra, _3515643_37);
Obj _3515645_37 = makeCons(__symbolTable[92], _3515644_37);
JUMP_RETURN(clofun7, _3515645_37);
}

label9:
{
Obj _3514756_37 = makeNative(12, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515592_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515592_37) {
Obj _3515593_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515594_37 = PRIM_EQ(__symbolTable[90], _3515593_37);
if (True == _3515594_37) {
Obj _3515595_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515596_37 = PRIM_ISCONS(_3515595_37);
if (True == _3515596_37) {
Obj _3515597_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515598_37 = PRIM_CAR(_3515597_37);
Obj a = _3515598_37;
Obj _3515599_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515600_37 = PRIM_CDR(_3515599_37);
Obj _3515601_37 = PRIM_ISCONS(_3515600_37);
if (True == _3515601_37) {
Obj _3515602_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515603_37 = PRIM_CDR(_3515602_37);
Obj _3515604_37 = PRIM_CAR(_3515603_37);
Obj b = _3515604_37;
Obj _3515605_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515606_37 = PRIM_CDR(_3515605_37);
Obj _3515607_37 = PRIM_CDR(_3515606_37);
Obj _3515608_37 = PRIM_EQ(Nil, _3515607_37);
if (True == _3515608_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), a, makeNative(10, clofun7, 1, 2, b, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, _3514756_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514756_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514756_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514756_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514756_37);
}
}

label10:
{
Obj ra = __arg1;
Obj _3515609_37 = primIsSymbol(ra);
if (True == _3515609_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 1));
} else {
pushCont(co, 11, clofun7, 1, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 1));
}
}

label11:
{
Obj _3515610_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515611_37 = makeCons(_3515610_37, Nil);
Obj _3515612_37 = makeCons(ra, _3515611_37);
Obj _3515613_37 = makeCons(__symbolTable[90], _3515612_37);
JUMP_RETURN(clofun7, _3515613_37);
}

label12:
{
Obj _3514757_37 = makeNative(15, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515561_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515561_37) {
Obj _3515562_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515563_37 = PRIM_EQ(__symbolTable[91], _3515562_37);
if (True == _3515563_37) {
Obj _3515564_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515565_37 = PRIM_ISCONS(_3515564_37);
if (True == _3515565_37) {
Obj _3515566_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515567_37 = PRIM_CAR(_3515566_37);
Obj a = _3515567_37;
Obj _3515568_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515569_37 = PRIM_CDR(_3515568_37);
Obj _3515570_37 = PRIM_ISCONS(_3515569_37);
if (True == _3515570_37) {
Obj _3515571_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515572_37 = PRIM_CDR(_3515571_37);
Obj _3515573_37 = PRIM_CAR(_3515572_37);
Obj b = _3515573_37;
Obj _3515574_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515575_37 = PRIM_CDR(_3515574_37);
Obj _3515576_37 = PRIM_CDR(_3515575_37);
Obj _3515577_37 = PRIM_ISCONS(_3515576_37);
if (True == _3515577_37) {
Obj _3515578_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515579_37 = PRIM_CDR(_3515578_37);
Obj _3515580_37 = PRIM_CDR(_3515579_37);
Obj _3515581_37 = PRIM_CAR(_3515580_37);
Obj c = _3515581_37;
Obj _3515582_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515583_37 = PRIM_CDR(_3515582_37);
Obj _3515584_37 = PRIM_CDR(_3515583_37);
Obj _3515585_37 = PRIM_CDR(_3515584_37);
Obj _3515586_37 = PRIM_EQ(Nil, _3515585_37);
if (True == _3515586_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), b, makeNative(13, clofun7, 1, 3, a, c, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, _3514757_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514757_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514757_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514757_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514757_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514757_37);
}
}

label13:
{
Obj rb = __arg1;
pushCont(co, 14, clofun7, 1, rb);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 1), closureRef(co, 2));
}

label14:
{
Obj _3515587_37 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515588_37 = makeCons(_3515587_37, Nil);
Obj _3515589_37 = makeCons(rb, _3515588_37);
Obj _3515590_37 = makeCons(closureRef(co, 0), _3515589_37);
Obj _3515591_37 = makeCons(__symbolTable[91], _3515590_37);
JUMP_RETURN(clofun7, _3515591_37);
}

label15:
{
Obj _3514758_37 = makeNative(17, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515517_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515517_37) {
Obj _3515518_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515519_37 = PRIM_EQ(__symbolTable[77], _3515518_37);
if (True == _3515519_37) {
Obj _3515520_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515521_37 = PRIM_ISCONS(_3515520_37);
if (True == _3515521_37) {
Obj _3515522_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515523_37 = PRIM_CAR(_3515522_37);
Obj _3515524_37 = PRIM_ISCONS(_3515523_37);
if (True == _3515524_37) {
Obj _3515525_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515526_37 = PRIM_CAR(_3515525_37);
Obj _3515527_37 = PRIM_CAR(_3515526_37);
Obj _3515528_37 = PRIM_EQ(__symbolTable[94], _3515527_37);
if (True == _3515528_37) {
Obj _3515529_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515530_37 = PRIM_CAR(_3515529_37);
Obj _3515531_37 = PRIM_CDR(_3515530_37);
Obj _3515532_37 = PRIM_ISCONS(_3515531_37);
if (True == _3515532_37) {
Obj _3515533_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515534_37 = PRIM_CAR(_3515533_37);
Obj _3515535_37 = PRIM_CDR(_3515534_37);
Obj _3515536_37 = PRIM_CAR(_3515535_37);
Obj args = _3515536_37;
Obj _3515537_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515538_37 = PRIM_CAR(_3515537_37);
Obj _3515539_37 = PRIM_CDR(_3515538_37);
Obj _3515540_37 = PRIM_CDR(_3515539_37);
Obj _3515541_37 = PRIM_ISCONS(_3515540_37);
if (True == _3515541_37) {
Obj _3515542_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515543_37 = PRIM_CAR(_3515542_37);
Obj _3515544_37 = PRIM_CDR(_3515543_37);
Obj _3515545_37 = PRIM_CDR(_3515544_37);
Obj _3515546_37 = PRIM_CAR(_3515545_37);
Obj body = _3515546_37;
Obj _3515547_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515548_37 = PRIM_CAR(_3515547_37);
Obj _3515549_37 = PRIM_CDR(_3515548_37);
Obj _3515550_37 = PRIM_CDR(_3515549_37);
Obj _3515551_37 = PRIM_CDR(_3515550_37);
Obj _3515552_37 = PRIM_EQ(Nil, _3515551_37);
if (True == _3515552_37) {
Obj _3515553_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515554_37 = PRIM_CDR(_3515553_37);
Obj frees = _3515554_37;
pushCont(co, 16, clofun7, 2, args, frees);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), body, globalRef(__symbolTable[75]));
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514758_37);
}
}

label16:
{
Obj _3515555_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515556_37 = makeCons(_3515555_37, Nil);
Obj _3515557_37 = makeCons(args, _3515556_37);
Obj _3515558_37 = makeCons(__symbolTable[94], _3515557_37);
Obj _3515559_37 = makeCons(_3515558_37, frees);
Obj _3515560_37 = makeCons(__symbolTable[77], _3515559_37);
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), _3515560_37);
}

label17:
{
Obj _3515513_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515513_37) {
Obj _3515514_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3515514_37;
Obj _3515515_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515515_37;
Obj _3515516_37 = makeCons(f, args);
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[73]), _3515516_37, Nil, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label18:
{
Obj x = __arg1;
Obj _3515509_37 = makeCons(x, Nil);
Obj _3515510_37 = makeCons(__symbolTable[78], _3515509_37);
JUMP_RETURN(clofun7, _3515510_37);
}

label19:
{
Obj _3514744_37 = __arg1;
Obj _3514745_37 = __arg2;
pushCont(co, 20, clofun7, 2, _3514745_37, _3514744_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), _3514745_37);
}

label20:
{
Obj _3515436_37 = __arg1;
Obj _3514745_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514744_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515436_37) {
JUMP_RETURN(clofun7, _3514745_37);
} else {
Obj _3515437_37 = primIsSymbol(_3514745_37);
if (True == _3515437_37) {
pushCont(co, 30, clofun7, 1, _3514745_37);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[129]), _3514745_37, _3514744_37);
} else {
Obj _3514748_37 = makeNative(25, clofun7, 0, 2, _3514745_37, _3514744_37);
Obj _3515479_37 = PRIM_ISCONS(_3514745_37);
if (True == _3515479_37) {
Obj _3515480_37 = PRIM_CAR(_3514745_37);
Obj _3515481_37 = PRIM_EQ(__symbolTable[94], _3515480_37);
if (True == _3515481_37) {
Obj _3515482_37 = PRIM_CDR(_3514745_37);
Obj _3515483_37 = PRIM_ISCONS(_3515482_37);
if (True == _3515483_37) {
Obj _3515484_37 = PRIM_CDR(_3514745_37);
Obj _3515485_37 = PRIM_CAR(_3515484_37);
Obj args = _3515485_37;
Obj _3515486_37 = PRIM_CDR(_3514745_37);
Obj _3515487_37 = PRIM_CDR(_3515486_37);
Obj _3515488_37 = PRIM_ISCONS(_3515487_37);
if (True == _3515488_37) {
Obj _3515489_37 = PRIM_CDR(_3514745_37);
Obj _3515490_37 = PRIM_CDR(_3515489_37);
Obj _3515491_37 = PRIM_CAR(_3515490_37);
Obj body = _3515491_37;
Obj _3515492_37 = PRIM_CDR(_3514745_37);
Obj _3515493_37 = PRIM_CDR(_3515492_37);
Obj _3515494_37 = PRIM_CDR(_3515493_37);
Obj _3515495_37 = PRIM_EQ(Nil, _3515494_37);
if (True == _3515495_37) {
Obj _3515496_37 = makeCons(body, Nil);
Obj _3515497_37 = makeCons(args, _3515496_37);
Obj _3515498_37 = makeCons(__symbolTable[94], _3515497_37);
pushCont(co, 21, clofun7, 3, body, args, _3514744_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), _3515498_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514748_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514748_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514748_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514748_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514748_37);
}
}
}
}

label21:
{
Obj _3515499_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514744_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = _3515499_37;
pushCont(co, 22, clofun7, 3, args, _3514744_37, fvs1);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), fvs1, body);
}

label22:
{
Obj _3515500_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514744_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515501_37 = makeCons(_3515500_37, Nil);
Obj _3515502_37 = makeCons(args, _3515501_37);
Obj _3515503_37 = makeCons(__symbolTable[94], _3515502_37);
pushCont(co, 23, clofun7, 2, fvs1, _3515503_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[76]), _3514744_37);
}

label23:
{
Obj _3515504_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515503_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun7, 1, _3515503_37);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), _3515504_37, fvs1);
}

label24:
{
Obj _3515505_37 = __arg1;
Obj _3515503_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515506_37 = makeCons(_3515503_37, _3515505_37);
Obj _3515507_37 = makeCons(__symbolTable[77], _3515506_37);
JUMP_RETURN(clofun7, _3515507_37);
}

label25:
{
Obj _3514749_37 = makeNative(28, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515447_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515447_37) {
Obj _3515448_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515449_37 = PRIM_EQ(__symbolTable[91], _3515448_37);
if (True == _3515449_37) {
Obj _3515450_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515451_37 = PRIM_ISCONS(_3515450_37);
if (True == _3515451_37) {
Obj _3515452_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515453_37 = PRIM_CAR(_3515452_37);
Obj a = _3515453_37;
Obj _3515454_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515455_37 = PRIM_CDR(_3515454_37);
Obj _3515456_37 = PRIM_ISCONS(_3515455_37);
if (True == _3515456_37) {
Obj _3515457_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515458_37 = PRIM_CDR(_3515457_37);
Obj _3515459_37 = PRIM_CAR(_3515458_37);
Obj b = _3515459_37;
Obj _3515460_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515461_37 = PRIM_CDR(_3515460_37);
Obj _3515462_37 = PRIM_CDR(_3515461_37);
Obj _3515463_37 = PRIM_ISCONS(_3515462_37);
if (True == _3515463_37) {
Obj _3515464_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515465_37 = PRIM_CDR(_3515464_37);
Obj _3515466_37 = PRIM_CDR(_3515465_37);
Obj _3515467_37 = PRIM_CAR(_3515466_37);
Obj c = _3515467_37;
Obj _3515468_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515469_37 = PRIM_CDR(_3515468_37);
Obj _3515470_37 = PRIM_CDR(_3515469_37);
Obj _3515471_37 = PRIM_CDR(_3515470_37);
Obj _3515472_37 = PRIM_EQ(Nil, _3515471_37);
if (True == _3515472_37) {
pushCont(co, 26, clofun7, 2, c, a);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1), b);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514749_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514749_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514749_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514749_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514749_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514749_37);
}
}

label26:
{
Obj _3515473_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun7, 2, _3515473_37, a);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1), c);
}

label27:
{
Obj _3515474_37 = __arg1;
Obj _3515473_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515475_37 = makeCons(_3515474_37, Nil);
Obj _3515476_37 = makeCons(_3515473_37, _3515475_37);
Obj _3515477_37 = makeCons(a, _3515476_37);
Obj _3515478_37 = makeCons(__symbolTable[91], _3515477_37);
JUMP_RETURN(clofun7, _3515478_37);
}

label28:
{
Obj _3515442_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515442_37) {
Obj _3515443_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3515443_37;
Obj _3515444_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515444_37;
pushCont(co, 29, clofun7, 2, f, args);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label29:
{
Obj _3515445_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515446_37 = makeCons(f, args);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), _3515445_37, _3515446_37);
}

label30:
{
Obj _3515438_37 = __arg1;
Obj _3514745_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = _3515438_37;
Obj _3515439_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3515439_37) {
JUMP_RETURN(clofun7, _3514745_37);
} else {
Obj _3515440_37 = makeCons(pos, Nil);
Obj _3515441_37 = makeCons(__symbolTable[83], _3515440_37);
JUMP_RETURN(clofun7, _3515441_37);
}
}

label31:
{
Obj _3514731_37 = __arg1;
pushCont(co, 32, clofun7, 1, _3514731_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), _3514731_37);
}

label32:
{
Obj _3515261_37 = __arg1;
Obj _3514731_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515261_37) {
JUMP_RETURN(clofun7, Nil);
} else {
Obj _3515262_37 = primIsSymbol(_3514731_37);
if (True == _3515262_37) {
Obj _3515263_37 = makeCons(_3514731_37, Nil);
JUMP_RETURN(clofun7, _3515263_37);
} else {
Obj _3514734_37 = makeNative(34, clofun7, 0, 1, _3514731_37);
Obj _3515417_37 = PRIM_ISCONS(_3514731_37);
if (True == _3515417_37) {
Obj _3515418_37 = PRIM_CAR(_3514731_37);
Obj _3515419_37 = PRIM_EQ(__symbolTable[94], _3515418_37);
if (True == _3515419_37) {
Obj _3515420_37 = PRIM_CDR(_3514731_37);
Obj _3515421_37 = PRIM_ISCONS(_3515420_37);
if (True == _3515421_37) {
Obj _3515422_37 = PRIM_CDR(_3514731_37);
Obj _3515423_37 = PRIM_CAR(_3515422_37);
Obj args = _3515423_37;
Obj _3515424_37 = PRIM_CDR(_3514731_37);
Obj _3515425_37 = PRIM_CDR(_3515424_37);
Obj _3515426_37 = PRIM_ISCONS(_3515425_37);
if (True == _3515426_37) {
Obj _3515427_37 = PRIM_CDR(_3514731_37);
Obj _3515428_37 = PRIM_CDR(_3515427_37);
Obj _3515429_37 = PRIM_CAR(_3515428_37);
Obj body = _3515429_37;
Obj _3515430_37 = PRIM_CDR(_3514731_37);
Obj _3515431_37 = PRIM_CDR(_3515430_37);
Obj _3515432_37 = PRIM_CDR(_3515431_37);
Obj _3515433_37 = PRIM_EQ(Nil, _3515432_37);
if (True == _3515433_37) {
pushCont(co, 33, clofun7, 1, args);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514734_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514734_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514734_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514734_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514734_37);
}
}
}
}

label33:
{
Obj _3515434_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), _3515434_37, args);
}

label34:
{
Obj _3514735_37 = makeNative(36, clofun7, 0, 1, closureRef(co, 0));
Obj _3515387_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515387_37) {
Obj _3515388_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515389_37 = PRIM_EQ(__symbolTable[92], _3515388_37);
if (True == _3515389_37) {
Obj _3515390_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515391_37 = PRIM_ISCONS(_3515390_37);
if (True == _3515391_37) {
Obj _3515392_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515393_37 = PRIM_CAR(_3515392_37);
Obj x = _3515393_37;
Obj _3515394_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515395_37 = PRIM_CDR(_3515394_37);
Obj _3515396_37 = PRIM_ISCONS(_3515395_37);
if (True == _3515396_37) {
Obj _3515397_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515398_37 = PRIM_CDR(_3515397_37);
Obj _3515399_37 = PRIM_CAR(_3515398_37);
Obj y = _3515399_37;
Obj _3515400_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515401_37 = PRIM_CDR(_3515400_37);
Obj _3515402_37 = PRIM_CDR(_3515401_37);
Obj _3515403_37 = PRIM_ISCONS(_3515402_37);
if (True == _3515403_37) {
Obj _3515404_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515405_37 = PRIM_CDR(_3515404_37);
Obj _3515406_37 = PRIM_CDR(_3515405_37);
Obj _3515407_37 = PRIM_CAR(_3515406_37);
Obj z = _3515407_37;
Obj _3515408_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515409_37 = PRIM_CDR(_3515408_37);
Obj _3515410_37 = PRIM_CDR(_3515409_37);
Obj _3515411_37 = PRIM_CDR(_3515410_37);
Obj _3515412_37 = PRIM_EQ(Nil, _3515411_37);
if (True == _3515412_37) {
Obj _3515413_37 = makeCons(z, Nil);
Obj _3515414_37 = makeCons(y, _3515413_37);
Obj _3515415_37 = makeCons(x, _3515414_37);
PUSH_CONT_0(co, 35, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3515415_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514735_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514735_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514735_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514735_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514735_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514735_37);
}
}

label35:
{
Obj _3515416_37 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3515416_37);
}

label36:
{
Obj _3514736_37 = makeNative(38, clofun7, 0, 1, closureRef(co, 0));
Obj _3515367_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515367_37) {
Obj _3515368_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515369_37 = PRIM_EQ(__symbolTable[90], _3515368_37);
if (True == _3515369_37) {
Obj _3515370_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515371_37 = PRIM_ISCONS(_3515370_37);
if (True == _3515371_37) {
Obj _3515372_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515373_37 = PRIM_CAR(_3515372_37);
Obj x = _3515373_37;
Obj _3515374_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515375_37 = PRIM_CDR(_3515374_37);
Obj _3515376_37 = PRIM_ISCONS(_3515375_37);
if (True == _3515376_37) {
Obj _3515377_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515378_37 = PRIM_CDR(_3515377_37);
Obj _3515379_37 = PRIM_CAR(_3515378_37);
Obj y = _3515379_37;
Obj _3515380_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515381_37 = PRIM_CDR(_3515380_37);
Obj _3515382_37 = PRIM_CDR(_3515381_37);
Obj _3515383_37 = PRIM_EQ(Nil, _3515382_37);
if (True == _3515383_37) {
Obj _3515384_37 = makeCons(y, Nil);
Obj _3515385_37 = makeCons(x, _3515384_37);
PUSH_CONT_0(co, 37, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3515385_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514736_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514736_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514736_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514736_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514736_37);
}
}

label37:
{
Obj _3515386_37 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3515386_37);
}

label38:
{
Obj _3514737_37 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj _3515337_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515337_37) {
Obj _3515338_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515339_37 = PRIM_EQ(__symbolTable[91], _3515338_37);
if (True == _3515339_37) {
Obj _3515340_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515341_37 = PRIM_ISCONS(_3515340_37);
if (True == _3515341_37) {
Obj _3515342_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515343_37 = PRIM_CAR(_3515342_37);
Obj a = _3515343_37;
Obj _3515344_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515345_37 = PRIM_CDR(_3515344_37);
Obj _3515346_37 = PRIM_ISCONS(_3515345_37);
if (True == _3515346_37) {
Obj _3515347_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515348_37 = PRIM_CDR(_3515347_37);
Obj _3515349_37 = PRIM_CAR(_3515348_37);
Obj b = _3515349_37;
Obj _3515350_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515351_37 = PRIM_CDR(_3515350_37);
Obj _3515352_37 = PRIM_CDR(_3515351_37);
Obj _3515353_37 = PRIM_ISCONS(_3515352_37);
if (True == _3515353_37) {
Obj _3515354_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515355_37 = PRIM_CDR(_3515354_37);
Obj _3515356_37 = PRIM_CDR(_3515355_37);
Obj _3515357_37 = PRIM_CAR(_3515356_37);
Obj c = _3515357_37;
Obj _3515358_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515359_37 = PRIM_CDR(_3515358_37);
Obj _3515360_37 = PRIM_CDR(_3515359_37);
Obj _3515361_37 = PRIM_CDR(_3515360_37);
Obj _3515362_37 = PRIM_EQ(Nil, _3515361_37);
if (True == _3515362_37) {
pushCont(co, 39, clofun7, 2, c, a);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), b);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514737_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514737_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514737_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514737_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514737_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514737_37);
}
}

label39:
{
Obj _3515363_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun7, 2, a, _3515363_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), c);
}

label40:
{
Obj _3515364_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515363_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515365_37 = makeCons(a, Nil);
pushCont(co, 41, clofun7, 1, _3515363_37);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), _3515364_37, _3515365_37);
}

label41:
{
Obj _3515366_37 = __arg1;
Obj _3515363_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[86]), _3515363_37, _3515366_37);
}

label42:
{
Obj _3514738_37 = makeNative(43, clofun7, 0, 1, closureRef(co, 0));
Obj _3515327_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515327_37) {
Obj _3515328_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515329_37 = PRIM_EQ(__symbolTable[77], _3515328_37);
if (True == _3515329_37) {
Obj _3515330_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515331_37 = PRIM_ISCONS(_3515330_37);
if (True == _3515331_37) {
Obj _3515332_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515333_37 = PRIM_CAR(_3515332_37);
Obj lam = _3515333_37;
Obj _3515334_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515335_37 = PRIM_CDR(_3515334_37);
Obj more = _3515335_37;
Obj _3515336_37 = makeCons(lam, more);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), _3515336_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514738_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514738_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514738_37);
}
}

label43:
{
Obj _3514739_37 = makeNative(44, clofun7, 0, 1, closureRef(co, 0));
Obj _3515317_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515317_37) {
Obj _3515318_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515319_37 = PRIM_EQ(__symbolTable[78], _3515318_37);
if (True == _3515319_37) {
Obj _3515320_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515321_37 = PRIM_ISCONS(_3515320_37);
if (True == _3515321_37) {
Obj _3515322_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515323_37 = PRIM_CAR(_3515322_37);
Obj x = _3515323_37;
Obj _3515324_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515325_37 = PRIM_CDR(_3515324_37);
Obj _3515326_37 = PRIM_EQ(Nil, _3515325_37);
if (True == _3515326_37) {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), x);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514739_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514739_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514739_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514739_37);
}
}

label44:
{
Obj _3514740_37 = makeNative(46, clofun7, 0, 1, closureRef(co, 0));
Obj _3515297_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515297_37) {
Obj _3515298_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515299_37 = PRIM_EQ(__symbolTable[79], _3515298_37);
if (True == _3515299_37) {
Obj _3515300_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515301_37 = PRIM_ISCONS(_3515300_37);
if (True == _3515301_37) {
Obj _3515302_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515303_37 = PRIM_CAR(_3515302_37);
Obj exp = _3515303_37;
Obj _3515304_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515305_37 = PRIM_CDR(_3515304_37);
Obj _3515306_37 = PRIM_ISCONS(_3515305_37);
if (True == _3515306_37) {
Obj _3515307_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515308_37 = PRIM_CDR(_3515307_37);
Obj _3515309_37 = PRIM_CAR(_3515308_37);
Obj cont = _3515309_37;
Obj _3515310_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515311_37 = PRIM_CDR(_3515310_37);
Obj _3515312_37 = PRIM_CDR(_3515311_37);
Obj _3515313_37 = PRIM_EQ(Nil, _3515312_37);
if (True == _3515313_37) {
Obj _3515314_37 = makeCons(cont, Nil);
Obj _3515315_37 = makeCons(exp, _3515314_37);
PUSH_CONT_0(co, 45, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3515315_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514740_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514740_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514740_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514740_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514740_37);
}
}

label45:
{
Obj _3515316_37 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3515316_37);
}

label46:
{
Obj _3514741_37 = makeNative(47, clofun7, 0, 1, closureRef(co, 0));
Obj _3515287_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515287_37) {
Obj _3515288_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515289_37 = PRIM_EQ(__symbolTable[80], _3515288_37);
if (True == _3515289_37) {
Obj _3515290_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515291_37 = PRIM_ISCONS(_3515290_37);
if (True == _3515291_37) {
Obj _3515292_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515293_37 = PRIM_CAR(_3515292_37);
Obj exp = _3515293_37;
Obj _3515294_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515295_37 = PRIM_CDR(_3515294_37);
Obj _3515296_37 = PRIM_EQ(Nil, _3515295_37);
if (True == _3515296_37) {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), exp);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514741_37);
}
}

label47:
{
Obj _3514742_37 = makeNative(49, clofun7, 0, 1, closureRef(co, 0));
Obj _3515269_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515269_37) {
Obj _3515270_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515271_37 = PRIM_EQ(__symbolTable[81], _3515270_37);
if (True == _3515271_37) {
Obj _3515272_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515273_37 = PRIM_ISCONS(_3515272_37);
if (True == _3515273_37) {
Obj _3515274_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515275_37 = PRIM_CAR(_3515274_37);
Obj arg = _3515275_37;
Obj _3515276_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515277_37 = PRIM_CDR(_3515276_37);
Obj _3515278_37 = PRIM_ISCONS(_3515277_37);
if (True == _3515278_37) {
Obj _3515279_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515280_37 = PRIM_CDR(_3515279_37);
Obj _3515281_37 = PRIM_CAR(_3515280_37);
Obj body = _3515281_37;
Obj _3515282_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515283_37 = PRIM_CDR(_3515282_37);
Obj _3515284_37 = PRIM_CDR(_3515283_37);
Obj _3515285_37 = PRIM_EQ(Nil, _3515284_37);
if (True == _3515285_37) {
pushCont(co, 48, clofun7, 1, arg);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun7, _3514742_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514742_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514742_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514742_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3514742_37);
}
}

label48:
{
Obj _3515286_37 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), _3515286_37, arg);
}

label49:
{
Obj _3515264_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515264_37) {
Obj _3515265_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3515265_37;
Obj _3515266_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515266_37;
Obj _3515267_37 = makeCons(f, args);
PUSH_CONT_0(co, 0, clofun8);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3515267_37);
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
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
Obj _3515268_37 = __arg1;
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3515268_37);
}

label1:
{
Obj _3514724_37 = __arg1;
Obj _3514725_37 = makeNative(2, clofun8, 0, 1, _3514724_37);
Obj _3515250_37 = PRIM_ISCONS(_3514724_37);
if (True == _3515250_37) {
Obj _3515251_37 = PRIM_CAR(_3514724_37);
Obj _3515252_37 = PRIM_EQ(__symbolTable[101], _3515251_37);
if (True == _3515252_37) {
Obj _3515253_37 = PRIM_CDR(_3514724_37);
Obj _3515254_37 = PRIM_ISCONS(_3515253_37);
if (True == _3515254_37) {
Obj _3515255_37 = PRIM_CDR(_3514724_37);
Obj _3515256_37 = PRIM_CAR(_3515255_37);
Obj _3515257_37 = PRIM_CDR(_3514724_37);
Obj _3515258_37 = PRIM_CDR(_3515257_37);
Obj _3515259_37 = PRIM_EQ(Nil, _3515258_37);
if (True == _3515259_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514725_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514725_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514725_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514725_37);
}
}

label2:
{
Obj _3514726_37 = makeNative(3, clofun8, 0, 1, closureRef(co, 0));
Obj _3515240_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515240_37) {
Obj _3515241_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515242_37 = PRIM_EQ(__symbolTable[98], _3515241_37);
if (True == _3515242_37) {
Obj _3515243_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515244_37 = PRIM_ISCONS(_3515243_37);
if (True == _3515244_37) {
Obj _3515245_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515246_37 = PRIM_CAR(_3515245_37);
Obj _3515247_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515248_37 = PRIM_CDR(_3515247_37);
Obj _3515249_37 = PRIM_EQ(Nil, _3515248_37);
if (True == _3515249_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514726_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514726_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514726_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514726_37);
}
}

label3:
{
Obj _3514727_37 = makeNative(4, clofun8, 0, 1, closureRef(co, 0));
Obj _3515230_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515230_37) {
Obj _3515231_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515232_37 = PRIM_EQ(__symbolTable[95], _3515231_37);
if (True == _3515232_37) {
Obj _3515233_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515234_37 = PRIM_ISCONS(_3515233_37);
if (True == _3515234_37) {
Obj _3515235_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515236_37 = PRIM_CAR(_3515235_37);
Obj _3515237_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515238_37 = PRIM_CDR(_3515237_37);
Obj _3515239_37 = PRIM_EQ(Nil, _3515238_37);
if (True == _3515239_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514727_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514727_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514727_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514727_37);
}
}

label4:
{
Obj _3514728_37 = makeNative(5, clofun8, 0, 1, closureRef(co, 0));
Obj _3515220_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515220_37) {
Obj _3515221_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515222_37 = PRIM_EQ(__symbolTable[89], _3515221_37);
if (True == _3515222_37) {
Obj _3515223_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515224_37 = PRIM_ISCONS(_3515223_37);
if (True == _3515224_37) {
Obj _3515225_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515226_37 = PRIM_CAR(_3515225_37);
Obj _3515227_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515228_37 = PRIM_CDR(_3515227_37);
Obj _3515229_37 = PRIM_EQ(Nil, _3515228_37);
if (True == _3515229_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514728_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514728_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514728_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514728_37);
}
}

label5:
{
Obj _3514729_37 = makeNative(6, clofun8, 0, 0);
Obj _3515210_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515210_37) {
Obj _3515211_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515212_37 = PRIM_EQ(__symbolTable[83], _3515211_37);
if (True == _3515212_37) {
Obj _3515213_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515214_37 = PRIM_ISCONS(_3515213_37);
if (True == _3515214_37) {
Obj _3515215_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515216_37 = PRIM_CAR(_3515215_37);
Obj _3515217_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515218_37 = PRIM_CDR(_3515217_37);
Obj _3515219_37 = PRIM_EQ(Nil, _3515218_37);
if (True == _3515219_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514729_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514729_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514729_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514729_37);
}
}

label6:
{
JUMP_RETURN(clofun8, False);
}

label7:
{
Obj _3514719_37 = __arg1;
Obj _3514720_37 = __arg2;
Obj _3515199_37 = PRIM_EQ(Nil, _3514719_37);
if (True == _3515199_37) {
JUMP_RETURN(clofun8, Nil);
} else {
Obj _3514722_37 = makeNative(9, clofun8, 0, 2, _3514719_37, _3514720_37);
Obj _3515205_37 = PRIM_ISCONS(_3514719_37);
if (True == _3515205_37) {
Obj _3515206_37 = PRIM_CAR(_3514719_37);
Obj x = _3515206_37;
Obj _3515207_37 = PRIM_CDR(_3514719_37);
Obj y = _3515207_37;
pushCont(co, 8, clofun8, 3, y, _3514720_37, _3514722_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), x, _3514720_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514722_37);
}
}
}

label8:
{
Obj _3515208_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514720_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514722_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3515208_37) {
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), y, _3514720_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514722_37);
}
}

label9:
{
Obj _3515200_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515200_37) {
Obj _3515201_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3515201_37;
Obj _3515202_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3515202_37;
pushCont(co, 10, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), y, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label10:
{
Obj _3515203_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515204_37 = makeCons(x, _3515203_37);
JUMP_RETURN(clofun8, _3515204_37);
}

label11:
{
Obj _3514714_37 = __arg1;
Obj _3514715_37 = __arg2;
Obj _3515188_37 = PRIM_EQ(Nil, _3514714_37);
if (True == _3515188_37) {
JUMP_RETURN(clofun8, _3514715_37);
} else {
Obj _3514717_37 = makeNative(13, clofun8, 0, 2, _3514714_37, _3514715_37);
Obj _3515194_37 = PRIM_ISCONS(_3514714_37);
if (True == _3515194_37) {
Obj _3515195_37 = PRIM_CAR(_3514714_37);
Obj x = _3515195_37;
Obj _3515196_37 = PRIM_CDR(_3514714_37);
Obj y = _3515196_37;
pushCont(co, 12, clofun8, 3, y, _3514715_37, _3514717_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), x, _3514715_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514717_37);
}
}
}

label12:
{
Obj _3515197_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514715_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514717_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3515197_37) {
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[86]), y, _3514715_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514717_37);
}
}

label13:
{
Obj _3515189_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515189_37) {
Obj _3515190_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3515190_37;
Obj _3515191_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3515191_37;
pushCont(co, 14, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[86]), y, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label14:
{
Obj _3515192_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515193_37 = makeCons(x, _3515192_37);
JUMP_RETURN(clofun8, _3515193_37);
}

label15:
{
Obj _3514700_37 = __arg1;
Obj _3514701_37 = __arg2;
Obj _3514702_37 = __arg3;
Obj _3514857_37 = makeNative(19, clofun8, 1, 3, _3514700_37, _3514702_37, _3514701_37);
pushCont(co, 16, clofun8, 2, _3514702_37, _3514857_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[88]), _3514702_37);
}

label16:
{
Obj _3515183_37 = __arg1;
Obj _3514702_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514857_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515183_37) {
JUMP_WITH_ARGS_2(clofun8, _3514857_37, True);
} else {
Obj _3515184_37 = primIsString(_3514702_37);
if (True == _3515184_37) {
JUMP_WITH_ARGS_2(clofun8, _3514857_37, True);
} else {
pushCont(co, 17, clofun8, 2, _3514702_37, _3514857_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[87]), _3514702_37);
}
}
}

label17:
{
Obj _3515185_37 = __arg1;
Obj _3514702_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514857_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515185_37) {
JUMP_WITH_ARGS_2(clofun8, _3514857_37, True);
} else {
pushCont(co, 18, clofun8, 1, _3514857_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[108]), _3514702_37);
}
}

label18:
{
Obj _3515186_37 = __arg1;
Obj _3514857_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515186_37) {
JUMP_WITH_ARGS_2(clofun8, _3514857_37, True);
} else {
JUMP_WITH_ARGS_2(clofun8, _3514857_37, False);
}
}

label19:
{
Obj _3514858_37 = __arg1;
if (True == _3514858_37) {
Obj _3514994_37 = makeCons(closureRef(co, 1), Nil);
Obj _3514995_37 = makeCons(__symbolTable[101], _3514994_37);
JUMP_RETURN(clofun8, _3514995_37);
} else {
Obj _3514704_37 = makeNative(21, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj _3515170_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3515170_37) {
Obj _3515171_37 = PRIM_CAR(closureRef(co, 1));
Obj _3515172_37 = PRIM_EQ(__symbolTable[89], _3515171_37);
if (True == _3515172_37) {
Obj _3515173_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515174_37 = PRIM_ISCONS(_3515173_37);
if (True == _3515174_37) {
Obj _3515175_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515176_37 = PRIM_CAR(_3515175_37);
Obj x = _3515176_37;
Obj _3515177_37 = PRIM_CDR(closureRef(co, 1));
Obj _3515178_37 = PRIM_CDR(_3515177_37);
Obj _3515179_37 = PRIM_EQ(Nil, _3515178_37);
if (True == _3515179_37) {
pushCont(co, 20, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[99]), x, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun8, _3514704_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514704_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514704_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514704_37);
}
}
}

label20:
{
Obj _3515180_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515181_37 = makeCons(x, Nil);
Obj _3515182_37 = makeCons(__symbolTable[101], _3515181_37);
JUMP_RETURN(clofun8, _3515182_37);
}

label21:
{
Obj _3514996_37 = primIsSymbol(closureRef(co, 0));
if (True == _3514996_37) {
PUSH_CONT_0(co, 45, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj _3514706_37 = makeNative(24, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515148_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515148_37) {
Obj _3515149_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515150_37 = PRIM_EQ(__symbolTable[94], _3515149_37);
if (True == _3515150_37) {
Obj _3515151_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515152_37 = PRIM_ISCONS(_3515151_37);
if (True == _3515152_37) {
Obj _3515153_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515154_37 = PRIM_CAR(_3515153_37);
Obj args = _3515154_37;
Obj _3515155_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515156_37 = PRIM_CDR(_3515155_37);
Obj _3515157_37 = PRIM_ISCONS(_3515156_37);
if (True == _3515157_37) {
Obj _3515158_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515159_37 = PRIM_CDR(_3515158_37);
Obj _3515160_37 = PRIM_CAR(_3515159_37);
Obj body = _3515160_37;
Obj _3515161_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515162_37 = PRIM_CDR(_3515161_37);
Obj _3515163_37 = PRIM_CDR(_3515162_37);
Obj _3515164_37 = PRIM_EQ(Nil, _3515163_37);
if (True == _3515164_37) {
pushCont(co, 22, clofun8, 2, body, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[93]), args, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun8, _3514706_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514706_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514706_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514706_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514706_37);
}
}
}

label22:
{
Obj _3515165_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun8, 1, args);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), _3515165_37, closureRef(co, 2), body);
}

label23:
{
Obj _3515166_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515167_37 = makeCons(_3515166_37, Nil);
Obj _3515168_37 = makeCons(args, _3515167_37);
Obj _3515169_37 = makeCons(__symbolTable[94], _3515168_37);
JUMP_RETURN(clofun8, _3515169_37);
}

label24:
{
Obj _3514707_37 = makeNative(25, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515116_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515116_37) {
Obj _3515117_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515118_37 = PRIM_EQ(__symbolTable[92], _3515117_37);
if (True == _3515118_37) {
Obj _3515119_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515120_37 = PRIM_ISCONS(_3515119_37);
if (True == _3515120_37) {
Obj _3515121_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515122_37 = PRIM_CAR(_3515121_37);
Obj _3515123_37 = PRIM_ISCONS(_3515122_37);
if (True == _3515123_37) {
Obj _3515124_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515125_37 = PRIM_CAR(_3515124_37);
Obj _3515126_37 = PRIM_CAR(_3515125_37);
Obj _3515127_37 = PRIM_EQ(__symbolTable[92], _3515126_37);
if (True == _3515127_37) {
Obj _3515128_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515129_37 = PRIM_CAR(_3515128_37);
Obj _3515130_37 = PRIM_CDR(_3515129_37);
Obj exp1 = _3515130_37;
Obj _3515131_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515132_37 = PRIM_CDR(_3515131_37);
Obj exp2 = _3515132_37;
Obj _3515133_37 = primGenSym();
Obj f = _3515133_37;
Obj _3515134_37 = primGenSym();
Obj v = _3515134_37;
Obj _3515135_37 = makeCons(v, Nil);
Obj _3515136_37 = makeCons(v, exp2);
Obj _3515137_37 = makeCons(__symbolTable[92], _3515136_37);
Obj _3515138_37 = makeCons(_3515137_37, Nil);
Obj _3515139_37 = makeCons(_3515135_37, _3515138_37);
Obj _3515140_37 = makeCons(__symbolTable[94], _3515139_37);
Obj _3515141_37 = makeCons(__symbolTable[92], exp1);
Obj _3515142_37 = makeCons(_3515141_37, Nil);
Obj _3515143_37 = makeCons(f, _3515142_37);
Obj _3515144_37 = makeCons(_3515143_37, Nil);
Obj _3515145_37 = makeCons(_3515140_37, _3515144_37);
Obj _3515146_37 = makeCons(f, _3515145_37);
Obj _3515147_37 = makeCons(__symbolTable[91], _3515146_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), _3515147_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514707_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514707_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514707_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514707_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514707_37);
}
}

label25:
{
Obj _3514708_37 = makeNative(28, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515109_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515109_37) {
Obj _3515110_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515111_37 = PRIM_EQ(__symbolTable[92], _3515110_37);
if (True == _3515111_37) {
Obj _3515112_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515112_37;
pushCont(co, 26, clofun8, 1, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun8, _3514708_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514708_37);
}
}

label26:
{
Obj _3515113_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 27, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), _3515113_37, args);
}

label27:
{
Obj _3515114_37 = __arg1;
Obj _3515115_37 = makeCons(__symbolTable[92], _3515114_37);
JUMP_RETURN(clofun8, _3515115_37);
}

label28:
{
Obj _3514709_37 = makeNative(31, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515087_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515087_37) {
Obj _3515088_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515089_37 = PRIM_EQ(__symbolTable[90], _3515088_37);
if (True == _3515089_37) {
Obj _3515090_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515091_37 = PRIM_ISCONS(_3515090_37);
if (True == _3515091_37) {
Obj _3515092_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515093_37 = PRIM_CAR(_3515092_37);
Obj x = _3515093_37;
Obj _3515094_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515095_37 = PRIM_CDR(_3515094_37);
Obj _3515096_37 = PRIM_ISCONS(_3515095_37);
if (True == _3515096_37) {
Obj _3515097_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515098_37 = PRIM_CDR(_3515097_37);
Obj _3515099_37 = PRIM_CAR(_3515098_37);
Obj y = _3515099_37;
Obj _3515100_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515101_37 = PRIM_CDR(_3515100_37);
Obj _3515102_37 = PRIM_CDR(_3515101_37);
Obj _3515103_37 = PRIM_EQ(Nil, _3515102_37);
if (True == _3515103_37) {
pushCont(co, 29, clofun8, 1, y);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), x);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514709_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514709_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514709_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514709_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514709_37);
}
}

label29:
{
Obj _3515104_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun8, 1, _3515104_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), y);
}

label30:
{
Obj _3515105_37 = __arg1;
Obj _3515104_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515106_37 = makeCons(_3515105_37, Nil);
Obj _3515107_37 = makeCons(_3515104_37, _3515106_37);
Obj _3515108_37 = makeCons(__symbolTable[90], _3515107_37);
JUMP_RETURN(clofun8, _3515108_37);
}

label31:
{
Obj _3514710_37 = makeNative(34, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515054_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515054_37) {
Obj _3515055_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515056_37 = PRIM_EQ(__symbolTable[91], _3515055_37);
if (True == _3515056_37) {
Obj _3515057_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515058_37 = PRIM_ISCONS(_3515057_37);
if (True == _3515058_37) {
Obj _3515059_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515060_37 = PRIM_CAR(_3515059_37);
Obj a = _3515060_37;
Obj _3515061_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515062_37 = PRIM_CDR(_3515061_37);
Obj _3515063_37 = PRIM_ISCONS(_3515062_37);
if (True == _3515063_37) {
Obj _3515064_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515065_37 = PRIM_CDR(_3515064_37);
Obj _3515066_37 = PRIM_CAR(_3515065_37);
Obj b = _3515066_37;
Obj _3515067_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515068_37 = PRIM_CDR(_3515067_37);
Obj _3515069_37 = PRIM_CDR(_3515068_37);
Obj _3515070_37 = PRIM_ISCONS(_3515069_37);
if (True == _3515070_37) {
Obj _3515071_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515072_37 = PRIM_CDR(_3515071_37);
Obj _3515073_37 = PRIM_CDR(_3515072_37);
Obj _3515074_37 = PRIM_CAR(_3515073_37);
Obj c = _3515074_37;
Obj _3515075_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515076_37 = PRIM_CDR(_3515075_37);
Obj _3515077_37 = PRIM_CDR(_3515076_37);
Obj _3515078_37 = PRIM_CDR(_3515077_37);
Obj _3515079_37 = PRIM_EQ(Nil, _3515078_37);
if (True == _3515079_37) {
pushCont(co, 32, clofun8, 2, c, a);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), b);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514710_37);
}
}

label32:
{
Obj _3515080_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515081_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun8, 2, _3515080_37, a);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), _3515081_37, closureRef(co, 2), c);
}

label33:
{
Obj _3515082_37 = __arg1;
Obj _3515080_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515083_37 = makeCons(_3515082_37, Nil);
Obj _3515084_37 = makeCons(_3515080_37, _3515083_37);
Obj _3515085_37 = makeCons(a, _3515084_37);
Obj _3515086_37 = makeCons(__symbolTable[91], _3515085_37);
JUMP_RETURN(clofun8, _3515086_37);
}

label34:
{
Obj _3514711_37 = makeNative(35, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3515022_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515022_37) {
Obj _3515023_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515024_37 = PRIM_ISCONS(_3515023_37);
if (True == _3515024_37) {
Obj _3515025_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515026_37 = PRIM_CAR(_3515025_37);
Obj _3515027_37 = PRIM_EQ(__symbolTable[94], _3515026_37);
if (True == _3515027_37) {
Obj _3515028_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515029_37 = PRIM_CDR(_3515028_37);
Obj exp1 = _3515029_37;
Obj _3515030_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515031_37 = PRIM_ISCONS(_3515030_37);
if (True == _3515031_37) {
Obj _3515032_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515033_37 = PRIM_CAR(_3515032_37);
Obj _3515034_37 = PRIM_ISCONS(_3515033_37);
if (True == _3515034_37) {
Obj _3515035_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515036_37 = PRIM_CAR(_3515035_37);
Obj _3515037_37 = PRIM_CAR(_3515036_37);
Obj _3515038_37 = PRIM_EQ(__symbolTable[92], _3515037_37);
if (True == _3515038_37) {
Obj _3515039_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515040_37 = PRIM_CAR(_3515039_37);
Obj _3515041_37 = PRIM_CDR(_3515040_37);
Obj exp2 = _3515041_37;
Obj _3515042_37 = PRIM_CDR(closureRef(co, 0));
Obj _3515043_37 = PRIM_CDR(_3515042_37);
Obj _3515044_37 = PRIM_EQ(Nil, _3515043_37);
if (True == _3515044_37) {
Obj _3515045_37 = primGenSym();
Obj f = _3515045_37;
Obj _3515046_37 = makeCons(__symbolTable[94], exp1);
Obj _3515047_37 = makeCons(__symbolTable[92], exp2);
Obj _3515048_37 = makeCons(_3515047_37, Nil);
Obj _3515049_37 = makeCons(f, _3515048_37);
Obj _3515050_37 = makeCons(_3515049_37, Nil);
Obj _3515051_37 = makeCons(_3515046_37, _3515050_37);
Obj _3515052_37 = makeCons(f, _3515051_37);
Obj _3515053_37 = makeCons(__symbolTable[91], _3515052_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), _3515053_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3514711_37);
}
}

label35:
{
Obj _3514712_37 = makeNative(43, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj _3515002_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515002_37) {
Obj _3515003_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3515003_37;
Obj _3515004_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3515004_37;
pushCont(co, 36, clofun8, 3, op, args, _3514712_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[109]), op);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514712_37);
}
}

label36:
{
Obj _3515005_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514712_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3515005_37) {
pushCont(co, 37, clofun8, 2, op, args);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[105]), op);
} else {
JUMP_WITH_ARGS_1(clofun8, _3514712_37);
}
}

label37:
{
Obj _3515006_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = _3515006_37;
pushCont(co, 38, clofun8, 3, required, op, args);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[96]), args);
}

label38:
{
Obj _3515007_37 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = _3515007_37;
Obj _3515008_37 = PRIM_EQ(required, provided);
if (True == _3515008_37) {
Obj _3515009_37 = makeCons(op, Nil);
Obj _3515010_37 = makeCons(__symbolTable[95], _3515009_37);
pushCont(co, 41, clofun8, 2, args, _3515010_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2));
} else {
Obj _3515014_37 = PRIM_GT(required, provided);
if (True == _3515014_37) {
Obj _3515015_37 = PRIM_SUB(required, provided);
pushCont(co, 39, clofun8, 2, op, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[103]), _3515015_37, Nil);
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("primitive call mismatch"));
}
}
}

label39:
{
Obj _3515016_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = _3515016_37;
Obj _3515017_37 = makeCons(op, args);
pushCont(co, 40, clofun8, 1, tmp);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[93]), _3515017_37, tmp);
}

label40:
{
Obj _3515018_37 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515019_37 = makeCons(_3515018_37, Nil);
Obj _3515020_37 = makeCons(tmp, _3515019_37);
Obj _3515021_37 = makeCons(__symbolTable[94], _3515020_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), _3515021_37);
}

label41:
{
Obj _3515011_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515010_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 42, clofun8, 1, _3515010_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), _3515011_37, args);
}

label42:
{
Obj _3515012_37 = __arg1;
Obj _3515010_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515013_37 = makeCons(_3515010_37, _3515012_37);
JUMP_RETURN(clofun8, _3515013_37);
}

label43:
{
PUSH_CONT_0(co, 44, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 0), closureRef(co, 1));
}

label44:
{
Obj _3515001_37 = __arg1;
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), _3515001_37, closureRef(co, 2));
}

label45:
{
Obj _3514997_37 = __arg1;
if (True == _3514997_37) {
JUMP_RETURN(clofun8, closureRef(co, 0));
} else {
PUSH_CONT_0(co, 46, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[99]), closureRef(co, 0), closureRef(co, 2));
}
}

label46:
{
Obj _3514998_37 = __arg1;
Obj _3514999_37 = makeCons(closureRef(co, 0), Nil);
Obj _3515000_37 = makeCons(__symbolTable[98], _3514999_37);
JUMP_RETURN(clofun8, _3515000_37);
}

label47:
{
Obj _3514696_37 = __arg1;
Obj _3514697_37 = __arg2;
Obj _3514989_37 = PRIM_EQ(MAKE_NUMBER(0), _3514696_37);
if (True == _3514989_37) {
JUMP_RETURN(clofun8, _3514697_37);
} else {
Obj _3514990_37 = PRIM_SUB(_3514696_37, MAKE_NUMBER(1));
Obj _3514991_37 = primGenSym();
Obj _3514992_37 = makeCons(_3514991_37, _3514697_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[103]), _3514990_37, _3514992_37);
}
}

label48:
{
Obj x = __arg1;
PUSH_CONT_0(co, 49, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[133]), x, globalRef(__symbolTable[127]));
}

label49:
{
Obj _3514986_37 = __arg1;
Obj find = _3514986_37;
pushCont(co, 0, clofun9, 1, find);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[108]), find);
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3514987_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514987_37) {
JUMP_RETURN(clofun9, makeCString("ERROR"));
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[104]), find);
}
}

label1:
{
Obj x = __arg1;
PUSH_CONT_0(co, 2, clofun9);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[133]), x, globalRef(__symbolTable[127]));
}

label2:
{
Obj _3514983_37 = __arg1;
Obj find = _3514983_37;
pushCont(co, 3, clofun9, 1, find);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), find);
}

label3:
{
Obj _3514984_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514984_37) {
JUMP_RETURN(clofun9, makeCString("ERROR"));
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[106]), find);
}
}

label4:
{
Obj x = __arg1;
PUSH_CONT_0(co, 5, clofun9);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[133]), x, globalRef(__symbolTable[127]));
}

label5:
{
Obj _3514979_37 = __arg1;
PUSH_CONT_0(co, 6, clofun9);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), _3514979_37);
}

label6:
{
Obj _3514980_37 = __arg1;
Obj _3514981_37 = primNot(_3514980_37);
JUMP_RETURN(clofun9, _3514981_37);
}

label7:
{
Obj _3514692_37 = __arg1;
Obj _3514693_37 = __arg2;
Obj _3514903_37 = PRIM_EQ(Nil, _3514693_37);
if (True == _3514903_37) {
JUMP_RETURN(clofun9, False);
} else {
Obj _3514904_37 = PRIM_ISCONS(_3514693_37);
if (True == _3514904_37) {
Obj _3514905_37 = PRIM_CAR(_3514693_37);
Obj hd = _3514905_37;
Obj _3514906_37 = PRIM_CDR(_3514693_37);
Obj tl = _3514906_37;
pushCont(co, 8, clofun9, 2, _3514692_37, tl);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[129]), _3514692_37, hd);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label8:
{
Obj _3514907_37 = __arg1;
Obj _3514692_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514908_37 = PRIM_LT(_3514907_37, MAKE_NUMBER(0));
if (True == _3514908_37) {
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[128]), _3514692_37, tl);
} else {
JUMP_RETURN(clofun9, True);
}
}

label9:
{
Obj x = __arg1;
Obj l = __arg2;
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[130]), MAKE_NUMBER(0), x, l);
}

label10:
{
Obj _3514686_37 = __arg1;
Obj _3514687_37 = __arg2;
Obj _3514688_37 = __arg3;
Obj _3514892_37 = PRIM_EQ(Nil, _3514688_37);
if (True == _3514892_37) {
JUMP_RETURN(clofun9, MAKE_NUMBER(-1));
} else {
Obj _3514690_37 = makeNative(11, clofun9, 0, 3, _3514688_37, _3514686_37, _3514687_37);
Obj _3514897_37 = PRIM_ISCONS(_3514688_37);
if (True == _3514897_37) {
Obj _3514898_37 = PRIM_CAR(_3514688_37);
Obj a = _3514898_37;
Obj _3514899_37 = PRIM_CDR(_3514688_37);
Obj _3514900_37 = PRIM_EQ(_3514687_37, a);
if (True == _3514900_37) {
JUMP_RETURN(clofun9, _3514686_37);
} else {
JUMP_WITH_ARGS_1(clofun9, _3514690_37);
}
} else {
JUMP_WITH_ARGS_1(clofun9, _3514690_37);
}
}
}

label11:
{
Obj _3514893_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514893_37) {
Obj _3514894_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514895_37 = PRIM_CDR(closureRef(co, 0));
Obj b = _3514895_37;
Obj _3514896_37 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[130]), _3514896_37, closureRef(co, 2), b);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label12:
{
Obj _3514681_37 = __arg1;
Obj _3514682_37 = __arg2;
Obj _3514683_37 = __arg3;
Obj _3514886_37 = PRIM_EQ(Nil, _3514683_37);
if (True == _3514886_37) {
JUMP_RETURN(clofun9, _3514682_37);
} else {
Obj _3514887_37 = PRIM_ISCONS(_3514683_37);
if (True == _3514887_37) {
Obj _3514888_37 = PRIM_CAR(_3514683_37);
Obj x = _3514888_37;
Obj _3514889_37 = PRIM_CDR(_3514683_37);
Obj y = _3514889_37;
pushCont(co, 13, clofun9, 2, _3514681_37, y);
JUMP_WITH_ARGS_3(clofun9, _3514681_37, _3514682_37, x);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label13:
{
Obj _3514890_37 = __arg1;
Obj _3514681_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[131]), _3514681_37, _3514890_37, y);
}

label14:
{
Obj _3514676_37 = __arg1;
Obj _3514677_37 = __arg2;
Obj _3514871_37 = PRIM_EQ(Nil, _3514677_37);
if (True == _3514871_37) {
JUMP_RETURN(clofun9, Nil);
} else {
Obj _3514679_37 = makeNative(15, clofun9, 0, 2, _3514677_37, _3514676_37);
Obj _3514875_37 = PRIM_ISCONS(_3514677_37);
if (True == _3514875_37) {
Obj _3514876_37 = PRIM_CAR(_3514677_37);
Obj _3514877_37 = PRIM_ISCONS(_3514876_37);
if (True == _3514877_37) {
Obj _3514878_37 = PRIM_CAR(_3514677_37);
Obj _3514879_37 = PRIM_CAR(_3514878_37);
Obj x = _3514879_37;
Obj _3514880_37 = PRIM_CAR(_3514677_37);
Obj _3514881_37 = PRIM_CDR(_3514880_37);
Obj y = _3514881_37;
Obj _3514882_37 = PRIM_CDR(_3514677_37);
Obj _3514883_37 = PRIM_EQ(_3514676_37, x);
if (True == _3514883_37) {
Obj _3514884_37 = makeCons(x, y);
JUMP_RETURN(clofun9, _3514884_37);
} else {
JUMP_WITH_ARGS_1(clofun9, _3514679_37);
}
} else {
JUMP_WITH_ARGS_1(clofun9, _3514679_37);
}
} else {
JUMP_WITH_ARGS_1(clofun9, _3514679_37);
}
}
}

label15:
{
Obj _3514872_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514872_37) {
Obj _3514873_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514874_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3514874_37;
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

