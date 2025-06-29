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
Obj x140421013680455 = __arg1;
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
Obj x140421013681383 = __arg1;
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
Obj x140421013681863 = __arg1;
Obj x140421013682023 = primSet(co, __symbolTable[134], Nil);
Obj x140421013625063 = primSet(co, __symbolTable[133], makeNative(12, clofun9, 2, 0));
Obj x140421013626503 = primSet(co, __symbolTable[131], makeNative(10, clofun9, 3, 0));
Obj x140421013563751 = primSet(co, __symbolTable[130], makeNative(8, clofun9, 3, 0));
Obj x140421013564039 = primSet(co, __symbolTable[129], makeNative(7, clofun9, 2, 0));
Obj x140421013565319 = primSet(co, __symbolTable[128], makeNative(5, clofun9, 2, 0));
Obj x140421013467495 = makeCons(makeCString("primSet"), Nil);
Obj x140421013467527 = makeCons(MAKE_NUMBER(2), x140421013467495);
Obj x140421013467559 = makeCons(__symbolTable[126], x140421013467527);
Obj x140421013467847 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140421013467879 = makeCons(MAKE_NUMBER(1), x140421013467847);
Obj x140421013467911 = makeCons(__symbolTable[125], x140421013467879);
Obj x140421013468199 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140421013468231 = makeCons(MAKE_NUMBER(1), x140421013468199);
Obj x140421013468263 = makeCons(__symbolTable[124], x140421013468231);
Obj x140421013468551 = makeCons(makeCString("makeCons"), Nil);
Obj x140421013468583 = makeCons(MAKE_NUMBER(2), x140421013468551);
Obj x140421013468615 = makeCons(__symbolTable[123], x140421013468583);
Obj x140421013468903 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140421013468935 = makeCons(MAKE_NUMBER(1), x140421013468903);
Obj x140421013468967 = makeCons(__symbolTable[122], x140421013468935);
Obj x140421013469255 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140421013469287 = makeCons(MAKE_NUMBER(2), x140421013469255);
Obj x140421013469319 = makeCons(__symbolTable[121], x140421013469287);
Obj x140421013469607 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140421013469639 = makeCons(MAKE_NUMBER(2), x140421013469607);
Obj x140421013469671 = makeCons(__symbolTable[120], x140421013469639);
Obj x140421013469959 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140421013469991 = makeCons(MAKE_NUMBER(2), x140421013469959);
Obj x140421013470023 = makeCons(__symbolTable[119], x140421013469991);
Obj x140421013470311 = makeCons(makeCString("primDiv"), Nil);
Obj x140421013470343 = makeCons(MAKE_NUMBER(2), x140421013470311);
Obj x140421013470375 = makeCons(__symbolTable[118], x140421013470343);
Obj x140421013470663 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140421013470695 = makeCons(MAKE_NUMBER(2), x140421013470663);
Obj x140421013470727 = makeCons(__symbolTable[117], x140421013470695);
Obj x140421013471015 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140421013471047 = makeCons(MAKE_NUMBER(2), x140421013471015);
Obj x140421013471079 = makeCons(__symbolTable[116], x140421013471047);
Obj x140421013389447 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140421013389479 = makeCons(MAKE_NUMBER(2), x140421013389447);
Obj x140421013389511 = makeCons(__symbolTable[115], x140421013389479);
Obj x140421013389799 = makeCons(makeCString("primGenSym"), Nil);
Obj x140421013389831 = makeCons(MAKE_NUMBER(0), x140421013389799);
Obj x140421013389863 = makeCons(__symbolTable[114], x140421013389831);
Obj x140421013390151 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140421013390183 = makeCons(MAKE_NUMBER(1), x140421013390151);
Obj x140421013390215 = makeCons(__symbolTable[113], x140421013390183);
Obj x140421013390503 = makeCons(makeCString("primNot"), Nil);
Obj x140421013390535 = makeCons(MAKE_NUMBER(1), x140421013390503);
Obj x140421013390567 = makeCons(__symbolTable[112], x140421013390535);
Obj x140421013390855 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140421013390887 = makeCons(MAKE_NUMBER(1), x140421013390855);
Obj x140421013390919 = makeCons(__symbolTable[111], x140421013390887);
Obj x140421013391207 = makeCons(makeCString("primIsString"), Nil);
Obj x140421013391239 = makeCons(MAKE_NUMBER(1), x140421013391207);
Obj x140421013391271 = makeCons(__symbolTable[110], x140421013391239);
Obj x140421013391303 = makeCons(x140421013391271, Nil);
Obj x140421013391335 = makeCons(x140421013390919, x140421013391303);
Obj x140421013391367 = makeCons(x140421013390567, x140421013391335);
Obj x140421013391399 = makeCons(x140421013390215, x140421013391367);
Obj x140421013391431 = makeCons(x140421013389863, x140421013391399);
Obj x140421013391463 = makeCons(x140421013389511, x140421013391431);
Obj x140421013391495 = makeCons(x140421013471079, x140421013391463);
Obj x140421013391527 = makeCons(x140421013470727, x140421013391495);
Obj x140421013391559 = makeCons(x140421013470375, x140421013391527);
Obj x140421013391591 = makeCons(x140421013470023, x140421013391559);
Obj x140421013391623 = makeCons(x140421013469671, x140421013391591);
Obj x140421013391655 = makeCons(x140421013469319, x140421013391623);
Obj x140421013391687 = makeCons(x140421013468967, x140421013391655);
Obj x140421013391719 = makeCons(x140421013468615, x140421013391687);
Obj x140421013391751 = makeCons(x140421013468263, x140421013391719);
Obj x140421013391783 = makeCons(x140421013467911, x140421013391751);
Obj x140421013391815 = makeCons(x140421013467559, x140421013391783);
Obj x140421013391847 = primSet(co, __symbolTable[127], x140421013391815);
Obj x140421013392359 = primSet(co, __symbolTable[109], makeNative(2, clofun9, 1, 0));
Obj x140421013392967 = primSet(co, __symbolTable[107], makeNative(49, clofun8, 1, 0));
Obj x140421013270695 = primSet(co, __symbolTable[105], makeNative(46, clofun8, 1, 0));
Obj x140421013271431 = primSet(co, __symbolTable[103], makeNative(45, clofun8, 2, 0));
Obj x140421012075239 = primSet(co, __symbolTable[102], makeNative(13, clofun8, 3, 0));
Obj x140421012077447 = primSet(co, __symbolTable[86], makeNative(9, clofun8, 2, 0));
Obj x140421012039335 = primSet(co, __symbolTable[85], makeNative(5, clofun8, 2, 0));
Obj x140421011729831 = primSet(co, __symbolTable[84], makeNative(49, clofun7, 1, 0));
Obj x140421013273287 = primSet(co, __symbolTable[82], makeNative(29, clofun7, 1, 0));
Obj x140421012515175 = primSet(co, __symbolTable[76], makeNative(17, clofun7, 2, 0));
Obj x140421012515623 = primSet(co, __symbolTable[75], makeNative(16, clofun7, 1, 0));
Obj x140421011727079 = primSet(co, __symbolTable[74], makeNative(0, clofun7, 2, 0));
Obj x140421011690951 = primSet(co, __symbolTable[73], makeNative(43, clofun6, 3, 0));
Obj x140421011501031 = primSet(co, __symbolTable[68], makeNative(28, clofun6, 2, 0));
Obj x140421013624071 = primSet(co, __symbolTable[66], makeNative(19, clofun6, 2, 0));
Obj x140421013626759 = primSet(co, __symbolTable[64], makeNative(15, clofun6, 2, 0));
Obj x140421013562983 = primSet(co, __symbolTable[71], makeNative(13, clofun6, 2, 0));
Obj x140421013470119 = primSet(co, __symbolTable[62], makeNative(1, clofun6, 5, 0));
Obj x140421013389575 = primSet(co, __symbolTable[99], makeNative(48, clofun5, 2, 0));
Obj x140421013391111 = primSet(co, __symbolTable[57], makeNative(46, clofun5, 3, 0));
Obj x140421013392231 = primSet(co, __symbolTable[56], makeNative(45, clofun5, 2, 0));
Obj x140421011305287 = primSet(co, __symbolTable[59], makeNative(45, clofun3, 5, 0));
Obj x140421011307879 = primSet(co, __symbolTable[50], makeNative(37, clofun3, 5, 0));
Obj x140421013625863 = primSet(co, __symbolTable[53], makeNative(13, clofun3, 5, 0));
Obj x140421013626279 = primSet(co, __symbolTable[51], MAKE_NUMBER(50));
Obj x140421013562631 = primSet(co, __symbolTable[54], makeNative(11, clofun3, 3, 0));
Obj x140421013564391 = primSet(co, __symbolTable[46], makeNative(7, clofun3, 3, 0));
Obj x140421013469223 = primSet(co, __symbolTable[45], makeNative(0, clofun3, 3, 0));
Obj x140421013389383 = primSet(co, __symbolTable[43], makeNative(45, clofun2, 3, 0));
Obj x140421013392807 = primSet(co, __symbolTable[42], makeNative(43, clofun2, 4, 0));
Obj x140421012514983 = primSet(co, __symbolTable[41], makeNative(32, clofun2, 4, 0));
Obj x140421012515335 = primSet(co, __symbolTable[39], makeNative(31, clofun2, 2, 0));
Obj x140421012515847 = primSet(co, __symbolTable[38], makeNative(30, clofun2, 1, 0));
Obj x140421012516327 = primSet(co, __symbolTable[37], makeNative(29, clofun2, 1, 0));
Obj x140421012516807 = primSet(co, __symbolTable[36], makeNative(28, clofun2, 1, 0));
Obj x140421012392583 = primSet(co, __symbolTable[35], makeNative(22, clofun2, 1, 0));
Obj x140421012120519 = primSet(co, __symbolTable[33], makeNative(21, clofun2, 2, 0));
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
Obj x140421012121895 = __arg1;
Obj x140421012123495 = primSet(co, __symbolTable[29], makeNative(12, clofun2, 2, 0));
Obj x140421012097255 = primSet(co, __symbolTable[47], makeNative(10, clofun2, 2, 0));
Obj x140421012075303 = primSet(co, __symbolTable[28], makeNative(6, clofun2, 3, 0));
Obj x140421012041479 = primSet(co, __symbolTable[27], makeNative(34, clofun1, 4, 0));
Obj x140421011726535 = primSet(co, __symbolTable[26], makeNative(30, clofun1, 4, 0));
Obj x140421011690599 = primSet(co, __symbolTable[25], makeNative(15, clofun1, 2, 0));
Obj x140421011628839 = primSet(co, __symbolTable[23], makeNative(3, clofun1, 3, 0));
Obj x140421011441191 = primSet(co, __symbolTable[22], makeNative(47, clofun0, 1, 0));
Obj x140421011359687 = primSet(co, __symbolTable[17], makeNative(42, clofun0, 4, 0));
Obj x140421011265159 = primSet(co, __symbolTable[9], makeNative(33, clofun0, 2, 0));
Obj x140421011265511 = primSet(co, __symbolTable[8], makeNative(32, clofun0, 2, 0));
Obj x140421011199143 = primSet(co, __symbolTable[6], makeNative(23, clofun0, 1, 0));
Obj x140421011199303 = primSet(co, __symbolTable[7], False);
Obj x140421011201447 = primSet(co, __symbolTable[5], makeNative(13, clofun0, 1, 0));
Obj x140421011133223 = primSet(co, __symbolTable[3], makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = x140421011133223;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj x140421011201735 = primGenSym();
Obj globals = x140421011201735;
Obj x140421011201895 = primSet(co, globals, Nil);
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
Obj x140421011132487 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, x140421011132487, to, globals);
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
Obj x140421011132647 = __arg1;
Obj x140421011132487= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, x140421011132487, to, globals);
__nargs = 2;
__arg0 = globalRef(__symbolTable[2]);
__arg1 = x140421011132647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140421011132679 = __arg1;
Obj x140421011132487= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = x140421011132487;
__arg1 = x140421011132679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140421011132711 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = x140421011132711;
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
Obj x140421011132871 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = x140421011132871;
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
Obj x140421011133095 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun0, 1, stream);
__nargs = 4;
__arg0 = globalRef(__symbolTable[23]);
__arg1 = stream;
__arg2 = bc;
__arg3 = x140421011133095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140421011133127 = __arg1;
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
Obj x140421011199655 = __arg1;
Obj sexp = x140421011199655;
Obj x140421013681319 = makeNative(22, clofun0, 1, 1, sexp);
pushCont(co, 15, clofun0, 2, x140421013681319, sexp);
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
Obj x140421011200391 = __arg1;
Obj x140421013681319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421011200391) {
Obj x140421011200615 = PRIM_CAR(sexp);
Obj x140421011200647 = PRIM_EQ(__symbolTable[19], x140421011200615);
if (True == x140421011200647) {
pushCont(co, 20, clofun0, 1, sexp);
__nargs = 2;
__arg0 = x140421013681319;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 1, sexp);
__nargs = 2;
__arg0 = x140421013681319;
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
__arg0 = x140421013681319;
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
Obj x140421011201191 = __arg1;
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
Obj x140421011201351 = __arg1;
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
Obj x140421011200935 = __arg1;
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
Obj x140421011201095 = __arg1;
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
Obj x140421011200679 = __arg1;
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
Obj x140421011200839 = __arg1;
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
Obj x140421013681351 = __arg1;
if (True == x140421013681351) {
Obj x140421011200039 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg1 = x140421011200039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421011200167 = makeCons(closureRef(co, 0), Nil);
__nargs = 2;
__arg1 = x140421011200167;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label23:
{
Obj x140421013681415 = __arg1;
Obj x140421013681671 = makeNative(26, clofun0, 0, 1, x140421013681415);
Obj x140421011198151 = PRIM_ISCONS(x140421013681415);
if (True == x140421011198151) {
Obj x140421011198375 = PRIM_CAR(x140421013681415);
Obj x140421011198407 = PRIM_EQ(__symbolTable[18], x140421011198375);
if (True == x140421011198407) {
Obj x140421011198567 = PRIM_CDR(x140421013681415);
Obj more = x140421011198567;
Obj x140421011198727 = makeCons(__symbolTable[18], more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = x140421011198727;
__arg2 = makeNative(24, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013681671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681671;
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
Obj x140421013682279 = makeNative(29, clofun0, 0, 1, closureRef(co, 0));
Obj x140421011266599 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011266599) {
Obj x140421011266855 = PRIM_CAR(closureRef(co, 0));
Obj x140421011266887 = PRIM_EQ(__symbolTable[19], x140421011266855);
if (True == x140421011266887) {
Obj x140421011267079 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421011267079;
Obj x140421011267239 = makeCons(__symbolTable[19], more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = x140421011267239;
__arg2 = makeNative(27, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013682279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682279;
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
Obj x140421011266151 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = x140421011266151;
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
Obj x140421011266375 = __arg1;
Obj x140421011266407 = makeCons(__symbolTable[19], x140421011266375);
__nargs = 2;
__arg1 = x140421011266407;
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
Obj x140421013561895 = __arg1;
Obj x140421013561927 = __arg2;
Obj x140421013562087 = makeNative(35, clofun0, 0, 2, x140421013561895, x140421013561927);
Obj x140421011263623 = PRIM_ISCONS(x140421013561895);
if (True == x140421011263623) {
Obj x140421011263847 = PRIM_CAR(x140421013561895);
Obj x140421011263879 = PRIM_EQ(__symbolTable[18], x140421011263847);
if (True == x140421011263879) {
Obj x140421011264103 = PRIM_CDR(x140421013561895);
Obj x140421011264135 = PRIM_ISCONS(x140421011264103);
if (True == x140421011264135) {
Obj x140421011264359 = PRIM_CDR(x140421013561895);
Obj x140421011264391 = PRIM_CAR(x140421011264359);
Obj name = x140421011264391;
Obj x140421011264615 = PRIM_CDR(x140421013561895);
Obj x140421011264647 = PRIM_CDR(x140421011264615);
Obj more = x140421011264647;
pushCont(co, 34, clofun0, 1, name);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = more;
__arg2 = x140421013561927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013562087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140421011264871 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011264903 = makeCons(name, x140421011264871);
Obj x140421011264935 = makeCons(__symbolTable[18], x140421011264903);
__nargs = 2;
__arg1 = x140421011264935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140421013562695 = makeNative(37, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421011307015 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011307015) {
Obj x140421011307367 = PRIM_CAR(closureRef(co, 0));
Obj x140421011307431 = PRIM_ISCONS(x140421011307367);
if (True == x140421011307431) {
Obj x140421011307815 = PRIM_CAR(closureRef(co, 0));
Obj x140421011307911 = PRIM_CAR(x140421011307815);
Obj x140421011307943 = PRIM_EQ(__symbolTable[21], x140421011307911);
if (True == x140421011307943) {
Obj x140421011308263 = PRIM_CAR(closureRef(co, 0));
Obj x140421011308295 = PRIM_CDR(x140421011308263);
Obj x140421011308327 = PRIM_ISCONS(x140421011308295);
if (True == x140421011308327) {
Obj x140421011275975 = PRIM_CAR(closureRef(co, 0));
Obj x140421011276007 = PRIM_CDR(x140421011275975);
Obj x140421011276039 = PRIM_CAR(x140421011276007);
Obj pkg = x140421011276039;
Obj x140421011276551 = PRIM_CAR(closureRef(co, 0));
Obj x140421011276583 = PRIM_CDR(x140421011276551);
Obj x140421011276615 = PRIM_CDR(x140421011276583);
Obj x140421011276711 = PRIM_EQ(Nil, x140421011276615);
if (True == x140421011276711) {
Obj x140421011276935 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421011276935;
Obj x140421011277191 = makeCons(pkg, Nil);
Obj x140421011277223 = makeCons(__symbolTable[21], x140421011277191);
pushCont(co, 36, clofun0, 1, x140421011277223);
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
__arg0 = x140421013562695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140421011279495 = __arg1;
Obj x140421011277223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011279527 = makeCons(x140421011277223, x140421011279495);
__nargs = 2;
__arg1 = x140421011279527;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x140421013563559 = makeNative(39, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421011304871 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011304871) {
Obj x140421011305159 = PRIM_CAR(closureRef(co, 0));
Obj x140421011305191 = PRIM_ISCONS(x140421011305159);
if (True == x140421011305191) {
Obj x140421011305575 = PRIM_CAR(closureRef(co, 0));
Obj x140421011305607 = PRIM_CAR(x140421011305575);
Obj x140421011305671 = PRIM_EQ(__symbolTable[20], x140421011305607);
if (True == x140421011305671) {
Obj x140421011305927 = PRIM_CAR(closureRef(co, 0));
Obj x140421011305959 = PRIM_CDR(x140421011305927);
Obj symbols = x140421011305959;
Obj x140421011306215 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421011306215;
Obj x140421011306407 = makeCons(__symbolTable[20], symbols);
pushCont(co, 38, clofun0, 1, x140421011306407);
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
__arg0 = x140421013563559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140421011306567 = __arg1;
Obj x140421011306407= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011306599 = makeCons(x140421011306407, x140421011306567);
__nargs = 2;
__arg1 = x140421011306599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj x140421013564103 = makeNative(41, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj x140421011360871 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011360871) {
Obj x140421011361255 = PRIM_CAR(closureRef(co, 0));
Obj x140421011361287 = PRIM_EQ(__symbolTable[19], x140421011361255);
if (True == x140421011361287) {
Obj x140421011361575 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421011361575;
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
__arg0 = x140421013564103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013564103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj x140421011304455 = __arg1;
Obj x140421011304487 = makeCons(__symbolTable[19], x140421011304455);
__nargs = 2;
__arg1 = x140421011304487;
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
Obj x140421013622823 = __arg1;
Obj x140421013622855 = __arg2;
Obj x140421013622951 = __arg3;
Obj x140421013623367 = co->args[4];
Obj x140421011441831 = PRIM_EQ(Nil, x140421013622823);
if (True == x140421011441831) {
pushCont(co, 45, clofun0, 2, x140421013622951, x140421013623367);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421013622855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013624519 = makeNative(43, clofun0, 0, 4, x140421013622823, x140421013622855, x140421013622951, x140421013623367);
Obj x140421011357863 = PRIM_ISCONS(x140421013622823);
if (True == x140421011357863) {
Obj x140421011358087 = PRIM_CAR(x140421013622823);
Obj x140421011358119 = PRIM_ISCONS(x140421011358087);
if (True == x140421011358119) {
Obj x140421011358439 = PRIM_CAR(x140421013622823);
Obj x140421011358471 = PRIM_CAR(x140421011358439);
Obj x140421011358503 = PRIM_EQ(__symbolTable[10], x140421011358471);
if (True == x140421011358503) {
Obj x140421011358791 = PRIM_CAR(x140421013622823);
Obj x140421011358887 = PRIM_CDR(x140421011358791);
Obj exp = x140421011358887;
Obj x140421011359047 = PRIM_CDR(x140421013622823);
Obj more = x140421011359047;
Obj x140421011359335 = makeCons(__symbolTable[19], exp);
Obj x140421011359367 = makeCons(x140421011359335, x140421013622855);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = x140421011359367;
__arg3 = x140421013622951;
co->args[4] = x140421013623367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013624519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624519;
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
Obj x140421013625543 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140421011367719 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011367719) {
Obj x140421011367975 = PRIM_CAR(closureRef(co, 0));
Obj x140421011368007 = PRIM_ISCONS(x140421011367975);
if (True == x140421011368007) {
Obj x140421011368487 = PRIM_CAR(closureRef(co, 0));
Obj x140421011368519 = PRIM_CAR(x140421011368487);
Obj x140421011368551 = PRIM_EQ(__symbolTable[12], x140421011368519);
if (True == x140421011368551) {
Obj x140421011368999 = PRIM_CAR(closureRef(co, 0));
Obj x140421011369031 = PRIM_CDR(x140421011368999);
Obj exp = x140421011369031;
Obj x140421011369287 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421011369287;
Obj x140421011369511 = makeCons(__symbolTable[11], exp);
Obj x140421011369671 = makeCons(x140421011369511, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = x140421011369671;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013625543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140421011442951 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011442951) {
Obj x140421011443303 = PRIM_CAR(closureRef(co, 0));
Obj exp = x140421011443303;
Obj x140421011443527 = PRIM_CDR(closureRef(co, 0));
Obj more = x140421011443527;
Obj x140421011366631 = makeCons(exp, Nil);
Obj x140421011366663 = makeCons(__symbolTable[14], x140421011366631);
Obj x140421011366695 = makeCons(x140421011366663, Nil);
Obj x140421011366759 = makeCons(__symbolTable[15], x140421011366695);
Obj x140421011366983 = makeCons(__symbolTable[13], Nil);
Obj x140421011367015 = makeCons(x140421011366983, Nil);
Obj x140421011367111 = makeCons(x140421011366759, x140421011367015);
Obj x140421011367143 = makeCons(__symbolTable[16], x140421011367111);
Obj x140421011367207 = makeCons(x140421011367143, closureRef(co, 1));
Obj x140421011367367 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = x140421011367207;
__arg3 = x140421011367367;
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
Obj x140421011442023 = __arg1;
Obj x140421013622951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013623367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun0, 2, x140421013623367, x140421011442023);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421013622951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140421011442279 = __arg1;
Obj x140421013623367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011442023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = x140421013623367;
__arg1 = x140421011442023;
__arg2 = x140421011442279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140421013680391 = __arg1;
Obj x140421013680583 = makeNative(48, clofun0, 0, 1, x140421013680391);
Obj x140421011500807 = PRIM_ISCONS(x140421013680391);
if (True == x140421011500807) {
Obj x140421011439687 = PRIM_CAR(x140421013680391);
Obj x140421011439719 = PRIM_EQ(__symbolTable[18], x140421011439687);
if (True == x140421011439719) {
Obj x140421011440039 = PRIM_CDR(x140421013680391);
Obj x140421011440071 = PRIM_ISCONS(x140421011440039);
if (True == x140421011440071) {
Obj x140421011440391 = PRIM_CDR(x140421013680391);
Obj x140421011440423 = PRIM_CAR(x140421011440391);
Obj x140421011440775 = PRIM_CDR(x140421013680391);
Obj x140421011440807 = PRIM_CDR(x140421011440775);
Obj remain = x140421011440807;
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
__arg0 = x140421013680583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x140421013681735 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj x140421011499367 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011499367) {
Obj x140421011499719 = PRIM_CAR(closureRef(co, 0));
Obj x140421011499751 = PRIM_EQ(__symbolTable[19], x140421011499719);
if (True == x140421011499751) {
Obj x140421011500071 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140421011500071;
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
__arg0 = x140421013681735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x140421013682215 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj x140421011566535 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011566535) {
Obj x140421011497255 = PRIM_CAR(closureRef(co, 0));
Obj x140421011497383 = PRIM_ISCONS(x140421011497255);
if (True == x140421011497383) {
Obj x140421011497959 = PRIM_CAR(closureRef(co, 0));
Obj x140421011497991 = PRIM_CAR(x140421011497959);
Obj x140421011498023 = PRIM_EQ(__symbolTable[20], x140421011497991);
if (True == x140421011498023) {
Obj x140421011498343 = PRIM_CAR(closureRef(co, 0));
Obj x140421011498439 = PRIM_CDR(x140421011498343);
Obj x140421011498727 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140421011498727;
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
__arg0 = x140421013682215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682215;
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
Obj x140421013682951 = makeNative(2, clofun1, 0, 0);
Obj x140421011630599 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011630599) {
Obj x140421011631079 = PRIM_CAR(closureRef(co, 0));
Obj x140421011631111 = PRIM_ISCONS(x140421011631079);
if (True == x140421011631111) {
Obj x140421011631783 = PRIM_CAR(closureRef(co, 0));
Obj x140421011631815 = PRIM_CAR(x140421011631783);
Obj x140421011632071 = PRIM_EQ(__symbolTable[21], x140421011631815);
if (True == x140421011632071) {
Obj x140421011562919 = PRIM_CAR(closureRef(co, 0));
Obj x140421011563271 = PRIM_CDR(x140421011562919);
Obj x140421011563303 = PRIM_ISCONS(x140421011563271);
if (True == x140421011563303) {
Obj x140421011564007 = PRIM_CAR(closureRef(co, 0));
Obj x140421011564039 = PRIM_CDR(x140421011564007);
Obj x140421011564103 = PRIM_CAR(x140421011564039);
Obj pkg = x140421011564103;
Obj x140421011564871 = PRIM_CAR(closureRef(co, 0));
Obj x140421011565063 = PRIM_CDR(x140421011564871);
Obj x140421011565095 = PRIM_CDR(x140421011565063);
Obj x140421011565127 = PRIM_EQ(Nil, x140421011565095);
if (True == x140421011565127) {
Obj x140421011565447 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140421011565447;
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
__arg0 = x140421013682951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140421011565671 = __arg1;
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
Obj x140421011691175 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = x140421011691175;
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
Obj x140421011691623 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = x140421011691623;
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
Obj x140421011691847 = __arg1;
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
Obj x140421011692071 = __arg1;
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
Obj x140421011693255 = __arg1;
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
Obj x140421011628039 = __arg1;
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
Obj x140421011628327 = __arg1;
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
Obj x140421011692871 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
__nargs = 4;
__arg0 = globalRef(__symbolTable[46]);
__arg1 = closureRef(co, 1);
__arg2 = x140421011692871;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140421011693031 = __arg1;
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
Obj x140421011727271 = __arg1;
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
Obj x140421011727463 = __arg1;
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
Obj x140421011727815 = __arg1;
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
Obj x140421011728103 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = to;
__arg2 = x140421011728103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140421011728167 = __arg1;
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
Obj x140421011728455 = __arg1;
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
Obj x140421011690503 = __arg1;
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
Obj x140421011729575 = __arg1;
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
Obj x140421011729799 = __arg1;
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
Obj x140421011730407 = __arg1;
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
Obj x140421011689895 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 0);
__arg2 = x140421011689895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140421011689991 = __arg1;
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
Obj x140421011690215 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011690471 = PRIM_ADD(acc, MAKE_NUMBER(1));
__nargs = 2;
__arg1 = x140421011690471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140421013622983 = __arg1;
Obj x140421013623015 = __arg2;
Obj x140421013623047 = __arg3;
Obj x140421013623335 = co->args[4];
Obj x140421011767655 = PRIM_EQ(Nil, x140421013623335);
if (True == x140421011767655) {
pushCont(co, 32, clofun1, 2, x140421013623047, x140421013622983);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = x140421013623047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421011769127 = PRIM_ISCONS(x140421013623335);
if (True == x140421011769127) {
Obj x140421011769639 = PRIM_CAR(x140421013623335);
Obj bc = x140421011769639;
Obj x140421011769799 = PRIM_CDR(x140421013623335);
Obj more = x140421011769799;
Obj x140421011770311 = PRIM_EQ(x140421013623015, globalRef(__symbolTable[51]));
if (True == x140421011770311) {
pushCont(co, 31, clofun1, 3, x140421013622983, bc, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421013623047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421011771335 = PRIM_ADD(x140421013623015, MAKE_NUMBER(1));
Obj x140421011726439 = makeCons(bc, x140421013623047);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = x140421013622983;
__arg2 = x140421011771335;
__arg3 = x140421011726439;
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
Obj x140421011770599 = __arg1;
Obj x140421013622983= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421011770631 = makeCons(x140421011770599, x140421013622983);
Obj x140421011770759 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = x140421011770631;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = x140421011770759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140421011768359 = __arg1;
Obj x140421013623047= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013622983= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011768391 = primNot(x140421011768359);
if (True == x140421011768391) {
pushCont(co, 33, clofun1, 1, x140421013622983);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421013623047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421013622983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140421011768711 = __arg1;
Obj x140421013622983= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011768743 = makeCons(x140421011768711, x140421013622983);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421011768743;
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
Obj x140421012076071 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun1, 4, maxid, globals, group, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[46]);
__arg1 = to;
__arg2 = x140421012076071;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140421012076135 = __arg1;
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
Obj x140421012076551 = __arg1;
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
Obj x140421012076711 = __arg1;
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
Obj x140421012077127 = __arg1;
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
Obj x140421012077415 = __arg1;
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
Obj x140421012077735 = __arg1;
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
Obj x140421012078247 = __arg1;
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
Obj x140421012037927 = __arg1;
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
Obj x140421012038343 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun1, 4, maxid, globals, group, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = x140421012038343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140421012038439 = __arg1;
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
Obj x140421012038823 = __arg1;
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
Obj x140421012039015 = __arg1;
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
Obj x140421012039751 = __arg1;
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
Obj x140421012039911 = __arg1;
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
Obj x140421012040199 = __arg1;
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
Obj x140421012040391 = __arg1;
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
Obj x140421012040583 = __arg1;
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
Obj x140421012040839 = __arg1;
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
Obj x140421012041255 = __arg1;
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
Obj x140421012097895 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == x140421012097895) {
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
Obj x140421012098887 = PRIM_LT(i, n);
if (True == x140421012098887) {
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
Obj x140421012099047 = __arg1;
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
Obj x140421012074919 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421012075271 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = x140421012075271;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140421012098279 = __arg1;
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
Obj x140421013683111 = __arg1;
Obj x140421013683143 = __arg2;
Obj x140421012095815 = PRIM_EQ(Nil, x140421013683143);
if (True == x140421012095815) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421012096007 = PRIM_ISCONS(x140421013683143);
if (True == x140421012096007) {
Obj x140421012096359 = PRIM_CAR(x140421013683143);
Obj x = x140421012096359;
Obj x140421012096743 = PRIM_CDR(x140421013683143);
Obj y = x140421012096743;
pushCont(co, 11, clofun2, 2, x140421013683111, y);
__nargs = 2;
__arg0 = x140421013683111;
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
Obj x140421012096967 = __arg1;
Obj x140421013683111= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = x140421013683111;
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
Obj x140421012123335 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
__nargs = 2;
__arg0 = x140421012123335;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140421012123367 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[38]);
__arg1 = x140421012123367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140421012123399 = __arg1;
PUSH_CONT_0(co, 16, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[37]);
__arg1 = x140421012123399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140421012123431 = __arg1;
PUSH_CONT_0(co, 17, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[36]);
__arg1 = x140421012123431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140421012123463 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[35]);
__arg1 = x140421012123463;
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
Obj x140421012121223 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = x140421012121223;
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
Obj x140421012121799 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = x140421012121799;
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
Obj x140421013681607 = __arg1;
Obj x140421013681639 = __arg2;
Obj x140421012393223 = PRIM_EQ(Nil, x140421013681639);
if (True == x140421012393223) {
__nargs = 2;
__arg1 = x140421013681607;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421012393607 = PRIM_ISCONS(x140421013681639);
if (True == x140421012393607) {
Obj x140421012393863 = PRIM_CAR(x140421013681639);
Obj hd = x140421012393863;
Obj x140421012119847 = PRIM_CDR(x140421013681639);
Obj more = x140421012119847;
Obj x140421012120327 = makeCons(x140421013681607, Nil);
Obj x140421012120359 = makeCons(hd, x140421012120327);
__nargs = 3;
__arg0 = globalRef(__symbolTable[33]);
__arg1 = x140421012120359;
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
Obj x140421012390343 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = x140421012390343;
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
Obj x140421012390759 = __arg1;
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
Obj x140421012391175 = __arg1;
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
Obj x140421012391399 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = x140421012391399;
Obj x140421012392103 = makeCons(e1, Nil);
Obj x140421012392199 = makeCons(Nil, x140421012392103);
Obj x140421012392231 = makeCons(Nil, x140421012392199);
Obj x140421012392327 = makeCons(__symbolTable[94], x140421012392231);
pushCont(co, 27, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = v;
__arg2 = x140421012392327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140421012392359 = __arg1;
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
Obj x140421013623079 = __arg1;
Obj x140421013623143 = __arg2;
Obj x140421013623207 = __arg3;
Obj x140421013623271 = co->args[4];
Obj x140421013623495 = makeNative(40, clofun2, 0, 1, x140421013623143);
Obj x140421013271335 = PRIM_ISCONS(x140421013623143);
if (True == x140421013271335) {
Obj x140421013271591 = PRIM_CAR(x140421013623143);
Obj label = x140421013271591;
Obj x140421013271911 = PRIM_CDR(x140421013623143);
Obj x140421013271943 = PRIM_ISCONS(x140421013271911);
if (True == x140421013271943) {
Obj x140421013272423 = PRIM_CDR(x140421013623143);
Obj x140421013272455 = PRIM_CAR(x140421013272423);
Obj x140421013272487 = PRIM_ISCONS(x140421013272455);
if (True == x140421013272487) {
Obj x140421013273127 = PRIM_CDR(x140421013623143);
Obj x140421013273159 = PRIM_CAR(x140421013273127);
Obj x140421013273191 = PRIM_CAR(x140421013273159);
Obj x140421013273223 = PRIM_EQ(__symbolTable[94], x140421013273191);
if (True == x140421013273223) {
Obj x140421013273703 = PRIM_CDR(x140421013623143);
Obj x140421013273767 = PRIM_CAR(x140421013273703);
Obj x140421013273831 = PRIM_CDR(x140421013273767);
Obj x140421013273863 = PRIM_ISCONS(x140421013273831);
if (True == x140421013273863) {
Obj x140421013107143 = PRIM_CDR(x140421013623143);
Obj x140421013107911 = PRIM_CAR(x140421013107143);
Obj x140421013107975 = PRIM_CDR(x140421013107911);
Obj x140421013108199 = PRIM_CAR(x140421013107975);
Obj params = x140421013108199;
Obj x140421013110119 = PRIM_CDR(x140421013623143);
Obj x140421013110183 = PRIM_CAR(x140421013110119);
Obj x140421013110215 = PRIM_CDR(x140421013110183);
Obj x140421013110247 = PRIM_CDR(x140421013110215);
Obj x140421013110343 = PRIM_ISCONS(x140421013110247);
if (True == x140421013110343) {
Obj x140421013090759 = PRIM_CDR(x140421013623143);
Obj x140421013090855 = PRIM_CAR(x140421013090759);
Obj x140421013090919 = PRIM_CDR(x140421013090855);
Obj x140421013090951 = PRIM_CDR(x140421013090919);
Obj x140421013090983 = PRIM_CAR(x140421013090951);
Obj actives = x140421013090983;
Obj x140421013092167 = PRIM_CDR(x140421013623143);
Obj x140421013092199 = PRIM_CAR(x140421013092167);
Obj x140421013092231 = PRIM_CDR(x140421013092199);
Obj x140421013092263 = PRIM_CDR(x140421013092231);
Obj x140421013092295 = PRIM_CDR(x140421013092263);
Obj x140421013092327 = PRIM_ISCONS(x140421013092295);
if (True == x140421013092327) {
Obj x140421013093351 = PRIM_CDR(x140421013623143);
Obj x140421013093479 = PRIM_CAR(x140421013093351);
Obj x140421013093511 = PRIM_CDR(x140421013093479);
Obj x140421013093607 = PRIM_CDR(x140421013093511);
Obj x140421013093639 = PRIM_CDR(x140421013093607);
Obj x140421013093671 = PRIM_CAR(x140421013093639);
Obj body = x140421013093671;
Obj x140421012992743 = PRIM_CDR(x140421013623143);
Obj x140421012992807 = PRIM_CAR(x140421012992743);
Obj x140421012992839 = PRIM_CDR(x140421012992807);
Obj x140421012992871 = PRIM_CDR(x140421012992839);
Obj x140421012992903 = PRIM_CDR(x140421012992871);
Obj x140421012992935 = PRIM_CDR(x140421012992903);
Obj x140421012993255 = PRIM_EQ(Nil, x140421012992935);
if (True == x140421012993255) {
Obj x140421012993767 = PRIM_CDR(x140421013623143);
Obj x140421012993799 = PRIM_CDR(x140421012993767);
Obj x140421012993991 = PRIM_EQ(Nil, x140421012993799);
if (True == x140421012993991) {
pushCont(co, 33, clofun2, 7, actives, x140421013623207, label, x140421013623271, params, body, x140421013623079);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013623079;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140421012994311 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013623207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013623271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj x140421012994919 = PRIM_SUB(x140421013623207, label);
pushCont(co, 34, clofun2, 7, actives, x140421013623207, label, x140421013623271, params, body, x140421013623079);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = x140421012994919;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140421012994951 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013623207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013623271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 35, clofun2, 7, actives, x140421013623207, label, x140421013623271, params, body, x140421013623079);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013623079;
__arg2 = x140421012994951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140421012994983 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013623207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013623271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 36, clofun2, 7, actives, x140421013623207, label, x140421013623271, params, body, x140421013623079);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013623079;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140421012995207 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013623207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013623271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 37, clofun2, 7, actives, x140421013623207, label, x140421013623271, params, body, x140421013623079);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[45]);
__arg2 = x140421013623079;
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
Obj x140421012995559 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013623207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013623271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 38, clofun2, 6, x140421013623207, label, x140421013623271, params, body, x140421013623079);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[43]);
__arg2 = x140421013623079;
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
Obj x140421012995943 = __arg1;
Obj x140421013623207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013623271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140421012513159 = makeCons(x140421013623207, label);
pushCont(co, 39, clofun2, 1, x140421013623079);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = x140421013623271;
__arg2 = x140421012513159;
__arg3 = params;
co->args[4] = x140421013623079;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140421012513191 = __arg1;
Obj x140421013623079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013623079;
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
Obj x140421013270631 = __arg1;
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
Obj x140421013270919 = __arg1;
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
Obj x140421013682599 = __arg1;
Obj x140421013682631 = __arg2;
Obj x140421013682663 = __arg3;
Obj x140421013682727 = co->args[4];
Obj x140421013390279 = PRIM_EQ(Nil, x140421013682727);
if (True == x140421013390279) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013390439 = PRIM_ISCONS(x140421013682727);
if (True == x140421013390439) {
Obj x140421013391015 = PRIM_CAR(x140421013682727);
Obj a = x140421013391015;
Obj x140421013392071 = PRIM_CDR(x140421013682727);
Obj b = x140421013392071;
pushCont(co, 44, clofun2, 4, x140421013682663, x140421013682599, x140421013682631, b);
__nargs = 4;
__arg0 = x140421013682599;
__arg1 = x140421013682631;
__arg2 = x140421013682663;
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
Obj x140421013392391 = __arg1;
Obj x140421013682663= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013682599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013682631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013392679 = PRIM_ADD(x140421013682663, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = x140421013682599;
__arg2 = x140421013682631;
__arg3 = x140421013392679;
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
Obj x140421013470087 = __arg1;
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
Obj x140421013470439 = __arg1;
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
Obj x140421013470599 = __arg1;
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
Obj x140421013471111 = __arg1;
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
Obj x140421013565095 = __arg1;
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
Obj x140421013467271 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013467463 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == x140421013467463) {
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
Obj x140421013468775 = __arg1;
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
Obj x140421013469095 = __arg1;
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
Obj x140421013468007 = __arg1;
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
Obj x140421013468391 = __arg1;
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
Obj x140421013563623 = __arg1;
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
Obj x140421013563943 = __arg1;
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
Obj x140421013564263 = __arg1;
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
Obj x140421013562023 = PRIM_SUB(maxid, label);
Obj x140421013562183 = primDiv(x140421013562023, globalRef(__symbolTable[51]));
Obj gid = x140421013562183;
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
Obj x140421013562407 = __arg1;
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
Obj x140421013680711 = __arg1;
Obj x140421013680807 = __arg2;
Obj x140421013680839 = __arg3;
Obj x140421013680871 = co->args[4];
Obj x140421013680903 = co->args[5];
Obj x140421013681479 = makeNative(36, clofun3, 0, 0);
Obj x140421011308423 = PRIM_ISCONS(x140421013680903);
if (True == x140421011308423) {
Obj x140421011275879 = PRIM_CAR(x140421013680903);
Obj x140421011275911 = PRIM_EQ(__symbolTable[67], x140421011275879);
if (True == x140421011275911) {
Obj x140421011276135 = PRIM_CDR(x140421013680903);
Obj x140421011276167 = PRIM_ISCONS(x140421011276135);
if (True == x140421011276167) {
Obj x140421011276391 = PRIM_CDR(x140421013680903);
Obj x140421011276423 = PRIM_CAR(x140421011276391);
Obj label = x140421011276423;
Obj x140421011276647 = PRIM_CDR(x140421013680903);
Obj x140421011276679 = PRIM_CDR(x140421011276647);
Obj stacks = x140421011276679;
Obj x140421011276903 = PRIM_EQ(stacks, Nil);
if (True == x140421011276903) {
pushCont(co, 25, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
__arg2 = makeCString("PUSH_CONT_0(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 14, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140421011279239 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421013681127 = PRIM_CAR(x140421013680807);
Obj x140421013681543 = PRIM_SUB(x140421013681127, label);
pushCont(co, 15, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = x140421013681543;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140421013681575 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 16, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013680871;
__arg2 = x140421013681575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140421013681895 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 17, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140421013682183 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421013683047 = PRIM_CAR(x140421013680807);
pushCont(co, 18, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = x140421013680871;
__arg2 = label;
__arg3 = x140421013683047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140421013683207 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013683719 = PRIM_EQ(stacks, Nil);
if (True == x140421013683719) {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
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
Obj x140421013684199 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
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
Obj x140421013623815 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 21, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013680871;
__arg2 = x140421013623815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140421013623911 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun3, 1, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(23, clofun3, 1, 3, x140421013680711, x140421013680807, x140421013680871);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140421013625159 = __arg1;
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
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
Obj x140421013624647 = __arg1;
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
Obj x140421011276999 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421011277351 = PRIM_CAR(x140421013680807);
Obj x140421011277383 = PRIM_SUB(x140421011277351, label);
pushCont(co, 26, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = x140421011277383;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140421011277415 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013680871;
__arg2 = x140421011277415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140421011277447 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun3, 5, label, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140421011277607 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421011277831 = PRIM_CAR(x140421013680807);
pushCont(co, 29, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = x140421013680871;
__arg2 = label;
__arg3 = x140421011277831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140421011277863 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421011278087 = PRIM_EQ(stacks, Nil);
if (True == x140421011278087) {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 30, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
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
Obj x140421011278311 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
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
Obj x140421011278535 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun3, 4, x140421013680711, x140421013680807, stacks, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013680871;
__arg2 = x140421011278535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140421011278567 = __arg1;
Obj x140421013680711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 1, x140421013680871);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(34, clofun3, 1, 3, x140421013680711, x140421013680807, x140421013680871);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140421011279079 = __arg1;
Obj x140421013680871= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013680871;
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
Obj x140421011278887 = __arg1;
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
Obj x140421011305639 = primGenSym();
Obj generate_45inst_45list_45h = x140421011305639;
Obj x140421011307687 = primSet(co, generate_45inst_45list_45h, makeNative(39, clofun3, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
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
Obj x140421011307847 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140421011307847;
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
Obj x140421011305991 = PRIM_EQ(Nil, x);
if (True == x140421011305991) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421011306151 = PRIM_ISCONS(x);
if (True == x140421011306151) {
Obj x140421011306311 = PRIM_CAR(x);
Obj a = x140421011306311;
Obj x140421011306471 = PRIM_CDR(x);
Obj b = x140421011306471;
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
Obj x140421011306759 = __arg1;
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
Obj x140421011307047 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011307079 = primNot(x140421011307047);
if (True == x140421011307079) {
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
Obj x140421011307591 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140421011307591;
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140421011307207 = __arg1;
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
Obj x140421011307399 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140421011307399;
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
Obj x140421013392903 = primGenSym();
Obj generate_45inst_45h = x140421013392903;
Obj x140421011305095 = primSet(co, generate_45inst_45h, makeNative(47, clofun3, 2, 4, self, generate_45inst_45h, globals, w));
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
Obj x140421011305255 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = x140421011305255;
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
Obj x140421013393351 = primIsSymbol(x2);
if (True == x140421013393351) {
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
Obj x140421013683303 = makeNative(1, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), env, closureRef(co, 2), x2, closureRef(co, 3));
Obj x140421011360423 = PRIM_ISCONS(x2);
if (True == x140421011360423) {
Obj x140421011360647 = PRIM_CAR(x2);
Obj x140421011360679 = PRIM_EQ(__symbolTable[98], x140421011360647);
if (True == x140421011360679) {
Obj x140421011360903 = PRIM_CDR(x2);
Obj x140421011360935 = PRIM_ISCONS(x140421011360903);
if (True == x140421011360935) {
Obj x140421011361159 = PRIM_CDR(x2);
Obj x140421011361191 = PRIM_CAR(x140421011361159);
Obj x = x140421011361191;
Obj x140421011361479 = PRIM_CDR(x2);
Obj x140421011361511 = PRIM_CDR(x140421011361479);
Obj x140421011361543 = PRIM_EQ(Nil, x140421011361511);
if (True == x140421011361543) {
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
__arg0 = x140421013683303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683303;
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
Obj x140421011361735 = __arg1;
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
Obj x140421011304679 = __arg1;
PUSH_CONT_0(co, 0, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 3);
__arg2 = x140421011304679;
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
Obj x140421011304711 = __arg1;
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
Obj x140421013683655 = makeNative(4, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4), closureRef(co, 5));
Obj x140421011358279 = PRIM_ISCONS(closureRef(co, 4));
if (True == x140421011358279) {
Obj x140421011358535 = PRIM_CAR(closureRef(co, 4));
Obj x140421011358567 = PRIM_EQ(__symbolTable[83], x140421011358535);
if (True == x140421011358567) {
Obj x140421011358823 = PRIM_CDR(closureRef(co, 4));
Obj x140421011358855 = PRIM_ISCONS(x140421011358823);
if (True == x140421011358855) {
Obj x140421011359111 = PRIM_CDR(closureRef(co, 4));
Obj x140421011359143 = PRIM_CAR(x140421011359111);
Obj idx = x140421011359143;
Obj x140421011359463 = PRIM_CDR(closureRef(co, 4));
Obj x140421011359495 = PRIM_CDR(x140421011359463);
Obj x140421011359527 = PRIM_EQ(Nil, x140421011359495);
if (True == x140421011359527) {
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
__arg0 = x140421013683655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140421011359719 = __arg1;
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
Obj x140421011359911 = __arg1;
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
Obj x140421013684007 = makeNative(7, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 3), closureRef(co, 5));
Obj x140421011366727 = PRIM_ISCONS(closureRef(co, 4));
if (True == x140421011366727) {
Obj x140421011367047 = PRIM_CAR(closureRef(co, 4));
Obj x140421011367079 = PRIM_EQ(__symbolTable[48], x140421011367047);
if (True == x140421011367079) {
Obj x140421011368935 = PRIM_CDR(closureRef(co, 4));
Obj x140421011368967 = PRIM_ISCONS(x140421011368935);
if (True == x140421011368967) {
Obj x140421011369223 = PRIM_CDR(closureRef(co, 4));
Obj x140421011369255 = PRIM_CAR(x140421011369223);
Obj idx = x140421011369255;
Obj x140421011369575 = PRIM_CDR(closureRef(co, 4));
Obj x140421011369607 = PRIM_CDR(x140421011369575);
Obj x140421011369639 = PRIM_EQ(Nil, x140421011369607);
if (True == x140421011369639) {
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
__arg0 = x140421013684007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x140421011369831 = __arg1;
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
Obj x140421011357735 = __arg1;
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
Obj x140421013622887 = makeNative(17, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 0), closureRef(co, 3), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2));
Obj x140421011499879 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140421011499879) {
Obj x140421011500135 = PRIM_CAR(closureRef(co, 3));
Obj x140421011500167 = PRIM_EQ(__symbolTable[101], x140421011500135);
if (True == x140421011500167) {
Obj x140421011500551 = PRIM_CDR(closureRef(co, 3));
Obj x140421011500711 = PRIM_ISCONS(x140421011500551);
if (True == x140421011500711) {
Obj x140421011500967 = PRIM_CDR(closureRef(co, 3));
Obj x140421011500999 = PRIM_CAR(x140421011500967);
Obj x = x140421011500999;
Obj x140421011439911 = PRIM_CDR(closureRef(co, 3));
Obj x140421011439943 = PRIM_CDR(x140421011439911);
Obj x140421011439975 = PRIM_EQ(Nil, x140421011439943);
if (True == x140421011439975) {
Obj x140421011440167 = primIsSymbol(x);
if (True == x140421011440167) {
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
__arg0 = x140421013622887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013622887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013622887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013622887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140421011441063 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421011441063) {
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
Obj x140421011441927 = primIsString(x);
if (True == x140421011441927) {
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
Obj x140421011442919 = PRIM_EQ(x, Nil);
if (True == x140421011442919) {
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
Obj x140421011443335 = PRIM_EQ(x, True);
if (True == x140421011443335) {
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
Obj x140421011443591 = PRIM_EQ(x, False);
if (True == x140421011443591) {
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
Obj x140421011442247 = __arg1;
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
Obj x140421011442503 = __arg1;
PUSH_CONT_0(co, 11, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = x140421011442503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140421011442535 = __arg1;
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
Obj x140421011441351 = __arg1;
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
Obj x140421011441543 = __arg1;
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
Obj x140421011440359 = __arg1;
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
Obj x140421011440679 = __arg1;
PUSH_CONT_0(co, 16, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = x140421011440679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140421011440743 = __arg1;
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
Obj x140421013623239 = makeNative(32, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 5), closureRef(co, 3));
Obj x140421011629319 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140421011629319) {
Obj x140421011629735 = PRIM_CAR(closureRef(co, 2));
Obj x140421011629767 = PRIM_EQ(__symbolTable[91], x140421011629735);
if (True == x140421011629767) {
Obj x140421011630279 = PRIM_CDR(closureRef(co, 2));
Obj x140421011630311 = PRIM_ISCONS(x140421011630279);
if (True == x140421011630311) {
Obj x140421011630695 = PRIM_CDR(closureRef(co, 2));
Obj x140421011630759 = PRIM_CAR(x140421011630695);
Obj a = x140421011630759;
Obj x140421011631399 = PRIM_CDR(closureRef(co, 2));
Obj x140421011631431 = PRIM_CDR(x140421011631399);
Obj x140421011631463 = PRIM_ISCONS(x140421011631431);
if (True == x140421011631463) {
Obj x140421011631847 = PRIM_CDR(closureRef(co, 2));
Obj x140421011631879 = PRIM_CDR(x140421011631847);
Obj x140421011632007 = PRIM_CAR(x140421011631879);
Obj b = x140421011632007;
Obj x140421011562951 = PRIM_CDR(closureRef(co, 2));
Obj x140421011562983 = PRIM_CDR(x140421011562951);
Obj x140421011563015 = PRIM_CDR(x140421011562983);
Obj x140421011563239 = PRIM_ISCONS(x140421011563015);
if (True == x140421011563239) {
Obj x140421011563783 = PRIM_CDR(closureRef(co, 2));
Obj x140421011563815 = PRIM_CDR(x140421011563783);
Obj x140421011563847 = PRIM_CDR(x140421011563815);
Obj x140421011563879 = PRIM_CAR(x140421011563847);
Obj c = x140421011563879;
Obj x140421011564679 = PRIM_CDR(closureRef(co, 2));
Obj x140421011564711 = PRIM_CDR(x140421011564679);
Obj x140421011564743 = PRIM_CDR(x140421011564711);
Obj x140421011564775 = PRIM_CDR(x140421011564743);
Obj x140421011564807 = PRIM_EQ(Nil, x140421011564775);
if (True == x140421011564807) {
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
__arg0 = x140421013623239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x140421011565159 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = x140421011565159;
Obj x140421011565479 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x140421011565479) {
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
Obj x140421011497671 = __arg1;
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
Obj x140421011498055 = __arg1;
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
Obj x140421011498311 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun4, 2, a, c);
__nargs = 3;
__arg0 = x140421011498311;
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
Obj x140421011498407 = __arg1;
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
Obj x140421011498663 = __arg1;
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
Obj x140421011498919 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011499047 = makeCons(a, closureRef(co, 5));
__nargs = 3;
__arg0 = x140421011498919;
__arg1 = c;
__arg2 = x140421011499047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140421011565607 = __arg1;
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
Obj x140421011565799 = __arg1;
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
Obj x140421011566023 = __arg1;
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
Obj x140421011566343 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 29, clofun4, 2, a, c);
__nargs = 3;
__arg0 = x140421011566343;
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
Obj x140421011566471 = __arg1;
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
Obj x140421011497095 = __arg1;
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
Obj x140421011497351 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011497479 = makeCons(a, closureRef(co, 5));
__nargs = 3;
__arg0 = x140421011497351;
__arg1 = c;
__arg2 = x140421011497479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140421013623943 = makeNative(39, clofun4, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 0), closureRef(co, 4), closureRef(co, 5));
Obj x140421011729703 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421011729703) {
Obj x140421011730023 = PRIM_CAR(closureRef(co, 1));
Obj x140421011730311 = PRIM_ISCONS(x140421011730023);
if (True == x140421011730311) {
Obj x140421011689799 = PRIM_CAR(closureRef(co, 1));
Obj x140421011689831 = PRIM_CAR(x140421011689799);
Obj x140421011689863 = PRIM_EQ(__symbolTable[95], x140421011689831);
if (True == x140421011689863) {
Obj x140421011690311 = PRIM_CAR(closureRef(co, 1));
Obj x140421011690343 = PRIM_CDR(x140421011690311);
Obj x140421011690375 = PRIM_ISCONS(x140421011690343);
if (True == x140421011690375) {
Obj x140421011690727 = PRIM_CAR(closureRef(co, 1));
Obj x140421011690759 = PRIM_CDR(x140421011690727);
Obj x140421011690855 = PRIM_CAR(x140421011690759);
Obj f = x140421011690855;
Obj x140421011691335 = PRIM_CAR(closureRef(co, 1));
Obj x140421011691399 = PRIM_CDR(x140421011691335);
Obj x140421011691495 = PRIM_CDR(x140421011691399);
Obj x140421011691527 = PRIM_EQ(Nil, x140421011691495);
if (True == x140421011691527) {
Obj x140421011691783 = PRIM_CDR(closureRef(co, 1));
Obj args = x140421011691783;
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
__arg0 = x140421013623943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140421011692103 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = x140421011692103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140421011692135 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011692455 = PRIM_EQ(f, __symbolTable[126]);
if (True == x140421011692455) {
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
Obj x140421011693479 = __arg1;
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
Obj x140421011628487 = __arg1;
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
Obj x140421011692679 = __arg1;
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
Obj x140421011693127 = __arg1;
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
Obj x140421013624391 = makeNative(49, clofun4, 0, 6, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5));
Obj x140421012040519 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140421012040519) {
Obj x140421012040871 = PRIM_CAR(closureRef(co, 2));
Obj x140421012040967 = PRIM_EQ(__symbolTable[92], x140421012040871);
if (True == x140421012040967) {
Obj x140421012041351 = PRIM_CDR(closureRef(co, 2));
Obj x140421012041383 = PRIM_ISCONS(x140421012041351);
if (True == x140421012041383) {
Obj x140421011767431 = PRIM_CDR(closureRef(co, 2));
Obj x140421011767463 = PRIM_CAR(x140421011767431);
Obj a = x140421011767463;
Obj x140421011767975 = PRIM_CDR(closureRef(co, 2));
Obj x140421011768007 = PRIM_CDR(x140421011767975);
Obj x140421011768039 = PRIM_ISCONS(x140421011768007);
if (True == x140421011768039) {
Obj x140421011768583 = PRIM_CDR(closureRef(co, 2));
Obj x140421011768615 = PRIM_CDR(x140421011768583);
Obj x140421011768647 = PRIM_CAR(x140421011768615);
Obj b = x140421011768647;
Obj x140421011769255 = PRIM_CDR(closureRef(co, 2));
Obj x140421011769287 = PRIM_CDR(x140421011769255);
Obj x140421011769351 = PRIM_CDR(x140421011769287);
Obj x140421011769511 = PRIM_ISCONS(x140421011769351);
if (True == x140421011769511) {
Obj x140421011769991 = PRIM_CDR(closureRef(co, 2));
Obj x140421011770183 = PRIM_CDR(x140421011769991);
Obj x140421011770215 = PRIM_CDR(x140421011770183);
Obj x140421011770247 = PRIM_CAR(x140421011770215);
Obj c = x140421011770247;
Obj x140421011770823 = PRIM_CDR(closureRef(co, 2));
Obj x140421011770855 = PRIM_CDR(x140421011770823);
Obj x140421011770983 = PRIM_CDR(x140421011770855);
Obj x140421011771015 = PRIM_CDR(x140421011770983);
Obj x140421011771207 = PRIM_EQ(Nil, x140421011771015);
if (True == x140421011771207) {
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
__arg0 = x140421013624391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj x140421011726375 = __arg1;
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
Obj x140421011726695 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun4, 2, b, c);
__nargs = 3;
__arg0 = x140421011726695;
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
Obj x140421011726759 = __arg1;
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
Obj x140421011727111 = __arg1;
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
Obj x140421011727431 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 1, c);
__nargs = 3;
__arg0 = x140421011727431;
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
Obj x140421011727623 = __arg1;
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
Obj x140421011727847 = __arg1;
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
Obj x140421011728135 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun4);
__nargs = 3;
__arg0 = x140421011728135;
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
Obj x140421011728199 = __arg1;
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
Obj x140421013625031 = makeNative(13, clofun5, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 5), closureRef(co, 0), closureRef(co, 4));
Obj x140421012097095 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421012097095) {
Obj x140421012097511 = PRIM_CAR(closureRef(co, 1));
Obj x140421012097543 = PRIM_EQ(__symbolTable[77], x140421012097511);
if (True == x140421012097543) {
Obj x140421012097959 = PRIM_CDR(closureRef(co, 1));
Obj x140421012097991 = PRIM_ISCONS(x140421012097959);
if (True == x140421012097991) {
Obj x140421012098503 = PRIM_CDR(closureRef(co, 1));
Obj x140421012098535 = PRIM_CAR(x140421012098503);
Obj label = x140421012098535;
Obj x140421012074503 = PRIM_CDR(closureRef(co, 1));
Obj x140421012074535 = PRIM_CDR(x140421012074503);
Obj x140421012074567 = PRIM_ISCONS(x140421012074535);
if (True == x140421012074567) {
Obj x140421012075111 = PRIM_CDR(closureRef(co, 1));
Obj x140421012075143 = PRIM_CDR(x140421012075111);
Obj x140421012075175 = PRIM_CAR(x140421012075143);
Obj nargs = x140421012075175;
Obj x140421012075751 = PRIM_CDR(closureRef(co, 1));
Obj x140421012075783 = PRIM_CDR(x140421012075751);
Obj x140421012075815 = PRIM_CDR(x140421012075783);
Obj frees = x140421012075815;
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
__arg0 = x140421013625031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625031;
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
Obj x140421012076039 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421012076775 = PRIM_CAR(closureRef(co, 3));
Obj x140421012076807 = PRIM_SUB(x140421012076775, label);
pushCont(co, 1, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = x140421012076807;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140421012076839 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = x140421012076839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140421012076871 = __arg1;
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
Obj x140421012077159 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421012077575 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 4, clofun5, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 5);
__arg2 = label;
__arg3 = x140421012077575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140421012077607 = __arg1;
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
Obj x140421012078023 = __arg1;
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
Obj x140421012037863 = __arg1;
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
Obj x140421012038215 = __arg1;
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
Obj x140421012038535 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 9, clofun5, 1, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = x140421012038535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140421012038695 = __arg1;
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
Obj x140421012039047 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012039079 = primNot(x140421012039047);
if (True == x140421012039079) {
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
Obj x140421012039463 = __arg1;
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
Obj x140421012039719 = __arg1;
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
Obj x140421013625511 = makeNative(18, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 3));
Obj x140421012120007 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140421012120007) {
Obj x140421012120551 = PRIM_CAR(closureRef(co, 2));
Obj x140421012120583 = PRIM_EQ(__symbolTable[90], x140421012120551);
if (True == x140421012120583) {
Obj x140421012121063 = PRIM_CDR(closureRef(co, 2));
Obj x140421012121095 = PRIM_ISCONS(x140421012121063);
if (True == x140421012121095) {
Obj x140421012121383 = PRIM_CDR(closureRef(co, 2));
Obj x140421012121415 = PRIM_CAR(x140421012121383);
Obj a = x140421012121415;
Obj x140421012122279 = PRIM_CDR(closureRef(co, 2));
Obj x140421012122311 = PRIM_CDR(x140421012122279);
Obj x140421012122343 = PRIM_ISCONS(x140421012122311);
if (True == x140421012122343) {
Obj x140421012122887 = PRIM_CDR(closureRef(co, 2));
Obj x140421012123047 = PRIM_CDR(x140421012122887);
Obj x140421012123079 = PRIM_CAR(x140421012123047);
Obj b = x140421012123079;
Obj x140421012123591 = PRIM_CDR(closureRef(co, 2));
Obj x140421012123623 = PRIM_CDR(x140421012123591);
Obj x140421012095175 = PRIM_CDR(x140421012123623);
Obj x140421012095303 = PRIM_EQ(Nil, x140421012095175);
if (True == x140421012095303) {
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
__arg0 = x140421013625511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140421012095559 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 1, b);
__nargs = 3;
__arg0 = x140421012095559;
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
Obj x140421012095719 = __arg1;
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
Obj x140421012095911 = __arg1;
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
Obj x140421012096263 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = x140421012096263;
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
Obj x140421013625959 = makeNative(28, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140421012515815 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421012515815) {
Obj x140421012516135 = PRIM_CAR(closureRef(co, 1));
Obj x140421012516167 = PRIM_EQ(__symbolTable[78], x140421012516135);
if (True == x140421012516167) {
Obj x140421012516487 = PRIM_CDR(closureRef(co, 1));
Obj x140421012516551 = PRIM_ISCONS(x140421012516487);
if (True == x140421012516551) {
Obj x140421012389927 = PRIM_CDR(closureRef(co, 1));
Obj x140421012389959 = PRIM_CAR(x140421012389927);
Obj x = x140421012389959;
Obj x140421012390375 = PRIM_CDR(closureRef(co, 1));
Obj x140421012390407 = PRIM_CDR(x140421012390375);
Obj x140421012390567 = PRIM_EQ(Nil, x140421012390407);
if (True == x140421012390567) {
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
__arg0 = x140421013625959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj x140421012390855 = __arg1;
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
Obj x140421012391207 = __arg1;
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
Obj x140421012391495 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 22, clofun5);
__nargs = 3;
__arg0 = x140421012391495;
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
Obj x140421012391559 = __arg1;
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
Obj x140421012391815 = __arg1;
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
Obj x140421012392167 = __arg1;
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
Obj x140421012392519 = __arg1;
Obj x140421012392935 = PRIM_CDR(closureRef(co, 4));
Obj x140421012393127 = PRIM_CAR(closureRef(co, 4));
PUSH_CONT_0(co, 26, clofun5);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 5);
__arg2 = x140421012392935;
__arg3 = x140421012393127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140421012393159 = __arg1;
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
Obj x140421012393543 = __arg1;
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
Obj x140421013626311 = makeNative(30, clofun5, 0, 6, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5));
Obj x140421012995655 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140421012995655) {
Obj x140421012512775 = PRIM_CAR(closureRef(co, 3));
Obj x140421012512807 = PRIM_EQ(__symbolTable[80], x140421012512775);
if (True == x140421012512807) {
Obj x140421012513319 = PRIM_CDR(closureRef(co, 3));
Obj x140421012513479 = PRIM_ISCONS(x140421012513319);
if (True == x140421012513479) {
Obj x140421012513863 = PRIM_CDR(closureRef(co, 3));
Obj x140421012514055 = PRIM_CAR(x140421012513863);
Obj exp = x140421012514055;
Obj x140421012514855 = PRIM_CDR(closureRef(co, 3));
Obj x140421012514887 = PRIM_CDR(x140421012514855);
Obj x140421012514919 = PRIM_EQ(Nil, x140421012514887);
if (True == x140421012514919) {
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
__arg0 = x140421013626311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140421012515111 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = x140421012515111;
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
Obj x140421013626663 = makeNative(33, clofun5, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140421013092647 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013092647) {
Obj x140421013092967 = PRIM_CAR(closureRef(co, 0));
Obj x140421013092999 = PRIM_EQ(__symbolTable[79], x140421013092967);
if (True == x140421013092999) {
Obj x140421013093543 = PRIM_CDR(closureRef(co, 0));
Obj x140421013093575 = PRIM_ISCONS(x140421013093543);
if (True == x140421013093575) {
Obj x140421013094183 = PRIM_CDR(closureRef(co, 0));
Obj x140421013094215 = PRIM_CAR(x140421013094183);
Obj exp = x140421013094215;
Obj x140421012992487 = PRIM_CDR(closureRef(co, 0));
Obj x140421012992551 = PRIM_CDR(x140421012992487);
Obj x140421012992615 = PRIM_ISCONS(x140421012992551);
if (True == x140421012992615) {
Obj x140421012993159 = PRIM_CDR(closureRef(co, 0));
Obj x140421012993191 = PRIM_CDR(x140421012993159);
Obj x140421012993223 = PRIM_CAR(x140421012993191);
Obj cont = x140421012993223;
Obj x140421012993831 = PRIM_CDR(closureRef(co, 0));
Obj x140421012993863 = PRIM_CDR(x140421012993831);
Obj x140421012993927 = PRIM_CDR(x140421012993863);
Obj x140421012993959 = PRIM_EQ(Nil, x140421012993927);
if (True == x140421012993959) {
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
__arg0 = x140421013626663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140421012994407 = __arg1;
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
Obj x140421012994791 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = x140421012994791;
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
Obj x140421013273319 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013273319) {
Obj x140421013273511 = PRIM_CAR(closureRef(co, 0));
Obj f = x140421013273511;
Obj x140421013273735 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421013273735;
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
Obj x140421013273991 = __arg1;
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
Obj x140421013107367 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013107591 = PRIM_ADD(MAKE_NUMBER(1), x140421013107367);
pushCont(co, 36, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 3);
__arg2 = x140421013107591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140421013107623 = __arg1;
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
Obj x140421013108615 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013109255 = makeCons(f, args);
PUSH_CONT_0(co, 38, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = MAKE_NUMBER(0);
co->args[5] = x140421013109255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140421013110023 = __arg1;
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
Obj x140421013110279 = __arg1;
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
Obj x140421013110663 = __arg1;
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
Obj x140421013090535 = __arg1;
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
Obj x140421013090887 = __arg1;
Obj x140421013091399 = PRIM_CDR(closureRef(co, 2));
Obj x140421013091591 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT_0(co, 43, clofun5);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 3);
__arg2 = x140421013091399;
__arg3 = x140421013091591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140421013091623 = __arg1;
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
Obj x140421013091911 = __arg1;
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
Obj x140421013390247 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140421013390247) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013390471 = PRIM_CAR(globals);
Obj x140421013390727 = PRIM_EQ(sym, x140421013390471);
if (True == x140421013390727) {
__nargs = 2;
__arg1 = idx;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013390983 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x140421013391079 = PRIM_CDR(globals);
__nargs = 4;
__arg0 = globalRef(__symbolTable[57]);
__arg1 = x140421013390983;
__arg2 = sym;
__arg3 = x140421013391079;
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
Obj x140421013470823 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = x140421013470823;
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
Obj x140421013470983 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140421013470983) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013389415 = makeCons(sym, val);
Obj x140421013389543 = primSet(co, globals, x140421013389415);
__nargs = 2;
__arg1 = x140421013389543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj x140421013681063 = __arg1;
Obj x140421013681095 = __arg2;
Obj x140421013681191 = __arg3;
Obj x140421013681223 = co->args[4];
Obj x140421013681287 = co->args[5];
Obj x140421013563655 = PRIM_EQ(Nil, x140421013681287);
if (True == x140421013563655) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013563911 = PRIM_ISCONS(x140421013681287);
if (True == x140421013563911) {
Obj x140421013564135 = PRIM_CAR(x140421013681287);
Obj x = x140421013564135;
Obj x140421013564359 = PRIM_CDR(x140421013681287);
Obj more = x140421013564359;
Obj x140421013564807 = PRIM_GT(x140421013681223, MAKE_NUMBER(3));
Obj x140421013564839 = primNot(x140421013564807);
if (True == x140421013564839) {
pushCont(co, 8, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 2, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
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
Obj x140421013468487 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 3, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013681191;
__arg2 = x140421013681223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140421013468743 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 4, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140421013468839 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 5, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140421013469127 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 6, clofun6, 5, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = x140421013681063;
__arg2 = x140421013681095;
__arg3 = Nil;
co->args[4] = x140421013681191;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140421013469383 = __arg1;
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 7, clofun6, 5, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140421013469703 = __arg1;
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421013469927 = PRIM_ADD(x140421013681223, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = x140421013681063;
__arg2 = x140421013681095;
__arg3 = x140421013681191;
co->args[4] = x140421013469927;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140421013565191 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 9, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = x140421013681191;
__arg2 = x140421013681223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140421013565287 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 10, clofun6, 6, x, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140421013467335 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 11, clofun6, 5, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = x140421013681063;
__arg2 = x140421013681095;
__arg3 = Nil;
co->args[4] = x140421013681191;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140421013467591 = __arg1;
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 12, clofun6, 5, x140421013681223, x140421013681063, x140421013681095, x140421013681191, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = x140421013681191;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140421013467975 = __arg1;
Obj x140421013681223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013681063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013681095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421013681191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140421013468135 = PRIM_ADD(x140421013681223, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = x140421013681063;
__arg2 = x140421013681095;
__arg3 = x140421013681191;
co->args[4] = x140421013468135;
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
Obj x140421013562055 = primGenSym();
Obj tmp = x140421013562055;
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
Obj x140421013562727 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013562823 = makeCons(x140421013562727, Nil);
Obj x140421013562855 = makeCons(x, x140421013562823);
Obj x140421013562887 = makeCons(tmp, x140421013562855);
Obj x140421013562951 = makeCons(__symbolTable[91], x140421013562887);
__nargs = 2;
__arg1 = x140421013562951;
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
Obj x140421013624999 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = x140421013624999;
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
Obj x140421013625255 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = x140421013625255;
Obj x140421013625895 = makeCons(val, Nil);
Obj x140421013625991 = makeCons(idx, x140421013625895);
Obj x140421013626023 = makeCons(x140421013625991, cur);
Obj cur1 = x140421013626023;
Obj x140421013626599 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 18, clofun6, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(__symbolTable[63]);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = x140421013626599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140421013626631 = __arg1;
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
Obj x140421013563047 = __arg1;
Obj x140421013563079 = __arg2;
Obj x140421013563271 = makeNative(26, clofun6, 0, 2, x140421013563047, x140421013563079);
Obj x140421011440551 = PRIM_ISCONS(x140421013563079);
if (True == x140421011440551) {
Obj x140421011440711 = PRIM_CAR(x140421013563079);
Obj clo_45or_45cont = x140421011440711;
Obj x140421011440935 = PRIM_CDR(x140421013563079);
Obj x140421011440967 = PRIM_ISCONS(x140421011440935);
if (True == x140421011440967) {
Obj x140421011441255 = PRIM_CDR(x140421013563079);
Obj x140421011441287 = PRIM_CAR(x140421011441255);
Obj x140421011441319 = PRIM_ISCONS(x140421011441287);
if (True == x140421011441319) {
Obj x140421011441671 = PRIM_CDR(x140421013563079);
Obj x140421011441703 = PRIM_CAR(x140421011441671);
Obj x140421011441735 = PRIM_CAR(x140421011441703);
Obj x140421011441767 = PRIM_EQ(__symbolTable[94], x140421011441735);
if (True == x140421011441767) {
Obj x140421011442119 = PRIM_CDR(x140421013563079);
Obj x140421011442151 = PRIM_CAR(x140421011442119);
Obj x140421011442183 = PRIM_CDR(x140421011442151);
Obj x140421011442215 = PRIM_ISCONS(x140421011442183);
if (True == x140421011442215) {
Obj x140421011442567 = PRIM_CDR(x140421013563079);
Obj x140421011442599 = PRIM_CAR(x140421011442567);
Obj x140421011442631 = PRIM_CDR(x140421011442599);
Obj x140421011442663 = PRIM_CAR(x140421011442631);
Obj params = x140421011442663;
Obj x140421011443079 = PRIM_CDR(x140421013563079);
Obj x140421011443111 = PRIM_CAR(x140421011443079);
Obj x140421011443143 = PRIM_CDR(x140421011443111);
Obj x140421011443175 = PRIM_CDR(x140421011443143);
Obj x140421011443207 = PRIM_ISCONS(x140421011443175);
if (True == x140421011443207) {
Obj x140421011443623 = PRIM_CDR(x140421013563079);
Obj x140421011443655 = PRIM_CAR(x140421011443623);
Obj x140421011443687 = PRIM_CDR(x140421011443655);
Obj x140421011365895 = PRIM_CDR(x140421011443687);
Obj x140421011365927 = PRIM_CAR(x140421011365895);
Obj body = x140421011365927;
Obj x140421011366407 = PRIM_CDR(x140421013563079);
Obj x140421011366439 = PRIM_CAR(x140421011366407);
Obj x140421011366471 = PRIM_CDR(x140421011366439);
Obj x140421011366503 = PRIM_CDR(x140421011366471);
Obj x140421011366535 = PRIM_CDR(x140421011366503);
Obj x140421011366567 = PRIM_EQ(Nil, x140421011366535);
if (True == x140421011366567) {
Obj x140421011366791 = PRIM_CDR(x140421013563079);
Obj x140421011366823 = PRIM_CDR(x140421011366791);
Obj fvs = x140421011366823;
Obj x140421013680935 = makeNative(20, clofun6, 1, 6, body, x140421013563047, params, clo_45or_45cont, fvs, x140421013563271);
Obj x140421013683751 = PRIM_EQ(clo_45or_45cont, __symbolTable[77]);
if (True == x140421013683751) {
__nargs = 2;
__arg0 = x140421013680935;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013683911 = PRIM_EQ(clo_45or_45cont, __symbolTable[67]);
if (True == x140421013683911) {
__nargs = 2;
__arg0 = x140421013680935;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421013680935;
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
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140421013681031 = __arg1;
if (True == x140421013681031) {
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
Obj x140421011367239 = __arg1;
Obj body1 = x140421011367239;
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
Obj x140421011367431 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = x140421011367431;
Obj x140421011367623 = PRIM_EQ(closureRef(co, 3), __symbolTable[77]);
if (True == x140421011367623) {
Obj x140421011368103 = makeCons(body1, Nil);
Obj x140421011368135 = makeCons(Nil, x140421011368103);
Obj x140421011368167 = makeCons(closureRef(co, 2), x140421011368135);
Obj x140421011368199 = makeCons(__symbolTable[94], x140421011368167);
pushCont(co, 24, clofun6, 1, cur);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = closureRef(co, 1);
__arg2 = x140421011368199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013682311 = makeCons(body1, Nil);
Obj x140421013682343 = makeCons(closureRef(co, 4), x140421013682311);
Obj x140421013682407 = makeCons(closureRef(co, 2), x140421013682343);
Obj x140421013682471 = makeCons(__symbolTable[94], x140421013682407);
pushCont(co, 23, clofun6, 1, cur);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = closureRef(co, 1);
__arg2 = x140421013682471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140421013682503 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013682983 = makeCons(cur, closureRef(co, 4));
Obj x140421013683015 = makeCons(closureRef(co, 3), x140421013682983);
__nargs = 2;
__arg1 = x140421013683015;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x140421011368231 = __arg1;
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
Obj x140421011368583 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011368647 = makeCons(x140421011368583, closureRef(co, 4));
Obj x140421011368679 = makeCons(cur, x140421011368647);
Obj x140421011368711 = makeCons(closureRef(co, 3), x140421011368679);
__nargs = 2;
__arg1 = x140421011368711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x140421011440103 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421011440103) {
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
Obj x140421013624935 = __arg1;
Obj x140421013624967 = __arg2;
pushCont(co, 29, clofun6, 2, x140421013624967, x140421013624935);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = x140421013624967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140421011691367 = __arg1;
Obj x140421013624967= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013624935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421011691367) {
__nargs = 2;
__arg1 = x140421013624967;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421011691591 = primIsSymbol(x140421013624967);
if (True == x140421011691591) {
__nargs = 2;
__arg1 = x140421013624967;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013625767 = makeNative(31, clofun6, 0, 2, x140421013624967, x140421013624935);
Obj x140421011498375 = PRIM_ISCONS(x140421013624967);
if (True == x140421011498375) {
Obj x140421011498599 = PRIM_CAR(x140421013624967);
Obj x140421011498631 = PRIM_EQ(__symbolTable[94], x140421011498599);
if (True == x140421011498631) {
Obj x140421011498855 = PRIM_CDR(x140421013624967);
Obj x140421011498887 = PRIM_ISCONS(x140421011498855);
if (True == x140421011498887) {
Obj x140421011499111 = PRIM_CDR(x140421013624967);
Obj x140421011499143 = PRIM_CAR(x140421011499111);
Obj args = x140421011499143;
Obj x140421011499431 = PRIM_CDR(x140421013624967);
Obj x140421011499463 = PRIM_CDR(x140421011499431);
Obj x140421011499495 = PRIM_ISCONS(x140421011499463);
if (True == x140421011499495) {
Obj x140421011499783 = PRIM_CDR(x140421013624967);
Obj x140421011499815 = PRIM_CDR(x140421011499783);
Obj x140421011499847 = PRIM_CAR(x140421011499815);
Obj body = x140421011499847;
Obj x140421011500199 = PRIM_CDR(x140421013624967);
Obj x140421011500231 = PRIM_CDR(x140421011500199);
Obj x140421011500263 = PRIM_CDR(x140421011500231);
Obj x140421011500295 = PRIM_EQ(Nil, x140421011500263);
if (True == x140421011500295) {
pushCont(co, 30, clofun6, 1, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = x140421013624935;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013625767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625767;
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
Obj x140421011500583 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011500615 = makeCons(x140421011500583, Nil);
Obj x140421011500647 = makeCons(args, x140421011500615);
Obj x140421011500679 = makeCons(__symbolTable[94], x140421011500647);
__nargs = 2;
__arg1 = x140421011500679;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x140421013626439 = makeNative(37, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421011632039 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011632039) {
Obj x140421011562759 = PRIM_CAR(closureRef(co, 0));
Obj x140421011562791 = PRIM_EQ(__symbolTable[81], x140421011562759);
if (True == x140421011562791) {
Obj x140421011563047 = PRIM_CDR(closureRef(co, 0));
Obj x140421011563079 = PRIM_ISCONS(x140421011563047);
if (True == x140421011563079) {
Obj x140421011563463 = PRIM_CDR(closureRef(co, 0));
Obj x140421011563591 = PRIM_CAR(x140421011563463);
Obj val = x140421011563591;
Obj x140421011563911 = PRIM_CDR(closureRef(co, 0));
Obj x140421011563943 = PRIM_CDR(x140421011563911);
Obj x140421011563975 = PRIM_ISCONS(x140421011563943);
if (True == x140421011563975) {
Obj x140421011564391 = PRIM_CDR(closureRef(co, 0));
Obj x140421011564423 = PRIM_CDR(x140421011564391);
Obj x140421011564455 = PRIM_CAR(x140421011564423);
Obj body = x140421011564455;
Obj x140421011564967 = PRIM_CDR(closureRef(co, 0));
Obj x140421011564999 = PRIM_CDR(x140421011564967);
Obj x140421011565031 = PRIM_CDR(x140421011564999);
Obj x140421011566407 = PRIM_EQ(Nil, x140421011565031);
if (True == x140421011566407) {
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
__arg0 = x140421013626439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140421011496999 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun6, 2, body, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = x140421011496999;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140421011497031 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = x140421011497031;
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
Obj x140421011497287 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421011497287;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140421011497319 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = x140421011497319;
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
Obj x140421011497735 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011497767 = makeCons(x140421011497735, Nil);
Obj x140421011497799 = makeCons(val, x140421011497767);
Obj x140421011497831 = makeCons(__symbolTable[94], x140421011497799);
Obj x140421011497863 = makeCons(x140421011497831, fvs2);
Obj x140421011497895 = makeCons(__symbolTable[67], x140421011497863);
__nargs = 2;
__arg1 = x140421011497895;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x140421013561767 = makeNative(41, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421011693511 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011693511) {
Obj x140421011628359 = PRIM_CAR(closureRef(co, 0));
Obj x140421011628391 = PRIM_EQ(__symbolTable[79], x140421011628359);
if (True == x140421011628391) {
Obj x140421011628679 = PRIM_CDR(closureRef(co, 0));
Obj x140421011628711 = PRIM_ISCONS(x140421011628679);
if (True == x140421011628711) {
Obj x140421011628999 = PRIM_CDR(closureRef(co, 0));
Obj x140421011629031 = PRIM_CAR(x140421011628999);
Obj exp = x140421011629031;
Obj x140421011629415 = PRIM_CDR(closureRef(co, 0));
Obj x140421011629447 = PRIM_CDR(x140421011629415);
Obj x140421011629479 = PRIM_ISCONS(x140421011629447);
if (True == x140421011629479) {
Obj x140421011629927 = PRIM_CDR(closureRef(co, 0));
Obj x140421011629959 = PRIM_CDR(x140421011629927);
Obj x140421011629991 = PRIM_CAR(x140421011629959);
Obj cont = x140421011629991;
Obj x140421011630471 = PRIM_CDR(closureRef(co, 0));
Obj x140421011630503 = PRIM_CDR(x140421011630471);
Obj x140421011630535 = PRIM_CDR(x140421011630503);
Obj x140421011630567 = PRIM_EQ(Nil, x140421011630535);
if (True == x140421011630567) {
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
__arg0 = x140421013561767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013561767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013561767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013561767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013561767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140421011630919 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun6, 1, cont);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421011630919;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140421011630951 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 40, clofun6, 1, x140421011630951);
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
Obj x140421011631207 = __arg1;
Obj x140421011630951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011631239 = makeCons(x140421011631207, Nil);
Obj x140421011631335 = makeCons(x140421011630951, x140421011631239);
Obj x140421011631367 = makeCons(__symbolTable[79], x140421011631335);
__nargs = 2;
__arg1 = x140421011631367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x140421011692327 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011692327) {
Obj x140421011692519 = PRIM_CAR(closureRef(co, 0));
Obj f = x140421011692519;
Obj x140421011692775 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421011692775;
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
Obj x140421011693063 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011693159 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421011693063;
__arg2 = x140421011693159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140421013623591 = __arg1;
Obj x140421013623623 = __arg2;
Obj x140421013623655 = __arg3;
Obj x140421011727495 = PRIM_EQ(Nil, x140421013623591);
if (True == x140421011727495) {
pushCont(co, 45, clofun6, 1, x140421013623655);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = x140421013623623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421011690119 = PRIM_ISCONS(x140421013623591);
if (True == x140421011690119) {
Obj x140421011690279 = PRIM_CAR(x140421013623591);
Obj hd = x140421011690279;
Obj x140421011690439 = PRIM_CDR(x140421013623591);
Obj tl = x140421011690439;
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = hd;
__arg2 = makeNative(44, clofun6, 1, 3, tl, x140421013623623, x140421013623655);
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
Obj x140421011690791 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = closureRef(co, 0);
__arg2 = x140421011690791;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140421011727751 = __arg1;
Obj x140421013623655= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = x140421011727751;
Obj x140421013680647 = makeNative(48, clofun6, 1, 2, exp, x140421013623655);
Obj x140421011689671 = PRIM_CAR(exp);
pushCont(co, 46, clofun6, 2, exp, x140421013680647);
__nargs = 2;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = x140421011689671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140421011689703 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013680647= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421011689703) {
pushCont(co, 47, clofun6, 1, x140421013680647);
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
__arg0 = x140421013680647;
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
Obj x140421011689927 = __arg1;
Obj x140421013680647= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011689959 = PRIM_EQ(x140421011689927, __symbolTable[95]);
if (True == x140421011689959) {
__nargs = 2;
__arg0 = x140421013680647;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421013680647;
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
Obj x140421013680679 = __arg1;
if (True == x140421013680679) {
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
Obj x140421011728359 = PRIM_EQ(closureRef(co, 1), globalRef(__symbolTable[75]));
if (True == x140421011728359) {
Obj x140421011728615 = makeCons(closureRef(co, 0), Nil);
Obj x140421011728647 = makeCons(__symbolTable[80], x140421011728615);
__nargs = 2;
__arg1 = x140421011728647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421011729287 = primGenSym();
Obj val = x140421011729287;
Obj x140421011729863 = makeCons(val, Nil);
pushCont(co, 49, clofun6, 1, x140421011729863);
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
Obj x140421011730055 = __arg1;
Obj x140421011729863= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421011730087 = makeCons(x140421011730055, Nil);
Obj x140421011730119 = makeCons(x140421011729863, x140421011730087);
Obj x140421011730151 = makeCons(__symbolTable[81], x140421011730119);
Obj x140421011730215 = makeCons(x140421011730151, Nil);
Obj x140421011730247 = makeCons(closureRef(co, 0), x140421011730215);
Obj x140421011730279 = makeCons(__symbolTable[79], x140421011730247);
__nargs = 2;
__arg1 = x140421011730279;
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
Obj x140421013680199 = __arg1;
Obj x140421013680263 = __arg2;
Obj x140421013680487 = makeNative(2, clofun7, 1, 2, x140421013680199, x140421013680263);
Obj x140421011726823 = primIsSymbol(x140421013680199);
if (True == x140421011726823) {
__nargs = 2;
__arg0 = x140421013680487;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 1, clofun7, 1, x140421013680487);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = x140421013680199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140421011727047 = __arg1;
Obj x140421013680487= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421011727047) {
__nargs = 2;
__arg0 = x140421013680487;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421013680487;
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
Obj x140421013680519 = __arg1;
if (True == x140421013680519) {
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
Obj x140421012516519 = __arg1;
if (True == x140421012516519) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013681159 = makeNative(7, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421012040743 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012040743) {
Obj x140421012041063 = PRIM_CAR(closureRef(co, 0));
Obj x140421012041095 = PRIM_EQ(__symbolTable[92], x140421012041063);
if (True == x140421012041095) {
Obj x140421012041415 = PRIM_CDR(closureRef(co, 0));
Obj x140421012041447 = PRIM_ISCONS(x140421012041415);
if (True == x140421012041447) {
Obj x140421011767367 = PRIM_CDR(closureRef(co, 0));
Obj x140421011767399 = PRIM_CAR(x140421011767367);
Obj a = x140421011767399;
Obj x140421011767751 = PRIM_CDR(closureRef(co, 0));
Obj x140421011767783 = PRIM_CDR(x140421011767751);
Obj x140421011767815 = PRIM_ISCONS(x140421011767783);
if (True == x140421011767815) {
Obj x140421011768263 = PRIM_CDR(closureRef(co, 0));
Obj x140421011768295 = PRIM_CDR(x140421011768263);
Obj x140421011768327 = PRIM_CAR(x140421011768295);
Obj b = x140421011768327;
Obj x140421011768775 = PRIM_CDR(closureRef(co, 0));
Obj x140421011768903 = PRIM_CDR(x140421011768775);
Obj x140421011768935 = PRIM_CDR(x140421011768903);
Obj x140421011768967 = PRIM_ISCONS(x140421011768935);
if (True == x140421011768967) {
Obj x140421011769383 = PRIM_CDR(closureRef(co, 0));
Obj x140421011769415 = PRIM_CDR(x140421011769383);
Obj x140421011769447 = PRIM_CDR(x140421011769415);
Obj x140421011769479 = PRIM_CAR(x140421011769447);
Obj c = x140421011769479;
Obj x140421011770023 = PRIM_CDR(closureRef(co, 0));
Obj x140421011770055 = PRIM_CDR(x140421011770023);
Obj x140421011770087 = PRIM_CDR(x140421011770055);
Obj x140421011770119 = PRIM_CDR(x140421011770087);
Obj x140421011770151 = PRIM_EQ(Nil, x140421011770119);
if (True == x140421011770151) {
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
__arg0 = x140421013681159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681159;
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
Obj x140421011770727 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun7, 2, x140421011770727, ra);
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
Obj x140421011771047 = __arg1;
Obj x140421011770727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421011771079 = makeCons(x140421011771047, Nil);
Obj x140421011771111 = makeCons(x140421011770727, x140421011771079);
Obj x140421011771143 = makeCons(ra, x140421011771111);
Obj x140421011771175 = makeCons(__symbolTable[92], x140421011771143);
__nargs = 2;
__arg1 = x140421011771175;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x140421013682087 = makeNative(10, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421012077031 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012077031) {
Obj x140421012077351 = PRIM_CAR(closureRef(co, 0));
Obj x140421012077383 = PRIM_EQ(__symbolTable[90], x140421012077351);
if (True == x140421012077383) {
Obj x140421012077671 = PRIM_CDR(closureRef(co, 0));
Obj x140421012077703 = PRIM_ISCONS(x140421012077671);
if (True == x140421012077703) {
Obj x140421012078279 = PRIM_CDR(closureRef(co, 0));
Obj x140421012078535 = PRIM_CAR(x140421012078279);
Obj a = x140421012078535;
Obj x140421012038087 = PRIM_CDR(closureRef(co, 0));
Obj x140421012038119 = PRIM_CDR(x140421012038087);
Obj x140421012038151 = PRIM_ISCONS(x140421012038119);
if (True == x140421012038151) {
Obj x140421012038567 = PRIM_CDR(closureRef(co, 0));
Obj x140421012038599 = PRIM_CDR(x140421012038567);
Obj x140421012038663 = PRIM_CAR(x140421012038599);
Obj b = x140421012038663;
Obj x140421012039143 = PRIM_CDR(closureRef(co, 0));
Obj x140421012039175 = PRIM_CDR(x140421012039143);
Obj x140421012039207 = PRIM_CDR(x140421012039175);
Obj x140421012039239 = PRIM_EQ(Nil, x140421012039207);
if (True == x140421012039239) {
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
__arg0 = x140421013682087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682087;
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
Obj x140421012039559 = primIsSymbol(ra);
if (True == x140421012039559) {
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
Obj x140421012040039 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012040071 = makeCons(x140421012040039, Nil);
Obj x140421012040103 = makeCons(ra, x140421012040071);
Obj x140421012040135 = makeCons(__symbolTable[90], x140421012040103);
__nargs = 2;
__arg1 = x140421012040135;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x140421013682791 = makeNative(13, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421012096167 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012096167) {
Obj x140421012096423 = PRIM_CAR(closureRef(co, 0));
Obj x140421012096455 = PRIM_EQ(__symbolTable[91], x140421012096423);
if (True == x140421012096455) {
Obj x140421012096871 = PRIM_CDR(closureRef(co, 0));
Obj x140421012096903 = PRIM_ISCONS(x140421012096871);
if (True == x140421012096903) {
Obj x140421012097159 = PRIM_CDR(closureRef(co, 0));
Obj x140421012097223 = PRIM_CAR(x140421012097159);
Obj a = x140421012097223;
Obj x140421012097607 = PRIM_CDR(closureRef(co, 0));
Obj x140421012097639 = PRIM_CDR(x140421012097607);
Obj x140421012097671 = PRIM_ISCONS(x140421012097639);
if (True == x140421012097671) {
Obj x140421012098119 = PRIM_CDR(closureRef(co, 0));
Obj x140421012098151 = PRIM_CDR(x140421012098119);
Obj x140421012098183 = PRIM_CAR(x140421012098151);
Obj b = x140421012098183;
Obj x140421012098695 = PRIM_CDR(closureRef(co, 0));
Obj x140421012098727 = PRIM_CDR(x140421012098695);
Obj x140421012098759 = PRIM_CDR(x140421012098727);
Obj x140421012098855 = PRIM_ISCONS(x140421012098759);
if (True == x140421012098855) {
Obj x140421012074663 = PRIM_CDR(closureRef(co, 0));
Obj x140421012074695 = PRIM_CDR(x140421012074663);
Obj x140421012074759 = PRIM_CDR(x140421012074695);
Obj x140421012074791 = PRIM_CAR(x140421012074759);
Obj c = x140421012074791;
Obj x140421012075367 = PRIM_CDR(closureRef(co, 0));
Obj x140421012075399 = PRIM_CDR(x140421012075367);
Obj x140421012075431 = PRIM_CDR(x140421012075399);
Obj x140421012075463 = PRIM_CDR(x140421012075431);
Obj x140421012075495 = PRIM_EQ(Nil, x140421012075463);
if (True == x140421012075495) {
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
__arg0 = x140421013682791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682791;
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
Obj x140421012076167 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012076199 = makeCons(x140421012076167, Nil);
Obj x140421012076231 = makeCons(rb, x140421012076199);
Obj x140421012076263 = makeCons(closureRef(co, 0), x140421012076231);
Obj x140421012076327 = makeCons(__symbolTable[91], x140421012076263);
__nargs = 2;
__arg1 = x140421012076327;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x140421013683687 = makeNative(15, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421012391591 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012391591) {
Obj x140421012391879 = PRIM_CAR(closureRef(co, 0));
Obj x140421012391975 = PRIM_EQ(__symbolTable[77], x140421012391879);
if (True == x140421012391975) {
Obj x140421012392263 = PRIM_CDR(closureRef(co, 0));
Obj x140421012392295 = PRIM_ISCONS(x140421012392263);
if (True == x140421012392295) {
Obj x140421012392711 = PRIM_CDR(closureRef(co, 0));
Obj x140421012392743 = PRIM_CAR(x140421012392711);
Obj x140421012392775 = PRIM_ISCONS(x140421012392743);
if (True == x140421012392775) {
Obj x140421012393255 = PRIM_CDR(closureRef(co, 0));
Obj x140421012393287 = PRIM_CAR(x140421012393255);
Obj x140421012393319 = PRIM_CAR(x140421012393287);
Obj x140421012393415 = PRIM_EQ(__symbolTable[94], x140421012393319);
if (True == x140421012393415) {
Obj x140421012393895 = PRIM_CDR(closureRef(co, 0));
Obj x140421012393927 = PRIM_CAR(x140421012393895);
Obj x140421012393959 = PRIM_CDR(x140421012393927);
Obj x140421012119559 = PRIM_ISCONS(x140421012393959);
if (True == x140421012119559) {
Obj x140421012120071 = PRIM_CDR(closureRef(co, 0));
Obj x140421012120103 = PRIM_CAR(x140421012120071);
Obj x140421012120231 = PRIM_CDR(x140421012120103);
Obj x140421012120263 = PRIM_CAR(x140421012120231);
Obj args = x140421012120263;
Obj x140421012120839 = PRIM_CDR(closureRef(co, 0));
Obj x140421012120871 = PRIM_CAR(x140421012120839);
Obj x140421012120903 = PRIM_CDR(x140421012120871);
Obj x140421012120935 = PRIM_CDR(x140421012120903);
Obj x140421012120967 = PRIM_ISCONS(x140421012120935);
if (True == x140421012120967) {
Obj x140421012121447 = PRIM_CDR(closureRef(co, 0));
Obj x140421012121479 = PRIM_CAR(x140421012121447);
Obj x140421012121511 = PRIM_CDR(x140421012121479);
Obj x140421012121543 = PRIM_CDR(x140421012121511);
Obj x140421012121735 = PRIM_CAR(x140421012121543);
Obj body = x140421012121735;
Obj x140421012122471 = PRIM_CDR(closureRef(co, 0));
Obj x140421012122503 = PRIM_CAR(x140421012122471);
Obj x140421012122535 = PRIM_CDR(x140421012122503);
Obj x140421012122567 = PRIM_CDR(x140421012122535);
Obj x140421012122599 = PRIM_CDR(x140421012122567);
Obj x140421012122631 = PRIM_EQ(Nil, x140421012122599);
if (True == x140421012122631) {
Obj x140421012122919 = PRIM_CDR(closureRef(co, 0));
Obj x140421012123015 = PRIM_CDR(x140421012122919);
Obj frees = x140421012123015;
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
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140421012094983 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421012095015 = makeCons(x140421012094983, Nil);
Obj x140421012095047 = makeCons(args, x140421012095015);
Obj x140421012095079 = makeCons(__symbolTable[94], x140421012095047);
Obj x140421012095111 = makeCons(x140421012095079, frees);
Obj x140421012095143 = makeCons(__symbolTable[77], x140421012095111);
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = x140421012095143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140421012390599 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012390599) {
Obj x140421012390791 = PRIM_CAR(closureRef(co, 0));
Obj f = x140421012390791;
Obj x140421012391015 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421012391015;
Obj x140421012391303 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = x140421012391303;
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
Obj x140421012515559 = makeCons(x, Nil);
Obj x140421012515591 = makeCons(__symbolTable[78], x140421012515559);
__nargs = 2;
__arg1 = x140421012515591;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x140421013561607 = __arg1;
Obj x140421013561671 = __arg2;
pushCont(co, 18, clofun7, 2, x140421013561671, x140421013561607);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = x140421013561671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140421013273639 = __arg1;
Obj x140421013561671= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013561607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421013273639) {
__nargs = 2;
__arg1 = x140421013561671;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013273799 = primIsSymbol(x140421013561671);
if (True == x140421013273799) {
pushCont(co, 28, clofun7, 1, x140421013561671);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = x140421013561671;
__arg2 = x140421013561607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421013562439 = makeNative(23, clofun7, 0, 2, x140421013561671, x140421013561607);
Obj x140421012993895 = PRIM_ISCONS(x140421013561671);
if (True == x140421012993895) {
Obj x140421012994151 = PRIM_CAR(x140421013561671);
Obj x140421012994183 = PRIM_EQ(__symbolTable[94], x140421012994151);
if (True == x140421012994183) {
Obj x140421012994535 = PRIM_CDR(x140421013561671);
Obj x140421012994567 = PRIM_ISCONS(x140421012994535);
if (True == x140421012994567) {
Obj x140421012994855 = PRIM_CDR(x140421013561671);
Obj x140421012994887 = PRIM_CAR(x140421012994855);
Obj args = x140421012994887;
Obj x140421012995239 = PRIM_CDR(x140421013561671);
Obj x140421012995271 = PRIM_CDR(x140421012995239);
Obj x140421012995303 = PRIM_ISCONS(x140421012995271);
if (True == x140421012995303) {
Obj x140421012995687 = PRIM_CDR(x140421013561671);
Obj x140421012995719 = PRIM_CDR(x140421012995687);
Obj x140421012995847 = PRIM_CAR(x140421012995719);
Obj body = x140421012995847;
Obj x140421012512999 = PRIM_CDR(x140421013561671);
Obj x140421012513031 = PRIM_CDR(x140421012512999);
Obj x140421012513063 = PRIM_CDR(x140421012513031);
Obj x140421012513095 = PRIM_EQ(Nil, x140421012513063);
if (True == x140421012513095) {
Obj x140421012513575 = makeCons(body, Nil);
Obj x140421012513607 = makeCons(args, x140421012513575);
Obj x140421012513639 = makeCons(__symbolTable[94], x140421012513607);
pushCont(co, 19, clofun7, 3, body, args, x140421013561607);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = x140421012513639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013562439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013562439;
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
Obj x140421012513671 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013561607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = x140421012513671;
pushCont(co, 20, clofun7, 3, args, x140421013561607, fvs1);
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
Obj x140421012514247 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013561607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140421012514279 = makeCons(x140421012514247, Nil);
Obj x140421012514311 = makeCons(args, x140421012514279);
Obj x140421012514343 = makeCons(__symbolTable[94], x140421012514311);
pushCont(co, 21, clofun7, 2, fvs1, x140421012514343);
__nargs = 2;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = x140421013561607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140421012514535 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012514343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun7, 1, x140421012514343);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421012514535;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140421012514567 = __arg1;
Obj x140421012514343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012514599 = makeCons(x140421012514343, x140421012514567);
Obj x140421012514663 = makeCons(__symbolTable[77], x140421012514599);
__nargs = 2;
__arg1 = x140421012514663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x140421013563143 = makeNative(26, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140421013090407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013090407) {
Obj x140421013090791 = PRIM_CAR(closureRef(co, 0));
Obj x140421013090823 = PRIM_EQ(__symbolTable[91], x140421013090791);
if (True == x140421013090823) {
Obj x140421013091079 = PRIM_CDR(closureRef(co, 0));
Obj x140421013091111 = PRIM_ISCONS(x140421013091079);
if (True == x140421013091111) {
Obj x140421013091527 = PRIM_CDR(closureRef(co, 0));
Obj x140421013091559 = PRIM_CAR(x140421013091527);
Obj a = x140421013091559;
Obj x140421013092007 = PRIM_CDR(closureRef(co, 0));
Obj x140421013092039 = PRIM_CDR(x140421013092007);
Obj x140421013092135 = PRIM_ISCONS(x140421013092039);
if (True == x140421013092135) {
Obj x140421013092551 = PRIM_CDR(closureRef(co, 0));
Obj x140421013092583 = PRIM_CDR(x140421013092551);
Obj x140421013092615 = PRIM_CAR(x140421013092583);
Obj b = x140421013092615;
Obj x140421013093127 = PRIM_CDR(closureRef(co, 0));
Obj x140421013093159 = PRIM_CDR(x140421013093127);
Obj x140421013093191 = PRIM_CDR(x140421013093159);
Obj x140421013093223 = PRIM_ISCONS(x140421013093191);
if (True == x140421013093223) {
Obj x140421013093703 = PRIM_CDR(closureRef(co, 0));
Obj x140421013093735 = PRIM_CDR(x140421013093703);
Obj x140421013093767 = PRIM_CDR(x140421013093735);
Obj x140421013093831 = PRIM_CAR(x140421013093767);
Obj c = x140421013093831;
Obj x140421012992167 = PRIM_CDR(closureRef(co, 0));
Obj x140421012992199 = PRIM_CDR(x140421012992167);
Obj x140421012992231 = PRIM_CDR(x140421012992199);
Obj x140421012992263 = PRIM_CDR(x140421012992231);
Obj x140421012992295 = PRIM_EQ(Nil, x140421012992263);
if (True == x140421012992295) {
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
__arg0 = x140421013563143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013563143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x140421012992775 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun7, 2, x140421012992775, a);
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
Obj x140421012992967 = __arg1;
Obj x140421012992775= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421012993031 = makeCons(x140421012992967, Nil);
Obj x140421012993063 = makeCons(x140421012992775, x140421012993031);
Obj x140421012993095 = makeCons(a, x140421012993063);
Obj x140421012993127 = makeCons(__symbolTable[91], x140421012993095);
__nargs = 2;
__arg1 = x140421012993127;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x140421013108871 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013108871) {
Obj x140421013109127 = PRIM_CAR(closureRef(co, 0));
Obj f = x140421013109127;
Obj x140421013110087 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421013110087;
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
Obj x140421013110311 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013110535 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421013110311;
__arg2 = x140421013110535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140421013273959 = __arg1;
Obj x140421013561671= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = x140421013273959;
Obj x140421013274119 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x140421013274119) {
__nargs = 2;
__arg1 = x140421013561671;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013106855 = makeCons(pos, Nil);
Obj x140421013106887 = makeCons(__symbolTable[83], x140421013106855);
__nargs = 2;
__arg1 = x140421013106887;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label29:
{
Obj x140421013682919 = __arg1;
pushCont(co, 30, clofun7, 1, x140421013682919);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = x140421013682919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140421011730183 = __arg1;
Obj x140421013682919= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421011730183) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421011730343 = primIsSymbol(x140421013682919);
if (True == x140421011730343) {
Obj x140421011689479 = makeCons(x140421013682919, Nil);
__nargs = 2;
__arg1 = x140421011689479;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013683463 = makeNative(32, clofun7, 0, 1, x140421013682919);
Obj x140421013393255 = PRIM_ISCONS(x140421013682919);
if (True == x140421013393255) {
Obj x140421013270663 = PRIM_CAR(x140421013682919);
Obj x140421013270727 = PRIM_EQ(__symbolTable[94], x140421013270663);
if (True == x140421013270727) {
Obj x140421013270951 = PRIM_CDR(x140421013682919);
Obj x140421013270983 = PRIM_ISCONS(x140421013270951);
if (True == x140421013270983) {
Obj x140421013271271 = PRIM_CDR(x140421013682919);
Obj x140421013271303 = PRIM_CAR(x140421013271271);
Obj args = x140421013271303;
Obj x140421013271687 = PRIM_CDR(x140421013682919);
Obj x140421013271719 = PRIM_CDR(x140421013271687);
Obj x140421013271751 = PRIM_ISCONS(x140421013271719);
if (True == x140421013271751) {
Obj x140421013272103 = PRIM_CDR(x140421013682919);
Obj x140421013272135 = PRIM_CDR(x140421013272103);
Obj x140421013272167 = PRIM_CAR(x140421013272135);
Obj body = x140421013272167;
Obj x140421013272551 = PRIM_CDR(x140421013682919);
Obj x140421013272615 = PRIM_CDR(x140421013272551);
Obj x140421013272647 = PRIM_CDR(x140421013272615);
Obj x140421013272679 = PRIM_EQ(Nil, x140421013272647);
if (True == x140421013272679) {
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
__arg0 = x140421013683463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683463;
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
Obj x140421013272871 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = x140421013272871;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140421013683975 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj x140421013469063 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013469063) {
Obj x140421013469415 = PRIM_CAR(closureRef(co, 0));
Obj x140421013469447 = PRIM_EQ(__symbolTable[92], x140421013469415);
if (True == x140421013469447) {
Obj x140421013469799 = PRIM_CDR(closureRef(co, 0));
Obj x140421013469831 = PRIM_ISCONS(x140421013469799);
if (True == x140421013469831) {
Obj x140421013470183 = PRIM_CDR(closureRef(co, 0));
Obj x140421013470215 = PRIM_CAR(x140421013470183);
Obj x = x140421013470215;
Obj x140421013470631 = PRIM_CDR(closureRef(co, 0));
Obj x140421013470759 = PRIM_CDR(x140421013470631);
Obj x140421013470791 = PRIM_ISCONS(x140421013470759);
if (True == x140421013470791) {
Obj x140421013471207 = PRIM_CDR(closureRef(co, 0));
Obj x140421013389319 = PRIM_CDR(x140421013471207);
Obj x140421013389351 = PRIM_CAR(x140421013389319);
Obj y = x140421013389351;
Obj x140421013389927 = PRIM_CDR(closureRef(co, 0));
Obj x140421013389959 = PRIM_CDR(x140421013389927);
Obj x140421013389991 = PRIM_CDR(x140421013389959);
Obj x140421013390023 = PRIM_ISCONS(x140421013389991);
if (True == x140421013390023) {
Obj x140421013390599 = PRIM_CDR(closureRef(co, 0));
Obj x140421013390631 = PRIM_CDR(x140421013390599);
Obj x140421013390663 = PRIM_CDR(x140421013390631);
Obj x140421013390695 = PRIM_CAR(x140421013390663);
Obj z = x140421013390695;
Obj x140421013391911 = PRIM_CDR(closureRef(co, 0));
Obj x140421013391943 = PRIM_CDR(x140421013391911);
Obj x140421013391975 = PRIM_CDR(x140421013391943);
Obj x140421013392007 = PRIM_CDR(x140421013391975);
Obj x140421013392039 = PRIM_EQ(Nil, x140421013392007);
if (True == x140421013392039) {
Obj x140421013392519 = makeCons(z, Nil);
Obj x140421013392551 = makeCons(y, x140421013392519);
Obj x140421013392583 = makeCons(x, x140421013392551);
PUSH_CONT_0(co, 33, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = x140421013392583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013683975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140421013392615 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = x140421013392615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140421013623175 = makeNative(36, clofun7, 0, 1, closureRef(co, 0));
Obj x140421013563463 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013563463) {
Obj x140421013563815 = PRIM_CAR(closureRef(co, 0));
Obj x140421013563847 = PRIM_EQ(__symbolTable[90], x140421013563815);
if (True == x140421013563847) {
Obj x140421013564167 = PRIM_CDR(closureRef(co, 0));
Obj x140421013564199 = PRIM_ISCONS(x140421013564167);
if (True == x140421013564199) {
Obj x140421013564487 = PRIM_CDR(closureRef(co, 0));
Obj x140421013564519 = PRIM_CAR(x140421013564487);
Obj x = x140421013564519;
Obj x140421013564935 = PRIM_CDR(closureRef(co, 0));
Obj x140421013564967 = PRIM_CDR(x140421013564935);
Obj x140421013564999 = PRIM_ISCONS(x140421013564967);
if (True == x140421013564999) {
Obj x140421013565415 = PRIM_CDR(closureRef(co, 0));
Obj x140421013467207 = PRIM_CDR(x140421013565415);
Obj x140421013467239 = PRIM_CAR(x140421013467207);
Obj y = x140421013467239;
Obj x140421013467719 = PRIM_CDR(closureRef(co, 0));
Obj x140421013467751 = PRIM_CDR(x140421013467719);
Obj x140421013467783 = PRIM_CDR(x140421013467751);
Obj x140421013467815 = PRIM_EQ(Nil, x140421013467783);
if (True == x140421013467815) {
Obj x140421013468295 = makeCons(y, Nil);
Obj x140421013468327 = makeCons(x, x140421013468295);
PUSH_CONT_0(co, 35, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = x140421013468327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013623175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140421013468359 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = x140421013468359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140421013623719 = makeNative(40, clofun7, 0, 1, closureRef(co, 0));
Obj x140421013683175 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013683175) {
Obj x140421013683559 = PRIM_CAR(closureRef(co, 0));
Obj x140421013683591 = PRIM_EQ(__symbolTable[91], x140421013683559);
if (True == x140421013683591) {
Obj x140421013683943 = PRIM_CDR(closureRef(co, 0));
Obj x140421013684039 = PRIM_ISCONS(x140421013683943);
if (True == x140421013684039) {
Obj x140421013623527 = PRIM_CDR(closureRef(co, 0));
Obj x140421013623559 = PRIM_CAR(x140421013623527);
Obj a = x140421013623559;
Obj x140421013624199 = PRIM_CDR(closureRef(co, 0));
Obj x140421013624231 = PRIM_CDR(x140421013624199);
Obj x140421013624263 = PRIM_ISCONS(x140421013624231);
if (True == x140421013624263) {
Obj x140421013624839 = PRIM_CDR(closureRef(co, 0));
Obj x140421013624871 = PRIM_CDR(x140421013624839);
Obj x140421013624903 = PRIM_CAR(x140421013624871);
Obj b = x140421013624903;
Obj x140421013625575 = PRIM_CDR(closureRef(co, 0));
Obj x140421013625607 = PRIM_CDR(x140421013625575);
Obj x140421013625639 = PRIM_CDR(x140421013625607);
Obj x140421013625671 = PRIM_ISCONS(x140421013625639);
if (True == x140421013625671) {
Obj x140421013626343 = PRIM_CDR(closureRef(co, 0));
Obj x140421013626407 = PRIM_CDR(x140421013626343);
Obj x140421013626471 = PRIM_CDR(x140421013626407);
Obj x140421013626535 = PRIM_CAR(x140421013626471);
Obj c = x140421013626535;
Obj x140421013561575 = PRIM_CDR(closureRef(co, 0));
Obj x140421013561639 = PRIM_CDR(x140421013561575);
Obj x140421013561703 = PRIM_CDR(x140421013561639);
Obj x140421013561735 = PRIM_CDR(x140421013561703);
Obj x140421013561799 = PRIM_EQ(Nil, x140421013561735);
if (True == x140421013561799) {
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
__arg0 = x140421013623719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140421013562119 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun7, 2, a, x140421013562119);
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
Obj x140421013562311 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013562119= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013562471 = makeCons(a, Nil);
pushCont(co, 39, clofun7, 1, x140421013562119);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = x140421013562311;
__arg2 = x140421013562471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140421013562503 = __arg1;
Obj x140421013562119= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = x140421013562119;
__arg2 = x140421013562503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140421013624359 = makeNative(41, clofun7, 0, 1, closureRef(co, 0));
Obj x140421011565831 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011565831) {
Obj x140421011566087 = PRIM_CAR(closureRef(co, 0));
Obj x140421011566119 = PRIM_EQ(__symbolTable[77], x140421011566087);
if (True == x140421011566119) {
Obj x140421011566375 = PRIM_CDR(closureRef(co, 0));
Obj x140421013680231 = PRIM_ISCONS(x140421011566375);
if (True == x140421013680231) {
Obj x140421013681447 = PRIM_CDR(closureRef(co, 0));
Obj x140421013681511 = PRIM_CAR(x140421013681447);
Obj lam = x140421013681511;
Obj x140421013682119 = PRIM_CDR(closureRef(co, 0));
Obj x140421013682151 = PRIM_CDR(x140421013682119);
Obj more = x140421013682151;
Obj x140421013682439 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = x140421013682439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013624359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj x140421013624775 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj x140421011564071 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011564071) {
Obj x140421011564327 = PRIM_CAR(closureRef(co, 0));
Obj x140421011564359 = PRIM_EQ(__symbolTable[78], x140421011564327);
if (True == x140421011564359) {
Obj x140421011564615 = PRIM_CDR(closureRef(co, 0));
Obj x140421011564647 = PRIM_ISCONS(x140421011564615);
if (True == x140421011564647) {
Obj x140421011564903 = PRIM_CDR(closureRef(co, 0));
Obj x140421011564935 = PRIM_CAR(x140421011564903);
Obj x = x140421011564935;
Obj x140421011565255 = PRIM_CDR(closureRef(co, 0));
Obj x140421011565287 = PRIM_CDR(x140421011565255);
Obj x140421011565319 = PRIM_EQ(Nil, x140421011565287);
if (True == x140421011565319) {
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
__arg0 = x140421013624775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140421013625191 = makeNative(44, clofun7, 0, 1, closureRef(co, 0));
Obj x140421011630727 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011630727) {
Obj x140421011630983 = PRIM_CAR(closureRef(co, 0));
Obj x140421011631015 = PRIM_EQ(__symbolTable[79], x140421011630983);
if (True == x140421011631015) {
Obj x140421011631271 = PRIM_CDR(closureRef(co, 0));
Obj x140421011631303 = PRIM_ISCONS(x140421011631271);
if (True == x140421011631303) {
Obj x140421011631559 = PRIM_CDR(closureRef(co, 0));
Obj x140421011631591 = PRIM_CAR(x140421011631559);
Obj exp = x140421011631591;
Obj x140421011631911 = PRIM_CDR(closureRef(co, 0));
Obj x140421011631943 = PRIM_CDR(x140421011631911);
Obj x140421011631975 = PRIM_ISCONS(x140421011631943);
if (True == x140421011631975) {
Obj x140421011562663 = PRIM_CDR(closureRef(co, 0));
Obj x140421011562695 = PRIM_CDR(x140421011562663);
Obj x140421011562727 = PRIM_CAR(x140421011562695);
Obj cont = x140421011562727;
Obj x140421011563111 = PRIM_CDR(closureRef(co, 0));
Obj x140421011563143 = PRIM_CDR(x140421011563111);
Obj x140421011563175 = PRIM_CDR(x140421011563143);
Obj x140421011563207 = PRIM_EQ(Nil, x140421011563175);
if (True == x140421011563207) {
Obj x140421011563495 = makeCons(cont, Nil);
Obj x140421011563527 = makeCons(exp, x140421011563495);
PUSH_CONT_0(co, 43, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = x140421011563527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013625191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x140421011563559 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = x140421011563559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140421013625735 = makeNative(45, clofun7, 0, 1, closureRef(co, 0));
Obj x140421011628967 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011628967) {
Obj x140421011629223 = PRIM_CAR(closureRef(co, 0));
Obj x140421011629255 = PRIM_EQ(__symbolTable[80], x140421011629223);
if (True == x140421011629255) {
Obj x140421011629511 = PRIM_CDR(closureRef(co, 0));
Obj x140421011629543 = PRIM_ISCONS(x140421011629511);
if (True == x140421011629543) {
Obj x140421011629799 = PRIM_CDR(closureRef(co, 0));
Obj x140421011629831 = PRIM_CAR(x140421011629799);
Obj exp = x140421011629831;
Obj x140421011630151 = PRIM_CDR(closureRef(co, 0));
Obj x140421011630183 = PRIM_CDR(x140421011630151);
Obj x140421011630215 = PRIM_EQ(Nil, x140421011630183);
if (True == x140421011630215) {
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
__arg0 = x140421013625735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140421013626183 = makeNative(47, clofun7, 0, 1, closureRef(co, 0));
Obj x140421011691719 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011691719) {
Obj x140421011691975 = PRIM_CAR(closureRef(co, 0));
Obj x140421011692007 = PRIM_EQ(__symbolTable[81], x140421011691975);
if (True == x140421011692007) {
Obj x140421011692263 = PRIM_CDR(closureRef(co, 0));
Obj x140421011692295 = PRIM_ISCONS(x140421011692263);
if (True == x140421011692295) {
Obj x140421011692551 = PRIM_CDR(closureRef(co, 0));
Obj x140421011692583 = PRIM_CAR(x140421011692551);
Obj arg = x140421011692583;
Obj x140421011692903 = PRIM_CDR(closureRef(co, 0));
Obj x140421011692935 = PRIM_CDR(x140421011692903);
Obj x140421011692967 = PRIM_ISCONS(x140421011692935);
if (True == x140421011692967) {
Obj x140421011693287 = PRIM_CDR(closureRef(co, 0));
Obj x140421011693319 = PRIM_CDR(x140421011693287);
Obj x140421011693351 = PRIM_CAR(x140421011693319);
Obj body = x140421011693351;
Obj x140421011628199 = PRIM_CDR(closureRef(co, 0));
Obj x140421011628231 = PRIM_CDR(x140421011628199);
Obj x140421011628263 = PRIM_CDR(x140421011628231);
Obj x140421011628295 = PRIM_EQ(Nil, x140421011628263);
if (True == x140421011628295) {
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
__arg0 = x140421013626183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013626183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x140421011628455 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = x140421011628455;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140421011690823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011690823) {
Obj x140421011691015 = PRIM_CAR(closureRef(co, 0));
Obj f = x140421011691015;
Obj x140421011691207 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421011691207;
Obj x140421011691431 = makeCons(f, args);
PUSH_CONT_0(co, 48, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = x140421011691431;
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
Obj x140421011691463 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = x140421011691463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140421013680167 = __arg1;
Obj x140421013680295 = makeNative(0, clofun8, 0, 1, x140421013680167);
Obj x140421011728007 = PRIM_ISCONS(x140421013680167);
if (True == x140421011728007) {
Obj x140421011728231 = PRIM_CAR(x140421013680167);
Obj x140421011728263 = PRIM_EQ(__symbolTable[101], x140421011728231);
if (True == x140421011728263) {
Obj x140421011728487 = PRIM_CDR(x140421013680167);
Obj x140421011728519 = PRIM_ISCONS(x140421011728487);
if (True == x140421011728519) {
Obj x140421011728743 = PRIM_CDR(x140421013680167);
Obj x140421011728775 = PRIM_CAR(x140421011728743);
Obj x140421011729479 = PRIM_CDR(x140421013680167);
Obj x140421011729511 = PRIM_CDR(x140421011729479);
Obj x140421011729543 = PRIM_EQ(Nil, x140421011729511);
if (True == x140421011729543) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013680295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680295;
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
Obj x140421013680743 = makeNative(1, clofun8, 0, 1, closureRef(co, 0));
Obj x140421011726343 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011726343) {
Obj x140421011726599 = PRIM_CAR(closureRef(co, 0));
Obj x140421011726631 = PRIM_EQ(__symbolTable[98], x140421011726599);
if (True == x140421011726631) {
Obj x140421011726887 = PRIM_CDR(closureRef(co, 0));
Obj x140421011726919 = PRIM_ISCONS(x140421011726887);
if (True == x140421011726919) {
Obj x140421011727175 = PRIM_CDR(closureRef(co, 0));
Obj x140421011727207 = PRIM_CAR(x140421011727175);
Obj x140421011727527 = PRIM_CDR(closureRef(co, 0));
Obj x140421011727559 = PRIM_CDR(x140421011727527);
Obj x140421011727591 = PRIM_EQ(Nil, x140421011727559);
if (True == x140421011727591) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013680743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013680743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140421013681255 = makeNative(2, clofun8, 0, 1, closureRef(co, 0));
Obj x140421011769319 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011769319) {
Obj x140421011769575 = PRIM_CAR(closureRef(co, 0));
Obj x140421011769607 = PRIM_EQ(__symbolTable[95], x140421011769575);
if (True == x140421011769607) {
Obj x140421011769863 = PRIM_CDR(closureRef(co, 0));
Obj x140421011770279 = PRIM_ISCONS(x140421011769863);
if (True == x140421011770279) {
Obj x140421011770535 = PRIM_CDR(closureRef(co, 0));
Obj x140421011770567 = PRIM_CAR(x140421011770535);
Obj x140421011770887 = PRIM_CDR(closureRef(co, 0));
Obj x140421011770919 = PRIM_CDR(x140421011770887);
Obj x140421011770951 = PRIM_EQ(Nil, x140421011770919);
if (True == x140421011770951) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013681255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140421013681703 = makeNative(3, clofun8, 0, 1, closureRef(co, 0));
Obj x140421011767623 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421011767623) {
Obj x140421011767879 = PRIM_CAR(closureRef(co, 0));
Obj x140421011767911 = PRIM_EQ(__symbolTable[89], x140421011767879);
if (True == x140421011767911) {
Obj x140421011768167 = PRIM_CDR(closureRef(co, 0));
Obj x140421011768199 = PRIM_ISCONS(x140421011768167);
if (True == x140421011768199) {
Obj x140421011768455 = PRIM_CDR(closureRef(co, 0));
Obj x140421011768487 = PRIM_CAR(x140421011768455);
Obj x140421011768807 = PRIM_CDR(closureRef(co, 0));
Obj x140421011768839 = PRIM_CDR(x140421011768807);
Obj x140421011768871 = PRIM_EQ(Nil, x140421011768839);
if (True == x140421011768871) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013681703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013681703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140421013682247 = makeNative(4, clofun8, 0, 0);
Obj x140421012040359 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012040359) {
Obj x140421012040615 = PRIM_CAR(closureRef(co, 0));
Obj x140421012040647 = PRIM_EQ(__symbolTable[83], x140421012040615);
if (True == x140421012040647) {
Obj x140421012040903 = PRIM_CDR(closureRef(co, 0));
Obj x140421012040935 = PRIM_ISCONS(x140421012040903);
if (True == x140421012040935) {
Obj x140421012041191 = PRIM_CDR(closureRef(co, 0));
Obj x140421012041223 = PRIM_CAR(x140421012041191);
Obj x140421012041543 = PRIM_CDR(closureRef(co, 0));
Obj x140421012041575 = PRIM_CDR(x140421012041543);
Obj x140421012041607 = PRIM_EQ(Nil, x140421012041575);
if (True == x140421012041607) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013682247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682247;
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
Obj x140421013562759 = __arg1;
Obj x140421013562791 = __arg2;
Obj x140421012077831 = PRIM_EQ(Nil, x140421013562759);
if (True == x140421012077831) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013563239 = makeNative(7, clofun8, 0, 2, x140421013562759, x140421013562791);
Obj x140421012038631 = PRIM_ISCONS(x140421013562759);
if (True == x140421012038631) {
Obj x140421012038791 = PRIM_CAR(x140421013562759);
Obj x = x140421012038791;
Obj x140421012038951 = PRIM_CDR(x140421013562759);
Obj y = x140421012038951;
pushCont(co, 6, clofun8, 3, y, x140421013562791, x140421013563239);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x;
__arg2 = x140421013562791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013563239;
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
Obj x140421012039111 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013562791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013563239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140421012039111) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = y;
__arg2 = x140421013562791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013563239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140421012037799 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012037799) {
Obj x140421012037991 = PRIM_CAR(closureRef(co, 0));
Obj x = x140421012037991;
Obj x140421012038183 = PRIM_CDR(closureRef(co, 0));
Obj y = x140421012038183;
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
Obj x140421012038375 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012038407 = makeCons(x, x140421012038375);
__nargs = 2;
__arg1 = x140421012038407;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj x140421013561479 = __arg1;
Obj x140421013561511 = __arg2;
Obj x140421012075591 = PRIM_EQ(Nil, x140421013561479);
if (True == x140421012075591) {
__nargs = 2;
__arg1 = x140421013561511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013561959 = makeNative(11, clofun8, 0, 2, x140421013561479, x140421013561511);
Obj x140421012076743 = PRIM_ISCONS(x140421013561479);
if (True == x140421012076743) {
Obj x140421012076903 = PRIM_CAR(x140421013561479);
Obj x = x140421012076903;
Obj x140421012077063 = PRIM_CDR(x140421013561479);
Obj y = x140421012077063;
pushCont(co, 10, clofun8, 3, y, x140421013561511, x140421013561959);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x;
__arg2 = x140421013561511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013561959;
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
Obj x140421012077223 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013561511= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013561959= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140421012077223) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = y;
__arg2 = x140421013561511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013561959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140421012075911 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012075911) {
Obj x140421012076103 = PRIM_CAR(closureRef(co, 0));
Obj x = x140421012076103;
Obj x140421012076295 = PRIM_CDR(closureRef(co, 0));
Obj y = x140421012076295;
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
Obj x140421012076487 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012076519 = makeCons(x, x140421012076487);
__nargs = 2;
__arg1 = x140421012076519;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x140421013681767 = __arg1;
Obj x140421013681799 = __arg2;
Obj x140421013681831 = __arg3;
Obj x140421013467143 = makeNative(17, clofun8, 1, 3, x140421013681767, x140421013681831, x140421013681799);
pushCont(co, 14, clofun8, 2, x140421013681831, x140421013467143);
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = x140421013681831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140421012074727 = __arg1;
Obj x140421013681831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013467143= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421012074727) {
__nargs = 2;
__arg0 = x140421013467143;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140421012074887 = primIsString(x140421013681831);
if (True == x140421012074887) {
__nargs = 2;
__arg0 = x140421013467143;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 15, clofun8, 2, x140421013681831, x140421013467143);
__nargs = 2;
__arg0 = globalRef(__symbolTable[87]);
__arg1 = x140421013681831;
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
Obj x140421012075047 = __arg1;
Obj x140421013681831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013467143= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140421012075047) {
__nargs = 2;
__arg0 = x140421013467143;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 16, clofun8, 1, x140421013467143);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = x140421013681831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj x140421012075207 = __arg1;
Obj x140421013467143= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421012075207) {
__nargs = 2;
__arg0 = x140421013467143;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140421013467143;
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
Obj x140421013467175 = __arg1;
if (True == x140421013467175) {
Obj x140421013272007 = makeCons(closureRef(co, 1), Nil);
Obj x140421013272039 = makeCons(__symbolTable[101], x140421013272007);
__nargs = 2;
__arg1 = x140421013272039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013682375 = makeNative(19, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj x140421012097191 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140421012097191) {
Obj x140421012097447 = PRIM_CAR(closureRef(co, 1));
Obj x140421012097479 = PRIM_EQ(__symbolTable[89], x140421012097447);
if (True == x140421012097479) {
Obj x140421012097735 = PRIM_CDR(closureRef(co, 1));
Obj x140421012097767 = PRIM_ISCONS(x140421012097735);
if (True == x140421012097767) {
Obj x140421012098023 = PRIM_CDR(closureRef(co, 1));
Obj x140421012098055 = PRIM_CAR(x140421012098023);
Obj x = x140421012098055;
Obj x140421012098375 = PRIM_CDR(closureRef(co, 1));
Obj x140421012098407 = PRIM_CDR(x140421012098375);
Obj x140421012098439 = PRIM_EQ(Nil, x140421012098407);
if (True == x140421012098439) {
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
__arg0 = x140421013682375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013682375;
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
Obj x140421012098631 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012098791 = makeCons(x, Nil);
Obj x140421012098823 = makeCons(__symbolTable[101], x140421012098791);
__nargs = 2;
__arg1 = x140421012098823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x140421013272359 = primIsSymbol(closureRef(co, 0));
if (True == x140421013272359) {
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
Obj x140421013683367 = makeNative(22, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421012122695 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012122695) {
Obj x140421012122951 = PRIM_CAR(closureRef(co, 0));
Obj x140421012122983 = PRIM_EQ(__symbolTable[94], x140421012122951);
if (True == x140421012122983) {
Obj x140421012123239 = PRIM_CDR(closureRef(co, 0));
Obj x140421012123271 = PRIM_ISCONS(x140421012123239);
if (True == x140421012123271) {
Obj x140421012123527 = PRIM_CDR(closureRef(co, 0));
Obj x140421012123559 = PRIM_CAR(x140421012123527);
Obj args = x140421012123559;
Obj x140421012095207 = PRIM_CDR(closureRef(co, 0));
Obj x140421012095239 = PRIM_CDR(x140421012095207);
Obj x140421012095271 = PRIM_ISCONS(x140421012095239);
if (True == x140421012095271) {
Obj x140421012095591 = PRIM_CDR(closureRef(co, 0));
Obj x140421012095623 = PRIM_CDR(x140421012095591);
Obj x140421012095655 = PRIM_CAR(x140421012095623);
Obj body = x140421012095655;
Obj x140421012096039 = PRIM_CDR(closureRef(co, 0));
Obj x140421012096071 = PRIM_CDR(x140421012096039);
Obj x140421012096103 = PRIM_CDR(x140421012096071);
Obj x140421012096135 = PRIM_EQ(Nil, x140421012096103);
if (True == x140421012096135) {
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
__arg0 = x140421013683367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013683367;
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
Obj x140421012096519 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun8, 1, args);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = x140421012096519;
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
Obj x140421012096583 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012096615 = makeCons(x140421012096583, Nil);
Obj x140421012096647 = makeCons(args, x140421012096615);
Obj x140421012096679 = makeCons(__symbolTable[94], x140421012096647);
__nargs = 2;
__arg1 = x140421012096679;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x140421013684071 = makeNative(23, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421012392807 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012392807) {
Obj x140421012393063 = PRIM_CAR(closureRef(co, 0));
Obj x140421012393095 = PRIM_EQ(__symbolTable[92], x140421012393063);
if (True == x140421012393095) {
Obj x140421012393351 = PRIM_CDR(closureRef(co, 0));
Obj x140421012393383 = PRIM_ISCONS(x140421012393351);
if (True == x140421012393383) {
Obj x140421012393703 = PRIM_CDR(closureRef(co, 0));
Obj x140421012393735 = PRIM_CAR(x140421012393703);
Obj x140421012393767 = PRIM_ISCONS(x140421012393735);
if (True == x140421012393767) {
Obj x140421012119719 = PRIM_CDR(closureRef(co, 0));
Obj x140421012119751 = PRIM_CAR(x140421012119719);
Obj x140421012119783 = PRIM_CAR(x140421012119751);
Obj x140421012119815 = PRIM_EQ(__symbolTable[92], x140421012119783);
if (True == x140421012119815) {
Obj x140421012120135 = PRIM_CDR(closureRef(co, 0));
Obj x140421012120167 = PRIM_CAR(x140421012120135);
Obj x140421012120199 = PRIM_CDR(x140421012120167);
Obj exp1 = x140421012120199;
Obj x140421012120455 = PRIM_CDR(closureRef(co, 0));
Obj x140421012120487 = PRIM_CDR(x140421012120455);
Obj exp2 = x140421012120487;
Obj x140421012120647 = primGenSym();
Obj f = x140421012120647;
Obj x140421012120807 = primGenSym();
Obj v = x140421012120807;
Obj x140421012121351 = makeCons(v, Nil);
Obj x140421012121575 = makeCons(v, exp2);
Obj x140421012121607 = makeCons(__symbolTable[92], x140421012121575);
Obj x140421012121639 = makeCons(x140421012121607, Nil);
Obj x140421012121671 = makeCons(x140421012121351, x140421012121639);
Obj x140421012121703 = makeCons(__symbolTable[94], x140421012121671);
Obj x140421012121991 = makeCons(__symbolTable[92], exp1);
Obj x140421012122023 = makeCons(x140421012121991, Nil);
Obj x140421012122055 = makeCons(f, x140421012122023);
Obj x140421012122087 = makeCons(x140421012122055, Nil);
Obj x140421012122119 = makeCons(x140421012121703, x140421012122087);
Obj x140421012122151 = makeCons(f, x140421012122119);
Obj x140421012122183 = makeCons(__symbolTable[91], x140421012122151);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x140421012122183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013684071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013684071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140421013623303 = makeNative(26, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421012391655 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012391655) {
Obj x140421012391911 = PRIM_CAR(closureRef(co, 0));
Obj x140421012391943 = PRIM_EQ(__symbolTable[92], x140421012391911);
if (True == x140421012391943) {
Obj x140421012392135 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421012392135;
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
__arg0 = x140421013623303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x140421012392423 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 25, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421012392423;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140421012392455 = __arg1;
Obj x140421012392487 = makeCons(__symbolTable[92], x140421012392455);
__nargs = 2;
__arg1 = x140421012392487;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x140421013623783 = makeNative(29, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421012515399 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012515399) {
Obj x140421012515655 = PRIM_CAR(closureRef(co, 0));
Obj x140421012515687 = PRIM_EQ(__symbolTable[90], x140421012515655);
if (True == x140421012515687) {
Obj x140421012515943 = PRIM_CDR(closureRef(co, 0));
Obj x140421012515975 = PRIM_ISCONS(x140421012515943);
if (True == x140421012515975) {
Obj x140421012516231 = PRIM_CDR(closureRef(co, 0));
Obj x140421012516263 = PRIM_CAR(x140421012516231);
Obj x = x140421012516263;
Obj x140421012516583 = PRIM_CDR(closureRef(co, 0));
Obj x140421012516615 = PRIM_CDR(x140421012516583);
Obj x140421012516647 = PRIM_ISCONS(x140421012516615);
if (True == x140421012516647) {
Obj x140421012389991 = PRIM_CDR(closureRef(co, 0));
Obj x140421012390023 = PRIM_CDR(x140421012389991);
Obj x140421012390055 = PRIM_CAR(x140421012390023);
Obj y = x140421012390055;
Obj x140421012390439 = PRIM_CDR(closureRef(co, 0));
Obj x140421012390471 = PRIM_CDR(x140421012390439);
Obj x140421012390503 = PRIM_CDR(x140421012390471);
Obj x140421012390535 = PRIM_EQ(Nil, x140421012390503);
if (True == x140421012390535) {
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
__arg0 = x140421013623783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013623783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x140421012390823 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun8, 1, x140421012390823);
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
Obj x140421012391047 = __arg1;
Obj x140421012390823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421012391079 = makeCons(x140421012391047, Nil);
Obj x140421012391111 = makeCons(x140421012390823, x140421012391079);
Obj x140421012391143 = makeCons(__symbolTable[90], x140421012391111);
__nargs = 2;
__arg1 = x140421012391143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj x140421013624487 = makeNative(32, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421012994119 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421012994119) {
Obj x140421012994439 = PRIM_CAR(closureRef(co, 0));
Obj x140421012994471 = PRIM_EQ(__symbolTable[91], x140421012994439);
if (True == x140421012994471) {
Obj x140421012994727 = PRIM_CDR(closureRef(co, 0));
Obj x140421012994759 = PRIM_ISCONS(x140421012994727);
if (True == x140421012994759) {
Obj x140421012995015 = PRIM_CDR(closureRef(co, 0));
Obj x140421012995047 = PRIM_CAR(x140421012995015);
Obj a = x140421012995047;
Obj x140421012995367 = PRIM_CDR(closureRef(co, 0));
Obj x140421012995399 = PRIM_CDR(x140421012995367);
Obj x140421012995431 = PRIM_ISCONS(x140421012995399);
if (True == x140421012995431) {
Obj x140421012995751 = PRIM_CDR(closureRef(co, 0));
Obj x140421012995783 = PRIM_CDR(x140421012995751);
Obj x140421012995815 = PRIM_CAR(x140421012995783);
Obj b = x140421012995815;
Obj x140421012512871 = PRIM_CDR(closureRef(co, 0));
Obj x140421012512903 = PRIM_CDR(x140421012512871);
Obj x140421012512935 = PRIM_CDR(x140421012512903);
Obj x140421012512967 = PRIM_ISCONS(x140421012512935);
if (True == x140421012512967) {
Obj x140421012513351 = PRIM_CDR(closureRef(co, 0));
Obj x140421012513383 = PRIM_CDR(x140421012513351);
Obj x140421012513415 = PRIM_CDR(x140421012513383);
Obj x140421012513447 = PRIM_CAR(x140421012513415);
Obj c = x140421012513447;
Obj x140421012513895 = PRIM_CDR(closureRef(co, 0));
Obj x140421012513927 = PRIM_CDR(x140421012513895);
Obj x140421012513959 = PRIM_CDR(x140421012513927);
Obj x140421012513991 = PRIM_CDR(x140421012513959);
Obj x140421012514023 = PRIM_EQ(Nil, x140421012513991);
if (True == x140421012514023) {
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
__arg0 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013624487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140421012514375 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421012514631 = makeCons(a, closureRef(co, 1));
pushCont(co, 31, clofun8, 2, x140421012514375, a);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = x140421012514631;
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
Obj x140421012514695 = __arg1;
Obj x140421012514375= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421012514727 = makeCons(x140421012514695, Nil);
Obj x140421012514759 = makeCons(x140421012514375, x140421012514727);
Obj x140421012514791 = makeCons(a, x140421012514759);
Obj x140421012514823 = makeCons(__symbolTable[91], x140421012514791);
__nargs = 2;
__arg1 = x140421012514823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140421013625287 = makeNative(33, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140421013091719 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013091719) {
Obj x140421013092071 = PRIM_CAR(closureRef(co, 0));
Obj x140421013092103 = PRIM_ISCONS(x140421013092071);
if (True == x140421013092103) {
Obj x140421013092423 = PRIM_CAR(closureRef(co, 0));
Obj x140421013092455 = PRIM_CAR(x140421013092423);
Obj x140421013092487 = PRIM_EQ(__symbolTable[94], x140421013092455);
if (True == x140421013092487) {
Obj x140421013092743 = PRIM_CAR(closureRef(co, 0));
Obj x140421013092775 = PRIM_CDR(x140421013092743);
Obj exp1 = x140421013092775;
Obj x140421013093031 = PRIM_CDR(closureRef(co, 0));
Obj x140421013093063 = PRIM_ISCONS(x140421013093031);
if (True == x140421013093063) {
Obj x140421013093383 = PRIM_CDR(closureRef(co, 0));
Obj x140421013093415 = PRIM_CAR(x140421013093383);
Obj x140421013093447 = PRIM_ISCONS(x140421013093415);
if (True == x140421013093447) {
Obj x140421013093863 = PRIM_CDR(closureRef(co, 0));
Obj x140421013093895 = PRIM_CAR(x140421013093863);
Obj x140421013093991 = PRIM_CAR(x140421013093895);
Obj x140421013094023 = PRIM_EQ(__symbolTable[92], x140421013093991);
if (True == x140421013094023) {
Obj x140421013094343 = PRIM_CDR(closureRef(co, 0));
Obj x140421013094375 = PRIM_CAR(x140421013094343);
Obj x140421012992007 = PRIM_CDR(x140421013094375);
Obj exp2 = x140421012992007;
Obj x140421012992327 = PRIM_CDR(closureRef(co, 0));
Obj x140421012992359 = PRIM_CDR(x140421012992327);
Obj x140421012992391 = PRIM_EQ(Nil, x140421012992359);
if (True == x140421012992391) {
Obj x140421012992583 = primGenSym();
Obj f = x140421012992583;
Obj x140421012992999 = makeCons(__symbolTable[94], exp1);
Obj x140421012993287 = makeCons(__symbolTable[92], exp2);
Obj x140421012993319 = makeCons(x140421012993287, Nil);
Obj x140421012993351 = makeCons(f, x140421012993319);
Obj x140421012993383 = makeCons(x140421012993351, Nil);
Obj x140421012993415 = makeCons(x140421012992999, x140421012993383);
Obj x140421012993447 = makeCons(f, x140421012993415);
Obj x140421012993479 = makeCons(__symbolTable[91], x140421012993447);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x140421012993479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013625287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140421013626087 = makeNative(41, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj x140421013107111 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013107111) {
Obj x140421013107943 = PRIM_CAR(closureRef(co, 0));
Obj op = x140421013107943;
Obj x140421013108647 = PRIM_CDR(closureRef(co, 0));
Obj args = x140421013108647;
pushCont(co, 34, clofun8, 3, op, args, x140421013626087);
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
__arg0 = x140421013626087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140421013108935 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013626087= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140421013108935) {
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
__arg0 = x140421013626087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140421013109095 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = x140421013109095;
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
Obj x140421013109895 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = x140421013109895;
Obj x140421013110151 = PRIM_EQ(required, provided);
if (True == x140421013110151) {
Obj x140421013110439 = makeCons(op, Nil);
Obj x140421013110471 = makeCons(__symbolTable[95], x140421013110439);
pushCont(co, 39, clofun8, 2, args, x140421013110471);
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
Obj x140421013090439 = PRIM_GT(required, provided);
if (True == x140421013090439) {
Obj x140421013090695 = PRIM_SUB(required, provided);
pushCont(co, 37, clofun8, 2, op, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = x140421013090695;
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
Obj x140421013090727 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = x140421013090727;
Obj x140421013091207 = makeCons(op, args);
pushCont(co, 38, clofun8, 1, tmp);
__nargs = 3;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = x140421013091207;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140421013091239 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013091271 = makeCons(x140421013091239, Nil);
Obj x140421013091303 = makeCons(tmp, x140421013091271);
Obj x140421013091335 = makeCons(__symbolTable[94], x140421013091303);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x140421013091335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140421013110695 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013110471= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun8, 1, x140421013110471);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421013110695;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140421013110727 = __arg1;
Obj x140421013110471= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140421013110759 = makeCons(x140421013110471, x140421013110727);
__nargs = 2;
__arg1 = x140421013110759;
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
Obj x140421013274183 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = x140421013274183;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140421013272583 = __arg1;
if (True == x140421013272583) {
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
Obj x140421013272839 = __arg1;
Obj x140421013273031 = makeCons(closureRef(co, 0), Nil);
Obj x140421013273063 = makeCons(__symbolTable[98], x140421013273031);
__nargs = 2;
__arg1 = x140421013273063;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140421013680967 = __arg1;
Obj x140421013680999 = __arg2;
Obj x140421013271047 = PRIM_EQ(MAKE_NUMBER(0), x140421013680967);
if (True == x140421013271047) {
__nargs = 2;
__arg1 = x140421013680999;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013271207 = PRIM_SUB(x140421013680967, MAKE_NUMBER(1));
Obj x140421013271367 = primGenSym();
Obj x140421013271399 = makeCons(x140421013271367, x140421013680999);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = x140421013271207;
__arg2 = x140421013271399;
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
Obj x140421013393319 = __arg1;
Obj find = x140421013393319;
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
Obj x140421013270599 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421013270599) {
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
Obj x140421013392711 = __arg1;
Obj find = x140421013392711;
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
Obj x140421013392871 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140421013392871) {
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
Obj x140421013392263 = __arg1;
PUSH_CONT_0(co, 4, clofun9);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = x140421013392263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140421013392295 = __arg1;
Obj x140421013392327 = primNot(x140421013392295);
__nargs = 2;
__arg1 = x140421013392327;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x140421012994215 = __arg1;
Obj x140421012994279 = __arg2;
Obj x140421013564423 = PRIM_EQ(Nil, x140421012994279);
if (True == x140421013564423) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013564583 = PRIM_ISCONS(x140421012994279);
if (True == x140421013564583) {
Obj x140421013564743 = PRIM_CAR(x140421012994279);
Obj hd = x140421013564743;
Obj x140421013564903 = PRIM_CDR(x140421012994279);
Obj tl = x140421013564903;
pushCont(co, 6, clofun9, 2, x140421012994215, tl);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = x140421012994215;
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
Obj x140421013565127 = __arg1;
Obj x140421012994215= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140421013565159 = PRIM_LT(x140421013565127, MAKE_NUMBER(0));
if (True == x140421013565159) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[128]);
__arg1 = x140421012994215;
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
Obj x140421013093799 = __arg1;
Obj x140421013093927 = __arg2;
Obj x140421013093959 = __arg3;
Obj x140421013561351 = PRIM_EQ(Nil, x140421013093959);
if (True == x140421013561351) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421012992519 = makeNative(9, clofun9, 0, 3, x140421013093959, x140421013093799, x140421013093927);
Obj x140421013562919 = PRIM_ISCONS(x140421013093959);
if (True == x140421013562919) {
Obj x140421013563175 = PRIM_CAR(x140421013093959);
Obj a = x140421013563175;
Obj x140421013563399 = PRIM_CDR(x140421013093959);
Obj x140421013563591 = PRIM_EQ(x140421013093927, a);
if (True == x140421013563591) {
__nargs = 2;
__arg1 = x140421013093799;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421012992519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421012992519;
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
Obj x140421013561831 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013561831) {
Obj x140421013562151 = PRIM_CAR(closureRef(co, 0));
Obj x140421013562343 = PRIM_CDR(closureRef(co, 0));
Obj b = x140421013562343;
Obj x140421013562567 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = x140421013562567;
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
Obj x140421013091815 = __arg1;
Obj x140421013091879 = __arg2;
Obj x140421013091943 = __arg3;
Obj x140421013625479 = PRIM_EQ(Nil, x140421013091943);
if (True == x140421013625479) {
__nargs = 2;
__arg1 = x140421013091879;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013625703 = PRIM_ISCONS(x140421013091943);
if (True == x140421013625703) {
Obj x140421013625927 = PRIM_CAR(x140421013091943);
Obj x = x140421013625927;
Obj x140421013626151 = PRIM_CDR(x140421013091943);
Obj y = x140421013626151;
pushCont(co, 11, clofun9, 2, x140421013091815, y);
__nargs = 3;
__arg0 = x140421013091815;
__arg1 = x140421013091879;
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
Obj x140421013626375 = __arg1;
Obj x140421013091815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = x140421013091815;
__arg2 = x140421013626375;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140421013110375 = __arg1;
Obj x140421013110407 = __arg2;
Obj x140421013682535 = PRIM_EQ(Nil, x140421013110407);
if (True == x140421013682535) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140421013090567 = makeNative(13, clofun9, 0, 2, x140421013110407, x140421013110375);
Obj x140421013684103 = PRIM_ISCONS(x140421013110407);
if (True == x140421013684103) {
Obj x140421013623399 = PRIM_CAR(x140421013110407);
Obj x140421013623431 = PRIM_ISCONS(x140421013623399);
if (True == x140421013623431) {
Obj x140421013623847 = PRIM_CAR(x140421013110407);
Obj x140421013623879 = PRIM_CAR(x140421013623847);
Obj x = x140421013623879;
Obj x140421013624135 = PRIM_CAR(x140421013110407);
Obj x140421013624167 = PRIM_CDR(x140421013624135);
Obj y = x140421013624167;
Obj x140421013624327 = PRIM_CDR(x140421013110407);
Obj x140421013624615 = PRIM_EQ(x140421013110375, x);
if (True == x140421013624615) {
Obj x140421013624711 = makeCons(x, y);
__nargs = 2;
__arg1 = x140421013624711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140421013090567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013090567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140421013090567;
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
Obj x140421013683079 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140421013683079) {
Obj x140421013683399 = PRIM_CAR(closureRef(co, 0));
Obj x140421013683623 = PRIM_CDR(closureRef(co, 0));
Obj y = x140421013683623;
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

