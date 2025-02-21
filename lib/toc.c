#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void clofun1(struct Cora* co);
void clofun2(struct Cora* co);
void clofun3(struct Cora* co);
void clofun4(struct Cora* co);
void clofun5(struct Cora* co);
void clofun6(struct Cora* co);
void clofun7(struct Cora* co);
void clofun8(struct Cora* co);
void clofun9(struct Cora* co);


void entry(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
PUSH_CONT(co, 1, entry, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = makeCString("cora/lib/toc/internal");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val501 = __arg1;
PUSH_CONT(co, 2, entry, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = makeCString("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val502 = __arg1;
PUSH_CONT(co, 3, entry, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = makeCString("cora/lib/hash-h");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val503 = __arg1;
Obj _35reg504 = primSet(co, intern("cora/lib/toc#*ns-export*"), Nil);
Obj _35reg519 = primSet(co, intern("cora/lib/toc#assq"), makeNative(6, clofun9, 2, 0));
Obj _35reg525 = primSet(co, intern("cora/lib/toc#foldl"), makeNative(2, clofun9, 3, 0));
Obj _35reg535 = primSet(co, intern("cora/lib/toc#pos-in-list0"), makeNative(48, clofun8, 3, 0));
Obj _35reg536 = primSet(co, intern("cora/lib/toc#index"), makeNative(47, clofun8, 2, 0));
Obj _35reg543 = primSet(co, intern("cora/lib/toc#exist-in-env"), makeNative(43, clofun8, 2, 0));
Obj _35reg544 = makeCons(makeCString("primSet"), Nil);
Obj _35reg545 = makeCons(MAKE_NUMBER(2), _35reg544);
Obj _35reg546 = makeCons(intern("set"), _35reg545);
Obj _35reg547 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _35reg548 = makeCons(MAKE_NUMBER(1), _35reg547);
Obj _35reg549 = makeCons(intern("car"), _35reg548);
Obj _35reg550 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _35reg551 = makeCons(MAKE_NUMBER(1), _35reg550);
Obj _35reg552 = makeCons(intern("cdr"), _35reg551);
Obj _35reg553 = makeCons(makeCString("makeCons"), Nil);
Obj _35reg554 = makeCons(MAKE_NUMBER(2), _35reg553);
Obj _35reg555 = makeCons(intern("cons"), _35reg554);
Obj _35reg556 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _35reg557 = makeCons(MAKE_NUMBER(1), _35reg556);
Obj _35reg558 = makeCons(intern("cons?"), _35reg557);
Obj _35reg559 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _35reg560 = makeCons(MAKE_NUMBER(2), _35reg559);
Obj _35reg561 = makeCons(intern("+"), _35reg560);
Obj _35reg562 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _35reg563 = makeCons(MAKE_NUMBER(2), _35reg562);
Obj _35reg564 = makeCons(intern("-"), _35reg563);
Obj _35reg565 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _35reg566 = makeCons(MAKE_NUMBER(2), _35reg565);
Obj _35reg567 = makeCons(intern("*"), _35reg566);
Obj _35reg568 = makeCons(makeCString("primDiv"), Nil);
Obj _35reg569 = makeCons(MAKE_NUMBER(2), _35reg568);
Obj _35reg570 = makeCons(intern("/"), _35reg569);
Obj _35reg571 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _35reg572 = makeCons(MAKE_NUMBER(2), _35reg571);
Obj _35reg573 = makeCons(intern("="), _35reg572);
Obj _35reg574 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _35reg575 = makeCons(MAKE_NUMBER(2), _35reg574);
Obj _35reg576 = makeCons(intern(">"), _35reg575);
Obj _35reg577 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _35reg578 = makeCons(MAKE_NUMBER(2), _35reg577);
Obj _35reg579 = makeCons(intern("<"), _35reg578);
Obj _35reg580 = makeCons(makeCString("primGenSym"), Nil);
Obj _35reg581 = makeCons(MAKE_NUMBER(1), _35reg580);
Obj _35reg582 = makeCons(intern("gensym"), _35reg581);
Obj _35reg583 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _35reg584 = makeCons(MAKE_NUMBER(1), _35reg583);
Obj _35reg585 = makeCons(intern("symbol?"), _35reg584);
Obj _35reg586 = makeCons(makeCString("primNot"), Nil);
Obj _35reg587 = makeCons(MAKE_NUMBER(1), _35reg586);
Obj _35reg588 = makeCons(intern("not"), _35reg587);
Obj _35reg589 = makeCons(makeCString("primIsNumber"), Nil);
Obj _35reg590 = makeCons(MAKE_NUMBER(1), _35reg589);
Obj _35reg591 = makeCons(intern("integer?"), _35reg590);
Obj _35reg592 = makeCons(makeCString("primIsString"), Nil);
Obj _35reg593 = makeCons(MAKE_NUMBER(1), _35reg592);
Obj _35reg594 = makeCons(intern("string?"), _35reg593);
Obj _35reg595 = makeCons(_35reg594, Nil);
Obj _35reg596 = makeCons(_35reg591, _35reg595);
Obj _35reg597 = makeCons(_35reg588, _35reg596);
Obj _35reg598 = makeCons(_35reg585, _35reg597);
Obj _35reg599 = makeCons(_35reg582, _35reg598);
Obj _35reg600 = makeCons(_35reg579, _35reg599);
Obj _35reg601 = makeCons(_35reg576, _35reg600);
Obj _35reg602 = makeCons(_35reg573, _35reg601);
Obj _35reg603 = makeCons(_35reg570, _35reg602);
Obj _35reg604 = makeCons(_35reg567, _35reg603);
Obj _35reg605 = makeCons(_35reg564, _35reg604);
Obj _35reg606 = makeCons(_35reg561, _35reg605);
Obj _35reg607 = makeCons(_35reg558, _35reg606);
Obj _35reg608 = makeCons(_35reg555, _35reg607);
Obj _35reg609 = makeCons(_35reg552, _35reg608);
Obj _35reg610 = makeCons(_35reg549, _35reg609);
Obj _35reg611 = makeCons(_35reg546, _35reg610);
Obj _35reg612 = primSet(co, intern("cora/lib/toc#*builtin-prims*"), _35reg611);
Obj _35reg616 = primSet(co, intern("cora/lib/toc#builtin?"), makeNative(40, clofun8, 1, 0));
Obj _35reg619 = primSet(co, intern("cora/lib/toc#builtin->name"), makeNative(37, clofun8, 1, 0));
Obj _35reg622 = primSet(co, intern("cora/lib/toc#builtin->args"), makeNative(34, clofun8, 1, 0));
Obj _35reg627 = primSet(co, intern("cora/lib/toc#temp-list"), makeNative(31, clofun8, 2, 0));
Obj _35reg633 = primSet(co, intern("cora/lib/toc#var-with-ns"), makeNative(26, clofun8, 2, 0));
Obj _35reg645 = primSet(co, intern("cora/lib/toc#lookup-var"), makeNative(16, clofun8, 3, 0));
Obj _35reg834 = primSet(co, intern("cora/lib/toc#parse"), makeNative(31, clofun7, 4, 0));
Obj _35reg845 = primSet(co, intern("cora/lib/toc#union"), makeNative(25, clofun7, 2, 0));
Obj _35reg856 = primSet(co, intern("cora/lib/toc#diff"), makeNative(19, clofun7, 2, 0));
Obj _35reg907 = primSet(co, intern("cora/lib/toc#convert-protect?"), makeNative(12, clofun7, 1, 0));
Obj _35reg1082 = primSet(co, intern("cora/lib/toc#free-vars"), makeNative(39, clofun6, 1, 0));
Obj _35reg1155 = primSet(co, intern("cora/lib/toc#closure-convert"), makeNative(24, clofun6, 2, 0));
Obj _35reg1158 = primSet(co, intern("cora/lib/toc#id"), makeNative(23, clofun6, 1, 0));
Obj _35reg1295 = primSet(co, intern("cora/lib/toc#tailify"), makeNative(5, clofun6, 2, 0));
Obj _35reg1342 = primSet(co, intern("cora/lib/toc#tailify-list"), makeNative(45, clofun5, 3, 0));
Obj _35reg1421 = primSet(co, intern("cora/lib/toc#explicit-stack"), makeNative(27, clofun5, 2, 0));
Obj _35reg1519 = primSet(co, intern("cora/lib/toc#collect-lambda"), makeNative(7, clofun5, 2, 0));
Obj _35reg1527 = primSet(co, intern("cora/lib/toc#append-result"), makeNative(3, clofun5, 2, 0));
Obj _35reg1534 = primSet(co, intern("cora/lib/toc#wrap-var"), makeNative(1, clofun5, 2, 0));
Obj _35reg1554 = primSet(co, intern("cora/lib/toc#generate-call-list"), makeNative(37, clofun4, 4, 0));
Obj _35reg1830 = primSet(co, intern("cora/lib/toc#generate-inst"), makeNative(0, clofun3, 4, 0));
Obj _35reg1855 = primSet(co, intern("cora/lib/toc#generate-cont"), makeNative(36, clofun2, 3, 0));
Obj _35reg1864 = primSet(co, intern("cora/lib/toc#generate-inst-list-h"), makeNative(30, clofun2, 5, 0));
Obj _35reg1865 = primSet(co, intern("cora/lib/toc#generate-inst-list"), makeNative(29, clofun2, 4, 0));
Obj _35reg1866 = primSet(co, intern("cora/lib/toc#*mod-num*"), MAKE_NUMBER(50));
Obj _35reg1871 = primSet(co, intern("cora/lib/toc#generate-group-name"), makeNative(27, clofun2, 3, 0));
Obj _35reg1875 = primSet(co, intern("cora/lib/toc#code-gen-func-declare"), makeNative(23, clofun2, 3, 0));
Obj _35reg1883 = primSet(co, intern("cora/lib/toc#local-from-params"), makeNative(16, clofun2, 3, 0));
Obj _35reg1888 = primSet(co, intern("cora/lib/toc#local-from-cont"), makeNative(11, clofun2, 3, 0));
Obj _35reg1895 = primSet(co, intern("cora/lib/toc#generate-call-args-reverse"), makeNative(7, clofun2, 4, 0));
Obj _35reg1958 = primSet(co, intern("cora/lib/toc#code-gen-toplevel"), makeNative(45, clofun1, 3, 0));
Obj _35reg1959 = primSet(co, intern("cora/lib/toc#parse-pass"), makeNative(44, clofun1, 1, 0));
Obj _35reg1960 = primSet(co, intern("cora/lib/toc#closure-convert-pass"), makeNative(43, clofun1, 1, 0));
Obj _35reg1961 = primSet(co, intern("cora/lib/toc#tailify-pass"), makeNative(42, clofun1, 1, 0));
Obj _35reg1962 = primSet(co, intern("cora/lib/toc#explicit-stack-pass"), makeNative(41, clofun1, 1, 0));
Obj _35reg1972 = primSet(co, intern("cora/lib/toc#collect-lambda-pass"), makeNative(35, clofun1, 1, 0));
Obj _35reg1979 = primSet(co, intern("cora/lib/toc#rewrite-->macro"), makeNative(32, clofun1, 2, 0));
PUSH_CONT(co, 4, entry, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(29, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1982 = __arg1;
Obj _35reg1987 = primSet(co, intern("cora/lib/toc#compile"), makeNative(24, clofun1, 1, 0));
Obj _35reg1993 = primSet(co, intern("cora/lib/toc#for-each"), makeNative(20, clofun1, 2, 0));
Obj _35reg2000 = primSet(co, intern("cora/lib/toc#generate-jumptable"), makeNative(16, clofun1, 3, 0));
Obj _35reg2021 = primSet(co, intern("cora/lib/toc#generate-toplevel-group"), makeNative(44, entry, 3, 0));
Obj _35reg2036 = primSet(co, intern("cora/lib/toc#group-by-mod-h"), makeNative(38, entry, 4, 0));
Obj _35reg2045 = primSet(co, intern("cora/lib/toc#generate-c"), makeNative(27, entry, 2, 0));
Obj _35reg2077 = primSet(co, intern("cora/lib/toc#handle-import-eagerly"), makeNative(21, entry, 1, 0));
Obj _35reg2118 = primSet(co, intern("cora/lib/toc#split-type-and-code"), makeNative(14, entry, 4, 0));
Obj _35reg2119 = primSet(co, intern("cora/lib/infer#*typecheck*"), False);
Obj _35reg2122 = primSet(co, intern("cora/lib/toc#preprocess"), makeNative(11, entry, 1, 0));
Obj _35reg2128 = primSet(co, intern("cora/lib/toc#compile-to-c"), makeNative(5, entry, 2, 0));
__nargs = 2;
__arg1 = _35reg2128;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != entry) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
PUSH_CONT(co, 6, entry, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#preprocess"));
__arg1 = from;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2123 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 7, entry, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand"));
__arg1 = _35val2123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2124 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 8, entry, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#compile"));
__arg1 = _35val2124;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2125 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val2125;
PUSH_CONT(co, 9, entry, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2126 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val2126;
PUSH_CONT(co, 10, entry, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2127 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj file_45path = __arg1;
PUSH_CONT(co, 12, entry, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#read-file-as-sexp"));
__arg1 = file_45path;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2120 = __arg1;
Obj sexp = _35val2120;
PUSH_CONT(co, 13, entry, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2121 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != entry) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35p493 = __arg1;
Obj _35p494 = __arg2;
Obj _35p495 = __arg3;
Obj _35p496 = co->args[4];
Obj _35cc497 = makeNative(17, entry, 0, 4, _35p493, _35p494, _35p495, _35p496);
Obj _35reg2115 = PRIM_EQ(Nil, _35p493);
if (True == _35reg2115) {
Obj type = _35p494;
Obj code = _35p495;
Obj k = _35p496;
PUSH_CONT(co, 15, entry, 2, code, k);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2116 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 16, entry, 2, k, _35val2116);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2117 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2116= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val2116;
__arg2 = _35val2117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc498 = makeNative(18, entry, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2104 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2104) {
Obj _35reg2105 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2106 = PRIM_ISCONS(_35reg2105);
if (True == _35reg2106) {
Obj _35reg2107 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2108 = PRIM_CAR(_35reg2107);
Obj _35reg2109 = PRIM_EQ(intern(":type"), _35reg2108);
if (True == _35reg2109) {
Obj _35reg2110 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2111 = PRIM_CDR(_35reg2110);
Obj exp = _35reg2111;
Obj _35reg2112 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg2112;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg2113 = makeCons(intern("begin"), exp);
Obj _35reg2114 = makeCons(_35reg2113, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg2114;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc498;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc498;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc498;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc499 = makeNative(19, entry, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2093 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2093) {
Obj _35reg2094 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2095 = PRIM_ISCONS(_35reg2094);
if (True == _35reg2095) {
Obj _35reg2096 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2097 = PRIM_CAR(_35reg2096);
Obj _35reg2098 = PRIM_EQ(intern(":declare"), _35reg2097);
if (True == _35reg2098) {
Obj _35reg2099 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2100 = PRIM_CDR(_35reg2099);
Obj exp = _35reg2100;
Obj _35reg2101 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg2101;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg2102 = makeCons(intern("declare"), exp);
Obj _35reg2103 = makeCons(_35reg2102, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg2103;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc500 = makeNative(20, entry, 0, 0);
Obj _35reg2078 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2078) {
Obj _35reg2079 = PRIM_CAR(closureRef(co, 0));
Obj exp = _35reg2079;
Obj _35reg2080 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg2080;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg2081 = makeCons(exp, Nil);
Obj _35reg2082 = makeCons(intern("backquote"), _35reg2081);
Obj _35reg2083 = makeCons(_35reg2082, Nil);
Obj _35reg2084 = makeCons(intern("macroexpand"), _35reg2083);
Obj _35reg2085 = makeCons(intern("tvar"), Nil);
Obj _35reg2086 = makeCons(Nil, Nil);
Obj _35reg2087 = makeCons(Nil, _35reg2086);
Obj _35reg2088 = makeCons(_35reg2085, _35reg2087);
Obj _35reg2089 = makeCons(_35reg2084, _35reg2088);
Obj _35reg2090 = makeCons(intern("cora/lib/infer#check-type"), _35reg2089);
Obj _35reg2091 = makeCons(_35reg2090, type);
Obj _35reg2092 = makeCons(exp, code);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg2091;
__arg3 = _35reg2092;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35p488 = __arg1;
Obj _35cc489 = makeNative(22, entry, 0, 1, _35p488);
Obj _35reg2068 = PRIM_ISCONS(_35p488);
if (True == _35reg2068) {
Obj _35reg2069 = PRIM_CAR(_35p488);
Obj _35reg2070 = PRIM_EQ(intern("define-library"), _35reg2069);
if (True == _35reg2070) {
Obj _35reg2071 = PRIM_CDR(_35p488);
Obj _35reg2072 = PRIM_ISCONS(_35reg2071);
if (True == _35reg2072) {
Obj _35reg2073 = PRIM_CDR(_35p488);
Obj _35reg2074 = PRIM_CAR(_35reg2073);
Obj __ = _35reg2074;
Obj _35reg2075 = PRIM_CDR(_35p488);
Obj _35reg2076 = PRIM_CDR(_35reg2075);
Obj remain = _35reg2076;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc490 = makeNative(23, entry, 0, 1, closureRef(co, 0));
Obj _35reg2064 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2064) {
Obj _35reg2065 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2066 = PRIM_EQ(intern("begin"), _35reg2065);
if (True == _35reg2066) {
Obj _35reg2067 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg2067;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc491 = makeNative(25, entry, 0, 1, closureRef(co, 0));
Obj _35reg2046 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2046) {
Obj _35reg2047 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2048 = PRIM_ISCONS(_35reg2047);
if (True == _35reg2048) {
Obj _35reg2049 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2050 = PRIM_CAR(_35reg2049);
Obj _35reg2051 = PRIM_EQ(intern("import"), _35reg2050);
if (True == _35reg2051) {
Obj _35reg2052 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2053 = PRIM_CDR(_35reg2052);
Obj _35reg2054 = PRIM_ISCONS(_35reg2053);
if (True == _35reg2054) {
Obj _35reg2055 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2056 = PRIM_CDR(_35reg2055);
Obj _35reg2057 = PRIM_CAR(_35reg2056);
Obj pkg = _35reg2057;
Obj _35reg2058 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2059 = PRIM_CDR(_35reg2058);
Obj _35reg2060 = PRIM_CDR(_35reg2059);
Obj _35reg2061 = PRIM_EQ(Nil, _35reg2060);
if (True == _35reg2061) {
Obj _35reg2062 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg2062;
PUSH_CONT(co, 24, entry, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35val2063 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35cc492 = makeNative(26, entry, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != entry) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj to = __arg1;
Obj bc = __arg2;
PUSH_CONT(co, 28, entry, 2, bc, to);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#group-by-mod-h"));
__arg1 = Nil;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val2037 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups = _35val2037;
PUSH_CONT(co, 29, entry, 2, to, groups);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val2038 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid = _35val2038;
PUSH_CONT(co, 30, entry, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val2039 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 31, entry, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2040 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 32, entry, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(35, entry, 1, 2, maxid, to);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2043 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 33, entry, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val2044 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(34, entry, 1, 2, to, maxid);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj group = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-toplevel-group"));
__arg1 = closureRef(co, 0);
__arg2 = group;
__arg3 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj group = __arg1;
PUSH_CONT(co, 36, entry, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val2041 = __arg1;
PUSH_CONT(co, 37, entry, 0);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = closureRef(co, 1);
__arg2 = _35val2041;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val2042 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35p482 = __arg1;
Obj _35p483 = __arg2;
Obj _35p484 = __arg3;
Obj _35p485 = co->args[4];
Obj _35cc486 = makeNative(41, entry, 0, 4, _35p482, _35p483, _35p484, _35p485);
Obj res = _35p482;
Obj idx = _35p483;
Obj acc = _35p484;
Obj _35reg2031 = PRIM_EQ(Nil, _35p485);
if (True == _35reg2031) {
PUSH_CONT(co, 39, entry, 2, acc, res);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc486;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val2032 = __arg1;
Obj acc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2033 = primNot(_35val2032);
if (True == _35reg2033) {
PUSH_CONT(co, 40, entry, 1, res);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35val2034 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2035 = makeCons(_35val2034, res);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = _35reg2035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35cc487 = makeNative(43, entry, 0, 0);
Obj res = closureRef(co, 0);
Obj idx = closureRef(co, 1);
Obj acc = closureRef(co, 2);
Obj _35reg2022 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg2022) {
Obj _35reg2023 = PRIM_CAR(closureRef(co, 3));
Obj bc = _35reg2023;
Obj _35reg2024 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg2024;
Obj _35reg2025 = PRIM_EQ(idx, globalRef(intern("cora/lib/toc#*mod-num*")));
if (True == _35reg2025) {
PUSH_CONT(co, 42, entry, 3, res, bc, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2029 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _35reg2030 = makeCons(bc, acc);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#group-by-mod-h"));
__arg1 = res;
__arg2 = _35reg2029;
__arg3 = _35reg2030;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _35val2026 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2027 = makeCons(_35val2026, res);
Obj _35reg2028 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#group-by-mod-h"));
__arg1 = _35reg2027;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _35reg2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
PUSH_CONT(co, 45, entry, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val2001 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 46, entry, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val2001;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val2002 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 47, entry, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val2003 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 48, entry, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val2004 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 49, entry, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val2005 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 0, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != entry) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun1(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2006 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 1, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2007 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 2, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2008 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 3, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2009 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 4, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2010 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 5, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35val2010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2011 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 6, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2012 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 7, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2013 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 8, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(15, clofun1, 1, 2, to, maxid);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2014 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 9, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2015 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 10, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2016 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 11, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2017 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 12, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2018 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 13, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2019 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 14, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2020 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-toplevel"));
__arg1 = closureRef(co, 0);
__arg2 = x;
__arg3 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg1994 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _35reg1994) {
PUSH_CONT(co, 19, clofun1, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1996 = PRIM_LT(i, n);
if (True == _35reg1996) {
PUSH_CONT(co, 17, clofun1, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label17:
{
Obj _35val1997 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 18, clofun1, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1998 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1999 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = _35reg1999;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1995 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = MAKE_NUMBER(1);
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35p478 = __arg1;
Obj _35p479 = __arg2;
Obj _35cc480 = makeNative(21, clofun1, 0, 2, _35p478, _35p479);
Obj fn = _35p478;
Obj _35reg1992 = PRIM_EQ(Nil, _35p479);
if (True == _35reg1992) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc480;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc481 = makeNative(23, clofun1, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg1988 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1988) {
Obj _35reg1989 = PRIM_CAR(closureRef(co, 1));
Obj x = _35reg1989;
Obj _35reg1990 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg1990;
PUSH_CONT(co, 22, clofun1, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc481;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val1991 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj exp = __arg1;
PUSH_CONT(co, 25, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val1983 = __arg1;
PUSH_CONT(co, 26, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert-pass"));
__arg1 = _35val1983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val1984 = __arg1;
PUSH_CONT(co, 27, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#tailify-pass"));
__arg1 = _35val1984;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val1985 = __arg1;
PUSH_CONT(co, 28, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack-pass"));
__arg1 = _35val1985;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val1986 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda-pass"));
__arg1 = _35val1986;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
PUSH_CONT(co, 30, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val1980 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val1980;
PUSH_CONT(co, 31, clofun1, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val1981 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val1981;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35p474 = __arg1;
Obj _35p475 = __arg2;
Obj _35cc476 = makeNative(33, clofun1, 0, 2, _35p474, _35p475);
Obj obj = _35p474;
Obj _35reg1978 = PRIM_EQ(Nil, _35p475);
if (True == _35reg1978) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35cc477 = makeNative(34, clofun1, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg1973 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1973) {
Obj _35reg1974 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg1974;
Obj _35reg1975 = PRIM_CDR(closureRef(co, 1));
Obj more = _35reg1975;
Obj _35reg1976 = makeCons(obj, Nil);
Obj _35reg1977 = makeCons(hd, _35reg1976);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = _35reg1977;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc477;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj exp = __arg1;
PUSH_CONT(co, 36, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#vector"));
__arg1 = MAKE_NUMBER(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val1963 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val1963;
PUSH_CONT(co, 37, clofun1, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val1964 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 38, clofun1, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val1965 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 39, clofun1, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val1966 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val1966;
Obj _35reg1967 = makeCons(e1, Nil);
Obj _35reg1968 = makeCons(Nil, _35reg1967);
Obj _35reg1969 = makeCons(Nil, _35reg1968);
Obj _35reg1970 = makeCons(intern("lambda"), _35reg1969);
PUSH_CONT(co, 40, clofun1, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1970;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1971 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = exp;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj exp = __arg1;
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35p469 = __arg1;
Obj _35p470 = __arg2;
Obj _35p471 = __arg3;
Obj _35cc472 = makeNative(3, clofun2, 0, 3, _35p469, _35p470, _35p471);
Obj w = _35p469;
Obj _35reg1898 = PRIM_ISCONS(_35p470);
if (True == _35reg1898) {
Obj _35reg1899 = PRIM_CAR(_35p470);
Obj label = _35reg1899;
Obj _35reg1900 = PRIM_CDR(_35p470);
Obj _35reg1901 = PRIM_ISCONS(_35reg1900);
if (True == _35reg1901) {
Obj _35reg1902 = PRIM_CDR(_35p470);
Obj _35reg1903 = PRIM_CAR(_35reg1902);
Obj _35reg1904 = PRIM_ISCONS(_35reg1903);
if (True == _35reg1904) {
Obj _35reg1905 = PRIM_CDR(_35p470);
Obj _35reg1906 = PRIM_CAR(_35reg1905);
Obj _35reg1907 = PRIM_CAR(_35reg1906);
Obj _35reg1908 = PRIM_EQ(intern("lambda"), _35reg1907);
if (True == _35reg1908) {
Obj _35reg1909 = PRIM_CDR(_35p470);
Obj _35reg1910 = PRIM_CAR(_35reg1909);
Obj _35reg1911 = PRIM_CDR(_35reg1910);
Obj _35reg1912 = PRIM_ISCONS(_35reg1911);
if (True == _35reg1912) {
Obj _35reg1913 = PRIM_CDR(_35p470);
Obj _35reg1914 = PRIM_CAR(_35reg1913);
Obj _35reg1915 = PRIM_CDR(_35reg1914);
Obj _35reg1916 = PRIM_CAR(_35reg1915);
Obj params = _35reg1916;
Obj _35reg1917 = PRIM_CDR(_35p470);
Obj _35reg1918 = PRIM_CAR(_35reg1917);
Obj _35reg1919 = PRIM_CDR(_35reg1918);
Obj _35reg1920 = PRIM_CDR(_35reg1919);
Obj _35reg1921 = PRIM_ISCONS(_35reg1920);
if (True == _35reg1921) {
Obj _35reg1922 = PRIM_CDR(_35p470);
Obj _35reg1923 = PRIM_CAR(_35reg1922);
Obj _35reg1924 = PRIM_CDR(_35reg1923);
Obj _35reg1925 = PRIM_CDR(_35reg1924);
Obj _35reg1926 = PRIM_CAR(_35reg1925);
Obj actives = _35reg1926;
Obj _35reg1927 = PRIM_CDR(_35p470);
Obj _35reg1928 = PRIM_CAR(_35reg1927);
Obj _35reg1929 = PRIM_CDR(_35reg1928);
Obj _35reg1930 = PRIM_CDR(_35reg1929);
Obj _35reg1931 = PRIM_CDR(_35reg1930);
Obj _35reg1932 = PRIM_ISCONS(_35reg1931);
if (True == _35reg1932) {
Obj _35reg1933 = PRIM_CDR(_35p470);
Obj _35reg1934 = PRIM_CAR(_35reg1933);
Obj _35reg1935 = PRIM_CDR(_35reg1934);
Obj _35reg1936 = PRIM_CDR(_35reg1935);
Obj _35reg1937 = PRIM_CDR(_35reg1936);
Obj _35reg1938 = PRIM_CAR(_35reg1937);
Obj body = _35reg1938;
Obj _35reg1939 = PRIM_CDR(_35p470);
Obj _35reg1940 = PRIM_CAR(_35reg1939);
Obj _35reg1941 = PRIM_CDR(_35reg1940);
Obj _35reg1942 = PRIM_CDR(_35reg1941);
Obj _35reg1943 = PRIM_CDR(_35reg1942);
Obj _35reg1944 = PRIM_CDR(_35reg1943);
Obj _35reg1945 = PRIM_EQ(Nil, _35reg1944);
if (True == _35reg1945) {
Obj _35reg1946 = PRIM_CDR(_35p470);
Obj _35reg1947 = PRIM_CDR(_35reg1946);
Obj _35reg1948 = PRIM_EQ(Nil, _35reg1947);
if (True == _35reg1948) {
Obj maxid = _35p471;
PUSH_CONT(co, 46, clofun1, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val1949 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg1950 = PRIM_SUB(maxid, label);
PUSH_CONT(co, 47, clofun1, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/hash-h#mod"));
__arg1 = _35reg1950;
__arg2 = globalRef(intern("cora/lib/toc#*mod-num*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val1951 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 48, clofun1, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val1951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val1952 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 49, clofun1, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val1953 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 0, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-params"));
__arg2 = w;
__arg3 = MAKE_NUMBER(1);
co->args[4] = params;
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

void clofun2(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1954 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 1, clofun2, 5, maxid, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-cont"));
__arg2 = w;
__arg3 = MAKE_NUMBER(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1955 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg1956 = makeCons(maxid, label);
PUSH_CONT(co, 2, clofun2, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = _35reg1956;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1957 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc473 = makeNative(6, clofun2, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
Obj maxid = closureRef(co, 2);
PUSH_CONT(co, 4, clofun2, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1896 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 5, clofun2, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1897 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p463 = __arg1;
Obj _35p464 = __arg2;
Obj _35p465 = __arg3;
Obj _35p466 = co->args[4];
Obj _35cc467 = makeNative(8, clofun2, 0, 4, _35p463, _35p464, _35p465, _35p466);
Obj fn = _35p463;
Obj w = _35p464;
Obj idx = _35p465;
Obj _35reg1894 = PRIM_EQ(Nil, _35p466);
if (True == _35reg1894) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc468 = makeNative(10, clofun2, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg1889 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg1889) {
Obj _35reg1890 = PRIM_CAR(closureRef(co, 3));
Obj a = _35reg1890;
Obj _35reg1891 = PRIM_CDR(closureRef(co, 3));
Obj b = _35reg1891;
PUSH_CONT(co, 9, clofun2, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1892 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1893 = PRIM_ADD(idx, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg1893;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
PUSH_CONT(co, 12, clofun2, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1884 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun2, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1885 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 14, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1886 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 15, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1887 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
PUSH_CONT(co, 17, clofun2, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1876 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 18, clofun2, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1877 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1878 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _35reg1878) {
PUSH_CONT(co, 21, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 19, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val1881 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 20, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1882 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val1879 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 22, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val1880 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
PUSH_CONT(co, 24, clofun2, 3, label, maxid, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val1872 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 25, clofun2, 1, w);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-group-name"));
__arg1 = w;
__arg2 = label;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val1873 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 26, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val1874 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj _35reg1867 = PRIM_SUB(maxid, label);
Obj _35reg1868 = primDiv(_35reg1867, globalRef(intern("cora/lib/toc#*mod-num*")));
Obj gid = _35reg1868;
Obj _35reg1869 = PRIM_EQ(gid, MAKE_NUMBER(0));
if (True == _35reg1869) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("entry");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 28, clofun2, 2, w, gid);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("clofun");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val1870 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj gid= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = gid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj l = co->args[4];
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = globalRef(intern("cora/lib/toc#generate-inst"));
co->args[4] = w;
co->args[5] = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35p456 = __arg1;
Obj _35p457 = __arg2;
Obj _35p458 = __arg3;
Obj _35p459 = co->args[4];
Obj _35p460 = co->args[5];
Obj _35cc461 = makeNative(31, clofun2, 0, 5, _35p456, _35p457, _35p458, _35p459, _35p460);
Obj self = _35p456;
Obj env = _35p457;
Obj fn = _35p458;
Obj w = _35p459;
Obj _35reg1863 = PRIM_EQ(Nil, _35p460);
if (True == _35reg1863) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc461;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35cc462 = makeNative(35, clofun2, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg1856 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1856) {
Obj _35reg1857 = PRIM_CAR(closureRef(co, 4));
Obj a = _35reg1857;
Obj _35reg1858 = PRIM_CDR(closureRef(co, 4));
Obj b = _35reg1858;
PUSH_CONT(co, 32, clofun2, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc462;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35val1859 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 33, clofun2, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val1860 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg1861 = primNot(_35val1860);
if (True == _35reg1861) {
PUSH_CONT(co, 34, clofun2, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = fn;
co->args[4] = w;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35val1862 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list-h"));
__arg1 = self;
__arg2 = env;
__arg3 = fn;
co->args[4] = w;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35p452 = __arg1;
Obj _35p453 = __arg2;
Obj _35p454 = __arg3;
Obj _35cc455 = makeNative(49, clofun2, 0, 0);
Obj self = _35p452;
Obj w = _35p453;
Obj _35reg1831 = PRIM_ISCONS(_35p454);
if (True == _35reg1831) {
Obj _35reg1832 = PRIM_CAR(_35p454);
Obj _35reg1833 = PRIM_EQ(intern("%continuation"), _35reg1832);
if (True == _35reg1833) {
Obj _35reg1834 = PRIM_CDR(_35p454);
Obj _35reg1835 = PRIM_ISCONS(_35reg1834);
if (True == _35reg1835) {
Obj _35reg1836 = PRIM_CDR(_35p454);
Obj _35reg1837 = PRIM_CAR(_35reg1836);
Obj label = _35reg1837;
Obj _35reg1838 = PRIM_CDR(_35p454);
Obj _35reg1839 = PRIM_CDR(_35reg1838);
Obj stacks = _35reg1839;
PUSH_CONT(co, 37, clofun2, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("PUSH_CONT(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val1840 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1841 = PRIM_CAR(self);
Obj _35reg1842 = PRIM_SUB(_35reg1841, label);
PUSH_CONT(co, 38, clofun2, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/hash-h#mod"));
__arg1 = _35reg1842;
__arg2 = globalRef(intern("cora/lib/toc#*mod-num*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val1843 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 39, clofun2, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val1843;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val1844 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 40, clofun2, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1845 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1846 = PRIM_CAR(self);
PUSH_CONT(co, 41, clofun2, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-group-name"));
__arg1 = w;
__arg2 = label;
__arg3 = _35reg1846;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val1847 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 42, clofun2, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val1848 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 43, clofun2, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val1849 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 44, clofun2, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val1849;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val1850 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 45, clofun2, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val1851 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1852 = primNot(_35val1851);
if (True == _35reg1852) {
PUSH_CONT(co, 46, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(47, clofun2, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val1854 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x = __arg1;
PUSH_CONT(co, 48, clofun2, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val1853 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 0);
__arg2 = Nil;
__arg3 = closureRef(co, 1);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
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

void clofun3(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj x1 = co->args[4];
Obj _35reg1555 = primIsSymbol(x1);
if (True == _35reg1555) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = x1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35cc439 = makeNative(4, clofun3, 0, 4, self, env, x1, w);
Obj _35reg1817 = PRIM_ISCONS(x1);
if (True == _35reg1817) {
Obj _35reg1818 = PRIM_CAR(x1);
Obj _35reg1819 = PRIM_EQ(intern("%global"), _35reg1818);
if (True == _35reg1819) {
Obj _35reg1820 = PRIM_CDR(x1);
Obj _35reg1821 = PRIM_ISCONS(_35reg1820);
if (True == _35reg1821) {
Obj _35reg1822 = PRIM_CDR(x1);
Obj _35reg1823 = PRIM_CAR(_35reg1822);
Obj x = _35reg1823;
Obj _35reg1824 = PRIM_CDR(x1);
Obj _35reg1825 = PRIM_CDR(_35reg1824);
Obj _35reg1826 = PRIM_EQ(Nil, _35reg1825);
if (True == _35reg1826) {
PUSH_CONT(co, 1, clofun3, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label1:
{
Obj _35val1827 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 2, clofun3, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1828 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 3, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val1828;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1829 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc440 = makeNative(7, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1805 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1805) {
Obj _35reg1806 = PRIM_CAR(closureRef(co, 2));
Obj _35reg1807 = PRIM_EQ(intern("%closure-ref"), _35reg1806);
if (True == _35reg1807) {
Obj _35reg1808 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1809 = PRIM_ISCONS(_35reg1808);
if (True == _35reg1809) {
Obj _35reg1810 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1811 = PRIM_CAR(_35reg1810);
Obj idx = _35reg1811;
Obj _35reg1812 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1813 = PRIM_CDR(_35reg1812);
Obj _35reg1814 = PRIM_EQ(Nil, _35reg1813);
if (True == _35reg1814) {
PUSH_CONT(co, 5, clofun3, 1, idx);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1815 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 6, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 3);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1816 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc441 = makeNative(10, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1793 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1793) {
Obj _35reg1794 = PRIM_CAR(closureRef(co, 2));
Obj _35reg1795 = PRIM_EQ(intern("%stack-ref"), _35reg1794);
if (True == _35reg1795) {
Obj _35reg1796 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1797 = PRIM_ISCONS(_35reg1796);
if (True == _35reg1797) {
Obj _35reg1798 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1799 = PRIM_CAR(_35reg1798);
Obj idx = _35reg1799;
Obj _35reg1800 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1801 = PRIM_CDR(_35reg1800);
Obj _35reg1802 = PRIM_EQ(Nil, _35reg1801);
if (True == _35reg1802) {
PUSH_CONT(co, 8, clofun3, 1, idx);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc441;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc441;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc441;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc441;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1803 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 9, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 3);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1804 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc442 = makeNative(20, clofun3, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg1769 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1769) {
Obj _35reg1770 = PRIM_CAR(closureRef(co, 2));
Obj _35reg1771 = PRIM_EQ(intern("%const"), _35reg1770);
if (True == _35reg1771) {
Obj _35reg1772 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1773 = PRIM_ISCONS(_35reg1772);
if (True == _35reg1773) {
Obj _35reg1774 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1775 = PRIM_CAR(_35reg1774);
Obj x = _35reg1775;
Obj _35reg1776 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1777 = PRIM_CDR(_35reg1776);
Obj _35reg1778 = PRIM_EQ(Nil, _35reg1777);
if (True == _35reg1778) {
Obj _35reg1779 = primIsSymbol(x);
if (True == _35reg1779) {
PUSH_CONT(co, 17, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 11, clofun3, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc442;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc442;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc442;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc442;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val1783 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1783) {
PUSH_CONT(co, 15, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("MAKE_NUMBER(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1786 = primIsString(x);
if (True == _35reg1786) {
PUSH_CONT(co, 12, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1790 = PRIM_EQ(x, Nil);
if (True == _35reg1790) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1791 = PRIM_EQ(x, True);
if (True == _35reg1791) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1792 = PRIM_EQ(x, False);
if (True == _35reg1792) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label12:
{
Obj _35val1787 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 13, clofun3, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal#escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1788 = __arg1;
PUSH_CONT(co, 14, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = _35val1788;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1789 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1784 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 16, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1785 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1780 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 18, clofun3, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1781 = __arg1;
PUSH_CONT(co, 19, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = _35val1781;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1782 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc443 = makeNative(31, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1730 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1730) {
Obj _35reg1731 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1732 = PRIM_EQ(intern("let"), _35reg1731);
if (True == _35reg1732) {
Obj _35reg1733 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1734 = PRIM_ISCONS(_35reg1733);
if (True == _35reg1734) {
Obj _35reg1735 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1736 = PRIM_CAR(_35reg1735);
Obj a = _35reg1736;
Obj _35reg1737 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1738 = PRIM_CDR(_35reg1737);
Obj _35reg1739 = PRIM_ISCONS(_35reg1738);
if (True == _35reg1739) {
Obj _35reg1740 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1741 = PRIM_CDR(_35reg1740);
Obj _35reg1742 = PRIM_CAR(_35reg1741);
Obj b = _35reg1742;
Obj _35reg1743 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1744 = PRIM_CDR(_35reg1743);
Obj _35reg1745 = PRIM_CDR(_35reg1744);
Obj _35reg1746 = PRIM_ISCONS(_35reg1745);
if (True == _35reg1746) {
Obj _35reg1747 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1748 = PRIM_CDR(_35reg1747);
Obj _35reg1749 = PRIM_CDR(_35reg1748);
Obj _35reg1750 = PRIM_CAR(_35reg1749);
Obj c = _35reg1750;
Obj _35reg1751 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1752 = PRIM_CDR(_35reg1751);
Obj _35reg1753 = PRIM_CDR(_35reg1752);
Obj _35reg1754 = PRIM_CDR(_35reg1753);
Obj _35reg1755 = PRIM_EQ(Nil, _35reg1754);
if (True == _35reg1755) {
PUSH_CONT(co, 21, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = a;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35val1756 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx = _35val1756;
Obj _35reg1757 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _35reg1757) {
PUSH_CONT(co, 26, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
PUSH_CONT(co, 22, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val1764 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 23, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35val1765 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 24, clofun3, 2, a, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val1766 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 25, clofun3, 2, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val1767 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1768 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = _35reg1768;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val1758 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 27, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val1759 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 28, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val1760 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 29, clofun3, 2, a, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val1761 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 30, clofun3, 2, a, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val1762 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1763 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = _35reg1763;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35cc444 = makeNative(38, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1706 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1706) {
Obj _35reg1707 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1708 = PRIM_ISCONS(_35reg1707);
if (True == _35reg1708) {
Obj _35reg1709 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1710 = PRIM_CAR(_35reg1709);
Obj _35reg1711 = PRIM_EQ(intern("%builtin"), _35reg1710);
if (True == _35reg1711) {
Obj _35reg1712 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1713 = PRIM_CDR(_35reg1712);
Obj _35reg1714 = PRIM_ISCONS(_35reg1713);
if (True == _35reg1714) {
Obj _35reg1715 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1716 = PRIM_CDR(_35reg1715);
Obj _35reg1717 = PRIM_CAR(_35reg1716);
Obj f = _35reg1717;
Obj _35reg1718 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1719 = PRIM_CDR(_35reg1718);
Obj _35reg1720 = PRIM_CDR(_35reg1719);
Obj _35reg1721 = PRIM_EQ(Nil, _35reg1720);
if (True == _35reg1721) {
Obj _35reg1722 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg1722;
PUSH_CONT(co, 32, clofun3, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35val1723 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 33, clofun3, 2, f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = _35val1723;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val1724 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1725 = PRIM_EQ(f, intern("set"));
if (True == _35reg1725) {
PUSH_CONT(co, 36, clofun3, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 34, clofun3, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35val1728 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 35, clofun3, 0);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val1729 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val1726 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 37, clofun3, 0);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val1727 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35cc445 = makeNative(45, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1674 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1674) {
Obj _35reg1675 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1676 = PRIM_EQ(intern("if"), _35reg1675);
if (True == _35reg1676) {
Obj _35reg1677 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1678 = PRIM_ISCONS(_35reg1677);
if (True == _35reg1678) {
Obj _35reg1679 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1680 = PRIM_CAR(_35reg1679);
Obj a = _35reg1680;
Obj _35reg1681 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1682 = PRIM_CDR(_35reg1681);
Obj _35reg1683 = PRIM_ISCONS(_35reg1682);
if (True == _35reg1683) {
Obj _35reg1684 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1685 = PRIM_CDR(_35reg1684);
Obj _35reg1686 = PRIM_CAR(_35reg1685);
Obj b = _35reg1686;
Obj _35reg1687 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1688 = PRIM_CDR(_35reg1687);
Obj _35reg1689 = PRIM_CDR(_35reg1688);
Obj _35reg1690 = PRIM_ISCONS(_35reg1689);
if (True == _35reg1690) {
Obj _35reg1691 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1692 = PRIM_CDR(_35reg1691);
Obj _35reg1693 = PRIM_CDR(_35reg1692);
Obj _35reg1694 = PRIM_CAR(_35reg1693);
Obj c = _35reg1694;
Obj _35reg1695 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1696 = PRIM_CDR(_35reg1695);
Obj _35reg1697 = PRIM_CDR(_35reg1696);
Obj _35reg1698 = PRIM_CDR(_35reg1697);
Obj _35reg1699 = PRIM_EQ(Nil, _35reg1698);
if (True == _35reg1699) {
PUSH_CONT(co, 39, clofun3, 3, a, b, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val1700 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 40, clofun3, 2, b, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1701 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 41, clofun3, 2, b, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val1702 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 42, clofun3, 1, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val1703 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 43, clofun3, 1, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val1704 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun3, 0);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val1705 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35cc446 = makeNative(9, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1641 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1641) {
Obj _35reg1642 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1643 = PRIM_EQ(intern("%closure"), _35reg1642);
if (True == _35reg1643) {
Obj _35reg1644 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1645 = PRIM_ISCONS(_35reg1644);
if (True == _35reg1645) {
Obj _35reg1646 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1647 = PRIM_CAR(_35reg1646);
Obj label = _35reg1647;
Obj _35reg1648 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1649 = PRIM_CDR(_35reg1648);
Obj _35reg1650 = PRIM_ISCONS(_35reg1649);
if (True == _35reg1650) {
Obj _35reg1651 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1652 = PRIM_CDR(_35reg1651);
Obj _35reg1653 = PRIM_CAR(_35reg1652);
Obj nargs = _35reg1653;
Obj _35reg1654 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1655 = PRIM_CDR(_35reg1654);
Obj _35reg1656 = PRIM_CDR(_35reg1655);
Obj frees = _35reg1656;
PUSH_CONT(co, 46, clofun3, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val1657 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1658 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1659 = PRIM_SUB(_35reg1658, label);
PUSH_CONT(co, 47, clofun3, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/hash-h#mod"));
__arg1 = _35reg1659;
__arg2 = globalRef(intern("cora/lib/toc#*mod-num*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val1660 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 48, clofun3, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 3);
__arg2 = _35val1660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val1661 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 49, clofun3, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val1662 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1663 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 0, clofun4, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-group-name"));
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = _35reg1663;
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

void clofun4(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1664 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 1, clofun4, 2, nargs, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1665 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 2, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 3);
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1666 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 3, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1667 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 4, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1668 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 5, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 3);
__arg2 = _35val1668;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1669 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 6, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1670 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1671 = primNot(_35val1670);
if (True == _35reg1671) {
PUSH_CONT(co, 7, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1672 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 8, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1673 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc447 = makeNative(12, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg1622 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1622) {
Obj _35reg1623 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1624 = PRIM_EQ(intern("do"), _35reg1623);
if (True == _35reg1624) {
Obj _35reg1625 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1626 = PRIM_ISCONS(_35reg1625);
if (True == _35reg1626) {
Obj _35reg1627 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1628 = PRIM_CAR(_35reg1627);
Obj a = _35reg1628;
Obj _35reg1629 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1630 = PRIM_CDR(_35reg1629);
Obj _35reg1631 = PRIM_ISCONS(_35reg1630);
if (True == _35reg1631) {
Obj _35reg1632 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1633 = PRIM_CDR(_35reg1632);
Obj _35reg1634 = PRIM_CAR(_35reg1633);
Obj b = _35reg1634;
Obj _35reg1635 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1636 = PRIM_CDR(_35reg1635);
Obj _35reg1637 = PRIM_CDR(_35reg1636);
Obj _35reg1638 = PRIM_EQ(Nil, _35reg1637);
if (True == _35reg1638) {
PUSH_CONT(co, 10, clofun4, 1, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1639 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 11, clofun4, 1, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1640 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc448 = makeNative(21, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg1602 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1602) {
Obj _35reg1603 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1604 = PRIM_EQ(intern("return"), _35reg1603);
if (True == _35reg1604) {
Obj _35reg1605 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1606 = PRIM_ISCONS(_35reg1605);
if (True == _35reg1606) {
Obj _35reg1607 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1608 = PRIM_CAR(_35reg1607);
Obj x = _35reg1608;
Obj _35reg1609 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1610 = PRIM_CDR(_35reg1609);
Obj _35reg1611 = PRIM_EQ(Nil, _35reg1610);
if (True == _35reg1611) {
PUSH_CONT(co, 13, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc448;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc448;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc448;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc448;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1612 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 14, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1613 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 15, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 3);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1614 = __arg1;
PUSH_CONT(co, 16, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1615 = __arg1;
PUSH_CONT(co, 17, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1616 = __arg1;
PUSH_CONT(co, 18, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1617 = __arg1;
Obj _35reg1618 = PRIM_CDR(closureRef(co, 2));
Obj _35reg1619 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT(co, 19, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-group-name"));
__arg1 = closureRef(co, 3);
__arg2 = _35reg1618;
__arg3 = _35reg1619;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1620 = __arg1;
PUSH_CONT(co, 20, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1621 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 3);
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35cc449 = makeNative(22, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1592 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1592) {
Obj _35reg1593 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1594 = PRIM_EQ(intern("tailcall"), _35reg1593);
if (True == _35reg1594) {
Obj _35reg1595 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1596 = PRIM_ISCONS(_35reg1595);
if (True == _35reg1596) {
Obj _35reg1597 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1598 = PRIM_CAR(_35reg1597);
Obj exp = _35reg1598;
Obj _35reg1599 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1600 = PRIM_CDR(_35reg1599);
Obj _35reg1601 = PRIM_EQ(Nil, _35reg1600);
if (True == _35reg1601) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc450 = makeNative(24, clofun4, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg1574 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1574) {
Obj _35reg1575 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1576 = PRIM_EQ(intern("call"), _35reg1575);
if (True == _35reg1576) {
Obj _35reg1577 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1578 = PRIM_ISCONS(_35reg1577);
if (True == _35reg1578) {
Obj _35reg1579 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1580 = PRIM_CAR(_35reg1579);
Obj exp = _35reg1580;
Obj _35reg1581 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1582 = PRIM_CDR(_35reg1581);
Obj _35reg1583 = PRIM_ISCONS(_35reg1582);
if (True == _35reg1583) {
Obj _35reg1584 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1585 = PRIM_CDR(_35reg1584);
Obj _35reg1586 = PRIM_CAR(_35reg1585);
Obj cont = _35reg1586;
Obj _35reg1587 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1588 = PRIM_CDR(_35reg1587);
Obj _35reg1589 = PRIM_CDR(_35reg1588);
Obj _35reg1590 = PRIM_EQ(Nil, _35reg1589);
if (True == _35reg1590) {
PUSH_CONT(co, 23, clofun4, 1, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-cont"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 3);
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val1591 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35cc451 = makeNative(36, clofun4, 0, 0);
Obj _35reg1556 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1556) {
Obj _35reg1557 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg1557;
Obj _35reg1558 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg1558;
PUSH_CONT(co, 25, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val1559 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 26, clofun4, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val1560 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1561 = PRIM_ADD(MAKE_NUMBER(1), _35val1560);
PUSH_CONT(co, 27, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = closureRef(co, 2);
__arg2 = _35reg1561;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val1562 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 28, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val1563 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1564 = makeCons(f, args);
PUSH_CONT(co, 29, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = _35reg1564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val1565 = __arg1;
PUSH_CONT(co, 30, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val1566 = __arg1;
PUSH_CONT(co, 31, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val1567 = __arg1;
PUSH_CONT(co, 32, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val1568 = __arg1;
PUSH_CONT(co, 33, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val1569 = __arg1;
Obj _35reg1570 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1571 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 34, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-group-name"));
__arg1 = closureRef(co, 2);
__arg2 = _35reg1570;
__arg3 = _35reg1571;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val1572 = __arg1;
PUSH_CONT(co, 35, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val1573 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 2);
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35p433 = __arg1;
Obj _35p434 = __arg2;
Obj _35p435 = __arg3;
Obj _35p436 = co->args[4];
Obj _35cc437 = makeNative(38, clofun4, 0, 4, _35p433, _35p434, _35p435, _35p436);
Obj self = _35p433;
Obj w = _35p434;
Obj i = _35p435;
Obj _35reg1553 = PRIM_EQ(Nil, _35p436);
if (True == _35reg1553) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35cc438 = makeNative(0, clofun5, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg1535 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg1535) {
Obj _35reg1536 = PRIM_CAR(closureRef(co, 3));
Obj x = _35reg1536;
Obj _35reg1537 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg1537;
Obj _35reg1538 = PRIM_GT(i, MAKE_NUMBER(3));
Obj _35reg1539 = primNot(_35reg1538);
if (True == _35reg1539) {
PUSH_CONT(co, 45, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 39, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val1546 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 40, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1547 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 41, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val1548 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 42, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val1549 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 43, clofun4, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val1550 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 44, clofun4, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val1551 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1552 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg1552;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val1540 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 46, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val1541 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 47, clofun4, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val1542 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 48, clofun4, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val1543 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 49, clofun4, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val1544 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1545 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg1545;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun5(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg1528 = primGenSym(intern("reg"));
Obj tmp = _35reg1528;
PUSH_CONT(co, 2, clofun5, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1529 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1530 = makeCons(_35val1529, Nil);
Obj _35reg1531 = makeCons(x, _35reg1530);
Obj _35reg1532 = makeCons(tmp, _35reg1531);
Obj _35reg1533 = makeCons(intern("let"), _35reg1532);
__nargs = 2;
__arg1 = _35reg1533;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj v = __arg1;
Obj val = __arg2;
PUSH_CONT(co, 4, clofun5, 2, val, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1520 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj idx = _35val1520;
PUSH_CONT(co, 5, clofun5, 3, val, idx, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1521 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur = _35val1521;
Obj _35reg1522 = makeCons(val, Nil);
Obj _35reg1523 = makeCons(idx, _35reg1522);
Obj _35reg1524 = makeCons(_35reg1523, cur);
Obj cur1 = _35reg1524;
Obj _35reg1525 = PRIM_ADD(idx, MAKE_NUMBER(1));
PUSH_CONT(co, 6, clofun5, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35reg1525;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1526 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p428 = __arg1;
Obj _35p429 = __arg2;
Obj _35cc430 = makeNative(23, clofun5, 0, 2, _35p428, _35p429);
Obj v = _35p428;
Obj _35reg1423 = PRIM_ISCONS(_35p429);
if (True == _35reg1423) {
Obj _35reg1424 = PRIM_CAR(_35p429);
Obj clo_45or_45cont = _35reg1424;
Obj _35reg1425 = PRIM_CDR(_35p429);
Obj _35reg1426 = PRIM_ISCONS(_35reg1425);
if (True == _35reg1426) {
Obj _35reg1427 = PRIM_CDR(_35p429);
Obj _35reg1428 = PRIM_CAR(_35reg1427);
Obj _35reg1429 = PRIM_ISCONS(_35reg1428);
if (True == _35reg1429) {
Obj _35reg1430 = PRIM_CDR(_35p429);
Obj _35reg1431 = PRIM_CAR(_35reg1430);
Obj _35reg1432 = PRIM_CAR(_35reg1431);
Obj _35reg1433 = PRIM_EQ(intern("lambda"), _35reg1432);
if (True == _35reg1433) {
Obj _35reg1434 = PRIM_CDR(_35p429);
Obj _35reg1435 = PRIM_CAR(_35reg1434);
Obj _35reg1436 = PRIM_CDR(_35reg1435);
Obj _35reg1437 = PRIM_ISCONS(_35reg1436);
if (True == _35reg1437) {
Obj _35reg1438 = PRIM_CDR(_35p429);
Obj _35reg1439 = PRIM_CAR(_35reg1438);
Obj _35reg1440 = PRIM_CDR(_35reg1439);
Obj _35reg1441 = PRIM_CAR(_35reg1440);
Obj params = _35reg1441;
Obj _35reg1442 = PRIM_CDR(_35p429);
Obj _35reg1443 = PRIM_CAR(_35reg1442);
Obj _35reg1444 = PRIM_CDR(_35reg1443);
Obj _35reg1445 = PRIM_CDR(_35reg1444);
Obj _35reg1446 = PRIM_ISCONS(_35reg1445);
if (True == _35reg1446) {
Obj _35reg1447 = PRIM_CDR(_35p429);
Obj _35reg1448 = PRIM_CAR(_35reg1447);
Obj _35reg1449 = PRIM_CDR(_35reg1448);
Obj _35reg1450 = PRIM_CDR(_35reg1449);
Obj _35reg1451 = PRIM_CAR(_35reg1450);
Obj body = _35reg1451;
Obj _35reg1452 = PRIM_CDR(_35p429);
Obj _35reg1453 = PRIM_CAR(_35reg1452);
Obj _35reg1454 = PRIM_CDR(_35reg1453);
Obj _35reg1455 = PRIM_CDR(_35reg1454);
Obj _35reg1456 = PRIM_CDR(_35reg1455);
Obj _35reg1457 = PRIM_EQ(Nil, _35reg1456);
if (True == _35reg1457) {
Obj _35reg1458 = PRIM_CDR(_35p429);
Obj _35reg1459 = PRIM_CDR(_35reg1458);
Obj fvs = _35reg1459;
Obj _35reg1460 = PRIM_EQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg1460) {
if (True == True) {
PUSH_CONT(co, 18, clofun5, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg1480 = PRIM_EQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg1480) {
if (True == True) {
PUSH_CONT(co, 13, clofun5, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 8, clofun5, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1500 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val1500;
PUSH_CONT(co, 9, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1501 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val1501;
Obj _35reg1502 = PRIM_EQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg1502) {
Obj _35reg1503 = makeCons(body1, Nil);
Obj _35reg1504 = makeCons(Nil, _35reg1503);
Obj _35reg1505 = makeCons(params, _35reg1504);
Obj _35reg1506 = makeCons(intern("lambda"), _35reg1505);
PUSH_CONT(co, 11, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1506;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1512 = makeCons(body1, Nil);
Obj _35reg1513 = makeCons(fvs, _35reg1512);
Obj _35reg1514 = makeCons(params, _35reg1513);
Obj _35reg1515 = makeCons(intern("lambda"), _35reg1514);
PUSH_CONT(co, 10, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1515;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1516 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1517 = makeCons(cur, fvs);
Obj _35reg1518 = makeCons(clo_45or_45cont, _35reg1517);
__nargs = 2;
__arg1 = _35reg1518;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val1507 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 12, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1508 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1509 = makeCons(_35val1508, fvs);
Obj _35reg1510 = makeCons(cur, _35reg1509);
Obj _35reg1511 = makeCons(clo_45or_45cont, _35reg1510);
__nargs = 2;
__arg1 = _35reg1511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val1481 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val1481;
PUSH_CONT(co, 14, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1482 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val1482;
Obj _35reg1483 = PRIM_EQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg1483) {
Obj _35reg1484 = makeCons(body1, Nil);
Obj _35reg1485 = makeCons(Nil, _35reg1484);
Obj _35reg1486 = makeCons(params, _35reg1485);
Obj _35reg1487 = makeCons(intern("lambda"), _35reg1486);
PUSH_CONT(co, 16, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1493 = makeCons(body1, Nil);
Obj _35reg1494 = makeCons(fvs, _35reg1493);
Obj _35reg1495 = makeCons(params, _35reg1494);
Obj _35reg1496 = makeCons(intern("lambda"), _35reg1495);
PUSH_CONT(co, 15, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1497 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1498 = makeCons(cur, fvs);
Obj _35reg1499 = makeCons(clo_45or_45cont, _35reg1498);
__nargs = 2;
__arg1 = _35reg1499;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1488 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 17, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1489 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1490 = makeCons(_35val1489, fvs);
Obj _35reg1491 = makeCons(cur, _35reg1490);
Obj _35reg1492 = makeCons(clo_45or_45cont, _35reg1491);
__nargs = 2;
__arg1 = _35reg1492;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1461 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val1461;
PUSH_CONT(co, 19, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1462 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val1462;
Obj _35reg1463 = PRIM_EQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg1463) {
Obj _35reg1464 = makeCons(body1, Nil);
Obj _35reg1465 = makeCons(Nil, _35reg1464);
Obj _35reg1466 = makeCons(params, _35reg1465);
Obj _35reg1467 = makeCons(intern("lambda"), _35reg1466);
PUSH_CONT(co, 21, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1473 = makeCons(body1, Nil);
Obj _35reg1474 = makeCons(fvs, _35reg1473);
Obj _35reg1475 = makeCons(params, _35reg1474);
Obj _35reg1476 = makeCons(intern("lambda"), _35reg1475);
PUSH_CONT(co, 20, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = _35reg1476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1477 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1478 = makeCons(cur, fvs);
Obj _35reg1479 = makeCons(clo_45or_45cont, _35reg1478);
__nargs = 2;
__arg1 = _35reg1479;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj _35val1468 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 22, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val1469 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1470 = makeCons(_35val1469, fvs);
Obj _35reg1471 = makeCons(cur, _35reg1470);
Obj _35reg1472 = makeCons(clo_45or_45cont, _35reg1471);
__nargs = 2;
__arg1 = _35reg1472;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj _35cc431 = makeNative(25, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg1422 = PRIM_ISCONS(f_45args);
if (True == _35reg1422) {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = makeNative(24, clofun5, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35cc432 = makeNative(26, clofun5, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35p420 = __arg1;
Obj _35p421 = __arg2;
Obj _35cc422 = makeNative(29, clofun5, 0, 2, _35p420, _35p421);
Obj __ = _35p420;
Obj x = _35p421;
PUSH_CONT(co, 28, clofun5, 2, x, _35cc422);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val1420 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc422= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1420) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc422;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _35cc423 = makeNative(30, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg1419 = primIsSymbol(var);
if (True == _35reg1419) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj _35cc424 = makeNative(32, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1398 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1398) {
Obj _35reg1399 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1400 = PRIM_EQ(intern("lambda"), _35reg1399);
if (True == _35reg1400) {
Obj _35reg1401 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1402 = PRIM_ISCONS(_35reg1401);
if (True == _35reg1402) {
Obj _35reg1403 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1404 = PRIM_CAR(_35reg1403);
Obj args = _35reg1404;
Obj _35reg1405 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1406 = PRIM_CDR(_35reg1405);
Obj _35reg1407 = PRIM_ISCONS(_35reg1406);
if (True == _35reg1407) {
Obj _35reg1408 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1409 = PRIM_CDR(_35reg1408);
Obj _35reg1410 = PRIM_CAR(_35reg1409);
Obj body = _35reg1410;
Obj _35reg1411 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1412 = PRIM_CDR(_35reg1411);
Obj _35reg1413 = PRIM_CDR(_35reg1412);
Obj _35reg1414 = PRIM_EQ(Nil, _35reg1413);
if (True == _35reg1414) {
PUSH_CONT(co, 31, clofun5, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35val1415 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1416 = makeCons(_35val1415, Nil);
Obj _35reg1417 = makeCons(args, _35reg1416);
Obj _35reg1418 = makeCons(intern("lambda"), _35reg1417);
__nargs = 2;
__arg1 = _35reg1418;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj _35cc425 = makeNative(38, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1371 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1371) {
Obj _35reg1372 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1373 = PRIM_EQ(intern("continuation"), _35reg1372);
if (True == _35reg1373) {
Obj _35reg1374 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1375 = PRIM_ISCONS(_35reg1374);
if (True == _35reg1375) {
Obj _35reg1376 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1377 = PRIM_CAR(_35reg1376);
Obj val = _35reg1377;
Obj _35reg1378 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1379 = PRIM_CDR(_35reg1378);
Obj _35reg1380 = PRIM_ISCONS(_35reg1379);
if (True == _35reg1380) {
Obj _35reg1381 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1382 = PRIM_CDR(_35reg1381);
Obj _35reg1383 = PRIM_CAR(_35reg1382);
Obj body = _35reg1383;
Obj _35reg1384 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1385 = PRIM_CDR(_35reg1384);
Obj _35reg1386 = PRIM_CDR(_35reg1385);
Obj _35reg1387 = PRIM_EQ(Nil, _35reg1386);
if (True == _35reg1387) {
PUSH_CONT(co, 33, clofun5, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35val1388 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 34, clofun5, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1388;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val1389 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val1389;
PUSH_CONT(co, 35, clofun5, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val1390 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 36, clofun5, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1390;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val1391 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val1391;
PUSH_CONT(co, 37, clofun5, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val1392 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1393 = makeCons(_35val1392, Nil);
Obj _35reg1394 = makeCons(val, _35reg1393);
Obj _35reg1395 = makeCons(intern("lambda"), _35reg1394);
Obj _35reg1396 = makeCons(_35reg1395, fvs2);
Obj _35reg1397 = makeCons(intern("%continuation"), _35reg1396);
__nargs = 2;
__arg1 = _35reg1397;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj _35cc426 = makeNative(42, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1348 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1348) {
Obj _35reg1349 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1350 = PRIM_EQ(intern("call"), _35reg1349);
if (True == _35reg1350) {
Obj _35reg1351 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1352 = PRIM_ISCONS(_35reg1351);
if (True == _35reg1352) {
Obj _35reg1353 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1354 = PRIM_CAR(_35reg1353);
Obj exp = _35reg1354;
Obj _35reg1355 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1356 = PRIM_CDR(_35reg1355);
Obj _35reg1357 = PRIM_ISCONS(_35reg1356);
if (True == _35reg1357) {
Obj _35reg1358 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1359 = PRIM_CDR(_35reg1358);
Obj _35reg1360 = PRIM_CAR(_35reg1359);
Obj cont = _35reg1360;
Obj _35reg1361 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1362 = PRIM_CDR(_35reg1361);
Obj _35reg1363 = PRIM_CDR(_35reg1362);
Obj _35reg1364 = PRIM_EQ(Nil, _35reg1363);
if (True == _35reg1364) {
PUSH_CONT(co, 39, clofun5, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc426;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc426;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc426;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc426;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc426;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val1365 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 40, clofun5, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1365;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1366 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 41, clofun5, 1, _35val1366);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val1367 = __arg1;
Obj _35val1366= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1368 = makeCons(_35val1367, Nil);
Obj _35reg1369 = makeCons(_35val1366, _35reg1368);
Obj _35reg1370 = makeCons(intern("call"), _35reg1369);
__nargs = 2;
__arg1 = _35reg1370;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj _35cc427 = makeNative(44, clofun5, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1343 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1343) {
Obj _35reg1344 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg1344;
Obj _35reg1345 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg1345;
PUSH_CONT(co, 43, clofun5, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc427;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _35val1346 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1347 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1346;
__arg2 = _35reg1347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35p415 = __arg1;
Obj _35p416 = __arg2;
Obj _35p417 = __arg3;
Obj _35cc418 = makeNative(2, clofun6, 0, 3, _35p415, _35p416, _35p417);
Obj _35reg1300 = PRIM_EQ(Nil, _35p415);
if (True == _35reg1300) {
Obj ls = _35p416;
Obj next = _35p417;
PUSH_CONT(co, 46, clofun5, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val1301 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val1301;
Obj _35reg1302 = PRIM_CAR(exp);
PUSH_CONT(co, 47, clofun5, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#pair?"));
__arg1 = _35reg1302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val1303 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1303) {
PUSH_CONT(co, 49, clofun5, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1330 = PRIM_EQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg1330) {
Obj _35reg1331 = makeCons(exp, Nil);
Obj _35reg1332 = makeCons(intern("tailcall"), _35reg1331);
__nargs = 2;
__arg1 = _35reg1332;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1333 = primGenSym(intern("val"));
Obj val = _35reg1333;
Obj _35reg1334 = makeCons(val, Nil);
PUSH_CONT(co, 48, clofun5, 2, _35reg1334, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label48:
{
Obj _35val1335 = __arg1;
Obj _35reg1334= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1336 = makeCons(_35val1335, Nil);
Obj _35reg1337 = makeCons(_35reg1334, _35reg1336);
Obj _35reg1338 = makeCons(intern("continuation"), _35reg1337);
Obj _35reg1339 = makeCons(_35reg1338, Nil);
Obj _35reg1340 = makeCons(exp, _35reg1339);
Obj _35reg1341 = makeCons(intern("call"), _35reg1340);
__nargs = 2;
__arg1 = _35reg1341;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label49:
{
Obj _35val1304 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1305 = PRIM_EQ(_35val1304, intern("%builtin"));
if (True == _35reg1305) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1306 = PRIM_EQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg1306) {
Obj _35reg1307 = makeCons(exp, Nil);
Obj _35reg1308 = makeCons(intern("tailcall"), _35reg1307);
__nargs = 2;
__arg1 = _35reg1308;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1309 = primGenSym(intern("val"));
Obj val = _35reg1309;
Obj _35reg1310 = makeCons(val, Nil);
PUSH_CONT(co, 1, clofun6, 2, _35reg1310, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1318 = PRIM_EQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg1318) {
Obj _35reg1319 = makeCons(exp, Nil);
Obj _35reg1320 = makeCons(intern("tailcall"), _35reg1319);
__nargs = 2;
__arg1 = _35reg1320;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1321 = primGenSym(intern("val"));
Obj val = _35reg1321;
Obj _35reg1322 = makeCons(val, Nil);
PUSH_CONT(co, 0, clofun6, 2, _35reg1322, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
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

void clofun6(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1323 = __arg1;
Obj _35reg1322= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1324 = makeCons(_35val1323, Nil);
Obj _35reg1325 = makeCons(_35reg1322, _35reg1324);
Obj _35reg1326 = makeCons(intern("continuation"), _35reg1325);
Obj _35reg1327 = makeCons(_35reg1326, Nil);
Obj _35reg1328 = makeCons(exp, _35reg1327);
Obj _35reg1329 = makeCons(intern("call"), _35reg1328);
__nargs = 2;
__arg1 = _35reg1329;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val1311 = __arg1;
Obj _35reg1310= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1312 = makeCons(_35val1311, Nil);
Obj _35reg1313 = makeCons(_35reg1310, _35reg1312);
Obj _35reg1314 = makeCons(intern("continuation"), _35reg1313);
Obj _35reg1315 = makeCons(_35reg1314, Nil);
Obj _35reg1316 = makeCons(exp, _35reg1315);
Obj _35reg1317 = makeCons(intern("call"), _35reg1316);
__nargs = 2;
__arg1 = _35reg1317;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35cc419 = makeNative(4, clofun6, 0, 0);
Obj _35reg1296 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1296) {
Obj _35reg1297 = PRIM_CAR(closureRef(co, 0));
Obj hd = _35reg1297;
Obj _35reg1298 = PRIM_CDR(closureRef(co, 0));
Obj tl = _35reg1298;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = hd;
__arg2 = makeNative(3, clofun6, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc419;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj hd1 = __arg1;
Obj _35reg1299 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg1299;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35p406 = __arg1;
Obj _35p407 = __arg2;
Obj _35cc408 = makeNative(7, clofun6, 0, 2, _35p406, _35p407);
Obj x = _35p406;
Obj next = _35p407;
Obj _35reg1293 = primIsSymbol(x);
if (True == _35reg1293) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 6, clofun6, 3, next, x, _35cc408);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1294 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc408= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1294) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj _35cc409 = makeNative(9, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
PUSH_CONT(co, 8, clofun6, 2, x, _35cc409);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1292 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc409= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1292) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc409;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc410 = makeNative(13, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1260 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1260) {
Obj _35reg1261 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1262 = PRIM_EQ(intern("if"), _35reg1261);
if (True == _35reg1262) {
Obj _35reg1263 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1264 = PRIM_ISCONS(_35reg1263);
if (True == _35reg1264) {
Obj _35reg1265 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1266 = PRIM_CAR(_35reg1265);
Obj a = _35reg1266;
Obj _35reg1267 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1268 = PRIM_CDR(_35reg1267);
Obj _35reg1269 = PRIM_ISCONS(_35reg1268);
if (True == _35reg1269) {
Obj _35reg1270 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1271 = PRIM_CDR(_35reg1270);
Obj _35reg1272 = PRIM_CAR(_35reg1271);
Obj b = _35reg1272;
Obj _35reg1273 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1274 = PRIM_CDR(_35reg1273);
Obj _35reg1275 = PRIM_CDR(_35reg1274);
Obj _35reg1276 = PRIM_ISCONS(_35reg1275);
if (True == _35reg1276) {
Obj _35reg1277 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1278 = PRIM_CDR(_35reg1277);
Obj _35reg1279 = PRIM_CDR(_35reg1278);
Obj _35reg1280 = PRIM_CAR(_35reg1279);
Obj c = _35reg1280;
Obj _35reg1281 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1282 = PRIM_CDR(_35reg1281);
Obj _35reg1283 = PRIM_CDR(_35reg1282);
Obj _35reg1284 = PRIM_CDR(_35reg1283);
Obj _35reg1285 = PRIM_EQ(Nil, _35reg1284);
if (True == _35reg1285) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(10, clofun6, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj ra = __arg1;
PUSH_CONT(co, 11, clofun6, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1286 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 12, clofun6, 2, _35val1286, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1287 = __arg1;
Obj _35val1286= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1288 = makeCons(_35val1287, Nil);
Obj _35reg1289 = makeCons(_35val1286, _35reg1288);
Obj _35reg1290 = makeCons(ra, _35reg1289);
Obj _35reg1291 = makeCons(intern("if"), _35reg1290);
__nargs = 2;
__arg1 = _35reg1291;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35cc411 = makeNative(16, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1238 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1238) {
Obj _35reg1239 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1240 = PRIM_EQ(intern("do"), _35reg1239);
if (True == _35reg1240) {
Obj _35reg1241 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1242 = PRIM_ISCONS(_35reg1241);
if (True == _35reg1242) {
Obj _35reg1243 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1244 = PRIM_CAR(_35reg1243);
Obj a = _35reg1244;
Obj _35reg1245 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1246 = PRIM_CDR(_35reg1245);
Obj _35reg1247 = PRIM_ISCONS(_35reg1246);
if (True == _35reg1247) {
Obj _35reg1248 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1249 = PRIM_CDR(_35reg1248);
Obj _35reg1250 = PRIM_CAR(_35reg1249);
Obj b = _35reg1250;
Obj _35reg1251 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1252 = PRIM_CDR(_35reg1251);
Obj _35reg1253 = PRIM_CDR(_35reg1252);
Obj _35reg1254 = PRIM_EQ(Nil, _35reg1253);
if (True == _35reg1254) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(14, clofun6, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj ra = __arg1;
Obj _35reg1255 = primIsSymbol(ra);
if (True == _35reg1255) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 15, clofun6, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1256 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1257 = makeCons(_35val1256, Nil);
Obj _35reg1258 = makeCons(ra, _35reg1257);
Obj _35reg1259 = makeCons(intern("do"), _35reg1258);
__nargs = 2;
__arg1 = _35reg1259;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35cc412 = makeNative(19, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1207 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1207) {
Obj _35reg1208 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1209 = PRIM_EQ(intern("let"), _35reg1208);
if (True == _35reg1209) {
Obj _35reg1210 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1211 = PRIM_ISCONS(_35reg1210);
if (True == _35reg1211) {
Obj _35reg1212 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1213 = PRIM_CAR(_35reg1212);
Obj a = _35reg1213;
Obj _35reg1214 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1215 = PRIM_CDR(_35reg1214);
Obj _35reg1216 = PRIM_ISCONS(_35reg1215);
if (True == _35reg1216) {
Obj _35reg1217 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1218 = PRIM_CDR(_35reg1217);
Obj _35reg1219 = PRIM_CAR(_35reg1218);
Obj b = _35reg1219;
Obj _35reg1220 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1221 = PRIM_CDR(_35reg1220);
Obj _35reg1222 = PRIM_CDR(_35reg1221);
Obj _35reg1223 = PRIM_ISCONS(_35reg1222);
if (True == _35reg1223) {
Obj _35reg1224 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1225 = PRIM_CDR(_35reg1224);
Obj _35reg1226 = PRIM_CDR(_35reg1225);
Obj _35reg1227 = PRIM_CAR(_35reg1226);
Obj c = _35reg1227;
Obj _35reg1228 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1229 = PRIM_CDR(_35reg1228);
Obj _35reg1230 = PRIM_CDR(_35reg1229);
Obj _35reg1231 = PRIM_CDR(_35reg1230);
Obj _35reg1232 = PRIM_EQ(Nil, _35reg1231);
if (True == _35reg1232) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = b;
__arg2 = makeNative(17, clofun6, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj rb = __arg1;
PUSH_CONT(co, 18, clofun6, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1233 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1234 = makeCons(_35val1233, Nil);
Obj _35reg1235 = makeCons(rb, _35reg1234);
Obj _35reg1236 = makeCons(closureRef(co, 0), _35reg1235);
Obj _35reg1237 = makeCons(intern("let"), _35reg1236);
__nargs = 2;
__arg1 = _35reg1237;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35cc413 = makeNative(21, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1163 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1163) {
Obj _35reg1164 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1165 = PRIM_EQ(intern("%closure"), _35reg1164);
if (True == _35reg1165) {
Obj _35reg1166 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1167 = PRIM_ISCONS(_35reg1166);
if (True == _35reg1167) {
Obj _35reg1168 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1169 = PRIM_CAR(_35reg1168);
Obj _35reg1170 = PRIM_ISCONS(_35reg1169);
if (True == _35reg1170) {
Obj _35reg1171 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1172 = PRIM_CAR(_35reg1171);
Obj _35reg1173 = PRIM_CAR(_35reg1172);
Obj _35reg1174 = PRIM_EQ(intern("lambda"), _35reg1173);
if (True == _35reg1174) {
Obj _35reg1175 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1176 = PRIM_CAR(_35reg1175);
Obj _35reg1177 = PRIM_CDR(_35reg1176);
Obj _35reg1178 = PRIM_ISCONS(_35reg1177);
if (True == _35reg1178) {
Obj _35reg1179 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1180 = PRIM_CAR(_35reg1179);
Obj _35reg1181 = PRIM_CDR(_35reg1180);
Obj _35reg1182 = PRIM_CAR(_35reg1181);
Obj args = _35reg1182;
Obj _35reg1183 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1184 = PRIM_CAR(_35reg1183);
Obj _35reg1185 = PRIM_CDR(_35reg1184);
Obj _35reg1186 = PRIM_CDR(_35reg1185);
Obj _35reg1187 = PRIM_ISCONS(_35reg1186);
if (True == _35reg1187) {
Obj _35reg1188 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1189 = PRIM_CAR(_35reg1188);
Obj _35reg1190 = PRIM_CDR(_35reg1189);
Obj _35reg1191 = PRIM_CDR(_35reg1190);
Obj _35reg1192 = PRIM_CAR(_35reg1191);
Obj body = _35reg1192;
Obj _35reg1193 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1194 = PRIM_CAR(_35reg1193);
Obj _35reg1195 = PRIM_CDR(_35reg1194);
Obj _35reg1196 = PRIM_CDR(_35reg1195);
Obj _35reg1197 = PRIM_CDR(_35reg1196);
Obj _35reg1198 = PRIM_EQ(Nil, _35reg1197);
if (True == _35reg1198) {
Obj _35reg1199 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1200 = PRIM_CDR(_35reg1199);
Obj frees = _35reg1200;
Obj next = closureRef(co, 1);
PUSH_CONT(co, 20, clofun6, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1201 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1202 = makeCons(_35val1201, Nil);
Obj _35reg1203 = makeCons(args, _35reg1202);
Obj _35reg1204 = makeCons(intern("lambda"), _35reg1203);
Obj _35reg1205 = makeCons(_35reg1204, frees);
Obj _35reg1206 = makeCons(intern("%closure"), _35reg1205);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg1206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35cc414 = makeNative(22, clofun6, 0, 0);
Obj _35reg1159 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1159) {
Obj _35reg1160 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg1160;
Obj _35reg1161 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg1161;
Obj next = closureRef(co, 1);
Obj _35reg1162 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = _35reg1162;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc414;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x = __arg1;
Obj _35reg1156 = makeCons(x, Nil);
Obj _35reg1157 = makeCons(intern("return"), _35reg1156);
__nargs = 2;
__arg1 = _35reg1157;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj _35p399 = __arg1;
Obj _35p400 = __arg2;
Obj _35cc401 = makeNative(26, clofun6, 0, 2, _35p399, _35p400);
Obj __ = _35p399;
Obj x = _35p400;
PUSH_CONT(co, 25, clofun6, 2, x, _35cc401);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val1154 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc401= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1154) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc402 = makeNative(28, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg1149 = primIsSymbol(var);
if (True == _35reg1149) {
PUSH_CONT(co, 27, clofun6, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val1150 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val1150;
Obj _35reg1151 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _35reg1151) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg1152 = makeCons(pos, Nil);
Obj _35reg1153 = makeCons(intern("%closure-ref"), _35reg1152);
__nargs = 2;
__arg1 = _35reg1153;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label28:
{
Obj _35cc403 = makeNative(33, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1120 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1120) {
Obj _35reg1121 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1122 = PRIM_EQ(intern("lambda"), _35reg1121);
if (True == _35reg1122) {
Obj _35reg1123 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1124 = PRIM_ISCONS(_35reg1123);
if (True == _35reg1124) {
Obj _35reg1125 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1126 = PRIM_CAR(_35reg1125);
Obj args = _35reg1126;
Obj _35reg1127 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1128 = PRIM_CDR(_35reg1127);
Obj _35reg1129 = PRIM_ISCONS(_35reg1128);
if (True == _35reg1129) {
Obj _35reg1130 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1131 = PRIM_CDR(_35reg1130);
Obj _35reg1132 = PRIM_CAR(_35reg1131);
Obj body = _35reg1132;
Obj _35reg1133 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1134 = PRIM_CDR(_35reg1133);
Obj _35reg1135 = PRIM_CDR(_35reg1134);
Obj _35reg1136 = PRIM_EQ(Nil, _35reg1135);
if (True == _35reg1136) {
Obj _35reg1137 = makeCons(body, Nil);
Obj _35reg1138 = makeCons(args, _35reg1137);
Obj _35reg1139 = makeCons(intern("lambda"), _35reg1138);
PUSH_CONT(co, 29, clofun6, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg1139;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _35val1140 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val1140;
PUSH_CONT(co, 30, clofun6, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val1141 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg1142 = makeCons(_35val1141, Nil);
Obj _35reg1143 = makeCons(args, _35reg1142);
Obj _35reg1144 = makeCons(intern("lambda"), _35reg1143);
PUSH_CONT(co, 31, clofun6, 2, fvs1, _35reg1144);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val1145 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1144= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 32, clofun6, 1, _35reg1144);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1145;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val1146 = __arg1;
Obj _35reg1144= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1147 = makeCons(_35reg1144, _35val1146);
Obj _35reg1148 = makeCons(intern("%closure"), _35reg1147);
__nargs = 2;
__arg1 = _35reg1148;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj _35cc404 = makeNative(36, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1088 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1088) {
Obj _35reg1089 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1090 = PRIM_EQ(intern("let"), _35reg1089);
if (True == _35reg1090) {
Obj _35reg1091 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1092 = PRIM_ISCONS(_35reg1091);
if (True == _35reg1092) {
Obj _35reg1093 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1094 = PRIM_CAR(_35reg1093);
Obj a = _35reg1094;
Obj _35reg1095 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1096 = PRIM_CDR(_35reg1095);
Obj _35reg1097 = PRIM_ISCONS(_35reg1096);
if (True == _35reg1097) {
Obj _35reg1098 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1099 = PRIM_CDR(_35reg1098);
Obj _35reg1100 = PRIM_CAR(_35reg1099);
Obj b = _35reg1100;
Obj _35reg1101 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1102 = PRIM_CDR(_35reg1101);
Obj _35reg1103 = PRIM_CDR(_35reg1102);
Obj _35reg1104 = PRIM_ISCONS(_35reg1103);
if (True == _35reg1104) {
Obj _35reg1105 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1106 = PRIM_CDR(_35reg1105);
Obj _35reg1107 = PRIM_CDR(_35reg1106);
Obj _35reg1108 = PRIM_CAR(_35reg1107);
Obj c = _35reg1108;
Obj _35reg1109 = PRIM_CDR(closureRef(co, 1));
Obj _35reg1110 = PRIM_CDR(_35reg1109);
Obj _35reg1111 = PRIM_CDR(_35reg1110);
Obj _35reg1112 = PRIM_CDR(_35reg1111);
Obj _35reg1113 = PRIM_EQ(Nil, _35reg1112);
if (True == _35reg1113) {
PUSH_CONT(co, 34, clofun6, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35val1114 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 35, clofun6, 2, _35val1114, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val1115 = __arg1;
Obj _35val1114= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1116 = makeCons(_35val1115, Nil);
Obj _35reg1117 = makeCons(_35val1114, _35reg1116);
Obj _35reg1118 = makeCons(a, _35reg1117);
Obj _35reg1119 = makeCons(intern("let"), _35reg1118);
__nargs = 2;
__arg1 = _35reg1119;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj _35cc405 = makeNative(38, clofun6, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1083 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1083) {
Obj _35reg1084 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg1084;
Obj _35reg1085 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg1085;
PUSH_CONT(co, 37, clofun6, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val1086 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1087 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1086;
__arg2 = _35reg1087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35p386 = __arg1;
Obj _35cc387 = makeNative(41, clofun6, 0, 1, _35p386);
Obj x = _35p386;
PUSH_CONT(co, 40, clofun6, 1, _35cc387);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1081 = __arg1;
Obj _35cc387= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1081) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _35cc388 = makeNative(42, clofun6, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg1079 = primIsSymbol(x);
if (True == _35reg1079) {
Obj _35reg1080 = makeCons(x, Nil);
__nargs = 2;
__arg1 = _35reg1080;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc388;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _35cc389 = makeNative(44, clofun6, 0, 1, closureRef(co, 0));
Obj _35reg1061 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1061) {
Obj _35reg1062 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1063 = PRIM_EQ(intern("lambda"), _35reg1062);
if (True == _35reg1063) {
Obj _35reg1064 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1065 = PRIM_ISCONS(_35reg1064);
if (True == _35reg1065) {
Obj _35reg1066 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1067 = PRIM_CAR(_35reg1066);
Obj args = _35reg1067;
Obj _35reg1068 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1069 = PRIM_CDR(_35reg1068);
Obj _35reg1070 = PRIM_ISCONS(_35reg1069);
if (True == _35reg1070) {
Obj _35reg1071 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1072 = PRIM_CDR(_35reg1071);
Obj _35reg1073 = PRIM_CAR(_35reg1072);
Obj body = _35reg1073;
Obj _35reg1074 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1075 = PRIM_CDR(_35reg1074);
Obj _35reg1076 = PRIM_CDR(_35reg1075);
Obj _35reg1077 = PRIM_EQ(Nil, _35reg1076);
if (True == _35reg1077) {
PUSH_CONT(co, 43, clofun6, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc389;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc389;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc389;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc389;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc389;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _35val1078 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1078;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35cc390 = makeNative(46, clofun6, 0, 1, closureRef(co, 0));
Obj _35reg1031 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1031) {
Obj _35reg1032 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1033 = PRIM_EQ(intern("if"), _35reg1032);
if (True == _35reg1033) {
Obj _35reg1034 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1035 = PRIM_ISCONS(_35reg1034);
if (True == _35reg1035) {
Obj _35reg1036 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1037 = PRIM_CAR(_35reg1036);
Obj x = _35reg1037;
Obj _35reg1038 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1039 = PRIM_CDR(_35reg1038);
Obj _35reg1040 = PRIM_ISCONS(_35reg1039);
if (True == _35reg1040) {
Obj _35reg1041 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1042 = PRIM_CDR(_35reg1041);
Obj _35reg1043 = PRIM_CAR(_35reg1042);
Obj y = _35reg1043;
Obj _35reg1044 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1045 = PRIM_CDR(_35reg1044);
Obj _35reg1046 = PRIM_CDR(_35reg1045);
Obj _35reg1047 = PRIM_ISCONS(_35reg1046);
if (True == _35reg1047) {
Obj _35reg1048 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1049 = PRIM_CDR(_35reg1048);
Obj _35reg1050 = PRIM_CDR(_35reg1049);
Obj _35reg1051 = PRIM_CAR(_35reg1050);
Obj z = _35reg1051;
Obj _35reg1052 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1053 = PRIM_CDR(_35reg1052);
Obj _35reg1054 = PRIM_CDR(_35reg1053);
Obj _35reg1055 = PRIM_CDR(_35reg1054);
Obj _35reg1056 = PRIM_EQ(Nil, _35reg1055);
if (True == _35reg1056) {
Obj _35reg1057 = makeCons(z, Nil);
Obj _35reg1058 = makeCons(y, _35reg1057);
Obj _35reg1059 = makeCons(x, _35reg1058);
PUSH_CONT(co, 45, clofun6, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35val1060 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35cc391 = makeNative(48, clofun6, 0, 1, closureRef(co, 0));
Obj _35reg1011 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1011) {
Obj _35reg1012 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1013 = PRIM_EQ(intern("do"), _35reg1012);
if (True == _35reg1013) {
Obj _35reg1014 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1015 = PRIM_ISCONS(_35reg1014);
if (True == _35reg1015) {
Obj _35reg1016 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1017 = PRIM_CAR(_35reg1016);
Obj x = _35reg1017;
Obj _35reg1018 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1019 = PRIM_CDR(_35reg1018);
Obj _35reg1020 = PRIM_ISCONS(_35reg1019);
if (True == _35reg1020) {
Obj _35reg1021 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1022 = PRIM_CDR(_35reg1021);
Obj _35reg1023 = PRIM_CAR(_35reg1022);
Obj y = _35reg1023;
Obj _35reg1024 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1025 = PRIM_CDR(_35reg1024);
Obj _35reg1026 = PRIM_CDR(_35reg1025);
Obj _35reg1027 = PRIM_EQ(Nil, _35reg1026);
if (True == _35reg1027) {
Obj _35reg1028 = makeCons(y, Nil);
Obj _35reg1029 = makeCons(x, _35reg1028);
PUSH_CONT(co, 47, clofun6, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val1030 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35cc392 = makeNative(2, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg981 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg981) {
Obj _35reg982 = PRIM_CAR(closureRef(co, 0));
Obj _35reg983 = PRIM_EQ(intern("let"), _35reg982);
if (True == _35reg983) {
Obj _35reg984 = PRIM_CDR(closureRef(co, 0));
Obj _35reg985 = PRIM_ISCONS(_35reg984);
if (True == _35reg985) {
Obj _35reg986 = PRIM_CDR(closureRef(co, 0));
Obj _35reg987 = PRIM_CAR(_35reg986);
Obj a = _35reg987;
Obj _35reg988 = PRIM_CDR(closureRef(co, 0));
Obj _35reg989 = PRIM_CDR(_35reg988);
Obj _35reg990 = PRIM_ISCONS(_35reg989);
if (True == _35reg990) {
Obj _35reg991 = PRIM_CDR(closureRef(co, 0));
Obj _35reg992 = PRIM_CDR(_35reg991);
Obj _35reg993 = PRIM_CAR(_35reg992);
Obj b = _35reg993;
Obj _35reg994 = PRIM_CDR(closureRef(co, 0));
Obj _35reg995 = PRIM_CDR(_35reg994);
Obj _35reg996 = PRIM_CDR(_35reg995);
Obj _35reg997 = PRIM_ISCONS(_35reg996);
if (True == _35reg997) {
Obj _35reg998 = PRIM_CDR(closureRef(co, 0));
Obj _35reg999 = PRIM_CDR(_35reg998);
Obj _35reg1000 = PRIM_CDR(_35reg999);
Obj _35reg1001 = PRIM_CAR(_35reg1000);
Obj c = _35reg1001;
Obj _35reg1002 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1003 = PRIM_CDR(_35reg1002);
Obj _35reg1004 = PRIM_CDR(_35reg1003);
Obj _35reg1005 = PRIM_CDR(_35reg1004);
Obj _35reg1006 = PRIM_EQ(Nil, _35reg1005);
if (True == _35reg1006) {
PUSH_CONT(co, 49, clofun6, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val1007 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 0, clofun7, 2, a, _35val1007);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun7(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1008 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1007= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1009 = makeCons(a, Nil);
PUSH_CONT(co, 1, clofun7, 1, _35val1007);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1008;
__arg2 = _35reg1009;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1010 = __arg1;
Obj _35val1007= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = _35val1007;
__arg2 = _35val1010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc393 = makeNative(3, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg971 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg971) {
Obj _35reg972 = PRIM_CAR(closureRef(co, 0));
Obj _35reg973 = PRIM_EQ(intern("%closure"), _35reg972);
if (True == _35reg973) {
Obj _35reg974 = PRIM_CDR(closureRef(co, 0));
Obj _35reg975 = PRIM_ISCONS(_35reg974);
if (True == _35reg975) {
Obj _35reg976 = PRIM_CDR(closureRef(co, 0));
Obj _35reg977 = PRIM_CAR(_35reg976);
Obj lam = _35reg977;
Obj _35reg978 = PRIM_CDR(closureRef(co, 0));
Obj _35reg979 = PRIM_CDR(_35reg978);
Obj more = _35reg979;
Obj _35reg980 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc393;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc393;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc393;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc394 = makeNative(4, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg961 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg961) {
Obj _35reg962 = PRIM_CAR(closureRef(co, 0));
Obj _35reg963 = PRIM_EQ(intern("return"), _35reg962);
if (True == _35reg963) {
Obj _35reg964 = PRIM_CDR(closureRef(co, 0));
Obj _35reg965 = PRIM_ISCONS(_35reg964);
if (True == _35reg965) {
Obj _35reg966 = PRIM_CDR(closureRef(co, 0));
Obj _35reg967 = PRIM_CAR(_35reg966);
Obj x = _35reg967;
Obj _35reg968 = PRIM_CDR(closureRef(co, 0));
Obj _35reg969 = PRIM_CDR(_35reg968);
Obj _35reg970 = PRIM_EQ(Nil, _35reg969);
if (True == _35reg970) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc395 = makeNative(6, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg941 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg941) {
Obj _35reg942 = PRIM_CAR(closureRef(co, 0));
Obj _35reg943 = PRIM_EQ(intern("call"), _35reg942);
if (True == _35reg943) {
Obj _35reg944 = PRIM_CDR(closureRef(co, 0));
Obj _35reg945 = PRIM_ISCONS(_35reg944);
if (True == _35reg945) {
Obj _35reg946 = PRIM_CDR(closureRef(co, 0));
Obj _35reg947 = PRIM_CAR(_35reg946);
Obj exp = _35reg947;
Obj _35reg948 = PRIM_CDR(closureRef(co, 0));
Obj _35reg949 = PRIM_CDR(_35reg948);
Obj _35reg950 = PRIM_ISCONS(_35reg949);
if (True == _35reg950) {
Obj _35reg951 = PRIM_CDR(closureRef(co, 0));
Obj _35reg952 = PRIM_CDR(_35reg951);
Obj _35reg953 = PRIM_CAR(_35reg952);
Obj cont = _35reg953;
Obj _35reg954 = PRIM_CDR(closureRef(co, 0));
Obj _35reg955 = PRIM_CDR(_35reg954);
Obj _35reg956 = PRIM_CDR(_35reg955);
Obj _35reg957 = PRIM_EQ(Nil, _35reg956);
if (True == _35reg957) {
Obj _35reg958 = makeCons(cont, Nil);
Obj _35reg959 = makeCons(exp, _35reg958);
PUSH_CONT(co, 5, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc395;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc395;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc395;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc395;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc395;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val960 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc396 = makeNative(7, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg931 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg931) {
Obj _35reg932 = PRIM_CAR(closureRef(co, 0));
Obj _35reg933 = PRIM_EQ(intern("tailcall"), _35reg932);
if (True == _35reg933) {
Obj _35reg934 = PRIM_CDR(closureRef(co, 0));
Obj _35reg935 = PRIM_ISCONS(_35reg934);
if (True == _35reg935) {
Obj _35reg936 = PRIM_CDR(closureRef(co, 0));
Obj _35reg937 = PRIM_CAR(_35reg936);
Obj exp = _35reg937;
Obj _35reg938 = PRIM_CDR(closureRef(co, 0));
Obj _35reg939 = PRIM_CDR(_35reg938);
Obj _35reg940 = PRIM_EQ(Nil, _35reg939);
if (True == _35reg940) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc396;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc396;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc396;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc396;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc397 = makeNative(9, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg913 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg913) {
Obj _35reg914 = PRIM_CAR(closureRef(co, 0));
Obj _35reg915 = PRIM_EQ(intern("continuation"), _35reg914);
if (True == _35reg915) {
Obj _35reg916 = PRIM_CDR(closureRef(co, 0));
Obj _35reg917 = PRIM_ISCONS(_35reg916);
if (True == _35reg917) {
Obj _35reg918 = PRIM_CDR(closureRef(co, 0));
Obj _35reg919 = PRIM_CAR(_35reg918);
Obj arg = _35reg919;
Obj _35reg920 = PRIM_CDR(closureRef(co, 0));
Obj _35reg921 = PRIM_CDR(_35reg920);
Obj _35reg922 = PRIM_ISCONS(_35reg921);
if (True == _35reg922) {
Obj _35reg923 = PRIM_CDR(closureRef(co, 0));
Obj _35reg924 = PRIM_CDR(_35reg923);
Obj _35reg925 = PRIM_CAR(_35reg924);
Obj body = _35reg925;
Obj _35reg926 = PRIM_CDR(closureRef(co, 0));
Obj _35reg927 = PRIM_CDR(_35reg926);
Obj _35reg928 = PRIM_CDR(_35reg927);
Obj _35reg929 = PRIM_EQ(Nil, _35reg928);
if (True == _35reg929) {
PUSH_CONT(co, 8, clofun7, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val930 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val930;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc398 = makeNative(11, clofun7, 0, 0);
Obj _35reg908 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg908) {
Obj _35reg909 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg909;
Obj _35reg910 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg910;
Obj _35reg911 = makeCons(f, args);
PUSH_CONT(co, 10, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc398;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val912 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val912;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35p379 = __arg1;
Obj _35cc380 = makeNative(13, clofun7, 0, 1, _35p379);
Obj _35reg897 = PRIM_ISCONS(_35p379);
if (True == _35reg897) {
Obj _35reg898 = PRIM_CAR(_35p379);
Obj _35reg899 = PRIM_EQ(intern("%const"), _35reg898);
if (True == _35reg899) {
Obj _35reg900 = PRIM_CDR(_35p379);
Obj _35reg901 = PRIM_ISCONS(_35reg900);
if (True == _35reg901) {
Obj _35reg902 = PRIM_CDR(_35p379);
Obj _35reg903 = PRIM_CAR(_35reg902);
Obj x = _35reg903;
Obj _35reg904 = PRIM_CDR(_35p379);
Obj _35reg905 = PRIM_CDR(_35reg904);
Obj _35reg906 = PRIM_EQ(Nil, _35reg905);
if (True == _35reg906) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc381 = makeNative(14, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg887 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg887) {
Obj _35reg888 = PRIM_CAR(closureRef(co, 0));
Obj _35reg889 = PRIM_EQ(intern("%global"), _35reg888);
if (True == _35reg889) {
Obj _35reg890 = PRIM_CDR(closureRef(co, 0));
Obj _35reg891 = PRIM_ISCONS(_35reg890);
if (True == _35reg891) {
Obj _35reg892 = PRIM_CDR(closureRef(co, 0));
Obj _35reg893 = PRIM_CAR(_35reg892);
Obj x = _35reg893;
Obj _35reg894 = PRIM_CDR(closureRef(co, 0));
Obj _35reg895 = PRIM_CDR(_35reg894);
Obj _35reg896 = PRIM_EQ(Nil, _35reg895);
if (True == _35reg896) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35cc382 = makeNative(15, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg877 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg877) {
Obj _35reg878 = PRIM_CAR(closureRef(co, 0));
Obj _35reg879 = PRIM_EQ(intern("%builtin"), _35reg878);
if (True == _35reg879) {
Obj _35reg880 = PRIM_CDR(closureRef(co, 0));
Obj _35reg881 = PRIM_ISCONS(_35reg880);
if (True == _35reg881) {
Obj _35reg882 = PRIM_CDR(closureRef(co, 0));
Obj _35reg883 = PRIM_CAR(_35reg882);
Obj op = _35reg883;
Obj _35reg884 = PRIM_CDR(closureRef(co, 0));
Obj _35reg885 = PRIM_CDR(_35reg884);
Obj _35reg886 = PRIM_EQ(Nil, _35reg885);
if (True == _35reg886) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35cc383 = makeNative(16, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg867 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg867) {
Obj _35reg868 = PRIM_CAR(closureRef(co, 0));
Obj _35reg869 = PRIM_EQ(intern("quote"), _35reg868);
if (True == _35reg869) {
Obj _35reg870 = PRIM_CDR(closureRef(co, 0));
Obj _35reg871 = PRIM_ISCONS(_35reg870);
if (True == _35reg871) {
Obj _35reg872 = PRIM_CDR(closureRef(co, 0));
Obj _35reg873 = PRIM_CAR(_35reg872);
Obj x = _35reg873;
Obj _35reg874 = PRIM_CDR(closureRef(co, 0));
Obj _35reg875 = PRIM_CDR(_35reg874);
Obj _35reg876 = PRIM_EQ(Nil, _35reg875);
if (True == _35reg876) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc384 = makeNative(17, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg857 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg857) {
Obj _35reg858 = PRIM_CAR(closureRef(co, 0));
Obj _35reg859 = PRIM_EQ(intern("%closure-ref"), _35reg858);
if (True == _35reg859) {
Obj _35reg860 = PRIM_CDR(closureRef(co, 0));
Obj _35reg861 = PRIM_ISCONS(_35reg860);
if (True == _35reg861) {
Obj _35reg862 = PRIM_CDR(closureRef(co, 0));
Obj _35reg863 = PRIM_CAR(_35reg862);
Obj __ = _35reg863;
Obj _35reg864 = PRIM_CDR(closureRef(co, 0));
Obj _35reg865 = PRIM_CDR(_35reg864);
Obj _35reg866 = PRIM_EQ(Nil, _35reg865);
if (True == _35reg866) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35cc385 = makeNative(18, clofun7, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35p374 = __arg1;
Obj _35p375 = __arg2;
Obj _35cc376 = makeNative(20, clofun7, 0, 2, _35p374, _35p375);
Obj _35reg855 = PRIM_EQ(Nil, _35p374);
if (True == _35reg855) {
Obj __ = _35p375;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc376;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc377 = makeNative(22, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg851 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg851) {
Obj _35reg852 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg852;
Obj _35reg853 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg853;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 21, clofun7, 3, y, s2, _35cc377);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc377;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35val854 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc377= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val854) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc377;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc378 = makeNative(24, clofun7, 0, 0);
Obj _35reg846 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg846) {
Obj _35reg847 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg847;
Obj _35reg848 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg848;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 23, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val849 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg850 = makeCons(x, _35val849);
__nargs = 2;
__arg1 = _35reg850;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35p369 = __arg1;
Obj _35p370 = __arg2;
Obj _35cc371 = makeNative(26, clofun7, 0, 2, _35p369, _35p370);
Obj _35reg844 = PRIM_EQ(Nil, _35p369);
if (True == _35reg844) {
Obj s2 = _35p370;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc371;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc372 = makeNative(28, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg840 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg840) {
Obj _35reg841 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg841;
Obj _35reg842 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg842;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 27, clofun7, 3, y, s2, _35cc372);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc372;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val843 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc372= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val843) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc372;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35cc373 = makeNative(30, clofun7, 0, 0);
Obj _35reg835 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg835) {
Obj _35reg836 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg836;
Obj _35reg837 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg837;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 29, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc373;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _35val838 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg839 = makeCons(x, _35val838);
__nargs = 2;
__arg1 = _35reg839;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35p354 = __arg1;
Obj _35p355 = __arg2;
Obj _35p356 = __arg3;
Obj _35p357 = co->args[4];
Obj _35cc358 = makeNative(35, clofun7, 0, 4, _35p354, _35p355, _35p356, _35p357);
Obj __ = _35p354;
__ = _35p355;
__ = _35p356;
Obj x = _35p357;
PUSH_CONT(co, 32, clofun7, 2, x, _35cc358);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val820 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc358= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val820) {
if (True == True) {
Obj _35reg821 = makeCons(x, Nil);
Obj _35reg822 = makeCons(intern("%const"), _35reg821);
__nargs = 2;
__arg1 = _35reg822;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg823 = primIsString(x);
if (True == _35reg823) {
if (True == True) {
Obj _35reg824 = makeCons(x, Nil);
Obj _35reg825 = makeCons(intern("%const"), _35reg824);
__nargs = 2;
__arg1 = _35reg825;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 33, clofun7, 2, x, _35cc358);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label33:
{
Obj _35val826 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc358= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val826) {
if (True == True) {
Obj _35reg827 = makeCons(x, Nil);
Obj _35reg828 = makeCons(intern("%const"), _35reg827);
__nargs = 2;
__arg1 = _35reg828;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 34, clofun7, 2, x, _35cc358);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35val829 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc358= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val829) {
if (True == True) {
Obj _35reg830 = makeCons(x, Nil);
Obj _35reg831 = makeCons(intern("%const"), _35reg830);
__nargs = 2;
__arg1 = _35reg831;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg832 = makeCons(x, Nil);
Obj _35reg833 = makeCons(intern("%const"), _35reg832);
__nargs = 2;
__arg1 = _35reg833;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label35:
{
Obj _35cc359 = makeNative(36, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj _35reg808 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg808) {
Obj _35reg809 = PRIM_CAR(closureRef(co, 3));
Obj _35reg810 = PRIM_EQ(intern("quote"), _35reg809);
if (True == _35reg810) {
Obj _35reg811 = PRIM_CDR(closureRef(co, 3));
Obj _35reg812 = PRIM_ISCONS(_35reg811);
if (True == _35reg812) {
Obj _35reg813 = PRIM_CDR(closureRef(co, 3));
Obj _35reg814 = PRIM_CAR(_35reg813);
Obj x = _35reg814;
Obj _35reg815 = PRIM_CDR(closureRef(co, 3));
Obj _35reg816 = PRIM_CDR(_35reg815);
Obj _35reg817 = PRIM_EQ(Nil, _35reg816);
if (True == _35reg817) {
Obj _35reg818 = makeCons(x, Nil);
Obj _35reg819 = makeCons(intern("%const"), _35reg818);
__nargs = 2;
__arg1 = _35reg819;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _35cc360 = makeNative(39, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj _35reg803 = primIsSymbol(x);
if (True == _35reg803) {
PUSH_CONT(co, 37, clofun7, 3, x, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val804 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val804) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 38, clofun7, 0);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#lookup-var"));
__arg1 = x;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val805 = __arg1;
Obj _35reg806 = makeCons(_35val805, Nil);
Obj _35reg807 = makeCons(intern("%global"), _35reg806);
__nargs = 2;
__arg1 = _35reg807;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj _35cc361 = makeNative(42, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg781 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg781) {
Obj _35reg782 = PRIM_CAR(closureRef(co, 3));
Obj _35reg783 = PRIM_EQ(intern("lambda"), _35reg782);
if (True == _35reg783) {
Obj _35reg784 = PRIM_CDR(closureRef(co, 3));
Obj _35reg785 = PRIM_ISCONS(_35reg784);
if (True == _35reg785) {
Obj _35reg786 = PRIM_CDR(closureRef(co, 3));
Obj _35reg787 = PRIM_CAR(_35reg786);
Obj args = _35reg787;
Obj _35reg788 = PRIM_CDR(closureRef(co, 3));
Obj _35reg789 = PRIM_CDR(_35reg788);
Obj _35reg790 = PRIM_ISCONS(_35reg789);
if (True == _35reg790) {
Obj _35reg791 = PRIM_CDR(closureRef(co, 3));
Obj _35reg792 = PRIM_CDR(_35reg791);
Obj _35reg793 = PRIM_CAR(_35reg792);
Obj body = _35reg793;
Obj _35reg794 = PRIM_CDR(closureRef(co, 3));
Obj _35reg795 = PRIM_CDR(_35reg794);
Obj _35reg796 = PRIM_CDR(_35reg795);
Obj _35reg797 = PRIM_EQ(Nil, _35reg796);
if (True == _35reg797) {
PUSH_CONT(co, 40, clofun7, 4, ns, import, body, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35val798 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 41, clofun7, 1, args);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35val798;
__arg2 = ns;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val799 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg800 = makeCons(_35val799, Nil);
Obj _35reg801 = makeCons(args, _35reg800);
Obj _35reg802 = makeCons(intern("lambda"), _35reg801);
__nargs = 2;
__arg1 = _35reg802;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj _35cc362 = makeNative(45, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg774 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg774) {
Obj _35reg775 = PRIM_CAR(closureRef(co, 3));
Obj _35reg776 = PRIM_EQ(intern("if"), _35reg775);
if (True == _35reg776) {
Obj _35reg777 = PRIM_CDR(closureRef(co, 3));
Obj args = _35reg777;
PUSH_CONT(co, 43, clofun7, 1, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc362;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc362;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _35val778 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val778;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val779 = __arg1;
Obj _35reg780 = makeCons(intern("if"), _35val779);
__nargs = 2;
__arg1 = _35reg780;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj _35cc363 = makeNative(48, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg752 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg752) {
Obj _35reg753 = PRIM_CAR(closureRef(co, 3));
Obj _35reg754 = PRIM_EQ(intern("do"), _35reg753);
if (True == _35reg754) {
Obj _35reg755 = PRIM_CDR(closureRef(co, 3));
Obj _35reg756 = PRIM_ISCONS(_35reg755);
if (True == _35reg756) {
Obj _35reg757 = PRIM_CDR(closureRef(co, 3));
Obj _35reg758 = PRIM_CAR(_35reg757);
Obj x = _35reg758;
Obj _35reg759 = PRIM_CDR(closureRef(co, 3));
Obj _35reg760 = PRIM_CDR(_35reg759);
Obj _35reg761 = PRIM_ISCONS(_35reg760);
if (True == _35reg761) {
Obj _35reg762 = PRIM_CDR(closureRef(co, 3));
Obj _35reg763 = PRIM_CDR(_35reg762);
Obj _35reg764 = PRIM_CAR(_35reg763);
Obj y = _35reg764;
Obj _35reg765 = PRIM_CDR(closureRef(co, 3));
Obj _35reg766 = PRIM_CDR(_35reg765);
Obj _35reg767 = PRIM_CDR(_35reg766);
Obj _35reg768 = PRIM_EQ(Nil, _35reg767);
if (True == _35reg768) {
PUSH_CONT(co, 46, clofun7, 4, env, ns, import, y);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc363;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc363;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc363;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc363;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc363;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val769 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 47, clofun7, 1, _35val769);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val770 = __arg1;
Obj _35val769= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg771 = makeCons(_35val770, Nil);
Obj _35reg772 = makeCons(_35val769, _35reg771);
Obj _35reg773 = makeCons(intern("do"), _35reg772);
__nargs = 2;
__arg1 = _35reg773;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj _35cc364 = makeNative(1, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg719 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg719) {
Obj _35reg720 = PRIM_CAR(closureRef(co, 3));
Obj _35reg721 = PRIM_EQ(intern("let"), _35reg720);
if (True == _35reg721) {
Obj _35reg722 = PRIM_CDR(closureRef(co, 3));
Obj _35reg723 = PRIM_ISCONS(_35reg722);
if (True == _35reg723) {
Obj _35reg724 = PRIM_CDR(closureRef(co, 3));
Obj _35reg725 = PRIM_CAR(_35reg724);
Obj a = _35reg725;
Obj _35reg726 = PRIM_CDR(closureRef(co, 3));
Obj _35reg727 = PRIM_CDR(_35reg726);
Obj _35reg728 = PRIM_ISCONS(_35reg727);
if (True == _35reg728) {
Obj _35reg729 = PRIM_CDR(closureRef(co, 3));
Obj _35reg730 = PRIM_CDR(_35reg729);
Obj _35reg731 = PRIM_CAR(_35reg730);
Obj b = _35reg731;
Obj _35reg732 = PRIM_CDR(closureRef(co, 3));
Obj _35reg733 = PRIM_CDR(_35reg732);
Obj _35reg734 = PRIM_CDR(_35reg733);
Obj _35reg735 = PRIM_ISCONS(_35reg734);
if (True == _35reg735) {
Obj _35reg736 = PRIM_CDR(closureRef(co, 3));
Obj _35reg737 = PRIM_CDR(_35reg736);
Obj _35reg738 = PRIM_CDR(_35reg737);
Obj _35reg739 = PRIM_CAR(_35reg738);
Obj c = _35reg739;
Obj _35reg740 = PRIM_CDR(closureRef(co, 3));
Obj _35reg741 = PRIM_CDR(_35reg740);
Obj _35reg742 = PRIM_CDR(_35reg741);
Obj _35reg743 = PRIM_CDR(_35reg742);
Obj _35reg744 = PRIM_EQ(Nil, _35reg743);
if (True == _35reg744) {
PUSH_CONT(co, 49, clofun7, 5, env, ns, import, c, a);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val745 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg746 = makeCons(a, env);
PUSH_CONT(co, 0, clofun8, 2, _35val745, a);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35reg746;
__arg2 = ns;
__arg3 = import;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void clofun8(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val747 = __arg1;
Obj _35val745= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg748 = makeCons(_35val747, Nil);
Obj _35reg749 = makeCons(_35val745, _35reg748);
Obj _35reg750 = makeCons(a, _35reg749);
Obj _35reg751 = makeCons(intern("let"), _35reg750);
__nargs = 2;
__arg1 = _35reg751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35cc365 = makeNative(2, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj _35reg693 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg693) {
Obj _35reg694 = PRIM_CAR(closureRef(co, 3));
Obj _35reg695 = PRIM_EQ(intern("ns"), _35reg694);
if (True == _35reg695) {
Obj _35reg696 = PRIM_CDR(closureRef(co, 3));
Obj _35reg697 = PRIM_ISCONS(_35reg696);
if (True == _35reg697) {
Obj _35reg698 = PRIM_CDR(closureRef(co, 3));
Obj _35reg699 = PRIM_CAR(_35reg698);
Obj path = _35reg699;
Obj _35reg700 = PRIM_CDR(closureRef(co, 3));
Obj _35reg701 = PRIM_CDR(_35reg700);
Obj _35reg702 = PRIM_ISCONS(_35reg701);
if (True == _35reg702) {
Obj _35reg703 = PRIM_CDR(closureRef(co, 3));
Obj _35reg704 = PRIM_CDR(_35reg703);
Obj _35reg705 = PRIM_CAR(_35reg704);
Obj import = _35reg705;
Obj _35reg706 = PRIM_CDR(closureRef(co, 3));
Obj _35reg707 = PRIM_CDR(_35reg706);
Obj _35reg708 = PRIM_CDR(_35reg707);
Obj _35reg709 = PRIM_ISCONS(_35reg708);
if (True == _35reg709) {
Obj _35reg710 = PRIM_CDR(closureRef(co, 3));
Obj _35reg711 = PRIM_CDR(_35reg710);
Obj _35reg712 = PRIM_CDR(_35reg711);
Obj _35reg713 = PRIM_CAR(_35reg712);
Obj body = _35reg713;
Obj _35reg714 = PRIM_CDR(closureRef(co, 3));
Obj _35reg715 = PRIM_CDR(_35reg714);
Obj _35reg716 = PRIM_CDR(_35reg715);
Obj _35reg717 = PRIM_CDR(_35reg716);
Obj _35reg718 = PRIM_EQ(Nil, _35reg717);
if (True == _35reg718) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = path;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc366 = makeNative(5, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg667 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg667) {
Obj _35reg668 = PRIM_CAR(closureRef(co, 3));
Obj _35reg669 = PRIM_EQ(intern("def"), _35reg668);
if (True == _35reg669) {
Obj _35reg670 = PRIM_CDR(closureRef(co, 3));
Obj _35reg671 = PRIM_ISCONS(_35reg670);
if (True == _35reg671) {
Obj _35reg672 = PRIM_CDR(closureRef(co, 3));
Obj _35reg673 = PRIM_CAR(_35reg672);
Obj var = _35reg673;
Obj _35reg674 = PRIM_CDR(closureRef(co, 3));
Obj _35reg675 = PRIM_CDR(_35reg674);
Obj _35reg676 = PRIM_ISCONS(_35reg675);
if (True == _35reg676) {
Obj _35reg677 = PRIM_CDR(closureRef(co, 3));
Obj _35reg678 = PRIM_CDR(_35reg677);
Obj _35reg679 = PRIM_CAR(_35reg678);
Obj val = _35reg679;
Obj _35reg680 = PRIM_CDR(closureRef(co, 3));
Obj _35reg681 = PRIM_CDR(_35reg680);
Obj _35reg682 = PRIM_CDR(_35reg681);
Obj _35reg683 = PRIM_EQ(Nil, _35reg682);
if (True == _35reg683) {
PUSH_CONT(co, 3, clofun8, 4, env, ns, import, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#var-with-ns"));
__arg1 = var;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val684 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj var1 = _35val684;
Obj _35reg685 = makeCons(intern("set"), Nil);
Obj _35reg686 = makeCons(intern("%builtin"), _35reg685);
Obj _35reg687 = makeCons(var1, Nil);
Obj _35reg688 = makeCons(intern("%const"), _35reg687);
PUSH_CONT(co, 4, clofun8, 2, _35reg688, _35reg686);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val689 = __arg1;
Obj _35reg688= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg686= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg690 = makeCons(_35val689, Nil);
Obj _35reg691 = makeCons(_35reg688, _35reg690);
Obj _35reg692 = makeCons(_35reg686, _35reg691);
__nargs = 2;
__arg1 = _35reg692;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35cc367 = makeNative(13, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg647 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg647) {
Obj _35reg648 = PRIM_CAR(closureRef(co, 3));
Obj op = _35reg648;
Obj _35reg649 = PRIM_CDR(closureRef(co, 3));
Obj args = _35reg649;
PUSH_CONT(co, 6, clofun8, 6, op, args, env, ns, import, _35cc367);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val650 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35cc367= co->ctx.stk.stack[co->ctx.stk.base + 5];
if (True == _35val650) {
PUSH_CONT(co, 7, clofun8, 5, op, args, env, ns, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val651 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj required = _35val651;
PUSH_CONT(co, 8, clofun8, 6, required, op, args, env, ns, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val652 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj provided = _35val652;
Obj _35reg653 = PRIM_EQ(required, provided);
if (True == _35reg653) {
Obj _35reg654 = makeCons(op, Nil);
Obj _35reg655 = makeCons(intern("%builtin"), _35reg654);
PUSH_CONT(co, 11, clofun8, 2, args, _35reg655);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg659 = PRIM_GT(required, provided);
if (True == _35reg659) {
Obj _35reg660 = PRIM_SUB(required, provided);
PUSH_CONT(co, 9, clofun8, 5, op, args, env, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg660;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label9:
{
Obj _35val661 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj tmp = _35val661;
Obj _35reg662 = makeCons(op, args);
PUSH_CONT(co, 10, clofun8, 4, tmp, env, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#append"));
__arg1 = _35reg662;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val663 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg664 = makeCons(_35val663, Nil);
Obj _35reg665 = makeCons(tmp, _35reg664);
Obj _35reg666 = makeCons(intern("lambda"), _35reg665);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = _35reg666;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val656 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg655= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 12, clofun8, 1, _35reg655);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val656;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val657 = __arg1;
Obj _35reg655= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg658 = makeCons(_35reg655, _35val657);
__nargs = 2;
__arg1 = _35reg658;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35cc368 = makeNative(15, clofun8, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj ls = closureRef(co, 3);
PUSH_CONT(co, 14, clofun8, 1, ls);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val646 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val646;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35p349 = __arg1;
Obj _35p350 = __arg2;
Obj _35p351 = __arg3;
Obj _35cc352 = makeNative(17, clofun8, 0, 3, _35p349, _35p350, _35p351);
Obj s = _35p349;
Obj ns = _35p350;
Obj _35reg644 = PRIM_EQ(Nil, _35p351);
if (True == _35reg644) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#var-with-ns"));
__arg1 = s;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35cc353 = makeNative(25, clofun8, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj _35reg634 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg634) {
Obj _35reg635 = PRIM_CAR(closureRef(co, 2));
Obj import = _35reg635;
Obj _35reg636 = PRIM_CDR(closureRef(co, 2));
Obj more = _35reg636;
PUSH_CONT(co, 18, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc353;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val637 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 19, clofun8, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val637;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val638 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 20, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#value-or"));
__arg1 = _35val638;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val639 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj export = _35val639;
PUSH_CONT(co, 21, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = s;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val640 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val640) {
PUSH_CONT(co, 22, clofun8, 1, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#lookup-var"));
__arg1 = s;
__arg2 = ns;
__arg3 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val641 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 23, clofun8, 1, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val641;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35val642 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 24, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = import;
__arg2 = _35val642;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val643 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val643;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _35reg628 = PRIM_EQ(ns, makeCString(""));
if (True == _35reg628) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 27, clofun8, 2, var, ns);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal#symbol-cooked?"));
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val629 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val629) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 28, clofun8, 1, ns);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val630 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun8, 1, ns);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val630;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val631 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = ns;
__arg2 = _35val631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val632 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val632;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35p345 = __arg1;
Obj _35p346 = __arg2;
Obj _35cc347 = makeNative(32, clofun8, 0, 2, _35p345, _35p346);
Obj _35reg626 = PRIM_EQ(MAKE_NUMBER(0), _35p345);
if (True == _35reg626) {
Obj res = _35p346;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc348 = makeNative(33, clofun8, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg623 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj _35reg624 = primGenSym(intern("tmp"));
Obj _35reg625 = makeCons(_35reg624, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg623;
__arg2 = _35reg625;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x = __arg1;
PUSH_CONT(co, 35, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val620 = __arg1;
Obj find = _35val620;
PUSH_CONT(co, 36, clofun8, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val621 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val621) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x = __arg1;
PUSH_CONT(co, 38, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val617 = __arg1;
Obj find = _35val617;
PUSH_CONT(co, 39, clofun8, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val618 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val618) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj x = __arg1;
PUSH_CONT(co, 41, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val613 = __arg1;
PUSH_CONT(co, 42, clofun8, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = _35val613;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val614 = __arg1;
Obj _35reg615 = primNot(_35val614);
__nargs = 2;
__arg1 = _35reg615;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj _35p341 = __arg1;
Obj _35p342 = __arg2;
Obj _35cc343 = makeNative(44, clofun8, 0, 2, _35p341, _35p342);
Obj x = _35p341;
Obj _35reg542 = PRIM_EQ(Nil, _35p342);
if (True == _35reg542) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35cc344 = makeNative(46, clofun8, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg537 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg537) {
Obj _35reg538 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg538;
Obj _35reg539 = PRIM_CDR(closureRef(co, 1));
Obj tl = _35reg539;
PUSH_CONT(co, 45, clofun8, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35val540 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg541 = PRIM_LT(_35val540, MAKE_NUMBER(0));
if (True == _35reg541) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#pos-in-list0"));
__arg1 = MAKE_NUMBER(0);
__arg2 = x;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35p335 = __arg1;
Obj _35p336 = __arg2;
Obj _35p337 = __arg3;
Obj _35cc338 = makeNative(49, clofun8, 0, 3, _35p335, _35p336, _35p337);
Obj __ = _35p335;
Obj x = _35p336;
Obj _35reg534 = PRIM_EQ(Nil, _35p337);
if (True == _35reg534) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35cc339 = makeNative(0, clofun9, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg530 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg530) {
Obj _35reg531 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg531;
Obj _35reg532 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg532;
Obj _35reg533 = PRIM_EQ(x, a);
if (True == _35reg533) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
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

void clofun9(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc340 = makeNative(1, clofun9, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg526 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg526) {
Obj _35reg527 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg527;
Obj _35reg528 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg528;
Obj _35reg529 = PRIM_ADD(pos, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#pos-in-list0"));
__arg1 = _35reg529;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p330 = __arg1;
Obj _35p331 = __arg2;
Obj _35p332 = __arg3;
Obj _35cc333 = makeNative(3, clofun9, 0, 3, _35p330, _35p331, _35p332);
Obj f = _35p330;
Obj acc = _35p331;
Obj _35reg524 = PRIM_EQ(Nil, _35p332);
if (True == _35reg524) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc334 = makeNative(5, clofun9, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg520 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg520) {
Obj _35reg521 = PRIM_CAR(closureRef(co, 2));
Obj x = _35reg521;
Obj _35reg522 = PRIM_CDR(closureRef(co, 2));
Obj y = _35reg522;
PUSH_CONT(co, 4, clofun9, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val523 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = f;
__arg2 = _35val523;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35p325 = __arg1;
Obj _35p326 = __arg2;
Obj _35cc327 = makeNative(7, clofun9, 0, 2, _35p325, _35p326);
Obj var = _35p325;
Obj _35reg518 = PRIM_EQ(Nil, _35p326);
if (True == _35reg518) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc328 = makeNative(8, clofun9, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg508 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg508) {
Obj _35reg509 = PRIM_CAR(closureRef(co, 1));
Obj _35reg510 = PRIM_ISCONS(_35reg509);
if (True == _35reg510) {
Obj _35reg511 = PRIM_CAR(closureRef(co, 1));
Obj _35reg512 = PRIM_CAR(_35reg511);
Obj x = _35reg512;
Obj _35reg513 = PRIM_CAR(closureRef(co, 1));
Obj _35reg514 = PRIM_CDR(_35reg513);
Obj y = _35reg514;
Obj _35reg515 = PRIM_CDR(closureRef(co, 1));
Obj __ = _35reg515;
Obj _35reg516 = PRIM_EQ(var, x);
if (True == _35reg516) {
Obj _35reg517 = makeCons(x, y);
__nargs = 2;
__arg1 = _35reg517;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc329 = makeNative(9, clofun9, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg505 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg505) {
Obj _35reg506 = PRIM_CAR(closureRef(co, 1));
Obj __ = _35reg506;
Obj _35reg507 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg507;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

