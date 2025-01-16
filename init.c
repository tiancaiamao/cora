#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun1064(struct Cora* co);
void _35clofun1063(struct Cora* co);
void _35clofun1062(struct Cora* co);
void _35clofun1061(struct Cora* co);
void _35clofun1060(struct Cora* co);
void _35clofun1059(struct Cora* co);
void _35clofun1058(struct Cora* co);
void _35clofun1057(struct Cora* co);
void _35clofun1056(struct Cora* co);
void _35clofun1055(struct Cora* co);
void _35clofun1054(struct Cora* co);


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
Obj _35reg46 = primSet(co, intern("null?"), makeNative(0, _35clofun1054, 1, 0));
Obj _35reg49 = primSet(co, intern("cadr"), makeNative(1, _35clofun1054, 1, 0));
Obj _35reg52 = primSet(co, intern("caar"), makeNative(2, _35clofun1054, 1, 0));
Obj _35reg55 = primSet(co, intern("cdar"), makeNative(3, _35clofun1054, 1, 0));
Obj _35reg58 = primSet(co, intern("cddr"), makeNative(4, _35clofun1054, 1, 0));
Obj _35reg62 = primSet(co, intern("caddr"), makeNative(5, _35clofun1054, 1, 0));
Obj _35reg67 = primSet(co, intern("cadddr"), makeNative(6, _35clofun1054, 1, 0));
Obj _35reg71 = primSet(co, intern("cdddr"), makeNative(7, _35clofun1054, 1, 0));
Obj _35reg79 = primSet(co, intern("rcons"), makeNative(9, _35clofun1054, 1, 0));
Obj _35reg81 = primSet(co, intern("pair?"), makeNative(10, _35clofun1054, 1, 0));
Obj _35reg86 = primSet(co, intern("cora/init#reverse-h"), makeNative(11, _35clofun1054, 2, 0));
pushCont(co, 10, _35clofun1064, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse-h"));
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

void _35clofun1064(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val538 = __arg1;
Obj _35reg801 = primSet(co, intern("cora/init#propagate-boolean0"), makeNative(10, _35clofun1061, 1, 0));
Obj _35reg959 = primSet(co, intern("cora/init#propagate-boolean"), makeNative(12, _35clofun1062, 1, 0));
Obj _35reg961 = primSet(co, intern("macroexpand"), makeNative(14, _35clofun1062, 1, 0));
Obj _35reg985 = primSet(co, intern("cora/init#rewrite-begin"), makeNative(19, _35clofun1062, 1, 0));
pushCont(co, 20, _35clofun1063, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(20, _35clofun1062, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val430 = __arg1;
Obj _35reg482 = primSet(co, intern("cora/init#extract-rules1"), makeNative(14, _35clofun1059, 3, 0));
Obj _35reg483 = primSet(co, intern("cora/init#extract-rules"), makeNative(15, _35clofun1059, 1, 0));
Obj _35reg488 = primSet(co, intern("cora/init#rules-patterns"), makeNative(18, _35clofun1059, 2, 0));
Obj _35reg492 = primSet(co, intern("cora/init#length-h"), makeNative(19, _35clofun1059, 2, 0));
Obj _35reg493 = primSet(co, intern("length"), makeNative(20, _35clofun1059, 1, 0));
Obj _35reg501 = primSet(co, intern("cora/init#filter-h"), makeNative(1, _35clofun1060, 3, 0));
Obj _35reg502 = primSet(co, intern("filter"), makeNative(2, _35clofun1060, 2, 0));
Obj _35reg508 = primSet(co, intern("append"), makeNative(4, _35clofun1060, 2, 0));
Obj _35reg519 = primSet(co, intern("cora/init#rules-arg-count"), makeNative(11, _35clofun1060, 1, 0));
Obj _35reg525 = primSet(co, intern("cora/init#gen-paramenters"), makeNative(13, _35clofun1060, 1, 0));
pushCont(co, 0, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(19, _35clofun1060, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val237 = __arg1;
Obj _35reg291 = primSet(co, intern("cora/init#match-cons-expander"), makeNative(11, _35clofun1057, 4, 0));
Obj _35reg324 = primSet(co, intern("cora/init#match1"), makeNative(17, _35clofun1057, 4, 0));
Obj _35reg351 = primSet(co, intern("cora/init#extract-rule-action"), makeNative(4, _35clofun1058, 2, 0));
Obj _35reg403 = primSet(co, intern("cora/init#match-helper"), makeNative(20, _35clofun1058, 2, 0));
Obj _35reg429 = primSet(co, intern("cora/init#rewrite-match"), makeNative(6, _35clofun1059, 1, 0));
pushCont(co, 1, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(7, _35clofun1059, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val222 = __arg1;
Obj _35reg225 = primSet(co, intern("boolean?"), makeNative(10, _35clofun1056, 1, 0));
Obj _35reg235 = primSet(co, intern("cora/init#rcons1"), makeNative(13, _35clofun1056, 1, 0));
pushCont(co, 2, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(14, _35clofun1056, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val208 = __arg1;
Obj _35reg220 = primSet(co, intern("cora/init#rewrite-and"), makeNative(8, _35clofun1056, 1, 0));
pushCont(co, 3, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(9, _35clofun1056, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val194 = __arg1;
Obj _35reg206 = primSet(co, intern("cora/init#rewrite-or"), makeNative(5, _35clofun1056, 1, 0));
pushCont(co, 4, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(6, _35clofun1056, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val180 = __arg1;
pushCont(co, 5, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(3, _35clofun1056, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val158 = __arg1;
Obj _35reg163 = primSet(co, intern("elem?"), makeNative(13, _35clofun1055, 2, 0));
Obj _35reg166 = primSet(co, intern("atom?"), makeNative(14, _35clofun1055, 1, 0));
Obj _35reg178 = primSet(co, intern("cora/init#rewrite-let"), makeNative(19, _35clofun1055, 1, 0));
pushCont(co, 6, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(20, _35clofun1055, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val148 = __arg1;
pushCont(co, 7, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(12, _35clofun1055, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val146 = __arg1;
pushCont(co, 8, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(8, _35clofun1055, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val87 = __arg1;
Obj _35reg88 = primSet(co, intern("reverse"), _35val87);
Obj _35reg94 = primSet(co, intern("map-h"), makeNative(13, _35clofun1054, 3, 0));
Obj _35reg95 = primSet(co, intern("map"), makeNative(14, _35clofun1054, 2, 0));
Obj _35reg96 = primSet(co, intern("*macros*"), Nil);
Obj _35reg97 = primGenSym(intern("protect"));
Obj _35reg98 = primSet(co, intern("*protect-symbol*"), _35reg97);
Obj _35reg102 = primSet(co, intern("cora/init#add-to-*macros*"), makeNative(15, _35clofun1054, 2, 0));
Obj _35reg115 = primSet(co, intern("cora/init#macroexpand1-h"), makeNative(17, _35clofun1054, 2, 0));
Obj _35reg116 = primSet(co, intern("cora/init#macroexpand1"), makeNative(18, _35clofun1054, 1, 0));
Obj _35reg133 = primSet(co, intern("cora/init#macroexpand-boot"), makeNative(3, _35clofun1055, 1, 0));
Obj _35reg134 = primSet(co, intern("macroexpand"), globalRef(intern("cora/init#macroexpand-boot")));
Obj _35reg145 = primSet(co, intern("defmacro-macro"), makeNative(7, _35clofun1055, 1, 0));
pushCont(co, 9, _35clofun1064, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1064) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1063(struct Cora* co){
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
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc37 = makeNative(0, _35clofun1063, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1063) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val992 = __arg1;
Obj _35reg993 = primCons(intern("list"), _35val992);
__nargs = 2;
__arg1 = _35reg993;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1063) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35cc36 = makeNative(1, _35clofun1063, 0, 1, closureRef(co, 0));
Obj _35reg988 = primIsCons(closureRef(co, 0));
if (True == _35reg988) {
Obj _35reg989 = primCar(closureRef(co, 0));
Obj x = _35reg989;
Obj _35reg990 = primCdr(closureRef(co, 0));
Obj more = _35reg990;
Obj _35reg991 = primCons(x, more);
pushCont(co, 2, _35clofun1063, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#rewrite-backquote"));
__arg2 = _35reg991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc36;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc35 = makeNative(3, _35clofun1063, 0, 1, closureRef(co, 0));
Obj _35reg994 = primIsCons(closureRef(co, 0));
if (True == _35reg994) {
Obj _35reg995 = primCar(closureRef(co, 0));
Obj _35reg996 = primEQ(intern("unquote"), _35reg995);
if (True == _35reg996) {
Obj _35reg997 = primCdr(closureRef(co, 0));
Obj _35reg998 = primIsCons(_35reg997);
if (True == _35reg998) {
Obj _35reg999 = primCdr(closureRef(co, 0));
Obj _35reg1000 = primCar(_35reg999);
Obj x = _35reg1000;
Obj _35reg1001 = primCdr(closureRef(co, 0));
Obj _35reg1002 = primCdr(_35reg1001);
Obj _35reg1003 = primEQ(Nil, _35reg1002);
if (True == _35reg1003) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1063) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc35;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35p33 = __arg1;
Obj _35cc34 = makeNative(4, _35clofun1063, 0, 1, _35p33);
Obj x = _35p33;
Obj _35reg1004 = primIsSymbol(x);
if (True == _35reg1004) {
Obj _35reg1005 = primCons(x, Nil);
Obj _35reg1006 = primCons(intern("quote"), _35reg1005);
__nargs = 2;
__arg1 = _35reg1006;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1063) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc34;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1008 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-backquote"));
__arg1 = _35val1008;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun1063, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1010 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exports= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = _35val1010;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc44 = makeNative(8, _35clofun1063, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
pushCont(co, 9, _35clofun1063, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc43 = makeNative(10, _35clofun1063, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1011 = primIsCons(closureRef(co, 0));
if (True == _35reg1011) {
Obj _35reg1012 = primCar(closureRef(co, 0));
Obj _35reg1013 = primIsCons(_35reg1012);
if (True == _35reg1013) {
Obj _35reg1014 = primCar(closureRef(co, 0));
Obj _35reg1015 = primCar(_35reg1014);
Obj _35reg1016 = primEQ(intern("export"), _35reg1015);
if (True == _35reg1016) {
Obj _35reg1017 = primCar(closureRef(co, 0));
Obj _35reg1018 = primCdr(_35reg1017);
Obj more = _35reg1018;
Obj _35reg1019 = primCdr(closureRef(co, 0));
Obj rest = _35reg1019;
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#parse-define-library-h"));
__arg1 = rest;
__arg2 = imports;
__arg3 = more;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc43;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc43;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc43;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p38 = __arg1;
Obj _35p39 = __arg2;
Obj _35p40 = __arg3;
Obj _35p41 = co->args[4];
Obj _35cc42 = makeNative(11, _35clofun1063, 0, 4, _35p38, _35p39, _35p40, _35p41);
Obj _35reg1020 = primIsCons(_35p38);
if (True == _35reg1020) {
Obj _35reg1021 = primCar(_35p38);
Obj _35reg1022 = primIsCons(_35reg1021);
if (True == _35reg1022) {
Obj _35reg1023 = primCar(_35p38);
Obj _35reg1024 = primCar(_35reg1023);
Obj _35reg1025 = primEQ(intern("import"), _35reg1024);
if (True == _35reg1025) {
Obj _35reg1026 = primCar(_35p38);
Obj _35reg1027 = primCdr(_35reg1026);
Obj _35reg1028 = primIsCons(_35reg1027);
if (True == _35reg1028) {
Obj _35reg1029 = primCar(_35p38);
Obj _35reg1030 = primCdr(_35reg1029);
Obj _35reg1031 = primCar(_35reg1030);
Obj lib = _35reg1031;
Obj _35reg1032 = primCar(_35p38);
Obj _35reg1033 = primCdr(_35reg1032);
Obj _35reg1034 = primCdr(_35reg1033);
Obj _35reg1035 = primEQ(Nil, _35reg1034);
if (True == _35reg1035) {
Obj _35reg1036 = primCdr(_35p38);
Obj rest = _35reg1036;
Obj imports = _35p39;
Obj exports = _35p40;
Obj k = _35p41;
Obj _35reg1037 = primCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#parse-define-library-h"));
__arg1 = rest;
__arg2 = _35reg1037;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc42;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc42;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc42;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc42;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc42;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj data = __arg1;
Obj k = __arg2;
__nargs = 5;
__arg0 = globalRef(intern("cora/init#parse-define-library-h"));
__arg1 = data;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _35reg1043 = primCons(export, Nil);
Obj _35reg1044 = primCons(intern("backquote"), _35reg1043);
Obj _35reg1045 = primCons(_35reg1044, Nil);
Obj _35reg1046 = primCons(intern("*ns-export*"), _35reg1045);
Obj _35reg1047 = primCons(intern("def"), _35reg1046);
Obj _35reg1048 = primCons(_35reg1047, body);
Obj _35reg1049 = primCons(intern("begin"), _35reg1048);
Obj _35reg1050 = primCons(_35reg1049, Nil);
Obj _35reg1051 = primCons(import, _35reg1050);
Obj _35reg1052 = primCons(closureRef(co, 0), _35reg1051);
Obj _35reg1053 = primCons(intern("ns"), _35reg1052);
__nargs = 2;
__arg1 = _35reg1053;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1063) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val1042 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _35val1042;
__arg1 = makeNative(14, _35clofun1063, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1041 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun1063, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#parse-define-library"));
__arg1 = _35val1041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val1040 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj path = _35val1040;
pushCont(co, 16, _35clofun1063, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj sexp = __arg1;
pushCont(co, 17, _35clofun1063, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1009 = __arg1;
Obj _35reg1038 = primSet(co, intern("cora/init#parse-define-library-h"), makeNative(12, _35clofun1063, 4, 0));
Obj _35reg1039 = primSet(co, intern("cora/init#parse-define-library"), makeNative(13, _35clofun1063, 2, 0));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("define-library");
__arg2 = makeNative(18, _35clofun1063, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val987 = __arg1;
Obj _35reg1007 = primSet(co, intern("cora/init#rewrite-backquote"), makeNative(5, _35clofun1063, 1, 0));
pushCont(co, 19, _35clofun1063, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(7, _35clofun1063, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1063) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1062(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc24 = makeNative(19, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg860 = primIsCons(closureRef(co, 0));
if (True == _35reg860) {
Obj _35reg861 = primCar(closureRef(co, 0));
Obj _35reg862 = primEQ(intern("not"), _35reg861);
if (True == _35reg862) {
Obj _35reg863 = primCdr(closureRef(co, 0));
Obj _35reg864 = primIsCons(_35reg863);
if (True == _35reg864) {
Obj _35reg865 = primCdr(closureRef(co, 0));
Obj _35reg866 = primCar(_35reg865);
Obj x = _35reg866;
Obj _35reg867 = primCdr(closureRef(co, 0));
Obj _35reg868 = primCdr(_35reg867);
Obj _35reg869 = primEQ(Nil, _35reg868);
if (True == _35reg869) {
pushCont(co, 20, _35clofun1061, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc24;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val883 = __arg1;
Obj x1 = _35val883;
Obj _35reg884 = primCons(x1, Nil);
Obj _35reg885 = primCons(intern("null?"), _35reg884);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg885;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc23 = makeNative(0, _35clofun1062, 0, 1, closureRef(co, 0));
Obj _35reg873 = primIsCons(closureRef(co, 0));
if (True == _35reg873) {
Obj _35reg874 = primCar(closureRef(co, 0));
Obj _35reg875 = primEQ(intern("null?"), _35reg874);
if (True == _35reg875) {
Obj _35reg876 = primCdr(closureRef(co, 0));
Obj _35reg877 = primIsCons(_35reg876);
if (True == _35reg877) {
Obj _35reg878 = primCdr(closureRef(co, 0));
Obj _35reg879 = primCar(_35reg878);
Obj x = _35reg879;
Obj _35reg880 = primCdr(closureRef(co, 0));
Obj _35reg881 = primCdr(_35reg880);
Obj _35reg882 = primEQ(Nil, _35reg881);
if (True == _35reg882) {
pushCont(co, 1, _35clofun1062, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc23;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val904 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val904;
Obj _35reg905 = primCons(y1, Nil);
Obj _35reg906 = primCons(x1, _35reg905);
Obj _35reg907 = primCons(intern("and"), _35reg906);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg907;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val903 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val903;
pushCont(co, 3, _35clofun1062, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc22 = makeNative(2, _35clofun1062, 0, 1, closureRef(co, 0));
Obj _35reg886 = primIsCons(closureRef(co, 0));
if (True == _35reg886) {
Obj _35reg887 = primCar(closureRef(co, 0));
Obj _35reg888 = primEQ(intern("and"), _35reg887);
if (True == _35reg888) {
Obj _35reg889 = primCdr(closureRef(co, 0));
Obj _35reg890 = primIsCons(_35reg889);
if (True == _35reg890) {
Obj _35reg891 = primCdr(closureRef(co, 0));
Obj _35reg892 = primCar(_35reg891);
Obj x = _35reg892;
Obj _35reg893 = primCdr(closureRef(co, 0));
Obj _35reg894 = primCdr(_35reg893);
Obj _35reg895 = primIsCons(_35reg894);
if (True == _35reg895) {
Obj _35reg896 = primCdr(closureRef(co, 0));
Obj _35reg897 = primCdr(_35reg896);
Obj _35reg898 = primCar(_35reg897);
Obj y = _35reg898;
Obj _35reg899 = primCdr(closureRef(co, 0));
Obj _35reg900 = primCdr(_35reg899);
Obj _35reg901 = primCdr(_35reg900);
Obj _35reg902 = primEQ(Nil, _35reg901);
if (True == _35reg902) {
pushCont(co, 4, _35clofun1062, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc22;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val918 = __arg1;
Obj x1 = _35val918;
Obj _35reg919 = primCons(x1, Nil);
Obj _35reg920 = primCons(intern("cdr"), _35reg919);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc21 = makeNative(5, _35clofun1062, 0, 1, closureRef(co, 0));
Obj _35reg908 = primIsCons(closureRef(co, 0));
if (True == _35reg908) {
Obj _35reg909 = primCar(closureRef(co, 0));
Obj _35reg910 = primEQ(intern("cdr"), _35reg909);
if (True == _35reg910) {
Obj _35reg911 = primCdr(closureRef(co, 0));
Obj _35reg912 = primIsCons(_35reg911);
if (True == _35reg912) {
Obj _35reg913 = primCdr(closureRef(co, 0));
Obj _35reg914 = primCar(_35reg913);
Obj x = _35reg914;
Obj _35reg915 = primCdr(closureRef(co, 0));
Obj _35reg916 = primCdr(_35reg915);
Obj _35reg917 = primEQ(Nil, _35reg916);
if (True == _35reg917) {
pushCont(co, 6, _35clofun1062, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc21;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val931 = __arg1;
Obj x1 = _35val931;
Obj _35reg932 = primCons(x1, Nil);
Obj _35reg933 = primCons(intern("car"), _35reg932);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg933;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc20 = makeNative(7, _35clofun1062, 0, 1, closureRef(co, 0));
Obj _35reg921 = primIsCons(closureRef(co, 0));
if (True == _35reg921) {
Obj _35reg922 = primCar(closureRef(co, 0));
Obj _35reg923 = primEQ(intern("car"), _35reg922);
if (True == _35reg923) {
Obj _35reg924 = primCdr(closureRef(co, 0));
Obj _35reg925 = primIsCons(_35reg924);
if (True == _35reg925) {
Obj _35reg926 = primCdr(closureRef(co, 0));
Obj _35reg927 = primCar(_35reg926);
Obj x = _35reg927;
Obj _35reg928 = primCdr(closureRef(co, 0));
Obj _35reg929 = primCdr(_35reg928);
Obj _35reg930 = primEQ(Nil, _35reg929);
if (True == _35reg930) {
pushCont(co, 8, _35clofun1062, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val944 = __arg1;
Obj x1 = _35val944;
Obj _35reg945 = primCons(x1, Nil);
Obj _35reg946 = primCons(intern("cons?"), _35reg945);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc19 = makeNative(9, _35clofun1062, 0, 1, closureRef(co, 0));
Obj _35reg934 = primIsCons(closureRef(co, 0));
if (True == _35reg934) {
Obj _35reg935 = primCar(closureRef(co, 0));
Obj _35reg936 = primEQ(intern("cons?"), _35reg935);
if (True == _35reg936) {
Obj _35reg937 = primCdr(closureRef(co, 0));
Obj _35reg938 = primIsCons(_35reg937);
if (True == _35reg938) {
Obj _35reg939 = primCdr(closureRef(co, 0));
Obj _35reg940 = primCar(_35reg939);
Obj x = _35reg940;
Obj _35reg941 = primCdr(closureRef(co, 0));
Obj _35reg942 = primCdr(_35reg941);
Obj _35reg943 = primEQ(Nil, _35reg942);
if (True == _35reg943) {
pushCont(co, 10, _35clofun1062, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc19;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p17 = __arg1;
Obj _35cc18 = makeNative(11, _35clofun1062, 0, 1, _35p17);
Obj _35reg947 = primIsCons(_35p17);
if (True == _35reg947) {
Obj _35reg948 = primCar(_35p17);
Obj _35reg949 = primEQ(intern("quote"), _35reg948);
if (True == _35reg949) {
Obj _35reg950 = primCdr(_35p17);
Obj _35reg951 = primIsCons(_35reg950);
if (True == _35reg951) {
Obj _35reg952 = primCdr(_35p17);
Obj _35reg953 = primCar(_35reg952);
Obj x = _35reg953;
Obj _35reg954 = primCdr(_35p17);
Obj _35reg955 = primCdr(_35reg954);
Obj _35reg956 = primEQ(Nil, _35reg955);
if (True == _35reg956) {
Obj _35reg957 = primCons(x, Nil);
Obj _35reg958 = primCons(intern("quote"), _35reg957);
__nargs = 2;
__arg1 = _35reg958;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1062) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc18;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val960 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = _35val960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
pushCont(co, 13, _35clofun1062, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val965 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg966 = primCons(_35val965, Nil);
Obj _35reg967 = primCons(x, _35reg966);
Obj _35reg968 = primCons(intern("do"), _35reg967);
__nargs = 2;
__arg1 = _35reg968;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1062) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35cc32 = makeNative(15, _35clofun1062, 0, 0);
Obj _35reg962 = primIsCons(closureRef(co, 0));
if (True == _35reg962) {
Obj _35reg963 = primCar(closureRef(co, 0));
Obj x = _35reg963;
Obj _35reg964 = primCdr(closureRef(co, 0));
Obj y = _35reg964;
pushCont(co, 16, _35clofun1062, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc32;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc31 = makeNative(17, _35clofun1062, 0, 1, closureRef(co, 0));
Obj _35reg969 = primIsCons(closureRef(co, 0));
if (True == _35reg969) {
Obj _35reg970 = primCar(closureRef(co, 0));
Obj x = _35reg970;
Obj _35reg971 = primCdr(closureRef(co, 0));
Obj _35reg972 = primIsCons(_35reg971);
if (True == _35reg972) {
Obj _35reg973 = primCdr(closureRef(co, 0));
Obj _35reg974 = primCar(_35reg973);
Obj y = _35reg974;
Obj _35reg975 = primCdr(closureRef(co, 0));
Obj _35reg976 = primCdr(_35reg975);
Obj _35reg977 = primEQ(Nil, _35reg976);
if (True == _35reg977) {
Obj _35reg978 = primCons(y, Nil);
Obj _35reg979 = primCons(x, _35reg978);
Obj _35reg980 = primCons(intern("do"), _35reg979);
__nargs = 2;
__arg1 = _35reg980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1062) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc31;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc31;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc31;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35p29 = __arg1;
Obj _35cc30 = makeNative(18, _35clofun1062, 0, 1, _35p29);
Obj _35reg981 = primIsCons(_35p29);
if (True == _35reg981) {
Obj _35reg982 = primCar(_35p29);
Obj x = _35reg982;
Obj _35reg983 = primCdr(_35p29);
Obj _35reg984 = primEQ(Nil, _35reg983);
if (True == _35reg984) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1062) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc30;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc30;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg986 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = _35reg986;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1062) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1061(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc16 = makeNative(20, _35clofun1060, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35cc15 = makeNative(0, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg539 = primIsCons(closureRef(co, 0));
if (True == _35reg539) {
Obj _35reg540 = primCar(closureRef(co, 0));
Obj _35reg541 = primEQ(intern("if"), _35reg540);
if (True == _35reg541) {
Obj _35reg542 = primCdr(closureRef(co, 0));
Obj _35reg543 = primIsCons(_35reg542);
if (True == _35reg543) {
Obj _35reg544 = primCdr(closureRef(co, 0));
Obj _35reg545 = primCar(_35reg544);
Obj _35reg546 = primEQ(False, _35reg545);
if (True == _35reg546) {
Obj _35reg547 = primCdr(closureRef(co, 0));
Obj _35reg548 = primCdr(_35reg547);
Obj _35reg549 = primIsCons(_35reg548);
if (True == _35reg549) {
Obj _35reg550 = primCdr(closureRef(co, 0));
Obj _35reg551 = primCdr(_35reg550);
Obj _35reg552 = primCar(_35reg551);
Obj y = _35reg552;
Obj _35reg553 = primCdr(closureRef(co, 0));
Obj _35reg554 = primCdr(_35reg553);
Obj _35reg555 = primCdr(_35reg554);
Obj _35reg556 = primIsCons(_35reg555);
if (True == _35reg556) {
Obj _35reg557 = primCdr(closureRef(co, 0));
Obj _35reg558 = primCdr(_35reg557);
Obj _35reg559 = primCdr(_35reg558);
Obj _35reg560 = primCar(_35reg559);
Obj z = _35reg560;
Obj _35reg561 = primCdr(closureRef(co, 0));
Obj _35reg562 = primCdr(_35reg561);
Obj _35reg563 = primCdr(_35reg562);
Obj _35reg564 = primCdr(_35reg563);
Obj _35reg565 = primEQ(Nil, _35reg564);
if (True == _35reg565) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc15;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc14 = makeNative(1, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg566 = primIsCons(closureRef(co, 0));
if (True == _35reg566) {
Obj _35reg567 = primCar(closureRef(co, 0));
Obj _35reg568 = primEQ(intern("if"), _35reg567);
if (True == _35reg568) {
Obj _35reg569 = primCdr(closureRef(co, 0));
Obj _35reg570 = primIsCons(_35reg569);
if (True == _35reg570) {
Obj _35reg571 = primCdr(closureRef(co, 0));
Obj _35reg572 = primCar(_35reg571);
Obj _35reg573 = primEQ(True, _35reg572);
if (True == _35reg573) {
Obj _35reg574 = primCdr(closureRef(co, 0));
Obj _35reg575 = primCdr(_35reg574);
Obj _35reg576 = primIsCons(_35reg575);
if (True == _35reg576) {
Obj _35reg577 = primCdr(closureRef(co, 0));
Obj _35reg578 = primCdr(_35reg577);
Obj _35reg579 = primCar(_35reg578);
Obj y = _35reg579;
Obj _35reg580 = primCdr(closureRef(co, 0));
Obj _35reg581 = primCdr(_35reg580);
Obj _35reg582 = primCdr(_35reg581);
Obj _35reg583 = primIsCons(_35reg582);
if (True == _35reg583) {
Obj _35reg584 = primCdr(closureRef(co, 0));
Obj _35reg585 = primCdr(_35reg584);
Obj _35reg586 = primCdr(_35reg585);
Obj _35reg587 = primCar(_35reg586);
Obj z = _35reg587;
Obj _35reg588 = primCdr(closureRef(co, 0));
Obj _35reg589 = primCdr(_35reg588);
Obj _35reg590 = primCdr(_35reg589);
Obj _35reg591 = primCdr(_35reg590);
Obj _35reg592 = primEQ(Nil, _35reg591);
if (True == _35reg592) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc14;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc13 = makeNative(2, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg593 = primIsCons(closureRef(co, 0));
if (True == _35reg593) {
Obj _35reg594 = primCar(closureRef(co, 0));
Obj _35reg595 = primEQ(intern("not"), _35reg594);
if (True == _35reg595) {
Obj _35reg596 = primCdr(closureRef(co, 0));
Obj _35reg597 = primIsCons(_35reg596);
if (True == _35reg597) {
Obj _35reg598 = primCdr(closureRef(co, 0));
Obj _35reg599 = primCar(_35reg598);
Obj _35reg600 = primEQ(False, _35reg599);
if (True == _35reg600) {
Obj _35reg601 = primCdr(closureRef(co, 0));
Obj _35reg602 = primCdr(_35reg601);
Obj _35reg603 = primEQ(Nil, _35reg602);
if (True == _35reg603) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc13;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc12 = makeNative(3, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg604 = primIsCons(closureRef(co, 0));
if (True == _35reg604) {
Obj _35reg605 = primCar(closureRef(co, 0));
Obj _35reg606 = primEQ(intern("not"), _35reg605);
if (True == _35reg606) {
Obj _35reg607 = primCdr(closureRef(co, 0));
Obj _35reg608 = primIsCons(_35reg607);
if (True == _35reg608) {
Obj _35reg609 = primCdr(closureRef(co, 0));
Obj _35reg610 = primCar(_35reg609);
Obj _35reg611 = primEQ(True, _35reg610);
if (True == _35reg611) {
Obj _35reg612 = primCdr(closureRef(co, 0));
Obj _35reg613 = primCdr(_35reg612);
Obj _35reg614 = primEQ(Nil, _35reg613);
if (True == _35reg614) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc12;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc11 = makeNative(4, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg615 = primIsCons(closureRef(co, 0));
if (True == _35reg615) {
Obj _35reg616 = primCar(closureRef(co, 0));
Obj _35reg617 = primEQ(intern("null?"), _35reg616);
if (True == _35reg617) {
Obj _35reg618 = primCdr(closureRef(co, 0));
Obj _35reg619 = primIsCons(_35reg618);
if (True == _35reg619) {
Obj _35reg620 = primCdr(closureRef(co, 0));
Obj _35reg621 = primCar(_35reg620);
Obj _35reg622 = primIsCons(_35reg621);
if (True == _35reg622) {
Obj _35reg623 = primCdr(closureRef(co, 0));
Obj _35reg624 = primCar(_35reg623);
Obj _35reg625 = primCar(_35reg624);
Obj _35reg626 = primEQ(intern("cons"), _35reg625);
if (True == _35reg626) {
Obj _35reg627 = primCdr(closureRef(co, 0));
Obj _35reg628 = primCar(_35reg627);
Obj _35reg629 = primCdr(_35reg628);
Obj _35reg630 = primIsCons(_35reg629);
if (True == _35reg630) {
Obj _35reg631 = primCdr(closureRef(co, 0));
Obj _35reg632 = primCar(_35reg631);
Obj _35reg633 = primCdr(_35reg632);
Obj _35reg634 = primCar(_35reg633);
Obj __ = _35reg634;
Obj _35reg635 = primCdr(closureRef(co, 0));
Obj _35reg636 = primCar(_35reg635);
Obj _35reg637 = primCdr(_35reg636);
Obj _35reg638 = primCdr(_35reg637);
Obj _35reg639 = primIsCons(_35reg638);
if (True == _35reg639) {
Obj _35reg640 = primCdr(closureRef(co, 0));
Obj _35reg641 = primCar(_35reg640);
Obj _35reg642 = primCdr(_35reg641);
Obj _35reg643 = primCdr(_35reg642);
Obj _35reg644 = primCar(_35reg643);
__ = _35reg644;
Obj _35reg645 = primCdr(closureRef(co, 0));
Obj _35reg646 = primCar(_35reg645);
Obj _35reg647 = primCdr(_35reg646);
Obj _35reg648 = primCdr(_35reg647);
Obj _35reg649 = primCdr(_35reg648);
Obj _35reg650 = primEQ(Nil, _35reg649);
if (True == _35reg650) {
Obj _35reg651 = primCdr(closureRef(co, 0));
Obj _35reg652 = primCdr(_35reg651);
Obj _35reg653 = primEQ(Nil, _35reg652);
if (True == _35reg653) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc11;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc10 = makeNative(5, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg654 = primIsCons(closureRef(co, 0));
if (True == _35reg654) {
Obj _35reg655 = primCar(closureRef(co, 0));
Obj _35reg656 = primEQ(intern("null?"), _35reg655);
if (True == _35reg656) {
Obj _35reg657 = primCdr(closureRef(co, 0));
Obj _35reg658 = primIsCons(_35reg657);
if (True == _35reg658) {
Obj _35reg659 = primCdr(closureRef(co, 0));
Obj _35reg660 = primCar(_35reg659);
Obj _35reg661 = primEQ(Nil, _35reg660);
if (True == _35reg661) {
Obj _35reg662 = primCdr(closureRef(co, 0));
Obj _35reg663 = primCdr(_35reg662);
Obj _35reg664 = primEQ(Nil, _35reg663);
if (True == _35reg664) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc10;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc9 = makeNative(6, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg665 = primIsCons(closureRef(co, 0));
if (True == _35reg665) {
Obj _35reg666 = primCar(closureRef(co, 0));
Obj _35reg667 = primEQ(intern("and"), _35reg666);
if (True == _35reg667) {
Obj _35reg668 = primCdr(closureRef(co, 0));
Obj _35reg669 = primIsCons(_35reg668);
if (True == _35reg669) {
Obj _35reg670 = primCdr(closureRef(co, 0));
Obj _35reg671 = primCar(_35reg670);
Obj _35reg672 = primEQ(True, _35reg671);
if (True == _35reg672) {
Obj _35reg673 = primCdr(closureRef(co, 0));
Obj _35reg674 = primCdr(_35reg673);
Obj _35reg675 = primIsCons(_35reg674);
if (True == _35reg675) {
Obj _35reg676 = primCdr(closureRef(co, 0));
Obj _35reg677 = primCdr(_35reg676);
Obj _35reg678 = primCar(_35reg677);
Obj _35reg679 = primEQ(True, _35reg678);
if (True == _35reg679) {
Obj _35reg680 = primCdr(closureRef(co, 0));
Obj _35reg681 = primCdr(_35reg680);
Obj _35reg682 = primCdr(_35reg681);
Obj _35reg683 = primEQ(Nil, _35reg682);
if (True == _35reg683) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc9;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc8 = makeNative(7, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg684 = primIsCons(closureRef(co, 0));
if (True == _35reg684) {
Obj _35reg685 = primCar(closureRef(co, 0));
Obj _35reg686 = primEQ(intern("cons?"), _35reg685);
if (True == _35reg686) {
Obj _35reg687 = primCdr(closureRef(co, 0));
Obj _35reg688 = primIsCons(_35reg687);
if (True == _35reg688) {
Obj _35reg689 = primCdr(closureRef(co, 0));
Obj _35reg690 = primCar(_35reg689);
Obj _35reg691 = primIsCons(_35reg690);
if (True == _35reg691) {
Obj _35reg692 = primCdr(closureRef(co, 0));
Obj _35reg693 = primCar(_35reg692);
Obj _35reg694 = primCar(_35reg693);
Obj _35reg695 = primEQ(intern("cons"), _35reg694);
if (True == _35reg695) {
Obj _35reg696 = primCdr(closureRef(co, 0));
Obj _35reg697 = primCar(_35reg696);
Obj _35reg698 = primCdr(_35reg697);
Obj _35reg699 = primIsCons(_35reg698);
if (True == _35reg699) {
Obj _35reg700 = primCdr(closureRef(co, 0));
Obj _35reg701 = primCar(_35reg700);
Obj _35reg702 = primCdr(_35reg701);
Obj _35reg703 = primCar(_35reg702);
Obj __ = _35reg703;
Obj _35reg704 = primCdr(closureRef(co, 0));
Obj _35reg705 = primCar(_35reg704);
Obj _35reg706 = primCdr(_35reg705);
Obj _35reg707 = primCdr(_35reg706);
Obj _35reg708 = primIsCons(_35reg707);
if (True == _35reg708) {
Obj _35reg709 = primCdr(closureRef(co, 0));
Obj _35reg710 = primCar(_35reg709);
Obj _35reg711 = primCdr(_35reg710);
Obj _35reg712 = primCdr(_35reg711);
Obj _35reg713 = primCar(_35reg712);
__ = _35reg713;
Obj _35reg714 = primCdr(closureRef(co, 0));
Obj _35reg715 = primCar(_35reg714);
Obj _35reg716 = primCdr(_35reg715);
Obj _35reg717 = primCdr(_35reg716);
Obj _35reg718 = primCdr(_35reg717);
Obj _35reg719 = primEQ(Nil, _35reg718);
if (True == _35reg719) {
Obj _35reg720 = primCdr(closureRef(co, 0));
Obj _35reg721 = primCdr(_35reg720);
Obj _35reg722 = primEQ(Nil, _35reg721);
if (True == _35reg722) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc8;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc7 = makeNative(8, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg723 = primIsCons(closureRef(co, 0));
if (True == _35reg723) {
Obj _35reg724 = primCar(closureRef(co, 0));
Obj _35reg725 = primEQ(intern("cdr"), _35reg724);
if (True == _35reg725) {
Obj _35reg726 = primCdr(closureRef(co, 0));
Obj _35reg727 = primIsCons(_35reg726);
if (True == _35reg727) {
Obj _35reg728 = primCdr(closureRef(co, 0));
Obj _35reg729 = primCar(_35reg728);
Obj _35reg730 = primIsCons(_35reg729);
if (True == _35reg730) {
Obj _35reg731 = primCdr(closureRef(co, 0));
Obj _35reg732 = primCar(_35reg731);
Obj _35reg733 = primCar(_35reg732);
Obj _35reg734 = primEQ(intern("cons"), _35reg733);
if (True == _35reg734) {
Obj _35reg735 = primCdr(closureRef(co, 0));
Obj _35reg736 = primCar(_35reg735);
Obj _35reg737 = primCdr(_35reg736);
Obj _35reg738 = primIsCons(_35reg737);
if (True == _35reg738) {
Obj _35reg739 = primCdr(closureRef(co, 0));
Obj _35reg740 = primCar(_35reg739);
Obj _35reg741 = primCdr(_35reg740);
Obj _35reg742 = primCar(_35reg741);
Obj __ = _35reg742;
Obj _35reg743 = primCdr(closureRef(co, 0));
Obj _35reg744 = primCar(_35reg743);
Obj _35reg745 = primCdr(_35reg744);
Obj _35reg746 = primCdr(_35reg745);
Obj _35reg747 = primIsCons(_35reg746);
if (True == _35reg747) {
Obj _35reg748 = primCdr(closureRef(co, 0));
Obj _35reg749 = primCar(_35reg748);
Obj _35reg750 = primCdr(_35reg749);
Obj _35reg751 = primCdr(_35reg750);
Obj _35reg752 = primCar(_35reg751);
Obj x = _35reg752;
Obj _35reg753 = primCdr(closureRef(co, 0));
Obj _35reg754 = primCar(_35reg753);
Obj _35reg755 = primCdr(_35reg754);
Obj _35reg756 = primCdr(_35reg755);
Obj _35reg757 = primCdr(_35reg756);
Obj _35reg758 = primEQ(Nil, _35reg757);
if (True == _35reg758) {
Obj _35reg759 = primCdr(closureRef(co, 0));
Obj _35reg760 = primCdr(_35reg759);
Obj _35reg761 = primEQ(Nil, _35reg760);
if (True == _35reg761) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc7;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p5 = __arg1;
Obj _35cc6 = makeNative(9, _35clofun1061, 0, 1, _35p5);
Obj _35reg762 = primIsCons(_35p5);
if (True == _35reg762) {
Obj _35reg763 = primCar(_35p5);
Obj _35reg764 = primEQ(intern("car"), _35reg763);
if (True == _35reg764) {
Obj _35reg765 = primCdr(_35p5);
Obj _35reg766 = primIsCons(_35reg765);
if (True == _35reg766) {
Obj _35reg767 = primCdr(_35p5);
Obj _35reg768 = primCar(_35reg767);
Obj _35reg769 = primIsCons(_35reg768);
if (True == _35reg769) {
Obj _35reg770 = primCdr(_35p5);
Obj _35reg771 = primCar(_35reg770);
Obj _35reg772 = primCar(_35reg771);
Obj _35reg773 = primEQ(intern("cons"), _35reg772);
if (True == _35reg773) {
Obj _35reg774 = primCdr(_35p5);
Obj _35reg775 = primCar(_35reg774);
Obj _35reg776 = primCdr(_35reg775);
Obj _35reg777 = primIsCons(_35reg776);
if (True == _35reg777) {
Obj _35reg778 = primCdr(_35p5);
Obj _35reg779 = primCar(_35reg778);
Obj _35reg780 = primCdr(_35reg779);
Obj _35reg781 = primCar(_35reg780);
Obj x = _35reg781;
Obj _35reg782 = primCdr(_35p5);
Obj _35reg783 = primCar(_35reg782);
Obj _35reg784 = primCdr(_35reg783);
Obj _35reg785 = primCdr(_35reg784);
Obj _35reg786 = primIsCons(_35reg785);
if (True == _35reg786) {
Obj _35reg787 = primCdr(_35p5);
Obj _35reg788 = primCar(_35reg787);
Obj _35reg789 = primCdr(_35reg788);
Obj _35reg790 = primCdr(_35reg789);
Obj _35reg791 = primCar(_35reg790);
Obj __ = _35reg791;
Obj _35reg792 = primCdr(_35p5);
Obj _35reg793 = primCar(_35reg792);
Obj _35reg794 = primCdr(_35reg793);
Obj _35reg795 = primCdr(_35reg794);
Obj _35reg796 = primCdr(_35reg795);
Obj _35reg797 = primEQ(Nil, _35reg796);
if (True == _35reg797) {
Obj _35reg798 = primCdr(_35p5);
Obj _35reg799 = primCdr(_35reg798);
Obj _35reg800 = primEQ(Nil, _35reg799);
if (True == _35reg800) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc6;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc28 = makeNative(11, _35clofun1061, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35cc27 = makeNative(12, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg802 = primIsCons(closureRef(co, 0));
if (True == _35reg802) {
Obj _35reg803 = primCar(closureRef(co, 0));
Obj f = _35reg803;
Obj _35reg804 = primCdr(closureRef(co, 0));
Obj args = _35reg804;
Obj _35reg805 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#propagate-boolean"));
__arg2 = _35reg805;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc27;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val823 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg824 = primCons(_35val823, Nil);
Obj _35reg825 = primCons(args, _35reg824);
Obj _35reg826 = primCons(intern("lambda"), _35reg825);
__nargs = 2;
__arg1 = _35reg826;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1061) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc26 = makeNative(13, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg806 = primIsCons(closureRef(co, 0));
if (True == _35reg806) {
Obj _35reg807 = primCar(closureRef(co, 0));
Obj _35reg808 = primEQ(intern("lambda"), _35reg807);
if (True == _35reg808) {
Obj _35reg809 = primCdr(closureRef(co, 0));
Obj _35reg810 = primIsCons(_35reg809);
if (True == _35reg810) {
Obj _35reg811 = primCdr(closureRef(co, 0));
Obj _35reg812 = primCar(_35reg811);
Obj args = _35reg812;
Obj _35reg813 = primCdr(closureRef(co, 0));
Obj _35reg814 = primCdr(_35reg813);
Obj _35reg815 = primIsCons(_35reg814);
if (True == _35reg815) {
Obj _35reg816 = primCdr(closureRef(co, 0));
Obj _35reg817 = primCdr(_35reg816);
Obj _35reg818 = primCar(_35reg817);
Obj body = _35reg818;
Obj _35reg819 = primCdr(closureRef(co, 0));
Obj _35reg820 = primCdr(_35reg819);
Obj _35reg821 = primCdr(_35reg820);
Obj _35reg822 = primEQ(Nil, _35reg821);
if (True == _35reg822) {
pushCont(co, 14, _35clofun1061, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc26;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val855 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val855;
Obj _35reg856 = primCons(z1, Nil);
Obj _35reg857 = primCons(y1, _35reg856);
Obj _35reg858 = primCons(x1, _35reg857);
Obj _35reg859 = primCons(intern("if"), _35reg858);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg859;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val854 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val854;
pushCont(co, 16, _35clofun1061, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val853 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val853;
pushCont(co, 17, _35clofun1061, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc25 = makeNative(15, _35clofun1061, 0, 1, closureRef(co, 0));
Obj _35reg827 = primIsCons(closureRef(co, 0));
if (True == _35reg827) {
Obj _35reg828 = primCar(closureRef(co, 0));
Obj _35reg829 = primEQ(intern("if"), _35reg828);
if (True == _35reg829) {
Obj _35reg830 = primCdr(closureRef(co, 0));
Obj _35reg831 = primIsCons(_35reg830);
if (True == _35reg831) {
Obj _35reg832 = primCdr(closureRef(co, 0));
Obj _35reg833 = primCar(_35reg832);
Obj x = _35reg833;
Obj _35reg834 = primCdr(closureRef(co, 0));
Obj _35reg835 = primCdr(_35reg834);
Obj _35reg836 = primIsCons(_35reg835);
if (True == _35reg836) {
Obj _35reg837 = primCdr(closureRef(co, 0));
Obj _35reg838 = primCdr(_35reg837);
Obj _35reg839 = primCar(_35reg838);
Obj y = _35reg839;
Obj _35reg840 = primCdr(closureRef(co, 0));
Obj _35reg841 = primCdr(_35reg840);
Obj _35reg842 = primCdr(_35reg841);
Obj _35reg843 = primIsCons(_35reg842);
if (True == _35reg843) {
Obj _35reg844 = primCdr(closureRef(co, 0));
Obj _35reg845 = primCdr(_35reg844);
Obj _35reg846 = primCdr(_35reg845);
Obj _35reg847 = primCar(_35reg846);
Obj z = _35reg847;
Obj _35reg848 = primCdr(closureRef(co, 0));
Obj _35reg849 = primCdr(_35reg848);
Obj _35reg850 = primCdr(_35reg849);
Obj _35reg851 = primCdr(_35reg850);
Obj _35reg852 = primEQ(Nil, _35reg851);
if (True == _35reg852) {
pushCont(co, 18, _35clofun1061, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc25;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val870 = __arg1;
Obj x1 = _35val870;
Obj _35reg871 = primCons(x1, Nil);
Obj _35reg872 = primCons(intern("not"), _35reg871);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg872;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1061) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1060(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val496 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val496) {
Obj _35reg497 = primCar(l);
Obj _35reg498 = primCons(_35reg497, res);
Obj _35reg499 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = _35reg498;
__arg2 = fn;
__arg3 = _35reg499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg500 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg494 = primIsCons(l);
if (True == _35reg494) {
Obj _35reg495 = primCar(l);
pushCont(co, 0, _35clofun1060, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj fn = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = Nil;
__arg2 = fn;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val506 = __arg1;
Obj _35reg504= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg507 = primCons(_35reg504, _35val506);
__nargs = 2;
__arg1 = _35reg507;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg503 = primEQ(l1, Nil);
if (True == _35reg503) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg504 = primCar(l1);
Obj _35reg505 = primCdr(l1);
pushCont(co, 3, _35clofun1060, 1, _35reg504);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg505;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x = __arg1;
Obj _35reg510 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg513 = primEQ(closureRef(co, 0), x);
Obj _35reg514 = primNot(_35reg513);
__nargs = 2;
__arg1 = _35reg514;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val517 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg518 = primNot(_35val517);
if (True == _35reg518) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35val516 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 7, _35clofun1060, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val516;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val511 = __arg1;
Obj counts = _35val511;
Obj _35reg512 = primCar(counts);
Obj n = _35reg512;
Obj dif = makeNative(6, _35clofun1060, 1, 1, n);
Obj _35reg515 = primCdr(counts);
pushCont(co, 8, _35clofun1060, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg515;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val509 = __arg1;
Obj pats = _35val509;
Obj len = makeNative(5, _35clofun1060, 1, 0);
pushCont(co, 9, _35clofun1060, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj rules = __arg1;
pushCont(co, 10, _35clofun1060, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val523 = __arg1;
Obj _35reg521= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg524 = primCons(_35reg521, _35val523);
__nargs = 2;
__arg1 = _35reg524;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj n = __arg1;
Obj _35reg520 = primEQ(n, makeNumber(0));
if (True == _35reg520) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg521 = primGenSym(intern("p"));
Obj _35reg522 = primSub(n, makeNumber(1));
pushCont(co, 12, _35clofun1060, 1, _35reg521);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = _35reg522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val530 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg531 = primCons(intern("list"), args);
Obj _35reg532 = primCons(_35reg531, body);
Obj _35reg533 = primCons(intern("match"), _35reg532);
Obj _35reg534 = primCons(_35reg533, Nil);
Obj _35reg535 = primCons(args, _35reg534);
Obj _35reg536 = primCons(_35val530, _35reg535);
Obj _35reg537 = primCons(intern("defun"), _35reg536);
__nargs = 2;
__arg1 = _35reg537;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1060) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val529 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val529;
pushCont(co, 14, _35clofun1060, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val528 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val528;
pushCont(co, 15, _35clofun1060, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val527 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val527;
pushCont(co, 16, _35clofun1060, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val526 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun1060, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#extract-rules"));
__arg1 = _35val526;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj exp = __arg1;
pushCont(co, 18, _35clofun1060, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1060) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1059(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val412 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg413 = primCons(_35val412, Nil);
Obj _35reg414 = primCons(value, _35reg413);
Obj _35reg415 = primCons(val, _35reg414);
Obj _35reg416 = primCons(intern("let"), _35reg415);
__nargs = 2;
__arg1 = _35reg416;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1059) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val418 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg419 = primCons(_35val418, Nil);
Obj _35reg420 = primCons(value, _35reg419);
Obj _35reg421 = primCons(val, _35reg420);
Obj _35reg422 = primCons(intern("let"), _35reg421);
__nargs = 2;
__arg1 = _35reg422;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1059) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val424 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg425 = primCons(_35val424, Nil);
Obj _35reg426 = primCons(value, _35reg425);
Obj _35reg427 = primCons(val, _35reg426);
Obj _35reg428 = primCons(intern("let"), _35reg427);
__nargs = 2;
__arg1 = _35reg428;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1059) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val406 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val406;
Obj _35reg407 = primIsCons(value);
if (True == _35reg407) {
Obj _35reg408 = primCar(value);
Obj _35reg409 = primEQ(intern("cons"), _35reg408);
Obj _35reg410 = primNot(_35reg409);
if (True == _35reg410) {
if (True == True) {
Obj _35reg411 = primGenSym(intern("val"));
Obj val = _35reg411;
pushCont(co, 0, _35clofun1059, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg417 = primGenSym(intern("val"));
Obj val = _35reg417;
pushCont(co, 1, _35clofun1059, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg423 = primGenSym(intern("val"));
Obj val = _35reg423;
pushCont(co, 2, _35clofun1059, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val405 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val405;
pushCont(co, 3, _35clofun1059, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val404 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun1059, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj exp = __arg1;
pushCont(co, 5, _35clofun1059, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-match"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc4 = makeNative(8, _35clofun1059, 0, 0);
Obj _35reg431 = primIsCons(closureRef(co, 0));
if (True == _35reg431) {
Obj _35reg432 = primCar(closureRef(co, 0));
Obj x = _35reg432;
Obj _35reg433 = primCdr(closureRef(co, 0));
Obj y = _35reg433;
Obj _35reg434 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = y;
__arg2 = _35reg434;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc4;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val444 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg445 = primCons(intern("list"), _35val444);
Obj pat = _35reg445;
Obj _35reg446 = primCons(pat, closureRef(co, 2));
Obj _35reg447 = primCons(act, _35reg446);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc3 = makeNative(9, _35clofun1059, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg435 = primIsCons(closureRef(co, 0));
if (True == _35reg435) {
Obj _35reg436 = primCar(closureRef(co, 0));
Obj _35reg437 = primEQ(intern("=>"), _35reg436);
if (True == _35reg437) {
Obj _35reg438 = primCdr(closureRef(co, 0));
Obj _35reg439 = primIsCons(_35reg438);
if (True == _35reg439) {
Obj _35reg440 = primCdr(closureRef(co, 0));
Obj _35reg441 = primCar(_35reg440);
Obj act = _35reg441;
Obj _35reg442 = primCdr(closureRef(co, 0));
Obj _35reg443 = primCdr(_35reg442);
Obj remain = _35reg443;
pushCont(co, 10, _35clofun1059, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val474 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg475 = primCons(intern("list"), _35val474);
Obj pat = _35reg475;
Obj _35reg476 = primCons(act, Nil);
Obj _35reg477 = primCons(pred, _35reg476);
Obj _35reg478 = primCons(intern("where"), _35reg477);
Obj _35reg479 = primCons(pat, closureRef(co, 2));
Obj _35reg480 = primCons(_35reg478, _35reg479);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg480;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2 = makeNative(11, _35clofun1059, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg448 = primIsCons(closureRef(co, 0));
if (True == _35reg448) {
Obj _35reg449 = primCar(closureRef(co, 0));
Obj _35reg450 = primEQ(intern("=>"), _35reg449);
if (True == _35reg450) {
Obj _35reg451 = primCdr(closureRef(co, 0));
Obj _35reg452 = primIsCons(_35reg451);
if (True == _35reg452) {
Obj _35reg453 = primCdr(closureRef(co, 0));
Obj _35reg454 = primCar(_35reg453);
Obj act = _35reg454;
Obj _35reg455 = primCdr(closureRef(co, 0));
Obj _35reg456 = primCdr(_35reg455);
Obj _35reg457 = primIsCons(_35reg456);
if (True == _35reg457) {
Obj _35reg458 = primCdr(closureRef(co, 0));
Obj _35reg459 = primCdr(_35reg458);
Obj _35reg460 = primCar(_35reg459);
Obj _35reg461 = primEQ(intern("where"), _35reg460);
if (True == _35reg461) {
Obj _35reg462 = primCdr(closureRef(co, 0));
Obj _35reg463 = primCdr(_35reg462);
Obj _35reg464 = primCdr(_35reg463);
Obj _35reg465 = primIsCons(_35reg464);
if (True == _35reg465) {
Obj _35reg466 = primCdr(closureRef(co, 0));
Obj _35reg467 = primCdr(_35reg466);
Obj _35reg468 = primCdr(_35reg467);
Obj _35reg469 = primCar(_35reg468);
Obj pred = _35reg469;
Obj _35reg470 = primCdr(closureRef(co, 0));
Obj _35reg471 = primCdr(_35reg470);
Obj _35reg472 = primCdr(_35reg471);
Obj _35reg473 = primCdr(_35reg472);
Obj remain = _35reg473;
pushCont(co, 12, _35clofun1059, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc1 = makeNative(13, _35clofun1059, 0, 3, input, current, result);
Obj _35reg481 = primEQ(Nil, input);
if (True == _35reg481) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj input = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = input;
__arg2 = Nil;
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val487 = __arg1;
Obj _35reg486= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = _35reg486;
__arg2 = _35val487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val484 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val484) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg485 = primCar(rules);
Obj _35reg486 = primCons(_35reg485, res);
pushCont(co, 16, _35clofun1059, 1, _35reg486);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 17, _35clofun1059, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg489 = primEQ(l, Nil);
if (True == _35reg489) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1059) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg490 = primAdd(i, makeNumber(1));
Obj _35reg491 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = _35reg490;
__arg2 = _35reg491;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj l = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = makeNumber(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1059) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1058(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val337 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun1057, 2, cc, _35val337);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val345 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val344= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg346 = primCons(cc, Nil);
Obj _35reg347 = primCons(_35reg346, Nil);
Obj _35reg348 = primCons(_35val345, _35reg347);
Obj _35reg349 = primCons(_35val344, _35reg348);
Obj _35reg350 = primCons(intern("if"), _35reg349);
__nargs = 2;
__arg1 = _35reg350;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val344 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun1058, 2, cc, _35val344);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val327 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val327) {
Obj _35reg328 = primCar(action);
Obj _35reg329 = primEQ(_35reg328, intern("where"));
if (True == _35reg329) {
if (True == True) {
pushCont(co, 19, _35clofun1057, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 0, _35clofun1058, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun1058, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label4:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg325 = primCdr(rules);
Obj _35reg326 = primCar(_35reg325);
Obj action = _35reg326;
pushCont(co, 3, _35clofun1058, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val365 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val365;
Obj _35reg366 = primCons(rest, Nil);
Obj _35reg367 = primCons(Nil, _35reg366);
Obj _35reg368 = primCons(intern("lambda"), _35reg367);
Obj _35reg369 = primCons(curr, Nil);
Obj _35reg370 = primCons(_35reg368, _35reg369);
Obj _35reg371 = primCons(cc, _35reg370);
Obj _35reg372 = primCons(intern("let"), _35reg371);
__nargs = 2;
__arg1 = _35reg372;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val362 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val362;
Obj _35reg363 = primCdr(rules);
Obj _35reg364 = primCdr(_35reg363);
pushCont(co, 5, _35clofun1058, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg364;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val361 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 6, _35clofun1058, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val361;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val360 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val360;
pushCont(co, 7, _35clofun1058, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val380 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val380;
Obj _35reg381 = primCons(rest, Nil);
Obj _35reg382 = primCons(Nil, _35reg381);
Obj _35reg383 = primCons(intern("lambda"), _35reg382);
Obj _35reg384 = primCons(curr, Nil);
Obj _35reg385 = primCons(_35reg383, _35reg384);
Obj _35reg386 = primCons(cc, _35reg385);
Obj _35reg387 = primCons(intern("let"), _35reg386);
__nargs = 2;
__arg1 = _35reg387;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val377 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val377;
Obj _35reg378 = primCdr(rules);
Obj _35reg379 = primCdr(_35reg378);
pushCont(co, 9, _35clofun1058, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg379;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val376 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun1058, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val376;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val375 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val375;
pushCont(co, 11, _35clofun1058, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val357 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val357) {
if (True == True) {
Obj _35reg358 = primCar(rules);
Obj pat = _35reg358;
Obj _35reg359 = primGenSym(intern("cc"));
Obj cc = _35reg359;
pushCont(co, 8, _35clofun1058, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg373 = primCar(rules);
Obj pat = _35reg373;
Obj _35reg374 = primGenSym(intern("cc"));
Obj cc = _35reg374;
pushCont(co, 12, _35clofun1058, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val395 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val395;
Obj _35reg396 = primCons(rest, Nil);
Obj _35reg397 = primCons(Nil, _35reg396);
Obj _35reg398 = primCons(intern("lambda"), _35reg397);
Obj _35reg399 = primCons(curr, Nil);
Obj _35reg400 = primCons(_35reg398, _35reg399);
Obj _35reg401 = primCons(cc, _35reg400);
Obj _35reg402 = primCons(intern("let"), _35reg401);
__nargs = 2;
__arg1 = _35reg402;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val392 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val392;
Obj _35reg393 = primCdr(rules);
Obj _35reg394 = primCdr(_35reg393);
pushCont(co, 14, _35clofun1058, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val391 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun1058, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val391;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val390 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val390;
pushCont(co, 16, _35clofun1058, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val355 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val355) {
Obj _35reg356 = primCdr(rules);
pushCont(co, 13, _35clofun1058, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg356;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg388 = primCar(rules);
Obj pat = _35reg388;
Obj _35reg389 = primGenSym(intern("cc"));
Obj cc = _35reg389;
pushCont(co, 17, _35clofun1058, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj _35val352 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val352) {
Obj _35reg353 = primCons(makeCString("no match-help found!"), Nil);
Obj _35reg354 = primCons(intern("error"), _35reg353);
__nargs = 2;
__arg1 = _35reg354;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1058) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 18, _35clofun1058, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 19, _35clofun1058, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1058) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1057(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val260 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val260;
pushCont(co, 20, _35clofun1056, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val259 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val259;
pushCont(co, 0, _35clofun1057, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val269 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg263= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg270 = primCons(cc, Nil);
Obj _35reg271 = primCons(_35reg270, Nil);
Obj _35reg272 = primCons(_35val269, _35reg271);
Obj _35reg273 = primCons(_35reg263, _35reg272);
Obj _35reg274 = primCons(intern("if"), _35reg273);
__nargs = 2;
__arg1 = _35reg274;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val268 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg265= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg263= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun1057, 2, cc, _35reg263);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg265;
__arg3 = _35val268;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val277 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val277;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val276 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val276;
pushCont(co, 4, _35clofun1057, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val275 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val275;
pushCont(co, 5, _35clofun1057, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val285 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg279= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg286 = primCons(cc, Nil);
Obj _35reg287 = primCons(_35reg286, Nil);
Obj _35reg288 = primCons(_35val285, _35reg287);
Obj _35reg289 = primCons(_35reg279, _35reg288);
Obj _35reg290 = primCons(intern("if"), _35reg289);
__nargs = 2;
__arg1 = _35reg290;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val284 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg281= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg279= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun1057, 2, cc, _35reg279);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg281;
__arg3 = _35val284;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val239 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val239;
Obj _35reg240 = primIsCons(expr);
if (True == _35reg240) {
Obj _35reg241 = primCar(expr);
Obj _35reg242 = primEQ(_35reg241, intern("cons"));
if (True == _35reg242) {
if (True == True) {
pushCont(co, 17, _35clofun1056, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg246 = primCons(expr, Nil);
Obj _35reg247 = primCons(intern("cons?"), _35reg246);
Obj _35reg248 = primCons(expr, Nil);
Obj _35reg249 = primCons(intern("car"), _35reg248);
Obj _35reg250 = primCons(expr, Nil);
Obj _35reg251 = primCons(intern("cdr"), _35reg250);
pushCont(co, 19, _35clofun1056, 4, x, _35reg249, cc, _35reg247);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg251;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun1057, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg262 = primCons(expr, Nil);
Obj _35reg263 = primCons(intern("cons?"), _35reg262);
Obj _35reg264 = primCons(expr, Nil);
Obj _35reg265 = primCons(intern("car"), _35reg264);
Obj _35reg266 = primCons(expr, Nil);
Obj _35reg267 = primCons(intern("cdr"), _35reg266);
pushCont(co, 3, _35clofun1057, 4, x, _35reg265, cc, _35reg263);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg267;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 6, _35clofun1057, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg278 = primCons(expr, Nil);
Obj _35reg279 = primCons(intern("cons?"), _35reg278);
Obj _35reg280 = primCons(expr, Nil);
Obj _35reg281 = primCons(intern("car"), _35reg280);
Obj _35reg282 = primCons(expr, Nil);
Obj _35reg283 = primCons(intern("cdr"), _35reg282);
pushCont(co, 8, _35clofun1057, 4, x, _35reg281, cc, _35reg279);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg283;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj _35val238 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val238;
pushCont(co, 9, _35clofun1057, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 10, _35clofun1057, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val292 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val292) {
Obj _35reg293 = primIsSymbol(x);
Obj _35reg294 = primNot(_35reg293);
if (True == _35reg294) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label13:
{
Obj x = __arg1;
pushCont(co, 12, _35clofun1057, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val323 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val323;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val310 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val310) {
Obj _35reg311 = primCar(pat);
Obj _35reg312 = primEQ(_35reg311, intern("quote"));
if (True == _35reg312) {
Obj _35reg313 = primCons(expr, Nil);
Obj _35reg314 = primCons(pat, _35reg313);
Obj _35reg315 = primCons(intern("="), _35reg314);
Obj _35reg316 = primCons(cc, Nil);
Obj _35reg317 = primCons(_35reg316, Nil);
Obj _35reg318 = primCons(body, _35reg317);
Obj _35reg319 = primCons(_35reg315, _35reg318);
Obj _35reg320 = primCons(intern("if"), _35reg319);
__nargs = 2;
__arg1 = _35reg320;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg321 = primCar(pat);
Obj _35reg322 = primEQ(_35reg321, intern("cons"));
if (True == _35reg322) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 14, _35clofun1057, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val295 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val295) {
Obj _35reg296 = primEQ(pat, expr);
if (True == _35reg296) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg297 = primCons(expr, Nil);
Obj _35reg298 = primCons(pat, _35reg297);
Obj _35reg299 = primCons(intern("="), _35reg298);
Obj _35reg300 = primCons(cc, Nil);
Obj _35reg301 = primCons(_35reg300, Nil);
Obj _35reg302 = primCons(body, _35reg301);
Obj _35reg303 = primCons(_35reg299, _35reg302);
Obj _35reg304 = primCons(intern("if"), _35reg303);
__nargs = 2;
__arg1 = _35reg304;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg305 = primIsSymbol(pat);
if (True == _35reg305) {
Obj _35reg306 = primCons(body, Nil);
Obj _35reg307 = primCons(expr, _35reg306);
Obj _35reg308 = primCons(pat, _35reg307);
Obj _35reg309 = primCons(intern("let"), _35reg308);
__nargs = 2;
__arg1 = _35reg309;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 15, _35clofun1057, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label17:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
Obj literal_63 = makeNative(13, _35clofun1057, 1, 0);
pushCont(co, 16, _35clofun1057, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val331 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val330= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg332 = primCons(cc, Nil);
Obj _35reg333 = primCons(_35reg332, Nil);
Obj _35reg334 = primCons(_35val331, _35reg333);
Obj _35reg335 = primCons(_35val330, _35reg334);
Obj _35reg336 = primCons(intern("if"), _35reg335);
__nargs = 2;
__arg1 = _35reg336;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val330 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun1057, 2, cc, _35val330);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1057) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val338 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val337= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg339 = primCons(cc, Nil);
Obj _35reg340 = primCons(_35reg339, Nil);
Obj _35reg341 = primCons(_35val338, _35reg340);
Obj _35reg342 = primCons(_35val337, _35reg341);
Obj _35reg343 = primCons(intern("if"), _35reg342);
__nargs = 2;
__arg1 = _35reg343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1057) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1056(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val188 = __arg1;
Obj _35val187= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg186= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg189 = primCons(intern("cond"), _35val188);
Obj _35reg190 = primCons(_35reg189, Nil);
Obj _35reg191 = primCons(_35val187, _35reg190);
Obj _35reg192 = primCons(_35reg186, _35reg191);
Obj _35reg193 = primCons(intern("if"), _35reg192);
__nargs = 2;
__arg1 = _35reg193;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val187 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg186= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun1056, 2, _35val187, _35reg186);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val185 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val185;
Obj _35reg186 = primCar(curr);
pushCont(co, 1, _35clofun1056, 2, exp, _35reg186);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg181 = primCdr(exp);
Obj _35reg182 = primEQ(Nil, _35reg181);
if (True == _35reg182) {
Obj _35reg183 = primCons(makeCString("no cond match"), Nil);
Obj _35reg184 = primCons(intern("error"), _35reg183);
__nargs = 2;
__arg1 = _35reg184;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, _35clofun1056, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val199 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val199;
Obj _35reg200 = primEQ(more, True);
if (True == _35reg200) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg201 = primCar(l);
Obj _35reg202 = primCons(more, Nil);
Obj _35reg203 = primCons(True, _35reg202);
Obj _35reg204 = primCons(_35reg201, _35reg203);
Obj _35reg205 = primCons(intern("if"), _35reg204);
__nargs = 2;
__arg1 = _35reg205;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj l = __arg1;
Obj _35reg195 = primEQ(l, Nil);
if (True == _35reg195) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg196 = primCar(l);
Obj _35reg197 = primEQ(_35reg196, True);
if (True == _35reg197) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg198 = primCdr(l);
pushCont(co, 4, _35clofun1056, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg198;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label6:
{
Obj exp = __arg1;
Obj _35reg207 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val213 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val213;
Obj _35reg214 = primEQ(more, False);
if (True == _35reg214) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg215 = primCar(l);
Obj _35reg216 = primCons(False, Nil);
Obj _35reg217 = primCons(more, _35reg216);
Obj _35reg218 = primCons(_35reg215, _35reg217);
Obj _35reg219 = primCons(intern("if"), _35reg218);
__nargs = 2;
__arg1 = _35reg219;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj l = __arg1;
Obj _35reg209 = primEQ(Nil, l);
if (True == _35reg209) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg210 = primCar(l);
Obj _35reg211 = primEQ(_35reg210, False);
if (True == _35reg211) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg212 = primCdr(l);
pushCont(co, 7, _35clofun1056, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label9:
{
Obj exp = __arg1;
Obj _35reg221 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x = __arg1;
Obj _35reg223 = primEQ(x, True);
if (True == _35reg223) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg224 = primEQ(x, False);
if (True == _35reg224) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label11:
{
Obj _35val231 = __arg1;
Obj _35reg229= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg232 = primCons(_35val231, Nil);
Obj _35reg233 = primCons(_35reg229, _35reg232);
Obj _35reg234 = primCons(intern("cons"), _35reg233);
__nargs = 2;
__arg1 = _35reg234;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val227 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val227) {
Obj _35reg228 = primCar(pat);
__nargs = 2;
__arg1 = _35reg228;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg229 = primCar(pat);
Obj _35reg230 = primCdr(pat);
pushCont(co, 11, _35clofun1056, 1, _35reg229);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj pat = __arg1;
Obj _35reg226 = primCdr(pat);
pushCont(co, 12, _35clofun1056, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
Obj _35reg236 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val245 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val245;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val244 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val244;
pushCont(co, 15, _35clofun1056, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val243 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val243;
pushCont(co, 16, _35clofun1056, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val253 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg247= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg254 = primCons(cc, Nil);
Obj _35reg255 = primCons(_35reg254, Nil);
Obj _35reg256 = primCons(_35val253, _35reg255);
Obj _35reg257 = primCons(_35reg247, _35reg256);
Obj _35reg258 = primCons(intern("if"), _35reg257);
__nargs = 2;
__arg1 = _35reg258;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1056) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val252 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg249= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg247= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun1056, 2, cc, _35reg247);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg249;
__arg3 = _35val252;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val261 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val261;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1056) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1055(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val123 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun1054, 1, _35val123);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp1 = __arg1;
Obj _35reg131 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg131) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val132 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(1, _35clofun1055, 1, 1, exp);
__arg1 = _35val132;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg117 = primIsCons(exp);
if (True == _35reg117) {
Obj _35reg118 = primCar(exp);
Obj _35reg119 = primEQ(_35reg118, globalRef(intern("*protect-symbol*")));
if (True == _35reg119) {
Obj _35reg120 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg120;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg121 = primCar(exp);
Obj _35reg122 = primEQ(_35reg121, intern("lambda"));
if (True == _35reg122) {
pushCont(co, 0, _35clofun1055, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg129 = primCar(exp);
Obj _35reg130 = primEQ(_35reg129, intern("quote"));
if (True == _35reg130) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, _35clofun1055, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35val139 = __arg1;
Obj _35val138= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg137= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg140 = primCons(_35val138, _35val139);
Obj _35reg141 = primCons(intern("lambda"), _35reg140);
Obj _35reg142 = primCons(_35reg141, Nil);
Obj _35reg143 = primCons(_35reg137, _35reg142);
Obj _35reg144 = primCons(intern("cora/init#add-to-*macros*"), _35reg143);
__nargs = 2;
__arg1 = _35reg144;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val138 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg137= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun1055, 2, _35val138, _35reg137);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val135 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg136 = primCons(_35val135, Nil);
Obj _35reg137 = primCons(intern("quote"), _35reg136);
pushCont(co, 5, _35clofun1055, 2, exp, _35reg137);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun1055, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
Obj _35reg147 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val151 = __arg1;
Obj _35val150= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val149= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg152 = primCons(_35val151, Nil);
Obj _35reg153 = primCons(_35val150, _35reg152);
Obj _35reg154 = primCons(intern("lambda"), _35reg153);
Obj _35reg155 = primCons(_35reg154, Nil);
Obj _35reg156 = primCons(_35val149, _35reg155);
Obj _35reg157 = primCons(intern("def"), _35reg156);
__nargs = 2;
__arg1 = _35reg157;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val150 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val149= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun1055, 2, _35val150, _35val149);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val149 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun1055, 2, exp, _35val149);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj exp = __arg1;
pushCont(co, 11, _35clofun1055, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg159 = primIsCons(l);
if (True == _35reg159) {
Obj _35reg160 = primCar(l);
Obj _35reg161 = primEQ(_35reg160, x);
if (True == _35reg161) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg162 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg162;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
Obj _35reg164 = primIsCons(x);
Obj _35reg165 = primNot(_35reg164);
__nargs = 2;
__arg1 = _35reg165;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val173 = __arg1;
Obj _35val171= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg170= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg174 = primCons(_35val173, Nil);
Obj _35reg175 = primCons(_35val171, _35reg174);
Obj _35reg176 = primCons(_35reg170, _35reg175);
Obj _35reg177 = primCons(intern("let"), _35reg176);
__nargs = 2;
__arg1 = _35reg177;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val172 = __arg1;
Obj _35val171= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg170= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun1055, 2, _35val171, _35reg170);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35val172;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val171 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg170= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun1055, 2, _35val171, _35reg170);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val168 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val168) {
Obj _35reg169 = primCar(exp);
__nargs = 2;
__arg1 = _35reg169;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1055) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg170 = primCar(exp);
pushCont(co, 17, _35clofun1055, 2, exp, _35reg170);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj exp = __arg1;
Obj _35reg167 = primCdr(exp);
pushCont(co, 18, _35clofun1055, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
Obj _35reg179 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35reg179;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1055) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun1054(struct Cora* co){
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
Obj _35reg45 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg45;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg47 = primCdr(x);
Obj _35reg48 = primCar(_35reg47);
__nargs = 2;
__arg1 = _35reg48;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg50 = primCar(x);
Obj _35reg51 = primCar(_35reg50);
__nargs = 2;
__arg1 = _35reg51;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg53 = primCar(x);
Obj _35reg54 = primCdr(_35reg53);
__nargs = 2;
__arg1 = _35reg54;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg56 = primCdr(x);
Obj _35reg57 = primCdr(_35reg56);
__nargs = 2;
__arg1 = _35reg57;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg59 = primCdr(x);
Obj _35reg60 = primCdr(_35reg59);
Obj _35reg61 = primCar(_35reg60);
__nargs = 2;
__arg1 = _35reg61;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg63 = primCdr(x);
Obj _35reg64 = primCdr(_35reg63);
Obj _35reg65 = primCdr(_35reg64);
Obj _35reg66 = primCar(_35reg65);
__nargs = 2;
__arg1 = _35reg66;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg68 = primCdr(x);
Obj _35reg69 = primCdr(_35reg68);
Obj _35reg70 = primCdr(_35reg69);
__nargs = 2;
__arg1 = _35reg70;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val75 = __arg1;
Obj _35reg73= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg76 = primCons(_35val75, Nil);
Obj _35reg77 = primCons(_35reg73, _35reg76);
Obj _35reg78 = primCons(intern("cons"), _35reg77);
__nargs = 2;
__arg1 = _35reg78;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg72 = primIsCons(exp);
if (True == _35reg72) {
Obj _35reg73 = primCar(exp);
Obj _35reg74 = primCdr(exp);
pushCont(co, 8, _35clofun1054, 1, _35reg73);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg74;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg80 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg82 = primIsCons(l);
if (True == _35reg82) {
Obj _35reg83 = primCar(l);
Obj _35reg84 = primCons(_35reg83, res);
Obj _35reg85 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#reverse-h"));
__arg1 = _35reg84;
__arg2 = _35reg85;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val91 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg92 = primCons(_35val91, res);
Obj _35reg93 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg92;
__arg2 = f;
__arg3 = _35reg93;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg89 = primIsCons(l);
if (True == _35reg89) {
Obj _35reg90 = primCar(l);
pushCont(co, 12, _35clofun1054, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg90;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg99 = primCons(n, v);
Obj _35reg100 = primCons(_35reg99, globalRef(intern("*macros*")));
Obj _35reg101 = primSet(co, intern("*macros*"), _35reg100);
__nargs = 2;
__arg1 = _35reg101;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj item = __arg1;
Obj _35reg104 = primIsCons(closureRef(co, 0));
if (True == _35reg104) {
Obj _35reg105 = primCar(closureRef(co, 0));
Obj _35reg106 = primCar(item);
Obj _35reg107 = primEQ(_35reg105, _35reg106);
if (True == _35reg107) {
if (True == True) {
Obj _35reg108 = primCdr(item);
__nargs = 2;
__arg0 = _35reg108;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg109 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg110 = primCdr(item);
__nargs = 2;
__arg0 = _35reg110;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg111 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg112 = primCdr(item);
__nargs = 2;
__arg0 = _35reg112;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg113 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg113;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label17:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg103 = primEQ(Nil, macros);
if (True == _35reg103) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg114 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(16, _35clofun1054, 1, 2, exp, macros);
__arg1 = _35reg114;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = exp;
__arg2 = globalRef(intern("*macros*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val125 = __arg1;
Obj _35val123= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg126 = primCons(_35val125, Nil);
Obj _35reg127 = primCons(_35val123, _35reg126);
Obj _35reg128 = primCons(intern("lambda"), _35reg127);
__nargs = 2;
__arg1 = _35reg128;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun1054) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val124 = __arg1;
Obj _35val123= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun1054, 1, _35val123);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = _35val124;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun1054) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

