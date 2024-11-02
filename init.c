#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun3312(struct Cora* co);
void _35clofun3311(struct Cora* co);
void _35clofun3310(struct Cora* co);
void _35clofun3309(struct Cora* co);
void _35clofun3308(struct Cora* co);
void _35clofun3307(struct Cora* co);
void _35clofun3306(struct Cora* co);
void _35clofun3305(struct Cora* co);
void _35clofun3304(struct Cora* co);
void _35clofun3303(struct Cora* co);
void _35clofun3302(struct Cora* co);


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
Obj _35reg2331 = primSet(intern("null?"), makeNative(0, _35clofun3302, 1, 0));
Obj _35reg2334 = primSet(intern("cadr"), makeNative(1, _35clofun3302, 1, 0));
Obj _35reg2337 = primSet(intern("caar"), makeNative(2, _35clofun3302, 1, 0));
Obj _35reg2340 = primSet(intern("cdar"), makeNative(3, _35clofun3302, 1, 0));
Obj _35reg2343 = primSet(intern("cddr"), makeNative(4, _35clofun3302, 1, 0));
Obj _35reg2347 = primSet(intern("caddr"), makeNative(5, _35clofun3302, 1, 0));
Obj _35reg2352 = primSet(intern("cadddr"), makeNative(6, _35clofun3302, 1, 0));
Obj _35reg2356 = primSet(intern("cdddr"), makeNative(7, _35clofun3302, 1, 0));
Obj _35reg2364 = primSet(intern("rcons"), makeNative(9, _35clofun3302, 1, 0));
Obj _35reg2366 = primSet(intern("pair?"), makeNative(10, _35clofun3302, 1, 0));
Obj _35reg2371 = primSet(intern("cora/init.reverse-h"), makeNative(11, _35clofun3302, 2, 0));
pushCont(co, 1, _35clofun3312, 0);
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

void _35clofun3312(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2433 = __arg1;
pushCont(co, 20, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(9, _35clofun3303, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3312) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2372 = __arg1;
Obj _35reg2373 = primSet(intern("reverse"), _35val2372);
Obj _35reg2379 = primSet(intern("map-h"), makeNative(13, _35clofun3302, 3, 0));
Obj _35reg2380 = primSet(intern("map"), makeNative(14, _35clofun3302, 2, 0));
Obj _35reg2381 = primSet(intern("*macros*"), Nil);
Obj _35reg2382 = primGenSym(intern("protect"));
Obj _35reg2383 = primSet(intern("*protect-symbol*"), _35reg2382);
Obj _35reg2385 = primSet(intern("cora/init.protect"), makeNative(15, _35clofun3302, 1, 0));
Obj _35reg2389 = primSet(intern("cora/init.add-to-*macros*"), makeNative(16, _35clofun3302, 2, 0));
Obj _35reg2402 = primSet(intern("cora/init.macroexpand1-h"), makeNative(18, _35clofun3302, 2, 0));
Obj _35reg2403 = primSet(intern("cora/init.macroexpand1"), makeNative(19, _35clofun3302, 1, 0));
Obj _35reg2420 = primSet(intern("cora/init.macroexpand-boot"), makeNative(4, _35clofun3303, 1, 0));
Obj _35reg2421 = primSet(intern("macroexpand"), globalRef(intern("cora/init.macroexpand-boot")));
Obj _35reg2432 = primSet(intern("defmacro-macro"), makeNative(8, _35clofun3303, 1, 0));
pushCont(co, 0, _35clofun3312, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3312) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3311(struct Cora* co){
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
Obj _35reg3275 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-begin"));
__arg1 = _35reg3275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc2329 = makeNative(1, _35clofun3311, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3311) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val3281 = __arg1;
Obj _35reg3282 = primCons(intern("list"), _35val3281);
__nargs = 2;
__arg1 = _35reg3282;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3311) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc2328 = makeNative(2, _35clofun3311, 0, 1, closureRef(co, 0));
Obj _35reg3277 = primIsCons(closureRef(co, 0));
if (True == _35reg3277) {
Obj _35reg3278 = primCar(closureRef(co, 0));
Obj x = _35reg3278;
Obj _35reg3279 = primCdr(closureRef(co, 0));
Obj more = _35reg3279;
Obj _35reg3280 = primCons(x, more);
pushCont(co, 3, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.rewrite-backquote"));
__arg2 = _35reg3280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc2327 = makeNative(4, _35clofun3311, 0, 1, closureRef(co, 0));
Obj _35reg3283 = primIsCons(closureRef(co, 0));
if (True == _35reg3283) {
Obj _35reg3284 = primCar(closureRef(co, 0));
Obj _35reg3285 = primEQ(intern("unquote"), _35reg3284);
if (True == _35reg3285) {
Obj _35reg3286 = primCdr(closureRef(co, 0));
Obj _35reg3287 = primIsCons(_35reg3286);
if (True == _35reg3287) {
Obj _35reg3288 = primCdr(closureRef(co, 0));
Obj _35reg3289 = primCar(_35reg3288);
Obj x = _35reg3289;
Obj _35reg3290 = primCdr(closureRef(co, 0));
Obj _35reg3291 = primCdr(_35reg3290);
Obj _35reg3292 = primEQ(Nil, _35reg3291);
if (True == _35reg3292) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3311) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35p2325 = __arg1;
Obj _35cc2326 = makeNative(5, _35clofun3311, 0, 1, _35p2325);
Obj x = _35p2325;
Obj _35reg3293 = primIsSymbol(x);
if (True == _35reg3293) {
Obj _35reg3294 = primCons(x, Nil);
Obj _35reg3295 = primCons(intern("quote"), _35reg3294);
__nargs = 2;
__arg1 = _35reg3295;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3311) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3297 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-backquote"));
__arg1 = _35val3297;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun3311, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj filename = __arg1;
Obj pkg = __arg2;
Obj _35reg3299 = primCons(intern("fake"), Nil);
Obj _35reg3300 = primCons(intern("succ"), _35reg3299);
__nargs = 2;
__arg1 = _35reg3300;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3311) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val3298 = __arg1;
Obj _35reg3301 = primSet(intern("typechecker"), makeNative(9, _35clofun3311, 2, 0));
__nargs = 2;
__arg1 = _35reg3301;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3311) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val3276 = __arg1;
Obj _35reg3296 = primSet(intern("cora/init.rewrite-backquote"), makeNative(6, _35clofun3311, 1, 0));
pushCont(co, 10, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(8, _35clofun3311, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2827 = __arg1;
Obj _35reg3090 = primSet(intern("cora/init.propagate-boolean0"), makeNative(11, _35clofun3309, 1, 0));
Obj _35reg3248 = primSet(intern("cora/init.propagate-boolean"), makeNative(13, _35clofun3310, 1, 0));
Obj _35reg3250 = primSet(intern("macroexpand"), makeNative(15, _35clofun3310, 1, 0));
Obj _35reg3274 = primSet(intern("cora/init.rewrite-begin"), makeNative(20, _35clofun3310, 1, 0));
pushCont(co, 11, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(0, _35clofun3311, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2719 = __arg1;
Obj _35reg2771 = primSet(intern("cora/init.extract-rules1"), makeNative(15, _35clofun3307, 3, 0));
Obj _35reg2772 = primSet(intern("cora/init.extract-rules"), makeNative(16, _35clofun3307, 1, 0));
Obj _35reg2777 = primSet(intern("cora/init.rules-patterns"), makeNative(19, _35clofun3307, 2, 0));
Obj _35reg2781 = primSet(intern("cora/init.length-h"), makeNative(20, _35clofun3307, 2, 0));
Obj _35reg2782 = primSet(intern("length"), makeNative(0, _35clofun3308, 1, 0));
Obj _35reg2790 = primSet(intern("cora/init.filter-h"), makeNative(2, _35clofun3308, 3, 0));
Obj _35reg2791 = primSet(intern("filter"), makeNative(3, _35clofun3308, 2, 0));
Obj _35reg2797 = primSet(intern("append"), makeNative(5, _35clofun3308, 2, 0));
Obj _35reg2808 = primSet(intern("cora/init.rules-arg-count"), makeNative(12, _35clofun3308, 1, 0));
Obj _35reg2814 = primSet(intern("cora/init.gen-parameters"), makeNative(14, _35clofun3308, 1, 0));
pushCont(co, 12, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(20, _35clofun3308, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2526 = __arg1;
Obj _35reg2580 = primSet(intern("cora/init.match-cons-expander"), makeNative(12, _35clofun3305, 4, 0));
Obj _35reg2613 = primSet(intern("cora/init.match1"), makeNative(18, _35clofun3305, 4, 0));
Obj _35reg2640 = primSet(intern("cora/init.extract-rule-action"), makeNative(5, _35clofun3306, 2, 0));
Obj _35reg2692 = primSet(intern("cora/init.match-helper"), makeNative(0, _35clofun3307, 2, 0));
Obj _35reg2718 = primSet(intern("cora/init.rewrite-match"), makeNative(7, _35clofun3307, 1, 0));
pushCont(co, 13, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(8, _35clofun3307, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2511 = __arg1;
Obj _35reg2514 = primSet(intern("boolean?"), makeNative(11, _35clofun3304, 1, 0));
Obj _35reg2524 = primSet(intern("cora/init.rcons1"), makeNative(14, _35clofun3304, 1, 0));
pushCont(co, 14, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(15, _35clofun3304, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2497 = __arg1;
Obj _35reg2509 = primSet(intern("cora/init.rewrite-and"), makeNative(9, _35clofun3304, 1, 0));
pushCont(co, 15, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(10, _35clofun3304, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2483 = __arg1;
Obj _35reg2495 = primSet(intern("cora/init.rewrite-or"), makeNative(6, _35clofun3304, 1, 0));
pushCont(co, 16, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(7, _35clofun3304, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2469 = __arg1;
pushCont(co, 17, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(4, _35clofun3304, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2447 = __arg1;
Obj _35reg2452 = primSet(intern("elem?"), makeNative(14, _35clofun3303, 2, 0));
Obj _35reg2455 = primSet(intern("atom?"), makeNative(15, _35clofun3303, 1, 0));
Obj _35reg2467 = primSet(intern("cora/init.rewrite-let"), makeNative(20, _35clofun3303, 1, 0));
pushCont(co, 18, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(0, _35clofun3304, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2435 = __arg1;
pushCont(co, 19, _35clofun3311, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(13, _35clofun3303, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3311) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3310(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3159 = __arg1;
Obj x1 = _35val3159;
Obj _35reg3160 = primCons(x1, Nil);
Obj _35reg3161 = primCons(intern("not"), _35reg3160);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3161;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2316 = makeNative(20, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg3149 = primIsCons(closureRef(co, 0));
if (True == _35reg3149) {
Obj _35reg3150 = primCar(closureRef(co, 0));
Obj _35reg3151 = primEQ(intern("not"), _35reg3150);
if (True == _35reg3151) {
Obj _35reg3152 = primCdr(closureRef(co, 0));
Obj _35reg3153 = primIsCons(_35reg3152);
if (True == _35reg3153) {
Obj _35reg3154 = primCdr(closureRef(co, 0));
Obj _35reg3155 = primCar(_35reg3154);
Obj x = _35reg3155;
Obj _35reg3156 = primCdr(closureRef(co, 0));
Obj _35reg3157 = primCdr(_35reg3156);
Obj _35reg3158 = primEQ(Nil, _35reg3157);
if (True == _35reg3158) {
pushCont(co, 0, _35clofun3310, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2316;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2316;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2316;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2316;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val3172 = __arg1;
Obj x1 = _35val3172;
Obj _35reg3173 = primCons(x1, Nil);
Obj _35reg3174 = primCons(intern("null?"), _35reg3173);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3174;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc2315 = makeNative(1, _35clofun3310, 0, 1, closureRef(co, 0));
Obj _35reg3162 = primIsCons(closureRef(co, 0));
if (True == _35reg3162) {
Obj _35reg3163 = primCar(closureRef(co, 0));
Obj _35reg3164 = primEQ(intern("null?"), _35reg3163);
if (True == _35reg3164) {
Obj _35reg3165 = primCdr(closureRef(co, 0));
Obj _35reg3166 = primIsCons(_35reg3165);
if (True == _35reg3166) {
Obj _35reg3167 = primCdr(closureRef(co, 0));
Obj _35reg3168 = primCar(_35reg3167);
Obj x = _35reg3168;
Obj _35reg3169 = primCdr(closureRef(co, 0));
Obj _35reg3170 = primCdr(_35reg3169);
Obj _35reg3171 = primEQ(Nil, _35reg3170);
if (True == _35reg3171) {
pushCont(co, 2, _35clofun3310, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2315;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2315;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2315;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2315;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val3193 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val3193;
Obj _35reg3194 = primCons(y1, Nil);
Obj _35reg3195 = primCons(x1, _35reg3194);
Obj _35reg3196 = primCons(intern("and"), _35reg3195);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3196;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3192 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val3192;
pushCont(co, 4, _35clofun3310, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2314 = makeNative(3, _35clofun3310, 0, 1, closureRef(co, 0));
Obj _35reg3175 = primIsCons(closureRef(co, 0));
if (True == _35reg3175) {
Obj _35reg3176 = primCar(closureRef(co, 0));
Obj _35reg3177 = primEQ(intern("and"), _35reg3176);
if (True == _35reg3177) {
Obj _35reg3178 = primCdr(closureRef(co, 0));
Obj _35reg3179 = primIsCons(_35reg3178);
if (True == _35reg3179) {
Obj _35reg3180 = primCdr(closureRef(co, 0));
Obj _35reg3181 = primCar(_35reg3180);
Obj x = _35reg3181;
Obj _35reg3182 = primCdr(closureRef(co, 0));
Obj _35reg3183 = primCdr(_35reg3182);
Obj _35reg3184 = primIsCons(_35reg3183);
if (True == _35reg3184) {
Obj _35reg3185 = primCdr(closureRef(co, 0));
Obj _35reg3186 = primCdr(_35reg3185);
Obj _35reg3187 = primCar(_35reg3186);
Obj y = _35reg3187;
Obj _35reg3188 = primCdr(closureRef(co, 0));
Obj _35reg3189 = primCdr(_35reg3188);
Obj _35reg3190 = primCdr(_35reg3189);
Obj _35reg3191 = primEQ(Nil, _35reg3190);
if (True == _35reg3191) {
pushCont(co, 5, _35clofun3310, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2314;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2314;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2314;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2314;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2314;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3207 = __arg1;
Obj x1 = _35val3207;
Obj _35reg3208 = primCons(x1, Nil);
Obj _35reg3209 = primCons(intern("cdr"), _35reg3208);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3209;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc2313 = makeNative(6, _35clofun3310, 0, 1, closureRef(co, 0));
Obj _35reg3197 = primIsCons(closureRef(co, 0));
if (True == _35reg3197) {
Obj _35reg3198 = primCar(closureRef(co, 0));
Obj _35reg3199 = primEQ(intern("cdr"), _35reg3198);
if (True == _35reg3199) {
Obj _35reg3200 = primCdr(closureRef(co, 0));
Obj _35reg3201 = primIsCons(_35reg3200);
if (True == _35reg3201) {
Obj _35reg3202 = primCdr(closureRef(co, 0));
Obj _35reg3203 = primCar(_35reg3202);
Obj x = _35reg3203;
Obj _35reg3204 = primCdr(closureRef(co, 0));
Obj _35reg3205 = primCdr(_35reg3204);
Obj _35reg3206 = primEQ(Nil, _35reg3205);
if (True == _35reg3206) {
pushCont(co, 7, _35clofun3310, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2313;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2313;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2313;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2313;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3220 = __arg1;
Obj x1 = _35val3220;
Obj _35reg3221 = primCons(x1, Nil);
Obj _35reg3222 = primCons(intern("car"), _35reg3221);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc2312 = makeNative(8, _35clofun3310, 0, 1, closureRef(co, 0));
Obj _35reg3210 = primIsCons(closureRef(co, 0));
if (True == _35reg3210) {
Obj _35reg3211 = primCar(closureRef(co, 0));
Obj _35reg3212 = primEQ(intern("car"), _35reg3211);
if (True == _35reg3212) {
Obj _35reg3213 = primCdr(closureRef(co, 0));
Obj _35reg3214 = primIsCons(_35reg3213);
if (True == _35reg3214) {
Obj _35reg3215 = primCdr(closureRef(co, 0));
Obj _35reg3216 = primCar(_35reg3215);
Obj x = _35reg3216;
Obj _35reg3217 = primCdr(closureRef(co, 0));
Obj _35reg3218 = primCdr(_35reg3217);
Obj _35reg3219 = primEQ(Nil, _35reg3218);
if (True == _35reg3219) {
pushCont(co, 9, _35clofun3310, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val3233 = __arg1;
Obj x1 = _35val3233;
Obj _35reg3234 = primCons(x1, Nil);
Obj _35reg3235 = primCons(intern("cons?"), _35reg3234);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc2311 = makeNative(10, _35clofun3310, 0, 1, closureRef(co, 0));
Obj _35reg3223 = primIsCons(closureRef(co, 0));
if (True == _35reg3223) {
Obj _35reg3224 = primCar(closureRef(co, 0));
Obj _35reg3225 = primEQ(intern("cons?"), _35reg3224);
if (True == _35reg3225) {
Obj _35reg3226 = primCdr(closureRef(co, 0));
Obj _35reg3227 = primIsCons(_35reg3226);
if (True == _35reg3227) {
Obj _35reg3228 = primCdr(closureRef(co, 0));
Obj _35reg3229 = primCar(_35reg3228);
Obj x = _35reg3229;
Obj _35reg3230 = primCdr(closureRef(co, 0));
Obj _35reg3231 = primCdr(_35reg3230);
Obj _35reg3232 = primEQ(Nil, _35reg3231);
if (True == _35reg3232) {
pushCont(co, 11, _35clofun3310, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35p2309 = __arg1;
Obj _35cc2310 = makeNative(12, _35clofun3310, 0, 1, _35p2309);
Obj _35reg3236 = primIsCons(_35p2309);
if (True == _35reg3236) {
Obj _35reg3237 = primCar(_35p2309);
Obj _35reg3238 = primEQ(intern("quote"), _35reg3237);
if (True == _35reg3238) {
Obj _35reg3239 = primCdr(_35p2309);
Obj _35reg3240 = primIsCons(_35reg3239);
if (True == _35reg3240) {
Obj _35reg3241 = primCdr(_35p2309);
Obj _35reg3242 = primCar(_35reg3241);
Obj x = _35reg3242;
Obj _35reg3243 = primCdr(_35p2309);
Obj _35reg3244 = primCdr(_35reg3243);
Obj _35reg3245 = primEQ(Nil, _35reg3244);
if (True == _35reg3245) {
Obj _35reg3246 = primCons(x, Nil);
Obj _35reg3247 = primCons(intern("quote"), _35reg3246);
__nargs = 2;
__arg1 = _35reg3247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3310) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3249 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = _35val3249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
pushCont(co, 14, _35clofun3310, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3254 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3255 = primCons(_35val3254, Nil);
Obj _35reg3256 = primCons(x, _35reg3255);
Obj _35reg3257 = primCons(intern("do"), _35reg3256);
__nargs = 2;
__arg1 = _35reg3257;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3310) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc2324 = makeNative(16, _35clofun3310, 0, 0);
Obj _35reg3251 = primIsCons(closureRef(co, 0));
if (True == _35reg3251) {
Obj _35reg3252 = primCar(closureRef(co, 0));
Obj x = _35reg3252;
Obj _35reg3253 = primCdr(closureRef(co, 0));
Obj y = _35reg3253;
pushCont(co, 17, _35clofun3310, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2324;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc2323 = makeNative(18, _35clofun3310, 0, 1, closureRef(co, 0));
Obj _35reg3258 = primIsCons(closureRef(co, 0));
if (True == _35reg3258) {
Obj _35reg3259 = primCar(closureRef(co, 0));
Obj x = _35reg3259;
Obj _35reg3260 = primCdr(closureRef(co, 0));
Obj _35reg3261 = primIsCons(_35reg3260);
if (True == _35reg3261) {
Obj _35reg3262 = primCdr(closureRef(co, 0));
Obj _35reg3263 = primCar(_35reg3262);
Obj y = _35reg3263;
Obj _35reg3264 = primCdr(closureRef(co, 0));
Obj _35reg3265 = primCdr(_35reg3264);
Obj _35reg3266 = primEQ(Nil, _35reg3265);
if (True == _35reg3266) {
Obj _35reg3267 = primCons(y, Nil);
Obj _35reg3268 = primCons(x, _35reg3267);
Obj _35reg3269 = primCons(intern("do"), _35reg3268);
__nargs = 2;
__arg1 = _35reg3269;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3310) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2323;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2323;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2323;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35p2321 = __arg1;
Obj _35cc2322 = makeNative(19, _35clofun3310, 0, 1, _35p2321);
Obj _35reg3270 = primIsCons(_35p2321);
if (True == _35reg3270) {
Obj _35reg3271 = primCar(_35p2321);
Obj x = _35reg3271;
Obj _35reg3272 = primCdr(_35p2321);
Obj _35reg3273 = primEQ(Nil, _35reg3272);
if (True == _35reg3273) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3310) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2322;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2322;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3310) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3309(struct Cora* co){
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
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2308 = makeNative(0, _35clofun3309, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35cc2307 = makeNative(1, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2828 = primIsCons(closureRef(co, 0));
if (True == _35reg2828) {
Obj _35reg2829 = primCar(closureRef(co, 0));
Obj _35reg2830 = primEQ(intern("if"), _35reg2829);
if (True == _35reg2830) {
Obj _35reg2831 = primCdr(closureRef(co, 0));
Obj _35reg2832 = primIsCons(_35reg2831);
if (True == _35reg2832) {
Obj _35reg2833 = primCdr(closureRef(co, 0));
Obj _35reg2834 = primCar(_35reg2833);
Obj _35reg2835 = primEQ(False, _35reg2834);
if (True == _35reg2835) {
Obj _35reg2836 = primCdr(closureRef(co, 0));
Obj _35reg2837 = primCdr(_35reg2836);
Obj _35reg2838 = primIsCons(_35reg2837);
if (True == _35reg2838) {
Obj _35reg2839 = primCdr(closureRef(co, 0));
Obj _35reg2840 = primCdr(_35reg2839);
Obj _35reg2841 = primCar(_35reg2840);
Obj y = _35reg2841;
Obj _35reg2842 = primCdr(closureRef(co, 0));
Obj _35reg2843 = primCdr(_35reg2842);
Obj _35reg2844 = primCdr(_35reg2843);
Obj _35reg2845 = primIsCons(_35reg2844);
if (True == _35reg2845) {
Obj _35reg2846 = primCdr(closureRef(co, 0));
Obj _35reg2847 = primCdr(_35reg2846);
Obj _35reg2848 = primCdr(_35reg2847);
Obj _35reg2849 = primCar(_35reg2848);
Obj z = _35reg2849;
Obj _35reg2850 = primCdr(closureRef(co, 0));
Obj _35reg2851 = primCdr(_35reg2850);
Obj _35reg2852 = primCdr(_35reg2851);
Obj _35reg2853 = primCdr(_35reg2852);
Obj _35reg2854 = primEQ(Nil, _35reg2853);
if (True == _35reg2854) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc2306 = makeNative(2, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2855 = primIsCons(closureRef(co, 0));
if (True == _35reg2855) {
Obj _35reg2856 = primCar(closureRef(co, 0));
Obj _35reg2857 = primEQ(intern("if"), _35reg2856);
if (True == _35reg2857) {
Obj _35reg2858 = primCdr(closureRef(co, 0));
Obj _35reg2859 = primIsCons(_35reg2858);
if (True == _35reg2859) {
Obj _35reg2860 = primCdr(closureRef(co, 0));
Obj _35reg2861 = primCar(_35reg2860);
Obj _35reg2862 = primEQ(True, _35reg2861);
if (True == _35reg2862) {
Obj _35reg2863 = primCdr(closureRef(co, 0));
Obj _35reg2864 = primCdr(_35reg2863);
Obj _35reg2865 = primIsCons(_35reg2864);
if (True == _35reg2865) {
Obj _35reg2866 = primCdr(closureRef(co, 0));
Obj _35reg2867 = primCdr(_35reg2866);
Obj _35reg2868 = primCar(_35reg2867);
Obj y = _35reg2868;
Obj _35reg2869 = primCdr(closureRef(co, 0));
Obj _35reg2870 = primCdr(_35reg2869);
Obj _35reg2871 = primCdr(_35reg2870);
Obj _35reg2872 = primIsCons(_35reg2871);
if (True == _35reg2872) {
Obj _35reg2873 = primCdr(closureRef(co, 0));
Obj _35reg2874 = primCdr(_35reg2873);
Obj _35reg2875 = primCdr(_35reg2874);
Obj _35reg2876 = primCar(_35reg2875);
Obj z = _35reg2876;
Obj _35reg2877 = primCdr(closureRef(co, 0));
Obj _35reg2878 = primCdr(_35reg2877);
Obj _35reg2879 = primCdr(_35reg2878);
Obj _35reg2880 = primCdr(_35reg2879);
Obj _35reg2881 = primEQ(Nil, _35reg2880);
if (True == _35reg2881) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2306;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc2305 = makeNative(3, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2882 = primIsCons(closureRef(co, 0));
if (True == _35reg2882) {
Obj _35reg2883 = primCar(closureRef(co, 0));
Obj _35reg2884 = primEQ(intern("not"), _35reg2883);
if (True == _35reg2884) {
Obj _35reg2885 = primCdr(closureRef(co, 0));
Obj _35reg2886 = primIsCons(_35reg2885);
if (True == _35reg2886) {
Obj _35reg2887 = primCdr(closureRef(co, 0));
Obj _35reg2888 = primCar(_35reg2887);
Obj _35reg2889 = primEQ(False, _35reg2888);
if (True == _35reg2889) {
Obj _35reg2890 = primCdr(closureRef(co, 0));
Obj _35reg2891 = primCdr(_35reg2890);
Obj _35reg2892 = primEQ(Nil, _35reg2891);
if (True == _35reg2892) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2305;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2305;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2305;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2305;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2305;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc2304 = makeNative(4, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2893 = primIsCons(closureRef(co, 0));
if (True == _35reg2893) {
Obj _35reg2894 = primCar(closureRef(co, 0));
Obj _35reg2895 = primEQ(intern("not"), _35reg2894);
if (True == _35reg2895) {
Obj _35reg2896 = primCdr(closureRef(co, 0));
Obj _35reg2897 = primIsCons(_35reg2896);
if (True == _35reg2897) {
Obj _35reg2898 = primCdr(closureRef(co, 0));
Obj _35reg2899 = primCar(_35reg2898);
Obj _35reg2900 = primEQ(True, _35reg2899);
if (True == _35reg2900) {
Obj _35reg2901 = primCdr(closureRef(co, 0));
Obj _35reg2902 = primCdr(_35reg2901);
Obj _35reg2903 = primEQ(Nil, _35reg2902);
if (True == _35reg2903) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2304;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2304;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2304;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2304;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2304;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc2303 = makeNative(5, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2904 = primIsCons(closureRef(co, 0));
if (True == _35reg2904) {
Obj _35reg2905 = primCar(closureRef(co, 0));
Obj _35reg2906 = primEQ(intern("null?"), _35reg2905);
if (True == _35reg2906) {
Obj _35reg2907 = primCdr(closureRef(co, 0));
Obj _35reg2908 = primIsCons(_35reg2907);
if (True == _35reg2908) {
Obj _35reg2909 = primCdr(closureRef(co, 0));
Obj _35reg2910 = primCar(_35reg2909);
Obj _35reg2911 = primIsCons(_35reg2910);
if (True == _35reg2911) {
Obj _35reg2912 = primCdr(closureRef(co, 0));
Obj _35reg2913 = primCar(_35reg2912);
Obj _35reg2914 = primCar(_35reg2913);
Obj _35reg2915 = primEQ(intern("cons"), _35reg2914);
if (True == _35reg2915) {
Obj _35reg2916 = primCdr(closureRef(co, 0));
Obj _35reg2917 = primCar(_35reg2916);
Obj _35reg2918 = primCdr(_35reg2917);
Obj _35reg2919 = primIsCons(_35reg2918);
if (True == _35reg2919) {
Obj _35reg2920 = primCdr(closureRef(co, 0));
Obj _35reg2921 = primCar(_35reg2920);
Obj _35reg2922 = primCdr(_35reg2921);
Obj _35reg2923 = primCar(_35reg2922);
Obj __ = _35reg2923;
Obj _35reg2924 = primCdr(closureRef(co, 0));
Obj _35reg2925 = primCar(_35reg2924);
Obj _35reg2926 = primCdr(_35reg2925);
Obj _35reg2927 = primCdr(_35reg2926);
Obj _35reg2928 = primIsCons(_35reg2927);
if (True == _35reg2928) {
Obj _35reg2929 = primCdr(closureRef(co, 0));
Obj _35reg2930 = primCar(_35reg2929);
Obj _35reg2931 = primCdr(_35reg2930);
Obj _35reg2932 = primCdr(_35reg2931);
Obj _35reg2933 = primCar(_35reg2932);
__ = _35reg2933;
Obj _35reg2934 = primCdr(closureRef(co, 0));
Obj _35reg2935 = primCar(_35reg2934);
Obj _35reg2936 = primCdr(_35reg2935);
Obj _35reg2937 = primCdr(_35reg2936);
Obj _35reg2938 = primCdr(_35reg2937);
Obj _35reg2939 = primEQ(Nil, _35reg2938);
if (True == _35reg2939) {
Obj _35reg2940 = primCdr(closureRef(co, 0));
Obj _35reg2941 = primCdr(_35reg2940);
Obj _35reg2942 = primEQ(Nil, _35reg2941);
if (True == _35reg2942) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc2302 = makeNative(6, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2943 = primIsCons(closureRef(co, 0));
if (True == _35reg2943) {
Obj _35reg2944 = primCar(closureRef(co, 0));
Obj _35reg2945 = primEQ(intern("null?"), _35reg2944);
if (True == _35reg2945) {
Obj _35reg2946 = primCdr(closureRef(co, 0));
Obj _35reg2947 = primIsCons(_35reg2946);
if (True == _35reg2947) {
Obj _35reg2948 = primCdr(closureRef(co, 0));
Obj _35reg2949 = primCar(_35reg2948);
Obj _35reg2950 = primEQ(Nil, _35reg2949);
if (True == _35reg2950) {
Obj _35reg2951 = primCdr(closureRef(co, 0));
Obj _35reg2952 = primCdr(_35reg2951);
Obj _35reg2953 = primEQ(Nil, _35reg2952);
if (True == _35reg2953) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2302;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc2301 = makeNative(7, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2954 = primIsCons(closureRef(co, 0));
if (True == _35reg2954) {
Obj _35reg2955 = primCar(closureRef(co, 0));
Obj _35reg2956 = primEQ(intern("and"), _35reg2955);
if (True == _35reg2956) {
Obj _35reg2957 = primCdr(closureRef(co, 0));
Obj _35reg2958 = primIsCons(_35reg2957);
if (True == _35reg2958) {
Obj _35reg2959 = primCdr(closureRef(co, 0));
Obj _35reg2960 = primCar(_35reg2959);
Obj _35reg2961 = primEQ(True, _35reg2960);
if (True == _35reg2961) {
Obj _35reg2962 = primCdr(closureRef(co, 0));
Obj _35reg2963 = primCdr(_35reg2962);
Obj _35reg2964 = primIsCons(_35reg2963);
if (True == _35reg2964) {
Obj _35reg2965 = primCdr(closureRef(co, 0));
Obj _35reg2966 = primCdr(_35reg2965);
Obj _35reg2967 = primCar(_35reg2966);
Obj _35reg2968 = primEQ(True, _35reg2967);
if (True == _35reg2968) {
Obj _35reg2969 = primCdr(closureRef(co, 0));
Obj _35reg2970 = primCdr(_35reg2969);
Obj _35reg2971 = primCdr(_35reg2970);
Obj _35reg2972 = primEQ(Nil, _35reg2971);
if (True == _35reg2972) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc2300 = makeNative(8, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg2973 = primIsCons(closureRef(co, 0));
if (True == _35reg2973) {
Obj _35reg2974 = primCar(closureRef(co, 0));
Obj _35reg2975 = primEQ(intern("cons?"), _35reg2974);
if (True == _35reg2975) {
Obj _35reg2976 = primCdr(closureRef(co, 0));
Obj _35reg2977 = primIsCons(_35reg2976);
if (True == _35reg2977) {
Obj _35reg2978 = primCdr(closureRef(co, 0));
Obj _35reg2979 = primCar(_35reg2978);
Obj _35reg2980 = primIsCons(_35reg2979);
if (True == _35reg2980) {
Obj _35reg2981 = primCdr(closureRef(co, 0));
Obj _35reg2982 = primCar(_35reg2981);
Obj _35reg2983 = primCar(_35reg2982);
Obj _35reg2984 = primEQ(intern("cons"), _35reg2983);
if (True == _35reg2984) {
Obj _35reg2985 = primCdr(closureRef(co, 0));
Obj _35reg2986 = primCar(_35reg2985);
Obj _35reg2987 = primCdr(_35reg2986);
Obj _35reg2988 = primIsCons(_35reg2987);
if (True == _35reg2988) {
Obj _35reg2989 = primCdr(closureRef(co, 0));
Obj _35reg2990 = primCar(_35reg2989);
Obj _35reg2991 = primCdr(_35reg2990);
Obj _35reg2992 = primCar(_35reg2991);
Obj __ = _35reg2992;
Obj _35reg2993 = primCdr(closureRef(co, 0));
Obj _35reg2994 = primCar(_35reg2993);
Obj _35reg2995 = primCdr(_35reg2994);
Obj _35reg2996 = primCdr(_35reg2995);
Obj _35reg2997 = primIsCons(_35reg2996);
if (True == _35reg2997) {
Obj _35reg2998 = primCdr(closureRef(co, 0));
Obj _35reg2999 = primCar(_35reg2998);
Obj _35reg3000 = primCdr(_35reg2999);
Obj _35reg3001 = primCdr(_35reg3000);
Obj _35reg3002 = primCar(_35reg3001);
__ = _35reg3002;
Obj _35reg3003 = primCdr(closureRef(co, 0));
Obj _35reg3004 = primCar(_35reg3003);
Obj _35reg3005 = primCdr(_35reg3004);
Obj _35reg3006 = primCdr(_35reg3005);
Obj _35reg3007 = primCdr(_35reg3006);
Obj _35reg3008 = primEQ(Nil, _35reg3007);
if (True == _35reg3008) {
Obj _35reg3009 = primCdr(closureRef(co, 0));
Obj _35reg3010 = primCdr(_35reg3009);
Obj _35reg3011 = primEQ(Nil, _35reg3010);
if (True == _35reg3011) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc2299 = makeNative(9, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg3012 = primIsCons(closureRef(co, 0));
if (True == _35reg3012) {
Obj _35reg3013 = primCar(closureRef(co, 0));
Obj _35reg3014 = primEQ(intern("cdr"), _35reg3013);
if (True == _35reg3014) {
Obj _35reg3015 = primCdr(closureRef(co, 0));
Obj _35reg3016 = primIsCons(_35reg3015);
if (True == _35reg3016) {
Obj _35reg3017 = primCdr(closureRef(co, 0));
Obj _35reg3018 = primCar(_35reg3017);
Obj _35reg3019 = primIsCons(_35reg3018);
if (True == _35reg3019) {
Obj _35reg3020 = primCdr(closureRef(co, 0));
Obj _35reg3021 = primCar(_35reg3020);
Obj _35reg3022 = primCar(_35reg3021);
Obj _35reg3023 = primEQ(intern("cons"), _35reg3022);
if (True == _35reg3023) {
Obj _35reg3024 = primCdr(closureRef(co, 0));
Obj _35reg3025 = primCar(_35reg3024);
Obj _35reg3026 = primCdr(_35reg3025);
Obj _35reg3027 = primIsCons(_35reg3026);
if (True == _35reg3027) {
Obj _35reg3028 = primCdr(closureRef(co, 0));
Obj _35reg3029 = primCar(_35reg3028);
Obj _35reg3030 = primCdr(_35reg3029);
Obj _35reg3031 = primCar(_35reg3030);
Obj __ = _35reg3031;
Obj _35reg3032 = primCdr(closureRef(co, 0));
Obj _35reg3033 = primCar(_35reg3032);
Obj _35reg3034 = primCdr(_35reg3033);
Obj _35reg3035 = primCdr(_35reg3034);
Obj _35reg3036 = primIsCons(_35reg3035);
if (True == _35reg3036) {
Obj _35reg3037 = primCdr(closureRef(co, 0));
Obj _35reg3038 = primCar(_35reg3037);
Obj _35reg3039 = primCdr(_35reg3038);
Obj _35reg3040 = primCdr(_35reg3039);
Obj _35reg3041 = primCar(_35reg3040);
Obj x = _35reg3041;
Obj _35reg3042 = primCdr(closureRef(co, 0));
Obj _35reg3043 = primCar(_35reg3042);
Obj _35reg3044 = primCdr(_35reg3043);
Obj _35reg3045 = primCdr(_35reg3044);
Obj _35reg3046 = primCdr(_35reg3045);
Obj _35reg3047 = primEQ(Nil, _35reg3046);
if (True == _35reg3047) {
Obj _35reg3048 = primCdr(closureRef(co, 0));
Obj _35reg3049 = primCdr(_35reg3048);
Obj _35reg3050 = primEQ(Nil, _35reg3049);
if (True == _35reg3050) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p2297 = __arg1;
Obj _35cc2298 = makeNative(10, _35clofun3309, 0, 1, _35p2297);
Obj _35reg3051 = primIsCons(_35p2297);
if (True == _35reg3051) {
Obj _35reg3052 = primCar(_35p2297);
Obj _35reg3053 = primEQ(intern("car"), _35reg3052);
if (True == _35reg3053) {
Obj _35reg3054 = primCdr(_35p2297);
Obj _35reg3055 = primIsCons(_35reg3054);
if (True == _35reg3055) {
Obj _35reg3056 = primCdr(_35p2297);
Obj _35reg3057 = primCar(_35reg3056);
Obj _35reg3058 = primIsCons(_35reg3057);
if (True == _35reg3058) {
Obj _35reg3059 = primCdr(_35p2297);
Obj _35reg3060 = primCar(_35reg3059);
Obj _35reg3061 = primCar(_35reg3060);
Obj _35reg3062 = primEQ(intern("cons"), _35reg3061);
if (True == _35reg3062) {
Obj _35reg3063 = primCdr(_35p2297);
Obj _35reg3064 = primCar(_35reg3063);
Obj _35reg3065 = primCdr(_35reg3064);
Obj _35reg3066 = primIsCons(_35reg3065);
if (True == _35reg3066) {
Obj _35reg3067 = primCdr(_35p2297);
Obj _35reg3068 = primCar(_35reg3067);
Obj _35reg3069 = primCdr(_35reg3068);
Obj _35reg3070 = primCar(_35reg3069);
Obj x = _35reg3070;
Obj _35reg3071 = primCdr(_35p2297);
Obj _35reg3072 = primCar(_35reg3071);
Obj _35reg3073 = primCdr(_35reg3072);
Obj _35reg3074 = primCdr(_35reg3073);
Obj _35reg3075 = primIsCons(_35reg3074);
if (True == _35reg3075) {
Obj _35reg3076 = primCdr(_35p2297);
Obj _35reg3077 = primCar(_35reg3076);
Obj _35reg3078 = primCdr(_35reg3077);
Obj _35reg3079 = primCdr(_35reg3078);
Obj _35reg3080 = primCar(_35reg3079);
Obj __ = _35reg3080;
Obj _35reg3081 = primCdr(_35p2297);
Obj _35reg3082 = primCar(_35reg3081);
Obj _35reg3083 = primCdr(_35reg3082);
Obj _35reg3084 = primCdr(_35reg3083);
Obj _35reg3085 = primCdr(_35reg3084);
Obj _35reg3086 = primEQ(Nil, _35reg3085);
if (True == _35reg3086) {
Obj _35reg3087 = primCdr(_35p2297);
Obj _35reg3088 = primCdr(_35reg3087);
Obj _35reg3089 = primEQ(Nil, _35reg3088);
if (True == _35reg3089) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2320 = makeNative(12, _35clofun3309, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35cc2319 = makeNative(13, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg3091 = primIsCons(closureRef(co, 0));
if (True == _35reg3091) {
Obj _35reg3092 = primCar(closureRef(co, 0));
Obj f = _35reg3092;
Obj _35reg3093 = primCdr(closureRef(co, 0));
Obj args = _35reg3093;
Obj _35reg3094 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.propagate-boolean"));
__arg2 = _35reg3094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val3112 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3113 = primCons(_35val3112, Nil);
Obj _35reg3114 = primCons(args, _35reg3113);
Obj _35reg3115 = primCons(intern("lambda"), _35reg3114);
__nargs = 2;
__arg1 = _35reg3115;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3309) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35cc2318 = makeNative(14, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg3095 = primIsCons(closureRef(co, 0));
if (True == _35reg3095) {
Obj _35reg3096 = primCar(closureRef(co, 0));
Obj _35reg3097 = primEQ(intern("lambda"), _35reg3096);
if (True == _35reg3097) {
Obj _35reg3098 = primCdr(closureRef(co, 0));
Obj _35reg3099 = primIsCons(_35reg3098);
if (True == _35reg3099) {
Obj _35reg3100 = primCdr(closureRef(co, 0));
Obj _35reg3101 = primCar(_35reg3100);
Obj args = _35reg3101;
Obj _35reg3102 = primCdr(closureRef(co, 0));
Obj _35reg3103 = primCdr(_35reg3102);
Obj _35reg3104 = primIsCons(_35reg3103);
if (True == _35reg3104) {
Obj _35reg3105 = primCdr(closureRef(co, 0));
Obj _35reg3106 = primCdr(_35reg3105);
Obj _35reg3107 = primCar(_35reg3106);
Obj body = _35reg3107;
Obj _35reg3108 = primCdr(closureRef(co, 0));
Obj _35reg3109 = primCdr(_35reg3108);
Obj _35reg3110 = primCdr(_35reg3109);
Obj _35reg3111 = primEQ(Nil, _35reg3110);
if (True == _35reg3111) {
pushCont(co, 15, _35clofun3309, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2318;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2318;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2318;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2318;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2318;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val3144 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val3144;
Obj _35reg3145 = primCons(z1, Nil);
Obj _35reg3146 = primCons(y1, _35reg3145);
Obj _35reg3147 = primCons(x1, _35reg3146);
Obj _35reg3148 = primCons(intern("if"), _35reg3147);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean0"));
__arg1 = _35reg3148;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3143 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val3143;
pushCont(co, 17, _35clofun3309, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3142 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val3142;
pushCont(co, 18, _35clofun3309, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc2317 = makeNative(16, _35clofun3309, 0, 1, closureRef(co, 0));
Obj _35reg3116 = primIsCons(closureRef(co, 0));
if (True == _35reg3116) {
Obj _35reg3117 = primCar(closureRef(co, 0));
Obj _35reg3118 = primEQ(intern("if"), _35reg3117);
if (True == _35reg3118) {
Obj _35reg3119 = primCdr(closureRef(co, 0));
Obj _35reg3120 = primIsCons(_35reg3119);
if (True == _35reg3120) {
Obj _35reg3121 = primCdr(closureRef(co, 0));
Obj _35reg3122 = primCar(_35reg3121);
Obj x = _35reg3122;
Obj _35reg3123 = primCdr(closureRef(co, 0));
Obj _35reg3124 = primCdr(_35reg3123);
Obj _35reg3125 = primIsCons(_35reg3124);
if (True == _35reg3125) {
Obj _35reg3126 = primCdr(closureRef(co, 0));
Obj _35reg3127 = primCdr(_35reg3126);
Obj _35reg3128 = primCar(_35reg3127);
Obj y = _35reg3128;
Obj _35reg3129 = primCdr(closureRef(co, 0));
Obj _35reg3130 = primCdr(_35reg3129);
Obj _35reg3131 = primCdr(_35reg3130);
Obj _35reg3132 = primIsCons(_35reg3131);
if (True == _35reg3132) {
Obj _35reg3133 = primCdr(closureRef(co, 0));
Obj _35reg3134 = primCdr(_35reg3133);
Obj _35reg3135 = primCdr(_35reg3134);
Obj _35reg3136 = primCar(_35reg3135);
Obj z = _35reg3136;
Obj _35reg3137 = primCdr(closureRef(co, 0));
Obj _35reg3138 = primCdr(_35reg3137);
Obj _35reg3139 = primCdr(_35reg3138);
Obj _35reg3140 = primCdr(_35reg3139);
Obj _35reg3141 = primEQ(Nil, _35reg3140);
if (True == _35reg3141) {
pushCont(co, 19, _35clofun3309, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3309) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3308(struct Cora* co){
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
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2785 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2785) {
Obj _35reg2786 = primCar(l);
Obj _35reg2787 = primCons(_35reg2786, res);
Obj _35reg2788 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = _35reg2787;
__arg2 = fn;
__arg3 = _35reg2788;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2789 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg2789;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg2783 = primIsCons(l);
if (True == _35reg2783) {
Obj _35reg2784 = primCar(l);
pushCont(co, 1, _35clofun3308, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg2784;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2795 = __arg1;
Obj _35reg2793= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2796 = primCons(_35reg2793, _35val2795);
__nargs = 2;
__arg1 = _35reg2796;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg2792 = primEQ(l1, Nil);
if (True == _35reg2792) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2793 = primCar(l1);
Obj _35reg2794 = primCdr(l1);
pushCont(co, 4, _35clofun3308, 1, _35reg2793);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg2794;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x = __arg1;
Obj _35reg2799 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg2799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg2802 = primEQ(closureRef(co, 0), x);
Obj _35reg2803 = primNot(_35reg2802);
__nargs = 2;
__arg1 = _35reg2803;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2806 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2807 = primNot(_35val2806);
if (True == _35reg2807) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj _35val2805 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun3308, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val2805;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2800 = __arg1;
Obj counts = _35val2800;
Obj _35reg2801 = primCar(counts);
Obj n = _35reg2801;
Obj dif = makeNative(7, _35clofun3308, 1, 1, n);
Obj _35reg2804 = primCdr(counts);
pushCont(co, 9, _35clofun3308, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg2804;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2798 = __arg1;
Obj pats = _35val2798;
Obj len = makeNative(6, _35clofun3308, 1, 0);
pushCont(co, 10, _35clofun3308, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj rules = __arg1;
pushCont(co, 11, _35clofun3308, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2812 = __arg1;
Obj _35reg2810= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2813 = primCons(_35reg2810, _35val2812);
__nargs = 2;
__arg1 = _35reg2813;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj n = __arg1;
Obj _35reg2809 = primEQ(n, makeNumber(0));
if (True == _35reg2809) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2810 = primGenSym(intern("p"));
Obj _35reg2811 = primSub(n, makeNumber(1));
pushCont(co, 13, _35clofun3308, 1, _35reg2810);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.gen-parameters"));
__arg1 = _35reg2811;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2819 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2820 = primCons(intern("list"), args);
Obj _35reg2821 = primCons(_35reg2820, body);
Obj _35reg2822 = primCons(intern("match"), _35reg2821);
Obj _35reg2823 = primCons(_35reg2822, Nil);
Obj _35reg2824 = primCons(args, _35reg2823);
Obj _35reg2825 = primCons(_35val2819, _35reg2824);
Obj _35reg2826 = primCons(intern("defun"), _35reg2825);
__nargs = 2;
__arg1 = _35reg2826;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3308) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2818 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val2818;
pushCont(co, 15, _35clofun3308, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2817 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val2817;
pushCont(co, 16, _35clofun3308, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.gen-parameters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2816 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val2816;
pushCont(co, 17, _35clofun3308, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2815 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun3308, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.extract-rules"));
__arg1 = _35val2815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
pushCont(co, 19, _35clofun3308, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3308) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3307(struct Cora* co){
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
pushCont(co, 20, _35clofun3306, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2701 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2702 = primCons(_35val2701, Nil);
Obj _35reg2703 = primCons(value, _35reg2702);
Obj _35reg2704 = primCons(val, _35reg2703);
Obj _35reg2705 = primCons(intern("let"), _35reg2704);
__nargs = 2;
__arg1 = _35reg2705;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3307) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2707 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2708 = primCons(_35val2707, Nil);
Obj _35reg2709 = primCons(value, _35reg2708);
Obj _35reg2710 = primCons(val, _35reg2709);
Obj _35reg2711 = primCons(intern("let"), _35reg2710);
__nargs = 2;
__arg1 = _35reg2711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3307) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2713 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2714 = primCons(_35val2713, Nil);
Obj _35reg2715 = primCons(value, _35reg2714);
Obj _35reg2716 = primCons(val, _35reg2715);
Obj _35reg2717 = primCons(intern("let"), _35reg2716);
__nargs = 2;
__arg1 = _35reg2717;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3307) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2695 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val2695;
Obj _35reg2696 = primIsCons(value);
if (True == _35reg2696) {
Obj _35reg2697 = primCar(value);
Obj _35reg2698 = primEQ(intern("cons"), _35reg2697);
Obj _35reg2699 = primNot(_35reg2698);
if (True == _35reg2699) {
if (True == True) {
Obj _35reg2700 = primGenSym(intern("val"));
Obj val = _35reg2700;
pushCont(co, 1, _35clofun3307, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2706 = primGenSym(intern("val"));
Obj val = _35reg2706;
pushCont(co, 2, _35clofun3307, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2712 = primGenSym(intern("val"));
Obj val = _35reg2712;
pushCont(co, 3, _35clofun3307, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label5:
{
Obj _35val2694 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val2694;
pushCont(co, 4, _35clofun3307, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2693 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun3307, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val2693;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun3307, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc2296 = makeNative(9, _35clofun3307, 0, 0);
Obj _35reg2720 = primIsCons(closureRef(co, 0));
if (True == _35reg2720) {
Obj _35reg2721 = primCar(closureRef(co, 0));
Obj x = _35reg2721;
Obj _35reg2722 = primCdr(closureRef(co, 0));
Obj y = _35reg2722;
Obj _35reg2723 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = y;
__arg2 = _35reg2723;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2296;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2733 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2734 = primCons(intern("list"), _35val2733);
Obj pat = _35reg2734;
Obj _35reg2735 = primCons(pat, closureRef(co, 2));
Obj _35reg2736 = primCons(act, _35reg2735);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2736;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc2295 = makeNative(10, _35clofun3307, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2724 = primIsCons(closureRef(co, 0));
if (True == _35reg2724) {
Obj _35reg2725 = primCar(closureRef(co, 0));
Obj _35reg2726 = primEQ(intern("=>"), _35reg2725);
if (True == _35reg2726) {
Obj _35reg2727 = primCdr(closureRef(co, 0));
Obj _35reg2728 = primIsCons(_35reg2727);
if (True == _35reg2728) {
Obj _35reg2729 = primCdr(closureRef(co, 0));
Obj _35reg2730 = primCar(_35reg2729);
Obj act = _35reg2730;
Obj _35reg2731 = primCdr(closureRef(co, 0));
Obj _35reg2732 = primCdr(_35reg2731);
Obj remain = _35reg2732;
pushCont(co, 11, _35clofun3307, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2763 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2764 = primCons(intern("list"), _35val2763);
Obj pat = _35reg2764;
Obj _35reg2765 = primCons(act, Nil);
Obj _35reg2766 = primCons(pred, _35reg2765);
Obj _35reg2767 = primCons(intern("where"), _35reg2766);
Obj _35reg2768 = primCons(pat, closureRef(co, 2));
Obj _35reg2769 = primCons(_35reg2767, _35reg2768);
__nargs = 4;
__arg0 = globalRef(intern("cora/init.extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2769;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc2294 = makeNative(12, _35clofun3307, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2737 = primIsCons(closureRef(co, 0));
if (True == _35reg2737) {
Obj _35reg2738 = primCar(closureRef(co, 0));
Obj _35reg2739 = primEQ(intern("=>"), _35reg2738);
if (True == _35reg2739) {
Obj _35reg2740 = primCdr(closureRef(co, 0));
Obj _35reg2741 = primIsCons(_35reg2740);
if (True == _35reg2741) {
Obj _35reg2742 = primCdr(closureRef(co, 0));
Obj _35reg2743 = primCar(_35reg2742);
Obj act = _35reg2743;
Obj _35reg2744 = primCdr(closureRef(co, 0));
Obj _35reg2745 = primCdr(_35reg2744);
Obj _35reg2746 = primIsCons(_35reg2745);
if (True == _35reg2746) {
Obj _35reg2747 = primCdr(closureRef(co, 0));
Obj _35reg2748 = primCdr(_35reg2747);
Obj _35reg2749 = primCar(_35reg2748);
Obj _35reg2750 = primEQ(intern("where"), _35reg2749);
if (True == _35reg2750) {
Obj _35reg2751 = primCdr(closureRef(co, 0));
Obj _35reg2752 = primCdr(_35reg2751);
Obj _35reg2753 = primCdr(_35reg2752);
Obj _35reg2754 = primIsCons(_35reg2753);
if (True == _35reg2754) {
Obj _35reg2755 = primCdr(closureRef(co, 0));
Obj _35reg2756 = primCdr(_35reg2755);
Obj _35reg2757 = primCdr(_35reg2756);
Obj _35reg2758 = primCar(_35reg2757);
Obj pred = _35reg2758;
Obj _35reg2759 = primCdr(closureRef(co, 0));
Obj _35reg2760 = primCdr(_35reg2759);
Obj _35reg2761 = primCdr(_35reg2760);
Obj _35reg2762 = primCdr(_35reg2761);
Obj remain = _35reg2762;
pushCont(co, 13, _35clofun3307, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2294;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc2293 = makeNative(14, _35clofun3307, 0, 3, input, current, result);
Obj _35reg2770 = primEQ(Nil, input);
if (True == _35reg2770) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2293;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2776 = __arg1;
Obj _35reg2775= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init.rules-patterns"));
__arg1 = _35reg2775;
__arg2 = _35val2776;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2773 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2773) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2774 = primCar(rules);
Obj _35reg2775 = primCons(_35reg2774, res);
pushCont(co, 17, _35clofun3307, 1, _35reg2775);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 18, _35clofun3307, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg2778 = primEQ(l, Nil);
if (True == _35reg2778) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3307) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2779 = primAdd(i, makeNumber(1));
Obj _35reg2780 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.length-h"));
__arg1 = _35reg2779;
__arg2 = _35reg2780;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3307) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3306(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2627 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2626= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2628 = primCons(cc, Nil);
Obj _35reg2629 = primCons(_35reg2628, Nil);
Obj _35reg2630 = primCons(_35val2627, _35reg2629);
Obj _35reg2631 = primCons(_35val2626, _35reg2630);
Obj _35reg2632 = primCons(intern("if"), _35reg2631);
__nargs = 2;
__arg1 = _35reg2632;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2626 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3306, 2, cc, _35val2626);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2634 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2633= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2635 = primCons(cc, Nil);
Obj _35reg2636 = primCons(_35reg2635, Nil);
Obj _35reg2637 = primCons(_35val2634, _35reg2636);
Obj _35reg2638 = primCons(_35val2633, _35reg2637);
Obj _35reg2639 = primCons(intern("if"), _35reg2638);
__nargs = 2;
__arg1 = _35reg2639;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2633 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3306, 2, cc, _35val2633);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2616 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2616) {
Obj _35reg2617 = primCar(action);
Obj _35reg2618 = primEQ(_35reg2617, intern("where"));
if (True == _35reg2618) {
if (True == True) {
pushCont(co, 20, _35clofun3305, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun3306, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 3, _35clofun3306, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label5:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg2614 = primCdr(rules);
Obj _35reg2615 = primCar(_35reg2614);
Obj action = _35reg2615;
pushCont(co, 4, _35clofun3306, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2654 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2654;
Obj _35reg2655 = primCons(rest, Nil);
Obj _35reg2656 = primCons(Nil, _35reg2655);
Obj _35reg2657 = primCons(intern("lambda"), _35reg2656);
Obj _35reg2658 = primCons(curr, Nil);
Obj _35reg2659 = primCons(_35reg2657, _35reg2658);
Obj _35reg2660 = primCons(cc, _35reg2659);
Obj _35reg2661 = primCons(intern("let"), _35reg2660);
__nargs = 2;
__arg1 = _35reg2661;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2651 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2651;
Obj _35reg2652 = primCdr(rules);
Obj _35reg2653 = primCdr(_35reg2652);
pushCont(co, 6, _35clofun3306, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg2653;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2650 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun3306, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val2650;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2649 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2649;
pushCont(co, 8, _35clofun3306, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2669 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2669;
Obj _35reg2670 = primCons(rest, Nil);
Obj _35reg2671 = primCons(Nil, _35reg2670);
Obj _35reg2672 = primCons(intern("lambda"), _35reg2671);
Obj _35reg2673 = primCons(curr, Nil);
Obj _35reg2674 = primCons(_35reg2672, _35reg2673);
Obj _35reg2675 = primCons(cc, _35reg2674);
Obj _35reg2676 = primCons(intern("let"), _35reg2675);
__nargs = 2;
__arg1 = _35reg2676;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2666 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2666;
Obj _35reg2667 = primCdr(rules);
Obj _35reg2668 = primCdr(_35reg2667);
pushCont(co, 10, _35clofun3306, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg2668;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2665 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun3306, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val2665;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2664 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2664;
pushCont(co, 12, _35clofun3306, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2646 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2646) {
if (True == True) {
Obj _35reg2647 = primCar(rules);
Obj pat = _35reg2647;
Obj _35reg2648 = primGenSym(intern("cc"));
Obj cc = _35reg2648;
pushCont(co, 9, _35clofun3306, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2662 = primCar(rules);
Obj pat = _35reg2662;
Obj _35reg2663 = primGenSym(intern("cc"));
Obj cc = _35reg2663;
pushCont(co, 13, _35clofun3306, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label15:
{
Obj _35val2684 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2684;
Obj _35reg2685 = primCons(rest, Nil);
Obj _35reg2686 = primCons(Nil, _35reg2685);
Obj _35reg2687 = primCons(intern("lambda"), _35reg2686);
Obj _35reg2688 = primCons(curr, Nil);
Obj _35reg2689 = primCons(_35reg2687, _35reg2688);
Obj _35reg2690 = primCons(cc, _35reg2689);
Obj _35reg2691 = primCons(intern("let"), _35reg2690);
__nargs = 2;
__arg1 = _35reg2691;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2681 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2681;
Obj _35reg2682 = primCdr(rules);
Obj _35reg2683 = primCdr(_35reg2682);
pushCont(co, 15, _35clofun3306, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.match-helper"));
__arg1 = value;
__arg2 = _35reg2683;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2680 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun3306, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = _35val2680;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2679 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2679;
pushCont(co, 17, _35clofun3306, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2644 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2644) {
Obj _35reg2645 = primCdr(rules);
pushCont(co, 14, _35clofun3306, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg2645;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg2677 = primCar(rules);
Obj pat = _35reg2677;
Obj _35reg2678 = primGenSym(intern("cc"));
Obj cc = _35reg2678;
pushCont(co, 18, _35clofun3306, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj _35val2641 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2641) {
Obj _35reg2642 = primCons(makeString1("no match-help found!"), Nil);
Obj _35reg2643 = primCons(intern("error"), _35reg2642);
__nargs = 2;
__arg1 = _35reg2643;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3306) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 19, _35clofun3306, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3306) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3305(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2550 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2550;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2549 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2549;
pushCont(co, 0, _35clofun3305, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2548 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2548;
pushCont(co, 1, _35clofun3305, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2558 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2552= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2559 = primCons(cc, Nil);
Obj _35reg2560 = primCons(_35reg2559, Nil);
Obj _35reg2561 = primCons(_35val2558, _35reg2560);
Obj _35reg2562 = primCons(_35reg2552, _35reg2561);
Obj _35reg2563 = primCons(intern("if"), _35reg2562);
__nargs = 2;
__arg1 = _35reg2563;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2557 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2554= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2552= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 3, _35clofun3305, 2, cc, _35reg2552);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg2554;
__arg3 = _35val2557;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2566 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2566;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2565 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2565;
pushCont(co, 5, _35clofun3305, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2564 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2564;
pushCont(co, 6, _35clofun3305, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2574 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2568= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2575 = primCons(cc, Nil);
Obj _35reg2576 = primCons(_35reg2575, Nil);
Obj _35reg2577 = primCons(_35val2574, _35reg2576);
Obj _35reg2578 = primCons(_35reg2568, _35reg2577);
Obj _35reg2579 = primCons(intern("if"), _35reg2578);
__nargs = 2;
__arg1 = _35reg2579;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val2573 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2570= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2568= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 8, _35clofun3305, 2, cc, _35reg2568);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg2570;
__arg3 = _35val2573;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2528 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val2528;
Obj _35reg2529 = primIsCons(expr);
if (True == _35reg2529) {
Obj _35reg2530 = primCar(expr);
Obj _35reg2531 = primEQ(_35reg2530, intern("cons"));
if (True == _35reg2531) {
if (True == True) {
pushCont(co, 18, _35clofun3304, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2535 = primCons(expr, Nil);
Obj _35reg2536 = primCons(intern("cons?"), _35reg2535);
Obj _35reg2537 = primCons(expr, Nil);
Obj _35reg2538 = primCons(intern("car"), _35reg2537);
Obj _35reg2539 = primCons(expr, Nil);
Obj _35reg2540 = primCons(intern("cdr"), _35reg2539);
pushCont(co, 20, _35clofun3304, 4, x, _35reg2538, cc, _35reg2536);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg2540;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun3305, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2551 = primCons(expr, Nil);
Obj _35reg2552 = primCons(intern("cons?"), _35reg2551);
Obj _35reg2553 = primCons(expr, Nil);
Obj _35reg2554 = primCons(intern("car"), _35reg2553);
Obj _35reg2555 = primCons(expr, Nil);
Obj _35reg2556 = primCons(intern("cdr"), _35reg2555);
pushCont(co, 4, _35clofun3305, 4, x, _35reg2554, cc, _35reg2552);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg2556;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun3305, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2567 = primCons(expr, Nil);
Obj _35reg2568 = primCons(intern("cons?"), _35reg2567);
Obj _35reg2569 = primCons(expr, Nil);
Obj _35reg2570 = primCons(intern("car"), _35reg2569);
Obj _35reg2571 = primCons(expr, Nil);
Obj _35reg2572 = primCons(intern("cdr"), _35reg2571);
pushCont(co, 9, _35clofun3305, 4, x, _35reg2570, cc, _35reg2568);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = _35reg2572;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _35val2527 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val2527;
pushCont(co, 10, _35clofun3305, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 11, _35clofun3305, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2581 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2581) {
Obj _35reg2582 = primIsSymbol(x);
Obj _35reg2583 = primNot(_35reg2582);
if (True == _35reg2583) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
pushCont(co, 13, _35clofun3305, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2612 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val2612;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2599 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2599) {
Obj _35reg2600 = primCar(pat);
Obj _35reg2601 = primEQ(_35reg2600, intern("quote"));
if (True == _35reg2601) {
Obj _35reg2602 = primCons(expr, Nil);
Obj _35reg2603 = primCons(pat, _35reg2602);
Obj _35reg2604 = primCons(intern("="), _35reg2603);
Obj _35reg2605 = primCons(cc, Nil);
Obj _35reg2606 = primCons(_35reg2605, Nil);
Obj _35reg2607 = primCons(body, _35reg2606);
Obj _35reg2608 = primCons(_35reg2604, _35reg2607);
Obj _35reg2609 = primCons(intern("if"), _35reg2608);
__nargs = 2;
__arg1 = _35reg2609;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2610 = primCar(pat);
Obj _35reg2611 = primEQ(_35reg2610, intern("cons"));
if (True == _35reg2611) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeString1("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 15, _35clofun3305, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeString1("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2584 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2584) {
Obj _35reg2585 = primEQ(pat, expr);
if (True == _35reg2585) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2586 = primCons(expr, Nil);
Obj _35reg2587 = primCons(pat, _35reg2586);
Obj _35reg2588 = primCons(intern("="), _35reg2587);
Obj _35reg2589 = primCons(cc, Nil);
Obj _35reg2590 = primCons(_35reg2589, Nil);
Obj _35reg2591 = primCons(body, _35reg2590);
Obj _35reg2592 = primCons(_35reg2588, _35reg2591);
Obj _35reg2593 = primCons(intern("if"), _35reg2592);
__nargs = 2;
__arg1 = _35reg2593;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg2594 = primIsSymbol(pat);
if (True == _35reg2594) {
Obj _35reg2595 = primCons(body, Nil);
Obj _35reg2596 = primCons(expr, _35reg2595);
Obj _35reg2597 = primCons(pat, _35reg2596);
Obj _35reg2598 = primCons(intern("let"), _35reg2597);
__nargs = 2;
__arg1 = _35reg2598;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, _35clofun3305, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
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
Obj literal_63 = makeNative(14, _35clofun3305, 1, 0);
pushCont(co, 17, _35clofun3305, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2620 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2619= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2621 = primCons(cc, Nil);
Obj _35reg2622 = primCons(_35reg2621, Nil);
Obj _35reg2623 = primCons(_35val2620, _35reg2622);
Obj _35reg2624 = primCons(_35val2619, _35reg2623);
Obj _35reg2625 = primCons(intern("if"), _35reg2624);
__nargs = 2;
__arg1 = _35reg2625;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3305) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2619 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun3305, 2, cc, _35val2619);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3305) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3304(struct Cora* co){
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
Obj _35reg2468 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-let"));
__arg1 = _35reg2468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2477 = __arg1;
Obj _35val2476= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2475= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2478 = primCons(intern("cond"), _35val2477);
Obj _35reg2479 = primCons(_35reg2478, Nil);
Obj _35reg2480 = primCons(_35val2476, _35reg2479);
Obj _35reg2481 = primCons(_35reg2475, _35reg2480);
Obj _35reg2482 = primCons(intern("if"), _35reg2481);
__nargs = 2;
__arg1 = _35reg2482;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2476 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2475= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3304, 2, _35val2476, _35reg2475);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2474 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val2474;
Obj _35reg2475 = primCar(curr);
pushCont(co, 2, _35clofun3304, 2, exp, _35reg2475);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg2470 = primCdr(exp);
Obj _35reg2471 = primEQ(Nil, _35reg2470);
if (True == _35reg2471) {
Obj _35reg2472 = primCons(makeString1("no cond match"), Nil);
Obj _35reg2473 = primCons(intern("error"), _35reg2472);
__nargs = 2;
__arg1 = _35reg2473;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun3304, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2488 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val2488;
Obj _35reg2489 = primEQ(more, True);
if (True == _35reg2489) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2490 = primCar(l);
Obj _35reg2491 = primCons(more, Nil);
Obj _35reg2492 = primCons(True, _35reg2491);
Obj _35reg2493 = primCons(_35reg2490, _35reg2492);
Obj _35reg2494 = primCons(intern("if"), _35reg2493);
__nargs = 2;
__arg1 = _35reg2494;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj l = __arg1;
Obj _35reg2484 = primEQ(l, Nil);
if (True == _35reg2484) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2485 = primCar(l);
Obj _35reg2486 = primEQ(_35reg2485, True);
if (True == _35reg2486) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2487 = primCdr(l);
pushCont(co, 5, _35clofun3304, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-or"));
__arg1 = _35reg2487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj exp = __arg1;
Obj _35reg2496 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-or"));
__arg1 = _35reg2496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2502 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val2502;
Obj _35reg2503 = primEQ(more, False);
if (True == _35reg2503) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2504 = primCar(l);
Obj _35reg2505 = primCons(False, Nil);
Obj _35reg2506 = primCons(more, _35reg2505);
Obj _35reg2507 = primCons(_35reg2504, _35reg2506);
Obj _35reg2508 = primCons(intern("if"), _35reg2507);
__nargs = 2;
__arg1 = _35reg2508;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj l = __arg1;
Obj _35reg2498 = primEQ(Nil, l);
if (True == _35reg2498) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2499 = primCar(l);
Obj _35reg2500 = primEQ(_35reg2499, False);
if (True == _35reg2500) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2501 = primCdr(l);
pushCont(co, 8, _35clofun3304, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-and"));
__arg1 = _35reg2501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj exp = __arg1;
Obj _35reg2510 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-and"));
__arg1 = _35reg2510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg2512 = primEQ(x, True);
if (True == _35reg2512) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2513 = primEQ(x, False);
if (True == _35reg2513) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label12:
{
Obj _35val2520 = __arg1;
Obj _35reg2518= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2521 = primCons(_35val2520, Nil);
Obj _35reg2522 = primCons(_35reg2518, _35reg2521);
Obj _35reg2523 = primCons(intern("cons"), _35reg2522);
__nargs = 2;
__arg1 = _35reg2523;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2516 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2516) {
Obj _35reg2517 = primCar(pat);
__nargs = 2;
__arg1 = _35reg2517;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2518 = primCar(pat);
Obj _35reg2519 = primCdr(pat);
pushCont(co, 12, _35clofun3304, 1, _35reg2518);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rcons1"));
__arg1 = _35reg2519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj pat = __arg1;
Obj _35reg2515 = primCdr(pat);
pushCont(co, 13, _35clofun3304, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg2515;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
Obj _35reg2525 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rcons1"));
__arg1 = _35reg2525;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2534 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2534;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2533 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2533;
pushCont(co, 16, _35clofun3304, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2532 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2532;
pushCont(co, 17, _35clofun3304, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2542 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2536= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2543 = primCons(cc, Nil);
Obj _35reg2544 = primCons(_35reg2543, Nil);
Obj _35reg2545 = primCons(_35val2542, _35reg2544);
Obj _35reg2546 = primCons(_35reg2536, _35reg2545);
Obj _35reg2547 = primCons(intern("if"), _35reg2546);
__nargs = 2;
__arg1 = _35reg2547;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3304) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2541 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2538= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2536= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3304, 2, cc, _35reg2536);
__nargs = 5;
__arg0 = globalRef(intern("cora/init.match1"));
__arg1 = x;
__arg2 = _35reg2538;
__arg3 = _35val2541;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3304) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3303(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2411 = __arg1;
Obj _35val2410= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun3302, 1, _35val2410);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = _35val2411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2410 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun3303, 1, _35val2410);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp1 = __arg1;
Obj _35reg2418 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg2418) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init.macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2419 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(2, _35clofun3303, 1, 1, exp);
__arg1 = _35val2419;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
Obj _35reg2404 = primIsCons(exp);
if (True == _35reg2404) {
Obj _35reg2405 = primCar(exp);
Obj _35reg2406 = primEQ(_35reg2405, globalRef(intern("*protect-symbol*")));
if (True == _35reg2406) {
Obj _35reg2407 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg2407;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2408 = primCar(exp);
Obj _35reg2409 = primEQ(_35reg2408, intern("lambda"));
if (True == _35reg2409) {
pushCont(co, 1, _35clofun3303, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2416 = primCar(exp);
Obj _35reg2417 = primEQ(_35reg2416, intern("quote"));
if (True == _35reg2417) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 3, _35clofun3303, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35val2426 = __arg1;
Obj _35val2425= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2424= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2427 = primCons(_35val2425, _35val2426);
Obj _35reg2428 = primCons(intern("lambda"), _35reg2427);
Obj _35reg2429 = primCons(_35reg2428, Nil);
Obj _35reg2430 = primCons(_35reg2424, _35reg2429);
Obj _35reg2431 = primCons(intern("cora/init.add-to-*macros*"), _35reg2430);
__nargs = 2;
__arg1 = _35reg2431;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2425 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2424= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3303, 2, _35val2425, _35reg2424);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2422 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2423 = primCons(_35val2422, Nil);
Obj _35reg2424 = primCons(intern("quote"), _35reg2423);
pushCont(co, 6, _35clofun3303, 2, exp, _35reg2424);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
pushCont(co, 7, _35clofun3303, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg2434 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg2434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2440 = __arg1;
Obj _35val2439= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2438= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2441 = primCons(_35val2440, Nil);
Obj _35reg2442 = primCons(_35val2439, _35reg2441);
Obj _35reg2443 = primCons(intern("lambda"), _35reg2442);
Obj _35reg2444 = primCons(_35reg2443, Nil);
Obj _35reg2445 = primCons(_35reg2438, _35reg2444);
Obj _35reg2446 = primCons(intern("set"), _35reg2445);
__nargs = 2;
__arg1 = _35reg2446;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2439 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2438= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3303, 2, _35val2439, _35reg2438);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2436 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2437 = primCons(_35val2436, Nil);
Obj _35reg2438 = primCons(intern("quote"), _35reg2437);
pushCont(co, 11, _35clofun3303, 2, exp, _35reg2438);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
pushCont(co, 12, _35clofun3303, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg2448 = primIsCons(l);
if (True == _35reg2448) {
Obj _35reg2449 = primCar(l);
Obj _35reg2450 = primEQ(_35reg2449, x);
if (True == _35reg2450) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2451 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg2451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj x = __arg1;
Obj _35reg2453 = primIsCons(x);
Obj _35reg2454 = primNot(_35reg2453);
__nargs = 2;
__arg1 = _35reg2454;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2462 = __arg1;
Obj _35val2460= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2459= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2463 = primCons(_35val2462, Nil);
Obj _35reg2464 = primCons(_35val2460, _35reg2463);
Obj _35reg2465 = primCons(_35reg2459, _35reg2464);
Obj _35reg2466 = primCons(intern("let"), _35reg2465);
__nargs = 2;
__arg1 = _35reg2466;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val2461 = __arg1;
Obj _35val2460= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2459= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3303, 2, _35val2460, _35reg2459);
__nargs = 2;
__arg0 = globalRef(intern("cora/init.rewrite-let"));
__arg1 = _35val2461;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2460 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2459= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun3303, 2, _35val2460, _35reg2459);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2457 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2457) {
Obj _35reg2458 = primCar(exp);
__nargs = 2;
__arg1 = _35reg2458;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3303) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2459 = primCar(exp);
pushCont(co, 18, _35clofun3303, 2, exp, _35reg2459);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg2456 = primCdr(exp);
pushCont(co, 19, _35clofun3303, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg2456;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3303) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3302(struct Cora* co){
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
Obj _35reg2330 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg2330;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg2332 = primCdr(x);
Obj _35reg2333 = primCar(_35reg2332);
__nargs = 2;
__arg1 = _35reg2333;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg2335 = primCar(x);
Obj _35reg2336 = primCar(_35reg2335);
__nargs = 2;
__arg1 = _35reg2336;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg2338 = primCar(x);
Obj _35reg2339 = primCdr(_35reg2338);
__nargs = 2;
__arg1 = _35reg2339;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg2341 = primCdr(x);
Obj _35reg2342 = primCdr(_35reg2341);
__nargs = 2;
__arg1 = _35reg2342;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg2344 = primCdr(x);
Obj _35reg2345 = primCdr(_35reg2344);
Obj _35reg2346 = primCar(_35reg2345);
__nargs = 2;
__arg1 = _35reg2346;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg2348 = primCdr(x);
Obj _35reg2349 = primCdr(_35reg2348);
Obj _35reg2350 = primCdr(_35reg2349);
Obj _35reg2351 = primCar(_35reg2350);
__nargs = 2;
__arg1 = _35reg2351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg2353 = primCdr(x);
Obj _35reg2354 = primCdr(_35reg2353);
Obj _35reg2355 = primCdr(_35reg2354);
__nargs = 2;
__arg1 = _35reg2355;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2360 = __arg1;
Obj _35reg2358= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2361 = primCons(_35val2360, Nil);
Obj _35reg2362 = primCons(_35reg2358, _35reg2361);
Obj _35reg2363 = primCons(intern("cons"), _35reg2362);
__nargs = 2;
__arg1 = _35reg2363;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg2357 = primIsCons(exp);
if (True == _35reg2357) {
Obj _35reg2358 = primCar(exp);
Obj _35reg2359 = primCdr(exp);
pushCont(co, 8, _35clofun3302, 1, _35reg2358);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg2359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg2365 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg2365;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg2367 = primIsCons(l);
if (True == _35reg2367) {
Obj _35reg2368 = primCar(l);
Obj _35reg2369 = primCons(_35reg2368, res);
Obj _35reg2370 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init.reverse-h"));
__arg1 = _35reg2369;
__arg2 = _35reg2370;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val2376 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2377 = primCons(_35val2376, res);
Obj _35reg2378 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg2377;
__arg2 = f;
__arg3 = _35reg2378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg2374 = primIsCons(l);
if (True == _35reg2374) {
Obj _35reg2375 = primCar(l);
pushCont(co, 12, _35clofun3302, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg2375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
Obj _35reg2384 = primCons(globalRef(intern("*protect-symbol*")), x);
__nargs = 2;
__arg1 = _35reg2384;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg2386 = primCons(n, v);
Obj _35reg2387 = primCons(_35reg2386, globalRef(intern("*macros*")));
Obj _35reg2388 = primSet(intern("*macros*"), _35reg2387);
__nargs = 2;
__arg1 = _35reg2388;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj item = __arg1;
Obj _35reg2391 = primIsCons(closureRef(co, 0));
if (True == _35reg2391) {
Obj _35reg2392 = primCar(closureRef(co, 0));
Obj _35reg2393 = primCar(item);
Obj _35reg2394 = primEQ(_35reg2392, _35reg2393);
if (True == _35reg2394) {
if (True == True) {
Obj _35reg2395 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2395;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2396 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2396;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2397 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2397;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2398 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2398;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2399 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2399;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2400 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init.macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg2390 = primEQ(Nil, macros);
if (True == _35reg2390) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2401 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(17, _35clofun3302, 1, 2, exp, macros);
__arg1 = _35reg2401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3302) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2412 = __arg1;
Obj _35val2410= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2413 = primCons(_35val2412, Nil);
Obj _35reg2414 = primCons(_35val2410, _35reg2413);
Obj _35reg2415 = primCons(intern("lambda"), _35reg2414);
__nargs = 2;
__arg1 = _35reg2415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3302) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

