#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun2947(struct Cora* co);
void _35clofun2946(struct Cora* co);
void _35clofun2945(struct Cora* co);
void _35clofun2944(struct Cora* co);
void _35clofun2943(struct Cora* co);
void _35clofun2942(struct Cora* co);
void _35clofun2941(struct Cora* co);
void _35clofun2940(struct Cora* co);
void _35clofun2939(struct Cora* co);
void _35clofun2938(struct Cora* co);


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
Obj _35reg1971 = primSet(co, intern("null?"), makeNative(0, _35clofun2938, 1, 0));
Obj _35reg1974 = primSet(co, intern("cadr"), makeNative(1, _35clofun2938, 1, 0));
Obj _35reg1977 = primSet(co, intern("caar"), makeNative(2, _35clofun2938, 1, 0));
Obj _35reg1980 = primSet(co, intern("cdar"), makeNative(3, _35clofun2938, 1, 0));
Obj _35reg1983 = primSet(co, intern("cddr"), makeNative(4, _35clofun2938, 1, 0));
Obj _35reg1987 = primSet(co, intern("caddr"), makeNative(5, _35clofun2938, 1, 0));
Obj _35reg1992 = primSet(co, intern("cadddr"), makeNative(6, _35clofun2938, 1, 0));
Obj _35reg1996 = primSet(co, intern("cdddr"), makeNative(7, _35clofun2938, 1, 0));
Obj _35reg2004 = primSet(co, intern("rcons"), makeNative(9, _35clofun2938, 1, 0));
Obj _35reg2006 = primSet(co, intern("pair?"), makeNative(10, _35clofun2938, 1, 0));
Obj _35reg2011 = primSet(co, intern("cora/init.reverse-h"), makeNative(11, _35clofun2938, 2, 0));
pushCont(co, 20, _35clofun2947, 0);
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

void _35clofun2947(struct Cora* co){
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
Obj _35reg2915 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-begin"));
__arg1 = _35reg2915;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1969 = makeNative(1, _35clofun2947, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2921 = __arg1;
Obj _35reg2922 = primCons(intern("list"), _35val2921);
__nargs = 2;
__arg1 = _35reg2922;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc1968 = makeNative(2, _35clofun2947, 0, 1, closureRef(co, 0));
Obj _35reg2917 = primIsCons(closureRef(co, 0));
if (True == _35reg2917) {
Obj _35reg2918 = primCar(closureRef(co, 0));
Obj x = _35reg2918;
Obj _35reg2919 = primCdr(closureRef(co, 0));
Obj more = _35reg2919;
Obj _35reg2920 = primCons(x, more);
pushCont(co, 3, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.rewrite-backquote"));
__arg2 = _35reg2920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1968;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1967 = makeNative(4, _35clofun2947, 0, 1, closureRef(co, 0));
Obj _35reg2923 = primIsCons(closureRef(co, 0));
if (True == _35reg2923) {
Obj _35reg2924 = primCar(closureRef(co, 0));
Obj _35reg2925 = primEQ(intern("unquote"), _35reg2924);
if (True == _35reg2925) {
Obj _35reg2926 = primCdr(closureRef(co, 0));
Obj _35reg2927 = primIsCons(_35reg2926);
if (True == _35reg2927) {
Obj _35reg2928 = primCdr(closureRef(co, 0));
Obj _35reg2929 = primCar(_35reg2928);
Obj x = _35reg2929;
Obj _35reg2930 = primCdr(closureRef(co, 0));
Obj _35reg2931 = primCdr(_35reg2930);
Obj _35reg2932 = primEQ(Nil, _35reg2931);
if (True == _35reg2932) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35p1965 = __arg1;
Obj _35cc1966 = makeNative(5, _35clofun2947, 0, 1, _35p1965);
Obj x = _35p1965;
Obj _35reg2933 = primIsSymbol(x);
if (True == _35reg2933) {
Obj _35reg2934 = primCons(x, Nil);
Obj _35reg2935 = primCons(intern("quote"), _35reg2934);
__nargs = 2;
__arg1 = _35reg2935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1966;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2937 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-backquote"));
__arg1 = _35val2937;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun2947, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2916 = __arg1;
Obj _35reg2936 = primSet(co, intern("cora/init.rewrite-backquote"), makeNative(6, _35clofun2947, 1, 0));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(8, _35clofun2947, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2467 = __arg1;
Obj _35reg2730 = primSet(co, intern("cora/init.propagate-boolean0"), makeNative(11, _35clofun2945, 1, 0));
Obj _35reg2888 = primSet(co, intern("cora/init.propagate-boolean"), makeNative(13, _35clofun2946, 1, 0));
Obj _35reg2890 = primSet(co, intern("macroexpand"), makeNative(15, _35clofun2946, 1, 0));
Obj _35reg2914 = primSet(co, intern("cora/init.rewrite-begin"), makeNative(20, _35clofun2946, 1, 0));
pushCont(co, 9, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(0, _35clofun2947, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2359 = __arg1;
Obj _35reg2411 = primSet(co, intern("cora/init.extract-rules1"), makeNative(15, _35clofun2943, 3, 0));
Obj _35reg2412 = primSet(co, intern("cora/init.extract-rules"), makeNative(16, _35clofun2943, 1, 0));
Obj _35reg2417 = primSet(co, intern("cora/init.rules-patterns"), makeNative(19, _35clofun2943, 2, 0));
Obj _35reg2421 = primSet(co, intern("cora/init.length-h"), makeNative(20, _35clofun2943, 2, 0));
Obj _35reg2422 = primSet(co, intern("length"), makeNative(0, _35clofun2944, 1, 0));
Obj _35reg2430 = primSet(co, intern("cora/init.filter-h"), makeNative(2, _35clofun2944, 3, 0));
Obj _35reg2431 = primSet(co, intern("filter"), makeNative(3, _35clofun2944, 2, 0));
Obj _35reg2437 = primSet(co, intern("append"), makeNative(5, _35clofun2944, 2, 0));
Obj _35reg2448 = primSet(co, intern("cora/init.rules-arg-count"), makeNative(12, _35clofun2944, 1, 0));
Obj _35reg2454 = primSet(co, intern("cora/init.gen-parameters"), makeNative(14, _35clofun2944, 1, 0));
pushCont(co, 10, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(20, _35clofun2944, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2166 = __arg1;
Obj _35reg2220 = primSet(co, intern("cora/init.match-cons-expander"), makeNative(12, _35clofun2941, 4, 0));
Obj _35reg2253 = primSet(co, intern("cora/init.match1"), makeNative(18, _35clofun2941, 4, 0));
Obj _35reg2280 = primSet(co, intern("cora/init.extract-rule-action"), makeNative(5, _35clofun2942, 2, 0));
Obj _35reg2332 = primSet(co, intern("cora/init.match-helper"), makeNative(0, _35clofun2943, 2, 0));
Obj _35reg2358 = primSet(co, intern("cora/init.rewrite-match"), makeNative(7, _35clofun2943, 1, 0));
pushCont(co, 11, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(8, _35clofun2943, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2151 = __arg1;
Obj _35reg2154 = primSet(co, intern("boolean?"), makeNative(11, _35clofun2940, 1, 0));
Obj _35reg2164 = primSet(co, intern("cora/init.rcons1"), makeNative(14, _35clofun2940, 1, 0));
pushCont(co, 12, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(15, _35clofun2940, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2137 = __arg1;
Obj _35reg2149 = primSet(co, intern("cora/init.rewrite-and"), makeNative(9, _35clofun2940, 1, 0));
pushCont(co, 13, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(10, _35clofun2940, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2123 = __arg1;
Obj _35reg2135 = primSet(co, intern("cora/init.rewrite-or"), makeNative(6, _35clofun2940, 1, 0));
pushCont(co, 14, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(7, _35clofun2940, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2109 = __arg1;
pushCont(co, 15, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(4, _35clofun2940, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2087 = __arg1;
Obj _35reg2092 = primSet(co, intern("elem?"), makeNative(14, _35clofun2939, 2, 0));
Obj _35reg2095 = primSet(co, intern("atom?"), makeNative(15, _35clofun2939, 1, 0));
Obj _35reg2107 = primSet(co, intern("cora/init.rewrite-let"), makeNative(20, _35clofun2939, 1, 0));
pushCont(co, 16, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(0, _35clofun2940, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2075 = __arg1;
pushCont(co, 17, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(13, _35clofun2939, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2073 = __arg1;
pushCont(co, 18, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(9, _35clofun2939, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2012 = __arg1;
Obj _35reg2013 = primSet(co, intern("reverse"), _35val2012);
Obj _35reg2019 = primSet(co, intern("map-h"), makeNative(13, _35clofun2938, 3, 0));
Obj _35reg2020 = primSet(co, intern("map"), makeNative(14, _35clofun2938, 2, 0));
Obj _35reg2021 = primSet(co, intern("*macros*"), Nil);
Obj _35reg2022 = primGenSym(intern("protect"));
Obj _35reg2023 = primSet(co, intern("*protect-symbol*"), _35reg2022);
Obj _35reg2025 = primSet(co, intern("cora/init.protect"), makeNative(15, _35clofun2938, 1, 0));
Obj _35reg2029 = primSet(co, intern("cora/init.add-to-*macros*"), makeNative(16, _35clofun2938, 2, 0));
Obj _35reg2042 = primSet(co, intern("cora/init.macroexpand1-h"), makeNative(18, _35clofun2938, 2, 0));
Obj _35reg2043 = primSet(co, intern("cora/init.macroexpand1"), makeNative(19, _35clofun2938, 1, 0));
Obj _35reg2060 = primSet(co, intern("cora/init.macroexpand-boot"), makeNative(4, _35clofun2939, 1, 0));
Obj _35reg2061 = primSet(co, intern("macroexpand"), globalRef(intern("cora/init.macroexpand-boot")));
Obj _35reg2072 = primSet(co, intern("defmacro-macro"), makeNative(8, _35clofun2939, 1, 0));
pushCont(co, 19, _35clofun2947, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2946(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2799 = __arg1;
Obj x1 = _35val2799;
Obj _35reg2800 = primCons(x1, Nil);
Obj _35reg2801 = primCons(intern("not"), _35reg2800);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2801;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1956 = makeNative(20, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2789 = primIsCons(closureRef(co, 0));
if (True == _35reg2789) {
Obj _35reg2790 = primCar(closureRef(co, 0));
Obj _35reg2791 = primEQ(intern("not"), _35reg2790);
if (True == _35reg2791) {
Obj _35reg2792 = primCdr(closureRef(co, 0));
Obj _35reg2793 = primIsCons(_35reg2792);
if (True == _35reg2793) {
Obj _35reg2794 = primCdr(closureRef(co, 0));
Obj _35reg2795 = primCar(_35reg2794);
Obj x = _35reg2795;
Obj _35reg2796 = primCdr(closureRef(co, 0));
Obj _35reg2797 = primCdr(_35reg2796);
Obj _35reg2798 = primEQ(Nil, _35reg2797);
if (True == _35reg2798) {
pushCont(co, 0, _35clofun2946, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1956;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1956;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1956;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1956;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2812 = __arg1;
Obj x1 = _35val2812;
Obj _35reg2813 = primCons(x1, Nil);
Obj _35reg2814 = primCons(intern("null?"), _35reg2813);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2814;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1955 = makeNative(1, _35clofun2946, 0, 1, closureRef(co, 0));
Obj _35reg2802 = primIsCons(closureRef(co, 0));
if (True == _35reg2802) {
Obj _35reg2803 = primCar(closureRef(co, 0));
Obj _35reg2804 = primEQ(intern("null?"), _35reg2803);
if (True == _35reg2804) {
Obj _35reg2805 = primCdr(closureRef(co, 0));
Obj _35reg2806 = primIsCons(_35reg2805);
if (True == _35reg2806) {
Obj _35reg2807 = primCdr(closureRef(co, 0));
Obj _35reg2808 = primCar(_35reg2807);
Obj x = _35reg2808;
Obj _35reg2809 = primCdr(closureRef(co, 0));
Obj _35reg2810 = primCdr(_35reg2809);
Obj _35reg2811 = primEQ(Nil, _35reg2810);
if (True == _35reg2811) {
pushCont(co, 2, _35clofun2946, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1955;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1955;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1955;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1955;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2833 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val2833;
Obj _35reg2834 = primCons(y1, Nil);
Obj _35reg2835 = primCons(x1, _35reg2834);
Obj _35reg2836 = primCons(intern("and"), _35reg2835);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2836;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2832 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val2832;
pushCont(co, 4, _35clofun2946, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1954 = makeNative(3, _35clofun2946, 0, 1, closureRef(co, 0));
Obj _35reg2815 = primIsCons(closureRef(co, 0));
if (True == _35reg2815) {
Obj _35reg2816 = primCar(closureRef(co, 0));
Obj _35reg2817 = primEQ(intern("and"), _35reg2816);
if (True == _35reg2817) {
Obj _35reg2818 = primCdr(closureRef(co, 0));
Obj _35reg2819 = primIsCons(_35reg2818);
if (True == _35reg2819) {
Obj _35reg2820 = primCdr(closureRef(co, 0));
Obj _35reg2821 = primCar(_35reg2820);
Obj x = _35reg2821;
Obj _35reg2822 = primCdr(closureRef(co, 0));
Obj _35reg2823 = primCdr(_35reg2822);
Obj _35reg2824 = primIsCons(_35reg2823);
if (True == _35reg2824) {
Obj _35reg2825 = primCdr(closureRef(co, 0));
Obj _35reg2826 = primCdr(_35reg2825);
Obj _35reg2827 = primCar(_35reg2826);
Obj y = _35reg2827;
Obj _35reg2828 = primCdr(closureRef(co, 0));
Obj _35reg2829 = primCdr(_35reg2828);
Obj _35reg2830 = primCdr(_35reg2829);
Obj _35reg2831 = primEQ(Nil, _35reg2830);
if (True == _35reg2831) {
pushCont(co, 5, _35clofun2946, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1954;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1954;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1954;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1954;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1954;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2847 = __arg1;
Obj x1 = _35val2847;
Obj _35reg2848 = primCons(x1, Nil);
Obj _35reg2849 = primCons(intern("cdr"), _35reg2848);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2849;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1953 = makeNative(6, _35clofun2946, 0, 1, closureRef(co, 0));
Obj _35reg2837 = primIsCons(closureRef(co, 0));
if (True == _35reg2837) {
Obj _35reg2838 = primCar(closureRef(co, 0));
Obj _35reg2839 = primEQ(intern("cdr"), _35reg2838);
if (True == _35reg2839) {
Obj _35reg2840 = primCdr(closureRef(co, 0));
Obj _35reg2841 = primIsCons(_35reg2840);
if (True == _35reg2841) {
Obj _35reg2842 = primCdr(closureRef(co, 0));
Obj _35reg2843 = primCar(_35reg2842);
Obj x = _35reg2843;
Obj _35reg2844 = primCdr(closureRef(co, 0));
Obj _35reg2845 = primCdr(_35reg2844);
Obj _35reg2846 = primEQ(Nil, _35reg2845);
if (True == _35reg2846) {
pushCont(co, 7, _35clofun2946, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1953;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1953;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1953;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1953;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2860 = __arg1;
Obj x1 = _35val2860;
Obj _35reg2861 = primCons(x1, Nil);
Obj _35reg2862 = primCons(intern("car"), _35reg2861);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2862;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1952 = makeNative(8, _35clofun2946, 0, 1, closureRef(co, 0));
Obj _35reg2850 = primIsCons(closureRef(co, 0));
if (True == _35reg2850) {
Obj _35reg2851 = primCar(closureRef(co, 0));
Obj _35reg2852 = primEQ(intern("car"), _35reg2851);
if (True == _35reg2852) {
Obj _35reg2853 = primCdr(closureRef(co, 0));
Obj _35reg2854 = primIsCons(_35reg2853);
if (True == _35reg2854) {
Obj _35reg2855 = primCdr(closureRef(co, 0));
Obj _35reg2856 = primCar(_35reg2855);
Obj x = _35reg2856;
Obj _35reg2857 = primCdr(closureRef(co, 0));
Obj _35reg2858 = primCdr(_35reg2857);
Obj _35reg2859 = primEQ(Nil, _35reg2858);
if (True == _35reg2859) {
pushCont(co, 9, _35clofun2946, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1952;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1952;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1952;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1952;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2873 = __arg1;
Obj x1 = _35val2873;
Obj _35reg2874 = primCons(x1, Nil);
Obj _35reg2875 = primCons(intern("cons?"), _35reg2874);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2875;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1951 = makeNative(10, _35clofun2946, 0, 1, closureRef(co, 0));
Obj _35reg2863 = primIsCons(closureRef(co, 0));
if (True == _35reg2863) {
Obj _35reg2864 = primCar(closureRef(co, 0));
Obj _35reg2865 = primEQ(intern("cons?"), _35reg2864);
if (True == _35reg2865) {
Obj _35reg2866 = primCdr(closureRef(co, 0));
Obj _35reg2867 = primIsCons(_35reg2866);
if (True == _35reg2867) {
Obj _35reg2868 = primCdr(closureRef(co, 0));
Obj _35reg2869 = primCar(_35reg2868);
Obj x = _35reg2869;
Obj _35reg2870 = primCdr(closureRef(co, 0));
Obj _35reg2871 = primCdr(_35reg2870);
Obj _35reg2872 = primEQ(Nil, _35reg2871);
if (True == _35reg2872) {
pushCont(co, 11, _35clofun2946, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35p1949 = __arg1;
Obj _35cc1950 = makeNative(12, _35clofun2946, 0, 1, _35p1949);
Obj _35reg2876 = primIsCons(_35p1949);
if (True == _35reg2876) {
Obj _35reg2877 = primCar(_35p1949);
Obj _35reg2878 = primEQ(intern("quote"), _35reg2877);
if (True == _35reg2878) {
Obj _35reg2879 = primCdr(_35p1949);
Obj _35reg2880 = primIsCons(_35reg2879);
if (True == _35reg2880) {
Obj _35reg2881 = primCdr(_35p1949);
Obj _35reg2882 = primCar(_35reg2881);
Obj x = _35reg2882;
Obj _35reg2883 = primCdr(_35p1949);
Obj _35reg2884 = primCdr(_35reg2883);
Obj _35reg2885 = primEQ(Nil, _35reg2884);
if (True == _35reg2885) {
Obj _35reg2886 = primCons(x, Nil);
Obj _35reg2887 = primCons(intern("quote"), _35reg2886);
__nargs = 2;
__arg1 = _35reg2887;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2889 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = _35val2889;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
pushCont(co, 14, _35clofun2946, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2894 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2895 = primCons(_35val2894, Nil);
Obj _35reg2896 = primCons(x, _35reg2895);
Obj _35reg2897 = primCons(intern("do"), _35reg2896);
__nargs = 2;
__arg1 = _35reg2897;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc1964 = makeNative(16, _35clofun2946, 0, 0);
Obj _35reg2891 = primIsCons(closureRef(co, 0));
if (True == _35reg2891) {
Obj _35reg2892 = primCar(closureRef(co, 0));
Obj x = _35reg2892;
Obj _35reg2893 = primCdr(closureRef(co, 0));
Obj y = _35reg2893;
pushCont(co, 17, _35clofun2946, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1964;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc1963 = makeNative(18, _35clofun2946, 0, 1, closureRef(co, 0));
Obj _35reg2898 = primIsCons(closureRef(co, 0));
if (True == _35reg2898) {
Obj _35reg2899 = primCar(closureRef(co, 0));
Obj x = _35reg2899;
Obj _35reg2900 = primCdr(closureRef(co, 0));
Obj _35reg2901 = primIsCons(_35reg2900);
if (True == _35reg2901) {
Obj _35reg2902 = primCdr(closureRef(co, 0));
Obj _35reg2903 = primCar(_35reg2902);
Obj y = _35reg2903;
Obj _35reg2904 = primCdr(closureRef(co, 0));
Obj _35reg2905 = primCdr(_35reg2904);
Obj _35reg2906 = primEQ(Nil, _35reg2905);
if (True == _35reg2906) {
Obj _35reg2907 = primCons(y, Nil);
Obj _35reg2908 = primCons(x, _35reg2907);
Obj _35reg2909 = primCons(intern("do"), _35reg2908);
__nargs = 2;
__arg1 = _35reg2909;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1963;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1963;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1963;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35p1961 = __arg1;
Obj _35cc1962 = makeNative(19, _35clofun2946, 0, 1, _35p1961);
Obj _35reg2910 = primIsCons(_35p1961);
if (True == _35reg2910) {
Obj _35reg2911 = primCar(_35p1961);
Obj x = _35reg2911;
Obj _35reg2912 = primCdr(_35p1961);
Obj _35reg2913 = primEQ(Nil, _35reg2912);
if (True == _35reg2913) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1962;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1962;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2946) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2945(struct Cora* co){
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
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1948 = makeNative(0, _35clofun2945, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35cc1947 = makeNative(1, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2468 = primIsCons(closureRef(co, 0));
if (True == _35reg2468) {
Obj _35reg2469 = primCar(closureRef(co, 0));
Obj _35reg2470 = primEQ(intern("if"), _35reg2469);
if (True == _35reg2470) {
Obj _35reg2471 = primCdr(closureRef(co, 0));
Obj _35reg2472 = primIsCons(_35reg2471);
if (True == _35reg2472) {
Obj _35reg2473 = primCdr(closureRef(co, 0));
Obj _35reg2474 = primCar(_35reg2473);
Obj _35reg2475 = primEQ(False, _35reg2474);
if (True == _35reg2475) {
Obj _35reg2476 = primCdr(closureRef(co, 0));
Obj _35reg2477 = primCdr(_35reg2476);
Obj _35reg2478 = primIsCons(_35reg2477);
if (True == _35reg2478) {
Obj _35reg2479 = primCdr(closureRef(co, 0));
Obj _35reg2480 = primCdr(_35reg2479);
Obj _35reg2481 = primCar(_35reg2480);
Obj y = _35reg2481;
Obj _35reg2482 = primCdr(closureRef(co, 0));
Obj _35reg2483 = primCdr(_35reg2482);
Obj _35reg2484 = primCdr(_35reg2483);
Obj _35reg2485 = primIsCons(_35reg2484);
if (True == _35reg2485) {
Obj _35reg2486 = primCdr(closureRef(co, 0));
Obj _35reg2487 = primCdr(_35reg2486);
Obj _35reg2488 = primCdr(_35reg2487);
Obj _35reg2489 = primCar(_35reg2488);
Obj z = _35reg2489;
Obj _35reg2490 = primCdr(closureRef(co, 0));
Obj _35reg2491 = primCdr(_35reg2490);
Obj _35reg2492 = primCdr(_35reg2491);
Obj _35reg2493 = primCdr(_35reg2492);
Obj _35reg2494 = primEQ(Nil, _35reg2493);
if (True == _35reg2494) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1947;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc1946 = makeNative(2, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2495 = primIsCons(closureRef(co, 0));
if (True == _35reg2495) {
Obj _35reg2496 = primCar(closureRef(co, 0));
Obj _35reg2497 = primEQ(intern("if"), _35reg2496);
if (True == _35reg2497) {
Obj _35reg2498 = primCdr(closureRef(co, 0));
Obj _35reg2499 = primIsCons(_35reg2498);
if (True == _35reg2499) {
Obj _35reg2500 = primCdr(closureRef(co, 0));
Obj _35reg2501 = primCar(_35reg2500);
Obj _35reg2502 = primEQ(True, _35reg2501);
if (True == _35reg2502) {
Obj _35reg2503 = primCdr(closureRef(co, 0));
Obj _35reg2504 = primCdr(_35reg2503);
Obj _35reg2505 = primIsCons(_35reg2504);
if (True == _35reg2505) {
Obj _35reg2506 = primCdr(closureRef(co, 0));
Obj _35reg2507 = primCdr(_35reg2506);
Obj _35reg2508 = primCar(_35reg2507);
Obj y = _35reg2508;
Obj _35reg2509 = primCdr(closureRef(co, 0));
Obj _35reg2510 = primCdr(_35reg2509);
Obj _35reg2511 = primCdr(_35reg2510);
Obj _35reg2512 = primIsCons(_35reg2511);
if (True == _35reg2512) {
Obj _35reg2513 = primCdr(closureRef(co, 0));
Obj _35reg2514 = primCdr(_35reg2513);
Obj _35reg2515 = primCdr(_35reg2514);
Obj _35reg2516 = primCar(_35reg2515);
Obj z = _35reg2516;
Obj _35reg2517 = primCdr(closureRef(co, 0));
Obj _35reg2518 = primCdr(_35reg2517);
Obj _35reg2519 = primCdr(_35reg2518);
Obj _35reg2520 = primCdr(_35reg2519);
Obj _35reg2521 = primEQ(Nil, _35reg2520);
if (True == _35reg2521) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc1945 = makeNative(3, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2522 = primIsCons(closureRef(co, 0));
if (True == _35reg2522) {
Obj _35reg2523 = primCar(closureRef(co, 0));
Obj _35reg2524 = primEQ(intern("not"), _35reg2523);
if (True == _35reg2524) {
Obj _35reg2525 = primCdr(closureRef(co, 0));
Obj _35reg2526 = primIsCons(_35reg2525);
if (True == _35reg2526) {
Obj _35reg2527 = primCdr(closureRef(co, 0));
Obj _35reg2528 = primCar(_35reg2527);
Obj _35reg2529 = primEQ(False, _35reg2528);
if (True == _35reg2529) {
Obj _35reg2530 = primCdr(closureRef(co, 0));
Obj _35reg2531 = primCdr(_35reg2530);
Obj _35reg2532 = primEQ(Nil, _35reg2531);
if (True == _35reg2532) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1944 = makeNative(4, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2533 = primIsCons(closureRef(co, 0));
if (True == _35reg2533) {
Obj _35reg2534 = primCar(closureRef(co, 0));
Obj _35reg2535 = primEQ(intern("not"), _35reg2534);
if (True == _35reg2535) {
Obj _35reg2536 = primCdr(closureRef(co, 0));
Obj _35reg2537 = primIsCons(_35reg2536);
if (True == _35reg2537) {
Obj _35reg2538 = primCdr(closureRef(co, 0));
Obj _35reg2539 = primCar(_35reg2538);
Obj _35reg2540 = primEQ(True, _35reg2539);
if (True == _35reg2540) {
Obj _35reg2541 = primCdr(closureRef(co, 0));
Obj _35reg2542 = primCdr(_35reg2541);
Obj _35reg2543 = primEQ(Nil, _35reg2542);
if (True == _35reg2543) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1944;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1944;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1944;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1944;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1944;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc1943 = makeNative(5, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2544 = primIsCons(closureRef(co, 0));
if (True == _35reg2544) {
Obj _35reg2545 = primCar(closureRef(co, 0));
Obj _35reg2546 = primEQ(intern("null?"), _35reg2545);
if (True == _35reg2546) {
Obj _35reg2547 = primCdr(closureRef(co, 0));
Obj _35reg2548 = primIsCons(_35reg2547);
if (True == _35reg2548) {
Obj _35reg2549 = primCdr(closureRef(co, 0));
Obj _35reg2550 = primCar(_35reg2549);
Obj _35reg2551 = primIsCons(_35reg2550);
if (True == _35reg2551) {
Obj _35reg2552 = primCdr(closureRef(co, 0));
Obj _35reg2553 = primCar(_35reg2552);
Obj _35reg2554 = primCar(_35reg2553);
Obj _35reg2555 = primEQ(intern("cons"), _35reg2554);
if (True == _35reg2555) {
Obj _35reg2556 = primCdr(closureRef(co, 0));
Obj _35reg2557 = primCar(_35reg2556);
Obj _35reg2558 = primCdr(_35reg2557);
Obj _35reg2559 = primIsCons(_35reg2558);
if (True == _35reg2559) {
Obj _35reg2560 = primCdr(closureRef(co, 0));
Obj _35reg2561 = primCar(_35reg2560);
Obj _35reg2562 = primCdr(_35reg2561);
Obj _35reg2563 = primCar(_35reg2562);
Obj __ = _35reg2563;
Obj _35reg2564 = primCdr(closureRef(co, 0));
Obj _35reg2565 = primCar(_35reg2564);
Obj _35reg2566 = primCdr(_35reg2565);
Obj _35reg2567 = primCdr(_35reg2566);
Obj _35reg2568 = primIsCons(_35reg2567);
if (True == _35reg2568) {
Obj _35reg2569 = primCdr(closureRef(co, 0));
Obj _35reg2570 = primCar(_35reg2569);
Obj _35reg2571 = primCdr(_35reg2570);
Obj _35reg2572 = primCdr(_35reg2571);
Obj _35reg2573 = primCar(_35reg2572);
__ = _35reg2573;
Obj _35reg2574 = primCdr(closureRef(co, 0));
Obj _35reg2575 = primCar(_35reg2574);
Obj _35reg2576 = primCdr(_35reg2575);
Obj _35reg2577 = primCdr(_35reg2576);
Obj _35reg2578 = primCdr(_35reg2577);
Obj _35reg2579 = primEQ(Nil, _35reg2578);
if (True == _35reg2579) {
Obj _35reg2580 = primCdr(closureRef(co, 0));
Obj _35reg2581 = primCdr(_35reg2580);
Obj _35reg2582 = primEQ(Nil, _35reg2581);
if (True == _35reg2582) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc1942 = makeNative(6, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2583 = primIsCons(closureRef(co, 0));
if (True == _35reg2583) {
Obj _35reg2584 = primCar(closureRef(co, 0));
Obj _35reg2585 = primEQ(intern("null?"), _35reg2584);
if (True == _35reg2585) {
Obj _35reg2586 = primCdr(closureRef(co, 0));
Obj _35reg2587 = primIsCons(_35reg2586);
if (True == _35reg2587) {
Obj _35reg2588 = primCdr(closureRef(co, 0));
Obj _35reg2589 = primCar(_35reg2588);
Obj _35reg2590 = primEQ(Nil, _35reg2589);
if (True == _35reg2590) {
Obj _35reg2591 = primCdr(closureRef(co, 0));
Obj _35reg2592 = primCdr(_35reg2591);
Obj _35reg2593 = primEQ(Nil, _35reg2592);
if (True == _35reg2593) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1942;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1942;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1942;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1942;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1942;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc1941 = makeNative(7, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2594 = primIsCons(closureRef(co, 0));
if (True == _35reg2594) {
Obj _35reg2595 = primCar(closureRef(co, 0));
Obj _35reg2596 = primEQ(intern("and"), _35reg2595);
if (True == _35reg2596) {
Obj _35reg2597 = primCdr(closureRef(co, 0));
Obj _35reg2598 = primIsCons(_35reg2597);
if (True == _35reg2598) {
Obj _35reg2599 = primCdr(closureRef(co, 0));
Obj _35reg2600 = primCar(_35reg2599);
Obj _35reg2601 = primEQ(True, _35reg2600);
if (True == _35reg2601) {
Obj _35reg2602 = primCdr(closureRef(co, 0));
Obj _35reg2603 = primCdr(_35reg2602);
Obj _35reg2604 = primIsCons(_35reg2603);
if (True == _35reg2604) {
Obj _35reg2605 = primCdr(closureRef(co, 0));
Obj _35reg2606 = primCdr(_35reg2605);
Obj _35reg2607 = primCar(_35reg2606);
Obj _35reg2608 = primEQ(True, _35reg2607);
if (True == _35reg2608) {
Obj _35reg2609 = primCdr(closureRef(co, 0));
Obj _35reg2610 = primCdr(_35reg2609);
Obj _35reg2611 = primCdr(_35reg2610);
Obj _35reg2612 = primEQ(Nil, _35reg2611);
if (True == _35reg2612) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1941;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc1940 = makeNative(8, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2613 = primIsCons(closureRef(co, 0));
if (True == _35reg2613) {
Obj _35reg2614 = primCar(closureRef(co, 0));
Obj _35reg2615 = primEQ(intern("cons?"), _35reg2614);
if (True == _35reg2615) {
Obj _35reg2616 = primCdr(closureRef(co, 0));
Obj _35reg2617 = primIsCons(_35reg2616);
if (True == _35reg2617) {
Obj _35reg2618 = primCdr(closureRef(co, 0));
Obj _35reg2619 = primCar(_35reg2618);
Obj _35reg2620 = primIsCons(_35reg2619);
if (True == _35reg2620) {
Obj _35reg2621 = primCdr(closureRef(co, 0));
Obj _35reg2622 = primCar(_35reg2621);
Obj _35reg2623 = primCar(_35reg2622);
Obj _35reg2624 = primEQ(intern("cons"), _35reg2623);
if (True == _35reg2624) {
Obj _35reg2625 = primCdr(closureRef(co, 0));
Obj _35reg2626 = primCar(_35reg2625);
Obj _35reg2627 = primCdr(_35reg2626);
Obj _35reg2628 = primIsCons(_35reg2627);
if (True == _35reg2628) {
Obj _35reg2629 = primCdr(closureRef(co, 0));
Obj _35reg2630 = primCar(_35reg2629);
Obj _35reg2631 = primCdr(_35reg2630);
Obj _35reg2632 = primCar(_35reg2631);
Obj __ = _35reg2632;
Obj _35reg2633 = primCdr(closureRef(co, 0));
Obj _35reg2634 = primCar(_35reg2633);
Obj _35reg2635 = primCdr(_35reg2634);
Obj _35reg2636 = primCdr(_35reg2635);
Obj _35reg2637 = primIsCons(_35reg2636);
if (True == _35reg2637) {
Obj _35reg2638 = primCdr(closureRef(co, 0));
Obj _35reg2639 = primCar(_35reg2638);
Obj _35reg2640 = primCdr(_35reg2639);
Obj _35reg2641 = primCdr(_35reg2640);
Obj _35reg2642 = primCar(_35reg2641);
__ = _35reg2642;
Obj _35reg2643 = primCdr(closureRef(co, 0));
Obj _35reg2644 = primCar(_35reg2643);
Obj _35reg2645 = primCdr(_35reg2644);
Obj _35reg2646 = primCdr(_35reg2645);
Obj _35reg2647 = primCdr(_35reg2646);
Obj _35reg2648 = primEQ(Nil, _35reg2647);
if (True == _35reg2648) {
Obj _35reg2649 = primCdr(closureRef(co, 0));
Obj _35reg2650 = primCdr(_35reg2649);
Obj _35reg2651 = primEQ(Nil, _35reg2650);
if (True == _35reg2651) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1939 = makeNative(9, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2652 = primIsCons(closureRef(co, 0));
if (True == _35reg2652) {
Obj _35reg2653 = primCar(closureRef(co, 0));
Obj _35reg2654 = primEQ(intern("cdr"), _35reg2653);
if (True == _35reg2654) {
Obj _35reg2655 = primCdr(closureRef(co, 0));
Obj _35reg2656 = primIsCons(_35reg2655);
if (True == _35reg2656) {
Obj _35reg2657 = primCdr(closureRef(co, 0));
Obj _35reg2658 = primCar(_35reg2657);
Obj _35reg2659 = primIsCons(_35reg2658);
if (True == _35reg2659) {
Obj _35reg2660 = primCdr(closureRef(co, 0));
Obj _35reg2661 = primCar(_35reg2660);
Obj _35reg2662 = primCar(_35reg2661);
Obj _35reg2663 = primEQ(intern("cons"), _35reg2662);
if (True == _35reg2663) {
Obj _35reg2664 = primCdr(closureRef(co, 0));
Obj _35reg2665 = primCar(_35reg2664);
Obj _35reg2666 = primCdr(_35reg2665);
Obj _35reg2667 = primIsCons(_35reg2666);
if (True == _35reg2667) {
Obj _35reg2668 = primCdr(closureRef(co, 0));
Obj _35reg2669 = primCar(_35reg2668);
Obj _35reg2670 = primCdr(_35reg2669);
Obj _35reg2671 = primCar(_35reg2670);
Obj __ = _35reg2671;
Obj _35reg2672 = primCdr(closureRef(co, 0));
Obj _35reg2673 = primCar(_35reg2672);
Obj _35reg2674 = primCdr(_35reg2673);
Obj _35reg2675 = primCdr(_35reg2674);
Obj _35reg2676 = primIsCons(_35reg2675);
if (True == _35reg2676) {
Obj _35reg2677 = primCdr(closureRef(co, 0));
Obj _35reg2678 = primCar(_35reg2677);
Obj _35reg2679 = primCdr(_35reg2678);
Obj _35reg2680 = primCdr(_35reg2679);
Obj _35reg2681 = primCar(_35reg2680);
Obj x = _35reg2681;
Obj _35reg2682 = primCdr(closureRef(co, 0));
Obj _35reg2683 = primCar(_35reg2682);
Obj _35reg2684 = primCdr(_35reg2683);
Obj _35reg2685 = primCdr(_35reg2684);
Obj _35reg2686 = primCdr(_35reg2685);
Obj _35reg2687 = primEQ(Nil, _35reg2686);
if (True == _35reg2687) {
Obj _35reg2688 = primCdr(closureRef(co, 0));
Obj _35reg2689 = primCdr(_35reg2688);
Obj _35reg2690 = primEQ(Nil, _35reg2689);
if (True == _35reg2690) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1939;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1937 = __arg1;
Obj _35cc1938 = makeNative(10, _35clofun2945, 0, 1, _35p1937);
Obj _35reg2691 = primIsCons(_35p1937);
if (True == _35reg2691) {
Obj _35reg2692 = primCar(_35p1937);
Obj _35reg2693 = primEQ(intern("car"), _35reg2692);
if (True == _35reg2693) {
Obj _35reg2694 = primCdr(_35p1937);
Obj _35reg2695 = primIsCons(_35reg2694);
if (True == _35reg2695) {
Obj _35reg2696 = primCdr(_35p1937);
Obj _35reg2697 = primCar(_35reg2696);
Obj _35reg2698 = primIsCons(_35reg2697);
if (True == _35reg2698) {
Obj _35reg2699 = primCdr(_35p1937);
Obj _35reg2700 = primCar(_35reg2699);
Obj _35reg2701 = primCar(_35reg2700);
Obj _35reg2702 = primEQ(intern("cons"), _35reg2701);
if (True == _35reg2702) {
Obj _35reg2703 = primCdr(_35p1937);
Obj _35reg2704 = primCar(_35reg2703);
Obj _35reg2705 = primCdr(_35reg2704);
Obj _35reg2706 = primIsCons(_35reg2705);
if (True == _35reg2706) {
Obj _35reg2707 = primCdr(_35p1937);
Obj _35reg2708 = primCar(_35reg2707);
Obj _35reg2709 = primCdr(_35reg2708);
Obj _35reg2710 = primCar(_35reg2709);
Obj x = _35reg2710;
Obj _35reg2711 = primCdr(_35p1937);
Obj _35reg2712 = primCar(_35reg2711);
Obj _35reg2713 = primCdr(_35reg2712);
Obj _35reg2714 = primCdr(_35reg2713);
Obj _35reg2715 = primIsCons(_35reg2714);
if (True == _35reg2715) {
Obj _35reg2716 = primCdr(_35p1937);
Obj _35reg2717 = primCar(_35reg2716);
Obj _35reg2718 = primCdr(_35reg2717);
Obj _35reg2719 = primCdr(_35reg2718);
Obj _35reg2720 = primCar(_35reg2719);
Obj __ = _35reg2720;
Obj _35reg2721 = primCdr(_35p1937);
Obj _35reg2722 = primCar(_35reg2721);
Obj _35reg2723 = primCdr(_35reg2722);
Obj _35reg2724 = primCdr(_35reg2723);
Obj _35reg2725 = primCdr(_35reg2724);
Obj _35reg2726 = primEQ(Nil, _35reg2725);
if (True == _35reg2726) {
Obj _35reg2727 = primCdr(_35p1937);
Obj _35reg2728 = primCdr(_35reg2727);
Obj _35reg2729 = primEQ(Nil, _35reg2728);
if (True == _35reg2729) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1938;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1960 = makeNative(12, _35clofun2945, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35cc1959 = makeNative(13, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2731 = primIsCons(closureRef(co, 0));
if (True == _35reg2731) {
Obj _35reg2732 = primCar(closureRef(co, 0));
Obj f = _35reg2732;
Obj _35reg2733 = primCdr(closureRef(co, 0));
Obj args = _35reg2733;
Obj _35reg2734 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.propagate-boolean"));
__arg2 = _35reg2734;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2752 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2753 = primCons(_35val2752, Nil);
Obj _35reg2754 = primCons(args, _35reg2753);
Obj _35reg2755 = primCons(intern("lambda"), _35reg2754);
__nargs = 2;
__arg1 = _35reg2755;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35cc1958 = makeNative(14, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2735 = primIsCons(closureRef(co, 0));
if (True == _35reg2735) {
Obj _35reg2736 = primCar(closureRef(co, 0));
Obj _35reg2737 = primEQ(intern("lambda"), _35reg2736);
if (True == _35reg2737) {
Obj _35reg2738 = primCdr(closureRef(co, 0));
Obj _35reg2739 = primIsCons(_35reg2738);
if (True == _35reg2739) {
Obj _35reg2740 = primCdr(closureRef(co, 0));
Obj _35reg2741 = primCar(_35reg2740);
Obj args = _35reg2741;
Obj _35reg2742 = primCdr(closureRef(co, 0));
Obj _35reg2743 = primCdr(_35reg2742);
Obj _35reg2744 = primIsCons(_35reg2743);
if (True == _35reg2744) {
Obj _35reg2745 = primCdr(closureRef(co, 0));
Obj _35reg2746 = primCdr(_35reg2745);
Obj _35reg2747 = primCar(_35reg2746);
Obj body = _35reg2747;
Obj _35reg2748 = primCdr(closureRef(co, 0));
Obj _35reg2749 = primCdr(_35reg2748);
Obj _35reg2750 = primCdr(_35reg2749);
Obj _35reg2751 = primEQ(Nil, _35reg2750);
if (True == _35reg2751) {
pushCont(co, 15, _35clofun2945, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2784 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val2784;
Obj _35reg2785 = primCons(z1, Nil);
Obj _35reg2786 = primCons(y1, _35reg2785);
Obj _35reg2787 = primCons(x1, _35reg2786);
Obj _35reg2788 = primCons(intern("if"), _35reg2787);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg2788;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2783 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val2783;
pushCont(co, 17, _35clofun2945, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2782 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val2782;
pushCont(co, 18, _35clofun2945, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1957 = makeNative(16, _35clofun2945, 0, 1, closureRef(co, 0));
Obj _35reg2756 = primIsCons(closureRef(co, 0));
if (True == _35reg2756) {
Obj _35reg2757 = primCar(closureRef(co, 0));
Obj _35reg2758 = primEQ(intern("if"), _35reg2757);
if (True == _35reg2758) {
Obj _35reg2759 = primCdr(closureRef(co, 0));
Obj _35reg2760 = primIsCons(_35reg2759);
if (True == _35reg2760) {
Obj _35reg2761 = primCdr(closureRef(co, 0));
Obj _35reg2762 = primCar(_35reg2761);
Obj x = _35reg2762;
Obj _35reg2763 = primCdr(closureRef(co, 0));
Obj _35reg2764 = primCdr(_35reg2763);
Obj _35reg2765 = primIsCons(_35reg2764);
if (True == _35reg2765) {
Obj _35reg2766 = primCdr(closureRef(co, 0));
Obj _35reg2767 = primCdr(_35reg2766);
Obj _35reg2768 = primCar(_35reg2767);
Obj y = _35reg2768;
Obj _35reg2769 = primCdr(closureRef(co, 0));
Obj _35reg2770 = primCdr(_35reg2769);
Obj _35reg2771 = primCdr(_35reg2770);
Obj _35reg2772 = primIsCons(_35reg2771);
if (True == _35reg2772) {
Obj _35reg2773 = primCdr(closureRef(co, 0));
Obj _35reg2774 = primCdr(_35reg2773);
Obj _35reg2775 = primCdr(_35reg2774);
Obj _35reg2776 = primCar(_35reg2775);
Obj z = _35reg2776;
Obj _35reg2777 = primCdr(closureRef(co, 0));
Obj _35reg2778 = primCdr(_35reg2777);
Obj _35reg2779 = primCdr(_35reg2778);
Obj _35reg2780 = primCdr(_35reg2779);
Obj _35reg2781 = primEQ(Nil, _35reg2780);
if (True == _35reg2781) {
pushCont(co, 19, _35clofun2945, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1957;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2945) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2944(struct Cora* co){
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
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2425 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2425) {
Obj _35reg2426 = primCar(l);
Obj _35reg2427 = primCons(_35reg2426, res);
Obj _35reg2428 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = _35reg2427;
__arg2 = fn;
__arg3 = _35reg2428;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2429 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg2429;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg2423 = primIsCons(l);
if (True == _35reg2423) {
Obj _35reg2424 = primCar(l);
pushCont(co, 1, _35clofun2944, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg2424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2435 = __arg1;
Obj _35reg2433= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2436 = primCons(_35reg2433, _35val2435);
__nargs = 2;
__arg1 = _35reg2436;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg2432 = primEQ(l1, Nil);
if (True == _35reg2432) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2433 = primCar(l1);
Obj _35reg2434 = primCdr(l1);
pushCont(co, 4, _35clofun2944, 1, _35reg2433);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg2434;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x = __arg1;
Obj _35reg2439 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg2439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg2442 = primEQ(closureRef(co, 0), x);
Obj _35reg2443 = primNot(_35reg2442);
__nargs = 2;
__arg1 = _35reg2443;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2446 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2447 = primNot(_35val2446);
if (True == _35reg2447) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj _35val2445 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun2944, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val2445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2440 = __arg1;
Obj counts = _35val2440;
Obj _35reg2441 = primCar(counts);
Obj n = _35reg2441;
Obj dif = makeNative(7, _35clofun2944, 1, 1, n);
Obj _35reg2444 = primCdr(counts);
pushCont(co, 9, _35clofun2944, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg2444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2438 = __arg1;
Obj pats = _35val2438;
Obj len = makeNative(6, _35clofun2944, 1, 0);
pushCont(co, 10, _35clofun2944, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj rules = __arg1;
pushCont(co, 11, _35clofun2944, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2452 = __arg1;
Obj _35reg2450= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2453 = primCons(_35reg2450, _35val2452);
__nargs = 2;
__arg1 = _35reg2453;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj n = __arg1;
Obj _35reg2449 = primEQ(n, makeNumber(0));
if (True == _35reg2449) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2450 = primGenSym(intern("p"));
Obj _35reg2451 = primSub(n, makeNumber(1));
pushCont(co, 13, _35clofun2944, 1, _35reg2450);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.gen-parameters"));
__arg1 = _35reg2451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2459 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2460 = primCons(intern("list"), args);
Obj _35reg2461 = primCons(_35reg2460, body);
Obj _35reg2462 = primCons(intern("match"), _35reg2461);
Obj _35reg2463 = primCons(_35reg2462, Nil);
Obj _35reg2464 = primCons(args, _35reg2463);
Obj _35reg2465 = primCons(_35val2459, _35reg2464);
Obj _35reg2466 = primCons(intern("defun"), _35reg2465);
__nargs = 2;
__arg1 = _35reg2466;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2458 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val2458;
pushCont(co, 15, _35clofun2944, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2457 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val2457;
pushCont(co, 16, _35clofun2944, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.gen-parameters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2456 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val2456;
pushCont(co, 17, _35clofun2944, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2455 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun2944, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.extract-rules"));
__arg1 = _35val2455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
pushCont(co, 19, _35clofun2944, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2943(struct Cora* co){
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
pushCont(co, 20, _35clofun2942, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2341 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2342 = primCons(_35val2341, Nil);
Obj _35reg2343 = primCons(value, _35reg2342);
Obj _35reg2344 = primCons(val, _35reg2343);
Obj _35reg2345 = primCons(intern("let"), _35reg2344);
__nargs = 2;
__arg1 = _35reg2345;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2347 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2348 = primCons(_35val2347, Nil);
Obj _35reg2349 = primCons(value, _35reg2348);
Obj _35reg2350 = primCons(val, _35reg2349);
Obj _35reg2351 = primCons(intern("let"), _35reg2350);
__nargs = 2;
__arg1 = _35reg2351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2353 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2354 = primCons(_35val2353, Nil);
Obj _35reg2355 = primCons(value, _35reg2354);
Obj _35reg2356 = primCons(val, _35reg2355);
Obj _35reg2357 = primCons(intern("let"), _35reg2356);
__nargs = 2;
__arg1 = _35reg2357;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2335 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val2335;
Obj _35reg2336 = primIsCons(value);
if (True == _35reg2336) {
Obj _35reg2337 = primCar(value);
Obj _35reg2338 = primEQ(intern("cons"), _35reg2337);
Obj _35reg2339 = primNot(_35reg2338);
if (True == _35reg2339) {
if (True == True) {
Obj _35reg2340 = primGenSym(intern("val"));
Obj val = _35reg2340;
pushCont(co, 1, _35clofun2943, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2346 = primGenSym(intern("val"));
Obj val = _35reg2346;
pushCont(co, 2, _35clofun2943, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2352 = primGenSym(intern("val"));
Obj val = _35reg2352;
pushCont(co, 3, _35clofun2943, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label5:
{
Obj _35val2334 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val2334;
pushCont(co, 4, _35clofun2943, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2333 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun2943, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val2333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun2943, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc1936 = makeNative(9, _35clofun2943, 0, 0);
Obj _35reg2360 = primIsCons(closureRef(co, 0));
if (True == _35reg2360) {
Obj _35reg2361 = primCar(closureRef(co, 0));
Obj x = _35reg2361;
Obj _35reg2362 = primCdr(closureRef(co, 0));
Obj y = _35reg2362;
Obj _35reg2363 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = y;
__arg2 = _35reg2363;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1936;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2373 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2374 = primCons(intern("list"), _35val2373);
Obj pat = _35reg2374;
Obj _35reg2375 = primCons(pat, closureRef(co, 2));
Obj _35reg2376 = primCons(act, _35reg2375);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2376;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1935 = makeNative(10, _35clofun2943, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2364 = primIsCons(closureRef(co, 0));
if (True == _35reg2364) {
Obj _35reg2365 = primCar(closureRef(co, 0));
Obj _35reg2366 = primEQ(intern("=>"), _35reg2365);
if (True == _35reg2366) {
Obj _35reg2367 = primCdr(closureRef(co, 0));
Obj _35reg2368 = primIsCons(_35reg2367);
if (True == _35reg2368) {
Obj _35reg2369 = primCdr(closureRef(co, 0));
Obj _35reg2370 = primCar(_35reg2369);
Obj act = _35reg2370;
Obj _35reg2371 = primCdr(closureRef(co, 0));
Obj _35reg2372 = primCdr(_35reg2371);
Obj remain = _35reg2372;
pushCont(co, 11, _35clofun2943, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2403 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2404 = primCons(intern("list"), _35val2403);
Obj pat = _35reg2404;
Obj _35reg2405 = primCons(act, Nil);
Obj _35reg2406 = primCons(pred, _35reg2405);
Obj _35reg2407 = primCons(intern("where"), _35reg2406);
Obj _35reg2408 = primCons(pat, closureRef(co, 2));
Obj _35reg2409 = primCons(_35reg2407, _35reg2408);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2409;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1934 = makeNative(12, _35clofun2943, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2377 = primIsCons(closureRef(co, 0));
if (True == _35reg2377) {
Obj _35reg2378 = primCar(closureRef(co, 0));
Obj _35reg2379 = primEQ(intern("=>"), _35reg2378);
if (True == _35reg2379) {
Obj _35reg2380 = primCdr(closureRef(co, 0));
Obj _35reg2381 = primIsCons(_35reg2380);
if (True == _35reg2381) {
Obj _35reg2382 = primCdr(closureRef(co, 0));
Obj _35reg2383 = primCar(_35reg2382);
Obj act = _35reg2383;
Obj _35reg2384 = primCdr(closureRef(co, 0));
Obj _35reg2385 = primCdr(_35reg2384);
Obj _35reg2386 = primIsCons(_35reg2385);
if (True == _35reg2386) {
Obj _35reg2387 = primCdr(closureRef(co, 0));
Obj _35reg2388 = primCdr(_35reg2387);
Obj _35reg2389 = primCar(_35reg2388);
Obj _35reg2390 = primEQ(intern("where"), _35reg2389);
if (True == _35reg2390) {
Obj _35reg2391 = primCdr(closureRef(co, 0));
Obj _35reg2392 = primCdr(_35reg2391);
Obj _35reg2393 = primCdr(_35reg2392);
Obj _35reg2394 = primIsCons(_35reg2393);
if (True == _35reg2394) {
Obj _35reg2395 = primCdr(closureRef(co, 0));
Obj _35reg2396 = primCdr(_35reg2395);
Obj _35reg2397 = primCdr(_35reg2396);
Obj _35reg2398 = primCar(_35reg2397);
Obj pred = _35reg2398;
Obj _35reg2399 = primCdr(closureRef(co, 0));
Obj _35reg2400 = primCdr(_35reg2399);
Obj _35reg2401 = primCdr(_35reg2400);
Obj _35reg2402 = primCdr(_35reg2401);
Obj remain = _35reg2402;
pushCont(co, 13, _35clofun2943, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc1933 = makeNative(14, _35clofun2943, 0, 3, input, current, result);
Obj _35reg2410 = primEQ(Nil, input);
if (True == _35reg2410) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1933;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2416 = __arg1;
Obj _35reg2415= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init.rules-patterns"));
__arg1 = _35reg2415;
__arg2 = _35val2416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2413 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2413) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2414 = primCar(rules);
Obj _35reg2415 = primCons(_35reg2414, res);
pushCont(co, 17, _35clofun2943, 1, _35reg2415);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 18, _35clofun2943, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg2418 = primEQ(l, Nil);
if (True == _35reg2418) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2419 = primAdd(i, makeNumber(1));
Obj _35reg2420 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.length-h"));
__arg1 = _35reg2419;
__arg2 = _35reg2420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2943) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2942(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2267 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2266= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2268 = primCons(cc, Nil);
Obj _35reg2269 = primCons(_35reg2268, Nil);
Obj _35reg2270 = primCons(_35val2267, _35reg2269);
Obj _35reg2271 = primCons(_35val2266, _35reg2270);
Obj _35reg2272 = primCons(intern("if"), _35reg2271);
__nargs = 2;
__arg1 = _35reg2272;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2266 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun2942, 2, cc, _35val2266);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2274 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2273= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2275 = primCons(cc, Nil);
Obj _35reg2276 = primCons(_35reg2275, Nil);
Obj _35reg2277 = primCons(_35val2274, _35reg2276);
Obj _35reg2278 = primCons(_35val2273, _35reg2277);
Obj _35reg2279 = primCons(intern("if"), _35reg2278);
__nargs = 2;
__arg1 = _35reg2279;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2273 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun2942, 2, cc, _35val2273);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2256 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2256) {
Obj _35reg2257 = primCar(action);
Obj _35reg2258 = primEQ(_35reg2257, intern("where"));
if (True == _35reg2258) {
if (True == True) {
pushCont(co, 20, _35clofun2941, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun2942, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 3, _35clofun2942, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label5:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg2254 = primCdr(rules);
Obj _35reg2255 = primCar(_35reg2254);
Obj action = _35reg2255;
pushCont(co, 4, _35clofun2942, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2294 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2294;
Obj _35reg2295 = primCons(rest, Nil);
Obj _35reg2296 = primCons(Nil, _35reg2295);
Obj _35reg2297 = primCons(intern("lambda"), _35reg2296);
Obj _35reg2298 = primCons(curr, Nil);
Obj _35reg2299 = primCons(_35reg2297, _35reg2298);
Obj _35reg2300 = primCons(cc, _35reg2299);
Obj _35reg2301 = primCons(intern("let"), _35reg2300);
__nargs = 2;
__arg1 = _35reg2301;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2291 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2291;
Obj _35reg2292 = primCdr(rules);
Obj _35reg2293 = primCdr(_35reg2292);
pushCont(co, 6, _35clofun2942, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg2293;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2290 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun2942, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val2290;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2289 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2289;
pushCont(co, 8, _35clofun2942, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2309 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2309;
Obj _35reg2310 = primCons(rest, Nil);
Obj _35reg2311 = primCons(Nil, _35reg2310);
Obj _35reg2312 = primCons(intern("lambda"), _35reg2311);
Obj _35reg2313 = primCons(curr, Nil);
Obj _35reg2314 = primCons(_35reg2312, _35reg2313);
Obj _35reg2315 = primCons(cc, _35reg2314);
Obj _35reg2316 = primCons(intern("let"), _35reg2315);
__nargs = 2;
__arg1 = _35reg2316;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2306 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2306;
Obj _35reg2307 = primCdr(rules);
Obj _35reg2308 = primCdr(_35reg2307);
pushCont(co, 10, _35clofun2942, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg2308;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2305 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun2942, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val2305;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2304 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2304;
pushCont(co, 12, _35clofun2942, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2286 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2286) {
if (True == True) {
Obj _35reg2287 = primCar(rules);
Obj pat = _35reg2287;
Obj _35reg2288 = primGenSym(intern("cc"));
Obj cc = _35reg2288;
pushCont(co, 9, _35clofun2942, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2302 = primCar(rules);
Obj pat = _35reg2302;
Obj _35reg2303 = primGenSym(intern("cc"));
Obj cc = _35reg2303;
pushCont(co, 13, _35clofun2942, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label15:
{
Obj _35val2324 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2324;
Obj _35reg2325 = primCons(rest, Nil);
Obj _35reg2326 = primCons(Nil, _35reg2325);
Obj _35reg2327 = primCons(intern("lambda"), _35reg2326);
Obj _35reg2328 = primCons(curr, Nil);
Obj _35reg2329 = primCons(_35reg2327, _35reg2328);
Obj _35reg2330 = primCons(cc, _35reg2329);
Obj _35reg2331 = primCons(intern("let"), _35reg2330);
__nargs = 2;
__arg1 = _35reg2331;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2321 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2321;
Obj _35reg2322 = primCdr(rules);
Obj _35reg2323 = primCdr(_35reg2322);
pushCont(co, 15, _35clofun2942, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg2323;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2320 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun2942, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val2320;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2319 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2319;
pushCont(co, 17, _35clofun2942, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2284 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2284) {
Obj _35reg2285 = primCdr(rules);
pushCont(co, 14, _35clofun2942, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg2317 = primCar(rules);
Obj pat = _35reg2317;
Obj _35reg2318 = primGenSym(intern("cc"));
Obj cc = _35reg2318;
pushCont(co, 18, _35clofun2942, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj _35val2281 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2281) {
Obj _35reg2282 = primCons(makeString1("no match-help found!"), Nil);
Obj _35reg2283 = primCons(intern("error"), _35reg2282);
__nargs = 2;
__arg1 = _35reg2283;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 19, _35clofun2942, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2942) { co->ctx.pc = ps; goto fail; };
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

void _35clofun2941(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2190 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2190;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2189 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2189;
pushCont(co, 0, _35clofun2941, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2188 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2188;
pushCont(co, 1, _35clofun2941, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2198 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2192= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2199 = primCons(cc, Nil);
Obj _35reg2200 = primCons(_35reg2199, Nil);
Obj _35reg2201 = primCons(_35val2198, _35reg2200);
Obj _35reg2202 = primCons(_35reg2192, _35reg2201);
Obj _35reg2203 = primCons(intern("if"), _35reg2202);
__nargs = 2;
__arg1 = _35reg2203;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2197 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2194= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2192= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 3, _35clofun2941, 2, cc, _35reg2192);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg2194;
__arg3 = _35val2197;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2206 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2206;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2205 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2205;
pushCont(co, 5, _35clofun2941, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2204 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2204;
pushCont(co, 6, _35clofun2941, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2214 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2208= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2215 = primCons(cc, Nil);
Obj _35reg2216 = primCons(_35reg2215, Nil);
Obj _35reg2217 = primCons(_35val2214, _35reg2216);
Obj _35reg2218 = primCons(_35reg2208, _35reg2217);
Obj _35reg2219 = primCons(intern("if"), _35reg2218);
__nargs = 2;
__arg1 = _35reg2219;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val2213 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2210= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2208= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 8, _35clofun2941, 2, cc, _35reg2208);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg2210;
__arg3 = _35val2213;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2168 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val2168;
Obj _35reg2169 = primIsCons(expr);
if (True == _35reg2169) {
Obj _35reg2170 = primCar(expr);
Obj _35reg2171 = primEQ(_35reg2170, intern("cons"));
if (True == _35reg2171) {
if (True == True) {
pushCont(co, 18, _35clofun2940, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2175 = primCons(expr, Nil);
Obj _35reg2176 = primCons(intern("cons?"), _35reg2175);
Obj _35reg2177 = primCons(expr, Nil);
Obj _35reg2178 = primCons(intern("car"), _35reg2177);
Obj _35reg2179 = primCons(expr, Nil);
Obj _35reg2180 = primCons(intern("cdr"), _35reg2179);
pushCont(co, 20, _35clofun2940, 4, x, _35reg2178, cc, _35reg2176);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg2180;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun2941, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2191 = primCons(expr, Nil);
Obj _35reg2192 = primCons(intern("cons?"), _35reg2191);
Obj _35reg2193 = primCons(expr, Nil);
Obj _35reg2194 = primCons(intern("car"), _35reg2193);
Obj _35reg2195 = primCons(expr, Nil);
Obj _35reg2196 = primCons(intern("cdr"), _35reg2195);
pushCont(co, 4, _35clofun2941, 4, x, _35reg2194, cc, _35reg2192);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg2196;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun2941, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2207 = primCons(expr, Nil);
Obj _35reg2208 = primCons(intern("cons?"), _35reg2207);
Obj _35reg2209 = primCons(expr, Nil);
Obj _35reg2210 = primCons(intern("car"), _35reg2209);
Obj _35reg2211 = primCons(expr, Nil);
Obj _35reg2212 = primCons(intern("cdr"), _35reg2211);
pushCont(co, 9, _35clofun2941, 4, x, _35reg2210, cc, _35reg2208);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg2212;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _35val2167 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val2167;
pushCont(co, 10, _35clofun2941, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 11, _35clofun2941, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2221 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2221) {
Obj _35reg2222 = primIsSymbol(x);
Obj _35reg2223 = primNot(_35reg2222);
if (True == _35reg2223) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
pushCont(co, 13, _35clofun2941, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2252 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val2252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2239 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2239) {
Obj _35reg2240 = primCar(pat);
Obj _35reg2241 = primEQ(_35reg2240, intern("quote"));
if (True == _35reg2241) {
Obj _35reg2242 = primCons(expr, Nil);
Obj _35reg2243 = primCons(pat, _35reg2242);
Obj _35reg2244 = primCons(intern("="), _35reg2243);
Obj _35reg2245 = primCons(cc, Nil);
Obj _35reg2246 = primCons(_35reg2245, Nil);
Obj _35reg2247 = primCons(body, _35reg2246);
Obj _35reg2248 = primCons(_35reg2244, _35reg2247);
Obj _35reg2249 = primCons(intern("if"), _35reg2248);
__nargs = 2;
__arg1 = _35reg2249;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2250 = primCar(pat);
Obj _35reg2251 = primEQ(_35reg2250, intern("cons"));
if (True == _35reg2251) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 15, _35clofun2941, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeString1("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2224 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2224) {
Obj _35reg2225 = primEQ(pat, expr);
if (True == _35reg2225) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2226 = primCons(expr, Nil);
Obj _35reg2227 = primCons(pat, _35reg2226);
Obj _35reg2228 = primCons(intern("="), _35reg2227);
Obj _35reg2229 = primCons(cc, Nil);
Obj _35reg2230 = primCons(_35reg2229, Nil);
Obj _35reg2231 = primCons(body, _35reg2230);
Obj _35reg2232 = primCons(_35reg2228, _35reg2231);
Obj _35reg2233 = primCons(intern("if"), _35reg2232);
__nargs = 2;
__arg1 = _35reg2233;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg2234 = primIsSymbol(pat);
if (True == _35reg2234) {
Obj _35reg2235 = primCons(body, Nil);
Obj _35reg2236 = primCons(expr, _35reg2235);
Obj _35reg2237 = primCons(pat, _35reg2236);
Obj _35reg2238 = primCons(intern("let"), _35reg2237);
__nargs = 2;
__arg1 = _35reg2238;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, _35clofun2941, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
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
Obj literal_63 = makeNative(14, _35clofun2941, 1, 0);
pushCont(co, 17, _35clofun2941, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2260 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2259= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2261 = primCons(cc, Nil);
Obj _35reg2262 = primCons(_35reg2261, Nil);
Obj _35reg2263 = primCons(_35val2260, _35reg2262);
Obj _35reg2264 = primCons(_35val2259, _35reg2263);
Obj _35reg2265 = primCons(intern("if"), _35reg2264);
__nargs = 2;
__arg1 = _35reg2265;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2259 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun2941, 2, cc, _35val2259);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2940(struct Cora* co){
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
Obj _35reg2108 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-let"));
__arg1 = _35reg2108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2117 = __arg1;
Obj _35val2116= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2115= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2118 = primCons(intern("cond"), _35val2117);
Obj _35reg2119 = primCons(_35reg2118, Nil);
Obj _35reg2120 = primCons(_35val2116, _35reg2119);
Obj _35reg2121 = primCons(_35reg2115, _35reg2120);
Obj _35reg2122 = primCons(intern("if"), _35reg2121);
__nargs = 2;
__arg1 = _35reg2122;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2116 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2115= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun2940, 2, _35val2116, _35reg2115);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2114 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val2114;
Obj _35reg2115 = primCar(curr);
pushCont(co, 2, _35clofun2940, 2, exp, _35reg2115);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg2110 = primCdr(exp);
Obj _35reg2111 = primEQ(Nil, _35reg2110);
if (True == _35reg2111) {
Obj _35reg2112 = primCons(makeString1("no cond match"), Nil);
Obj _35reg2113 = primCons(intern("error"), _35reg2112);
__nargs = 2;
__arg1 = _35reg2113;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun2940, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2128 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val2128;
Obj _35reg2129 = primEQ(more, True);
if (True == _35reg2129) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2130 = primCar(l);
Obj _35reg2131 = primCons(more, Nil);
Obj _35reg2132 = primCons(True, _35reg2131);
Obj _35reg2133 = primCons(_35reg2130, _35reg2132);
Obj _35reg2134 = primCons(intern("if"), _35reg2133);
__nargs = 2;
__arg1 = _35reg2134;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj l = __arg1;
Obj _35reg2124 = primEQ(l, Nil);
if (True == _35reg2124) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2125 = primCar(l);
Obj _35reg2126 = primEQ(_35reg2125, True);
if (True == _35reg2126) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2127 = primCdr(l);
pushCont(co, 5, _35clofun2940, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-or"));
__arg1 = _35reg2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj exp = __arg1;
Obj _35reg2136 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-or"));
__arg1 = _35reg2136;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2142 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val2142;
Obj _35reg2143 = primEQ(more, False);
if (True == _35reg2143) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2144 = primCar(l);
Obj _35reg2145 = primCons(False, Nil);
Obj _35reg2146 = primCons(more, _35reg2145);
Obj _35reg2147 = primCons(_35reg2144, _35reg2146);
Obj _35reg2148 = primCons(intern("if"), _35reg2147);
__nargs = 2;
__arg1 = _35reg2148;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj l = __arg1;
Obj _35reg2138 = primEQ(Nil, l);
if (True == _35reg2138) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2139 = primCar(l);
Obj _35reg2140 = primEQ(_35reg2139, False);
if (True == _35reg2140) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2141 = primCdr(l);
pushCont(co, 8, _35clofun2940, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-and"));
__arg1 = _35reg2141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj exp = __arg1;
Obj _35reg2150 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-and"));
__arg1 = _35reg2150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg2152 = primEQ(x, True);
if (True == _35reg2152) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2153 = primEQ(x, False);
if (True == _35reg2153) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label12:
{
Obj _35val2160 = __arg1;
Obj _35reg2158= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2161 = primCons(_35val2160, Nil);
Obj _35reg2162 = primCons(_35reg2158, _35reg2161);
Obj _35reg2163 = primCons(intern("cons"), _35reg2162);
__nargs = 2;
__arg1 = _35reg2163;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2156 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2156) {
Obj _35reg2157 = primCar(pat);
__nargs = 2;
__arg1 = _35reg2157;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2158 = primCar(pat);
Obj _35reg2159 = primCdr(pat);
pushCont(co, 12, _35clofun2940, 1, _35reg2158);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rcons1"));
__arg1 = _35reg2159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj pat = __arg1;
Obj _35reg2155 = primCdr(pat);
pushCont(co, 13, _35clofun2940, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg2155;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
Obj _35reg2165 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rcons1"));
__arg1 = _35reg2165;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2174 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2174;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2173 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2173;
pushCont(co, 16, _35clofun2940, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2172 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2172;
pushCont(co, 17, _35clofun2940, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2182 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2176= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2183 = primCons(cc, Nil);
Obj _35reg2184 = primCons(_35reg2183, Nil);
Obj _35reg2185 = primCons(_35val2182, _35reg2184);
Obj _35reg2186 = primCons(_35reg2176, _35reg2185);
Obj _35reg2187 = primCons(intern("if"), _35reg2186);
__nargs = 2;
__arg1 = _35reg2187;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2181 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2178= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2176= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun2940, 2, cc, _35reg2176);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg2178;
__arg3 = _35val2181;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2939(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2051 = __arg1;
Obj _35val2050= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun2938, 1, _35val2050);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = _35val2051;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2050 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun2939, 1, _35val2050);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp1 = __arg1;
Obj _35reg2058 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg2058) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2059 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(2, _35clofun2939, 1, 1, exp);
__arg1 = _35val2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg2044 = primIsCons(exp);
if (True == _35reg2044) {
Obj _35reg2045 = primCar(exp);
Obj _35reg2046 = primEQ(_35reg2045, globalRef(intern("*protect-symbol*")));
if (True == _35reg2046) {
Obj _35reg2047 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg2047;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2048 = primCar(exp);
Obj _35reg2049 = primEQ(_35reg2048, intern("lambda"));
if (True == _35reg2049) {
pushCont(co, 1, _35clofun2939, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2056 = primCar(exp);
Obj _35reg2057 = primEQ(_35reg2056, intern("quote"));
if (True == _35reg2057) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun2939, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35val2066 = __arg1;
Obj _35val2065= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2064= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2067 = primCons(_35val2065, _35val2066);
Obj _35reg2068 = primCons(intern("lambda"), _35reg2067);
Obj _35reg2069 = primCons(_35reg2068, Nil);
Obj _35reg2070 = primCons(_35reg2064, _35reg2069);
Obj _35reg2071 = primCons(intern("cora/init.add-to-*macros*"), _35reg2070);
__nargs = 2;
__arg1 = _35reg2071;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2065 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2064= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun2939, 2, _35val2065, _35reg2064);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2062 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2063 = primCons(_35val2062, Nil);
Obj _35reg2064 = primCons(intern("quote"), _35reg2063);
pushCont(co, 6, _35clofun2939, 2, exp, _35reg2064);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun2939, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg2074 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg2074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2080 = __arg1;
Obj _35val2079= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2078= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2081 = primCons(_35val2080, Nil);
Obj _35reg2082 = primCons(_35val2079, _35reg2081);
Obj _35reg2083 = primCons(intern("lambda"), _35reg2082);
Obj _35reg2084 = primCons(_35reg2083, Nil);
Obj _35reg2085 = primCons(_35reg2078, _35reg2084);
Obj _35reg2086 = primCons(intern("set"), _35reg2085);
__nargs = 2;
__arg1 = _35reg2086;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2079 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2078= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun2939, 2, _35val2079, _35reg2078);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2076 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2077 = primCons(_35val2076, Nil);
Obj _35reg2078 = primCons(intern("quote"), _35reg2077);
pushCont(co, 11, _35clofun2939, 2, exp, _35reg2078);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
pushCont(co, 12, _35clofun2939, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg2088 = primIsCons(l);
if (True == _35reg2088) {
Obj _35reg2089 = primCar(l);
Obj _35reg2090 = primEQ(_35reg2089, x);
if (True == _35reg2090) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2091 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg2091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj x = __arg1;
Obj _35reg2093 = primIsCons(x);
Obj _35reg2094 = primNot(_35reg2093);
__nargs = 2;
__arg1 = _35reg2094;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2102 = __arg1;
Obj _35val2100= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2099= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2103 = primCons(_35val2102, Nil);
Obj _35reg2104 = primCons(_35val2100, _35reg2103);
Obj _35reg2105 = primCons(_35reg2099, _35reg2104);
Obj _35reg2106 = primCons(intern("let"), _35reg2105);
__nargs = 2;
__arg1 = _35reg2106;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val2101 = __arg1;
Obj _35val2100= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2099= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun2939, 2, _35val2100, _35reg2099);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-let"));
__arg1 = _35val2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2100 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2099= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun2939, 2, _35val2100, _35reg2099);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2097 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2097) {
Obj _35reg2098 = primCar(exp);
__nargs = 2;
__arg1 = _35reg2098;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2099 = primCar(exp);
pushCont(co, 18, _35clofun2939, 2, exp, _35reg2099);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg2096 = primCdr(exp);
pushCont(co, 19, _35clofun2939, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg2096;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun2938(struct Cora* co){
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
Obj _35reg1970 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg1970;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg1972 = primCdr(x);
Obj _35reg1973 = primCar(_35reg1972);
__nargs = 2;
__arg1 = _35reg1973;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg1975 = primCar(x);
Obj _35reg1976 = primCar(_35reg1975);
__nargs = 2;
__arg1 = _35reg1976;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg1978 = primCar(x);
Obj _35reg1979 = primCdr(_35reg1978);
__nargs = 2;
__arg1 = _35reg1979;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg1981 = primCdr(x);
Obj _35reg1982 = primCdr(_35reg1981);
__nargs = 2;
__arg1 = _35reg1982;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg1984 = primCdr(x);
Obj _35reg1985 = primCdr(_35reg1984);
Obj _35reg1986 = primCar(_35reg1985);
__nargs = 2;
__arg1 = _35reg1986;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg1988 = primCdr(x);
Obj _35reg1989 = primCdr(_35reg1988);
Obj _35reg1990 = primCdr(_35reg1989);
Obj _35reg1991 = primCar(_35reg1990);
__nargs = 2;
__arg1 = _35reg1991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg1993 = primCdr(x);
Obj _35reg1994 = primCdr(_35reg1993);
Obj _35reg1995 = primCdr(_35reg1994);
__nargs = 2;
__arg1 = _35reg1995;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2000 = __arg1;
Obj _35reg1998= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2001 = primCons(_35val2000, Nil);
Obj _35reg2002 = primCons(_35reg1998, _35reg2001);
Obj _35reg2003 = primCons(intern("cons"), _35reg2002);
__nargs = 2;
__arg1 = _35reg2003;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg1997 = primIsCons(exp);
if (True == _35reg1997) {
Obj _35reg1998 = primCar(exp);
Obj _35reg1999 = primCdr(exp);
pushCont(co, 8, _35clofun2938, 1, _35reg1998);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg1999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg2005 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg2005;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg2007 = primIsCons(l);
if (True == _35reg2007) {
Obj _35reg2008 = primCar(l);
Obj _35reg2009 = primCons(_35reg2008, res);
Obj _35reg2010 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.reverse-h"));
__arg1 = _35reg2009;
__arg2 = _35reg2010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val2016 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2017 = primCons(_35val2016, res);
Obj _35reg2018 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg2017;
__arg2 = f;
__arg3 = _35reg2018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg2014 = primIsCons(l);
if (True == _35reg2014) {
Obj _35reg2015 = primCar(l);
pushCont(co, 12, _35clofun2938, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg2015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
Obj _35reg2024 = primCons(globalRef(intern("*protect-symbol*")), x);
__nargs = 2;
__arg1 = _35reg2024;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg2026 = primCons(n, v);
Obj _35reg2027 = primCons(_35reg2026, globalRef(intern("*macros*")));
Obj _35reg2028 = primSet(co, intern("*macros*"), _35reg2027);
__nargs = 2;
__arg1 = _35reg2028;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj item = __arg1;
Obj _35reg2031 = primIsCons(closureRef(co, 0));
if (True == _35reg2031) {
Obj _35reg2032 = primCar(closureRef(co, 0));
Obj _35reg2033 = primCar(item);
Obj _35reg2034 = primEQ(_35reg2032, _35reg2033);
if (True == _35reg2034) {
if (True == True) {
Obj _35reg2035 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2035;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2036 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2037 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2037;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2038 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2039 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2039;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2040 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg2030 = primEQ(Nil, macros);
if (True == _35reg2030) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2041 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(17, _35clofun2938, 1, 2, exp, macros);
__arg1 = _35reg2041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun2938) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2052 = __arg1;
Obj _35val2050= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2053 = primCons(_35val2052, Nil);
Obj _35reg2054 = primCons(_35val2050, _35reg2053);
Obj _35reg2055 = primCons(intern("lambda"), _35reg2054);
__nargs = 2;
__arg1 = _35reg2055;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun2938) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

