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
__symbolTable[50] = intern("cora/lib/toc#generate-inst-list");
__symbolTable[51] = intern("cora/lib/toc#*mod-num*");
__symbolTable[52] = intern("cora/lib/hash-h#mod");
__symbolTable[53] = intern("cora/lib/toc#generate-cont");
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
__nargs = 2;
__arg0 = globalRef(__symbolTable[135]);
__arg1 = makeCString("cora/lib/toc/internal");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3513822_37 = __arg1;
PUSH_CONT_0(co, 2, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[135]);
__arg1 = makeCString("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _3513823_37 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[135]);
__arg1 = makeCString("cora/lib/hash-h");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3513824_37 = __arg1;
Obj _3513825_37 = primSet(co, __symbolTable[134], Nil);
Obj _3513840_37 = primSet(co, __symbolTable[133], makeNative(12, clofun9, 2, 0));
Obj _3513846_37 = primSet(co, __symbolTable[131], makeNative(10, clofun9, 3, 0));
Obj _3513856_37 = primSet(co, __symbolTable[130], makeNative(8, clofun9, 3, 0));
Obj _3513857_37 = primSet(co, __symbolTable[129], makeNative(7, clofun9, 2, 0));
Obj _3513864_37 = primSet(co, __symbolTable[128], makeNative(5, clofun9, 2, 0));
Obj _3513865_37 = makeCons(makeCString("primSet"), Nil);
Obj _3513866_37 = makeCons(MAKE_NUMBER(2), _3513865_37);
Obj _3513867_37 = makeCons(__symbolTable[126], _3513866_37);
Obj _3513868_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3513869_37 = makeCons(MAKE_NUMBER(1), _3513868_37);
Obj _3513870_37 = makeCons(__symbolTable[125], _3513869_37);
Obj _3513871_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3513872_37 = makeCons(MAKE_NUMBER(1), _3513871_37);
Obj _3513873_37 = makeCons(__symbolTable[124], _3513872_37);
Obj _3513874_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3513875_37 = makeCons(MAKE_NUMBER(2), _3513874_37);
Obj _3513876_37 = makeCons(__symbolTable[123], _3513875_37);
Obj _3513877_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3513878_37 = makeCons(MAKE_NUMBER(1), _3513877_37);
Obj _3513879_37 = makeCons(__symbolTable[122], _3513878_37);
Obj _3513880_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3513881_37 = makeCons(MAKE_NUMBER(2), _3513880_37);
Obj _3513882_37 = makeCons(__symbolTable[121], _3513881_37);
Obj _3513883_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3513884_37 = makeCons(MAKE_NUMBER(2), _3513883_37);
Obj _3513885_37 = makeCons(__symbolTable[120], _3513884_37);
Obj _3513886_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3513887_37 = makeCons(MAKE_NUMBER(2), _3513886_37);
Obj _3513888_37 = makeCons(__symbolTable[119], _3513887_37);
Obj _3513889_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3513890_37 = makeCons(MAKE_NUMBER(2), _3513889_37);
Obj _3513891_37 = makeCons(__symbolTable[118], _3513890_37);
Obj _3513892_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3513893_37 = makeCons(MAKE_NUMBER(2), _3513892_37);
Obj _3513894_37 = makeCons(__symbolTable[117], _3513893_37);
Obj _3513895_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3513896_37 = makeCons(MAKE_NUMBER(2), _3513895_37);
Obj _3513897_37 = makeCons(__symbolTable[116], _3513896_37);
Obj _3513898_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3513899_37 = makeCons(MAKE_NUMBER(2), _3513898_37);
Obj _3513900_37 = makeCons(__symbolTable[115], _3513899_37);
Obj _3513901_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3513902_37 = makeCons(MAKE_NUMBER(0), _3513901_37);
Obj _3513903_37 = makeCons(__symbolTable[114], _3513902_37);
Obj _3513904_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3513905_37 = makeCons(MAKE_NUMBER(1), _3513904_37);
Obj _3513906_37 = makeCons(__symbolTable[113], _3513905_37);
Obj _3513907_37 = makeCons(makeCString("primNot"), Nil);
Obj _3513908_37 = makeCons(MAKE_NUMBER(1), _3513907_37);
Obj _3513909_37 = makeCons(__symbolTable[112], _3513908_37);
Obj _3513910_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3513911_37 = makeCons(MAKE_NUMBER(1), _3513910_37);
Obj _3513912_37 = makeCons(__symbolTable[111], _3513911_37);
Obj _3513913_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3513914_37 = makeCons(MAKE_NUMBER(1), _3513913_37);
Obj _3513915_37 = makeCons(__symbolTable[110], _3513914_37);
Obj _3513916_37 = makeCons(_3513915_37, Nil);
Obj _3513917_37 = makeCons(_3513912_37, _3513916_37);
Obj _3513918_37 = makeCons(_3513909_37, _3513917_37);
Obj _3513919_37 = makeCons(_3513906_37, _3513918_37);
Obj _3513920_37 = makeCons(_3513903_37, _3513919_37);
Obj _3513921_37 = makeCons(_3513900_37, _3513920_37);
Obj _3513922_37 = makeCons(_3513897_37, _3513921_37);
Obj _3513923_37 = makeCons(_3513894_37, _3513922_37);
Obj _3513924_37 = makeCons(_3513891_37, _3513923_37);
Obj _3513925_37 = makeCons(_3513888_37, _3513924_37);
Obj _3513926_37 = makeCons(_3513885_37, _3513925_37);
Obj _3513927_37 = makeCons(_3513882_37, _3513926_37);
Obj _3513928_37 = makeCons(_3513879_37, _3513927_37);
Obj _3513929_37 = makeCons(_3513876_37, _3513928_37);
Obj _3513930_37 = makeCons(_3513873_37, _3513929_37);
Obj _3513931_37 = makeCons(_3513870_37, _3513930_37);
Obj _3513932_37 = makeCons(_3513867_37, _3513931_37);
Obj _3513933_37 = primSet(co, __symbolTable[127], _3513932_37);
Obj _3513937_37 = primSet(co, __symbolTable[109], makeNative(2, clofun9, 1, 0));
Obj _3513940_37 = primSet(co, __symbolTable[107], makeNative(49, clofun8, 1, 0));
Obj _3513943_37 = primSet(co, __symbolTable[105], makeNative(46, clofun8, 1, 0));
Obj _3513948_37 = primSet(co, __symbolTable[103], makeNative(45, clofun8, 2, 0));
Obj _3514142_37 = primSet(co, __symbolTable[102], makeNative(13, clofun8, 3, 0));
Obj _3514153_37 = primSet(co, __symbolTable[86], makeNative(9, clofun8, 2, 0));
Obj _3514164_37 = primSet(co, __symbolTable[85], makeNative(5, clofun8, 2, 0));
Obj _3514215_37 = primSet(co, __symbolTable[84], makeNative(49, clofun7, 1, 0));
Obj _3514390_37 = primSet(co, __symbolTable[82], makeNative(29, clofun7, 1, 0));
Obj _3514463_37 = primSet(co, __symbolTable[76], makeNative(17, clofun7, 2, 0));
Obj _3514466_37 = primSet(co, __symbolTable[75], makeNative(16, clofun7, 1, 0));
Obj _3514603_37 = primSet(co, __symbolTable[74], makeNative(0, clofun7, 2, 0));
Obj _3514626_37 = primSet(co, __symbolTable[73], makeNative(43, clofun6, 3, 0));
Obj _3514705_37 = primSet(co, __symbolTable[68], makeNative(28, clofun6, 2, 0));
Obj _3514765_37 = primSet(co, __symbolTable[66], makeNative(19, clofun6, 2, 0));
Obj _3514773_37 = primSet(co, __symbolTable[64], makeNative(15, clofun6, 2, 0));
Obj _3514780_37 = primSet(co, __symbolTable[71], makeNative(13, clofun6, 2, 0));
Obj _3514800_37 = primSet(co, __symbolTable[62], makeNative(1, clofun6, 5, 0));
Obj _3514805_37 = primSet(co, __symbolTable[99], makeNative(48, clofun5, 2, 0));
Obj _3514811_37 = primSet(co, __symbolTable[57], makeNative(46, clofun5, 3, 0));
Obj _3514812_37 = primSet(co, __symbolTable[56], makeNative(45, clofun5, 2, 0));
Obj _3515103_37 = primSet(co, __symbolTable[59], makeNative(45, clofun3, 5, 0));
Obj _3515117_37 = primSet(co, __symbolTable[50], makeNative(37, clofun3, 5, 0));
Obj _3515156_37 = primSet(co, __symbolTable[53], makeNative(13, clofun3, 5, 0));
Obj _3515157_37 = primSet(co, __symbolTable[51], MAKE_NUMBER(50));
Obj _3515161_37 = primSet(co, __symbolTable[54], makeNative(11, clofun3, 3, 0));
Obj _3515165_37 = primSet(co, __symbolTable[46], makeNative(7, clofun3, 3, 0));
Obj _3515173_37 = primSet(co, __symbolTable[45], makeNative(0, clofun3, 3, 0));
Obj _3515178_37 = primSet(co, __symbolTable[43], makeNative(45, clofun2, 3, 0));
Obj _3515185_37 = primSet(co, __symbolTable[42], makeNative(43, clofun2, 4, 0));
Obj _3515248_37 = primSet(co, __symbolTable[41], makeNative(32, clofun2, 4, 0));
Obj _3515249_37 = primSet(co, __symbolTable[39], makeNative(31, clofun2, 2, 0));
Obj _3515250_37 = primSet(co, __symbolTable[38], makeNative(30, clofun2, 1, 0));
Obj _3515251_37 = primSet(co, __symbolTable[37], makeNative(29, clofun2, 1, 0));
Obj _3515252_37 = primSet(co, __symbolTable[36], makeNative(28, clofun2, 1, 0));
Obj _3515262_37 = primSet(co, __symbolTable[35], makeNative(22, clofun2, 1, 0));
Obj _3515269_37 = primSet(co, __symbolTable[33], makeNative(21, clofun2, 2, 0));
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[32]);
__arg1 = __symbolTable[31];
__arg2 = makeNative(18, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3515272_37 = __arg1;
Obj _3515278_37 = primSet(co, __symbolTable[29], makeNative(12, clofun2, 2, 0));
Obj _3515284_37 = primSet(co, __symbolTable[47], makeNative(10, clofun2, 2, 0));
Obj _3515291_37 = primSet(co, __symbolTable[28], makeNative(6, clofun2, 3, 0));
Obj _3515312_37 = primSet(co, __symbolTable[27], makeNative(34, clofun1, 4, 0));
Obj _3515327_37 = primSet(co, __symbolTable[26], makeNative(30, clofun1, 4, 0));
Obj _3515342_37 = primSet(co, __symbolTable[25], makeNative(15, clofun1, 2, 0));
Obj _3515352_37 = primSet(co, __symbolTable[23], makeNative(3, clofun1, 3, 0));
Obj _3515393_37 = primSet(co, __symbolTable[22], makeNative(47, clofun0, 1, 0));
Obj _3515432_37 = primSet(co, __symbolTable[17], makeNative(42, clofun0, 4, 0));
Obj _3515484_37 = primSet(co, __symbolTable[9], makeNative(33, clofun0, 2, 0));
Obj _3515485_37 = primSet(co, __symbolTable[8], makeNative(32, clofun0, 2, 0));
Obj _3515499_37 = primSet(co, __symbolTable[6], makeNative(23, clofun0, 1, 0));
Obj _3515500_37 = primSet(co, __symbolTable[7], False);
Obj _3515513_37 = primSet(co, __symbolTable[5], makeNative(13, clofun0, 1, 0));
Obj _3515523_37 = primSet(co, __symbolTable[3], makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = _3515523_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _3515514_37 = primGenSym();
Obj globals = _3515514_37;
Obj _3515515_37 = primSet(co, globals, Nil);
pushCont(co, 6, clofun0, 3, from, to, globals);
__nargs = 2;
__arg0 = globalRef(__symbolTable[29]);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3515516_37 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, _3515516_37, to, globals);
__nargs = 2;
__arg0 = globalRef(__symbolTable[5]);
__arg1 = from;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3515517_37 = __arg1;
Obj _3515516_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, _3515516_37, to, globals);
__nargs = 2;
__arg0 = globalRef(__symbolTable[2]);
__arg1 = _3515517_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3515518_37 = __arg1;
Obj _3515516_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = _3515516_37;
__arg1 = _3515518_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3515519_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = _3515519_37;
pushCont(co, 10, clofun0, 2, globals, bc);
__nargs = 2;
__arg0 = globalRef(__symbolTable[1]);
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3515520_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = _3515520_37;
pushCont(co, 11, clofun0, 2, bc, stream);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3515521_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun0, 1, stream);
__nargs = 4;
__arg0 = globalRef(__symbolTable[23]);
__arg1 = stream;
__arg2 = bc;
__arg3 = _3515521_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3515522_37 = __arg1;
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(__symbolTable[0]);
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj file_45path = __arg1;
PUSH_CONT_0(co, 14, clofun0);
__nargs = 2;
__arg0 = globalRef(__symbolTable[4]);
__arg1 = file_45path;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3515501_37 = __arg1;
Obj sexp = _3515501_37;
Obj _3513820_37 = makeNative(22, clofun0, 1, 1, sexp);
pushCont(co, 15, clofun0, 2, _3513820_37, sexp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3515504_37 = __arg1;
Obj _3513820_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3515504_37) {
Obj _3515505_37 = PRIM_CAR(sexp);
Obj _3515506_37 = PRIM_EQ(__symbolTable[19], _3515505_37);
if (True == _3515506_37) {
pushCont(co, 20, clofun0, 1, sexp);
__nargs = 2;
__arg0 = _3513820_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 1, sexp);
__nargs = 2;
__arg0 = _3513820_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 16, clofun0, 1, sexp);
__nargs = 2;
__arg0 = _3513820_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _3515511_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3515512_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(__symbolTable[6]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3515509_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 19, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _3515510_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(__symbolTable[6]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3515507_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3515508_37 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(__symbolTable[6]);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3513821_37 = __arg1;
if (True == _3513821_37) {
Obj _3515502_37 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg1 = _3515502_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3515503_37 = makeCons(closureRef(co, 0), Nil);
__nargs = 2;
__arg1 = _3515503_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label23:
{
Obj _3513808_37 = __arg1;
Obj _3513809_37 = makeNative(26, clofun0, 0, 1, _3513808_37);
Obj _3515494_37 = PRIM_ISCONS(_3513808_37);
if (True == _3515494_37) {
Obj _3515495_37 = PRIM_CAR(_3513808_37);
Obj _3515496_37 = PRIM_EQ(__symbolTable[18], _3515495_37);
if (True == _3515496_37) {
Obj _3515497_37 = PRIM_CDR(_3513808_37);
Obj more = _3515497_37;
Obj _3515498_37 = makeCons(__symbolTable[18], more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = _3515498_37;
__arg2 = makeNative(24, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513809_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513809_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
__nargs = 3;
__arg0 = globalRef(__symbolTable[8]);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3513810_37 = makeNative(29, clofun0, 0, 1, closureRef(co, 0));
Obj _3515489_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515489_37) {
Obj _3515490_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515491_37 = PRIM_EQ(__symbolTable[19], _3515490_37);
if (True == _3515491_37) {
Obj _3515492_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515492_37;
Obj _3515493_37 = makeCons(__symbolTable[19], more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = _3515493_37;
__arg2 = makeNative(27, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
__nargs = 3;
__arg0 = globalRef(__symbolTable[8]);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3515486_37 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = _3515486_37;
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
__nargs = 3;
__arg0 = globalRef(__symbolTable[8]);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _3515487_37 = __arg1;
Obj _3515488_37 = makeCons(__symbolTable[19], _3515487_37);
__nargs = 2;
__arg1 = _3515488_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(__symbolTable[7])) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3513801_37 = __arg1;
Obj _3513802_37 = __arg2;
Obj _3513803_37 = makeNative(35, clofun0, 0, 2, _3513801_37, _3513802_37);
Obj _3515472_37 = PRIM_ISCONS(_3513801_37);
if (True == _3515472_37) {
Obj _3515473_37 = PRIM_CAR(_3513801_37);
Obj _3515474_37 = PRIM_EQ(__symbolTable[18], _3515473_37);
if (True == _3515474_37) {
Obj _3515475_37 = PRIM_CDR(_3513801_37);
Obj _3515476_37 = PRIM_ISCONS(_3515475_37);
if (True == _3515476_37) {
Obj _3515477_37 = PRIM_CDR(_3513801_37);
Obj _3515478_37 = PRIM_CAR(_3515477_37);
Obj name = _3515478_37;
Obj _3515479_37 = PRIM_CDR(_3513801_37);
Obj _3515480_37 = PRIM_CDR(_3515479_37);
Obj more = _3515480_37;
pushCont(co, 34, clofun0, 1, name);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = more;
__arg2 = _3513802_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513803_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _3515481_37 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515482_37 = makeCons(name, _3515481_37);
Obj _3515483_37 = makeCons(__symbolTable[18], _3515482_37);
__nargs = 2;
__arg1 = _3515483_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj _3513804_37 = makeNative(37, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515451_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515451_37) {
Obj _3515452_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515453_37 = PRIM_ISCONS(_3515452_37);
if (True == _3515453_37) {
Obj _3515454_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515455_37 = PRIM_CAR(_3515454_37);
Obj _3515456_37 = PRIM_EQ(__symbolTable[21], _3515455_37);
if (True == _3515456_37) {
Obj _3515457_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515458_37 = PRIM_CDR(_3515457_37);
Obj _3515459_37 = PRIM_ISCONS(_3515458_37);
if (True == _3515459_37) {
Obj _3515460_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515461_37 = PRIM_CDR(_3515460_37);
Obj _3515462_37 = PRIM_CAR(_3515461_37);
Obj pkg = _3515462_37;
Obj _3515463_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515464_37 = PRIM_CDR(_3515463_37);
Obj _3515465_37 = PRIM_CDR(_3515464_37);
Obj _3515466_37 = PRIM_EQ(Nil, _3515465_37);
if (True == _3515466_37) {
Obj _3515467_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515467_37;
Obj _3515468_37 = makeCons(pkg, Nil);
Obj _3515469_37 = makeCons(__symbolTable[21], _3515468_37);
pushCont(co, 36, clofun0, 1, _3515469_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = more;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513804_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513804_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513804_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513804_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513804_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _3515470_37 = __arg1;
Obj _3515469_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515471_37 = makeCons(_3515469_37, _3515470_37);
__nargs = 2;
__arg1 = _3515471_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _3513805_37 = makeNative(39, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3515439_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515439_37) {
Obj _3515440_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515441_37 = PRIM_ISCONS(_3515440_37);
if (True == _3515441_37) {
Obj _3515442_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515443_37 = PRIM_CAR(_3515442_37);
Obj _3515444_37 = PRIM_EQ(__symbolTable[20], _3515443_37);
if (True == _3515444_37) {
Obj _3515445_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515446_37 = PRIM_CDR(_3515445_37);
Obj symbols = _3515446_37;
Obj _3515447_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515447_37;
Obj _3515448_37 = makeCons(__symbolTable[20], symbols);
pushCont(co, 38, clofun0, 1, _3515448_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = more;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513805_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513805_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513805_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _3515449_37 = __arg1;
Obj _3515448_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515450_37 = makeCons(_3515448_37, _3515449_37);
__nargs = 2;
__arg1 = _3515450_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj _3513806_37 = makeNative(41, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj _3515433_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515433_37) {
Obj _3515434_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515435_37 = PRIM_EQ(__symbolTable[19], _3515434_37);
if (True == _3515435_37) {
Obj _3515436_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515436_37;
PUSH_CONT_0(co, 40, clofun0);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = more;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513806_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513806_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _3515437_37 = __arg1;
Obj _3515438_37 = makeCons(__symbolTable[19], _3515437_37);
__nargs = 2;
__arg1 = _3515438_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
__nargs = 2;
__arg0 = closureRef(co, 0);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3513793_37 = __arg1;
Obj _3513794_37 = __arg2;
Obj _3513795_37 = __arg3;
Obj _3513796_37 = co->args[4];
Obj _3515394_37 = PRIM_EQ(Nil, _3513793_37);
if (True == _3515394_37) {
pushCont(co, 45, clofun0, 2, _3513795_37, _3513796_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513794_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513798_37 = makeNative(43, clofun0, 0, 4, _3513793_37, _3513794_37, _3513795_37, _3513796_37);
Obj _3515421_37 = PRIM_ISCONS(_3513793_37);
if (True == _3515421_37) {
Obj _3515422_37 = PRIM_CAR(_3513793_37);
Obj _3515423_37 = PRIM_ISCONS(_3515422_37);
if (True == _3515423_37) {
Obj _3515424_37 = PRIM_CAR(_3513793_37);
Obj _3515425_37 = PRIM_CAR(_3515424_37);
Obj _3515426_37 = PRIM_EQ(__symbolTable[10], _3515425_37);
if (True == _3515426_37) {
Obj _3515427_37 = PRIM_CAR(_3513793_37);
Obj _3515428_37 = PRIM_CDR(_3515427_37);
Obj exp = _3515428_37;
Obj _3515429_37 = PRIM_CDR(_3513793_37);
Obj more = _3515429_37;
Obj _3515430_37 = makeCons(__symbolTable[19], exp);
Obj _3515431_37 = makeCons(_3515430_37, _3513794_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3515431_37;
__arg3 = _3513795_37;
co->args[4] = _3513796_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513798_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513798_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513798_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label43:
{
Obj _3513799_37 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3515410_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515410_37) {
Obj _3515411_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515412_37 = PRIM_ISCONS(_3515411_37);
if (True == _3515412_37) {
Obj _3515413_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515414_37 = PRIM_CAR(_3515413_37);
Obj _3515415_37 = PRIM_EQ(__symbolTable[12], _3515414_37);
if (True == _3515415_37) {
Obj _3515416_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515417_37 = PRIM_CDR(_3515416_37);
Obj exp = _3515417_37;
Obj _3515418_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515418_37;
Obj _3515419_37 = makeCons(__symbolTable[11], exp);
Obj _3515420_37 = makeCons(_3515419_37, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3515420_37;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513799_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513799_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513799_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _3515397_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515397_37) {
Obj _3515398_37 = PRIM_CAR(closureRef(co, 0));
Obj exp = _3515398_37;
Obj _3515399_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3515399_37;
Obj _3515400_37 = makeCons(exp, Nil);
Obj _3515401_37 = makeCons(__symbolTable[14], _3515400_37);
Obj _3515402_37 = makeCons(_3515401_37, Nil);
Obj _3515403_37 = makeCons(__symbolTable[15], _3515402_37);
Obj _3515404_37 = makeCons(__symbolTable[13], Nil);
Obj _3515405_37 = makeCons(_3515404_37, Nil);
Obj _3515406_37 = makeCons(_3515403_37, _3515405_37);
Obj _3515407_37 = makeCons(__symbolTable[16], _3515406_37);
Obj _3515408_37 = makeCons(_3515407_37, closureRef(co, 1));
Obj _3515409_37 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3515408_37;
__arg3 = _3515409_37;
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _3515395_37 = __arg1;
Obj _3513795_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513796_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun0, 2, _3513796_37, _3515395_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513795_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3515396_37 = __arg1;
Obj _3513796_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515395_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = _3513796_37;
__arg1 = _3515395_37;
__arg2 = _3515396_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3513787_37 = __arg1;
Obj _3513788_37 = makeNative(48, clofun0, 0, 1, _3513787_37);
Obj _3515384_37 = PRIM_ISCONS(_3513787_37);
if (True == _3515384_37) {
Obj _3515385_37 = PRIM_CAR(_3513787_37);
Obj _3515386_37 = PRIM_EQ(__symbolTable[18], _3515385_37);
if (True == _3515386_37) {
Obj _3515387_37 = PRIM_CDR(_3513787_37);
Obj _3515388_37 = PRIM_ISCONS(_3515387_37);
if (True == _3515388_37) {
Obj _3515389_37 = PRIM_CDR(_3513787_37);
Obj _3515390_37 = PRIM_CAR(_3515389_37);
Obj _3515391_37 = PRIM_CDR(_3513787_37);
Obj _3515392_37 = PRIM_CDR(_3515391_37);
Obj remain = _3515392_37;
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513788_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513788_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513788_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _3513789_37 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj _3515380_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515380_37) {
Obj _3515381_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515382_37 = PRIM_EQ(__symbolTable[19], _3515381_37);
if (True == _3515382_37) {
Obj _3515383_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3515383_37;
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513789_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513789_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _3513790_37 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj _3515371_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515371_37) {
Obj _3515372_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515373_37 = PRIM_ISCONS(_3515372_37);
if (True == _3515373_37) {
Obj _3515374_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515375_37 = PRIM_CAR(_3515374_37);
Obj _3515376_37 = PRIM_EQ(__symbolTable[20], _3515375_37);
if (True == _3515376_37) {
Obj _3515377_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515378_37 = PRIM_CDR(_3515377_37);
Obj _3515379_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3515379_37;
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513790_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513790_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513790_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3513791_37 = makeNative(2, clofun1, 0, 0);
Obj _3515353_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3515353_37) {
Obj _3515354_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515355_37 = PRIM_ISCONS(_3515354_37);
if (True == _3515355_37) {
Obj _3515356_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515357_37 = PRIM_CAR(_3515356_37);
Obj _3515358_37 = PRIM_EQ(__symbolTable[21], _3515357_37);
if (True == _3515358_37) {
Obj _3515359_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515360_37 = PRIM_CDR(_3515359_37);
Obj _3515361_37 = PRIM_ISCONS(_3515360_37);
if (True == _3515361_37) {
Obj _3515362_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515363_37 = PRIM_CDR(_3515362_37);
Obj _3515364_37 = PRIM_CAR(_3515363_37);
Obj pkg = _3515364_37;
Obj _3515365_37 = PRIM_CAR(closureRef(co, 0));
Obj _3515366_37 = PRIM_CDR(_3515365_37);
Obj _3515367_37 = PRIM_CDR(_3515366_37);
Obj _3515368_37 = PRIM_EQ(Nil, _3515367_37);
if (True == _3515368_37) {
Obj _3515369_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3515369_37;
pushCont(co, 1, clofun1, 1, remain);
__nargs = 2;
__arg0 = globalRef(__symbolTable[135]);
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513791_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513791_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513791_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513791_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513791_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3515370_37 = __arg1;
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(__symbolTable[22]);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3515343_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = _3515343_37;
pushCont(co, 5, clofun1, 3, to, globals, groups);
__nargs = 2;
__arg0 = globalRef(__symbolTable[69]);
__arg1 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3515344_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = _3515344_37;
pushCont(co, 6, clofun1, 4, to, maxid, globals, groups);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3515345_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun1, 4, to, maxid, globals, groups);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3515346_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, to, maxid, globals, groups);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(12, clofun1, 1, 2, maxid, to);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3515349_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, to, maxid, globals, groups);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3515350_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun1, 4, to, maxid, globals, groups);
__nargs = 3;
__arg0 = globalRef(__symbolTable[25]);
__arg1 = to;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3515351_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(11, clofun1, 1, 3, to, maxid, globals);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
__nargs = 2;
__arg0 = globalRef(__symbolTable[69]);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3515347_37 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
__nargs = 4;
__arg0 = globalRef(__symbolTable[46]);
__arg1 = closureRef(co, 1);
__arg2 = _3515347_37;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3515348_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj to = __arg1;
Obj globals = __arg2;
pushCont(co, 16, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("static __thread Obj* __symbolTable;\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3515328_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("void entry(struct Cora *co) {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3515329_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("__symbolTable = (Obj*)malloc(sizeof(Obj) * ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3515330_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 19, clofun1, 2, globals, to);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _3515331_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = to;
__arg2 = _3515331_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3515332_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3515333_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun1, 1, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = makeNative(23, clofun1, 2, 1, to);
__arg2 = MAKE_NUMBER(0);
__arg3 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3515341_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("clofun0(co);\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj acc = __arg1;
Obj sym = __arg2;
pushCont(co, 24, clofun1, 2, sym, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("__symbolTable[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3515334_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun1, 2, sym, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 0);
__arg2 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3515335_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun1, 2, sym, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("] = intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3515336_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun1, 1, acc);
__nargs = 2;
__arg0 = globalRef(__symbolTable[24]);
__arg1 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3515337_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 0);
__arg2 = _3515337_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3515338_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun1, 1, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("\");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3515339_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515340_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
__nargs = 2;
__arg1 = _3515340_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj _3513781_37 = __arg1;
Obj _3513782_37 = __arg2;
Obj _3513783_37 = __arg3;
Obj _3513784_37 = co->args[4];
Obj _3515313_37 = PRIM_EQ(Nil, _3513784_37);
if (True == _3515313_37) {
pushCont(co, 32, clofun1, 2, _3513783_37, _3513781_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = _3513783_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515318_37 = PRIM_ISCONS(_3513784_37);
if (True == _3515318_37) {
Obj _3515319_37 = PRIM_CAR(_3513784_37);
Obj bc = _3515319_37;
Obj _3515320_37 = PRIM_CDR(_3513784_37);
Obj more = _3515320_37;
Obj _3515321_37 = PRIM_EQ(_3513782_37, globalRef(__symbolTable[51]));
if (True == _3515321_37) {
pushCont(co, 31, clofun1, 3, _3513781_37, bc, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513783_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515325_37 = PRIM_ADD(_3513782_37, MAKE_NUMBER(1));
Obj _3515326_37 = makeCons(bc, _3513783_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3513781_37;
__arg2 = _3515325_37;
__arg3 = _3515326_37;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label31:
{
Obj _3515322_37 = __arg1;
Obj _3513781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515323_37 = makeCons(_3515322_37, _3513781_37);
Obj _3515324_37 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3515323_37;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _3515324_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3515314_37 = __arg1;
Obj _3513783_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515315_37 = primNot(_3515314_37);
if (True == _3515315_37) {
pushCont(co, 33, clofun1, 1, _3513781_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513783_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513781_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3515316_37 = __arg1;
Obj _3513781_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515317_37 = makeCons(_3515316_37, _3513781_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3515317_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
Obj globals = co->args[4];
pushCont(co, 35, clofun1, 4, maxid, globals, group, to);
__nargs = 2;
__arg0 = globalRef(__symbolTable[69]);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3515292_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun1, 4, maxid, globals, group, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[46]);
__arg1 = to;
__arg2 = _3515292_37;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3515293_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 37, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _3515294_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3515295_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 39, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3515296_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 40, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3515297_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 41, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _3515298_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3515299_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 43, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3515300_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 44, clofun1, 4, maxid, globals, group, to);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3515301_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun1, 4, maxid, globals, group, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = _3515301_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _3515302_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 46, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3515303_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 47, clofun1, 4, maxid, globals, group, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3515304_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 48, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(5, clofun2, 1, 3, to, maxid, globals);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _3515305_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3515306_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3515307_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3515308_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 2, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _3515309_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3515310_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 4, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3515311_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3515285_37 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _3515285_37) {
pushCont(co, 9, clofun2, 2, to, n);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515287_37 = PRIM_LT(i, n);
if (True == _3515287_37) {
pushCont(co, 7, clofun2, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3515288_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun2, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3515289_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3515290_37 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = _3515290_37;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3515286_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = MAKE_NUMBER(1);
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3513777_37 = __arg1;
Obj _3513778_37 = __arg2;
Obj _3515279_37 = PRIM_EQ(Nil, _3513778_37);
if (True == _3515279_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3515280_37 = PRIM_ISCONS(_3513778_37);
if (True == _3515280_37) {
Obj _3515281_37 = PRIM_CAR(_3513778_37);
Obj x = _3515281_37;
Obj _3515282_37 = PRIM_CDR(_3513778_37);
Obj y = _3515282_37;
pushCont(co, 11, clofun2, 2, _3513777_37, y);
__nargs = 2;
__arg0 = _3513777_37;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _3515283_37 = __arg1;
Obj _3513777_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = _3513777_37;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj globals = __arg1;
Obj exp = __arg2;
pushCont(co, 13, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[39]);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3515273_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
__nargs = 2;
__arg0 = _3515273_37;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3515274_37 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[38]);
__arg1 = _3515274_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3515275_37 = __arg1;
PUSH_CONT_0(co, 16, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[37]);
__arg1 = _3515275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3515276_37 = __arg1;
PUSH_CONT_0(co, 17, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[36]);
__arg1 = _3515276_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3515277_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[35]);
__arg1 = _3515277_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj exp = __arg1;
pushCont(co, 19, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[104]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _3515270_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = _3515270_37;
pushCont(co, 20, clofun2, 1, obj);
__nargs = 2;
__arg0 = globalRef(__symbolTable[30]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3515271_37 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = _3515271_37;
__nargs = 3;
__arg0 = globalRef(__symbolTable[33]);
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3513773_37 = __arg1;
Obj _3513774_37 = __arg2;
Obj _3515263_37 = PRIM_EQ(Nil, _3513774_37);
if (True == _3515263_37) {
__nargs = 2;
__arg1 = _3513773_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3515264_37 = PRIM_ISCONS(_3513774_37);
if (True == _3515264_37) {
Obj _3515265_37 = PRIM_CAR(_3513774_37);
Obj hd = _3515265_37;
Obj _3515266_37 = PRIM_CDR(_3513774_37);
Obj more = _3515266_37;
Obj _3515267_37 = makeCons(_3513773_37, Nil);
Obj _3515268_37 = makeCons(hd, _3515267_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[33]);
__arg1 = _3515268_37;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label22:
{
Obj exp = __arg1;
pushCont(co, 23, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[34]);
__arg1 = MAKE_NUMBER(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _3515253_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = _3515253_37;
pushCont(co, 24, clofun2, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(__symbolTable[63]);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3515254_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun2, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(__symbolTable[63]);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3515255_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(__symbolTable[66]);
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3515256_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = _3515256_37;
Obj _3515257_37 = makeCons(e1, Nil);
Obj _3515258_37 = makeCons(Nil, _3515257_37);
Obj _3515259_37 = makeCons(Nil, _3515258_37);
Obj _3515260_37 = makeCons(__symbolTable[94], _3515259_37);
pushCont(co, 27, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = v;
__arg2 = _3515260_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3515261_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[65]);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = exp;
__arg2 = globalRef(__symbolTable[75]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj globals = __arg1;
Obj exp = __arg2;
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = Nil;
__arg2 = globals;
__arg3 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3513767_37 = __arg1;
Obj _3513768_37 = __arg2;
Obj _3513769_37 = __arg3;
Obj _3513770_37 = co->args[4];
Obj _3513771_37 = makeNative(40, clofun2, 0, 1, _3513768_37);
Obj _3515188_37 = PRIM_ISCONS(_3513768_37);
if (True == _3515188_37) {
Obj _3515189_37 = PRIM_CAR(_3513768_37);
Obj label = _3515189_37;
Obj _3515190_37 = PRIM_CDR(_3513768_37);
Obj _3515191_37 = PRIM_ISCONS(_3515190_37);
if (True == _3515191_37) {
Obj _3515192_37 = PRIM_CDR(_3513768_37);
Obj _3515193_37 = PRIM_CAR(_3515192_37);
Obj _3515194_37 = PRIM_ISCONS(_3515193_37);
if (True == _3515194_37) {
Obj _3515195_37 = PRIM_CDR(_3513768_37);
Obj _3515196_37 = PRIM_CAR(_3515195_37);
Obj _3515197_37 = PRIM_CAR(_3515196_37);
Obj _3515198_37 = PRIM_EQ(__symbolTable[94], _3515197_37);
if (True == _3515198_37) {
Obj _3515199_37 = PRIM_CDR(_3513768_37);
Obj _3515200_37 = PRIM_CAR(_3515199_37);
Obj _3515201_37 = PRIM_CDR(_3515200_37);
Obj _3515202_37 = PRIM_ISCONS(_3515201_37);
if (True == _3515202_37) {
Obj _3515203_37 = PRIM_CDR(_3513768_37);
Obj _3515204_37 = PRIM_CAR(_3515203_37);
Obj _3515205_37 = PRIM_CDR(_3515204_37);
Obj _3515206_37 = PRIM_CAR(_3515205_37);
Obj params = _3515206_37;
Obj _3515207_37 = PRIM_CDR(_3513768_37);
Obj _3515208_37 = PRIM_CAR(_3515207_37);
Obj _3515209_37 = PRIM_CDR(_3515208_37);
Obj _3515210_37 = PRIM_CDR(_3515209_37);
Obj _3515211_37 = PRIM_ISCONS(_3515210_37);
if (True == _3515211_37) {
Obj _3515212_37 = PRIM_CDR(_3513768_37);
Obj _3515213_37 = PRIM_CAR(_3515212_37);
Obj _3515214_37 = PRIM_CDR(_3515213_37);
Obj _3515215_37 = PRIM_CDR(_3515214_37);
Obj _3515216_37 = PRIM_CAR(_3515215_37);
Obj actives = _3515216_37;
Obj _3515217_37 = PRIM_CDR(_3513768_37);
Obj _3515218_37 = PRIM_CAR(_3515217_37);
Obj _3515219_37 = PRIM_CDR(_3515218_37);
Obj _3515220_37 = PRIM_CDR(_3515219_37);
Obj _3515221_37 = PRIM_CDR(_3515220_37);
Obj _3515222_37 = PRIM_ISCONS(_3515221_37);
if (True == _3515222_37) {
Obj _3515223_37 = PRIM_CDR(_3513768_37);
Obj _3515224_37 = PRIM_CAR(_3515223_37);
Obj _3515225_37 = PRIM_CDR(_3515224_37);
Obj _3515226_37 = PRIM_CDR(_3515225_37);
Obj _3515227_37 = PRIM_CDR(_3515226_37);
Obj _3515228_37 = PRIM_CAR(_3515227_37);
Obj body = _3515228_37;
Obj _3515229_37 = PRIM_CDR(_3513768_37);
Obj _3515230_37 = PRIM_CAR(_3515229_37);
Obj _3515231_37 = PRIM_CDR(_3515230_37);
Obj _3515232_37 = PRIM_CDR(_3515231_37);
Obj _3515233_37 = PRIM_CDR(_3515232_37);
Obj _3515234_37 = PRIM_CDR(_3515233_37);
Obj _3515235_37 = PRIM_EQ(Nil, _3515234_37);
if (True == _3515235_37) {
Obj _3515236_37 = PRIM_CDR(_3513768_37);
Obj _3515237_37 = PRIM_CDR(_3515236_37);
Obj _3515238_37 = PRIM_EQ(Nil, _3515237_37);
if (True == _3515238_37) {
pushCont(co, 33, clofun2, 7, actives, _3513769_37, label, _3513770_37, params, body, _3513767_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513767_37;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3515239_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513769_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513770_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj _3515240_37 = PRIM_SUB(_3513769_37, label);
pushCont(co, 34, clofun2, 7, actives, _3513769_37, label, _3513770_37, params, body, _3513767_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3515240_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3515241_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513769_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513770_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 35, clofun2, 7, actives, _3513769_37, label, _3513770_37, params, body, _3513767_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513767_37;
__arg2 = _3515241_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3515242_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513769_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513770_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 36, clofun2, 7, actives, _3513769_37, label, _3513770_37, params, body, _3513767_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513767_37;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3515243_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513769_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513770_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 37, clofun2, 7, actives, _3513769_37, label, _3513770_37, params, body, _3513767_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[45]);
__arg2 = _3513767_37;
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
Obj _3515244_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513769_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513770_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 38, clofun2, 6, _3513769_37, label, _3513770_37, params, body, _3513767_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[43]);
__arg2 = _3513767_37;
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
Obj _3515245_37 = __arg1;
Obj _3513769_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513770_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3515246_37 = makeCons(_3513769_37, label);
pushCont(co, 39, clofun2, 1, _3513767_37);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3513770_37;
__arg2 = _3515246_37;
__arg3 = params;
co->args[4] = _3513767_37;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3515247_37 = __arg1;
Obj _3513767_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513767_37;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
PUSH_CONT_0(co, 41, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[40]);
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _3515186_37 = __arg1;
PUSH_CONT_0(co, 42, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[40]);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3515187_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[40]);
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3513761_37 = __arg1;
Obj _3513762_37 = __arg2;
Obj _3513763_37 = __arg3;
Obj _3513764_37 = co->args[4];
Obj _3515179_37 = PRIM_EQ(Nil, _3513764_37);
if (True == _3515179_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3515180_37 = PRIM_ISCONS(_3513764_37);
if (True == _3515180_37) {
Obj _3515181_37 = PRIM_CAR(_3513764_37);
Obj a = _3515181_37;
Obj _3515182_37 = PRIM_CDR(_3513764_37);
Obj b = _3515182_37;
pushCont(co, 44, clofun2, 4, _3513763_37, _3513761_37, _3513762_37, b);
__nargs = 4;
__arg0 = _3513761_37;
__arg1 = _3513762_37;
__arg2 = _3513763_37;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label44:
{
Obj _3515183_37 = __arg1;
Obj _3513763_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513761_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513762_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3515184_37 = PRIM_ADD(_3513763_37, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = _3513761_37;
__arg2 = _3513762_37;
__arg3 = _3515184_37;
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
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3515174_37 = __arg1;
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
Obj _3515175_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 48, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _3515176_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3515177_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3515166_37 = __arg1;
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
Obj _3515167_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515168_37 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _3515168_37) {
pushCont(co, 5, clofun3, 2, i, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 3, clofun3, 2, i, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _3515171_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3515172_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3515169_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3515170_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
pushCont(co, 8, clofun3, 3, label, maxid, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("static void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3515162_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun3, 1, w);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = w;
__arg2 = label;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3515163_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3515164_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj _3515158_37 = PRIM_SUB(maxid, label);
Obj _3515159_37 = primDiv(_3515158_37, globalRef(__symbolTable[51]));
Obj gid = _3515159_37;
pushCont(co, 12, clofun3, 2, w, gid);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = w;
__arg2 = makeCString("clofun");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3515160_37 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = w;
__arg2 = gid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3513755_37 = __arg1;
Obj _3513756_37 = __arg2;
Obj _3513757_37 = __arg3;
Obj _3513758_37 = co->args[4];
Obj _3513759_37 = co->args[5];
Obj _3513760_37 = makeNative(36, clofun3, 0, 0);
Obj _3515118_37 = PRIM_ISCONS(_3513759_37);
if (True == _3515118_37) {
Obj _3515119_37 = PRIM_CAR(_3513759_37);
Obj _3515120_37 = PRIM_EQ(__symbolTable[67], _3515119_37);
if (True == _3515120_37) {
Obj _3515121_37 = PRIM_CDR(_3513759_37);
Obj _3515122_37 = PRIM_ISCONS(_3515121_37);
if (True == _3515122_37) {
Obj _3515123_37 = PRIM_CDR(_3513759_37);
Obj _3515124_37 = PRIM_CAR(_3515123_37);
Obj label = _3515124_37;
Obj _3515125_37 = PRIM_CDR(_3513759_37);
Obj _3515126_37 = PRIM_CDR(_3515125_37);
Obj stacks = _3515126_37;
Obj _3515127_37 = PRIM_EQ(stacks, Nil);
if (True == _3515127_37) {
pushCont(co, 25, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString("PUSH_CONT_0(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 14, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513760_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513760_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513760_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _3515142_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3515143_37 = PRIM_CAR(_3513756_37);
Obj _3515144_37 = PRIM_SUB(_3515143_37, label);
pushCont(co, 15, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3515144_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3515145_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 16, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513758_37;
__arg2 = _3515145_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3515146_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 17, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3515147_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3515148_37 = PRIM_CAR(_3513756_37);
pushCont(co, 18, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = _3513758_37;
__arg2 = label;
__arg3 = _3515148_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3515149_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3515150_37 = PRIM_EQ(stacks, Nil);
if (True == _3515150_37) {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _3515151_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3515152_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 21, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513758_37;
__arg2 = _3515152_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3515153_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun3, 1, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(23, clofun3, 1, 3, _3513755_37, _3513756_37, _3513758_37);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3515155_37 = __arg1;
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x = __arg1;
pushCont(co, 24, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3515154_37 = __arg1;
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
Obj _3515128_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3515129_37 = PRIM_CAR(_3513756_37);
Obj _3515130_37 = PRIM_SUB(_3515129_37, label);
pushCont(co, 26, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3515130_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3515131_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513758_37;
__arg2 = _3515131_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3515132_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun3, 5, label, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3515133_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3515134_37 = PRIM_CAR(_3513756_37);
pushCont(co, 29, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = _3513758_37;
__arg2 = label;
__arg3 = _3515134_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3515135_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3515136_37 = PRIM_EQ(stacks, Nil);
if (True == _3515136_37) {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 30, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj _3515137_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _3515138_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun3, 4, _3513755_37, _3513756_37, stacks, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513758_37;
__arg2 = _3515138_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3515139_37 = __arg1;
Obj _3513755_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513756_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 1, _3513758_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(34, clofun3, 1, 3, _3513755_37, _3513756_37, _3513758_37);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3515141_37 = __arg1;
Obj _3513758_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513758_37;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x = __arg1;
pushCont(co, 35, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3515140_37 = __arg1;
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
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj globals = __arg1;
Obj self = __arg2;
Obj env = __arg3;
Obj w = co->args[4];
Obj l = co->args[5];
Obj _3515104_37 = primGenSym();
Obj generate_45inst_45list_45h = _3515104_37;
Obj _3515115_37 = primSet(co, generate_45inst_45list_45h, makeNative(39, clofun3, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
pushCont(co, 38, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = generate_45inst_45list_45h;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3515116_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3515116_37;
__arg1 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x = __arg1;
Obj _3515105_37 = PRIM_EQ(Nil, x);
if (True == _3515105_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3515106_37 = PRIM_ISCONS(x);
if (True == _3515106_37) {
Obj _3515107_37 = PRIM_CAR(x);
Obj a = _3515107_37;
Obj _3515108_37 = PRIM_CDR(x);
Obj b = _3515108_37;
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
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label40:
{
Obj _3515109_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 41, clofun3, 1, b);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _3515110_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3515111_37 = primNot(_3515110_37);
if (True == _3515111_37) {
pushCont(co, 43, clofun3, 1, b);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 42, clofun3, 1, b);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _3515114_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3515114_37;
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3515112_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 1, b);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3515113_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3515113_37;
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj globals = __arg1;
Obj self = __arg2;
Obj env1 = __arg3;
Obj w = co->args[4];
Obj x1 = co->args[5];
Obj _3514813_37 = primGenSym();
Obj generate_45inst_45h = _3514813_37;
Obj _3515101_37 = primSet(co, generate_45inst_45h, makeNative(47, clofun3, 2, 4, self, generate_45inst_45h, globals, w));
pushCont(co, 46, clofun3, 2, x1, env1);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = generate_45inst_45h;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3515102_37 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = _3515102_37;
__arg1 = x1;
__arg2 = env1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x2 = __arg1;
Obj env = __arg2;
Obj _3514814_37 = primIsSymbol(x2);
if (True == _3514814_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[55]);
__arg1 = closureRef(co, 3);
__arg2 = x2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513740_37 = makeNative(1, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), env, closureRef(co, 2), x2, closureRef(co, 3));
Obj _3515088_37 = PRIM_ISCONS(x2);
if (True == _3515088_37) {
Obj _3515089_37 = PRIM_CAR(x2);
Obj _3515090_37 = PRIM_EQ(__symbolTable[98], _3515089_37);
if (True == _3515090_37) {
Obj _3515091_37 = PRIM_CDR(x2);
Obj _3515092_37 = PRIM_ISCONS(_3515091_37);
if (True == _3515092_37) {
Obj _3515093_37 = PRIM_CDR(x2);
Obj _3515094_37 = PRIM_CAR(_3515093_37);
Obj x = _3515094_37;
Obj _3515095_37 = PRIM_CDR(x2);
Obj _3515096_37 = PRIM_CDR(_3515095_37);
Obj _3515097_37 = PRIM_EQ(Nil, _3515096_37);
if (True == _3515097_37) {
pushCont(co, 48, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("globalRef(__symbolTable[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513740_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513740_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513740_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513740_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label48:
{
Obj _3515098_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 49, clofun3);
__nargs = 3;
__arg0 = globalRef(__symbolTable[56]);
__arg1 = x;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3515099_37 = __arg1;
PUSH_CONT_0(co, 0, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 3);
__arg2 = _3515099_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3515100_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("])");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3513741_37 = makeNative(4, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4), closureRef(co, 5));
Obj _3515076_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3515076_37) {
Obj _3515077_37 = PRIM_CAR(closureRef(co, 4));
Obj _3515078_37 = PRIM_EQ(__symbolTable[83], _3515077_37);
if (True == _3515078_37) {
Obj _3515079_37 = PRIM_CDR(closureRef(co, 4));
Obj _3515080_37 = PRIM_ISCONS(_3515079_37);
if (True == _3515080_37) {
Obj _3515081_37 = PRIM_CDR(closureRef(co, 4));
Obj _3515082_37 = PRIM_CAR(_3515081_37);
Obj idx = _3515082_37;
Obj _3515083_37 = PRIM_CDR(closureRef(co, 4));
Obj _3515084_37 = PRIM_CDR(_3515083_37);
Obj _3515085_37 = PRIM_EQ(Nil, _3515084_37);
if (True == _3515085_37) {
pushCont(co, 2, clofun4, 1, idx);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513741_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513741_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513741_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513741_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _3515086_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 3, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3515087_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3513742_37 = makeNative(7, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 3), closureRef(co, 5));
Obj _3515064_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3515064_37) {
Obj _3515065_37 = PRIM_CAR(closureRef(co, 4));
Obj _3515066_37 = PRIM_EQ(__symbolTable[48], _3515065_37);
if (True == _3515066_37) {
Obj _3515067_37 = PRIM_CDR(closureRef(co, 4));
Obj _3515068_37 = PRIM_ISCONS(_3515067_37);
if (True == _3515068_37) {
Obj _3515069_37 = PRIM_CDR(closureRef(co, 4));
Obj _3515070_37 = PRIM_CAR(_3515069_37);
Obj idx = _3515070_37;
Obj _3515071_37 = PRIM_CDR(closureRef(co, 4));
Obj _3515072_37 = PRIM_CDR(_3515071_37);
Obj _3515073_37 = PRIM_EQ(Nil, _3515072_37);
if (True == _3515073_37) {
pushCont(co, 5, clofun4, 1, idx);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513742_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513742_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513742_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513742_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _3515074_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 6, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3515075_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3513743_37 = makeNative(17, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 0), closureRef(co, 3), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2));
Obj _3515040_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3515040_37) {
Obj _3515041_37 = PRIM_CAR(closureRef(co, 3));
Obj _3515042_37 = PRIM_EQ(__symbolTable[101], _3515041_37);
if (True == _3515042_37) {
Obj _3515043_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515044_37 = PRIM_ISCONS(_3515043_37);
if (True == _3515044_37) {
Obj _3515045_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515046_37 = PRIM_CAR(_3515045_37);
Obj x = _3515046_37;
Obj _3515047_37 = PRIM_CDR(closureRef(co, 3));
Obj _3515048_37 = PRIM_CDR(_3515047_37);
Obj _3515049_37 = PRIM_EQ(Nil, _3515048_37);
if (True == _3515049_37) {
Obj _3515050_37 = primIsSymbol(x);
if (True == _3515050_37) {
pushCont(co, 14, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("__symbolTable[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 8, clofun4, 1, x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513743_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513743_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513743_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513743_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _3515054_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3515054_37) {
pushCont(co, 12, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("MAKE_NUMBER(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515057_37 = primIsString(x);
if (True == _3515057_37) {
pushCont(co, 9, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515061_37 = PRIM_EQ(x, Nil);
if (True == _3515061_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515062_37 = PRIM_EQ(x, True);
if (True == _3515062_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3515063_37 = PRIM_EQ(x, False);
if (True == _3515063_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label9:
{
Obj _3515058_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 10, clofun4);
__nargs = 2;
__arg0 = globalRef(__symbolTable[49]);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3515059_37 = __arg1;
PUSH_CONT_0(co, 11, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = _3515059_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3515060_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3515055_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3515056_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3515051_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 15, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[56]);
__arg1 = x;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3515052_37 = __arg1;
PUSH_CONT_0(co, 16, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = _3515052_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3515053_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3513744_37 = makeNative(32, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 5), closureRef(co, 3));
Obj _3514997_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3514997_37) {
Obj _3514998_37 = PRIM_CAR(closureRef(co, 2));
Obj _3514999_37 = PRIM_EQ(__symbolTable[91], _3514998_37);
if (True == _3514999_37) {
Obj _3515000_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515001_37 = PRIM_ISCONS(_3515000_37);
if (True == _3515001_37) {
Obj _3515002_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515003_37 = PRIM_CAR(_3515002_37);
Obj a = _3515003_37;
Obj _3515004_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515005_37 = PRIM_CDR(_3515004_37);
Obj _3515006_37 = PRIM_ISCONS(_3515005_37);
if (True == _3515006_37) {
Obj _3515007_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515008_37 = PRIM_CDR(_3515007_37);
Obj _3515009_37 = PRIM_CAR(_3515008_37);
Obj b = _3515009_37;
Obj _3515010_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515011_37 = PRIM_CDR(_3515010_37);
Obj _3515012_37 = PRIM_CDR(_3515011_37);
Obj _3515013_37 = PRIM_ISCONS(_3515012_37);
if (True == _3515013_37) {
Obj _3515014_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515015_37 = PRIM_CDR(_3515014_37);
Obj _3515016_37 = PRIM_CDR(_3515015_37);
Obj _3515017_37 = PRIM_CAR(_3515016_37);
Obj c = _3515017_37;
Obj _3515018_37 = PRIM_CDR(closureRef(co, 2));
Obj _3515019_37 = PRIM_CDR(_3515018_37);
Obj _3515020_37 = PRIM_CDR(_3515019_37);
Obj _3515021_37 = PRIM_CDR(_3515020_37);
Obj _3515022_37 = PRIM_EQ(Nil, _3515021_37);
if (True == _3515022_37) {
pushCont(co, 18, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = a;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513744_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513744_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513744_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513744_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513744_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513744_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _3515023_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = _3515023_37;
Obj _3515024_37 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _3515024_37) {
pushCont(co, 25, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 19, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[55]);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _3515033_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 20, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3515034_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun4, 3, b, a, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3515035_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun4, 2, a, c);
__nargs = 3;
__arg0 = _3515035_37;
__arg1 = b;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3515036_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun4, 2, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _3515037_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun4, 2, a, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3515038_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515039_37 = makeCons(a, closureRef(co, 5));
__nargs = 3;
__arg0 = _3515038_37;
__arg1 = c;
__arg2 = _3515039_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3515025_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 26, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[55]);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3515026_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 27, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3515027_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 28, clofun4, 3, b, a, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3515028_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 29, clofun4, 2, a, c);
__nargs = 3;
__arg0 = _3515028_37;
__arg1 = b;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3515029_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 30, clofun4, 2, a, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3515030_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun4, 2, a, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _3515031_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3515032_37 = makeCons(a, closureRef(co, 5));
__nargs = 3;
__arg0 = _3515031_37;
__arg1 = c;
__arg2 = _3515032_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3513745_37 = makeNative(39, clofun4, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 0), closureRef(co, 4), closureRef(co, 5));
Obj _3514973_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3514973_37) {
Obj _3514974_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514975_37 = PRIM_ISCONS(_3514974_37);
if (True == _3514975_37) {
Obj _3514976_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514977_37 = PRIM_CAR(_3514976_37);
Obj _3514978_37 = PRIM_EQ(__symbolTable[95], _3514977_37);
if (True == _3514978_37) {
Obj _3514979_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514980_37 = PRIM_CDR(_3514979_37);
Obj _3514981_37 = PRIM_ISCONS(_3514980_37);
if (True == _3514981_37) {
Obj _3514982_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514983_37 = PRIM_CDR(_3514982_37);
Obj _3514984_37 = PRIM_CAR(_3514983_37);
Obj f = _3514984_37;
Obj _3514985_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514986_37 = PRIM_CDR(_3514985_37);
Obj _3514987_37 = PRIM_CDR(_3514986_37);
Obj _3514988_37 = PRIM_EQ(Nil, _3514987_37);
if (True == _3514988_37) {
Obj _3514989_37 = PRIM_CDR(closureRef(co, 1));
Obj args = _3514989_37;
pushCont(co, 33, clofun4, 2, f, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[107]);
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513745_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513745_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513745_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513745_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513745_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3514990_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = _3514990_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3514991_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514992_37 = PRIM_EQ(f, __symbolTable[126]);
if (True == _3514992_37) {
pushCont(co, 37, clofun4, 1, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 35, clofun4, 1, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _3514995_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 36, clofun4);
__nargs = 6;
__arg0 = globalRef(__symbolTable[50]);
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
Obj _3514996_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _3514993_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 38, clofun4);
__nargs = 6;
__arg0 = globalRef(__symbolTable[50]);
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
Obj _3514994_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3513746_37 = makeNative(49, clofun4, 0, 6, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5));
Obj _3514938_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3514938_37) {
Obj _3514939_37 = PRIM_CAR(closureRef(co, 2));
Obj _3514940_37 = PRIM_EQ(__symbolTable[92], _3514939_37);
if (True == _3514940_37) {
Obj _3514941_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514942_37 = PRIM_ISCONS(_3514941_37);
if (True == _3514942_37) {
Obj _3514943_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514944_37 = PRIM_CAR(_3514943_37);
Obj a = _3514944_37;
Obj _3514945_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514946_37 = PRIM_CDR(_3514945_37);
Obj _3514947_37 = PRIM_ISCONS(_3514946_37);
if (True == _3514947_37) {
Obj _3514948_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514949_37 = PRIM_CDR(_3514948_37);
Obj _3514950_37 = PRIM_CAR(_3514949_37);
Obj b = _3514950_37;
Obj _3514951_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514952_37 = PRIM_CDR(_3514951_37);
Obj _3514953_37 = PRIM_CDR(_3514952_37);
Obj _3514954_37 = PRIM_ISCONS(_3514953_37);
if (True == _3514954_37) {
Obj _3514955_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514956_37 = PRIM_CDR(_3514955_37);
Obj _3514957_37 = PRIM_CDR(_3514956_37);
Obj _3514958_37 = PRIM_CAR(_3514957_37);
Obj c = _3514958_37;
Obj _3514959_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514960_37 = PRIM_CDR(_3514959_37);
Obj _3514961_37 = PRIM_CDR(_3514960_37);
Obj _3514962_37 = PRIM_CDR(_3514961_37);
Obj _3514963_37 = PRIM_EQ(Nil, _3514962_37);
if (True == _3514963_37) {
pushCont(co, 40, clofun4, 3, a, b, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513746_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513746_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513746_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513746_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513746_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513746_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _3514964_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 41, clofun4, 3, a, b, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _3514965_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun4, 2, b, c);
__nargs = 3;
__arg0 = _3514965_37;
__arg1 = a;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3514966_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 43, clofun4, 2, b, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3514967_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun4, 2, b, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3514968_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 1, c);
__nargs = 3;
__arg0 = _3514968_37;
__arg1 = b;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _3514969_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 46, clofun4, 1, c);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3514970_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 47, clofun4, 1, c);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3514971_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun4);
__nargs = 3;
__arg0 = _3514971_37;
__arg1 = c;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _3514972_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3513747_37 = makeNative(13, clofun5, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 5), closureRef(co, 0), closureRef(co, 4));
Obj _3514905_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3514905_37) {
Obj _3514906_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514907_37 = PRIM_EQ(__symbolTable[77], _3514906_37);
if (True == _3514907_37) {
Obj _3514908_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514909_37 = PRIM_ISCONS(_3514908_37);
if (True == _3514909_37) {
Obj _3514910_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514911_37 = PRIM_CAR(_3514910_37);
Obj label = _3514911_37;
Obj _3514912_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514913_37 = PRIM_CDR(_3514912_37);
Obj _3514914_37 = PRIM_ISCONS(_3514913_37);
if (True == _3514914_37) {
Obj _3514915_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514916_37 = PRIM_CDR(_3514915_37);
Obj _3514917_37 = PRIM_CAR(_3514916_37);
Obj nargs = _3514917_37;
Obj _3514918_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514919_37 = PRIM_CDR(_3514918_37);
Obj _3514920_37 = PRIM_CDR(_3514919_37);
Obj frees = _3514920_37;
pushCont(co, 0, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513747_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513747_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513747_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513747_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3514921_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514922_37 = PRIM_CAR(closureRef(co, 3));
Obj _3514923_37 = PRIM_SUB(_3514922_37, label);
pushCont(co, 1, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3514923_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3514924_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = _3514924_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _3514925_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 3, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3514926_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514927_37 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 4, clofun5, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 5);
__arg2 = label;
__arg3 = _3514927_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3514928_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 5, clofun5, 2, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3514929_37 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun5, 1, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3514930_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 7, clofun5, 1, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3514931_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun5, 1, frees);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3514932_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 9, clofun5, 1, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = _3514932_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3514933_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 10, clofun5, 1, frees);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3514934_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514935_37 = primNot(_3514934_37);
if (True == _3514935_37) {
pushCont(co, 11, clofun5, 1, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _3514936_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[50]);
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
Obj _3514937_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _3513748_37 = makeNative(18, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 3));
Obj _3514884_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3514884_37) {
Obj _3514885_37 = PRIM_CAR(closureRef(co, 2));
Obj _3514886_37 = PRIM_EQ(__symbolTable[90], _3514885_37);
if (True == _3514886_37) {
Obj _3514887_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514888_37 = PRIM_ISCONS(_3514887_37);
if (True == _3514888_37) {
Obj _3514889_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514890_37 = PRIM_CAR(_3514889_37);
Obj a = _3514890_37;
Obj _3514891_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514892_37 = PRIM_CDR(_3514891_37);
Obj _3514893_37 = PRIM_ISCONS(_3514892_37);
if (True == _3514893_37) {
Obj _3514894_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514895_37 = PRIM_CDR(_3514894_37);
Obj _3514896_37 = PRIM_CAR(_3514895_37);
Obj b = _3514896_37;
Obj _3514897_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514898_37 = PRIM_CDR(_3514897_37);
Obj _3514899_37 = PRIM_CDR(_3514898_37);
Obj _3514900_37 = PRIM_EQ(Nil, _3514899_37);
if (True == _3514900_37) {
pushCont(co, 14, clofun5, 2, a, b);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513748_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513748_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513748_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513748_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513748_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _3514901_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 1, b);
__nargs = 3;
__arg0 = _3514901_37;
__arg1 = a;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3514902_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun5, 1, b);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3514903_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun5, 1, b);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3514904_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = _3514904_37;
__arg1 = b;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3513749_37 = makeNative(28, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3514863_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3514863_37) {
Obj _3514864_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514865_37 = PRIM_EQ(__symbolTable[78], _3514864_37);
if (True == _3514865_37) {
Obj _3514866_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514867_37 = PRIM_ISCONS(_3514866_37);
if (True == _3514867_37) {
Obj _3514868_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514869_37 = PRIM_CAR(_3514868_37);
Obj x = _3514869_37;
Obj _3514870_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514871_37 = PRIM_CDR(_3514870_37);
Obj _3514872_37 = PRIM_EQ(Nil, _3514871_37);
if (True == _3514872_37) {
pushCont(co, 19, clofun5, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513749_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513749_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513749_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513749_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _3514873_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 20, clofun5, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3514874_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun5, 1, x);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3514875_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 22, clofun5);
__nargs = 3;
__arg0 = _3514875_37;
__arg1 = x;
__arg2 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3514876_37 = __arg1;
PUSH_CONT_0(co, 23, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _3514877_37 = __arg1;
PUSH_CONT_0(co, 24, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _3514878_37 = __arg1;
PUSH_CONT_0(co, 25, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3514879_37 = __arg1;
Obj _3514880_37 = PRIM_CDR(closureRef(co, 4));
Obj _3514881_37 = PRIM_CAR(closureRef(co, 4));
PUSH_CONT_0(co, 26, clofun5);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 5);
__arg2 = _3514880_37;
__arg3 = _3514881_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3514882_37 = __arg1;
PUSH_CONT_0(co, 27, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3514883_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3513750_37 = makeNative(30, clofun5, 0, 6, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5));
Obj _3514852_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3514852_37) {
Obj _3514853_37 = PRIM_CAR(closureRef(co, 3));
Obj _3514854_37 = PRIM_EQ(__symbolTable[80], _3514853_37);
if (True == _3514854_37) {
Obj _3514855_37 = PRIM_CDR(closureRef(co, 3));
Obj _3514856_37 = PRIM_ISCONS(_3514855_37);
if (True == _3514856_37) {
Obj _3514857_37 = PRIM_CDR(closureRef(co, 3));
Obj _3514858_37 = PRIM_CAR(_3514857_37);
Obj exp = _3514858_37;
Obj _3514859_37 = PRIM_CDR(closureRef(co, 3));
Obj _3514860_37 = PRIM_CDR(_3514859_37);
Obj _3514861_37 = PRIM_EQ(Nil, _3514860_37);
if (True == _3514861_37) {
pushCont(co, 29, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513750_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513750_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513750_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513750_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _3514862_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = _3514862_37;
__arg1 = exp;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3513751_37 = makeNative(33, clofun5, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3514833_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514833_37) {
Obj _3514834_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514835_37 = PRIM_EQ(__symbolTable[79], _3514834_37);
if (True == _3514835_37) {
Obj _3514836_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514837_37 = PRIM_ISCONS(_3514836_37);
if (True == _3514837_37) {
Obj _3514838_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514839_37 = PRIM_CAR(_3514838_37);
Obj exp = _3514839_37;
Obj _3514840_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514841_37 = PRIM_CDR(_3514840_37);
Obj _3514842_37 = PRIM_ISCONS(_3514841_37);
if (True == _3514842_37) {
Obj _3514843_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514844_37 = PRIM_CDR(_3514843_37);
Obj _3514845_37 = PRIM_CAR(_3514844_37);
Obj cont = _3514845_37;
Obj _3514846_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514847_37 = PRIM_CDR(_3514846_37);
Obj _3514848_37 = PRIM_CDR(_3514847_37);
Obj _3514849_37 = PRIM_EQ(Nil, _3514848_37);
if (True == _3514849_37) {
pushCont(co, 31, clofun5, 1, exp);
__nargs = 6;
__arg0 = globalRef(__symbolTable[53]);
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
__nargs = 1;
__arg0 = _3513751_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513751_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513751_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513751_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513751_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _3514850_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3514851_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = _3514851_37;
__arg1 = exp;
__arg2 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3514815_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514815_37) {
Obj _3514816_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3514816_37;
Obj _3514817_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514817_37;
pushCont(co, 34, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _3514818_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 35, clofun5, 2, f, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3514819_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514820_37 = PRIM_ADD(MAKE_NUMBER(1), _3514819_37);
pushCont(co, 36, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 3);
__arg2 = _3514820_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3514821_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 37, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _3514822_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514823_37 = makeCons(f, args);
PUSH_CONT_0(co, 38, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = MAKE_NUMBER(0);
co->args[5] = _3514823_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3514824_37 = __arg1;
PUSH_CONT_0(co, 39, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3514825_37 = __arg1;
PUSH_CONT_0(co, 40, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3514826_37 = __arg1;
PUSH_CONT_0(co, 41, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _3514827_37 = __arg1;
PUSH_CONT_0(co, 42, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3514828_37 = __arg1;
Obj _3514829_37 = PRIM_CDR(closureRef(co, 2));
Obj _3514830_37 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT_0(co, 43, clofun5);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 3);
__arg2 = _3514829_37;
__arg3 = _3514830_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3514831_37 = __arg1;
PUSH_CONT_0(co, 44, clofun5);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3514832_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj sym = __arg1;
Obj globals = __arg2;
__nargs = 4;
__arg0 = globalRef(__symbolTable[57]);
__arg1 = MAKE_NUMBER(0);
__arg2 = sym;
__arg3 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj idx = __arg1;
Obj sym = __arg2;
Obj globals = __arg3;
pushCont(co, 47, clofun5, 3, idx, globals, sym);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3514806_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3514806_37) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514807_37 = PRIM_CAR(globals);
Obj _3514808_37 = PRIM_EQ(sym, _3514807_37);
if (True == _3514808_37) {
__nargs = 2;
__arg1 = idx;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514809_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3514810_37 = PRIM_CDR(globals);
__nargs = 4;
__arg0 = globalRef(__symbolTable[57]);
__arg1 = _3514809_37;
__arg2 = sym;
__arg3 = _3514810_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label48:
{
Obj sym = __arg1;
Obj globals = __arg2;
pushCont(co, 49, clofun5, 2, sym, globals);
__nargs = 2;
__arg0 = globalRef(__symbolTable[58]);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3514801_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = _3514801_37;
pushCont(co, 0, clofun6, 3, sym, val, globals);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = sym;
__arg2 = val;
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
Obj _3514802_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3514802_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514803_37 = makeCons(sym, val);
Obj _3514804_37 = primSet(co, globals, _3514803_37);
__nargs = 2;
__arg1 = _3514804_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj _3513733_37 = __arg1;
Obj _3513734_37 = __arg2;
Obj _3513735_37 = __arg3;
Obj _3513736_37 = co->args[4];
Obj _3513737_37 = co->args[5];
Obj _3514781_37 = PRIM_EQ(Nil, _3513737_37);
if (True == _3514781_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514782_37 = PRIM_ISCONS(_3513737_37);
if (True == _3514782_37) {
Obj _3514783_37 = PRIM_CAR(_3513737_37);
Obj x = _3514783_37;
Obj _3514784_37 = PRIM_CDR(_3513737_37);
Obj more = _3514784_37;
Obj _3514785_37 = PRIM_GT(_3513736_37, MAKE_NUMBER(3));
Obj _3514786_37 = primNot(_3514785_37);
if (True == _3514786_37) {
pushCont(co, 8, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 2, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label2:
{
Obj _3514793_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 3, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513735_37;
__arg2 = _3513736_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3514794_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 4, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3514795_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 5, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3514796_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 6, clofun6, 5, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3513733_37;
__arg2 = _3513734_37;
__arg3 = Nil;
co->args[4] = _3513735_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3514797_37 = __arg1;
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 7, clofun6, 5, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3514798_37 = __arg1;
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3514799_37 = PRIM_ADD(_3513736_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3513733_37;
__arg2 = _3513734_37;
__arg3 = _3513735_37;
co->args[4] = _3514799_37;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3514787_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 9, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3513735_37;
__arg2 = _3513736_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3514788_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 10, clofun6, 6, x, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3514789_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 11, clofun6, 5, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3513733_37;
__arg2 = _3513734_37;
__arg3 = Nil;
co->args[4] = _3513735_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3514790_37 = __arg1;
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 12, clofun6, 5, _3513736_37, _3513733_37, _3513734_37, _3513735_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3513735_37;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3514791_37 = __arg1;
Obj _3513736_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513733_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513734_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3513735_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3514792_37 = PRIM_ADD(_3513736_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3513733_37;
__arg2 = _3513734_37;
__arg3 = _3513735_37;
co->args[4] = _3514792_37;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _3514774_37 = primGenSym();
Obj tmp = _3514774_37;
pushCont(co, 14, clofun6, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3514775_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514776_37 = makeCons(_3514775_37, Nil);
Obj _3514777_37 = makeCons(x, _3514776_37);
Obj _3514778_37 = makeCons(tmp, _3514777_37);
Obj _3514779_37 = makeCons(__symbolTable[91], _3514778_37);
__nargs = 2;
__arg1 = _3514779_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj v = __arg1;
Obj val = __arg2;
pushCont(co, 16, clofun6, 2, val, v);
__nargs = 3;
__arg0 = globalRef(__symbolTable[65]);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3514766_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = _3514766_37;
pushCont(co, 17, clofun6, 3, val, idx, v);
__nargs = 3;
__arg0 = globalRef(__symbolTable[65]);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3514767_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = _3514767_37;
Obj _3514768_37 = makeCons(val, Nil);
Obj _3514769_37 = makeCons(idx, _3514768_37);
Obj _3514770_37 = makeCons(_3514769_37, cur);
Obj cur1 = _3514770_37;
Obj _3514771_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 18, clofun6, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(__symbolTable[63]);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = _3514771_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3514772_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(__symbolTable[63]);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _3513728_37 = __arg1;
Obj _3513729_37 = __arg2;
Obj _3513730_37 = makeNative(26, clofun6, 0, 2, _3513728_37, _3513729_37);
Obj _3514707_37 = PRIM_ISCONS(_3513729_37);
if (True == _3514707_37) {
Obj _3514708_37 = PRIM_CAR(_3513729_37);
Obj clo_45or_45cont = _3514708_37;
Obj _3514709_37 = PRIM_CDR(_3513729_37);
Obj _3514710_37 = PRIM_ISCONS(_3514709_37);
if (True == _3514710_37) {
Obj _3514711_37 = PRIM_CDR(_3513729_37);
Obj _3514712_37 = PRIM_CAR(_3514711_37);
Obj _3514713_37 = PRIM_ISCONS(_3514712_37);
if (True == _3514713_37) {
Obj _3514714_37 = PRIM_CDR(_3513729_37);
Obj _3514715_37 = PRIM_CAR(_3514714_37);
Obj _3514716_37 = PRIM_CAR(_3514715_37);
Obj _3514717_37 = PRIM_EQ(__symbolTable[94], _3514716_37);
if (True == _3514717_37) {
Obj _3514718_37 = PRIM_CDR(_3513729_37);
Obj _3514719_37 = PRIM_CAR(_3514718_37);
Obj _3514720_37 = PRIM_CDR(_3514719_37);
Obj _3514721_37 = PRIM_ISCONS(_3514720_37);
if (True == _3514721_37) {
Obj _3514722_37 = PRIM_CDR(_3513729_37);
Obj _3514723_37 = PRIM_CAR(_3514722_37);
Obj _3514724_37 = PRIM_CDR(_3514723_37);
Obj _3514725_37 = PRIM_CAR(_3514724_37);
Obj params = _3514725_37;
Obj _3514726_37 = PRIM_CDR(_3513729_37);
Obj _3514727_37 = PRIM_CAR(_3514726_37);
Obj _3514728_37 = PRIM_CDR(_3514727_37);
Obj _3514729_37 = PRIM_CDR(_3514728_37);
Obj _3514730_37 = PRIM_ISCONS(_3514729_37);
if (True == _3514730_37) {
Obj _3514731_37 = PRIM_CDR(_3513729_37);
Obj _3514732_37 = PRIM_CAR(_3514731_37);
Obj _3514733_37 = PRIM_CDR(_3514732_37);
Obj _3514734_37 = PRIM_CDR(_3514733_37);
Obj _3514735_37 = PRIM_CAR(_3514734_37);
Obj body = _3514735_37;
Obj _3514736_37 = PRIM_CDR(_3513729_37);
Obj _3514737_37 = PRIM_CAR(_3514736_37);
Obj _3514738_37 = PRIM_CDR(_3514737_37);
Obj _3514739_37 = PRIM_CDR(_3514738_37);
Obj _3514740_37 = PRIM_CDR(_3514739_37);
Obj _3514741_37 = PRIM_EQ(Nil, _3514740_37);
if (True == _3514741_37) {
Obj _3514742_37 = PRIM_CDR(_3513729_37);
Obj _3514743_37 = PRIM_CDR(_3514742_37);
Obj fvs = _3514743_37;
Obj _3513818_37 = makeNative(20, clofun6, 1, 6, body, _3513728_37, params, clo_45or_45cont, fvs, _3513730_37);
Obj _3514763_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[77]);
if (True == _3514763_37) {
__nargs = 2;
__arg0 = _3513818_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514764_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[67]);
if (True == _3514764_37) {
__nargs = 2;
__arg0 = _3513818_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513818_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513730_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _3513819_37 = __arg1;
if (True == _3513819_37) {
PUSH_CONT_0(co, 21, clofun6);
__nargs = 3;
__arg0 = globalRef(__symbolTable[66]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _3514744_37 = __arg1;
Obj body1 = _3514744_37;
pushCont(co, 22, clofun6, 1, body1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[65]);
__arg1 = closureRef(co, 1);
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3514745_37 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = _3514745_37;
Obj _3514746_37 = PRIM_EQ(closureRef(co, 3), __symbolTable[77]);
if (True == _3514746_37) {
Obj _3514747_37 = makeCons(body1, Nil);
Obj _3514748_37 = makeCons(Nil, _3514747_37);
Obj _3514749_37 = makeCons(closureRef(co, 2), _3514748_37);
Obj _3514750_37 = makeCons(__symbolTable[94], _3514749_37);
pushCont(co, 24, clofun6, 1, cur);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = closureRef(co, 1);
__arg2 = _3514750_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514756_37 = makeCons(body1, Nil);
Obj _3514757_37 = makeCons(closureRef(co, 4), _3514756_37);
Obj _3514758_37 = makeCons(closureRef(co, 2), _3514757_37);
Obj _3514759_37 = makeCons(__symbolTable[94], _3514758_37);
pushCont(co, 23, clofun6, 1, cur);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = closureRef(co, 1);
__arg2 = _3514759_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _3514760_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514761_37 = makeCons(cur, closureRef(co, 4));
Obj _3514762_37 = makeCons(closureRef(co, 3), _3514761_37);
__nargs = 2;
__arg1 = _3514762_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj _3514751_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun6, 1, cur);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3514752_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514753_37 = makeCons(_3514752_37, closureRef(co, 4));
Obj _3514754_37 = makeCons(cur, _3514753_37);
Obj _3514755_37 = makeCons(closureRef(co, 3), _3514754_37);
__nargs = 2;
__arg1 = _3514755_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _3514706_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3514706_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = makeNative(27, clofun6, 1, 1, closureRef(co, 0));
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = closureRef(co, 1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label27:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[66]);
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3513720_37 = __arg1;
Obj _3513721_37 = __arg2;
pushCont(co, 29, clofun6, 2, _3513721_37, _3513720_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3513721_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3514627_37 = __arg1;
Obj _3513721_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513720_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514627_37) {
__nargs = 2;
__arg1 = _3513721_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514628_37 = primIsSymbol(_3513721_37);
if (True == _3514628_37) {
__nargs = 2;
__arg1 = _3513721_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513724_37 = makeNative(31, clofun6, 0, 2, _3513721_37, _3513720_37);
Obj _3514684_37 = PRIM_ISCONS(_3513721_37);
if (True == _3514684_37) {
Obj _3514685_37 = PRIM_CAR(_3513721_37);
Obj _3514686_37 = PRIM_EQ(__symbolTable[94], _3514685_37);
if (True == _3514686_37) {
Obj _3514687_37 = PRIM_CDR(_3513721_37);
Obj _3514688_37 = PRIM_ISCONS(_3514687_37);
if (True == _3514688_37) {
Obj _3514689_37 = PRIM_CDR(_3513721_37);
Obj _3514690_37 = PRIM_CAR(_3514689_37);
Obj args = _3514690_37;
Obj _3514691_37 = PRIM_CDR(_3513721_37);
Obj _3514692_37 = PRIM_CDR(_3514691_37);
Obj _3514693_37 = PRIM_ISCONS(_3514692_37);
if (True == _3514693_37) {
Obj _3514694_37 = PRIM_CDR(_3513721_37);
Obj _3514695_37 = PRIM_CDR(_3514694_37);
Obj _3514696_37 = PRIM_CAR(_3514695_37);
Obj body = _3514696_37;
Obj _3514697_37 = PRIM_CDR(_3513721_37);
Obj _3514698_37 = PRIM_CDR(_3514697_37);
Obj _3514699_37 = PRIM_CDR(_3514698_37);
Obj _3514700_37 = PRIM_EQ(Nil, _3514699_37);
if (True == _3514700_37) {
pushCont(co, 30, clofun6, 1, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = _3513720_37;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513724_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513724_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513724_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513724_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513724_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label30:
{
Obj _3514701_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514702_37 = makeCons(_3514701_37, Nil);
Obj _3514703_37 = makeCons(args, _3514702_37);
Obj _3514704_37 = makeCons(__symbolTable[94], _3514703_37);
__nargs = 2;
__arg1 = _3514704_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _3513725_37 = makeNative(37, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514657_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514657_37) {
Obj _3514658_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514659_37 = PRIM_EQ(__symbolTable[81], _3514658_37);
if (True == _3514659_37) {
Obj _3514660_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514661_37 = PRIM_ISCONS(_3514660_37);
if (True == _3514661_37) {
Obj _3514662_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514663_37 = PRIM_CAR(_3514662_37);
Obj val = _3514663_37;
Obj _3514664_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514665_37 = PRIM_CDR(_3514664_37);
Obj _3514666_37 = PRIM_ISCONS(_3514665_37);
if (True == _3514666_37) {
Obj _3514667_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514668_37 = PRIM_CDR(_3514667_37);
Obj _3514669_37 = PRIM_CAR(_3514668_37);
Obj body = _3514669_37;
Obj _3514670_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514671_37 = PRIM_CDR(_3514670_37);
Obj _3514672_37 = PRIM_CDR(_3514671_37);
Obj _3514673_37 = PRIM_EQ(Nil, _3514672_37);
if (True == _3514673_37) {
pushCont(co, 32, clofun6, 2, body, val);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513725_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513725_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513725_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513725_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513725_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _3514674_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun6, 2, body, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3514674_37;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3514675_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = _3514675_37;
pushCont(co, 34, clofun6, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3514676_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3514676_37;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3514677_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = _3514677_37;
pushCont(co, 36, clofun6, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3514678_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514679_37 = makeCons(_3514678_37, Nil);
Obj _3514680_37 = makeCons(val, _3514679_37);
Obj _3514681_37 = makeCons(__symbolTable[94], _3514680_37);
Obj _3514682_37 = makeCons(_3514681_37, fvs2);
Obj _3514683_37 = makeCons(__symbolTable[67], _3514682_37);
__nargs = 2;
__arg1 = _3514683_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _3513726_37 = makeNative(41, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514634_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514634_37) {
Obj _3514635_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514636_37 = PRIM_EQ(__symbolTable[79], _3514635_37);
if (True == _3514636_37) {
Obj _3514637_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514638_37 = PRIM_ISCONS(_3514637_37);
if (True == _3514638_37) {
Obj _3514639_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514640_37 = PRIM_CAR(_3514639_37);
Obj exp = _3514640_37;
Obj _3514641_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514642_37 = PRIM_CDR(_3514641_37);
Obj _3514643_37 = PRIM_ISCONS(_3514642_37);
if (True == _3514643_37) {
Obj _3514644_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514645_37 = PRIM_CDR(_3514644_37);
Obj _3514646_37 = PRIM_CAR(_3514645_37);
Obj cont = _3514646_37;
Obj _3514647_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514648_37 = PRIM_CDR(_3514647_37);
Obj _3514649_37 = PRIM_CDR(_3514648_37);
Obj _3514650_37 = PRIM_EQ(Nil, _3514649_37);
if (True == _3514650_37) {
pushCont(co, 38, clofun6, 2, exp, cont);
__nargs = 2;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513726_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513726_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513726_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513726_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513726_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _3514651_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun6, 1, cont);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3514651_37;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3514652_37 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 40, clofun6, 1, _3514652_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = closureRef(co, 1);
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3514653_37 = __arg1;
Obj _3514652_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514654_37 = makeCons(_3514653_37, Nil);
Obj _3514655_37 = makeCons(_3514652_37, _3514654_37);
Obj _3514656_37 = makeCons(__symbolTable[79], _3514655_37);
__nargs = 2;
__arg1 = _3514656_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _3514629_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514629_37) {
Obj _3514630_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3514630_37;
Obj _3514631_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514631_37;
pushCont(co, 42, clofun6, 2, f, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _3514632_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514633_37 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3514632_37;
__arg2 = _3514633_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3513715_37 = __arg1;
Obj _3513716_37 = __arg2;
Obj _3513717_37 = __arg3;
Obj _3514604_37 = PRIM_EQ(Nil, _3513715_37);
if (True == _3514604_37) {
pushCont(co, 45, clofun6, 1, _3513717_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3513716_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514622_37 = PRIM_ISCONS(_3513715_37);
if (True == _3514622_37) {
Obj _3514623_37 = PRIM_CAR(_3513715_37);
Obj hd = _3514623_37;
Obj _3514624_37 = PRIM_CDR(_3513715_37);
Obj tl = _3514624_37;
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = hd;
__arg2 = makeNative(44, clofun6, 1, 3, tl, _3513716_37, _3513717_37);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label44:
{
Obj hd1 = __arg1;
Obj _3514625_37 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = closureRef(co, 0);
__arg2 = _3514625_37;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _3514605_37 = __arg1;
Obj _3513717_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = _3514605_37;
Obj _3513816_37 = makeNative(48, clofun6, 1, 2, exp, _3513717_37);
Obj _3514618_37 = PRIM_CAR(exp);
pushCont(co, 46, clofun6, 2, exp, _3513816_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = _3514618_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3514619_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513816_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514619_37) {
pushCont(co, 47, clofun6, 1, _3513816_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[69]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513816_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _3514620_37 = __arg1;
Obj _3513816_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514621_37 = PRIM_EQ(_3514620_37, __symbolTable[95]);
if (True == _3514621_37) {
__nargs = 2;
__arg0 = _3513816_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513816_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _3513817_37 = __arg1;
if (True == _3513817_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[71]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514606_37 = PRIM_EQ(closureRef(co, 1), globalRef(__symbolTable[75]));
if (True == _3514606_37) {
Obj _3514607_37 = makeCons(closureRef(co, 0), Nil);
Obj _3514608_37 = makeCons(__symbolTable[80], _3514607_37);
__nargs = 2;
__arg1 = _3514608_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514609_37 = primGenSym();
Obj val = _3514609_37;
Obj _3514610_37 = makeCons(val, Nil);
pushCont(co, 49, clofun6, 1, _3514610_37);
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label49:
{
Obj _3514611_37 = __arg1;
Obj _3514610_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514612_37 = makeCons(_3514611_37, Nil);
Obj _3514613_37 = makeCons(_3514610_37, _3514612_37);
Obj _3514614_37 = makeCons(__symbolTable[81], _3514613_37);
Obj _3514615_37 = makeCons(_3514614_37, Nil);
Obj _3514616_37 = makeCons(closureRef(co, 0), _3514615_37);
Obj _3514617_37 = makeCons(__symbolTable[79], _3514616_37);
__nargs = 2;
__arg1 = _3514617_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj _3513706_37 = __arg1;
Obj _3513707_37 = __arg2;
Obj _3513814_37 = makeNative(2, clofun7, 1, 2, _3513706_37, _3513707_37);
Obj _3514601_37 = primIsSymbol(_3513706_37);
if (True == _3514601_37) {
__nargs = 2;
__arg0 = _3513814_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 1, clofun7, 1, _3513814_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3513706_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3514602_37 = __arg1;
Obj _3513814_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514602_37) {
__nargs = 2;
__arg0 = _3513814_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513814_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _3513815_37 = __arg1;
if (True == _3513815_37) {
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT_0(co, 3, clofun7);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _3514467_37 = __arg1;
if (True == _3514467_37) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513710_37 = makeNative(7, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514569_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514569_37) {
Obj _3514570_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514571_37 = PRIM_EQ(__symbolTable[92], _3514570_37);
if (True == _3514571_37) {
Obj _3514572_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514573_37 = PRIM_ISCONS(_3514572_37);
if (True == _3514573_37) {
Obj _3514574_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514575_37 = PRIM_CAR(_3514574_37);
Obj a = _3514575_37;
Obj _3514576_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514577_37 = PRIM_CDR(_3514576_37);
Obj _3514578_37 = PRIM_ISCONS(_3514577_37);
if (True == _3514578_37) {
Obj _3514579_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514580_37 = PRIM_CDR(_3514579_37);
Obj _3514581_37 = PRIM_CAR(_3514580_37);
Obj b = _3514581_37;
Obj _3514582_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514583_37 = PRIM_CDR(_3514582_37);
Obj _3514584_37 = PRIM_CDR(_3514583_37);
Obj _3514585_37 = PRIM_ISCONS(_3514584_37);
if (True == _3514585_37) {
Obj _3514586_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514587_37 = PRIM_CDR(_3514586_37);
Obj _3514588_37 = PRIM_CDR(_3514587_37);
Obj _3514589_37 = PRIM_CAR(_3514588_37);
Obj c = _3514589_37;
Obj _3514590_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514591_37 = PRIM_CDR(_3514590_37);
Obj _3514592_37 = PRIM_CDR(_3514591_37);
Obj _3514593_37 = PRIM_CDR(_3514592_37);
Obj _3514594_37 = PRIM_EQ(Nil, _3514593_37);
if (True == _3514594_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = a;
__arg2 = makeNative(4, clofun7, 1, 3, b, c, closureRef(co, 1));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513710_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj ra = __arg1;
pushCont(co, 5, clofun7, 1, ra);
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3514595_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun7, 2, _3514595_37, ra);
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3514596_37 = __arg1;
Obj _3514595_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514597_37 = makeCons(_3514596_37, Nil);
Obj _3514598_37 = makeCons(_3514595_37, _3514597_37);
Obj _3514599_37 = makeCons(ra, _3514598_37);
Obj _3514600_37 = makeCons(__symbolTable[92], _3514599_37);
__nargs = 2;
__arg1 = _3514600_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _3513711_37 = makeNative(10, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514547_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514547_37) {
Obj _3514548_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514549_37 = PRIM_EQ(__symbolTable[90], _3514548_37);
if (True == _3514549_37) {
Obj _3514550_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514551_37 = PRIM_ISCONS(_3514550_37);
if (True == _3514551_37) {
Obj _3514552_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514553_37 = PRIM_CAR(_3514552_37);
Obj a = _3514553_37;
Obj _3514554_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514555_37 = PRIM_CDR(_3514554_37);
Obj _3514556_37 = PRIM_ISCONS(_3514555_37);
if (True == _3514556_37) {
Obj _3514557_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514558_37 = PRIM_CDR(_3514557_37);
Obj _3514559_37 = PRIM_CAR(_3514558_37);
Obj b = _3514559_37;
Obj _3514560_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514561_37 = PRIM_CDR(_3514560_37);
Obj _3514562_37 = PRIM_CDR(_3514561_37);
Obj _3514563_37 = PRIM_EQ(Nil, _3514562_37);
if (True == _3514563_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = a;
__arg2 = makeNative(8, clofun7, 1, 2, b, closureRef(co, 1));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513711_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513711_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513711_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513711_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513711_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj ra = __arg1;
Obj _3514564_37 = primIsSymbol(ra);
if (True == _3514564_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 9, clofun7, 1, ra);
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _3514565_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514566_37 = makeCons(_3514565_37, Nil);
Obj _3514567_37 = makeCons(ra, _3514566_37);
Obj _3514568_37 = makeCons(__symbolTable[90], _3514567_37);
__nargs = 2;
__arg1 = _3514568_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _3513712_37 = makeNative(13, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514516_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514516_37) {
Obj _3514517_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514518_37 = PRIM_EQ(__symbolTable[91], _3514517_37);
if (True == _3514518_37) {
Obj _3514519_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514520_37 = PRIM_ISCONS(_3514519_37);
if (True == _3514520_37) {
Obj _3514521_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514522_37 = PRIM_CAR(_3514521_37);
Obj a = _3514522_37;
Obj _3514523_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514524_37 = PRIM_CDR(_3514523_37);
Obj _3514525_37 = PRIM_ISCONS(_3514524_37);
if (True == _3514525_37) {
Obj _3514526_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514527_37 = PRIM_CDR(_3514526_37);
Obj _3514528_37 = PRIM_CAR(_3514527_37);
Obj b = _3514528_37;
Obj _3514529_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514530_37 = PRIM_CDR(_3514529_37);
Obj _3514531_37 = PRIM_CDR(_3514530_37);
Obj _3514532_37 = PRIM_ISCONS(_3514531_37);
if (True == _3514532_37) {
Obj _3514533_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514534_37 = PRIM_CDR(_3514533_37);
Obj _3514535_37 = PRIM_CDR(_3514534_37);
Obj _3514536_37 = PRIM_CAR(_3514535_37);
Obj c = _3514536_37;
Obj _3514537_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514538_37 = PRIM_CDR(_3514537_37);
Obj _3514539_37 = PRIM_CDR(_3514538_37);
Obj _3514540_37 = PRIM_CDR(_3514539_37);
Obj _3514541_37 = PRIM_EQ(Nil, _3514540_37);
if (True == _3514541_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = b;
__arg2 = makeNative(11, clofun7, 1, 3, a, c, closureRef(co, 1));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513712_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513712_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513712_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513712_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513712_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513712_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj rb = __arg1;
pushCont(co, 12, clofun7, 1, rb);
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3514542_37 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514543_37 = makeCons(_3514542_37, Nil);
Obj _3514544_37 = makeCons(rb, _3514543_37);
Obj _3514545_37 = makeCons(closureRef(co, 0), _3514544_37);
Obj _3514546_37 = makeCons(__symbolTable[91], _3514545_37);
__nargs = 2;
__arg1 = _3514546_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _3513713_37 = makeNative(15, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514472_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514472_37) {
Obj _3514473_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514474_37 = PRIM_EQ(__symbolTable[77], _3514473_37);
if (True == _3514474_37) {
Obj _3514475_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514476_37 = PRIM_ISCONS(_3514475_37);
if (True == _3514476_37) {
Obj _3514477_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514478_37 = PRIM_CAR(_3514477_37);
Obj _3514479_37 = PRIM_ISCONS(_3514478_37);
if (True == _3514479_37) {
Obj _3514480_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514481_37 = PRIM_CAR(_3514480_37);
Obj _3514482_37 = PRIM_CAR(_3514481_37);
Obj _3514483_37 = PRIM_EQ(__symbolTable[94], _3514482_37);
if (True == _3514483_37) {
Obj _3514484_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514485_37 = PRIM_CAR(_3514484_37);
Obj _3514486_37 = PRIM_CDR(_3514485_37);
Obj _3514487_37 = PRIM_ISCONS(_3514486_37);
if (True == _3514487_37) {
Obj _3514488_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514489_37 = PRIM_CAR(_3514488_37);
Obj _3514490_37 = PRIM_CDR(_3514489_37);
Obj _3514491_37 = PRIM_CAR(_3514490_37);
Obj args = _3514491_37;
Obj _3514492_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514493_37 = PRIM_CAR(_3514492_37);
Obj _3514494_37 = PRIM_CDR(_3514493_37);
Obj _3514495_37 = PRIM_CDR(_3514494_37);
Obj _3514496_37 = PRIM_ISCONS(_3514495_37);
if (True == _3514496_37) {
Obj _3514497_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514498_37 = PRIM_CAR(_3514497_37);
Obj _3514499_37 = PRIM_CDR(_3514498_37);
Obj _3514500_37 = PRIM_CDR(_3514499_37);
Obj _3514501_37 = PRIM_CAR(_3514500_37);
Obj body = _3514501_37;
Obj _3514502_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514503_37 = PRIM_CAR(_3514502_37);
Obj _3514504_37 = PRIM_CDR(_3514503_37);
Obj _3514505_37 = PRIM_CDR(_3514504_37);
Obj _3514506_37 = PRIM_CDR(_3514505_37);
Obj _3514507_37 = PRIM_EQ(Nil, _3514506_37);
if (True == _3514507_37) {
Obj _3514508_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514509_37 = PRIM_CDR(_3514508_37);
Obj frees = _3514509_37;
pushCont(co, 14, clofun7, 2, args, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = body;
__arg2 = globalRef(__symbolTable[75]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513713_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _3514510_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514511_37 = makeCons(_3514510_37, Nil);
Obj _3514512_37 = makeCons(args, _3514511_37);
Obj _3514513_37 = makeCons(__symbolTable[94], _3514512_37);
Obj _3514514_37 = makeCons(_3514513_37, frees);
Obj _3514515_37 = makeCons(__symbolTable[77], _3514514_37);
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = _3514515_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3514468_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514468_37) {
Obj _3514469_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3514469_37;
Obj _3514470_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514470_37;
Obj _3514471_37 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = _3514471_37;
__arg2 = Nil;
__arg3 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj x = __arg1;
Obj _3514464_37 = makeCons(x, Nil);
Obj _3514465_37 = makeCons(__symbolTable[78], _3514464_37);
__nargs = 2;
__arg1 = _3514465_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _3513699_37 = __arg1;
Obj _3513700_37 = __arg2;
pushCont(co, 18, clofun7, 2, _3513700_37, _3513699_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3513700_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3514391_37 = __arg1;
Obj _3513700_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513699_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514391_37) {
__nargs = 2;
__arg1 = _3513700_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514392_37 = primIsSymbol(_3513700_37);
if (True == _3514392_37) {
pushCont(co, 28, clofun7, 1, _3513700_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = _3513700_37;
__arg2 = _3513699_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513703_37 = makeNative(23, clofun7, 0, 2, _3513700_37, _3513699_37);
Obj _3514434_37 = PRIM_ISCONS(_3513700_37);
if (True == _3514434_37) {
Obj _3514435_37 = PRIM_CAR(_3513700_37);
Obj _3514436_37 = PRIM_EQ(__symbolTable[94], _3514435_37);
if (True == _3514436_37) {
Obj _3514437_37 = PRIM_CDR(_3513700_37);
Obj _3514438_37 = PRIM_ISCONS(_3514437_37);
if (True == _3514438_37) {
Obj _3514439_37 = PRIM_CDR(_3513700_37);
Obj _3514440_37 = PRIM_CAR(_3514439_37);
Obj args = _3514440_37;
Obj _3514441_37 = PRIM_CDR(_3513700_37);
Obj _3514442_37 = PRIM_CDR(_3514441_37);
Obj _3514443_37 = PRIM_ISCONS(_3514442_37);
if (True == _3514443_37) {
Obj _3514444_37 = PRIM_CDR(_3513700_37);
Obj _3514445_37 = PRIM_CDR(_3514444_37);
Obj _3514446_37 = PRIM_CAR(_3514445_37);
Obj body = _3514446_37;
Obj _3514447_37 = PRIM_CDR(_3513700_37);
Obj _3514448_37 = PRIM_CDR(_3514447_37);
Obj _3514449_37 = PRIM_CDR(_3514448_37);
Obj _3514450_37 = PRIM_EQ(Nil, _3514449_37);
if (True == _3514450_37) {
Obj _3514451_37 = makeCons(body, Nil);
Obj _3514452_37 = makeCons(args, _3514451_37);
Obj _3514453_37 = makeCons(__symbolTable[94], _3514452_37);
pushCont(co, 19, clofun7, 3, body, args, _3513699_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = _3514453_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513703_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513703_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513703_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513703_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513703_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label19:
{
Obj _3514454_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513699_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = _3514454_37;
pushCont(co, 20, clofun7, 3, args, _3513699_37, fvs1);
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3514455_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513699_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3514456_37 = makeCons(_3514455_37, Nil);
Obj _3514457_37 = makeCons(args, _3514456_37);
Obj _3514458_37 = makeCons(__symbolTable[94], _3514457_37);
pushCont(co, 21, clofun7, 2, fvs1, _3514458_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = _3513699_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3514459_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514458_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun7, 1, _3514458_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3514459_37;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3514460_37 = __arg1;
Obj _3514458_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514461_37 = makeCons(_3514458_37, _3514460_37);
Obj _3514462_37 = makeCons(__symbolTable[77], _3514461_37);
__nargs = 2;
__arg1 = _3514462_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj _3513704_37 = makeNative(26, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3514402_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514402_37) {
Obj _3514403_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514404_37 = PRIM_EQ(__symbolTable[91], _3514403_37);
if (True == _3514404_37) {
Obj _3514405_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514406_37 = PRIM_ISCONS(_3514405_37);
if (True == _3514406_37) {
Obj _3514407_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514408_37 = PRIM_CAR(_3514407_37);
Obj a = _3514408_37;
Obj _3514409_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514410_37 = PRIM_CDR(_3514409_37);
Obj _3514411_37 = PRIM_ISCONS(_3514410_37);
if (True == _3514411_37) {
Obj _3514412_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514413_37 = PRIM_CDR(_3514412_37);
Obj _3514414_37 = PRIM_CAR(_3514413_37);
Obj b = _3514414_37;
Obj _3514415_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514416_37 = PRIM_CDR(_3514415_37);
Obj _3514417_37 = PRIM_CDR(_3514416_37);
Obj _3514418_37 = PRIM_ISCONS(_3514417_37);
if (True == _3514418_37) {
Obj _3514419_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514420_37 = PRIM_CDR(_3514419_37);
Obj _3514421_37 = PRIM_CDR(_3514420_37);
Obj _3514422_37 = PRIM_CAR(_3514421_37);
Obj c = _3514422_37;
Obj _3514423_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514424_37 = PRIM_CDR(_3514423_37);
Obj _3514425_37 = PRIM_CDR(_3514424_37);
Obj _3514426_37 = PRIM_CDR(_3514425_37);
Obj _3514427_37 = PRIM_EQ(Nil, _3514426_37);
if (True == _3514427_37) {
pushCont(co, 24, clofun7, 2, c, a);
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = closureRef(co, 1);
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513704_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513704_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513704_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513704_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513704_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513704_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _3514428_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun7, 2, _3514428_37, a);
__nargs = 3;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = closureRef(co, 1);
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3514429_37 = __arg1;
Obj _3514428_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514430_37 = makeCons(_3514429_37, Nil);
Obj _3514431_37 = makeCons(_3514428_37, _3514430_37);
Obj _3514432_37 = makeCons(a, _3514431_37);
Obj _3514433_37 = makeCons(__symbolTable[91], _3514432_37);
__nargs = 2;
__arg1 = _3514433_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _3514397_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514397_37) {
Obj _3514398_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3514398_37;
Obj _3514399_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514399_37;
pushCont(co, 27, clofun7, 2, f, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _3514400_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514401_37 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3514400_37;
__arg2 = _3514401_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3514393_37 = __arg1;
Obj _3513700_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = _3514393_37;
Obj _3514394_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3514394_37) {
__nargs = 2;
__arg1 = _3513700_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514395_37 = makeCons(pos, Nil);
Obj _3514396_37 = makeCons(__symbolTable[83], _3514395_37);
__nargs = 2;
__arg1 = _3514396_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label29:
{
Obj _3513686_37 = __arg1;
pushCont(co, 30, clofun7, 1, _3513686_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3513686_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3514216_37 = __arg1;
Obj _3513686_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514216_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3514217_37 = primIsSymbol(_3513686_37);
if (True == _3514217_37) {
Obj _3514218_37 = makeCons(_3513686_37, Nil);
__nargs = 2;
__arg1 = _3514218_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513689_37 = makeNative(32, clofun7, 0, 1, _3513686_37);
Obj _3514372_37 = PRIM_ISCONS(_3513686_37);
if (True == _3514372_37) {
Obj _3514373_37 = PRIM_CAR(_3513686_37);
Obj _3514374_37 = PRIM_EQ(__symbolTable[94], _3514373_37);
if (True == _3514374_37) {
Obj _3514375_37 = PRIM_CDR(_3513686_37);
Obj _3514376_37 = PRIM_ISCONS(_3514375_37);
if (True == _3514376_37) {
Obj _3514377_37 = PRIM_CDR(_3513686_37);
Obj _3514378_37 = PRIM_CAR(_3514377_37);
Obj args = _3514378_37;
Obj _3514379_37 = PRIM_CDR(_3513686_37);
Obj _3514380_37 = PRIM_CDR(_3514379_37);
Obj _3514381_37 = PRIM_ISCONS(_3514380_37);
if (True == _3514381_37) {
Obj _3514382_37 = PRIM_CDR(_3513686_37);
Obj _3514383_37 = PRIM_CDR(_3514382_37);
Obj _3514384_37 = PRIM_CAR(_3514383_37);
Obj body = _3514384_37;
Obj _3514385_37 = PRIM_CDR(_3513686_37);
Obj _3514386_37 = PRIM_CDR(_3514385_37);
Obj _3514387_37 = PRIM_CDR(_3514386_37);
Obj _3514388_37 = PRIM_EQ(Nil, _3514387_37);
if (True == _3514388_37) {
pushCont(co, 31, clofun7, 1, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513689_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513689_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513689_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513689_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513689_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label31:
{
Obj _3514389_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3514389_37;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3513690_37 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj _3514342_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514342_37) {
Obj _3514343_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514344_37 = PRIM_EQ(__symbolTable[92], _3514343_37);
if (True == _3514344_37) {
Obj _3514345_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514346_37 = PRIM_ISCONS(_3514345_37);
if (True == _3514346_37) {
Obj _3514347_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514348_37 = PRIM_CAR(_3514347_37);
Obj x = _3514348_37;
Obj _3514349_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514350_37 = PRIM_CDR(_3514349_37);
Obj _3514351_37 = PRIM_ISCONS(_3514350_37);
if (True == _3514351_37) {
Obj _3514352_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514353_37 = PRIM_CDR(_3514352_37);
Obj _3514354_37 = PRIM_CAR(_3514353_37);
Obj y = _3514354_37;
Obj _3514355_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514356_37 = PRIM_CDR(_3514355_37);
Obj _3514357_37 = PRIM_CDR(_3514356_37);
Obj _3514358_37 = PRIM_ISCONS(_3514357_37);
if (True == _3514358_37) {
Obj _3514359_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514360_37 = PRIM_CDR(_3514359_37);
Obj _3514361_37 = PRIM_CDR(_3514360_37);
Obj _3514362_37 = PRIM_CAR(_3514361_37);
Obj z = _3514362_37;
Obj _3514363_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514364_37 = PRIM_CDR(_3514363_37);
Obj _3514365_37 = PRIM_CDR(_3514364_37);
Obj _3514366_37 = PRIM_CDR(_3514365_37);
Obj _3514367_37 = PRIM_EQ(Nil, _3514366_37);
if (True == _3514367_37) {
Obj _3514368_37 = makeCons(z, Nil);
Obj _3514369_37 = makeCons(y, _3514368_37);
Obj _3514370_37 = makeCons(x, _3514369_37);
PUSH_CONT_0(co, 33, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3514370_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3514371_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3514371_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3513691_37 = makeNative(36, clofun7, 0, 1, closureRef(co, 0));
Obj _3514322_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514322_37) {
Obj _3514323_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514324_37 = PRIM_EQ(__symbolTable[90], _3514323_37);
if (True == _3514324_37) {
Obj _3514325_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514326_37 = PRIM_ISCONS(_3514325_37);
if (True == _3514326_37) {
Obj _3514327_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514328_37 = PRIM_CAR(_3514327_37);
Obj x = _3514328_37;
Obj _3514329_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514330_37 = PRIM_CDR(_3514329_37);
Obj _3514331_37 = PRIM_ISCONS(_3514330_37);
if (True == _3514331_37) {
Obj _3514332_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514333_37 = PRIM_CDR(_3514332_37);
Obj _3514334_37 = PRIM_CAR(_3514333_37);
Obj y = _3514334_37;
Obj _3514335_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514336_37 = PRIM_CDR(_3514335_37);
Obj _3514337_37 = PRIM_CDR(_3514336_37);
Obj _3514338_37 = PRIM_EQ(Nil, _3514337_37);
if (True == _3514338_37) {
Obj _3514339_37 = makeCons(y, Nil);
Obj _3514340_37 = makeCons(x, _3514339_37);
PUSH_CONT_0(co, 35, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3514340_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513691_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513691_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513691_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513691_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513691_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _3514341_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3514341_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3513692_37 = makeNative(40, clofun7, 0, 1, closureRef(co, 0));
Obj _3514292_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514292_37) {
Obj _3514293_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514294_37 = PRIM_EQ(__symbolTable[91], _3514293_37);
if (True == _3514294_37) {
Obj _3514295_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514296_37 = PRIM_ISCONS(_3514295_37);
if (True == _3514296_37) {
Obj _3514297_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514298_37 = PRIM_CAR(_3514297_37);
Obj a = _3514298_37;
Obj _3514299_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514300_37 = PRIM_CDR(_3514299_37);
Obj _3514301_37 = PRIM_ISCONS(_3514300_37);
if (True == _3514301_37) {
Obj _3514302_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514303_37 = PRIM_CDR(_3514302_37);
Obj _3514304_37 = PRIM_CAR(_3514303_37);
Obj b = _3514304_37;
Obj _3514305_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514306_37 = PRIM_CDR(_3514305_37);
Obj _3514307_37 = PRIM_CDR(_3514306_37);
Obj _3514308_37 = PRIM_ISCONS(_3514307_37);
if (True == _3514308_37) {
Obj _3514309_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514310_37 = PRIM_CDR(_3514309_37);
Obj _3514311_37 = PRIM_CDR(_3514310_37);
Obj _3514312_37 = PRIM_CAR(_3514311_37);
Obj c = _3514312_37;
Obj _3514313_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514314_37 = PRIM_CDR(_3514313_37);
Obj _3514315_37 = PRIM_CDR(_3514314_37);
Obj _3514316_37 = PRIM_CDR(_3514315_37);
Obj _3514317_37 = PRIM_EQ(Nil, _3514316_37);
if (True == _3514317_37) {
pushCont(co, 37, clofun7, 2, c, a);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513692_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513692_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513692_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513692_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513692_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513692_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _3514318_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun7, 2, a, _3514318_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3514319_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514318_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514320_37 = makeCons(a, Nil);
pushCont(co, 39, clofun7, 1, _3514318_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3514319_37;
__arg2 = _3514320_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3514321_37 = __arg1;
Obj _3514318_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = _3514318_37;
__arg2 = _3514321_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3513693_37 = makeNative(41, clofun7, 0, 1, closureRef(co, 0));
Obj _3514282_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514282_37) {
Obj _3514283_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514284_37 = PRIM_EQ(__symbolTable[77], _3514283_37);
if (True == _3514284_37) {
Obj _3514285_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514286_37 = PRIM_ISCONS(_3514285_37);
if (True == _3514286_37) {
Obj _3514287_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514288_37 = PRIM_CAR(_3514287_37);
Obj lam = _3514288_37;
Obj _3514289_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514290_37 = PRIM_CDR(_3514289_37);
Obj more = _3514290_37;
Obj _3514291_37 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = _3514291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513693_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513693_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513693_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _3513694_37 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj _3514272_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514272_37) {
Obj _3514273_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514274_37 = PRIM_EQ(__symbolTable[78], _3514273_37);
if (True == _3514274_37) {
Obj _3514275_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514276_37 = PRIM_ISCONS(_3514275_37);
if (True == _3514276_37) {
Obj _3514277_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514278_37 = PRIM_CAR(_3514277_37);
Obj x = _3514278_37;
Obj _3514279_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514280_37 = PRIM_CDR(_3514279_37);
Obj _3514281_37 = PRIM_EQ(Nil, _3514280_37);
if (True == _3514281_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513694_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513694_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513694_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513694_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _3513695_37 = makeNative(44, clofun7, 0, 1, closureRef(co, 0));
Obj _3514252_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514252_37) {
Obj _3514253_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514254_37 = PRIM_EQ(__symbolTable[79], _3514253_37);
if (True == _3514254_37) {
Obj _3514255_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514256_37 = PRIM_ISCONS(_3514255_37);
if (True == _3514256_37) {
Obj _3514257_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514258_37 = PRIM_CAR(_3514257_37);
Obj exp = _3514258_37;
Obj _3514259_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514260_37 = PRIM_CDR(_3514259_37);
Obj _3514261_37 = PRIM_ISCONS(_3514260_37);
if (True == _3514261_37) {
Obj _3514262_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514263_37 = PRIM_CDR(_3514262_37);
Obj _3514264_37 = PRIM_CAR(_3514263_37);
Obj cont = _3514264_37;
Obj _3514265_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514266_37 = PRIM_CDR(_3514265_37);
Obj _3514267_37 = PRIM_CDR(_3514266_37);
Obj _3514268_37 = PRIM_EQ(Nil, _3514267_37);
if (True == _3514268_37) {
Obj _3514269_37 = makeCons(cont, Nil);
Obj _3514270_37 = makeCons(exp, _3514269_37);
PUSH_CONT_0(co, 43, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3514270_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513695_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513695_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513695_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513695_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513695_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _3514271_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3514271_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3513696_37 = makeNative(45, clofun7, 0, 1, closureRef(co, 0));
Obj _3514242_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514242_37) {
Obj _3514243_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514244_37 = PRIM_EQ(__symbolTable[80], _3514243_37);
if (True == _3514244_37) {
Obj _3514245_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514246_37 = PRIM_ISCONS(_3514245_37);
if (True == _3514246_37) {
Obj _3514247_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514248_37 = PRIM_CAR(_3514247_37);
Obj exp = _3514248_37;
Obj _3514249_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514250_37 = PRIM_CDR(_3514249_37);
Obj _3514251_37 = PRIM_EQ(Nil, _3514250_37);
if (True == _3514251_37) {
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513696_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513696_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513696_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513696_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _3513697_37 = makeNative(47, clofun7, 0, 1, closureRef(co, 0));
Obj _3514224_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514224_37) {
Obj _3514225_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514226_37 = PRIM_EQ(__symbolTable[81], _3514225_37);
if (True == _3514226_37) {
Obj _3514227_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514228_37 = PRIM_ISCONS(_3514227_37);
if (True == _3514228_37) {
Obj _3514229_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514230_37 = PRIM_CAR(_3514229_37);
Obj arg = _3514230_37;
Obj _3514231_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514232_37 = PRIM_CDR(_3514231_37);
Obj _3514233_37 = PRIM_ISCONS(_3514232_37);
if (True == _3514233_37) {
Obj _3514234_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514235_37 = PRIM_CDR(_3514234_37);
Obj _3514236_37 = PRIM_CAR(_3514235_37);
Obj body = _3514236_37;
Obj _3514237_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514238_37 = PRIM_CDR(_3514237_37);
Obj _3514239_37 = PRIM_CDR(_3514238_37);
Obj _3514240_37 = PRIM_EQ(Nil, _3514239_37);
if (True == _3514240_37) {
pushCont(co, 46, clofun7, 1, arg);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513697_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513697_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513697_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513697_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513697_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _3514241_37 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3514241_37;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3514219_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514219_37) {
Obj _3514220_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3514220_37;
Obj _3514221_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514221_37;
Obj _3514222_37 = makeCons(f, args);
PUSH_CONT_0(co, 48, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3514222_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _3514223_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3514223_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3513679_37 = __arg1;
Obj _3513680_37 = makeNative(0, clofun8, 0, 1, _3513679_37);
Obj _3514205_37 = PRIM_ISCONS(_3513679_37);
if (True == _3514205_37) {
Obj _3514206_37 = PRIM_CAR(_3513679_37);
Obj _3514207_37 = PRIM_EQ(__symbolTable[101], _3514206_37);
if (True == _3514207_37) {
Obj _3514208_37 = PRIM_CDR(_3513679_37);
Obj _3514209_37 = PRIM_ISCONS(_3514208_37);
if (True == _3514209_37) {
Obj _3514210_37 = PRIM_CDR(_3513679_37);
Obj _3514211_37 = PRIM_CAR(_3514210_37);
Obj _3514212_37 = PRIM_CDR(_3513679_37);
Obj _3514213_37 = PRIM_CDR(_3514212_37);
Obj _3514214_37 = PRIM_EQ(Nil, _3514213_37);
if (True == _3514214_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513680_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513680_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513680_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513680_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj _3513681_37 = makeNative(1, clofun8, 0, 1, closureRef(co, 0));
Obj _3514195_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514195_37) {
Obj _3514196_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514197_37 = PRIM_EQ(__symbolTable[98], _3514196_37);
if (True == _3514197_37) {
Obj _3514198_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514199_37 = PRIM_ISCONS(_3514198_37);
if (True == _3514199_37) {
Obj _3514200_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514201_37 = PRIM_CAR(_3514200_37);
Obj _3514202_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514203_37 = PRIM_CDR(_3514202_37);
Obj _3514204_37 = PRIM_EQ(Nil, _3514203_37);
if (True == _3514204_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513681_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513681_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513681_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513681_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3513682_37 = makeNative(2, clofun8, 0, 1, closureRef(co, 0));
Obj _3514185_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514185_37) {
Obj _3514186_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514187_37 = PRIM_EQ(__symbolTable[95], _3514186_37);
if (True == _3514187_37) {
Obj _3514188_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514189_37 = PRIM_ISCONS(_3514188_37);
if (True == _3514189_37) {
Obj _3514190_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514191_37 = PRIM_CAR(_3514190_37);
Obj _3514192_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514193_37 = PRIM_CDR(_3514192_37);
Obj _3514194_37 = PRIM_EQ(Nil, _3514193_37);
if (True == _3514194_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513682_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513682_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513682_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513682_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _3513683_37 = makeNative(3, clofun8, 0, 1, closureRef(co, 0));
Obj _3514175_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514175_37) {
Obj _3514176_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514177_37 = PRIM_EQ(__symbolTable[89], _3514176_37);
if (True == _3514177_37) {
Obj _3514178_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514179_37 = PRIM_ISCONS(_3514178_37);
if (True == _3514179_37) {
Obj _3514180_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514181_37 = PRIM_CAR(_3514180_37);
Obj _3514182_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514183_37 = PRIM_CDR(_3514182_37);
Obj _3514184_37 = PRIM_EQ(Nil, _3514183_37);
if (True == _3514184_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513683_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513683_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513683_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513683_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _3513684_37 = makeNative(4, clofun8, 0, 0);
Obj _3514165_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514165_37) {
Obj _3514166_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514167_37 = PRIM_EQ(__symbolTable[83], _3514166_37);
if (True == _3514167_37) {
Obj _3514168_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514169_37 = PRIM_ISCONS(_3514168_37);
if (True == _3514169_37) {
Obj _3514170_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514171_37 = PRIM_CAR(_3514170_37);
Obj _3514172_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514173_37 = PRIM_CDR(_3514172_37);
Obj _3514174_37 = PRIM_EQ(Nil, _3514173_37);
if (True == _3514174_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513684_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513684_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513684_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513684_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _3513674_37 = __arg1;
Obj _3513675_37 = __arg2;
Obj _3514154_37 = PRIM_EQ(Nil, _3513674_37);
if (True == _3514154_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513677_37 = makeNative(7, clofun8, 0, 2, _3513674_37, _3513675_37);
Obj _3514160_37 = PRIM_ISCONS(_3513674_37);
if (True == _3514160_37) {
Obj _3514161_37 = PRIM_CAR(_3513674_37);
Obj x = _3514161_37;
Obj _3514162_37 = PRIM_CDR(_3513674_37);
Obj y = _3514162_37;
pushCont(co, 6, clofun8, 3, y, _3513675_37, _3513677_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x;
__arg2 = _3513675_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513677_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label6:
{
Obj _3514163_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513675_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513677_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3514163_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = y;
__arg2 = _3513675_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513677_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _3514155_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514155_37) {
Obj _3514156_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3514156_37;
Obj _3514157_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3514157_37;
pushCont(co, 8, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = y;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _3514158_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514159_37 = makeCons(x, _3514158_37);
__nargs = 2;
__arg1 = _3514159_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _3513669_37 = __arg1;
Obj _3513670_37 = __arg2;
Obj _3514143_37 = PRIM_EQ(Nil, _3513669_37);
if (True == _3514143_37) {
__nargs = 2;
__arg1 = _3513670_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513672_37 = makeNative(11, clofun8, 0, 2, _3513669_37, _3513670_37);
Obj _3514149_37 = PRIM_ISCONS(_3513669_37);
if (True == _3514149_37) {
Obj _3514150_37 = PRIM_CAR(_3513669_37);
Obj x = _3514150_37;
Obj _3514151_37 = PRIM_CDR(_3513669_37);
Obj y = _3514151_37;
pushCont(co, 10, clofun8, 3, y, _3513670_37, _3513672_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x;
__arg2 = _3513670_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513672_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj _3514152_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513670_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513672_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3514152_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = y;
__arg2 = _3513670_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513672_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _3514144_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514144_37) {
Obj _3514145_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3514145_37;
Obj _3514146_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3514146_37;
pushCont(co, 12, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = y;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _3514147_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514148_37 = makeCons(x, _3514147_37);
__nargs = 2;
__arg1 = _3514148_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _3513655_37 = __arg1;
Obj _3513656_37 = __arg2;
Obj _3513657_37 = __arg3;
Obj _3513812_37 = makeNative(17, clofun8, 1, 3, _3513655_37, _3513657_37, _3513656_37);
pushCont(co, 14, clofun8, 2, _3513657_37, _3513812_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = _3513657_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3514138_37 = __arg1;
Obj _3513657_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514138_37) {
__nargs = 2;
__arg0 = _3513812_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3514139_37 = primIsString(_3513657_37);
if (True == _3514139_37) {
__nargs = 2;
__arg0 = _3513812_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 15, clofun8, 2, _3513657_37, _3513812_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[87]);
__arg1 = _3513657_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label15:
{
Obj _3514140_37 = __arg1;
Obj _3513657_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3514140_37) {
__nargs = 2;
__arg0 = _3513812_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 16, clofun8, 1, _3513812_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = _3513657_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _3514141_37 = __arg1;
Obj _3513812_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3514141_37) {
__nargs = 2;
__arg0 = _3513812_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3513812_37;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _3513813_37 = __arg1;
if (True == _3513813_37) {
Obj _3513949_37 = makeCons(closureRef(co, 1), Nil);
Obj _3513950_37 = makeCons(__symbolTable[101], _3513949_37);
__nargs = 2;
__arg1 = _3513950_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513659_37 = makeNative(19, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj _3514125_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3514125_37) {
Obj _3514126_37 = PRIM_CAR(closureRef(co, 1));
Obj _3514127_37 = PRIM_EQ(__symbolTable[89], _3514126_37);
if (True == _3514127_37) {
Obj _3514128_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514129_37 = PRIM_ISCONS(_3514128_37);
if (True == _3514129_37) {
Obj _3514130_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514131_37 = PRIM_CAR(_3514130_37);
Obj x = _3514131_37;
Obj _3514132_37 = PRIM_CDR(closureRef(co, 1));
Obj _3514133_37 = PRIM_CDR(_3514132_37);
Obj _3514134_37 = PRIM_EQ(Nil, _3514133_37);
if (True == _3514134_37) {
pushCont(co, 18, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(__symbolTable[99]);
__arg1 = x;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513659_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513659_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513659_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513659_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj _3514135_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514136_37 = makeCons(x, Nil);
Obj _3514137_37 = makeCons(__symbolTable[101], _3514136_37);
__nargs = 2;
__arg1 = _3514137_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _3513951_37 = primIsSymbol(closureRef(co, 0));
if (True == _3513951_37) {
PUSH_CONT_0(co, 43, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513661_37 = makeNative(22, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514103_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514103_37) {
Obj _3514104_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514105_37 = PRIM_EQ(__symbolTable[94], _3514104_37);
if (True == _3514105_37) {
Obj _3514106_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514107_37 = PRIM_ISCONS(_3514106_37);
if (True == _3514107_37) {
Obj _3514108_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514109_37 = PRIM_CAR(_3514108_37);
Obj args = _3514109_37;
Obj _3514110_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514111_37 = PRIM_CDR(_3514110_37);
Obj _3514112_37 = PRIM_ISCONS(_3514111_37);
if (True == _3514112_37) {
Obj _3514113_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514114_37 = PRIM_CDR(_3514113_37);
Obj _3514115_37 = PRIM_CAR(_3514114_37);
Obj body = _3514115_37;
Obj _3514116_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514117_37 = PRIM_CDR(_3514116_37);
Obj _3514118_37 = PRIM_CDR(_3514117_37);
Obj _3514119_37 = PRIM_EQ(Nil, _3514118_37);
if (True == _3514119_37) {
pushCont(co, 20, clofun8, 2, body, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = args;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513661_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513661_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513661_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513661_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513661_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj _3514120_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun8, 1, args);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = _3514120_37;
__arg2 = closureRef(co, 2);
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3514121_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514122_37 = makeCons(_3514121_37, Nil);
Obj _3514123_37 = makeCons(args, _3514122_37);
Obj _3514124_37 = makeCons(__symbolTable[94], _3514123_37);
__nargs = 2;
__arg1 = _3514124_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj _3513662_37 = makeNative(23, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514071_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514071_37) {
Obj _3514072_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514073_37 = PRIM_EQ(__symbolTable[92], _3514072_37);
if (True == _3514073_37) {
Obj _3514074_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514075_37 = PRIM_ISCONS(_3514074_37);
if (True == _3514075_37) {
Obj _3514076_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514077_37 = PRIM_CAR(_3514076_37);
Obj _3514078_37 = PRIM_ISCONS(_3514077_37);
if (True == _3514078_37) {
Obj _3514079_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514080_37 = PRIM_CAR(_3514079_37);
Obj _3514081_37 = PRIM_CAR(_3514080_37);
Obj _3514082_37 = PRIM_EQ(__symbolTable[92], _3514081_37);
if (True == _3514082_37) {
Obj _3514083_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514084_37 = PRIM_CAR(_3514083_37);
Obj _3514085_37 = PRIM_CDR(_3514084_37);
Obj exp1 = _3514085_37;
Obj _3514086_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514087_37 = PRIM_CDR(_3514086_37);
Obj exp2 = _3514087_37;
Obj _3514088_37 = primGenSym();
Obj f = _3514088_37;
Obj _3514089_37 = primGenSym();
Obj v = _3514089_37;
Obj _3514090_37 = makeCons(v, Nil);
Obj _3514091_37 = makeCons(v, exp2);
Obj _3514092_37 = makeCons(__symbolTable[92], _3514091_37);
Obj _3514093_37 = makeCons(_3514092_37, Nil);
Obj _3514094_37 = makeCons(_3514090_37, _3514093_37);
Obj _3514095_37 = makeCons(__symbolTable[94], _3514094_37);
Obj _3514096_37 = makeCons(__symbolTable[92], exp1);
Obj _3514097_37 = makeCons(_3514096_37, Nil);
Obj _3514098_37 = makeCons(f, _3514097_37);
Obj _3514099_37 = makeCons(_3514098_37, Nil);
Obj _3514100_37 = makeCons(_3514095_37, _3514099_37);
Obj _3514101_37 = makeCons(f, _3514100_37);
Obj _3514102_37 = makeCons(__symbolTable[91], _3514101_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3514102_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513662_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513662_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513662_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513662_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513662_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _3513663_37 = makeNative(26, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514064_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514064_37) {
Obj _3514065_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514066_37 = PRIM_EQ(__symbolTable[92], _3514065_37);
if (True == _3514066_37) {
Obj _3514067_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3514067_37;
pushCont(co, 24, clofun8, 1, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513663_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513663_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _3514068_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 25, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3514068_37;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3514069_37 = __arg1;
Obj _3514070_37 = makeCons(__symbolTable[92], _3514069_37);
__nargs = 2;
__arg1 = _3514070_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _3513664_37 = makeNative(29, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514042_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514042_37) {
Obj _3514043_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514044_37 = PRIM_EQ(__symbolTable[90], _3514043_37);
if (True == _3514044_37) {
Obj _3514045_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514046_37 = PRIM_ISCONS(_3514045_37);
if (True == _3514046_37) {
Obj _3514047_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514048_37 = PRIM_CAR(_3514047_37);
Obj x = _3514048_37;
Obj _3514049_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514050_37 = PRIM_CDR(_3514049_37);
Obj _3514051_37 = PRIM_ISCONS(_3514050_37);
if (True == _3514051_37) {
Obj _3514052_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514053_37 = PRIM_CDR(_3514052_37);
Obj _3514054_37 = PRIM_CAR(_3514053_37);
Obj y = _3514054_37;
Obj _3514055_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514056_37 = PRIM_CDR(_3514055_37);
Obj _3514057_37 = PRIM_CDR(_3514056_37);
Obj _3514058_37 = PRIM_EQ(Nil, _3514057_37);
if (True == _3514058_37) {
pushCont(co, 27, clofun8, 1, y);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513664_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513664_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513664_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513664_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513664_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _3514059_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun8, 1, _3514059_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3514060_37 = __arg1;
Obj _3514059_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3514061_37 = makeCons(_3514060_37, Nil);
Obj _3514062_37 = makeCons(_3514059_37, _3514061_37);
Obj _3514063_37 = makeCons(__symbolTable[90], _3514062_37);
__nargs = 2;
__arg1 = _3514063_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj _3513665_37 = makeNative(32, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3514009_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3514009_37) {
Obj _3514010_37 = PRIM_CAR(closureRef(co, 0));
Obj _3514011_37 = PRIM_EQ(__symbolTable[91], _3514010_37);
if (True == _3514011_37) {
Obj _3514012_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514013_37 = PRIM_ISCONS(_3514012_37);
if (True == _3514013_37) {
Obj _3514014_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514015_37 = PRIM_CAR(_3514014_37);
Obj a = _3514015_37;
Obj _3514016_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514017_37 = PRIM_CDR(_3514016_37);
Obj _3514018_37 = PRIM_ISCONS(_3514017_37);
if (True == _3514018_37) {
Obj _3514019_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514020_37 = PRIM_CDR(_3514019_37);
Obj _3514021_37 = PRIM_CAR(_3514020_37);
Obj b = _3514021_37;
Obj _3514022_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514023_37 = PRIM_CDR(_3514022_37);
Obj _3514024_37 = PRIM_CDR(_3514023_37);
Obj _3514025_37 = PRIM_ISCONS(_3514024_37);
if (True == _3514025_37) {
Obj _3514026_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514027_37 = PRIM_CDR(_3514026_37);
Obj _3514028_37 = PRIM_CDR(_3514027_37);
Obj _3514029_37 = PRIM_CAR(_3514028_37);
Obj c = _3514029_37;
Obj _3514030_37 = PRIM_CDR(closureRef(co, 0));
Obj _3514031_37 = PRIM_CDR(_3514030_37);
Obj _3514032_37 = PRIM_CDR(_3514031_37);
Obj _3514033_37 = PRIM_CDR(_3514032_37);
Obj _3514034_37 = PRIM_EQ(Nil, _3514033_37);
if (True == _3514034_37) {
pushCont(co, 30, clofun8, 2, c, a);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513665_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513665_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513665_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513665_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513665_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513665_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj _3514035_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514036_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 31, clofun8, 2, _3514035_37, a);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = _3514036_37;
__arg2 = closureRef(co, 2);
__arg3 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _3514037_37 = __arg1;
Obj _3514035_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3514038_37 = makeCons(_3514037_37, Nil);
Obj _3514039_37 = makeCons(_3514035_37, _3514038_37);
Obj _3514040_37 = makeCons(a, _3514039_37);
Obj _3514041_37 = makeCons(__symbolTable[91], _3514040_37);
__nargs = 2;
__arg1 = _3514041_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj _3513666_37 = makeNative(33, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3513977_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3513977_37) {
Obj _3513978_37 = PRIM_CAR(closureRef(co, 0));
Obj _3513979_37 = PRIM_ISCONS(_3513978_37);
if (True == _3513979_37) {
Obj _3513980_37 = PRIM_CAR(closureRef(co, 0));
Obj _3513981_37 = PRIM_CAR(_3513980_37);
Obj _3513982_37 = PRIM_EQ(__symbolTable[94], _3513981_37);
if (True == _3513982_37) {
Obj _3513983_37 = PRIM_CAR(closureRef(co, 0));
Obj _3513984_37 = PRIM_CDR(_3513983_37);
Obj exp1 = _3513984_37;
Obj _3513985_37 = PRIM_CDR(closureRef(co, 0));
Obj _3513986_37 = PRIM_ISCONS(_3513985_37);
if (True == _3513986_37) {
Obj _3513987_37 = PRIM_CDR(closureRef(co, 0));
Obj _3513988_37 = PRIM_CAR(_3513987_37);
Obj _3513989_37 = PRIM_ISCONS(_3513988_37);
if (True == _3513989_37) {
Obj _3513990_37 = PRIM_CDR(closureRef(co, 0));
Obj _3513991_37 = PRIM_CAR(_3513990_37);
Obj _3513992_37 = PRIM_CAR(_3513991_37);
Obj _3513993_37 = PRIM_EQ(__symbolTable[92], _3513992_37);
if (True == _3513993_37) {
Obj _3513994_37 = PRIM_CDR(closureRef(co, 0));
Obj _3513995_37 = PRIM_CAR(_3513994_37);
Obj _3513996_37 = PRIM_CDR(_3513995_37);
Obj exp2 = _3513996_37;
Obj _3513997_37 = PRIM_CDR(closureRef(co, 0));
Obj _3513998_37 = PRIM_CDR(_3513997_37);
Obj _3513999_37 = PRIM_EQ(Nil, _3513998_37);
if (True == _3513999_37) {
Obj _3514000_37 = primGenSym();
Obj f = _3514000_37;
Obj _3514001_37 = makeCons(__symbolTable[94], exp1);
Obj _3514002_37 = makeCons(__symbolTable[92], exp2);
Obj _3514003_37 = makeCons(_3514002_37, Nil);
Obj _3514004_37 = makeCons(f, _3514003_37);
Obj _3514005_37 = makeCons(_3514004_37, Nil);
Obj _3514006_37 = makeCons(_3514001_37, _3514005_37);
Obj _3514007_37 = makeCons(f, _3514006_37);
Obj _3514008_37 = makeCons(__symbolTable[91], _3514007_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3514008_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513666_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3513667_37 = makeNative(41, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj _3513957_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3513957_37) {
Obj _3513958_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3513958_37;
Obj _3513959_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3513959_37;
pushCont(co, 34, clofun8, 3, op, args, _3513667_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[109]);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513667_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _3513960_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513667_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3513960_37) {
pushCont(co, 35, clofun8, 2, op, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[105]);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3513667_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _3513961_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = _3513961_37;
pushCont(co, 36, clofun8, 3, required, op, args);
__nargs = 2;
__arg0 = globalRef(__symbolTable[96]);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3513962_37 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = _3513962_37;
Obj _3513963_37 = PRIM_EQ(required, provided);
if (True == _3513963_37) {
Obj _3513964_37 = makeCons(op, Nil);
Obj _3513965_37 = makeCons(__symbolTable[95], _3513964_37);
pushCont(co, 39, clofun8, 2, args, _3513965_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3513969_37 = PRIM_GT(required, provided);
if (True == _3513969_37) {
Obj _3513970_37 = PRIM_SUB(required, provided);
pushCont(co, 37, clofun8, 2, op, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = _3513970_37;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label37:
{
Obj _3513971_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = _3513971_37;
Obj _3513972_37 = makeCons(op, args);
pushCont(co, 38, clofun8, 1, tmp);
__nargs = 3;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3513972_37;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3513973_37 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513974_37 = makeCons(_3513973_37, Nil);
Obj _3513975_37 = makeCons(tmp, _3513974_37);
Obj _3513976_37 = makeCons(__symbolTable[94], _3513975_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3513976_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3513966_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513965_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun8, 1, _3513965_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3513966_37;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3513967_37 = __arg1;
Obj _3513965_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3513968_37 = makeCons(_3513965_37, _3513967_37);
__nargs = 2;
__arg1 = _3513968_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
PUSH_CONT_0(co, 42, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _3513956_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3513956_37;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3513952_37 = __arg1;
if (True == _3513952_37) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT_0(co, 44, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[99]);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _3513953_37 = __arg1;
Obj _3513954_37 = makeCons(closureRef(co, 0), Nil);
Obj _3513955_37 = makeCons(__symbolTable[98], _3513954_37);
__nargs = 2;
__arg1 = _3513955_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj _3513651_37 = __arg1;
Obj _3513652_37 = __arg2;
Obj _3513944_37 = PRIM_EQ(MAKE_NUMBER(0), _3513651_37);
if (True == _3513944_37) {
__nargs = 2;
__arg1 = _3513652_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513945_37 = PRIM_SUB(_3513651_37, MAKE_NUMBER(1));
Obj _3513946_37 = primGenSym();
Obj _3513947_37 = makeCons(_3513946_37, _3513652_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = _3513945_37;
__arg2 = _3513947_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x = __arg1;
PUSH_CONT_0(co, 47, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[133]);
__arg1 = x;
__arg2 = globalRef(__symbolTable[127]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3513941_37 = __arg1;
Obj find = _3513941_37;
pushCont(co, 48, clofun8, 1, find);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _3513942_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3513942_37) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[104]);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x = __arg1;
PUSH_CONT_0(co, 0, clofun9);
__nargs = 3;
__arg0 = globalRef(__symbolTable[133]);
__arg1 = x;
__arg2 = globalRef(__symbolTable[127]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _3513938_37 = __arg1;
Obj find = _3513938_37;
pushCont(co, 1, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3513939_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3513939_37) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[106]);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x = __arg1;
PUSH_CONT_0(co, 3, clofun9);
__nargs = 3;
__arg0 = globalRef(__symbolTable[133]);
__arg1 = x;
__arg2 = globalRef(__symbolTable[127]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3513934_37 = __arg1;
PUSH_CONT_0(co, 4, clofun9);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = _3513934_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3513935_37 = __arg1;
Obj _3513936_37 = primNot(_3513935_37);
__nargs = 2;
__arg1 = _3513936_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _3513647_37 = __arg1;
Obj _3513648_37 = __arg2;
Obj _3513858_37 = PRIM_EQ(Nil, _3513648_37);
if (True == _3513858_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513859_37 = PRIM_ISCONS(_3513648_37);
if (True == _3513859_37) {
Obj _3513860_37 = PRIM_CAR(_3513648_37);
Obj hd = _3513860_37;
Obj _3513861_37 = PRIM_CDR(_3513648_37);
Obj tl = _3513861_37;
pushCont(co, 6, clofun9, 2, _3513647_37, tl);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = _3513647_37;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label6:
{
Obj _3513862_37 = __arg1;
Obj _3513647_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3513863_37 = PRIM_LT(_3513862_37, MAKE_NUMBER(0));
if (True == _3513863_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[128]);
__arg1 = _3513647_37;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj x = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = MAKE_NUMBER(0);
__arg2 = x;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3513641_37 = __arg1;
Obj _3513642_37 = __arg2;
Obj _3513643_37 = __arg3;
Obj _3513847_37 = PRIM_EQ(Nil, _3513643_37);
if (True == _3513847_37) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513645_37 = makeNative(9, clofun9, 0, 3, _3513643_37, _3513641_37, _3513642_37);
Obj _3513852_37 = PRIM_ISCONS(_3513643_37);
if (True == _3513852_37) {
Obj _3513853_37 = PRIM_CAR(_3513643_37);
Obj a = _3513853_37;
Obj _3513854_37 = PRIM_CDR(_3513643_37);
Obj _3513855_37 = PRIM_EQ(_3513642_37, a);
if (True == _3513855_37) {
__nargs = 2;
__arg1 = _3513641_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513645_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513645_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label9:
{
Obj _3513848_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3513848_37) {
Obj _3513849_37 = PRIM_CAR(closureRef(co, 0));
Obj _3513850_37 = PRIM_CDR(closureRef(co, 0));
Obj b = _3513850_37;
Obj _3513851_37 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = _3513851_37;
__arg2 = closureRef(co, 2);
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _3513636_37 = __arg1;
Obj _3513637_37 = __arg2;
Obj _3513638_37 = __arg3;
Obj _3513841_37 = PRIM_EQ(Nil, _3513638_37);
if (True == _3513841_37) {
__nargs = 2;
__arg1 = _3513637_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513842_37 = PRIM_ISCONS(_3513638_37);
if (True == _3513842_37) {
Obj _3513843_37 = PRIM_CAR(_3513638_37);
Obj x = _3513843_37;
Obj _3513844_37 = PRIM_CDR(_3513638_37);
Obj y = _3513844_37;
pushCont(co, 11, clofun9, 2, _3513636_37, y);
__nargs = 3;
__arg0 = _3513636_37;
__arg1 = _3513637_37;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _3513845_37 = __arg1;
Obj _3513636_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = _3513636_37;
__arg2 = _3513845_37;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3513631_37 = __arg1;
Obj _3513632_37 = __arg2;
Obj _3513826_37 = PRIM_EQ(Nil, _3513632_37);
if (True == _3513826_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3513634_37 = makeNative(13, clofun9, 0, 2, _3513632_37, _3513631_37);
Obj _3513830_37 = PRIM_ISCONS(_3513632_37);
if (True == _3513830_37) {
Obj _3513831_37 = PRIM_CAR(_3513632_37);
Obj _3513832_37 = PRIM_ISCONS(_3513831_37);
if (True == _3513832_37) {
Obj _3513833_37 = PRIM_CAR(_3513632_37);
Obj _3513834_37 = PRIM_CAR(_3513833_37);
Obj x = _3513834_37;
Obj _3513835_37 = PRIM_CAR(_3513632_37);
Obj _3513836_37 = PRIM_CDR(_3513835_37);
Obj y = _3513836_37;
Obj _3513837_37 = PRIM_CDR(_3513632_37);
Obj _3513838_37 = PRIM_EQ(_3513631_37, x);
if (True == _3513838_37) {
Obj _3513839_37 = makeCons(x, y);
__nargs = 2;
__arg1 = _3513839_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3513634_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513634_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3513634_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label13:
{
Obj _3513827_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3513827_37) {
Obj _3513828_37 = PRIM_CAR(closureRef(co, 0));
Obj _3513829_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3513829_37;
__nargs = 3;
__arg0 = globalRef(__symbolTable[133]);
__arg1 = closureRef(co, 1);
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[132]);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

