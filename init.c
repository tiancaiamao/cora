#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun1020(struct Cora* co);
void _35clofun1019(struct Cora* co);
void _35clofun1018(struct Cora* co);
void _35clofun1017(struct Cora* co);
void _35clofun1016(struct Cora* co);
void _35clofun1015(struct Cora* co);
void _35clofun1014(struct Cora* co);
void _35clofun1013(struct Cora* co);
void _35clofun1012(struct Cora* co);
void _35clofun1011(struct Cora* co);
void _35clofun1010(struct Cora* co);


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
Obj _35reg39 = primSet(intern("null?"), makeNative(0, _35clofun1010, 1, 0));
Obj _35reg42 = primSet(intern("cadr"), makeNative(1, _35clofun1010, 1, 0));
Obj _35reg45 = primSet(intern("caar"), makeNative(2, _35clofun1010, 1, 0));
Obj _35reg48 = primSet(intern("cdar"), makeNative(3, _35clofun1010, 1, 0));
Obj _35reg51 = primSet(intern("cddr"), makeNative(4, _35clofun1010, 1, 0));
Obj _35reg55 = primSet(intern("caddr"), makeNative(5, _35clofun1010, 1, 0));
Obj _35reg60 = primSet(intern("cadddr"), makeNative(6, _35clofun1010, 1, 0));
Obj _35reg64 = primSet(intern("cdddr"), makeNative(7, _35clofun1010, 1, 0));
Obj _35reg72 = primSet(intern("rcons"), makeNative(9, _35clofun1010, 1, 0));
Obj _35reg74 = primSet(intern("pair?"), makeNative(10, _35clofun1010, 1, 0));
Obj _35reg79 = primSet(intern("cora/init.reverse-h"), makeNative(11, _35clofun1010, 2, 0));
pushCont(co, 1, _35clofun1020, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.reverse-h"));
__arg1 = Nil;
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

void _35clofun1020(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val141 = __arg1;
pushCont(co, 20, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(9, _35clofun1011, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1020) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val80 = __arg1;
Obj _35reg81 = primSet(intern("reverse"), _35val80);
Obj _35reg87 = primSet(intern("map-h"), makeNative(13, _35clofun1010, 3, 0));
Obj _35reg88 = primSet(intern("map"), makeNative(14, _35clofun1010, 2, 0));
Obj _35reg89 = primSet(intern("*macros*"), Nil);
Obj _35reg90 = primGenSym(intern("protect"));
Obj _35reg91 = primSet(intern("*protect-symbol*"), _35reg90);
Obj _35reg93 = primSet(intern("cora/init.protect"), makeNative(15, _35clofun1010, 1, 0));
Obj _35reg97 = primSet(intern("cora/init.add-to-*macros*"), makeNative(16, _35clofun1010, 2, 0));
Obj _35reg110 = primSet(intern("cora/init.macroexpand1-h"), makeNative(18, _35clofun1010, 2, 0));
Obj _35reg111 = primSet(intern("cora/init.macroexpand1"), makeNative(19, _35clofun1010, 1, 0));
Obj _35reg128 = primSet(intern("cora/init.macroexpand-boot"), makeNative(4, _35clofun1011, 1, 0));
Obj _35reg129 = primSet(intern("macroexpand"), globalRef(intern("cora/init.macroexpand-boot")));
Obj _35reg140 = primSet(intern("defmacro-macro"), makeNative(8, _35clofun1011, 1, 0));
pushCont(co, 0, _35clofun1020, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1020) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1019(struct Cora* co){
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
Obj _35reg983 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-begin"));
__arg1 = _35reg983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc37 = makeNative(1, _35clofun1019, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1019) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val989 = __arg1;
Obj _35reg990 = primCons(intern("list"), _35val989);
__nargs = 2;
__arg1 = _35reg990;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1019) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc36 = makeNative(2, _35clofun1019, 0, 1, closureRef(co, 0));
Obj _35reg985 = primIsCons(closureRef(co, 0));
if (True == _35reg985) {
Obj _35reg986 = primCar(closureRef(co, 0));
Obj x = _35reg986;
Obj _35reg987 = primCdr(closureRef(co, 0));
Obj more = _35reg987;
Obj _35reg988 = primCons(x, more);
pushCont(co, 3, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.rewrite-backquote"));
__arg2 = _35reg988;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc36;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc35 = makeNative(4, _35clofun1019, 0, 1, closureRef(co, 0));
Obj _35reg991 = primIsCons(closureRef(co, 0));
if (True == _35reg991) {
Obj _35reg992 = primCar(closureRef(co, 0));
Obj _35reg993 = primEQ(intern("unquote"), _35reg992);
if (True == _35reg993) {
Obj _35reg994 = primCdr(closureRef(co, 0));
Obj _35reg995 = primIsCons(_35reg994);
if (True == _35reg995) {
Obj _35reg996 = primCdr(closureRef(co, 0));
Obj _35reg997 = primCar(_35reg996);
Obj x = _35reg997;
Obj _35reg998 = primCdr(closureRef(co, 0));
Obj _35reg999 = primCdr(_35reg998);
Obj _35reg1000 = primEQ(Nil, _35reg999);
if (True == _35reg1000) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1019) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35p33 = __arg1;
Obj _35cc34 = makeNative(5, _35clofun1019, 0, 1, _35p33);
Obj x = _35p33;
Obj _35reg1001 = primIsSymbol(x);
if (True == _35reg1001) {
Obj _35reg1002 = primCons(x, Nil);
Obj _35reg1003 = primCons(intern("quote"), _35reg1002);
__nargs = 2;
__arg1 = _35reg1003;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1019) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc34;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val1005 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-backquote"));
__arg1 = _35val1005;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun1019, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj filename = __arg1;
Obj pkg = __arg2;
Obj _35reg1007 = primCons(intern("fake"), Nil);
Obj _35reg1008 = primCons(intern("succ"), _35reg1007);
__nargs = 2;
__arg1 = _35reg1008;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1019) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val1006 = __arg1;
Obj _35reg1009 = primSet(intern("typechecker"), makeNative(9, _35clofun1019, 2, 0));
__nargs = 2;
__arg1 = _35reg1009;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1019) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val984 = __arg1;
Obj _35reg1004 = primSet(intern("cora/init.rewrite-backquote"), makeNative(6, _35clofun1019, 1, 0));
pushCont(co, 10, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(8, _35clofun1019, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val535 = __arg1;
Obj _35reg798 = primSet(intern("cora/init.propagate-boolean0"), makeNative(11, _35clofun1017, 1, 0));
Obj _35reg956 = primSet(intern("cora/init.propagate-boolean"), makeNative(13, _35clofun1018, 1, 0));
Obj _35reg958 = primSet(intern("macroexpand"), makeNative(15, _35clofun1018, 1, 0));
Obj _35reg982 = primSet(intern("cora/init.rewrite-begin"), makeNative(20, _35clofun1018, 1, 0));
pushCont(co, 11, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(0, _35clofun1019, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val427 = __arg1;
Obj _35reg479 = primSet(intern("cora/init.extract-rules1"), makeNative(15, _35clofun1015, 3, 0));
Obj _35reg480 = primSet(intern("cora/init.extract-rules"), makeNative(16, _35clofun1015, 1, 0));
Obj _35reg485 = primSet(intern("cora/init.rules-patterns"), makeNative(19, _35clofun1015, 2, 0));
Obj _35reg489 = primSet(intern("cora/init.length-h"), makeNative(20, _35clofun1015, 2, 0));
Obj _35reg490 = primSet(intern("length"), makeNative(0, _35clofun1016, 1, 0));
Obj _35reg498 = primSet(intern("cora/init.filter-h"), makeNative(2, _35clofun1016, 3, 0));
Obj _35reg499 = primSet(intern("filter"), makeNative(3, _35clofun1016, 2, 0));
Obj _35reg505 = primSet(intern("append"), makeNative(5, _35clofun1016, 2, 0));
Obj _35reg516 = primSet(intern("cora/init.rules-arg-count"), makeNative(12, _35clofun1016, 1, 0));
Obj _35reg522 = primSet(intern("cora/init.gen-parameters"), makeNative(14, _35clofun1016, 1, 0));
pushCont(co, 12, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(20, _35clofun1016, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val234 = __arg1;
Obj _35reg288 = primSet(intern("cora/init.match-cons-expander"), makeNative(12, _35clofun1013, 4, 0));
Obj _35reg321 = primSet(intern("cora/init.match1"), makeNative(18, _35clofun1013, 4, 0));
Obj _35reg348 = primSet(intern("cora/init.extract-rule-action"), makeNative(5, _35clofun1014, 2, 0));
Obj _35reg400 = primSet(intern("cora/init.match-helper"), makeNative(0, _35clofun1015, 2, 0));
Obj _35reg426 = primSet(intern("cora/init.rewrite-match"), makeNative(7, _35clofun1015, 1, 0));
pushCont(co, 13, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(8, _35clofun1015, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val219 = __arg1;
Obj _35reg222 = primSet(intern("boolean?"), makeNative(11, _35clofun1012, 1, 0));
Obj _35reg232 = primSet(intern("cora/init.rcons1"), makeNative(14, _35clofun1012, 1, 0));
pushCont(co, 14, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(15, _35clofun1012, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val205 = __arg1;
Obj _35reg217 = primSet(intern("cora/init.rewrite-and"), makeNative(9, _35clofun1012, 1, 0));
pushCont(co, 15, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(10, _35clofun1012, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val191 = __arg1;
Obj _35reg203 = primSet(intern("cora/init.rewrite-or"), makeNative(6, _35clofun1012, 1, 0));
pushCont(co, 16, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(7, _35clofun1012, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val177 = __arg1;
pushCont(co, 17, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(4, _35clofun1012, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val155 = __arg1;
Obj _35reg160 = primSet(intern("elem?"), makeNative(14, _35clofun1011, 2, 0));
Obj _35reg163 = primSet(intern("atom?"), makeNative(15, _35clofun1011, 1, 0));
Obj _35reg175 = primSet(intern("cora/init.rewrite-let"), makeNative(20, _35clofun1011, 1, 0));
pushCont(co, 18, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(0, _35clofun1012, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val143 = __arg1;
pushCont(co, 19, _35clofun1019, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(13, _35clofun1011, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1019) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1018(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val867 = __arg1;
Obj x1 = _35val867;
Obj _35reg868 = primCons(x1, Nil);
Obj _35reg869 = primCons(intern("not"), _35reg868);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg869;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc24 = makeNative(20, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg857 = primIsCons(closureRef(co, 0));
if (True == _35reg857) {
Obj _35reg858 = primCar(closureRef(co, 0));
Obj _35reg859 = primEQ(intern("not"), _35reg858);
if (True == _35reg859) {
Obj _35reg860 = primCdr(closureRef(co, 0));
Obj _35reg861 = primIsCons(_35reg860);
if (True == _35reg861) {
Obj _35reg862 = primCdr(closureRef(co, 0));
Obj _35reg863 = primCar(_35reg862);
Obj x = _35reg863;
Obj _35reg864 = primCdr(closureRef(co, 0));
Obj _35reg865 = primCdr(_35reg864);
Obj _35reg866 = primEQ(Nil, _35reg865);
if (True == _35reg866) {
pushCont(co, 0, _35clofun1018, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val880 = __arg1;
Obj x1 = _35val880;
Obj _35reg881 = primCons(x1, Nil);
Obj _35reg882 = primCons(intern("null?"), _35reg881);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg882;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc23 = makeNative(1, _35clofun1018, 0, 1, closureRef(co, 0));
Obj _35reg870 = primIsCons(closureRef(co, 0));
if (True == _35reg870) {
Obj _35reg871 = primCar(closureRef(co, 0));
Obj _35reg872 = primEQ(intern("null?"), _35reg871);
if (True == _35reg872) {
Obj _35reg873 = primCdr(closureRef(co, 0));
Obj _35reg874 = primIsCons(_35reg873);
if (True == _35reg874) {
Obj _35reg875 = primCdr(closureRef(co, 0));
Obj _35reg876 = primCar(_35reg875);
Obj x = _35reg876;
Obj _35reg877 = primCdr(closureRef(co, 0));
Obj _35reg878 = primCdr(_35reg877);
Obj _35reg879 = primEQ(Nil, _35reg878);
if (True == _35reg879) {
pushCont(co, 2, _35clofun1018, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val901 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val901;
Obj _35reg902 = primCons(y1, Nil);
Obj _35reg903 = primCons(x1, _35reg902);
Obj _35reg904 = primCons(intern("and"), _35reg903);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg904;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val900 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val900;
pushCont(co, 4, _35clofun1018, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc22 = makeNative(3, _35clofun1018, 0, 1, closureRef(co, 0));
Obj _35reg883 = primIsCons(closureRef(co, 0));
if (True == _35reg883) {
Obj _35reg884 = primCar(closureRef(co, 0));
Obj _35reg885 = primEQ(intern("and"), _35reg884);
if (True == _35reg885) {
Obj _35reg886 = primCdr(closureRef(co, 0));
Obj _35reg887 = primIsCons(_35reg886);
if (True == _35reg887) {
Obj _35reg888 = primCdr(closureRef(co, 0));
Obj _35reg889 = primCar(_35reg888);
Obj x = _35reg889;
Obj _35reg890 = primCdr(closureRef(co, 0));
Obj _35reg891 = primCdr(_35reg890);
Obj _35reg892 = primIsCons(_35reg891);
if (True == _35reg892) {
Obj _35reg893 = primCdr(closureRef(co, 0));
Obj _35reg894 = primCdr(_35reg893);
Obj _35reg895 = primCar(_35reg894);
Obj y = _35reg895;
Obj _35reg896 = primCdr(closureRef(co, 0));
Obj _35reg897 = primCdr(_35reg896);
Obj _35reg898 = primCdr(_35reg897);
Obj _35reg899 = primEQ(Nil, _35reg898);
if (True == _35reg899) {
pushCont(co, 5, _35clofun1018, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val915 = __arg1;
Obj x1 = _35val915;
Obj _35reg916 = primCons(x1, Nil);
Obj _35reg917 = primCons(intern("cdr"), _35reg916);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg917;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc21 = makeNative(6, _35clofun1018, 0, 1, closureRef(co, 0));
Obj _35reg905 = primIsCons(closureRef(co, 0));
if (True == _35reg905) {
Obj _35reg906 = primCar(closureRef(co, 0));
Obj _35reg907 = primEQ(intern("cdr"), _35reg906);
if (True == _35reg907) {
Obj _35reg908 = primCdr(closureRef(co, 0));
Obj _35reg909 = primIsCons(_35reg908);
if (True == _35reg909) {
Obj _35reg910 = primCdr(closureRef(co, 0));
Obj _35reg911 = primCar(_35reg910);
Obj x = _35reg911;
Obj _35reg912 = primCdr(closureRef(co, 0));
Obj _35reg913 = primCdr(_35reg912);
Obj _35reg914 = primEQ(Nil, _35reg913);
if (True == _35reg914) {
pushCont(co, 7, _35clofun1018, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val928 = __arg1;
Obj x1 = _35val928;
Obj _35reg929 = primCons(x1, Nil);
Obj _35reg930 = primCons(intern("car"), _35reg929);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg930;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc20 = makeNative(8, _35clofun1018, 0, 1, closureRef(co, 0));
Obj _35reg918 = primIsCons(closureRef(co, 0));
if (True == _35reg918) {
Obj _35reg919 = primCar(closureRef(co, 0));
Obj _35reg920 = primEQ(intern("car"), _35reg919);
if (True == _35reg920) {
Obj _35reg921 = primCdr(closureRef(co, 0));
Obj _35reg922 = primIsCons(_35reg921);
if (True == _35reg922) {
Obj _35reg923 = primCdr(closureRef(co, 0));
Obj _35reg924 = primCar(_35reg923);
Obj x = _35reg924;
Obj _35reg925 = primCdr(closureRef(co, 0));
Obj _35reg926 = primCdr(_35reg925);
Obj _35reg927 = primEQ(Nil, _35reg926);
if (True == _35reg927) {
pushCont(co, 9, _35clofun1018, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val941 = __arg1;
Obj x1 = _35val941;
Obj _35reg942 = primCons(x1, Nil);
Obj _35reg943 = primCons(intern("cons?"), _35reg942);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc19 = makeNative(10, _35clofun1018, 0, 1, closureRef(co, 0));
Obj _35reg931 = primIsCons(closureRef(co, 0));
if (True == _35reg931) {
Obj _35reg932 = primCar(closureRef(co, 0));
Obj _35reg933 = primEQ(intern("cons?"), _35reg932);
if (True == _35reg933) {
Obj _35reg934 = primCdr(closureRef(co, 0));
Obj _35reg935 = primIsCons(_35reg934);
if (True == _35reg935) {
Obj _35reg936 = primCdr(closureRef(co, 0));
Obj _35reg937 = primCar(_35reg936);
Obj x = _35reg937;
Obj _35reg938 = primCdr(closureRef(co, 0));
Obj _35reg939 = primCdr(_35reg938);
Obj _35reg940 = primEQ(Nil, _35reg939);
if (True == _35reg940) {
pushCont(co, 11, _35clofun1018, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35p17 = __arg1;
Obj _35cc18 = makeNative(12, _35clofun1018, 0, 1, _35p17);
Obj _35reg944 = primIsCons(_35p17);
if (True == _35reg944) {
Obj _35reg945 = primCar(_35p17);
Obj _35reg946 = primEQ(intern("quote"), _35reg945);
if (True == _35reg946) {
Obj _35reg947 = primCdr(_35p17);
Obj _35reg948 = primIsCons(_35reg947);
if (True == _35reg948) {
Obj _35reg949 = primCdr(_35p17);
Obj _35reg950 = primCar(_35reg949);
Obj x = _35reg950;
Obj _35reg951 = primCdr(_35p17);
Obj _35reg952 = primCdr(_35reg951);
Obj _35reg953 = primEQ(Nil, _35reg952);
if (True == _35reg953) {
Obj _35reg954 = primCons(x, Nil);
Obj _35reg955 = primCons(intern("quote"), _35reg954);
__nargs = 2;
__arg1 = _35reg955;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1018) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val957 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = _35val957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
pushCont(co, 14, _35clofun1018, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val962 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg963 = primCons(_35val962, Nil);
Obj _35reg964 = primCons(x, _35reg963);
Obj _35reg965 = primCons(intern("do"), _35reg964);
__nargs = 2;
__arg1 = _35reg965;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1018) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc32 = makeNative(16, _35clofun1018, 0, 0);
Obj _35reg959 = primIsCons(closureRef(co, 0));
if (True == _35reg959) {
Obj _35reg960 = primCar(closureRef(co, 0));
Obj x = _35reg960;
Obj _35reg961 = primCdr(closureRef(co, 0));
Obj y = _35reg961;
pushCont(co, 17, _35clofun1018, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc32;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc31 = makeNative(18, _35clofun1018, 0, 1, closureRef(co, 0));
Obj _35reg966 = primIsCons(closureRef(co, 0));
if (True == _35reg966) {
Obj _35reg967 = primCar(closureRef(co, 0));
Obj x = _35reg967;
Obj _35reg968 = primCdr(closureRef(co, 0));
Obj _35reg969 = primIsCons(_35reg968);
if (True == _35reg969) {
Obj _35reg970 = primCdr(closureRef(co, 0));
Obj _35reg971 = primCar(_35reg970);
Obj y = _35reg971;
Obj _35reg972 = primCdr(closureRef(co, 0));
Obj _35reg973 = primCdr(_35reg972);
Obj _35reg974 = primEQ(Nil, _35reg973);
if (True == _35reg974) {
Obj _35reg975 = primCons(y, Nil);
Obj _35reg976 = primCons(x, _35reg975);
Obj _35reg977 = primCons(intern("do"), _35reg976);
__nargs = 2;
__arg1 = _35reg977;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1018) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc31;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc31;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc31;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35p29 = __arg1;
Obj _35cc30 = makeNative(19, _35clofun1018, 0, 1, _35p29);
Obj _35reg978 = primIsCons(_35p29);
if (True == _35reg978) {
Obj _35reg979 = primCar(_35p29);
Obj x = _35reg979;
Obj _35reg980 = primCdr(_35p29);
Obj _35reg981 = primEQ(Nil, _35reg980);
if (True == _35reg981) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1018) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc30;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc30;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1018) { co->ctx.pc = ps; goto fail; };
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

void _35clofun1017(struct Cora* co){
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
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc16 = makeNative(0, _35clofun1017, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35cc15 = makeNative(1, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg536 = primIsCons(closureRef(co, 0));
if (True == _35reg536) {
Obj _35reg537 = primCar(closureRef(co, 0));
Obj _35reg538 = primEQ(intern("if"), _35reg537);
if (True == _35reg538) {
Obj _35reg539 = primCdr(closureRef(co, 0));
Obj _35reg540 = primIsCons(_35reg539);
if (True == _35reg540) {
Obj _35reg541 = primCdr(closureRef(co, 0));
Obj _35reg542 = primCar(_35reg541);
Obj _35reg543 = primEQ(False, _35reg542);
if (True == _35reg543) {
Obj _35reg544 = primCdr(closureRef(co, 0));
Obj _35reg545 = primCdr(_35reg544);
Obj _35reg546 = primIsCons(_35reg545);
if (True == _35reg546) {
Obj _35reg547 = primCdr(closureRef(co, 0));
Obj _35reg548 = primCdr(_35reg547);
Obj _35reg549 = primCar(_35reg548);
Obj y = _35reg549;
Obj _35reg550 = primCdr(closureRef(co, 0));
Obj _35reg551 = primCdr(_35reg550);
Obj _35reg552 = primCdr(_35reg551);
Obj _35reg553 = primIsCons(_35reg552);
if (True == _35reg553) {
Obj _35reg554 = primCdr(closureRef(co, 0));
Obj _35reg555 = primCdr(_35reg554);
Obj _35reg556 = primCdr(_35reg555);
Obj _35reg557 = primCar(_35reg556);
Obj z = _35reg557;
Obj _35reg558 = primCdr(closureRef(co, 0));
Obj _35reg559 = primCdr(_35reg558);
Obj _35reg560 = primCdr(_35reg559);
Obj _35reg561 = primCdr(_35reg560);
Obj _35reg562 = primEQ(Nil, _35reg561);
if (True == _35reg562) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc14 = makeNative(2, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg563 = primIsCons(closureRef(co, 0));
if (True == _35reg563) {
Obj _35reg564 = primCar(closureRef(co, 0));
Obj _35reg565 = primEQ(intern("if"), _35reg564);
if (True == _35reg565) {
Obj _35reg566 = primCdr(closureRef(co, 0));
Obj _35reg567 = primIsCons(_35reg566);
if (True == _35reg567) {
Obj _35reg568 = primCdr(closureRef(co, 0));
Obj _35reg569 = primCar(_35reg568);
Obj _35reg570 = primEQ(True, _35reg569);
if (True == _35reg570) {
Obj _35reg571 = primCdr(closureRef(co, 0));
Obj _35reg572 = primCdr(_35reg571);
Obj _35reg573 = primIsCons(_35reg572);
if (True == _35reg573) {
Obj _35reg574 = primCdr(closureRef(co, 0));
Obj _35reg575 = primCdr(_35reg574);
Obj _35reg576 = primCar(_35reg575);
Obj y = _35reg576;
Obj _35reg577 = primCdr(closureRef(co, 0));
Obj _35reg578 = primCdr(_35reg577);
Obj _35reg579 = primCdr(_35reg578);
Obj _35reg580 = primIsCons(_35reg579);
if (True == _35reg580) {
Obj _35reg581 = primCdr(closureRef(co, 0));
Obj _35reg582 = primCdr(_35reg581);
Obj _35reg583 = primCdr(_35reg582);
Obj _35reg584 = primCar(_35reg583);
Obj z = _35reg584;
Obj _35reg585 = primCdr(closureRef(co, 0));
Obj _35reg586 = primCdr(_35reg585);
Obj _35reg587 = primCdr(_35reg586);
Obj _35reg588 = primCdr(_35reg587);
Obj _35reg589 = primEQ(Nil, _35reg588);
if (True == _35reg589) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc13 = makeNative(3, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg590 = primIsCons(closureRef(co, 0));
if (True == _35reg590) {
Obj _35reg591 = primCar(closureRef(co, 0));
Obj _35reg592 = primEQ(intern("not"), _35reg591);
if (True == _35reg592) {
Obj _35reg593 = primCdr(closureRef(co, 0));
Obj _35reg594 = primIsCons(_35reg593);
if (True == _35reg594) {
Obj _35reg595 = primCdr(closureRef(co, 0));
Obj _35reg596 = primCar(_35reg595);
Obj _35reg597 = primEQ(False, _35reg596);
if (True == _35reg597) {
Obj _35reg598 = primCdr(closureRef(co, 0));
Obj _35reg599 = primCdr(_35reg598);
Obj _35reg600 = primEQ(Nil, _35reg599);
if (True == _35reg600) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc12 = makeNative(4, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg601 = primIsCons(closureRef(co, 0));
if (True == _35reg601) {
Obj _35reg602 = primCar(closureRef(co, 0));
Obj _35reg603 = primEQ(intern("not"), _35reg602);
if (True == _35reg603) {
Obj _35reg604 = primCdr(closureRef(co, 0));
Obj _35reg605 = primIsCons(_35reg604);
if (True == _35reg605) {
Obj _35reg606 = primCdr(closureRef(co, 0));
Obj _35reg607 = primCar(_35reg606);
Obj _35reg608 = primEQ(True, _35reg607);
if (True == _35reg608) {
Obj _35reg609 = primCdr(closureRef(co, 0));
Obj _35reg610 = primCdr(_35reg609);
Obj _35reg611 = primEQ(Nil, _35reg610);
if (True == _35reg611) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc11 = makeNative(5, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg612 = primIsCons(closureRef(co, 0));
if (True == _35reg612) {
Obj _35reg613 = primCar(closureRef(co, 0));
Obj _35reg614 = primEQ(intern("null?"), _35reg613);
if (True == _35reg614) {
Obj _35reg615 = primCdr(closureRef(co, 0));
Obj _35reg616 = primIsCons(_35reg615);
if (True == _35reg616) {
Obj _35reg617 = primCdr(closureRef(co, 0));
Obj _35reg618 = primCar(_35reg617);
Obj _35reg619 = primIsCons(_35reg618);
if (True == _35reg619) {
Obj _35reg620 = primCdr(closureRef(co, 0));
Obj _35reg621 = primCar(_35reg620);
Obj _35reg622 = primCar(_35reg621);
Obj _35reg623 = primEQ(intern("cons"), _35reg622);
if (True == _35reg623) {
Obj _35reg624 = primCdr(closureRef(co, 0));
Obj _35reg625 = primCar(_35reg624);
Obj _35reg626 = primCdr(_35reg625);
Obj _35reg627 = primIsCons(_35reg626);
if (True == _35reg627) {
Obj _35reg628 = primCdr(closureRef(co, 0));
Obj _35reg629 = primCar(_35reg628);
Obj _35reg630 = primCdr(_35reg629);
Obj _35reg631 = primCar(_35reg630);
Obj __ = _35reg631;
Obj _35reg632 = primCdr(closureRef(co, 0));
Obj _35reg633 = primCar(_35reg632);
Obj _35reg634 = primCdr(_35reg633);
Obj _35reg635 = primCdr(_35reg634);
Obj _35reg636 = primIsCons(_35reg635);
if (True == _35reg636) {
Obj _35reg637 = primCdr(closureRef(co, 0));
Obj _35reg638 = primCar(_35reg637);
Obj _35reg639 = primCdr(_35reg638);
Obj _35reg640 = primCdr(_35reg639);
Obj _35reg641 = primCar(_35reg640);
__ = _35reg641;
Obj _35reg642 = primCdr(closureRef(co, 0));
Obj _35reg643 = primCar(_35reg642);
Obj _35reg644 = primCdr(_35reg643);
Obj _35reg645 = primCdr(_35reg644);
Obj _35reg646 = primCdr(_35reg645);
Obj _35reg647 = primEQ(Nil, _35reg646);
if (True == _35reg647) {
Obj _35reg648 = primCdr(closureRef(co, 0));
Obj _35reg649 = primCdr(_35reg648);
Obj _35reg650 = primEQ(Nil, _35reg649);
if (True == _35reg650) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc10 = makeNative(6, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg651 = primIsCons(closureRef(co, 0));
if (True == _35reg651) {
Obj _35reg652 = primCar(closureRef(co, 0));
Obj _35reg653 = primEQ(intern("null?"), _35reg652);
if (True == _35reg653) {
Obj _35reg654 = primCdr(closureRef(co, 0));
Obj _35reg655 = primIsCons(_35reg654);
if (True == _35reg655) {
Obj _35reg656 = primCdr(closureRef(co, 0));
Obj _35reg657 = primCar(_35reg656);
Obj _35reg658 = primEQ(Nil, _35reg657);
if (True == _35reg658) {
Obj _35reg659 = primCdr(closureRef(co, 0));
Obj _35reg660 = primCdr(_35reg659);
Obj _35reg661 = primEQ(Nil, _35reg660);
if (True == _35reg661) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc9 = makeNative(7, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg662 = primIsCons(closureRef(co, 0));
if (True == _35reg662) {
Obj _35reg663 = primCar(closureRef(co, 0));
Obj _35reg664 = primEQ(intern("and"), _35reg663);
if (True == _35reg664) {
Obj _35reg665 = primCdr(closureRef(co, 0));
Obj _35reg666 = primIsCons(_35reg665);
if (True == _35reg666) {
Obj _35reg667 = primCdr(closureRef(co, 0));
Obj _35reg668 = primCar(_35reg667);
Obj _35reg669 = primEQ(True, _35reg668);
if (True == _35reg669) {
Obj _35reg670 = primCdr(closureRef(co, 0));
Obj _35reg671 = primCdr(_35reg670);
Obj _35reg672 = primIsCons(_35reg671);
if (True == _35reg672) {
Obj _35reg673 = primCdr(closureRef(co, 0));
Obj _35reg674 = primCdr(_35reg673);
Obj _35reg675 = primCar(_35reg674);
Obj _35reg676 = primEQ(True, _35reg675);
if (True == _35reg676) {
Obj _35reg677 = primCdr(closureRef(co, 0));
Obj _35reg678 = primCdr(_35reg677);
Obj _35reg679 = primCdr(_35reg678);
Obj _35reg680 = primEQ(Nil, _35reg679);
if (True == _35reg680) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc8 = makeNative(8, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg681 = primIsCons(closureRef(co, 0));
if (True == _35reg681) {
Obj _35reg682 = primCar(closureRef(co, 0));
Obj _35reg683 = primEQ(intern("cons?"), _35reg682);
if (True == _35reg683) {
Obj _35reg684 = primCdr(closureRef(co, 0));
Obj _35reg685 = primIsCons(_35reg684);
if (True == _35reg685) {
Obj _35reg686 = primCdr(closureRef(co, 0));
Obj _35reg687 = primCar(_35reg686);
Obj _35reg688 = primIsCons(_35reg687);
if (True == _35reg688) {
Obj _35reg689 = primCdr(closureRef(co, 0));
Obj _35reg690 = primCar(_35reg689);
Obj _35reg691 = primCar(_35reg690);
Obj _35reg692 = primEQ(intern("cons"), _35reg691);
if (True == _35reg692) {
Obj _35reg693 = primCdr(closureRef(co, 0));
Obj _35reg694 = primCar(_35reg693);
Obj _35reg695 = primCdr(_35reg694);
Obj _35reg696 = primIsCons(_35reg695);
if (True == _35reg696) {
Obj _35reg697 = primCdr(closureRef(co, 0));
Obj _35reg698 = primCar(_35reg697);
Obj _35reg699 = primCdr(_35reg698);
Obj _35reg700 = primCar(_35reg699);
Obj __ = _35reg700;
Obj _35reg701 = primCdr(closureRef(co, 0));
Obj _35reg702 = primCar(_35reg701);
Obj _35reg703 = primCdr(_35reg702);
Obj _35reg704 = primCdr(_35reg703);
Obj _35reg705 = primIsCons(_35reg704);
if (True == _35reg705) {
Obj _35reg706 = primCdr(closureRef(co, 0));
Obj _35reg707 = primCar(_35reg706);
Obj _35reg708 = primCdr(_35reg707);
Obj _35reg709 = primCdr(_35reg708);
Obj _35reg710 = primCar(_35reg709);
__ = _35reg710;
Obj _35reg711 = primCdr(closureRef(co, 0));
Obj _35reg712 = primCar(_35reg711);
Obj _35reg713 = primCdr(_35reg712);
Obj _35reg714 = primCdr(_35reg713);
Obj _35reg715 = primCdr(_35reg714);
Obj _35reg716 = primEQ(Nil, _35reg715);
if (True == _35reg716) {
Obj _35reg717 = primCdr(closureRef(co, 0));
Obj _35reg718 = primCdr(_35reg717);
Obj _35reg719 = primEQ(Nil, _35reg718);
if (True == _35reg719) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc7 = makeNative(9, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg720 = primIsCons(closureRef(co, 0));
if (True == _35reg720) {
Obj _35reg721 = primCar(closureRef(co, 0));
Obj _35reg722 = primEQ(intern("cdr"), _35reg721);
if (True == _35reg722) {
Obj _35reg723 = primCdr(closureRef(co, 0));
Obj _35reg724 = primIsCons(_35reg723);
if (True == _35reg724) {
Obj _35reg725 = primCdr(closureRef(co, 0));
Obj _35reg726 = primCar(_35reg725);
Obj _35reg727 = primIsCons(_35reg726);
if (True == _35reg727) {
Obj _35reg728 = primCdr(closureRef(co, 0));
Obj _35reg729 = primCar(_35reg728);
Obj _35reg730 = primCar(_35reg729);
Obj _35reg731 = primEQ(intern("cons"), _35reg730);
if (True == _35reg731) {
Obj _35reg732 = primCdr(closureRef(co, 0));
Obj _35reg733 = primCar(_35reg732);
Obj _35reg734 = primCdr(_35reg733);
Obj _35reg735 = primIsCons(_35reg734);
if (True == _35reg735) {
Obj _35reg736 = primCdr(closureRef(co, 0));
Obj _35reg737 = primCar(_35reg736);
Obj _35reg738 = primCdr(_35reg737);
Obj _35reg739 = primCar(_35reg738);
Obj __ = _35reg739;
Obj _35reg740 = primCdr(closureRef(co, 0));
Obj _35reg741 = primCar(_35reg740);
Obj _35reg742 = primCdr(_35reg741);
Obj _35reg743 = primCdr(_35reg742);
Obj _35reg744 = primIsCons(_35reg743);
if (True == _35reg744) {
Obj _35reg745 = primCdr(closureRef(co, 0));
Obj _35reg746 = primCar(_35reg745);
Obj _35reg747 = primCdr(_35reg746);
Obj _35reg748 = primCdr(_35reg747);
Obj _35reg749 = primCar(_35reg748);
Obj x = _35reg749;
Obj _35reg750 = primCdr(closureRef(co, 0));
Obj _35reg751 = primCar(_35reg750);
Obj _35reg752 = primCdr(_35reg751);
Obj _35reg753 = primCdr(_35reg752);
Obj _35reg754 = primCdr(_35reg753);
Obj _35reg755 = primEQ(Nil, _35reg754);
if (True == _35reg755) {
Obj _35reg756 = primCdr(closureRef(co, 0));
Obj _35reg757 = primCdr(_35reg756);
Obj _35reg758 = primEQ(Nil, _35reg757);
if (True == _35reg758) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p5 = __arg1;
Obj _35cc6 = makeNative(10, _35clofun1017, 0, 1, _35p5);
Obj _35reg759 = primIsCons(_35p5);
if (True == _35reg759) {
Obj _35reg760 = primCar(_35p5);
Obj _35reg761 = primEQ(intern("car"), _35reg760);
if (True == _35reg761) {
Obj _35reg762 = primCdr(_35p5);
Obj _35reg763 = primIsCons(_35reg762);
if (True == _35reg763) {
Obj _35reg764 = primCdr(_35p5);
Obj _35reg765 = primCar(_35reg764);
Obj _35reg766 = primIsCons(_35reg765);
if (True == _35reg766) {
Obj _35reg767 = primCdr(_35p5);
Obj _35reg768 = primCar(_35reg767);
Obj _35reg769 = primCar(_35reg768);
Obj _35reg770 = primEQ(intern("cons"), _35reg769);
if (True == _35reg770) {
Obj _35reg771 = primCdr(_35p5);
Obj _35reg772 = primCar(_35reg771);
Obj _35reg773 = primCdr(_35reg772);
Obj _35reg774 = primIsCons(_35reg773);
if (True == _35reg774) {
Obj _35reg775 = primCdr(_35p5);
Obj _35reg776 = primCar(_35reg775);
Obj _35reg777 = primCdr(_35reg776);
Obj _35reg778 = primCar(_35reg777);
Obj x = _35reg778;
Obj _35reg779 = primCdr(_35p5);
Obj _35reg780 = primCar(_35reg779);
Obj _35reg781 = primCdr(_35reg780);
Obj _35reg782 = primCdr(_35reg781);
Obj _35reg783 = primIsCons(_35reg782);
if (True == _35reg783) {
Obj _35reg784 = primCdr(_35p5);
Obj _35reg785 = primCar(_35reg784);
Obj _35reg786 = primCdr(_35reg785);
Obj _35reg787 = primCdr(_35reg786);
Obj _35reg788 = primCar(_35reg787);
Obj __ = _35reg788;
Obj _35reg789 = primCdr(_35p5);
Obj _35reg790 = primCar(_35reg789);
Obj _35reg791 = primCdr(_35reg790);
Obj _35reg792 = primCdr(_35reg791);
Obj _35reg793 = primCdr(_35reg792);
Obj _35reg794 = primEQ(Nil, _35reg793);
if (True == _35reg794) {
Obj _35reg795 = primCdr(_35p5);
Obj _35reg796 = primCdr(_35reg795);
Obj _35reg797 = primEQ(Nil, _35reg796);
if (True == _35reg797) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc28 = makeNative(12, _35clofun1017, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35cc27 = makeNative(13, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg799 = primIsCons(closureRef(co, 0));
if (True == _35reg799) {
Obj _35reg800 = primCar(closureRef(co, 0));
Obj f = _35reg800;
Obj _35reg801 = primCdr(closureRef(co, 0));
Obj args = _35reg801;
Obj _35reg802 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.propagate-boolean"));
__arg2 = _35reg802;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc27;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val820 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg821 = primCons(_35val820, Nil);
Obj _35reg822 = primCons(args, _35reg821);
Obj _35reg823 = primCons(intern("lambda"), _35reg822);
__nargs = 2;
__arg1 = _35reg823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1017) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35cc26 = makeNative(14, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg803 = primIsCons(closureRef(co, 0));
if (True == _35reg803) {
Obj _35reg804 = primCar(closureRef(co, 0));
Obj _35reg805 = primEQ(intern("lambda"), _35reg804);
if (True == _35reg805) {
Obj _35reg806 = primCdr(closureRef(co, 0));
Obj _35reg807 = primIsCons(_35reg806);
if (True == _35reg807) {
Obj _35reg808 = primCdr(closureRef(co, 0));
Obj _35reg809 = primCar(_35reg808);
Obj args = _35reg809;
Obj _35reg810 = primCdr(closureRef(co, 0));
Obj _35reg811 = primCdr(_35reg810);
Obj _35reg812 = primIsCons(_35reg811);
if (True == _35reg812) {
Obj _35reg813 = primCdr(closureRef(co, 0));
Obj _35reg814 = primCdr(_35reg813);
Obj _35reg815 = primCar(_35reg814);
Obj body = _35reg815;
Obj _35reg816 = primCdr(closureRef(co, 0));
Obj _35reg817 = primCdr(_35reg816);
Obj _35reg818 = primCdr(_35reg817);
Obj _35reg819 = primEQ(Nil, _35reg818);
if (True == _35reg819) {
pushCont(co, 15, _35clofun1017, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val852 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val852;
Obj _35reg853 = primCons(z1, Nil);
Obj _35reg854 = primCons(y1, _35reg853);
Obj _35reg855 = primCons(x1, _35reg854);
Obj _35reg856 = primCons(intern("if"), _35reg855);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg856;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val851 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val851;
pushCont(co, 17, _35clofun1017, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val850 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val850;
pushCont(co, 18, _35clofun1017, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc25 = makeNative(16, _35clofun1017, 0, 1, closureRef(co, 0));
Obj _35reg824 = primIsCons(closureRef(co, 0));
if (True == _35reg824) {
Obj _35reg825 = primCar(closureRef(co, 0));
Obj _35reg826 = primEQ(intern("if"), _35reg825);
if (True == _35reg826) {
Obj _35reg827 = primCdr(closureRef(co, 0));
Obj _35reg828 = primIsCons(_35reg827);
if (True == _35reg828) {
Obj _35reg829 = primCdr(closureRef(co, 0));
Obj _35reg830 = primCar(_35reg829);
Obj x = _35reg830;
Obj _35reg831 = primCdr(closureRef(co, 0));
Obj _35reg832 = primCdr(_35reg831);
Obj _35reg833 = primIsCons(_35reg832);
if (True == _35reg833) {
Obj _35reg834 = primCdr(closureRef(co, 0));
Obj _35reg835 = primCdr(_35reg834);
Obj _35reg836 = primCar(_35reg835);
Obj y = _35reg836;
Obj _35reg837 = primCdr(closureRef(co, 0));
Obj _35reg838 = primCdr(_35reg837);
Obj _35reg839 = primCdr(_35reg838);
Obj _35reg840 = primIsCons(_35reg839);
if (True == _35reg840) {
Obj _35reg841 = primCdr(closureRef(co, 0));
Obj _35reg842 = primCdr(_35reg841);
Obj _35reg843 = primCdr(_35reg842);
Obj _35reg844 = primCar(_35reg843);
Obj z = _35reg844;
Obj _35reg845 = primCdr(closureRef(co, 0));
Obj _35reg846 = primCdr(_35reg845);
Obj _35reg847 = primCdr(_35reg846);
Obj _35reg848 = primCdr(_35reg847);
Obj _35reg849 = primEQ(Nil, _35reg848);
if (True == _35reg849) {
pushCont(co, 19, _35clofun1017, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1017) { co->ctx.pc = ps; goto fail; };
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

void _35clofun1016(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj l = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init.length-h"));
__arg1 = makeNumber(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val493 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val493) {
Obj _35reg494 = primCar(l);
Obj _35reg495 = primCons(_35reg494, res);
Obj _35reg496 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = _35reg495;
__arg2 = fn;
__arg3 = _35reg496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg497 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg491 = primIsCons(l);
if (True == _35reg491) {
Obj _35reg492 = primCar(l);
pushCont(co, 1, _35clofun1016, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj fn = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = Nil;
__arg2 = fn;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val503 = __arg1;
Obj _35reg501= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg504 = primCons(_35reg501, _35val503);
__nargs = 2;
__arg1 = _35reg504;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg500 = primEQ(l1, Nil);
if (True == _35reg500) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg501 = primCar(l1);
Obj _35reg502 = primCdr(l1);
pushCont(co, 4, _35clofun1016, 1, _35reg501);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg502;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x = __arg1;
Obj _35reg507 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg507;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg510 = primEQ(closureRef(co, 0), x);
Obj _35reg511 = primNot(_35reg510);
__nargs = 2;
__arg1 = _35reg511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val514 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg515 = primNot(_35val514);
if (True == _35reg515) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj _35val513 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun1016, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val508 = __arg1;
Obj counts = _35val508;
Obj _35reg509 = primCar(counts);
Obj n = _35reg509;
Obj dif = makeNative(7, _35clofun1016, 1, 1, n);
Obj _35reg512 = primCdr(counts);
pushCont(co, 9, _35clofun1016, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val506 = __arg1;
Obj pats = _35val506;
Obj len = makeNative(6, _35clofun1016, 1, 0);
pushCont(co, 10, _35clofun1016, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj rules = __arg1;
pushCont(co, 11, _35clofun1016, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val520 = __arg1;
Obj _35reg518= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg521 = primCons(_35reg518, _35val520);
__nargs = 2;
__arg1 = _35reg521;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj n = __arg1;
Obj _35reg517 = primEQ(n, makeNumber(0));
if (True == _35reg517) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg518 = primGenSym(intern("p"));
Obj _35reg519 = primSub(n, makeNumber(1));
pushCont(co, 13, _35clofun1016, 1, _35reg518);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.gen-parameters"));
__arg1 = _35reg519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val527 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg528 = primCons(intern("list"), args);
Obj _35reg529 = primCons(_35reg528, body);
Obj _35reg530 = primCons(intern("match"), _35reg529);
Obj _35reg531 = primCons(_35reg530, Nil);
Obj _35reg532 = primCons(args, _35reg531);
Obj _35reg533 = primCons(_35val527, _35reg532);
Obj _35reg534 = primCons(intern("defun"), _35reg533);
__nargs = 2;
__arg1 = _35reg534;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1016) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val526 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val526;
pushCont(co, 15, _35clofun1016, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val525 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val525;
pushCont(co, 16, _35clofun1016, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.gen-parameters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val524 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val524;
pushCont(co, 17, _35clofun1016, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val523 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun1016, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.extract-rules"));
__arg1 = _35val523;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
pushCont(co, 19, _35clofun1016, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1016) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1015(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 20, _35clofun1014, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val409 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg410 = primCons(_35val409, Nil);
Obj _35reg411 = primCons(value, _35reg410);
Obj _35reg412 = primCons(val, _35reg411);
Obj _35reg413 = primCons(intern("let"), _35reg412);
__nargs = 2;
__arg1 = _35reg413;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1015) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val415 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg416 = primCons(_35val415, Nil);
Obj _35reg417 = primCons(value, _35reg416);
Obj _35reg418 = primCons(val, _35reg417);
Obj _35reg419 = primCons(intern("let"), _35reg418);
__nargs = 2;
__arg1 = _35reg419;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1015) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val421 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg422 = primCons(_35val421, Nil);
Obj _35reg423 = primCons(value, _35reg422);
Obj _35reg424 = primCons(val, _35reg423);
Obj _35reg425 = primCons(intern("let"), _35reg424);
__nargs = 2;
__arg1 = _35reg425;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1015) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val403 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val403;
Obj _35reg404 = primIsCons(value);
if (True == _35reg404) {
Obj _35reg405 = primCar(value);
Obj _35reg406 = primEQ(intern("cons"), _35reg405);
Obj _35reg407 = primNot(_35reg406);
if (True == _35reg407) {
if (True == True) {
Obj _35reg408 = primGenSym(intern("val"));
Obj val = _35reg408;
pushCont(co, 1, _35clofun1015, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg414 = primGenSym(intern("val"));
Obj val = _35reg414;
pushCont(co, 2, _35clofun1015, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg420 = primGenSym(intern("val"));
Obj val = _35reg420;
pushCont(co, 3, _35clofun1015, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label5:
{
Obj _35val402 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val402;
pushCont(co, 4, _35clofun1015, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val401 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun1015, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun1015, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-match"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc4 = makeNative(9, _35clofun1015, 0, 0);
Obj _35reg428 = primIsCons(closureRef(co, 0));
if (True == _35reg428) {
Obj _35reg429 = primCar(closureRef(co, 0));
Obj x = _35reg429;
Obj _35reg430 = primCdr(closureRef(co, 0));
Obj y = _35reg430;
Obj _35reg431 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = y;
__arg2 = _35reg431;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc4;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val441 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg442 = primCons(intern("list"), _35val441);
Obj pat = _35reg442;
Obj _35reg443 = primCons(pat, closureRef(co, 2));
Obj _35reg444 = primCons(act, _35reg443);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc3 = makeNative(10, _35clofun1015, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg432 = primIsCons(closureRef(co, 0));
if (True == _35reg432) {
Obj _35reg433 = primCar(closureRef(co, 0));
Obj _35reg434 = primEQ(intern("=>"), _35reg433);
if (True == _35reg434) {
Obj _35reg435 = primCdr(closureRef(co, 0));
Obj _35reg436 = primIsCons(_35reg435);
if (True == _35reg436) {
Obj _35reg437 = primCdr(closureRef(co, 0));
Obj _35reg438 = primCar(_35reg437);
Obj act = _35reg438;
Obj _35reg439 = primCdr(closureRef(co, 0));
Obj _35reg440 = primCdr(_35reg439);
Obj remain = _35reg440;
pushCont(co, 11, _35clofun1015, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val471 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg472 = primCons(intern("list"), _35val471);
Obj pat = _35reg472;
Obj _35reg473 = primCons(act, Nil);
Obj _35reg474 = primCons(pred, _35reg473);
Obj _35reg475 = primCons(intern("where"), _35reg474);
Obj _35reg476 = primCons(pat, closureRef(co, 2));
Obj _35reg477 = primCons(_35reg475, _35reg476);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg477;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc2 = makeNative(12, _35clofun1015, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg445 = primIsCons(closureRef(co, 0));
if (True == _35reg445) {
Obj _35reg446 = primCar(closureRef(co, 0));
Obj _35reg447 = primEQ(intern("=>"), _35reg446);
if (True == _35reg447) {
Obj _35reg448 = primCdr(closureRef(co, 0));
Obj _35reg449 = primIsCons(_35reg448);
if (True == _35reg449) {
Obj _35reg450 = primCdr(closureRef(co, 0));
Obj _35reg451 = primCar(_35reg450);
Obj act = _35reg451;
Obj _35reg452 = primCdr(closureRef(co, 0));
Obj _35reg453 = primCdr(_35reg452);
Obj _35reg454 = primIsCons(_35reg453);
if (True == _35reg454) {
Obj _35reg455 = primCdr(closureRef(co, 0));
Obj _35reg456 = primCdr(_35reg455);
Obj _35reg457 = primCar(_35reg456);
Obj _35reg458 = primEQ(intern("where"), _35reg457);
if (True == _35reg458) {
Obj _35reg459 = primCdr(closureRef(co, 0));
Obj _35reg460 = primCdr(_35reg459);
Obj _35reg461 = primCdr(_35reg460);
Obj _35reg462 = primIsCons(_35reg461);
if (True == _35reg462) {
Obj _35reg463 = primCdr(closureRef(co, 0));
Obj _35reg464 = primCdr(_35reg463);
Obj _35reg465 = primCdr(_35reg464);
Obj _35reg466 = primCar(_35reg465);
Obj pred = _35reg466;
Obj _35reg467 = primCdr(closureRef(co, 0));
Obj _35reg468 = primCdr(_35reg467);
Obj _35reg469 = primCdr(_35reg468);
Obj _35reg470 = primCdr(_35reg469);
Obj remain = _35reg470;
pushCont(co, 13, _35clofun1015, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc1 = makeNative(14, _35clofun1015, 0, 3, input, current, result);
Obj _35reg478 = primEQ(Nil, input);
if (True == _35reg478) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj input = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = input;
__arg2 = Nil;
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val484 = __arg1;
Obj _35reg483= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init.rules-patterns"));
__arg1 = _35reg483;
__arg2 = _35val484;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val481 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val481) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg482 = primCar(rules);
Obj _35reg483 = primCons(_35reg482, res);
pushCont(co, 17, _35clofun1015, 1, _35reg483);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 18, _35clofun1015, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg486 = primEQ(l, Nil);
if (True == _35reg486) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1015) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg487 = primAdd(i, makeNumber(1));
Obj _35reg488 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.length-h"));
__arg1 = _35reg487;
__arg2 = _35reg488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1015) { co->ctx.pc = ps; goto fail; };
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

void _35clofun1014(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val335 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val334= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg336 = primCons(cc, Nil);
Obj _35reg337 = primCons(_35reg336, Nil);
Obj _35reg338 = primCons(_35val335, _35reg337);
Obj _35reg339 = primCons(_35val334, _35reg338);
Obj _35reg340 = primCons(intern("if"), _35reg339);
__nargs = 2;
__arg1 = _35reg340;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val334 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun1014, 2, cc, _35val334);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val342 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val341= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg343 = primCons(cc, Nil);
Obj _35reg344 = primCons(_35reg343, Nil);
Obj _35reg345 = primCons(_35val342, _35reg344);
Obj _35reg346 = primCons(_35val341, _35reg345);
Obj _35reg347 = primCons(intern("if"), _35reg346);
__nargs = 2;
__arg1 = _35reg347;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val341 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun1014, 2, cc, _35val341);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val324 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val324) {
Obj _35reg325 = primCar(action);
Obj _35reg326 = primEQ(_35reg325, intern("where"));
if (True == _35reg326) {
if (True == True) {
pushCont(co, 20, _35clofun1013, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun1014, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 3, _35clofun1014, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label5:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg322 = primCdr(rules);
Obj _35reg323 = primCar(_35reg322);
Obj action = _35reg323;
pushCont(co, 4, _35clofun1014, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val362 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val362;
Obj _35reg363 = primCons(rest, Nil);
Obj _35reg364 = primCons(Nil, _35reg363);
Obj _35reg365 = primCons(intern("lambda"), _35reg364);
Obj _35reg366 = primCons(curr, Nil);
Obj _35reg367 = primCons(_35reg365, _35reg366);
Obj _35reg368 = primCons(cc, _35reg367);
Obj _35reg369 = primCons(intern("let"), _35reg368);
__nargs = 2;
__arg1 = _35reg369;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val359 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val359;
Obj _35reg360 = primCdr(rules);
Obj _35reg361 = primCdr(_35reg360);
pushCont(co, 6, _35clofun1014, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val358 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun1014, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val358;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val357 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val357;
pushCont(co, 8, _35clofun1014, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val377 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val377;
Obj _35reg378 = primCons(rest, Nil);
Obj _35reg379 = primCons(Nil, _35reg378);
Obj _35reg380 = primCons(intern("lambda"), _35reg379);
Obj _35reg381 = primCons(curr, Nil);
Obj _35reg382 = primCons(_35reg380, _35reg381);
Obj _35reg383 = primCons(cc, _35reg382);
Obj _35reg384 = primCons(intern("let"), _35reg383);
__nargs = 2;
__arg1 = _35reg384;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val374 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val374;
Obj _35reg375 = primCdr(rules);
Obj _35reg376 = primCdr(_35reg375);
pushCont(co, 10, _35clofun1014, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg376;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val373 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun1014, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val373;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val372 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val372;
pushCont(co, 12, _35clofun1014, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val354 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val354) {
if (True == True) {
Obj _35reg355 = primCar(rules);
Obj pat = _35reg355;
Obj _35reg356 = primGenSym(intern("cc"));
Obj cc = _35reg356;
pushCont(co, 9, _35clofun1014, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg370 = primCar(rules);
Obj pat = _35reg370;
Obj _35reg371 = primGenSym(intern("cc"));
Obj cc = _35reg371;
pushCont(co, 13, _35clofun1014, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label15:
{
Obj _35val392 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val392;
Obj _35reg393 = primCons(rest, Nil);
Obj _35reg394 = primCons(Nil, _35reg393);
Obj _35reg395 = primCons(intern("lambda"), _35reg394);
Obj _35reg396 = primCons(curr, Nil);
Obj _35reg397 = primCons(_35reg395, _35reg396);
Obj _35reg398 = primCons(cc, _35reg397);
Obj _35reg399 = primCons(intern("let"), _35reg398);
__nargs = 2;
__arg1 = _35reg399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val389 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val389;
Obj _35reg390 = primCdr(rules);
Obj _35reg391 = primCdr(_35reg390);
pushCont(co, 15, _35clofun1014, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val388 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun1014, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val388;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val387 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val387;
pushCont(co, 17, _35clofun1014, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val352 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val352) {
Obj _35reg353 = primCdr(rules);
pushCont(co, 14, _35clofun1014, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg353;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg385 = primCar(rules);
Obj pat = _35reg385;
Obj _35reg386 = primGenSym(intern("cc"));
Obj cc = _35reg386;
pushCont(co, 18, _35clofun1014, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj _35val349 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val349) {
Obj _35reg350 = primCons(makeString1("no match-help found!"), Nil);
Obj _35reg351 = primCons(intern("error"), _35reg350);
__nargs = 2;
__arg1 = _35reg351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1014) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 19, _35clofun1014, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1014) { co->ctx.pc = ps; goto fail; };
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

void _35clofun1013(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val258 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val258;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val257 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val257;
pushCont(co, 0, _35clofun1013, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val256 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val256;
pushCont(co, 1, _35clofun1013, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val266 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg260= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg267 = primCons(cc, Nil);
Obj _35reg268 = primCons(_35reg267, Nil);
Obj _35reg269 = primCons(_35val266, _35reg268);
Obj _35reg270 = primCons(_35reg260, _35reg269);
Obj _35reg271 = primCons(intern("if"), _35reg270);
__nargs = 2;
__arg1 = _35reg271;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val265 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg262= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg260= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 3, _35clofun1013, 2, cc, _35reg260);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg262;
__arg3 = _35val265;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val274 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val274;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val273 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val273;
pushCont(co, 5, _35clofun1013, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val272 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val272;
pushCont(co, 6, _35clofun1013, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val282 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg276= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg283 = primCons(cc, Nil);
Obj _35reg284 = primCons(_35reg283, Nil);
Obj _35reg285 = primCons(_35val282, _35reg284);
Obj _35reg286 = primCons(_35reg276, _35reg285);
Obj _35reg287 = primCons(intern("if"), _35reg286);
__nargs = 2;
__arg1 = _35reg287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val281 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg278= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg276= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 8, _35clofun1013, 2, cc, _35reg276);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg278;
__arg3 = _35val281;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val236 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val236;
Obj _35reg237 = primIsCons(expr);
if (True == _35reg237) {
Obj _35reg238 = primCar(expr);
Obj _35reg239 = primEQ(_35reg238, intern("cons"));
if (True == _35reg239) {
if (True == True) {
pushCont(co, 18, _35clofun1012, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg243 = primCons(expr, Nil);
Obj _35reg244 = primCons(intern("cons?"), _35reg243);
Obj _35reg245 = primCons(expr, Nil);
Obj _35reg246 = primCons(intern("car"), _35reg245);
Obj _35reg247 = primCons(expr, Nil);
Obj _35reg248 = primCons(intern("cdr"), _35reg247);
pushCont(co, 20, _35clofun1012, 4, x, _35reg246, cc, _35reg244);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg248;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun1013, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg259 = primCons(expr, Nil);
Obj _35reg260 = primCons(intern("cons?"), _35reg259);
Obj _35reg261 = primCons(expr, Nil);
Obj _35reg262 = primCons(intern("car"), _35reg261);
Obj _35reg263 = primCons(expr, Nil);
Obj _35reg264 = primCons(intern("cdr"), _35reg263);
pushCont(co, 4, _35clofun1013, 4, x, _35reg262, cc, _35reg260);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg264;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun1013, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg275 = primCons(expr, Nil);
Obj _35reg276 = primCons(intern("cons?"), _35reg275);
Obj _35reg277 = primCons(expr, Nil);
Obj _35reg278 = primCons(intern("car"), _35reg277);
Obj _35reg279 = primCons(expr, Nil);
Obj _35reg280 = primCons(intern("cdr"), _35reg279);
pushCont(co, 9, _35clofun1013, 4, x, _35reg278, cc, _35reg276);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg280;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _35val235 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val235;
pushCont(co, 10, _35clofun1013, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 11, _35clofun1013, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val289 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val289) {
Obj _35reg290 = primIsSymbol(x);
Obj _35reg291 = primNot(_35reg290);
if (True == _35reg291) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
pushCont(co, 13, _35clofun1013, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val320 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val307 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val307) {
Obj _35reg308 = primCar(pat);
Obj _35reg309 = primEQ(_35reg308, intern("quote"));
if (True == _35reg309) {
Obj _35reg310 = primCons(expr, Nil);
Obj _35reg311 = primCons(pat, _35reg310);
Obj _35reg312 = primCons(intern("="), _35reg311);
Obj _35reg313 = primCons(cc, Nil);
Obj _35reg314 = primCons(_35reg313, Nil);
Obj _35reg315 = primCons(body, _35reg314);
Obj _35reg316 = primCons(_35reg312, _35reg315);
Obj _35reg317 = primCons(intern("if"), _35reg316);
__nargs = 2;
__arg1 = _35reg317;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg318 = primCar(pat);
Obj _35reg319 = primEQ(_35reg318, intern("cons"));
if (True == _35reg319) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 15, _35clofun1013, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeString1("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val292 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val292) {
Obj _35reg293 = primEQ(pat, expr);
if (True == _35reg293) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg294 = primCons(expr, Nil);
Obj _35reg295 = primCons(pat, _35reg294);
Obj _35reg296 = primCons(intern("="), _35reg295);
Obj _35reg297 = primCons(cc, Nil);
Obj _35reg298 = primCons(_35reg297, Nil);
Obj _35reg299 = primCons(body, _35reg298);
Obj _35reg300 = primCons(_35reg296, _35reg299);
Obj _35reg301 = primCons(intern("if"), _35reg300);
__nargs = 2;
__arg1 = _35reg301;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg302 = primIsSymbol(pat);
if (True == _35reg302) {
Obj _35reg303 = primCons(body, Nil);
Obj _35reg304 = primCons(expr, _35reg303);
Obj _35reg305 = primCons(pat, _35reg304);
Obj _35reg306 = primCons(intern("let"), _35reg305);
__nargs = 2;
__arg1 = _35reg306;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, _35clofun1013, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
Obj literal_63 = makeNative(14, _35clofun1013, 1, 0);
pushCont(co, 17, _35clofun1013, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val328 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val327= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg329 = primCons(cc, Nil);
Obj _35reg330 = primCons(_35reg329, Nil);
Obj _35reg331 = primCons(_35val328, _35reg330);
Obj _35reg332 = primCons(_35val327, _35reg331);
Obj _35reg333 = primCons(intern("if"), _35reg332);
__nargs = 2;
__arg1 = _35reg333;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1013) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val327 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun1013, 2, cc, _35val327);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1013) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1012(struct Cora* co){
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
Obj _35reg176 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-let"));
__arg1 = _35reg176;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val185 = __arg1;
Obj _35val184= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg183= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg186 = primCons(intern("cond"), _35val185);
Obj _35reg187 = primCons(_35reg186, Nil);
Obj _35reg188 = primCons(_35val184, _35reg187);
Obj _35reg189 = primCons(_35reg183, _35reg188);
Obj _35reg190 = primCons(intern("if"), _35reg189);
__nargs = 2;
__arg1 = _35reg190;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val184 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg183= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun1012, 2, _35val184, _35reg183);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val182 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val182;
Obj _35reg183 = primCar(curr);
pushCont(co, 2, _35clofun1012, 2, exp, _35reg183);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg178 = primCdr(exp);
Obj _35reg179 = primEQ(Nil, _35reg178);
if (True == _35reg179) {
Obj _35reg180 = primCons(makeString1("no cond match"), Nil);
Obj _35reg181 = primCons(intern("error"), _35reg180);
__nargs = 2;
__arg1 = _35reg181;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun1012, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val196 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val196;
Obj _35reg197 = primEQ(more, True);
if (True == _35reg197) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg198 = primCar(l);
Obj _35reg199 = primCons(more, Nil);
Obj _35reg200 = primCons(True, _35reg199);
Obj _35reg201 = primCons(_35reg198, _35reg200);
Obj _35reg202 = primCons(intern("if"), _35reg201);
__nargs = 2;
__arg1 = _35reg202;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj l = __arg1;
Obj _35reg192 = primEQ(l, Nil);
if (True == _35reg192) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg193 = primCar(l);
Obj _35reg194 = primEQ(_35reg193, True);
if (True == _35reg194) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg195 = primCdr(l);
pushCont(co, 5, _35clofun1012, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-or"));
__arg1 = _35reg195;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj exp = __arg1;
Obj _35reg204 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-or"));
__arg1 = _35reg204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val210 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val210;
Obj _35reg211 = primEQ(more, False);
if (True == _35reg211) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg212 = primCar(l);
Obj _35reg213 = primCons(False, Nil);
Obj _35reg214 = primCons(more, _35reg213);
Obj _35reg215 = primCons(_35reg212, _35reg214);
Obj _35reg216 = primCons(intern("if"), _35reg215);
__nargs = 2;
__arg1 = _35reg216;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj l = __arg1;
Obj _35reg206 = primEQ(Nil, l);
if (True == _35reg206) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg207 = primCar(l);
Obj _35reg208 = primEQ(_35reg207, False);
if (True == _35reg208) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg209 = primCdr(l);
pushCont(co, 8, _35clofun1012, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-and"));
__arg1 = _35reg209;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj exp = __arg1;
Obj _35reg218 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-and"));
__arg1 = _35reg218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg220 = primEQ(x, True);
if (True == _35reg220) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg221 = primEQ(x, False);
if (True == _35reg221) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label12:
{
Obj _35val228 = __arg1;
Obj _35reg226= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg229 = primCons(_35val228, Nil);
Obj _35reg230 = primCons(_35reg226, _35reg229);
Obj _35reg231 = primCons(intern("cons"), _35reg230);
__nargs = 2;
__arg1 = _35reg231;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val224 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val224) {
Obj _35reg225 = primCar(pat);
__nargs = 2;
__arg1 = _35reg225;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg226 = primCar(pat);
Obj _35reg227 = primCdr(pat);
pushCont(co, 12, _35clofun1012, 1, _35reg226);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rcons1"));
__arg1 = _35reg227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj pat = __arg1;
Obj _35reg223 = primCdr(pat);
pushCont(co, 13, _35clofun1012, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
Obj _35reg233 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rcons1"));
__arg1 = _35reg233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val242 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val242;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val241 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val241;
pushCont(co, 16, _35clofun1012, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val240 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val240;
pushCont(co, 17, _35clofun1012, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val250 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg244= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg251 = primCons(cc, Nil);
Obj _35reg252 = primCons(_35reg251, Nil);
Obj _35reg253 = primCons(_35val250, _35reg252);
Obj _35reg254 = primCons(_35reg244, _35reg253);
Obj _35reg255 = primCons(intern("if"), _35reg254);
__nargs = 2;
__arg1 = _35reg255;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1012) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val249 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg246= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg244= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun1012, 2, cc, _35reg244);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg246;
__arg3 = _35val249;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1012) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1011(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val119 = __arg1;
Obj _35val118= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun1010, 1, _35val118);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = _35val119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val118 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun1011, 1, _35val118);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp1 = __arg1;
Obj _35reg126 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg126) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val127 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(2, _35clofun1011, 1, 1, exp);
__arg1 = _35val127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg112 = primIsCons(exp);
if (True == _35reg112) {
Obj _35reg113 = primCar(exp);
Obj _35reg114 = primEQ(_35reg113, globalRef(intern("*protect-symbol*")));
if (True == _35reg114) {
Obj _35reg115 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg115;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg116 = primCar(exp);
Obj _35reg117 = primEQ(_35reg116, intern("lambda"));
if (True == _35reg117) {
pushCont(co, 1, _35clofun1011, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg124 = primCar(exp);
Obj _35reg125 = primEQ(_35reg124, intern("quote"));
if (True == _35reg125) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun1011, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35val134 = __arg1;
Obj _35val133= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg132= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg135 = primCons(_35val133, _35val134);
Obj _35reg136 = primCons(intern("lambda"), _35reg135);
Obj _35reg137 = primCons(_35reg136, Nil);
Obj _35reg138 = primCons(_35reg132, _35reg137);
Obj _35reg139 = primCons(intern("cora/init.add-to-*macros*"), _35reg138);
__nargs = 2;
__arg1 = _35reg139;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val133 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg132= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun1011, 2, _35val133, _35reg132);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val130 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg131 = primCons(_35val130, Nil);
Obj _35reg132 = primCons(intern("quote"), _35reg131);
pushCont(co, 6, _35clofun1011, 2, exp, _35reg132);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun1011, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg142 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val148 = __arg1;
Obj _35val147= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg146= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg149 = primCons(_35val148, Nil);
Obj _35reg150 = primCons(_35val147, _35reg149);
Obj _35reg151 = primCons(intern("lambda"), _35reg150);
Obj _35reg152 = primCons(_35reg151, Nil);
Obj _35reg153 = primCons(_35reg146, _35reg152);
Obj _35reg154 = primCons(intern("set"), _35reg153);
__nargs = 2;
__arg1 = _35reg154;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val147 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg146= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun1011, 2, _35val147, _35reg146);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val144 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg145 = primCons(_35val144, Nil);
Obj _35reg146 = primCons(intern("quote"), _35reg145);
pushCont(co, 11, _35clofun1011, 2, exp, _35reg146);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
pushCont(co, 12, _35clofun1011, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg156 = primIsCons(l);
if (True == _35reg156) {
Obj _35reg157 = primCar(l);
Obj _35reg158 = primEQ(_35reg157, x);
if (True == _35reg158) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg159 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj x = __arg1;
Obj _35reg161 = primIsCons(x);
Obj _35reg162 = primNot(_35reg161);
__nargs = 2;
__arg1 = _35reg162;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val170 = __arg1;
Obj _35val168= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg167= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg171 = primCons(_35val170, Nil);
Obj _35reg172 = primCons(_35val168, _35reg171);
Obj _35reg173 = primCons(_35reg167, _35reg172);
Obj _35reg174 = primCons(intern("let"), _35reg173);
__nargs = 2;
__arg1 = _35reg174;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val169 = __arg1;
Obj _35val168= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg167= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun1011, 2, _35val168, _35reg167);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-let"));
__arg1 = _35val169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val168 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg167= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun1011, 2, _35val168, _35reg167);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val165 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val165) {
Obj _35reg166 = primCar(exp);
__nargs = 2;
__arg1 = _35reg166;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1011) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg167 = primCar(exp);
pushCont(co, 18, _35clofun1011, 2, exp, _35reg167);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg164 = primCdr(exp);
pushCont(co, 19, _35clofun1011, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg164;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1011) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1010(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x = __arg1;
Obj _35reg38 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg38;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg40 = primCdr(x);
Obj _35reg41 = primCar(_35reg40);
__nargs = 2;
__arg1 = _35reg41;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg43 = primCar(x);
Obj _35reg44 = primCar(_35reg43);
__nargs = 2;
__arg1 = _35reg44;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg46 = primCar(x);
Obj _35reg47 = primCdr(_35reg46);
__nargs = 2;
__arg1 = _35reg47;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg49 = primCdr(x);
Obj _35reg50 = primCdr(_35reg49);
__nargs = 2;
__arg1 = _35reg50;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg52 = primCdr(x);
Obj _35reg53 = primCdr(_35reg52);
Obj _35reg54 = primCar(_35reg53);
__nargs = 2;
__arg1 = _35reg54;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg56 = primCdr(x);
Obj _35reg57 = primCdr(_35reg56);
Obj _35reg58 = primCdr(_35reg57);
Obj _35reg59 = primCar(_35reg58);
__nargs = 2;
__arg1 = _35reg59;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg61 = primCdr(x);
Obj _35reg62 = primCdr(_35reg61);
Obj _35reg63 = primCdr(_35reg62);
__nargs = 2;
__arg1 = _35reg63;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val68 = __arg1;
Obj _35reg66= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg69 = primCons(_35val68, Nil);
Obj _35reg70 = primCons(_35reg66, _35reg69);
Obj _35reg71 = primCons(intern("cons"), _35reg70);
__nargs = 2;
__arg1 = _35reg71;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg65 = primIsCons(exp);
if (True == _35reg65) {
Obj _35reg66 = primCar(exp);
Obj _35reg67 = primCdr(exp);
pushCont(co, 8, _35clofun1010, 1, _35reg66);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg67;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg73 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg73;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg75 = primIsCons(l);
if (True == _35reg75) {
Obj _35reg76 = primCar(l);
Obj _35reg77 = primCons(_35reg76, res);
Obj _35reg78 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.reverse-h"));
__arg1 = _35reg77;
__arg2 = _35reg78;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val84 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg85 = primCons(_35val84, res);
Obj _35reg86 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg85;
__arg2 = f;
__arg3 = _35reg86;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg82 = primIsCons(l);
if (True == _35reg82) {
Obj _35reg83 = primCar(l);
pushCont(co, 12, _35clofun1010, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg83;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj f = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = Nil;
__arg2 = f;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
Obj _35reg92 = primCons(globalRef(intern("*protect-symbol*")), x);
__nargs = 2;
__arg1 = _35reg92;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg94 = primCons(n, v);
Obj _35reg95 = primCons(_35reg94, globalRef(intern("*macros*")));
Obj _35reg96 = primSet(intern("*macros*"), _35reg95);
__nargs = 2;
__arg1 = _35reg96;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj item = __arg1;
Obj _35reg99 = primIsCons(closureRef(co, 0));
if (True == _35reg99) {
Obj _35reg100 = primCar(closureRef(co, 0));
Obj _35reg101 = primCar(item);
Obj _35reg102 = primEQ(_35reg100, _35reg101);
if (True == _35reg102) {
if (True == True) {
Obj _35reg103 = primCdr(item);
__nargs = 2;
__arg0 = _35reg103;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg104 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg104;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg105 = primCdr(item);
__nargs = 2;
__arg0 = _35reg105;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg106 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg107 = primCdr(item);
__nargs = 2;
__arg0 = _35reg107;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg108 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg98 = primEQ(Nil, macros);
if (True == _35reg98) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg109 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(17, _35clofun1010, 1, 2, exp, macros);
__arg1 = _35reg109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = exp;
__arg2 = globalRef(intern("*macros*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1010) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val120 = __arg1;
Obj _35val118= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg121 = primCons(_35val120, Nil);
Obj _35reg122 = primCons(_35val118, _35reg121);
Obj _35reg123 = primCons(intern("lambda"), _35reg122);
__nargs = 2;
__arg1 = _35reg123;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1010) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

