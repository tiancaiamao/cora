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
Obj _3518367_37 = __arg1;
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
Obj _3518368_37 = __arg1;
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
Obj _3518369_37 = __arg1;
Obj _3518370_37 = primSet(co, __symbolTable[134], Nil);
Obj _3518385_37 = primSet(co, __symbolTable[133], makeNative(12, clofun9, 2, 0));
Obj _3518391_37 = primSet(co, __symbolTable[131], makeNative(10, clofun9, 3, 0));
Obj _3518401_37 = primSet(co, __symbolTable[130], makeNative(8, clofun9, 3, 0));
Obj _3518402_37 = primSet(co, __symbolTable[129], makeNative(7, clofun9, 2, 0));
Obj _3518409_37 = primSet(co, __symbolTable[128], makeNative(5, clofun9, 2, 0));
Obj _3518410_37 = makeCons(makeCString("primSet"), Nil);
Obj _3518411_37 = makeCons(MAKE_NUMBER(2), _3518410_37);
Obj _3518412_37 = makeCons(__symbolTable[126], _3518411_37);
Obj _3518413_37 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _3518414_37 = makeCons(MAKE_NUMBER(1), _3518413_37);
Obj _3518415_37 = makeCons(__symbolTable[125], _3518414_37);
Obj _3518416_37 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _3518417_37 = makeCons(MAKE_NUMBER(1), _3518416_37);
Obj _3518418_37 = makeCons(__symbolTable[124], _3518417_37);
Obj _3518419_37 = makeCons(makeCString("makeCons"), Nil);
Obj _3518420_37 = makeCons(MAKE_NUMBER(2), _3518419_37);
Obj _3518421_37 = makeCons(__symbolTable[123], _3518420_37);
Obj _3518422_37 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _3518423_37 = makeCons(MAKE_NUMBER(1), _3518422_37);
Obj _3518424_37 = makeCons(__symbolTable[122], _3518423_37);
Obj _3518425_37 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _3518426_37 = makeCons(MAKE_NUMBER(2), _3518425_37);
Obj _3518427_37 = makeCons(__symbolTable[121], _3518426_37);
Obj _3518428_37 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _3518429_37 = makeCons(MAKE_NUMBER(2), _3518428_37);
Obj _3518430_37 = makeCons(__symbolTable[120], _3518429_37);
Obj _3518431_37 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _3518432_37 = makeCons(MAKE_NUMBER(2), _3518431_37);
Obj _3518433_37 = makeCons(__symbolTable[119], _3518432_37);
Obj _3518434_37 = makeCons(makeCString("primDiv"), Nil);
Obj _3518435_37 = makeCons(MAKE_NUMBER(2), _3518434_37);
Obj _3518436_37 = makeCons(__symbolTable[118], _3518435_37);
Obj _3518437_37 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _3518438_37 = makeCons(MAKE_NUMBER(2), _3518437_37);
Obj _3518439_37 = makeCons(__symbolTable[117], _3518438_37);
Obj _3518440_37 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _3518441_37 = makeCons(MAKE_NUMBER(2), _3518440_37);
Obj _3518442_37 = makeCons(__symbolTable[116], _3518441_37);
Obj _3518443_37 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _3518444_37 = makeCons(MAKE_NUMBER(2), _3518443_37);
Obj _3518445_37 = makeCons(__symbolTable[115], _3518444_37);
Obj _3518446_37 = makeCons(makeCString("primGenSym"), Nil);
Obj _3518447_37 = makeCons(MAKE_NUMBER(0), _3518446_37);
Obj _3518448_37 = makeCons(__symbolTable[114], _3518447_37);
Obj _3518449_37 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _3518450_37 = makeCons(MAKE_NUMBER(1), _3518449_37);
Obj _3518451_37 = makeCons(__symbolTable[113], _3518450_37);
Obj _3518452_37 = makeCons(makeCString("primNot"), Nil);
Obj _3518453_37 = makeCons(MAKE_NUMBER(1), _3518452_37);
Obj _3518454_37 = makeCons(__symbolTable[112], _3518453_37);
Obj _3518455_37 = makeCons(makeCString("primIsNumber"), Nil);
Obj _3518456_37 = makeCons(MAKE_NUMBER(1), _3518455_37);
Obj _3518457_37 = makeCons(__symbolTable[111], _3518456_37);
Obj _3518458_37 = makeCons(makeCString("primIsString"), Nil);
Obj _3518459_37 = makeCons(MAKE_NUMBER(1), _3518458_37);
Obj _3518460_37 = makeCons(__symbolTable[110], _3518459_37);
Obj _3518461_37 = makeCons(_3518460_37, Nil);
Obj _3518462_37 = makeCons(_3518457_37, _3518461_37);
Obj _3518463_37 = makeCons(_3518454_37, _3518462_37);
Obj _3518464_37 = makeCons(_3518451_37, _3518463_37);
Obj _3518465_37 = makeCons(_3518448_37, _3518464_37);
Obj _3518466_37 = makeCons(_3518445_37, _3518465_37);
Obj _3518467_37 = makeCons(_3518442_37, _3518466_37);
Obj _3518468_37 = makeCons(_3518439_37, _3518467_37);
Obj _3518469_37 = makeCons(_3518436_37, _3518468_37);
Obj _3518470_37 = makeCons(_3518433_37, _3518469_37);
Obj _3518471_37 = makeCons(_3518430_37, _3518470_37);
Obj _3518472_37 = makeCons(_3518427_37, _3518471_37);
Obj _3518473_37 = makeCons(_3518424_37, _3518472_37);
Obj _3518474_37 = makeCons(_3518421_37, _3518473_37);
Obj _3518475_37 = makeCons(_3518418_37, _3518474_37);
Obj _3518476_37 = makeCons(_3518415_37, _3518475_37);
Obj _3518477_37 = makeCons(_3518412_37, _3518476_37);
Obj _3518478_37 = primSet(co, __symbolTable[127], _3518477_37);
Obj _3518482_37 = primSet(co, __symbolTable[109], makeNative(2, clofun9, 1, 0));
Obj _3518485_37 = primSet(co, __symbolTable[107], makeNative(49, clofun8, 1, 0));
Obj _3518488_37 = primSet(co, __symbolTable[105], makeNative(46, clofun8, 1, 0));
Obj _3518493_37 = primSet(co, __symbolTable[103], makeNative(45, clofun8, 2, 0));
Obj _3518687_37 = primSet(co, __symbolTable[102], makeNative(13, clofun8, 3, 0));
Obj _3518698_37 = primSet(co, __symbolTable[86], makeNative(9, clofun8, 2, 0));
Obj _3518709_37 = primSet(co, __symbolTable[85], makeNative(5, clofun8, 2, 0));
Obj _3518760_37 = primSet(co, __symbolTable[84], makeNative(49, clofun7, 1, 0));
Obj _3518935_37 = primSet(co, __symbolTable[82], makeNative(29, clofun7, 1, 0));
Obj _3519008_37 = primSet(co, __symbolTable[76], makeNative(17, clofun7, 2, 0));
Obj _3519011_37 = primSet(co, __symbolTable[75], makeNative(16, clofun7, 1, 0));
Obj _3519148_37 = primSet(co, __symbolTable[74], makeNative(0, clofun7, 2, 0));
Obj _3519171_37 = primSet(co, __symbolTable[73], makeNative(43, clofun6, 3, 0));
Obj _3519250_37 = primSet(co, __symbolTable[68], makeNative(28, clofun6, 2, 0));
Obj _3519310_37 = primSet(co, __symbolTable[66], makeNative(19, clofun6, 2, 0));
Obj _3519318_37 = primSet(co, __symbolTable[64], makeNative(15, clofun6, 2, 0));
Obj _3519325_37 = primSet(co, __symbolTable[71], makeNative(13, clofun6, 2, 0));
Obj _3519345_37 = primSet(co, __symbolTable[62], makeNative(1, clofun6, 5, 0));
Obj _3519350_37 = primSet(co, __symbolTable[99], makeNative(48, clofun5, 2, 0));
Obj _3519356_37 = primSet(co, __symbolTable[57], makeNative(46, clofun5, 3, 0));
Obj _3519357_37 = primSet(co, __symbolTable[56], makeNative(45, clofun5, 2, 0));
Obj _3519648_37 = primSet(co, __symbolTable[59], makeNative(45, clofun3, 5, 0));
Obj _3519662_37 = primSet(co, __symbolTable[50], makeNative(37, clofun3, 5, 0));
Obj _3519701_37 = primSet(co, __symbolTable[53], makeNative(13, clofun3, 5, 0));
Obj _3519702_37 = primSet(co, __symbolTable[51], MAKE_NUMBER(50));
Obj _3519706_37 = primSet(co, __symbolTable[54], makeNative(11, clofun3, 3, 0));
Obj _3519710_37 = primSet(co, __symbolTable[46], makeNative(7, clofun3, 3, 0));
Obj _3519718_37 = primSet(co, __symbolTable[45], makeNative(0, clofun3, 3, 0));
Obj _3519723_37 = primSet(co, __symbolTable[43], makeNative(45, clofun2, 3, 0));
Obj _3519730_37 = primSet(co, __symbolTable[42], makeNative(43, clofun2, 4, 0));
Obj _3519793_37 = primSet(co, __symbolTable[41], makeNative(32, clofun2, 4, 0));
Obj _3519794_37 = primSet(co, __symbolTable[39], makeNative(31, clofun2, 2, 0));
Obj _3519795_37 = primSet(co, __symbolTable[38], makeNative(30, clofun2, 1, 0));
Obj _3519796_37 = primSet(co, __symbolTable[37], makeNative(29, clofun2, 1, 0));
Obj _3519797_37 = primSet(co, __symbolTable[36], makeNative(28, clofun2, 1, 0));
Obj _3519807_37 = primSet(co, __symbolTable[35], makeNative(22, clofun2, 1, 0));
Obj _3519814_37 = primSet(co, __symbolTable[33], makeNative(21, clofun2, 2, 0));
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
Obj _3519817_37 = __arg1;
Obj _3519823_37 = primSet(co, __symbolTable[29], makeNative(12, clofun2, 2, 0));
Obj _3519829_37 = primSet(co, __symbolTable[47], makeNative(10, clofun2, 2, 0));
Obj _3519836_37 = primSet(co, __symbolTable[28], makeNative(6, clofun2, 3, 0));
Obj _3519857_37 = primSet(co, __symbolTable[27], makeNative(34, clofun1, 4, 0));
Obj _3519872_37 = primSet(co, __symbolTable[26], makeNative(30, clofun1, 4, 0));
Obj _3519887_37 = primSet(co, __symbolTable[25], makeNative(15, clofun1, 2, 0));
Obj _3519897_37 = primSet(co, __symbolTable[23], makeNative(3, clofun1, 3, 0));
Obj _3519938_37 = primSet(co, __symbolTable[22], makeNative(47, clofun0, 1, 0));
Obj _3519977_37 = primSet(co, __symbolTable[17], makeNative(42, clofun0, 4, 0));
Obj _3520029_37 = primSet(co, __symbolTable[9], makeNative(33, clofun0, 2, 0));
Obj _3520030_37 = primSet(co, __symbolTable[8], makeNative(32, clofun0, 2, 0));
Obj _3520044_37 = primSet(co, __symbolTable[6], makeNative(23, clofun0, 1, 0));
Obj _3520045_37 = primSet(co, __symbolTable[7], False);
Obj _3520058_37 = primSet(co, __symbolTable[5], makeNative(13, clofun0, 1, 0));
Obj _3520068_37 = primSet(co, __symbolTable[3], makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = _3520068_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _3520059_37 = primGenSym();
Obj globals = _3520059_37;
Obj _3520060_37 = primSet(co, globals, Nil);
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
Obj _3520061_37 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, _3520061_37, to, globals);
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
Obj _3520062_37 = __arg1;
Obj _3520061_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, _3520061_37, to, globals);
__nargs = 2;
__arg0 = globalRef(__symbolTable[2]);
__arg1 = _3520062_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3520063_37 = __arg1;
Obj _3520061_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = _3520061_37;
__arg1 = _3520063_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3520064_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = _3520064_37;
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
Obj _3520065_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = _3520065_37;
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
Obj _3520066_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun0, 1, stream);
__nargs = 4;
__arg0 = globalRef(__symbolTable[23]);
__arg1 = stream;
__arg2 = bc;
__arg3 = _3520066_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3520067_37 = __arg1;
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
Obj _3520046_37 = __arg1;
Obj sexp = _3520046_37;
Obj _3518365_37 = makeNative(22, clofun0, 1, 1, sexp);
pushCont(co, 15, clofun0, 2, _3518365_37, sexp);
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
Obj _3520049_37 = __arg1;
Obj _3518365_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3520049_37) {
Obj _3520050_37 = PRIM_CAR(sexp);
Obj _3520051_37 = PRIM_EQ(__symbolTable[19], _3520050_37);
if (True == _3520051_37) {
pushCont(co, 20, clofun0, 1, sexp);
__nargs = 2;
__arg0 = _3518365_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 1, sexp);
__nargs = 2;
__arg0 = _3518365_37;
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
__arg0 = _3518365_37;
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
Obj _3520056_37 = __arg1;
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
Obj _3520057_37 = __arg1;
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
Obj _3520054_37 = __arg1;
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
Obj _3520055_37 = __arg1;
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
Obj _3520052_37 = __arg1;
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
Obj _3520053_37 = __arg1;
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
Obj _3518366_37 = __arg1;
if (True == _3518366_37) {
Obj _3520047_37 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg1 = _3520047_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3520048_37 = makeCons(closureRef(co, 0), Nil);
__nargs = 2;
__arg1 = _3520048_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label23:
{
Obj _3518353_37 = __arg1;
Obj _3518354_37 = makeNative(26, clofun0, 0, 1, _3518353_37);
Obj _3520039_37 = PRIM_ISCONS(_3518353_37);
if (True == _3520039_37) {
Obj _3520040_37 = PRIM_CAR(_3518353_37);
Obj _3520041_37 = PRIM_EQ(__symbolTable[18], _3520040_37);
if (True == _3520041_37) {
Obj _3520042_37 = PRIM_CDR(_3518353_37);
Obj more = _3520042_37;
Obj _3520043_37 = makeCons(__symbolTable[18], more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = _3520043_37;
__arg2 = makeNative(24, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518354_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518354_37;
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
Obj _3518355_37 = makeNative(29, clofun0, 0, 1, closureRef(co, 0));
Obj _3520034_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3520034_37) {
Obj _3520035_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520036_37 = PRIM_EQ(__symbolTable[19], _3520035_37);
if (True == _3520036_37) {
Obj _3520037_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3520037_37;
Obj _3520038_37 = makeCons(__symbolTable[19], more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = _3520038_37;
__arg2 = makeNative(27, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518355_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518355_37;
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
Obj _3520031_37 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = _3520031_37;
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
Obj _3520032_37 = __arg1;
Obj _3520033_37 = makeCons(__symbolTable[19], _3520032_37);
__nargs = 2;
__arg1 = _3520033_37;
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
Obj _3518346_37 = __arg1;
Obj _3518347_37 = __arg2;
Obj _3518348_37 = makeNative(35, clofun0, 0, 2, _3518346_37, _3518347_37);
Obj _3520017_37 = PRIM_ISCONS(_3518346_37);
if (True == _3520017_37) {
Obj _3520018_37 = PRIM_CAR(_3518346_37);
Obj _3520019_37 = PRIM_EQ(__symbolTable[18], _3520018_37);
if (True == _3520019_37) {
Obj _3520020_37 = PRIM_CDR(_3518346_37);
Obj _3520021_37 = PRIM_ISCONS(_3520020_37);
if (True == _3520021_37) {
Obj _3520022_37 = PRIM_CDR(_3518346_37);
Obj _3520023_37 = PRIM_CAR(_3520022_37);
Obj name = _3520023_37;
Obj _3520024_37 = PRIM_CDR(_3518346_37);
Obj _3520025_37 = PRIM_CDR(_3520024_37);
Obj more = _3520025_37;
pushCont(co, 34, clofun0, 1, name);
__nargs = 3;
__arg0 = globalRef(__symbolTable[9]);
__arg1 = more;
__arg2 = _3518347_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518348_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518348_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518348_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _3520026_37 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520027_37 = makeCons(name, _3520026_37);
Obj _3520028_37 = makeCons(__symbolTable[18], _3520027_37);
__nargs = 2;
__arg1 = _3520028_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj _3518349_37 = makeNative(37, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519996_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519996_37) {
Obj _3519997_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519998_37 = PRIM_ISCONS(_3519997_37);
if (True == _3519998_37) {
Obj _3519999_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520000_37 = PRIM_CAR(_3519999_37);
Obj _3520001_37 = PRIM_EQ(__symbolTable[21], _3520000_37);
if (True == _3520001_37) {
Obj _3520002_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520003_37 = PRIM_CDR(_3520002_37);
Obj _3520004_37 = PRIM_ISCONS(_3520003_37);
if (True == _3520004_37) {
Obj _3520005_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520006_37 = PRIM_CDR(_3520005_37);
Obj _3520007_37 = PRIM_CAR(_3520006_37);
Obj pkg = _3520007_37;
Obj _3520008_37 = PRIM_CAR(closureRef(co, 0));
Obj _3520009_37 = PRIM_CDR(_3520008_37);
Obj _3520010_37 = PRIM_CDR(_3520009_37);
Obj _3520011_37 = PRIM_EQ(Nil, _3520010_37);
if (True == _3520011_37) {
Obj _3520012_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3520012_37;
Obj _3520013_37 = makeCons(pkg, Nil);
Obj _3520014_37 = makeCons(__symbolTable[21], _3520013_37);
pushCont(co, 36, clofun0, 1, _3520014_37);
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
__arg0 = _3518349_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518349_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518349_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518349_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518349_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _3520015_37 = __arg1;
Obj _3520014_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3520016_37 = makeCons(_3520014_37, _3520015_37);
__nargs = 2;
__arg1 = _3520016_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _3518350_37 = makeNative(39, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519984_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519984_37) {
Obj _3519985_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519986_37 = PRIM_ISCONS(_3519985_37);
if (True == _3519986_37) {
Obj _3519987_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519988_37 = PRIM_CAR(_3519987_37);
Obj _3519989_37 = PRIM_EQ(__symbolTable[20], _3519988_37);
if (True == _3519989_37) {
Obj _3519990_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519991_37 = PRIM_CDR(_3519990_37);
Obj symbols = _3519991_37;
Obj _3519992_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3519992_37;
Obj _3519993_37 = makeCons(__symbolTable[20], symbols);
pushCont(co, 38, clofun0, 1, _3519993_37);
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
__arg0 = _3518350_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518350_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518350_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _3519994_37 = __arg1;
Obj _3519993_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519995_37 = makeCons(_3519993_37, _3519994_37);
__nargs = 2;
__arg1 = _3519995_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj _3518351_37 = makeNative(41, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj _3519978_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519978_37) {
Obj _3519979_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519980_37 = PRIM_EQ(__symbolTable[19], _3519979_37);
if (True == _3519980_37) {
Obj _3519981_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3519981_37;
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
__arg0 = _3518351_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518351_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _3519982_37 = __arg1;
Obj _3519983_37 = makeCons(__symbolTable[19], _3519982_37);
__nargs = 2;
__arg1 = _3519983_37;
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
Obj _3518338_37 = __arg1;
Obj _3518339_37 = __arg2;
Obj _3518340_37 = __arg3;
Obj _3518341_37 = co->args[4];
Obj _3519939_37 = PRIM_EQ(Nil, _3518338_37);
if (True == _3519939_37) {
pushCont(co, 45, clofun0, 2, _3518340_37, _3518341_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3518339_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3518343_37 = makeNative(43, clofun0, 0, 4, _3518338_37, _3518339_37, _3518340_37, _3518341_37);
Obj _3519966_37 = PRIM_ISCONS(_3518338_37);
if (True == _3519966_37) {
Obj _3519967_37 = PRIM_CAR(_3518338_37);
Obj _3519968_37 = PRIM_ISCONS(_3519967_37);
if (True == _3519968_37) {
Obj _3519969_37 = PRIM_CAR(_3518338_37);
Obj _3519970_37 = PRIM_CAR(_3519969_37);
Obj _3519971_37 = PRIM_EQ(__symbolTable[10], _3519970_37);
if (True == _3519971_37) {
Obj _3519972_37 = PRIM_CAR(_3518338_37);
Obj _3519973_37 = PRIM_CDR(_3519972_37);
Obj exp = _3519973_37;
Obj _3519974_37 = PRIM_CDR(_3518338_37);
Obj more = _3519974_37;
Obj _3519975_37 = makeCons(__symbolTable[19], exp);
Obj _3519976_37 = makeCons(_3519975_37, _3518339_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3519976_37;
__arg3 = _3518340_37;
co->args[4] = _3518341_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518343_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518343_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518343_37;
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
Obj _3518344_37 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3519955_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519955_37) {
Obj _3519956_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519957_37 = PRIM_ISCONS(_3519956_37);
if (True == _3519957_37) {
Obj _3519958_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519959_37 = PRIM_CAR(_3519958_37);
Obj _3519960_37 = PRIM_EQ(__symbolTable[12], _3519959_37);
if (True == _3519960_37) {
Obj _3519961_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519962_37 = PRIM_CDR(_3519961_37);
Obj exp = _3519962_37;
Obj _3519963_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3519963_37;
Obj _3519964_37 = makeCons(__symbolTable[11], exp);
Obj _3519965_37 = makeCons(_3519964_37, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3519965_37;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518344_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518344_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518344_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _3519942_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519942_37) {
Obj _3519943_37 = PRIM_CAR(closureRef(co, 0));
Obj exp = _3519943_37;
Obj _3519944_37 = PRIM_CDR(closureRef(co, 0));
Obj more = _3519944_37;
Obj _3519945_37 = makeCons(exp, Nil);
Obj _3519946_37 = makeCons(__symbolTable[14], _3519945_37);
Obj _3519947_37 = makeCons(_3519946_37, Nil);
Obj _3519948_37 = makeCons(__symbolTable[15], _3519947_37);
Obj _3519949_37 = makeCons(__symbolTable[13], Nil);
Obj _3519950_37 = makeCons(_3519949_37, Nil);
Obj _3519951_37 = makeCons(_3519948_37, _3519950_37);
Obj _3519952_37 = makeCons(__symbolTable[16], _3519951_37);
Obj _3519953_37 = makeCons(_3519952_37, closureRef(co, 1));
Obj _3519954_37 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(__symbolTable[17]);
__arg1 = more;
__arg2 = _3519953_37;
__arg3 = _3519954_37;
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
Obj _3519940_37 = __arg1;
Obj _3518340_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518341_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun0, 2, _3518341_37, _3519940_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3518340_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3519941_37 = __arg1;
Obj _3518341_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519940_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = _3518341_37;
__arg1 = _3519940_37;
__arg2 = _3519941_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3518332_37 = __arg1;
Obj _3518333_37 = makeNative(48, clofun0, 0, 1, _3518332_37);
Obj _3519929_37 = PRIM_ISCONS(_3518332_37);
if (True == _3519929_37) {
Obj _3519930_37 = PRIM_CAR(_3518332_37);
Obj _3519931_37 = PRIM_EQ(__symbolTable[18], _3519930_37);
if (True == _3519931_37) {
Obj _3519932_37 = PRIM_CDR(_3518332_37);
Obj _3519933_37 = PRIM_ISCONS(_3519932_37);
if (True == _3519933_37) {
Obj _3519934_37 = PRIM_CDR(_3518332_37);
Obj _3519935_37 = PRIM_CAR(_3519934_37);
Obj _3519936_37 = PRIM_CDR(_3518332_37);
Obj _3519937_37 = PRIM_CDR(_3519936_37);
Obj remain = _3519937_37;
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
__arg0 = _3518333_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518333_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518333_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _3518334_37 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj _3519925_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519925_37) {
Obj _3519926_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519927_37 = PRIM_EQ(__symbolTable[19], _3519926_37);
if (True == _3519927_37) {
Obj _3519928_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3519928_37;
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
__arg0 = _3518334_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518334_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _3518335_37 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj _3519916_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519916_37) {
Obj _3519917_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519918_37 = PRIM_ISCONS(_3519917_37);
if (True == _3519918_37) {
Obj _3519919_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519920_37 = PRIM_CAR(_3519919_37);
Obj _3519921_37 = PRIM_EQ(__symbolTable[20], _3519920_37);
if (True == _3519921_37) {
Obj _3519922_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519923_37 = PRIM_CDR(_3519922_37);
Obj _3519924_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3519924_37;
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
__arg0 = _3518335_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518335_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518335_37;
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
Obj _3518336_37 = makeNative(2, clofun1, 0, 0);
Obj _3519898_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519898_37) {
Obj _3519899_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519900_37 = PRIM_ISCONS(_3519899_37);
if (True == _3519900_37) {
Obj _3519901_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519902_37 = PRIM_CAR(_3519901_37);
Obj _3519903_37 = PRIM_EQ(__symbolTable[21], _3519902_37);
if (True == _3519903_37) {
Obj _3519904_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519905_37 = PRIM_CDR(_3519904_37);
Obj _3519906_37 = PRIM_ISCONS(_3519905_37);
if (True == _3519906_37) {
Obj _3519907_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519908_37 = PRIM_CDR(_3519907_37);
Obj _3519909_37 = PRIM_CAR(_3519908_37);
Obj pkg = _3519909_37;
Obj _3519910_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519911_37 = PRIM_CDR(_3519910_37);
Obj _3519912_37 = PRIM_CDR(_3519911_37);
Obj _3519913_37 = PRIM_EQ(Nil, _3519912_37);
if (True == _3519913_37) {
Obj _3519914_37 = PRIM_CDR(closureRef(co, 0));
Obj remain = _3519914_37;
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
__arg0 = _3518336_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518336_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518336_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518336_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518336_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3519915_37 = __arg1;
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
Obj _3519888_37 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = _3519888_37;
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
Obj _3519889_37 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = _3519889_37;
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
Obj _3519890_37 = __arg1;
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
Obj _3519891_37 = __arg1;
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
Obj _3519894_37 = __arg1;
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
Obj _3519895_37 = __arg1;
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
Obj _3519896_37 = __arg1;
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
Obj _3519892_37 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
__nargs = 4;
__arg0 = globalRef(__symbolTable[46]);
__arg1 = closureRef(co, 1);
__arg2 = _3519892_37;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3519893_37 = __arg1;
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
Obj _3519873_37 = __arg1;
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
Obj _3519874_37 = __arg1;
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
Obj _3519875_37 = __arg1;
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
Obj _3519876_37 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = to;
__arg2 = _3519876_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _3519877_37 = __arg1;
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
Obj _3519878_37 = __arg1;
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
Obj _3519886_37 = __arg1;
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
Obj _3519879_37 = __arg1;
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
Obj _3519880_37 = __arg1;
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
Obj _3519881_37 = __arg1;
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
Obj _3519882_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, acc);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 0);
__arg2 = _3519882_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3519883_37 = __arg1;
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
Obj _3519884_37 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519885_37 = PRIM_ADD(acc, MAKE_NUMBER(1));
__nargs = 2;
__arg1 = _3519885_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj _3518326_37 = __arg1;
Obj _3518327_37 = __arg2;
Obj _3518328_37 = __arg3;
Obj _3518329_37 = co->args[4];
Obj _3519858_37 = PRIM_EQ(Nil, _3518329_37);
if (True == _3519858_37) {
pushCont(co, 32, clofun1, 2, _3518328_37, _3518326_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = _3518328_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3519863_37 = PRIM_ISCONS(_3518329_37);
if (True == _3519863_37) {
Obj _3519864_37 = PRIM_CAR(_3518329_37);
Obj bc = _3519864_37;
Obj _3519865_37 = PRIM_CDR(_3518329_37);
Obj more = _3519865_37;
Obj _3519866_37 = PRIM_EQ(_3518327_37, globalRef(__symbolTable[51]));
if (True == _3519866_37) {
pushCont(co, 31, clofun1, 3, _3518326_37, bc, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3518328_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3519870_37 = PRIM_ADD(_3518327_37, MAKE_NUMBER(1));
Obj _3519871_37 = makeCons(bc, _3518328_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3518326_37;
__arg2 = _3519870_37;
__arg3 = _3519871_37;
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
Obj _3519867_37 = __arg1;
Obj _3518326_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519868_37 = makeCons(_3519867_37, _3518326_37);
Obj _3519869_37 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(__symbolTable[26]);
__arg1 = _3519868_37;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _3519869_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3519859_37 = __arg1;
Obj _3518328_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518326_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519860_37 = primNot(_3519859_37);
if (True == _3519860_37) {
pushCont(co, 33, clofun1, 1, _3518326_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3518328_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3518326_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3519861_37 = __arg1;
Obj _3518326_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519862_37 = makeCons(_3519861_37, _3518326_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3519862_37;
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
Obj _3519837_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun1, 4, maxid, globals, group, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[46]);
__arg1 = to;
__arg2 = _3519837_37;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3519838_37 = __arg1;
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
Obj _3519839_37 = __arg1;
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
Obj _3519840_37 = __arg1;
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
Obj _3519841_37 = __arg1;
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
Obj _3519842_37 = __arg1;
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
Obj _3519843_37 = __arg1;
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
Obj _3519844_37 = __arg1;
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
Obj _3519845_37 = __arg1;
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
Obj _3519846_37 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun1, 4, maxid, globals, group, to);
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = _3519846_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _3519847_37 = __arg1;
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
Obj _3519848_37 = __arg1;
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
Obj _3519849_37 = __arg1;
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
Obj _3519850_37 = __arg1;
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
Obj _3519851_37 = __arg1;
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
Obj _3519852_37 = __arg1;
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
Obj _3519853_37 = __arg1;
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
Obj _3519854_37 = __arg1;
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
Obj _3519855_37 = __arg1;
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
Obj _3519856_37 = __arg1;
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
Obj _3519830_37 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _3519830_37) {
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
Obj _3519832_37 = PRIM_LT(i, n);
if (True == _3519832_37) {
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
Obj _3519833_37 = __arg1;
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
Obj _3519834_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519835_37 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[28]);
__arg1 = to;
__arg2 = _3519835_37;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3519831_37 = __arg1;
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
Obj _3518322_37 = __arg1;
Obj _3518323_37 = __arg2;
Obj _3519824_37 = PRIM_EQ(Nil, _3518323_37);
if (True == _3519824_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519825_37 = PRIM_ISCONS(_3518323_37);
if (True == _3519825_37) {
Obj _3519826_37 = PRIM_CAR(_3518323_37);
Obj x = _3519826_37;
Obj _3519827_37 = PRIM_CDR(_3518323_37);
Obj y = _3519827_37;
pushCont(co, 11, clofun2, 2, _3518322_37, y);
__nargs = 2;
__arg0 = _3518322_37;
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
Obj _3519828_37 = __arg1;
Obj _3518322_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = _3518322_37;
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
Obj _3519818_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
__nargs = 2;
__arg0 = _3519818_37;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3519819_37 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[38]);
__arg1 = _3519819_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3519820_37 = __arg1;
PUSH_CONT_0(co, 16, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[37]);
__arg1 = _3519820_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3519821_37 = __arg1;
PUSH_CONT_0(co, 17, clofun2);
__nargs = 2;
__arg0 = globalRef(__symbolTable[36]);
__arg1 = _3519821_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3519822_37 = __arg1;
__nargs = 2;
__arg0 = globalRef(__symbolTable[35]);
__arg1 = _3519822_37;
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
Obj _3519815_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = _3519815_37;
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
Obj _3519816_37 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = _3519816_37;
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
Obj _3518318_37 = __arg1;
Obj _3518319_37 = __arg2;
Obj _3519808_37 = PRIM_EQ(Nil, _3518319_37);
if (True == _3519808_37) {
__nargs = 2;
__arg1 = _3518318_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519809_37 = PRIM_ISCONS(_3518319_37);
if (True == _3519809_37) {
Obj _3519810_37 = PRIM_CAR(_3518319_37);
Obj hd = _3519810_37;
Obj _3519811_37 = PRIM_CDR(_3518319_37);
Obj more = _3519811_37;
Obj _3519812_37 = makeCons(_3518318_37, Nil);
Obj _3519813_37 = makeCons(hd, _3519812_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[33]);
__arg1 = _3519813_37;
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
Obj _3519798_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = _3519798_37;
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
Obj _3519799_37 = __arg1;
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
Obj _3519800_37 = __arg1;
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
Obj _3519801_37 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = _3519801_37;
Obj _3519802_37 = makeCons(e1, Nil);
Obj _3519803_37 = makeCons(Nil, _3519802_37);
Obj _3519804_37 = makeCons(Nil, _3519803_37);
Obj _3519805_37 = makeCons(__symbolTable[94], _3519804_37);
pushCont(co, 27, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = v;
__arg2 = _3519805_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3519806_37 = __arg1;
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
Obj _3518312_37 = __arg1;
Obj _3518313_37 = __arg2;
Obj _3518314_37 = __arg3;
Obj _3518315_37 = co->args[4];
Obj _3518316_37 = makeNative(40, clofun2, 0, 1, _3518313_37);
Obj _3519733_37 = PRIM_ISCONS(_3518313_37);
if (True == _3519733_37) {
Obj _3519734_37 = PRIM_CAR(_3518313_37);
Obj label = _3519734_37;
Obj _3519735_37 = PRIM_CDR(_3518313_37);
Obj _3519736_37 = PRIM_ISCONS(_3519735_37);
if (True == _3519736_37) {
Obj _3519737_37 = PRIM_CDR(_3518313_37);
Obj _3519738_37 = PRIM_CAR(_3519737_37);
Obj _3519739_37 = PRIM_ISCONS(_3519738_37);
if (True == _3519739_37) {
Obj _3519740_37 = PRIM_CDR(_3518313_37);
Obj _3519741_37 = PRIM_CAR(_3519740_37);
Obj _3519742_37 = PRIM_CAR(_3519741_37);
Obj _3519743_37 = PRIM_EQ(__symbolTable[94], _3519742_37);
if (True == _3519743_37) {
Obj _3519744_37 = PRIM_CDR(_3518313_37);
Obj _3519745_37 = PRIM_CAR(_3519744_37);
Obj _3519746_37 = PRIM_CDR(_3519745_37);
Obj _3519747_37 = PRIM_ISCONS(_3519746_37);
if (True == _3519747_37) {
Obj _3519748_37 = PRIM_CDR(_3518313_37);
Obj _3519749_37 = PRIM_CAR(_3519748_37);
Obj _3519750_37 = PRIM_CDR(_3519749_37);
Obj _3519751_37 = PRIM_CAR(_3519750_37);
Obj params = _3519751_37;
Obj _3519752_37 = PRIM_CDR(_3518313_37);
Obj _3519753_37 = PRIM_CAR(_3519752_37);
Obj _3519754_37 = PRIM_CDR(_3519753_37);
Obj _3519755_37 = PRIM_CDR(_3519754_37);
Obj _3519756_37 = PRIM_ISCONS(_3519755_37);
if (True == _3519756_37) {
Obj _3519757_37 = PRIM_CDR(_3518313_37);
Obj _3519758_37 = PRIM_CAR(_3519757_37);
Obj _3519759_37 = PRIM_CDR(_3519758_37);
Obj _3519760_37 = PRIM_CDR(_3519759_37);
Obj _3519761_37 = PRIM_CAR(_3519760_37);
Obj actives = _3519761_37;
Obj _3519762_37 = PRIM_CDR(_3518313_37);
Obj _3519763_37 = PRIM_CAR(_3519762_37);
Obj _3519764_37 = PRIM_CDR(_3519763_37);
Obj _3519765_37 = PRIM_CDR(_3519764_37);
Obj _3519766_37 = PRIM_CDR(_3519765_37);
Obj _3519767_37 = PRIM_ISCONS(_3519766_37);
if (True == _3519767_37) {
Obj _3519768_37 = PRIM_CDR(_3518313_37);
Obj _3519769_37 = PRIM_CAR(_3519768_37);
Obj _3519770_37 = PRIM_CDR(_3519769_37);
Obj _3519771_37 = PRIM_CDR(_3519770_37);
Obj _3519772_37 = PRIM_CDR(_3519771_37);
Obj _3519773_37 = PRIM_CAR(_3519772_37);
Obj body = _3519773_37;
Obj _3519774_37 = PRIM_CDR(_3518313_37);
Obj _3519775_37 = PRIM_CAR(_3519774_37);
Obj _3519776_37 = PRIM_CDR(_3519775_37);
Obj _3519777_37 = PRIM_CDR(_3519776_37);
Obj _3519778_37 = PRIM_CDR(_3519777_37);
Obj _3519779_37 = PRIM_CDR(_3519778_37);
Obj _3519780_37 = PRIM_EQ(Nil, _3519779_37);
if (True == _3519780_37) {
Obj _3519781_37 = PRIM_CDR(_3518313_37);
Obj _3519782_37 = PRIM_CDR(_3519781_37);
Obj _3519783_37 = PRIM_EQ(Nil, _3519782_37);
if (True == _3519783_37) {
pushCont(co, 33, clofun2, 7, actives, _3518314_37, label, _3518315_37, params, body, _3518312_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518312_37;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3519784_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518314_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518315_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj _3519785_37 = PRIM_SUB(_3518314_37, label);
pushCont(co, 34, clofun2, 7, actives, _3518314_37, label, _3518315_37, params, body, _3518312_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3519785_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3519786_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518314_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518315_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 35, clofun2, 7, actives, _3518314_37, label, _3518315_37, params, body, _3518312_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518312_37;
__arg2 = _3519786_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3519787_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518314_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518315_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 36, clofun2, 7, actives, _3518314_37, label, _3518315_37, params, body, _3518312_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518312_37;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3519788_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518314_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518315_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 37, clofun2, 7, actives, _3518314_37, label, _3518315_37, params, body, _3518312_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[45]);
__arg2 = _3518312_37;
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
Obj _3519789_37 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518314_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518315_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
pushCont(co, 38, clofun2, 6, _3518314_37, label, _3518315_37, params, body, _3518312_37);
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = globalRef(__symbolTable[43]);
__arg2 = _3518312_37;
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
Obj _3519790_37 = __arg1;
Obj _3518314_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518315_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _3519791_37 = makeCons(_3518314_37, label);
pushCont(co, 39, clofun2, 1, _3518312_37);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3518315_37;
__arg2 = _3519791_37;
__arg3 = params;
co->args[4] = _3518312_37;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3519792_37 = __arg1;
Obj _3518312_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518312_37;
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
Obj _3519731_37 = __arg1;
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
Obj _3519732_37 = __arg1;
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
Obj _3518306_37 = __arg1;
Obj _3518307_37 = __arg2;
Obj _3518308_37 = __arg3;
Obj _3518309_37 = co->args[4];
Obj _3519724_37 = PRIM_EQ(Nil, _3518309_37);
if (True == _3519724_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519725_37 = PRIM_ISCONS(_3518309_37);
if (True == _3519725_37) {
Obj _3519726_37 = PRIM_CAR(_3518309_37);
Obj a = _3519726_37;
Obj _3519727_37 = PRIM_CDR(_3518309_37);
Obj b = _3519727_37;
pushCont(co, 44, clofun2, 4, _3518308_37, _3518306_37, _3518307_37, b);
__nargs = 4;
__arg0 = _3518306_37;
__arg1 = _3518307_37;
__arg2 = _3518308_37;
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
Obj _3519728_37 = __arg1;
Obj _3518308_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518306_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518307_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519729_37 = PRIM_ADD(_3518308_37, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(__symbolTable[42]);
__arg1 = _3518306_37;
__arg2 = _3518307_37;
__arg3 = _3519729_37;
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
Obj _3519719_37 = __arg1;
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
Obj _3519720_37 = __arg1;
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
Obj _3519721_37 = __arg1;
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
Obj _3519722_37 = __arg1;
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
Obj _3519711_37 = __arg1;
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
Obj _3519712_37 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519713_37 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _3519713_37) {
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
Obj _3519716_37 = __arg1;
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
Obj _3519717_37 = __arg1;
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
Obj _3519714_37 = __arg1;
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
Obj _3519715_37 = __arg1;
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
Obj _3519707_37 = __arg1;
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
Obj _3519708_37 = __arg1;
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
Obj _3519709_37 = __arg1;
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
Obj _3519703_37 = PRIM_SUB(maxid, label);
Obj _3519704_37 = primDiv(_3519703_37, globalRef(__symbolTable[51]));
Obj gid = _3519704_37;
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
Obj _3519705_37 = __arg1;
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
Obj _3518300_37 = __arg1;
Obj _3518301_37 = __arg2;
Obj _3518302_37 = __arg3;
Obj _3518303_37 = co->args[4];
Obj _3518304_37 = co->args[5];
Obj _3518305_37 = makeNative(36, clofun3, 0, 0);
Obj _3519663_37 = PRIM_ISCONS(_3518304_37);
if (True == _3519663_37) {
Obj _3519664_37 = PRIM_CAR(_3518304_37);
Obj _3519665_37 = PRIM_EQ(__symbolTable[67], _3519664_37);
if (True == _3519665_37) {
Obj _3519666_37 = PRIM_CDR(_3518304_37);
Obj _3519667_37 = PRIM_ISCONS(_3519666_37);
if (True == _3519667_37) {
Obj _3519668_37 = PRIM_CDR(_3518304_37);
Obj _3519669_37 = PRIM_CAR(_3519668_37);
Obj label = _3519669_37;
Obj _3519670_37 = PRIM_CDR(_3518304_37);
Obj _3519671_37 = PRIM_CDR(_3519670_37);
Obj stacks = _3519671_37;
Obj _3519672_37 = PRIM_EQ(stacks, Nil);
if (True == _3519672_37) {
pushCont(co, 25, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
__arg2 = makeCString("PUSH_CONT_0(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 14, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518305_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518305_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518305_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _3519687_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519688_37 = PRIM_CAR(_3518301_37);
Obj _3519689_37 = PRIM_SUB(_3519688_37, label);
pushCont(co, 15, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3519689_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3519690_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 16, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518303_37;
__arg2 = _3519690_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3519691_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 17, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _3519692_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519693_37 = PRIM_CAR(_3518301_37);
pushCont(co, 18, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = _3518303_37;
__arg2 = label;
__arg3 = _3519693_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3519694_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519695_37 = PRIM_EQ(stacks, Nil);
if (True == _3519695_37) {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
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
Obj _3519696_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
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
Obj _3519697_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 21, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518303_37;
__arg2 = _3519697_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3519698_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun3, 1, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(23, clofun3, 1, 3, _3518300_37, _3518301_37, _3518303_37);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3519700_37 = __arg1;
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
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
Obj _3519699_37 = __arg1;
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
Obj _3519673_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519674_37 = PRIM_CAR(_3518301_37);
Obj _3519675_37 = PRIM_SUB(_3519674_37, label);
pushCont(co, 26, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3519675_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3519676_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518303_37;
__arg2 = _3519676_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _3519677_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun3, 5, label, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3519678_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519679_37 = PRIM_CAR(_3518301_37);
pushCont(co, 29, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = _3518303_37;
__arg2 = label;
__arg3 = _3519679_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3519680_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3519681_37 = PRIM_EQ(stacks, Nil);
if (True == _3519681_37) {
Nil;
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 30, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
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
Obj _3519682_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
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
Obj _3519683_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun3, 4, _3518300_37, _3518301_37, stacks, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518303_37;
__arg2 = _3519683_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3519684_37 = __arg1;
Obj _3518300_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518301_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 1, _3518303_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[47]);
__arg1 = makeNative(34, clofun3, 1, 3, _3518300_37, _3518301_37, _3518303_37);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3519686_37 = __arg1;
Obj _3518303_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518303_37;
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
Obj _3519685_37 = __arg1;
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
Obj _3519649_37 = primGenSym();
Obj generate_45inst_45list_45h = _3519649_37;
Obj _3519660_37 = primSet(co, generate_45inst_45list_45h, makeNative(39, clofun3, 1, 5, globals, self, env, w, generate_45inst_45list_45h));
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
Obj _3519661_37 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3519661_37;
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
Obj _3519650_37 = PRIM_EQ(Nil, x);
if (True == _3519650_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519651_37 = PRIM_ISCONS(x);
if (True == _3519651_37) {
Obj _3519652_37 = PRIM_CAR(x);
Obj a = _3519652_37;
Obj _3519653_37 = PRIM_CDR(x);
Obj b = _3519653_37;
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
Obj _3519654_37 = __arg1;
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
Obj _3519655_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519656_37 = primNot(_3519655_37);
if (True == _3519656_37) {
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
Obj _3519659_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3519659_37;
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3519657_37 = __arg1;
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
Obj _3519658_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _3519658_37;
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
Obj _3519358_37 = primGenSym();
Obj generate_45inst_45h = _3519358_37;
Obj _3519646_37 = primSet(co, generate_45inst_45h, makeNative(47, clofun3, 2, 4, self, generate_45inst_45h, globals, w));
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
Obj _3519647_37 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = _3519647_37;
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
Obj _3519359_37 = primIsSymbol(x2);
if (True == _3519359_37) {
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
Obj _3518285_37 = makeNative(1, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), env, closureRef(co, 2), x2, closureRef(co, 3));
Obj _3519633_37 = PRIM_ISCONS(x2);
if (True == _3519633_37) {
Obj _3519634_37 = PRIM_CAR(x2);
Obj _3519635_37 = PRIM_EQ(__symbolTable[98], _3519634_37);
if (True == _3519635_37) {
Obj _3519636_37 = PRIM_CDR(x2);
Obj _3519637_37 = PRIM_ISCONS(_3519636_37);
if (True == _3519637_37) {
Obj _3519638_37 = PRIM_CDR(x2);
Obj _3519639_37 = PRIM_CAR(_3519638_37);
Obj x = _3519639_37;
Obj _3519640_37 = PRIM_CDR(x2);
Obj _3519641_37 = PRIM_CDR(_3519640_37);
Obj _3519642_37 = PRIM_EQ(Nil, _3519641_37);
if (True == _3519642_37) {
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
__arg0 = _3518285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518285_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518285_37;
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
Obj _3519643_37 = __arg1;
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
Obj _3519644_37 = __arg1;
PUSH_CONT_0(co, 0, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 3);
__arg2 = _3519644_37;
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
Obj _3519645_37 = __arg1;
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
Obj _3518286_37 = makeNative(4, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4), closureRef(co, 5));
Obj _3519621_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3519621_37) {
Obj _3519622_37 = PRIM_CAR(closureRef(co, 4));
Obj _3519623_37 = PRIM_EQ(__symbolTable[83], _3519622_37);
if (True == _3519623_37) {
Obj _3519624_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519625_37 = PRIM_ISCONS(_3519624_37);
if (True == _3519625_37) {
Obj _3519626_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519627_37 = PRIM_CAR(_3519626_37);
Obj idx = _3519627_37;
Obj _3519628_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519629_37 = PRIM_CDR(_3519628_37);
Obj _3519630_37 = PRIM_EQ(Nil, _3519629_37);
if (True == _3519630_37) {
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
__arg0 = _3518286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518286_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _3519631_37 = __arg1;
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
Obj _3519632_37 = __arg1;
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
Obj _3518287_37 = makeNative(7, clofun4, 0, 6, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 3), closureRef(co, 5));
Obj _3519609_37 = PRIM_ISCONS(closureRef(co, 4));
if (True == _3519609_37) {
Obj _3519610_37 = PRIM_CAR(closureRef(co, 4));
Obj _3519611_37 = PRIM_EQ(__symbolTable[48], _3519610_37);
if (True == _3519611_37) {
Obj _3519612_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519613_37 = PRIM_ISCONS(_3519612_37);
if (True == _3519613_37) {
Obj _3519614_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519615_37 = PRIM_CAR(_3519614_37);
Obj idx = _3519615_37;
Obj _3519616_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519617_37 = PRIM_CDR(_3519616_37);
Obj _3519618_37 = PRIM_EQ(Nil, _3519617_37);
if (True == _3519618_37) {
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
__arg0 = _3518287_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518287_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518287_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518287_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _3519619_37 = __arg1;
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
Obj _3519620_37 = __arg1;
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
Obj _3518288_37 = makeNative(17, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 0), closureRef(co, 3), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2));
Obj _3519585_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3519585_37) {
Obj _3519586_37 = PRIM_CAR(closureRef(co, 3));
Obj _3519587_37 = PRIM_EQ(__symbolTable[101], _3519586_37);
if (True == _3519587_37) {
Obj _3519588_37 = PRIM_CDR(closureRef(co, 3));
Obj _3519589_37 = PRIM_ISCONS(_3519588_37);
if (True == _3519589_37) {
Obj _3519590_37 = PRIM_CDR(closureRef(co, 3));
Obj _3519591_37 = PRIM_CAR(_3519590_37);
Obj x = _3519591_37;
Obj _3519592_37 = PRIM_CDR(closureRef(co, 3));
Obj _3519593_37 = PRIM_CDR(_3519592_37);
Obj _3519594_37 = PRIM_EQ(Nil, _3519593_37);
if (True == _3519594_37) {
Obj _3519595_37 = primIsSymbol(x);
if (True == _3519595_37) {
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
__arg0 = _3518288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518288_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _3519599_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3519599_37) {
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
Obj _3519602_37 = primIsString(x);
if (True == _3519602_37) {
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
Obj _3519606_37 = PRIM_EQ(x, Nil);
if (True == _3519606_37) {
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
Obj _3519607_37 = PRIM_EQ(x, True);
if (True == _3519607_37) {
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
Obj _3519608_37 = PRIM_EQ(x, False);
if (True == _3519608_37) {
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
Obj _3519603_37 = __arg1;
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
Obj _3519604_37 = __arg1;
PUSH_CONT_0(co, 11, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = _3519604_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3519605_37 = __arg1;
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
Obj _3519600_37 = __arg1;
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
Obj _3519601_37 = __arg1;
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
Obj _3519596_37 = __arg1;
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
Obj _3519597_37 = __arg1;
PUSH_CONT_0(co, 16, clofun4);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = _3519597_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _3519598_37 = __arg1;
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
Obj _3518289_37 = makeNative(32, clofun4, 0, 6, closureRef(co, 4), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 5), closureRef(co, 3));
Obj _3519542_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3519542_37) {
Obj _3519543_37 = PRIM_CAR(closureRef(co, 2));
Obj _3519544_37 = PRIM_EQ(__symbolTable[91], _3519543_37);
if (True == _3519544_37) {
Obj _3519545_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519546_37 = PRIM_ISCONS(_3519545_37);
if (True == _3519546_37) {
Obj _3519547_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519548_37 = PRIM_CAR(_3519547_37);
Obj a = _3519548_37;
Obj _3519549_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519550_37 = PRIM_CDR(_3519549_37);
Obj _3519551_37 = PRIM_ISCONS(_3519550_37);
if (True == _3519551_37) {
Obj _3519552_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519553_37 = PRIM_CDR(_3519552_37);
Obj _3519554_37 = PRIM_CAR(_3519553_37);
Obj b = _3519554_37;
Obj _3519555_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519556_37 = PRIM_CDR(_3519555_37);
Obj _3519557_37 = PRIM_CDR(_3519556_37);
Obj _3519558_37 = PRIM_ISCONS(_3519557_37);
if (True == _3519558_37) {
Obj _3519559_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519560_37 = PRIM_CDR(_3519559_37);
Obj _3519561_37 = PRIM_CDR(_3519560_37);
Obj _3519562_37 = PRIM_CAR(_3519561_37);
Obj c = _3519562_37;
Obj _3519563_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519564_37 = PRIM_CDR(_3519563_37);
Obj _3519565_37 = PRIM_CDR(_3519564_37);
Obj _3519566_37 = PRIM_CDR(_3519565_37);
Obj _3519567_37 = PRIM_EQ(Nil, _3519566_37);
if (True == _3519567_37) {
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
__arg0 = _3518289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518289_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _3519568_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = _3519568_37;
Obj _3519569_37 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _3519569_37) {
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
Obj _3519578_37 = __arg1;
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
Obj _3519579_37 = __arg1;
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
Obj _3519580_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun4, 2, a, c);
__nargs = 3;
__arg0 = _3519580_37;
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
Obj _3519581_37 = __arg1;
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
Obj _3519582_37 = __arg1;
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
Obj _3519583_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519584_37 = makeCons(a, closureRef(co, 5));
__nargs = 3;
__arg0 = _3519583_37;
__arg1 = c;
__arg2 = _3519584_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3519570_37 = __arg1;
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
Obj _3519571_37 = __arg1;
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
Obj _3519572_37 = __arg1;
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
Obj _3519573_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 29, clofun4, 2, a, c);
__nargs = 3;
__arg0 = _3519573_37;
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
Obj _3519574_37 = __arg1;
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
Obj _3519575_37 = __arg1;
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
Obj _3519576_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519577_37 = makeCons(a, closureRef(co, 5));
__nargs = 3;
__arg0 = _3519576_37;
__arg1 = c;
__arg2 = _3519577_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3518290_37 = makeNative(39, clofun4, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 0), closureRef(co, 4), closureRef(co, 5));
Obj _3519518_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3519518_37) {
Obj _3519519_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519520_37 = PRIM_ISCONS(_3519519_37);
if (True == _3519520_37) {
Obj _3519521_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519522_37 = PRIM_CAR(_3519521_37);
Obj _3519523_37 = PRIM_EQ(__symbolTable[95], _3519522_37);
if (True == _3519523_37) {
Obj _3519524_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519525_37 = PRIM_CDR(_3519524_37);
Obj _3519526_37 = PRIM_ISCONS(_3519525_37);
if (True == _3519526_37) {
Obj _3519527_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519528_37 = PRIM_CDR(_3519527_37);
Obj _3519529_37 = PRIM_CAR(_3519528_37);
Obj f = _3519529_37;
Obj _3519530_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519531_37 = PRIM_CDR(_3519530_37);
Obj _3519532_37 = PRIM_CDR(_3519531_37);
Obj _3519533_37 = PRIM_EQ(Nil, _3519532_37);
if (True == _3519533_37) {
Obj _3519534_37 = PRIM_CDR(closureRef(co, 1));
Obj args = _3519534_37;
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
__arg0 = _3518290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518290_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3519535_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = closureRef(co, 5);
__arg2 = _3519535_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3519536_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519537_37 = PRIM_EQ(f, __symbolTable[126]);
if (True == _3519537_37) {
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
Obj _3519540_37 = __arg1;
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
Obj _3519541_37 = __arg1;
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
Obj _3519538_37 = __arg1;
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
Obj _3519539_37 = __arg1;
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
Obj _3518291_37 = makeNative(49, clofun4, 0, 6, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 4), closureRef(co, 5));
Obj _3519483_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3519483_37) {
Obj _3519484_37 = PRIM_CAR(closureRef(co, 2));
Obj _3519485_37 = PRIM_EQ(__symbolTable[92], _3519484_37);
if (True == _3519485_37) {
Obj _3519486_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519487_37 = PRIM_ISCONS(_3519486_37);
if (True == _3519487_37) {
Obj _3519488_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519489_37 = PRIM_CAR(_3519488_37);
Obj a = _3519489_37;
Obj _3519490_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519491_37 = PRIM_CDR(_3519490_37);
Obj _3519492_37 = PRIM_ISCONS(_3519491_37);
if (True == _3519492_37) {
Obj _3519493_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519494_37 = PRIM_CDR(_3519493_37);
Obj _3519495_37 = PRIM_CAR(_3519494_37);
Obj b = _3519495_37;
Obj _3519496_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519497_37 = PRIM_CDR(_3519496_37);
Obj _3519498_37 = PRIM_CDR(_3519497_37);
Obj _3519499_37 = PRIM_ISCONS(_3519498_37);
if (True == _3519499_37) {
Obj _3519500_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519501_37 = PRIM_CDR(_3519500_37);
Obj _3519502_37 = PRIM_CDR(_3519501_37);
Obj _3519503_37 = PRIM_CAR(_3519502_37);
Obj c = _3519503_37;
Obj _3519504_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519505_37 = PRIM_CDR(_3519504_37);
Obj _3519506_37 = PRIM_CDR(_3519505_37);
Obj _3519507_37 = PRIM_CDR(_3519506_37);
Obj _3519508_37 = PRIM_EQ(Nil, _3519507_37);
if (True == _3519508_37) {
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
__arg0 = _3518291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518291_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _3519509_37 = __arg1;
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
Obj _3519510_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun4, 2, b, c);
__nargs = 3;
__arg0 = _3519510_37;
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
Obj _3519511_37 = __arg1;
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
Obj _3519512_37 = __arg1;
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
Obj _3519513_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 1, c);
__nargs = 3;
__arg0 = _3519513_37;
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
Obj _3519514_37 = __arg1;
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
Obj _3519515_37 = __arg1;
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
Obj _3519516_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun4);
__nargs = 3;
__arg0 = _3519516_37;
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
Obj _3519517_37 = __arg1;
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
Obj _3518292_37 = makeNative(13, clofun5, 0, 6, closureRef(co, 2), closureRef(co, 3), closureRef(co, 1), closureRef(co, 5), closureRef(co, 0), closureRef(co, 4));
Obj _3519450_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3519450_37) {
Obj _3519451_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519452_37 = PRIM_EQ(__symbolTable[77], _3519451_37);
if (True == _3519452_37) {
Obj _3519453_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519454_37 = PRIM_ISCONS(_3519453_37);
if (True == _3519454_37) {
Obj _3519455_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519456_37 = PRIM_CAR(_3519455_37);
Obj label = _3519456_37;
Obj _3519457_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519458_37 = PRIM_CDR(_3519457_37);
Obj _3519459_37 = PRIM_ISCONS(_3519458_37);
if (True == _3519459_37) {
Obj _3519460_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519461_37 = PRIM_CDR(_3519460_37);
Obj _3519462_37 = PRIM_CAR(_3519461_37);
Obj nargs = _3519462_37;
Obj _3519463_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519464_37 = PRIM_CDR(_3519463_37);
Obj _3519465_37 = PRIM_CDR(_3519464_37);
Obj frees = _3519465_37;
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
__arg0 = _3518292_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518292_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518292_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518292_37;
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
Obj _3519466_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519467_37 = PRIM_CAR(closureRef(co, 3));
Obj _3519468_37 = PRIM_SUB(_3519467_37, label);
pushCont(co, 1, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[52]);
__arg1 = _3519468_37;
__arg2 = globalRef(__symbolTable[51]);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _3519469_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun5, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = _3519469_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _3519470_37 = __arg1;
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
Obj _3519471_37 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519472_37 = PRIM_CAR(closureRef(co, 3));
pushCont(co, 4, clofun5, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 5);
__arg2 = label;
__arg3 = _3519472_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3519473_37 = __arg1;
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
Obj _3519474_37 = __arg1;
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
Obj _3519475_37 = __arg1;
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
Obj _3519476_37 = __arg1;
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
Obj _3519477_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 9, clofun5, 1, frees);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 5);
__arg2 = _3519477_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3519478_37 = __arg1;
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
Obj _3519479_37 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519480_37 = primNot(_3519479_37);
if (True == _3519480_37) {
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
Obj _3519481_37 = __arg1;
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
Obj _3519482_37 = __arg1;
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
Obj _3518293_37 = makeNative(18, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 3));
Obj _3519429_37 = PRIM_ISCONS(closureRef(co, 2));
if (True == _3519429_37) {
Obj _3519430_37 = PRIM_CAR(closureRef(co, 2));
Obj _3519431_37 = PRIM_EQ(__symbolTable[90], _3519430_37);
if (True == _3519431_37) {
Obj _3519432_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519433_37 = PRIM_ISCONS(_3519432_37);
if (True == _3519433_37) {
Obj _3519434_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519435_37 = PRIM_CAR(_3519434_37);
Obj a = _3519435_37;
Obj _3519436_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519437_37 = PRIM_CDR(_3519436_37);
Obj _3519438_37 = PRIM_ISCONS(_3519437_37);
if (True == _3519438_37) {
Obj _3519439_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519440_37 = PRIM_CDR(_3519439_37);
Obj _3519441_37 = PRIM_CAR(_3519440_37);
Obj b = _3519441_37;
Obj _3519442_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519443_37 = PRIM_CDR(_3519442_37);
Obj _3519444_37 = PRIM_CDR(_3519443_37);
Obj _3519445_37 = PRIM_EQ(Nil, _3519444_37);
if (True == _3519445_37) {
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
__arg0 = _3518293_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518293_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518293_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518293_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518293_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _3519446_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 1, b);
__nargs = 3;
__arg0 = _3519446_37;
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
Obj _3519447_37 = __arg1;
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
Obj _3519448_37 = __arg1;
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
Obj _3519449_37 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = _3519449_37;
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
Obj _3518294_37 = makeNative(28, clofun5, 0, 6, closureRef(co, 0), closureRef(co, 4), closureRef(co, 5), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3519408_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3519408_37) {
Obj _3519409_37 = PRIM_CAR(closureRef(co, 1));
Obj _3519410_37 = PRIM_EQ(__symbolTable[78], _3519409_37);
if (True == _3519410_37) {
Obj _3519411_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519412_37 = PRIM_ISCONS(_3519411_37);
if (True == _3519412_37) {
Obj _3519413_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519414_37 = PRIM_CAR(_3519413_37);
Obj x = _3519414_37;
Obj _3519415_37 = PRIM_CDR(closureRef(co, 1));
Obj _3519416_37 = PRIM_CDR(_3519415_37);
Obj _3519417_37 = PRIM_EQ(Nil, _3519416_37);
if (True == _3519417_37) {
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
__arg0 = _3518294_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518294_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518294_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518294_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _3519418_37 = __arg1;
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
Obj _3519419_37 = __arg1;
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
Obj _3519420_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 22, clofun5);
__nargs = 3;
__arg0 = _3519420_37;
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
Obj _3519421_37 = __arg1;
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
Obj _3519422_37 = __arg1;
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
Obj _3519423_37 = __arg1;
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
Obj _3519424_37 = __arg1;
Obj _3519425_37 = PRIM_CDR(closureRef(co, 4));
Obj _3519426_37 = PRIM_CAR(closureRef(co, 4));
PUSH_CONT_0(co, 26, clofun5);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 5);
__arg2 = _3519425_37;
__arg3 = _3519426_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _3519427_37 = __arg1;
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
Obj _3519428_37 = __arg1;
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
Obj _3518295_37 = makeNative(30, clofun5, 0, 6, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 4), closureRef(co, 5));
Obj _3519397_37 = PRIM_ISCONS(closureRef(co, 3));
if (True == _3519397_37) {
Obj _3519398_37 = PRIM_CAR(closureRef(co, 3));
Obj _3519399_37 = PRIM_EQ(__symbolTable[80], _3519398_37);
if (True == _3519399_37) {
Obj _3519400_37 = PRIM_CDR(closureRef(co, 3));
Obj _3519401_37 = PRIM_ISCONS(_3519400_37);
if (True == _3519401_37) {
Obj _3519402_37 = PRIM_CDR(closureRef(co, 3));
Obj _3519403_37 = PRIM_CAR(_3519402_37);
Obj exp = _3519403_37;
Obj _3519404_37 = PRIM_CDR(closureRef(co, 3));
Obj _3519405_37 = PRIM_CDR(_3519404_37);
Obj _3519406_37 = PRIM_EQ(Nil, _3519405_37);
if (True == _3519406_37) {
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
__arg0 = _3518295_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518295_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518295_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518295_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _3519407_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = _3519407_37;
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
Obj _3518296_37 = makeNative(33, clofun5, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _3519378_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519378_37) {
Obj _3519379_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519380_37 = PRIM_EQ(__symbolTable[79], _3519379_37);
if (True == _3519380_37) {
Obj _3519381_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519382_37 = PRIM_ISCONS(_3519381_37);
if (True == _3519382_37) {
Obj _3519383_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519384_37 = PRIM_CAR(_3519383_37);
Obj exp = _3519384_37;
Obj _3519385_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519386_37 = PRIM_CDR(_3519385_37);
Obj _3519387_37 = PRIM_ISCONS(_3519386_37);
if (True == _3519387_37) {
Obj _3519388_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519389_37 = PRIM_CDR(_3519388_37);
Obj _3519390_37 = PRIM_CAR(_3519389_37);
Obj cont = _3519390_37;
Obj _3519391_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519392_37 = PRIM_CDR(_3519391_37);
Obj _3519393_37 = PRIM_CDR(_3519392_37);
Obj _3519394_37 = PRIM_EQ(Nil, _3519393_37);
if (True == _3519394_37) {
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
__arg0 = _3518296_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518296_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518296_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518296_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518296_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _3519395_37 = __arg1;
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
Obj _3519396_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = _3519396_37;
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
Obj _3519360_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519360_37) {
Obj _3519361_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3519361_37;
Obj _3519362_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3519362_37;
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
Obj _3519363_37 = __arg1;
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
Obj _3519364_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519365_37 = PRIM_ADD(MAKE_NUMBER(1), _3519364_37);
pushCont(co, 36, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = closureRef(co, 3);
__arg2 = _3519365_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3519366_37 = __arg1;
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
Obj _3519367_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519368_37 = makeCons(f, args);
PUSH_CONT_0(co, 38, clofun5);
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = MAKE_NUMBER(0);
co->args[5] = _3519368_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3519369_37 = __arg1;
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
Obj _3519370_37 = __arg1;
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
Obj _3519371_37 = __arg1;
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
Obj _3519372_37 = __arg1;
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
Obj _3519373_37 = __arg1;
Obj _3519374_37 = PRIM_CDR(closureRef(co, 2));
Obj _3519375_37 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT_0(co, 43, clofun5);
__nargs = 4;
__arg0 = globalRef(__symbolTable[54]);
__arg1 = closureRef(co, 3);
__arg2 = _3519374_37;
__arg3 = _3519375_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3519376_37 = __arg1;
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
Obj _3519377_37 = __arg1;
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
Obj _3519351_37 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3519351_37) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519352_37 = PRIM_CAR(globals);
Obj _3519353_37 = PRIM_EQ(sym, _3519352_37);
if (True == _3519353_37) {
__nargs = 2;
__arg1 = idx;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519354_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _3519355_37 = PRIM_CDR(globals);
__nargs = 4;
__arg0 = globalRef(__symbolTable[57]);
__arg1 = _3519354_37;
__arg2 = sym;
__arg3 = _3519355_37;
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
Obj _3519346_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = _3519346_37;
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
Obj _3519347_37 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3519347_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519348_37 = makeCons(sym, val);
Obj _3519349_37 = primSet(co, globals, _3519348_37);
__nargs = 2;
__arg1 = _3519349_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj _3518278_37 = __arg1;
Obj _3518279_37 = __arg2;
Obj _3518280_37 = __arg3;
Obj _3518281_37 = co->args[4];
Obj _3518282_37 = co->args[5];
Obj _3519326_37 = PRIM_EQ(Nil, _3518282_37);
if (True == _3519326_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519327_37 = PRIM_ISCONS(_3518282_37);
if (True == _3519327_37) {
Obj _3519328_37 = PRIM_CAR(_3518282_37);
Obj x = _3519328_37;
Obj _3519329_37 = PRIM_CDR(_3518282_37);
Obj more = _3519329_37;
Obj _3519330_37 = PRIM_GT(_3518281_37, MAKE_NUMBER(3));
Obj _3519331_37 = primNot(_3519330_37);
if (True == _3519331_37) {
pushCont(co, 8, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 2, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
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
Obj _3519338_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 3, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518280_37;
__arg2 = _3518281_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _3519339_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 4, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3519340_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 5, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _3519341_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 6, clofun6, 5, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3518278_37;
__arg2 = _3518279_37;
__arg3 = Nil;
co->args[4] = _3518280_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _3519342_37 = __arg1;
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 7, clofun6, 5, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _3519343_37 = __arg1;
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519344_37 = PRIM_ADD(_3518281_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3518278_37;
__arg2 = _3518279_37;
__arg3 = _3518280_37;
co->args[4] = _3519344_37;
co->args[5] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _3519332_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 9, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[60]);
__arg1 = _3518280_37;
__arg2 = _3518281_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _3519333_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 10, clofun6, 6, x, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _3519334_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 11, clofun6, 5, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 6;
__arg0 = globalRef(__symbolTable[59]);
__arg1 = _3518278_37;
__arg2 = _3518279_37;
__arg3 = Nil;
co->args[4] = _3518280_37;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _3519335_37 = __arg1;
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 12, clofun6, 5, _3518281_37, _3518278_37, _3518279_37, _3518280_37, more);
__nargs = 3;
__arg0 = globalRef(__symbolTable[61]);
__arg1 = _3518280_37;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3519336_37 = __arg1;
Obj _3518281_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518278_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518279_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3518280_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _3519337_37 = PRIM_ADD(_3518281_37, MAKE_NUMBER(1));
__nargs = 6;
__arg0 = globalRef(__symbolTable[62]);
__arg1 = _3518278_37;
__arg2 = _3518279_37;
__arg3 = _3518280_37;
co->args[4] = _3519337_37;
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
Obj _3519319_37 = primGenSym();
Obj tmp = _3519319_37;
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
Obj _3519320_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519321_37 = makeCons(_3519320_37, Nil);
Obj _3519322_37 = makeCons(x, _3519321_37);
Obj _3519323_37 = makeCons(tmp, _3519322_37);
Obj _3519324_37 = makeCons(__symbolTable[91], _3519323_37);
__nargs = 2;
__arg1 = _3519324_37;
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
Obj _3519311_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = _3519311_37;
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
Obj _3519312_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = _3519312_37;
Obj _3519313_37 = makeCons(val, Nil);
Obj _3519314_37 = makeCons(idx, _3519313_37);
Obj _3519315_37 = makeCons(_3519314_37, cur);
Obj cur1 = _3519315_37;
Obj _3519316_37 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 18, clofun6, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(__symbolTable[63]);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = _3519316_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3519317_37 = __arg1;
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
Obj _3518273_37 = __arg1;
Obj _3518274_37 = __arg2;
Obj _3518275_37 = makeNative(26, clofun6, 0, 2, _3518273_37, _3518274_37);
Obj _3519252_37 = PRIM_ISCONS(_3518274_37);
if (True == _3519252_37) {
Obj _3519253_37 = PRIM_CAR(_3518274_37);
Obj clo_45or_45cont = _3519253_37;
Obj _3519254_37 = PRIM_CDR(_3518274_37);
Obj _3519255_37 = PRIM_ISCONS(_3519254_37);
if (True == _3519255_37) {
Obj _3519256_37 = PRIM_CDR(_3518274_37);
Obj _3519257_37 = PRIM_CAR(_3519256_37);
Obj _3519258_37 = PRIM_ISCONS(_3519257_37);
if (True == _3519258_37) {
Obj _3519259_37 = PRIM_CDR(_3518274_37);
Obj _3519260_37 = PRIM_CAR(_3519259_37);
Obj _3519261_37 = PRIM_CAR(_3519260_37);
Obj _3519262_37 = PRIM_EQ(__symbolTable[94], _3519261_37);
if (True == _3519262_37) {
Obj _3519263_37 = PRIM_CDR(_3518274_37);
Obj _3519264_37 = PRIM_CAR(_3519263_37);
Obj _3519265_37 = PRIM_CDR(_3519264_37);
Obj _3519266_37 = PRIM_ISCONS(_3519265_37);
if (True == _3519266_37) {
Obj _3519267_37 = PRIM_CDR(_3518274_37);
Obj _3519268_37 = PRIM_CAR(_3519267_37);
Obj _3519269_37 = PRIM_CDR(_3519268_37);
Obj _3519270_37 = PRIM_CAR(_3519269_37);
Obj params = _3519270_37;
Obj _3519271_37 = PRIM_CDR(_3518274_37);
Obj _3519272_37 = PRIM_CAR(_3519271_37);
Obj _3519273_37 = PRIM_CDR(_3519272_37);
Obj _3519274_37 = PRIM_CDR(_3519273_37);
Obj _3519275_37 = PRIM_ISCONS(_3519274_37);
if (True == _3519275_37) {
Obj _3519276_37 = PRIM_CDR(_3518274_37);
Obj _3519277_37 = PRIM_CAR(_3519276_37);
Obj _3519278_37 = PRIM_CDR(_3519277_37);
Obj _3519279_37 = PRIM_CDR(_3519278_37);
Obj _3519280_37 = PRIM_CAR(_3519279_37);
Obj body = _3519280_37;
Obj _3519281_37 = PRIM_CDR(_3518274_37);
Obj _3519282_37 = PRIM_CAR(_3519281_37);
Obj _3519283_37 = PRIM_CDR(_3519282_37);
Obj _3519284_37 = PRIM_CDR(_3519283_37);
Obj _3519285_37 = PRIM_CDR(_3519284_37);
Obj _3519286_37 = PRIM_EQ(Nil, _3519285_37);
if (True == _3519286_37) {
Obj _3519287_37 = PRIM_CDR(_3518274_37);
Obj _3519288_37 = PRIM_CDR(_3519287_37);
Obj fvs = _3519288_37;
Obj _3518363_37 = makeNative(20, clofun6, 1, 6, body, _3518273_37, params, clo_45or_45cont, fvs, _3518275_37);
Obj _3519308_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[77]);
if (True == _3519308_37) {
__nargs = 2;
__arg0 = _3518363_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3519309_37 = PRIM_EQ(clo_45or_45cont, __symbolTable[67]);
if (True == _3519309_37) {
__nargs = 2;
__arg0 = _3518363_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3518363_37;
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
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518275_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _3518364_37 = __arg1;
if (True == _3518364_37) {
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
Obj _3519289_37 = __arg1;
Obj body1 = _3519289_37;
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
Obj _3519290_37 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = _3519290_37;
Obj _3519291_37 = PRIM_EQ(closureRef(co, 3), __symbolTable[77]);
if (True == _3519291_37) {
Obj _3519292_37 = makeCons(body1, Nil);
Obj _3519293_37 = makeCons(Nil, _3519292_37);
Obj _3519294_37 = makeCons(closureRef(co, 2), _3519293_37);
Obj _3519295_37 = makeCons(__symbolTable[94], _3519294_37);
pushCont(co, 24, clofun6, 1, cur);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = closureRef(co, 1);
__arg2 = _3519295_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3519301_37 = makeCons(body1, Nil);
Obj _3519302_37 = makeCons(closureRef(co, 4), _3519301_37);
Obj _3519303_37 = makeCons(closureRef(co, 2), _3519302_37);
Obj _3519304_37 = makeCons(__symbolTable[94], _3519303_37);
pushCont(co, 23, clofun6, 1, cur);
__nargs = 3;
__arg0 = globalRef(__symbolTable[64]);
__arg1 = closureRef(co, 1);
__arg2 = _3519304_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _3519305_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519306_37 = makeCons(cur, closureRef(co, 4));
Obj _3519307_37 = makeCons(closureRef(co, 3), _3519306_37);
__nargs = 2;
__arg1 = _3519307_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj _3519296_37 = __arg1;
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
Obj _3519297_37 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519298_37 = makeCons(_3519297_37, closureRef(co, 4));
Obj _3519299_37 = makeCons(cur, _3519298_37);
Obj _3519300_37 = makeCons(closureRef(co, 3), _3519299_37);
__nargs = 2;
__arg1 = _3519300_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _3519251_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3519251_37) {
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
Obj _3518265_37 = __arg1;
Obj _3518266_37 = __arg2;
pushCont(co, 29, clofun6, 2, _3518266_37, _3518265_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3518266_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _3519172_37 = __arg1;
Obj _3518266_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518265_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3519172_37) {
__nargs = 2;
__arg1 = _3518266_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519173_37 = primIsSymbol(_3518266_37);
if (True == _3519173_37) {
__nargs = 2;
__arg1 = _3518266_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518269_37 = makeNative(31, clofun6, 0, 2, _3518266_37, _3518265_37);
Obj _3519229_37 = PRIM_ISCONS(_3518266_37);
if (True == _3519229_37) {
Obj _3519230_37 = PRIM_CAR(_3518266_37);
Obj _3519231_37 = PRIM_EQ(__symbolTable[94], _3519230_37);
if (True == _3519231_37) {
Obj _3519232_37 = PRIM_CDR(_3518266_37);
Obj _3519233_37 = PRIM_ISCONS(_3519232_37);
if (True == _3519233_37) {
Obj _3519234_37 = PRIM_CDR(_3518266_37);
Obj _3519235_37 = PRIM_CAR(_3519234_37);
Obj args = _3519235_37;
Obj _3519236_37 = PRIM_CDR(_3518266_37);
Obj _3519237_37 = PRIM_CDR(_3519236_37);
Obj _3519238_37 = PRIM_ISCONS(_3519237_37);
if (True == _3519238_37) {
Obj _3519239_37 = PRIM_CDR(_3518266_37);
Obj _3519240_37 = PRIM_CDR(_3519239_37);
Obj _3519241_37 = PRIM_CAR(_3519240_37);
Obj body = _3519241_37;
Obj _3519242_37 = PRIM_CDR(_3518266_37);
Obj _3519243_37 = PRIM_CDR(_3519242_37);
Obj _3519244_37 = PRIM_CDR(_3519243_37);
Obj _3519245_37 = PRIM_EQ(Nil, _3519244_37);
if (True == _3519245_37) {
pushCont(co, 30, clofun6, 1, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[68]);
__arg1 = _3518265_37;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518269_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518269_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518269_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518269_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518269_37;
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
Obj _3519246_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519247_37 = makeCons(_3519246_37, Nil);
Obj _3519248_37 = makeCons(args, _3519247_37);
Obj _3519249_37 = makeCons(__symbolTable[94], _3519248_37);
__nargs = 2;
__arg1 = _3519249_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _3518270_37 = makeNative(37, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519202_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519202_37) {
Obj _3519203_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519204_37 = PRIM_EQ(__symbolTable[81], _3519203_37);
if (True == _3519204_37) {
Obj _3519205_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519206_37 = PRIM_ISCONS(_3519205_37);
if (True == _3519206_37) {
Obj _3519207_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519208_37 = PRIM_CAR(_3519207_37);
Obj val = _3519208_37;
Obj _3519209_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519210_37 = PRIM_CDR(_3519209_37);
Obj _3519211_37 = PRIM_ISCONS(_3519210_37);
if (True == _3519211_37) {
Obj _3519212_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519213_37 = PRIM_CDR(_3519212_37);
Obj _3519214_37 = PRIM_CAR(_3519213_37);
Obj body = _3519214_37;
Obj _3519215_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519216_37 = PRIM_CDR(_3519215_37);
Obj _3519217_37 = PRIM_CDR(_3519216_37);
Obj _3519218_37 = PRIM_EQ(Nil, _3519217_37);
if (True == _3519218_37) {
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
__arg0 = _3518270_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518270_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518270_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518270_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518270_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _3519219_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun6, 2, body, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3519219_37;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _3519220_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = _3519220_37;
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
Obj _3519221_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3519221_37;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _3519222_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = _3519222_37;
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
Obj _3519223_37 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519224_37 = makeCons(_3519223_37, Nil);
Obj _3519225_37 = makeCons(val, _3519224_37);
Obj _3519226_37 = makeCons(__symbolTable[94], _3519225_37);
Obj _3519227_37 = makeCons(_3519226_37, fvs2);
Obj _3519228_37 = makeCons(__symbolTable[67], _3519227_37);
__nargs = 2;
__arg1 = _3519228_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _3518271_37 = makeNative(41, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519179_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519179_37) {
Obj _3519180_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519181_37 = PRIM_EQ(__symbolTable[79], _3519180_37);
if (True == _3519181_37) {
Obj _3519182_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519183_37 = PRIM_ISCONS(_3519182_37);
if (True == _3519183_37) {
Obj _3519184_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519185_37 = PRIM_CAR(_3519184_37);
Obj exp = _3519185_37;
Obj _3519186_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519187_37 = PRIM_CDR(_3519186_37);
Obj _3519188_37 = PRIM_ISCONS(_3519187_37);
if (True == _3519188_37) {
Obj _3519189_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519190_37 = PRIM_CDR(_3519189_37);
Obj _3519191_37 = PRIM_CAR(_3519190_37);
Obj cont = _3519191_37;
Obj _3519192_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519193_37 = PRIM_CDR(_3519192_37);
Obj _3519194_37 = PRIM_CDR(_3519193_37);
Obj _3519195_37 = PRIM_EQ(Nil, _3519194_37);
if (True == _3519195_37) {
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
__arg0 = _3518271_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518271_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518271_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518271_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518271_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _3519196_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun6, 1, cont);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3519196_37;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3519197_37 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 40, clofun6, 1, _3519197_37);
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
Obj _3519198_37 = __arg1;
Obj _3519197_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519199_37 = makeCons(_3519198_37, Nil);
Obj _3519200_37 = makeCons(_3519197_37, _3519199_37);
Obj _3519201_37 = makeCons(__symbolTable[79], _3519200_37);
__nargs = 2;
__arg1 = _3519201_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _3519174_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519174_37) {
Obj _3519175_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3519175_37;
Obj _3519176_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3519176_37;
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
Obj _3519177_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519178_37 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3519177_37;
__arg2 = _3519178_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3518260_37 = __arg1;
Obj _3518261_37 = __arg2;
Obj _3518262_37 = __arg3;
Obj _3519149_37 = PRIM_EQ(Nil, _3518260_37);
if (True == _3519149_37) {
pushCont(co, 45, clofun6, 1, _3518262_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[72]);
__arg1 = _3518261_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3519167_37 = PRIM_ISCONS(_3518260_37);
if (True == _3519167_37) {
Obj _3519168_37 = PRIM_CAR(_3518260_37);
Obj hd = _3519168_37;
Obj _3519169_37 = PRIM_CDR(_3518260_37);
Obj tl = _3519169_37;
__nargs = 3;
__arg0 = globalRef(__symbolTable[74]);
__arg1 = hd;
__arg2 = makeNative(44, clofun6, 1, 3, tl, _3518261_37, _3518262_37);
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
Obj _3519170_37 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = closureRef(co, 0);
__arg2 = _3519170_37;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _3519150_37 = __arg1;
Obj _3518262_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = _3519150_37;
Obj _3518361_37 = makeNative(48, clofun6, 1, 2, exp, _3518262_37);
Obj _3519163_37 = PRIM_CAR(exp);
pushCont(co, 46, clofun6, 2, exp, _3518361_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[70]);
__arg1 = _3519163_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _3519164_37 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518361_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3519164_37) {
pushCont(co, 47, clofun6, 1, _3518361_37);
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
__arg0 = _3518361_37;
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
Obj _3519165_37 = __arg1;
Obj _3518361_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519166_37 = PRIM_EQ(_3519165_37, __symbolTable[95]);
if (True == _3519166_37) {
__nargs = 2;
__arg0 = _3518361_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3518361_37;
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
Obj _3518362_37 = __arg1;
if (True == _3518362_37) {
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
Obj _3519151_37 = PRIM_EQ(closureRef(co, 1), globalRef(__symbolTable[75]));
if (True == _3519151_37) {
Obj _3519152_37 = makeCons(closureRef(co, 0), Nil);
Obj _3519153_37 = makeCons(__symbolTable[80], _3519152_37);
__nargs = 2;
__arg1 = _3519153_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3519154_37 = primGenSym();
Obj val = _3519154_37;
Obj _3519155_37 = makeCons(val, Nil);
pushCont(co, 49, clofun6, 1, _3519155_37);
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
Obj _3519156_37 = __arg1;
Obj _3519155_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519157_37 = makeCons(_3519156_37, Nil);
Obj _3519158_37 = makeCons(_3519155_37, _3519157_37);
Obj _3519159_37 = makeCons(__symbolTable[81], _3519158_37);
Obj _3519160_37 = makeCons(_3519159_37, Nil);
Obj _3519161_37 = makeCons(closureRef(co, 0), _3519160_37);
Obj _3519162_37 = makeCons(__symbolTable[79], _3519161_37);
__nargs = 2;
__arg1 = _3519162_37;
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
Obj _3518251_37 = __arg1;
Obj _3518252_37 = __arg2;
Obj _3518359_37 = makeNative(2, clofun7, 1, 2, _3518251_37, _3518252_37);
Obj _3519146_37 = primIsSymbol(_3518251_37);
if (True == _3519146_37) {
__nargs = 2;
__arg0 = _3518359_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 1, clofun7, 1, _3518359_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3518251_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3519147_37 = __arg1;
Obj _3518359_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3519147_37) {
__nargs = 2;
__arg0 = _3518359_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3518359_37;
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
Obj _3518360_37 = __arg1;
if (True == _3518360_37) {
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
Obj _3519012_37 = __arg1;
if (True == _3519012_37) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518255_37 = makeNative(7, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519114_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519114_37) {
Obj _3519115_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519116_37 = PRIM_EQ(__symbolTable[92], _3519115_37);
if (True == _3519116_37) {
Obj _3519117_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519118_37 = PRIM_ISCONS(_3519117_37);
if (True == _3519118_37) {
Obj _3519119_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519120_37 = PRIM_CAR(_3519119_37);
Obj a = _3519120_37;
Obj _3519121_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519122_37 = PRIM_CDR(_3519121_37);
Obj _3519123_37 = PRIM_ISCONS(_3519122_37);
if (True == _3519123_37) {
Obj _3519124_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519125_37 = PRIM_CDR(_3519124_37);
Obj _3519126_37 = PRIM_CAR(_3519125_37);
Obj b = _3519126_37;
Obj _3519127_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519128_37 = PRIM_CDR(_3519127_37);
Obj _3519129_37 = PRIM_CDR(_3519128_37);
Obj _3519130_37 = PRIM_ISCONS(_3519129_37);
if (True == _3519130_37) {
Obj _3519131_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519132_37 = PRIM_CDR(_3519131_37);
Obj _3519133_37 = PRIM_CDR(_3519132_37);
Obj _3519134_37 = PRIM_CAR(_3519133_37);
Obj c = _3519134_37;
Obj _3519135_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519136_37 = PRIM_CDR(_3519135_37);
Obj _3519137_37 = PRIM_CDR(_3519136_37);
Obj _3519138_37 = PRIM_CDR(_3519137_37);
Obj _3519139_37 = PRIM_EQ(Nil, _3519138_37);
if (True == _3519139_37) {
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
__arg0 = _3518255_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518255_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518255_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518255_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518255_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518255_37;
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
Obj _3519140_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun7, 2, _3519140_37, ra);
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
Obj _3519141_37 = __arg1;
Obj _3519140_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519142_37 = makeCons(_3519141_37, Nil);
Obj _3519143_37 = makeCons(_3519140_37, _3519142_37);
Obj _3519144_37 = makeCons(ra, _3519143_37);
Obj _3519145_37 = makeCons(__symbolTable[92], _3519144_37);
__nargs = 2;
__arg1 = _3519145_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _3518256_37 = makeNative(10, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519092_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519092_37) {
Obj _3519093_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519094_37 = PRIM_EQ(__symbolTable[90], _3519093_37);
if (True == _3519094_37) {
Obj _3519095_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519096_37 = PRIM_ISCONS(_3519095_37);
if (True == _3519096_37) {
Obj _3519097_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519098_37 = PRIM_CAR(_3519097_37);
Obj a = _3519098_37;
Obj _3519099_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519100_37 = PRIM_CDR(_3519099_37);
Obj _3519101_37 = PRIM_ISCONS(_3519100_37);
if (True == _3519101_37) {
Obj _3519102_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519103_37 = PRIM_CDR(_3519102_37);
Obj _3519104_37 = PRIM_CAR(_3519103_37);
Obj b = _3519104_37;
Obj _3519105_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519106_37 = PRIM_CDR(_3519105_37);
Obj _3519107_37 = PRIM_CDR(_3519106_37);
Obj _3519108_37 = PRIM_EQ(Nil, _3519107_37);
if (True == _3519108_37) {
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
__arg0 = _3518256_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518256_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518256_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518256_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518256_37;
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
Obj _3519109_37 = primIsSymbol(ra);
if (True == _3519109_37) {
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
Obj _3519110_37 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519111_37 = makeCons(_3519110_37, Nil);
Obj _3519112_37 = makeCons(ra, _3519111_37);
Obj _3519113_37 = makeCons(__symbolTable[90], _3519112_37);
__nargs = 2;
__arg1 = _3519113_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _3518257_37 = makeNative(13, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519061_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519061_37) {
Obj _3519062_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519063_37 = PRIM_EQ(__symbolTable[91], _3519062_37);
if (True == _3519063_37) {
Obj _3519064_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519065_37 = PRIM_ISCONS(_3519064_37);
if (True == _3519065_37) {
Obj _3519066_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519067_37 = PRIM_CAR(_3519066_37);
Obj a = _3519067_37;
Obj _3519068_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519069_37 = PRIM_CDR(_3519068_37);
Obj _3519070_37 = PRIM_ISCONS(_3519069_37);
if (True == _3519070_37) {
Obj _3519071_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519072_37 = PRIM_CDR(_3519071_37);
Obj _3519073_37 = PRIM_CAR(_3519072_37);
Obj b = _3519073_37;
Obj _3519074_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519075_37 = PRIM_CDR(_3519074_37);
Obj _3519076_37 = PRIM_CDR(_3519075_37);
Obj _3519077_37 = PRIM_ISCONS(_3519076_37);
if (True == _3519077_37) {
Obj _3519078_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519079_37 = PRIM_CDR(_3519078_37);
Obj _3519080_37 = PRIM_CDR(_3519079_37);
Obj _3519081_37 = PRIM_CAR(_3519080_37);
Obj c = _3519081_37;
Obj _3519082_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519083_37 = PRIM_CDR(_3519082_37);
Obj _3519084_37 = PRIM_CDR(_3519083_37);
Obj _3519085_37 = PRIM_CDR(_3519084_37);
Obj _3519086_37 = PRIM_EQ(Nil, _3519085_37);
if (True == _3519086_37) {
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
__arg0 = _3518257_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518257_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518257_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518257_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518257_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518257_37;
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
Obj _3519087_37 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519088_37 = makeCons(_3519087_37, Nil);
Obj _3519089_37 = makeCons(rb, _3519088_37);
Obj _3519090_37 = makeCons(closureRef(co, 0), _3519089_37);
Obj _3519091_37 = makeCons(__symbolTable[91], _3519090_37);
__nargs = 2;
__arg1 = _3519091_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _3518258_37 = makeNative(15, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3519017_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519017_37) {
Obj _3519018_37 = PRIM_CAR(closureRef(co, 0));
Obj _3519019_37 = PRIM_EQ(__symbolTable[77], _3519018_37);
if (True == _3519019_37) {
Obj _3519020_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519021_37 = PRIM_ISCONS(_3519020_37);
if (True == _3519021_37) {
Obj _3519022_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519023_37 = PRIM_CAR(_3519022_37);
Obj _3519024_37 = PRIM_ISCONS(_3519023_37);
if (True == _3519024_37) {
Obj _3519025_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519026_37 = PRIM_CAR(_3519025_37);
Obj _3519027_37 = PRIM_CAR(_3519026_37);
Obj _3519028_37 = PRIM_EQ(__symbolTable[94], _3519027_37);
if (True == _3519028_37) {
Obj _3519029_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519030_37 = PRIM_CAR(_3519029_37);
Obj _3519031_37 = PRIM_CDR(_3519030_37);
Obj _3519032_37 = PRIM_ISCONS(_3519031_37);
if (True == _3519032_37) {
Obj _3519033_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519034_37 = PRIM_CAR(_3519033_37);
Obj _3519035_37 = PRIM_CDR(_3519034_37);
Obj _3519036_37 = PRIM_CAR(_3519035_37);
Obj args = _3519036_37;
Obj _3519037_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519038_37 = PRIM_CAR(_3519037_37);
Obj _3519039_37 = PRIM_CDR(_3519038_37);
Obj _3519040_37 = PRIM_CDR(_3519039_37);
Obj _3519041_37 = PRIM_ISCONS(_3519040_37);
if (True == _3519041_37) {
Obj _3519042_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519043_37 = PRIM_CAR(_3519042_37);
Obj _3519044_37 = PRIM_CDR(_3519043_37);
Obj _3519045_37 = PRIM_CDR(_3519044_37);
Obj _3519046_37 = PRIM_CAR(_3519045_37);
Obj body = _3519046_37;
Obj _3519047_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519048_37 = PRIM_CAR(_3519047_37);
Obj _3519049_37 = PRIM_CDR(_3519048_37);
Obj _3519050_37 = PRIM_CDR(_3519049_37);
Obj _3519051_37 = PRIM_CDR(_3519050_37);
Obj _3519052_37 = PRIM_EQ(Nil, _3519051_37);
if (True == _3519052_37) {
Obj _3519053_37 = PRIM_CDR(closureRef(co, 0));
Obj _3519054_37 = PRIM_CDR(_3519053_37);
Obj frees = _3519054_37;
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
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518258_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _3519055_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3519056_37 = makeCons(_3519055_37, Nil);
Obj _3519057_37 = makeCons(args, _3519056_37);
Obj _3519058_37 = makeCons(__symbolTable[94], _3519057_37);
Obj _3519059_37 = makeCons(_3519058_37, frees);
Obj _3519060_37 = makeCons(__symbolTable[77], _3519059_37);
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = _3519060_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _3519013_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3519013_37) {
Obj _3519014_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3519014_37;
Obj _3519015_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3519015_37;
Obj _3519016_37 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(__symbolTable[73]);
__arg1 = _3519016_37;
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
Obj _3519009_37 = makeCons(x, Nil);
Obj _3519010_37 = makeCons(__symbolTable[78], _3519009_37);
__nargs = 2;
__arg1 = _3519010_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _3518244_37 = __arg1;
Obj _3518245_37 = __arg2;
pushCont(co, 18, clofun7, 2, _3518245_37, _3518244_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3518245_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _3518936_37 = __arg1;
Obj _3518245_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518244_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3518936_37) {
__nargs = 2;
__arg1 = _3518245_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518937_37 = primIsSymbol(_3518245_37);
if (True == _3518937_37) {
pushCont(co, 28, clofun7, 1, _3518245_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = _3518245_37;
__arg2 = _3518244_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3518248_37 = makeNative(23, clofun7, 0, 2, _3518245_37, _3518244_37);
Obj _3518979_37 = PRIM_ISCONS(_3518245_37);
if (True == _3518979_37) {
Obj _3518980_37 = PRIM_CAR(_3518245_37);
Obj _3518981_37 = PRIM_EQ(__symbolTable[94], _3518980_37);
if (True == _3518981_37) {
Obj _3518982_37 = PRIM_CDR(_3518245_37);
Obj _3518983_37 = PRIM_ISCONS(_3518982_37);
if (True == _3518983_37) {
Obj _3518984_37 = PRIM_CDR(_3518245_37);
Obj _3518985_37 = PRIM_CAR(_3518984_37);
Obj args = _3518985_37;
Obj _3518986_37 = PRIM_CDR(_3518245_37);
Obj _3518987_37 = PRIM_CDR(_3518986_37);
Obj _3518988_37 = PRIM_ISCONS(_3518987_37);
if (True == _3518988_37) {
Obj _3518989_37 = PRIM_CDR(_3518245_37);
Obj _3518990_37 = PRIM_CDR(_3518989_37);
Obj _3518991_37 = PRIM_CAR(_3518990_37);
Obj body = _3518991_37;
Obj _3518992_37 = PRIM_CDR(_3518245_37);
Obj _3518993_37 = PRIM_CDR(_3518992_37);
Obj _3518994_37 = PRIM_CDR(_3518993_37);
Obj _3518995_37 = PRIM_EQ(Nil, _3518994_37);
if (True == _3518995_37) {
Obj _3518996_37 = makeCons(body, Nil);
Obj _3518997_37 = makeCons(args, _3518996_37);
Obj _3518998_37 = makeCons(__symbolTable[94], _3518997_37);
pushCont(co, 19, clofun7, 3, body, args, _3518244_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = _3518998_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518248_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518248_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518248_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518248_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518248_37;
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
Obj _3518999_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518244_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = _3518999_37;
pushCont(co, 20, clofun7, 3, args, _3518244_37, fvs1);
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
Obj _3519000_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518244_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _3519001_37 = makeCons(_3519000_37, Nil);
Obj _3519002_37 = makeCons(args, _3519001_37);
Obj _3519003_37 = makeCons(__symbolTable[94], _3519002_37);
pushCont(co, 21, clofun7, 2, fvs1, _3519003_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[76]);
__arg1 = _3518244_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _3519004_37 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519003_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 22, clofun7, 1, _3519003_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3519004_37;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _3519005_37 = __arg1;
Obj _3519003_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3519006_37 = makeCons(_3519003_37, _3519005_37);
Obj _3519007_37 = makeCons(__symbolTable[77], _3519006_37);
__nargs = 2;
__arg1 = _3519007_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj _3518249_37 = makeNative(26, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _3518947_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518947_37) {
Obj _3518948_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518949_37 = PRIM_EQ(__symbolTable[91], _3518948_37);
if (True == _3518949_37) {
Obj _3518950_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518951_37 = PRIM_ISCONS(_3518950_37);
if (True == _3518951_37) {
Obj _3518952_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518953_37 = PRIM_CAR(_3518952_37);
Obj a = _3518953_37;
Obj _3518954_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518955_37 = PRIM_CDR(_3518954_37);
Obj _3518956_37 = PRIM_ISCONS(_3518955_37);
if (True == _3518956_37) {
Obj _3518957_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518958_37 = PRIM_CDR(_3518957_37);
Obj _3518959_37 = PRIM_CAR(_3518958_37);
Obj b = _3518959_37;
Obj _3518960_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518961_37 = PRIM_CDR(_3518960_37);
Obj _3518962_37 = PRIM_CDR(_3518961_37);
Obj _3518963_37 = PRIM_ISCONS(_3518962_37);
if (True == _3518963_37) {
Obj _3518964_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518965_37 = PRIM_CDR(_3518964_37);
Obj _3518966_37 = PRIM_CDR(_3518965_37);
Obj _3518967_37 = PRIM_CAR(_3518966_37);
Obj c = _3518967_37;
Obj _3518968_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518969_37 = PRIM_CDR(_3518968_37);
Obj _3518970_37 = PRIM_CDR(_3518969_37);
Obj _3518971_37 = PRIM_CDR(_3518970_37);
Obj _3518972_37 = PRIM_EQ(Nil, _3518971_37);
if (True == _3518972_37) {
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
__arg0 = _3518249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518249_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _3518973_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 25, clofun7, 2, _3518973_37, a);
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
Obj _3518974_37 = __arg1;
Obj _3518973_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518975_37 = makeCons(_3518974_37, Nil);
Obj _3518976_37 = makeCons(_3518973_37, _3518975_37);
Obj _3518977_37 = makeCons(a, _3518976_37);
Obj _3518978_37 = makeCons(__symbolTable[91], _3518977_37);
__nargs = 2;
__arg1 = _3518978_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _3518942_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518942_37) {
Obj _3518943_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3518943_37;
Obj _3518944_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3518944_37;
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
Obj _3518945_37 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518946_37 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3518945_37;
__arg2 = _3518946_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _3518938_37 = __arg1;
Obj _3518245_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = _3518938_37;
Obj _3518939_37 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _3518939_37) {
__nargs = 2;
__arg1 = _3518245_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518940_37 = makeCons(pos, Nil);
Obj _3518941_37 = makeCons(__symbolTable[83], _3518940_37);
__nargs = 2;
__arg1 = _3518941_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label29:
{
Obj _3518231_37 = __arg1;
pushCont(co, 30, clofun7, 1, _3518231_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[84]);
__arg1 = _3518231_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _3518761_37 = __arg1;
Obj _3518231_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3518761_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518762_37 = primIsSymbol(_3518231_37);
if (True == _3518762_37) {
Obj _3518763_37 = makeCons(_3518231_37, Nil);
__nargs = 2;
__arg1 = _3518763_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518234_37 = makeNative(32, clofun7, 0, 1, _3518231_37);
Obj _3518917_37 = PRIM_ISCONS(_3518231_37);
if (True == _3518917_37) {
Obj _3518918_37 = PRIM_CAR(_3518231_37);
Obj _3518919_37 = PRIM_EQ(__symbolTable[94], _3518918_37);
if (True == _3518919_37) {
Obj _3518920_37 = PRIM_CDR(_3518231_37);
Obj _3518921_37 = PRIM_ISCONS(_3518920_37);
if (True == _3518921_37) {
Obj _3518922_37 = PRIM_CDR(_3518231_37);
Obj _3518923_37 = PRIM_CAR(_3518922_37);
Obj args = _3518923_37;
Obj _3518924_37 = PRIM_CDR(_3518231_37);
Obj _3518925_37 = PRIM_CDR(_3518924_37);
Obj _3518926_37 = PRIM_ISCONS(_3518925_37);
if (True == _3518926_37) {
Obj _3518927_37 = PRIM_CDR(_3518231_37);
Obj _3518928_37 = PRIM_CDR(_3518927_37);
Obj _3518929_37 = PRIM_CAR(_3518928_37);
Obj body = _3518929_37;
Obj _3518930_37 = PRIM_CDR(_3518231_37);
Obj _3518931_37 = PRIM_CDR(_3518930_37);
Obj _3518932_37 = PRIM_CDR(_3518931_37);
Obj _3518933_37 = PRIM_EQ(Nil, _3518932_37);
if (True == _3518933_37) {
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
__arg0 = _3518234_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518234_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518234_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518234_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518234_37;
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
Obj _3518934_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3518934_37;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _3518235_37 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj _3518887_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518887_37) {
Obj _3518888_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518889_37 = PRIM_EQ(__symbolTable[92], _3518888_37);
if (True == _3518889_37) {
Obj _3518890_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518891_37 = PRIM_ISCONS(_3518890_37);
if (True == _3518891_37) {
Obj _3518892_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518893_37 = PRIM_CAR(_3518892_37);
Obj x = _3518893_37;
Obj _3518894_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518895_37 = PRIM_CDR(_3518894_37);
Obj _3518896_37 = PRIM_ISCONS(_3518895_37);
if (True == _3518896_37) {
Obj _3518897_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518898_37 = PRIM_CDR(_3518897_37);
Obj _3518899_37 = PRIM_CAR(_3518898_37);
Obj y = _3518899_37;
Obj _3518900_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518901_37 = PRIM_CDR(_3518900_37);
Obj _3518902_37 = PRIM_CDR(_3518901_37);
Obj _3518903_37 = PRIM_ISCONS(_3518902_37);
if (True == _3518903_37) {
Obj _3518904_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518905_37 = PRIM_CDR(_3518904_37);
Obj _3518906_37 = PRIM_CDR(_3518905_37);
Obj _3518907_37 = PRIM_CAR(_3518906_37);
Obj z = _3518907_37;
Obj _3518908_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518909_37 = PRIM_CDR(_3518908_37);
Obj _3518910_37 = PRIM_CDR(_3518909_37);
Obj _3518911_37 = PRIM_CDR(_3518910_37);
Obj _3518912_37 = PRIM_EQ(Nil, _3518911_37);
if (True == _3518912_37) {
Obj _3518913_37 = makeCons(z, Nil);
Obj _3518914_37 = makeCons(y, _3518913_37);
Obj _3518915_37 = makeCons(x, _3518914_37);
PUSH_CONT_0(co, 33, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3518915_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518235_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518235_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518235_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518235_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518235_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518235_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3518916_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3518916_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _3518236_37 = makeNative(36, clofun7, 0, 1, closureRef(co, 0));
Obj _3518867_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518867_37) {
Obj _3518868_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518869_37 = PRIM_EQ(__symbolTable[90], _3518868_37);
if (True == _3518869_37) {
Obj _3518870_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518871_37 = PRIM_ISCONS(_3518870_37);
if (True == _3518871_37) {
Obj _3518872_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518873_37 = PRIM_CAR(_3518872_37);
Obj x = _3518873_37;
Obj _3518874_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518875_37 = PRIM_CDR(_3518874_37);
Obj _3518876_37 = PRIM_ISCONS(_3518875_37);
if (True == _3518876_37) {
Obj _3518877_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518878_37 = PRIM_CDR(_3518877_37);
Obj _3518879_37 = PRIM_CAR(_3518878_37);
Obj y = _3518879_37;
Obj _3518880_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518881_37 = PRIM_CDR(_3518880_37);
Obj _3518882_37 = PRIM_CDR(_3518881_37);
Obj _3518883_37 = PRIM_EQ(Nil, _3518882_37);
if (True == _3518883_37) {
Obj _3518884_37 = makeCons(y, Nil);
Obj _3518885_37 = makeCons(x, _3518884_37);
PUSH_CONT_0(co, 35, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3518885_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518236_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518236_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518236_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518236_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518236_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _3518886_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3518886_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _3518237_37 = makeNative(40, clofun7, 0, 1, closureRef(co, 0));
Obj _3518837_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518837_37) {
Obj _3518838_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518839_37 = PRIM_EQ(__symbolTable[91], _3518838_37);
if (True == _3518839_37) {
Obj _3518840_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518841_37 = PRIM_ISCONS(_3518840_37);
if (True == _3518841_37) {
Obj _3518842_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518843_37 = PRIM_CAR(_3518842_37);
Obj a = _3518843_37;
Obj _3518844_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518845_37 = PRIM_CDR(_3518844_37);
Obj _3518846_37 = PRIM_ISCONS(_3518845_37);
if (True == _3518846_37) {
Obj _3518847_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518848_37 = PRIM_CDR(_3518847_37);
Obj _3518849_37 = PRIM_CAR(_3518848_37);
Obj b = _3518849_37;
Obj _3518850_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518851_37 = PRIM_CDR(_3518850_37);
Obj _3518852_37 = PRIM_CDR(_3518851_37);
Obj _3518853_37 = PRIM_ISCONS(_3518852_37);
if (True == _3518853_37) {
Obj _3518854_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518855_37 = PRIM_CDR(_3518854_37);
Obj _3518856_37 = PRIM_CDR(_3518855_37);
Obj _3518857_37 = PRIM_CAR(_3518856_37);
Obj c = _3518857_37;
Obj _3518858_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518859_37 = PRIM_CDR(_3518858_37);
Obj _3518860_37 = PRIM_CDR(_3518859_37);
Obj _3518861_37 = PRIM_CDR(_3518860_37);
Obj _3518862_37 = PRIM_EQ(Nil, _3518861_37);
if (True == _3518862_37) {
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
__arg0 = _3518237_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518237_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518237_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518237_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518237_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518237_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _3518863_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun7, 2, a, _3518863_37);
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
Obj _3518864_37 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518863_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518865_37 = makeCons(a, Nil);
pushCont(co, 39, clofun7, 1, _3518863_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3518864_37;
__arg2 = _3518865_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3518866_37 = __arg1;
Obj _3518863_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = _3518863_37;
__arg2 = _3518866_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3518238_37 = makeNative(41, clofun7, 0, 1, closureRef(co, 0));
Obj _3518827_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518827_37) {
Obj _3518828_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518829_37 = PRIM_EQ(__symbolTable[77], _3518828_37);
if (True == _3518829_37) {
Obj _3518830_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518831_37 = PRIM_ISCONS(_3518830_37);
if (True == _3518831_37) {
Obj _3518832_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518833_37 = PRIM_CAR(_3518832_37);
Obj lam = _3518833_37;
Obj _3518834_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518835_37 = PRIM_CDR(_3518834_37);
Obj more = _3518835_37;
Obj _3518836_37 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(__symbolTable[82]);
__arg1 = _3518836_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518238_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518238_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518238_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _3518239_37 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj _3518817_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518817_37) {
Obj _3518818_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518819_37 = PRIM_EQ(__symbolTable[78], _3518818_37);
if (True == _3518819_37) {
Obj _3518820_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518821_37 = PRIM_ISCONS(_3518820_37);
if (True == _3518821_37) {
Obj _3518822_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518823_37 = PRIM_CAR(_3518822_37);
Obj x = _3518823_37;
Obj _3518824_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518825_37 = PRIM_CDR(_3518824_37);
Obj _3518826_37 = PRIM_EQ(Nil, _3518825_37);
if (True == _3518826_37) {
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
__arg0 = _3518239_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518239_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518239_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518239_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _3518240_37 = makeNative(44, clofun7, 0, 1, closureRef(co, 0));
Obj _3518797_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518797_37) {
Obj _3518798_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518799_37 = PRIM_EQ(__symbolTable[79], _3518798_37);
if (True == _3518799_37) {
Obj _3518800_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518801_37 = PRIM_ISCONS(_3518800_37);
if (True == _3518801_37) {
Obj _3518802_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518803_37 = PRIM_CAR(_3518802_37);
Obj exp = _3518803_37;
Obj _3518804_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518805_37 = PRIM_CDR(_3518804_37);
Obj _3518806_37 = PRIM_ISCONS(_3518805_37);
if (True == _3518806_37) {
Obj _3518807_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518808_37 = PRIM_CDR(_3518807_37);
Obj _3518809_37 = PRIM_CAR(_3518808_37);
Obj cont = _3518809_37;
Obj _3518810_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518811_37 = PRIM_CDR(_3518810_37);
Obj _3518812_37 = PRIM_CDR(_3518811_37);
Obj _3518813_37 = PRIM_EQ(Nil, _3518812_37);
if (True == _3518813_37) {
Obj _3518814_37 = makeCons(cont, Nil);
Obj _3518815_37 = makeCons(exp, _3518814_37);
PUSH_CONT_0(co, 43, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3518815_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518240_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518240_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518240_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518240_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518240_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _3518816_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3518816_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _3518241_37 = makeNative(45, clofun7, 0, 1, closureRef(co, 0));
Obj _3518787_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518787_37) {
Obj _3518788_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518789_37 = PRIM_EQ(__symbolTable[80], _3518788_37);
if (True == _3518789_37) {
Obj _3518790_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518791_37 = PRIM_ISCONS(_3518790_37);
if (True == _3518791_37) {
Obj _3518792_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518793_37 = PRIM_CAR(_3518792_37);
Obj exp = _3518793_37;
Obj _3518794_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518795_37 = PRIM_CDR(_3518794_37);
Obj _3518796_37 = PRIM_EQ(Nil, _3518795_37);
if (True == _3518796_37) {
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
__arg0 = _3518241_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518241_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518241_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518241_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _3518242_37 = makeNative(47, clofun7, 0, 1, closureRef(co, 0));
Obj _3518769_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518769_37) {
Obj _3518770_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518771_37 = PRIM_EQ(__symbolTable[81], _3518770_37);
if (True == _3518771_37) {
Obj _3518772_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518773_37 = PRIM_ISCONS(_3518772_37);
if (True == _3518773_37) {
Obj _3518774_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518775_37 = PRIM_CAR(_3518774_37);
Obj arg = _3518775_37;
Obj _3518776_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518777_37 = PRIM_CDR(_3518776_37);
Obj _3518778_37 = PRIM_ISCONS(_3518777_37);
if (True == _3518778_37) {
Obj _3518779_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518780_37 = PRIM_CDR(_3518779_37);
Obj _3518781_37 = PRIM_CAR(_3518780_37);
Obj body = _3518781_37;
Obj _3518782_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518783_37 = PRIM_CDR(_3518782_37);
Obj _3518784_37 = PRIM_CDR(_3518783_37);
Obj _3518785_37 = PRIM_EQ(Nil, _3518784_37);
if (True == _3518785_37) {
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
__arg0 = _3518242_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518242_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518242_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518242_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518242_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _3518786_37 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = _3518786_37;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _3518764_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518764_37) {
Obj _3518765_37 = PRIM_CAR(closureRef(co, 0));
Obj f = _3518765_37;
Obj _3518766_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3518766_37;
Obj _3518767_37 = makeCons(f, args);
PUSH_CONT_0(co, 48, clofun7);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = globalRef(__symbolTable[82]);
__arg2 = _3518767_37;
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
Obj _3518768_37 = __arg1;
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = globalRef(__symbolTable[86]);
__arg2 = Nil;
__arg3 = _3518768_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _3518224_37 = __arg1;
Obj _3518225_37 = makeNative(0, clofun8, 0, 1, _3518224_37);
Obj _3518750_37 = PRIM_ISCONS(_3518224_37);
if (True == _3518750_37) {
Obj _3518751_37 = PRIM_CAR(_3518224_37);
Obj _3518752_37 = PRIM_EQ(__symbolTable[101], _3518751_37);
if (True == _3518752_37) {
Obj _3518753_37 = PRIM_CDR(_3518224_37);
Obj _3518754_37 = PRIM_ISCONS(_3518753_37);
if (True == _3518754_37) {
Obj _3518755_37 = PRIM_CDR(_3518224_37);
Obj _3518756_37 = PRIM_CAR(_3518755_37);
Obj _3518757_37 = PRIM_CDR(_3518224_37);
Obj _3518758_37 = PRIM_CDR(_3518757_37);
Obj _3518759_37 = PRIM_EQ(Nil, _3518758_37);
if (True == _3518759_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518225_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518225_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518225_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518225_37;
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
Obj _3518226_37 = makeNative(1, clofun8, 0, 1, closureRef(co, 0));
Obj _3518740_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518740_37) {
Obj _3518741_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518742_37 = PRIM_EQ(__symbolTable[98], _3518741_37);
if (True == _3518742_37) {
Obj _3518743_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518744_37 = PRIM_ISCONS(_3518743_37);
if (True == _3518744_37) {
Obj _3518745_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518746_37 = PRIM_CAR(_3518745_37);
Obj _3518747_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518748_37 = PRIM_CDR(_3518747_37);
Obj _3518749_37 = PRIM_EQ(Nil, _3518748_37);
if (True == _3518749_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518226_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518226_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518226_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518226_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _3518227_37 = makeNative(2, clofun8, 0, 1, closureRef(co, 0));
Obj _3518730_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518730_37) {
Obj _3518731_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518732_37 = PRIM_EQ(__symbolTable[95], _3518731_37);
if (True == _3518732_37) {
Obj _3518733_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518734_37 = PRIM_ISCONS(_3518733_37);
if (True == _3518734_37) {
Obj _3518735_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518736_37 = PRIM_CAR(_3518735_37);
Obj _3518737_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518738_37 = PRIM_CDR(_3518737_37);
Obj _3518739_37 = PRIM_EQ(Nil, _3518738_37);
if (True == _3518739_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518227_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518227_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518227_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518227_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _3518228_37 = makeNative(3, clofun8, 0, 1, closureRef(co, 0));
Obj _3518720_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518720_37) {
Obj _3518721_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518722_37 = PRIM_EQ(__symbolTable[89], _3518721_37);
if (True == _3518722_37) {
Obj _3518723_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518724_37 = PRIM_ISCONS(_3518723_37);
if (True == _3518724_37) {
Obj _3518725_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518726_37 = PRIM_CAR(_3518725_37);
Obj _3518727_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518728_37 = PRIM_CDR(_3518727_37);
Obj _3518729_37 = PRIM_EQ(Nil, _3518728_37);
if (True == _3518729_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518228_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518228_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518228_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518228_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _3518229_37 = makeNative(4, clofun8, 0, 0);
Obj _3518710_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518710_37) {
Obj _3518711_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518712_37 = PRIM_EQ(__symbolTable[83], _3518711_37);
if (True == _3518712_37) {
Obj _3518713_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518714_37 = PRIM_ISCONS(_3518713_37);
if (True == _3518714_37) {
Obj _3518715_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518716_37 = PRIM_CAR(_3518715_37);
Obj _3518717_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518718_37 = PRIM_CDR(_3518717_37);
Obj _3518719_37 = PRIM_EQ(Nil, _3518718_37);
if (True == _3518719_37) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518229_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518229_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518229_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518229_37;
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
Obj _3518219_37 = __arg1;
Obj _3518220_37 = __arg2;
Obj _3518699_37 = PRIM_EQ(Nil, _3518219_37);
if (True == _3518699_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518222_37 = makeNative(7, clofun8, 0, 2, _3518219_37, _3518220_37);
Obj _3518705_37 = PRIM_ISCONS(_3518219_37);
if (True == _3518705_37) {
Obj _3518706_37 = PRIM_CAR(_3518219_37);
Obj x = _3518706_37;
Obj _3518707_37 = PRIM_CDR(_3518219_37);
Obj y = _3518707_37;
pushCont(co, 6, clofun8, 3, y, _3518220_37, _3518222_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x;
__arg2 = _3518220_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518222_37;
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
Obj _3518708_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518220_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518222_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3518708_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[85]);
__arg1 = y;
__arg2 = _3518220_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518222_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _3518700_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518700_37) {
Obj _3518701_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3518701_37;
Obj _3518702_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3518702_37;
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
Obj _3518703_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518704_37 = makeCons(x, _3518703_37);
__nargs = 2;
__arg1 = _3518704_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _3518214_37 = __arg1;
Obj _3518215_37 = __arg2;
Obj _3518688_37 = PRIM_EQ(Nil, _3518214_37);
if (True == _3518688_37) {
__nargs = 2;
__arg1 = _3518215_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518217_37 = makeNative(11, clofun8, 0, 2, _3518214_37, _3518215_37);
Obj _3518694_37 = PRIM_ISCONS(_3518214_37);
if (True == _3518694_37) {
Obj _3518695_37 = PRIM_CAR(_3518214_37);
Obj x = _3518695_37;
Obj _3518696_37 = PRIM_CDR(_3518214_37);
Obj y = _3518696_37;
pushCont(co, 10, clofun8, 3, y, _3518215_37, _3518217_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[100]);
__arg1 = x;
__arg2 = _3518215_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518217_37;
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
Obj _3518697_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518215_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518217_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3518697_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[86]);
__arg1 = y;
__arg2 = _3518215_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518217_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _3518689_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518689_37) {
Obj _3518690_37 = PRIM_CAR(closureRef(co, 0));
Obj x = _3518690_37;
Obj _3518691_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3518691_37;
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
Obj _3518692_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518693_37 = makeCons(x, _3518692_37);
__nargs = 2;
__arg1 = _3518693_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _3518200_37 = __arg1;
Obj _3518201_37 = __arg2;
Obj _3518202_37 = __arg3;
Obj _3518357_37 = makeNative(17, clofun8, 1, 3, _3518200_37, _3518202_37, _3518201_37);
pushCont(co, 14, clofun8, 2, _3518202_37, _3518357_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[88]);
__arg1 = _3518202_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _3518683_37 = __arg1;
Obj _3518202_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518357_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3518683_37) {
__nargs = 2;
__arg0 = _3518357_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _3518684_37 = primIsString(_3518202_37);
if (True == _3518684_37) {
__nargs = 2;
__arg0 = _3518357_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 15, clofun8, 2, _3518202_37, _3518357_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[87]);
__arg1 = _3518202_37;
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
Obj _3518685_37 = __arg1;
Obj _3518202_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518357_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _3518685_37) {
__nargs = 2;
__arg0 = _3518357_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 16, clofun8, 1, _3518357_37);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = _3518202_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _3518686_37 = __arg1;
Obj _3518357_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3518686_37) {
__nargs = 2;
__arg0 = _3518357_37;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = _3518357_37;
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
Obj _3518358_37 = __arg1;
if (True == _3518358_37) {
Obj _3518494_37 = makeCons(closureRef(co, 1), Nil);
Obj _3518495_37 = makeCons(__symbolTable[101], _3518494_37);
__nargs = 2;
__arg1 = _3518495_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518204_37 = makeNative(19, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj _3518670_37 = PRIM_ISCONS(closureRef(co, 1));
if (True == _3518670_37) {
Obj _3518671_37 = PRIM_CAR(closureRef(co, 1));
Obj _3518672_37 = PRIM_EQ(__symbolTable[89], _3518671_37);
if (True == _3518672_37) {
Obj _3518673_37 = PRIM_CDR(closureRef(co, 1));
Obj _3518674_37 = PRIM_ISCONS(_3518673_37);
if (True == _3518674_37) {
Obj _3518675_37 = PRIM_CDR(closureRef(co, 1));
Obj _3518676_37 = PRIM_CAR(_3518675_37);
Obj x = _3518676_37;
Obj _3518677_37 = PRIM_CDR(closureRef(co, 1));
Obj _3518678_37 = PRIM_CDR(_3518677_37);
Obj _3518679_37 = PRIM_EQ(Nil, _3518678_37);
if (True == _3518679_37) {
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
__arg0 = _3518204_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518204_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518204_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518204_37;
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
Obj _3518680_37 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518681_37 = makeCons(x, Nil);
Obj _3518682_37 = makeCons(__symbolTable[101], _3518681_37);
__nargs = 2;
__arg1 = _3518682_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _3518496_37 = primIsSymbol(closureRef(co, 0));
if (True == _3518496_37) {
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
Obj _3518206_37 = makeNative(22, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3518648_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518648_37) {
Obj _3518649_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518650_37 = PRIM_EQ(__symbolTable[94], _3518649_37);
if (True == _3518650_37) {
Obj _3518651_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518652_37 = PRIM_ISCONS(_3518651_37);
if (True == _3518652_37) {
Obj _3518653_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518654_37 = PRIM_CAR(_3518653_37);
Obj args = _3518654_37;
Obj _3518655_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518656_37 = PRIM_CDR(_3518655_37);
Obj _3518657_37 = PRIM_ISCONS(_3518656_37);
if (True == _3518657_37) {
Obj _3518658_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518659_37 = PRIM_CDR(_3518658_37);
Obj _3518660_37 = PRIM_CAR(_3518659_37);
Obj body = _3518660_37;
Obj _3518661_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518662_37 = PRIM_CDR(_3518661_37);
Obj _3518663_37 = PRIM_CDR(_3518662_37);
Obj _3518664_37 = PRIM_EQ(Nil, _3518663_37);
if (True == _3518664_37) {
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
__arg0 = _3518206_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518206_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518206_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518206_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518206_37;
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
Obj _3518665_37 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 21, clofun8, 1, args);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = _3518665_37;
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
Obj _3518666_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518667_37 = makeCons(_3518666_37, Nil);
Obj _3518668_37 = makeCons(args, _3518667_37);
Obj _3518669_37 = makeCons(__symbolTable[94], _3518668_37);
__nargs = 2;
__arg1 = _3518669_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj _3518207_37 = makeNative(23, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3518616_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518616_37) {
Obj _3518617_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518618_37 = PRIM_EQ(__symbolTable[92], _3518617_37);
if (True == _3518618_37) {
Obj _3518619_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518620_37 = PRIM_ISCONS(_3518619_37);
if (True == _3518620_37) {
Obj _3518621_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518622_37 = PRIM_CAR(_3518621_37);
Obj _3518623_37 = PRIM_ISCONS(_3518622_37);
if (True == _3518623_37) {
Obj _3518624_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518625_37 = PRIM_CAR(_3518624_37);
Obj _3518626_37 = PRIM_CAR(_3518625_37);
Obj _3518627_37 = PRIM_EQ(__symbolTable[92], _3518626_37);
if (True == _3518627_37) {
Obj _3518628_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518629_37 = PRIM_CAR(_3518628_37);
Obj _3518630_37 = PRIM_CDR(_3518629_37);
Obj exp1 = _3518630_37;
Obj _3518631_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518632_37 = PRIM_CDR(_3518631_37);
Obj exp2 = _3518632_37;
Obj _3518633_37 = primGenSym();
Obj f = _3518633_37;
Obj _3518634_37 = primGenSym();
Obj v = _3518634_37;
Obj _3518635_37 = makeCons(v, Nil);
Obj _3518636_37 = makeCons(v, exp2);
Obj _3518637_37 = makeCons(__symbolTable[92], _3518636_37);
Obj _3518638_37 = makeCons(_3518637_37, Nil);
Obj _3518639_37 = makeCons(_3518635_37, _3518638_37);
Obj _3518640_37 = makeCons(__symbolTable[94], _3518639_37);
Obj _3518641_37 = makeCons(__symbolTable[92], exp1);
Obj _3518642_37 = makeCons(_3518641_37, Nil);
Obj _3518643_37 = makeCons(f, _3518642_37);
Obj _3518644_37 = makeCons(_3518643_37, Nil);
Obj _3518645_37 = makeCons(_3518640_37, _3518644_37);
Obj _3518646_37 = makeCons(f, _3518645_37);
Obj _3518647_37 = makeCons(__symbolTable[91], _3518646_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3518647_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518207_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518207_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518207_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518207_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518207_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _3518208_37 = makeNative(26, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3518609_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518609_37) {
Obj _3518610_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518611_37 = PRIM_EQ(__symbolTable[92], _3518610_37);
if (True == _3518611_37) {
Obj _3518612_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3518612_37;
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
__arg0 = _3518208_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518208_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _3518613_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 25, clofun8);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3518613_37;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _3518614_37 = __arg1;
Obj _3518615_37 = makeCons(__symbolTable[92], _3518614_37);
__nargs = 2;
__arg1 = _3518615_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _3518209_37 = makeNative(29, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3518587_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518587_37) {
Obj _3518588_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518589_37 = PRIM_EQ(__symbolTable[90], _3518588_37);
if (True == _3518589_37) {
Obj _3518590_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518591_37 = PRIM_ISCONS(_3518590_37);
if (True == _3518591_37) {
Obj _3518592_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518593_37 = PRIM_CAR(_3518592_37);
Obj x = _3518593_37;
Obj _3518594_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518595_37 = PRIM_CDR(_3518594_37);
Obj _3518596_37 = PRIM_ISCONS(_3518595_37);
if (True == _3518596_37) {
Obj _3518597_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518598_37 = PRIM_CDR(_3518597_37);
Obj _3518599_37 = PRIM_CAR(_3518598_37);
Obj y = _3518599_37;
Obj _3518600_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518601_37 = PRIM_CDR(_3518600_37);
Obj _3518602_37 = PRIM_CDR(_3518601_37);
Obj _3518603_37 = PRIM_EQ(Nil, _3518602_37);
if (True == _3518603_37) {
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
__arg0 = _3518209_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518209_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518209_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518209_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518209_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _3518604_37 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun8, 1, _3518604_37);
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
Obj _3518605_37 = __arg1;
Obj _3518604_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518606_37 = makeCons(_3518605_37, Nil);
Obj _3518607_37 = makeCons(_3518604_37, _3518606_37);
Obj _3518608_37 = makeCons(__symbolTable[90], _3518607_37);
__nargs = 2;
__arg1 = _3518608_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj _3518210_37 = makeNative(32, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3518554_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518554_37) {
Obj _3518555_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518556_37 = PRIM_EQ(__symbolTable[91], _3518555_37);
if (True == _3518556_37) {
Obj _3518557_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518558_37 = PRIM_ISCONS(_3518557_37);
if (True == _3518558_37) {
Obj _3518559_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518560_37 = PRIM_CAR(_3518559_37);
Obj a = _3518560_37;
Obj _3518561_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518562_37 = PRIM_CDR(_3518561_37);
Obj _3518563_37 = PRIM_ISCONS(_3518562_37);
if (True == _3518563_37) {
Obj _3518564_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518565_37 = PRIM_CDR(_3518564_37);
Obj _3518566_37 = PRIM_CAR(_3518565_37);
Obj b = _3518566_37;
Obj _3518567_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518568_37 = PRIM_CDR(_3518567_37);
Obj _3518569_37 = PRIM_CDR(_3518568_37);
Obj _3518570_37 = PRIM_ISCONS(_3518569_37);
if (True == _3518570_37) {
Obj _3518571_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518572_37 = PRIM_CDR(_3518571_37);
Obj _3518573_37 = PRIM_CDR(_3518572_37);
Obj _3518574_37 = PRIM_CAR(_3518573_37);
Obj c = _3518574_37;
Obj _3518575_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518576_37 = PRIM_CDR(_3518575_37);
Obj _3518577_37 = PRIM_CDR(_3518576_37);
Obj _3518578_37 = PRIM_CDR(_3518577_37);
Obj _3518579_37 = PRIM_EQ(Nil, _3518578_37);
if (True == _3518579_37) {
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
__arg0 = _3518210_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518210_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518210_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518210_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518210_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518210_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj _3518580_37 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518581_37 = makeCons(a, closureRef(co, 1));
pushCont(co, 31, clofun8, 2, _3518580_37, a);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = _3518581_37;
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
Obj _3518582_37 = __arg1;
Obj _3518580_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518583_37 = makeCons(_3518582_37, Nil);
Obj _3518584_37 = makeCons(_3518580_37, _3518583_37);
Obj _3518585_37 = makeCons(a, _3518584_37);
Obj _3518586_37 = makeCons(__symbolTable[91], _3518585_37);
__nargs = 2;
__arg1 = _3518586_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj _3518211_37 = makeNative(33, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _3518522_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518522_37) {
Obj _3518523_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518524_37 = PRIM_ISCONS(_3518523_37);
if (True == _3518524_37) {
Obj _3518525_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518526_37 = PRIM_CAR(_3518525_37);
Obj _3518527_37 = PRIM_EQ(__symbolTable[94], _3518526_37);
if (True == _3518527_37) {
Obj _3518528_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518529_37 = PRIM_CDR(_3518528_37);
Obj exp1 = _3518529_37;
Obj _3518530_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518531_37 = PRIM_ISCONS(_3518530_37);
if (True == _3518531_37) {
Obj _3518532_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518533_37 = PRIM_CAR(_3518532_37);
Obj _3518534_37 = PRIM_ISCONS(_3518533_37);
if (True == _3518534_37) {
Obj _3518535_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518536_37 = PRIM_CAR(_3518535_37);
Obj _3518537_37 = PRIM_CAR(_3518536_37);
Obj _3518538_37 = PRIM_EQ(__symbolTable[92], _3518537_37);
if (True == _3518538_37) {
Obj _3518539_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518540_37 = PRIM_CAR(_3518539_37);
Obj _3518541_37 = PRIM_CDR(_3518540_37);
Obj exp2 = _3518541_37;
Obj _3518542_37 = PRIM_CDR(closureRef(co, 0));
Obj _3518543_37 = PRIM_CDR(_3518542_37);
Obj _3518544_37 = PRIM_EQ(Nil, _3518543_37);
if (True == _3518544_37) {
Obj _3518545_37 = primGenSym();
Obj f = _3518545_37;
Obj _3518546_37 = makeCons(__symbolTable[94], exp1);
Obj _3518547_37 = makeCons(__symbolTable[92], exp2);
Obj _3518548_37 = makeCons(_3518547_37, Nil);
Obj _3518549_37 = makeCons(f, _3518548_37);
Obj _3518550_37 = makeCons(_3518549_37, Nil);
Obj _3518551_37 = makeCons(_3518546_37, _3518550_37);
Obj _3518552_37 = makeCons(f, _3518551_37);
Obj _3518553_37 = makeCons(__symbolTable[91], _3518552_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3518553_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518211_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _3518212_37 = makeNative(41, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj _3518502_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518502_37) {
Obj _3518503_37 = PRIM_CAR(closureRef(co, 0));
Obj op = _3518503_37;
Obj _3518504_37 = PRIM_CDR(closureRef(co, 0));
Obj args = _3518504_37;
pushCont(co, 34, clofun8, 3, op, args, _3518212_37);
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
__arg0 = _3518212_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _3518505_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518212_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _3518505_37) {
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
__arg0 = _3518212_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _3518506_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = _3518506_37;
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
Obj _3518507_37 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = _3518507_37;
Obj _3518508_37 = PRIM_EQ(required, provided);
if (True == _3518508_37) {
Obj _3518509_37 = makeCons(op, Nil);
Obj _3518510_37 = makeCons(__symbolTable[95], _3518509_37);
pushCont(co, 39, clofun8, 2, args, _3518510_37);
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
Obj _3518514_37 = PRIM_GT(required, provided);
if (True == _3518514_37) {
Obj _3518515_37 = PRIM_SUB(required, provided);
pushCont(co, 37, clofun8, 2, op, args);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = _3518515_37;
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
Obj _3518516_37 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = _3518516_37;
Obj _3518517_37 = makeCons(op, args);
pushCont(co, 38, clofun8, 1, tmp);
__nargs = 3;
__arg0 = globalRef(__symbolTable[93]);
__arg1 = _3518517_37;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _3518518_37 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518519_37 = makeCons(_3518518_37, Nil);
Obj _3518520_37 = makeCons(tmp, _3518519_37);
Obj _3518521_37 = makeCons(__symbolTable[94], _3518520_37);
__nargs = 4;
__arg0 = globalRef(__symbolTable[102]);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = _3518521_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _3518511_37 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518510_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun8, 1, _3518510_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3518511_37;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _3518512_37 = __arg1;
Obj _3518510_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _3518513_37 = makeCons(_3518510_37, _3518512_37);
__nargs = 2;
__arg1 = _3518513_37;
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
Obj _3518501_37 = __arg1;
__nargs = 3;
__arg0 = globalRef(__symbolTable[97]);
__arg1 = _3518501_37;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _3518497_37 = __arg1;
if (True == _3518497_37) {
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
Obj _3518498_37 = __arg1;
Obj _3518499_37 = makeCons(closureRef(co, 0), Nil);
Obj _3518500_37 = makeCons(__symbolTable[98], _3518499_37);
__nargs = 2;
__arg1 = _3518500_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj _3518196_37 = __arg1;
Obj _3518197_37 = __arg2;
Obj _3518489_37 = PRIM_EQ(MAKE_NUMBER(0), _3518196_37);
if (True == _3518489_37) {
__nargs = 2;
__arg1 = _3518197_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518490_37 = PRIM_SUB(_3518196_37, MAKE_NUMBER(1));
Obj _3518491_37 = primGenSym();
Obj _3518492_37 = makeCons(_3518491_37, _3518197_37);
__nargs = 3;
__arg0 = globalRef(__symbolTable[103]);
__arg1 = _3518490_37;
__arg2 = _3518492_37;
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
Obj _3518486_37 = __arg1;
Obj find = _3518486_37;
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
Obj _3518487_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3518487_37) {
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
Obj _3518483_37 = __arg1;
Obj find = _3518483_37;
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
Obj _3518484_37 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _3518484_37) {
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
Obj _3518479_37 = __arg1;
PUSH_CONT_0(co, 4, clofun9);
__nargs = 2;
__arg0 = globalRef(__symbolTable[108]);
__arg1 = _3518479_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _3518480_37 = __arg1;
Obj _3518481_37 = primNot(_3518480_37);
__nargs = 2;
__arg1 = _3518481_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _3518192_37 = __arg1;
Obj _3518193_37 = __arg2;
Obj _3518403_37 = PRIM_EQ(Nil, _3518193_37);
if (True == _3518403_37) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518404_37 = PRIM_ISCONS(_3518193_37);
if (True == _3518404_37) {
Obj _3518405_37 = PRIM_CAR(_3518193_37);
Obj hd = _3518405_37;
Obj _3518406_37 = PRIM_CDR(_3518193_37);
Obj tl = _3518406_37;
pushCont(co, 6, clofun9, 2, _3518192_37, tl);
__nargs = 3;
__arg0 = globalRef(__symbolTable[129]);
__arg1 = _3518192_37;
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
Obj _3518407_37 = __arg1;
Obj _3518192_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _3518408_37 = PRIM_LT(_3518407_37, MAKE_NUMBER(0));
if (True == _3518408_37) {
__nargs = 3;
__arg0 = globalRef(__symbolTable[128]);
__arg1 = _3518192_37;
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
Obj _3518186_37 = __arg1;
Obj _3518187_37 = __arg2;
Obj _3518188_37 = __arg3;
Obj _3518392_37 = PRIM_EQ(Nil, _3518188_37);
if (True == _3518392_37) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518190_37 = makeNative(9, clofun9, 0, 3, _3518188_37, _3518186_37, _3518187_37);
Obj _3518397_37 = PRIM_ISCONS(_3518188_37);
if (True == _3518397_37) {
Obj _3518398_37 = PRIM_CAR(_3518188_37);
Obj a = _3518398_37;
Obj _3518399_37 = PRIM_CDR(_3518188_37);
Obj _3518400_37 = PRIM_EQ(_3518187_37, a);
if (True == _3518400_37) {
__nargs = 2;
__arg1 = _3518186_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518190_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518190_37;
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
Obj _3518393_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518393_37) {
Obj _3518394_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518395_37 = PRIM_CDR(closureRef(co, 0));
Obj b = _3518395_37;
Obj _3518396_37 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(__symbolTable[130]);
__arg1 = _3518396_37;
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
Obj _3518181_37 = __arg1;
Obj _3518182_37 = __arg2;
Obj _3518183_37 = __arg3;
Obj _3518386_37 = PRIM_EQ(Nil, _3518183_37);
if (True == _3518386_37) {
__nargs = 2;
__arg1 = _3518182_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518387_37 = PRIM_ISCONS(_3518183_37);
if (True == _3518387_37) {
Obj _3518388_37 = PRIM_CAR(_3518183_37);
Obj x = _3518388_37;
Obj _3518389_37 = PRIM_CDR(_3518183_37);
Obj y = _3518389_37;
pushCont(co, 11, clofun9, 2, _3518181_37, y);
__nargs = 3;
__arg0 = _3518181_37;
__arg1 = _3518182_37;
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
Obj _3518390_37 = __arg1;
Obj _3518181_37= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(__symbolTable[131]);
__arg1 = _3518181_37;
__arg2 = _3518390_37;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _3518176_37 = __arg1;
Obj _3518177_37 = __arg2;
Obj _3518371_37 = PRIM_EQ(Nil, _3518177_37);
if (True == _3518371_37) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _3518179_37 = makeNative(13, clofun9, 0, 2, _3518177_37, _3518176_37);
Obj _3518375_37 = PRIM_ISCONS(_3518177_37);
if (True == _3518375_37) {
Obj _3518376_37 = PRIM_CAR(_3518177_37);
Obj _3518377_37 = PRIM_ISCONS(_3518376_37);
if (True == _3518377_37) {
Obj _3518378_37 = PRIM_CAR(_3518177_37);
Obj _3518379_37 = PRIM_CAR(_3518378_37);
Obj x = _3518379_37;
Obj _3518380_37 = PRIM_CAR(_3518177_37);
Obj _3518381_37 = PRIM_CDR(_3518380_37);
Obj y = _3518381_37;
Obj _3518382_37 = PRIM_CDR(_3518177_37);
Obj _3518383_37 = PRIM_EQ(_3518176_37, x);
if (True == _3518383_37) {
Obj _3518384_37 = makeCons(x, y);
__nargs = 2;
__arg1 = _3518384_37;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _3518179_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518179_37;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _3518179_37;
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
Obj _3518372_37 = PRIM_ISCONS(closureRef(co, 0));
if (True == _3518372_37) {
Obj _3518373_37 = PRIM_CAR(closureRef(co, 0));
Obj _3518374_37 = PRIM_CDR(closureRef(co, 0));
Obj y = _3518374_37;
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

