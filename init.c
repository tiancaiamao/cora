#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun3160(struct Cora* co);
void _35clofun3159(struct Cora* co);
void _35clofun3158(struct Cora* co);
void _35clofun3157(struct Cora* co);
void _35clofun3156(struct Cora* co);
void _35clofun3155(struct Cora* co);
void _35clofun3154(struct Cora* co);
void _35clofun3153(struct Cora* co);
void _35clofun3152(struct Cora* co);
void _35clofun3151(struct Cora* co);
void _35clofun3150(struct Cora* co);


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
Obj _35reg2063 = primSet(co, intern("null?"), makeNative(0, _35clofun3150, 1, 0));
Obj _35reg2066 = primSet(co, intern("cadr"), makeNative(1, _35clofun3150, 1, 0));
Obj _35reg2069 = primSet(co, intern("caar"), makeNative(2, _35clofun3150, 1, 0));
Obj _35reg2072 = primSet(co, intern("cdar"), makeNative(3, _35clofun3150, 1, 0));
Obj _35reg2075 = primSet(co, intern("cddr"), makeNative(4, _35clofun3150, 1, 0));
Obj _35reg2079 = primSet(co, intern("caddr"), makeNative(5, _35clofun3150, 1, 0));
Obj _35reg2084 = primSet(co, intern("cadddr"), makeNative(6, _35clofun3150, 1, 0));
Obj _35reg2088 = primSet(co, intern("cdddr"), makeNative(7, _35clofun3150, 1, 0));
Obj _35reg2096 = primSet(co, intern("rcons"), makeNative(9, _35clofun3150, 1, 0));
Obj _35reg2098 = primSet(co, intern("pair?"), makeNative(10, _35clofun3150, 1, 0));
Obj _35reg2103 = primSet(co, intern("cora/init#reverse-h"), makeNative(11, _35clofun3150, 2, 0));
pushCont(co, 11, _35clofun3160, 0);
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

void _35clofun3160(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3004 = __arg1;
Obj _35reg3024 = primSet(co, intern("cora/init#rewrite-backquote"), makeNative(5, _35clofun3159, 1, 0));
pushCont(co, 20, _35clofun3159, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("backquote");
__arg2 = makeNative(7, _35clofun3159, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2555 = __arg1;
Obj _35reg2818 = primSet(co, intern("cora/init#propagate-boolean0"), makeNative(10, _35clofun3157, 1, 0));
Obj _35reg2976 = primSet(co, intern("cora/init#propagate-boolean"), makeNative(12, _35clofun3158, 1, 0));
Obj _35reg2978 = primSet(co, intern("macroexpand"), makeNative(14, _35clofun3158, 1, 0));
Obj _35reg3002 = primSet(co, intern("cora/init#rewrite-begin"), makeNative(19, _35clofun3158, 1, 0));
pushCont(co, 0, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("begin");
__arg2 = makeNative(20, _35clofun3158, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2447 = __arg1;
Obj _35reg2499 = primSet(co, intern("cora/init#extract-rules1"), makeNative(14, _35clofun3155, 3, 0));
Obj _35reg2500 = primSet(co, intern("cora/init#extract-rules"), makeNative(15, _35clofun3155, 1, 0));
Obj _35reg2505 = primSet(co, intern("cora/init#rules-patterns"), makeNative(18, _35clofun3155, 2, 0));
Obj _35reg2509 = primSet(co, intern("cora/init#length-h"), makeNative(19, _35clofun3155, 2, 0));
Obj _35reg2510 = primSet(co, intern("length"), makeNative(20, _35clofun3155, 1, 0));
Obj _35reg2518 = primSet(co, intern("cora/init#filter-h"), makeNative(1, _35clofun3156, 3, 0));
Obj _35reg2519 = primSet(co, intern("filter"), makeNative(2, _35clofun3156, 2, 0));
Obj _35reg2525 = primSet(co, intern("append"), makeNative(4, _35clofun3156, 2, 0));
Obj _35reg2536 = primSet(co, intern("cora/init#rules-arg-count"), makeNative(11, _35clofun3156, 1, 0));
Obj _35reg2542 = primSet(co, intern("cora/init#gen-paramenters"), makeNative(13, _35clofun3156, 1, 0));
pushCont(co, 1, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("func");
__arg2 = makeNative(19, _35clofun3156, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2254 = __arg1;
Obj _35reg2308 = primSet(co, intern("cora/init#match-cons-expander"), makeNative(11, _35clofun3153, 4, 0));
Obj _35reg2341 = primSet(co, intern("cora/init#match1"), makeNative(17, _35clofun3153, 4, 0));
Obj _35reg2368 = primSet(co, intern("cora/init#extract-rule-action"), makeNative(4, _35clofun3154, 2, 0));
Obj _35reg2420 = primSet(co, intern("cora/init#match-helper"), makeNative(20, _35clofun3154, 2, 0));
Obj _35reg2446 = primSet(co, intern("cora/init#rewrite-match"), makeNative(6, _35clofun3155, 1, 0));
pushCont(co, 2, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("match");
__arg2 = makeNative(7, _35clofun3155, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2239 = __arg1;
Obj _35reg2242 = primSet(co, intern("boolean?"), makeNative(10, _35clofun3152, 1, 0));
Obj _35reg2252 = primSet(co, intern("cora/init#rcons1"), makeNative(13, _35clofun3152, 1, 0));
pushCont(co, 3, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list-rest");
__arg2 = makeNative(14, _35clofun3152, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2225 = __arg1;
Obj _35reg2237 = primSet(co, intern("cora/init#rewrite-and"), makeNative(8, _35clofun3152, 1, 0));
pushCont(co, 4, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("and");
__arg2 = makeNative(9, _35clofun3152, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2211 = __arg1;
Obj _35reg2223 = primSet(co, intern("cora/init#rewrite-or"), makeNative(5, _35clofun3152, 1, 0));
pushCont(co, 5, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("or");
__arg2 = makeNative(6, _35clofun3152, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2197 = __arg1;
pushCont(co, 6, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("cond");
__arg2 = makeNative(3, _35clofun3152, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2175 = __arg1;
Obj _35reg2180 = primSet(co, intern("elem?"), makeNative(13, _35clofun3151, 2, 0));
Obj _35reg2183 = primSet(co, intern("atom?"), makeNative(14, _35clofun3151, 1, 0));
Obj _35reg2195 = primSet(co, intern("cora/init#rewrite-let"), makeNative(19, _35clofun3151, 1, 0));
pushCont(co, 7, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("let");
__arg2 = makeNative(20, _35clofun3151, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2165 = __arg1;
pushCont(co, 8, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defun");
__arg2 = makeNative(12, _35clofun3151, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2163 = __arg1;
pushCont(co, 9, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("list");
__arg2 = makeNative(8, _35clofun3151, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2104 = __arg1;
Obj _35reg2105 = primSet(co, intern("reverse"), _35val2104);
Obj _35reg2111 = primSet(co, intern("map-h"), makeNative(13, _35clofun3150, 3, 0));
Obj _35reg2112 = primSet(co, intern("map"), makeNative(14, _35clofun3150, 2, 0));
Obj _35reg2113 = primSet(co, intern("*macros*"), Nil);
Obj _35reg2114 = primGenSym(intern("protect"));
Obj _35reg2115 = primSet(co, intern("*protect-symbol*"), _35reg2114);
Obj _35reg2119 = primSet(co, intern("cora/init#add-to-*macros*"), makeNative(15, _35clofun3150, 2, 0));
Obj _35reg2132 = primSet(co, intern("cora/init#macroexpand1-h"), makeNative(17, _35clofun3150, 2, 0));
Obj _35reg2133 = primSet(co, intern("cora/init#macroexpand1"), makeNative(18, _35clofun3150, 1, 0));
Obj _35reg2150 = primSet(co, intern("cora/init#macroexpand-boot"), makeNative(3, _35clofun3151, 1, 0));
Obj _35reg2151 = primSet(co, intern("macroexpand"), globalRef(intern("cora/init#macroexpand-boot")));
Obj _35reg2162 = primSet(co, intern("defmacro-macro"), makeNative(7, _35clofun3151, 1, 0));
pushCont(co, 10, _35clofun3160, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("defmacro");
__arg2 = globalRef(intern("defmacro-macro"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3159(struct Cora* co){
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2054 = makeNative(0, _35clofun3159, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3009 = __arg1;
Obj _35reg3010 = primCons(intern("list"), _35val3009);
__nargs = 2;
__arg1 = _35reg3010;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35cc2053 = makeNative(1, _35clofun3159, 0, 1, closureRef(co, 0));
Obj _35reg3005 = primIsCons(closureRef(co, 0));
if (True == _35reg3005) {
Obj _35reg3006 = primCar(closureRef(co, 0));
Obj x = _35reg3006;
Obj _35reg3007 = primCdr(closureRef(co, 0));
Obj more = _35reg3007;
Obj _35reg3008 = primCons(x, more);
pushCont(co, 2, _35clofun3159, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#rewrite-backquote"));
__arg2 = _35reg3008;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc2052 = makeNative(3, _35clofun3159, 0, 1, closureRef(co, 0));
Obj _35reg3011 = primIsCons(closureRef(co, 0));
if (True == _35reg3011) {
Obj _35reg3012 = primCar(closureRef(co, 0));
Obj _35reg3013 = primEQ(intern("unquote"), _35reg3012);
if (True == _35reg3013) {
Obj _35reg3014 = primCdr(closureRef(co, 0));
Obj _35reg3015 = primIsCons(_35reg3014);
if (True == _35reg3015) {
Obj _35reg3016 = primCdr(closureRef(co, 0));
Obj _35reg3017 = primCar(_35reg3016);
Obj x = _35reg3017;
Obj _35reg3018 = primCdr(closureRef(co, 0));
Obj _35reg3019 = primCdr(_35reg3018);
Obj _35reg3020 = primEQ(Nil, _35reg3019);
if (True == _35reg3020) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35p2050 = __arg1;
Obj _35cc2051 = makeNative(4, _35clofun3159, 0, 1, _35p2050);
Obj x = _35p2050;
Obj _35reg3021 = primIsSymbol(x);
if (True == _35reg3021) {
Obj _35reg3022 = primCons(x, Nil);
Obj _35reg3023 = primCons(intern("quote"), _35reg3022);
__nargs = 2;
__arg1 = _35reg3023;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2051;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3025 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-backquote"));
__arg1 = _35val3025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun3159, 0);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3027 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exports= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = _35val3027;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc2061 = makeNative(8, _35clofun3159, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
pushCont(co, 9, _35clofun3159, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2060 = makeNative(10, _35clofun3159, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3028 = primIsCons(closureRef(co, 0));
if (True == _35reg3028) {
Obj _35reg3029 = primCar(closureRef(co, 0));
Obj _35reg3030 = primIsCons(_35reg3029);
if (True == _35reg3030) {
Obj _35reg3031 = primCar(closureRef(co, 0));
Obj _35reg3032 = primCar(_35reg3031);
Obj _35reg3033 = primEQ(intern("export"), _35reg3032);
if (True == _35reg3033) {
Obj _35reg3034 = primCar(closureRef(co, 0));
Obj _35reg3035 = primCdr(_35reg3034);
Obj more = _35reg3035;
Obj _35reg3036 = primCdr(closureRef(co, 0));
Obj rest = _35reg3036;
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p2055 = __arg1;
Obj _35p2056 = __arg2;
Obj _35p2057 = __arg3;
Obj _35p2058 = co->args[4];
Obj _35cc2059 = makeNative(11, _35clofun3159, 0, 4, _35p2055, _35p2056, _35p2057, _35p2058);
Obj _35reg3037 = primIsCons(_35p2055);
if (True == _35reg3037) {
Obj _35reg3038 = primCar(_35p2055);
Obj _35reg3039 = primIsCons(_35reg3038);
if (True == _35reg3039) {
Obj _35reg3040 = primCar(_35p2055);
Obj _35reg3041 = primCar(_35reg3040);
Obj _35reg3042 = primEQ(intern("import"), _35reg3041);
if (True == _35reg3042) {
Obj _35reg3043 = primCar(_35p2055);
Obj _35reg3044 = primCdr(_35reg3043);
Obj _35reg3045 = primIsCons(_35reg3044);
if (True == _35reg3045) {
Obj _35reg3046 = primCar(_35p2055);
Obj _35reg3047 = primCdr(_35reg3046);
Obj _35reg3048 = primCar(_35reg3047);
Obj lib = _35reg3048;
Obj _35reg3049 = primCar(_35p2055);
Obj _35reg3050 = primCdr(_35reg3049);
Obj _35reg3051 = primCdr(_35reg3050);
Obj _35reg3052 = primEQ(Nil, _35reg3051);
if (True == _35reg3052) {
Obj _35reg3053 = primCdr(_35p2055);
Obj rest = _35reg3053;
Obj imports = _35p2056;
Obj exports = _35p2057;
Obj k = _35p2058;
Obj _35reg3054 = primCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#parse-define-library-h"));
__arg1 = rest;
__arg2 = _35reg3054;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _35reg3060 = primCons(makeCString("cora/init"), import);
Obj _35reg3061 = primCons(export, Nil);
Obj _35reg3062 = primCons(intern("backquote"), _35reg3061);
Obj _35reg3063 = primCons(_35reg3062, Nil);
Obj _35reg3064 = primCons(intern("*ns-export*"), _35reg3063);
Obj _35reg3065 = primCons(intern("def"), _35reg3064);
Obj _35reg3066 = primCons(_35reg3065, body);
Obj _35reg3067 = primCons(intern("begin"), _35reg3066);
Obj _35reg3068 = primCons(_35reg3067, Nil);
Obj _35reg3069 = primCons(_35reg3060, _35reg3068);
Obj _35reg3070 = primCons(closureRef(co, 0), _35reg3069);
Obj _35reg3071 = primCons(intern("ns"), _35reg3070);
__nargs = 2;
__arg1 = _35reg3071;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val3059 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _35val3059;
__arg1 = makeNative(14, _35clofun3159, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3058 = __arg1;
Obj path= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun3159, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#parse-define-library"));
__arg1 = _35val3058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3057 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj path = _35val3057;
pushCont(co, 16, _35clofun3159, 1, path);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj sexp = __arg1;
pushCont(co, 17, _35clofun3159, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3072 = __arg1;
Obj _35reg3073 = primCons(intern("append"), Nil);
Obj _35reg3074 = primCons(intern("filter"), _35reg3073);
Obj _35reg3075 = primCons(intern("length"), _35reg3074);
Obj _35reg3076 = primCons(intern("elem?"), _35reg3075);
Obj _35reg3077 = primCons(intern("macroexpand"), _35reg3076);
Obj _35reg3078 = primCons(intern("map"), _35reg3077);
Obj _35reg3079 = primCons(intern("reverse"), _35reg3078);
Obj _35reg3080 = primCons(intern("symbol-cooked?"), _35reg3079);
Obj _35reg3081 = primCons(intern("throw"), _35reg3080);
Obj _35reg3082 = primCons(intern("try"), _35reg3081);
Obj _35reg3083 = primCons(intern("load"), _35reg3082);
Obj _35reg3084 = primCons(intern("import"), _35reg3083);
Obj _35reg3085 = primCons(intern("load-so"), _35reg3084);
Obj _35reg3086 = primCons(intern("apply"), _35reg3085);
Obj _35reg3087 = primCons(intern("value-or"), _35reg3086);
Obj _35reg3088 = primCons(intern("value"), _35reg3087);
Obj _35reg3089 = primCons(intern("read-file-as-sexp"), _35reg3088);
Obj _35reg3090 = primCons(intern("bytes-length"), _35reg3089);
Obj _35reg3091 = primCons(intern("bytes"), _35reg3090);
Obj _35reg3092 = primCons(intern("vector-length"), _35reg3091);
Obj _35reg3093 = primCons(intern("vector-ref"), _35reg3092);
Obj _35reg3094 = primCons(intern("vector-set!"), _35reg3093);
Obj _35reg3095 = primCons(intern("vector"), _35reg3094);
Obj _35reg3096 = primCons(intern("symbol->string"), _35reg3095);
Obj _35reg3097 = primCons(intern("intern"), _35reg3096);
Obj _35reg3098 = primCons(intern("string-append"), _35reg3097);
Obj _35reg3099 = primCons(intern("null?"), _35reg3098);
Obj _35reg3100 = primCons(intern("number?"), _35reg3099);
Obj _35reg3101 = primCons(intern("boolean?"), _35reg3100);
Obj _35reg3102 = primCons(intern("atom?"), _35reg3101);
Obj _35reg3103 = primCons(intern("pair?"), _35reg3102);
Obj _35reg3104 = primCons(intern("cdddr"), _35reg3103);
Obj _35reg3105 = primCons(intern("cadddr"), _35reg3104);
Obj _35reg3106 = primCons(intern("caddr"), _35reg3105);
Obj _35reg3107 = primCons(intern("cddr"), _35reg3106);
Obj _35reg3108 = primCons(intern("cdar"), _35reg3107);
Obj _35reg3109 = primCons(intern("caar"), _35reg3108);
Obj _35reg3110 = primCons(intern("cadr"), _35reg3109);
Obj _35reg3111 = primSet(co, intern("cora/init#*ns-export*"), _35reg3110);
Obj _35reg3112 = primSet(co, intern("cora/init#cadr"), globalRef(intern("cadr")));
Obj _35reg3113 = primSet(co, intern("cora/init#caar"), globalRef(intern("caar")));
Obj _35reg3114 = primSet(co, intern("cora/init#cdar"), globalRef(intern("cdar")));
Obj _35reg3115 = primSet(co, intern("cora/init#cddr"), globalRef(intern("cddr")));
Obj _35reg3116 = primSet(co, intern("cora/init#caddr"), globalRef(intern("caddr")));
Obj _35reg3117 = primSet(co, intern("cora/init#cadddr"), globalRef(intern("cadddr")));
Obj _35reg3118 = primSet(co, intern("cora/init#cdddr"), globalRef(intern("cdddr")));
Obj _35reg3119 = primSet(co, intern("cora/init#pair?"), globalRef(intern("pair?")));
Obj _35reg3120 = primSet(co, intern("cora/init#atom?"), globalRef(intern("atom?")));
Obj _35reg3121 = primSet(co, intern("cora/init#boolean?"), globalRef(intern("boolean?")));
Obj _35reg3122 = primSet(co, intern("cora/init#null?"), globalRef(intern("null?")));
Obj _35reg3123 = primSet(co, intern("cora/init#number?"), globalRef(intern("number?")));
Obj _35reg3124 = primSet(co, intern("cora/init#string-append"), globalRef(intern("string-append")));
Obj _35reg3125 = primSet(co, intern("cora/init#intern"), globalRef(intern("intern")));
Obj _35reg3126 = primSet(co, intern("cora/init#symbol->string"), globalRef(intern("symbol->string")));
Obj _35reg3127 = primSet(co, intern("cora/init#vector"), globalRef(intern("vector")));
Obj _35reg3128 = primSet(co, intern("cora/init#vector-set!"), globalRef(intern("vector-set!")));
Obj _35reg3129 = primSet(co, intern("cora/init#vector-ref"), globalRef(intern("vector-ref")));
Obj _35reg3130 = primSet(co, intern("cora/init#vector-length"), globalRef(intern("vector-length")));
Obj _35reg3131 = primSet(co, intern("cora/init#bytes"), globalRef(intern("bytes")));
Obj _35reg3132 = primSet(co, intern("cora/init#bytes-length"), globalRef(intern("bytes-length")));
Obj _35reg3133 = primSet(co, intern("cora/init#value"), globalRef(intern("value")));
Obj _35reg3134 = primSet(co, intern("cora/init#value-or"), globalRef(intern("value-or")));
Obj _35reg3135 = primSet(co, intern("cora/init#read-file-as-sexp"), globalRef(intern("read-file-as-sexp")));
Obj _35reg3136 = primSet(co, intern("cora/init#apply"), globalRef(intern("apply")));
Obj _35reg3137 = primSet(co, intern("cora/init#load"), globalRef(intern("load")));
Obj _35reg3138 = primSet(co, intern("cora/init#load-so"), globalRef(intern("load-so")));
Obj _35reg3139 = primSet(co, intern("cora/init#import"), globalRef(intern("import")));
Obj _35reg3140 = primSet(co, intern("cora/init#try"), globalRef(intern("try")));
Obj _35reg3141 = primSet(co, intern("cora/init#throw"), globalRef(intern("throw")));
Obj _35reg3142 = primSet(co, intern("cora/init#symbol-cooked?"), globalRef(intern("symbol-cooked?")));
Obj _35reg3143 = primSet(co, intern("cora/init#reverse"), globalRef(intern("reverse")));
Obj _35reg3144 = primSet(co, intern("cora/init#map"), globalRef(intern("map")));
Obj _35reg3145 = primSet(co, intern("cora/init#macroexpand"), globalRef(intern("macroexpand")));
Obj _35reg3146 = primSet(co, intern("cora/init#elem?"), globalRef(intern("elem?")));
Obj _35reg3147 = primSet(co, intern("cora/init#length"), globalRef(intern("length")));
Obj _35reg3148 = primSet(co, intern("cora/init#filter"), globalRef(intern("filter")));
Obj _35reg3149 = primSet(co, intern("cora/init#append"), globalRef(intern("append")));
__nargs = 2;
__arg1 = _35reg3149;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val3026 = __arg1;
Obj _35reg3055 = primSet(co, intern("cora/init#parse-define-library-h"), makeNative(12, _35clofun3159, 4, 0));
Obj _35reg3056 = primSet(co, intern("cora/init#parse-define-library"), makeNative(13, _35clofun3159, 2, 0));
pushCont(co, 19, _35clofun3159, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("define-library");
__arg2 = makeNative(18, _35clofun3159, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3158(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2041 = makeNative(19, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2877 = primIsCons(closureRef(co, 0));
if (True == _35reg2877) {
Obj _35reg2878 = primCar(closureRef(co, 0));
Obj _35reg2879 = primEQ(intern("not"), _35reg2878);
if (True == _35reg2879) {
Obj _35reg2880 = primCdr(closureRef(co, 0));
Obj _35reg2881 = primIsCons(_35reg2880);
if (True == _35reg2881) {
Obj _35reg2882 = primCdr(closureRef(co, 0));
Obj _35reg2883 = primCar(_35reg2882);
Obj x = _35reg2883;
Obj _35reg2884 = primCdr(closureRef(co, 0));
Obj _35reg2885 = primCdr(_35reg2884);
Obj _35reg2886 = primEQ(Nil, _35reg2885);
if (True == _35reg2886) {
pushCont(co, 20, _35clofun3157, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2041;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2900 = __arg1;
Obj x1 = _35val2900;
Obj _35reg2901 = primCons(x1, Nil);
Obj _35reg2902 = primCons(intern("null?"), _35reg2901);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2902;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc2040 = makeNative(0, _35clofun3158, 0, 1, closureRef(co, 0));
Obj _35reg2890 = primIsCons(closureRef(co, 0));
if (True == _35reg2890) {
Obj _35reg2891 = primCar(closureRef(co, 0));
Obj _35reg2892 = primEQ(intern("null?"), _35reg2891);
if (True == _35reg2892) {
Obj _35reg2893 = primCdr(closureRef(co, 0));
Obj _35reg2894 = primIsCons(_35reg2893);
if (True == _35reg2894) {
Obj _35reg2895 = primCdr(closureRef(co, 0));
Obj _35reg2896 = primCar(_35reg2895);
Obj x = _35reg2896;
Obj _35reg2897 = primCdr(closureRef(co, 0));
Obj _35reg2898 = primCdr(_35reg2897);
Obj _35reg2899 = primEQ(Nil, _35reg2898);
if (True == _35reg2899) {
pushCont(co, 1, _35clofun3158, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2921 = __arg1;
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y1 = _35val2921;
Obj _35reg2922 = primCons(y1, Nil);
Obj _35reg2923 = primCons(x1, _35reg2922);
Obj _35reg2924 = primCons(intern("and"), _35reg2923);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2924;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2920 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1 = _35val2920;
pushCont(co, 3, _35clofun3158, 1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc2039 = makeNative(2, _35clofun3158, 0, 1, closureRef(co, 0));
Obj _35reg2903 = primIsCons(closureRef(co, 0));
if (True == _35reg2903) {
Obj _35reg2904 = primCar(closureRef(co, 0));
Obj _35reg2905 = primEQ(intern("and"), _35reg2904);
if (True == _35reg2905) {
Obj _35reg2906 = primCdr(closureRef(co, 0));
Obj _35reg2907 = primIsCons(_35reg2906);
if (True == _35reg2907) {
Obj _35reg2908 = primCdr(closureRef(co, 0));
Obj _35reg2909 = primCar(_35reg2908);
Obj x = _35reg2909;
Obj _35reg2910 = primCdr(closureRef(co, 0));
Obj _35reg2911 = primCdr(_35reg2910);
Obj _35reg2912 = primIsCons(_35reg2911);
if (True == _35reg2912) {
Obj _35reg2913 = primCdr(closureRef(co, 0));
Obj _35reg2914 = primCdr(_35reg2913);
Obj _35reg2915 = primCar(_35reg2914);
Obj y = _35reg2915;
Obj _35reg2916 = primCdr(closureRef(co, 0));
Obj _35reg2917 = primCdr(_35reg2916);
Obj _35reg2918 = primCdr(_35reg2917);
Obj _35reg2919 = primEQ(Nil, _35reg2918);
if (True == _35reg2919) {
pushCont(co, 4, _35clofun3158, 1, y);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2935 = __arg1;
Obj x1 = _35val2935;
Obj _35reg2936 = primCons(x1, Nil);
Obj _35reg2937 = primCons(intern("cdr"), _35reg2936);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2937;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc2038 = makeNative(5, _35clofun3158, 0, 1, closureRef(co, 0));
Obj _35reg2925 = primIsCons(closureRef(co, 0));
if (True == _35reg2925) {
Obj _35reg2926 = primCar(closureRef(co, 0));
Obj _35reg2927 = primEQ(intern("cdr"), _35reg2926);
if (True == _35reg2927) {
Obj _35reg2928 = primCdr(closureRef(co, 0));
Obj _35reg2929 = primIsCons(_35reg2928);
if (True == _35reg2929) {
Obj _35reg2930 = primCdr(closureRef(co, 0));
Obj _35reg2931 = primCar(_35reg2930);
Obj x = _35reg2931;
Obj _35reg2932 = primCdr(closureRef(co, 0));
Obj _35reg2933 = primCdr(_35reg2932);
Obj _35reg2934 = primEQ(Nil, _35reg2933);
if (True == _35reg2934) {
pushCont(co, 6, _35clofun3158, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2038;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2948 = __arg1;
Obj x1 = _35val2948;
Obj _35reg2949 = primCons(x1, Nil);
Obj _35reg2950 = primCons(intern("car"), _35reg2949);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2950;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2037 = makeNative(7, _35clofun3158, 0, 1, closureRef(co, 0));
Obj _35reg2938 = primIsCons(closureRef(co, 0));
if (True == _35reg2938) {
Obj _35reg2939 = primCar(closureRef(co, 0));
Obj _35reg2940 = primEQ(intern("car"), _35reg2939);
if (True == _35reg2940) {
Obj _35reg2941 = primCdr(closureRef(co, 0));
Obj _35reg2942 = primIsCons(_35reg2941);
if (True == _35reg2942) {
Obj _35reg2943 = primCdr(closureRef(co, 0));
Obj _35reg2944 = primCar(_35reg2943);
Obj x = _35reg2944;
Obj _35reg2945 = primCdr(closureRef(co, 0));
Obj _35reg2946 = primCdr(_35reg2945);
Obj _35reg2947 = primEQ(Nil, _35reg2946);
if (True == _35reg2947) {
pushCont(co, 8, _35clofun3158, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2037;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2961 = __arg1;
Obj x1 = _35val2961;
Obj _35reg2962 = primCons(x1, Nil);
Obj _35reg2963 = primCons(intern("cons?"), _35reg2962);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2963;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2036 = makeNative(9, _35clofun3158, 0, 1, closureRef(co, 0));
Obj _35reg2951 = primIsCons(closureRef(co, 0));
if (True == _35reg2951) {
Obj _35reg2952 = primCar(closureRef(co, 0));
Obj _35reg2953 = primEQ(intern("cons?"), _35reg2952);
if (True == _35reg2953) {
Obj _35reg2954 = primCdr(closureRef(co, 0));
Obj _35reg2955 = primIsCons(_35reg2954);
if (True == _35reg2955) {
Obj _35reg2956 = primCdr(closureRef(co, 0));
Obj _35reg2957 = primCar(_35reg2956);
Obj x = _35reg2957;
Obj _35reg2958 = primCdr(closureRef(co, 0));
Obj _35reg2959 = primCdr(_35reg2958);
Obj _35reg2960 = primEQ(Nil, _35reg2959);
if (True == _35reg2960) {
pushCont(co, 10, _35clofun3158, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2036;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p2034 = __arg1;
Obj _35cc2035 = makeNative(11, _35clofun3158, 0, 1, _35p2034);
Obj _35reg2964 = primIsCons(_35p2034);
if (True == _35reg2964) {
Obj _35reg2965 = primCar(_35p2034);
Obj _35reg2966 = primEQ(intern("quote"), _35reg2965);
if (True == _35reg2966) {
Obj _35reg2967 = primCdr(_35p2034);
Obj _35reg2968 = primIsCons(_35reg2967);
if (True == _35reg2968) {
Obj _35reg2969 = primCdr(_35p2034);
Obj _35reg2970 = primCar(_35reg2969);
Obj x = _35reg2970;
Obj _35reg2971 = primCdr(_35p2034);
Obj _35reg2972 = primCdr(_35reg2971);
Obj _35reg2973 = primEQ(Nil, _35reg2972);
if (True == _35reg2973) {
Obj _35reg2974 = primCons(x, Nil);
Obj _35reg2975 = primCons(intern("quote"), _35reg2974);
__nargs = 2;
__arg1 = _35reg2975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3158) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2977 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = _35val2977;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
pushCont(co, 13, _35clofun3158, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2982 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2983 = primCons(_35val2982, Nil);
Obj _35reg2984 = primCons(x, _35reg2983);
Obj _35reg2985 = primCons(intern("do"), _35reg2984);
__nargs = 2;
__arg1 = _35reg2985;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3158) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35cc2049 = makeNative(15, _35clofun3158, 0, 0);
Obj _35reg2979 = primIsCons(closureRef(co, 0));
if (True == _35reg2979) {
Obj _35reg2980 = primCar(closureRef(co, 0));
Obj x = _35reg2980;
Obj _35reg2981 = primCdr(closureRef(co, 0));
Obj y = _35reg2981;
pushCont(co, 16, _35clofun3158, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc2048 = makeNative(17, _35clofun3158, 0, 1, closureRef(co, 0));
Obj _35reg2986 = primIsCons(closureRef(co, 0));
if (True == _35reg2986) {
Obj _35reg2987 = primCar(closureRef(co, 0));
Obj x = _35reg2987;
Obj _35reg2988 = primCdr(closureRef(co, 0));
Obj _35reg2989 = primIsCons(_35reg2988);
if (True == _35reg2989) {
Obj _35reg2990 = primCdr(closureRef(co, 0));
Obj _35reg2991 = primCar(_35reg2990);
Obj y = _35reg2991;
Obj _35reg2992 = primCdr(closureRef(co, 0));
Obj _35reg2993 = primCdr(_35reg2992);
Obj _35reg2994 = primEQ(Nil, _35reg2993);
if (True == _35reg2994) {
Obj _35reg2995 = primCons(y, Nil);
Obj _35reg2996 = primCons(x, _35reg2995);
Obj _35reg2997 = primCons(intern("do"), _35reg2996);
__nargs = 2;
__arg1 = _35reg2997;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3158) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2048;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35p2046 = __arg1;
Obj _35cc2047 = makeNative(18, _35clofun3158, 0, 1, _35p2046);
Obj _35reg2998 = primIsCons(_35p2046);
if (True == _35reg2998) {
Obj _35reg2999 = primCar(_35p2046);
Obj x = _35reg2999;
Obj _35reg3000 = primCdr(_35p2046);
Obj _35reg3001 = primEQ(Nil, _35reg3000);
if (True == _35reg3001) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3158) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj exp = __arg1;
Obj _35reg3003 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-begin"));
__arg1 = _35reg3003;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3157(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2033 = makeNative(20, _35clofun3156, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35cc2032 = makeNative(0, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2556 = primIsCons(closureRef(co, 0));
if (True == _35reg2556) {
Obj _35reg2557 = primCar(closureRef(co, 0));
Obj _35reg2558 = primEQ(intern("if"), _35reg2557);
if (True == _35reg2558) {
Obj _35reg2559 = primCdr(closureRef(co, 0));
Obj _35reg2560 = primIsCons(_35reg2559);
if (True == _35reg2560) {
Obj _35reg2561 = primCdr(closureRef(co, 0));
Obj _35reg2562 = primCar(_35reg2561);
Obj _35reg2563 = primEQ(False, _35reg2562);
if (True == _35reg2563) {
Obj _35reg2564 = primCdr(closureRef(co, 0));
Obj _35reg2565 = primCdr(_35reg2564);
Obj _35reg2566 = primIsCons(_35reg2565);
if (True == _35reg2566) {
Obj _35reg2567 = primCdr(closureRef(co, 0));
Obj _35reg2568 = primCdr(_35reg2567);
Obj _35reg2569 = primCar(_35reg2568);
Obj y = _35reg2569;
Obj _35reg2570 = primCdr(closureRef(co, 0));
Obj _35reg2571 = primCdr(_35reg2570);
Obj _35reg2572 = primCdr(_35reg2571);
Obj _35reg2573 = primIsCons(_35reg2572);
if (True == _35reg2573) {
Obj _35reg2574 = primCdr(closureRef(co, 0));
Obj _35reg2575 = primCdr(_35reg2574);
Obj _35reg2576 = primCdr(_35reg2575);
Obj _35reg2577 = primCar(_35reg2576);
Obj z = _35reg2577;
Obj _35reg2578 = primCdr(closureRef(co, 0));
Obj _35reg2579 = primCdr(_35reg2578);
Obj _35reg2580 = primCdr(_35reg2579);
Obj _35reg2581 = primCdr(_35reg2580);
Obj _35reg2582 = primEQ(Nil, _35reg2581);
if (True == _35reg2582) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2032;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc2031 = makeNative(1, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2583 = primIsCons(closureRef(co, 0));
if (True == _35reg2583) {
Obj _35reg2584 = primCar(closureRef(co, 0));
Obj _35reg2585 = primEQ(intern("if"), _35reg2584);
if (True == _35reg2585) {
Obj _35reg2586 = primCdr(closureRef(co, 0));
Obj _35reg2587 = primIsCons(_35reg2586);
if (True == _35reg2587) {
Obj _35reg2588 = primCdr(closureRef(co, 0));
Obj _35reg2589 = primCar(_35reg2588);
Obj _35reg2590 = primEQ(True, _35reg2589);
if (True == _35reg2590) {
Obj _35reg2591 = primCdr(closureRef(co, 0));
Obj _35reg2592 = primCdr(_35reg2591);
Obj _35reg2593 = primIsCons(_35reg2592);
if (True == _35reg2593) {
Obj _35reg2594 = primCdr(closureRef(co, 0));
Obj _35reg2595 = primCdr(_35reg2594);
Obj _35reg2596 = primCar(_35reg2595);
Obj y = _35reg2596;
Obj _35reg2597 = primCdr(closureRef(co, 0));
Obj _35reg2598 = primCdr(_35reg2597);
Obj _35reg2599 = primCdr(_35reg2598);
Obj _35reg2600 = primIsCons(_35reg2599);
if (True == _35reg2600) {
Obj _35reg2601 = primCdr(closureRef(co, 0));
Obj _35reg2602 = primCdr(_35reg2601);
Obj _35reg2603 = primCdr(_35reg2602);
Obj _35reg2604 = primCar(_35reg2603);
Obj z = _35reg2604;
Obj _35reg2605 = primCdr(closureRef(co, 0));
Obj _35reg2606 = primCdr(_35reg2605);
Obj _35reg2607 = primCdr(_35reg2606);
Obj _35reg2608 = primCdr(_35reg2607);
Obj _35reg2609 = primEQ(Nil, _35reg2608);
if (True == _35reg2609) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc2030 = makeNative(2, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2610 = primIsCons(closureRef(co, 0));
if (True == _35reg2610) {
Obj _35reg2611 = primCar(closureRef(co, 0));
Obj _35reg2612 = primEQ(intern("not"), _35reg2611);
if (True == _35reg2612) {
Obj _35reg2613 = primCdr(closureRef(co, 0));
Obj _35reg2614 = primIsCons(_35reg2613);
if (True == _35reg2614) {
Obj _35reg2615 = primCdr(closureRef(co, 0));
Obj _35reg2616 = primCar(_35reg2615);
Obj _35reg2617 = primEQ(False, _35reg2616);
if (True == _35reg2617) {
Obj _35reg2618 = primCdr(closureRef(co, 0));
Obj _35reg2619 = primCdr(_35reg2618);
Obj _35reg2620 = primEQ(Nil, _35reg2619);
if (True == _35reg2620) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2030;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc2029 = makeNative(3, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2621 = primIsCons(closureRef(co, 0));
if (True == _35reg2621) {
Obj _35reg2622 = primCar(closureRef(co, 0));
Obj _35reg2623 = primEQ(intern("not"), _35reg2622);
if (True == _35reg2623) {
Obj _35reg2624 = primCdr(closureRef(co, 0));
Obj _35reg2625 = primIsCons(_35reg2624);
if (True == _35reg2625) {
Obj _35reg2626 = primCdr(closureRef(co, 0));
Obj _35reg2627 = primCar(_35reg2626);
Obj _35reg2628 = primEQ(True, _35reg2627);
if (True == _35reg2628) {
Obj _35reg2629 = primCdr(closureRef(co, 0));
Obj _35reg2630 = primCdr(_35reg2629);
Obj _35reg2631 = primEQ(Nil, _35reg2630);
if (True == _35reg2631) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc2028 = makeNative(4, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2632 = primIsCons(closureRef(co, 0));
if (True == _35reg2632) {
Obj _35reg2633 = primCar(closureRef(co, 0));
Obj _35reg2634 = primEQ(intern("null?"), _35reg2633);
if (True == _35reg2634) {
Obj _35reg2635 = primCdr(closureRef(co, 0));
Obj _35reg2636 = primIsCons(_35reg2635);
if (True == _35reg2636) {
Obj _35reg2637 = primCdr(closureRef(co, 0));
Obj _35reg2638 = primCar(_35reg2637);
Obj _35reg2639 = primIsCons(_35reg2638);
if (True == _35reg2639) {
Obj _35reg2640 = primCdr(closureRef(co, 0));
Obj _35reg2641 = primCar(_35reg2640);
Obj _35reg2642 = primCar(_35reg2641);
Obj _35reg2643 = primEQ(intern("cons"), _35reg2642);
if (True == _35reg2643) {
Obj _35reg2644 = primCdr(closureRef(co, 0));
Obj _35reg2645 = primCar(_35reg2644);
Obj _35reg2646 = primCdr(_35reg2645);
Obj _35reg2647 = primIsCons(_35reg2646);
if (True == _35reg2647) {
Obj _35reg2648 = primCdr(closureRef(co, 0));
Obj _35reg2649 = primCar(_35reg2648);
Obj _35reg2650 = primCdr(_35reg2649);
Obj _35reg2651 = primCar(_35reg2650);
Obj __ = _35reg2651;
Obj _35reg2652 = primCdr(closureRef(co, 0));
Obj _35reg2653 = primCar(_35reg2652);
Obj _35reg2654 = primCdr(_35reg2653);
Obj _35reg2655 = primCdr(_35reg2654);
Obj _35reg2656 = primIsCons(_35reg2655);
if (True == _35reg2656) {
Obj _35reg2657 = primCdr(closureRef(co, 0));
Obj _35reg2658 = primCar(_35reg2657);
Obj _35reg2659 = primCdr(_35reg2658);
Obj _35reg2660 = primCdr(_35reg2659);
Obj _35reg2661 = primCar(_35reg2660);
__ = _35reg2661;
Obj _35reg2662 = primCdr(closureRef(co, 0));
Obj _35reg2663 = primCar(_35reg2662);
Obj _35reg2664 = primCdr(_35reg2663);
Obj _35reg2665 = primCdr(_35reg2664);
Obj _35reg2666 = primCdr(_35reg2665);
Obj _35reg2667 = primEQ(Nil, _35reg2666);
if (True == _35reg2667) {
Obj _35reg2668 = primCdr(closureRef(co, 0));
Obj _35reg2669 = primCdr(_35reg2668);
Obj _35reg2670 = primEQ(Nil, _35reg2669);
if (True == _35reg2670) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc2027 = makeNative(5, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2671 = primIsCons(closureRef(co, 0));
if (True == _35reg2671) {
Obj _35reg2672 = primCar(closureRef(co, 0));
Obj _35reg2673 = primEQ(intern("null?"), _35reg2672);
if (True == _35reg2673) {
Obj _35reg2674 = primCdr(closureRef(co, 0));
Obj _35reg2675 = primIsCons(_35reg2674);
if (True == _35reg2675) {
Obj _35reg2676 = primCdr(closureRef(co, 0));
Obj _35reg2677 = primCar(_35reg2676);
Obj _35reg2678 = primEQ(Nil, _35reg2677);
if (True == _35reg2678) {
Obj _35reg2679 = primCdr(closureRef(co, 0));
Obj _35reg2680 = primCdr(_35reg2679);
Obj _35reg2681 = primEQ(Nil, _35reg2680);
if (True == _35reg2681) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2027;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc2026 = makeNative(6, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2682 = primIsCons(closureRef(co, 0));
if (True == _35reg2682) {
Obj _35reg2683 = primCar(closureRef(co, 0));
Obj _35reg2684 = primEQ(intern("and"), _35reg2683);
if (True == _35reg2684) {
Obj _35reg2685 = primCdr(closureRef(co, 0));
Obj _35reg2686 = primIsCons(_35reg2685);
if (True == _35reg2686) {
Obj _35reg2687 = primCdr(closureRef(co, 0));
Obj _35reg2688 = primCar(_35reg2687);
Obj _35reg2689 = primEQ(True, _35reg2688);
if (True == _35reg2689) {
Obj _35reg2690 = primCdr(closureRef(co, 0));
Obj _35reg2691 = primCdr(_35reg2690);
Obj _35reg2692 = primIsCons(_35reg2691);
if (True == _35reg2692) {
Obj _35reg2693 = primCdr(closureRef(co, 0));
Obj _35reg2694 = primCdr(_35reg2693);
Obj _35reg2695 = primCar(_35reg2694);
Obj _35reg2696 = primEQ(True, _35reg2695);
if (True == _35reg2696) {
Obj _35reg2697 = primCdr(closureRef(co, 0));
Obj _35reg2698 = primCdr(_35reg2697);
Obj _35reg2699 = primCdr(_35reg2698);
Obj _35reg2700 = primEQ(Nil, _35reg2699);
if (True == _35reg2700) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2026;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc2025 = makeNative(7, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2701 = primIsCons(closureRef(co, 0));
if (True == _35reg2701) {
Obj _35reg2702 = primCar(closureRef(co, 0));
Obj _35reg2703 = primEQ(intern("cons?"), _35reg2702);
if (True == _35reg2703) {
Obj _35reg2704 = primCdr(closureRef(co, 0));
Obj _35reg2705 = primIsCons(_35reg2704);
if (True == _35reg2705) {
Obj _35reg2706 = primCdr(closureRef(co, 0));
Obj _35reg2707 = primCar(_35reg2706);
Obj _35reg2708 = primIsCons(_35reg2707);
if (True == _35reg2708) {
Obj _35reg2709 = primCdr(closureRef(co, 0));
Obj _35reg2710 = primCar(_35reg2709);
Obj _35reg2711 = primCar(_35reg2710);
Obj _35reg2712 = primEQ(intern("cons"), _35reg2711);
if (True == _35reg2712) {
Obj _35reg2713 = primCdr(closureRef(co, 0));
Obj _35reg2714 = primCar(_35reg2713);
Obj _35reg2715 = primCdr(_35reg2714);
Obj _35reg2716 = primIsCons(_35reg2715);
if (True == _35reg2716) {
Obj _35reg2717 = primCdr(closureRef(co, 0));
Obj _35reg2718 = primCar(_35reg2717);
Obj _35reg2719 = primCdr(_35reg2718);
Obj _35reg2720 = primCar(_35reg2719);
Obj __ = _35reg2720;
Obj _35reg2721 = primCdr(closureRef(co, 0));
Obj _35reg2722 = primCar(_35reg2721);
Obj _35reg2723 = primCdr(_35reg2722);
Obj _35reg2724 = primCdr(_35reg2723);
Obj _35reg2725 = primIsCons(_35reg2724);
if (True == _35reg2725) {
Obj _35reg2726 = primCdr(closureRef(co, 0));
Obj _35reg2727 = primCar(_35reg2726);
Obj _35reg2728 = primCdr(_35reg2727);
Obj _35reg2729 = primCdr(_35reg2728);
Obj _35reg2730 = primCar(_35reg2729);
__ = _35reg2730;
Obj _35reg2731 = primCdr(closureRef(co, 0));
Obj _35reg2732 = primCar(_35reg2731);
Obj _35reg2733 = primCdr(_35reg2732);
Obj _35reg2734 = primCdr(_35reg2733);
Obj _35reg2735 = primCdr(_35reg2734);
Obj _35reg2736 = primEQ(Nil, _35reg2735);
if (True == _35reg2736) {
Obj _35reg2737 = primCdr(closureRef(co, 0));
Obj _35reg2738 = primCdr(_35reg2737);
Obj _35reg2739 = primEQ(Nil, _35reg2738);
if (True == _35reg2739) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2025;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc2024 = makeNative(8, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2740 = primIsCons(closureRef(co, 0));
if (True == _35reg2740) {
Obj _35reg2741 = primCar(closureRef(co, 0));
Obj _35reg2742 = primEQ(intern("cdr"), _35reg2741);
if (True == _35reg2742) {
Obj _35reg2743 = primCdr(closureRef(co, 0));
Obj _35reg2744 = primIsCons(_35reg2743);
if (True == _35reg2744) {
Obj _35reg2745 = primCdr(closureRef(co, 0));
Obj _35reg2746 = primCar(_35reg2745);
Obj _35reg2747 = primIsCons(_35reg2746);
if (True == _35reg2747) {
Obj _35reg2748 = primCdr(closureRef(co, 0));
Obj _35reg2749 = primCar(_35reg2748);
Obj _35reg2750 = primCar(_35reg2749);
Obj _35reg2751 = primEQ(intern("cons"), _35reg2750);
if (True == _35reg2751) {
Obj _35reg2752 = primCdr(closureRef(co, 0));
Obj _35reg2753 = primCar(_35reg2752);
Obj _35reg2754 = primCdr(_35reg2753);
Obj _35reg2755 = primIsCons(_35reg2754);
if (True == _35reg2755) {
Obj _35reg2756 = primCdr(closureRef(co, 0));
Obj _35reg2757 = primCar(_35reg2756);
Obj _35reg2758 = primCdr(_35reg2757);
Obj _35reg2759 = primCar(_35reg2758);
Obj __ = _35reg2759;
Obj _35reg2760 = primCdr(closureRef(co, 0));
Obj _35reg2761 = primCar(_35reg2760);
Obj _35reg2762 = primCdr(_35reg2761);
Obj _35reg2763 = primCdr(_35reg2762);
Obj _35reg2764 = primIsCons(_35reg2763);
if (True == _35reg2764) {
Obj _35reg2765 = primCdr(closureRef(co, 0));
Obj _35reg2766 = primCar(_35reg2765);
Obj _35reg2767 = primCdr(_35reg2766);
Obj _35reg2768 = primCdr(_35reg2767);
Obj _35reg2769 = primCar(_35reg2768);
Obj x = _35reg2769;
Obj _35reg2770 = primCdr(closureRef(co, 0));
Obj _35reg2771 = primCar(_35reg2770);
Obj _35reg2772 = primCdr(_35reg2771);
Obj _35reg2773 = primCdr(_35reg2772);
Obj _35reg2774 = primCdr(_35reg2773);
Obj _35reg2775 = primEQ(Nil, _35reg2774);
if (True == _35reg2775) {
Obj _35reg2776 = primCdr(closureRef(co, 0));
Obj _35reg2777 = primCdr(_35reg2776);
Obj _35reg2778 = primEQ(Nil, _35reg2777);
if (True == _35reg2778) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2024;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p2022 = __arg1;
Obj _35cc2023 = makeNative(9, _35clofun3157, 0, 1, _35p2022);
Obj _35reg2779 = primIsCons(_35p2022);
if (True == _35reg2779) {
Obj _35reg2780 = primCar(_35p2022);
Obj _35reg2781 = primEQ(intern("car"), _35reg2780);
if (True == _35reg2781) {
Obj _35reg2782 = primCdr(_35p2022);
Obj _35reg2783 = primIsCons(_35reg2782);
if (True == _35reg2783) {
Obj _35reg2784 = primCdr(_35p2022);
Obj _35reg2785 = primCar(_35reg2784);
Obj _35reg2786 = primIsCons(_35reg2785);
if (True == _35reg2786) {
Obj _35reg2787 = primCdr(_35p2022);
Obj _35reg2788 = primCar(_35reg2787);
Obj _35reg2789 = primCar(_35reg2788);
Obj _35reg2790 = primEQ(intern("cons"), _35reg2789);
if (True == _35reg2790) {
Obj _35reg2791 = primCdr(_35p2022);
Obj _35reg2792 = primCar(_35reg2791);
Obj _35reg2793 = primCdr(_35reg2792);
Obj _35reg2794 = primIsCons(_35reg2793);
if (True == _35reg2794) {
Obj _35reg2795 = primCdr(_35p2022);
Obj _35reg2796 = primCar(_35reg2795);
Obj _35reg2797 = primCdr(_35reg2796);
Obj _35reg2798 = primCar(_35reg2797);
Obj x = _35reg2798;
Obj _35reg2799 = primCdr(_35p2022);
Obj _35reg2800 = primCar(_35reg2799);
Obj _35reg2801 = primCdr(_35reg2800);
Obj _35reg2802 = primCdr(_35reg2801);
Obj _35reg2803 = primIsCons(_35reg2802);
if (True == _35reg2803) {
Obj _35reg2804 = primCdr(_35p2022);
Obj _35reg2805 = primCar(_35reg2804);
Obj _35reg2806 = primCdr(_35reg2805);
Obj _35reg2807 = primCdr(_35reg2806);
Obj _35reg2808 = primCar(_35reg2807);
Obj __ = _35reg2808;
Obj _35reg2809 = primCdr(_35p2022);
Obj _35reg2810 = primCar(_35reg2809);
Obj _35reg2811 = primCdr(_35reg2810);
Obj _35reg2812 = primCdr(_35reg2811);
Obj _35reg2813 = primCdr(_35reg2812);
Obj _35reg2814 = primEQ(Nil, _35reg2813);
if (True == _35reg2814) {
Obj _35reg2815 = primCdr(_35p2022);
Obj _35reg2816 = primCdr(_35reg2815);
Obj _35reg2817 = primEQ(Nil, _35reg2816);
if (True == _35reg2817) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc2045 = makeNative(11, _35clofun3157, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35cc2044 = makeNative(12, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2819 = primIsCons(closureRef(co, 0));
if (True == _35reg2819) {
Obj _35reg2820 = primCar(closureRef(co, 0));
Obj f = _35reg2820;
Obj _35reg2821 = primCdr(closureRef(co, 0));
Obj args = _35reg2821;
Obj _35reg2822 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#propagate-boolean"));
__arg2 = _35reg2822;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2840 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2841 = primCons(_35val2840, Nil);
Obj _35reg2842 = primCons(args, _35reg2841);
Obj _35reg2843 = primCons(intern("lambda"), _35reg2842);
__nargs = 2;
__arg1 = _35reg2843;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3157) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc2043 = makeNative(13, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2823 = primIsCons(closureRef(co, 0));
if (True == _35reg2823) {
Obj _35reg2824 = primCar(closureRef(co, 0));
Obj _35reg2825 = primEQ(intern("lambda"), _35reg2824);
if (True == _35reg2825) {
Obj _35reg2826 = primCdr(closureRef(co, 0));
Obj _35reg2827 = primIsCons(_35reg2826);
if (True == _35reg2827) {
Obj _35reg2828 = primCdr(closureRef(co, 0));
Obj _35reg2829 = primCar(_35reg2828);
Obj args = _35reg2829;
Obj _35reg2830 = primCdr(closureRef(co, 0));
Obj _35reg2831 = primCdr(_35reg2830);
Obj _35reg2832 = primIsCons(_35reg2831);
if (True == _35reg2832) {
Obj _35reg2833 = primCdr(closureRef(co, 0));
Obj _35reg2834 = primCdr(_35reg2833);
Obj _35reg2835 = primCar(_35reg2834);
Obj body = _35reg2835;
Obj _35reg2836 = primCdr(closureRef(co, 0));
Obj _35reg2837 = primCdr(_35reg2836);
Obj _35reg2838 = primCdr(_35reg2837);
Obj _35reg2839 = primEQ(Nil, _35reg2838);
if (True == _35reg2839) {
pushCont(co, 14, _35clofun3157, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2043;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2872 = __arg1;
Obj y1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj z1 = _35val2872;
Obj _35reg2873 = primCons(z1, Nil);
Obj _35reg2874 = primCons(y1, _35reg2873);
Obj _35reg2875 = primCons(x1, _35reg2874);
Obj _35reg2876 = primCons(intern("if"), _35reg2875);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2876;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2871 = __arg1;
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj y1 = _35val2871;
pushCont(co, 16, _35clofun3157, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2870 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj z= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x1 = _35val2870;
pushCont(co, 17, _35clofun3157, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc2042 = makeNative(15, _35clofun3157, 0, 1, closureRef(co, 0));
Obj _35reg2844 = primIsCons(closureRef(co, 0));
if (True == _35reg2844) {
Obj _35reg2845 = primCar(closureRef(co, 0));
Obj _35reg2846 = primEQ(intern("if"), _35reg2845);
if (True == _35reg2846) {
Obj _35reg2847 = primCdr(closureRef(co, 0));
Obj _35reg2848 = primIsCons(_35reg2847);
if (True == _35reg2848) {
Obj _35reg2849 = primCdr(closureRef(co, 0));
Obj _35reg2850 = primCar(_35reg2849);
Obj x = _35reg2850;
Obj _35reg2851 = primCdr(closureRef(co, 0));
Obj _35reg2852 = primCdr(_35reg2851);
Obj _35reg2853 = primIsCons(_35reg2852);
if (True == _35reg2853) {
Obj _35reg2854 = primCdr(closureRef(co, 0));
Obj _35reg2855 = primCdr(_35reg2854);
Obj _35reg2856 = primCar(_35reg2855);
Obj y = _35reg2856;
Obj _35reg2857 = primCdr(closureRef(co, 0));
Obj _35reg2858 = primCdr(_35reg2857);
Obj _35reg2859 = primCdr(_35reg2858);
Obj _35reg2860 = primIsCons(_35reg2859);
if (True == _35reg2860) {
Obj _35reg2861 = primCdr(closureRef(co, 0));
Obj _35reg2862 = primCdr(_35reg2861);
Obj _35reg2863 = primCdr(_35reg2862);
Obj _35reg2864 = primCar(_35reg2863);
Obj z = _35reg2864;
Obj _35reg2865 = primCdr(closureRef(co, 0));
Obj _35reg2866 = primCdr(_35reg2865);
Obj _35reg2867 = primCdr(_35reg2866);
Obj _35reg2868 = primCdr(_35reg2867);
Obj _35reg2869 = primEQ(Nil, _35reg2868);
if (True == _35reg2869) {
pushCont(co, 18, _35clofun3157, 2, y, z);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2042;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2887 = __arg1;
Obj x1 = _35val2887;
Obj _35reg2888 = primCons(x1, Nil);
Obj _35reg2889 = primCons(intern("not"), _35reg2888);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#propagate-boolean0"));
__arg1 = _35reg2889;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3156(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2513 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2513) {
Obj _35reg2514 = primCar(l);
Obj _35reg2515 = primCons(_35reg2514, res);
Obj _35reg2516 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = _35reg2515;
__arg2 = fn;
__arg3 = _35reg2516;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2517 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#filter-h"));
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg2517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg2511 = primIsCons(l);
if (True == _35reg2511) {
Obj _35reg2512 = primCar(l);
pushCont(co, 0, _35clofun3156, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg2512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2523 = __arg1;
Obj _35reg2521= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2524 = primCons(_35reg2521, _35val2523);
__nargs = 2;
__arg1 = _35reg2524;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg2520 = primEQ(l1, Nil);
if (True == _35reg2520) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2521 = primCar(l1);
Obj _35reg2522 = primCdr(l1);
pushCont(co, 3, _35clofun3156, 1, _35reg2521);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg2522;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x = __arg1;
Obj _35reg2527 = primCdr(x);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = _35reg2527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg2530 = primEQ(closureRef(co, 0), x);
Obj _35reg2531 = primNot(_35reg2530);
__nargs = 2;
__arg1 = _35reg2531;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2534 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2535 = primNot(_35val2534);
if (True == _35reg2535) {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35val2533 = __arg1;
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 7, _35clofun3156, 1, n);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val2533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2528 = __arg1;
Obj counts = _35val2528;
Obj _35reg2529 = primCar(counts);
Obj n = _35reg2529;
Obj dif = makeNative(6, _35clofun3156, 1, 1, n);
Obj _35reg2532 = primCdr(counts);
pushCont(co, 8, _35clofun3156, 1, n);
__nargs = 3;
__arg0 = globalRef(intern("filter"));
__arg1 = dif;
__arg2 = _35reg2532;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2526 = __arg1;
Obj pats = _35val2526;
Obj len = makeNative(5, _35clofun3156, 1, 0);
pushCont(co, 9, _35clofun3156, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj rules = __arg1;
pushCont(co, 10, _35clofun3156, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2540 = __arg1;
Obj _35reg2538= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2541 = primCons(_35reg2538, _35val2540);
__nargs = 2;
__arg1 = _35reg2541;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj n = __arg1;
Obj _35reg2537 = primEQ(n, makeNumber(0));
if (True == _35reg2537) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2538 = primGenSym(intern("p"));
Obj _35reg2539 = primSub(n, makeNumber(1));
pushCont(co, 12, _35clofun3156, 1, _35reg2538);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = _35reg2539;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2547 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2548 = primCons(intern("list"), args);
Obj _35reg2549 = primCons(_35reg2548, body);
Obj _35reg2550 = primCons(intern("match"), _35reg2549);
Obj _35reg2551 = primCons(_35reg2550, Nil);
Obj _35reg2552 = primCons(args, _35reg2551);
Obj _35reg2553 = primCons(_35val2547, _35reg2552);
Obj _35reg2554 = primCons(intern("defun"), _35reg2553);
__nargs = 2;
__arg1 = _35reg2554;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3156) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2546 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args = _35val2546;
pushCont(co, 14, _35clofun3156, 2, body, args);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2545 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj nargs = _35val2545;
pushCont(co, 15, _35clofun3156, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#gen-paramenters"));
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2544 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body = _35val2544;
pushCont(co, 16, _35clofun3156, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rules-arg-count"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2543 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun3156, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#extract-rules"));
__arg1 = _35val2543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj exp = __arg1;
pushCont(co, 18, _35clofun3156, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3155(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2429 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2430 = primCons(_35val2429, Nil);
Obj _35reg2431 = primCons(value, _35reg2430);
Obj _35reg2432 = primCons(val, _35reg2431);
Obj _35reg2433 = primCons(intern("let"), _35reg2432);
__nargs = 2;
__arg1 = _35reg2433;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3155) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2435 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2436 = primCons(_35val2435, Nil);
Obj _35reg2437 = primCons(value, _35reg2436);
Obj _35reg2438 = primCons(val, _35reg2437);
Obj _35reg2439 = primCons(intern("let"), _35reg2438);
__nargs = 2;
__arg1 = _35reg2439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3155) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2441 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2442 = primCons(_35val2441, Nil);
Obj _35reg2443 = primCons(value, _35reg2442);
Obj _35reg2444 = primCons(val, _35reg2443);
Obj _35reg2445 = primCons(intern("let"), _35reg2444);
__nargs = 2;
__arg1 = _35reg2445;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3155) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2423 = __arg1;
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules = _35val2423;
Obj _35reg2424 = primIsCons(value);
if (True == _35reg2424) {
Obj _35reg2425 = primCar(value);
Obj _35reg2426 = primEQ(intern("cons"), _35reg2425);
Obj _35reg2427 = primNot(_35reg2426);
if (True == _35reg2427) {
if (True == True) {
Obj _35reg2428 = primGenSym(intern("val"));
Obj val = _35reg2428;
pushCont(co, 0, _35clofun3155, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2434 = primGenSym(intern("val"));
Obj val = _35reg2434;
pushCont(co, 1, _35clofun3155, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2440 = primGenSym(intern("val"));
Obj val = _35reg2440;
pushCont(co, 2, _35clofun3155, 2, value, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val2422 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value = _35val2422;
pushCont(co, 3, _35clofun3155, 1, value);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2421 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun3155, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = _35val2421;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj exp = __arg1;
pushCont(co, 5, _35clofun3155, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2021 = makeNative(8, _35clofun3155, 0, 0);
Obj _35reg2448 = primIsCons(closureRef(co, 0));
if (True == _35reg2448) {
Obj _35reg2449 = primCar(closureRef(co, 0));
Obj x = _35reg2449;
Obj _35reg2450 = primCdr(closureRef(co, 0));
Obj y = _35reg2450;
Obj _35reg2451 = primCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = y;
__arg2 = _35reg2451;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2461 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2462 = primCons(intern("list"), _35val2461);
Obj pat = _35reg2462;
Obj _35reg2463 = primCons(pat, closureRef(co, 2));
Obj _35reg2464 = primCons(act, _35reg2463);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2020 = makeNative(9, _35clofun3155, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2452 = primIsCons(closureRef(co, 0));
if (True == _35reg2452) {
Obj _35reg2453 = primCar(closureRef(co, 0));
Obj _35reg2454 = primEQ(intern("=>"), _35reg2453);
if (True == _35reg2454) {
Obj _35reg2455 = primCdr(closureRef(co, 0));
Obj _35reg2456 = primIsCons(_35reg2455);
if (True == _35reg2456) {
Obj _35reg2457 = primCdr(closureRef(co, 0));
Obj _35reg2458 = primCar(_35reg2457);
Obj act = _35reg2458;
Obj _35reg2459 = primCdr(closureRef(co, 0));
Obj _35reg2460 = primCdr(_35reg2459);
Obj remain = _35reg2460;
pushCont(co, 10, _35clofun3155, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2491 = __arg1;
Obj act= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pred= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2492 = primCons(intern("list"), _35val2491);
Obj pat = _35reg2492;
Obj _35reg2493 = primCons(act, Nil);
Obj _35reg2494 = primCons(pred, _35reg2493);
Obj _35reg2495 = primCons(intern("where"), _35reg2494);
Obj _35reg2496 = primCons(pat, closureRef(co, 2));
Obj _35reg2497 = primCons(_35reg2495, _35reg2496);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#extract-rules1"));
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2019 = makeNative(11, _35clofun3155, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2465 = primIsCons(closureRef(co, 0));
if (True == _35reg2465) {
Obj _35reg2466 = primCar(closureRef(co, 0));
Obj _35reg2467 = primEQ(intern("=>"), _35reg2466);
if (True == _35reg2467) {
Obj _35reg2468 = primCdr(closureRef(co, 0));
Obj _35reg2469 = primIsCons(_35reg2468);
if (True == _35reg2469) {
Obj _35reg2470 = primCdr(closureRef(co, 0));
Obj _35reg2471 = primCar(_35reg2470);
Obj act = _35reg2471;
Obj _35reg2472 = primCdr(closureRef(co, 0));
Obj _35reg2473 = primCdr(_35reg2472);
Obj _35reg2474 = primIsCons(_35reg2473);
if (True == _35reg2474) {
Obj _35reg2475 = primCdr(closureRef(co, 0));
Obj _35reg2476 = primCdr(_35reg2475);
Obj _35reg2477 = primCar(_35reg2476);
Obj _35reg2478 = primEQ(intern("where"), _35reg2477);
if (True == _35reg2478) {
Obj _35reg2479 = primCdr(closureRef(co, 0));
Obj _35reg2480 = primCdr(_35reg2479);
Obj _35reg2481 = primCdr(_35reg2480);
Obj _35reg2482 = primIsCons(_35reg2481);
if (True == _35reg2482) {
Obj _35reg2483 = primCdr(closureRef(co, 0));
Obj _35reg2484 = primCdr(_35reg2483);
Obj _35reg2485 = primCdr(_35reg2484);
Obj _35reg2486 = primCar(_35reg2485);
Obj pred = _35reg2486;
Obj _35reg2487 = primCdr(closureRef(co, 0));
Obj _35reg2488 = primCdr(_35reg2487);
Obj _35reg2489 = primCdr(_35reg2488);
Obj _35reg2490 = primCdr(_35reg2489);
Obj remain = _35reg2490;
pushCont(co, 12, _35clofun3155, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2019;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc2018 = makeNative(13, _35clofun3155, 0, 3, input, current, result);
Obj _35reg2498 = primEQ(Nil, input);
if (True == _35reg2498) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2018;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2504 = __arg1;
Obj _35reg2503= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#rules-patterns"));
__arg1 = _35reg2503;
__arg2 = _35val2504;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2501 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2501) {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2502 = primCar(rules);
Obj _35reg2503 = primCons(_35reg2502, res);
pushCont(co, 16, _35clofun3155, 1, _35reg2503);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 17, _35clofun3155, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg2506 = primEQ(l, Nil);
if (True == _35reg2506) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3155) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2507 = primAdd(i, makeNumber(1));
Obj _35reg2508 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#length-h"));
__arg1 = _35reg2507;
__arg2 = _35reg2508;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3154(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2354 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun3153, 2, cc, _35val2354);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2362 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2361= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2363 = primCons(cc, Nil);
Obj _35reg2364 = primCons(_35reg2363, Nil);
Obj _35reg2365 = primCons(_35val2362, _35reg2364);
Obj _35reg2366 = primCons(_35val2361, _35reg2365);
Obj _35reg2367 = primCons(intern("if"), _35reg2366);
__nargs = 2;
__arg1 = _35reg2367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2361 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3154, 2, cc, _35val2361);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2344 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2344) {
Obj _35reg2345 = primCar(action);
Obj _35reg2346 = primEQ(_35reg2345, intern("where"));
if (True == _35reg2346) {
if (True == True) {
pushCont(co, 19, _35clofun3153, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 0, _35clofun3154, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 2, _35clofun3154, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label4:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg2342 = primCdr(rules);
Obj _35reg2343 = primCar(_35reg2342);
Obj action = _35reg2343;
pushCont(co, 3, _35clofun3154, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2382 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2382;
Obj _35reg2383 = primCons(rest, Nil);
Obj _35reg2384 = primCons(Nil, _35reg2383);
Obj _35reg2385 = primCons(intern("lambda"), _35reg2384);
Obj _35reg2386 = primCons(curr, Nil);
Obj _35reg2387 = primCons(_35reg2385, _35reg2386);
Obj _35reg2388 = primCons(cc, _35reg2387);
Obj _35reg2389 = primCons(intern("let"), _35reg2388);
__nargs = 2;
__arg1 = _35reg2389;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2379 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2379;
Obj _35reg2380 = primCdr(rules);
Obj _35reg2381 = primCdr(_35reg2380);
pushCont(co, 5, _35clofun3154, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg2381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2378 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 6, _35clofun3154, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val2378;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2377 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2377;
pushCont(co, 7, _35clofun3154, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2397 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2397;
Obj _35reg2398 = primCons(rest, Nil);
Obj _35reg2399 = primCons(Nil, _35reg2398);
Obj _35reg2400 = primCons(intern("lambda"), _35reg2399);
Obj _35reg2401 = primCons(curr, Nil);
Obj _35reg2402 = primCons(_35reg2400, _35reg2401);
Obj _35reg2403 = primCons(cc, _35reg2402);
Obj _35reg2404 = primCons(intern("let"), _35reg2403);
__nargs = 2;
__arg1 = _35reg2404;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val2394 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2394;
Obj _35reg2395 = primCdr(rules);
Obj _35reg2396 = primCdr(_35reg2395);
pushCont(co, 9, _35clofun3154, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg2396;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2393 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun3154, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val2393;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2392 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2392;
pushCont(co, 11, _35clofun3154, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2374 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2374) {
if (True == True) {
Obj _35reg2375 = primCar(rules);
Obj pat = _35reg2375;
Obj _35reg2376 = primGenSym(intern("cc"));
Obj cc = _35reg2376;
pushCont(co, 8, _35clofun3154, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2390 = primCar(rules);
Obj pat = _35reg2390;
Obj _35reg2391 = primGenSym(intern("cc"));
Obj cc = _35reg2391;
pushCont(co, 12, _35clofun3154, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val2412 = __arg1;
Obj curr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj rest = _35val2412;
Obj _35reg2413 = primCons(rest, Nil);
Obj _35reg2414 = primCons(Nil, _35reg2413);
Obj _35reg2415 = primCons(intern("lambda"), _35reg2414);
Obj _35reg2416 = primCons(curr, Nil);
Obj _35reg2417 = primCons(_35reg2415, _35reg2416);
Obj _35reg2418 = primCons(cc, _35reg2417);
Obj _35reg2419 = primCons(intern("let"), _35reg2418);
__nargs = 2;
__arg1 = _35reg2419;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2409 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj curr = _35val2409;
Obj _35reg2410 = primCdr(rules);
Obj _35reg2411 = primCdr(_35reg2410);
pushCont(co, 14, _35clofun3154, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#match-helper"));
__arg1 = value;
__arg2 = _35reg2411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2408 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun3154, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = _35val2408;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2407 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj action = _35val2407;
pushCont(co, 16, _35clofun3154, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2372 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2372) {
Obj _35reg2373 = primCdr(rules);
pushCont(co, 13, _35clofun3154, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg2373;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg2405 = primCar(rules);
Obj pat = _35reg2405;
Obj _35reg2406 = primGenSym(intern("cc"));
Obj cc = _35reg2406;
pushCont(co, 17, _35clofun3154, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#extract-rule-action"));
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj _35val2369 = __arg1;
Obj rules= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj value= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2369) {
Obj _35reg2370 = primCons(makeCString("no match-help found!"), Nil);
Obj _35reg2371 = primCons(intern("error"), _35reg2370);
__nargs = 2;
__arg1 = _35reg2371;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 18, _35clofun3154, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 19, _35clofun3154, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3153(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2277 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2277;
pushCont(co, 20, _35clofun3152, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2276 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2276;
pushCont(co, 0, _35clofun3153, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2286 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2280= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2287 = primCons(cc, Nil);
Obj _35reg2288 = primCons(_35reg2287, Nil);
Obj _35reg2289 = primCons(_35val2286, _35reg2288);
Obj _35reg2290 = primCons(_35reg2280, _35reg2289);
Obj _35reg2291 = primCons(intern("if"), _35reg2290);
__nargs = 2;
__arg1 = _35reg2291;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2285 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2282= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2280= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun3153, 2, cc, _35reg2280);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg2282;
__arg3 = _35val2285;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2294 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2294;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2293 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2293;
pushCont(co, 4, _35clofun3153, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2292 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2292;
pushCont(co, 5, _35clofun3153, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2302 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2296= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2303 = primCons(cc, Nil);
Obj _35reg2304 = primCons(_35reg2303, Nil);
Obj _35reg2305 = primCons(_35val2302, _35reg2304);
Obj _35reg2306 = primCons(_35reg2296, _35reg2305);
Obj _35reg2307 = primCons(intern("if"), _35reg2306);
__nargs = 2;
__arg1 = _35reg2307;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2301 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2298= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2296= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun3153, 2, cc, _35reg2296);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg2298;
__arg3 = _35val2301;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2256 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y = _35val2256;
Obj _35reg2257 = primIsCons(expr);
if (True == _35reg2257) {
Obj _35reg2258 = primCar(expr);
Obj _35reg2259 = primEQ(_35reg2258, intern("cons"));
if (True == _35reg2259) {
if (True == True) {
pushCont(co, 17, _35clofun3152, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2263 = primCons(expr, Nil);
Obj _35reg2264 = primCons(intern("cons?"), _35reg2263);
Obj _35reg2265 = primCons(expr, Nil);
Obj _35reg2266 = primCons(intern("car"), _35reg2265);
Obj _35reg2267 = primCons(expr, Nil);
Obj _35reg2268 = primCons(intern("cdr"), _35reg2267);
pushCont(co, 19, _35clofun3152, 4, x, _35reg2266, cc, _35reg2264);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg2268;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 1, _35clofun3153, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2279 = primCons(expr, Nil);
Obj _35reg2280 = primCons(intern("cons?"), _35reg2279);
Obj _35reg2281 = primCons(expr, Nil);
Obj _35reg2282 = primCons(intern("car"), _35reg2281);
Obj _35reg2283 = primCons(expr, Nil);
Obj _35reg2284 = primCons(intern("cdr"), _35reg2283);
pushCont(co, 3, _35clofun3153, 4, x, _35reg2282, cc, _35reg2280);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg2284;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 6, _35clofun3153, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2295 = primCons(expr, Nil);
Obj _35reg2296 = primCons(intern("cons?"), _35reg2295);
Obj _35reg2297 = primCons(expr, Nil);
Obj _35reg2298 = primCons(intern("car"), _35reg2297);
Obj _35reg2299 = primCons(expr, Nil);
Obj _35reg2300 = primCons(intern("cdr"), _35reg2299);
pushCont(co, 8, _35clofun3153, 4, x, _35reg2298, cc, _35reg2296);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = _35reg2300;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj _35val2255 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj x = _35val2255;
pushCont(co, 9, _35clofun3153, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 10, _35clofun3153, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2309 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2309) {
Obj _35reg2310 = primIsSymbol(x);
Obj _35reg2311 = primNot(_35reg2310);
if (True == _35reg2311) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label13:
{
Obj x = __arg1;
pushCont(co, 12, _35clofun3153, 1, x);
__nargs = 2;
__arg0 = globalRef(intern("atom?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2340 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = _35val2340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2327 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2327) {
Obj _35reg2328 = primCar(pat);
Obj _35reg2329 = primEQ(_35reg2328, intern("quote"));
if (True == _35reg2329) {
Obj _35reg2330 = primCons(expr, Nil);
Obj _35reg2331 = primCons(pat, _35reg2330);
Obj _35reg2332 = primCons(intern("="), _35reg2331);
Obj _35reg2333 = primCons(cc, Nil);
Obj _35reg2334 = primCons(_35reg2333, Nil);
Obj _35reg2335 = primCons(body, _35reg2334);
Obj _35reg2336 = primCons(_35reg2332, _35reg2335);
Obj _35reg2337 = primCons(intern("if"), _35reg2336);
__nargs = 2;
__arg1 = _35reg2337;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2338 = primCar(pat);
Obj _35reg2339 = primEQ(_35reg2338, intern("cons"));
if (True == _35reg2339) {
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match-cons-expander"));
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 14, _35clofun3153, 0);
__nargs = 3;
__arg0 = globalRef(intern("str"));
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2312 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2312) {
Obj _35reg2313 = primEQ(pat, expr);
if (True == _35reg2313) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2314 = primCons(expr, Nil);
Obj _35reg2315 = primCons(pat, _35reg2314);
Obj _35reg2316 = primCons(intern("="), _35reg2315);
Obj _35reg2317 = primCons(cc, Nil);
Obj _35reg2318 = primCons(_35reg2317, Nil);
Obj _35reg2319 = primCons(body, _35reg2318);
Obj _35reg2320 = primCons(_35reg2316, _35reg2319);
Obj _35reg2321 = primCons(intern("if"), _35reg2320);
__nargs = 2;
__arg1 = _35reg2321;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg2322 = primIsSymbol(pat);
if (True == _35reg2322) {
Obj _35reg2323 = primCons(body, Nil);
Obj _35reg2324 = primCons(expr, _35reg2323);
Obj _35reg2325 = primCons(pat, _35reg2324);
Obj _35reg2326 = primCons(intern("let"), _35reg2325);
__nargs = 2;
__arg1 = _35reg2326;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 15, _35clofun3153, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
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
Obj literal_63 = makeNative(13, _35clofun3153, 1, 0);
pushCont(co, 16, _35clofun3153, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2348 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2347= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2349 = primCons(cc, Nil);
Obj _35reg2350 = primCons(_35reg2349, Nil);
Obj _35reg2351 = primCons(_35val2348, _35reg2350);
Obj _35reg2352 = primCons(_35val2347, _35reg2351);
Obj _35reg2353 = primCons(intern("if"), _35reg2352);
__nargs = 2;
__arg1 = _35reg2353;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val2347 = __arg1;
Obj action= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun3153, 2, cc, _35val2347);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2355 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2354= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2356 = primCons(cc, Nil);
Obj _35reg2357 = primCons(_35reg2356, Nil);
Obj _35reg2358 = primCons(_35val2355, _35reg2357);
Obj _35reg2359 = primCons(_35val2354, _35reg2358);
Obj _35reg2360 = primCons(intern("if"), _35reg2359);
__nargs = 2;
__arg1 = _35reg2360;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3152(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2205 = __arg1;
Obj _35val2204= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2203= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2206 = primCons(intern("cond"), _35val2205);
Obj _35reg2207 = primCons(_35reg2206, Nil);
Obj _35reg2208 = primCons(_35val2204, _35reg2207);
Obj _35reg2209 = primCons(_35reg2203, _35reg2208);
Obj _35reg2210 = primCons(intern("if"), _35reg2209);
__nargs = 2;
__arg1 = _35reg2210;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val2204 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2203= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3152, 2, _35val2204, _35reg2203);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2202 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj curr = _35val2202;
Obj _35reg2203 = primCar(curr);
pushCont(co, 1, _35clofun3152, 2, exp, _35reg2203);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg2198 = primCdr(exp);
Obj _35reg2199 = primEQ(Nil, _35reg2198);
if (True == _35reg2199) {
Obj _35reg2200 = primCons(makeCString("no cond match"), Nil);
Obj _35reg2201 = primCons(intern("error"), _35reg2200);
__nargs = 2;
__arg1 = _35reg2201;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, _35clofun3152, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2216 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val2216;
Obj _35reg2217 = primEQ(more, True);
if (True == _35reg2217) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2218 = primCar(l);
Obj _35reg2219 = primCons(more, Nil);
Obj _35reg2220 = primCons(True, _35reg2219);
Obj _35reg2221 = primCons(_35reg2218, _35reg2220);
Obj _35reg2222 = primCons(intern("if"), _35reg2221);
__nargs = 2;
__arg1 = _35reg2222;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj l = __arg1;
Obj _35reg2212 = primEQ(l, Nil);
if (True == _35reg2212) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2213 = primCar(l);
Obj _35reg2214 = primEQ(_35reg2213, True);
if (True == _35reg2214) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2215 = primCdr(l);
pushCont(co, 4, _35clofun3152, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label6:
{
Obj exp = __arg1;
Obj _35reg2224 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-or"));
__arg1 = _35reg2224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2230 = __arg1;
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj more = _35val2230;
Obj _35reg2231 = primEQ(more, False);
if (True == _35reg2231) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2232 = primCar(l);
Obj _35reg2233 = primCons(False, Nil);
Obj _35reg2234 = primCons(more, _35reg2233);
Obj _35reg2235 = primCons(_35reg2232, _35reg2234);
Obj _35reg2236 = primCons(intern("if"), _35reg2235);
__nargs = 2;
__arg1 = _35reg2236;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj l = __arg1;
Obj _35reg2226 = primEQ(Nil, l);
if (True == _35reg2226) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2227 = primCar(l);
Obj _35reg2228 = primEQ(_35reg2227, False);
if (True == _35reg2228) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2229 = primCdr(l);
pushCont(co, 7, _35clofun3152, 1, l);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label9:
{
Obj exp = __arg1;
Obj _35reg2238 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-and"));
__arg1 = _35reg2238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x = __arg1;
Obj _35reg2240 = primEQ(x, True);
if (True == _35reg2240) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2241 = primEQ(x, False);
if (True == _35reg2241) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label11:
{
Obj _35val2248 = __arg1;
Obj _35reg2246= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2249 = primCons(_35val2248, Nil);
Obj _35reg2250 = primCons(_35reg2246, _35reg2249);
Obj _35reg2251 = primCons(intern("cons"), _35reg2250);
__nargs = 2;
__arg1 = _35reg2251;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2244 = __arg1;
Obj pat= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2244) {
Obj _35reg2245 = primCar(pat);
__nargs = 2;
__arg1 = _35reg2245;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2246 = primCar(pat);
Obj _35reg2247 = primCdr(pat);
pushCont(co, 11, _35clofun3152, 1, _35reg2246);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg2247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj pat = __arg1;
Obj _35reg2243 = primCdr(pat);
pushCont(co, 12, _35clofun3152, 1, pat);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
Obj _35reg2253 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rcons1"));
__arg1 = _35reg2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2262 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2262;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2261 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e2 = _35val2261;
pushCont(co, 15, _35clofun3152, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2260 = __arg1;
Obj expr= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj e1 = _35val2260;
pushCont(co, 16, _35clofun3152, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2270 = __arg1;
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2264= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2271 = primCons(cc, Nil);
Obj _35reg2272 = primCons(_35reg2271, Nil);
Obj _35reg2273 = primCons(_35val2270, _35reg2272);
Obj _35reg2274 = primCons(_35reg2264, _35reg2273);
Obj _35reg2275 = primCons(intern("if"), _35reg2274);
__nargs = 2;
__arg1 = _35reg2275;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val2269 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2266= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2264= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3152, 2, cc, _35reg2264);
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = _35reg2266;
__arg3 = _35val2269;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2278 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cc= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(intern("cora/init#match1"));
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2278;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3151(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2140 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun3150, 1, _35val2140);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp1 = __arg1;
Obj _35reg2148 = primEQ(exp1, closureRef(co, 0));
if (True == _35reg2148) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/init#macroexpand-boot"));
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2149 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(1, _35clofun3151, 1, 1, exp);
__arg1 = _35val2149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
Obj _35reg2134 = primIsCons(exp);
if (True == _35reg2134) {
Obj _35reg2135 = primCar(exp);
Obj _35reg2136 = primEQ(_35reg2135, globalRef(intern("*protect-symbol*")));
if (True == _35reg2136) {
Obj _35reg2137 = primCdr(exp);
__nargs = 2;
__arg1 = _35reg2137;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2138 = primCar(exp);
Obj _35reg2139 = primEQ(_35reg2138, intern("lambda"));
if (True == _35reg2139) {
pushCont(co, 0, _35clofun3151, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2146 = primCar(exp);
Obj _35reg2147 = primEQ(_35reg2146, intern("quote"));
if (True == _35reg2147) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, _35clofun3151, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand1"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35val2156 = __arg1;
Obj _35val2155= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2154= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2157 = primCons(_35val2155, _35val2156);
Obj _35reg2158 = primCons(intern("lambda"), _35reg2157);
Obj _35reg2159 = primCons(_35reg2158, Nil);
Obj _35reg2160 = primCons(_35reg2154, _35reg2159);
Obj _35reg2161 = primCons(intern("cora/init#add-to-*macros*"), _35reg2160);
__nargs = 2;
__arg1 = _35reg2161;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2155 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2154= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun3151, 2, _35val2155, _35reg2154);
__nargs = 2;
__arg0 = globalRef(intern("cdddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2152 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2153 = primCons(_35val2152, Nil);
Obj _35reg2154 = primCons(intern("quote"), _35reg2153);
pushCont(co, 5, _35clofun3151, 2, exp, _35reg2154);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
pushCont(co, 6, _35clofun3151, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
Obj _35reg2164 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg2164;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2168 = __arg1;
Obj _35val2167= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2166= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2169 = primCons(_35val2168, Nil);
Obj _35reg2170 = primCons(_35val2167, _35reg2169);
Obj _35reg2171 = primCons(intern("lambda"), _35reg2170);
Obj _35reg2172 = primCons(_35reg2171, Nil);
Obj _35reg2173 = primCons(_35val2166, _35reg2172);
Obj _35reg2174 = primCons(intern("def"), _35reg2173);
__nargs = 2;
__arg1 = _35reg2174;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val2167 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2166= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3151, 2, _35val2167, _35val2166);
__nargs = 2;
__arg0 = globalRef(intern("cadddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2166 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun3151, 2, exp, _35val2166);
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj exp = __arg1;
pushCont(co, 11, _35clofun3151, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg2176 = primIsCons(l);
if (True == _35reg2176) {
Obj _35reg2177 = primCar(l);
Obj _35reg2178 = primEQ(_35reg2177, x);
if (True == _35reg2178) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2179 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = _35reg2179;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label14:
{
Obj x = __arg1;
Obj _35reg2181 = primIsCons(x);
Obj _35reg2182 = primNot(_35reg2181);
__nargs = 2;
__arg1 = _35reg2182;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2190 = __arg1;
Obj _35val2188= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2187= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2191 = primCons(_35val2190, Nil);
Obj _35reg2192 = primCons(_35val2188, _35reg2191);
Obj _35reg2193 = primCons(_35reg2187, _35reg2192);
Obj _35reg2194 = primCons(intern("let"), _35reg2193);
__nargs = 2;
__arg1 = _35reg2194;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2189 = __arg1;
Obj _35val2188= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2187= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3151, 2, _35val2188, _35reg2187);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35val2189;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2188 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2187= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3151, 2, _35val2188, _35reg2187);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2185 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2185) {
Obj _35reg2186 = primCar(exp);
__nargs = 2;
__arg1 = _35reg2186;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2187 = primCar(exp);
pushCont(co, 17, _35clofun3151, 2, exp, _35reg2187);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj exp = __arg1;
Obj _35reg2184 = primCdr(exp);
pushCont(co, 18, _35clofun3151, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35reg2184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
Obj _35reg2196 = primCdr(exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#rewrite-let"));
__arg1 = _35reg2196;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3150(struct Cora* co){
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
Obj _35reg2062 = primEQ(x, Nil);
__nargs = 2;
__arg1 = _35reg2062;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj _35reg2064 = primCdr(x);
Obj _35reg2065 = primCar(_35reg2064);
__nargs = 2;
__arg1 = _35reg2065;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x = __arg1;
Obj _35reg2067 = primCar(x);
Obj _35reg2068 = primCar(_35reg2067);
__nargs = 2;
__arg1 = _35reg2068;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x = __arg1;
Obj _35reg2070 = primCar(x);
Obj _35reg2071 = primCdr(_35reg2070);
__nargs = 2;
__arg1 = _35reg2071;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj _35reg2073 = primCdr(x);
Obj _35reg2074 = primCdr(_35reg2073);
__nargs = 2;
__arg1 = _35reg2074;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj _35reg2076 = primCdr(x);
Obj _35reg2077 = primCdr(_35reg2076);
Obj _35reg2078 = primCar(_35reg2077);
__nargs = 2;
__arg1 = _35reg2078;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x = __arg1;
Obj _35reg2080 = primCdr(x);
Obj _35reg2081 = primCdr(_35reg2080);
Obj _35reg2082 = primCdr(_35reg2081);
Obj _35reg2083 = primCar(_35reg2082);
__nargs = 2;
__arg1 = _35reg2083;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x = __arg1;
Obj _35reg2085 = primCdr(x);
Obj _35reg2086 = primCdr(_35reg2085);
Obj _35reg2087 = primCdr(_35reg2086);
__nargs = 2;
__arg1 = _35reg2087;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2092 = __arg1;
Obj _35reg2090= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2093 = primCons(_35val2092, Nil);
Obj _35reg2094 = primCons(_35reg2090, _35reg2093);
Obj _35reg2095 = primCons(intern("cons"), _35reg2094);
__nargs = 2;
__arg1 = _35reg2095;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj exp = __arg1;
Obj _35reg2089 = primIsCons(exp);
if (True == _35reg2089) {
Obj _35reg2090 = primCar(exp);
Obj _35reg2091 = primCdr(exp);
pushCont(co, 8, _35clofun3150, 1, _35reg2090);
__nargs = 2;
__arg0 = globalRef(intern("rcons"));
__arg1 = _35reg2091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj x = __arg1;
Obj _35reg2097 = primIsCons(x);
__nargs = 2;
__arg1 = _35reg2097;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg2099 = primIsCons(l);
if (True == _35reg2099) {
Obj _35reg2100 = primCar(l);
Obj _35reg2101 = primCons(_35reg2100, res);
Obj _35reg2102 = primCdr(l);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#reverse-h"));
__arg1 = _35reg2101;
__arg2 = _35reg2102;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label12:
{
Obj _35val2108 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj l= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2109 = primCons(_35val2108, res);
Obj _35reg2110 = primCdr(l);
__nargs = 4;
__arg0 = globalRef(intern("map-h"));
__arg1 = _35reg2109;
__arg2 = f;
__arg3 = _35reg2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg2106 = primIsCons(l);
if (True == _35reg2106) {
Obj _35reg2107 = primCar(l);
pushCont(co, 12, _35clofun3150, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg2116 = primCons(n, v);
Obj _35reg2117 = primCons(_35reg2116, globalRef(intern("*macros*")));
Obj _35reg2118 = primSet(co, intern("*macros*"), _35reg2117);
__nargs = 2;
__arg1 = _35reg2118;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj item = __arg1;
Obj _35reg2121 = primIsCons(closureRef(co, 0));
if (True == _35reg2121) {
Obj _35reg2122 = primCar(closureRef(co, 0));
Obj _35reg2123 = primCar(item);
Obj _35reg2124 = primEQ(_35reg2122, _35reg2123);
if (True == _35reg2124) {
if (True == True) {
Obj _35reg2125 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2125;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2126 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2127 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2127;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2128 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2129 = primCdr(item);
__nargs = 2;
__arg0 = _35reg2129;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2130 = primCdr(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(intern("cora/init#macroexpand1-h"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2130;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label17:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg2120 = primEQ(Nil, macros);
if (True == _35reg2120) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2131 = primCar(macros);
__nargs = 2;
__arg0 = makeNative(16, _35clofun3150, 1, 2, exp, macros);
__arg1 = _35reg2131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2142 = __arg1;
Obj _35val2140= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2143 = primCons(_35val2142, Nil);
Obj _35reg2144 = primCons(_35val2140, _35reg2143);
Obj _35reg2145 = primCons(intern("lambda"), _35reg2144);
__nargs = 2;
__arg1 = _35reg2145;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2141 = __arg1;
Obj _35val2140= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun3150, 1, _35val2140);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand-boot"));
__arg1 = _35val2141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

