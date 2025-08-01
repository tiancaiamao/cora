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
Obj _3519792_37 = __arg1;
PUSH_CONT_0(co, 2, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/io"));
}

label2:
{
Obj _3519793_37 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[135]), makeCString("cora/lib/hash-h"));
}

label3:
{
Obj _3519794_37 = __arg1;
Obj _3519795_37 = primSet(co, __symbolTable[134], Nil);
Obj _3519810_37 = primSet(co, __symbolTable[133], makeNative(14, clofun9, 2, 0));
Obj _3519816_37 = primSet(co, __symbolTable[131], makeNative(12, clofun9, 3, 0));
Obj _3519826_37 = primSet(co, __symbolTable[130], makeNative(10, clofun9, 3, 0));
Obj _3519827_37 = primSet(co, __symbolTable[129], makeNative(9, clofun9, 2, 0));
Obj _3519834_37 = primSet(co, __symbolTable[128], makeNative(7, clofun9, 2, 0));
Obj _3519835_37 = makeCons(makeCString("primSet"), Nil);
Obj _3519836_37 = makeCons(MAKE_NUMBER(2), _3519835_37);
Obj _3519837_37 = makeCons(__symbolTable[126], _3519836_37);
Obj _3519838_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3519839_37 = makeCons(MAKE_NUMBER(1), _3519838_37);
Obj _3519840_37 = makeCons(__symbolTable[125], _3519839_37);
Obj _3519841_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3519842_37 = makeCons(MAKE_NUMBER(1), _3519841_37);
Obj _3519843_37 = makeCons(__symbolTable[124], _3519842_37);
Obj _3519844_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3519845_37 = makeCons(MAKE_NUMBER(2), _3519844_37);
Obj _3519846_37 = makeCons(__symbolTable[123], _3519845_37);
Obj _3519847_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3519848_37 = makeCons(MAKE_NUMBER(1), _3519847_37);
Obj _3519849_37 = makeCons(__symbolTable[122], _3519848_37);
Obj _3519850_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3519851_37 = makeCons(MAKE_NUMBER(2), _3519850_37);
Obj _3519852_37 = makeCons(__symbolTable[121], _3519851_37);
Obj _3519853_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3519854_37 = makeCons(MAKE_NUMBER(2), _3519853_37);
Obj _3519855_37 = makeCons(__symbolTable[120], _3519854_37);
Obj _3519856_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3519857_37 = makeCons(MAKE_NUMBER(2), _3519856_37);
Obj _3519858_37 = makeCons(__symbolTable[119], _3519857_37);
Obj _3519859_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3519860_37 = makeCons(MAKE_NUMBER(2), _3519859_37);
Obj _3519861_37 = makeCons(__symbolTable[118], _3519860_37);
Obj _3519862_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3519863_37 = makeCons(MAKE_NUMBER(2), _3519862_37);
Obj _3519864_37 = makeCons(__symbolTable[117], _3519863_37);
Obj _3519865_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3519866_37 = makeCons(MAKE_NUMBER(2), _3519865_37);
Obj _3519867_37 = makeCons(__symbolTable[116], _3519866_37);
Obj _3519868_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3519869_37 = makeCons(MAKE_NUMBER(2), _3519868_37);
Obj _3519870_37 = makeCons(__symbolTable[115], _3519869_37);
Obj _3519871_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3519872_37 = makeCons(MAKE_NUMBER(0), _3519871_37);
Obj _3519873_37 = makeCons(__symbolTable[114], _3519872_37);
Obj _3519874_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3519875_37 = makeCons(MAKE_NUMBER(1), _3519874_37);
Obj _3519876_37 = makeCons(__symbolTable[113], _3519875_37);
Obj _3519877_37 = makeCons(makeCString("primNot"), Nil);
Obj _3519878_37 = makeCons(MAKE_NUMBER(1), _3519877_37);
Obj _3519879_37 = makeCons(__symbolTable[112], _3519878_37);
Obj _3519880_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3519881_37 = makeCons(MAKE_NUMBER(1), _3519880_37);
Obj _3519882_37 = makeCons(__symbolTable[111], _3519881_37);
Obj _3519883_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3519884_37 = makeCons(MAKE_NUMBER(1), _3519883_37);
Obj _3519885_37 = makeCons(__symbolTable[110], _3519884_37);
Obj _3519886_37 = makeCons(_3519885_37, Nil);
Obj _3519887_37 = makeCons(_3519882_37, _3519886_37);
Obj _3519888_37 = makeCons(_3519879_37, _3519887_37);
Obj _3519889_37 = makeCons(_3519876_37, _3519888_37);
Obj _3519890_37 = makeCons(_3519873_37, _3519889_37);
Obj _3519891_37 = makeCons(_3519870_37, _3519890_37);
Obj _3519892_37 = makeCons(_3519867_37, _3519891_37);
Obj _3519893_37 = makeCons(_3519864_37, _3519892_37);
Obj _3519894_37 = makeCons(_3519861_37, _3519893_37);
Obj _3519895_37 = makeCons(_3519858_37, _3519894_37);
Obj _3519896_37 = makeCons(_3519855_37, _3519895_37);
Obj _3519897_37 = makeCons(_3519852_37, _3519896_37);
Obj _3519898_37 = makeCons(_3519849_37, _3519897_37);
Obj _3519899_37 = makeCons(_3519846_37, _3519898_37);
Obj _3519900_37 = makeCons(_3519843_37, _3519899_37);
Obj _3519901_37 = makeCons(_3519840_37, _3519900_37);
Obj _3519902_37 = makeCons(_3519837_37, _3519901_37);
Obj _3519903_37 = primSet(co, __symbolTable[127], _3519902_37);
Obj _3519907_37 = primSet(co, __symbolTable[109], makeNative(4, clofun9, 1, 0));
Obj _3519910_37 = primSet(co, __symbolTable[107], makeNative(1, clofun9, 1, 0));
Obj _3519913_37 = primSet(co, __symbolTable[105], makeNative(48, clofun8, 1, 0));
Obj _3519918_37 = primSet(co, __symbolTable[103], makeNative(47, clofun8, 2, 0));
Obj _3520112_37 = primSet(co, __symbolTable[102], makeNative(15, clofun8, 3, 0));
Obj _3520123_37 = primSet(co, __symbolTable[86], makeNative(11, clofun8, 2, 0));
Obj _3520134_37 = primSet(co, __symbolTable[85], makeNative(7, clofun8, 2, 0));
Obj _3520185_37 = primSet(co, __symbolTable[84], makeNative(1, clofun8, 1, 0));
Obj _3520360_37 = primSet(co, __symbolTable[82], makeNative(31, clofun7, 1, 0));
Obj _3520433_37 = primSet(co, __symbolTable[76], makeNative(19, clofun7, 2, 0));
Obj _3520436_37 = primSet(co, __symbolTable[75], makeNative(18, clofun7, 1, 0));
Obj _3520573_37 = primSet(co, __symbolTable[74], makeNative(2, clofun7, 2, 0));
Obj _3520596_37 = primSet(co, __symbolTable[73], makeNative(45, clofun6, 3, 0));
Obj _3520675_37 = primSet(co, __symbolTable[68], makeNative(30, clofun6, 2, 0));
Obj _3520735_37 = primSet(co, __symbolTable[66], makeNative(21, clofun6, 2, 0));
Obj _3520743_37 = primSet(co, __symbolTable[64], makeNative(17, clofun6, 2, 0));
Obj _3520750_37 = primSet(co, __symbolTable[71], makeNative(15, clofun6, 2, 0));
Obj _3520770_37 = primSet(co, __symbolTable[62], makeNative(3, clofun6, 5, 0));
Obj _3520775_37 = primSet(co, __symbolTable[99], makeNative(0, clofun6, 2, 0));
Obj _3520781_37 = primSet(co, __symbolTable[57], makeNative(48, clofun5, 3, 0));
Obj _3520782_37 = primSet(co, __symbolTable[56], makeNative(47, clofun5, 2, 0));
Obj _3521079_37 = primSet(co, __symbolTable[59], makeNative(45, clofun3, 5, 0));
Obj _3521093_37 = primSet(co, __symbolTable[53], makeNative(37, clofun3, 5, 0));
Obj _3521132_37 = primSet(co, __symbolTable[52], makeNative(13, clofun3, 5, 0));
Obj _3521133_37 = primSet(co, __symbolTable[50], MAKE_NUMBER(50));
Obj _3521137_37 = primSet(co, __symbolTable[54], makeNative(11, clofun3, 3, 0));
Obj _3521141_37 = primSet(co, __symbolTable[46], makeNative(7, clofun3, 3, 0));
Obj _3521149_37 = primSet(co, __symbolTable[45], makeNative(0, clofun3, 3, 0));
Obj _3521154_37 = primSet(co, __symbolTable[43], makeNative(45, clofun2, 3, 0));
Obj _3521161_37 = primSet(co, __symbolTable[42], makeNative(43, clofun2, 4, 0));
Obj _3521224_37 = primSet(co, __symbolTable[41], makeNative(32, clofun2, 4, 0));
Obj _3521225_37 = primSet(co, __symbolTable[39], makeNative(31, clofun2, 2, 0));
Obj _3521226_37 = primSet(co, __symbolTable[38], makeNative(30, clofun2, 1, 0));
Obj _3521227_37 = primSet(co, __symbolTable[37], makeNative(29, clofun2, 1, 0));
Obj _3521228_37 = primSet(co, __symbolTable[36], makeNative(28, clofun2, 1, 0));
Obj _3521238_37 = primSet(co, __symbolTable[35], makeNative(22, clofun2, 1, 0));
Obj _3521245_37 = primSet(co, __symbolTable[33], makeNative(21, clofun2, 2, 0));
PUSH_CONT_0(co, 4, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[32]), __symbolTable[31], makeNative(18, clofun2, 1, 0));
}

label4:
{
Obj _3521248_37 = __arg1;
Obj _3521254_37 = primSet(co, __symbolTable[29], makeNative(12, clofun2, 2, 0));
Obj _3521260_37 = primSet(co, __symbolTable[47], makeNative(10, clofun2, 2, 0));
Obj _3521267_37 = primSet(co, __symbolTable[28], makeNative(6, clofun2, 3, 0));
Obj _3521288_37 = primSet(co, __symbolTable[27], makeNative(34, clofun1, 4, 0));
Obj _3521303_37 = primSet(co, __symbolTable[26], makeNative(30, clofun1, 4, 0));
Obj _3521318_37 = primSet(co, __symbolTable[25], makeNative(15, clofun1, 2, 0));
Obj _3521328_37 = primSet(co, __symbolTable[23], makeNative(3, clofun1, 3, 0));
Obj _3521369_37 = primSet(co, __symbolTable[22], makeNative(47, clofun0, 1, 0));
Obj _3521408_37 = primSet(co, __symbolTable[17], makeNative(42, clofun0, 4, 0));
Obj _3521460_37 = primSet(co, __symbolTable[9], makeNative(33, clofun0, 2, 0));
Obj _3521461_37 = primSet(co, __symbolTable[8], makeNative(32, clofun0, 2, 0));
Obj _3521475_37 = primSet(co, __symbolTable[6], makeNative(23, clofun0, 1, 0));
Obj _3521476_37 = primSet(co, __symbolTable[7], False);
Obj _3521489_37 = primSet(co, __symbolTable[5], makeNative(13, clofun0, 1, 0));
Obj _3521499_37 = primSet(co, __symbolTable[3], makeNative(5, clofun0, 2, 0));
JUMP_RETURN(clofun0, _3521499_37);
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _3521490_37 = primGenSym();
Obj globals = _3521490_37;
Obj _3521491_37 = primSet(co, globals, Nil);
pushCont(co, 6, clofun0, 3, from, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[29]), globals);
}

label6:
{
Obj _3521492_37 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, _3521492_37, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[5]), from);
}

label7:
{
Obj _3521493_37 = __arg1;
Obj _3521492_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, _3521492_37, to, globals);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[2]), _3521493_37);
}

label8:
{
Obj _3521494_37 = __arg1;
Obj _3521492_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
JUMP_WITH_ARGS_2(clofun0, _3521492_37, _3521494_37);
}

label9:
{
Obj _3521495_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = _3521495_37;
pushCont(co, 10, clofun0, 2, globals, bc);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[1]), to);
}

label10:
{
Obj _3521496_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = _3521496_37;
pushCont(co, 11, clofun0, 2, bc, stream);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[58]), globals);
}

label11:
{
Obj _3521497_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun0, 1, stream);
JUMP_WITH_ARGS_4(clofun0, globalRef(__symbolTable[23]), stream, bc, _3521497_37);
}

label12:
{
Obj _3521498_37 = __arg1;
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
Obj _3521477_37 = __arg1;
Obj sexp = _3521477_37;
Obj _3519790_37 = makeNative(22, clofun0, 1, 1, sexp);
pushCont(co, 15, clofun0, 2, _3519790_37, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[70]), sexp);
}

label15:
{
Obj _3521480_37 = __arg1;
Obj _3519790_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3521480_37) {
Obj _3521481_37 = PRIM_CAR(sexp);
Obj _3521482_37 = PRIM_EQ(__symbolTable[19], _3521481_37);
if (True == _3521482_37) {
pushCont(co, 20, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, _3519790_37, True);
} else {
pushCont(co, 18, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, _3519790_37, False);
}
} else {
pushCont(co, 16, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, _3519790_37, False);
}
}

label16:
{
Obj _3521487_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label17:
{
Obj _3521488_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label18:
{
Obj _3521485_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 19, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label19:
{
Obj _3521486_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label20:
{
Obj _3521483_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun0, 1, sexp);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), sexp);
}

label21:
{
Obj _3521484_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[6]), sexp);
}

label22:
{
Obj _3519791_37 = __arg1;
if (True == _3519791_37) {
Obj _3521478_37 = PRIM_CDR(closureRef(co, 0));
JUMP_RETURN(clofun0, _3521478_37);
} else {
Obj _3521479_37 = makeCons(closureRef(co, 0), Nil);
JUMP_RETURN(clofun0, _3521479_37);
}
}

label23:
{
Obj _3519778_37 = __arg1;
Obj _3519779_37 = makeNative(26, clofun0, 0, 1, _3519778_37);
Obj _3521470_37 = PRIM_ISCONS(_3519778_37);
if (True == _3521470_37) {
Obj _3521471_37 = PRIM_CAR(_3519778_37);
Obj _3521472_37 = PRIM_EQ(__symbolTable[18], _3521471_37);
if (True == _3521472_37) {
Obj _3521473_37 = PRIM_CDR(_3519778_37);
Obj more = _3521473_37;
Obj _3521474_37 = makeCons(__symbolTable[18], more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), _3521474_37, makeNative(24, clofun0, 1, 0));
} else {
JUMP_WITH_ARGS_1(clofun0, _3519779_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519779_37);
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
Obj _3519780_37 = makeNative(29, clofun0, 0, 1, closureRef(co, 0));
Obj _3521465_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521465_37) {
Obj _3521466_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521467_37 = PRIM_EQ(__symbolTable[19], _3521466_37);
if (True == _3521467_37) {
Obj _3521468_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3521468_37;
Obj _3521469_37 = makeCons(__symbolTable[19], more);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), _3521469_37, makeNative(27, clofun0, 1, 0));
} else {
JUMP_WITH_ARGS_1(clofun0, _3519780_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519780_37);
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
Obj _3521462_37 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = _3521462_37;
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
Obj _3521463_37 = __arg1;
Obj _3521464_37 = makeCons(__symbolTable[19], _3521463_37);
JUMP_RETURN(clofun0, _3521464_37);
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
Obj _3519771_37 = __arg1;
Obj _3519772_37 = __arg2;
Obj _3519773_37 = makeNative(35, clofun0, 0, 2, _3519771_37, _3519772_37);
Obj _3521448_37 = PRIM_ISCONS(_3519771_37);
if (True == _3521448_37) {
Obj _3521449_37 = PRIM_CAR(_3519771_37);
Obj _3521450_37 = PRIM_EQ(__symbolTable[18], _3521449_37);
if (True == _3521450_37) {
Obj _3521451_37 = PRIM_CDR(_3519771_37);
Obj _3521452_37 = PRIM_ISCONS(_3521451_37);
if (True == _3521452_37) {
Obj _3521453_37 = PRIM_CDR(_3519771_37);
Obj _3521454_37 = PRIM_CAR(_3521453_37);
Obj name = _3521454_37;
Obj _3521455_37 = PRIM_CDR(_3519771_37);
Obj _3521456_37 = PRIM_CDR(_3521455_37);
Obj more = _3521456_37;
pushCont(co, 34, clofun0, 1, name);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, _3519772_37);
} else {
JUMP_WITH_ARGS_1(clofun0, _3519773_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519773_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519773_37);
}
}

label34:
{
Obj _3521457_37 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521458_37 = makeCons(name, _3521457_37);
Obj _3521459_37 = makeCons(__symbolTable[18], _3521458_37);
JUMP_RETURN(clofun0, _3521459_37);
}

label35:
{
Obj _3519774_37 = makeNative(37, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3521427_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521427_37) {
Obj _3521428_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521429_37 = PRIM_ISCONS(_3521428_37);
if (True == _3521429_37) {
Obj _3521430_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521431_37 = PRIM_CAR(_3521430_37);
Obj _3521432_37 = PRIM_EQ(__symbolTable[21], _3521431_37);
if (True == _3521432_37) {
Obj _3521433_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521434_37 = PRIM_CDR(_3521433_37);
Obj _3521435_37 = PRIM_ISCONS(_3521434_37);
if (True == _3521435_37) {
Obj _3521436_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521437_37 = PRIM_CDR(_3521436_37);
Obj _3521438_37 = PRIM_CAR(_3521437_37);
Obj pkg = _3521438_37;
Obj _3521439_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521440_37 = PRIM_CDR(_3521439_37);
Obj _3521441_37 = PRIM_CDR(_3521440_37);
Obj _3521442_37 = PRIM_EQ(Nil, _3521441_37);
if (True == _3521442_37) {
Obj _3521443_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3521443_37;
Obj _3521444_37 = makeCons(pkg, Nil);
Obj _3521445_37 = makeCons(__symbolTable[21], _3521444_37);
pushCont(co, 36, clofun0, 1, _3521445_37);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3519774_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519774_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519774_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519774_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519774_37);
}
}

label36:
{
Obj _3521446_37 = __arg1;
Obj _3521445_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521447_37 = makeCons(_3521445_37, _3521446_37);
JUMP_RETURN(clofun0, _3521447_37);
}

label37:
{
Obj _3519775_37 = makeNative(39, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3521415_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521415_37) {
Obj _3521416_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521417_37 = PRIM_ISCONS(_3521416_37);
if (True == _3521417_37) {
Obj _3521418_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521419_37 = PRIM_CAR(_3521418_37);
Obj _3521420_37 = PRIM_EQ(__symbolTable[20], _3521419_37);
if (True == _3521420_37) {
Obj _3521421_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521422_37 = PRIM_CDR(_3521421_37);
Obj symbols = _3521422_37;
Obj _3521423_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3521423_37;
Obj _3521424_37 = makeCons(__symbolTable[20], symbols);
pushCont(co, 38, clofun0, 1, _3521424_37);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3519775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519775_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519775_37);
}
}

label38:
{
Obj _3521425_37 = __arg1;
Obj _3521424_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521426_37 = makeCons(_3521424_37, _3521425_37);
JUMP_RETURN(clofun0, _3521426_37);
}

label39:
{
Obj _3519776_37 = makeNative(41, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj _3521409_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521409_37) {
Obj _3521410_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521411_37 = PRIM_EQ(__symbolTable[19], _3521410_37);
if (True == _3521411_37) {
Obj _3521412_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3521412_37;
PUSH_CONT_0(co, 40, clofun0);
JUMP_WITH_ARGS_3(clofun0, globalRef(__symbolTable[9]), more, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun0, _3519776_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519776_37);
}
}

label40:
{
Obj _3521413_37 = __arg1;
Obj _3521414_37 = makeCons(__symbolTable[19], _3521413_37);
JUMP_RETURN(clofun0, _3521414_37);
}

label41:
{
JUMP_WITH_ARGS_2(clofun0, closureRef(co, 0), closureRef(co, 1));
}

label42:
{
Obj _3519763_37 = __arg1;
Obj _3519764_37 = __arg2;
Obj _3519765_37 = __arg3;
Obj _3519766_37 = co->args[4];
Obj _3521370_37 = PRIM_EQ(Nil, _3519763_37);
if (True == _3521370_37) {
pushCont(co, 45, clofun0, 2, _3519765_37, _3519766_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[72]), _3519764_37);
} else {
Obj _3519768_37 = makeNative(43, clofun0, 0, 4, _3519763_37, _3519764_37, _3519765_37, _3519766_37);
Obj _3521397_37 = PRIM_ISCONS(_3519763_37);
if (True == _3521397_37) {
Obj _3521398_37 = PRIM_CAR(_3519763_37);
Obj _3521399_37 = PRIM_ISCONS(_3521398_37);
if (True == _3521399_37) {
Obj _3521400_37 = PRIM_CAR(_3519763_37);
Obj _3521401_37 = PRIM_CAR(_3521400_37);
Obj _3521402_37 = PRIM_EQ(__symbolTable[10], _3521401_37);
if (True == _3521402_37) {
Obj _3521403_37 = PRIM_CAR(_3519763_37);
Obj _3521404_37 = PRIM_CDR(_3521403_37);
Obj exp = _3521404_37;
Obj _3521405_37 = PRIM_CDR(_3519763_37);
Obj more = _3521405_37;
Obj _3521406_37 = makeCons(__symbolTable[19], exp);
Obj _3521407_37 = makeCons(_3521406_37, _3519764_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3521407_37;
__arg3 = _3519765_37;
co->args[4] = _3519766_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, _3519768_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519768_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519768_37);
}
}
}

label43:
{
Obj _3519769_37 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3521386_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521386_37) {
Obj _3521387_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521388_37 = PRIM_ISCONS(_3521387_37);
if (True == _3521388_37) {
Obj _3521389_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521390_37 = PRIM_CAR(_3521389_37);
Obj _3521391_37 = PRIM_EQ(__symbolTable[12], _3521390_37);
if (True == _3521391_37) {
Obj _3521392_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521393_37 = PRIM_CDR(_3521392_37);
Obj exp = _3521393_37;
Obj _3521394_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3521394_37;
Obj _3521395_37 = makeCons(__symbolTable[11], exp);
Obj _3521396_37 = makeCons(_3521395_37, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3521396_37;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
JUMP_WITH_ARGS_1(clofun0, _3519769_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519769_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519769_37);
}
}

label44:
{
Obj _3521373_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521373_37) {
Obj _3521374_37 = PRIM_CAR(closureRef(co, 0));
Obj exp = _3521374_37;
Obj _3521375_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3521375_37;
Obj _3521376_37 = makeCons(exp, Nil);
Obj _3521377_37 = makeCons(__symbolTable[14], _3521376_37);
Obj _3521378_37 = makeCons(_3521377_37, Nil);
Obj _3521379_37 = makeCons(__symbolTable[15], _3521378_37);
Obj _3521380_37 = makeCons(__symbolTable[13], Nil);
Obj _3521381_37 = makeCons(_3521380_37, Nil);
Obj _3521382_37 = makeCons(_3521379_37, _3521381_37);
Obj _3521383_37 = makeCons(__symbolTable[16], _3521382_37);
Obj _3521384_37 = makeCons(_3521383_37, closureRef(co, 1));
Obj _3521385_37 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3521384_37;
__arg3 = _3521385_37;
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
Obj _3521371_37 = __arg1;
Obj _3519765_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519766_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun0, 2, _3519766_37, _3521371_37);
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[72]), _3519765_37);
}

label46:
{
Obj _3521372_37 = __arg1;
Obj _3519766_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521371_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun0, _3519766_37, _3521371_37, _3521372_37);
}

label47:
{
Obj _3519757_37 = __arg1;
Obj _3519758_37 = makeNative(48, clofun0, 0, 1, _3519757_37);
Obj _3521360_37 = PRIM_ISCONS(_3519757_37);
if (True == _3521360_37) {
Obj _3521361_37 = PRIM_CAR(_3519757_37);
Obj _3521362_37 = PRIM_EQ(__symbolTable[18], _3521361_37);
if (True == _3521362_37) {
Obj _3521363_37 = PRIM_CDR(_3519757_37);
Obj _3521364_37 = PRIM_ISCONS(_3521363_37);
if (True == _3521364_37) {
Obj _3521365_37 = PRIM_CDR(_3519757_37);
Obj _3521366_37 = PRIM_CAR(_3521365_37);
Obj _3521367_37 = PRIM_CDR(_3519757_37);
Obj _3521368_37 = PRIM_CDR(_3521367_37);
Obj remain = _3521368_37;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, _3519758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519758_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519758_37);
}
}

label48:
{
Obj _3519759_37 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj _3521356_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521356_37) {
Obj _3521357_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521358_37 = PRIM_EQ(__symbolTable[19], _3521357_37);
if (True == _3521358_37) {
Obj _3521359_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3521359_37;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, _3519759_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519759_37);
}
}

label49:
{
Obj _3519760_37 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj _3521347_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521347_37) {
Obj _3521348_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521349_37 = PRIM_ISCONS(_3521348_37);
if (True == _3521349_37) {
Obj _3521350_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521351_37 = PRIM_CAR(_3521350_37);
Obj _3521352_37 = PRIM_EQ(__symbolTable[20], _3521351_37);
if (True == _3521352_37) {
Obj _3521353_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521354_37 = PRIM_CDR(_3521353_37);
Obj _3521355_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3521355_37;
JUMP_WITH_ARGS_2(clofun0, globalRef(__symbolTable[22]), remain);
} else {
JUMP_WITH_ARGS_1(clofun0, _3519760_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519760_37);
}
} else {
JUMP_WITH_ARGS_1(clofun0, _3519760_37);
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
Obj _3519761_37 = makeNative(2, clofun1, 0, 0);
Obj _3521329_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3521329_37) {
Obj _3521330_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521331_37 = PRIM_ISCONS(_3521330_37);
if (True == _3521331_37) {
Obj _3521332_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521333_37 = PRIM_CAR(_3521332_37);
Obj _3521334_37 = PRIM_EQ(__symbolTable[21], _3521333_37);
if (True == _3521334_37) {
Obj _3521335_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521336_37 = PRIM_CDR(_3521335_37);
Obj _3521337_37 = PRIM_ISCONS(_3521336_37);
if (True == _3521337_37) {
Obj _3521338_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521339_37 = PRIM_CDR(_3521338_37);
Obj _3521340_37 = PRIM_CAR(_3521339_37);
Obj pkg = _3521340_37;
Obj _3521341_37 = PRIM_CAR(closureRef(co, 0));
Obj _3521342_37 = PRIM_CDR(_3521341_37);
Obj _3521343_37 = PRIM_CDR(_3521342_37);
Obj _3521344_37 = PRIM_EQ(Nil, _3521343_37);
if (True == _3521344_37) {
Obj _3521345_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3521345_37;
pushCont(co, 1, clofun1, 1, remain);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[135]), pkg);
} else {
JUMP_WITH_ARGS_1(clofun1, _3519761_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3519761_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3519761_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3519761_37);
}
} else {
JUMP_WITH_ARGS_1(clofun1, _3519761_37);
}
}

label1:
{
Obj _3521346_37 = __arg1;
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
Obj _3521319_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = _3521319_37;
pushCont(co, 5, clofun1, 3, to, globals, groups);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[69]), bc);
}

label5:
{
Obj _3521320_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = _3521320_37;
pushCont(co, 6, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("#include \"types.h\"\n"));
}

label6:
{
Obj _3521321_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("#include \"runtime.h\"\n\n"));
}

label7:
{
Obj _3521322_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(12, clofun1, 1, 2, maxid, to), groups);
}

label8:
{
Obj _3521325_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("\n\n"));
}

label9:
{
Obj _3521326_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun1, 4, to, maxid, globals, groups);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[25]), to, globals);
}

label10:
{
Obj _3521327_37 = __arg1;
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
Obj _3521323_37 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[46]), closureRef(co, 1), _3521323_37, closureRef(co, 0));
}

label14:
{
Obj _3521324_37 = __arg1;
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
Obj _3521304_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("void entry(struct Cora *co) {\n"));
}

label17:
{
Obj _3521305_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("__symbolTable = (Obj*)malloc(sizeof(Obj) * "));
}

label18:
{
Obj _3521306_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 19, clofun1, 2, globals, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), globals);
}

label19:
{
Obj _3521307_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[60]), to, _3521307_37);
}

label20:
{
Obj _3521308_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun1, 2, globals, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString(");\n"));
}

label21:
{
Obj _3521309_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun1, 1, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[131]), makeNative(23, clofun1, 2, 1, to), MAKE_NUMBER(0), globals);
}

label22:
{
Obj _3521317_37 = __arg1;
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
Obj _3521310_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[60]), closureRef(co, 0), acc);
}

label25:
{
Obj _3521311_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun1, 2, sym, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("] = intern(\""));
}

label26:
{
Obj _3521312_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun1, 1, acc);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[24]), sym);
}

label27:
{
Obj _3521313_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), _3521313_37);
}

label28:
{
Obj _3521314_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun1, 1, acc);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), closureRef(co, 0), makeCString("\");\n"));
}

label29:
{
Obj _3521315_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521316_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
JUMP_RETURN(clofun1, _3521316_37);
}

label30:
{
Obj _3519751_37 = __arg1;
Obj _3519752_37 = __arg2;
Obj _3519753_37 = __arg3;
Obj _3519754_37 = co->args[4];
Obj _3521289_37 = PRIM_EQ(Nil, _3519754_37);
if (True == _3521289_37) {
pushCont(co, 32, clofun1, 2, _3519753_37, _3519751_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[108]), _3519753_37);
} else {
Obj _3521294_37 = PRIM_ISCONS(_3519754_37);
if (True == _3521294_37) {
Obj _3521295_37 = PRIM_CAR(_3519754_37);
Obj bc = _3521295_37;
Obj _3521296_37 = PRIM_CDR(_3519754_37);
Obj more = _3521296_37;
Obj _3521297_37 = PRIM_EQ(_3519752_37, globalRef(__symbolTable[50]));
if (True == _3521297_37) {
pushCont(co, 31, clofun1, 3, _3519751_37, bc, more);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3519753_37);
} else {
Obj _3521301_37 = PRIM_ADD(_3519752_37, MAKE_NUMBER(1));
Obj _3521302_37 = makeCons(bc, _3519753_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3519751_37;
__arg2 = _3521301_37;
__arg3 = _3521302_37;
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
Obj _3521298_37 = __arg1;
Obj _3519751_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3521299_37 = makeCons(_3521298_37, _3519751_37);
Obj _3521300_37 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3521299_37;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _3521300_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3521290_37 = __arg1;
Obj _3519753_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519751_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3521291_37 = primNot(_3521290_37);
if (True == _3521291_37) {
pushCont(co, 33, clofun1, 1, _3519751_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3519753_37);
} else {
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3519751_37);
}
}

label33:
{
Obj _3521292_37 = __arg1;
Obj _3519751_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521293_37 = makeCons(_3521292_37, _3519751_37);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[72]), _3521293_37);
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
Obj _3521268_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[46]), to, _3521268_37, maxid);
}

label36:
{
Obj _3521269_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 37, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("{\n"));
}

label37:
{
Obj _3521270_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("int __nargs = co->nargs;\n"));
}

label38:
{
Obj _3521271_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 39, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg0 = co->args[0];\n"));
}

label39:
{
Obj _3521272_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 40, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg1 = co->args[1];\n"));
}

label40:
{
Obj _3521273_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 41, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg2 = co->args[2];\n"));
}

label41:
{
Obj _3521274_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("Obj __arg3 = co->args[3];\n\n"));
}

label42:
{
Obj _3521275_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 43, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("static void* jumpTable[] = {"));
}

label43:
{
Obj _3521276_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 44, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_2(clofun1, globalRef(__symbolTable[96]), group);
}

label44:
{
Obj _3521277_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_4(clofun1, globalRef(__symbolTable[28]), to, MAKE_NUMBER(0), _3521277_37);
}

label45:
{
Obj _3521278_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 46, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("};\n\n"));
}

label46:
{
Obj _3521279_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 47, clofun1, 4, maxid, globals, group, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("goto *jumpTable[co->ctx.pc.label];\n\n"));
}

label47:
{
Obj _3521280_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 48, clofun1, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[47]), makeNative(5, clofun2, 1, 3, to, maxid, globals), group);
}

label48:
{
Obj _3521281_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun1, 1, to);
JUMP_WITH_ARGS_3(clofun1, globalRef(__symbolTable[61]), to, makeCString("fail:\n"));
}

label49:
{
Obj _3521282_37 = __arg1;
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
Obj _3521283_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[0] = __arg0;\n"));
}

label1:
{
Obj _3521284_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 2, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[1] = __arg1;\n"));
}

label2:
{
Obj _3521285_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[2] = __arg2;\n"));
}

label3:
{
Obj _3521286_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 4, clofun2, 1, to);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("co->args[3] = __arg3;\n"));
}

label4:
{
Obj _3521287_37 = __arg1;
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
Obj _3521261_37 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _3521261_37) {
pushCont(co, 9, clofun2, 2, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString("&&label0"));
} else {
Obj _3521263_37 = PRIM_LT(i, n);
if (True == _3521263_37) {
pushCont(co, 7, clofun2, 3, i, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), to, makeCString(", &&label"));
} else {
JUMP_RETURN(clofun2, Nil);
}
}
}

label7:
{
Obj _3521264_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun2, 3, i, to, n);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), to, i);
}

label8:
{
Obj _3521265_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3521266_37 = PRIM_ADD(i, MAKE_NUMBER(1));
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[28]), to, _3521266_37, n);
}

label9:
{
Obj _3521262_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[28]), to, MAKE_NUMBER(1), n);
}

label10:
{
Obj _3519747_37 = __arg1;
Obj _3519748_37 = __arg2;
Obj _3521255_37 = PRIM_EQ(Nil, _3519748_37);
if (True == _3521255_37) {
JUMP_RETURN(clofun2, Nil);
} else {
Obj _3521256_37 = PRIM_ISCONS(_3519748_37);
if (True == _3521256_37) {
Obj _3521257_37 = PRIM_CAR(_3519748_37);
Obj x = _3521257_37;
Obj _3521258_37 = PRIM_CDR(_3519748_37);
Obj y = _3521258_37;
pushCont(co, 11, clofun2, 2, _3519747_37, y);
JUMP_WITH_ARGS_2(clofun2, _3519747_37, x);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label11:
{
Obj _3521259_37 = __arg1;
Obj _3519747_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[47]), _3519747_37, y);
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
Obj _3521249_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
JUMP_WITH_ARGS_2(clofun2, _3521249_37, exp);
}

label14:
{
Obj _3521250_37 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[38]), _3521250_37);
}

label15:
{
Obj _3521251_37 = __arg1;
PUSH_CONT_0(co, 16, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[37]), _3521251_37);
}

label16:
{
Obj _3521252_37 = __arg1;
PUSH_CONT_0(co, 17, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[36]), _3521252_37);
}

label17:
{
Obj _3521253_37 = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[35]), _3521253_37);
}

label18:
{
Obj exp = __arg1;
pushCont(co, 19, clofun2, 1, exp);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[104]), exp);
}

label19:
{
Obj _3521246_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = _3521246_37;
pushCont(co, 20, clofun2, 1, obj);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[30]), exp);
}

label20:
{
Obj _3521247_37 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = _3521247_37;
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[33]), obj, fns);
}

label21:
{
Obj _3519743_37 = __arg1;
Obj _3519744_37 = __arg2;
Obj _3521239_37 = PRIM_EQ(Nil, _3519744_37);
if (True == _3521239_37) {
JUMP_RETURN(clofun2, _3519743_37);
} else {
Obj _3521240_37 = PRIM_ISCONS(_3519744_37);
if (True == _3521240_37) {
Obj _3521241_37 = PRIM_CAR(_3519744_37);
Obj hd = _3521241_37;
Obj _3521242_37 = PRIM_CDR(_3519744_37);
Obj more = _3521242_37;
Obj _3521243_37 = makeCons(_3519743_37, Nil);
Obj _3521244_37 = makeCons(hd, _3521243_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[33]), _3521244_37, more);
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
Obj _3521229_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = _3521229_37;
pushCont(co, 24, clofun2, 2, exp, v);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[63]), v, MAKE_NUMBER(0), MAKE_NUMBER(0));
}

label24:
{
Obj _3521230_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun2, 2, exp, v);
JUMP_WITH_ARGS_4(clofun2, globalRef(__symbolTable[63]), v, MAKE_NUMBER(1), Nil);
}

label25:
{
Obj _3521231_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun2, 1, v);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[66]), v, exp);
}

label26:
{
Obj _3521232_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = _3521232_37;
Obj _3521233_37 = makeCons(e1, Nil);
Obj _3521234_37 = makeCons(Nil, _3521233_37);
Obj _3521235_37 = makeCons(Nil, _3521234_37);
Obj _3521236_37 = makeCons(__symbolTable[94], _3521235_37);
pushCont(co, 27, clofun2, 1, v);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[64]), v, _3521236_37);
}

label27:
{
Obj _3521237_37 = __arg1;
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
Obj _3519737_37 = __arg1;
Obj _3519738_37 = __arg2;
Obj _3519739_37 = __arg3;
Obj _3519740_37 = co->args[4];
Obj _3519741_37 = makeNative(40, clofun2, 0, 1, _3519738_37);
Obj _3521164_37 = PRIM_ISCONS(_3519738_37);
if (True == _3521164_37) {
Obj _3521165_37 = PRIM_CAR(_3519738_37);
Obj label = _3521165_37;
Obj _3521166_37 = PRIM_CDR(_3519738_37);
Obj _3521167_37 = PRIM_ISCONS(_3521166_37);
if (True == _3521167_37) {
Obj _3521168_37 = PRIM_CDR(_3519738_37);
Obj _3521169_37 = PRIM_CAR(_3521168_37);
Obj _3521170_37 = PRIM_ISCONS(_3521169_37);
if (True == _3521170_37) {
Obj _3521171_37 = PRIM_CDR(_3519738_37);
Obj _3521172_37 = PRIM_CAR(_3521171_37);
Obj _3521173_37 = PRIM_CAR(_3521172_37);
Obj _3521174_37 = PRIM_EQ(__symbolTable[94], _3521173_37);
if (True == _3521174_37) {
Obj _3521175_37 = PRIM_CDR(_3519738_37);
Obj _3521176_37 = PRIM_CAR(_3521175_37);
Obj _3521177_37 = PRIM_CDR(_3521176_37);
Obj _3521178_37 = PRIM_ISCONS(_3521177_37);
if (True == _3521178_37) {
Obj _3521179_37 = PRIM_CDR(_3519738_37);
Obj _3521180_37 = PRIM_CAR(_3521179_37);
Obj _3521181_37 = PRIM_CDR(_3521180_37);
Obj _3521182_37 = PRIM_CAR(_3521181_37);
Obj params = _3521182_37;
Obj _3521183_37 = PRIM_CDR(_3519738_37);
Obj _3521184_37 = PRIM_CAR(_3521183_37);
Obj _3521185_37 = PRIM_CDR(_3521184_37);
Obj _3521186_37 = PRIM_CDR(_3521185_37);
Obj _3521187_37 = PRIM_ISCONS(_3521186_37);
if (True == _3521187_37) {
Obj _3521188_37 = PRIM_CDR(_3519738_37);
Obj _3521189_37 = PRIM_CAR(_3521188_37);
Obj _3521190_37 = PRIM_CDR(_3521189_37);
Obj _3521191_37 = PRIM_CDR(_3521190_37);
Obj _3521192_37 = PRIM_CAR(_3521191_37);
Obj actives = _3521192_37;
Obj _3521193_37 = PRIM_CDR(_3519738_37);
Obj _3521194_37 = PRIM_CAR(_3521193_37);
Obj _3521195_37 = PRIM_CDR(_3521194_37);
Obj _3521196_37 = PRIM_CDR(_3521195_37);
Obj _3521197_37 = PRIM_CDR(_3521196_37);
Obj _3521198_37 = PRIM_ISCONS(_3521197_37);
if (True == _3521198_37) {
Obj _3521199_37 = PRIM_CDR(_3519738_37);
Obj _3521200_37 = PRIM_CAR(_3521199_37);
Obj _3521201_37 = PRIM_CDR(_3521200_37);
Obj _3521202_37 = PRIM_CDR(_3521201_37);
Obj _3521203_37 = PRIM_CDR(_3521202_37);
Obj _3521204_37 = PRIM_CAR(_3521203_37);
Obj body = _3521204_37;
Obj _3521205_37 = PRIM_CDR(_3519738_37);
Obj _3521206_37 = PRIM_CAR(_3521205_37);
Obj _3521207_37 = PRIM_CDR(_3521206_37);
Obj _3521208_37 = PRIM_CDR(_3521207_37);
Obj _3521209_37 = PRIM_CDR(_3521208_37);
Obj _3521210_37 = PRIM_CDR(_3521209_37);
Obj _3521211_37 = PRIM_EQ(Nil, _3521210_37);
if (True == _3521211_37) {
Obj _3521212_37 = PRIM_CDR(_3519738_37);
Obj _3521213_37 = PRIM_CDR(_3521212_37);
Obj _3521214_37 = PRIM_EQ(Nil, _3521213_37);
if (True == _3521214_37) {
pushCont(co, 33, clofun2, 7, actives, _3519739_37, label, _3519740_37, params, body, _3519737_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), _3519737_37, makeCString("label"));
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
} else {
JUMP_WITH_ARGS_1(clofun2, _3519741_37);
}
}

label33:
{
Obj _3521215_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519739_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519740_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj _3521216_37 = PRIM_SUB(_3519739_37, label);
pushCont(co, 34, clofun2, 7, actives, _3519739_37, label, _3519740_37, params, body, _3519737_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[51]), _3521216_37, globalRef(__symbolTable[50]));
}

label34:
{
Obj _3521217_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519739_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519740_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 35, clofun2, 7, actives, _3519739_37, label, _3519740_37, params, body, _3519737_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), _3519737_37, _3521217_37);
}

label35:
{
Obj _3521218_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519739_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519740_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 36, clofun2, 7, actives, _3519739_37, label, _3519740_37, params, body, _3519737_37);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), _3519737_37, makeCString(":\n{\n"));
}

label36:
{
Obj _3521219_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519739_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519740_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 37, clofun2, 7, actives, _3519739_37, label, _3519740_37, params, body, _3519737_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[45]);
__arg2 = _3519737_37;
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
Obj _3521220_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519739_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519740_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 38, clofun2, 6, _3519739_37, label, _3519740_37, params, body, _3519737_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[43]);
__arg2 = _3519737_37;
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
Obj _3521221_37 = __arg1;
Obj _3519739_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519740_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3521222_37 = makeCons(_3519739_37, label);
pushCont(co, 39, clofun2, 1, _3519737_37);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3519740_37;
__arg2 = _3521222_37;
__arg3 = params;
co->args[4] = _3519737_37;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3521223_37 = __arg1;
Obj _3519737_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), _3519737_37, makeCString("}\n\n"));
}

label40:
{
PUSH_CONT_0(co, 41, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), makeCString("wrong format of toplevel\n"));
}

label41:
{
Obj _3521162_37 = __arg1;
PUSH_CONT_0(co, 42, clofun2);
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), closureRef(co, 0));
}

label42:
{
Obj _3521163_37 = __arg1;
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[40]), makeCString("\n"));
}

label43:
{
Obj _3519731_37 = __arg1;
Obj _3519732_37 = __arg2;
Obj _3519733_37 = __arg3;
Obj _3519734_37 = co->args[4];
Obj _3521155_37 = PRIM_EQ(Nil, _3519734_37);
if (True == _3521155_37) {
JUMP_RETURN(clofun2, Nil);
} else {
Obj _3521156_37 = PRIM_ISCONS(_3519734_37);
if (True == _3521156_37) {
Obj _3521157_37 = PRIM_CAR(_3519734_37);
Obj a = _3521157_37;
Obj _3521158_37 = PRIM_CDR(_3519734_37);
Obj b = _3521158_37;
pushCont(co, 44, clofun2, 4, _3519733_37, _3519731_37, _3519732_37, b);
JUMP_WITH_ARGS_4(clofun2, _3519731_37, _3519732_37, _3519733_37, a);
} else {
JUMP_WITH_ARGS_2(clofun2, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label44:
{
Obj _3521159_37 = __arg1;
Obj _3519733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519731_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519732_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3521160_37 = PRIM_ADD(_3519733_37, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = _3519731_37;
__arg2 = _3519732_37;
__arg3 = _3521160_37;
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
Obj _3521150_37 = __arg1;
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
Obj _3521151_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 48, clofun2, 2, i, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[61]), w, makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + "));
}

label48:
{
Obj _3521152_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun2, 1, w);
JUMP_WITH_ARGS_3(clofun2, globalRef(__symbolTable[60]), w, i);
}

label49:
{
Obj _3521153_37 = __arg1;
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
Obj _3521142_37 = __arg1;
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
Obj _3521143_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3521144_37 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _3521144_37) {
pushCont(co, 5, clofun3, 2, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(" = __arg"));
} else {
pushCont(co, 3, clofun3, 2, i, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(" = co->args["));
}
}

label3:
{
Obj _3521147_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, i);
}

label4:
{
Obj _3521148_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("];\n"));
}

label5:
{
Obj _3521145_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, i);
}

label6:
{
Obj _3521146_37 = __arg1;
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
Obj _3521138_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun3, 1, w);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), w, label, maxid);
}

label9:
{
Obj _3521139_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun3, 1, w);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("(struct Cora* co"));
}

label10:
{
Obj _3521140_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString(")"));
}

label11:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj _3521134_37 = PRIM_SUB(maxid, label);
Obj _3521135_37 = primDiv(_3521134_37, globalRef(__symbolTable[50]));
Obj gid = _3521135_37;
pushCont(co, 12, clofun3, 2, w, gid);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), w, makeCString("clofun"));
}

label12:
{
Obj _3521136_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), w, gid);
}

label13:
{
Obj _3519725_37 = __arg1;
Obj _3519726_37 = __arg2;
Obj _3519727_37 = __arg3;
Obj _3519728_37 = co->args[4];
Obj _3519729_37 = co->args[5];
Obj _3519730_37 = makeNative(36, clofun3, 0, 0);
Obj _3521094_37 = PRIM_ISCONS(_3519729_37);
if (True == _3521094_37) {
Obj _3521095_37 = PRIM_CAR(_3519729_37);
Obj _3521096_37 = PRIM_EQ(__symbolTable[67], _3521095_37);
if (True == _3521096_37) {
Obj _3521097_37 = PRIM_CDR(_3519729_37);
Obj _3521098_37 = PRIM_ISCONS(_3521097_37);
if (True == _3521098_37) {
Obj _3521099_37 = PRIM_CDR(_3519729_37);
Obj _3521100_37 = PRIM_CAR(_3521099_37);
Obj label = _3521100_37;
Obj _3521101_37 = PRIM_CDR(_3519729_37);
Obj _3521102_37 = PRIM_CDR(_3521101_37);
Obj stacks = _3521102_37;
Obj _3521103_37 = PRIM_EQ(stacks, Nil);
if (True == _3521103_37) {
pushCont(co, 25, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString("PUSH_CONT_0(co, "));
} else {
pushCont(co, 14, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString("pushCont(co, "));
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3519730_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3519730_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3519730_37);
}
}

label14:
{
Obj _3521118_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3521119_37 = PRIM_CAR(_3519726_37);
Obj _3521120_37 = PRIM_SUB(_3521119_37, label);
pushCont(co, 15, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[51]), _3521120_37, globalRef(__symbolTable[50]));
}

label15:
{
Obj _3521121_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 16, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3519728_37, _3521121_37);
}

label16:
{
Obj _3521122_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 17, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(", "));
}

label17:
{
Obj _3521123_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3521124_37 = PRIM_CAR(_3519726_37);
pushCont(co, 18, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), _3519728_37, label, _3521124_37);
}

label18:
{
Obj _3521125_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3521126_37 = PRIM_EQ(stacks, Nil);
if (True == _3521126_37) {
Nil;
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(");\n"));
} else {
pushCont(co, 19, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(", "));
}
}

label19:
{
Obj _3521127_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[96]), stacks);
}

label20:
{
Obj _3521128_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 21, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3519728_37, _3521128_37);
}

label21:
{
Obj _3521129_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun3, 1, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[47]), makeNative(23, clofun3, 1, 3, _3519725_37, _3519726_37, _3519728_37), stacks);
}

label22:
{
Obj _3521131_37 = __arg1;
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(");\n"));
}

label23:
{
Obj x = __arg1;
pushCont(co, 24, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 2), makeCString(", "));
}

label24:
{
Obj _3521130_37 = __arg1;
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
Obj _3521104_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3521105_37 = PRIM_CAR(_3519726_37);
Obj _3521106_37 = PRIM_SUB(_3521105_37, label);
pushCont(co, 26, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[51]), _3521106_37, globalRef(__symbolTable[50]));
}

label26:
{
Obj _3521107_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3519728_37, _3521107_37);
}

label27:
{
Obj _3521108_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun3, 5, label, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(", "));
}

label28:
{
Obj _3521109_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3521110_37 = PRIM_CAR(_3519726_37);
pushCont(co, 29, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_4(clofun3, globalRef(__symbolTable[54]), _3519728_37, label, _3521110_37);
}

label29:
{
Obj _3521111_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3521112_37 = PRIM_EQ(stacks, Nil);
if (True == _3521112_37) {
Nil;
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(");\n"));
} else {
pushCont(co, 30, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(", "));
}
}

label30:
{
Obj _3521113_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[96]), stacks);
}

label31:
{
Obj _3521114_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun3, 4, _3519725_37, _3519726_37, stacks, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), _3519728_37, _3521114_37);
}

label32:
{
Obj _3521115_37 = __arg1;
Obj _3519725_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519726_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 1, _3519728_37);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[47]), makeNative(34, clofun3, 1, 3, _3519725_37, _3519726_37, _3519728_37), stacks);
}

label33:
{
Obj _3521117_37 = __arg1;
Obj _3519728_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), _3519728_37, makeCString(");\n"));
}

label34:
{
Obj x = __arg1;
pushCont(co, 35, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 2), makeCString(", "));
}

label35:
{
Obj _3521116_37 = __arg1;
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
Obj _3521080_37 = primGenSym();
Obj generate_45inst_45list_45h = _3521080_37;
Obj _3521091_37 = primSet(co, generate_45inst_45list_45h, makeNative(39, clofun3, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
pushCont(co, 38, clofun3, 1, l);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), generate_45inst_45list_45h);
}

label38:
{
Obj _3521092_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, _3521092_37, l);
}

label39:
{
Obj x = __arg1;
Obj _3521081_37 = PRIM_EQ(Nil, x);
if (True == _3521081_37) {
JUMP_RETURN(clofun3, Nil);
} else {
Obj _3521082_37 = PRIM_ISCONS(x);
if (True == _3521082_37) {
Obj _3521083_37 = PRIM_CAR(x);
Obj a = _3521083_37;
Obj _3521084_37 = PRIM_CDR(x);
Obj b = _3521084_37;
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
Obj _3521085_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 41, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[108]), b);
}

label41:
{
Obj _3521086_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3521087_37 = primNot(_3521086_37);
if (True == _3521087_37) {
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
Obj _3521090_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, _3521090_37, b);
}

label43:
{
Obj _3521088_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 1, b);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label44:
{
Obj _3521089_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_2(clofun3, _3521089_37, b);
}

label45:
{
Obj globals = __arg1;
Obj self = __arg2;
Obj env1 = __arg3;
Obj w = co->args[4];
Obj x1 = co->args[5];
Obj _3520783_37 = primGenSym();
Obj generate_45inst_45h = _3520783_37;
Obj _3521077_37 = primSet(co, generate_45inst_45h, makeNative(47, clofun3, 2, 4, self, generate_45inst_45h, globals, w));
pushCont(co, 46, clofun3, 2, x1, env1);
JUMP_WITH_ARGS_2(clofun3, globalRef(__symbolTable[58]), generate_45inst_45h);
}

label46:
{
Obj _3521078_37 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_3(clofun3, _3521078_37, x1, env1);
}

label47:
{
Obj x2 = __arg1;
Obj env = __arg2;
Obj _3520784_37 = primIsSymbol(x2);
if (True == _3520784_37) {
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[55]), closureRef(co, 3), x2);
} else {
Obj _3519710_37 = makeNative(1, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), env, closureRef(co, 2), x2, closureRef(co, 3));
Obj _3521064_37 = PRIM_ISCONS(x2);
if (True == _3521064_37) {
Obj _3521065_37 = PRIM_CAR(x2);
Obj _3521066_37 = PRIM_EQ(__symbolTable[98], _3521065_37);
if (True == _3521066_37) {
Obj _3521067_37 = PRIM_CDR(x2);
Obj _3521068_37 = PRIM_ISCONS(_3521067_37);
if (True == _3521068_37) {
Obj _3521069_37 = PRIM_CDR(x2);
Obj _3521070_37 = PRIM_CAR(_3521069_37);
Obj x = _3521070_37;
Obj _3521071_37 = PRIM_CDR(x2);
Obj _3521072_37 = PRIM_CDR(_3521071_37);
Obj _3521073_37 = PRIM_EQ(Nil, _3521072_37);
if (True == _3521073_37) {
pushCont(co, 48, clofun3, 1, x);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("globalRef(__symbolTable["));
} else {
JUMP_WITH_ARGS_1(clofun3, _3519710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3519710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3519710_37);
}
} else {
JUMP_WITH_ARGS_1(clofun3, _3519710_37);
}
}
}

label48:
{
Obj _3521074_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 49, clofun3);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[56]), x, closureRef(co, 2));
}

label49:
{
Obj _3521075_37 = __arg1;
PUSH_CONT_0(co, 0, clofun4);
JUMP_WITH_ARGS_3(clofun3, globalRef(__symbolTable[60]), closureRef(co, 3), _3521075_37);
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
Obj _3521076_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString("])"));
}

label1:
{
Obj _3519711_37 = makeNative(4, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4), closureRef(co, 5));
Obj _3521052_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3521052_37) {
Obj _3521053_37 = PRIM_CAR(closureRef(co, 4));
Obj _3521054_37 = PRIM_EQ(__symbolTable[83], _3521053_37);
if (True == _3521054_37) {
Obj _3521055_37 = PRIM_CDR(closureRef(co, 4));
Obj _3521056_37 = PRIM_ISCONS(_3521055_37);
if (True == _3521056_37) {
Obj _3521057_37 = PRIM_CDR(closureRef(co, 4));
Obj _3521058_37 = PRIM_CAR(_3521057_37);
Obj idx = _3521058_37;
Obj _3521059_37 = PRIM_CDR(closureRef(co, 4));
Obj _3521060_37 = PRIM_CDR(_3521059_37);
Obj _3521061_37 = PRIM_EQ(Nil, _3521060_37);
if (True == _3521061_37) {
pushCont(co, 2, clofun4, 1, idx);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("closureRef(co, "));
} else {
JUMP_WITH_ARGS_1(clofun4, _3519711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519711_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519711_37);
}
}

label2:
{
Obj _3521062_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 3, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), idx);
}

label3:
{
Obj _3521063_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label4:
{
Obj _3519712_37 = makeNative(7, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 3), closureRef(co, 5));
Obj _3521040_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3521040_37) {
Obj _3521041_37 = PRIM_CAR(closureRef(co, 4));
Obj _3521042_37 = PRIM_EQ(__symbolTable[48], _3521041_37);
if (True == _3521042_37) {
Obj _3521043_37 = PRIM_CDR(closureRef(co, 4));
Obj _3521044_37 = PRIM_ISCONS(_3521043_37);
if (True == _3521044_37) {
Obj _3521045_37 = PRIM_CDR(closureRef(co, 4));
Obj _3521046_37 = PRIM_CAR(_3521045_37);
Obj idx = _3521046_37;
Obj _3521047_37 = PRIM_CDR(closureRef(co, 4));
Obj _3521048_37 = PRIM_CDR(_3521047_37);
Obj _3521049_37 = PRIM_EQ(Nil, _3521048_37);
if (True == _3521049_37) {
pushCont(co, 5, clofun4, 1, idx);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("stackRef(co, "));
} else {
JUMP_WITH_ARGS_1(clofun4, _3519712_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519712_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519712_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519712_37);
}
}

label5:
{
Obj _3521050_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 6, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), idx);
}

label6:
{
Obj _3521051_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label7:
{
Obj _3519713_37 = makeNative(17, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 0), closureRef(co, 3), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2));
Obj _3521016_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3521016_37) {
Obj _3521017_37 = PRIM_CAR(closureRef(co, 3));
Obj _3521018_37 = PRIM_EQ(__symbolTable[101], _3521017_37);
if (True == _3521018_37) {
Obj _3521019_37 = PRIM_CDR(closureRef(co, 3));
Obj _3521020_37 = PRIM_ISCONS(_3521019_37);
if (True == _3521020_37) {
Obj _3521021_37 = PRIM_CDR(closureRef(co, 3));
Obj _3521022_37 = PRIM_CAR(_3521021_37);
Obj x = _3521022_37;
Obj _3521023_37 = PRIM_CDR(closureRef(co, 3));
Obj _3521024_37 = PRIM_CDR(_3521023_37);
Obj _3521025_37 = PRIM_EQ(Nil, _3521024_37);
if (True == _3521025_37) {
Obj _3521026_37 = primIsSymbol(x);
if (True == _3521026_37) {
pushCont(co, 14, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("__symbolTable["));
} else {
pushCont(co, 8, clofun4, 1, x);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[88]), x);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519713_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519713_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519713_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519713_37);
}
}

label8:
{
Obj _3521030_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3521030_37) {
pushCont(co, 12, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("MAKE_NUMBER("));
} else {
Obj _3521033_37 = primIsString(x);
if (True == _3521033_37) {
pushCont(co, 9, clofun4, 1, x);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("makeCString(\""));
} else {
Obj _3521037_37 = PRIM_EQ(x, Nil);
if (True == _3521037_37) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("Nil"));
} else {
Obj _3521038_37 = PRIM_EQ(x, True);
if (True == _3521038_37) {
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("True"));
} else {
Obj _3521039_37 = PRIM_EQ(x, False);
if (True == _3521039_37) {
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
Obj _3521034_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 10, clofun4);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[49]), x);
}

label10:
{
Obj _3521035_37 = __arg1;
PUSH_CONT_0(co, 11, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), _3521035_37);
}

label11:
{
Obj _3521036_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("\")"));
}

label12:
{
Obj _3521031_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), x);
}

label13:
{
Obj _3521032_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label14:
{
Obj _3521027_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 15, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[56]), x, closureRef(co, 4));
}

label15:
{
Obj _3521028_37 = __arg1;
PUSH_CONT_0(co, 16, clofun4);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[60]), closureRef(co, 5), _3521028_37);
}

label16:
{
Obj _3521029_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("]"));
}

label17:
{
Obj _3519714_37 = makeNative(32, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 5), closureRef(co, 3));
Obj _3520973_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3520973_37) {
Obj _3520974_37 = PRIM_CAR(closureRef(co, 2));
Obj _3520975_37 = PRIM_EQ(__symbolTable[91], _3520974_37);
if (True == _3520975_37) {
Obj _3520976_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520977_37 = PRIM_ISCONS(_3520976_37);
if (True == _3520977_37) {
Obj _3520978_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520979_37 = PRIM_CAR(_3520978_37);
Obj a = _3520979_37;
Obj _3520980_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520981_37 = PRIM_CDR(_3520980_37);
Obj _3520982_37 = PRIM_ISCONS(_3520981_37);
if (True == _3520982_37) {
Obj _3520983_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520984_37 = PRIM_CDR(_3520983_37);
Obj _3520985_37 = PRIM_CAR(_3520984_37);
Obj b = _3520985_37;
Obj _3520986_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520987_37 = PRIM_CDR(_3520986_37);
Obj _3520988_37 = PRIM_CDR(_3520987_37);
Obj _3520989_37 = PRIM_ISCONS(_3520988_37);
if (True == _3520989_37) {
Obj _3520990_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520991_37 = PRIM_CDR(_3520990_37);
Obj _3520992_37 = PRIM_CDR(_3520991_37);
Obj _3520993_37 = PRIM_CAR(_3520992_37);
Obj c = _3520993_37;
Obj _3520994_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520995_37 = PRIM_CDR(_3520994_37);
Obj _3520996_37 = PRIM_CDR(_3520995_37);
Obj _3520997_37 = PRIM_CDR(_3520996_37);
Obj _3520998_37 = PRIM_EQ(Nil, _3520997_37);
if (True == _3520998_37) {
pushCont(co, 18, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[129]), a, closureRef(co, 5));
} else {
JUMP_WITH_ARGS_1(clofun4, _3519714_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519714_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519714_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519714_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519714_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519714_37);
}
}

label18:
{
Obj _3520999_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = _3520999_37;
Obj _3521000_37 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _3521000_37) {
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
Obj _3521009_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 20, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(" = "));
}

label20:
{
Obj _3521010_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label21:
{
Obj _3521011_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, _3521011_37, b, closureRef(co, 5));
}

label22:
{
Obj _3521012_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label23:
{
Obj _3521013_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun4, 2, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label24:
{
Obj _3521014_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3521015_37 = makeCons(a, closureRef(co, 5));
JUMP_WITH_ARGS_3(clofun4, _3521014_37, c, _3521015_37);
}

label25:
{
Obj _3521001_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 26, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[55]), closureRef(co, 3), a);
}

label26:
{
Obj _3521002_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 27, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(" = "));
}

label27:
{
Obj _3521003_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 28, clofun4, 3, b, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label28:
{
Obj _3521004_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 29, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, _3521004_37, b, closureRef(co, 5));
}

label29:
{
Obj _3521005_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 30, clofun4, 2, a, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label30:
{
Obj _3521006_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun4, 2, a, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label31:
{
Obj _3521007_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3521008_37 = makeCons(a, closureRef(co, 5));
JUMP_WITH_ARGS_3(clofun4, _3521007_37, c, _3521008_37);
}

label32:
{
Obj _3519715_37 = makeNative(39, clofun4, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 0), closureRef(co, 4), closureRef(co, 5));
Obj _3520949_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3520949_37) {
Obj _3520950_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520951_37 = PRIM_ISCONS(_3520950_37);
if (True == _3520951_37) {
Obj _3520952_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520953_37 = PRIM_CAR(_3520952_37);
Obj _3520954_37 = PRIM_EQ(__symbolTable[95], _3520953_37);
if (True == _3520954_37) {
Obj _3520955_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520956_37 = PRIM_CDR(_3520955_37);
Obj _3520957_37 = PRIM_ISCONS(_3520956_37);
if (True == _3520957_37) {
Obj _3520958_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520959_37 = PRIM_CDR(_3520958_37);
Obj _3520960_37 = PRIM_CAR(_3520959_37);
Obj f = _3520960_37;
Obj _3520961_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520962_37 = PRIM_CDR(_3520961_37);
Obj _3520963_37 = PRIM_CDR(_3520962_37);
Obj _3520964_37 = PRIM_EQ(Nil, _3520963_37);
if (True == _3520964_37) {
Obj _3520965_37 = PRIM_CDR(closureRef(co, 1));
Obj args = _3520965_37;
pushCont(co, 33, clofun4, 2, f, args);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[107]), f);
} else {
JUMP_WITH_ARGS_1(clofun4, _3519715_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519715_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519715_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519715_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519715_37);
}
}

label33:
{
Obj _3520966_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun4, 2, f, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), _3520966_37);
}

label34:
{
Obj _3520967_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520968_37 = PRIM_EQ(f, __symbolTable[126]);
if (True == _3520968_37) {
pushCont(co, 37, clofun4, 1, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("(co, "));
} else {
pushCont(co, 35, clofun4, 1, args);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("("));
}
}

label35:
{
Obj _3520971_37 = __arg1;
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
Obj _3520972_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label37:
{
Obj _3520969_37 = __arg1;
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
Obj _3520970_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label39:
{
Obj _3519716_37 = makeNative(49, clofun4, 0, 6, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5));
Obj _3520914_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3520914_37) {
Obj _3520915_37 = PRIM_CAR(closureRef(co, 2));
Obj _3520916_37 = PRIM_EQ(__symbolTable[92], _3520915_37);
if (True == _3520916_37) {
Obj _3520917_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520918_37 = PRIM_ISCONS(_3520917_37);
if (True == _3520918_37) {
Obj _3520919_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520920_37 = PRIM_CAR(_3520919_37);
Obj a = _3520920_37;
Obj _3520921_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520922_37 = PRIM_CDR(_3520921_37);
Obj _3520923_37 = PRIM_ISCONS(_3520922_37);
if (True == _3520923_37) {
Obj _3520924_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520925_37 = PRIM_CDR(_3520924_37);
Obj _3520926_37 = PRIM_CAR(_3520925_37);
Obj b = _3520926_37;
Obj _3520927_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520928_37 = PRIM_CDR(_3520927_37);
Obj _3520929_37 = PRIM_CDR(_3520928_37);
Obj _3520930_37 = PRIM_ISCONS(_3520929_37);
if (True == _3520930_37) {
Obj _3520931_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520932_37 = PRIM_CDR(_3520931_37);
Obj _3520933_37 = PRIM_CDR(_3520932_37);
Obj _3520934_37 = PRIM_CAR(_3520933_37);
Obj c = _3520934_37;
Obj _3520935_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520936_37 = PRIM_CDR(_3520935_37);
Obj _3520937_37 = PRIM_CDR(_3520936_37);
Obj _3520938_37 = PRIM_CDR(_3520937_37);
Obj _3520939_37 = PRIM_EQ(Nil, _3520938_37);
if (True == _3520939_37) {
pushCont(co, 40, clofun4, 3, a, b, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("if (True == "));
} else {
JUMP_WITH_ARGS_1(clofun4, _3519716_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519716_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519716_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519716_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519716_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519716_37);
}
}

label40:
{
Obj _3520940_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 41, clofun4, 3, a, b, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label41:
{
Obj _3520941_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun4, 2, b, c);
JUMP_WITH_ARGS_3(clofun4, _3520941_37, a, closureRef(co, 4));
}

label42:
{
Obj _3520942_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 43, clofun4, 2, b, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(") {\n"));
}

label43:
{
Obj _3520943_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun4, 2, b, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label44:
{
Obj _3520944_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 1, c);
JUMP_WITH_ARGS_3(clofun4, _3520944_37, b, closureRef(co, 4));
}

label45:
{
Obj _3520945_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 46, clofun4, 1, c);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("} else {\n"));
}

label46:
{
Obj _3520946_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 47, clofun4, 1, c);
JUMP_WITH_ARGS_2(clofun4, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label47:
{
Obj _3520947_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun4);
JUMP_WITH_ARGS_3(clofun4, _3520947_37, c, closureRef(co, 4));
}

label48:
{
Obj _3520948_37 = __arg1;
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("}\n"));
}

label49:
{
Obj _3519717_37 = makeNative(13, clofun5, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 5), closureRef(co, 0), closureRef(co, 4));
Obj _3520881_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3520881_37) {
Obj _3520882_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520883_37 = PRIM_EQ(__symbolTable[77], _3520882_37);
if (True == _3520883_37) {
Obj _3520884_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520885_37 = PRIM_ISCONS(_3520884_37);
if (True == _3520885_37) {
Obj _3520886_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520887_37 = PRIM_CAR(_3520886_37);
Obj label = _3520887_37;
Obj _3520888_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520889_37 = PRIM_CDR(_3520888_37);
Obj _3520890_37 = PRIM_ISCONS(_3520889_37);
if (True == _3520890_37) {
Obj _3520891_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520892_37 = PRIM_CDR(_3520891_37);
Obj _3520893_37 = PRIM_CAR(_3520892_37);
Obj nargs = _3520893_37;
Obj _3520894_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520895_37 = PRIM_CDR(_3520894_37);
Obj _3520896_37 = PRIM_CDR(_3520895_37);
Obj frees = _3520896_37;
pushCont(co, 0, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun4, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("makeNative("));
} else {
JUMP_WITH_ARGS_1(clofun4, _3519717_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519717_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519717_37);
}
} else {
JUMP_WITH_ARGS_1(clofun4, _3519717_37);
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
Obj _3520897_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3520898_37 = PRIM_CAR(closureRef(co, 3));
Obj _3520899_37 = PRIM_SUB(_3520898_37, label);
pushCont(co, 1, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[51]), _3520899_37, globalRef(__symbolTable[50]));
}

label1:
{
Obj _3520900_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), _3520900_37);
}

label2:
{
Obj _3520901_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 3, clofun5, 3, label, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label3:
{
Obj _3520902_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3520903_37 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 4, clofun5, 2, nargs, frees);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 5), label, _3520903_37);
}

label4:
{
Obj _3520904_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 5, clofun5, 2, nargs, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label5:
{
Obj _3520905_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), nargs);
}

label6:
{
Obj _3520906_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 7, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label7:
{
Obj _3520907_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun5, 1, frees);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[96]), frees);
}

label8:
{
Obj _3520908_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 9, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 5), _3520908_37);
}

label9:
{
Obj _3520909_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun5, 1, frees);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[108]), frees);
}

label10:
{
Obj _3520910_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520911_37 = primNot(_3520910_37);
if (True == _3520911_37) {
pushCont(co, 11, clofun5, 1, frees);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
} else {
Nil;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}
}

label11:
{
Obj _3520912_37 = __arg1;
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
Obj _3520913_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(")"));
}

label13:
{
Obj _3519718_37 = makeNative(18, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5), closureRef(co, 3));
Obj _3520860_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3520860_37) {
Obj _3520861_37 = PRIM_CAR(closureRef(co, 2));
Obj _3520862_37 = PRIM_EQ(__symbolTable[90], _3520861_37);
if (True == _3520862_37) {
Obj _3520863_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520864_37 = PRIM_ISCONS(_3520863_37);
if (True == _3520864_37) {
Obj _3520865_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520866_37 = PRIM_CAR(_3520865_37);
Obj a = _3520866_37;
Obj _3520867_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520868_37 = PRIM_CDR(_3520867_37);
Obj _3520869_37 = PRIM_ISCONS(_3520868_37);
if (True == _3520869_37) {
Obj _3520870_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520871_37 = PRIM_CDR(_3520870_37);
Obj _3520872_37 = PRIM_CAR(_3520871_37);
Obj b = _3520872_37;
Obj _3520873_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520874_37 = PRIM_CDR(_3520873_37);
Obj _3520875_37 = PRIM_CDR(_3520874_37);
Obj _3520876_37 = PRIM_EQ(Nil, _3520875_37);
if (True == _3520876_37) {
pushCont(co, 14, clofun5, 2, a, b);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
} else {
JUMP_WITH_ARGS_1(clofun5, _3519718_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519718_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519718_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519718_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519718_37);
}
}

label14:
{
Obj _3520877_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 1, b);
JUMP_WITH_ARGS_3(clofun5, _3520877_37, a, closureRef(co, 5));
}

label15:
{
Obj _3520878_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun5, 1, b);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 3), makeCString(";\n"));
}

label16:
{
Obj _3520879_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun5, 1, b);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label17:
{
Obj _3520880_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, _3520880_37, b, closureRef(co, 5));
}

label18:
{
Obj _3519719_37 = makeNative(24, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 5), closureRef(co, 1), closureRef(co, 3), closureRef(co, 4));
Obj _3520843_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3520843_37) {
Obj _3520844_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520845_37 = PRIM_EQ(__symbolTable[78], _3520844_37);
if (True == _3520845_37) {
Obj _3520846_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520847_37 = PRIM_ISCONS(_3520846_37);
if (True == _3520847_37) {
Obj _3520848_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520849_37 = PRIM_CAR(_3520848_37);
Obj x = _3520849_37;
Obj _3520850_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520851_37 = PRIM_CDR(_3520850_37);
Obj _3520852_37 = PRIM_EQ(Nil, _3520851_37);
if (True == _3520852_37) {
pushCont(co, 19, clofun5, 1, x);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString("JUMP_RETURN("));
} else {
JUMP_WITH_ARGS_1(clofun5, _3519719_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519719_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519719_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519719_37);
}
}

label19:
{
Obj _3520853_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520854_37 = PRIM_CDR(closureRef(co, 2));
Obj _3520855_37 = PRIM_CAR(closureRef(co, 2));
pushCont(co, 20, clofun5, 1, x);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 5), _3520854_37, _3520855_37);
}

label20:
{
Obj _3520856_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun5, 1, x);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(", "));
}

label21:
{
Obj _3520857_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 22, clofun5, 1, x);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 3));
}

label22:
{
Obj _3520858_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 23, clofun5);
JUMP_WITH_ARGS_3(clofun5, _3520858_37, x, closureRef(co, 4));
}

label23:
{
Obj _3520859_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 5), makeCString(");\n"));
}

label24:
{
Obj _3519720_37 = makeNative(26, clofun5, 0, 6, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5));
Obj _3520832_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3520832_37) {
Obj _3520833_37 = PRIM_CAR(closureRef(co, 3));
Obj _3520834_37 = PRIM_EQ(__symbolTable[80], _3520833_37);
if (True == _3520834_37) {
Obj _3520835_37 = PRIM_CDR(closureRef(co, 3));
Obj _3520836_37 = PRIM_ISCONS(_3520835_37);
if (True == _3520836_37) {
Obj _3520837_37 = PRIM_CDR(closureRef(co, 3));
Obj _3520838_37 = PRIM_CAR(_3520837_37);
Obj exp = _3520838_37;
Obj _3520839_37 = PRIM_CDR(closureRef(co, 3));
Obj _3520840_37 = PRIM_CDR(_3520839_37);
Obj _3520841_37 = PRIM_EQ(Nil, _3520840_37);
if (True == _3520841_37) {
pushCont(co, 25, clofun5, 1, exp);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
} else {
JUMP_WITH_ARGS_1(clofun5, _3519720_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519720_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519720_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519720_37);
}
}

label25:
{
Obj _3520842_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, _3520842_37, exp, closureRef(co, 5));
}

label26:
{
Obj _3519721_37 = makeNative(29, clofun5, 0, 5, closureRef(co, 0), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3520813_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520813_37) {
Obj _3520814_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520815_37 = PRIM_EQ(__symbolTable[79], _3520814_37);
if (True == _3520815_37) {
Obj _3520816_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520817_37 = PRIM_ISCONS(_3520816_37);
if (True == _3520817_37) {
Obj _3520818_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520819_37 = PRIM_CAR(_3520818_37);
Obj exp = _3520819_37;
Obj _3520820_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520821_37 = PRIM_CDR(_3520820_37);
Obj _3520822_37 = PRIM_ISCONS(_3520821_37);
if (True == _3520822_37) {
Obj _3520823_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520824_37 = PRIM_CDR(_3520823_37);
Obj _3520825_37 = PRIM_CAR(_3520824_37);
Obj cont = _3520825_37;
Obj _3520826_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520827_37 = PRIM_CDR(_3520826_37);
Obj _3520828_37 = PRIM_CDR(_3520827_37);
Obj _3520829_37 = PRIM_EQ(Nil, _3520828_37);
if (True == _3520829_37) {
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
JUMP_WITH_ARGS_1(clofun5, _3519721_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519721_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519721_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519721_37);
}
} else {
JUMP_WITH_ARGS_1(clofun5, _3519721_37);
}
}

label27:
{
Obj _3520830_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun5, 1, exp);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[58]), closureRef(co, 4));
}

label28:
{
Obj _3520831_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun5, _3520831_37, exp, closureRef(co, 5));
}

label29:
{
Obj _3520785_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520785_37) {
Obj _3520786_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3520786_37;
Obj _3520787_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3520787_37;
pushCont(co, 30, clofun5, 2, f, args);
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[96]), args);
} else {
JUMP_WITH_ARGS_2(clofun5, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label30:
{
Obj _3520788_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520789_37 = PRIM_ADD(MAKE_NUMBER(1), _3520788_37);
Obj nargs = _3520789_37;
Obj _3520790_37 = PRIM_LT(nargs, MAKE_NUMBER(5));
if (True == _3520790_37) {
pushCont(co, 41, clofun5, 3, nargs, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("JUMP_WITH_ARGS_"));
} else {
pushCont(co, 31, clofun5, 3, nargs, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("__nargs = "));
}
}

label31:
{
Obj _3520800_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 32, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 4), nargs);
}

label32:
{
Obj _3520801_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(";\n"));
}

label33:
{
Obj _3520802_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520803_37 = makeCons(f, args);
PUSH_CONT_0(co, 34, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 4);
co->args[4] = MAKE_NUMBER(0);
co->args[5] = _3520803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3520804_37 = __arg1;
PUSH_CONT_0(co, 35, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("co->ctx.frees = __arg0;\n"));
}

label35:
{
Obj _3520805_37 = __arg1;
PUSH_CONT_0(co, 36, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n"));
}

label36:
{
Obj _3520806_37 = __arg1;
PUSH_CONT_0(co, 37, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n"));
}

label37:
{
Obj _3520807_37 = __arg1;
PUSH_CONT_0(co, 38, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("if (ps.func != "));
}

label38:
{
Obj _3520808_37 = __arg1;
Obj _3520809_37 = PRIM_CDR(closureRef(co, 3));
Obj _3520810_37 = PRIM_CAR(closureRef(co, 3));
PUSH_CONT_0(co, 39, clofun5);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 4), _3520809_37, _3520810_37);
}

label39:
{
Obj _3520811_37 = __arg1;
PUSH_CONT_0(co, 40, clofun5);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(") { co->ctx.pc = ps; goto fail; };\n"));
}

label40:
{
Obj _3520812_37 = __arg1;
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("goto *jumpTable[ps.label];\n"));
}

label41:
{
Obj _3520791_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[60]), closureRef(co, 4), nargs);
}

label42:
{
Obj _3520792_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 43, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString("("));
}

label43:
{
Obj _3520793_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520794_37 = PRIM_CDR(closureRef(co, 3));
Obj _3520795_37 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 44, clofun5, 2, f, args);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[54]), closureRef(co, 4), _3520794_37, _3520795_37);
}

label44:
{
Obj _3520796_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun5, 2, f, args);
JUMP_WITH_ARGS_3(clofun5, globalRef(__symbolTable[61]), closureRef(co, 4), makeCString(", "));
}

label45:
{
Obj _3520797_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520798_37 = makeCons(f, args);
PUSH_CONT_0(co, 46, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 3);
__arg3 = closureRef(co, 1);
co->args[4] = closureRef(co, 4);
co->args[5] = _3520798_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3520799_37 = __arg1;
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
Obj _3520776_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3520776_37) {
JUMP_RETURN(clofun5, MAKE_NUMBER(-1));
} else {
Obj _3520777_37 = PRIM_CAR(globals);
Obj _3520778_37 = PRIM_EQ(sym, _3520777_37);
if (True == _3520778_37) {
JUMP_RETURN(clofun5, idx);
} else {
Obj _3520779_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3520780_37 = PRIM_CDR(globals);
JUMP_WITH_ARGS_4(clofun5, globalRef(__symbolTable[57]), _3520779_37, sym, _3520780_37);
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
Obj _3520771_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = _3520771_37;
pushCont(co, 2, clofun6, 3, sym, val, globals);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[100]), sym, val);
}

label2:
{
Obj _3520772_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3520772_37) {
JUMP_RETURN(clofun6, Nil);
} else {
Obj _3520773_37 = makeCons(sym, val);
Obj _3520774_37 = primSet(co, globals, _3520773_37);
JUMP_RETURN(clofun6, _3520774_37);
}
}

label3:
{
Obj _3519703_37 = __arg1;
Obj _3519704_37 = __arg2;
Obj _3519705_37 = __arg3;
Obj _3519706_37 = co->args[4];
Obj _3519707_37 = co->args[5];
Obj _3520751_37 = PRIM_EQ(Nil, _3519707_37);
if (True == _3520751_37) {
JUMP_RETURN(clofun6, Nil);
} else {
Obj _3520752_37 = PRIM_ISCONS(_3519707_37);
if (True == _3520752_37) {
Obj _3520753_37 = PRIM_CAR(_3519707_37);
Obj x = _3520753_37;
Obj _3520754_37 = PRIM_CDR(_3519707_37);
Obj more = _3520754_37;
Obj _3520755_37 = PRIM_GT(_3519706_37, MAKE_NUMBER(3));
Obj _3520756_37 = primNot(_3520755_37);
if (True == _3520756_37) {
pushCont(co, 10, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString("__arg"));
} else {
pushCont(co, 4, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString("co->args["));
}
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label4:
{
Obj _3520763_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 5, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[60]), _3519705_37, _3519706_37);
}

label5:
{
Obj _3520764_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 6, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString("]"));
}

label6:
{
Obj _3520765_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 7, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString(" = "));
}

label7:
{
Obj _3520766_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 8, clofun6, 5, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3519703_37;
__arg2 = _3519704_37;
__arg3 = Nil;
co->args[4] = _3519705_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3520767_37 = __arg1;
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 9, clofun6, 5, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString(";\n"));
}

label9:
{
Obj _3520768_37 = __arg1;
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3520769_37 = PRIM_ADD(_3519706_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3519703_37;
__arg2 = _3519704_37;
__arg3 = _3519705_37;
co->args[4] = _3520769_37;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3520757_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 11, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[60]), _3519705_37, _3519706_37);
}

label11:
{
Obj _3520758_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 12, clofun6, 6, x, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString(" = "));
}

label12:
{
Obj _3520759_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 13, clofun6, 5, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3519703_37;
__arg2 = _3519704_37;
__arg3 = Nil;
co->args[4] = _3519705_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3520760_37 = __arg1;
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 14, clofun6, 5, _3519706_37, _3519703_37, _3519704_37, _3519705_37, more);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[61]), _3519705_37, makeCString(";\n"));
}

label14:
{
Obj _3520761_37 = __arg1;
Obj _3519706_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519703_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519704_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519705_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3520762_37 = PRIM_ADD(_3519706_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3519703_37;
__arg2 = _3519704_37;
__arg3 = _3519705_37;
co->args[4] = _3520762_37;
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
Obj _3520744_37 = primGenSym();
Obj tmp = _3520744_37;
pushCont(co, 16, clofun6, 2, x, tmp);
JUMP_WITH_ARGS_2(clofun6, k, tmp);
}

label16:
{
Obj _3520745_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520746_37 = makeCons(_3520745_37, Nil);
Obj _3520747_37 = makeCons(x, _3520746_37);
Obj _3520748_37 = makeCons(tmp, _3520747_37);
Obj _3520749_37 = makeCons(__symbolTable[91], _3520748_37);
JUMP_RETURN(clofun6, _3520749_37);
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
Obj _3520736_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = _3520736_37;
pushCont(co, 19, clofun6, 3, val, idx, v);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), v, MAKE_NUMBER(1));
}

label19:
{
Obj _3520737_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = _3520737_37;
Obj _3520738_37 = makeCons(val, Nil);
Obj _3520739_37 = makeCons(idx, _3520738_37);
Obj _3520740_37 = makeCons(_3520739_37, cur);
Obj cur1 = _3520740_37;
Obj _3520741_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 20, clofun6, 2, v, cur1);
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[63]), v, MAKE_NUMBER(0), _3520741_37);
}

label20:
{
Obj _3520742_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[63]), v, MAKE_NUMBER(1), cur1);
}

label21:
{
Obj _3519698_37 = __arg1;
Obj _3519699_37 = __arg2;
Obj _3519700_37 = makeNative(28, clofun6, 0, 2, _3519698_37, _3519699_37);
Obj _3520677_37 = PRIM_ISCONS(_3519699_37);
if (True == _3520677_37) {
Obj _3520678_37 = PRIM_CAR(_3519699_37);
Obj clo_45or_45cont = _3520678_37;
Obj _3520679_37 = PRIM_CDR(_3519699_37);
Obj _3520680_37 = PRIM_ISCONS(_3520679_37);
if (True == _3520680_37) {
Obj _3520681_37 = PRIM_CDR(_3519699_37);
Obj _3520682_37 = PRIM_CAR(_3520681_37);
Obj _3520683_37 = PRIM_ISCONS(_3520682_37);
if (True == _3520683_37) {
Obj _3520684_37 = PRIM_CDR(_3519699_37);
Obj _3520685_37 = PRIM_CAR(_3520684_37);
Obj _3520686_37 = PRIM_CAR(_3520685_37);
Obj _3520687_37 = PRIM_EQ(__symbolTable[94], _3520686_37);
if (True == _3520687_37) {
Obj _3520688_37 = PRIM_CDR(_3519699_37);
Obj _3520689_37 = PRIM_CAR(_3520688_37);
Obj _3520690_37 = PRIM_CDR(_3520689_37);
Obj _3520691_37 = PRIM_ISCONS(_3520690_37);
if (True == _3520691_37) {
Obj _3520692_37 = PRIM_CDR(_3519699_37);
Obj _3520693_37 = PRIM_CAR(_3520692_37);
Obj _3520694_37 = PRIM_CDR(_3520693_37);
Obj _3520695_37 = PRIM_CAR(_3520694_37);
Obj params = _3520695_37;
Obj _3520696_37 = PRIM_CDR(_3519699_37);
Obj _3520697_37 = PRIM_CAR(_3520696_37);
Obj _3520698_37 = PRIM_CDR(_3520697_37);
Obj _3520699_37 = PRIM_CDR(_3520698_37);
Obj _3520700_37 = PRIM_ISCONS(_3520699_37);
if (True == _3520700_37) {
Obj _3520701_37 = PRIM_CDR(_3519699_37);
Obj _3520702_37 = PRIM_CAR(_3520701_37);
Obj _3520703_37 = PRIM_CDR(_3520702_37);
Obj _3520704_37 = PRIM_CDR(_3520703_37);
Obj _3520705_37 = PRIM_CAR(_3520704_37);
Obj body = _3520705_37;
Obj _3520706_37 = PRIM_CDR(_3519699_37);
Obj _3520707_37 = PRIM_CAR(_3520706_37);
Obj _3520708_37 = PRIM_CDR(_3520707_37);
Obj _3520709_37 = PRIM_CDR(_3520708_37);
Obj _3520710_37 = PRIM_CDR(_3520709_37);
Obj _3520711_37 = PRIM_EQ(Nil, _3520710_37);
if (True == _3520711_37) {
Obj _3520712_37 = PRIM_CDR(_3519699_37);
Obj _3520713_37 = PRIM_CDR(_3520712_37);
Obj fvs = _3520713_37;
Obj _3519788_37 = makeNative(22, clofun6, 1, 6, body, _3519698_37, params, clo_45or_45cont, fvs, _3519700_37);
Obj _3520733_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[77]);
if (True == _3520733_37) {
JUMP_WITH_ARGS_2(clofun6, _3519788_37, True);
} else {
Obj _3520734_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[67]);
if (True == _3520734_37) {
JUMP_WITH_ARGS_2(clofun6, _3519788_37, True);
} else {
JUMP_WITH_ARGS_2(clofun6, _3519788_37, False);
}
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519700_37);
}
}

label22:
{
Obj _3519789_37 = __arg1;
if (True == _3519789_37) {
PUSH_CONT_0(co, 23, clofun6);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[66]), closureRef(co, 1), closureRef(co, 0));
} else {
JUMP_WITH_ARGS_1(clofun6, closureRef(co, 5));
}
}

label23:
{
Obj _3520714_37 = __arg1;
Obj body1 = _3520714_37;
pushCont(co, 24, clofun6, 1, body1);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[65]), closureRef(co, 1), MAKE_NUMBER(0));
}

label24:
{
Obj _3520715_37 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = _3520715_37;
Obj _3520716_37 = PRIM_EQ(closureRef(co, 3), __symbolTable[77]);
if (True == _3520716_37) {
Obj _3520717_37 = makeCons(body1, Nil);
Obj _3520718_37 = makeCons(Nil, _3520717_37);
Obj _3520719_37 = makeCons(closureRef(co, 2), _3520718_37);
Obj _3520720_37 = makeCons(__symbolTable[94], _3520719_37);
pushCont(co, 26, clofun6, 1, cur);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[64]), closureRef(co, 1), _3520720_37);
} else {
Obj _3520726_37 = makeCons(body1, Nil);
Obj _3520727_37 = makeCons(closureRef(co, 4), _3520726_37);
Obj _3520728_37 = makeCons(closureRef(co, 2), _3520727_37);
Obj _3520729_37 = makeCons(__symbolTable[94], _3520728_37);
pushCont(co, 25, clofun6, 1, cur);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[64]), closureRef(co, 1), _3520729_37);
}
}

label25:
{
Obj _3520730_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520731_37 = makeCons(cur, closureRef(co, 4));
Obj _3520732_37 = makeCons(closureRef(co, 3), _3520731_37);
JUMP_RETURN(clofun6, _3520732_37);
}

label26:
{
Obj _3520721_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 27, clofun6, 1, cur);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[96]), closureRef(co, 2));
}

label27:
{
Obj _3520722_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520723_37 = makeCons(_3520722_37, closureRef(co, 4));
Obj _3520724_37 = makeCons(cur, _3520723_37);
Obj _3520725_37 = makeCons(closureRef(co, 3), _3520724_37);
JUMP_RETURN(clofun6, _3520725_37);
}

label28:
{
Obj _3520676_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3520676_37) {
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
Obj _3519690_37 = __arg1;
Obj _3519691_37 = __arg2;
pushCont(co, 31, clofun6, 2, _3519691_37, _3519690_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[84]), _3519691_37);
}

label31:
{
Obj _3520597_37 = __arg1;
Obj _3519691_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519690_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3520597_37) {
JUMP_RETURN(clofun6, _3519691_37);
} else {
Obj _3520598_37 = primIsSymbol(_3519691_37);
if (True == _3520598_37) {
JUMP_RETURN(clofun6, _3519691_37);
} else {
Obj _3519694_37 = makeNative(33, clofun6, 0, 2, _3519691_37, _3519690_37);
Obj _3520654_37 = PRIM_ISCONS(_3519691_37);
if (True == _3520654_37) {
Obj _3520655_37 = PRIM_CAR(_3519691_37);
Obj _3520656_37 = PRIM_EQ(__symbolTable[94], _3520655_37);
if (True == _3520656_37) {
Obj _3520657_37 = PRIM_CDR(_3519691_37);
Obj _3520658_37 = PRIM_ISCONS(_3520657_37);
if (True == _3520658_37) {
Obj _3520659_37 = PRIM_CDR(_3519691_37);
Obj _3520660_37 = PRIM_CAR(_3520659_37);
Obj args = _3520660_37;
Obj _3520661_37 = PRIM_CDR(_3519691_37);
Obj _3520662_37 = PRIM_CDR(_3520661_37);
Obj _3520663_37 = PRIM_ISCONS(_3520662_37);
if (True == _3520663_37) {
Obj _3520664_37 = PRIM_CDR(_3519691_37);
Obj _3520665_37 = PRIM_CDR(_3520664_37);
Obj _3520666_37 = PRIM_CAR(_3520665_37);
Obj body = _3520666_37;
Obj _3520667_37 = PRIM_CDR(_3519691_37);
Obj _3520668_37 = PRIM_CDR(_3520667_37);
Obj _3520669_37 = PRIM_CDR(_3520668_37);
Obj _3520670_37 = PRIM_EQ(Nil, _3520669_37);
if (True == _3520670_37) {
pushCont(co, 32, clofun6, 1, args);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), _3519690_37, body);
} else {
JUMP_WITH_ARGS_1(clofun6, _3519694_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519694_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519694_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519694_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519694_37);
}
}
}
}

label32:
{
Obj _3520671_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520672_37 = makeCons(_3520671_37, Nil);
Obj _3520673_37 = makeCons(args, _3520672_37);
Obj _3520674_37 = makeCons(__symbolTable[94], _3520673_37);
JUMP_RETURN(clofun6, _3520674_37);
}

label33:
{
Obj _3519695_37 = makeNative(39, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520627_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520627_37) {
Obj _3520628_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520629_37 = PRIM_EQ(__symbolTable[81], _3520628_37);
if (True == _3520629_37) {
Obj _3520630_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520631_37 = PRIM_ISCONS(_3520630_37);
if (True == _3520631_37) {
Obj _3520632_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520633_37 = PRIM_CAR(_3520632_37);
Obj val = _3520633_37;
Obj _3520634_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520635_37 = PRIM_CDR(_3520634_37);
Obj _3520636_37 = PRIM_ISCONS(_3520635_37);
if (True == _3520636_37) {
Obj _3520637_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520638_37 = PRIM_CDR(_3520637_37);
Obj _3520639_37 = PRIM_CAR(_3520638_37);
Obj body = _3520639_37;
Obj _3520640_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520641_37 = PRIM_CDR(_3520640_37);
Obj _3520642_37 = PRIM_CDR(_3520641_37);
Obj _3520643_37 = PRIM_EQ(Nil, _3520642_37);
if (True == _3520643_37) {
pushCont(co, 34, clofun6, 2, body, val);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun6, _3519695_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519695_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519695_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519695_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519695_37);
}
}

label34:
{
Obj _3520644_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 35, clofun6, 2, body, val);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[85]), _3520644_37, val);
}

label35:
{
Obj _3520645_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = _3520645_37;
pushCont(co, 36, clofun6, 3, fvs1, body, val);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
}

label36:
{
Obj _3520646_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 37, clofun6, 3, fvs1, body, val);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), _3520646_37, fvs1);
}

label37:
{
Obj _3520647_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = _3520647_37;
pushCont(co, 38, clofun6, 2, val, fvs2);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), fvs1, body);
}

label38:
{
Obj _3520648_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520649_37 = makeCons(_3520648_37, Nil);
Obj _3520650_37 = makeCons(val, _3520649_37);
Obj _3520651_37 = makeCons(__symbolTable[94], _3520650_37);
Obj _3520652_37 = makeCons(_3520651_37, fvs2);
Obj _3520653_37 = makeCons(__symbolTable[67], _3520652_37);
JUMP_RETURN(clofun6, _3520653_37);
}

label39:
{
Obj _3519696_37 = makeNative(43, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520604_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520604_37) {
Obj _3520605_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520606_37 = PRIM_EQ(__symbolTable[79], _3520605_37);
if (True == _3520606_37) {
Obj _3520607_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520608_37 = PRIM_ISCONS(_3520607_37);
if (True == _3520608_37) {
Obj _3520609_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520610_37 = PRIM_CAR(_3520609_37);
Obj exp = _3520610_37;
Obj _3520611_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520612_37 = PRIM_CDR(_3520611_37);
Obj _3520613_37 = PRIM_ISCONS(_3520612_37);
if (True == _3520613_37) {
Obj _3520614_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520615_37 = PRIM_CDR(_3520614_37);
Obj _3520616_37 = PRIM_CAR(_3520615_37);
Obj cont = _3520616_37;
Obj _3520617_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520618_37 = PRIM_CDR(_3520617_37);
Obj _3520619_37 = PRIM_CDR(_3520618_37);
Obj _3520620_37 = PRIM_EQ(Nil, _3520619_37);
if (True == _3520620_37) {
pushCont(co, 40, clofun6, 2, exp, cont);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun6, _3519696_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519696_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519696_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519696_37);
}
} else {
JUMP_WITH_ARGS_1(clofun6, _3519696_37);
}
}

label40:
{
Obj _3520621_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun6, 1, cont);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), _3520621_37, exp);
}

label41:
{
Obj _3520622_37 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 42, clofun6, 1, _3520622_37);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1), cont);
}

label42:
{
Obj _3520623_37 = __arg1;
Obj _3520622_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520624_37 = makeCons(_3520623_37, Nil);
Obj _3520625_37 = makeCons(_3520622_37, _3520624_37);
Obj _3520626_37 = makeCons(__symbolTable[79], _3520625_37);
JUMP_RETURN(clofun6, _3520626_37);
}

label43:
{
Obj _3520599_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520599_37) {
Obj _3520600_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3520600_37;
Obj _3520601_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3520601_37;
pushCont(co, 44, clofun6, 2, f, args);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[68]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label44:
{
Obj _3520602_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520603_37 = makeCons(f, args);
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[97]), _3520602_37, _3520603_37);
}

label45:
{
Obj _3519685_37 = __arg1;
Obj _3519686_37 = __arg2;
Obj _3519687_37 = __arg3;
Obj _3520574_37 = PRIM_EQ(Nil, _3519685_37);
if (True == _3520574_37) {
pushCont(co, 47, clofun6, 1, _3519687_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[72]), _3519686_37);
} else {
Obj _3520592_37 = PRIM_ISCONS(_3519685_37);
if (True == _3520592_37) {
Obj _3520593_37 = PRIM_CAR(_3519685_37);
Obj hd = _3520593_37;
Obj _3520594_37 = PRIM_CDR(_3519685_37);
Obj tl = _3520594_37;
JUMP_WITH_ARGS_3(clofun6, globalRef(__symbolTable[74]), hd, makeNative(46, clofun6, 1, 3, tl, _3519686_37, _3519687_37));
} else {
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label46:
{
Obj hd1 = __arg1;
Obj _3520595_37 = makeCons(hd1, closureRef(co, 1));
JUMP_WITH_ARGS_4(clofun6, globalRef(__symbolTable[73]), closureRef(co, 0), _3520595_37, closureRef(co, 2));
}

label47:
{
Obj _3520575_37 = __arg1;
Obj _3519687_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = _3520575_37;
Obj _3519786_37 = makeNative(0, clofun7, 1, 2, exp, _3519687_37);
Obj _3520588_37 = PRIM_CAR(exp);
pushCont(co, 48, clofun6, 2, exp, _3519786_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[70]), _3520588_37);
}

label48:
{
Obj _3520589_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519786_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3520589_37) {
pushCont(co, 49, clofun6, 1, _3519786_37);
JUMP_WITH_ARGS_2(clofun6, globalRef(__symbolTable[69]), exp);
} else {
JUMP_WITH_ARGS_2(clofun6, _3519786_37, False);
}
}

label49:
{
Obj _3520590_37 = __arg1;
Obj _3519786_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520591_37 = PRIM_EQ(_3520590_37, __symbolTable[95]);
if (True == _3520591_37) {
JUMP_WITH_ARGS_2(clofun6, _3519786_37, True);
} else {
JUMP_WITH_ARGS_2(clofun6, _3519786_37, False);
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
Obj _3519787_37 = __arg1;
if (True == _3519787_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[71]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj _3520576_37 = PRIM_EQ(closureRef(co, 1), globalRef(__symbolTable[75]));
if (True == _3520576_37) {
Obj _3520577_37 = makeCons(closureRef(co, 0), Nil);
Obj _3520578_37 = makeCons(__symbolTable[80], _3520577_37);
JUMP_RETURN(clofun7, _3520578_37);
} else {
Obj _3520579_37 = primGenSym();
Obj val = _3520579_37;
Obj _3520580_37 = makeCons(val, Nil);
pushCont(co, 1, clofun7, 1, _3520580_37);
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), val);
}
}
}

label1:
{
Obj _3520581_37 = __arg1;
Obj _3520580_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520582_37 = makeCons(_3520581_37, Nil);
Obj _3520583_37 = makeCons(_3520580_37, _3520582_37);
Obj _3520584_37 = makeCons(__symbolTable[81], _3520583_37);
Obj _3520585_37 = makeCons(_3520584_37, Nil);
Obj _3520586_37 = makeCons(closureRef(co, 0), _3520585_37);
Obj _3520587_37 = makeCons(__symbolTable[79], _3520586_37);
JUMP_RETURN(clofun7, _3520587_37);
}

label2:
{
Obj _3519676_37 = __arg1;
Obj _3519677_37 = __arg2;
Obj _3519784_37 = makeNative(4, clofun7, 1, 2, _3519676_37, _3519677_37);
Obj _3520571_37 = primIsSymbol(_3519676_37);
if (True == _3520571_37) {
JUMP_WITH_ARGS_2(clofun7, _3519784_37, True);
} else {
pushCont(co, 3, clofun7, 1, _3519784_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), _3519676_37);
}
}

label3:
{
Obj _3520572_37 = __arg1;
Obj _3519784_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3520572_37) {
JUMP_WITH_ARGS_2(clofun7, _3519784_37, True);
} else {
JUMP_WITH_ARGS_2(clofun7, _3519784_37, False);
}
}

label4:
{
Obj _3519785_37 = __arg1;
if (True == _3519785_37) {
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), closureRef(co, 0));
} else {
PUSH_CONT_0(co, 5, clofun7);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), closureRef(co, 0));
}
}

label5:
{
Obj _3520437_37 = __arg1;
if (True == _3520437_37) {
JUMP_RETURN(clofun7, closureRef(co, 0));
} else {
Obj _3519680_37 = makeNative(9, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520539_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520539_37) {
Obj _3520540_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520541_37 = PRIM_EQ(__symbolTable[92], _3520540_37);
if (True == _3520541_37) {
Obj _3520542_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520543_37 = PRIM_ISCONS(_3520542_37);
if (True == _3520543_37) {
Obj _3520544_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520545_37 = PRIM_CAR(_3520544_37);
Obj a = _3520545_37;
Obj _3520546_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520547_37 = PRIM_CDR(_3520546_37);
Obj _3520548_37 = PRIM_ISCONS(_3520547_37);
if (True == _3520548_37) {
Obj _3520549_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520550_37 = PRIM_CDR(_3520549_37);
Obj _3520551_37 = PRIM_CAR(_3520550_37);
Obj b = _3520551_37;
Obj _3520552_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520553_37 = PRIM_CDR(_3520552_37);
Obj _3520554_37 = PRIM_CDR(_3520553_37);
Obj _3520555_37 = PRIM_ISCONS(_3520554_37);
if (True == _3520555_37) {
Obj _3520556_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520557_37 = PRIM_CDR(_3520556_37);
Obj _3520558_37 = PRIM_CDR(_3520557_37);
Obj _3520559_37 = PRIM_CAR(_3520558_37);
Obj c = _3520559_37;
Obj _3520560_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520561_37 = PRIM_CDR(_3520560_37);
Obj _3520562_37 = PRIM_CDR(_3520561_37);
Obj _3520563_37 = PRIM_CDR(_3520562_37);
Obj _3520564_37 = PRIM_EQ(Nil, _3520563_37);
if (True == _3520564_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), a, makeNative(6, clofun7, 1, 3, b, c, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, _3519680_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519680_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519680_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519680_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519680_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519680_37);
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
Obj _3520565_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun7, 2, _3520565_37, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 1), closureRef(co, 2));
}

label8:
{
Obj _3520566_37 = __arg1;
Obj _3520565_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520567_37 = makeCons(_3520566_37, Nil);
Obj _3520568_37 = makeCons(_3520565_37, _3520567_37);
Obj _3520569_37 = makeCons(ra, _3520568_37);
Obj _3520570_37 = makeCons(__symbolTable[92], _3520569_37);
JUMP_RETURN(clofun7, _3520570_37);
}

label9:
{
Obj _3519681_37 = makeNative(12, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520517_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520517_37) {
Obj _3520518_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520519_37 = PRIM_EQ(__symbolTable[90], _3520518_37);
if (True == _3520519_37) {
Obj _3520520_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520521_37 = PRIM_ISCONS(_3520520_37);
if (True == _3520521_37) {
Obj _3520522_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520523_37 = PRIM_CAR(_3520522_37);
Obj a = _3520523_37;
Obj _3520524_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520525_37 = PRIM_CDR(_3520524_37);
Obj _3520526_37 = PRIM_ISCONS(_3520525_37);
if (True == _3520526_37) {
Obj _3520527_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520528_37 = PRIM_CDR(_3520527_37);
Obj _3520529_37 = PRIM_CAR(_3520528_37);
Obj b = _3520529_37;
Obj _3520530_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520531_37 = PRIM_CDR(_3520530_37);
Obj _3520532_37 = PRIM_CDR(_3520531_37);
Obj _3520533_37 = PRIM_EQ(Nil, _3520532_37);
if (True == _3520533_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), a, makeNative(10, clofun7, 1, 2, b, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, _3519681_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519681_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519681_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519681_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519681_37);
}
}

label10:
{
Obj ra = __arg1;
Obj _3520534_37 = primIsSymbol(ra);
if (True == _3520534_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 1));
} else {
pushCont(co, 11, clofun7, 1, ra);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), closureRef(co, 0), closureRef(co, 1));
}
}

label11:
{
Obj _3520535_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520536_37 = makeCons(_3520535_37, Nil);
Obj _3520537_37 = makeCons(ra, _3520536_37);
Obj _3520538_37 = makeCons(__symbolTable[90], _3520537_37);
JUMP_RETURN(clofun7, _3520538_37);
}

label12:
{
Obj _3519682_37 = makeNative(15, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520486_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520486_37) {
Obj _3520487_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520488_37 = PRIM_EQ(__symbolTable[91], _3520487_37);
if (True == _3520488_37) {
Obj _3520489_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520490_37 = PRIM_ISCONS(_3520489_37);
if (True == _3520490_37) {
Obj _3520491_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520492_37 = PRIM_CAR(_3520491_37);
Obj a = _3520492_37;
Obj _3520493_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520494_37 = PRIM_CDR(_3520493_37);
Obj _3520495_37 = PRIM_ISCONS(_3520494_37);
if (True == _3520495_37) {
Obj _3520496_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520497_37 = PRIM_CDR(_3520496_37);
Obj _3520498_37 = PRIM_CAR(_3520497_37);
Obj b = _3520498_37;
Obj _3520499_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520500_37 = PRIM_CDR(_3520499_37);
Obj _3520501_37 = PRIM_CDR(_3520500_37);
Obj _3520502_37 = PRIM_ISCONS(_3520501_37);
if (True == _3520502_37) {
Obj _3520503_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520504_37 = PRIM_CDR(_3520503_37);
Obj _3520505_37 = PRIM_CDR(_3520504_37);
Obj _3520506_37 = PRIM_CAR(_3520505_37);
Obj c = _3520506_37;
Obj _3520507_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520508_37 = PRIM_CDR(_3520507_37);
Obj _3520509_37 = PRIM_CDR(_3520508_37);
Obj _3520510_37 = PRIM_CDR(_3520509_37);
Obj _3520511_37 = PRIM_EQ(Nil, _3520510_37);
if (True == _3520511_37) {
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), b, makeNative(13, clofun7, 1, 3, a, c, closureRef(co, 1)));
} else {
JUMP_WITH_ARGS_1(clofun7, _3519682_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519682_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519682_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519682_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519682_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519682_37);
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
Obj _3520512_37 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520513_37 = makeCons(_3520512_37, Nil);
Obj _3520514_37 = makeCons(rb, _3520513_37);
Obj _3520515_37 = makeCons(closureRef(co, 0), _3520514_37);
Obj _3520516_37 = makeCons(__symbolTable[91], _3520515_37);
JUMP_RETURN(clofun7, _3520516_37);
}

label15:
{
Obj _3519683_37 = makeNative(17, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520442_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520442_37) {
Obj _3520443_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520444_37 = PRIM_EQ(__symbolTable[77], _3520443_37);
if (True == _3520444_37) {
Obj _3520445_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520446_37 = PRIM_ISCONS(_3520445_37);
if (True == _3520446_37) {
Obj _3520447_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520448_37 = PRIM_CAR(_3520447_37);
Obj _3520449_37 = PRIM_ISCONS(_3520448_37);
if (True == _3520449_37) {
Obj _3520450_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520451_37 = PRIM_CAR(_3520450_37);
Obj _3520452_37 = PRIM_CAR(_3520451_37);
Obj _3520453_37 = PRIM_EQ(__symbolTable[94], _3520452_37);
if (True == _3520453_37) {
Obj _3520454_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520455_37 = PRIM_CAR(_3520454_37);
Obj _3520456_37 = PRIM_CDR(_3520455_37);
Obj _3520457_37 = PRIM_ISCONS(_3520456_37);
if (True == _3520457_37) {
Obj _3520458_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520459_37 = PRIM_CAR(_3520458_37);
Obj _3520460_37 = PRIM_CDR(_3520459_37);
Obj _3520461_37 = PRIM_CAR(_3520460_37);
Obj args = _3520461_37;
Obj _3520462_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520463_37 = PRIM_CAR(_3520462_37);
Obj _3520464_37 = PRIM_CDR(_3520463_37);
Obj _3520465_37 = PRIM_CDR(_3520464_37);
Obj _3520466_37 = PRIM_ISCONS(_3520465_37);
if (True == _3520466_37) {
Obj _3520467_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520468_37 = PRIM_CAR(_3520467_37);
Obj _3520469_37 = PRIM_CDR(_3520468_37);
Obj _3520470_37 = PRIM_CDR(_3520469_37);
Obj _3520471_37 = PRIM_CAR(_3520470_37);
Obj body = _3520471_37;
Obj _3520472_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520473_37 = PRIM_CAR(_3520472_37);
Obj _3520474_37 = PRIM_CDR(_3520473_37);
Obj _3520475_37 = PRIM_CDR(_3520474_37);
Obj _3520476_37 = PRIM_CDR(_3520475_37);
Obj _3520477_37 = PRIM_EQ(Nil, _3520476_37);
if (True == _3520477_37) {
Obj _3520478_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520479_37 = PRIM_CDR(_3520478_37);
Obj frees = _3520479_37;
pushCont(co, 16, clofun7, 2, args, frees);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[74]), body, globalRef(__symbolTable[75]));
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519683_37);
}
}

label16:
{
Obj _3520480_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520481_37 = makeCons(_3520480_37, Nil);
Obj _3520482_37 = makeCons(args, _3520481_37);
Obj _3520483_37 = makeCons(__symbolTable[94], _3520482_37);
Obj _3520484_37 = makeCons(_3520483_37, frees);
Obj _3520485_37 = makeCons(__symbolTable[77], _3520484_37);
JUMP_WITH_ARGS_2(clofun7, closureRef(co, 1), _3520485_37);
}

label17:
{
Obj _3520438_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520438_37) {
Obj _3520439_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3520439_37;
Obj _3520440_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3520440_37;
Obj _3520441_37 = makeCons(f, args);
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[73]), _3520441_37, Nil, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label18:
{
Obj x = __arg1;
Obj _3520434_37 = makeCons(x, Nil);
Obj _3520435_37 = makeCons(__symbolTable[78], _3520434_37);
JUMP_RETURN(clofun7, _3520435_37);
}

label19:
{
Obj _3519669_37 = __arg1;
Obj _3519670_37 = __arg2;
pushCont(co, 20, clofun7, 2, _3519670_37, _3519669_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), _3519670_37);
}

label20:
{
Obj _3520361_37 = __arg1;
Obj _3519670_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519669_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3520361_37) {
JUMP_RETURN(clofun7, _3519670_37);
} else {
Obj _3520362_37 = primIsSymbol(_3519670_37);
if (True == _3520362_37) {
pushCont(co, 30, clofun7, 1, _3519670_37);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[129]), _3519670_37, _3519669_37);
} else {
Obj _3519673_37 = makeNative(25, clofun7, 0, 2, _3519670_37, _3519669_37);
Obj _3520404_37 = PRIM_ISCONS(_3519670_37);
if (True == _3520404_37) {
Obj _3520405_37 = PRIM_CAR(_3519670_37);
Obj _3520406_37 = PRIM_EQ(__symbolTable[94], _3520405_37);
if (True == _3520406_37) {
Obj _3520407_37 = PRIM_CDR(_3519670_37);
Obj _3520408_37 = PRIM_ISCONS(_3520407_37);
if (True == _3520408_37) {
Obj _3520409_37 = PRIM_CDR(_3519670_37);
Obj _3520410_37 = PRIM_CAR(_3520409_37);
Obj args = _3520410_37;
Obj _3520411_37 = PRIM_CDR(_3519670_37);
Obj _3520412_37 = PRIM_CDR(_3520411_37);
Obj _3520413_37 = PRIM_ISCONS(_3520412_37);
if (True == _3520413_37) {
Obj _3520414_37 = PRIM_CDR(_3519670_37);
Obj _3520415_37 = PRIM_CDR(_3520414_37);
Obj _3520416_37 = PRIM_CAR(_3520415_37);
Obj body = _3520416_37;
Obj _3520417_37 = PRIM_CDR(_3519670_37);
Obj _3520418_37 = PRIM_CDR(_3520417_37);
Obj _3520419_37 = PRIM_CDR(_3520418_37);
Obj _3520420_37 = PRIM_EQ(Nil, _3520419_37);
if (True == _3520420_37) {
Obj _3520421_37 = makeCons(body, Nil);
Obj _3520422_37 = makeCons(args, _3520421_37);
Obj _3520423_37 = makeCons(__symbolTable[94], _3520422_37);
pushCont(co, 21, clofun7, 3, body, args, _3519669_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), _3520423_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519673_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519673_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519673_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519673_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519673_37);
}
}
}
}

label21:
{
Obj _3520424_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519669_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = _3520424_37;
pushCont(co, 22, clofun7, 3, args, _3519669_37, fvs1);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), fvs1, body);
}

label22:
{
Obj _3520425_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519669_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3520426_37 = makeCons(_3520425_37, Nil);
Obj _3520427_37 = makeCons(args, _3520426_37);
Obj _3520428_37 = makeCons(__symbolTable[94], _3520427_37);
pushCont(co, 23, clofun7, 2, fvs1, _3520428_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[76]), _3519669_37);
}

label23:
{
Obj _3520429_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520428_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun7, 1, _3520428_37);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), _3520429_37, fvs1);
}

label24:
{
Obj _3520430_37 = __arg1;
Obj _3520428_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520431_37 = makeCons(_3520428_37, _3520430_37);
Obj _3520432_37 = makeCons(__symbolTable[77], _3520431_37);
JUMP_RETURN(clofun7, _3520432_37);
}

label25:
{
Obj _3519674_37 = makeNative(28, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3520372_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520372_37) {
Obj _3520373_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520374_37 = PRIM_EQ(__symbolTable[91], _3520373_37);
if (True == _3520374_37) {
Obj _3520375_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520376_37 = PRIM_ISCONS(_3520375_37);
if (True == _3520376_37) {
Obj _3520377_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520378_37 = PRIM_CAR(_3520377_37);
Obj a = _3520378_37;
Obj _3520379_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520380_37 = PRIM_CDR(_3520379_37);
Obj _3520381_37 = PRIM_ISCONS(_3520380_37);
if (True == _3520381_37) {
Obj _3520382_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520383_37 = PRIM_CDR(_3520382_37);
Obj _3520384_37 = PRIM_CAR(_3520383_37);
Obj b = _3520384_37;
Obj _3520385_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520386_37 = PRIM_CDR(_3520385_37);
Obj _3520387_37 = PRIM_CDR(_3520386_37);
Obj _3520388_37 = PRIM_ISCONS(_3520387_37);
if (True == _3520388_37) {
Obj _3520389_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520390_37 = PRIM_CDR(_3520389_37);
Obj _3520391_37 = PRIM_CDR(_3520390_37);
Obj _3520392_37 = PRIM_CAR(_3520391_37);
Obj c = _3520392_37;
Obj _3520393_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520394_37 = PRIM_CDR(_3520393_37);
Obj _3520395_37 = PRIM_CDR(_3520394_37);
Obj _3520396_37 = PRIM_CDR(_3520395_37);
Obj _3520397_37 = PRIM_EQ(Nil, _3520396_37);
if (True == _3520397_37) {
pushCont(co, 26, clofun7, 2, c, a);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1), b);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519674_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519674_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519674_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519674_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519674_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519674_37);
}
}

label26:
{
Obj _3520398_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun7, 2, _3520398_37, a);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1), c);
}

label27:
{
Obj _3520399_37 = __arg1;
Obj _3520398_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520400_37 = makeCons(_3520399_37, Nil);
Obj _3520401_37 = makeCons(_3520398_37, _3520400_37);
Obj _3520402_37 = makeCons(a, _3520401_37);
Obj _3520403_37 = makeCons(__symbolTable[91], _3520402_37);
JUMP_RETURN(clofun7, _3520403_37);
}

label28:
{
Obj _3520367_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520367_37) {
Obj _3520368_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3520368_37;
Obj _3520369_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3520369_37;
pushCont(co, 29, clofun7, 2, f, args);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[76]), closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label29:
{
Obj _3520370_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520371_37 = makeCons(f, args);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), _3520370_37, _3520371_37);
}

label30:
{
Obj _3520363_37 = __arg1;
Obj _3519670_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = _3520363_37;
Obj _3520364_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3520364_37) {
JUMP_RETURN(clofun7, _3519670_37);
} else {
Obj _3520365_37 = makeCons(pos, Nil);
Obj _3520366_37 = makeCons(__symbolTable[83], _3520365_37);
JUMP_RETURN(clofun7, _3520366_37);
}
}

label31:
{
Obj _3519656_37 = __arg1;
pushCont(co, 32, clofun7, 1, _3519656_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[84]), _3519656_37);
}

label32:
{
Obj _3520186_37 = __arg1;
Obj _3519656_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3520186_37) {
JUMP_RETURN(clofun7, Nil);
} else {
Obj _3520187_37 = primIsSymbol(_3519656_37);
if (True == _3520187_37) {
Obj _3520188_37 = makeCons(_3519656_37, Nil);
JUMP_RETURN(clofun7, _3520188_37);
} else {
Obj _3519659_37 = makeNative(34, clofun7, 0, 1, _3519656_37);
Obj _3520342_37 = PRIM_ISCONS(_3519656_37);
if (True == _3520342_37) {
Obj _3520343_37 = PRIM_CAR(_3519656_37);
Obj _3520344_37 = PRIM_EQ(__symbolTable[94], _3520343_37);
if (True == _3520344_37) {
Obj _3520345_37 = PRIM_CDR(_3519656_37);
Obj _3520346_37 = PRIM_ISCONS(_3520345_37);
if (True == _3520346_37) {
Obj _3520347_37 = PRIM_CDR(_3519656_37);
Obj _3520348_37 = PRIM_CAR(_3520347_37);
Obj args = _3520348_37;
Obj _3520349_37 = PRIM_CDR(_3519656_37);
Obj _3520350_37 = PRIM_CDR(_3520349_37);
Obj _3520351_37 = PRIM_ISCONS(_3520350_37);
if (True == _3520351_37) {
Obj _3520352_37 = PRIM_CDR(_3519656_37);
Obj _3520353_37 = PRIM_CDR(_3520352_37);
Obj _3520354_37 = PRIM_CAR(_3520353_37);
Obj body = _3520354_37;
Obj _3520355_37 = PRIM_CDR(_3519656_37);
Obj _3520356_37 = PRIM_CDR(_3520355_37);
Obj _3520357_37 = PRIM_CDR(_3520356_37);
Obj _3520358_37 = PRIM_EQ(Nil, _3520357_37);
if (True == _3520358_37) {
pushCont(co, 33, clofun7, 1, args);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519659_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519659_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519659_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519659_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519659_37);
}
}
}
}

label33:
{
Obj _3520359_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), _3520359_37, args);
}

label34:
{
Obj _3519660_37 = makeNative(36, clofun7, 0, 1, closureRef(co, 0));
Obj _3520312_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520312_37) {
Obj _3520313_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520314_37 = PRIM_EQ(__symbolTable[92], _3520313_37);
if (True == _3520314_37) {
Obj _3520315_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520316_37 = PRIM_ISCONS(_3520315_37);
if (True == _3520316_37) {
Obj _3520317_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520318_37 = PRIM_CAR(_3520317_37);
Obj x = _3520318_37;
Obj _3520319_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520320_37 = PRIM_CDR(_3520319_37);
Obj _3520321_37 = PRIM_ISCONS(_3520320_37);
if (True == _3520321_37) {
Obj _3520322_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520323_37 = PRIM_CDR(_3520322_37);
Obj _3520324_37 = PRIM_CAR(_3520323_37);
Obj y = _3520324_37;
Obj _3520325_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520326_37 = PRIM_CDR(_3520325_37);
Obj _3520327_37 = PRIM_CDR(_3520326_37);
Obj _3520328_37 = PRIM_ISCONS(_3520327_37);
if (True == _3520328_37) {
Obj _3520329_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520330_37 = PRIM_CDR(_3520329_37);
Obj _3520331_37 = PRIM_CDR(_3520330_37);
Obj _3520332_37 = PRIM_CAR(_3520331_37);
Obj z = _3520332_37;
Obj _3520333_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520334_37 = PRIM_CDR(_3520333_37);
Obj _3520335_37 = PRIM_CDR(_3520334_37);
Obj _3520336_37 = PRIM_CDR(_3520335_37);
Obj _3520337_37 = PRIM_EQ(Nil, _3520336_37);
if (True == _3520337_37) {
Obj _3520338_37 = makeCons(z, Nil);
Obj _3520339_37 = makeCons(y, _3520338_37);
Obj _3520340_37 = makeCons(x, _3520339_37);
PUSH_CONT_0(co, 35, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3520340_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519660_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519660_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519660_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519660_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519660_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519660_37);
}
}

label35:
{
Obj _3520341_37 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3520341_37);
}

label36:
{
Obj _3519661_37 = makeNative(38, clofun7, 0, 1, closureRef(co, 0));
Obj _3520292_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520292_37) {
Obj _3520293_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520294_37 = PRIM_EQ(__symbolTable[90], _3520293_37);
if (True == _3520294_37) {
Obj _3520295_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520296_37 = PRIM_ISCONS(_3520295_37);
if (True == _3520296_37) {
Obj _3520297_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520298_37 = PRIM_CAR(_3520297_37);
Obj x = _3520298_37;
Obj _3520299_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520300_37 = PRIM_CDR(_3520299_37);
Obj _3520301_37 = PRIM_ISCONS(_3520300_37);
if (True == _3520301_37) {
Obj _3520302_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520303_37 = PRIM_CDR(_3520302_37);
Obj _3520304_37 = PRIM_CAR(_3520303_37);
Obj y = _3520304_37;
Obj _3520305_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520306_37 = PRIM_CDR(_3520305_37);
Obj _3520307_37 = PRIM_CDR(_3520306_37);
Obj _3520308_37 = PRIM_EQ(Nil, _3520307_37);
if (True == _3520308_37) {
Obj _3520309_37 = makeCons(y, Nil);
Obj _3520310_37 = makeCons(x, _3520309_37);
PUSH_CONT_0(co, 37, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3520310_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519661_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519661_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519661_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519661_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519661_37);
}
}

label37:
{
Obj _3520311_37 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3520311_37);
}

label38:
{
Obj _3519662_37 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj _3520262_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520262_37) {
Obj _3520263_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520264_37 = PRIM_EQ(__symbolTable[91], _3520263_37);
if (True == _3520264_37) {
Obj _3520265_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520266_37 = PRIM_ISCONS(_3520265_37);
if (True == _3520266_37) {
Obj _3520267_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520268_37 = PRIM_CAR(_3520267_37);
Obj a = _3520268_37;
Obj _3520269_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520270_37 = PRIM_CDR(_3520269_37);
Obj _3520271_37 = PRIM_ISCONS(_3520270_37);
if (True == _3520271_37) {
Obj _3520272_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520273_37 = PRIM_CDR(_3520272_37);
Obj _3520274_37 = PRIM_CAR(_3520273_37);
Obj b = _3520274_37;
Obj _3520275_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520276_37 = PRIM_CDR(_3520275_37);
Obj _3520277_37 = PRIM_CDR(_3520276_37);
Obj _3520278_37 = PRIM_ISCONS(_3520277_37);
if (True == _3520278_37) {
Obj _3520279_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520280_37 = PRIM_CDR(_3520279_37);
Obj _3520281_37 = PRIM_CDR(_3520280_37);
Obj _3520282_37 = PRIM_CAR(_3520281_37);
Obj c = _3520282_37;
Obj _3520283_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520284_37 = PRIM_CDR(_3520283_37);
Obj _3520285_37 = PRIM_CDR(_3520284_37);
Obj _3520286_37 = PRIM_CDR(_3520285_37);
Obj _3520287_37 = PRIM_EQ(Nil, _3520286_37);
if (True == _3520287_37) {
pushCont(co, 39, clofun7, 2, c, a);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), b);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519662_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519662_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519662_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519662_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519662_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519662_37);
}
}

label39:
{
Obj _3520288_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun7, 2, a, _3520288_37);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), c);
}

label40:
{
Obj _3520289_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520288_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520290_37 = makeCons(a, Nil);
pushCont(co, 41, clofun7, 1, _3520288_37);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), _3520289_37, _3520290_37);
}

label41:
{
Obj _3520291_37 = __arg1;
Obj _3520288_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[86]), _3520288_37, _3520291_37);
}

label42:
{
Obj _3519663_37 = makeNative(43, clofun7, 0, 1, closureRef(co, 0));
Obj _3520252_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520252_37) {
Obj _3520253_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520254_37 = PRIM_EQ(__symbolTable[77], _3520253_37);
if (True == _3520254_37) {
Obj _3520255_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520256_37 = PRIM_ISCONS(_3520255_37);
if (True == _3520256_37) {
Obj _3520257_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520258_37 = PRIM_CAR(_3520257_37);
Obj lam = _3520258_37;
Obj _3520259_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520260_37 = PRIM_CDR(_3520259_37);
Obj more = _3520260_37;
Obj _3520261_37 = makeCons(lam, more);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), _3520261_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519663_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519663_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519663_37);
}
}

label43:
{
Obj _3519664_37 = makeNative(44, clofun7, 0, 1, closureRef(co, 0));
Obj _3520242_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520242_37) {
Obj _3520243_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520244_37 = PRIM_EQ(__symbolTable[78], _3520243_37);
if (True == _3520244_37) {
Obj _3520245_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520246_37 = PRIM_ISCONS(_3520245_37);
if (True == _3520246_37) {
Obj _3520247_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520248_37 = PRIM_CAR(_3520247_37);
Obj x = _3520248_37;
Obj _3520249_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520250_37 = PRIM_CDR(_3520249_37);
Obj _3520251_37 = PRIM_EQ(Nil, _3520250_37);
if (True == _3520251_37) {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), x);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519664_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519664_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519664_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519664_37);
}
}

label44:
{
Obj _3519665_37 = makeNative(46, clofun7, 0, 1, closureRef(co, 0));
Obj _3520222_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520222_37) {
Obj _3520223_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520224_37 = PRIM_EQ(__symbolTable[79], _3520223_37);
if (True == _3520224_37) {
Obj _3520225_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520226_37 = PRIM_ISCONS(_3520225_37);
if (True == _3520226_37) {
Obj _3520227_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520228_37 = PRIM_CAR(_3520227_37);
Obj exp = _3520228_37;
Obj _3520229_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520230_37 = PRIM_CDR(_3520229_37);
Obj _3520231_37 = PRIM_ISCONS(_3520230_37);
if (True == _3520231_37) {
Obj _3520232_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520233_37 = PRIM_CDR(_3520232_37);
Obj _3520234_37 = PRIM_CAR(_3520233_37);
Obj cont = _3520234_37;
Obj _3520235_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520236_37 = PRIM_CDR(_3520235_37);
Obj _3520237_37 = PRIM_CDR(_3520236_37);
Obj _3520238_37 = PRIM_EQ(Nil, _3520237_37);
if (True == _3520238_37) {
Obj _3520239_37 = makeCons(cont, Nil);
Obj _3520240_37 = makeCons(exp, _3520239_37);
PUSH_CONT_0(co, 45, clofun7);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3520240_37);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519665_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519665_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519665_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519665_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519665_37);
}
}

label45:
{
Obj _3520241_37 = __arg1;
JUMP_WITH_ARGS_4(clofun7, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3520241_37);
}

label46:
{
Obj _3519666_37 = makeNative(47, clofun7, 0, 1, closureRef(co, 0));
Obj _3520212_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520212_37) {
Obj _3520213_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520214_37 = PRIM_EQ(__symbolTable[80], _3520213_37);
if (True == _3520214_37) {
Obj _3520215_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520216_37 = PRIM_ISCONS(_3520215_37);
if (True == _3520216_37) {
Obj _3520217_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520218_37 = PRIM_CAR(_3520217_37);
Obj exp = _3520218_37;
Obj _3520219_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520220_37 = PRIM_CDR(_3520219_37);
Obj _3520221_37 = PRIM_EQ(Nil, _3520220_37);
if (True == _3520221_37) {
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), exp);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519666_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519666_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519666_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519666_37);
}
}

label47:
{
Obj _3519667_37 = makeNative(49, clofun7, 0, 1, closureRef(co, 0));
Obj _3520194_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520194_37) {
Obj _3520195_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520196_37 = PRIM_EQ(__symbolTable[81], _3520195_37);
if (True == _3520196_37) {
Obj _3520197_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520198_37 = PRIM_ISCONS(_3520197_37);
if (True == _3520198_37) {
Obj _3520199_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520200_37 = PRIM_CAR(_3520199_37);
Obj arg = _3520200_37;
Obj _3520201_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520202_37 = PRIM_CDR(_3520201_37);
Obj _3520203_37 = PRIM_ISCONS(_3520202_37);
if (True == _3520203_37) {
Obj _3520204_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520205_37 = PRIM_CDR(_3520204_37);
Obj _3520206_37 = PRIM_CAR(_3520205_37);
Obj body = _3520206_37;
Obj _3520207_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520208_37 = PRIM_CDR(_3520207_37);
Obj _3520209_37 = PRIM_CDR(_3520208_37);
Obj _3520210_37 = PRIM_EQ(Nil, _3520209_37);
if (True == _3520210_37) {
pushCont(co, 48, clofun7, 1, arg);
JUMP_WITH_ARGS_2(clofun7, globalRef(__symbolTable[82]), body);
} else {
JUMP_WITH_ARGS_1(clofun7, _3519667_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519667_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519667_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519667_37);
}
} else {
JUMP_WITH_ARGS_1(clofun7, _3519667_37);
}
}

label48:
{
Obj _3520211_37 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[85]), _3520211_37, arg);
}

label49:
{
Obj _3520189_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520189_37) {
Obj _3520190_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3520190_37;
Obj _3520191_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3520191_37;
Obj _3520192_37 = makeCons(f, args);
PUSH_CONT_0(co, 0, clofun8);
JUMP_WITH_ARGS_3(clofun7, globalRef(__symbolTable[97]), globalRef(__symbolTable[82]), _3520192_37);
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
Obj _3520193_37 = __arg1;
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[131]), globalRef(__symbolTable[86]), Nil, _3520193_37);
}

label1:
{
Obj _3519649_37 = __arg1;
Obj _3519650_37 = makeNative(2, clofun8, 0, 1, _3519649_37);
Obj _3520175_37 = PRIM_ISCONS(_3519649_37);
if (True == _3520175_37) {
Obj _3520176_37 = PRIM_CAR(_3519649_37);
Obj _3520177_37 = PRIM_EQ(__symbolTable[101], _3520176_37);
if (True == _3520177_37) {
Obj _3520178_37 = PRIM_CDR(_3519649_37);
Obj _3520179_37 = PRIM_ISCONS(_3520178_37);
if (True == _3520179_37) {
Obj _3520180_37 = PRIM_CDR(_3519649_37);
Obj _3520181_37 = PRIM_CAR(_3520180_37);
Obj _3520182_37 = PRIM_CDR(_3519649_37);
Obj _3520183_37 = PRIM_CDR(_3520182_37);
Obj _3520184_37 = PRIM_EQ(Nil, _3520183_37);
if (True == _3520184_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519650_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519650_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519650_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519650_37);
}
}

label2:
{
Obj _3519651_37 = makeNative(3, clofun8, 0, 1, closureRef(co, 0));
Obj _3520165_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520165_37) {
Obj _3520166_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520167_37 = PRIM_EQ(__symbolTable[98], _3520166_37);
if (True == _3520167_37) {
Obj _3520168_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520169_37 = PRIM_ISCONS(_3520168_37);
if (True == _3520169_37) {
Obj _3520170_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520171_37 = PRIM_CAR(_3520170_37);
Obj _3520172_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520173_37 = PRIM_CDR(_3520172_37);
Obj _3520174_37 = PRIM_EQ(Nil, _3520173_37);
if (True == _3520174_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519651_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519651_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519651_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519651_37);
}
}

label3:
{
Obj _3519652_37 = makeNative(4, clofun8, 0, 1, closureRef(co, 0));
Obj _3520155_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520155_37) {
Obj _3520156_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520157_37 = PRIM_EQ(__symbolTable[95], _3520156_37);
if (True == _3520157_37) {
Obj _3520158_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520159_37 = PRIM_ISCONS(_3520158_37);
if (True == _3520159_37) {
Obj _3520160_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520161_37 = PRIM_CAR(_3520160_37);
Obj _3520162_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520163_37 = PRIM_CDR(_3520162_37);
Obj _3520164_37 = PRIM_EQ(Nil, _3520163_37);
if (True == _3520164_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519652_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519652_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519652_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519652_37);
}
}

label4:
{
Obj _3519653_37 = makeNative(5, clofun8, 0, 1, closureRef(co, 0));
Obj _3520145_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520145_37) {
Obj _3520146_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520147_37 = PRIM_EQ(__symbolTable[89], _3520146_37);
if (True == _3520147_37) {
Obj _3520148_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520149_37 = PRIM_ISCONS(_3520148_37);
if (True == _3520149_37) {
Obj _3520150_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520151_37 = PRIM_CAR(_3520150_37);
Obj _3520152_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520153_37 = PRIM_CDR(_3520152_37);
Obj _3520154_37 = PRIM_EQ(Nil, _3520153_37);
if (True == _3520154_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519653_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519653_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519653_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519653_37);
}
}

label5:
{
Obj _3519654_37 = makeNative(6, clofun8, 0, 0);
Obj _3520135_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520135_37) {
Obj _3520136_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520137_37 = PRIM_EQ(__symbolTable[83], _3520136_37);
if (True == _3520137_37) {
Obj _3520138_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520139_37 = PRIM_ISCONS(_3520138_37);
if (True == _3520139_37) {
Obj _3520140_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520141_37 = PRIM_CAR(_3520140_37);
Obj _3520142_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520143_37 = PRIM_CDR(_3520142_37);
Obj _3520144_37 = PRIM_EQ(Nil, _3520143_37);
if (True == _3520144_37) {
JUMP_RETURN(clofun8, True);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519654_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519654_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519654_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519654_37);
}
}

label6:
{
JUMP_RETURN(clofun8, False);
}

label7:
{
Obj _3519644_37 = __arg1;
Obj _3519645_37 = __arg2;
Obj _3520124_37 = PRIM_EQ(Nil, _3519644_37);
if (True == _3520124_37) {
JUMP_RETURN(clofun8, Nil);
} else {
Obj _3519647_37 = makeNative(9, clofun8, 0, 2, _3519644_37, _3519645_37);
Obj _3520130_37 = PRIM_ISCONS(_3519644_37);
if (True == _3520130_37) {
Obj _3520131_37 = PRIM_CAR(_3519644_37);
Obj x = _3520131_37;
Obj _3520132_37 = PRIM_CDR(_3519644_37);
Obj y = _3520132_37;
pushCont(co, 8, clofun8, 3, y, _3519645_37, _3519647_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), x, _3519645_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519647_37);
}
}
}

label8:
{
Obj _3520133_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519645_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519647_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3520133_37) {
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), y, _3519645_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519647_37);
}
}

label9:
{
Obj _3520125_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520125_37) {
Obj _3520126_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3520126_37;
Obj _3520127_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3520127_37;
pushCont(co, 10, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[85]), y, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label10:
{
Obj _3520128_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520129_37 = makeCons(x, _3520128_37);
JUMP_RETURN(clofun8, _3520129_37);
}

label11:
{
Obj _3519639_37 = __arg1;
Obj _3519640_37 = __arg2;
Obj _3520113_37 = PRIM_EQ(Nil, _3519639_37);
if (True == _3520113_37) {
JUMP_RETURN(clofun8, _3519640_37);
} else {
Obj _3519642_37 = makeNative(13, clofun8, 0, 2, _3519639_37, _3519640_37);
Obj _3520119_37 = PRIM_ISCONS(_3519639_37);
if (True == _3520119_37) {
Obj _3520120_37 = PRIM_CAR(_3519639_37);
Obj x = _3520120_37;
Obj _3520121_37 = PRIM_CDR(_3519639_37);
Obj y = _3520121_37;
pushCont(co, 12, clofun8, 3, y, _3519640_37, _3519642_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), x, _3519640_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519642_37);
}
}
}

label12:
{
Obj _3520122_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519640_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519642_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3520122_37) {
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[86]), y, _3519640_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519642_37);
}
}

label13:
{
Obj _3520114_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520114_37) {
Obj _3520115_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3520115_37;
Obj _3520116_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3520116_37;
pushCont(co, 14, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[86]), y, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label14:
{
Obj _3520117_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520118_37 = makeCons(x, _3520117_37);
JUMP_RETURN(clofun8, _3520118_37);
}

label15:
{
Obj _3519625_37 = __arg1;
Obj _3519626_37 = __arg2;
Obj _3519627_37 = __arg3;
Obj _3519782_37 = makeNative(19, clofun8, 1, 3, _3519625_37, _3519627_37, _3519626_37);
pushCont(co, 16, clofun8, 2, _3519627_37, _3519782_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[88]), _3519627_37);
}

label16:
{
Obj _3520108_37 = __arg1;
Obj _3519627_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519782_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3520108_37) {
JUMP_WITH_ARGS_2(clofun8, _3519782_37, True);
} else {
Obj _3520109_37 = primIsString(_3519627_37);
if (True == _3520109_37) {
JUMP_WITH_ARGS_2(clofun8, _3519782_37, True);
} else {
pushCont(co, 17, clofun8, 2, _3519627_37, _3519782_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[87]), _3519627_37);
}
}
}

label17:
{
Obj _3520110_37 = __arg1;
Obj _3519627_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519782_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3520110_37) {
JUMP_WITH_ARGS_2(clofun8, _3519782_37, True);
} else {
pushCont(co, 18, clofun8, 1, _3519782_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[108]), _3519627_37);
}
}

label18:
{
Obj _3520111_37 = __arg1;
Obj _3519782_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3520111_37) {
JUMP_WITH_ARGS_2(clofun8, _3519782_37, True);
} else {
JUMP_WITH_ARGS_2(clofun8, _3519782_37, False);
}
}

label19:
{
Obj _3519783_37 = __arg1;
if (True == _3519783_37) {
Obj _3519919_37 = makeCons(closureRef(co, 1), Nil);
Obj _3519920_37 = makeCons(__symbolTable[101], _3519919_37);
JUMP_RETURN(clofun8, _3519920_37);
} else {
Obj _3519629_37 = makeNative(21, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj _3520095_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3520095_37) {
Obj _3520096_37 = PRIM_CAR(closureRef(co, 1));
Obj _3520097_37 = PRIM_EQ(__symbolTable[89], _3520096_37);
if (True == _3520097_37) {
Obj _3520098_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520099_37 = PRIM_ISCONS(_3520098_37);
if (True == _3520099_37) {
Obj _3520100_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520101_37 = PRIM_CAR(_3520100_37);
Obj x = _3520101_37;
Obj _3520102_37 = PRIM_CDR(closureRef(co, 1));
Obj _3520103_37 = PRIM_CDR(_3520102_37);
Obj _3520104_37 = PRIM_EQ(Nil, _3520103_37);
if (True == _3520104_37) {
pushCont(co, 20, clofun8, 1, x);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[99]), x, closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun8, _3519629_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519629_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519629_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519629_37);
}
}
}

label20:
{
Obj _3520105_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520106_37 = makeCons(x, Nil);
Obj _3520107_37 = makeCons(__symbolTable[101], _3520106_37);
JUMP_RETURN(clofun8, _3520107_37);
}

label21:
{
Obj _3519921_37 = primIsSymbol(closureRef(co, 0));
if (True == _3519921_37) {
PUSH_CONT_0(co, 45, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[100]), closureRef(co, 0), closureRef(co, 1));
} else {
Obj _3519631_37 = makeNative(24, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3520073_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520073_37) {
Obj _3520074_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520075_37 = PRIM_EQ(__symbolTable[94], _3520074_37);
if (True == _3520075_37) {
Obj _3520076_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520077_37 = PRIM_ISCONS(_3520076_37);
if (True == _3520077_37) {
Obj _3520078_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520079_37 = PRIM_CAR(_3520078_37);
Obj args = _3520079_37;
Obj _3520080_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520081_37 = PRIM_CDR(_3520080_37);
Obj _3520082_37 = PRIM_ISCONS(_3520081_37);
if (True == _3520082_37) {
Obj _3520083_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520084_37 = PRIM_CDR(_3520083_37);
Obj _3520085_37 = PRIM_CAR(_3520084_37);
Obj body = _3520085_37;
Obj _3520086_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520087_37 = PRIM_CDR(_3520086_37);
Obj _3520088_37 = PRIM_CDR(_3520087_37);
Obj _3520089_37 = PRIM_EQ(Nil, _3520088_37);
if (True == _3520089_37) {
pushCont(co, 22, clofun8, 2, body, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[93]), args, closureRef(co, 1));
} else {
JUMP_WITH_ARGS_1(clofun8, _3519631_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519631_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519631_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519631_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519631_37);
}
}
}

label22:
{
Obj _3520090_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun8, 1, args);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), _3520090_37, closureRef(co, 2), body);
}

label23:
{
Obj _3520091_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520092_37 = makeCons(_3520091_37, Nil);
Obj _3520093_37 = makeCons(args, _3520092_37);
Obj _3520094_37 = makeCons(__symbolTable[94], _3520093_37);
JUMP_RETURN(clofun8, _3520094_37);
}

label24:
{
Obj _3519632_37 = makeNative(25, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3520041_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520041_37) {
Obj _3520042_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520043_37 = PRIM_EQ(__symbolTable[92], _3520042_37);
if (True == _3520043_37) {
Obj _3520044_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520045_37 = PRIM_ISCONS(_3520044_37);
if (True == _3520045_37) {
Obj _3520046_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520047_37 = PRIM_CAR(_3520046_37);
Obj _3520048_37 = PRIM_ISCONS(_3520047_37);
if (True == _3520048_37) {
Obj _3520049_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520050_37 = PRIM_CAR(_3520049_37);
Obj _3520051_37 = PRIM_CAR(_3520050_37);
Obj _3520052_37 = PRIM_EQ(__symbolTable[92], _3520051_37);
if (True == _3520052_37) {
Obj _3520053_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520054_37 = PRIM_CAR(_3520053_37);
Obj _3520055_37 = PRIM_CDR(_3520054_37);
Obj exp1 = _3520055_37;
Obj _3520056_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520057_37 = PRIM_CDR(_3520056_37);
Obj exp2 = _3520057_37;
Obj _3520058_37 = primGenSym();
Obj f = _3520058_37;
Obj _3520059_37 = primGenSym();
Obj v = _3520059_37;
Obj _3520060_37 = makeCons(v, Nil);
Obj _3520061_37 = makeCons(v, exp2);
Obj _3520062_37 = makeCons(__symbolTable[92], _3520061_37);
Obj _3520063_37 = makeCons(_3520062_37, Nil);
Obj _3520064_37 = makeCons(_3520060_37, _3520063_37);
Obj _3520065_37 = makeCons(__symbolTable[94], _3520064_37);
Obj _3520066_37 = makeCons(__symbolTable[92], exp1);
Obj _3520067_37 = makeCons(_3520066_37, Nil);
Obj _3520068_37 = makeCons(f, _3520067_37);
Obj _3520069_37 = makeCons(_3520068_37, Nil);
Obj _3520070_37 = makeCons(_3520065_37, _3520069_37);
Obj _3520071_37 = makeCons(f, _3520070_37);
Obj _3520072_37 = makeCons(__symbolTable[91], _3520071_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), _3520072_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519632_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519632_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519632_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519632_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519632_37);
}
}

label25:
{
Obj _3519633_37 = makeNative(28, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3520034_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520034_37) {
Obj _3520035_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520036_37 = PRIM_EQ(__symbolTable[92], _3520035_37);
if (True == _3520036_37) {
Obj _3520037_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3520037_37;
pushCont(co, 26, clofun8, 1, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2));
} else {
JUMP_WITH_ARGS_1(clofun8, _3519633_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519633_37);
}
}

label26:
{
Obj _3520038_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 27, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), _3520038_37, args);
}

label27:
{
Obj _3520039_37 = __arg1;
Obj _3520040_37 = makeCons(__symbolTable[92], _3520039_37);
JUMP_RETURN(clofun8, _3520040_37);
}

label28:
{
Obj _3519634_37 = makeNative(31, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3520012_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520012_37) {
Obj _3520013_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520014_37 = PRIM_EQ(__symbolTable[90], _3520013_37);
if (True == _3520014_37) {
Obj _3520015_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520016_37 = PRIM_ISCONS(_3520015_37);
if (True == _3520016_37) {
Obj _3520017_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520018_37 = PRIM_CAR(_3520017_37);
Obj x = _3520018_37;
Obj _3520019_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520020_37 = PRIM_CDR(_3520019_37);
Obj _3520021_37 = PRIM_ISCONS(_3520020_37);
if (True == _3520021_37) {
Obj _3520022_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520023_37 = PRIM_CDR(_3520022_37);
Obj _3520024_37 = PRIM_CAR(_3520023_37);
Obj y = _3520024_37;
Obj _3520025_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520026_37 = PRIM_CDR(_3520025_37);
Obj _3520027_37 = PRIM_CDR(_3520026_37);
Obj _3520028_37 = PRIM_EQ(Nil, _3520027_37);
if (True == _3520028_37) {
pushCont(co, 29, clofun8, 1, y);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), x);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519634_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519634_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519634_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519634_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519634_37);
}
}

label29:
{
Obj _3520029_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun8, 1, _3520029_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), y);
}

label30:
{
Obj _3520030_37 = __arg1;
Obj _3520029_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520031_37 = makeCons(_3520030_37, Nil);
Obj _3520032_37 = makeCons(_3520029_37, _3520031_37);
Obj _3520033_37 = makeCons(__symbolTable[90], _3520032_37);
JUMP_RETURN(clofun8, _3520033_37);
}

label31:
{
Obj _3519635_37 = makeNative(34, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3519979_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519979_37) {
Obj _3519980_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519981_37 = PRIM_EQ(__symbolTable[91], _3519980_37);
if (True == _3519981_37) {
Obj _3519982_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519983_37 = PRIM_ISCONS(_3519982_37);
if (True == _3519983_37) {
Obj _3519984_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519985_37 = PRIM_CAR(_3519984_37);
Obj a = _3519985_37;
Obj _3519986_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519987_37 = PRIM_CDR(_3519986_37);
Obj _3519988_37 = PRIM_ISCONS(_3519987_37);
if (True == _3519988_37) {
Obj _3519989_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519990_37 = PRIM_CDR(_3519989_37);
Obj _3519991_37 = PRIM_CAR(_3519990_37);
Obj b = _3519991_37;
Obj _3519992_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519993_37 = PRIM_CDR(_3519992_37);
Obj _3519994_37 = PRIM_CDR(_3519993_37);
Obj _3519995_37 = PRIM_ISCONS(_3519994_37);
if (True == _3519995_37) {
Obj _3519996_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519997_37 = PRIM_CDR(_3519996_37);
Obj _3519998_37 = PRIM_CDR(_3519997_37);
Obj _3519999_37 = PRIM_CAR(_3519998_37);
Obj c = _3519999_37;
Obj _3520000_37 = PRIM_CDR(closureRef(co, 0));
Obj _3520001_37 = PRIM_CDR(_3520000_37);
Obj _3520002_37 = PRIM_CDR(_3520001_37);
Obj _3520003_37 = PRIM_CDR(_3520002_37);
Obj _3520004_37 = PRIM_EQ(Nil, _3520003_37);
if (True == _3520004_37) {
pushCont(co, 32, clofun8, 2, c, a);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), b);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519635_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519635_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519635_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519635_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519635_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519635_37);
}
}

label32:
{
Obj _3520005_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520006_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun8, 2, _3520005_37, a);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), _3520006_37, closureRef(co, 2), c);
}

label33:
{
Obj _3520007_37 = __arg1;
Obj _3520005_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3520008_37 = makeCons(_3520007_37, Nil);
Obj _3520009_37 = makeCons(_3520005_37, _3520008_37);
Obj _3520010_37 = makeCons(a, _3520009_37);
Obj _3520011_37 = makeCons(__symbolTable[91], _3520010_37);
JUMP_RETURN(clofun8, _3520011_37);
}

label34:
{
Obj _3519636_37 = makeNative(35, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3519947_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519947_37) {
Obj _3519948_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519949_37 = PRIM_ISCONS(_3519948_37);
if (True == _3519949_37) {
Obj _3519950_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519951_37 = PRIM_CAR(_3519950_37);
Obj _3519952_37 = PRIM_EQ(__symbolTable[94], _3519951_37);
if (True == _3519952_37) {
Obj _3519953_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519954_37 = PRIM_CDR(_3519953_37);
Obj exp1 = _3519954_37;
Obj _3519955_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519956_37 = PRIM_ISCONS(_3519955_37);
if (True == _3519956_37) {
Obj _3519957_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519958_37 = PRIM_CAR(_3519957_37);
Obj _3519959_37 = PRIM_ISCONS(_3519958_37);
if (True == _3519959_37) {
Obj _3519960_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519961_37 = PRIM_CAR(_3519960_37);
Obj _3519962_37 = PRIM_CAR(_3519961_37);
Obj _3519963_37 = PRIM_EQ(__symbolTable[92], _3519962_37);
if (True == _3519963_37) {
Obj _3519964_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519965_37 = PRIM_CAR(_3519964_37);
Obj _3519966_37 = PRIM_CDR(_3519965_37);
Obj exp2 = _3519966_37;
Obj _3519967_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519968_37 = PRIM_CDR(_3519967_37);
Obj _3519969_37 = PRIM_EQ(Nil, _3519968_37);
if (True == _3519969_37) {
Obj _3519970_37 = primGenSym();
Obj f = _3519970_37;
Obj _3519971_37 = makeCons(__symbolTable[94], exp1);
Obj _3519972_37 = makeCons(__symbolTable[92], exp2);
Obj _3519973_37 = makeCons(_3519972_37, Nil);
Obj _3519974_37 = makeCons(f, _3519973_37);
Obj _3519975_37 = makeCons(_3519974_37, Nil);
Obj _3519976_37 = makeCons(_3519971_37, _3519975_37);
Obj _3519977_37 = makeCons(f, _3519976_37);
Obj _3519978_37 = makeCons(__symbolTable[91], _3519977_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), _3519978_37);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
} else {
JUMP_WITH_ARGS_1(clofun8, _3519636_37);
}
}

label35:
{
Obj _3519637_37 = makeNative(43, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj _3519927_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519927_37) {
Obj _3519928_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3519928_37;
Obj _3519929_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3519929_37;
pushCont(co, 36, clofun8, 3, op, args, _3519637_37);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[109]), op);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519637_37);
}
}

label36:
{
Obj _3519930_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519637_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3519930_37) {
pushCont(co, 37, clofun8, 2, op, args);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[105]), op);
} else {
JUMP_WITH_ARGS_1(clofun8, _3519637_37);
}
}

label37:
{
Obj _3519931_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = _3519931_37;
pushCont(co, 38, clofun8, 3, required, op, args);
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[96]), args);
}

label38:
{
Obj _3519932_37 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = _3519932_37;
Obj _3519933_37 = PRIM_EQ(required, provided);
if (True == _3519933_37) {
Obj _3519934_37 = makeCons(op, Nil);
Obj _3519935_37 = makeCons(__symbolTable[95], _3519934_37);
pushCont(co, 41, clofun8, 2, args, _3519935_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2));
} else {
Obj _3519939_37 = PRIM_GT(required, provided);
if (True == _3519939_37) {
Obj _3519940_37 = PRIM_SUB(required, provided);
pushCont(co, 39, clofun8, 2, op, args);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[103]), _3519940_37, Nil);
} else {
JUMP_WITH_ARGS_2(clofun8, globalRef(__symbolTable[132]), makeCString("primitive call mismatch"));
}
}
}

label39:
{
Obj _3519941_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = _3519941_37;
Obj _3519942_37 = makeCons(op, args);
pushCont(co, 40, clofun8, 1, tmp);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[93]), _3519942_37, tmp);
}

label40:
{
Obj _3519943_37 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519944_37 = makeCons(_3519943_37, Nil);
Obj _3519945_37 = makeCons(tmp, _3519944_37);
Obj _3519946_37 = makeCons(__symbolTable[94], _3519945_37);
JUMP_WITH_ARGS_4(clofun8, globalRef(__symbolTable[102]), closureRef(co, 1), closureRef(co, 2), _3519946_37);
}

label41:
{
Obj _3519936_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519935_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 42, clofun8, 1, _3519935_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), _3519936_37, args);
}

label42:
{
Obj _3519937_37 = __arg1;
Obj _3519935_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519938_37 = makeCons(_3519935_37, _3519937_37);
JUMP_RETURN(clofun8, _3519938_37);
}

label43:
{
PUSH_CONT_0(co, 44, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[102]), closureRef(co, 0), closureRef(co, 1));
}

label44:
{
Obj _3519926_37 = __arg1;
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[97]), _3519926_37, closureRef(co, 2));
}

label45:
{
Obj _3519922_37 = __arg1;
if (True == _3519922_37) {
JUMP_RETURN(clofun8, closureRef(co, 0));
} else {
PUSH_CONT_0(co, 46, clofun8);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[99]), closureRef(co, 0), closureRef(co, 2));
}
}

label46:
{
Obj _3519923_37 = __arg1;
Obj _3519924_37 = makeCons(closureRef(co, 0), Nil);
Obj _3519925_37 = makeCons(__symbolTable[98], _3519924_37);
JUMP_RETURN(clofun8, _3519925_37);
}

label47:
{
Obj _3519621_37 = __arg1;
Obj _3519622_37 = __arg2;
Obj _3519914_37 = PRIM_EQ(MAKE_NUMBER(0), _3519621_37);
if (True == _3519914_37) {
JUMP_RETURN(clofun8, _3519622_37);
} else {
Obj _3519915_37 = PRIM_SUB(_3519621_37, MAKE_NUMBER(1));
Obj _3519916_37 = primGenSym();
Obj _3519917_37 = makeCons(_3519916_37, _3519622_37);
JUMP_WITH_ARGS_3(clofun8, globalRef(__symbolTable[103]), _3519915_37, _3519917_37);
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
Obj _3519911_37 = __arg1;
Obj find = _3519911_37;
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
Obj _3519912_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3519912_37) {
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
Obj _3519908_37 = __arg1;
Obj find = _3519908_37;
pushCont(co, 3, clofun9, 1, find);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), find);
}

label3:
{
Obj _3519909_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3519909_37) {
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
Obj _3519904_37 = __arg1;
PUSH_CONT_0(co, 6, clofun9);
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[108]), _3519904_37);
}

label6:
{
Obj _3519905_37 = __arg1;
Obj _3519906_37 = primNot(_3519905_37);
JUMP_RETURN(clofun9, _3519906_37);
}

label7:
{
Obj _3519617_37 = __arg1;
Obj _3519618_37 = __arg2;
Obj _3519828_37 = PRIM_EQ(Nil, _3519618_37);
if (True == _3519828_37) {
JUMP_RETURN(clofun9, False);
} else {
Obj _3519829_37 = PRIM_ISCONS(_3519618_37);
if (True == _3519829_37) {
Obj _3519830_37 = PRIM_CAR(_3519618_37);
Obj hd = _3519830_37;
Obj _3519831_37 = PRIM_CDR(_3519618_37);
Obj tl = _3519831_37;
pushCont(co, 8, clofun9, 2, _3519617_37, tl);
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[129]), _3519617_37, hd);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label8:
{
Obj _3519832_37 = __arg1;
Obj _3519617_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519833_37 = PRIM_LT(_3519832_37, MAKE_NUMBER(0));
if (True == _3519833_37) {
JUMP_WITH_ARGS_3(clofun9, globalRef(__symbolTable[128]), _3519617_37, tl);
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
Obj _3519611_37 = __arg1;
Obj _3519612_37 = __arg2;
Obj _3519613_37 = __arg3;
Obj _3519817_37 = PRIM_EQ(Nil, _3519613_37);
if (True == _3519817_37) {
JUMP_RETURN(clofun9, MAKE_NUMBER(-1));
} else {
Obj _3519615_37 = makeNative(11, clofun9, 0, 3, _3519613_37, _3519611_37, _3519612_37);
Obj _3519822_37 = PRIM_ISCONS(_3519613_37);
if (True == _3519822_37) {
Obj _3519823_37 = PRIM_CAR(_3519613_37);
Obj a = _3519823_37;
Obj _3519824_37 = PRIM_CDR(_3519613_37);
Obj _3519825_37 = PRIM_EQ(_3519612_37, a);
if (True == _3519825_37) {
JUMP_RETURN(clofun9, _3519611_37);
} else {
JUMP_WITH_ARGS_1(clofun9, _3519615_37);
}
} else {
JUMP_WITH_ARGS_1(clofun9, _3519615_37);
}
}
}

label11:
{
Obj _3519818_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519818_37) {
Obj _3519819_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519820_37 = PRIM_CDR(closureRef(co, 0));
Obj b = _3519820_37;
Obj _3519821_37 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[130]), _3519821_37, closureRef(co, 2), b);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}

label12:
{
Obj _3519606_37 = __arg1;
Obj _3519607_37 = __arg2;
Obj _3519608_37 = __arg3;
Obj _3519811_37 = PRIM_EQ(Nil, _3519608_37);
if (True == _3519811_37) {
JUMP_RETURN(clofun9, _3519607_37);
} else {
Obj _3519812_37 = PRIM_ISCONS(_3519608_37);
if (True == _3519812_37) {
Obj _3519813_37 = PRIM_CAR(_3519608_37);
Obj x = _3519813_37;
Obj _3519814_37 = PRIM_CDR(_3519608_37);
Obj y = _3519814_37;
pushCont(co, 13, clofun9, 2, _3519606_37, y);
JUMP_WITH_ARGS_3(clofun9, _3519606_37, _3519607_37, x);
} else {
JUMP_WITH_ARGS_2(clofun9, globalRef(__symbolTable[132]), makeCString("no match-help found!"));
}
}
}

label13:
{
Obj _3519815_37 = __arg1;
Obj _3519606_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
JUMP_WITH_ARGS_4(clofun9, globalRef(__symbolTable[131]), _3519606_37, _3519815_37, y);
}

label14:
{
Obj _3519601_37 = __arg1;
Obj _3519602_37 = __arg2;
Obj _3519796_37 = PRIM_EQ(Nil, _3519602_37);
if (True == _3519796_37) {
JUMP_RETURN(clofun9, Nil);
} else {
Obj _3519604_37 = makeNative(15, clofun9, 0, 2, _3519602_37, _3519601_37);
Obj _3519800_37 = PRIM_ISCONS(_3519602_37);
if (True == _3519800_37) {
Obj _3519801_37 = PRIM_CAR(_3519602_37);
Obj _3519802_37 = PRIM_ISCONS(_3519801_37);
if (True == _3519802_37) {
Obj _3519803_37 = PRIM_CAR(_3519602_37);
Obj _3519804_37 = PRIM_CAR(_3519803_37);
Obj x = _3519804_37;
Obj _3519805_37 = PRIM_CAR(_3519602_37);
Obj _3519806_37 = PRIM_CDR(_3519805_37);
Obj y = _3519806_37;
Obj _3519807_37 = PRIM_CDR(_3519602_37);
Obj _3519808_37 = PRIM_EQ(_3519601_37, x);
if (True == _3519808_37) {
Obj _3519809_37 = makeCons(x, y);
JUMP_RETURN(clofun9, _3519809_37);
} else {
JUMP_WITH_ARGS_1(clofun9, _3519604_37);
}
} else {
JUMP_WITH_ARGS_1(clofun9, _3519604_37);
}
} else {
JUMP_WITH_ARGS_1(clofun9, _3519604_37);
}
}
}

label15:
{
Obj _3519797_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519797_37) {
Obj _3519798_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519799_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3519799_37;
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

