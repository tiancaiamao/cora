#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun3261(struct Cora* co);
void _35clofun3260(struct Cora* co);
void _35clofun3259(struct Cora* co);
void _35clofun3258(struct Cora* co);
void _35clofun3257(struct Cora* co);
void _35clofun3256(struct Cora* co);
void _35clofun3255(struct Cora* co);
void _35clofun3254(struct Cora* co);
void _35clofun3253(struct Cora* co);
void _35clofun3252(struct Cora* co);
void _35clofun3251(struct Cora* co);
void _35clofun3250(struct Cora* co);
void _35clofun3249(struct Cora* co);
void _35clofun3248(struct Cora* co);
void _35clofun3247(struct Cora* co);
void _35clofun3246(struct Cora* co);
void _35clofun3245(struct Cora* co);
void _35clofun3244(struct Cora* co);
void _35clofun3243(struct Cora* co);
void _35clofun3242(struct Cora* co);
void _35clofun3241(struct Cora* co);
void _35clofun3240(struct Cora* co);
void _35clofun3239(struct Cora* co);


void entry(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0};

goto *jumpTable[co->ctx.pc.label];

label0:
{
pushCont(co, 5, _35clofun3261, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = makeCString("cora/lib/toc/internal");
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

void _35clofun3261(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3234 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun3260, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#compile"));
__arg1 = _35val3234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3261) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3233 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun3261, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand"));
__arg1 = _35val3233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3261) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj from = __arg1;
Obj to = __arg2;
pushCont(co, 1, _35clofun3261, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#preprocess"));
__arg1 = from;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3261) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3109 = __arg1;
Obj _35reg3114 = primSet(co, intern("cora/lib/toc#compile"), makeNative(4, _35clofun3258, 1, 0));
Obj _35reg3120 = primSet(co, intern("cora/lib/toc#for-each"), makeNative(8, _35clofun3258, 2, 0));
Obj _35reg3127 = primSet(co, intern("cora/lib/toc#generate-jumptable"), makeNative(12, _35clofun3258, 3, 0));
Obj _35reg3148 = primSet(co, intern("cora/lib/toc#generate-toplevel-group"), makeNative(13, _35clofun3259, 2, 0));
Obj _35reg3155 = primSet(co, intern("cora/lib/toc#generate-c"), makeNative(1, _35clofun3260, 2, 0));
Obj _35reg3187 = primSet(co, intern("cora/lib/toc#handle-import-eagerly"), makeNative(7, _35clofun3260, 1, 0));
Obj _35reg3228 = primSet(co, intern("cora/lib/toc#split-type-and-code"), makeNative(14, _35clofun3260, 4, 0));
Obj _35reg3229 = primSet(co, intern("cora/lib/infer#*typecheck*"), False);
Obj _35reg3232 = primSet(co, intern("cora/lib/toc#preprocess"), makeNative(17, _35clofun3260, 1, 0));
Obj _35reg3238 = primSet(co, intern("cora/lib/toc#compile-to-c"), makeNative(2, _35clofun3261, 2, 0));
__nargs = 2;
__arg1 = _35reg3238;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3261) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val1541 = __arg1;
Obj _35reg1542 = primSet(co, intern("cora/lib/toc#*ns-export*"), Nil);
Obj _35reg1557 = primSet(co, intern("cora/lib/toc#assq"), makeNative(3, _35clofun3239, 2, 0));
Obj _35reg1563 = primSet(co, intern("cora/lib/toc#foldl"), makeNative(7, _35clofun3239, 3, 0));
Obj _35reg1573 = primSet(co, intern("cora/lib/toc#pos-in-list0"), makeNative(11, _35clofun3239, 3, 0));
Obj _35reg1574 = primSet(co, intern("cora/lib/toc#index"), makeNative(12, _35clofun3239, 2, 0));
Obj _35reg1581 = primSet(co, intern("cora/lib/toc#exist-in-env"), makeNative(16, _35clofun3239, 2, 0));
Obj _35reg1582 = primCons(intern("primSet"), Nil);
Obj _35reg1583 = primCons(makeNumber(2), _35reg1582);
Obj _35reg1584 = primCons(intern("set"), _35reg1583);
Obj _35reg1585 = primCons(intern("primCar"), Nil);
Obj _35reg1586 = primCons(makeNumber(1), _35reg1585);
Obj _35reg1587 = primCons(intern("car"), _35reg1586);
Obj _35reg1588 = primCons(intern("primCdr"), Nil);
Obj _35reg1589 = primCons(makeNumber(1), _35reg1588);
Obj _35reg1590 = primCons(intern("cdr"), _35reg1589);
Obj _35reg1591 = primCons(intern("primCons"), Nil);
Obj _35reg1592 = primCons(makeNumber(2), _35reg1591);
Obj _35reg1593 = primCons(intern("cons"), _35reg1592);
Obj _35reg1594 = primCons(intern("primIsCons"), Nil);
Obj _35reg1595 = primCons(makeNumber(1), _35reg1594);
Obj _35reg1596 = primCons(intern("cons?"), _35reg1595);
Obj _35reg1597 = primCons(intern("primAdd"), Nil);
Obj _35reg1598 = primCons(makeNumber(2), _35reg1597);
Obj _35reg1599 = primCons(intern("+"), _35reg1598);
Obj _35reg1600 = primCons(intern("primSub"), Nil);
Obj _35reg1601 = primCons(makeNumber(2), _35reg1600);
Obj _35reg1602 = primCons(intern("-"), _35reg1601);
Obj _35reg1603 = primCons(intern("primMul"), Nil);
Obj _35reg1604 = primCons(makeNumber(2), _35reg1603);
Obj _35reg1605 = primCons(intern("*"), _35reg1604);
Obj _35reg1606 = primCons(intern("primDiv"), Nil);
Obj _35reg1607 = primCons(makeNumber(2), _35reg1606);
Obj _35reg1608 = primCons(intern("/"), _35reg1607);
Obj _35reg1609 = primCons(intern("primEQ"), Nil);
Obj _35reg1610 = primCons(makeNumber(2), _35reg1609);
Obj _35reg1611 = primCons(intern("="), _35reg1610);
Obj _35reg1612 = primCons(intern("primGT"), Nil);
Obj _35reg1613 = primCons(makeNumber(2), _35reg1612);
Obj _35reg1614 = primCons(intern(">"), _35reg1613);
Obj _35reg1615 = primCons(intern("primLT"), Nil);
Obj _35reg1616 = primCons(makeNumber(2), _35reg1615);
Obj _35reg1617 = primCons(intern("<"), _35reg1616);
Obj _35reg1618 = primCons(intern("primGenSym"), Nil);
Obj _35reg1619 = primCons(makeNumber(1), _35reg1618);
Obj _35reg1620 = primCons(intern("gensym"), _35reg1619);
Obj _35reg1621 = primCons(intern("primIsSymbol"), Nil);
Obj _35reg1622 = primCons(makeNumber(1), _35reg1621);
Obj _35reg1623 = primCons(intern("symbol?"), _35reg1622);
Obj _35reg1624 = primCons(intern("primNot"), Nil);
Obj _35reg1625 = primCons(makeNumber(1), _35reg1624);
Obj _35reg1626 = primCons(intern("not"), _35reg1625);
Obj _35reg1627 = primCons(intern("primIsNumber"), Nil);
Obj _35reg1628 = primCons(makeNumber(1), _35reg1627);
Obj _35reg1629 = primCons(intern("integer?"), _35reg1628);
Obj _35reg1630 = primCons(intern("primIsString"), Nil);
Obj _35reg1631 = primCons(makeNumber(1), _35reg1630);
Obj _35reg1632 = primCons(intern("string?"), _35reg1631);
Obj _35reg1633 = primCons(_35reg1632, Nil);
Obj _35reg1634 = primCons(_35reg1629, _35reg1633);
Obj _35reg1635 = primCons(_35reg1626, _35reg1634);
Obj _35reg1636 = primCons(_35reg1623, _35reg1635);
Obj _35reg1637 = primCons(_35reg1620, _35reg1636);
Obj _35reg1638 = primCons(_35reg1617, _35reg1637);
Obj _35reg1639 = primCons(_35reg1614, _35reg1638);
Obj _35reg1640 = primCons(_35reg1611, _35reg1639);
Obj _35reg1641 = primCons(_35reg1608, _35reg1640);
Obj _35reg1642 = primCons(_35reg1605, _35reg1641);
Obj _35reg1643 = primCons(_35reg1602, _35reg1642);
Obj _35reg1644 = primCons(_35reg1599, _35reg1643);
Obj _35reg1645 = primCons(_35reg1596, _35reg1644);
Obj _35reg1646 = primCons(_35reg1593, _35reg1645);
Obj _35reg1647 = primCons(_35reg1590, _35reg1646);
Obj _35reg1648 = primCons(_35reg1587, _35reg1647);
Obj _35reg1649 = primCons(_35reg1584, _35reg1648);
Obj _35reg1650 = primSet(co, intern("cora/lib/toc#*builtin-prims*"), _35reg1649);
Obj _35reg1654 = primSet(co, intern("cora/lib/toc#builtin?"), makeNative(19, _35clofun3239, 1, 0));
Obj _35reg1657 = primSet(co, intern("cora/lib/toc#builtin->name"), makeNative(1, _35clofun3240, 1, 0));
Obj _35reg1660 = primSet(co, intern("cora/lib/toc#builtin->args"), makeNative(4, _35clofun3240, 1, 0));
Obj _35reg1665 = primSet(co, intern("cora/lib/toc#temp-list"), makeNative(7, _35clofun3240, 2, 0));
Obj _35reg1671 = primSet(co, intern("cora/lib/toc#var-with-ns"), makeNative(12, _35clofun3240, 2, 0));
Obj _35reg1683 = primSet(co, intern("cora/lib/toc#lookup-var"), makeNative(1, _35clofun3241, 3, 0));
Obj _35reg1872 = primSet(co, intern("cora/lib/toc#parse"), makeNative(15, _35clofun3242, 4, 0));
Obj _35reg1883 = primSet(co, intern("cora/lib/toc#union"), makeNative(0, _35clofun3243, 2, 0));
Obj _35reg1894 = primSet(co, intern("cora/lib/toc#diff"), makeNative(6, _35clofun3243, 2, 0));
Obj _35reg1945 = primSet(co, intern("cora/lib/toc#convert-protect?"), makeNative(13, _35clofun3243, 1, 0));
Obj _35reg2120 = primSet(co, intern("cora/lib/toc#free-vars"), makeNative(15, _35clofun3244, 1, 0));
Obj _35reg2193 = primSet(co, intern("cora/lib/toc#closure-convert"), makeNative(9, _35clofun3245, 2, 0));
Obj _35reg2196 = primSet(co, intern("cora/lib/toc#id"), makeNative(10, _35clofun3245, 1, 0));
Obj _35reg2333 = primSet(co, intern("cora/lib/toc#tailify"), makeNative(7, _35clofun3246, 2, 0));
Obj _35reg2380 = primSet(co, intern("cora/lib/toc#tailify-list"), makeNative(17, _35clofun3246, 3, 0));
Obj _35reg2459 = primSet(co, intern("cora/lib/toc#explicit-stack"), makeNative(14, _35clofun3247, 2, 0));
Obj _35reg2635 = primSet(co, intern("cora/lib/toc#collect-lambda"), makeNative(7, _35clofun3249, 2, 0));
Obj _35reg2648 = primSet(co, intern("cora/lib/toc#append-result"), makeNative(13, _35clofun3249, 5, 0));
Obj _35reg2655 = primSet(co, intern("cora/lib/toc#wrap-var"), makeNative(15, _35clofun3249, 2, 0));
Obj _35reg2675 = primSet(co, intern("cora/lib/toc#generate-call-list"), makeNative(8, _35clofun3250, 4, 0));
Obj _35reg2945 = primSet(co, intern("cora/lib/toc#generate-inst"), makeNative(11, _35clofun3254, 4, 0));
Obj _35reg2968 = primSet(co, intern("cora/lib/toc#generate-cont"), makeNative(3, _35clofun3255, 3, 0));
Obj _35reg2977 = primSet(co, intern("cora/lib/toc#generate-inst-list-h"), makeNative(9, _35clofun3255, 5, 0));
Obj _35reg2978 = primSet(co, intern("cora/lib/toc#generate-inst-list"), makeNative(10, _35clofun3255, 4, 0));
Obj _35reg2983 = primSet(co, intern("cora/lib/toc#code-gen-func-declare"), makeNative(14, _35clofun3255, 2, 0));
Obj _35reg2991 = primSet(co, intern("cora/lib/toc#local-from-params"), makeNative(0, _35clofun3256, 3, 0));
Obj _35reg2996 = primSet(co, intern("cora/lib/toc#local-from-cont"), makeNative(5, _35clofun3256, 3, 0));
Obj _35reg3003 = primSet(co, intern("cora/lib/toc#generate-call-args-reverse"), makeNative(9, _35clofun3256, 4, 0));
Obj _35reg3065 = primSet(co, intern("cora/lib/toc#code-gen-toplevel"), makeNative(20, _35clofun3256, 2, 0));
Obj _35reg3066 = primSet(co, intern("cora/lib/toc#parse-pass"), makeNative(0, _35clofun3257, 1, 0));
Obj _35reg3067 = primSet(co, intern("cora/lib/toc#closure-convert-pass"), makeNative(1, _35clofun3257, 1, 0));
Obj _35reg3068 = primSet(co, intern("cora/lib/toc#tailify-pass"), makeNative(2, _35clofun3257, 1, 0));
Obj _35reg3069 = primSet(co, intern("cora/lib/toc#explicit-stack-pass"), makeNative(3, _35clofun3257, 1, 0));
Obj _35reg3099 = primSet(co, intern("cora/lib/toc#collect-lambda-pass"), makeNative(14, _35clofun3257, 1, 0));
Obj _35reg3106 = primSet(co, intern("cora/lib/toc#rewrite-->macro"), makeNative(17, _35clofun3257, 2, 0));
pushCont(co, 3, _35clofun3261, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(20, _35clofun3257, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3261) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1540 = __arg1;
pushCont(co, 4, _35clofun3261, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = makeCString("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3261) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3260(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3149 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun3259, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj to = __arg1;
Obj bc = __arg2;
pushCont(co, 0, _35clofun3260, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1531 = makeNative(2, _35clofun3260, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3260) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val3173 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1530 = makeNative(3, _35clofun3260, 0, 1, closureRef(co, 0));
Obj _35reg3156 = primIsCons(closureRef(co, 0));
if (True == _35reg3156) {
Obj _35reg3157 = primCar(closureRef(co, 0));
Obj _35reg3158 = primIsCons(_35reg3157);
if (True == _35reg3158) {
Obj _35reg3159 = primCar(closureRef(co, 0));
Obj _35reg3160 = primCar(_35reg3159);
Obj _35reg3161 = primEQ(intern("import"), _35reg3160);
if (True == _35reg3161) {
Obj _35reg3162 = primCar(closureRef(co, 0));
Obj _35reg3163 = primCdr(_35reg3162);
Obj _35reg3164 = primIsCons(_35reg3163);
if (True == _35reg3164) {
Obj _35reg3165 = primCar(closureRef(co, 0));
Obj _35reg3166 = primCdr(_35reg3165);
Obj _35reg3167 = primCar(_35reg3166);
Obj pkg = _35reg3167;
Obj _35reg3168 = primCar(closureRef(co, 0));
Obj _35reg3169 = primCdr(_35reg3168);
Obj _35reg3170 = primCdr(_35reg3169);
Obj _35reg3171 = primEQ(Nil, _35reg3170);
if (True == _35reg3171) {
Obj _35reg3172 = primCdr(closureRef(co, 0));
Obj remain = _35reg3172;
pushCont(co, 4, _35clofun3260, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1529 = makeNative(5, _35clofun3260, 0, 1, closureRef(co, 0));
Obj _35reg3174 = primIsCons(closureRef(co, 0));
if (True == _35reg3174) {
Obj _35reg3175 = primCar(closureRef(co, 0));
Obj _35reg3176 = primEQ(intern("begin"), _35reg3175);
if (True == _35reg3176) {
Obj _35reg3177 = primCdr(closureRef(co, 0));
Obj remain = _35reg3177;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1527 = __arg1;
Obj _35cc1528 = makeNative(6, _35clofun3260, 0, 1, _35p1527);
Obj _35reg3178 = primIsCons(_35p1527);
if (True == _35reg3178) {
Obj _35reg3179 = primCar(_35p1527);
Obj _35reg3180 = primEQ(intern("define-library"), _35reg3179);
if (True == _35reg3180) {
Obj _35reg3181 = primCdr(_35p1527);
Obj _35reg3182 = primIsCons(_35reg3181);
if (True == _35reg3182) {
Obj _35reg3183 = primCdr(_35p1527);
Obj _35reg3184 = primCar(_35reg3183);
Obj __ = _35reg3184;
Obj _35reg3185 = primCdr(_35p1527);
Obj _35reg3186 = primCdr(_35reg3185);
Obj remain = _35reg3186;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1539 = makeNative(8, _35clofun3260, 0, 0);
Obj _35reg3188 = primIsCons(closureRef(co, 0));
if (True == _35reg3188) {
Obj _35reg3189 = primCar(closureRef(co, 0));
Obj exp = _35reg3189;
Obj _35reg3190 = primCdr(closureRef(co, 0));
Obj more = _35reg3190;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3191 = primCons(exp, Nil);
Obj _35reg3192 = primCons(intern("backquote"), _35reg3191);
Obj _35reg3193 = primCons(_35reg3192, Nil);
Obj _35reg3194 = primCons(intern("macroexpand"), _35reg3193);
Obj _35reg3195 = primCons(intern("tvar"), Nil);
Obj _35reg3196 = primCons(Nil, Nil);
Obj _35reg3197 = primCons(Nil, _35reg3196);
Obj _35reg3198 = primCons(_35reg3195, _35reg3197);
Obj _35reg3199 = primCons(_35reg3194, _35reg3198);
Obj _35reg3200 = primCons(intern("cora/lib/infer#check-type"), _35reg3199);
Obj _35reg3201 = primCons(_35reg3200, type);
Obj _35reg3202 = primCons(exp, code);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3201;
__arg3 = _35reg3202;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1539;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1538 = makeNative(9, _35clofun3260, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3203 = primIsCons(closureRef(co, 0));
if (True == _35reg3203) {
Obj _35reg3204 = primCar(closureRef(co, 0));
Obj _35reg3205 = primIsCons(_35reg3204);
if (True == _35reg3205) {
Obj _35reg3206 = primCar(closureRef(co, 0));
Obj _35reg3207 = primCar(_35reg3206);
Obj _35reg3208 = primEQ(intern(":declare"), _35reg3207);
if (True == _35reg3208) {
Obj _35reg3209 = primCar(closureRef(co, 0));
Obj _35reg3210 = primCdr(_35reg3209);
Obj exp = _35reg3210;
Obj _35reg3211 = primCdr(closureRef(co, 0));
Obj more = _35reg3211;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3212 = primCons(intern("declare"), exp);
Obj _35reg3213 = primCons(_35reg3212, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3213;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1538;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1538;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1538;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1537 = makeNative(10, _35clofun3260, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3214 = primIsCons(closureRef(co, 0));
if (True == _35reg3214) {
Obj _35reg3215 = primCar(closureRef(co, 0));
Obj _35reg3216 = primIsCons(_35reg3215);
if (True == _35reg3216) {
Obj _35reg3217 = primCar(closureRef(co, 0));
Obj _35reg3218 = primCar(_35reg3217);
Obj _35reg3219 = primEQ(intern(":type"), _35reg3218);
if (True == _35reg3219) {
Obj _35reg3220 = primCar(closureRef(co, 0));
Obj _35reg3221 = primCdr(_35reg3220);
Obj exp = _35reg3221;
Obj _35reg3222 = primCdr(closureRef(co, 0));
Obj more = _35reg3222;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3223 = primCons(intern("begin"), exp);
Obj _35reg3224 = primCons(_35reg3223, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3224;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1537;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1537;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1537;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val3227 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val3226= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val3226;
__arg2 = _35val3227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3226 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3260, 2, k, _35val3226);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35p1532 = __arg1;
Obj _35p1533 = __arg2;
Obj _35p1534 = __arg3;
Obj _35p1535 = co->args[4];
Obj _35cc1536 = makeNative(11, _35clofun3260, 0, 4, _35p1532, _35p1533, _35p1534, _35p1535);
Obj _35reg3225 = primEQ(Nil, _35p1532);
if (True == _35reg3225) {
Obj type = _35p1533;
Obj code = _35p1534;
Obj k = _35p1535;
pushCont(co, 13, _35clofun3260, 2, code, k);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1536;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val3231 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3260) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val3230 = __arg1;
Obj sexp = _35val3230;
pushCont(co, 15, _35clofun3260, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj file_45path = __arg1;
pushCont(co, 16, _35clofun3260, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#read-file-as-sexp"));
__arg1 = file_45path;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3237 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3236 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val3236;
pushCont(co, 18, _35clofun3260, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3235 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val3235;
pushCont(co, 19, _35clofun3260, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3260) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3259(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3140 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(13, _35clofun3258, 1, 1, to);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3139 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3138 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3137 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3259, 2, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(0);
__arg3 = _35val3137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3136 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun3259, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3135 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3134 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3133 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3132 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3131 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3130 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3129 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3128 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3259, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val3128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj to = __arg1;
Obj group = __arg2;
pushCont(co, 12, _35clofun3259, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3152 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 0);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3151 = __arg1;
pushCont(co, 14, _35clofun3259, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = closureRef(co, 0);
__arg2 = _35val3151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj group = __arg1;
pushCont(co, 15, _35clofun3259, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj group = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-toplevel-group"));
__arg1 = closureRef(co, 0);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3154 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(17, _35clofun3259, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3153 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun3259, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3150 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun3259, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(16, _35clofun3259, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3259) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3258(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3113 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda-pass"));
__arg1 = _35val3113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3112 = __arg1;
pushCont(co, 0, _35clofun3258, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack-pass"));
__arg1 = _35val3112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3111 = __arg1;
pushCont(co, 1, _35clofun3258, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#tailify-pass"));
__arg1 = _35val3111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3110 = __arg1;
pushCont(co, 2, _35clofun3258, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert-pass"));
__arg1 = _35val3110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
pushCont(co, 3, _35clofun3258, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3118 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1526 = makeNative(5, _35clofun3258, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg3115 = primIsCons(closureRef(co, 1));
if (True == _35reg3115) {
Obj _35reg3116 = primCar(closureRef(co, 1));
Obj x = _35reg3116;
Obj _35reg3117 = primCdr(closureRef(co, 1));
Obj y = _35reg3117;
pushCont(co, 6, _35clofun3258, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1526;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35p1523 = __arg1;
Obj _35p1524 = __arg2;
Obj _35cc1525 = makeNative(7, _35clofun3258, 0, 2, _35p1523, _35p1524);
Obj fn = _35p1523;
Obj _35reg3119 = primEQ(Nil, _35p1524);
if (True == _35reg3119) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3258) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1525;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3122 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(1);
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3125 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3126 = primAdd(i, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = _35reg3126;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3124 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 10, _35clofun3258, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg3121 = primEQ(i, makeNumber(0));
if (True == _35reg3121) {
pushCont(co, 9, _35clofun3258, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3123 = primLT(i, n);
if (True == _35reg3123) {
pushCont(co, 11, _35clofun3258, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3258) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label13:
{
Obj x = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-toplevel"));
__arg1 = closureRef(co, 0);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3147 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3146 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 14, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3145 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3144 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3143 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3142 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3141 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun3258, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3258) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3257(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
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
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = exp;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3077 = __arg1;
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res = _35val3077;
Obj _35reg3078 = primCons(intern("entry"), makeNumber(0));
Obj _35reg3079 = primCons(e1, Nil);
Obj _35reg3080 = primCons(Nil, _35reg3079);
Obj _35reg3081 = primCons(Nil, _35reg3080);
Obj _35reg3082 = primCons(intern("lambda"), _35reg3081);
Obj _35reg3083 = primCons(_35reg3082, Nil);
Obj _35reg3084 = primCons(_35reg3078, _35reg3083);
Obj _35reg3085 = primCons(_35reg3084, Nil);
Obj _35reg3086 = primCons(_35reg3085, res);
__nargs = 2;
__arg1 = _35reg3086;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3257) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val3088 = __arg1;
Obj _35val3087= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3089 = primCons(_35val3087, _35val3088);
Obj res = _35reg3089;
Obj _35reg3090 = primCons(intern("entry"), makeNumber(0));
Obj _35reg3091 = primCons(e1, Nil);
Obj _35reg3092 = primCons(Nil, _35reg3091);
Obj _35reg3093 = primCons(Nil, _35reg3092);
Obj _35reg3094 = primCons(intern("lambda"), _35reg3093);
Obj _35reg3095 = primCons(_35reg3094, Nil);
Obj _35reg3096 = primCons(_35reg3090, _35reg3095);
Obj _35reg3097 = primCons(_35reg3096, Nil);
Obj _35reg3098 = primCons(_35reg3097, res);
__nargs = 2;
__arg1 = _35reg3098;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3257) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val3087 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3257, 2, _35val3087, e1);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3076 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3076) {
pushCont(co, 4, _35clofun3257, 1, e1);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 6, _35clofun3257, 2, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3075 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur = _35val3075;
pushCont(co, 7, _35clofun3257, 3, cur, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3074 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val3074;
pushCont(co, 8, _35clofun3257, 2, v, e1);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3073 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3257, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3072 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3257, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3071 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3257, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3070 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val3070;
pushCont(co, 12, _35clofun3257, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
pushCont(co, 13, _35clofun3257, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#vector"));
__arg1 = makeNumber(3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1522 = makeNative(15, _35clofun3257, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg3100 = primIsCons(closureRef(co, 1));
if (True == _35reg3100) {
Obj _35reg3101 = primCar(closureRef(co, 1));
Obj hd = _35reg3101;
Obj _35reg3102 = primCdr(closureRef(co, 1));
Obj more = _35reg3102;
Obj _35reg3103 = primCons(obj, Nil);
Obj _35reg3104 = primCons(hd, _35reg3103);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = _35reg3104;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35p1519 = __arg1;
Obj _35p1520 = __arg2;
Obj _35cc1521 = makeNative(16, _35clofun3257, 0, 2, _35p1519, _35p1520);
Obj obj = _35p1519;
Obj _35reg3105 = primEQ(Nil, _35p1520);
if (True == _35reg3105) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3257) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val3108 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val3108;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3107 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val3107;
pushCont(co, 18, _35clofun3257, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
pushCont(co, 19, _35clofun3257, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3257) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3256(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 20, _35clofun3255, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2995 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2994 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3256, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2993 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3256, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2992 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 3, _35clofun3256, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 4, _35clofun3256, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3000 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3001 = primAdd(idx, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg3001;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1514 = makeNative(6, _35clofun3256, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg2997 = primIsCons(closureRef(co, 3));
if (True == _35reg2997) {
Obj _35reg2998 = primCar(closureRef(co, 3));
Obj a = _35reg2998;
Obj _35reg2999 = primCdr(closureRef(co, 3));
Obj b = _35reg2999;
pushCont(co, 7, _35clofun3256, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1514;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p1509 = __arg1;
Obj _35p1510 = __arg2;
Obj _35p1511 = __arg3;
Obj _35p1512 = co->args[4];
Obj _35cc1513 = makeNative(8, _35clofun3256, 0, 4, _35p1509, _35p1510, _35p1511, _35p1512);
Obj fn = _35p1509;
Obj w = _35p1510;
Obj idx = _35p1511;
Obj _35reg3002 = primEQ(Nil, _35p1512);
if (True == _35reg3002) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3256) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3005 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3004 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun3256, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1518 = makeNative(10, _35clofun3256, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
pushCont(co, 12, _35clofun3256, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3064 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3062 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3063 = primCar(label);
pushCont(co, 14, _35clofun3256, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = _35reg3063;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3061 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 15, _35clofun3256, 4, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-cont"));
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3060 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 16, _35clofun3256, 5, actives, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-params"));
__arg2 = w;
__arg3 = makeNumber(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3059 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 17, _35clofun3256, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3057 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3058 = primCdr(label);
pushCont(co, 18, _35clofun3256, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg3058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35p1515 = __arg1;
Obj _35p1516 = __arg2;
Obj _35cc1517 = makeNative(13, _35clofun3256, 0, 2, _35p1515, _35p1516);
Obj w = _35p1515;
Obj _35reg3006 = primIsCons(_35p1516);
if (True == _35reg3006) {
Obj _35reg3007 = primCar(_35p1516);
Obj label = _35reg3007;
Obj _35reg3008 = primCdr(_35p1516);
Obj _35reg3009 = primIsCons(_35reg3008);
if (True == _35reg3009) {
Obj _35reg3010 = primCdr(_35p1516);
Obj _35reg3011 = primCar(_35reg3010);
Obj _35reg3012 = primIsCons(_35reg3011);
if (True == _35reg3012) {
Obj _35reg3013 = primCdr(_35p1516);
Obj _35reg3014 = primCar(_35reg3013);
Obj _35reg3015 = primCar(_35reg3014);
Obj _35reg3016 = primEQ(intern("lambda"), _35reg3015);
if (True == _35reg3016) {
Obj _35reg3017 = primCdr(_35p1516);
Obj _35reg3018 = primCar(_35reg3017);
Obj _35reg3019 = primCdr(_35reg3018);
Obj _35reg3020 = primIsCons(_35reg3019);
if (True == _35reg3020) {
Obj _35reg3021 = primCdr(_35p1516);
Obj _35reg3022 = primCar(_35reg3021);
Obj _35reg3023 = primCdr(_35reg3022);
Obj _35reg3024 = primCar(_35reg3023);
Obj params = _35reg3024;
Obj _35reg3025 = primCdr(_35p1516);
Obj _35reg3026 = primCar(_35reg3025);
Obj _35reg3027 = primCdr(_35reg3026);
Obj _35reg3028 = primCdr(_35reg3027);
Obj _35reg3029 = primIsCons(_35reg3028);
if (True == _35reg3029) {
Obj _35reg3030 = primCdr(_35p1516);
Obj _35reg3031 = primCar(_35reg3030);
Obj _35reg3032 = primCdr(_35reg3031);
Obj _35reg3033 = primCdr(_35reg3032);
Obj _35reg3034 = primCar(_35reg3033);
Obj actives = _35reg3034;
Obj _35reg3035 = primCdr(_35p1516);
Obj _35reg3036 = primCar(_35reg3035);
Obj _35reg3037 = primCdr(_35reg3036);
Obj _35reg3038 = primCdr(_35reg3037);
Obj _35reg3039 = primCdr(_35reg3038);
Obj _35reg3040 = primIsCons(_35reg3039);
if (True == _35reg3040) {
Obj _35reg3041 = primCdr(_35p1516);
Obj _35reg3042 = primCar(_35reg3041);
Obj _35reg3043 = primCdr(_35reg3042);
Obj _35reg3044 = primCdr(_35reg3043);
Obj _35reg3045 = primCdr(_35reg3044);
Obj _35reg3046 = primCar(_35reg3045);
Obj body = _35reg3046;
Obj _35reg3047 = primCdr(_35p1516);
Obj _35reg3048 = primCar(_35reg3047);
Obj _35reg3049 = primCdr(_35reg3048);
Obj _35reg3050 = primCdr(_35reg3049);
Obj _35reg3051 = primCdr(_35reg3050);
Obj _35reg3052 = primCdr(_35reg3051);
Obj _35reg3053 = primEQ(Nil, _35reg3052);
if (True == _35reg3053) {
Obj _35reg3054 = primCdr(_35p1516);
Obj _35reg3055 = primCdr(_35reg3054);
Obj _35reg3056 = primEQ(Nil, _35reg3055);
if (True == _35reg3056) {
pushCont(co, 19, _35clofun3256, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3256) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3255(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2958 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2959 = primCar(label);
pushCont(co, 20, _35clofun3254, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg2959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2957 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun3255, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2955 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2956 = primCdr(label);
pushCont(co, 1, _35clofun3255, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2956;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35p1498 = __arg1;
Obj _35p1499 = __arg2;
Obj _35p1500 = __arg3;
Obj _35cc1501 = makeNative(12, _35clofun3254, 0, 0);
Obj self = _35p1498;
Obj w = _35p1499;
Obj _35reg2946 = primIsCons(_35p1500);
if (True == _35reg2946) {
Obj _35reg2947 = primCar(_35p1500);
Obj _35reg2948 = primEQ(intern("%continuation"), _35reg2947);
if (True == _35reg2948) {
Obj _35reg2949 = primCdr(_35p1500);
Obj _35reg2950 = primIsCons(_35reg2949);
if (True == _35reg2950) {
Obj _35reg2951 = primCdr(_35p1500);
Obj _35reg2952 = primCar(_35reg2951);
Obj label = _35reg2952;
Obj _35reg2953 = primCdr(_35p1500);
Obj _35reg2954 = primCdr(_35reg2953);
Obj stacks = _35reg2954;
pushCont(co, 2, _35clofun3255, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2975 = __arg1;
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
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2973 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2974 = primNot(_35val2973);
if (True == _35reg2974) {
pushCont(co, 5, _35clofun3255, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2972 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 6, _35clofun3255, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1508 = makeNative(4, _35clofun3255, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg2969 = primIsCons(closureRef(co, 4));
if (True == _35reg2969) {
Obj _35reg2970 = primCar(closureRef(co, 4));
Obj a = _35reg2970;
Obj _35reg2971 = primCdr(closureRef(co, 4));
Obj b = _35reg2971;
pushCont(co, 7, _35clofun3255, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1508;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p1502 = __arg1;
Obj _35p1503 = __arg2;
Obj _35p1504 = __arg3;
Obj _35p1505 = co->args[4];
Obj _35p1506 = co->args[5];
Obj _35cc1507 = makeNative(8, _35clofun3255, 0, 5, _35p1502, _35p1503, _35p1504, _35p1505, _35p1506);
Obj self = _35p1502;
Obj env = _35p1503;
Obj fn = _35p1504;
Obj w = _35p1505;
Obj _35reg2976 = primEQ(Nil, _35p1506);
if (True == _35reg2976) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3255) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1507;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
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
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2982 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2981 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun3255, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2979 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2980 = primCar(label);
pushCont(co, 12, _35clofun3255, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg2980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj w = __arg1;
Obj label = __arg2;
pushCont(co, 13, _35clofun3255, 2, label, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2988 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2987 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3255, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2990 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2989 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun3255, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2985 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2986 = primLT(i, makeNumber(4));
if (True == _35reg2986) {
pushCont(co, 16, _35clofun3255, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, _35clofun3255, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2984 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 19, _35clofun3255, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3255) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3254(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1488 = makeNative(11, _35clofun3253, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2883 = primIsCons(closureRef(co, 3));
if (True == _35reg2883) {
Obj _35reg2884 = primCar(closureRef(co, 3));
Obj _35reg2885 = primEQ(intern("%const"), _35reg2884);
if (True == _35reg2885) {
Obj _35reg2886 = primCdr(closureRef(co, 3));
Obj _35reg2887 = primIsCons(_35reg2886);
if (True == _35reg2887) {
Obj _35reg2888 = primCdr(closureRef(co, 3));
Obj _35reg2889 = primCar(_35reg2888);
Obj x = _35reg2889;
Obj _35reg2890 = primCdr(closureRef(co, 3));
Obj _35reg2891 = primCdr(_35reg2890);
Obj _35reg2892 = primEQ(Nil, _35reg2891);
if (True == _35reg2892) {
Obj _35reg2893 = primIsSymbol(x);
if (True == _35reg2893) {
pushCont(co, 14, _35clofun3253, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 20, _35clofun3253, 2, x, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2918 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2917 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3254, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1487 = makeNative(0, _35clofun3254, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2907 = primIsCons(closureRef(co, 3));
if (True == _35reg2907) {
Obj _35reg2908 = primCar(closureRef(co, 3));
Obj _35reg2909 = primEQ(intern("%stack-ref"), _35reg2908);
if (True == _35reg2909) {
Obj _35reg2910 = primCdr(closureRef(co, 3));
Obj _35reg2911 = primIsCons(_35reg2910);
if (True == _35reg2911) {
Obj _35reg2912 = primCdr(closureRef(co, 3));
Obj _35reg2913 = primCar(_35reg2912);
Obj idx = _35reg2913;
Obj _35reg2914 = primCdr(closureRef(co, 3));
Obj _35reg2915 = primCdr(_35reg2914);
Obj _35reg2916 = primEQ(Nil, _35reg2915);
if (True == _35reg2916) {
pushCont(co, 2, _35clofun3254, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2930 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2929 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun3254, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1486 = makeNative(3, _35clofun3254, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2919 = primIsCons(closureRef(co, 3));
if (True == _35reg2919) {
Obj _35reg2920 = primCar(closureRef(co, 3));
Obj _35reg2921 = primEQ(intern("%closure-ref"), _35reg2920);
if (True == _35reg2921) {
Obj _35reg2922 = primCdr(closureRef(co, 3));
Obj _35reg2923 = primIsCons(_35reg2922);
if (True == _35reg2923) {
Obj _35reg2924 = primCdr(closureRef(co, 3));
Obj _35reg2925 = primCar(_35reg2924);
Obj idx = _35reg2925;
Obj _35reg2926 = primCdr(closureRef(co, 3));
Obj _35reg2927 = primCdr(_35reg2926);
Obj _35reg2928 = primEQ(Nil, _35reg2927);
if (True == _35reg2928) {
pushCont(co, 5, _35clofun3254, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1486;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1486;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1486;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1486;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2943 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2942 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 7, _35clofun3254, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val2942;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2941 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3254, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1485 = makeNative(6, _35clofun3254, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2931 = primIsCons(closureRef(co, 3));
if (True == _35reg2931) {
Obj _35reg2932 = primCar(closureRef(co, 3));
Obj _35reg2933 = primEQ(intern("%global"), _35reg2932);
if (True == _35reg2933) {
Obj _35reg2934 = primCdr(closureRef(co, 3));
Obj _35reg2935 = primIsCons(_35reg2934);
if (True == _35reg2935) {
Obj _35reg2936 = primCdr(closureRef(co, 3));
Obj _35reg2937 = primCar(_35reg2936);
Obj x = _35reg2937;
Obj _35reg2938 = primCdr(closureRef(co, 3));
Obj _35reg2939 = primCdr(_35reg2938);
Obj _35reg2940 = primEQ(Nil, _35reg2939);
if (True == _35reg2940) {
pushCont(co, 9, _35clofun3254, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1485;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1485;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1485;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1485;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1480 = __arg1;
Obj _35p1481 = __arg2;
Obj _35p1482 = __arg3;
Obj _35p1483 = co->args[4];
Obj _35cc1484 = makeNative(10, _35clofun3254, 0, 4, _35p1480, _35p1481, _35p1482, _35p1483);
Obj self = _35p1480;
Obj env = _35p1481;
Obj w = _35p1482;
Obj x = _35p1483;
Obj _35reg2944 = primIsSymbol(x);
if (True == _35reg2944) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1484;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2966 = __arg1;
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
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x = __arg1;
pushCont(co, 13, _35clofun3254, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2967 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2964 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2965 = primNot(_35val2964);
if (True == _35reg2965) {
pushCont(co, 15, _35clofun3254, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(14, _35clofun3254, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2963 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 16, _35clofun3254, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2962 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 17, _35clofun3254, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val2962;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2961 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun3254, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2960 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 19, _35clofun3254, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3254) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3253(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1490 = makeNative(14, _35clofun3252, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2820 = primIsCons(closureRef(co, 3));
if (True == _35reg2820) {
Obj _35reg2821 = primCar(closureRef(co, 3));
Obj _35reg2822 = primIsCons(_35reg2821);
if (True == _35reg2822) {
Obj _35reg2823 = primCar(closureRef(co, 3));
Obj _35reg2824 = primCar(_35reg2823);
Obj _35reg2825 = primEQ(intern("%builtin"), _35reg2824);
if (True == _35reg2825) {
Obj _35reg2826 = primCar(closureRef(co, 3));
Obj _35reg2827 = primCdr(_35reg2826);
Obj _35reg2828 = primIsCons(_35reg2827);
if (True == _35reg2828) {
Obj _35reg2829 = primCar(closureRef(co, 3));
Obj _35reg2830 = primCdr(_35reg2829);
Obj _35reg2831 = primCar(_35reg2830);
Obj f = _35reg2831;
Obj _35reg2832 = primCar(closureRef(co, 3));
Obj _35reg2833 = primCdr(_35reg2832);
Obj _35reg2834 = primCdr(_35reg2833);
Obj _35reg2835 = primEQ(Nil, _35reg2834);
if (True == _35reg2835) {
Obj _35reg2836 = primCdr(closureRef(co, 3));
Obj args = _35reg2836;
pushCont(co, 20, _35clofun3252, 5, f, self, env, args, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2876 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2877 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = _35reg2877;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2875 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 1, _35clofun3253, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2874 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 2, _35clofun3253, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2873 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 3, _35clofun3253, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2872 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 4, _35clofun3253, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2881 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2882 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = _35reg2882;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2880 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 6, _35clofun3253, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2879 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 7, _35clofun3253, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2878 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 8, _35clofun3253, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2870 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj idx = _35val2870;
Obj _35reg2871 = primLT(idx, makeNumber(0));
if (True == _35reg2871) {
pushCont(co, 5, _35clofun3253, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 9, _35clofun3253, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1489 = makeNative(0, _35clofun3253, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2844 = primIsCons(closureRef(co, 3));
if (True == _35reg2844) {
Obj _35reg2845 = primCar(closureRef(co, 3));
Obj _35reg2846 = primEQ(intern("let"), _35reg2845);
if (True == _35reg2846) {
Obj _35reg2847 = primCdr(closureRef(co, 3));
Obj _35reg2848 = primIsCons(_35reg2847);
if (True == _35reg2848) {
Obj _35reg2849 = primCdr(closureRef(co, 3));
Obj _35reg2850 = primCar(_35reg2849);
Obj a = _35reg2850;
Obj _35reg2851 = primCdr(closureRef(co, 3));
Obj _35reg2852 = primCdr(_35reg2851);
Obj _35reg2853 = primIsCons(_35reg2852);
if (True == _35reg2853) {
Obj _35reg2854 = primCdr(closureRef(co, 3));
Obj _35reg2855 = primCdr(_35reg2854);
Obj _35reg2856 = primCar(_35reg2855);
Obj b = _35reg2856;
Obj _35reg2857 = primCdr(closureRef(co, 3));
Obj _35reg2858 = primCdr(_35reg2857);
Obj _35reg2859 = primCdr(_35reg2858);
Obj _35reg2860 = primIsCons(_35reg2859);
if (True == _35reg2860) {
Obj _35reg2861 = primCdr(closureRef(co, 3));
Obj _35reg2862 = primCdr(_35reg2861);
Obj _35reg2863 = primCdr(_35reg2862);
Obj _35reg2864 = primCar(_35reg2863);
Obj c = _35reg2864;
Obj _35reg2865 = primCdr(closureRef(co, 3));
Obj _35reg2866 = primCdr(_35reg2865);
Obj _35reg2867 = primCdr(_35reg2866);
Obj _35reg2868 = primCdr(_35reg2867);
Obj _35reg2869 = primEQ(Nil, _35reg2868);
if (True == _35reg2869) {
pushCont(co, 10, _35clofun3253, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = a;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2896 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2895 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 12, _35clofun3253, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val2895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2894 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun3253, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2899 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2898 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3253, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2903 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2902 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun3253, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val2902;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2901 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun3253, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal#escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2897 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2897) {
pushCont(co, 16, _35clofun3253, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeNumber(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2900 = primIsString(x);
if (True == _35reg2900) {
pushCont(co, 19, _35clofun3253, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2904 = primEQ(x, Nil);
if (True == _35reg2904) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2905 = primEQ(x, True);
if (True == _35reg2905) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2906 = primEQ(x, False);
if (True == _35reg2906) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3253) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
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

void _35clofun3252(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2781 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun3251, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2780 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun3252, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2779 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 1, _35clofun3252, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2778 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun3252, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2776 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2777 = primCar(label);
pushCont(co, 3, _35clofun3252, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg2777;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2775 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 4, _35clofun3252, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2773 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2774 = primCdr(label);
pushCont(co, 5, _35clofun3252, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2774;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1492 = makeNative(15, _35clofun3251, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2757 = primIsCons(closureRef(co, 3));
if (True == _35reg2757) {
Obj _35reg2758 = primCar(closureRef(co, 3));
Obj _35reg2759 = primEQ(intern("%closure"), _35reg2758);
if (True == _35reg2759) {
Obj _35reg2760 = primCdr(closureRef(co, 3));
Obj _35reg2761 = primIsCons(_35reg2760);
if (True == _35reg2761) {
Obj _35reg2762 = primCdr(closureRef(co, 3));
Obj _35reg2763 = primCar(_35reg2762);
Obj label = _35reg2763;
Obj _35reg2764 = primCdr(closureRef(co, 3));
Obj _35reg2765 = primCdr(_35reg2764);
Obj _35reg2766 = primIsCons(_35reg2765);
if (True == _35reg2766) {
Obj _35reg2767 = primCdr(closureRef(co, 3));
Obj _35reg2768 = primCdr(_35reg2767);
Obj _35reg2769 = primCar(_35reg2768);
Obj nargs = _35reg2769;
Obj _35reg2770 = primCdr(closureRef(co, 3));
Obj _35reg2771 = primCdr(_35reg2770);
Obj _35reg2772 = primCdr(_35reg2771);
Obj frees = _35reg2772;
pushCont(co, 6, _35clofun3252, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2819 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2818 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 8, _35clofun3252, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2817 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 9, _35clofun3252, 4, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2816 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 10, _35clofun3252, 4, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2815 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 11, _35clofun3252, 5, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2814 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 12, _35clofun3252, 5, b, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1491 = makeNative(7, _35clofun3252, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2788 = primIsCons(closureRef(co, 3));
if (True == _35reg2788) {
Obj _35reg2789 = primCar(closureRef(co, 3));
Obj _35reg2790 = primEQ(intern("if"), _35reg2789);
if (True == _35reg2790) {
Obj _35reg2791 = primCdr(closureRef(co, 3));
Obj _35reg2792 = primIsCons(_35reg2791);
if (True == _35reg2792) {
Obj _35reg2793 = primCdr(closureRef(co, 3));
Obj _35reg2794 = primCar(_35reg2793);
Obj a = _35reg2794;
Obj _35reg2795 = primCdr(closureRef(co, 3));
Obj _35reg2796 = primCdr(_35reg2795);
Obj _35reg2797 = primIsCons(_35reg2796);
if (True == _35reg2797) {
Obj _35reg2798 = primCdr(closureRef(co, 3));
Obj _35reg2799 = primCdr(_35reg2798);
Obj _35reg2800 = primCar(_35reg2799);
Obj b = _35reg2800;
Obj _35reg2801 = primCdr(closureRef(co, 3));
Obj _35reg2802 = primCdr(_35reg2801);
Obj _35reg2803 = primCdr(_35reg2802);
Obj _35reg2804 = primIsCons(_35reg2803);
if (True == _35reg2804) {
Obj _35reg2805 = primCdr(closureRef(co, 3));
Obj _35reg2806 = primCdr(_35reg2805);
Obj _35reg2807 = primCdr(_35reg2806);
Obj _35reg2808 = primCar(_35reg2807);
Obj c = _35reg2808;
Obj _35reg2809 = primCdr(closureRef(co, 3));
Obj _35reg2810 = primCdr(_35reg2809);
Obj _35reg2811 = primCdr(_35reg2810);
Obj _35reg2812 = primCdr(_35reg2811);
Obj _35reg2813 = primEQ(Nil, _35reg2812);
if (True == _35reg2813) {
pushCont(co, 13, _35clofun3252, 6, a, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2841 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2840 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun3252, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2843 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2842 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun3252, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2838 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2839 = primEQ(f, intern("set"));
if (True == _35reg2839) {
pushCont(co, 16, _35clofun3252, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, _35clofun3252, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2837 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 19, _35clofun3252, 5, f, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35val2837;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3252) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3251(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1497 = makeNative(9, _35clofun3250, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2676 = primIsCons(closureRef(co, 3));
if (True == _35reg2676) {
Obj _35reg2677 = primCar(closureRef(co, 3));
Obj f = _35reg2677;
Obj _35reg2678 = primCdr(closureRef(co, 3));
Obj args = _35reg2678;
pushCont(co, 20, _35clofun3250, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2709 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 3];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1496 = makeNative(0, _35clofun3251, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2692 = primIsCons(closureRef(co, 3));
if (True == _35reg2692) {
Obj _35reg2693 = primCar(closureRef(co, 3));
Obj _35reg2694 = primEQ(intern("call"), _35reg2693);
if (True == _35reg2694) {
Obj _35reg2695 = primCdr(closureRef(co, 3));
Obj _35reg2696 = primIsCons(_35reg2695);
if (True == _35reg2696) {
Obj _35reg2697 = primCdr(closureRef(co, 3));
Obj _35reg2698 = primCar(_35reg2697);
Obj exp = _35reg2698;
Obj _35reg2699 = primCdr(closureRef(co, 3));
Obj _35reg2700 = primCdr(_35reg2699);
Obj _35reg2701 = primIsCons(_35reg2700);
if (True == _35reg2701) {
Obj _35reg2702 = primCdr(closureRef(co, 3));
Obj _35reg2703 = primCdr(_35reg2702);
Obj _35reg2704 = primCar(_35reg2703);
Obj cont = _35reg2704;
Obj _35reg2705 = primCdr(closureRef(co, 3));
Obj _35reg2706 = primCdr(_35reg2705);
Obj _35reg2707 = primCdr(_35reg2706);
Obj _35reg2708 = primEQ(Nil, _35reg2707);
if (True == _35reg2708) {
pushCont(co, 1, _35clofun3251, 4, self, env, w, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-cont"));
__arg1 = self;
__arg2 = w;
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc1495 = makeNative(2, _35clofun3251, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2710 = primIsCons(closureRef(co, 3));
if (True == _35reg2710) {
Obj _35reg2711 = primCar(closureRef(co, 3));
Obj _35reg2712 = primEQ(intern("tailcall"), _35reg2711);
if (True == _35reg2712) {
Obj _35reg2713 = primCdr(closureRef(co, 3));
Obj _35reg2714 = primIsCons(_35reg2713);
if (True == _35reg2714) {
Obj _35reg2715 = primCdr(closureRef(co, 3));
Obj _35reg2716 = primCar(_35reg2715);
Obj exp = _35reg2716;
Obj _35reg2717 = primCdr(closureRef(co, 3));
Obj _35reg2718 = primCdr(_35reg2717);
Obj _35reg2719 = primEQ(Nil, _35reg2718);
if (True == _35reg2719) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2737 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2736 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun3251, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2735 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3251, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2734 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3251, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2733 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3251, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2732 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3251, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2731 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 9, _35clofun3251, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2730 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun3251, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1494 = makeNative(3, _35clofun3251, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2720 = primIsCons(closureRef(co, 3));
if (True == _35reg2720) {
Obj _35reg2721 = primCar(closureRef(co, 3));
Obj _35reg2722 = primEQ(intern("return"), _35reg2721);
if (True == _35reg2722) {
Obj _35reg2723 = primCdr(closureRef(co, 3));
Obj _35reg2724 = primIsCons(_35reg2723);
if (True == _35reg2724) {
Obj _35reg2725 = primCdr(closureRef(co, 3));
Obj _35reg2726 = primCar(_35reg2725);
Obj x = _35reg2726;
Obj _35reg2727 = primCdr(closureRef(co, 3));
Obj _35reg2728 = primCdr(_35reg2727);
Obj _35reg2729 = primEQ(Nil, _35reg2728);
if (True == _35reg2729) {
pushCont(co, 11, _35clofun3251, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1494;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1494;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1494;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1494;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2756 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2755 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 13, _35clofun3251, 4, self, env, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1493 = makeNative(12, _35clofun3251, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2738 = primIsCons(closureRef(co, 3));
if (True == _35reg2738) {
Obj _35reg2739 = primCar(closureRef(co, 3));
Obj _35reg2740 = primEQ(intern("do"), _35reg2739);
if (True == _35reg2740) {
Obj _35reg2741 = primCdr(closureRef(co, 3));
Obj _35reg2742 = primIsCons(_35reg2741);
if (True == _35reg2742) {
Obj _35reg2743 = primCdr(closureRef(co, 3));
Obj _35reg2744 = primCar(_35reg2743);
Obj a = _35reg2744;
Obj _35reg2745 = primCdr(closureRef(co, 3));
Obj _35reg2746 = primCdr(_35reg2745);
Obj _35reg2747 = primIsCons(_35reg2746);
if (True == _35reg2747) {
Obj _35reg2748 = primCdr(closureRef(co, 3));
Obj _35reg2749 = primCdr(_35reg2748);
Obj _35reg2750 = primCar(_35reg2749);
Obj b = _35reg2750;
Obj _35reg2751 = primCdr(closureRef(co, 3));
Obj _35reg2752 = primCdr(_35reg2751);
Obj _35reg2753 = primCdr(_35reg2752);
Obj _35reg2754 = primEQ(Nil, _35reg2753);
if (True == _35reg2754) {
pushCont(co, 14, _35clofun3251, 4, self, env, w, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2787 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2786 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun3251, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2784 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2785 = primNot(_35val2784);
if (True == _35reg2785) {
pushCont(co, 17, _35clofun3251, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2783 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3251, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2782 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3251, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val2782;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3251) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3250(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2661 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun3249, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2672 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2673 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2673;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2671 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun3250, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2670 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun3250, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2669 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun3250, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2668 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun3250, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2667 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun3250, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1479 = makeNative(16, _35clofun3249, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg2656 = primIsCons(closureRef(co, 3));
if (True == _35reg2656) {
Obj _35reg2657 = primCar(closureRef(co, 3));
Obj x = _35reg2657;
Obj _35reg2658 = primCdr(closureRef(co, 3));
Obj more = _35reg2658;
Obj _35reg2659 = primGT(i, makeNumber(3));
Obj _35reg2660 = primNot(_35reg2659);
if (True == _35reg2660) {
pushCont(co, 0, _35clofun3250, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 6, _35clofun3250, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35p1474 = __arg1;
Obj _35p1475 = __arg2;
Obj _35p1476 = __arg3;
Obj _35p1477 = co->args[4];
Obj _35cc1478 = makeNative(7, _35clofun3250, 0, 4, _35p1474, _35p1475, _35p1476, _35p1477);
Obj self = _35p1474;
Obj w = _35p1475;
Obj i = _35p1476;
Obj _35reg2674 = primEQ(Nil, _35p1477);
if (True == _35reg2674) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3250) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1478;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2691 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2690 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun3250, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2689 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3250, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2688 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3250, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2687 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun3250, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2686 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun3250, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2685 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3250, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2683 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2684 = primCons(f, args);
pushCont(co, 16, _35clofun3250, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = _35reg2684;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2682 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun3250, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2680 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2681 = primAdd(makeNumber(1), _35val2680);
pushCont(co, 18, _35clofun3250, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2681;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2679 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3250, 4, f, args, self, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3250) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3249(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2623 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2622= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2624 = primCons(_35val2623, fvs);
Obj _35reg2625 = primCons(_35reg2622, _35reg2624);
Obj _35reg2626 = primCons(clo_45or_45cont, _35reg2625);
__nargs = 2;
__arg1 = _35reg2626;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3249) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2621 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2622 = primCons(name, idx);
pushCont(co, 0, _35clofun3249, 3, fvs, _35reg2622, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2631 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2632 = primCons(name, idx);
Obj _35reg2633 = primCons(_35reg2632, fvs);
Obj _35reg2634 = primCons(clo_45or_45cont, _35reg2633);
__nargs = 2;
__arg1 = _35reg2634;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3249) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2614 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2615 = primCar(_35val2614);
Obj name = _35reg2615;
Obj _35reg2616 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2616) {
Obj _35reg2617 = primCons(body1, Nil);
Obj _35reg2618 = primCons(Nil, _35reg2617);
Obj _35reg2619 = primCons(params, _35reg2618);
Obj _35reg2620 = primCons(intern("lambda"), _35reg2619);
pushCont(co, 1, _35clofun3249, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2627 = primCons(body1, Nil);
Obj _35reg2628 = primCons(fvs, _35reg2627);
Obj _35reg2629 = primCons(params, _35reg2628);
Obj _35reg2630 = primCons(intern("lambda"), _35reg2629);
pushCont(co, 2, _35clofun3249, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2630;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2592 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2592;
Obj _35reg2593 = primEQ(idx, makeNumber(0));
if (True == _35reg2593) {
Obj _35reg2594 = primGenSym(intern("clofun"));
Obj name = _35reg2594;
Obj _35reg2595 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2595) {
Obj _35reg2596 = primCons(body1, Nil);
Obj _35reg2597 = primCons(Nil, _35reg2596);
Obj _35reg2598 = primCons(params, _35reg2597);
Obj _35reg2599 = primCons(intern("lambda"), _35reg2598);
pushCont(co, 19, _35clofun3248, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2606 = primCons(body1, Nil);
Obj _35reg2607 = primCons(fvs, _35reg2606);
Obj _35reg2608 = primCons(params, _35reg2607);
Obj _35reg2609 = primCons(intern("lambda"), _35reg2608);
pushCont(co, 20, _35clofun3248, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2609;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 3, _35clofun3249, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2591 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2591;
pushCont(co, 4, _35clofun3249, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2590 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2590;
pushCont(co, 5, _35clofun3249, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p1469 = __arg1;
Obj _35p1470 = __arg2;
Obj _35cc1471 = makeNative(18, _35clofun3247, 0, 2, _35p1469, _35p1470);
Obj v = _35p1469;
Obj _35reg2461 = primIsCons(_35p1470);
if (True == _35reg2461) {
Obj _35reg2462 = primCar(_35p1470);
Obj clo_45or_45cont = _35reg2462;
Obj _35reg2463 = primCdr(_35p1470);
Obj _35reg2464 = primIsCons(_35reg2463);
if (True == _35reg2464) {
Obj _35reg2465 = primCdr(_35p1470);
Obj _35reg2466 = primCar(_35reg2465);
Obj _35reg2467 = primIsCons(_35reg2466);
if (True == _35reg2467) {
Obj _35reg2468 = primCdr(_35p1470);
Obj _35reg2469 = primCar(_35reg2468);
Obj _35reg2470 = primCar(_35reg2469);
Obj _35reg2471 = primEQ(intern("lambda"), _35reg2470);
if (True == _35reg2471) {
Obj _35reg2472 = primCdr(_35p1470);
Obj _35reg2473 = primCar(_35reg2472);
Obj _35reg2474 = primCdr(_35reg2473);
Obj _35reg2475 = primIsCons(_35reg2474);
if (True == _35reg2475) {
Obj _35reg2476 = primCdr(_35p1470);
Obj _35reg2477 = primCar(_35reg2476);
Obj _35reg2478 = primCdr(_35reg2477);
Obj _35reg2479 = primCar(_35reg2478);
Obj params = _35reg2479;
Obj _35reg2480 = primCdr(_35p1470);
Obj _35reg2481 = primCar(_35reg2480);
Obj _35reg2482 = primCdr(_35reg2481);
Obj _35reg2483 = primCdr(_35reg2482);
Obj _35reg2484 = primIsCons(_35reg2483);
if (True == _35reg2484) {
Obj _35reg2485 = primCdr(_35p1470);
Obj _35reg2486 = primCar(_35reg2485);
Obj _35reg2487 = primCdr(_35reg2486);
Obj _35reg2488 = primCdr(_35reg2487);
Obj _35reg2489 = primCar(_35reg2488);
Obj body = _35reg2489;
Obj _35reg2490 = primCdr(_35p1470);
Obj _35reg2491 = primCar(_35reg2490);
Obj _35reg2492 = primCdr(_35reg2491);
Obj _35reg2493 = primCdr(_35reg2492);
Obj _35reg2494 = primCdr(_35reg2493);
Obj _35reg2495 = primEQ(Nil, _35reg2494);
if (True == _35reg2495) {
Obj _35reg2496 = primCdr(_35p1470);
Obj _35reg2497 = primCdr(_35reg2496);
Obj fvs = _35reg2497;
Obj _35reg2498 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2498) {
if (True == True) {
pushCont(co, 7, _35clofun3248, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2544 = primEQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg2544) {
if (True == True) {
pushCont(co, 17, _35clofun3248, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 6, _35clofun3249, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2642 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2646 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2647 = primCons(_35val2646, res);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = _35reg2647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2645 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj res = _35val2645;
pushCont(co, 9, _35clofun3249, 2, res, v);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2644 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3249, 2, cur1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2643 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3249, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v = __arg1;
Obj idx = __arg2;
Obj cur = __arg3;
Obj name = co->args[4];
Obj val = co->args[5];
Obj _35reg2636 = primCons(name, idx);
Obj _35reg2637 = primCons(val, Nil);
Obj _35reg2638 = primCons(_35reg2636, _35reg2637);
Obj _35reg2639 = primCons(_35reg2638, cur);
Obj cur1 = _35reg2639;
Obj _35reg2640 = primLT(idx, makeNumber(20));
if (True == _35reg2640) {
Obj _35reg2641 = primAdd(idx, makeNumber(1));
pushCont(co, 8, _35clofun3249, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = _35reg2641;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 12, _35clofun3249, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2650 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2651 = primCons(_35val2650, Nil);
Obj _35reg2652 = primCons(x, _35reg2651);
Obj _35reg2653 = primCons(tmp, _35reg2652);
Obj _35reg2654 = primCons(intern("let"), _35reg2653);
__nargs = 2;
__arg1 = _35reg2654;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3249) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg2649 = primGenSym(intern("reg"));
Obj tmp = _35reg2649;
pushCont(co, 14, _35clofun3249, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2665 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2666 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2666;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2664 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun3249, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2663 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 18, _35clofun3249, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2662 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 19, _35clofun3249, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3249) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3248(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2519 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2520 = primCons(name, idx);
Obj _35reg2521 = primCons(_35reg2520, fvs);
Obj _35reg2522 = primCons(clo_45or_45cont, _35reg2521);
__nargs = 2;
__arg1 = _35reg2522;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2532 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2531= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2533 = primCons(_35val2532, fvs);
Obj _35reg2534 = primCons(_35reg2531, _35reg2533);
Obj _35reg2535 = primCons(clo_45or_45cont, _35reg2534);
__nargs = 2;
__arg1 = _35reg2535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2530 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2531 = primCons(name, idx);
pushCont(co, 1, _35clofun3248, 3, fvs, _35reg2531, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2540 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2541 = primCons(name, idx);
Obj _35reg2542 = primCons(_35reg2541, fvs);
Obj _35reg2543 = primCons(clo_45or_45cont, _35reg2542);
__nargs = 2;
__arg1 = _35reg2543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2523 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2524 = primCar(_35val2523);
Obj name = _35reg2524;
Obj _35reg2525 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2525) {
Obj _35reg2526 = primCons(body1, Nil);
Obj _35reg2527 = primCons(Nil, _35reg2526);
Obj _35reg2528 = primCons(params, _35reg2527);
Obj _35reg2529 = primCons(intern("lambda"), _35reg2528);
pushCont(co, 2, _35clofun3248, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2536 = primCons(body1, Nil);
Obj _35reg2537 = primCons(fvs, _35reg2536);
Obj _35reg2538 = primCons(params, _35reg2537);
Obj _35reg2539 = primCons(intern("lambda"), _35reg2538);
pushCont(co, 3, _35clofun3248, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2539;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2501 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2501;
Obj _35reg2502 = primEQ(idx, makeNumber(0));
if (True == _35reg2502) {
Obj _35reg2503 = primGenSym(intern("clofun"));
Obj name = _35reg2503;
Obj _35reg2504 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2504) {
Obj _35reg2505 = primCons(body1, Nil);
Obj _35reg2506 = primCons(Nil, _35reg2505);
Obj _35reg2507 = primCons(params, _35reg2506);
Obj _35reg2508 = primCons(intern("lambda"), _35reg2507);
pushCont(co, 20, _35clofun3247, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2508;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2515 = primCons(body1, Nil);
Obj _35reg2516 = primCons(fvs, _35reg2515);
Obj _35reg2517 = primCons(params, _35reg2516);
Obj _35reg2518 = primCons(intern("lambda"), _35reg2517);
pushCont(co, 0, _35clofun3248, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2518;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 4, _35clofun3248, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2500 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2500;
pushCont(co, 5, _35clofun3248, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2499 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2499;
pushCont(co, 6, _35clofun3248, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2557 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2556= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2558 = primCons(_35val2557, fvs);
Obj _35reg2559 = primCons(_35reg2556, _35reg2558);
Obj _35reg2560 = primCons(clo_45or_45cont, _35reg2559);
__nargs = 2;
__arg1 = _35reg2560;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val2555 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2556 = primCons(name, idx);
pushCont(co, 8, _35clofun3248, 3, fvs, _35reg2556, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2565 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2566 = primCons(name, idx);
Obj _35reg2567 = primCons(_35reg2566, fvs);
Obj _35reg2568 = primCons(clo_45or_45cont, _35reg2567);
__nargs = 2;
__arg1 = _35reg2568;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2578 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2577= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2579 = primCons(_35val2578, fvs);
Obj _35reg2580 = primCons(_35reg2577, _35reg2579);
Obj _35reg2581 = primCons(clo_45or_45cont, _35reg2580);
__nargs = 2;
__arg1 = _35reg2581;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2576 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2577 = primCons(name, idx);
pushCont(co, 11, _35clofun3248, 3, fvs, _35reg2577, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2586 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2587 = primCons(name, idx);
Obj _35reg2588 = primCons(_35reg2587, fvs);
Obj _35reg2589 = primCons(clo_45or_45cont, _35reg2588);
__nargs = 2;
__arg1 = _35reg2589;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35val2569 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2570 = primCar(_35val2569);
Obj name = _35reg2570;
Obj _35reg2571 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2571) {
Obj _35reg2572 = primCons(body1, Nil);
Obj _35reg2573 = primCons(Nil, _35reg2572);
Obj _35reg2574 = primCons(params, _35reg2573);
Obj _35reg2575 = primCons(intern("lambda"), _35reg2574);
pushCont(co, 12, _35clofun3248, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2582 = primCons(body1, Nil);
Obj _35reg2583 = primCons(fvs, _35reg2582);
Obj _35reg2584 = primCons(params, _35reg2583);
Obj _35reg2585 = primCons(intern("lambda"), _35reg2584);
pushCont(co, 13, _35clofun3248, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2585;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2547 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2547;
Obj _35reg2548 = primEQ(idx, makeNumber(0));
if (True == _35reg2548) {
Obj _35reg2549 = primGenSym(intern("clofun"));
Obj name = _35reg2549;
Obj _35reg2550 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2550) {
Obj _35reg2551 = primCons(body1, Nil);
Obj _35reg2552 = primCons(Nil, _35reg2551);
Obj _35reg2553 = primCons(params, _35reg2552);
Obj _35reg2554 = primCons(intern("lambda"), _35reg2553);
pushCont(co, 9, _35clofun3248, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2554;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2561 = primCons(body1, Nil);
Obj _35reg2562 = primCons(fvs, _35reg2561);
Obj _35reg2563 = primCons(params, _35reg2562);
Obj _35reg2564 = primCons(intern("lambda"), _35reg2563);
pushCont(co, 10, _35clofun3248, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 14, _35clofun3248, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2546 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2546;
pushCont(co, 15, _35clofun3248, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2545 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2545;
pushCont(co, 16, _35clofun3248, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2602 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2601= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2603 = primCons(_35val2602, fvs);
Obj _35reg2604 = primCons(_35reg2601, _35reg2603);
Obj _35reg2605 = primCons(clo_45or_45cont, _35reg2604);
__nargs = 2;
__arg1 = _35reg2605;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val2600 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2601 = primCons(name, idx);
pushCont(co, 18, _35clofun3248, 3, fvs, _35reg2601, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3248) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2610 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2611 = primCons(name, idx);
Obj _35reg2612 = primCons(_35reg2611, fvs);
Obj _35reg2613 = primCons(clo_45or_45cont, _35reg2612);
__nargs = 2;
__arg1 = _35reg2613;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3248) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3247(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2405 = __arg1;
Obj _35val2404= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2406 = primCons(_35val2405, Nil);
Obj _35reg2407 = primCons(_35val2404, _35reg2406);
Obj _35reg2408 = primCons(intern("call"), _35reg2407);
__nargs = 2;
__arg1 = _35reg2408;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2404 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3247, 1, _35val2404);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2403 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 1, _35clofun3247, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2403;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1467 = makeNative(20, _35clofun3246, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2386 = primIsCons(closureRef(co, 1));
if (True == _35reg2386) {
Obj _35reg2387 = primCar(closureRef(co, 1));
Obj _35reg2388 = primEQ(intern("call"), _35reg2387);
if (True == _35reg2388) {
Obj _35reg2389 = primCdr(closureRef(co, 1));
Obj _35reg2390 = primIsCons(_35reg2389);
if (True == _35reg2390) {
Obj _35reg2391 = primCdr(closureRef(co, 1));
Obj _35reg2392 = primCar(_35reg2391);
Obj exp = _35reg2392;
Obj _35reg2393 = primCdr(closureRef(co, 1));
Obj _35reg2394 = primCdr(_35reg2393);
Obj _35reg2395 = primIsCons(_35reg2394);
if (True == _35reg2395) {
Obj _35reg2396 = primCdr(closureRef(co, 1));
Obj _35reg2397 = primCdr(_35reg2396);
Obj _35reg2398 = primCar(_35reg2397);
Obj cont = _35reg2398;
Obj _35reg2399 = primCdr(closureRef(co, 1));
Obj _35reg2400 = primCdr(_35reg2399);
Obj _35reg2401 = primCdr(_35reg2400);
Obj _35reg2402 = primEQ(Nil, _35reg2401);
if (True == _35reg2402) {
pushCont(co, 2, _35clofun3247, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2430 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2431 = primCons(_35val2430, Nil);
Obj _35reg2432 = primCons(val, _35reg2431);
Obj _35reg2433 = primCons(intern("lambda"), _35reg2432);
Obj _35reg2434 = primCons(_35reg2433, fvs2);
Obj _35reg2435 = primCons(intern("%continuation"), _35reg2434);
__nargs = 2;
__arg1 = _35reg2435;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2429 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val2429;
pushCont(co, 4, _35clofun3247, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2428 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 5, _35clofun3247, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2428;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2427 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2427;
pushCont(co, 6, _35clofun3247, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2426 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 7, _35clofun3247, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2426;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1466 = makeNative(3, _35clofun3247, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2409 = primIsCons(closureRef(co, 1));
if (True == _35reg2409) {
Obj _35reg2410 = primCar(closureRef(co, 1));
Obj _35reg2411 = primEQ(intern("continuation"), _35reg2410);
if (True == _35reg2411) {
Obj _35reg2412 = primCdr(closureRef(co, 1));
Obj _35reg2413 = primIsCons(_35reg2412);
if (True == _35reg2413) {
Obj _35reg2414 = primCdr(closureRef(co, 1));
Obj _35reg2415 = primCar(_35reg2414);
Obj val = _35reg2415;
Obj _35reg2416 = primCdr(closureRef(co, 1));
Obj _35reg2417 = primCdr(_35reg2416);
Obj _35reg2418 = primIsCons(_35reg2417);
if (True == _35reg2418) {
Obj _35reg2419 = primCdr(closureRef(co, 1));
Obj _35reg2420 = primCdr(_35reg2419);
Obj _35reg2421 = primCar(_35reg2420);
Obj body = _35reg2421;
Obj _35reg2422 = primCdr(closureRef(co, 1));
Obj _35reg2423 = primCdr(_35reg2422);
Obj _35reg2424 = primCdr(_35reg2423);
Obj _35reg2425 = primEQ(Nil, _35reg2424);
if (True == _35reg2425) {
pushCont(co, 8, _35clofun3247, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2453 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2454 = primCons(_35val2453, Nil);
Obj _35reg2455 = primCons(args, _35reg2454);
Obj _35reg2456 = primCons(intern("lambda"), _35reg2455);
__nargs = 2;
__arg1 = _35reg2456;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35cc1465 = makeNative(9, _35clofun3247, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2436 = primIsCons(closureRef(co, 1));
if (True == _35reg2436) {
Obj _35reg2437 = primCar(closureRef(co, 1));
Obj _35reg2438 = primEQ(intern("lambda"), _35reg2437);
if (True == _35reg2438) {
Obj _35reg2439 = primCdr(closureRef(co, 1));
Obj _35reg2440 = primIsCons(_35reg2439);
if (True == _35reg2440) {
Obj _35reg2441 = primCdr(closureRef(co, 1));
Obj _35reg2442 = primCar(_35reg2441);
Obj args = _35reg2442;
Obj _35reg2443 = primCdr(closureRef(co, 1));
Obj _35reg2444 = primCdr(_35reg2443);
Obj _35reg2445 = primIsCons(_35reg2444);
if (True == _35reg2445) {
Obj _35reg2446 = primCdr(closureRef(co, 1));
Obj _35reg2447 = primCdr(_35reg2446);
Obj _35reg2448 = primCar(_35reg2447);
Obj body = _35reg2448;
Obj _35reg2449 = primCdr(closureRef(co, 1));
Obj _35reg2450 = primCdr(_35reg2449);
Obj _35reg2451 = primCdr(_35reg2450);
Obj _35reg2452 = primEQ(Nil, _35reg2451);
if (True == _35reg2452) {
pushCont(co, 10, _35clofun3247, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1464 = makeNative(11, _35clofun3247, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2457 = primIsSymbol(var);
if (True == _35reg2457) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2458 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1463= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2458) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p1461 = __arg1;
Obj _35p1462 = __arg2;
Obj _35cc1463 = makeNative(12, _35clofun3247, 0, 2, _35p1461, _35p1462);
Obj __ = _35p1461;
Obj x = _35p1462;
pushCont(co, 13, _35clofun3247, 2, x, _35cc1463);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1473 = makeNative(15, _35clofun3247, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1472 = makeNative(16, _35clofun3247, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg2460 = primIsCons(f_45args);
if (True == _35reg2460) {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = makeNative(17, _35clofun3247, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2511 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2510= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2512 = primCons(_35val2511, fvs);
Obj _35reg2513 = primCons(_35reg2510, _35reg2512);
Obj _35reg2514 = primCons(clo_45or_45cont, _35reg2513);
__nargs = 2;
__arg1 = _35reg2514;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3247) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2509 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2510 = primCons(name, idx);
pushCont(co, 19, _35clofun3247, 3, fvs, _35reg2510, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3247) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3246(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2325 = __arg1;
Obj _35val2324= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2326 = primCons(_35val2325, Nil);
Obj _35reg2327 = primCons(_35val2324, _35reg2326);
Obj _35reg2328 = primCons(ra, _35reg2327);
Obj _35reg2329 = primCons(intern("if"), _35reg2328);
__nargs = 2;
__arg1 = _35reg2329;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2324 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun3246, 2, _35val2324, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj ra = __arg1;
pushCont(co, 1, _35clofun3246, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1451 = makeNative(20, _35clofun3245, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2298 = primIsCons(closureRef(co, 0));
if (True == _35reg2298) {
Obj _35reg2299 = primCar(closureRef(co, 0));
Obj _35reg2300 = primEQ(intern("if"), _35reg2299);
if (True == _35reg2300) {
Obj _35reg2301 = primCdr(closureRef(co, 0));
Obj _35reg2302 = primIsCons(_35reg2301);
if (True == _35reg2302) {
Obj _35reg2303 = primCdr(closureRef(co, 0));
Obj _35reg2304 = primCar(_35reg2303);
Obj a = _35reg2304;
Obj _35reg2305 = primCdr(closureRef(co, 0));
Obj _35reg2306 = primCdr(_35reg2305);
Obj _35reg2307 = primIsCons(_35reg2306);
if (True == _35reg2307) {
Obj _35reg2308 = primCdr(closureRef(co, 0));
Obj _35reg2309 = primCdr(_35reg2308);
Obj _35reg2310 = primCar(_35reg2309);
Obj b = _35reg2310;
Obj _35reg2311 = primCdr(closureRef(co, 0));
Obj _35reg2312 = primCdr(_35reg2311);
Obj _35reg2313 = primCdr(_35reg2312);
Obj _35reg2314 = primIsCons(_35reg2313);
if (True == _35reg2314) {
Obj _35reg2315 = primCdr(closureRef(co, 0));
Obj _35reg2316 = primCdr(_35reg2315);
Obj _35reg2317 = primCdr(_35reg2316);
Obj _35reg2318 = primCar(_35reg2317);
Obj c = _35reg2318;
Obj _35reg2319 = primCdr(closureRef(co, 0));
Obj _35reg2320 = primCdr(_35reg2319);
Obj _35reg2321 = primCdr(_35reg2320);
Obj _35reg2322 = primCdr(_35reg2321);
Obj _35reg2323 = primEQ(Nil, _35reg2322);
if (True == _35reg2323) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(2, _35clofun3246, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2330 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1450= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2330) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1450 = makeNative(3, _35clofun3246, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 4, _35clofun3246, 2, x, _35cc1450);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2332 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1449= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2332) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj _35p1447 = __arg1;
Obj _35p1448 = __arg2;
Obj _35cc1449 = makeNative(5, _35clofun3246, 0, 2, _35p1447, _35p1448);
Obj x = _35p1447;
Obj next = _35p1448;
Obj _35reg2331 = primIsSymbol(x);
if (True == _35reg2331) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1449;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 6, _35clofun3246, 3, next, x, _35cc1449);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj hd1 = __arg1;
Obj _35reg2337 = primCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2337;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1460 = makeNative(8, _35clofun3246, 0, 0);
Obj _35reg2334 = primIsCons(closureRef(co, 0));
if (True == _35reg2334) {
Obj _35reg2335 = primCar(closureRef(co, 0));
Obj hd = _35reg2335;
Obj _35reg2336 = primCdr(closureRef(co, 0));
Obj tl = _35reg2336;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = hd;
__arg2 = makeNative(9, _35clofun3246, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2349 = __arg1;
Obj _35reg2348= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2350 = primCons(_35val2349, Nil);
Obj _35reg2351 = primCons(_35reg2348, _35reg2350);
Obj _35reg2352 = primCons(intern("continuation"), _35reg2351);
Obj _35reg2353 = primCons(_35reg2352, Nil);
Obj _35reg2354 = primCons(exp, _35reg2353);
Obj _35reg2355 = primCons(intern("call"), _35reg2354);
__nargs = 2;
__arg1 = _35reg2355;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2361 = __arg1;
Obj _35reg2360= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2362 = primCons(_35val2361, Nil);
Obj _35reg2363 = primCons(_35reg2360, _35reg2362);
Obj _35reg2364 = primCons(intern("continuation"), _35reg2363);
Obj _35reg2365 = primCons(_35reg2364, Nil);
Obj _35reg2366 = primCons(exp, _35reg2365);
Obj _35reg2367 = primCons(intern("call"), _35reg2366);
__nargs = 2;
__arg1 = _35reg2367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2342 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2343 = primEQ(_35val2342, intern("%builtin"));
if (True == _35reg2343) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2344 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2344) {
Obj _35reg2345 = primCons(exp, Nil);
Obj _35reg2346 = primCons(intern("tailcall"), _35reg2345);
__nargs = 2;
__arg1 = _35reg2346;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2347 = primGenSym(intern("val"));
Obj val = _35reg2347;
Obj _35reg2348 = primCons(val, Nil);
pushCont(co, 11, _35clofun3246, 2, _35reg2348, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2356 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2356) {
Obj _35reg2357 = primCons(exp, Nil);
Obj _35reg2358 = primCons(intern("tailcall"), _35reg2357);
__nargs = 2;
__arg1 = _35reg2358;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2359 = primGenSym(intern("val"));
Obj val = _35reg2359;
Obj _35reg2360 = primCons(val, Nil);
pushCont(co, 12, _35clofun3246, 2, _35reg2360, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label14:
{
Obj _35val2373 = __arg1;
Obj _35reg2372= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2374 = primCons(_35val2373, Nil);
Obj _35reg2375 = primCons(_35reg2372, _35reg2374);
Obj _35reg2376 = primCons(intern("continuation"), _35reg2375);
Obj _35reg2377 = primCons(_35reg2376, Nil);
Obj _35reg2378 = primCons(exp, _35reg2377);
Obj _35reg2379 = primCons(intern("call"), _35reg2378);
__nargs = 2;
__arg1 = _35reg2379;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2341 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2341) {
pushCont(co, 13, _35clofun3246, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2368 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2368) {
Obj _35reg2369 = primCons(exp, Nil);
Obj _35reg2370 = primCons(intern("tailcall"), _35reg2369);
__nargs = 2;
__arg1 = _35reg2370;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3246) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2371 = primGenSym(intern("val"));
Obj val = _35reg2371;
Obj _35reg2372 = primCons(val, Nil);
pushCont(co, 14, _35clofun3246, 2, _35reg2372, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label16:
{
Obj _35val2339 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val2339;
Obj _35reg2340 = primCar(exp);
pushCont(co, 15, _35clofun3246, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#pair?"));
__arg1 = _35reg2340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35p1456 = __arg1;
Obj _35p1457 = __arg2;
Obj _35p1458 = __arg3;
Obj _35cc1459 = makeNative(10, _35clofun3246, 0, 3, _35p1456, _35p1457, _35p1458);
Obj _35reg2338 = primEQ(Nil, _35p1456);
if (True == _35reg2338) {
Obj ls = _35p1457;
Obj next = _35p1458;
pushCont(co, 16, _35clofun3246, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1459;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2384 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2385 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2384;
__arg2 = _35reg2385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1468 = makeNative(18, _35clofun3246, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2381 = primIsCons(closureRef(co, 1));
if (True == _35reg2381) {
Obj _35reg2382 = primCar(closureRef(co, 1));
Obj f = _35reg2382;
Obj _35reg2383 = primCdr(closureRef(co, 1));
Obj args = _35reg2383;
pushCont(co, 19, _35clofun3246, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3246) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3245(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1445 = makeNative(18, _35clofun3244, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2126 = primIsCons(closureRef(co, 1));
if (True == _35reg2126) {
Obj _35reg2127 = primCar(closureRef(co, 1));
Obj _35reg2128 = primEQ(intern("let"), _35reg2127);
if (True == _35reg2128) {
Obj _35reg2129 = primCdr(closureRef(co, 1));
Obj _35reg2130 = primIsCons(_35reg2129);
if (True == _35reg2130) {
Obj _35reg2131 = primCdr(closureRef(co, 1));
Obj _35reg2132 = primCar(_35reg2131);
Obj a = _35reg2132;
Obj _35reg2133 = primCdr(closureRef(co, 1));
Obj _35reg2134 = primCdr(_35reg2133);
Obj _35reg2135 = primIsCons(_35reg2134);
if (True == _35reg2135) {
Obj _35reg2136 = primCdr(closureRef(co, 1));
Obj _35reg2137 = primCdr(_35reg2136);
Obj _35reg2138 = primCar(_35reg2137);
Obj b = _35reg2138;
Obj _35reg2139 = primCdr(closureRef(co, 1));
Obj _35reg2140 = primCdr(_35reg2139);
Obj _35reg2141 = primCdr(_35reg2140);
Obj _35reg2142 = primIsCons(_35reg2141);
if (True == _35reg2142) {
Obj _35reg2143 = primCdr(closureRef(co, 1));
Obj _35reg2144 = primCdr(_35reg2143);
Obj _35reg2145 = primCdr(_35reg2144);
Obj _35reg2146 = primCar(_35reg2145);
Obj c = _35reg2146;
Obj _35reg2147 = primCdr(closureRef(co, 1));
Obj _35reg2148 = primCdr(_35reg2147);
Obj _35reg2149 = primCdr(_35reg2148);
Obj _35reg2150 = primCdr(_35reg2149);
Obj _35reg2151 = primEQ(Nil, _35reg2150);
if (True == _35reg2151) {
pushCont(co, 20, _35clofun3244, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2184 = __arg1;
Obj _35reg2182= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2185 = primCons(_35reg2182, _35val2184);
Obj _35reg2186 = primCons(intern("%closure"), _35reg2185);
__nargs = 2;
__arg1 = _35reg2186;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2183 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2182= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3245, 1, _35reg2182);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2183;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2179 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2180 = primCons(_35val2179, Nil);
Obj _35reg2181 = primCons(args, _35reg2180);
Obj _35reg2182 = primCons(intern("lambda"), _35reg2181);
pushCont(co, 2, _35clofun3245, 2, fvs1, _35reg2182);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2178 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2178;
pushCont(co, 3, _35clofun3245, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1444 = makeNative(0, _35clofun3245, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2158 = primIsCons(closureRef(co, 1));
if (True == _35reg2158) {
Obj _35reg2159 = primCar(closureRef(co, 1));
Obj _35reg2160 = primEQ(intern("lambda"), _35reg2159);
if (True == _35reg2160) {
Obj _35reg2161 = primCdr(closureRef(co, 1));
Obj _35reg2162 = primIsCons(_35reg2161);
if (True == _35reg2162) {
Obj _35reg2163 = primCdr(closureRef(co, 1));
Obj _35reg2164 = primCar(_35reg2163);
Obj args = _35reg2164;
Obj _35reg2165 = primCdr(closureRef(co, 1));
Obj _35reg2166 = primCdr(_35reg2165);
Obj _35reg2167 = primIsCons(_35reg2166);
if (True == _35reg2167) {
Obj _35reg2168 = primCdr(closureRef(co, 1));
Obj _35reg2169 = primCdr(_35reg2168);
Obj _35reg2170 = primCar(_35reg2169);
Obj body = _35reg2170;
Obj _35reg2171 = primCdr(closureRef(co, 1));
Obj _35reg2172 = primCdr(_35reg2171);
Obj _35reg2173 = primCdr(_35reg2172);
Obj _35reg2174 = primEQ(Nil, _35reg2173);
if (True == _35reg2174) {
Obj _35reg2175 = primCons(body, Nil);
Obj _35reg2176 = primCons(args, _35reg2175);
Obj _35reg2177 = primCons(intern("lambda"), _35reg2176);
pushCont(co, 4, _35clofun3245, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg2177;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2188 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val2188;
Obj _35reg2189 = primEQ(makeNumber(-1), pos);
if (True == _35reg2189) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2190 = primCons(pos, Nil);
Obj _35reg2191 = primCons(intern("%closure-ref"), _35reg2190);
__nargs = 2;
__arg1 = _35reg2191;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj _35cc1443 = makeNative(5, _35clofun3245, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2187 = primIsSymbol(var);
if (True == _35reg2187) {
pushCont(co, 6, _35clofun3245, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2192 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1442= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2192) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1442;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p1440 = __arg1;
Obj _35p1441 = __arg2;
Obj _35cc1442 = makeNative(7, _35clofun3245, 0, 2, _35p1440, _35p1441);
Obj __ = _35p1440;
Obj x = _35p1441;
pushCont(co, 8, _35clofun3245, 2, x, _35cc1442);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x = __arg1;
Obj _35reg2194 = primCons(x, Nil);
Obj _35reg2195 = primCons(intern("return"), _35reg2194);
__nargs = 2;
__arg1 = _35reg2195;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1455 = makeNative(11, _35clofun3245, 0, 0);
Obj _35reg2197 = primIsCons(closureRef(co, 0));
if (True == _35reg2197) {
Obj _35reg2198 = primCar(closureRef(co, 0));
Obj f = _35reg2198;
Obj _35reg2199 = primCdr(closureRef(co, 0));
Obj args = _35reg2199;
Obj next = closureRef(co, 1);
Obj _35reg2200 = primCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = _35reg2200;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2239 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2240 = primCons(_35val2239, Nil);
Obj _35reg2241 = primCons(args, _35reg2240);
Obj _35reg2242 = primCons(intern("lambda"), _35reg2241);
Obj _35reg2243 = primCons(_35reg2242, frees);
Obj _35reg2244 = primCons(intern("%closure"), _35reg2243);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1454 = makeNative(12, _35clofun3245, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2201 = primIsCons(closureRef(co, 0));
if (True == _35reg2201) {
Obj _35reg2202 = primCar(closureRef(co, 0));
Obj _35reg2203 = primEQ(intern("%closure"), _35reg2202);
if (True == _35reg2203) {
Obj _35reg2204 = primCdr(closureRef(co, 0));
Obj _35reg2205 = primIsCons(_35reg2204);
if (True == _35reg2205) {
Obj _35reg2206 = primCdr(closureRef(co, 0));
Obj _35reg2207 = primCar(_35reg2206);
Obj _35reg2208 = primIsCons(_35reg2207);
if (True == _35reg2208) {
Obj _35reg2209 = primCdr(closureRef(co, 0));
Obj _35reg2210 = primCar(_35reg2209);
Obj _35reg2211 = primCar(_35reg2210);
Obj _35reg2212 = primEQ(intern("lambda"), _35reg2211);
if (True == _35reg2212) {
Obj _35reg2213 = primCdr(closureRef(co, 0));
Obj _35reg2214 = primCar(_35reg2213);
Obj _35reg2215 = primCdr(_35reg2214);
Obj _35reg2216 = primIsCons(_35reg2215);
if (True == _35reg2216) {
Obj _35reg2217 = primCdr(closureRef(co, 0));
Obj _35reg2218 = primCar(_35reg2217);
Obj _35reg2219 = primCdr(_35reg2218);
Obj _35reg2220 = primCar(_35reg2219);
Obj args = _35reg2220;
Obj _35reg2221 = primCdr(closureRef(co, 0));
Obj _35reg2222 = primCar(_35reg2221);
Obj _35reg2223 = primCdr(_35reg2222);
Obj _35reg2224 = primCdr(_35reg2223);
Obj _35reg2225 = primIsCons(_35reg2224);
if (True == _35reg2225) {
Obj _35reg2226 = primCdr(closureRef(co, 0));
Obj _35reg2227 = primCar(_35reg2226);
Obj _35reg2228 = primCdr(_35reg2227);
Obj _35reg2229 = primCdr(_35reg2228);
Obj _35reg2230 = primCar(_35reg2229);
Obj body = _35reg2230;
Obj _35reg2231 = primCdr(closureRef(co, 0));
Obj _35reg2232 = primCar(_35reg2231);
Obj _35reg2233 = primCdr(_35reg2232);
Obj _35reg2234 = primCdr(_35reg2233);
Obj _35reg2235 = primCdr(_35reg2234);
Obj _35reg2236 = primEQ(Nil, _35reg2235);
if (True == _35reg2236) {
Obj _35reg2237 = primCdr(closureRef(co, 0));
Obj _35reg2238 = primCdr(_35reg2237);
Obj frees = _35reg2238;
Obj next = closureRef(co, 1);
pushCont(co, 13, _35clofun3245, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2271 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2272 = primCons(_35val2271, Nil);
Obj _35reg2273 = primCons(rb, _35reg2272);
Obj _35reg2274 = primCons(closureRef(co, 0), _35reg2273);
Obj _35reg2275 = primCons(intern("let"), _35reg2274);
__nargs = 2;
__arg1 = _35reg2275;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj rb = __arg1;
pushCont(co, 15, _35clofun3245, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc1453 = makeNative(14, _35clofun3245, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2245 = primIsCons(closureRef(co, 0));
if (True == _35reg2245) {
Obj _35reg2246 = primCar(closureRef(co, 0));
Obj _35reg2247 = primEQ(intern("let"), _35reg2246);
if (True == _35reg2247) {
Obj _35reg2248 = primCdr(closureRef(co, 0));
Obj _35reg2249 = primIsCons(_35reg2248);
if (True == _35reg2249) {
Obj _35reg2250 = primCdr(closureRef(co, 0));
Obj _35reg2251 = primCar(_35reg2250);
Obj a = _35reg2251;
Obj _35reg2252 = primCdr(closureRef(co, 0));
Obj _35reg2253 = primCdr(_35reg2252);
Obj _35reg2254 = primIsCons(_35reg2253);
if (True == _35reg2254) {
Obj _35reg2255 = primCdr(closureRef(co, 0));
Obj _35reg2256 = primCdr(_35reg2255);
Obj _35reg2257 = primCar(_35reg2256);
Obj b = _35reg2257;
Obj _35reg2258 = primCdr(closureRef(co, 0));
Obj _35reg2259 = primCdr(_35reg2258);
Obj _35reg2260 = primCdr(_35reg2259);
Obj _35reg2261 = primIsCons(_35reg2260);
if (True == _35reg2261) {
Obj _35reg2262 = primCdr(closureRef(co, 0));
Obj _35reg2263 = primCdr(_35reg2262);
Obj _35reg2264 = primCdr(_35reg2263);
Obj _35reg2265 = primCar(_35reg2264);
Obj c = _35reg2265;
Obj _35reg2266 = primCdr(closureRef(co, 0));
Obj _35reg2267 = primCdr(_35reg2266);
Obj _35reg2268 = primCdr(_35reg2267);
Obj _35reg2269 = primCdr(_35reg2268);
Obj _35reg2270 = primEQ(Nil, _35reg2269);
if (True == _35reg2270) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = b;
__arg2 = makeNative(16, _35clofun3245, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val2294 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2295 = primCons(_35val2294, Nil);
Obj _35reg2296 = primCons(ra, _35reg2295);
Obj _35reg2297 = primCons(intern("do"), _35reg2296);
__nargs = 2;
__arg1 = _35reg2297;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3245) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj ra = __arg1;
Obj _35reg2293 = primIsSymbol(ra);
if (True == _35reg2293) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, _35clofun3245, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1452 = makeNative(17, _35clofun3245, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2276 = primIsCons(closureRef(co, 0));
if (True == _35reg2276) {
Obj _35reg2277 = primCar(closureRef(co, 0));
Obj _35reg2278 = primEQ(intern("do"), _35reg2277);
if (True == _35reg2278) {
Obj _35reg2279 = primCdr(closureRef(co, 0));
Obj _35reg2280 = primIsCons(_35reg2279);
if (True == _35reg2280) {
Obj _35reg2281 = primCdr(closureRef(co, 0));
Obj _35reg2282 = primCar(_35reg2281);
Obj a = _35reg2282;
Obj _35reg2283 = primCdr(closureRef(co, 0));
Obj _35reg2284 = primCdr(_35reg2283);
Obj _35reg2285 = primIsCons(_35reg2284);
if (True == _35reg2285) {
Obj _35reg2286 = primCdr(closureRef(co, 0));
Obj _35reg2287 = primCdr(_35reg2286);
Obj _35reg2288 = primCar(_35reg2287);
Obj b = _35reg2288;
Obj _35reg2289 = primCdr(closureRef(co, 0));
Obj _35reg2290 = primCdr(_35reg2289);
Obj _35reg2291 = primCdr(_35reg2290);
Obj _35reg2292 = primEQ(Nil, _35reg2291);
if (True == _35reg2292) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(19, _35clofun3245, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1452;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1452;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1452;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1452;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1452;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3245) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3244(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1436 = makeNative(19, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1979 = primIsCons(closureRef(co, 0));
if (True == _35reg1979) {
Obj _35reg1980 = primCar(closureRef(co, 0));
Obj _35reg1981 = primEQ(intern("call"), _35reg1980);
if (True == _35reg1981) {
Obj _35reg1982 = primCdr(closureRef(co, 0));
Obj _35reg1983 = primIsCons(_35reg1982);
if (True == _35reg1983) {
Obj _35reg1984 = primCdr(closureRef(co, 0));
Obj _35reg1985 = primCar(_35reg1984);
Obj exp = _35reg1985;
Obj _35reg1986 = primCdr(closureRef(co, 0));
Obj _35reg1987 = primCdr(_35reg1986);
Obj _35reg1988 = primIsCons(_35reg1987);
if (True == _35reg1988) {
Obj _35reg1989 = primCdr(closureRef(co, 0));
Obj _35reg1990 = primCdr(_35reg1989);
Obj _35reg1991 = primCar(_35reg1990);
Obj cont = _35reg1991;
Obj _35reg1992 = primCdr(closureRef(co, 0));
Obj _35reg1993 = primCdr(_35reg1992);
Obj _35reg1994 = primCdr(_35reg1993);
Obj _35reg1995 = primEQ(Nil, _35reg1994);
if (True == _35reg1995) {
Obj _35reg1996 = primCons(cont, Nil);
Obj _35reg1997 = primCons(exp, _35reg1996);
pushCont(co, 20, _35clofun3243, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1997;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1436;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1436;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1436;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1436;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1436;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35cc1435 = makeNative(0, _35clofun3244, 0, 1, closureRef(co, 0));
Obj _35reg1999 = primIsCons(closureRef(co, 0));
if (True == _35reg1999) {
Obj _35reg2000 = primCar(closureRef(co, 0));
Obj _35reg2001 = primEQ(intern("return"), _35reg2000);
if (True == _35reg2001) {
Obj _35reg2002 = primCdr(closureRef(co, 0));
Obj _35reg2003 = primIsCons(_35reg2002);
if (True == _35reg2003) {
Obj _35reg2004 = primCdr(closureRef(co, 0));
Obj _35reg2005 = primCar(_35reg2004);
Obj x = _35reg2005;
Obj _35reg2006 = primCdr(closureRef(co, 0));
Obj _35reg2007 = primCdr(_35reg2006);
Obj _35reg2008 = primEQ(Nil, _35reg2007);
if (True == _35reg2008) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1434 = makeNative(1, _35clofun3244, 0, 1, closureRef(co, 0));
Obj _35reg2009 = primIsCons(closureRef(co, 0));
if (True == _35reg2009) {
Obj _35reg2010 = primCar(closureRef(co, 0));
Obj _35reg2011 = primEQ(intern("%closure"), _35reg2010);
if (True == _35reg2011) {
Obj _35reg2012 = primCdr(closureRef(co, 0));
Obj _35reg2013 = primIsCons(_35reg2012);
if (True == _35reg2013) {
Obj _35reg2014 = primCdr(closureRef(co, 0));
Obj _35reg2015 = primCar(_35reg2014);
Obj lam = _35reg2015;
Obj _35reg2016 = primCdr(closureRef(co, 0));
Obj _35reg2017 = primCdr(_35reg2016);
Obj more = _35reg2017;
Obj _35reg2018 = primCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg2018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2048 = __arg1;
Obj _35val2045= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = _35val2045;
__arg2 = _35val2048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2046 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2045= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2047 = primCons(a, Nil);
pushCont(co, 3, _35clofun3244, 1, _35val2045);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2046;
__arg2 = _35reg2047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2045 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun3244, 2, a, _35val2045);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1433 = makeNative(2, _35clofun3244, 0, 1, closureRef(co, 0));
Obj _35reg2019 = primIsCons(closureRef(co, 0));
if (True == _35reg2019) {
Obj _35reg2020 = primCar(closureRef(co, 0));
Obj _35reg2021 = primEQ(intern("let"), _35reg2020);
if (True == _35reg2021) {
Obj _35reg2022 = primCdr(closureRef(co, 0));
Obj _35reg2023 = primIsCons(_35reg2022);
if (True == _35reg2023) {
Obj _35reg2024 = primCdr(closureRef(co, 0));
Obj _35reg2025 = primCar(_35reg2024);
Obj a = _35reg2025;
Obj _35reg2026 = primCdr(closureRef(co, 0));
Obj _35reg2027 = primCdr(_35reg2026);
Obj _35reg2028 = primIsCons(_35reg2027);
if (True == _35reg2028) {
Obj _35reg2029 = primCdr(closureRef(co, 0));
Obj _35reg2030 = primCdr(_35reg2029);
Obj _35reg2031 = primCar(_35reg2030);
Obj b = _35reg2031;
Obj _35reg2032 = primCdr(closureRef(co, 0));
Obj _35reg2033 = primCdr(_35reg2032);
Obj _35reg2034 = primCdr(_35reg2033);
Obj _35reg2035 = primIsCons(_35reg2034);
if (True == _35reg2035) {
Obj _35reg2036 = primCdr(closureRef(co, 0));
Obj _35reg2037 = primCdr(_35reg2036);
Obj _35reg2038 = primCdr(_35reg2037);
Obj _35reg2039 = primCar(_35reg2038);
Obj c = _35reg2039;
Obj _35reg2040 = primCdr(closureRef(co, 0));
Obj _35reg2041 = primCdr(_35reg2040);
Obj _35reg2042 = primCdr(_35reg2041);
Obj _35reg2043 = primCdr(_35reg2042);
Obj _35reg2044 = primEQ(Nil, _35reg2043);
if (True == _35reg2044) {
pushCont(co, 5, _35clofun3244, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2068 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val2068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1432 = makeNative(6, _35clofun3244, 0, 1, closureRef(co, 0));
Obj _35reg2049 = primIsCons(closureRef(co, 0));
if (True == _35reg2049) {
Obj _35reg2050 = primCar(closureRef(co, 0));
Obj _35reg2051 = primEQ(intern("do"), _35reg2050);
if (True == _35reg2051) {
Obj _35reg2052 = primCdr(closureRef(co, 0));
Obj _35reg2053 = primIsCons(_35reg2052);
if (True == _35reg2053) {
Obj _35reg2054 = primCdr(closureRef(co, 0));
Obj _35reg2055 = primCar(_35reg2054);
Obj x = _35reg2055;
Obj _35reg2056 = primCdr(closureRef(co, 0));
Obj _35reg2057 = primCdr(_35reg2056);
Obj _35reg2058 = primIsCons(_35reg2057);
if (True == _35reg2058) {
Obj _35reg2059 = primCdr(closureRef(co, 0));
Obj _35reg2060 = primCdr(_35reg2059);
Obj _35reg2061 = primCar(_35reg2060);
Obj y = _35reg2061;
Obj _35reg2062 = primCdr(closureRef(co, 0));
Obj _35reg2063 = primCdr(_35reg2062);
Obj _35reg2064 = primCdr(_35reg2063);
Obj _35reg2065 = primEQ(Nil, _35reg2064);
if (True == _35reg2065) {
Obj _35reg2066 = primCons(y, Nil);
Obj _35reg2067 = primCons(x, _35reg2066);
pushCont(co, 7, _35clofun3244, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg2067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2098 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val2098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1431 = makeNative(8, _35clofun3244, 0, 1, closureRef(co, 0));
Obj _35reg2069 = primIsCons(closureRef(co, 0));
if (True == _35reg2069) {
Obj _35reg2070 = primCar(closureRef(co, 0));
Obj _35reg2071 = primEQ(intern("if"), _35reg2070);
if (True == _35reg2071) {
Obj _35reg2072 = primCdr(closureRef(co, 0));
Obj _35reg2073 = primIsCons(_35reg2072);
if (True == _35reg2073) {
Obj _35reg2074 = primCdr(closureRef(co, 0));
Obj _35reg2075 = primCar(_35reg2074);
Obj x = _35reg2075;
Obj _35reg2076 = primCdr(closureRef(co, 0));
Obj _35reg2077 = primCdr(_35reg2076);
Obj _35reg2078 = primIsCons(_35reg2077);
if (True == _35reg2078) {
Obj _35reg2079 = primCdr(closureRef(co, 0));
Obj _35reg2080 = primCdr(_35reg2079);
Obj _35reg2081 = primCar(_35reg2080);
Obj y = _35reg2081;
Obj _35reg2082 = primCdr(closureRef(co, 0));
Obj _35reg2083 = primCdr(_35reg2082);
Obj _35reg2084 = primCdr(_35reg2083);
Obj _35reg2085 = primIsCons(_35reg2084);
if (True == _35reg2085) {
Obj _35reg2086 = primCdr(closureRef(co, 0));
Obj _35reg2087 = primCdr(_35reg2086);
Obj _35reg2088 = primCdr(_35reg2087);
Obj _35reg2089 = primCar(_35reg2088);
Obj z = _35reg2089;
Obj _35reg2090 = primCdr(closureRef(co, 0));
Obj _35reg2091 = primCdr(_35reg2090);
Obj _35reg2092 = primCdr(_35reg2091);
Obj _35reg2093 = primCdr(_35reg2092);
Obj _35reg2094 = primEQ(Nil, _35reg2093);
if (True == _35reg2094) {
Obj _35reg2095 = primCons(z, Nil);
Obj _35reg2096 = primCons(y, _35reg2095);
Obj _35reg2097 = primCons(x, _35reg2096);
pushCont(co, 9, _35clofun3244, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg2097;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2116 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2116;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1430 = makeNative(10, _35clofun3244, 0, 1, closureRef(co, 0));
Obj _35reg2099 = primIsCons(closureRef(co, 0));
if (True == _35reg2099) {
Obj _35reg2100 = primCar(closureRef(co, 0));
Obj _35reg2101 = primEQ(intern("lambda"), _35reg2100);
if (True == _35reg2101) {
Obj _35reg2102 = primCdr(closureRef(co, 0));
Obj _35reg2103 = primIsCons(_35reg2102);
if (True == _35reg2103) {
Obj _35reg2104 = primCdr(closureRef(co, 0));
Obj _35reg2105 = primCar(_35reg2104);
Obj args = _35reg2105;
Obj _35reg2106 = primCdr(closureRef(co, 0));
Obj _35reg2107 = primCdr(_35reg2106);
Obj _35reg2108 = primIsCons(_35reg2107);
if (True == _35reg2108) {
Obj _35reg2109 = primCdr(closureRef(co, 0));
Obj _35reg2110 = primCdr(_35reg2109);
Obj _35reg2111 = primCar(_35reg2110);
Obj body = _35reg2111;
Obj _35reg2112 = primCdr(closureRef(co, 0));
Obj _35reg2113 = primCdr(_35reg2112);
Obj _35reg2114 = primCdr(_35reg2113);
Obj _35reg2115 = primEQ(Nil, _35reg2114);
if (True == _35reg2115) {
pushCont(co, 11, _35clofun3244, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc1429 = makeNative(12, _35clofun3244, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg2117 = primIsSymbol(x);
if (True == _35reg2117) {
Obj _35reg2118 = primCons(x, Nil);
__nargs = 2;
__arg1 = _35reg2118;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3244) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1429;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2119 = __arg1;
Obj _35cc1428= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2119) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3244) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1428;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p1427 = __arg1;
Obj _35cc1428 = makeNative(13, _35clofun3244, 0, 1, _35p1427);
Obj x = _35p1427;
pushCont(co, 14, _35clofun3244, 1, _35cc1428);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2124 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2125 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2124;
__arg2 = _35reg2125;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1446 = makeNative(16, _35clofun3244, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2121 = primIsCons(closureRef(co, 1));
if (True == _35reg2121) {
Obj _35reg2122 = primCar(closureRef(co, 1));
Obj f = _35reg2122;
Obj _35reg2123 = primCdr(closureRef(co, 1));
Obj args = _35reg2123;
pushCont(co, 17, _35clofun3244, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2153 = __arg1;
Obj _35val2152= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2154 = primCons(_35val2153, Nil);
Obj _35reg2155 = primCons(_35val2152, _35reg2154);
Obj _35reg2156 = primCons(a, _35reg2155);
Obj _35reg2157 = primCons(intern("let"), _35reg2156);
__nargs = 2;
__arg1 = _35reg2157;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3244) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2152 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 19, _35clofun3244, 2, _35val2152, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3244) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3243(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35p1410 = __arg1;
Obj _35p1411 = __arg2;
Obj _35cc1412 = makeNative(20, _35clofun3242, 0, 2, _35p1410, _35p1411);
Obj _35reg1882 = primEQ(Nil, _35p1410);
if (True == _35reg1882) {
Obj s2 = _35p1411;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1887 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1888 = primCons(x, _35val1887);
__nargs = 2;
__arg1 = _35reg1888;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35cc1419 = makeNative(1, _35clofun3243, 0, 0);
Obj _35reg1884 = primIsCons(closureRef(co, 0));
if (True == _35reg1884) {
Obj _35reg1885 = primCar(closureRef(co, 0));
Obj x = _35reg1885;
Obj _35reg1886 = primCdr(closureRef(co, 0));
Obj y = _35reg1886;
Obj s2 = closureRef(co, 1);
pushCont(co, 2, _35clofun3243, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1419;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1892 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1418= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1892) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1418 = makeNative(3, _35clofun3243, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1889 = primIsCons(closureRef(co, 0));
if (True == _35reg1889) {
Obj _35reg1890 = primCar(closureRef(co, 0));
Obj x = _35reg1890;
Obj _35reg1891 = primCdr(closureRef(co, 0));
Obj y = _35reg1891;
Obj s2 = closureRef(co, 1);
pushCont(co, 4, _35clofun3243, 3, y, s2, _35cc1418);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35p1415 = __arg1;
Obj _35p1416 = __arg2;
Obj _35cc1417 = makeNative(5, _35clofun3243, 0, 2, _35p1415, _35p1416);
Obj _35reg1893 = primEQ(Nil, _35p1415);
if (True == _35reg1893) {
Obj __ = _35p1416;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1417;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1426 = makeNative(7, _35clofun3243, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35cc1425 = makeNative(8, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1895 = primIsCons(closureRef(co, 0));
if (True == _35reg1895) {
Obj _35reg1896 = primCar(closureRef(co, 0));
Obj _35reg1897 = primEQ(intern("%closure-ref"), _35reg1896);
if (True == _35reg1897) {
Obj _35reg1898 = primCdr(closureRef(co, 0));
Obj _35reg1899 = primIsCons(_35reg1898);
if (True == _35reg1899) {
Obj _35reg1900 = primCdr(closureRef(co, 0));
Obj _35reg1901 = primCar(_35reg1900);
Obj __ = _35reg1901;
Obj _35reg1902 = primCdr(closureRef(co, 0));
Obj _35reg1903 = primCdr(_35reg1902);
Obj _35reg1904 = primEQ(Nil, _35reg1903);
if (True == _35reg1904) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1424 = makeNative(9, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1905 = primIsCons(closureRef(co, 0));
if (True == _35reg1905) {
Obj _35reg1906 = primCar(closureRef(co, 0));
Obj _35reg1907 = primEQ(intern("quote"), _35reg1906);
if (True == _35reg1907) {
Obj _35reg1908 = primCdr(closureRef(co, 0));
Obj _35reg1909 = primIsCons(_35reg1908);
if (True == _35reg1909) {
Obj _35reg1910 = primCdr(closureRef(co, 0));
Obj _35reg1911 = primCar(_35reg1910);
Obj x = _35reg1911;
Obj _35reg1912 = primCdr(closureRef(co, 0));
Obj _35reg1913 = primCdr(_35reg1912);
Obj _35reg1914 = primEQ(Nil, _35reg1913);
if (True == _35reg1914) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1423 = makeNative(10, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1915 = primIsCons(closureRef(co, 0));
if (True == _35reg1915) {
Obj _35reg1916 = primCar(closureRef(co, 0));
Obj _35reg1917 = primEQ(intern("%builtin"), _35reg1916);
if (True == _35reg1917) {
Obj _35reg1918 = primCdr(closureRef(co, 0));
Obj _35reg1919 = primIsCons(_35reg1918);
if (True == _35reg1919) {
Obj _35reg1920 = primCdr(closureRef(co, 0));
Obj _35reg1921 = primCar(_35reg1920);
Obj op = _35reg1921;
Obj _35reg1922 = primCdr(closureRef(co, 0));
Obj _35reg1923 = primCdr(_35reg1922);
Obj _35reg1924 = primEQ(Nil, _35reg1923);
if (True == _35reg1924) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1422 = makeNative(11, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1925 = primIsCons(closureRef(co, 0));
if (True == _35reg1925) {
Obj _35reg1926 = primCar(closureRef(co, 0));
Obj _35reg1927 = primEQ(intern("%global"), _35reg1926);
if (True == _35reg1927) {
Obj _35reg1928 = primCdr(closureRef(co, 0));
Obj _35reg1929 = primIsCons(_35reg1928);
if (True == _35reg1929) {
Obj _35reg1930 = primCdr(closureRef(co, 0));
Obj _35reg1931 = primCar(_35reg1930);
Obj x = _35reg1931;
Obj _35reg1932 = primCdr(closureRef(co, 0));
Obj _35reg1933 = primCdr(_35reg1932);
Obj _35reg1934 = primEQ(Nil, _35reg1933);
if (True == _35reg1934) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1422;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1422;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1422;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1422;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35p1420 = __arg1;
Obj _35cc1421 = makeNative(12, _35clofun3243, 0, 1, _35p1420);
Obj _35reg1935 = primIsCons(_35p1420);
if (True == _35reg1935) {
Obj _35reg1936 = primCar(_35p1420);
Obj _35reg1937 = primEQ(intern("%const"), _35reg1936);
if (True == _35reg1937) {
Obj _35reg1938 = primCdr(_35p1420);
Obj _35reg1939 = primIsCons(_35reg1938);
if (True == _35reg1939) {
Obj _35reg1940 = primCdr(_35p1420);
Obj _35reg1941 = primCar(_35reg1940);
Obj x = _35reg1941;
Obj _35reg1942 = primCdr(_35p1420);
Obj _35reg1943 = primCdr(_35reg1942);
Obj _35reg1944 = primEQ(Nil, _35reg1943);
if (True == _35reg1944) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3243) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1421;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1421;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1421;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1421;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1950 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1439 = makeNative(14, _35clofun3243, 0, 0);
Obj _35reg1946 = primIsCons(closureRef(co, 0));
if (True == _35reg1946) {
Obj _35reg1947 = primCar(closureRef(co, 0));
Obj f = _35reg1947;
Obj _35reg1948 = primCdr(closureRef(co, 0));
Obj args = _35reg1948;
Obj _35reg1949 = primCons(f, args);
pushCont(co, 15, _35clofun3243, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1949;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1968 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1968;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1438 = makeNative(16, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1951 = primIsCons(closureRef(co, 0));
if (True == _35reg1951) {
Obj _35reg1952 = primCar(closureRef(co, 0));
Obj _35reg1953 = primEQ(intern("continuation"), _35reg1952);
if (True == _35reg1953) {
Obj _35reg1954 = primCdr(closureRef(co, 0));
Obj _35reg1955 = primIsCons(_35reg1954);
if (True == _35reg1955) {
Obj _35reg1956 = primCdr(closureRef(co, 0));
Obj _35reg1957 = primCar(_35reg1956);
Obj arg = _35reg1957;
Obj _35reg1958 = primCdr(closureRef(co, 0));
Obj _35reg1959 = primCdr(_35reg1958);
Obj _35reg1960 = primIsCons(_35reg1959);
if (True == _35reg1960) {
Obj _35reg1961 = primCdr(closureRef(co, 0));
Obj _35reg1962 = primCdr(_35reg1961);
Obj _35reg1963 = primCar(_35reg1962);
Obj body = _35reg1963;
Obj _35reg1964 = primCdr(closureRef(co, 0));
Obj _35reg1965 = primCdr(_35reg1964);
Obj _35reg1966 = primCdr(_35reg1965);
Obj _35reg1967 = primEQ(Nil, _35reg1966);
if (True == _35reg1967) {
pushCont(co, 17, _35clofun3243, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc1437 = makeNative(18, _35clofun3243, 0, 1, closureRef(co, 0));
Obj _35reg1969 = primIsCons(closureRef(co, 0));
if (True == _35reg1969) {
Obj _35reg1970 = primCar(closureRef(co, 0));
Obj _35reg1971 = primEQ(intern("tailcall"), _35reg1970);
if (True == _35reg1971) {
Obj _35reg1972 = primCdr(closureRef(co, 0));
Obj _35reg1973 = primIsCons(_35reg1972);
if (True == _35reg1973) {
Obj _35reg1974 = primCdr(closureRef(co, 0));
Obj _35reg1975 = primCar(_35reg1974);
Obj exp = _35reg1975;
Obj _35reg1976 = primCdr(closureRef(co, 0));
Obj _35reg1977 = primCdr(_35reg1976);
Obj _35reg1978 = primEQ(Nil, _35reg1977);
if (True == _35reg1978) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1998 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1998;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3243) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3242(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1807 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun3241, 1, _35val1807);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1404 = makeNative(19, _35clofun3241, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1790 = primIsCons(closureRef(co, 3));
if (True == _35reg1790) {
Obj _35reg1791 = primCar(closureRef(co, 3));
Obj _35reg1792 = primEQ(intern("do"), _35reg1791);
if (True == _35reg1792) {
Obj _35reg1793 = primCdr(closureRef(co, 3));
Obj _35reg1794 = primIsCons(_35reg1793);
if (True == _35reg1794) {
Obj _35reg1795 = primCdr(closureRef(co, 3));
Obj _35reg1796 = primCar(_35reg1795);
Obj x = _35reg1796;
Obj _35reg1797 = primCdr(closureRef(co, 3));
Obj _35reg1798 = primCdr(_35reg1797);
Obj _35reg1799 = primIsCons(_35reg1798);
if (True == _35reg1799) {
Obj _35reg1800 = primCdr(closureRef(co, 3));
Obj _35reg1801 = primCdr(_35reg1800);
Obj _35reg1802 = primCar(_35reg1801);
Obj y = _35reg1802;
Obj _35reg1803 = primCdr(closureRef(co, 3));
Obj _35reg1804 = primCdr(_35reg1803);
Obj _35reg1805 = primCdr(_35reg1804);
Obj _35reg1806 = primEQ(Nil, _35reg1805);
if (True == _35reg1806) {
pushCont(co, 0, _35clofun3242, 4, env, ns, import, y);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val1817 = __arg1;
Obj _35reg1818 = primCons(intern("if"), _35val1817);
__nargs = 2;
__arg1 = _35reg1818;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val1816 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 2, _35clofun3242, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1816;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1403 = makeNative(1, _35clofun3242, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1812 = primIsCons(closureRef(co, 3));
if (True == _35reg1812) {
Obj _35reg1813 = primCar(closureRef(co, 3));
Obj _35reg1814 = primEQ(intern("if"), _35reg1813);
if (True == _35reg1814) {
Obj _35reg1815 = primCdr(closureRef(co, 3));
Obj args = _35reg1815;
pushCont(co, 3, _35clofun3242, 1, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1837 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1838 = primCons(_35val1837, Nil);
Obj _35reg1839 = primCons(args, _35reg1838);
Obj _35reg1840 = primCons(intern("lambda"), _35reg1839);
__nargs = 2;
__arg1 = _35reg1840;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val1836 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 5, _35clofun3242, 1, args);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35val1836;
__arg2 = ns;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1402 = makeNative(4, _35clofun3242, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1819 = primIsCons(closureRef(co, 3));
if (True == _35reg1819) {
Obj _35reg1820 = primCar(closureRef(co, 3));
Obj _35reg1821 = primEQ(intern("lambda"), _35reg1820);
if (True == _35reg1821) {
Obj _35reg1822 = primCdr(closureRef(co, 3));
Obj _35reg1823 = primIsCons(_35reg1822);
if (True == _35reg1823) {
Obj _35reg1824 = primCdr(closureRef(co, 3));
Obj _35reg1825 = primCar(_35reg1824);
Obj args = _35reg1825;
Obj _35reg1826 = primCdr(closureRef(co, 3));
Obj _35reg1827 = primCdr(_35reg1826);
Obj _35reg1828 = primIsCons(_35reg1827);
if (True == _35reg1828) {
Obj _35reg1829 = primCdr(closureRef(co, 3));
Obj _35reg1830 = primCdr(_35reg1829);
Obj _35reg1831 = primCar(_35reg1830);
Obj body = _35reg1831;
Obj _35reg1832 = primCdr(closureRef(co, 3));
Obj _35reg1833 = primCdr(_35reg1832);
Obj _35reg1834 = primCdr(_35reg1833);
Obj _35reg1835 = primEQ(Nil, _35reg1834);
if (True == _35reg1835) {
pushCont(co, 6, _35clofun3242, 4, ns, import, body, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1843 = __arg1;
Obj _35reg1844 = primCons(_35val1843, Nil);
Obj _35reg1845 = primCons(intern("%global"), _35reg1844);
__nargs = 2;
__arg1 = _35reg1845;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val1842 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1842) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 8, _35clofun3242, 0);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#lookup-var"));
__arg1 = x;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1401 = makeNative(7, _35clofun3242, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj _35reg1841 = primIsSymbol(x);
if (True == _35reg1841) {
pushCont(co, 9, _35clofun3242, 3, x, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1400 = makeNative(10, _35clofun3242, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj _35reg1846 = primIsCons(closureRef(co, 3));
if (True == _35reg1846) {
Obj _35reg1847 = primCar(closureRef(co, 3));
Obj _35reg1848 = primEQ(intern("quote"), _35reg1847);
if (True == _35reg1848) {
Obj _35reg1849 = primCdr(closureRef(co, 3));
Obj _35reg1850 = primIsCons(_35reg1849);
if (True == _35reg1850) {
Obj _35reg1851 = primCdr(closureRef(co, 3));
Obj _35reg1852 = primCar(_35reg1851);
Obj x = _35reg1852;
Obj _35reg1853 = primCdr(closureRef(co, 3));
Obj _35reg1854 = primCdr(_35reg1853);
Obj _35reg1855 = primEQ(Nil, _35reg1854);
if (True == _35reg1855) {
Obj _35reg1856 = primCons(x, Nil);
Obj _35reg1857 = primCons(intern("%const"), _35reg1856);
__nargs = 2;
__arg1 = _35reg1857;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1867 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1399= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1867) {
if (True == True) {
Obj _35reg1868 = primCons(x, Nil);
Obj _35reg1869 = primCons(intern("%const"), _35reg1868);
__nargs = 2;
__arg1 = _35reg1869;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1870 = primCons(x, Nil);
Obj _35reg1871 = primCons(intern("%const"), _35reg1870);
__nargs = 2;
__arg1 = _35reg1871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label13:
{
Obj _35val1864 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1399= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1864) {
if (True == True) {
Obj _35reg1865 = primCons(x, Nil);
Obj _35reg1866 = primCons(intern("%const"), _35reg1865);
__nargs = 2;
__arg1 = _35reg1866;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 12, _35clofun3242, 2, x, _35cc1399);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1858 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1399= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1858) {
if (True == True) {
Obj _35reg1859 = primCons(x, Nil);
Obj _35reg1860 = primCons(intern("%const"), _35reg1859);
__nargs = 2;
__arg1 = _35reg1860;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg1861 = primIsString(x);
if (True == _35reg1861) {
if (True == True) {
Obj _35reg1862 = primCons(x, Nil);
Obj _35reg1863 = primCons(intern("%const"), _35reg1862);
__nargs = 2;
__arg1 = _35reg1863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 13, _35clofun3242, 2, x, _35cc1399);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label15:
{
Obj _35p1395 = __arg1;
Obj _35p1396 = __arg2;
Obj _35p1397 = __arg3;
Obj _35p1398 = co->args[4];
Obj _35cc1399 = makeNative(11, _35clofun3242, 0, 4, _35p1395, _35p1396, _35p1397, _35p1398);
Obj __ = _35p1395;
__ = _35p1396;
__ = _35p1397;
Obj x = _35p1398;
pushCont(co, 14, _35clofun3242, 2, x, _35cc1399);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1876 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1877 = primCons(x, _35val1876);
__nargs = 2;
__arg1 = _35reg1877;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3242) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc1414 = makeNative(16, _35clofun3242, 0, 0);
Obj _35reg1873 = primIsCons(closureRef(co, 0));
if (True == _35reg1873) {
Obj _35reg1874 = primCar(closureRef(co, 0));
Obj x = _35reg1874;
Obj _35reg1875 = primCdr(closureRef(co, 0));
Obj y = _35reg1875;
Obj s2 = closureRef(co, 1);
pushCont(co, 17, _35clofun3242, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1414;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val1881 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1413= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1881) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1413 = makeNative(18, _35clofun3242, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1878 = primIsCons(closureRef(co, 0));
if (True == _35reg1878) {
Obj _35reg1879 = primCar(closureRef(co, 0));
Obj x = _35reg1879;
Obj _35reg1880 = primCdr(closureRef(co, 0));
Obj y = _35reg1880;
Obj s2 = closureRef(co, 1);
pushCont(co, 19, _35clofun3242, 3, y, s2, _35cc1413);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3242) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3241(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1394 = makeNative(13, _35clofun3240, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj _35reg1672 = primIsCons(closureRef(co, 2));
if (True == _35reg1672) {
Obj _35reg1673 = primCar(closureRef(co, 2));
Obj import = _35reg1673;
Obj _35reg1674 = primCdr(closureRef(co, 2));
Obj more = _35reg1674;
pushCont(co, 20, _35clofun3240, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35p1390 = __arg1;
Obj _35p1391 = __arg2;
Obj _35p1392 = __arg3;
Obj _35cc1393 = makeNative(0, _35clofun3241, 0, 3, _35p1390, _35p1391, _35p1392);
Obj s = _35p1390;
Obj ns = _35p1391;
Obj _35reg1682 = primEQ(Nil, _35p1392);
if (True == _35reg1682) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#var-with-ns"));
__arg1 = s;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1393;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1684 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1684;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc1409 = makeNative(2, _35clofun3241, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj ls = closureRef(co, 3);
pushCont(co, 3, _35clofun3241, 1, ls);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1695 = __arg1;
Obj _35reg1693= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1696 = primCons(_35reg1693, _35val1695);
__nargs = 2;
__arg1 = _35reg1696;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3241) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val1694 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1693= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3241, 1, _35reg1693);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1694;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val1701 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1702 = primCons(_35val1701, Nil);
Obj _35reg1703 = primCons(tmp, _35reg1702);
Obj _35reg1704 = primCons(intern("lambda"), _35reg1703);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = _35reg1704;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1699 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj tmp = _35val1699;
Obj _35reg1700 = primCons(op, args);
pushCont(co, 7, _35clofun3241, 4, tmp, env, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#append"));
__arg1 = _35reg1700;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1690 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj provided = _35val1690;
Obj _35reg1691 = primEQ(required, provided);
if (True == _35reg1691) {
Obj _35reg1692 = primCons(op, Nil);
Obj _35reg1693 = primCons(intern("%builtin"), _35reg1692);
pushCont(co, 6, _35clofun3241, 2, args, _35reg1693);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1697 = primGT(required, provided);
if (True == _35reg1697) {
Obj _35reg1698 = primSub(required, provided);
pushCont(co, 8, _35clofun3241, 5, op, args, env, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg1698;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj _35val1689 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj required = _35val1689;
pushCont(co, 9, _35clofun3241, 6, required, op, args, env, ns, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1688 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35cc1408= co->ctx.stk.stack[co->ctx.stk.base + 5];
if (True == _35val1688) {
pushCont(co, 10, _35clofun3241, 5, op, args, env, ns, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1408 = makeNative(4, _35clofun3241, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1685 = primIsCons(closureRef(co, 3));
if (True == _35reg1685) {
Obj _35reg1686 = primCar(closureRef(co, 3));
Obj op = _35reg1686;
Obj _35reg1687 = primCdr(closureRef(co, 3));
Obj args = _35reg1687;
pushCont(co, 11, _35clofun3241, 6, op, args, env, ns, import, _35cc1408);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1727 = __arg1;
Obj _35reg1726= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1724= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1728 = primCons(_35val1727, Nil);
Obj _35reg1729 = primCons(_35reg1726, _35reg1728);
Obj _35reg1730 = primCons(_35reg1724, _35reg1729);
__nargs = 2;
__arg1 = _35reg1730;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3241) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35val1722 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj var1 = _35val1722;
Obj _35reg1723 = primCons(intern("set"), Nil);
Obj _35reg1724 = primCons(intern("%builtin"), _35reg1723);
Obj _35reg1725 = primCons(var1, Nil);
Obj _35reg1726 = primCons(intern("%const"), _35reg1725);
pushCont(co, 13, _35clofun3241, 2, _35reg1726, _35reg1724);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1407 = makeNative(12, _35clofun3241, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1705 = primIsCons(closureRef(co, 3));
if (True == _35reg1705) {
Obj _35reg1706 = primCar(closureRef(co, 3));
Obj _35reg1707 = primEQ(intern("def"), _35reg1706);
if (True == _35reg1707) {
Obj _35reg1708 = primCdr(closureRef(co, 3));
Obj _35reg1709 = primIsCons(_35reg1708);
if (True == _35reg1709) {
Obj _35reg1710 = primCdr(closureRef(co, 3));
Obj _35reg1711 = primCar(_35reg1710);
Obj var = _35reg1711;
Obj _35reg1712 = primCdr(closureRef(co, 3));
Obj _35reg1713 = primCdr(_35reg1712);
Obj _35reg1714 = primIsCons(_35reg1713);
if (True == _35reg1714) {
Obj _35reg1715 = primCdr(closureRef(co, 3));
Obj _35reg1716 = primCdr(_35reg1715);
Obj _35reg1717 = primCar(_35reg1716);
Obj val = _35reg1717;
Obj _35reg1718 = primCdr(closureRef(co, 3));
Obj _35reg1719 = primCdr(_35reg1718);
Obj _35reg1720 = primCdr(_35reg1719);
Obj _35reg1721 = primEQ(Nil, _35reg1720);
if (True == _35reg1721) {
pushCont(co, 14, _35clofun3241, 4, env, ns, import, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#var-with-ns"));
__arg1 = var;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc1406 = makeNative(15, _35clofun3241, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj _35reg1731 = primIsCons(closureRef(co, 3));
if (True == _35reg1731) {
Obj _35reg1732 = primCar(closureRef(co, 3));
Obj _35reg1733 = primEQ(intern("ns"), _35reg1732);
if (True == _35reg1733) {
Obj _35reg1734 = primCdr(closureRef(co, 3));
Obj _35reg1735 = primIsCons(_35reg1734);
if (True == _35reg1735) {
Obj _35reg1736 = primCdr(closureRef(co, 3));
Obj _35reg1737 = primCar(_35reg1736);
Obj path = _35reg1737;
Obj _35reg1738 = primCdr(closureRef(co, 3));
Obj _35reg1739 = primCdr(_35reg1738);
Obj _35reg1740 = primIsCons(_35reg1739);
if (True == _35reg1740) {
Obj _35reg1741 = primCdr(closureRef(co, 3));
Obj _35reg1742 = primCdr(_35reg1741);
Obj _35reg1743 = primCar(_35reg1742);
Obj import = _35reg1743;
Obj _35reg1744 = primCdr(closureRef(co, 3));
Obj _35reg1745 = primCdr(_35reg1744);
Obj _35reg1746 = primCdr(_35reg1745);
Obj _35reg1747 = primIsCons(_35reg1746);
if (True == _35reg1747) {
Obj _35reg1748 = primCdr(closureRef(co, 3));
Obj _35reg1749 = primCdr(_35reg1748);
Obj _35reg1750 = primCdr(_35reg1749);
Obj _35reg1751 = primCar(_35reg1750);
Obj body = _35reg1751;
Obj _35reg1752 = primCdr(closureRef(co, 3));
Obj _35reg1753 = primCdr(_35reg1752);
Obj _35reg1754 = primCdr(_35reg1753);
Obj _35reg1755 = primCdr(_35reg1754);
Obj _35reg1756 = primEQ(Nil, _35reg1755);
if (True == _35reg1756) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = path;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1785 = __arg1;
Obj _35val1783= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1786 = primCons(_35val1785, Nil);
Obj _35reg1787 = primCons(_35val1783, _35reg1786);
Obj _35reg1788 = primCons(a, _35reg1787);
Obj _35reg1789 = primCons(intern("let"), _35reg1788);
__nargs = 2;
__arg1 = _35reg1789;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3241) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1783 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg1784 = primCons(a, env);
pushCont(co, 17, _35clofun3241, 2, _35val1783, a);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35reg1784;
__arg2 = ns;
__arg3 = import;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1405 = makeNative(16, _35clofun3241, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1757 = primIsCons(closureRef(co, 3));
if (True == _35reg1757) {
Obj _35reg1758 = primCar(closureRef(co, 3));
Obj _35reg1759 = primEQ(intern("let"), _35reg1758);
if (True == _35reg1759) {
Obj _35reg1760 = primCdr(closureRef(co, 3));
Obj _35reg1761 = primIsCons(_35reg1760);
if (True == _35reg1761) {
Obj _35reg1762 = primCdr(closureRef(co, 3));
Obj _35reg1763 = primCar(_35reg1762);
Obj a = _35reg1763;
Obj _35reg1764 = primCdr(closureRef(co, 3));
Obj _35reg1765 = primCdr(_35reg1764);
Obj _35reg1766 = primIsCons(_35reg1765);
if (True == _35reg1766) {
Obj _35reg1767 = primCdr(closureRef(co, 3));
Obj _35reg1768 = primCdr(_35reg1767);
Obj _35reg1769 = primCar(_35reg1768);
Obj b = _35reg1769;
Obj _35reg1770 = primCdr(closureRef(co, 3));
Obj _35reg1771 = primCdr(_35reg1770);
Obj _35reg1772 = primCdr(_35reg1771);
Obj _35reg1773 = primIsCons(_35reg1772);
if (True == _35reg1773) {
Obj _35reg1774 = primCdr(closureRef(co, 3));
Obj _35reg1775 = primCdr(_35reg1774);
Obj _35reg1776 = primCdr(_35reg1775);
Obj _35reg1777 = primCar(_35reg1776);
Obj c = _35reg1777;
Obj _35reg1778 = primCdr(closureRef(co, 3));
Obj _35reg1779 = primCdr(_35reg1778);
Obj _35reg1780 = primCdr(_35reg1779);
Obj _35reg1781 = primCdr(_35reg1780);
Obj _35reg1782 = primEQ(Nil, _35reg1781);
if (True == _35reg1782) {
pushCont(co, 18, _35clofun3241, 5, env, ns, import, c, a);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3241) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1808 = __arg1;
Obj _35val1807= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1809 = primCons(_35val1808, Nil);
Obj _35reg1810 = primCons(_35val1807, _35reg1809);
Obj _35reg1811 = primCons(intern("do"), _35reg1810);
__nargs = 2;
__arg1 = _35reg1811;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3241) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3240(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1655 = __arg1;
Obj find = _35val1655;
pushCont(co, 20, _35clofun3239, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
pushCont(co, 0, _35clofun3240, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1659 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1659) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3240) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1658 = __arg1;
Obj find = _35val1658;
pushCont(co, 2, _35clofun3240, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
pushCont(co, 3, _35clofun3240, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1389 = makeNative(5, _35clofun3240, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg1661 = primSub(n, makeNumber(1));
Obj _35reg1662 = primGenSym(intern("tmp"));
Obj _35reg1663 = primCons(_35reg1662, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg1661;
__arg2 = _35reg1663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p1386 = __arg1;
Obj _35p1387 = __arg2;
Obj _35cc1388 = makeNative(6, _35clofun3240, 0, 2, _35p1386, _35p1387);
Obj _35reg1664 = primEQ(makeNumber(0), _35p1386);
if (True == _35reg1664) {
Obj res = _35p1387;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3240) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1388;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1670 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1670;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1669 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun3240, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = ns;
__arg2 = _35val1669;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1668 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 9, _35clofun3240, 1, ns);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val1668;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1667 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1667) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3240) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 10, _35clofun3240, 1, ns);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _35reg1666 = primEQ(ns, makeCString(""));
if (True == _35reg1666) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3240) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 11, _35clofun3240, 2, var, ns);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal#symbol-cooked?"));
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1681 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1681;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1680 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 14, _35clofun3240, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = import;
__arg2 = _35val1680;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1679 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun3240, 1, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val1679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1678 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1678) {
pushCont(co, 16, _35clofun3240, 1, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val1677 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj export = _35val1677;
pushCont(co, 17, _35clofun3240, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = s;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1676 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3240, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#value-or"));
__arg1 = _35val1676;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1675 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3240, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1675;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3240) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3239(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1370 = makeNative(0, _35clofun3239, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg1543 = primIsCons(closureRef(co, 1));
if (True == _35reg1543) {
Obj _35reg1544 = primCar(closureRef(co, 1));
Obj __ = _35reg1544;
Obj _35reg1545 = primCdr(closureRef(co, 1));
Obj y = _35reg1545;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1370;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1369 = makeNative(1, _35clofun3239, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg1546 = primIsCons(closureRef(co, 1));
if (True == _35reg1546) {
Obj _35reg1547 = primCar(closureRef(co, 1));
Obj _35reg1548 = primIsCons(_35reg1547);
if (True == _35reg1548) {
Obj _35reg1549 = primCar(closureRef(co, 1));
Obj _35reg1550 = primCar(_35reg1549);
Obj x = _35reg1550;
Obj _35reg1551 = primCar(closureRef(co, 1));
Obj _35reg1552 = primCdr(_35reg1551);
Obj y = _35reg1552;
Obj _35reg1553 = primCdr(closureRef(co, 1));
Obj __ = _35reg1553;
Obj _35reg1554 = primEQ(var, x);
if (True == _35reg1554) {
Obj _35reg1555 = primCons(x, y);
__nargs = 2;
__arg1 = _35reg1555;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35p1366 = __arg1;
Obj _35p1367 = __arg2;
Obj _35cc1368 = makeNative(2, _35clofun3239, 0, 2, _35p1366, _35p1367);
Obj var = _35p1366;
Obj _35reg1556 = primEQ(Nil, _35p1367);
if (True == _35reg1556) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1561 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = f;
__arg2 = _35val1561;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1375 = makeNative(4, _35clofun3239, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg1558 = primIsCons(closureRef(co, 2));
if (True == _35reg1558) {
Obj _35reg1559 = primCar(closureRef(co, 2));
Obj x = _35reg1559;
Obj _35reg1560 = primCdr(closureRef(co, 2));
Obj y = _35reg1560;
pushCont(co, 5, _35clofun3239, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1371 = __arg1;
Obj _35p1372 = __arg2;
Obj _35p1373 = __arg3;
Obj _35cc1374 = makeNative(6, _35clofun3239, 0, 3, _35p1371, _35p1372, _35p1373);
Obj f = _35p1371;
Obj acc = _35p1372;
Obj _35reg1562 = primEQ(Nil, _35p1373);
if (True == _35reg1562) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1374;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1381 = makeNative(8, _35clofun3239, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1564 = primIsCons(closureRef(co, 2));
if (True == _35reg1564) {
Obj _35reg1565 = primCar(closureRef(co, 2));
Obj a = _35reg1565;
Obj _35reg1566 = primCdr(closureRef(co, 2));
Obj b = _35reg1566;
Obj _35reg1567 = primAdd(pos, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#pos-in-list0"));
__arg1 = _35reg1567;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1380 = makeNative(9, _35clofun3239, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1568 = primIsCons(closureRef(co, 2));
if (True == _35reg1568) {
Obj _35reg1569 = primCar(closureRef(co, 2));
Obj a = _35reg1569;
Obj _35reg1570 = primCdr(closureRef(co, 2));
Obj b = _35reg1570;
Obj _35reg1571 = primEQ(x, a);
if (True == _35reg1571) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1376 = __arg1;
Obj _35p1377 = __arg2;
Obj _35p1378 = __arg3;
Obj _35cc1379 = makeNative(10, _35clofun3239, 0, 3, _35p1376, _35p1377, _35p1378);
Obj __ = _35p1376;
Obj x = _35p1377;
Obj _35reg1572 = primEQ(Nil, _35p1378);
if (True == _35reg1572) {
__nargs = 2;
__arg1 = makeNumber(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1379;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj x = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#pos-in-list0"));
__arg1 = makeNumber(0);
__arg2 = x;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1578 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1579 = primLT(_35val1578, makeNumber(0));
if (True == _35reg1579) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj _35cc1385 = makeNative(13, _35clofun3239, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg1575 = primIsCons(closureRef(co, 1));
if (True == _35reg1575) {
Obj _35reg1576 = primCar(closureRef(co, 1));
Obj hd = _35reg1576;
Obj _35reg1577 = primCdr(closureRef(co, 1));
Obj tl = _35reg1577;
pushCont(co, 14, _35clofun3239, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1382 = __arg1;
Obj _35p1383 = __arg2;
Obj _35cc1384 = makeNative(15, _35clofun3239, 0, 2, _35p1382, _35p1383);
Obj x = _35p1382;
Obj _35reg1580 = primEQ(Nil, _35p1383);
if (True == _35reg1580) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1652 = __arg1;
Obj _35reg1653 = primNot(_35val1652);
__nargs = 2;
__arg1 = _35reg1653;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1651 = __arg1;
pushCont(co, 17, _35clofun3239, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = _35val1651;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
pushCont(co, 18, _35clofun3239, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1656 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1656) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3239) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3239) { co->ctx.pc = ps; goto fail; };
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

