#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun3166(struct Cora* co);
void _35clofun3165(struct Cora* co);
void _35clofun3164(struct Cora* co);
void _35clofun3163(struct Cora* co);
void _35clofun3162(struct Cora* co);
void _35clofun3161(struct Cora* co);
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
void _35clofun3149(struct Cora* co);
void _35clofun3148(struct Cora* co);
void _35clofun3147(struct Cora* co);
void _35clofun3146(struct Cora* co);
void _35clofun3145(struct Cora* co);
void _35clofun3144(struct Cora* co);
void _35clofun3143(struct Cora* co);


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
pushCont(co, 19, _35clofun3166, 0);
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

void _35clofun3166(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35tmp1343 = __arg1;
Obj _35reg3096 = primIsSymbol(_35tmp1343);
__nargs = 2;
__arg1 = _35reg3096;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35tmp1344 = __arg1;
Obj _35reg3098 = primNot(_35tmp1344);
__nargs = 2;
__arg1 = _35reg3098;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35tmp1345 = __arg1;
Obj _35reg3100 = primIsString(_35tmp1345);
__nargs = 2;
__arg1 = _35reg3100;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val3110 = __arg1;
Obj _35val3108= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#apply"));
__arg1 = _35val3108;
__arg2 = _35val3110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3108 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3109 = primCdr(exp);
pushCont(co, 3, _35clofun3166, 1, _35val3108);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3118 = __arg1;
Obj _35val3116= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#apply"));
__arg1 = _35val3116;
__arg2 = _35val3118;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3116 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3117 = primCdr(exp);
pushCont(co, 5, _35clofun3166, 1, _35val3116);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3117;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3126 = __arg1;
Obj _35val3124= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#apply"));
__arg1 = _35val3124;
__arg2 = _35val3126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3124 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3125 = primCdr(exp);
pushCont(co, 7, _35clofun3166, 1, _35val3124);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3125;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3134 = __arg1;
Obj _35val3132= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#apply"));
__arg1 = _35val3132;
__arg2 = _35val3134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3132 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3133 = primCdr(exp);
pushCont(co, 9, _35clofun3166, 1, _35val3132);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3133;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3141 = __arg1;
Obj _35val3139= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#apply"));
__arg1 = _35val3139;
__arg2 = _35val3141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3139 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3140 = primCdr(exp);
pushCont(co, 11, _35clofun3166, 1, _35val3139);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3127 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3127) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3128 = primIsCons(exp);
if (True == _35reg3128) {
Obj _35reg3129 = primCar(exp);
Obj _35reg3130 = primEQ(_35reg3129, intern("quote"));
if (True == _35reg3130) {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3131 = primCar(exp);
pushCont(co, 10, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3135 = primIsCons(exp);
if (True == _35reg3135) {
Obj _35reg3136 = primCar(exp);
Obj _35reg3137 = primEQ(_35reg3136, intern("quote"));
if (True == _35reg3137) {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3138 = primCar(exp);
pushCont(co, 12, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3138;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label14:
{
Obj _35val3119 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3119) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3120 = primIsCons(exp);
if (True == _35reg3120) {
Obj _35reg3121 = primCar(exp);
Obj _35reg3122 = primEQ(_35reg3121, intern("quote"));
if (True == _35reg3122) {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3123 = primCar(exp);
pushCont(co, 8, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 13, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val3103 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3103) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3104 = primIsCons(exp);
if (True == _35reg3104) {
Obj _35reg3105 = primCar(exp);
Obj _35reg3106 = primEQ(_35reg3105, intern("quote"));
if (True == _35reg3106) {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3107 = primCar(exp);
pushCont(co, 4, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
Obj _35reg3111 = primIsString(exp);
if (True == _35reg3111) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3112 = primIsCons(exp);
if (True == _35reg3112) {
Obj _35reg3113 = primCar(exp);
Obj _35reg3114 = primEQ(_35reg3113, intern("quote"));
if (True == _35reg3114) {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3115 = primCar(exp);
pushCont(co, 6, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3115;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 14, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#boolean?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj exp = __arg1;
Obj _35reg3102 = primIsSymbol(exp);
if (True == _35reg3102) {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#value"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 15, _35clofun3166, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2942 = __arg1;
Obj _35reg2947 = primSet(co, intern("cora/lib/toc#compile"), makeNative(10, _35clofun3162, 1, 0));
Obj _35reg2953 = primSet(co, intern("cora/lib/toc#for-each"), makeNative(14, _35clofun3162, 2, 0));
Obj _35reg2960 = primSet(co, intern("cora/lib/toc#generate-jumptable"), makeNative(18, _35clofun3162, 3, 0));
Obj _35reg2981 = primSet(co, intern("cora/lib/toc#generate-toplevel-group"), makeNative(19, _35clofun3163, 2, 0));
Obj _35reg2988 = primSet(co, intern("cora/lib/toc#generate-c"), makeNative(7, _35clofun3164, 2, 0));
Obj _35reg3020 = primSet(co, intern("cora/lib/toc#handle-import-eagerly"), makeNative(13, _35clofun3164, 1, 0));
Obj _35reg3061 = primSet(co, intern("cora/lib/toc#split-type-and-code"), makeNative(20, _35clofun3164, 4, 0));
Obj _35reg3062 = primSet(co, intern("cora/lib/infer#*typecheck*"), False);
Obj _35reg3065 = primSet(co, intern("cora/lib/toc#preprocess"), makeNative(2, _35clofun3165, 2, 0));
Obj _35reg3071 = primSet(co, intern("cora/lib/toc#compile-to-c"), makeNative(8, _35clofun3165, 3, 0));
Obj _35reg3073 = primSet(co, intern("set"), makeNative(9, _35clofun3165, 2, 0));
Obj _35reg3075 = primSet(co, intern("car"), makeNative(10, _35clofun3165, 1, 0));
Obj _35reg3077 = primSet(co, intern("cdr"), makeNative(11, _35clofun3165, 1, 0));
Obj _35reg3079 = primSet(co, intern("cons"), makeNative(12, _35clofun3165, 2, 0));
Obj _35reg3081 = primSet(co, intern("+"), makeNative(13, _35clofun3165, 2, 0));
Obj _35reg3083 = primSet(co, intern("-"), makeNative(14, _35clofun3165, 2, 0));
Obj _35reg3085 = primSet(co, intern("*"), makeNative(15, _35clofun3165, 2, 0));
Obj _35reg3087 = primSet(co, intern("/"), makeNative(16, _35clofun3165, 2, 0));
Obj _35reg3089 = primSet(co, intern("="), makeNative(17, _35clofun3165, 2, 0));
Obj _35reg3091 = primSet(co, intern(">"), makeNative(18, _35clofun3165, 2, 0));
Obj _35reg3093 = primSet(co, intern("<"), makeNative(19, _35clofun3165, 2, 0));
Obj _35reg3095 = primSet(co, intern("gensym"), makeNative(20, _35clofun3165, 1, 0));
Obj _35reg3097 = primSet(co, intern("symbol?"), makeNative(0, _35clofun3166, 1, 0));
Obj _35reg3099 = primSet(co, intern("not"), makeNative(1, _35clofun3166, 1, 0));
Obj _35reg3101 = primSet(co, intern("string?"), makeNative(2, _35clofun3166, 1, 0));
Obj _35reg3142 = primSet(co, intern("cora/lib/toc#eval0"), makeNative(16, _35clofun3166, 1, 0));
__nargs = 2;
__arg1 = _35reg3142;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3166) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1347 = __arg1;
Obj _35reg1348 = primSet(co, intern("cora/lib/toc#*ns-export*"), Nil);
Obj _35reg1363 = primSet(co, intern("cora/lib/toc#assq"), makeNative(3, _35clofun3143, 2, 0));
Obj _35reg1369 = primSet(co, intern("cora/lib/toc#foldl"), makeNative(7, _35clofun3143, 3, 0));
Obj _35reg1379 = primSet(co, intern("cora/lib/toc#pos-in-list0"), makeNative(11, _35clofun3143, 3, 0));
Obj _35reg1380 = primSet(co, intern("cora/lib/toc#index"), makeNative(12, _35clofun3143, 2, 0));
Obj _35reg1387 = primSet(co, intern("cora/lib/toc#exist-in-env"), makeNative(16, _35clofun3143, 2, 0));
Obj _35reg1388 = primCons(intern("primSet"), Nil);
Obj _35reg1389 = primCons(makeNumber(2), _35reg1388);
Obj _35reg1390 = primCons(intern("set"), _35reg1389);
Obj _35reg1391 = primCons(intern("primCar"), Nil);
Obj _35reg1392 = primCons(makeNumber(1), _35reg1391);
Obj _35reg1393 = primCons(intern("car"), _35reg1392);
Obj _35reg1394 = primCons(intern("primCdr"), Nil);
Obj _35reg1395 = primCons(makeNumber(1), _35reg1394);
Obj _35reg1396 = primCons(intern("cdr"), _35reg1395);
Obj _35reg1397 = primCons(intern("primCons"), Nil);
Obj _35reg1398 = primCons(makeNumber(2), _35reg1397);
Obj _35reg1399 = primCons(intern("cons"), _35reg1398);
Obj _35reg1400 = primCons(intern("primIsCons"), Nil);
Obj _35reg1401 = primCons(makeNumber(1), _35reg1400);
Obj _35reg1402 = primCons(intern("cons?"), _35reg1401);
Obj _35reg1403 = primCons(intern("primAdd"), Nil);
Obj _35reg1404 = primCons(makeNumber(2), _35reg1403);
Obj _35reg1405 = primCons(intern("+"), _35reg1404);
Obj _35reg1406 = primCons(intern("primSub"), Nil);
Obj _35reg1407 = primCons(makeNumber(2), _35reg1406);
Obj _35reg1408 = primCons(intern("-"), _35reg1407);
Obj _35reg1409 = primCons(intern("primMul"), Nil);
Obj _35reg1410 = primCons(makeNumber(2), _35reg1409);
Obj _35reg1411 = primCons(intern("*"), _35reg1410);
Obj _35reg1412 = primCons(intern("primDiv"), Nil);
Obj _35reg1413 = primCons(makeNumber(2), _35reg1412);
Obj _35reg1414 = primCons(intern("/"), _35reg1413);
Obj _35reg1415 = primCons(intern("primEQ"), Nil);
Obj _35reg1416 = primCons(makeNumber(2), _35reg1415);
Obj _35reg1417 = primCons(intern("="), _35reg1416);
Obj _35reg1418 = primCons(intern("primGT"), Nil);
Obj _35reg1419 = primCons(makeNumber(2), _35reg1418);
Obj _35reg1420 = primCons(intern(">"), _35reg1419);
Obj _35reg1421 = primCons(intern("primLT"), Nil);
Obj _35reg1422 = primCons(makeNumber(2), _35reg1421);
Obj _35reg1423 = primCons(intern("<"), _35reg1422);
Obj _35reg1424 = primCons(intern("primGenSym"), Nil);
Obj _35reg1425 = primCons(makeNumber(1), _35reg1424);
Obj _35reg1426 = primCons(intern("gensym"), _35reg1425);
Obj _35reg1427 = primCons(intern("primIsSymbol"), Nil);
Obj _35reg1428 = primCons(makeNumber(1), _35reg1427);
Obj _35reg1429 = primCons(intern("symbol?"), _35reg1428);
Obj _35reg1430 = primCons(intern("primNot"), Nil);
Obj _35reg1431 = primCons(makeNumber(1), _35reg1430);
Obj _35reg1432 = primCons(intern("not"), _35reg1431);
Obj _35reg1433 = primCons(intern("primIsNumber"), Nil);
Obj _35reg1434 = primCons(makeNumber(1), _35reg1433);
Obj _35reg1435 = primCons(intern("integer?"), _35reg1434);
Obj _35reg1436 = primCons(intern("primIsString"), Nil);
Obj _35reg1437 = primCons(makeNumber(1), _35reg1436);
Obj _35reg1438 = primCons(intern("string?"), _35reg1437);
Obj _35reg1439 = primCons(_35reg1438, Nil);
Obj _35reg1440 = primCons(_35reg1435, _35reg1439);
Obj _35reg1441 = primCons(_35reg1432, _35reg1440);
Obj _35reg1442 = primCons(_35reg1429, _35reg1441);
Obj _35reg1443 = primCons(_35reg1426, _35reg1442);
Obj _35reg1444 = primCons(_35reg1423, _35reg1443);
Obj _35reg1445 = primCons(_35reg1420, _35reg1444);
Obj _35reg1446 = primCons(_35reg1417, _35reg1445);
Obj _35reg1447 = primCons(_35reg1414, _35reg1446);
Obj _35reg1448 = primCons(_35reg1411, _35reg1447);
Obj _35reg1449 = primCons(_35reg1408, _35reg1448);
Obj _35reg1450 = primCons(_35reg1405, _35reg1449);
Obj _35reg1451 = primCons(_35reg1402, _35reg1450);
Obj _35reg1452 = primCons(_35reg1399, _35reg1451);
Obj _35reg1453 = primCons(_35reg1396, _35reg1452);
Obj _35reg1454 = primCons(_35reg1393, _35reg1453);
Obj _35reg1455 = primCons(_35reg1390, _35reg1454);
Obj _35reg1456 = primSet(co, intern("cora/lib/toc#*builtin-prims*"), _35reg1455);
Obj _35reg1460 = primSet(co, intern("cora/lib/toc#builtin?"), makeNative(19, _35clofun3143, 1, 0));
Obj _35reg1463 = primSet(co, intern("cora/lib/toc#builtin->name"), makeNative(1, _35clofun3144, 1, 0));
Obj _35reg1466 = primSet(co, intern("cora/lib/toc#builtin->args"), makeNative(4, _35clofun3144, 1, 0));
Obj _35reg1471 = primSet(co, intern("cora/lib/toc#temp-list"), makeNative(7, _35clofun3144, 2, 0));
Obj _35reg1498 = primSet(co, intern("cora/lib/toc#lookup-var-h"), makeNative(2, _35clofun3145, 3, 0));
Obj _35reg1705 = primSet(co, intern("cora/lib/toc#parse"), makeNative(0, _35clofun3147, 4, 0));
Obj _35reg1716 = primSet(co, intern("cora/lib/toc#union"), makeNative(6, _35clofun3147, 2, 0));
Obj _35reg1727 = primSet(co, intern("cora/lib/toc#diff"), makeNative(12, _35clofun3147, 2, 0));
Obj _35reg1778 = primSet(co, intern("cora/lib/toc#convert-protect?"), makeNative(19, _35clofun3147, 1, 0));
Obj _35reg1953 = primSet(co, intern("cora/lib/toc#free-vars"), makeNative(0, _35clofun3149, 1, 0));
Obj _35reg2026 = primSet(co, intern("cora/lib/toc#closure-convert"), makeNative(15, _35clofun3149, 2, 0));
Obj _35reg2029 = primSet(co, intern("cora/lib/toc#id"), makeNative(16, _35clofun3149, 1, 0));
Obj _35reg2166 = primSet(co, intern("cora/lib/toc#tailify"), makeNative(13, _35clofun3150, 2, 0));
Obj _35reg2213 = primSet(co, intern("cora/lib/toc#tailify-list"), makeNative(2, _35clofun3151, 3, 0));
Obj _35reg2292 = primSet(co, intern("cora/lib/toc#explicit-stack"), makeNative(20, _35clofun3151, 2, 0));
Obj _35reg2468 = primSet(co, intern("cora/lib/toc#collect-lambda"), makeNative(13, _35clofun3153, 2, 0));
Obj _35reg2481 = primSet(co, intern("cora/lib/toc#append-result"), makeNative(19, _35clofun3153, 5, 0));
Obj _35reg2488 = primSet(co, intern("cora/lib/toc#wrap-var"), makeNative(0, _35clofun3154, 2, 0));
Obj _35reg2508 = primSet(co, intern("cora/lib/toc#generate-call-list"), makeNative(14, _35clofun3154, 4, 0));
Obj _35reg2778 = primSet(co, intern("cora/lib/toc#generate-inst"), makeNative(17, _35clofun3158, 4, 0));
Obj _35reg2801 = primSet(co, intern("cora/lib/toc#generate-cont"), makeNative(9, _35clofun3159, 3, 0));
Obj _35reg2810 = primSet(co, intern("cora/lib/toc#generate-inst-list-h"), makeNative(15, _35clofun3159, 5, 0));
Obj _35reg2811 = primSet(co, intern("cora/lib/toc#generate-inst-list"), makeNative(16, _35clofun3159, 4, 0));
Obj _35reg2816 = primSet(co, intern("cora/lib/toc#code-gen-func-declare"), makeNative(20, _35clofun3159, 2, 0));
Obj _35reg2824 = primSet(co, intern("cora/lib/toc#local-from-params"), makeNative(6, _35clofun3160, 3, 0));
Obj _35reg2829 = primSet(co, intern("cora/lib/toc#local-from-cont"), makeNative(11, _35clofun3160, 3, 0));
Obj _35reg2836 = primSet(co, intern("cora/lib/toc#generate-call-args-reverse"), makeNative(15, _35clofun3160, 4, 0));
Obj _35reg2898 = primSet(co, intern("cora/lib/toc#code-gen-toplevel"), makeNative(5, _35clofun3161, 2, 0));
Obj _35reg2899 = primSet(co, intern("cora/lib/toc#parse-pass"), makeNative(6, _35clofun3161, 1, 0));
Obj _35reg2900 = primSet(co, intern("cora/lib/toc#closure-convert-pass"), makeNative(7, _35clofun3161, 1, 0));
Obj _35reg2901 = primSet(co, intern("cora/lib/toc#tailify-pass"), makeNative(8, _35clofun3161, 1, 0));
Obj _35reg2902 = primSet(co, intern("cora/lib/toc#explicit-stack-pass"), makeNative(9, _35clofun3161, 1, 0));
Obj _35reg2932 = primSet(co, intern("cora/lib/toc#collect-lambda-pass"), makeNative(20, _35clofun3161, 1, 0));
Obj _35reg2939 = primSet(co, intern("cora/lib/toc#rewrite-->macro"), makeNative(2, _35clofun3162, 2, 0));
pushCont(co, 17, _35clofun3166, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(5, _35clofun3162, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1346 = __arg1;
pushCont(co, 18, _35clofun3166, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = makeCString("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3166) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3165(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3064 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val3063 = __arg1;
Obj sexp = _35val3063;
pushCont(co, 0, _35clofun3165, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj file_45path = __arg1;
Obj pkg_45str = __arg2;
pushCont(co, 1, _35clofun3165, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#read-file-as-sexp"));
__arg1 = file_45path;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3070 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3069 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val3069;
pushCont(co, 3, _35clofun3165, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3068 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val3068;
pushCont(co, 4, _35clofun3165, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3067 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj input = _35val3067;
pushCont(co, 5, _35clofun3165, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#compile"));
__arg1 = input;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3066 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj sexp1 = _35val3066;
pushCont(co, 6, _35clofun3165, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#macroexpand"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj from = __arg1;
Obj to = __arg2;
Obj pkg_45str = __arg3;
pushCont(co, 7, _35clofun3165, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#preprocess"));
__arg1 = from;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3165) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35tmp1323 = __arg1;
Obj _35tmp1322 = __arg2;
Obj _35reg3072 = primSet(co, _35tmp1323, _35tmp1322);
__nargs = 2;
__arg1 = _35reg3072;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35tmp1324 = __arg1;
Obj _35reg3074 = primCar(_35tmp1324);
__nargs = 2;
__arg1 = _35reg3074;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35tmp1325 = __arg1;
Obj _35reg3076 = primCdr(_35tmp1325);
__nargs = 2;
__arg1 = _35reg3076;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35tmp1327 = __arg1;
Obj _35tmp1326 = __arg2;
Obj _35reg3078 = primCons(_35tmp1327, _35tmp1326);
__nargs = 2;
__arg1 = _35reg3078;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35tmp1329 = __arg1;
Obj _35tmp1328 = __arg2;
Obj _35reg3080 = primAdd(_35tmp1329, _35tmp1328);
__nargs = 2;
__arg1 = _35reg3080;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35tmp1331 = __arg1;
Obj _35tmp1330 = __arg2;
Obj _35reg3082 = primSub(_35tmp1331, _35tmp1330);
__nargs = 2;
__arg1 = _35reg3082;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35tmp1333 = __arg1;
Obj _35tmp1332 = __arg2;
Obj _35reg3084 = primMul(_35tmp1333, _35tmp1332);
__nargs = 2;
__arg1 = _35reg3084;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35tmp1335 = __arg1;
Obj _35tmp1334 = __arg2;
Obj _35reg3086 = primDiv(_35tmp1335, _35tmp1334);
__nargs = 2;
__arg1 = _35reg3086;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35tmp1337 = __arg1;
Obj _35tmp1336 = __arg2;
Obj _35reg3088 = primEQ(_35tmp1337, _35tmp1336);
__nargs = 2;
__arg1 = _35reg3088;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35tmp1339 = __arg1;
Obj _35tmp1338 = __arg2;
Obj _35reg3090 = primGT(_35tmp1339, _35tmp1338);
__nargs = 2;
__arg1 = _35reg3090;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35tmp1341 = __arg1;
Obj _35tmp1340 = __arg2;
Obj _35reg3092 = primLT(_35tmp1341, _35tmp1340);
__nargs = 2;
__arg1 = _35reg3092;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35tmp1342 = __arg1;
Obj _35reg3094 = primGenSym(_35tmp1342);
__nargs = 2;
__arg1 = _35reg3094;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3165) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3164(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2984 = __arg1;
pushCont(co, 20, _35clofun3163, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = closureRef(co, 0);
__arg2 = _35val2984;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj group = __arg1;
pushCont(co, 0, _35clofun3164, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj group = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-toplevel-group"));
__arg1 = closureRef(co, 0);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2987 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(2, _35clofun3164, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2986 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun3164, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2983 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun3164, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(1, _35clofun3164, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2982 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3164, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj to = __arg1;
Obj bc = __arg2;
pushCont(co, 6, _35clofun3164, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1313 = makeNative(8, _35clofun3164, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3164) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val3006 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1312 = makeNative(9, _35clofun3164, 0, 1, closureRef(co, 0));
Obj _35reg2989 = primIsCons(closureRef(co, 0));
if (True == _35reg2989) {
Obj _35reg2990 = primCar(closureRef(co, 0));
Obj _35reg2991 = primIsCons(_35reg2990);
if (True == _35reg2991) {
Obj _35reg2992 = primCar(closureRef(co, 0));
Obj _35reg2993 = primCar(_35reg2992);
Obj _35reg2994 = primEQ(intern("import"), _35reg2993);
if (True == _35reg2994) {
Obj _35reg2995 = primCar(closureRef(co, 0));
Obj _35reg2996 = primCdr(_35reg2995);
Obj _35reg2997 = primIsCons(_35reg2996);
if (True == _35reg2997) {
Obj _35reg2998 = primCar(closureRef(co, 0));
Obj _35reg2999 = primCdr(_35reg2998);
Obj _35reg3000 = primCar(_35reg2999);
Obj pkg = _35reg3000;
Obj _35reg3001 = primCar(closureRef(co, 0));
Obj _35reg3002 = primCdr(_35reg3001);
Obj _35reg3003 = primCdr(_35reg3002);
Obj _35reg3004 = primEQ(Nil, _35reg3003);
if (True == _35reg3004) {
Obj _35reg3005 = primCdr(closureRef(co, 0));
Obj remain = _35reg3005;
pushCont(co, 10, _35clofun3164, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc1311 = makeNative(11, _35clofun3164, 0, 1, closureRef(co, 0));
Obj _35reg3007 = primIsCons(closureRef(co, 0));
if (True == _35reg3007) {
Obj _35reg3008 = primCar(closureRef(co, 0));
Obj _35reg3009 = primEQ(intern("begin"), _35reg3008);
if (True == _35reg3009) {
Obj _35reg3010 = primCdr(closureRef(co, 0));
Obj remain = _35reg3010;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35p1309 = __arg1;
Obj _35cc1310 = makeNative(12, _35clofun3164, 0, 1, _35p1309);
Obj _35reg3011 = primIsCons(_35p1309);
if (True == _35reg3011) {
Obj _35reg3012 = primCar(_35p1309);
Obj _35reg3013 = primEQ(intern("define-library"), _35reg3012);
if (True == _35reg3013) {
Obj _35reg3014 = primCdr(_35p1309);
Obj _35reg3015 = primIsCons(_35reg3014);
if (True == _35reg3015) {
Obj _35reg3016 = primCdr(_35p1309);
Obj _35reg3017 = primCar(_35reg3016);
Obj __ = _35reg3017;
Obj _35reg3018 = primCdr(_35p1309);
Obj _35reg3019 = primCdr(_35reg3018);
Obj remain = _35reg3019;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1310;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1321 = makeNative(14, _35clofun3164, 0, 0);
Obj _35reg3021 = primIsCons(closureRef(co, 0));
if (True == _35reg3021) {
Obj _35reg3022 = primCar(closureRef(co, 0));
Obj exp = _35reg3022;
Obj _35reg3023 = primCdr(closureRef(co, 0));
Obj more = _35reg3023;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3024 = primCons(exp, Nil);
Obj _35reg3025 = primCons(intern("backquote"), _35reg3024);
Obj _35reg3026 = primCons(_35reg3025, Nil);
Obj _35reg3027 = primCons(intern("macroexpand"), _35reg3026);
Obj _35reg3028 = primCons(intern("tvar"), Nil);
Obj _35reg3029 = primCons(Nil, Nil);
Obj _35reg3030 = primCons(Nil, _35reg3029);
Obj _35reg3031 = primCons(_35reg3028, _35reg3030);
Obj _35reg3032 = primCons(_35reg3027, _35reg3031);
Obj _35reg3033 = primCons(intern("cora/lib/infer#check-type"), _35reg3032);
Obj _35reg3034 = primCons(_35reg3033, type);
Obj _35reg3035 = primCons(exp, code);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3034;
__arg3 = _35reg3035;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1321;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc1320 = makeNative(15, _35clofun3164, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3036 = primIsCons(closureRef(co, 0));
if (True == _35reg3036) {
Obj _35reg3037 = primCar(closureRef(co, 0));
Obj _35reg3038 = primIsCons(_35reg3037);
if (True == _35reg3038) {
Obj _35reg3039 = primCar(closureRef(co, 0));
Obj _35reg3040 = primCar(_35reg3039);
Obj _35reg3041 = primEQ(intern(":declare"), _35reg3040);
if (True == _35reg3041) {
Obj _35reg3042 = primCar(closureRef(co, 0));
Obj _35reg3043 = primCdr(_35reg3042);
Obj exp = _35reg3043;
Obj _35reg3044 = primCdr(closureRef(co, 0));
Obj more = _35reg3044;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3045 = primCons(intern("declare"), exp);
Obj _35reg3046 = primCons(_35reg3045, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3046;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35cc1319 = makeNative(16, _35clofun3164, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3047 = primIsCons(closureRef(co, 0));
if (True == _35reg3047) {
Obj _35reg3048 = primCar(closureRef(co, 0));
Obj _35reg3049 = primIsCons(_35reg3048);
if (True == _35reg3049) {
Obj _35reg3050 = primCar(closureRef(co, 0));
Obj _35reg3051 = primCar(_35reg3050);
Obj _35reg3052 = primEQ(intern(":type"), _35reg3051);
if (True == _35reg3052) {
Obj _35reg3053 = primCar(closureRef(co, 0));
Obj _35reg3054 = primCdr(_35reg3053);
Obj exp = _35reg3054;
Obj _35reg3055 = primCdr(closureRef(co, 0));
Obj more = _35reg3055;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3056 = primCons(intern("begin"), exp);
Obj _35reg3057 = primCons(_35reg3056, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3057;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val3060 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val3059= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val3059;
__arg2 = _35val3060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3059 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun3164, 2, k, _35val3059);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35p1314 = __arg1;
Obj _35p1315 = __arg2;
Obj _35p1316 = __arg3;
Obj _35p1317 = co->args[4];
Obj _35cc1318 = makeNative(17, _35clofun3164, 0, 4, _35p1314, _35p1315, _35p1316, _35p1317);
Obj _35reg3058 = primEQ(Nil, _35p1314);
if (True == _35reg3058) {
Obj type = _35p1315;
Obj code = _35p1316;
Obj k = _35p1317;
pushCont(co, 19, _35clofun3164, 2, code, k);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1318;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3164) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3163(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2979 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun3162, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2978 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 0, _35clofun3163, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2977 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 1, _35clofun3163, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2976 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 2, _35clofun3163, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2975 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 3, _35clofun3163, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2974 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun3163, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2973 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3163, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(19, _35clofun3162, 1, 1, to);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2972 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2971 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2970 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3163, 2, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(0);
__arg3 = _35val2970;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2969 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3163, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2968 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2967 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2966 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2965 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2964 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2963 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2962 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2961 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun3163, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val2961;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj to = __arg1;
Obj group = __arg2;
pushCont(co, 18, _35clofun3163, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2985 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 0);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3163) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3162(struct Cora* co){
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
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1304 = makeNative(0, _35clofun3162, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg2933 = primIsCons(closureRef(co, 1));
if (True == _35reg2933) {
Obj _35reg2934 = primCar(closureRef(co, 1));
Obj hd = _35reg2934;
Obj _35reg2935 = primCdr(closureRef(co, 1));
Obj more = _35reg2935;
Obj _35reg2936 = primCons(obj, Nil);
Obj _35reg2937 = primCons(hd, _35reg2936);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = _35reg2937;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1304;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35p1301 = __arg1;
Obj _35p1302 = __arg2;
Obj _35cc1303 = makeNative(1, _35clofun3162, 0, 2, _35p1301, _35p1302);
Obj obj = _35p1301;
Obj _35reg2938 = primEQ(Nil, _35p1302);
if (True == _35reg2938) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3162) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2941 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val2941;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2940 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val2940;
pushCont(co, 3, _35clofun3162, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
pushCont(co, 4, _35clofun3162, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2946 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda-pass"));
__arg1 = _35val2946;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2945 = __arg1;
pushCont(co, 6, _35clofun3162, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack-pass"));
__arg1 = _35val2945;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2944 = __arg1;
pushCont(co, 7, _35clofun3162, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#tailify-pass"));
__arg1 = _35val2944;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2943 = __arg1;
pushCont(co, 8, _35clofun3162, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert-pass"));
__arg1 = _35val2943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj exp = __arg1;
pushCont(co, 9, _35clofun3162, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2951 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1308 = makeNative(11, _35clofun3162, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg2948 = primIsCons(closureRef(co, 1));
if (True == _35reg2948) {
Obj _35reg2949 = primCar(closureRef(co, 1));
Obj x = _35reg2949;
Obj _35reg2950 = primCdr(closureRef(co, 1));
Obj y = _35reg2950;
pushCont(co, 12, _35clofun3162, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1308;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p1305 = __arg1;
Obj _35p1306 = __arg2;
Obj _35cc1307 = makeNative(13, _35clofun3162, 0, 2, _35p1305, _35p1306);
Obj fn = _35p1305;
Obj _35reg2952 = primEQ(Nil, _35p1306);
if (True == _35reg2952) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3162) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2955 = __arg1;
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
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2958 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2959 = primAdd(i, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = _35reg2959;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2957 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 16, _35clofun3162, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg2954 = primEQ(i, makeNumber(0));
if (True == _35reg2954) {
pushCont(co, 15, _35clofun3162, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2956 = primLT(i, n);
if (True == _35reg2956) {
pushCont(co, 17, _35clofun3162, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3162) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label19:
{
Obj x = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-toplevel"));
__arg1 = closureRef(co, 0);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2980 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3162) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3161(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2895 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2896 = primCar(label);
pushCont(co, 20, _35clofun3160, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = _35reg2896;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2894 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun3161, 4, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-cont"));
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2893 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 1, _35clofun3161, 5, actives, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-params"));
__arg2 = w;
__arg3 = makeNumber(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2892 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun3161, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2890 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2891 = primCdr(label);
pushCont(co, 3, _35clofun3161, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2891;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35p1297 = __arg1;
Obj _35p1298 = __arg2;
Obj _35cc1299 = makeNative(19, _35clofun3160, 0, 2, _35p1297, _35p1298);
Obj w = _35p1297;
Obj _35reg2839 = primIsCons(_35p1298);
if (True == _35reg2839) {
Obj _35reg2840 = primCar(_35p1298);
Obj label = _35reg2840;
Obj _35reg2841 = primCdr(_35p1298);
Obj _35reg2842 = primIsCons(_35reg2841);
if (True == _35reg2842) {
Obj _35reg2843 = primCdr(_35p1298);
Obj _35reg2844 = primCar(_35reg2843);
Obj _35reg2845 = primIsCons(_35reg2844);
if (True == _35reg2845) {
Obj _35reg2846 = primCdr(_35p1298);
Obj _35reg2847 = primCar(_35reg2846);
Obj _35reg2848 = primCar(_35reg2847);
Obj _35reg2849 = primEQ(intern("lambda"), _35reg2848);
if (True == _35reg2849) {
Obj _35reg2850 = primCdr(_35p1298);
Obj _35reg2851 = primCar(_35reg2850);
Obj _35reg2852 = primCdr(_35reg2851);
Obj _35reg2853 = primIsCons(_35reg2852);
if (True == _35reg2853) {
Obj _35reg2854 = primCdr(_35p1298);
Obj _35reg2855 = primCar(_35reg2854);
Obj _35reg2856 = primCdr(_35reg2855);
Obj _35reg2857 = primCar(_35reg2856);
Obj params = _35reg2857;
Obj _35reg2858 = primCdr(_35p1298);
Obj _35reg2859 = primCar(_35reg2858);
Obj _35reg2860 = primCdr(_35reg2859);
Obj _35reg2861 = primCdr(_35reg2860);
Obj _35reg2862 = primIsCons(_35reg2861);
if (True == _35reg2862) {
Obj _35reg2863 = primCdr(_35p1298);
Obj _35reg2864 = primCar(_35reg2863);
Obj _35reg2865 = primCdr(_35reg2864);
Obj _35reg2866 = primCdr(_35reg2865);
Obj _35reg2867 = primCar(_35reg2866);
Obj actives = _35reg2867;
Obj _35reg2868 = primCdr(_35p1298);
Obj _35reg2869 = primCar(_35reg2868);
Obj _35reg2870 = primCdr(_35reg2869);
Obj _35reg2871 = primCdr(_35reg2870);
Obj _35reg2872 = primCdr(_35reg2871);
Obj _35reg2873 = primIsCons(_35reg2872);
if (True == _35reg2873) {
Obj _35reg2874 = primCdr(_35p1298);
Obj _35reg2875 = primCar(_35reg2874);
Obj _35reg2876 = primCdr(_35reg2875);
Obj _35reg2877 = primCdr(_35reg2876);
Obj _35reg2878 = primCdr(_35reg2877);
Obj _35reg2879 = primCar(_35reg2878);
Obj body = _35reg2879;
Obj _35reg2880 = primCdr(_35p1298);
Obj _35reg2881 = primCar(_35reg2880);
Obj _35reg2882 = primCdr(_35reg2881);
Obj _35reg2883 = primCdr(_35reg2882);
Obj _35reg2884 = primCdr(_35reg2883);
Obj _35reg2885 = primCdr(_35reg2884);
Obj _35reg2886 = primEQ(Nil, _35reg2885);
if (True == _35reg2886) {
Obj _35reg2887 = primCdr(_35p1298);
Obj _35reg2888 = primCdr(_35reg2887);
Obj _35reg2889 = primEQ(Nil, _35reg2888);
if (True == _35reg2889) {
pushCont(co, 4, _35clofun3161, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1299;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
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
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = exp;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2910 = __arg1;
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res = _35val2910;
Obj _35reg2911 = primCons(intern("entry"), makeNumber(0));
Obj _35reg2912 = primCons(e1, Nil);
Obj _35reg2913 = primCons(Nil, _35reg2912);
Obj _35reg2914 = primCons(Nil, _35reg2913);
Obj _35reg2915 = primCons(intern("lambda"), _35reg2914);
Obj _35reg2916 = primCons(_35reg2915, Nil);
Obj _35reg2917 = primCons(_35reg2911, _35reg2916);
Obj _35reg2918 = primCons(_35reg2917, Nil);
Obj _35reg2919 = primCons(_35reg2918, res);
__nargs = 2;
__arg1 = _35reg2919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3161) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2921 = __arg1;
Obj _35val2920= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2922 = primCons(_35val2920, _35val2921);
Obj res = _35reg2922;
Obj _35reg2923 = primCons(intern("entry"), makeNumber(0));
Obj _35reg2924 = primCons(e1, Nil);
Obj _35reg2925 = primCons(Nil, _35reg2924);
Obj _35reg2926 = primCons(Nil, _35reg2925);
Obj _35reg2927 = primCons(intern("lambda"), _35reg2926);
Obj _35reg2928 = primCons(_35reg2927, Nil);
Obj _35reg2929 = primCons(_35reg2923, _35reg2928);
Obj _35reg2930 = primCons(_35reg2929, Nil);
Obj _35reg2931 = primCons(_35reg2930, res);
__nargs = 2;
__arg1 = _35reg2931;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3161) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2920 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3161, 2, _35val2920, e1);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2909 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2909) {
pushCont(co, 10, _35clofun3161, 1, e1);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 12, _35clofun3161, 2, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2908 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur = _35val2908;
pushCont(co, 13, _35clofun3161, 3, cur, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2907 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val2907;
pushCont(co, 14, _35clofun3161, 2, v, e1);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2906 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3161, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2905 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3161, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2904 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun3161, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2903 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val2903;
pushCont(co, 18, _35clofun3161, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
pushCont(co, 19, _35clofun3161, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#vector"));
__arg1 = makeNumber(3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3161) { co->ctx.pc = ps; goto fail; };
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2821 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2820 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3160, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2823 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2822 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3160, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2818 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2819 = primLT(i, makeNumber(4));
if (True == _35reg2819) {
pushCont(co, 1, _35clofun3160, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 3, _35clofun3160, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2817 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 4, _35clofun3160, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 5, _35clofun3160, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2828 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2827 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3160, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2826 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3160, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2825 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 9, _35clofun3160, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 10, _35clofun3160, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2833 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2834 = primAdd(idx, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg2834;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1296 = makeNative(12, _35clofun3160, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg2830 = primIsCons(closureRef(co, 3));
if (True == _35reg2830) {
Obj _35reg2831 = primCar(closureRef(co, 3));
Obj a = _35reg2831;
Obj _35reg2832 = primCdr(closureRef(co, 3));
Obj b = _35reg2832;
pushCont(co, 13, _35clofun3160, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1296;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p1291 = __arg1;
Obj _35p1292 = __arg2;
Obj _35p1293 = __arg3;
Obj _35p1294 = co->args[4];
Obj _35cc1295 = makeNative(14, _35clofun3160, 0, 4, _35p1291, _35p1292, _35p1293, _35p1294);
Obj fn = _35p1291;
Obj w = _35p1292;
Obj idx = _35p1293;
Obj _35reg2835 = primEQ(Nil, _35p1294);
if (True == _35reg2835) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3160) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2838 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2837 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun3160, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1300 = makeNative(16, _35clofun3160, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
pushCont(co, 18, _35clofun3160, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3160) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2897 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n\n");
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
Obj _35val2800 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2797 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2798 = primNot(_35val2797);
if (True == _35reg2798) {
pushCont(co, 0, _35clofun3159, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#for-each"));
__arg1 = makeNative(20, _35clofun3158, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2796 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 1, _35clofun3159, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2795 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun3159, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val2795;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2794 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 3, _35clofun3159, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2793 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 4, _35clofun3159, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2791 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2792 = primCar(label);
pushCont(co, 5, _35clofun3159, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg2792;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2790 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 6, _35clofun3159, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2788 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2789 = primCdr(label);
pushCont(co, 7, _35clofun3159, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2789;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35p1280 = __arg1;
Obj _35p1281 = __arg2;
Obj _35p1282 = __arg3;
Obj _35cc1283 = makeNative(18, _35clofun3158, 0, 0);
Obj self = _35p1280;
Obj w = _35p1281;
Obj _35reg2779 = primIsCons(_35p1282);
if (True == _35reg2779) {
Obj _35reg2780 = primCar(_35p1282);
Obj _35reg2781 = primEQ(intern("%continuation"), _35reg2780);
if (True == _35reg2781) {
Obj _35reg2782 = primCdr(_35p1282);
Obj _35reg2783 = primIsCons(_35reg2782);
if (True == _35reg2783) {
Obj _35reg2784 = primCdr(_35p1282);
Obj _35reg2785 = primCar(_35reg2784);
Obj label = _35reg2785;
Obj _35reg2786 = primCdr(_35p1282);
Obj _35reg2787 = primCdr(_35reg2786);
Obj stacks = _35reg2787;
pushCont(co, 8, _35clofun3159, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2808 = __arg1;
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2806 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2807 = primNot(_35val2806);
if (True == _35reg2807) {
pushCont(co, 11, _35clofun3159, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2805 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 12, _35clofun3159, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1290 = makeNative(10, _35clofun3159, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg2802 = primIsCons(closureRef(co, 4));
if (True == _35reg2802) {
Obj _35reg2803 = primCar(closureRef(co, 4));
Obj a = _35reg2803;
Obj _35reg2804 = primCdr(closureRef(co, 4));
Obj b = _35reg2804;
pushCont(co, 13, _35clofun3159, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1290;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p1284 = __arg1;
Obj _35p1285 = __arg2;
Obj _35p1286 = __arg3;
Obj _35p1287 = co->args[4];
Obj _35p1288 = co->args[5];
Obj _35cc1289 = makeNative(14, _35clofun3159, 0, 5, _35p1284, _35p1285, _35p1286, _35p1287, _35p1288);
Obj self = _35p1284;
Obj env = _35p1285;
Obj fn = _35p1286;
Obj w = _35p1287;
Obj _35reg2809 = primEQ(Nil, _35p1288);
if (True == _35reg2809) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3159) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1289;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
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
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2815 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2814 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun3159, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2812 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2813 = primCar(label);
pushCont(co, 18, _35clofun3159, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg2813;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3159) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj w = __arg1;
Obj label = __arg2;
pushCont(co, 19, _35clofun3159, 2, label, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("void ");
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
Obj _35val2732 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2731 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3158, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2736 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2735 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 2, _35clofun3158, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val2735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2734 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun3158, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal#escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2730 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2730) {
pushCont(co, 1, _35clofun3158, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeNumber(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2733 = primIsString(x);
if (True == _35reg2733) {
pushCont(co, 4, _35clofun3158, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2737 = primEQ(x, Nil);
if (True == _35reg2737) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2738 = primEQ(x, True);
if (True == _35reg2738) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2739 = primEQ(x, False);
if (True == _35reg2739) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label6:
{
Obj _35cc1270 = makeNative(17, _35clofun3157, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2716 = primIsCons(closureRef(co, 3));
if (True == _35reg2716) {
Obj _35reg2717 = primCar(closureRef(co, 3));
Obj _35reg2718 = primEQ(intern("%const"), _35reg2717);
if (True == _35reg2718) {
Obj _35reg2719 = primCdr(closureRef(co, 3));
Obj _35reg2720 = primIsCons(_35reg2719);
if (True == _35reg2720) {
Obj _35reg2721 = primCdr(closureRef(co, 3));
Obj _35reg2722 = primCar(_35reg2721);
Obj x = _35reg2722;
Obj _35reg2723 = primCdr(closureRef(co, 3));
Obj _35reg2724 = primCdr(_35reg2723);
Obj _35reg2725 = primEQ(Nil, _35reg2724);
if (True == _35reg2725) {
Obj _35reg2726 = primIsSymbol(x);
if (True == _35reg2726) {
pushCont(co, 20, _35clofun3157, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 5, _35clofun3158, 2, x, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2751 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2750 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3158, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1269 = makeNative(6, _35clofun3158, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2740 = primIsCons(closureRef(co, 3));
if (True == _35reg2740) {
Obj _35reg2741 = primCar(closureRef(co, 3));
Obj _35reg2742 = primEQ(intern("%stack-ref"), _35reg2741);
if (True == _35reg2742) {
Obj _35reg2743 = primCdr(closureRef(co, 3));
Obj _35reg2744 = primIsCons(_35reg2743);
if (True == _35reg2744) {
Obj _35reg2745 = primCdr(closureRef(co, 3));
Obj _35reg2746 = primCar(_35reg2745);
Obj idx = _35reg2746;
Obj _35reg2747 = primCdr(closureRef(co, 3));
Obj _35reg2748 = primCdr(_35reg2747);
Obj _35reg2749 = primEQ(Nil, _35reg2748);
if (True == _35reg2749) {
pushCont(co, 8, _35clofun3158, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1269;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1269;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1269;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1269;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2763 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2762 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3158, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1268 = makeNative(9, _35clofun3158, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2752 = primIsCons(closureRef(co, 3));
if (True == _35reg2752) {
Obj _35reg2753 = primCar(closureRef(co, 3));
Obj _35reg2754 = primEQ(intern("%closure-ref"), _35reg2753);
if (True == _35reg2754) {
Obj _35reg2755 = primCdr(closureRef(co, 3));
Obj _35reg2756 = primIsCons(_35reg2755);
if (True == _35reg2756) {
Obj _35reg2757 = primCdr(closureRef(co, 3));
Obj _35reg2758 = primCar(_35reg2757);
Obj idx = _35reg2758;
Obj _35reg2759 = primCdr(closureRef(co, 3));
Obj _35reg2760 = primCdr(_35reg2759);
Obj _35reg2761 = primEQ(Nil, _35reg2760);
if (True == _35reg2761) {
pushCont(co, 11, _35clofun3158, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1268;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1268;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1268;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1268;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2776 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2775 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 13, _35clofun3158, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val2775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2774 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun3158, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1267 = makeNative(12, _35clofun3158, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2764 = primIsCons(closureRef(co, 3));
if (True == _35reg2764) {
Obj _35reg2765 = primCar(closureRef(co, 3));
Obj _35reg2766 = primEQ(intern("%global"), _35reg2765);
if (True == _35reg2766) {
Obj _35reg2767 = primCdr(closureRef(co, 3));
Obj _35reg2768 = primIsCons(_35reg2767);
if (True == _35reg2768) {
Obj _35reg2769 = primCdr(closureRef(co, 3));
Obj _35reg2770 = primCar(_35reg2769);
Obj x = _35reg2770;
Obj _35reg2771 = primCdr(closureRef(co, 3));
Obj _35reg2772 = primCdr(_35reg2771);
Obj _35reg2773 = primEQ(Nil, _35reg2772);
if (True == _35reg2773) {
pushCont(co, 15, _35clofun3158, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1267;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1267;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1267;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1267;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35p1262 = __arg1;
Obj _35p1263 = __arg2;
Obj _35p1264 = __arg3;
Obj _35p1265 = co->args[4];
Obj _35cc1266 = makeNative(16, _35clofun3158, 0, 4, _35p1262, _35p1263, _35p1264, _35p1265);
Obj self = _35p1262;
Obj env = _35p1263;
Obj w = _35p1264;
Obj x = _35p1265;
Obj _35reg2777 = primIsSymbol(x);
if (True == _35reg2777) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1266;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2799 = __arg1;
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
if (ps.func != _35clofun3158) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x = __arg1;
pushCont(co, 19, _35clofun3158, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
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
Obj _35val2674 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2673 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun3157, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2676 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2675 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun3157, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2671 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2672 = primEQ(f, intern("set"));
if (True == _35reg2672) {
pushCont(co, 1, _35clofun3157, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 3, _35clofun3157, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2670 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun3157, 5, f, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35val2670;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1272 = makeNative(20, _35clofun3156, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2653 = primIsCons(closureRef(co, 3));
if (True == _35reg2653) {
Obj _35reg2654 = primCar(closureRef(co, 3));
Obj _35reg2655 = primIsCons(_35reg2654);
if (True == _35reg2655) {
Obj _35reg2656 = primCar(closureRef(co, 3));
Obj _35reg2657 = primCar(_35reg2656);
Obj _35reg2658 = primEQ(intern("%builtin"), _35reg2657);
if (True == _35reg2658) {
Obj _35reg2659 = primCar(closureRef(co, 3));
Obj _35reg2660 = primCdr(_35reg2659);
Obj _35reg2661 = primIsCons(_35reg2660);
if (True == _35reg2661) {
Obj _35reg2662 = primCar(closureRef(co, 3));
Obj _35reg2663 = primCdr(_35reg2662);
Obj _35reg2664 = primCar(_35reg2663);
Obj f = _35reg2664;
Obj _35reg2665 = primCar(closureRef(co, 3));
Obj _35reg2666 = primCdr(_35reg2665);
Obj _35reg2667 = primCdr(_35reg2666);
Obj _35reg2668 = primEQ(Nil, _35reg2667);
if (True == _35reg2668) {
Obj _35reg2669 = primCdr(closureRef(co, 3));
Obj args = _35reg2669;
pushCont(co, 5, _35clofun3157, 5, f, self, env, args, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2709 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2710 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = _35reg2710;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2708 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 7, _35clofun3157, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2707 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 8, _35clofun3157, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2706 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 9, _35clofun3157, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2705 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 10, _35clofun3157, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2714 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2715 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = _35reg2715;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2713 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 12, _35clofun3157, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2712 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 13, _35clofun3157, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2711 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 14, _35clofun3157, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2703 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj idx = _35val2703;
Obj _35reg2704 = primLT(idx, makeNumber(0));
if (True == _35reg2704) {
pushCont(co, 11, _35clofun3157, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 15, _35clofun3157, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35cc1271 = makeNative(6, _35clofun3157, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2677 = primIsCons(closureRef(co, 3));
if (True == _35reg2677) {
Obj _35reg2678 = primCar(closureRef(co, 3));
Obj _35reg2679 = primEQ(intern("let"), _35reg2678);
if (True == _35reg2679) {
Obj _35reg2680 = primCdr(closureRef(co, 3));
Obj _35reg2681 = primIsCons(_35reg2680);
if (True == _35reg2681) {
Obj _35reg2682 = primCdr(closureRef(co, 3));
Obj _35reg2683 = primCar(_35reg2682);
Obj a = _35reg2683;
Obj _35reg2684 = primCdr(closureRef(co, 3));
Obj _35reg2685 = primCdr(_35reg2684);
Obj _35reg2686 = primIsCons(_35reg2685);
if (True == _35reg2686) {
Obj _35reg2687 = primCdr(closureRef(co, 3));
Obj _35reg2688 = primCdr(_35reg2687);
Obj _35reg2689 = primCar(_35reg2688);
Obj b = _35reg2689;
Obj _35reg2690 = primCdr(closureRef(co, 3));
Obj _35reg2691 = primCdr(_35reg2690);
Obj _35reg2692 = primCdr(_35reg2691);
Obj _35reg2693 = primIsCons(_35reg2692);
if (True == _35reg2693) {
Obj _35reg2694 = primCdr(closureRef(co, 3));
Obj _35reg2695 = primCdr(_35reg2694);
Obj _35reg2696 = primCdr(_35reg2695);
Obj _35reg2697 = primCar(_35reg2696);
Obj c = _35reg2697;
Obj _35reg2698 = primCdr(closureRef(co, 3));
Obj _35reg2699 = primCdr(_35reg2698);
Obj _35reg2700 = primCdr(_35reg2699);
Obj _35reg2701 = primCdr(_35reg2700);
Obj _35reg2702 = primEQ(Nil, _35reg2701);
if (True == _35reg2702) {
pushCont(co, 16, _35clofun3157, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = a;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val2729 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2728 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun3157, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val2728;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3157) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2727 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun3157, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = x;
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
Obj _35cc1275 = makeNative(18, _35clofun3155, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2571 = primIsCons(closureRef(co, 3));
if (True == _35reg2571) {
Obj _35reg2572 = primCar(closureRef(co, 3));
Obj _35reg2573 = primEQ(intern("do"), _35reg2572);
if (True == _35reg2573) {
Obj _35reg2574 = primCdr(closureRef(co, 3));
Obj _35reg2575 = primIsCons(_35reg2574);
if (True == _35reg2575) {
Obj _35reg2576 = primCdr(closureRef(co, 3));
Obj _35reg2577 = primCar(_35reg2576);
Obj a = _35reg2577;
Obj _35reg2578 = primCdr(closureRef(co, 3));
Obj _35reg2579 = primCdr(_35reg2578);
Obj _35reg2580 = primIsCons(_35reg2579);
if (True == _35reg2580) {
Obj _35reg2581 = primCdr(closureRef(co, 3));
Obj _35reg2582 = primCdr(_35reg2581);
Obj _35reg2583 = primCar(_35reg2582);
Obj b = _35reg2583;
Obj _35reg2584 = primCdr(closureRef(co, 3));
Obj _35reg2585 = primCdr(_35reg2584);
Obj _35reg2586 = primCdr(_35reg2585);
Obj _35reg2587 = primEQ(Nil, _35reg2586);
if (True == _35reg2587) {
pushCont(co, 20, _35clofun3155, 4, self, env, w, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2620 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2619 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun3156, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2617 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2618 = primNot(_35val2617);
if (True == _35reg2618) {
pushCont(co, 2, _35clofun3156, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2616 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 3, _35clofun3156, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2615 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 4, _35clofun3156, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val2615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2614 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 5, _35clofun3156, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2613 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 6, _35clofun3156, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2612 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 7, _35clofun3156, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2611 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 8, _35clofun3156, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2609 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2610 = primCar(label);
pushCont(co, 9, _35clofun3156, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg2610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2608 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 10, _35clofun3156, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2606 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2607 = primCdr(label);
pushCont(co, 11, _35clofun3156, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1274 = makeNative(0, _35clofun3156, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2590 = primIsCons(closureRef(co, 3));
if (True == _35reg2590) {
Obj _35reg2591 = primCar(closureRef(co, 3));
Obj _35reg2592 = primEQ(intern("%closure"), _35reg2591);
if (True == _35reg2592) {
Obj _35reg2593 = primCdr(closureRef(co, 3));
Obj _35reg2594 = primIsCons(_35reg2593);
if (True == _35reg2594) {
Obj _35reg2595 = primCdr(closureRef(co, 3));
Obj _35reg2596 = primCar(_35reg2595);
Obj label = _35reg2596;
Obj _35reg2597 = primCdr(closureRef(co, 3));
Obj _35reg2598 = primCdr(_35reg2597);
Obj _35reg2599 = primIsCons(_35reg2598);
if (True == _35reg2599) {
Obj _35reg2600 = primCdr(closureRef(co, 3));
Obj _35reg2601 = primCdr(_35reg2600);
Obj _35reg2602 = primCar(_35reg2601);
Obj nargs = _35reg2602;
Obj _35reg2603 = primCdr(closureRef(co, 3));
Obj _35reg2604 = primCdr(_35reg2603);
Obj _35reg2605 = primCdr(_35reg2604);
Obj frees = _35reg2605;
pushCont(co, 12, _35clofun3156, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1274;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1274;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1274;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1274;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2652 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2651 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 14, _35clofun3156, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2650 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun3156, 4, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2649 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 16, _35clofun3156, 4, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2648 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 17, _35clofun3156, 5, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2647 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 18, _35clofun3156, 5, b, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1273 = makeNative(13, _35clofun3156, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2621 = primIsCons(closureRef(co, 3));
if (True == _35reg2621) {
Obj _35reg2622 = primCar(closureRef(co, 3));
Obj _35reg2623 = primEQ(intern("if"), _35reg2622);
if (True == _35reg2623) {
Obj _35reg2624 = primCdr(closureRef(co, 3));
Obj _35reg2625 = primIsCons(_35reg2624);
if (True == _35reg2625) {
Obj _35reg2626 = primCdr(closureRef(co, 3));
Obj _35reg2627 = primCar(_35reg2626);
Obj a = _35reg2627;
Obj _35reg2628 = primCdr(closureRef(co, 3));
Obj _35reg2629 = primCdr(_35reg2628);
Obj _35reg2630 = primIsCons(_35reg2629);
if (True == _35reg2630) {
Obj _35reg2631 = primCdr(closureRef(co, 3));
Obj _35reg2632 = primCdr(_35reg2631);
Obj _35reg2633 = primCar(_35reg2632);
Obj b = _35reg2633;
Obj _35reg2634 = primCdr(closureRef(co, 3));
Obj _35reg2635 = primCdr(_35reg2634);
Obj _35reg2636 = primCdr(_35reg2635);
Obj _35reg2637 = primIsCons(_35reg2636);
if (True == _35reg2637) {
Obj _35reg2638 = primCdr(closureRef(co, 3));
Obj _35reg2639 = primCdr(_35reg2638);
Obj _35reg2640 = primCdr(_35reg2639);
Obj _35reg2641 = primCar(_35reg2640);
Obj c = _35reg2641;
Obj _35reg2642 = primCdr(closureRef(co, 3));
Obj _35reg2643 = primCdr(_35reg2642);
Obj _35reg2644 = primCdr(_35reg2643);
Obj _35reg2645 = primCdr(_35reg2644);
Obj _35reg2646 = primEQ(Nil, _35reg2645);
if (True == _35reg2646) {
pushCont(co, 19, _35clofun3156, 6, a, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3156) { co->ctx.pc = ps; goto fail; };
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
Obj _35val2519 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun3154, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2518 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3155, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2516 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2517 = primCons(f, args);
pushCont(co, 1, _35clofun3155, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = _35reg2517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2515 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun3155, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2513 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2514 = primAdd(makeNumber(1), _35val2513);
pushCont(co, 3, _35clofun3155, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg2514;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2512 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 4, _35clofun3155, 4, f, args, self, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1279 = makeNative(15, _35clofun3154, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2509 = primIsCons(closureRef(co, 3));
if (True == _35reg2509) {
Obj _35reg2510 = primCar(closureRef(co, 3));
Obj f = _35reg2510;
Obj _35reg2511 = primCdr(closureRef(co, 3));
Obj args = _35reg2511;
pushCont(co, 5, _35clofun3155, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2542 = __arg1;
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
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1278 = makeNative(6, _35clofun3155, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2525 = primIsCons(closureRef(co, 3));
if (True == _35reg2525) {
Obj _35reg2526 = primCar(closureRef(co, 3));
Obj _35reg2527 = primEQ(intern("call"), _35reg2526);
if (True == _35reg2527) {
Obj _35reg2528 = primCdr(closureRef(co, 3));
Obj _35reg2529 = primIsCons(_35reg2528);
if (True == _35reg2529) {
Obj _35reg2530 = primCdr(closureRef(co, 3));
Obj _35reg2531 = primCar(_35reg2530);
Obj exp = _35reg2531;
Obj _35reg2532 = primCdr(closureRef(co, 3));
Obj _35reg2533 = primCdr(_35reg2532);
Obj _35reg2534 = primIsCons(_35reg2533);
if (True == _35reg2534) {
Obj _35reg2535 = primCdr(closureRef(co, 3));
Obj _35reg2536 = primCdr(_35reg2535);
Obj _35reg2537 = primCar(_35reg2536);
Obj cont = _35reg2537;
Obj _35reg2538 = primCdr(closureRef(co, 3));
Obj _35reg2539 = primCdr(_35reg2538);
Obj _35reg2540 = primCdr(_35reg2539);
Obj _35reg2541 = primEQ(Nil, _35reg2540);
if (True == _35reg2541) {
pushCont(co, 7, _35clofun3155, 4, self, env, w, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-cont"));
__arg1 = self;
__arg2 = w;
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1278;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1278;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1278;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1278;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1278;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc1277 = makeNative(8, _35clofun3155, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2543 = primIsCons(closureRef(co, 3));
if (True == _35reg2543) {
Obj _35reg2544 = primCar(closureRef(co, 3));
Obj _35reg2545 = primEQ(intern("tailcall"), _35reg2544);
if (True == _35reg2545) {
Obj _35reg2546 = primCdr(closureRef(co, 3));
Obj _35reg2547 = primIsCons(_35reg2546);
if (True == _35reg2547) {
Obj _35reg2548 = primCdr(closureRef(co, 3));
Obj _35reg2549 = primCar(_35reg2548);
Obj exp = _35reg2549;
Obj _35reg2550 = primCdr(closureRef(co, 3));
Obj _35reg2551 = primCdr(_35reg2550);
Obj _35reg2552 = primEQ(Nil, _35reg2551);
if (True == _35reg2552) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1277;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1277;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1277;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1277;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2570 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2569 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun3155, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2568 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3155, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2567 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3155, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2566 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun3155, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2565 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun3155, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2564 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun3155, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2563 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun3155, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1276 = makeNative(9, _35clofun3155, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg2553 = primIsCons(closureRef(co, 3));
if (True == _35reg2553) {
Obj _35reg2554 = primCar(closureRef(co, 3));
Obj _35reg2555 = primEQ(intern("return"), _35reg2554);
if (True == _35reg2555) {
Obj _35reg2556 = primCdr(closureRef(co, 3));
Obj _35reg2557 = primIsCons(_35reg2556);
if (True == _35reg2557) {
Obj _35reg2558 = primCdr(closureRef(co, 3));
Obj _35reg2559 = primCar(_35reg2558);
Obj x = _35reg2559;
Obj _35reg2560 = primCdr(closureRef(co, 3));
Obj _35reg2561 = primCdr(_35reg2560);
Obj _35reg2562 = primEQ(Nil, _35reg2561);
if (True == _35reg2562) {
pushCont(co, 17, _35clofun3155, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1276;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1276;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1276;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1276;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2589 = __arg1;
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
if (ps.func != _35clofun3155) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2588 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3155, 4, self, env, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
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
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg2482 = primGenSym(intern("reg"));
Obj tmp = _35reg2482;
pushCont(co, 20, _35clofun3153, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2498 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2499 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2499;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2497 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun3154, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2496 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun3154, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2495 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2494 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2505 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2506 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2506;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2504 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 7, _35clofun3154, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2503 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 8, _35clofun3154, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2502 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 9, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2501 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 10, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2500 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 11, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1261 = makeNative(1, _35clofun3154, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg2489 = primIsCons(closureRef(co, 3));
if (True == _35reg2489) {
Obj _35reg2490 = primCar(closureRef(co, 3));
Obj x = _35reg2490;
Obj _35reg2491 = primCdr(closureRef(co, 3));
Obj more = _35reg2491;
Obj _35reg2492 = primGT(i, makeNumber(3));
Obj _35reg2493 = primNot(_35reg2492);
if (True == _35reg2493) {
pushCont(co, 6, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 12, _35clofun3154, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1261;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p1256 = __arg1;
Obj _35p1257 = __arg2;
Obj _35p1258 = __arg3;
Obj _35p1259 = co->args[4];
Obj _35cc1260 = makeNative(13, _35clofun3154, 0, 4, _35p1256, _35p1257, _35p1258, _35p1259);
Obj self = _35p1256;
Obj w = _35p1257;
Obj i = _35p1258;
Obj _35reg2507 = primEQ(Nil, _35p1259);
if (True == _35reg2507) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3154) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2524 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2523 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun3154, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2522 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun3154, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2521 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun3154, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3154) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2520 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun3154, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
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
Obj _35val2380 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2380;
Obj _35reg2381 = primEQ(idx, makeNumber(0));
if (True == _35reg2381) {
Obj _35reg2382 = primGenSym(intern("clofun"));
Obj name = _35reg2382;
Obj _35reg2383 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2383) {
Obj _35reg2384 = primCons(body1, Nil);
Obj _35reg2385 = primCons(Nil, _35reg2384);
Obj _35reg2386 = primCons(params, _35reg2385);
Obj _35reg2387 = primCons(intern("lambda"), _35reg2386);
pushCont(co, 15, _35clofun3152, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2394 = primCons(body1, Nil);
Obj _35reg2395 = primCons(fvs, _35reg2394);
Obj _35reg2396 = primCons(params, _35reg2395);
Obj _35reg2397 = primCons(intern("lambda"), _35reg2396);
pushCont(co, 16, _35clofun3152, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 20, _35clofun3152, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2379 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2379;
pushCont(co, 0, _35clofun3153, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2378 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2378;
pushCont(co, 1, _35clofun3153, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2435 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2434= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2436 = primCons(_35val2435, fvs);
Obj _35reg2437 = primCons(_35reg2434, _35reg2436);
Obj _35reg2438 = primCons(clo_45or_45cont, _35reg2437);
__nargs = 2;
__arg1 = _35reg2438;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val2433 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2434 = primCons(name, idx);
pushCont(co, 3, _35clofun3153, 3, fvs, _35reg2434, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2443 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2444 = primCons(name, idx);
Obj _35reg2445 = primCons(_35reg2444, fvs);
Obj _35reg2446 = primCons(clo_45or_45cont, _35reg2445);
__nargs = 2;
__arg1 = _35reg2446;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2456 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2455= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2457 = primCons(_35val2456, fvs);
Obj _35reg2458 = primCons(_35reg2455, _35reg2457);
Obj _35reg2459 = primCons(clo_45or_45cont, _35reg2458);
__nargs = 2;
__arg1 = _35reg2459;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2454 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2455 = primCons(name, idx);
pushCont(co, 6, _35clofun3153, 3, fvs, _35reg2455, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2464 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2465 = primCons(name, idx);
Obj _35reg2466 = primCons(_35reg2465, fvs);
Obj _35reg2467 = primCons(clo_45or_45cont, _35reg2466);
__nargs = 2;
__arg1 = _35reg2467;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3153) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val2447 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2448 = primCar(_35val2447);
Obj name = _35reg2448;
Obj _35reg2449 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2449) {
Obj _35reg2450 = primCons(body1, Nil);
Obj _35reg2451 = primCons(Nil, _35reg2450);
Obj _35reg2452 = primCons(params, _35reg2451);
Obj _35reg2453 = primCons(intern("lambda"), _35reg2452);
pushCont(co, 7, _35clofun3153, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2453;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2460 = primCons(body1, Nil);
Obj _35reg2461 = primCons(fvs, _35reg2460);
Obj _35reg2462 = primCons(params, _35reg2461);
Obj _35reg2463 = primCons(intern("lambda"), _35reg2462);
pushCont(co, 8, _35clofun3153, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2425 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2425;
Obj _35reg2426 = primEQ(idx, makeNumber(0));
if (True == _35reg2426) {
Obj _35reg2427 = primGenSym(intern("clofun"));
Obj name = _35reg2427;
Obj _35reg2428 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2428) {
Obj _35reg2429 = primCons(body1, Nil);
Obj _35reg2430 = primCons(Nil, _35reg2429);
Obj _35reg2431 = primCons(params, _35reg2430);
Obj _35reg2432 = primCons(intern("lambda"), _35reg2431);
pushCont(co, 4, _35clofun3153, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2439 = primCons(body1, Nil);
Obj _35reg2440 = primCons(fvs, _35reg2439);
Obj _35reg2441 = primCons(params, _35reg2440);
Obj _35reg2442 = primCons(intern("lambda"), _35reg2441);
pushCont(co, 5, _35clofun3153, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2442;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 9, _35clofun3153, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2424 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2424;
pushCont(co, 10, _35clofun3153, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2423 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2423;
pushCont(co, 11, _35clofun3153, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35p1251 = __arg1;
Obj _35p1252 = __arg2;
Obj _35cc1253 = makeNative(3, _35clofun3152, 0, 2, _35p1251, _35p1252);
Obj v = _35p1251;
Obj _35reg2294 = primIsCons(_35p1252);
if (True == _35reg2294) {
Obj _35reg2295 = primCar(_35p1252);
Obj clo_45or_45cont = _35reg2295;
Obj _35reg2296 = primCdr(_35p1252);
Obj _35reg2297 = primIsCons(_35reg2296);
if (True == _35reg2297) {
Obj _35reg2298 = primCdr(_35p1252);
Obj _35reg2299 = primCar(_35reg2298);
Obj _35reg2300 = primIsCons(_35reg2299);
if (True == _35reg2300) {
Obj _35reg2301 = primCdr(_35p1252);
Obj _35reg2302 = primCar(_35reg2301);
Obj _35reg2303 = primCar(_35reg2302);
Obj _35reg2304 = primEQ(intern("lambda"), _35reg2303);
if (True == _35reg2304) {
Obj _35reg2305 = primCdr(_35p1252);
Obj _35reg2306 = primCar(_35reg2305);
Obj _35reg2307 = primCdr(_35reg2306);
Obj _35reg2308 = primIsCons(_35reg2307);
if (True == _35reg2308) {
Obj _35reg2309 = primCdr(_35p1252);
Obj _35reg2310 = primCar(_35reg2309);
Obj _35reg2311 = primCdr(_35reg2310);
Obj _35reg2312 = primCar(_35reg2311);
Obj params = _35reg2312;
Obj _35reg2313 = primCdr(_35p1252);
Obj _35reg2314 = primCar(_35reg2313);
Obj _35reg2315 = primCdr(_35reg2314);
Obj _35reg2316 = primCdr(_35reg2315);
Obj _35reg2317 = primIsCons(_35reg2316);
if (True == _35reg2317) {
Obj _35reg2318 = primCdr(_35p1252);
Obj _35reg2319 = primCar(_35reg2318);
Obj _35reg2320 = primCdr(_35reg2319);
Obj _35reg2321 = primCdr(_35reg2320);
Obj _35reg2322 = primCar(_35reg2321);
Obj body = _35reg2322;
Obj _35reg2323 = primCdr(_35p1252);
Obj _35reg2324 = primCar(_35reg2323);
Obj _35reg2325 = primCdr(_35reg2324);
Obj _35reg2326 = primCdr(_35reg2325);
Obj _35reg2327 = primCdr(_35reg2326);
Obj _35reg2328 = primEQ(Nil, _35reg2327);
if (True == _35reg2328) {
Obj _35reg2329 = primCdr(_35p1252);
Obj _35reg2330 = primCdr(_35reg2329);
Obj fvs = _35reg2330;
Obj _35reg2331 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2331) {
if (True == True) {
pushCont(co, 13, _35clofun3152, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2377 = primEQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg2377) {
if (True == True) {
pushCont(co, 2, _35clofun3153, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 12, _35clofun3153, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2475 = __arg1;
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
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2479 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2480 = primCons(_35val2479, res);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = _35reg2480;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2478 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj res = _35val2478;
pushCont(co, 15, _35clofun3153, 2, res, v);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2477 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3153, 2, cur1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2476 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 17, _35clofun3153, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj v = __arg1;
Obj idx = __arg2;
Obj cur = __arg3;
Obj name = co->args[4];
Obj val = co->args[5];
Obj _35reg2469 = primCons(name, idx);
Obj _35reg2470 = primCons(val, Nil);
Obj _35reg2471 = primCons(_35reg2469, _35reg2470);
Obj _35reg2472 = primCons(_35reg2471, cur);
Obj cur1 = _35reg2472;
Obj _35reg2473 = primLT(idx, makeNumber(20));
if (True == _35reg2473) {
Obj _35reg2474 = primAdd(idx, makeNumber(1));
pushCont(co, 14, _35clofun3153, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = _35reg2474;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, _35clofun3153, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("cora/init#vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3153) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2483 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2484 = primCons(_35val2483, Nil);
Obj _35reg2485 = primCons(x, _35reg2484);
Obj _35reg2486 = primCons(tmp, _35reg2485);
Obj _35reg2487 = primCons(intern("let"), _35reg2486);
__nargs = 2;
__arg1 = _35reg2487;
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
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1255 = makeNative(0, _35clofun3152, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1254 = makeNative(1, _35clofun3152, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg2293 = primIsCons(f_45args);
if (True == _35reg2293) {
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = makeNative(2, _35clofun3152, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1254;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2344 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2343= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2345 = primCons(_35val2344, fvs);
Obj _35reg2346 = primCons(_35reg2343, _35reg2345);
Obj _35reg2347 = primCons(clo_45or_45cont, _35reg2346);
__nargs = 2;
__arg1 = _35reg2347;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2342 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2343 = primCons(name, idx);
pushCont(co, 4, _35clofun3152, 3, fvs, _35reg2343, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2352 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2353 = primCons(name, idx);
Obj _35reg2354 = primCons(_35reg2353, fvs);
Obj _35reg2355 = primCons(clo_45or_45cont, _35reg2354);
__nargs = 2;
__arg1 = _35reg2355;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2365 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2364= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2366 = primCons(_35val2365, fvs);
Obj _35reg2367 = primCons(_35reg2364, _35reg2366);
Obj _35reg2368 = primCons(clo_45or_45cont, _35reg2367);
__nargs = 2;
__arg1 = _35reg2368;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2363 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2364 = primCons(name, idx);
pushCont(co, 7, _35clofun3152, 3, fvs, _35reg2364, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2373 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2374 = primCons(name, idx);
Obj _35reg2375 = primCons(_35reg2374, fvs);
Obj _35reg2376 = primCons(clo_45or_45cont, _35reg2375);
__nargs = 2;
__arg1 = _35reg2376;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val2356 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2357 = primCar(_35val2356);
Obj name = _35reg2357;
Obj _35reg2358 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2358) {
Obj _35reg2359 = primCons(body1, Nil);
Obj _35reg2360 = primCons(Nil, _35reg2359);
Obj _35reg2361 = primCons(params, _35reg2360);
Obj _35reg2362 = primCons(intern("lambda"), _35reg2361);
pushCont(co, 8, _35clofun3152, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2362;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2369 = primCons(body1, Nil);
Obj _35reg2370 = primCons(fvs, _35reg2369);
Obj _35reg2371 = primCons(params, _35reg2370);
Obj _35reg2372 = primCons(intern("lambda"), _35reg2371);
pushCont(co, 9, _35clofun3152, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2372;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2334 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val2334;
Obj _35reg2335 = primEQ(idx, makeNumber(0));
if (True == _35reg2335) {
Obj _35reg2336 = primGenSym(intern("clofun"));
Obj name = _35reg2336;
Obj _35reg2337 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2337) {
Obj _35reg2338 = primCons(body1, Nil);
Obj _35reg2339 = primCons(Nil, _35reg2338);
Obj _35reg2340 = primCons(params, _35reg2339);
Obj _35reg2341 = primCons(intern("lambda"), _35reg2340);
pushCont(co, 5, _35clofun3152, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2348 = primCons(body1, Nil);
Obj _35reg2349 = primCons(fvs, _35reg2348);
Obj _35reg2350 = primCons(params, _35reg2349);
Obj _35reg2351 = primCons(intern("lambda"), _35reg2350);
pushCont(co, 6, _35clofun3152, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 10, _35clofun3152, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2333 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val2333;
pushCont(co, 11, _35clofun3152, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2332 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2332;
pushCont(co, 12, _35clofun3152, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2390 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2389= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2391 = primCons(_35val2390, fvs);
Obj _35reg2392 = primCons(_35reg2389, _35reg2391);
Obj _35reg2393 = primCons(clo_45or_45cont, _35reg2392);
__nargs = 2;
__arg1 = _35reg2393;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val2388 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2389 = primCons(name, idx);
pushCont(co, 14, _35clofun3152, 3, fvs, _35reg2389, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2398 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2399 = primCons(name, idx);
Obj _35reg2400 = primCons(_35reg2399, fvs);
Obj _35reg2401 = primCons(clo_45or_45cont, _35reg2400);
__nargs = 2;
__arg1 = _35reg2401;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val2411 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2410= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2412 = primCons(_35val2411, fvs);
Obj _35reg2413 = primCons(_35reg2410, _35reg2412);
Obj _35reg2414 = primCons(clo_45or_45cont, _35reg2413);
__nargs = 2;
__arg1 = _35reg2414;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val2409 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2410 = primCons(name, idx);
pushCont(co, 17, _35clofun3152, 3, fvs, _35reg2410, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2419 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2420 = primCons(name, idx);
Obj _35reg2421 = primCons(_35reg2420, fvs);
Obj _35reg2422 = primCons(clo_45or_45cont, _35reg2421);
__nargs = 2;
__arg1 = _35reg2422;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3152) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2402 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg2403 = primCar(_35val2402);
Obj name = _35reg2403;
Obj _35reg2404 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg2404) {
Obj _35reg2405 = primCons(body1, Nil);
Obj _35reg2406 = primCons(Nil, _35reg2405);
Obj _35reg2407 = primCons(params, _35reg2406);
Obj _35reg2408 = primCons(intern("lambda"), _35reg2407);
pushCont(co, 18, _35clofun3152, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2415 = primCons(body1, Nil);
Obj _35reg2416 = primCons(fvs, _35reg2415);
Obj _35reg2417 = primCons(params, _35reg2416);
Obj _35reg2418 = primCons(intern("lambda"), _35reg2417);
pushCont(co, 19, _35clofun3152, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg2418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3152) { co->ctx.pc = ps; goto fail; };
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
Obj _35val2174 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2174) {
pushCont(co, 19, _35clofun3150, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2201 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2201) {
Obj _35reg2202 = primCons(exp, Nil);
Obj _35reg2203 = primCons(intern("tailcall"), _35reg2202);
__nargs = 2;
__arg1 = _35reg2203;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2204 = primGenSym(intern("val"));
Obj val = _35reg2204;
Obj _35reg2205 = primCons(val, Nil);
pushCont(co, 20, _35clofun3150, 2, _35reg2205, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label1:
{
Obj _35val2172 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val2172;
Obj _35reg2173 = primCar(exp);
pushCont(co, 0, _35clofun3151, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#pair?"));
__arg1 = _35reg2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p1238 = __arg1;
Obj _35p1239 = __arg2;
Obj _35p1240 = __arg3;
Obj _35cc1241 = makeNative(16, _35clofun3150, 0, 3, _35p1238, _35p1239, _35p1240);
Obj _35reg2171 = primEQ(Nil, _35p1238);
if (True == _35reg2171) {
Obj ls = _35p1239;
Obj next = _35p1240;
pushCont(co, 1, _35clofun3151, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1241;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2217 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2218 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2217;
__arg2 = _35reg2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1250 = makeNative(3, _35clofun3151, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2214 = primIsCons(closureRef(co, 1));
if (True == _35reg2214) {
Obj _35reg2215 = primCar(closureRef(co, 1));
Obj f = _35reg2215;
Obj _35reg2216 = primCdr(closureRef(co, 1));
Obj args = _35reg2216;
pushCont(co, 4, _35clofun3151, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2238 = __arg1;
Obj _35val2237= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2239 = primCons(_35val2238, Nil);
Obj _35reg2240 = primCons(_35val2237, _35reg2239);
Obj _35reg2241 = primCons(intern("call"), _35reg2240);
__nargs = 2;
__arg1 = _35reg2241;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2237 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3151, 1, _35val2237);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2236 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 7, _35clofun3151, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2236;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1249 = makeNative(5, _35clofun3151, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2219 = primIsCons(closureRef(co, 1));
if (True == _35reg2219) {
Obj _35reg2220 = primCar(closureRef(co, 1));
Obj _35reg2221 = primEQ(intern("call"), _35reg2220);
if (True == _35reg2221) {
Obj _35reg2222 = primCdr(closureRef(co, 1));
Obj _35reg2223 = primIsCons(_35reg2222);
if (True == _35reg2223) {
Obj _35reg2224 = primCdr(closureRef(co, 1));
Obj _35reg2225 = primCar(_35reg2224);
Obj exp = _35reg2225;
Obj _35reg2226 = primCdr(closureRef(co, 1));
Obj _35reg2227 = primCdr(_35reg2226);
Obj _35reg2228 = primIsCons(_35reg2227);
if (True == _35reg2228) {
Obj _35reg2229 = primCdr(closureRef(co, 1));
Obj _35reg2230 = primCdr(_35reg2229);
Obj _35reg2231 = primCar(_35reg2230);
Obj cont = _35reg2231;
Obj _35reg2232 = primCdr(closureRef(co, 1));
Obj _35reg2233 = primCdr(_35reg2232);
Obj _35reg2234 = primCdr(_35reg2233);
Obj _35reg2235 = primEQ(Nil, _35reg2234);
if (True == _35reg2235) {
pushCont(co, 8, _35clofun3151, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2263 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2264 = primCons(_35val2263, Nil);
Obj _35reg2265 = primCons(val, _35reg2264);
Obj _35reg2266 = primCons(intern("lambda"), _35reg2265);
Obj _35reg2267 = primCons(_35reg2266, fvs2);
Obj _35reg2268 = primCons(intern("%continuation"), _35reg2267);
__nargs = 2;
__arg1 = _35reg2268;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2262 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val2262;
pushCont(co, 10, _35clofun3151, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2261 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 11, _35clofun3151, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2261;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2260 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2260;
pushCont(co, 12, _35clofun3151, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2259 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 13, _35clofun3151, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2259;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1248 = makeNative(9, _35clofun3151, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2242 = primIsCons(closureRef(co, 1));
if (True == _35reg2242) {
Obj _35reg2243 = primCar(closureRef(co, 1));
Obj _35reg2244 = primEQ(intern("continuation"), _35reg2243);
if (True == _35reg2244) {
Obj _35reg2245 = primCdr(closureRef(co, 1));
Obj _35reg2246 = primIsCons(_35reg2245);
if (True == _35reg2246) {
Obj _35reg2247 = primCdr(closureRef(co, 1));
Obj _35reg2248 = primCar(_35reg2247);
Obj val = _35reg2248;
Obj _35reg2249 = primCdr(closureRef(co, 1));
Obj _35reg2250 = primCdr(_35reg2249);
Obj _35reg2251 = primIsCons(_35reg2250);
if (True == _35reg2251) {
Obj _35reg2252 = primCdr(closureRef(co, 1));
Obj _35reg2253 = primCdr(_35reg2252);
Obj _35reg2254 = primCar(_35reg2253);
Obj body = _35reg2254;
Obj _35reg2255 = primCdr(closureRef(co, 1));
Obj _35reg2256 = primCdr(_35reg2255);
Obj _35reg2257 = primCdr(_35reg2256);
Obj _35reg2258 = primEQ(Nil, _35reg2257);
if (True == _35reg2258) {
pushCont(co, 14, _35clofun3151, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2286 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2287 = primCons(_35val2286, Nil);
Obj _35reg2288 = primCons(args, _35reg2287);
Obj _35reg2289 = primCons(intern("lambda"), _35reg2288);
__nargs = 2;
__arg1 = _35reg2289;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35cc1247 = makeNative(15, _35clofun3151, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2269 = primIsCons(closureRef(co, 1));
if (True == _35reg2269) {
Obj _35reg2270 = primCar(closureRef(co, 1));
Obj _35reg2271 = primEQ(intern("lambda"), _35reg2270);
if (True == _35reg2271) {
Obj _35reg2272 = primCdr(closureRef(co, 1));
Obj _35reg2273 = primIsCons(_35reg2272);
if (True == _35reg2273) {
Obj _35reg2274 = primCdr(closureRef(co, 1));
Obj _35reg2275 = primCar(_35reg2274);
Obj args = _35reg2275;
Obj _35reg2276 = primCdr(closureRef(co, 1));
Obj _35reg2277 = primCdr(_35reg2276);
Obj _35reg2278 = primIsCons(_35reg2277);
if (True == _35reg2278) {
Obj _35reg2279 = primCdr(closureRef(co, 1));
Obj _35reg2280 = primCdr(_35reg2279);
Obj _35reg2281 = primCar(_35reg2280);
Obj body = _35reg2281;
Obj _35reg2282 = primCdr(closureRef(co, 1));
Obj _35reg2283 = primCdr(_35reg2282);
Obj _35reg2284 = primCdr(_35reg2283);
Obj _35reg2285 = primEQ(Nil, _35reg2284);
if (True == _35reg2285) {
pushCont(co, 16, _35clofun3151, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc1246 = makeNative(17, _35clofun3151, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2290 = primIsSymbol(var);
if (True == _35reg2290) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2291 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1245= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2291) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3151) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3151) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35p1243 = __arg1;
Obj _35p1244 = __arg2;
Obj _35cc1245 = makeNative(18, _35clofun3151, 0, 2, _35p1243, _35p1244);
Obj __ = _35p1243;
Obj x = _35p1244;
pushCont(co, 19, _35clofun3151, 2, x, _35cc1245);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
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
Obj _35val2104 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2105 = primCons(_35val2104, Nil);
Obj _35reg2106 = primCons(rb, _35reg2105);
Obj _35reg2107 = primCons(closureRef(co, 0), _35reg2106);
Obj _35reg2108 = primCons(intern("let"), _35reg2107);
__nargs = 2;
__arg1 = _35reg2108;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj rb = __arg1;
pushCont(co, 0, _35clofun3150, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1235 = makeNative(20, _35clofun3149, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2078 = primIsCons(closureRef(co, 0));
if (True == _35reg2078) {
Obj _35reg2079 = primCar(closureRef(co, 0));
Obj _35reg2080 = primEQ(intern("let"), _35reg2079);
if (True == _35reg2080) {
Obj _35reg2081 = primCdr(closureRef(co, 0));
Obj _35reg2082 = primIsCons(_35reg2081);
if (True == _35reg2082) {
Obj _35reg2083 = primCdr(closureRef(co, 0));
Obj _35reg2084 = primCar(_35reg2083);
Obj a = _35reg2084;
Obj _35reg2085 = primCdr(closureRef(co, 0));
Obj _35reg2086 = primCdr(_35reg2085);
Obj _35reg2087 = primIsCons(_35reg2086);
if (True == _35reg2087) {
Obj _35reg2088 = primCdr(closureRef(co, 0));
Obj _35reg2089 = primCdr(_35reg2088);
Obj _35reg2090 = primCar(_35reg2089);
Obj b = _35reg2090;
Obj _35reg2091 = primCdr(closureRef(co, 0));
Obj _35reg2092 = primCdr(_35reg2091);
Obj _35reg2093 = primCdr(_35reg2092);
Obj _35reg2094 = primIsCons(_35reg2093);
if (True == _35reg2094) {
Obj _35reg2095 = primCdr(closureRef(co, 0));
Obj _35reg2096 = primCdr(_35reg2095);
Obj _35reg2097 = primCdr(_35reg2096);
Obj _35reg2098 = primCar(_35reg2097);
Obj c = _35reg2098;
Obj _35reg2099 = primCdr(closureRef(co, 0));
Obj _35reg2100 = primCdr(_35reg2099);
Obj _35reg2101 = primCdr(_35reg2100);
Obj _35reg2102 = primCdr(_35reg2101);
Obj _35reg2103 = primEQ(Nil, _35reg2102);
if (True == _35reg2103) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = b;
__arg2 = makeNative(1, _35clofun3150, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2127 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2128 = primCons(_35val2127, Nil);
Obj _35reg2129 = primCons(ra, _35reg2128);
Obj _35reg2130 = primCons(intern("do"), _35reg2129);
__nargs = 2;
__arg1 = _35reg2130;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj ra = __arg1;
Obj _35reg2126 = primIsSymbol(ra);
if (True == _35reg2126) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 3, _35clofun3150, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1234 = makeNative(2, _35clofun3150, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2109 = primIsCons(closureRef(co, 0));
if (True == _35reg2109) {
Obj _35reg2110 = primCar(closureRef(co, 0));
Obj _35reg2111 = primEQ(intern("do"), _35reg2110);
if (True == _35reg2111) {
Obj _35reg2112 = primCdr(closureRef(co, 0));
Obj _35reg2113 = primIsCons(_35reg2112);
if (True == _35reg2113) {
Obj _35reg2114 = primCdr(closureRef(co, 0));
Obj _35reg2115 = primCar(_35reg2114);
Obj a = _35reg2115;
Obj _35reg2116 = primCdr(closureRef(co, 0));
Obj _35reg2117 = primCdr(_35reg2116);
Obj _35reg2118 = primIsCons(_35reg2117);
if (True == _35reg2118) {
Obj _35reg2119 = primCdr(closureRef(co, 0));
Obj _35reg2120 = primCdr(_35reg2119);
Obj _35reg2121 = primCar(_35reg2120);
Obj b = _35reg2121;
Obj _35reg2122 = primCdr(closureRef(co, 0));
Obj _35reg2123 = primCdr(_35reg2122);
Obj _35reg2124 = primCdr(_35reg2123);
Obj _35reg2125 = primEQ(Nil, _35reg2124);
if (True == _35reg2125) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(4, _35clofun3150, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2158 = __arg1;
Obj _35val2157= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2159 = primCons(_35val2158, Nil);
Obj _35reg2160 = primCons(_35val2157, _35reg2159);
Obj _35reg2161 = primCons(ra, _35reg2160);
Obj _35reg2162 = primCons(intern("if"), _35reg2161);
__nargs = 2;
__arg1 = _35reg2162;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val2157 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 6, _35clofun3150, 2, _35val2157, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj ra = __arg1;
pushCont(co, 7, _35clofun3150, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1233 = makeNative(5, _35clofun3150, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2131 = primIsCons(closureRef(co, 0));
if (True == _35reg2131) {
Obj _35reg2132 = primCar(closureRef(co, 0));
Obj _35reg2133 = primEQ(intern("if"), _35reg2132);
if (True == _35reg2133) {
Obj _35reg2134 = primCdr(closureRef(co, 0));
Obj _35reg2135 = primIsCons(_35reg2134);
if (True == _35reg2135) {
Obj _35reg2136 = primCdr(closureRef(co, 0));
Obj _35reg2137 = primCar(_35reg2136);
Obj a = _35reg2137;
Obj _35reg2138 = primCdr(closureRef(co, 0));
Obj _35reg2139 = primCdr(_35reg2138);
Obj _35reg2140 = primIsCons(_35reg2139);
if (True == _35reg2140) {
Obj _35reg2141 = primCdr(closureRef(co, 0));
Obj _35reg2142 = primCdr(_35reg2141);
Obj _35reg2143 = primCar(_35reg2142);
Obj b = _35reg2143;
Obj _35reg2144 = primCdr(closureRef(co, 0));
Obj _35reg2145 = primCdr(_35reg2144);
Obj _35reg2146 = primCdr(_35reg2145);
Obj _35reg2147 = primIsCons(_35reg2146);
if (True == _35reg2147) {
Obj _35reg2148 = primCdr(closureRef(co, 0));
Obj _35reg2149 = primCdr(_35reg2148);
Obj _35reg2150 = primCdr(_35reg2149);
Obj _35reg2151 = primCar(_35reg2150);
Obj c = _35reg2151;
Obj _35reg2152 = primCdr(closureRef(co, 0));
Obj _35reg2153 = primCdr(_35reg2152);
Obj _35reg2154 = primCdr(_35reg2153);
Obj _35reg2155 = primCdr(_35reg2154);
Obj _35reg2156 = primEQ(Nil, _35reg2155);
if (True == _35reg2156) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(8, _35clofun3150, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2163 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1232= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2163) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1232 = makeNative(9, _35clofun3150, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 10, _35clofun3150, 2, x, _35cc1232);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2165 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1231= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2165) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label13:
{
Obj _35p1229 = __arg1;
Obj _35p1230 = __arg2;
Obj _35cc1231 = makeNative(11, _35clofun3150, 0, 2, _35p1229, _35p1230);
Obj x = _35p1229;
Obj next = _35p1230;
Obj _35reg2164 = primIsSymbol(x);
if (True == _35reg2164) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 12, _35clofun3150, 3, next, x, _35cc1231);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj hd1 = __arg1;
Obj _35reg2170 = primCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2170;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1242 = makeNative(14, _35clofun3150, 0, 0);
Obj _35reg2167 = primIsCons(closureRef(co, 0));
if (True == _35reg2167) {
Obj _35reg2168 = primCar(closureRef(co, 0));
Obj hd = _35reg2168;
Obj _35reg2169 = primCdr(closureRef(co, 0));
Obj tl = _35reg2169;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = hd;
__arg2 = makeNative(15, _35clofun3150, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2182 = __arg1;
Obj _35reg2181= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2183 = primCons(_35val2182, Nil);
Obj _35reg2184 = primCons(_35reg2181, _35reg2183);
Obj _35reg2185 = primCons(intern("continuation"), _35reg2184);
Obj _35reg2186 = primCons(_35reg2185, Nil);
Obj _35reg2187 = primCons(exp, _35reg2186);
Obj _35reg2188 = primCons(intern("call"), _35reg2187);
__nargs = 2;
__arg1 = _35reg2188;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val2194 = __arg1;
Obj _35reg2193= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2195 = primCons(_35val2194, Nil);
Obj _35reg2196 = primCons(_35reg2193, _35reg2195);
Obj _35reg2197 = primCons(intern("continuation"), _35reg2196);
Obj _35reg2198 = primCons(_35reg2197, Nil);
Obj _35reg2199 = primCons(exp, _35reg2198);
Obj _35reg2200 = primCons(intern("call"), _35reg2199);
__nargs = 2;
__arg1 = _35reg2200;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val2175 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2176 = primEQ(_35val2175, intern("%builtin"));
if (True == _35reg2176) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2177 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2177) {
Obj _35reg2178 = primCons(exp, Nil);
Obj _35reg2179 = primCons(intern("tailcall"), _35reg2178);
__nargs = 2;
__arg1 = _35reg2179;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2180 = primGenSym(intern("val"));
Obj val = _35reg2180;
Obj _35reg2181 = primCons(val, Nil);
pushCont(co, 17, _35clofun3150, 2, _35reg2181, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2189 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2189) {
Obj _35reg2190 = primCons(exp, Nil);
Obj _35reg2191 = primCons(intern("tailcall"), _35reg2190);
__nargs = 2;
__arg1 = _35reg2191;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2192 = primGenSym(intern("val"));
Obj val = _35reg2192;
Obj _35reg2193 = primCons(val, Nil);
pushCont(co, 18, _35clofun3150, 2, _35reg2193, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3150) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label20:
{
Obj _35val2206 = __arg1;
Obj _35reg2205= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2207 = primCons(_35val2206, Nil);
Obj _35reg2208 = primCons(_35reg2205, _35reg2207);
Obj _35reg2209 = primCons(intern("continuation"), _35reg2208);
Obj _35reg2210 = primCons(_35reg2209, Nil);
Obj _35reg2211 = primCons(exp, _35reg2210);
Obj _35reg2212 = primCons(intern("call"), _35reg2211);
__nargs = 2;
__arg1 = _35reg2212;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3150) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3149(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35p1209 = __arg1;
Obj _35cc1210 = makeNative(19, _35clofun3148, 0, 1, _35p1209);
Obj x = _35p1209;
pushCont(co, 20, _35clofun3148, 1, _35cc1210);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1957 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1958 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1957;
__arg2 = _35reg1958;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1228 = makeNative(1, _35clofun3149, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg1954 = primIsCons(closureRef(co, 1));
if (True == _35reg1954) {
Obj _35reg1955 = primCar(closureRef(co, 1));
Obj f = _35reg1955;
Obj _35reg1956 = primCdr(closureRef(co, 1));
Obj args = _35reg1956;
pushCont(co, 2, _35clofun3149, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1986 = __arg1;
Obj _35val1985= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1987 = primCons(_35val1986, Nil);
Obj _35reg1988 = primCons(_35val1985, _35reg1987);
Obj _35reg1989 = primCons(a, _35reg1988);
Obj _35reg1990 = primCons(intern("let"), _35reg1989);
__nargs = 2;
__arg1 = _35reg1990;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3149) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val1985 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 4, _35clofun3149, 2, _35val1985, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1227 = makeNative(3, _35clofun3149, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1959 = primIsCons(closureRef(co, 1));
if (True == _35reg1959) {
Obj _35reg1960 = primCar(closureRef(co, 1));
Obj _35reg1961 = primEQ(intern("let"), _35reg1960);
if (True == _35reg1961) {
Obj _35reg1962 = primCdr(closureRef(co, 1));
Obj _35reg1963 = primIsCons(_35reg1962);
if (True == _35reg1963) {
Obj _35reg1964 = primCdr(closureRef(co, 1));
Obj _35reg1965 = primCar(_35reg1964);
Obj a = _35reg1965;
Obj _35reg1966 = primCdr(closureRef(co, 1));
Obj _35reg1967 = primCdr(_35reg1966);
Obj _35reg1968 = primIsCons(_35reg1967);
if (True == _35reg1968) {
Obj _35reg1969 = primCdr(closureRef(co, 1));
Obj _35reg1970 = primCdr(_35reg1969);
Obj _35reg1971 = primCar(_35reg1970);
Obj b = _35reg1971;
Obj _35reg1972 = primCdr(closureRef(co, 1));
Obj _35reg1973 = primCdr(_35reg1972);
Obj _35reg1974 = primCdr(_35reg1973);
Obj _35reg1975 = primIsCons(_35reg1974);
if (True == _35reg1975) {
Obj _35reg1976 = primCdr(closureRef(co, 1));
Obj _35reg1977 = primCdr(_35reg1976);
Obj _35reg1978 = primCdr(_35reg1977);
Obj _35reg1979 = primCar(_35reg1978);
Obj c = _35reg1979;
Obj _35reg1980 = primCdr(closureRef(co, 1));
Obj _35reg1981 = primCdr(_35reg1980);
Obj _35reg1982 = primCdr(_35reg1981);
Obj _35reg1983 = primCdr(_35reg1982);
Obj _35reg1984 = primEQ(Nil, _35reg1983);
if (True == _35reg1984) {
pushCont(co, 5, _35clofun3149, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2017 = __arg1;
Obj _35reg2015= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2018 = primCons(_35reg2015, _35val2017);
Obj _35reg2019 = primCons(intern("%closure"), _35reg2018);
__nargs = 2;
__arg1 = _35reg2019;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3149) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2016 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2015= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3149, 1, _35reg2015);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val2016;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2012 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2013 = primCons(_35val2012, Nil);
Obj _35reg2014 = primCons(args, _35reg2013);
Obj _35reg2015 = primCons(intern("lambda"), _35reg2014);
pushCont(co, 8, _35clofun3149, 2, fvs1, _35reg2015);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2011 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2011;
pushCont(co, 9, _35clofun3149, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1226 = makeNative(6, _35clofun3149, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg1991 = primIsCons(closureRef(co, 1));
if (True == _35reg1991) {
Obj _35reg1992 = primCar(closureRef(co, 1));
Obj _35reg1993 = primEQ(intern("lambda"), _35reg1992);
if (True == _35reg1993) {
Obj _35reg1994 = primCdr(closureRef(co, 1));
Obj _35reg1995 = primIsCons(_35reg1994);
if (True == _35reg1995) {
Obj _35reg1996 = primCdr(closureRef(co, 1));
Obj _35reg1997 = primCar(_35reg1996);
Obj args = _35reg1997;
Obj _35reg1998 = primCdr(closureRef(co, 1));
Obj _35reg1999 = primCdr(_35reg1998);
Obj _35reg2000 = primIsCons(_35reg1999);
if (True == _35reg2000) {
Obj _35reg2001 = primCdr(closureRef(co, 1));
Obj _35reg2002 = primCdr(_35reg2001);
Obj _35reg2003 = primCar(_35reg2002);
Obj body = _35reg2003;
Obj _35reg2004 = primCdr(closureRef(co, 1));
Obj _35reg2005 = primCdr(_35reg2004);
Obj _35reg2006 = primCdr(_35reg2005);
Obj _35reg2007 = primEQ(Nil, _35reg2006);
if (True == _35reg2007) {
Obj _35reg2008 = primCons(body, Nil);
Obj _35reg2009 = primCons(args, _35reg2008);
Obj _35reg2010 = primCons(intern("lambda"), _35reg2009);
pushCont(co, 10, _35clofun3149, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg2010;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2021 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val2021;
Obj _35reg2022 = primEQ(makeNumber(-1), pos);
if (True == _35reg2022) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3149) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2023 = primCons(pos, Nil);
Obj _35reg2024 = primCons(intern("%closure-ref"), _35reg2023);
__nargs = 2;
__arg1 = _35reg2024;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3149) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label13:
{
Obj _35cc1225 = makeNative(11, _35clofun3149, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2020 = primIsSymbol(var);
if (True == _35reg2020) {
pushCont(co, 12, _35clofun3149, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1225;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2025 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1224= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2025) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3149) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p1222 = __arg1;
Obj _35p1223 = __arg2;
Obj _35cc1224 = makeNative(13, _35clofun3149, 0, 2, _35p1222, _35p1223);
Obj __ = _35p1222;
Obj x = _35p1223;
pushCont(co, 14, _35clofun3149, 2, x, _35cc1224);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x = __arg1;
Obj _35reg2027 = primCons(x, Nil);
Obj _35reg2028 = primCons(intern("return"), _35reg2027);
__nargs = 2;
__arg1 = _35reg2028;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3149) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1237 = makeNative(17, _35clofun3149, 0, 0);
Obj _35reg2030 = primIsCons(closureRef(co, 0));
if (True == _35reg2030) {
Obj _35reg2031 = primCar(closureRef(co, 0));
Obj f = _35reg2031;
Obj _35reg2032 = primCdr(closureRef(co, 0));
Obj args = _35reg2032;
Obj next = closureRef(co, 1);
Obj _35reg2033 = primCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = _35reg2033;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1237;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2072 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2073 = primCons(_35val2072, Nil);
Obj _35reg2074 = primCons(args, _35reg2073);
Obj _35reg2075 = primCons(intern("lambda"), _35reg2074);
Obj _35reg2076 = primCons(_35reg2075, frees);
Obj _35reg2077 = primCons(intern("%closure"), _35reg2076);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg2077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1236 = makeNative(18, _35clofun3149, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2034 = primIsCons(closureRef(co, 0));
if (True == _35reg2034) {
Obj _35reg2035 = primCar(closureRef(co, 0));
Obj _35reg2036 = primEQ(intern("%closure"), _35reg2035);
if (True == _35reg2036) {
Obj _35reg2037 = primCdr(closureRef(co, 0));
Obj _35reg2038 = primIsCons(_35reg2037);
if (True == _35reg2038) {
Obj _35reg2039 = primCdr(closureRef(co, 0));
Obj _35reg2040 = primCar(_35reg2039);
Obj _35reg2041 = primIsCons(_35reg2040);
if (True == _35reg2041) {
Obj _35reg2042 = primCdr(closureRef(co, 0));
Obj _35reg2043 = primCar(_35reg2042);
Obj _35reg2044 = primCar(_35reg2043);
Obj _35reg2045 = primEQ(intern("lambda"), _35reg2044);
if (True == _35reg2045) {
Obj _35reg2046 = primCdr(closureRef(co, 0));
Obj _35reg2047 = primCar(_35reg2046);
Obj _35reg2048 = primCdr(_35reg2047);
Obj _35reg2049 = primIsCons(_35reg2048);
if (True == _35reg2049) {
Obj _35reg2050 = primCdr(closureRef(co, 0));
Obj _35reg2051 = primCar(_35reg2050);
Obj _35reg2052 = primCdr(_35reg2051);
Obj _35reg2053 = primCar(_35reg2052);
Obj args = _35reg2053;
Obj _35reg2054 = primCdr(closureRef(co, 0));
Obj _35reg2055 = primCar(_35reg2054);
Obj _35reg2056 = primCdr(_35reg2055);
Obj _35reg2057 = primCdr(_35reg2056);
Obj _35reg2058 = primIsCons(_35reg2057);
if (True == _35reg2058) {
Obj _35reg2059 = primCdr(closureRef(co, 0));
Obj _35reg2060 = primCar(_35reg2059);
Obj _35reg2061 = primCdr(_35reg2060);
Obj _35reg2062 = primCdr(_35reg2061);
Obj _35reg2063 = primCar(_35reg2062);
Obj body = _35reg2063;
Obj _35reg2064 = primCdr(closureRef(co, 0));
Obj _35reg2065 = primCar(_35reg2064);
Obj _35reg2066 = primCdr(_35reg2065);
Obj _35reg2067 = primCdr(_35reg2066);
Obj _35reg2068 = primCdr(_35reg2067);
Obj _35reg2069 = primEQ(Nil, _35reg2068);
if (True == _35reg2069) {
Obj _35reg2070 = primCdr(closureRef(co, 0));
Obj _35reg2071 = primCdr(_35reg2070);
Obj frees = _35reg2071;
Obj next = closureRef(co, 1);
pushCont(co, 19, _35clofun3149, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3149) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3148(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1783 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1221 = makeNative(20, _35clofun3147, 0, 0);
Obj _35reg1779 = primIsCons(closureRef(co, 0));
if (True == _35reg1779) {
Obj _35reg1780 = primCar(closureRef(co, 0));
Obj f = _35reg1780;
Obj _35reg1781 = primCdr(closureRef(co, 0));
Obj args = _35reg1781;
Obj _35reg1782 = primCons(f, args);
pushCont(co, 0, _35clofun3148, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1782;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val1801 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1801;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc1220 = makeNative(1, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1784 = primIsCons(closureRef(co, 0));
if (True == _35reg1784) {
Obj _35reg1785 = primCar(closureRef(co, 0));
Obj _35reg1786 = primEQ(intern("continuation"), _35reg1785);
if (True == _35reg1786) {
Obj _35reg1787 = primCdr(closureRef(co, 0));
Obj _35reg1788 = primIsCons(_35reg1787);
if (True == _35reg1788) {
Obj _35reg1789 = primCdr(closureRef(co, 0));
Obj _35reg1790 = primCar(_35reg1789);
Obj arg = _35reg1790;
Obj _35reg1791 = primCdr(closureRef(co, 0));
Obj _35reg1792 = primCdr(_35reg1791);
Obj _35reg1793 = primIsCons(_35reg1792);
if (True == _35reg1793) {
Obj _35reg1794 = primCdr(closureRef(co, 0));
Obj _35reg1795 = primCdr(_35reg1794);
Obj _35reg1796 = primCar(_35reg1795);
Obj body = _35reg1796;
Obj _35reg1797 = primCdr(closureRef(co, 0));
Obj _35reg1798 = primCdr(_35reg1797);
Obj _35reg1799 = primCdr(_35reg1798);
Obj _35reg1800 = primEQ(Nil, _35reg1799);
if (True == _35reg1800) {
pushCont(co, 2, _35clofun3148, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc1219 = makeNative(3, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1802 = primIsCons(closureRef(co, 0));
if (True == _35reg1802) {
Obj _35reg1803 = primCar(closureRef(co, 0));
Obj _35reg1804 = primEQ(intern("tailcall"), _35reg1803);
if (True == _35reg1804) {
Obj _35reg1805 = primCdr(closureRef(co, 0));
Obj _35reg1806 = primIsCons(_35reg1805);
if (True == _35reg1806) {
Obj _35reg1807 = primCdr(closureRef(co, 0));
Obj _35reg1808 = primCar(_35reg1807);
Obj exp = _35reg1808;
Obj _35reg1809 = primCdr(closureRef(co, 0));
Obj _35reg1810 = primCdr(_35reg1809);
Obj _35reg1811 = primEQ(Nil, _35reg1810);
if (True == _35reg1811) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1831 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1218 = makeNative(4, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1812 = primIsCons(closureRef(co, 0));
if (True == _35reg1812) {
Obj _35reg1813 = primCar(closureRef(co, 0));
Obj _35reg1814 = primEQ(intern("call"), _35reg1813);
if (True == _35reg1814) {
Obj _35reg1815 = primCdr(closureRef(co, 0));
Obj _35reg1816 = primIsCons(_35reg1815);
if (True == _35reg1816) {
Obj _35reg1817 = primCdr(closureRef(co, 0));
Obj _35reg1818 = primCar(_35reg1817);
Obj exp = _35reg1818;
Obj _35reg1819 = primCdr(closureRef(co, 0));
Obj _35reg1820 = primCdr(_35reg1819);
Obj _35reg1821 = primIsCons(_35reg1820);
if (True == _35reg1821) {
Obj _35reg1822 = primCdr(closureRef(co, 0));
Obj _35reg1823 = primCdr(_35reg1822);
Obj _35reg1824 = primCar(_35reg1823);
Obj cont = _35reg1824;
Obj _35reg1825 = primCdr(closureRef(co, 0));
Obj _35reg1826 = primCdr(_35reg1825);
Obj _35reg1827 = primCdr(_35reg1826);
Obj _35reg1828 = primEQ(Nil, _35reg1827);
if (True == _35reg1828) {
Obj _35reg1829 = primCons(cont, Nil);
Obj _35reg1830 = primCons(exp, _35reg1829);
pushCont(co, 5, _35clofun3148, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1830;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc1217 = makeNative(6, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1832 = primIsCons(closureRef(co, 0));
if (True == _35reg1832) {
Obj _35reg1833 = primCar(closureRef(co, 0));
Obj _35reg1834 = primEQ(intern("return"), _35reg1833);
if (True == _35reg1834) {
Obj _35reg1835 = primCdr(closureRef(co, 0));
Obj _35reg1836 = primIsCons(_35reg1835);
if (True == _35reg1836) {
Obj _35reg1837 = primCdr(closureRef(co, 0));
Obj _35reg1838 = primCar(_35reg1837);
Obj x = _35reg1838;
Obj _35reg1839 = primCdr(closureRef(co, 0));
Obj _35reg1840 = primCdr(_35reg1839);
Obj _35reg1841 = primEQ(Nil, _35reg1840);
if (True == _35reg1841) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc1216 = makeNative(7, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1842 = primIsCons(closureRef(co, 0));
if (True == _35reg1842) {
Obj _35reg1843 = primCar(closureRef(co, 0));
Obj _35reg1844 = primEQ(intern("%closure"), _35reg1843);
if (True == _35reg1844) {
Obj _35reg1845 = primCdr(closureRef(co, 0));
Obj _35reg1846 = primIsCons(_35reg1845);
if (True == _35reg1846) {
Obj _35reg1847 = primCdr(closureRef(co, 0));
Obj _35reg1848 = primCar(_35reg1847);
Obj lam = _35reg1848;
Obj _35reg1849 = primCdr(closureRef(co, 0));
Obj _35reg1850 = primCdr(_35reg1849);
Obj more = _35reg1850;
Obj _35reg1851 = primCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg1851;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1881 = __arg1;
Obj _35val1878= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = _35val1878;
__arg2 = _35val1881;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1879 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val1878= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1880 = primCons(a, Nil);
pushCont(co, 9, _35clofun3148, 1, _35val1878);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1879;
__arg2 = _35reg1880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1878 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3148, 2, a, _35val1878);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc1215 = makeNative(8, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1852 = primIsCons(closureRef(co, 0));
if (True == _35reg1852) {
Obj _35reg1853 = primCar(closureRef(co, 0));
Obj _35reg1854 = primEQ(intern("let"), _35reg1853);
if (True == _35reg1854) {
Obj _35reg1855 = primCdr(closureRef(co, 0));
Obj _35reg1856 = primIsCons(_35reg1855);
if (True == _35reg1856) {
Obj _35reg1857 = primCdr(closureRef(co, 0));
Obj _35reg1858 = primCar(_35reg1857);
Obj a = _35reg1858;
Obj _35reg1859 = primCdr(closureRef(co, 0));
Obj _35reg1860 = primCdr(_35reg1859);
Obj _35reg1861 = primIsCons(_35reg1860);
if (True == _35reg1861) {
Obj _35reg1862 = primCdr(closureRef(co, 0));
Obj _35reg1863 = primCdr(_35reg1862);
Obj _35reg1864 = primCar(_35reg1863);
Obj b = _35reg1864;
Obj _35reg1865 = primCdr(closureRef(co, 0));
Obj _35reg1866 = primCdr(_35reg1865);
Obj _35reg1867 = primCdr(_35reg1866);
Obj _35reg1868 = primIsCons(_35reg1867);
if (True == _35reg1868) {
Obj _35reg1869 = primCdr(closureRef(co, 0));
Obj _35reg1870 = primCdr(_35reg1869);
Obj _35reg1871 = primCdr(_35reg1870);
Obj _35reg1872 = primCar(_35reg1871);
Obj c = _35reg1872;
Obj _35reg1873 = primCdr(closureRef(co, 0));
Obj _35reg1874 = primCdr(_35reg1873);
Obj _35reg1875 = primCdr(_35reg1874);
Obj _35reg1876 = primCdr(_35reg1875);
Obj _35reg1877 = primEQ(Nil, _35reg1876);
if (True == _35reg1877) {
pushCont(co, 11, _35clofun3148, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val1901 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1901;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1214 = makeNative(12, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1882 = primIsCons(closureRef(co, 0));
if (True == _35reg1882) {
Obj _35reg1883 = primCar(closureRef(co, 0));
Obj _35reg1884 = primEQ(intern("do"), _35reg1883);
if (True == _35reg1884) {
Obj _35reg1885 = primCdr(closureRef(co, 0));
Obj _35reg1886 = primIsCons(_35reg1885);
if (True == _35reg1886) {
Obj _35reg1887 = primCdr(closureRef(co, 0));
Obj _35reg1888 = primCar(_35reg1887);
Obj x = _35reg1888;
Obj _35reg1889 = primCdr(closureRef(co, 0));
Obj _35reg1890 = primCdr(_35reg1889);
Obj _35reg1891 = primIsCons(_35reg1890);
if (True == _35reg1891) {
Obj _35reg1892 = primCdr(closureRef(co, 0));
Obj _35reg1893 = primCdr(_35reg1892);
Obj _35reg1894 = primCar(_35reg1893);
Obj y = _35reg1894;
Obj _35reg1895 = primCdr(closureRef(co, 0));
Obj _35reg1896 = primCdr(_35reg1895);
Obj _35reg1897 = primCdr(_35reg1896);
Obj _35reg1898 = primEQ(Nil, _35reg1897);
if (True == _35reg1898) {
Obj _35reg1899 = primCons(y, Nil);
Obj _35reg1900 = primCons(x, _35reg1899);
pushCont(co, 13, _35clofun3148, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1931 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val1931;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc1213 = makeNative(14, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1902 = primIsCons(closureRef(co, 0));
if (True == _35reg1902) {
Obj _35reg1903 = primCar(closureRef(co, 0));
Obj _35reg1904 = primEQ(intern("if"), _35reg1903);
if (True == _35reg1904) {
Obj _35reg1905 = primCdr(closureRef(co, 0));
Obj _35reg1906 = primIsCons(_35reg1905);
if (True == _35reg1906) {
Obj _35reg1907 = primCdr(closureRef(co, 0));
Obj _35reg1908 = primCar(_35reg1907);
Obj x = _35reg1908;
Obj _35reg1909 = primCdr(closureRef(co, 0));
Obj _35reg1910 = primCdr(_35reg1909);
Obj _35reg1911 = primIsCons(_35reg1910);
if (True == _35reg1911) {
Obj _35reg1912 = primCdr(closureRef(co, 0));
Obj _35reg1913 = primCdr(_35reg1912);
Obj _35reg1914 = primCar(_35reg1913);
Obj y = _35reg1914;
Obj _35reg1915 = primCdr(closureRef(co, 0));
Obj _35reg1916 = primCdr(_35reg1915);
Obj _35reg1917 = primCdr(_35reg1916);
Obj _35reg1918 = primIsCons(_35reg1917);
if (True == _35reg1918) {
Obj _35reg1919 = primCdr(closureRef(co, 0));
Obj _35reg1920 = primCdr(_35reg1919);
Obj _35reg1921 = primCdr(_35reg1920);
Obj _35reg1922 = primCar(_35reg1921);
Obj z = _35reg1922;
Obj _35reg1923 = primCdr(closureRef(co, 0));
Obj _35reg1924 = primCdr(_35reg1923);
Obj _35reg1925 = primCdr(_35reg1924);
Obj _35reg1926 = primCdr(_35reg1925);
Obj _35reg1927 = primEQ(Nil, _35reg1926);
if (True == _35reg1927) {
Obj _35reg1928 = primCons(z, Nil);
Obj _35reg1929 = primCons(y, _35reg1928);
Obj _35reg1930 = primCons(x, _35reg1929);
pushCont(co, 15, _35clofun3148, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg1930;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1949 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val1949;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1212 = makeNative(16, _35clofun3148, 0, 1, closureRef(co, 0));
Obj _35reg1932 = primIsCons(closureRef(co, 0));
if (True == _35reg1932) {
Obj _35reg1933 = primCar(closureRef(co, 0));
Obj _35reg1934 = primEQ(intern("lambda"), _35reg1933);
if (True == _35reg1934) {
Obj _35reg1935 = primCdr(closureRef(co, 0));
Obj _35reg1936 = primIsCons(_35reg1935);
if (True == _35reg1936) {
Obj _35reg1937 = primCdr(closureRef(co, 0));
Obj _35reg1938 = primCar(_35reg1937);
Obj args = _35reg1938;
Obj _35reg1939 = primCdr(closureRef(co, 0));
Obj _35reg1940 = primCdr(_35reg1939);
Obj _35reg1941 = primIsCons(_35reg1940);
if (True == _35reg1941) {
Obj _35reg1942 = primCdr(closureRef(co, 0));
Obj _35reg1943 = primCdr(_35reg1942);
Obj _35reg1944 = primCar(_35reg1943);
Obj body = _35reg1944;
Obj _35reg1945 = primCdr(closureRef(co, 0));
Obj _35reg1946 = primCdr(_35reg1945);
Obj _35reg1947 = primCdr(_35reg1946);
Obj _35reg1948 = primEQ(Nil, _35reg1947);
if (True == _35reg1948) {
pushCont(co, 17, _35clofun3148, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc1211 = makeNative(18, _35clofun3148, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg1950 = primIsSymbol(x);
if (True == _35reg1950) {
Obj _35reg1951 = primCons(x, Nil);
__nargs = 2;
__arg1 = _35reg1951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3148) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1952 = __arg1;
Obj _35cc1210= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1952) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3148) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3148) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3147(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35p1177 = __arg1;
Obj _35p1178 = __arg2;
Obj _35p1179 = __arg3;
Obj _35p1180 = co->args[4];
Obj _35cc1181 = makeNative(17, _35clofun3146, 0, 4, _35p1177, _35p1178, _35p1179, _35p1180);
Obj __ = _35p1177;
__ = _35p1178;
__ = _35p1179;
Obj x = _35p1180;
pushCont(co, 20, _35clofun3146, 2, x, _35cc1181);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1709 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1710 = primCons(x, _35val1709);
__nargs = 2;
__arg1 = _35reg1710;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35cc1196 = makeNative(1, _35clofun3147, 0, 0);
Obj _35reg1706 = primIsCons(closureRef(co, 0));
if (True == _35reg1706) {
Obj _35reg1707 = primCar(closureRef(co, 0));
Obj x = _35reg1707;
Obj _35reg1708 = primCdr(closureRef(co, 0));
Obj y = _35reg1708;
Obj s2 = closureRef(co, 1);
pushCont(co, 2, _35clofun3147, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1196;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val1714 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1195= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1714) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1195;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1195 = makeNative(3, _35clofun3147, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1711 = primIsCons(closureRef(co, 0));
if (True == _35reg1711) {
Obj _35reg1712 = primCar(closureRef(co, 0));
Obj x = _35reg1712;
Obj _35reg1713 = primCdr(closureRef(co, 0));
Obj y = _35reg1713;
Obj s2 = closureRef(co, 1);
pushCont(co, 4, _35clofun3147, 3, y, s2, _35cc1195);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1195;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35p1192 = __arg1;
Obj _35p1193 = __arg2;
Obj _35cc1194 = makeNative(5, _35clofun3147, 0, 2, _35p1192, _35p1193);
Obj _35reg1715 = primEQ(Nil, _35p1192);
if (True == _35reg1715) {
Obj s2 = _35p1193;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1194;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1720 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1721 = primCons(x, _35val1720);
__nargs = 2;
__arg1 = _35reg1721;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35cc1201 = makeNative(7, _35clofun3147, 0, 0);
Obj _35reg1717 = primIsCons(closureRef(co, 0));
if (True == _35reg1717) {
Obj _35reg1718 = primCar(closureRef(co, 0));
Obj x = _35reg1718;
Obj _35reg1719 = primCdr(closureRef(co, 0));
Obj y = _35reg1719;
Obj s2 = closureRef(co, 1);
pushCont(co, 8, _35clofun3147, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1725 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1200= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1725) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc1200 = makeNative(9, _35clofun3147, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1722 = primIsCons(closureRef(co, 0));
if (True == _35reg1722) {
Obj _35reg1723 = primCar(closureRef(co, 0));
Obj x = _35reg1723;
Obj _35reg1724 = primCdr(closureRef(co, 0));
Obj y = _35reg1724;
Obj s2 = closureRef(co, 1);
pushCont(co, 10, _35clofun3147, 3, y, s2, _35cc1200);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p1197 = __arg1;
Obj _35p1198 = __arg2;
Obj _35cc1199 = makeNative(11, _35clofun3147, 0, 2, _35p1197, _35p1198);
Obj _35reg1726 = primEQ(Nil, _35p1197);
if (True == _35reg1726) {
Obj __ = _35p1198;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1208 = makeNative(13, _35clofun3147, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc1207 = makeNative(14, _35clofun3147, 0, 1, closureRef(co, 0));
Obj _35reg1728 = primIsCons(closureRef(co, 0));
if (True == _35reg1728) {
Obj _35reg1729 = primCar(closureRef(co, 0));
Obj _35reg1730 = primEQ(intern("%closure-ref"), _35reg1729);
if (True == _35reg1730) {
Obj _35reg1731 = primCdr(closureRef(co, 0));
Obj _35reg1732 = primIsCons(_35reg1731);
if (True == _35reg1732) {
Obj _35reg1733 = primCdr(closureRef(co, 0));
Obj _35reg1734 = primCar(_35reg1733);
Obj __ = _35reg1734;
Obj _35reg1735 = primCdr(closureRef(co, 0));
Obj _35reg1736 = primCdr(_35reg1735);
Obj _35reg1737 = primEQ(Nil, _35reg1736);
if (True == _35reg1737) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc1206 = makeNative(15, _35clofun3147, 0, 1, closureRef(co, 0));
Obj _35reg1738 = primIsCons(closureRef(co, 0));
if (True == _35reg1738) {
Obj _35reg1739 = primCar(closureRef(co, 0));
Obj _35reg1740 = primEQ(intern("quote"), _35reg1739);
if (True == _35reg1740) {
Obj _35reg1741 = primCdr(closureRef(co, 0));
Obj _35reg1742 = primIsCons(_35reg1741);
if (True == _35reg1742) {
Obj _35reg1743 = primCdr(closureRef(co, 0));
Obj _35reg1744 = primCar(_35reg1743);
Obj x = _35reg1744;
Obj _35reg1745 = primCdr(closureRef(co, 0));
Obj _35reg1746 = primCdr(_35reg1745);
Obj _35reg1747 = primEQ(Nil, _35reg1746);
if (True == _35reg1747) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35cc1205 = makeNative(16, _35clofun3147, 0, 1, closureRef(co, 0));
Obj _35reg1748 = primIsCons(closureRef(co, 0));
if (True == _35reg1748) {
Obj _35reg1749 = primCar(closureRef(co, 0));
Obj _35reg1750 = primEQ(intern("%builtin"), _35reg1749);
if (True == _35reg1750) {
Obj _35reg1751 = primCdr(closureRef(co, 0));
Obj _35reg1752 = primIsCons(_35reg1751);
if (True == _35reg1752) {
Obj _35reg1753 = primCdr(closureRef(co, 0));
Obj _35reg1754 = primCar(_35reg1753);
Obj op = _35reg1754;
Obj _35reg1755 = primCdr(closureRef(co, 0));
Obj _35reg1756 = primCdr(_35reg1755);
Obj _35reg1757 = primEQ(Nil, _35reg1756);
if (True == _35reg1757) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc1204 = makeNative(17, _35clofun3147, 0, 1, closureRef(co, 0));
Obj _35reg1758 = primIsCons(closureRef(co, 0));
if (True == _35reg1758) {
Obj _35reg1759 = primCar(closureRef(co, 0));
Obj _35reg1760 = primEQ(intern("%global"), _35reg1759);
if (True == _35reg1760) {
Obj _35reg1761 = primCdr(closureRef(co, 0));
Obj _35reg1762 = primIsCons(_35reg1761);
if (True == _35reg1762) {
Obj _35reg1763 = primCdr(closureRef(co, 0));
Obj _35reg1764 = primCar(_35reg1763);
Obj x = _35reg1764;
Obj _35reg1765 = primCdr(closureRef(co, 0));
Obj _35reg1766 = primCdr(_35reg1765);
Obj _35reg1767 = primEQ(Nil, _35reg1766);
if (True == _35reg1767) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35p1202 = __arg1;
Obj _35cc1203 = makeNative(18, _35clofun3147, 0, 1, _35p1202);
Obj _35reg1768 = primIsCons(_35p1202);
if (True == _35reg1768) {
Obj _35reg1769 = primCar(_35p1202);
Obj _35reg1770 = primEQ(intern("%const"), _35reg1769);
if (True == _35reg1770) {
Obj _35reg1771 = primCdr(_35p1202);
Obj _35reg1772 = primIsCons(_35reg1771);
if (True == _35reg1772) {
Obj _35reg1773 = primCdr(_35p1202);
Obj _35reg1774 = primCar(_35reg1773);
Obj x = _35reg1774;
Obj _35reg1775 = primCdr(_35p1202);
Obj _35reg1776 = primCdr(_35reg1775);
Obj _35reg1777 = primEQ(Nil, _35reg1776);
if (True == _35reg1777) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3147) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3147) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3146(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1546 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 4];
if (True == _35val1546) {
Obj var1 = var;
Obj _35reg1547 = primCons(intern("set"), Nil);
Obj _35reg1548 = primCons(intern("%builtin"), _35reg1547);
Obj _35reg1549 = primCons(var1, Nil);
Obj _35reg1550 = primCons(intern("%const"), _35reg1549);
pushCont(co, 15, _35clofun3145, 2, _35reg1550, _35reg1548);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 20, _35clofun3145, 4, env, ns, import, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35cc1189 = makeNative(13, _35clofun3145, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1520 = primIsCons(closureRef(co, 3));
if (True == _35reg1520) {
Obj _35reg1521 = primCar(closureRef(co, 3));
Obj _35reg1522 = primEQ(intern("def"), _35reg1521);
if (True == _35reg1522) {
Obj _35reg1523 = primCdr(closureRef(co, 3));
Obj _35reg1524 = primIsCons(_35reg1523);
if (True == _35reg1524) {
Obj _35reg1525 = primCdr(closureRef(co, 3));
Obj _35reg1526 = primCar(_35reg1525);
Obj var = _35reg1526;
Obj _35reg1527 = primCdr(closureRef(co, 3));
Obj _35reg1528 = primCdr(_35reg1527);
Obj _35reg1529 = primIsCons(_35reg1528);
if (True == _35reg1529) {
Obj _35reg1530 = primCdr(closureRef(co, 3));
Obj _35reg1531 = primCdr(_35reg1530);
Obj _35reg1532 = primCar(_35reg1531);
Obj val = _35reg1532;
Obj _35reg1533 = primCdr(closureRef(co, 3));
Obj _35reg1534 = primCdr(_35reg1533);
Obj _35reg1535 = primCdr(_35reg1534);
Obj _35reg1536 = primEQ(Nil, _35reg1535);
if (True == _35reg1536) {
Obj _35reg1537 = primEQ(ns, makeCString(""));
if (True == _35reg1537) {
Obj var1 = var;
Obj _35reg1538 = primCons(intern("set"), Nil);
Obj _35reg1539 = primCons(intern("%builtin"), _35reg1538);
Obj _35reg1540 = primCons(var1, Nil);
Obj _35reg1541 = primCons(intern("%const"), _35reg1540);
pushCont(co, 14, _35clofun3145, 2, _35reg1541, _35reg1539);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 0, _35clofun3146, 5, var, env, ns, import, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol-cooked?"));
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1189;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1189;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1189;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1189;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1189;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1188 = makeNative(1, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj _35reg1567 = primIsCons(closureRef(co, 3));
if (True == _35reg1567) {
Obj _35reg1568 = primCar(closureRef(co, 3));
Obj _35reg1569 = primEQ(intern("ns"), _35reg1568);
if (True == _35reg1569) {
Obj _35reg1570 = primCdr(closureRef(co, 3));
Obj _35reg1571 = primIsCons(_35reg1570);
if (True == _35reg1571) {
Obj _35reg1572 = primCdr(closureRef(co, 3));
Obj _35reg1573 = primCar(_35reg1572);
Obj path = _35reg1573;
Obj _35reg1574 = primCdr(closureRef(co, 3));
Obj _35reg1575 = primCdr(_35reg1574);
Obj _35reg1576 = primIsCons(_35reg1575);
if (True == _35reg1576) {
Obj _35reg1577 = primCdr(closureRef(co, 3));
Obj _35reg1578 = primCdr(_35reg1577);
Obj _35reg1579 = primCar(_35reg1578);
Obj import = _35reg1579;
Obj _35reg1580 = primCdr(closureRef(co, 3));
Obj _35reg1581 = primCdr(_35reg1580);
Obj _35reg1582 = primCdr(_35reg1581);
Obj _35reg1583 = primIsCons(_35reg1582);
if (True == _35reg1583) {
Obj _35reg1584 = primCdr(closureRef(co, 3));
Obj _35reg1585 = primCdr(_35reg1584);
Obj _35reg1586 = primCdr(_35reg1585);
Obj _35reg1587 = primCar(_35reg1586);
Obj body = _35reg1587;
Obj _35reg1588 = primCdr(closureRef(co, 3));
Obj _35reg1589 = primCdr(_35reg1588);
Obj _35reg1590 = primCdr(_35reg1589);
Obj _35reg1591 = primCdr(_35reg1590);
Obj _35reg1592 = primEQ(Nil, _35reg1591);
if (True == _35reg1592) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = path;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1188;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1188;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1188;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1188;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1188;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1188;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1621 = __arg1;
Obj _35val1619= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1622 = primCons(_35val1621, Nil);
Obj _35reg1623 = primCons(_35val1619, _35reg1622);
Obj _35reg1624 = primCons(a, _35reg1623);
Obj _35reg1625 = primCons(intern("let"), _35reg1624);
__nargs = 2;
__arg1 = _35reg1625;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val1619 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg1620 = primCons(a, env);
pushCont(co, 3, _35clofun3146, 2, _35val1619, a);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35reg1620;
__arg2 = ns;
__arg3 = import;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1187 = makeNative(2, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1593 = primIsCons(closureRef(co, 3));
if (True == _35reg1593) {
Obj _35reg1594 = primCar(closureRef(co, 3));
Obj _35reg1595 = primEQ(intern("let"), _35reg1594);
if (True == _35reg1595) {
Obj _35reg1596 = primCdr(closureRef(co, 3));
Obj _35reg1597 = primIsCons(_35reg1596);
if (True == _35reg1597) {
Obj _35reg1598 = primCdr(closureRef(co, 3));
Obj _35reg1599 = primCar(_35reg1598);
Obj a = _35reg1599;
Obj _35reg1600 = primCdr(closureRef(co, 3));
Obj _35reg1601 = primCdr(_35reg1600);
Obj _35reg1602 = primIsCons(_35reg1601);
if (True == _35reg1602) {
Obj _35reg1603 = primCdr(closureRef(co, 3));
Obj _35reg1604 = primCdr(_35reg1603);
Obj _35reg1605 = primCar(_35reg1604);
Obj b = _35reg1605;
Obj _35reg1606 = primCdr(closureRef(co, 3));
Obj _35reg1607 = primCdr(_35reg1606);
Obj _35reg1608 = primCdr(_35reg1607);
Obj _35reg1609 = primIsCons(_35reg1608);
if (True == _35reg1609) {
Obj _35reg1610 = primCdr(closureRef(co, 3));
Obj _35reg1611 = primCdr(_35reg1610);
Obj _35reg1612 = primCdr(_35reg1611);
Obj _35reg1613 = primCar(_35reg1612);
Obj c = _35reg1613;
Obj _35reg1614 = primCdr(closureRef(co, 3));
Obj _35reg1615 = primCdr(_35reg1614);
Obj _35reg1616 = primCdr(_35reg1615);
Obj _35reg1617 = primCdr(_35reg1616);
Obj _35reg1618 = primEQ(Nil, _35reg1617);
if (True == _35reg1618) {
pushCont(co, 4, _35clofun3146, 5, env, ns, import, c, a);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1187;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1187;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1187;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1187;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1187;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1187;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1644 = __arg1;
Obj _35val1643= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1645 = primCons(_35val1644, Nil);
Obj _35reg1646 = primCons(_35val1643, _35reg1645);
Obj _35reg1647 = primCons(intern("do"), _35reg1646);
__nargs = 2;
__arg1 = _35reg1647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val1643 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 6, _35clofun3146, 1, _35val1643);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc1186 = makeNative(5, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1626 = primIsCons(closureRef(co, 3));
if (True == _35reg1626) {
Obj _35reg1627 = primCar(closureRef(co, 3));
Obj _35reg1628 = primEQ(intern("do"), _35reg1627);
if (True == _35reg1628) {
Obj _35reg1629 = primCdr(closureRef(co, 3));
Obj _35reg1630 = primIsCons(_35reg1629);
if (True == _35reg1630) {
Obj _35reg1631 = primCdr(closureRef(co, 3));
Obj _35reg1632 = primCar(_35reg1631);
Obj x = _35reg1632;
Obj _35reg1633 = primCdr(closureRef(co, 3));
Obj _35reg1634 = primCdr(_35reg1633);
Obj _35reg1635 = primIsCons(_35reg1634);
if (True == _35reg1635) {
Obj _35reg1636 = primCdr(closureRef(co, 3));
Obj _35reg1637 = primCdr(_35reg1636);
Obj _35reg1638 = primCar(_35reg1637);
Obj y = _35reg1638;
Obj _35reg1639 = primCdr(closureRef(co, 3));
Obj _35reg1640 = primCdr(_35reg1639);
Obj _35reg1641 = primCdr(_35reg1640);
Obj _35reg1642 = primEQ(Nil, _35reg1641);
if (True == _35reg1642) {
pushCont(co, 7, _35clofun3146, 4, env, ns, import, y);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1186;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1186;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1186;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1186;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1186;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1653 = __arg1;
Obj _35reg1654 = primCons(intern("if"), _35val1653);
__nargs = 2;
__arg1 = _35reg1654;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val1652 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 9, _35clofun3146, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1652;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1185 = makeNative(8, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1648 = primIsCons(closureRef(co, 3));
if (True == _35reg1648) {
Obj _35reg1649 = primCar(closureRef(co, 3));
Obj _35reg1650 = primEQ(intern("if"), _35reg1649);
if (True == _35reg1650) {
Obj _35reg1651 = primCdr(closureRef(co, 3));
Obj args = _35reg1651;
pushCont(co, 10, _35clofun3146, 1, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1185;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1185;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1673 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1674 = primCons(_35val1673, Nil);
Obj _35reg1675 = primCons(args, _35reg1674);
Obj _35reg1676 = primCons(intern("lambda"), _35reg1675);
__nargs = 2;
__arg1 = _35reg1676;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val1672 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 12, _35clofun3146, 1, args);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35val1672;
__arg2 = ns;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc1184 = makeNative(11, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1655 = primIsCons(closureRef(co, 3));
if (True == _35reg1655) {
Obj _35reg1656 = primCar(closureRef(co, 3));
Obj _35reg1657 = primEQ(intern("lambda"), _35reg1656);
if (True == _35reg1657) {
Obj _35reg1658 = primCdr(closureRef(co, 3));
Obj _35reg1659 = primIsCons(_35reg1658);
if (True == _35reg1659) {
Obj _35reg1660 = primCdr(closureRef(co, 3));
Obj _35reg1661 = primCar(_35reg1660);
Obj args = _35reg1661;
Obj _35reg1662 = primCdr(closureRef(co, 3));
Obj _35reg1663 = primCdr(_35reg1662);
Obj _35reg1664 = primIsCons(_35reg1663);
if (True == _35reg1664) {
Obj _35reg1665 = primCdr(closureRef(co, 3));
Obj _35reg1666 = primCdr(_35reg1665);
Obj _35reg1667 = primCar(_35reg1666);
Obj body = _35reg1667;
Obj _35reg1668 = primCdr(closureRef(co, 3));
Obj _35reg1669 = primCdr(_35reg1668);
Obj _35reg1670 = primCdr(_35reg1669);
Obj _35reg1671 = primEQ(Nil, _35reg1670);
if (True == _35reg1671) {
pushCont(co, 13, _35clofun3146, 4, ns, import, body, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1678 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1678) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#lookup-var-h"));
__arg1 = x;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc1183 = makeNative(14, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj _35reg1677 = primIsSymbol(x);
if (True == _35reg1677) {
pushCont(co, 15, _35clofun3146, 3, x, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35cc1182 = makeNative(16, _35clofun3146, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj _35reg1679 = primIsCons(closureRef(co, 3));
if (True == _35reg1679) {
Obj _35reg1680 = primCar(closureRef(co, 3));
Obj _35reg1681 = primEQ(intern("quote"), _35reg1680);
if (True == _35reg1681) {
Obj _35reg1682 = primCdr(closureRef(co, 3));
Obj _35reg1683 = primIsCons(_35reg1682);
if (True == _35reg1683) {
Obj _35reg1684 = primCdr(closureRef(co, 3));
Obj _35reg1685 = primCar(_35reg1684);
Obj x = _35reg1685;
Obj _35reg1686 = primCdr(closureRef(co, 3));
Obj _35reg1687 = primCdr(_35reg1686);
Obj _35reg1688 = primEQ(Nil, _35reg1687);
if (True == _35reg1688) {
Obj _35reg1689 = primCons(x, Nil);
Obj _35reg1690 = primCons(intern("%const"), _35reg1689);
__nargs = 2;
__arg1 = _35reg1690;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1182;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1182;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1182;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1182;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val1700 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1181= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1700) {
if (True == True) {
Obj _35reg1701 = primCons(x, Nil);
Obj _35reg1702 = primCons(intern("%const"), _35reg1701);
__nargs = 2;
__arg1 = _35reg1702;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1181;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1703 = primCons(x, Nil);
Obj _35reg1704 = primCons(intern("%const"), _35reg1703);
__nargs = 2;
__arg1 = _35reg1704;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1181;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj _35val1697 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1181= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1697) {
if (True == True) {
Obj _35reg1698 = primCons(x, Nil);
Obj _35reg1699 = primCons(intern("%const"), _35reg1698);
__nargs = 2;
__arg1 = _35reg1699;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1181;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 18, _35clofun3146, 2, x, _35cc1181);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val1691 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1181= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1691) {
if (True == True) {
Obj _35reg1692 = primCons(x, Nil);
Obj _35reg1693 = primCons(intern("%const"), _35reg1692);
__nargs = 2;
__arg1 = _35reg1693;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1181;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg1694 = primIsString(x);
if (True == _35reg1694) {
if (True == True) {
Obj _35reg1695 = primCons(x, Nil);
Obj _35reg1696 = primCons(intern("%const"), _35reg1695);
__nargs = 2;
__arg1 = _35reg1696;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3146) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1181;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 19, _35clofun3146, 2, x, _35cc1181);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3146) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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

void _35clofun3145(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1492 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun3144, 1, ns);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val1492;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1489 = __arg1;
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1489) {
Obj _35reg1490 = primCons(s, Nil);
Obj _35reg1491 = primCons(intern("%global"), _35reg1490);
__nargs = 2;
__arg1 = _35reg1491;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3145) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 0, _35clofun3145, 1, ns);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35p1172 = __arg1;
Obj _35p1173 = __arg2;
Obj _35p1174 = __arg3;
Obj _35cc1175 = makeNative(17, _35clofun3144, 0, 3, _35p1172, _35p1173, _35p1174);
Obj s = _35p1172;
Obj ns = _35p1173;
Obj _35reg1485 = primEQ(Nil, _35p1174);
if (True == _35reg1485) {
Obj _35reg1486 = primEQ(ns, makeCString(""));
if (True == _35reg1486) {
Obj _35reg1487 = primCons(s, Nil);
Obj _35reg1488 = primCons(intern("%global"), _35reg1487);
__nargs = 2;
__arg1 = _35reg1488;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3145) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 1, _35clofun3145, 2, s, ns);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol-cooked?"));
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val1499 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1499;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc1191 = makeNative(3, _35clofun3145, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj ls = closureRef(co, 3);
pushCont(co, 4, _35clofun3145, 1, ls);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1510 = __arg1;
Obj _35reg1508= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1511 = primCons(_35reg1508, _35val1510);
__nargs = 2;
__arg1 = _35reg1511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3145) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val1509 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1508= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3145, 1, _35reg1508);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#map"));
__arg1 = _35val1509;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1516 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg1517 = primCons(_35val1516, Nil);
Obj _35reg1518 = primCons(tmp, _35reg1517);
Obj _35reg1519 = primCons(intern("lambda"), _35reg1518);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = _35reg1519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1514 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj tmp = _35val1514;
Obj _35reg1515 = primCons(op, args);
pushCont(co, 8, _35clofun3145, 4, tmp, env, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#append"));
__arg1 = _35reg1515;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1505 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj provided = _35val1505;
Obj _35reg1506 = primEQ(required, provided);
if (True == _35reg1506) {
Obj _35reg1507 = primCons(op, Nil);
Obj _35reg1508 = primCons(intern("%builtin"), _35reg1507);
pushCont(co, 7, _35clofun3145, 2, args, _35reg1508);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1512 = primGT(required, provided);
if (True == _35reg1512) {
Obj _35reg1513 = primSub(required, provided);
pushCont(co, 9, _35clofun3145, 5, op, args, env, ns, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg1513;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#error"));
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj _35val1504 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj required = _35val1504;
pushCont(co, 10, _35clofun3145, 6, required, op, args, env, ns, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1503 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35cc1190= co->ctx.stk.stack[co->ctx.stk.base + 5];
if (True == _35val1503) {
pushCont(co, 11, _35clofun3145, 5, op, args, env, ns, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1190;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc1190 = makeNative(5, _35clofun3145, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj _35reg1500 = primIsCons(closureRef(co, 3));
if (True == _35reg1500) {
Obj _35reg1501 = primCar(closureRef(co, 3));
Obj op = _35reg1501;
Obj _35reg1502 = primCdr(closureRef(co, 3));
Obj args = _35reg1502;
pushCont(co, 12, _35clofun3145, 6, op, args, env, ns, import, _35cc1190);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1190;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1542 = __arg1;
Obj _35reg1541= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1539= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1543 = primCons(_35val1542, Nil);
Obj _35reg1544 = primCons(_35reg1541, _35reg1543);
Obj _35reg1545 = primCons(_35reg1539, _35reg1544);
__nargs = 2;
__arg1 = _35reg1545;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3145) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val1551 = __arg1;
Obj _35reg1550= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1548= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1552 = primCons(_35val1551, Nil);
Obj _35reg1553 = primCons(_35reg1550, _35reg1552);
Obj _35reg1554 = primCons(_35reg1548, _35reg1553);
__nargs = 2;
__arg1 = _35reg1554;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3145) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val1563 = __arg1;
Obj _35reg1562= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1560= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1564 = primCons(_35val1563, Nil);
Obj _35reg1565 = primCons(_35reg1562, _35reg1564);
Obj _35reg1566 = primCons(_35reg1560, _35reg1565);
__nargs = 2;
__arg1 = _35reg1566;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3145) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val1558 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj var1 = _35val1558;
Obj _35reg1559 = primCons(intern("set"), Nil);
Obj _35reg1560 = primCons(intern("%builtin"), _35reg1559);
Obj _35reg1561 = primCons(var1, Nil);
Obj _35reg1562 = primCons(intern("%const"), _35reg1561);
pushCont(co, 16, _35clofun3145, 2, _35reg1562, _35reg1560);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1557 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun3145, 4, env, ns, import, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1557;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1556 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3145, 4, env, ns, import, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = ns;
__arg2 = _35val1556;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1555 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3145, 4, env, ns, import, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val1555;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3145) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3144(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1461 = __arg1;
Obj find = _35val1461;
pushCont(co, 20, _35clofun3143, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
pushCont(co, 0, _35clofun3144, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1465 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1465) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3144) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1464 = __arg1;
Obj find = _35val1464;
pushCont(co, 2, _35clofun3144, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
pushCont(co, 3, _35clofun3144, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1171 = makeNative(5, _35clofun3144, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg1467 = primSub(n, makeNumber(1));
Obj _35reg1468 = primGenSym(intern("tmp"));
Obj _35reg1469 = primCons(_35reg1468, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg1467;
__arg2 = _35reg1469;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p1168 = __arg1;
Obj _35p1169 = __arg2;
Obj _35cc1170 = makeNative(6, _35clofun3144, 0, 2, _35p1168, _35p1169);
Obj _35reg1470 = primEQ(makeNumber(0), _35p1168);
if (True == _35reg1470) {
Obj res = _35p1169;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3144) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1170;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1482 = __arg1;
Obj _35reg1483 = primCons(_35val1482, Nil);
Obj _35reg1484 = primCons(intern("%global"), _35reg1483);
__nargs = 2;
__arg1 = _35reg1484;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3144) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val1481 = __arg1;
pushCont(co, 9, _35clofun3144, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1481;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1480 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 10, _35clofun3144, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = import;
__arg2 = _35val1480;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1479 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun3144, 1, import);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = makeCString("#");
__arg2 = _35val1479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1478 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1478) {
pushCont(co, 12, _35clofun3144, 1, import);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#symbol->string"));
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#lookup-var-h"));
__arg1 = s;
__arg2 = ns;
__arg3 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1477 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj export = _35val1477;
pushCont(co, 13, _35clofun3144, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#elem?"));
__arg1 = s;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val1476 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 14, _35clofun3144, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#value-or"));
__arg1 = _35val1476;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1475 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 15, _35clofun3144, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1475;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc1176 = makeNative(8, _35clofun3144, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj _35reg1472 = primIsCons(closureRef(co, 2));
if (True == _35reg1472) {
Obj _35reg1473 = primCar(closureRef(co, 2));
Obj import = _35reg1473;
Obj _35reg1474 = primCdr(closureRef(co, 2));
Obj more = _35reg1474;
pushCont(co, 16, _35clofun3144, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1176;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val1495 = __arg1;
Obj _35reg1496 = primCons(_35val1495, Nil);
Obj _35reg1497 = primCons(intern("%global"), _35reg1496);
__nargs = 2;
__arg1 = _35reg1497;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3144) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val1494 = __arg1;
pushCont(co, 18, _35clofun3144, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#intern"));
__arg1 = _35val1494;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1493 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun3144, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#string-append"));
__arg1 = ns;
__arg2 = _35val1493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3144) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3143(struct Cora* co){
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
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc1152 = makeNative(0, _35clofun3143, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg1349 = primIsCons(closureRef(co, 1));
if (True == _35reg1349) {
Obj _35reg1350 = primCar(closureRef(co, 1));
Obj __ = _35reg1350;
Obj _35reg1351 = primCdr(closureRef(co, 1));
Obj y = _35reg1351;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1152;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1151 = makeNative(1, _35clofun3143, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg1352 = primIsCons(closureRef(co, 1));
if (True == _35reg1352) {
Obj _35reg1353 = primCar(closureRef(co, 1));
Obj _35reg1354 = primIsCons(_35reg1353);
if (True == _35reg1354) {
Obj _35reg1355 = primCar(closureRef(co, 1));
Obj _35reg1356 = primCar(_35reg1355);
Obj x = _35reg1356;
Obj _35reg1357 = primCar(closureRef(co, 1));
Obj _35reg1358 = primCdr(_35reg1357);
Obj y = _35reg1358;
Obj _35reg1359 = primCdr(closureRef(co, 1));
Obj __ = _35reg1359;
Obj _35reg1360 = primEQ(var, x);
if (True == _35reg1360) {
Obj _35reg1361 = primCons(x, y);
__nargs = 2;
__arg1 = _35reg1361;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35p1148 = __arg1;
Obj _35p1149 = __arg2;
Obj _35cc1150 = makeNative(2, _35clofun3143, 0, 2, _35p1148, _35p1149);
Obj var = _35p1148;
Obj _35reg1362 = primEQ(Nil, _35p1149);
if (True == _35reg1362) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1367 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = f;
__arg2 = _35val1367;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc1157 = makeNative(4, _35clofun3143, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg1364 = primIsCons(closureRef(co, 2));
if (True == _35reg1364) {
Obj _35reg1365 = primCar(closureRef(co, 2));
Obj x = _35reg1365;
Obj _35reg1366 = primCdr(closureRef(co, 2));
Obj y = _35reg1366;
pushCont(co, 5, _35clofun3143, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1157;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p1153 = __arg1;
Obj _35p1154 = __arg2;
Obj _35p1155 = __arg3;
Obj _35cc1156 = makeNative(6, _35clofun3143, 0, 3, _35p1153, _35p1154, _35p1155);
Obj f = _35p1153;
Obj acc = _35p1154;
Obj _35reg1368 = primEQ(Nil, _35p1155);
if (True == _35reg1368) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1156;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1163 = makeNative(8, _35clofun3143, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1370 = primIsCons(closureRef(co, 2));
if (True == _35reg1370) {
Obj _35reg1371 = primCar(closureRef(co, 2));
Obj a = _35reg1371;
Obj _35reg1372 = primCdr(closureRef(co, 2));
Obj b = _35reg1372;
Obj _35reg1373 = primAdd(pos, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#pos-in-list0"));
__arg1 = _35reg1373;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc1162 = makeNative(9, _35clofun3143, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1374 = primIsCons(closureRef(co, 2));
if (True == _35reg1374) {
Obj _35reg1375 = primCar(closureRef(co, 2));
Obj a = _35reg1375;
Obj _35reg1376 = primCdr(closureRef(co, 2));
Obj b = _35reg1376;
Obj _35reg1377 = primEQ(x, a);
if (True == _35reg1377) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1162;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1162;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p1158 = __arg1;
Obj _35p1159 = __arg2;
Obj _35p1160 = __arg3;
Obj _35cc1161 = makeNative(10, _35clofun3143, 0, 3, _35p1158, _35p1159, _35p1160);
Obj __ = _35p1158;
Obj x = _35p1159;
Obj _35reg1378 = primEQ(Nil, _35p1160);
if (True == _35reg1378) {
__nargs = 2;
__arg1 = makeNumber(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1161;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val1384 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1385 = primLT(_35val1384, makeNumber(0));
if (True == _35reg1385) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj _35cc1167 = makeNative(13, _35clofun3143, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg1381 = primIsCons(closureRef(co, 1));
if (True == _35reg1381) {
Obj _35reg1382 = primCar(closureRef(co, 1));
Obj hd = _35reg1382;
Obj _35reg1383 = primCdr(closureRef(co, 1));
Obj tl = _35reg1383;
pushCont(co, 14, _35clofun3143, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p1164 = __arg1;
Obj _35p1165 = __arg2;
Obj _35cc1166 = makeNative(15, _35clofun3143, 0, 2, _35p1164, _35p1165);
Obj x = _35p1164;
Obj _35reg1386 = primEQ(Nil, _35p1165);
if (True == _35reg1386) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1166;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val1458 = __arg1;
Obj _35reg1459 = primNot(_35val1458);
__nargs = 2;
__arg1 = _35reg1459;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val1457 = __arg1;
pushCont(co, 17, _35clofun3143, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/init#null?"));
__arg1 = _35val1457;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
pushCont(co, 18, _35clofun3143, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val1462 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1462) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3143) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cora/init#caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3143) { co->ctx.pc = ps; goto fail; };
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

