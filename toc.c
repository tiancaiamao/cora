#include "types.h"
#include "runtime.h"

void entry(struct Cora* co);
void _35clofun3962(struct Cora* co);
void _35clofun3961(struct Cora* co);
void _35clofun3960(struct Cora* co);
void _35clofun3959(struct Cora* co);
void _35clofun3958(struct Cora* co);
void _35clofun3957(struct Cora* co);
void _35clofun3956(struct Cora* co);
void _35clofun3955(struct Cora* co);
void _35clofun3954(struct Cora* co);
void _35clofun3953(struct Cora* co);
void _35clofun3952(struct Cora* co);
void _35clofun3951(struct Cora* co);
void _35clofun3950(struct Cora* co);
void _35clofun3949(struct Cora* co);
void _35clofun3948(struct Cora* co);
void _35clofun3947(struct Cora* co);
void _35clofun3946(struct Cora* co);
void _35clofun3945(struct Cora* co);
void _35clofun3944(struct Cora* co);
void _35clofun3943(struct Cora* co);
void _35clofun3942(struct Cora* co);
void _35clofun3941(struct Cora* co);
void _35clofun3940(struct Cora* co);
void _35clofun3939(struct Cora* co);


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
pushCont(co, 10, _35clofun3962, 0);
__nargs = 2;
__arg0 = globalRef(intern("import"));
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

void _35clofun3962(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3930 = __arg1;
Obj _35val3928= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val3928;
__arg2 = _35val3930;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3928 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3929 = primCdr(exp);
pushCont(co, 0, _35clofun3962, 1, _35val3928);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3929;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3937 = __arg1;
Obj _35val3935= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val3935;
__arg2 = _35val3937;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3935 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3936 = primCdr(exp);
pushCont(co, 2, _35clofun3962, 1, _35val3935);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3936;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3923 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3923) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3962) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3924 = primIsCons(exp);
if (True == _35reg3924) {
Obj _35reg3925 = primCar(exp);
Obj _35reg3926 = primEQ(_35reg3925, intern("quote"));
if (True == _35reg3926) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3927 = primCar(exp);
pushCont(co, 1, _35clofun3962, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3962) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3931 = primIsCons(exp);
if (True == _35reg3931) {
Obj _35reg3932 = primCar(exp);
Obj _35reg3933 = primEQ(_35reg3932, intern("quote"));
if (True == _35reg3933) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3934 = primCar(exp);
pushCont(co, 3, _35clofun3962, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3934;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label5:
{
Obj _35val3915 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3915) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3962) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3916 = primIsCons(exp);
if (True == _35reg3916) {
Obj _35reg3917 = primCar(exp);
Obj _35reg3918 = primEQ(_35reg3917, intern("quote"));
if (True == _35reg3918) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3919 = primCar(exp);
pushCont(co, 20, _35clofun3961, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 4, _35clofun3962, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3899 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3899) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3962) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3900 = primIsCons(exp);
if (True == _35reg3900) {
Obj _35reg3901 = primCar(exp);
Obj _35reg3902 = primEQ(_35reg3901, intern("quote"));
if (True == _35reg3902) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3903 = primCar(exp);
pushCont(co, 16, _35clofun3961, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
Obj _35reg3907 = primIsString(exp);
if (True == _35reg3907) {
if (True == True) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3962) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3908 = primIsCons(exp);
if (True == _35reg3908) {
Obj _35reg3909 = primCar(exp);
Obj _35reg3910 = primEQ(_35reg3909, intern("quote"));
if (True == _35reg3910) {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3911 = primCar(exp);
pushCont(co, 18, _35clofun3961, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#eval0"));
__arg1 = _35reg3911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
pushCont(co, 5, _35clofun3962, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label7:
{
Obj exp = __arg1;
Obj _35reg3898 = primIsSymbol(exp);
if (True == _35reg3898) {
__nargs = 2;
__arg0 = globalRef(intern("value"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 6, _35clofun3962, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3717 = __arg1;
Obj _35reg3722 = primSet(co, intern("cora/lib/toc#compile"), makeNative(5, _35clofun3957, 1, 0));
Obj _35reg3728 = primSet(co, intern("for-each"), makeNative(9, _35clofun3957, 2, 0));
Obj _35reg3735 = primSet(co, intern("cora/lib/toc#generate-jumptable"), makeNative(13, _35clofun3957, 3, 0));
Obj _35reg3756 = primSet(co, intern("cora/lib/toc#generate-toplevel-group"), makeNative(14, _35clofun3958, 2, 0));
Obj _35reg3763 = primSet(co, intern("cora/lib/toc#generate-c"), makeNative(2, _35clofun3959, 2, 0));
Obj _35reg3782 = primSet(co, intern("cora/lib/toc#handle-import-eagerly"), makeNative(6, _35clofun3959, 1, 0));
Obj _35reg3823 = primSet(co, intern("cora/lib/toc#split-type-and-code"), makeNative(13, _35clofun3959, 4, 0));
Obj _35reg3824 = primSet(co, intern("cora/lib/infer.*typecheck*"), False);
Obj _35reg3859 = primSet(co, intern("cora/lib/toc#preprocess"), makeNative(13, _35clofun3960, 2, 0));
Obj _35reg3865 = primSet(co, intern("cora/lib/toc#compile-to-c"), makeNative(19, _35clofun3960, 3, 0));
Obj _35reg3867 = primSet(co, intern("set"), makeNative(20, _35clofun3960, 2, 0));
Obj _35reg3869 = primSet(co, intern("car"), makeNative(0, _35clofun3961, 1, 0));
Obj _35reg3871 = primSet(co, intern("cdr"), makeNative(1, _35clofun3961, 1, 0));
Obj _35reg3873 = primSet(co, intern("cons"), makeNative(2, _35clofun3961, 2, 0));
Obj _35reg3875 = primSet(co, intern("cons"), makeNative(3, _35clofun3961, 2, 0));
Obj _35reg3877 = primSet(co, intern("+"), makeNative(4, _35clofun3961, 2, 0));
Obj _35reg3879 = primSet(co, intern("-"), makeNative(5, _35clofun3961, 2, 0));
Obj _35reg3881 = primSet(co, intern("*"), makeNative(6, _35clofun3961, 2, 0));
Obj _35reg3883 = primSet(co, intern("/"), makeNative(7, _35clofun3961, 2, 0));
Obj _35reg3885 = primSet(co, intern("="), makeNative(8, _35clofun3961, 2, 0));
Obj _35reg3887 = primSet(co, intern(">"), makeNative(9, _35clofun3961, 2, 0));
Obj _35reg3889 = primSet(co, intern("<"), makeNative(10, _35clofun3961, 2, 0));
Obj _35reg3891 = primSet(co, intern("gensym"), makeNative(11, _35clofun3961, 1, 0));
Obj _35reg3893 = primSet(co, intern("symbol?"), makeNative(12, _35clofun3961, 1, 0));
Obj _35reg3895 = primSet(co, intern("not"), makeNative(13, _35clofun3961, 1, 0));
Obj _35reg3897 = primSet(co, intern("string?"), makeNative(14, _35clofun3961, 1, 0));
Obj _35reg3938 = primSet(co, intern("cora/lib/toc#eval0"), makeNative(7, _35clofun3962, 1, 0));
__nargs = 2;
__arg1 = _35reg3938;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3962) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35val2221 = __arg1;
Obj _35reg2236 = primSet(co, intern("cora/lib/toc#assq"), makeNative(3, _35clofun3939, 2, 0));
Obj _35reg2242 = primSet(co, intern("cora/lib/toc#foldl"), makeNative(7, _35clofun3939, 3, 0));
Obj _35reg2252 = primSet(co, intern("cora/lib/toc#pos-in-list0"), makeNative(11, _35clofun3939, 3, 0));
Obj _35reg2253 = primSet(co, intern("cora/lib/toc#index"), makeNative(12, _35clofun3939, 2, 0));
Obj _35reg2260 = primSet(co, intern("cora/lib/toc#exist-in-env"), makeNative(16, _35clofun3939, 2, 0));
Obj _35reg2261 = primCons(intern("primSet"), Nil);
Obj _35reg2262 = primCons(makeNumber(2), _35reg2261);
Obj _35reg2263 = primCons(intern("set"), _35reg2262);
Obj _35reg2264 = primCons(intern("primCar"), Nil);
Obj _35reg2265 = primCons(makeNumber(1), _35reg2264);
Obj _35reg2266 = primCons(intern("car"), _35reg2265);
Obj _35reg2267 = primCons(intern("primCdr"), Nil);
Obj _35reg2268 = primCons(makeNumber(1), _35reg2267);
Obj _35reg2269 = primCons(intern("cdr"), _35reg2268);
Obj _35reg2270 = primCons(intern("primCons"), Nil);
Obj _35reg2271 = primCons(makeNumber(2), _35reg2270);
Obj _35reg2272 = primCons(intern("cons"), _35reg2271);
Obj _35reg2273 = primCons(intern("primIsCons"), Nil);
Obj _35reg2274 = primCons(makeNumber(1), _35reg2273);
Obj _35reg2275 = primCons(intern("cons?"), _35reg2274);
Obj _35reg2276 = primCons(intern("primAdd"), Nil);
Obj _35reg2277 = primCons(makeNumber(2), _35reg2276);
Obj _35reg2278 = primCons(intern("+"), _35reg2277);
Obj _35reg2279 = primCons(intern("primSub"), Nil);
Obj _35reg2280 = primCons(makeNumber(2), _35reg2279);
Obj _35reg2281 = primCons(intern("-"), _35reg2280);
Obj _35reg2282 = primCons(intern("primMul"), Nil);
Obj _35reg2283 = primCons(makeNumber(2), _35reg2282);
Obj _35reg2284 = primCons(intern("*"), _35reg2283);
Obj _35reg2285 = primCons(intern("primDiv"), Nil);
Obj _35reg2286 = primCons(makeNumber(2), _35reg2285);
Obj _35reg2287 = primCons(intern("/"), _35reg2286);
Obj _35reg2288 = primCons(intern("primEQ"), Nil);
Obj _35reg2289 = primCons(makeNumber(2), _35reg2288);
Obj _35reg2290 = primCons(intern("="), _35reg2289);
Obj _35reg2291 = primCons(intern("primGT"), Nil);
Obj _35reg2292 = primCons(makeNumber(2), _35reg2291);
Obj _35reg2293 = primCons(intern(">"), _35reg2292);
Obj _35reg2294 = primCons(intern("primLT"), Nil);
Obj _35reg2295 = primCons(makeNumber(2), _35reg2294);
Obj _35reg2296 = primCons(intern("<"), _35reg2295);
Obj _35reg2297 = primCons(intern("primGenSym"), Nil);
Obj _35reg2298 = primCons(makeNumber(1), _35reg2297);
Obj _35reg2299 = primCons(intern("gensym"), _35reg2298);
Obj _35reg2300 = primCons(intern("primIsSymbol"), Nil);
Obj _35reg2301 = primCons(makeNumber(1), _35reg2300);
Obj _35reg2302 = primCons(intern("symbol?"), _35reg2301);
Obj _35reg2303 = primCons(intern("primNot"), Nil);
Obj _35reg2304 = primCons(makeNumber(1), _35reg2303);
Obj _35reg2305 = primCons(intern("not"), _35reg2304);
Obj _35reg2306 = primCons(intern("primIsNumber"), Nil);
Obj _35reg2307 = primCons(makeNumber(1), _35reg2306);
Obj _35reg2308 = primCons(intern("integer?"), _35reg2307);
Obj _35reg2309 = primCons(intern("primIsString"), Nil);
Obj _35reg2310 = primCons(makeNumber(1), _35reg2309);
Obj _35reg2311 = primCons(intern("string?"), _35reg2310);
Obj _35reg2312 = primCons(_35reg2311, Nil);
Obj _35reg2313 = primCons(_35reg2308, _35reg2312);
Obj _35reg2314 = primCons(_35reg2305, _35reg2313);
Obj _35reg2315 = primCons(_35reg2302, _35reg2314);
Obj _35reg2316 = primCons(_35reg2299, _35reg2315);
Obj _35reg2317 = primCons(_35reg2296, _35reg2316);
Obj _35reg2318 = primCons(_35reg2293, _35reg2317);
Obj _35reg2319 = primCons(_35reg2290, _35reg2318);
Obj _35reg2320 = primCons(_35reg2287, _35reg2319);
Obj _35reg2321 = primCons(_35reg2284, _35reg2320);
Obj _35reg2322 = primCons(_35reg2281, _35reg2321);
Obj _35reg2323 = primCons(_35reg2278, _35reg2322);
Obj _35reg2324 = primCons(_35reg2275, _35reg2323);
Obj _35reg2325 = primCons(_35reg2272, _35reg2324);
Obj _35reg2326 = primCons(_35reg2269, _35reg2325);
Obj _35reg2327 = primCons(_35reg2266, _35reg2326);
Obj _35reg2328 = primCons(_35reg2263, _35reg2327);
Obj _35reg2329 = primSet(co, intern("cora/lib/toc#*builtin-prims*"), _35reg2328);
Obj _35reg2333 = primSet(co, intern("builtin?"), makeNative(19, _35clofun3939, 1, 0));
Obj _35reg2336 = primSet(co, intern("cora/lib/toc#builtin->name"), makeNative(1, _35clofun3940, 1, 0));
Obj _35reg2339 = primSet(co, intern("cora/lib/toc#builtin->args"), makeNative(4, _35clofun3940, 1, 0));
Obj _35reg2344 = primSet(co, intern("cora/lib/toc#temp-list"), makeNative(7, _35clofun3940, 2, 0));
Obj _35reg2480 = primSet(co, intern("cora/lib/toc#parse"), makeNative(16, _35clofun3941, 2, 0));
Obj _35reg2491 = primSet(co, intern("cora/lib/toc#union"), makeNative(1, _35clofun3942, 2, 0));
Obj _35reg2502 = primSet(co, intern("cora/lib/toc#diff"), makeNative(7, _35clofun3942, 2, 0));
Obj _35reg2553 = primSet(co, intern("cora/lib/toc#convert-protect?"), makeNative(14, _35clofun3942, 1, 0));
Obj _35reg2728 = primSet(co, intern("cora/lib/toc#free-vars"), makeNative(16, _35clofun3943, 1, 0));
Obj _35reg2801 = primSet(co, intern("cora/lib/toc#closure-convert"), makeNative(10, _35clofun3944, 2, 0));
Obj _35reg2804 = primSet(co, intern("cora/lib/toc#id"), makeNative(11, _35clofun3944, 1, 0));
Obj _35reg2941 = primSet(co, intern("cora/lib/toc#tailify"), makeNative(8, _35clofun3945, 2, 0));
Obj _35reg2988 = primSet(co, intern("cora/lib/toc#tailify-list"), makeNative(18, _35clofun3945, 3, 0));
Obj _35reg3067 = primSet(co, intern("cora/lib/toc#explicit-stack"), makeNative(15, _35clofun3946, 2, 0));
Obj _35reg3243 = primSet(co, intern("cora/lib/toc#collect-lambda"), makeNative(8, _35clofun3948, 2, 0));
Obj _35reg3256 = primSet(co, intern("cora/lib/toc#append-result"), makeNative(14, _35clofun3948, 5, 0));
Obj _35reg3263 = primSet(co, intern("cora/lib/toc#wrap-var"), makeNative(16, _35clofun3948, 2, 0));
Obj _35reg3283 = primSet(co, intern("cora/lib/toc#generate-call-list"), makeNative(9, _35clofun3949, 4, 0));
Obj _35reg3553 = primSet(co, intern("cora/lib/toc#generate-inst"), makeNative(12, _35clofun3953, 4, 0));
Obj _35reg3576 = primSet(co, intern("cora/lib/toc#generate-cont"), makeNative(4, _35clofun3954, 3, 0));
Obj _35reg3585 = primSet(co, intern("cora/lib/toc#generate-inst-list-h"), makeNative(10, _35clofun3954, 5, 0));
Obj _35reg3586 = primSet(co, intern("cora/lib/toc#generate-inst-list"), makeNative(11, _35clofun3954, 4, 0));
Obj _35reg3591 = primSet(co, intern("cora/lib/toc#code-gen-func-declare"), makeNative(15, _35clofun3954, 2, 0));
Obj _35reg3599 = primSet(co, intern("cora/lib/toc#local-from-params"), makeNative(1, _35clofun3955, 3, 0));
Obj _35reg3604 = primSet(co, intern("cora/lib/toc#local-from-cont"), makeNative(6, _35clofun3955, 3, 0));
Obj _35reg3611 = primSet(co, intern("cora/lib/toc#generate-call-args-reverse"), makeNative(10, _35clofun3955, 4, 0));
Obj _35reg3673 = primSet(co, intern("cora/lib/toc#code-gen-toplevel"), makeNative(0, _35clofun3956, 2, 0));
Obj _35reg3674 = primSet(co, intern("cora/lib/toc#parse-pass"), makeNative(1, _35clofun3956, 1, 0));
Obj _35reg3675 = primSet(co, intern("cora/lib/toc#closure-convert-pass"), makeNative(2, _35clofun3956, 1, 0));
Obj _35reg3676 = primSet(co, intern("cora/lib/toc#tailify-pass"), makeNative(3, _35clofun3956, 1, 0));
Obj _35reg3677 = primSet(co, intern("cora/lib/toc#explicit-stack-pass"), makeNative(4, _35clofun3956, 1, 0));
Obj _35reg3707 = primSet(co, intern("cora/lib/toc#collect-lambda-pass"), makeNative(15, _35clofun3956, 1, 0));
Obj _35reg3714 = primSet(co, intern("cora/lib/toc#rewrite-->macro"), makeNative(18, _35clofun3956, 2, 0));
pushCont(co, 8, _35clofun3962, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/init#add-to-*macros*"));
__arg1 = intern("->");
__arg2 = makeNative(0, _35clofun3957, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2220 = __arg1;
pushCont(co, 9, _35clofun3962, 0);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = makeCString("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3962) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3961(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35tmp2196 = __arg1;
Obj _35reg3868 = primCar(_35tmp2196);
__nargs = 2;
__arg1 = _35reg3868;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35tmp2197 = __arg1;
Obj _35reg3870 = primCdr(_35tmp2197);
__nargs = 2;
__arg1 = _35reg3870;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35tmp2199 = __arg1;
Obj _35tmp2198 = __arg2;
Obj _35reg3872 = primCons(_35tmp2199, _35tmp2198);
__nargs = 2;
__arg1 = _35reg3872;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35tmp2201 = __arg1;
Obj _35tmp2200 = __arg2;
Obj _35reg3874 = primCons(_35tmp2201, _35tmp2200);
__nargs = 2;
__arg1 = _35reg3874;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35tmp2203 = __arg1;
Obj _35tmp2202 = __arg2;
Obj _35reg3876 = primAdd(_35tmp2203, _35tmp2202);
__nargs = 2;
__arg1 = _35reg3876;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35tmp2205 = __arg1;
Obj _35tmp2204 = __arg2;
Obj _35reg3878 = primSub(_35tmp2205, _35tmp2204);
__nargs = 2;
__arg1 = _35reg3878;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35tmp2207 = __arg1;
Obj _35tmp2206 = __arg2;
Obj _35reg3880 = primMul(_35tmp2207, _35tmp2206);
__nargs = 2;
__arg1 = _35reg3880;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35tmp2209 = __arg1;
Obj _35tmp2208 = __arg2;
Obj _35reg3882 = primDiv(_35tmp2209, _35tmp2208);
__nargs = 2;
__arg1 = _35reg3882;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35tmp2211 = __arg1;
Obj _35tmp2210 = __arg2;
Obj _35reg3884 = primEQ(_35tmp2211, _35tmp2210);
__nargs = 2;
__arg1 = _35reg3884;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35tmp2213 = __arg1;
Obj _35tmp2212 = __arg2;
Obj _35reg3886 = primGT(_35tmp2213, _35tmp2212);
__nargs = 2;
__arg1 = _35reg3886;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35tmp2215 = __arg1;
Obj _35tmp2214 = __arg2;
Obj _35reg3888 = primLT(_35tmp2215, _35tmp2214);
__nargs = 2;
__arg1 = _35reg3888;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35tmp2216 = __arg1;
Obj _35reg3890 = primGenSym(_35tmp2216);
__nargs = 2;
__arg1 = _35reg3890;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35tmp2217 = __arg1;
Obj _35reg3892 = primIsSymbol(_35tmp2217);
__nargs = 2;
__arg1 = _35reg3892;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35tmp2218 = __arg1;
Obj _35reg3894 = primNot(_35tmp2218);
__nargs = 2;
__arg1 = _35reg3894;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35tmp2219 = __arg1;
Obj _35reg3896 = primIsString(_35tmp2219);
__nargs = 2;
__arg1 = _35reg3896;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3961) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val3906 = __arg1;
Obj _35val3904= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val3904;
__arg2 = _35val3906;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3961) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3904 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3905 = primCdr(exp);
pushCont(co, 15, _35clofun3961, 1, _35val3904);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3905;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3961) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3914 = __arg1;
Obj _35val3912= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val3912;
__arg2 = _35val3914;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3961) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3912 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3913 = primCdr(exp);
pushCont(co, 17, _35clofun3961, 1, _35val3912);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3913;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3961) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3922 = __arg1;
Obj _35val3920= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("apply"));
__arg1 = _35val3920;
__arg2 = _35val3922;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3961) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3920 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3921 = primCdr(exp);
pushCont(co, 19, _35clofun3961, 1, _35val3920);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#eval0"));
__arg2 = _35reg3921;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3961) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3960(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 20, _35clofun3959, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3843 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg3843;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj _35val3840 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(0, _35clofun3960, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3846 = __arg1;
Obj _35reg3847 = primCons(intern("begin"), _35val3846);
__nargs = 2;
__arg1 = _35reg3847;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 2, _35clofun3960, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3848 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg3848;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35val3845 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(3, _35clofun3960, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3851 = __arg1;
Obj _35reg3852 = primCons(intern("begin"), _35val3851);
__nargs = 2;
__arg1 = _35reg3852;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 5, _35clofun3960, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3853 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg3853;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj _35val3850 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(6, _35clofun3960, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3856 = __arg1;
Obj _35reg3857 = primCons(intern("begin"), _35val3856);
__nargs = 2;
__arg1 = _35reg3857;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 8, _35clofun3960, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3858 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg3858;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label10:
{
Obj _35val3855 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(9, _35clofun3960, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3826 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3826) {
Obj _35reg3827 = primCar(sexp);
Obj _35reg3828 = primEQ(intern("begin"), _35reg3827);
if (True == _35reg3828) {
if (True == True) {
Obj _35reg3829 = primCdr(sexp);
Obj sexp1 = _35reg3829;
pushCont(co, 16, _35clofun3959, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3834 = primCons(sexp, Nil);
Obj sexp1 = _35reg3834;
pushCont(co, 19, _35clofun3959, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg3839 = primCdr(sexp);
Obj sexp1 = _35reg3839;
pushCont(co, 1, _35clofun3960, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3844 = primCons(sexp, Nil);
Obj sexp1 = _35reg3844;
pushCont(co, 4, _35clofun3960, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg3849 = primCdr(sexp);
Obj sexp1 = _35reg3849;
pushCont(co, 7, _35clofun3960, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3854 = primCons(sexp, Nil);
Obj sexp1 = _35reg3854;
pushCont(co, 10, _35clofun3960, 1, sexp1);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label12:
{
Obj _35val3825 = __arg1;
Obj sexp = _35val3825;
pushCont(co, 11, _35clofun3960, 1, sexp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj file_45path = __arg1;
Obj pkg_45str = __arg2;
pushCont(co, 12, _35clofun3960, 0);
__nargs = 3;
__arg0 = globalRef(intern("read-file-as-sexp"));
__arg1 = file_45path;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3864 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#close-output-file"));
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3863 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stream = _35val3863;
pushCont(co, 14, _35clofun3960, 1, stream);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-c"));
__arg1 = stream;
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3862 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc = _35val3862;
pushCont(co, 15, _35clofun3960, 1, bc);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#open-output-file"));
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3861 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj input = _35val3861;
pushCont(co, 16, _35clofun3960, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#compile"));
__arg1 = input;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3860 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj sexp1 = _35val3860;
pushCont(co, 17, _35clofun3960, 1, to);
__nargs = 2;
__arg0 = globalRef(intern("macroexpand"));
__arg1 = sexp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj from = __arg1;
Obj to = __arg2;
Obj pkg_45str = __arg3;
pushCont(co, 18, _35clofun3960, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#preprocess"));
__arg1 = from;
__arg2 = pkg_45str;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3960) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35tmp2195 = __arg1;
Obj _35tmp2194 = __arg2;
Obj _35reg3866 = primSet(co, _35tmp2195, _35tmp2194);
__nargs = 2;
__arg1 = _35reg3866;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3960) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3959(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3758 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 20, _35clofun3958, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(17, _35clofun3958, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3757 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3959, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj to = __arg1;
Obj bc = __arg2;
pushCont(co, 1, _35clofun3959, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc2185 = makeNative(3, _35clofun3959, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3959) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val3781 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#handle-import-eagerly"));
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35p2183 = __arg1;
Obj _35cc2184 = makeNative(4, _35clofun3959, 0, 1, _35p2183);
Obj _35reg3764 = primIsCons(_35p2183);
if (True == _35reg3764) {
Obj _35reg3765 = primCar(_35p2183);
Obj _35reg3766 = primIsCons(_35reg3765);
if (True == _35reg3766) {
Obj _35reg3767 = primCar(_35p2183);
Obj _35reg3768 = primCar(_35reg3767);
Obj _35reg3769 = primEQ(intern("import"), _35reg3768);
if (True == _35reg3769) {
Obj _35reg3770 = primCar(_35p2183);
Obj _35reg3771 = primCdr(_35reg3770);
Obj _35reg3772 = primIsCons(_35reg3771);
if (True == _35reg3772) {
Obj _35reg3773 = primCar(_35p2183);
Obj _35reg3774 = primCdr(_35reg3773);
Obj _35reg3775 = primCar(_35reg3774);
Obj pkg = _35reg3775;
Obj _35reg3776 = primCar(_35p2183);
Obj _35reg3777 = primCdr(_35reg3776);
Obj _35reg3778 = primCdr(_35reg3777);
Obj _35reg3779 = primEQ(Nil, _35reg3778);
if (True == _35reg3779) {
Obj _35reg3780 = primCdr(_35p2183);
Obj remain = _35reg3780;
pushCont(co, 5, _35clofun3959, 1, remain);
__nargs = 2;
__arg0 = globalRef(intern("import"));
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2184;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc2193 = makeNative(7, _35clofun3959, 0, 0);
Obj _35reg3783 = primIsCons(closureRef(co, 0));
if (True == _35reg3783) {
Obj _35reg3784 = primCar(closureRef(co, 0));
Obj exp = _35reg3784;
Obj _35reg3785 = primCdr(closureRef(co, 0));
Obj more = _35reg3785;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3786 = primCons(exp, Nil);
Obj _35reg3787 = primCons(intern("backquote"), _35reg3786);
Obj _35reg3788 = primCons(_35reg3787, Nil);
Obj _35reg3789 = primCons(intern("macroexpand"), _35reg3788);
Obj _35reg3790 = primCons(intern("tvar"), Nil);
Obj _35reg3791 = primCons(Nil, Nil);
Obj _35reg3792 = primCons(Nil, _35reg3791);
Obj _35reg3793 = primCons(_35reg3790, _35reg3792);
Obj _35reg3794 = primCons(_35reg3789, _35reg3793);
Obj _35reg3795 = primCons(intern("cora/lib/infer.check-type"), _35reg3794);
Obj _35reg3796 = primCons(_35reg3795, type);
Obj _35reg3797 = primCons(exp, code);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3796;
__arg3 = _35reg3797;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2193;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc2192 = makeNative(8, _35clofun3959, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3798 = primIsCons(closureRef(co, 0));
if (True == _35reg3798) {
Obj _35reg3799 = primCar(closureRef(co, 0));
Obj _35reg3800 = primIsCons(_35reg3799);
if (True == _35reg3800) {
Obj _35reg3801 = primCar(closureRef(co, 0));
Obj _35reg3802 = primCar(_35reg3801);
Obj _35reg3803 = primEQ(intern(":declare"), _35reg3802);
if (True == _35reg3803) {
Obj _35reg3804 = primCar(closureRef(co, 0));
Obj _35reg3805 = primCdr(_35reg3804);
Obj exp = _35reg3805;
Obj _35reg3806 = primCdr(closureRef(co, 0));
Obj more = _35reg3806;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3807 = primCons(intern("declare"), exp);
Obj _35reg3808 = primCons(_35reg3807, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3808;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2192;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2192;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2192;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc2191 = makeNative(9, _35clofun3959, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3809 = primIsCons(closureRef(co, 0));
if (True == _35reg3809) {
Obj _35reg3810 = primCar(closureRef(co, 0));
Obj _35reg3811 = primIsCons(_35reg3810);
if (True == _35reg3811) {
Obj _35reg3812 = primCar(closureRef(co, 0));
Obj _35reg3813 = primCar(_35reg3812);
Obj _35reg3814 = primEQ(intern(":type"), _35reg3813);
if (True == _35reg3814) {
Obj _35reg3815 = primCar(closureRef(co, 0));
Obj _35reg3816 = primCdr(_35reg3815);
Obj exp = _35reg3816;
Obj _35reg3817 = primCdr(closureRef(co, 0));
Obj more = _35reg3817;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3818 = primCons(intern("begin"), exp);
Obj _35reg3819 = primCons(_35reg3818, type);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = more;
__arg2 = _35reg3819;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val3822 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val3821= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val3821;
__arg2 = _35val3822;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3821 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3959, 2, k, _35val3821);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35p2186 = __arg1;
Obj _35p2187 = __arg2;
Obj _35p2188 = __arg3;
Obj _35p2189 = co->args[4];
Obj _35cc2190 = makeNative(10, _35clofun3959, 0, 4, _35p2186, _35p2187, _35p2188, _35p2189);
Obj _35reg3820 = primEQ(Nil, _35p2186);
if (True == _35reg3820) {
Obj type = _35p2187;
Obj code = _35p2188;
Obj k = _35p2189;
pushCont(co, 12, _35clofun3959, 2, code, k);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2190;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3831 = __arg1;
Obj _35reg3832 = primCons(intern("begin"), _35val3831);
__nargs = 2;
__arg1 = _35reg3832;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3959) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 14, _35clofun3959, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3833 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg3833;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3959) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label16:
{
Obj _35val3830 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(15, _35clofun3959, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3836 = __arg1;
Obj _35reg3837 = primCons(intern("begin"), _35val3836);
__nargs = 2;
__arg1 = _35reg3837;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3959) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(intern("cora/lib/infer.*typecheck*"))) {
pushCont(co, 17, _35clofun3959, 0);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3838 = primCons(intern("begin"), code);
__nargs = 2;
__arg1 = _35reg3838;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3959) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label19:
{
Obj _35val3835 = __arg1;
Obj sexp1= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#split-type-and-code"));
__arg1 = sexp1;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(18, _35clofun3959, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3959) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3841 = __arg1;
Obj _35reg3842 = primCons(intern("begin"), _35val3841);
__nargs = 2;
__arg1 = _35reg3842;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3959) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3958(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3749 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 20, _35clofun3957, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3748 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 0, _35clofun3958, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(14, _35clofun3957, 1, 1, to);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3747 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3746 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3745 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun3958, 2, group, to);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = makeNumber(0);
__arg3 = _35val3745;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3744 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 4, _35clofun3958, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3743 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3742 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3741 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3740 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3739 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3738 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3737 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3736 = __arg1;
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3958, 2, group, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = to;
__arg2 = _35val3736;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj to = __arg1;
Obj group = __arg2;
pushCont(co, 13, _35clofun3958, 2, group, to);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3760 = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 0);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3759 = __arg1;
pushCont(co, 15, _35clofun3958, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-func-declare"));
__arg1 = closureRef(co, 0);
__arg2 = _35val3759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj group = __arg1;
pushCont(co, 16, _35clofun3958, 0);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj group = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#generate-toplevel-group"));
__arg1 = closureRef(co, 0);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3762 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(18, _35clofun3958, 1, 1, to);
__arg2 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3761 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun3958, 2, to, bc);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3958) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3957(struct Cora* co){
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
pushCont(co, 20, _35clofun3956, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3721 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda-pass"));
__arg1 = _35val3721;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3720 = __arg1;
pushCont(co, 1, _35clofun3957, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack-pass"));
__arg1 = _35val3720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3719 = __arg1;
pushCont(co, 2, _35clofun3957, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#tailify-pass"));
__arg1 = _35val3719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3718 = __arg1;
pushCont(co, 3, _35clofun3957, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert-pass"));
__arg1 = _35val3718;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj exp = __arg1;
pushCont(co, 4, _35clofun3957, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse-pass"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3726 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc2182 = makeNative(6, _35clofun3957, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg3723 = primIsCons(closureRef(co, 1));
if (True == _35reg3723) {
Obj _35reg3724 = primCar(closureRef(co, 1));
Obj x = _35reg3724;
Obj _35reg3725 = primCdr(closureRef(co, 1));
Obj y = _35reg3725;
pushCont(co, 7, _35clofun3957, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2182;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p2179 = __arg1;
Obj _35p2180 = __arg2;
Obj _35cc2181 = makeNative(8, _35clofun3957, 0, 2, _35p2179, _35p2180);
Obj fn = _35p2179;
Obj _35reg3727 = primEQ(Nil, _35p2180);
if (True == _35reg3727) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3957) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2181;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val3730 = __arg1;
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
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3733 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3734 = primAdd(i, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-jumptable"));
__arg1 = to;
__arg2 = _35reg3734;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3732 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 11, _35clofun3957, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg3729 = primEQ(i, makeNumber(0));
if (True == _35reg3729) {
pushCont(co, 10, _35clofun3957, 2, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3731 = primLT(i, n);
if (True == _35reg3731) {
pushCont(co, 12, _35clofun3957, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3957) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label14:
{
Obj x = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#code-gen-toplevel"));
__arg1 = closureRef(co, 0);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3755 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3754 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 15, _35clofun3957, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3753 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 16, _35clofun3957, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3752 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 17, _35clofun3957, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3751 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun3957, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3750 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 19, _35clofun3957, 1, to);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3957) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3956(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35p2171 = __arg1;
Obj _35p2172 = __arg2;
Obj _35cc2173 = makeNative(14, _35clofun3955, 0, 2, _35p2171, _35p2172);
Obj w = _35p2171;
Obj _35reg3614 = primIsCons(_35p2172);
if (True == _35reg3614) {
Obj _35reg3615 = primCar(_35p2172);
Obj label = _35reg3615;
Obj _35reg3616 = primCdr(_35p2172);
Obj _35reg3617 = primIsCons(_35reg3616);
if (True == _35reg3617) {
Obj _35reg3618 = primCdr(_35p2172);
Obj _35reg3619 = primCar(_35reg3618);
Obj _35reg3620 = primIsCons(_35reg3619);
if (True == _35reg3620) {
Obj _35reg3621 = primCdr(_35p2172);
Obj _35reg3622 = primCar(_35reg3621);
Obj _35reg3623 = primCar(_35reg3622);
Obj _35reg3624 = primEQ(intern("lambda"), _35reg3623);
if (True == _35reg3624) {
Obj _35reg3625 = primCdr(_35p2172);
Obj _35reg3626 = primCar(_35reg3625);
Obj _35reg3627 = primCdr(_35reg3626);
Obj _35reg3628 = primIsCons(_35reg3627);
if (True == _35reg3628) {
Obj _35reg3629 = primCdr(_35p2172);
Obj _35reg3630 = primCar(_35reg3629);
Obj _35reg3631 = primCdr(_35reg3630);
Obj _35reg3632 = primCar(_35reg3631);
Obj params = _35reg3632;
Obj _35reg3633 = primCdr(_35p2172);
Obj _35reg3634 = primCar(_35reg3633);
Obj _35reg3635 = primCdr(_35reg3634);
Obj _35reg3636 = primCdr(_35reg3635);
Obj _35reg3637 = primIsCons(_35reg3636);
if (True == _35reg3637) {
Obj _35reg3638 = primCdr(_35p2172);
Obj _35reg3639 = primCar(_35reg3638);
Obj _35reg3640 = primCdr(_35reg3639);
Obj _35reg3641 = primCdr(_35reg3640);
Obj _35reg3642 = primCar(_35reg3641);
Obj actives = _35reg3642;
Obj _35reg3643 = primCdr(_35p2172);
Obj _35reg3644 = primCar(_35reg3643);
Obj _35reg3645 = primCdr(_35reg3644);
Obj _35reg3646 = primCdr(_35reg3645);
Obj _35reg3647 = primCdr(_35reg3646);
Obj _35reg3648 = primIsCons(_35reg3647);
if (True == _35reg3648) {
Obj _35reg3649 = primCdr(_35p2172);
Obj _35reg3650 = primCar(_35reg3649);
Obj _35reg3651 = primCdr(_35reg3650);
Obj _35reg3652 = primCdr(_35reg3651);
Obj _35reg3653 = primCdr(_35reg3652);
Obj _35reg3654 = primCar(_35reg3653);
Obj body = _35reg3654;
Obj _35reg3655 = primCdr(_35p2172);
Obj _35reg3656 = primCar(_35reg3655);
Obj _35reg3657 = primCdr(_35reg3656);
Obj _35reg3658 = primCdr(_35reg3657);
Obj _35reg3659 = primCdr(_35reg3658);
Obj _35reg3660 = primCdr(_35reg3659);
Obj _35reg3661 = primEQ(Nil, _35reg3660);
if (True == _35reg3661) {
Obj _35reg3662 = primCdr(_35p2172);
Obj _35reg3663 = primCdr(_35reg3662);
Obj _35reg3664 = primEQ(Nil, _35reg3663);
if (True == _35reg3664) {
pushCont(co, 20, _35clofun3955, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = exp;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3685 = __arg1;
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res = _35val3685;
Obj _35reg3686 = primCons(intern("entry"), makeNumber(0));
Obj _35reg3687 = primCons(e1, Nil);
Obj _35reg3688 = primCons(Nil, _35reg3687);
Obj _35reg3689 = primCons(Nil, _35reg3688);
Obj _35reg3690 = primCons(intern("lambda"), _35reg3689);
Obj _35reg3691 = primCons(_35reg3690, Nil);
Obj _35reg3692 = primCons(_35reg3686, _35reg3691);
Obj _35reg3693 = primCons(_35reg3692, Nil);
Obj _35reg3694 = primCons(_35reg3693, res);
__nargs = 2;
__arg1 = _35reg3694;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3956) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val3696 = __arg1;
Obj _35val3695= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3697 = primCons(_35val3695, _35val3696);
Obj res = _35reg3697;
Obj _35reg3698 = primCons(intern("entry"), makeNumber(0));
Obj _35reg3699 = primCons(e1, Nil);
Obj _35reg3700 = primCons(Nil, _35reg3699);
Obj _35reg3701 = primCons(Nil, _35reg3700);
Obj _35reg3702 = primCons(intern("lambda"), _35reg3701);
Obj _35reg3703 = primCons(_35reg3702, Nil);
Obj _35reg3704 = primCons(_35reg3698, _35reg3703);
Obj _35reg3705 = primCons(_35reg3704, Nil);
Obj _35reg3706 = primCons(_35reg3705, res);
__nargs = 2;
__arg1 = _35reg3706;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3956) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj _35val3695 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3956, 2, _35val3695, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3684 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3684) {
pushCont(co, 5, _35clofun3956, 1, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 7, _35clofun3956, 2, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3683 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur = _35val3683;
pushCont(co, 8, _35clofun3956, 3, cur, v, e1);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3682 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val3682;
pushCont(co, 9, _35clofun3956, 2, v, e1);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3681 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 10, _35clofun3956, 1, v);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3680 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3956, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3679 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3956, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3678 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val3678;
pushCont(co, 13, _35clofun3956, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
pushCont(co, 14, _35clofun3956, 1, exp);
__nargs = 2;
__arg0 = globalRef(intern("vector"));
__arg1 = makeNumber(3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc2178 = makeNative(16, _35clofun3956, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg3708 = primIsCons(closureRef(co, 1));
if (True == _35reg3708) {
Obj _35reg3709 = primCar(closureRef(co, 1));
Obj hd = _35reg3709;
Obj _35reg3710 = primCdr(closureRef(co, 1));
Obj more = _35reg3710;
Obj _35reg3711 = primCons(obj, Nil);
Obj _35reg3712 = primCons(hd, _35reg3711);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = _35reg3712;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2178;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35p2175 = __arg1;
Obj _35p2176 = __arg2;
Obj _35cc2177 = makeNative(17, _35clofun3956, 0, 2, _35p2175, _35p2176);
Obj obj = _35p2175;
Obj _35reg3713 = primEQ(Nil, _35p2176);
if (True == _35reg3713) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3956) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2177;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val3716 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val3716;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#rewrite-->macro"));
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3715 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val3715;
pushCont(co, 19, _35clofun3956, 1, obj);
__nargs = 2;
__arg0 = globalRef(intern("cddr"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3956) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3955(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3592 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun3954, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 0, _35clofun3955, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3603 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3602 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3955, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3601 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 3, _35clofun3955, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3600 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 4, _35clofun3955, 2, i, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = intern("ignore");
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 5, _35clofun3955, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3608 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3609 = primAdd(idx, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg3609;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2170 = makeNative(7, _35clofun3955, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg3605 = primIsCons(closureRef(co, 3));
if (True == _35reg3605) {
Obj _35reg3606 = primCar(closureRef(co, 3));
Obj a = _35reg3606;
Obj _35reg3607 = primCdr(closureRef(co, 3));
Obj b = _35reg3607;
pushCont(co, 8, _35clofun3955, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2170;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p2165 = __arg1;
Obj _35p2166 = __arg2;
Obj _35p2167 = __arg3;
Obj _35p2168 = co->args[4];
Obj _35cc2169 = makeNative(9, _35clofun3955, 0, 4, _35p2165, _35p2166, _35p2167, _35p2168);
Obj fn = _35p2165;
Obj w = _35p2166;
Obj idx = _35p2167;
Obj _35reg3610 = primEQ(Nil, _35p2168);
if (True == _35reg3610) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3955) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2169;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3613 = __arg1;
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3612 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 12, _35clofun3955, 0);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc2174 = makeNative(11, _35clofun3955, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
pushCont(co, 13, _35clofun3955, 1, other);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/io#display"));
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3672 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3670 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3671 = primCar(label);
pushCont(co, 15, _35clofun3955, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = _35reg3671;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3669 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 16, _35clofun3955, 4, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-cont"));
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3668 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 17, _35clofun3955, 5, actives, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-args-reverse"));
__arg1 = globalRef(intern("cora/lib/toc#local-from-params"));
__arg2 = w;
__arg3 = makeNumber(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3667 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 18, _35clofun3955, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3665 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3666 = primCdr(label);
pushCont(co, 19, _35clofun3955, 5, actives, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg3666;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3955) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3954(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3568 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun3953, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3566 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3567 = primCar(label);
pushCont(co, 0, _35clofun3954, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg3567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3565 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun3954, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3563 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3564 = primCdr(label);
pushCont(co, 2, _35clofun3954, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg3564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35p2154 = __arg1;
Obj _35p2155 = __arg2;
Obj _35p2156 = __arg3;
Obj _35cc2157 = makeNative(13, _35clofun3953, 0, 0);
Obj self = _35p2154;
Obj w = _35p2155;
Obj _35reg3554 = primIsCons(_35p2156);
if (True == _35reg3554) {
Obj _35reg3555 = primCar(_35p2156);
Obj _35reg3556 = primEQ(intern("%continuation"), _35reg3555);
if (True == _35reg3556) {
Obj _35reg3557 = primCdr(_35p2156);
Obj _35reg3558 = primIsCons(_35reg3557);
if (True == _35reg3558) {
Obj _35reg3559 = primCdr(_35p2156);
Obj _35reg3560 = primCar(_35reg3559);
Obj label = _35reg3560;
Obj _35reg3561 = primCdr(_35p2156);
Obj _35reg3562 = primCdr(_35reg3561);
Obj stacks = _35reg3562;
pushCont(co, 3, _35clofun3954, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2157;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2157;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2157;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3583 = __arg1;
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
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3581 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3582 = primNot(_35val3581);
if (True == _35reg3582) {
pushCont(co, 6, _35clofun3954, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3580 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 7, _35clofun3954, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2164 = makeNative(5, _35clofun3954, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg3577 = primIsCons(closureRef(co, 4));
if (True == _35reg3577) {
Obj _35reg3578 = primCar(closureRef(co, 4));
Obj a = _35reg3578;
Obj _35reg3579 = primCdr(closureRef(co, 4));
Obj b = _35reg3579;
pushCont(co, 8, _35clofun3954, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2164;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p2158 = __arg1;
Obj _35p2159 = __arg2;
Obj _35p2160 = __arg3;
Obj _35p2161 = co->args[4];
Obj _35p2162 = co->args[5];
Obj _35cc2163 = makeNative(9, _35clofun3954, 0, 5, _35p2158, _35p2159, _35p2160, _35p2161, _35p2162);
Obj self = _35p2158;
Obj env = _35p2159;
Obj fn = _35p2160;
Obj w = _35p2161;
Obj _35reg3584 = primEQ(Nil, _35p2162);
if (True == _35reg3584) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3954) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2163;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
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
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3590 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3589 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 12, _35clofun3954, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3587 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3588 = primCar(label);
pushCont(co, 13, _35clofun3954, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg3588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj w = __arg1;
Obj label = __arg2;
pushCont(co, 14, _35clofun3954, 2, label, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3596 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3595 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3954, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3598 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3597 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 18, _35clofun3954, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3593 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3594 = primLT(i, makeNumber(4));
if (True == _35reg3594) {
pushCont(co, 17, _35clofun3954, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun3954, 2, i, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3954) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3953(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3505 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3505) {
pushCont(co, 17, _35clofun3952, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeNumber(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3508 = primIsString(x);
if (True == _35reg3508) {
pushCont(co, 20, _35clofun3952, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3512 = primEQ(x, Nil);
if (True == _35reg3512) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3513 = primEQ(x, True);
if (True == _35reg3513) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3514 = primEQ(x, False);
if (True == _35reg3514) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label1:
{
Obj _35cc2144 = makeNative(12, _35clofun3952, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3491 = primIsCons(closureRef(co, 3));
if (True == _35reg3491) {
Obj _35reg3492 = primCar(closureRef(co, 3));
Obj _35reg3493 = primEQ(intern("%const"), _35reg3492);
if (True == _35reg3493) {
Obj _35reg3494 = primCdr(closureRef(co, 3));
Obj _35reg3495 = primIsCons(_35reg3494);
if (True == _35reg3495) {
Obj _35reg3496 = primCdr(closureRef(co, 3));
Obj _35reg3497 = primCar(_35reg3496);
Obj x = _35reg3497;
Obj _35reg3498 = primCdr(closureRef(co, 3));
Obj _35reg3499 = primCdr(_35reg3498);
Obj _35reg3500 = primEQ(Nil, _35reg3499);
if (True == _35reg3500) {
Obj _35reg3501 = primIsSymbol(x);
if (True == _35reg3501) {
pushCont(co, 15, _35clofun3952, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 0, _35clofun3953, 2, x, w);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2144;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2144;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2144;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2144;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val3526 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3525 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3953, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc2143 = makeNative(1, _35clofun3953, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3515 = primIsCons(closureRef(co, 3));
if (True == _35reg3515) {
Obj _35reg3516 = primCar(closureRef(co, 3));
Obj _35reg3517 = primEQ(intern("%stack-ref"), _35reg3516);
if (True == _35reg3517) {
Obj _35reg3518 = primCdr(closureRef(co, 3));
Obj _35reg3519 = primIsCons(_35reg3518);
if (True == _35reg3519) {
Obj _35reg3520 = primCdr(closureRef(co, 3));
Obj _35reg3521 = primCar(_35reg3520);
Obj idx = _35reg3521;
Obj _35reg3522 = primCdr(closureRef(co, 3));
Obj _35reg3523 = primCdr(_35reg3522);
Obj _35reg3524 = primEQ(Nil, _35reg3523);
if (True == _35reg3524) {
pushCont(co, 3, _35clofun3953, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3538 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3537 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3953, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc2142 = makeNative(4, _35clofun3953, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3527 = primIsCons(closureRef(co, 3));
if (True == _35reg3527) {
Obj _35reg3528 = primCar(closureRef(co, 3));
Obj _35reg3529 = primEQ(intern("%closure-ref"), _35reg3528);
if (True == _35reg3529) {
Obj _35reg3530 = primCdr(closureRef(co, 3));
Obj _35reg3531 = primIsCons(_35reg3530);
if (True == _35reg3531) {
Obj _35reg3532 = primCdr(closureRef(co, 3));
Obj _35reg3533 = primCar(_35reg3532);
Obj idx = _35reg3533;
Obj _35reg3534 = primCdr(closureRef(co, 3));
Obj _35reg3535 = primCdr(_35reg3534);
Obj _35reg3536 = primEQ(Nil, _35reg3535);
if (True == _35reg3536) {
pushCont(co, 6, _35clofun3953, 2, idx, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2142;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3551 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\"))");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3550 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 8, _35clofun3953, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val3550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3549 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3953, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2141 = makeNative(7, _35clofun3953, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3539 = primIsCons(closureRef(co, 3));
if (True == _35reg3539) {
Obj _35reg3540 = primCar(closureRef(co, 3));
Obj _35reg3541 = primEQ(intern("%global"), _35reg3540);
if (True == _35reg3541) {
Obj _35reg3542 = primCdr(closureRef(co, 3));
Obj _35reg3543 = primIsCons(_35reg3542);
if (True == _35reg3543) {
Obj _35reg3544 = primCdr(closureRef(co, 3));
Obj _35reg3545 = primCar(_35reg3544);
Obj x = _35reg3545;
Obj _35reg3546 = primCdr(closureRef(co, 3));
Obj _35reg3547 = primCdr(_35reg3546);
Obj _35reg3548 = primEQ(Nil, _35reg3547);
if (True == _35reg3548) {
pushCont(co, 10, _35clofun3953, 2, x, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("globalRef(intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35p2136 = __arg1;
Obj _35p2137 = __arg2;
Obj _35p2138 = __arg3;
Obj _35p2139 = co->args[4];
Obj _35cc2140 = makeNative(11, _35clofun3953, 0, 4, _35p2136, _35p2137, _35p2138, _35p2139);
Obj self = _35p2136;
Obj env = _35p2137;
Obj w = _35p2138;
Obj x = _35p2139;
Obj _35reg3552 = primIsSymbol(x);
if (True == _35reg3552) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3574 = __arg1;
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
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
pushCont(co, 14, _35clofun3953, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3575 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3572 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3573 = primNot(_35val3572);
if (True == _35reg3573) {
pushCont(co, 16, _35clofun3953, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("for-each"));
__arg1 = makeNative(15, _35clofun3953, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val3571 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 17, _35clofun3953, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3570 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 18, _35clofun3953, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val3570;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3569 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 19, _35clofun3953, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3953) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3952(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3445 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun3951, 5, f, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35val3445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2146 = makeNative(15, _35clofun3951, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3428 = primIsCons(closureRef(co, 3));
if (True == _35reg3428) {
Obj _35reg3429 = primCar(closureRef(co, 3));
Obj _35reg3430 = primIsCons(_35reg3429);
if (True == _35reg3430) {
Obj _35reg3431 = primCar(closureRef(co, 3));
Obj _35reg3432 = primCar(_35reg3431);
Obj _35reg3433 = primEQ(intern("%builtin"), _35reg3432);
if (True == _35reg3433) {
Obj _35reg3434 = primCar(closureRef(co, 3));
Obj _35reg3435 = primCdr(_35reg3434);
Obj _35reg3436 = primIsCons(_35reg3435);
if (True == _35reg3436) {
Obj _35reg3437 = primCar(closureRef(co, 3));
Obj _35reg3438 = primCdr(_35reg3437);
Obj _35reg3439 = primCar(_35reg3438);
Obj f = _35reg3439;
Obj _35reg3440 = primCar(closureRef(co, 3));
Obj _35reg3441 = primCdr(_35reg3440);
Obj _35reg3442 = primCdr(_35reg3441);
Obj _35reg3443 = primEQ(Nil, _35reg3442);
if (True == _35reg3443) {
Obj _35reg3444 = primCdr(closureRef(co, 3));
Obj args = _35reg3444;
pushCont(co, 0, _35clofun3952, 5, f, self, env, args, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->name"));
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2146;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2146;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2146;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2146;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2146;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val3484 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3485 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = _35reg3485;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3483 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun3952, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3482 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 3, _35clofun3952, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3481 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 4, _35clofun3952, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3480 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 5, _35clofun3952, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3489 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3490 = primCons(a, env);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = _35reg3490;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3488 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 7, _35clofun3952, 5, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3487 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 8, _35clofun3952, 5, a, env, self, w, c);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3486 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 9, _35clofun3952, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3478 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj idx = _35val3478;
Obj _35reg3479 = primLT(idx, makeNumber(0));
if (True == _35reg3479) {
pushCont(co, 6, _35clofun3952, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 10, _35clofun3952, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc2145 = makeNative(1, _35clofun3952, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3452 = primIsCons(closureRef(co, 3));
if (True == _35reg3452) {
Obj _35reg3453 = primCar(closureRef(co, 3));
Obj _35reg3454 = primEQ(intern("let"), _35reg3453);
if (True == _35reg3454) {
Obj _35reg3455 = primCdr(closureRef(co, 3));
Obj _35reg3456 = primIsCons(_35reg3455);
if (True == _35reg3456) {
Obj _35reg3457 = primCdr(closureRef(co, 3));
Obj _35reg3458 = primCar(_35reg3457);
Obj a = _35reg3458;
Obj _35reg3459 = primCdr(closureRef(co, 3));
Obj _35reg3460 = primCdr(_35reg3459);
Obj _35reg3461 = primIsCons(_35reg3460);
if (True == _35reg3461) {
Obj _35reg3462 = primCdr(closureRef(co, 3));
Obj _35reg3463 = primCdr(_35reg3462);
Obj _35reg3464 = primCar(_35reg3463);
Obj b = _35reg3464;
Obj _35reg3465 = primCdr(closureRef(co, 3));
Obj _35reg3466 = primCdr(_35reg3465);
Obj _35reg3467 = primCdr(_35reg3466);
Obj _35reg3468 = primIsCons(_35reg3467);
if (True == _35reg3468) {
Obj _35reg3469 = primCdr(closureRef(co, 3));
Obj _35reg3470 = primCdr(_35reg3469);
Obj _35reg3471 = primCdr(_35reg3470);
Obj _35reg3472 = primCar(_35reg3471);
Obj c = _35reg3472;
Obj _35reg3473 = primCdr(closureRef(co, 3));
Obj _35reg3474 = primCdr(_35reg3473);
Obj _35reg3475 = primCdr(_35reg3474);
Obj _35reg3476 = primCdr(_35reg3475);
Obj _35reg3477 = primEQ(Nil, _35reg3476);
if (True == _35reg3477) {
pushCont(co, 11, _35clofun3952, 6, b, a, env, self, w, c);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = a;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2145;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val3504 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3503 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 13, _35clofun3952, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val3503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3502 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun3952, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("symbol->string"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3507 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3506 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3952, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3511 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3510 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 18, _35clofun3952, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = _35val3510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3509 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 19, _35clofun3952, 1, w);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc/internal#escape-str"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3952) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3951(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3390 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun3950, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35val3390;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3389 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 0, _35clofun3951, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3388 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 1, _35clofun3951, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3387 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 2, _35clofun3951, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3386 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun3951, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3384 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg3385 = primCar(label);
pushCont(co, 4, _35clofun3951, 5, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = _35reg3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3383 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 5, _35clofun3951, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3381 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg3382 = primCdr(label);
pushCont(co, 6, _35clofun3951, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg3382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc2148 = makeNative(16, _35clofun3950, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3365 = primIsCons(closureRef(co, 3));
if (True == _35reg3365) {
Obj _35reg3366 = primCar(closureRef(co, 3));
Obj _35reg3367 = primEQ(intern("%closure"), _35reg3366);
if (True == _35reg3367) {
Obj _35reg3368 = primCdr(closureRef(co, 3));
Obj _35reg3369 = primIsCons(_35reg3368);
if (True == _35reg3369) {
Obj _35reg3370 = primCdr(closureRef(co, 3));
Obj _35reg3371 = primCar(_35reg3370);
Obj label = _35reg3371;
Obj _35reg3372 = primCdr(closureRef(co, 3));
Obj _35reg3373 = primCdr(_35reg3372);
Obj _35reg3374 = primIsCons(_35reg3373);
if (True == _35reg3374) {
Obj _35reg3375 = primCdr(closureRef(co, 3));
Obj _35reg3376 = primCdr(_35reg3375);
Obj _35reg3377 = primCar(_35reg3376);
Obj nargs = _35reg3377;
Obj _35reg3378 = primCdr(closureRef(co, 3));
Obj _35reg3379 = primCdr(_35reg3378);
Obj _35reg3380 = primCdr(_35reg3379);
Obj frees = _35reg3380;
pushCont(co, 7, _35clofun3951, 6, label, nargs, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2148;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2148;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2148;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2148;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3427 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3426 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 9, _35clofun3951, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3425 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun3951, 4, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3424 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 11, _35clofun3951, 4, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3423 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 12, _35clofun3951, 5, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3422 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
pushCont(co, 13, _35clofun3951, 5, b, self, env, c, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc2147 = makeNative(8, _35clofun3951, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3396 = primIsCons(closureRef(co, 3));
if (True == _35reg3396) {
Obj _35reg3397 = primCar(closureRef(co, 3));
Obj _35reg3398 = primEQ(intern("if"), _35reg3397);
if (True == _35reg3398) {
Obj _35reg3399 = primCdr(closureRef(co, 3));
Obj _35reg3400 = primIsCons(_35reg3399);
if (True == _35reg3400) {
Obj _35reg3401 = primCdr(closureRef(co, 3));
Obj _35reg3402 = primCar(_35reg3401);
Obj a = _35reg3402;
Obj _35reg3403 = primCdr(closureRef(co, 3));
Obj _35reg3404 = primCdr(_35reg3403);
Obj _35reg3405 = primIsCons(_35reg3404);
if (True == _35reg3405) {
Obj _35reg3406 = primCdr(closureRef(co, 3));
Obj _35reg3407 = primCdr(_35reg3406);
Obj _35reg3408 = primCar(_35reg3407);
Obj b = _35reg3408;
Obj _35reg3409 = primCdr(closureRef(co, 3));
Obj _35reg3410 = primCdr(_35reg3409);
Obj _35reg3411 = primCdr(_35reg3410);
Obj _35reg3412 = primIsCons(_35reg3411);
if (True == _35reg3412) {
Obj _35reg3413 = primCdr(closureRef(co, 3));
Obj _35reg3414 = primCdr(_35reg3413);
Obj _35reg3415 = primCdr(_35reg3414);
Obj _35reg3416 = primCar(_35reg3415);
Obj c = _35reg3416;
Obj _35reg3417 = primCdr(closureRef(co, 3));
Obj _35reg3418 = primCdr(_35reg3417);
Obj _35reg3419 = primCdr(_35reg3418);
Obj _35reg3420 = primCdr(_35reg3419);
Obj _35reg3421 = primEQ(Nil, _35reg3420);
if (True == _35reg3421) {
pushCont(co, 14, _35clofun3951, 6, a, b, self, env, c, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val3449 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3448 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 16, _35clofun3951, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3451 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3450 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3951, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3446 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3447 = primEQ(f, intern("set"));
if (True == _35reg3447) {
pushCont(co, 17, _35clofun3951, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun3951, 4, self, env, args, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3951) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3950(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3287 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 20, _35clofun3949, 4, f, args, self, w);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2153 = makeNative(10, _35clofun3949, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3284 = primIsCons(closureRef(co, 3));
if (True == _35reg3284) {
Obj _35reg3285 = primCar(closureRef(co, 3));
Obj f = _35reg3285;
Obj _35reg3286 = primCdr(closureRef(co, 3));
Obj args = _35reg3286;
pushCont(co, 0, _35clofun3950, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2153;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val3317 = __arg1;
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
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc2152 = makeNative(1, _35clofun3950, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3300 = primIsCons(closureRef(co, 3));
if (True == _35reg3300) {
Obj _35reg3301 = primCar(closureRef(co, 3));
Obj _35reg3302 = primEQ(intern("call"), _35reg3301);
if (True == _35reg3302) {
Obj _35reg3303 = primCdr(closureRef(co, 3));
Obj _35reg3304 = primIsCons(_35reg3303);
if (True == _35reg3304) {
Obj _35reg3305 = primCdr(closureRef(co, 3));
Obj _35reg3306 = primCar(_35reg3305);
Obj exp = _35reg3306;
Obj _35reg3307 = primCdr(closureRef(co, 3));
Obj _35reg3308 = primCdr(_35reg3307);
Obj _35reg3309 = primIsCons(_35reg3308);
if (True == _35reg3309) {
Obj _35reg3310 = primCdr(closureRef(co, 3));
Obj _35reg3311 = primCdr(_35reg3310);
Obj _35reg3312 = primCar(_35reg3311);
Obj cont = _35reg3312;
Obj _35reg3313 = primCdr(closureRef(co, 3));
Obj _35reg3314 = primCdr(_35reg3313);
Obj _35reg3315 = primCdr(_35reg3314);
Obj _35reg3316 = primEQ(Nil, _35reg3315);
if (True == _35reg3316) {
pushCont(co, 2, _35clofun3950, 4, self, env, w, exp);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#generate-cont"));
__arg1 = self;
__arg2 = w;
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2152;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2152;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2152;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2152;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2152;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35cc2151 = makeNative(3, _35clofun3950, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3318 = primIsCons(closureRef(co, 3));
if (True == _35reg3318) {
Obj _35reg3319 = primCar(closureRef(co, 3));
Obj _35reg3320 = primEQ(intern("tailcall"), _35reg3319);
if (True == _35reg3320) {
Obj _35reg3321 = primCdr(closureRef(co, 3));
Obj _35reg3322 = primIsCons(_35reg3321);
if (True == _35reg3322) {
Obj _35reg3323 = primCdr(closureRef(co, 3));
Obj _35reg3324 = primCar(_35reg3323);
Obj exp = _35reg3324;
Obj _35reg3325 = primCdr(closureRef(co, 3));
Obj _35reg3326 = primCdr(_35reg3325);
Obj _35reg3327 = primEQ(Nil, _35reg3326);
if (True == _35reg3327) {
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3345 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3344 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 5, _35clofun3950, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3343 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 6, _35clofun3950, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3342 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3950, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3341 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 8, _35clofun3950, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3340 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 9, _35clofun3950, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3339 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 10, _35clofun3950, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3338 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 11, _35clofun3950, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2150 = makeNative(4, _35clofun3950, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3328 = primIsCons(closureRef(co, 3));
if (True == _35reg3328) {
Obj _35reg3329 = primCar(closureRef(co, 3));
Obj _35reg3330 = primEQ(intern("return"), _35reg3329);
if (True == _35reg3330) {
Obj _35reg3331 = primCdr(closureRef(co, 3));
Obj _35reg3332 = primIsCons(_35reg3331);
if (True == _35reg3332) {
Obj _35reg3333 = primCdr(closureRef(co, 3));
Obj _35reg3334 = primCar(_35reg3333);
Obj x = _35reg3334;
Obj _35reg3335 = primCdr(closureRef(co, 3));
Obj _35reg3336 = primCdr(_35reg3335);
Obj _35reg3337 = primEQ(Nil, _35reg3336);
if (True == _35reg3337) {
pushCont(co, 12, _35clofun3950, 4, env, x, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3364 = __arg1;
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
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3363 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 14, _35clofun3950, 4, self, env, w, b);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc2149 = makeNative(13, _35clofun3950, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj w = closureRef(co, 2);
Obj _35reg3346 = primIsCons(closureRef(co, 3));
if (True == _35reg3346) {
Obj _35reg3347 = primCar(closureRef(co, 3));
Obj _35reg3348 = primEQ(intern("do"), _35reg3347);
if (True == _35reg3348) {
Obj _35reg3349 = primCdr(closureRef(co, 3));
Obj _35reg3350 = primIsCons(_35reg3349);
if (True == _35reg3350) {
Obj _35reg3351 = primCdr(closureRef(co, 3));
Obj _35reg3352 = primCar(_35reg3351);
Obj a = _35reg3352;
Obj _35reg3353 = primCdr(closureRef(co, 3));
Obj _35reg3354 = primCdr(_35reg3353);
Obj _35reg3355 = primIsCons(_35reg3354);
if (True == _35reg3355) {
Obj _35reg3356 = primCdr(closureRef(co, 3));
Obj _35reg3357 = primCdr(_35reg3356);
Obj _35reg3358 = primCar(_35reg3357);
Obj b = _35reg3358;
Obj _35reg3359 = primCdr(closureRef(co, 3));
Obj _35reg3360 = primCdr(_35reg3359);
Obj _35reg3361 = primCdr(_35reg3360);
Obj _35reg3362 = primEQ(Nil, _35reg3361);
if (True == _35reg3362) {
pushCont(co, 15, _35clofun3950, 4, self, env, w, b);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2149;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val3395 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3394 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 17, _35clofun3950, 1, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst-list"));
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3392 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3393 = primNot(_35val3392);
if (True == _35reg3393) {
pushCont(co, 18, _35clofun3950, 4, self, env, frees, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val3391 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 19, _35clofun3950, 4, self, env, frees, w);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3950) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3949(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3270 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 20, _35clofun3948, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3269 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 0, _35clofun3949, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3280 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3281 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg3281;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3279 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 2, _35clofun3949, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3278 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 3, _35clofun3949, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3277 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 4, _35clofun3949, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3276 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 5, _35clofun3949, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3275 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 6, _35clofun3949, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc2135 = makeNative(17, _35clofun3948, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg3264 = primIsCons(closureRef(co, 3));
if (True == _35reg3264) {
Obj _35reg3265 = primCar(closureRef(co, 3));
Obj x = _35reg3265;
Obj _35reg3266 = primCdr(closureRef(co, 3));
Obj more = _35reg3266;
Obj _35reg3267 = primGT(i, makeNumber(3));
Obj _35reg3268 = primNot(_35reg3267);
if (True == _35reg3268) {
pushCont(co, 1, _35clofun3949, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 7, _35clofun3949, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35p2130 = __arg1;
Obj _35p2131 = __arg2;
Obj _35p2132 = __arg3;
Obj _35p2133 = co->args[4];
Obj _35cc2134 = makeNative(8, _35clofun3949, 0, 4, _35p2130, _35p2131, _35p2132, _35p2133);
Obj self = _35p2130;
Obj w = _35p2131;
Obj i = _35p2132;
Obj _35reg3282 = primEQ(Nil, _35p2133);
if (True == _35reg3282) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3949) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2134;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3299 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3298 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 11, _35clofun3949, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3297 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3949, 1, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-sym"));
__arg1 = w;
__arg2 = self;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3296 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 13, _35clofun3949, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3295 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 14, _35clofun3949, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3294 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 15, _35clofun3949, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3293 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 16, _35clofun3949, 2, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3291 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3292 = primCons(f, args);
pushCont(co, 17, _35clofun3949, 2, self, w);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = makeNumber(0);
co->args[4] = _35reg3292;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3290 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3949, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3288 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3289 = primAdd(makeNumber(1), _35val3288);
pushCont(co, 19, _35clofun3949, 4, f, args, self, w);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-num"));
__arg1 = w;
__arg2 = _35reg3289;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3949) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3948(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3218 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3219 = primCons(name, idx);
Obj _35reg3220 = primCons(_35reg3219, fvs);
Obj _35reg3221 = primCons(clo_45or_45cont, _35reg3220);
__nargs = 2;
__arg1 = _35reg3221;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3948) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35val3231 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3230= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3232 = primCons(_35val3231, fvs);
Obj _35reg3233 = primCons(_35reg3230, _35reg3232);
Obj _35reg3234 = primCons(clo_45or_45cont, _35reg3233);
__nargs = 2;
__arg1 = _35reg3234;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3948) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3229 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3230 = primCons(name, idx);
pushCont(co, 1, _35clofun3948, 3, fvs, _35reg3230, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3239 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3240 = primCons(name, idx);
Obj _35reg3241 = primCons(_35reg3240, fvs);
Obj _35reg3242 = primCons(clo_45or_45cont, _35reg3241);
__nargs = 2;
__arg1 = _35reg3242;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3948) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35val3222 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg3223 = primCar(_35val3222);
Obj name = _35reg3223;
Obj _35reg3224 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3224) {
Obj _35reg3225 = primCons(body1, Nil);
Obj _35reg3226 = primCons(Nil, _35reg3225);
Obj _35reg3227 = primCons(params, _35reg3226);
Obj _35reg3228 = primCons(intern("lambda"), _35reg3227);
pushCont(co, 2, _35clofun3948, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3235 = primCons(body1, Nil);
Obj _35reg3236 = primCons(fvs, _35reg3235);
Obj _35reg3237 = primCons(params, _35reg3236);
Obj _35reg3238 = primCons(intern("lambda"), _35reg3237);
pushCont(co, 3, _35clofun3948, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3200 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val3200;
Obj _35reg3201 = primEQ(idx, makeNumber(0));
if (True == _35reg3201) {
Obj _35reg3202 = primGenSym(intern("clofun"));
Obj name = _35reg3202;
Obj _35reg3203 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3203) {
Obj _35reg3204 = primCons(body1, Nil);
Obj _35reg3205 = primCons(Nil, _35reg3204);
Obj _35reg3206 = primCons(params, _35reg3205);
Obj _35reg3207 = primCons(intern("lambda"), _35reg3206);
pushCont(co, 20, _35clofun3947, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3214 = primCons(body1, Nil);
Obj _35reg3215 = primCons(fvs, _35reg3214);
Obj _35reg3216 = primCons(params, _35reg3215);
Obj _35reg3217 = primCons(intern("lambda"), _35reg3216);
pushCont(co, 0, _35clofun3948, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 4, _35clofun3948, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3199 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val3199;
pushCont(co, 5, _35clofun3948, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3198 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val3198;
pushCont(co, 6, _35clofun3948, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35p2125 = __arg1;
Obj _35p2126 = __arg2;
Obj _35cc2127 = makeNative(19, _35clofun3946, 0, 2, _35p2125, _35p2126);
Obj v = _35p2125;
Obj _35reg3069 = primIsCons(_35p2126);
if (True == _35reg3069) {
Obj _35reg3070 = primCar(_35p2126);
Obj clo_45or_45cont = _35reg3070;
Obj _35reg3071 = primCdr(_35p2126);
Obj _35reg3072 = primIsCons(_35reg3071);
if (True == _35reg3072) {
Obj _35reg3073 = primCdr(_35p2126);
Obj _35reg3074 = primCar(_35reg3073);
Obj _35reg3075 = primIsCons(_35reg3074);
if (True == _35reg3075) {
Obj _35reg3076 = primCdr(_35p2126);
Obj _35reg3077 = primCar(_35reg3076);
Obj _35reg3078 = primCar(_35reg3077);
Obj _35reg3079 = primEQ(intern("lambda"), _35reg3078);
if (True == _35reg3079) {
Obj _35reg3080 = primCdr(_35p2126);
Obj _35reg3081 = primCar(_35reg3080);
Obj _35reg3082 = primCdr(_35reg3081);
Obj _35reg3083 = primIsCons(_35reg3082);
if (True == _35reg3083) {
Obj _35reg3084 = primCdr(_35p2126);
Obj _35reg3085 = primCar(_35reg3084);
Obj _35reg3086 = primCdr(_35reg3085);
Obj _35reg3087 = primCar(_35reg3086);
Obj params = _35reg3087;
Obj _35reg3088 = primCdr(_35p2126);
Obj _35reg3089 = primCar(_35reg3088);
Obj _35reg3090 = primCdr(_35reg3089);
Obj _35reg3091 = primCdr(_35reg3090);
Obj _35reg3092 = primIsCons(_35reg3091);
if (True == _35reg3092) {
Obj _35reg3093 = primCdr(_35p2126);
Obj _35reg3094 = primCar(_35reg3093);
Obj _35reg3095 = primCdr(_35reg3094);
Obj _35reg3096 = primCdr(_35reg3095);
Obj _35reg3097 = primCar(_35reg3096);
Obj body = _35reg3097;
Obj _35reg3098 = primCdr(_35p2126);
Obj _35reg3099 = primCar(_35reg3098);
Obj _35reg3100 = primCdr(_35reg3099);
Obj _35reg3101 = primCdr(_35reg3100);
Obj _35reg3102 = primCdr(_35reg3101);
Obj _35reg3103 = primEQ(Nil, _35reg3102);
if (True == _35reg3103) {
Obj _35reg3104 = primCdr(_35p2126);
Obj _35reg3105 = primCdr(_35reg3104);
Obj fvs = _35reg3105;
Obj _35reg3106 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3106) {
if (True == True) {
pushCont(co, 8, _35clofun3947, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg3152 = primEQ(clo_45or_45cont, intern("%continuation"));
if (True == _35reg3152) {
if (True == True) {
pushCont(co, 18, _35clofun3947, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 7, _35clofun3948, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3250 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3254 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3255 = primCons(_35val3254, res);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(2);
__arg3 = _35reg3255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3253 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj res = _35val3253;
pushCont(co, 10, _35clofun3948, 2, res, v);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3252 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3948, 2, cur1, v);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3251 = __arg1;
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 12, _35clofun3948, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v = __arg1;
Obj idx = __arg2;
Obj cur = __arg3;
Obj name = co->args[4];
Obj val = co->args[5];
Obj _35reg3244 = primCons(name, idx);
Obj _35reg3245 = primCons(val, Nil);
Obj _35reg3246 = primCons(_35reg3244, _35reg3245);
Obj _35reg3247 = primCons(_35reg3246, cur);
Obj cur1 = _35reg3247;
Obj _35reg3248 = primLT(idx, makeNumber(20));
if (True == _35reg3248) {
Obj _35reg3249 = primAdd(idx, makeNumber(1));
pushCont(co, 9, _35clofun3948, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = _35reg3249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 13, _35clofun3948, 2, cur1, v);
__nargs = 4;
__arg0 = globalRef(intern("vector-set!"));
__arg1 = v;
__arg2 = makeNumber(0);
__arg3 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val3258 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3259 = primCons(_35val3258, Nil);
Obj _35reg3260 = primCons(x, _35reg3259);
Obj _35reg3261 = primCons(tmp, _35reg3260);
Obj _35reg3262 = primCons(intern("let"), _35reg3261);
__nargs = 2;
__arg1 = _35reg3262;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3948) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg3257 = primGenSym(intern("reg"));
Obj tmp = _35reg3257;
pushCont(co, 15, _35clofun3948, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3273 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3274 = primAdd(i, makeNumber(1));
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-call-list"));
__arg1 = self;
__arg2 = w;
__arg3 = _35reg3274;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3272 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
pushCont(co, 18, _35clofun3948, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc/internal#generate-str"));
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3271 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
pushCont(co, 19, _35clofun3948, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(intern("cora/lib/toc#generate-inst"));
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3948) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3947(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3117 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3118 = primCons(name, idx);
pushCont(co, 20, _35clofun3946, 3, fvs, _35reg3118, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3127 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3128 = primCons(name, idx);
Obj _35reg3129 = primCons(_35reg3128, fvs);
Obj _35reg3130 = primCons(clo_45or_45cont, _35reg3129);
__nargs = 2;
__arg1 = _35reg3130;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3140 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3139= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3141 = primCons(_35val3140, fvs);
Obj _35reg3142 = primCons(_35reg3139, _35reg3141);
Obj _35reg3143 = primCons(clo_45or_45cont, _35reg3142);
__nargs = 2;
__arg1 = _35reg3143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val3138 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3139 = primCons(name, idx);
pushCont(co, 2, _35clofun3947, 3, fvs, _35reg3139, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3148 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3149 = primCons(name, idx);
Obj _35reg3150 = primCons(_35reg3149, fvs);
Obj _35reg3151 = primCons(clo_45or_45cont, _35reg3150);
__nargs = 2;
__arg1 = _35reg3151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val3131 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg3132 = primCar(_35val3131);
Obj name = _35reg3132;
Obj _35reg3133 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3133) {
Obj _35reg3134 = primCons(body1, Nil);
Obj _35reg3135 = primCons(Nil, _35reg3134);
Obj _35reg3136 = primCons(params, _35reg3135);
Obj _35reg3137 = primCons(intern("lambda"), _35reg3136);
pushCont(co, 3, _35clofun3947, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3137;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3144 = primCons(body1, Nil);
Obj _35reg3145 = primCons(fvs, _35reg3144);
Obj _35reg3146 = primCons(params, _35reg3145);
Obj _35reg3147 = primCons(intern("lambda"), _35reg3146);
pushCont(co, 4, _35clofun3947, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3147;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3109 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val3109;
Obj _35reg3110 = primEQ(idx, makeNumber(0));
if (True == _35reg3110) {
Obj _35reg3111 = primGenSym(intern("clofun"));
Obj name = _35reg3111;
Obj _35reg3112 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3112) {
Obj _35reg3113 = primCons(body1, Nil);
Obj _35reg3114 = primCons(Nil, _35reg3113);
Obj _35reg3115 = primCons(params, _35reg3114);
Obj _35reg3116 = primCons(intern("lambda"), _35reg3115);
pushCont(co, 0, _35clofun3947, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3116;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3123 = primCons(body1, Nil);
Obj _35reg3124 = primCons(fvs, _35reg3123);
Obj _35reg3125 = primCons(params, _35reg3124);
Obj _35reg3126 = primCons(intern("lambda"), _35reg3125);
pushCont(co, 1, _35clofun3947, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 5, _35clofun3947, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3108 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val3108;
pushCont(co, 6, _35clofun3947, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3107 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val3107;
pushCont(co, 7, _35clofun3947, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3165 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3164= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3166 = primCons(_35val3165, fvs);
Obj _35reg3167 = primCons(_35reg3164, _35reg3166);
Obj _35reg3168 = primCons(clo_45or_45cont, _35reg3167);
__nargs = 2;
__arg1 = _35reg3168;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35val3163 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3164 = primCons(name, idx);
pushCont(co, 9, _35clofun3947, 3, fvs, _35reg3164, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3173 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3174 = primCons(name, idx);
Obj _35reg3175 = primCons(_35reg3174, fvs);
Obj _35reg3176 = primCons(clo_45or_45cont, _35reg3175);
__nargs = 2;
__arg1 = _35reg3176;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val3186 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3185= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3187 = primCons(_35val3186, fvs);
Obj _35reg3188 = primCons(_35reg3185, _35reg3187);
Obj _35reg3189 = primCons(clo_45or_45cont, _35reg3188);
__nargs = 2;
__arg1 = _35reg3189;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val3184 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3185 = primCons(name, idx);
pushCont(co, 12, _35clofun3947, 3, fvs, _35reg3185, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3194 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3195 = primCons(name, idx);
Obj _35reg3196 = primCons(_35reg3195, fvs);
Obj _35reg3197 = primCons(clo_45or_45cont, _35reg3196);
__nargs = 2;
__arg1 = _35reg3197;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35val3177 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj _35reg3178 = primCar(_35val3177);
Obj name = _35reg3178;
Obj _35reg3179 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3179) {
Obj _35reg3180 = primCons(body1, Nil);
Obj _35reg3181 = primCons(Nil, _35reg3180);
Obj _35reg3182 = primCons(params, _35reg3181);
Obj _35reg3183 = primCons(intern("lambda"), _35reg3182);
pushCont(co, 13, _35clofun3947, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3190 = primCons(body1, Nil);
Obj _35reg3191 = primCons(fvs, _35reg3190);
Obj _35reg3192 = primCons(params, _35reg3191);
Obj _35reg3193 = primCons(intern("lambda"), _35reg3192);
pushCont(co, 14, _35clofun3947, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3193;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val3155 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj cur = _35val3155;
Obj _35reg3156 = primEQ(idx, makeNumber(0));
if (True == _35reg3156) {
Obj _35reg3157 = primGenSym(intern("clofun"));
Obj name = _35reg3157;
Obj _35reg3158 = primEQ(clo_45or_45cont, intern("%closure"));
if (True == _35reg3158) {
Obj _35reg3159 = primCons(body1, Nil);
Obj _35reg3160 = primCons(Nil, _35reg3159);
Obj _35reg3161 = primCons(params, _35reg3160);
Obj _35reg3162 = primCons(intern("lambda"), _35reg3161);
pushCont(co, 10, _35clofun3947, 5, name, idx, params, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3162;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3169 = primCons(body1, Nil);
Obj _35reg3170 = primCons(fvs, _35reg3169);
Obj _35reg3171 = primCons(params, _35reg3170);
Obj _35reg3172 = primCons(intern("lambda"), _35reg3171);
pushCont(co, 11, _35clofun3947, 4, name, idx, fvs, clo_45or_45cont);
__nargs = 6;
__arg0 = globalRef(intern("cora/lib/toc#append-result"));
__arg1 = v;
__arg2 = idx;
__arg3 = cur;
co->args[4] = name;
co->args[5] = _35reg3172;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 15, _35clofun3947, 7, body1, params, v, cur, idx, fvs, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = cur;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val3154 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj idx = _35val3154;
pushCont(co, 16, _35clofun3947, 6, body1, params, v, idx, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3153 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val3153;
pushCont(co, 17, _35clofun3947, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(intern("vector-ref"));
__arg1 = v;
__arg2 = makeNumber(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3210 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3209= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3211 = primCons(_35val3210, fvs);
Obj _35reg3212 = primCons(_35reg3209, _35reg3211);
Obj _35reg3213 = primCons(clo_45or_45cont, _35reg3212);
__nargs = 2;
__arg1 = _35reg3213;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3947) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val3208 = __arg1;
Obj name= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3209 = primCons(name, idx);
pushCont(co, 19, _35clofun3947, 3, fvs, _35reg3209, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3947) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3946(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2124 = makeNative(19, _35clofun3945, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2989 = primIsCons(closureRef(co, 1));
if (True == _35reg2989) {
Obj _35reg2990 = primCar(closureRef(co, 1));
Obj f = _35reg2990;
Obj _35reg2991 = primCdr(closureRef(co, 1));
Obj args = _35reg2991;
pushCont(co, 20, _35clofun3945, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2124;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3013 = __arg1;
Obj _35val3012= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3014 = primCons(_35val3013, Nil);
Obj _35reg3015 = primCons(_35val3012, _35reg3014);
Obj _35reg3016 = primCons(intern("call"), _35reg3015);
__nargs = 2;
__arg1 = _35reg3016;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val3012 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3946, 1, _35val3012);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3011 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 2, _35clofun3946, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3011;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc2123 = makeNative(0, _35clofun3946, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2994 = primIsCons(closureRef(co, 1));
if (True == _35reg2994) {
Obj _35reg2995 = primCar(closureRef(co, 1));
Obj _35reg2996 = primEQ(intern("call"), _35reg2995);
if (True == _35reg2996) {
Obj _35reg2997 = primCdr(closureRef(co, 1));
Obj _35reg2998 = primIsCons(_35reg2997);
if (True == _35reg2998) {
Obj _35reg2999 = primCdr(closureRef(co, 1));
Obj _35reg3000 = primCar(_35reg2999);
Obj exp = _35reg3000;
Obj _35reg3001 = primCdr(closureRef(co, 1));
Obj _35reg3002 = primCdr(_35reg3001);
Obj _35reg3003 = primIsCons(_35reg3002);
if (True == _35reg3003) {
Obj _35reg3004 = primCdr(closureRef(co, 1));
Obj _35reg3005 = primCdr(_35reg3004);
Obj _35reg3006 = primCar(_35reg3005);
Obj cont = _35reg3006;
Obj _35reg3007 = primCdr(closureRef(co, 1));
Obj _35reg3008 = primCdr(_35reg3007);
Obj _35reg3009 = primCdr(_35reg3008);
Obj _35reg3010 = primEQ(Nil, _35reg3009);
if (True == _35reg3010) {
pushCont(co, 3, _35clofun3946, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2123;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3038 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3039 = primCons(_35val3038, Nil);
Obj _35reg3040 = primCons(val, _35reg3039);
Obj _35reg3041 = primCons(intern("lambda"), _35reg3040);
Obj _35reg3042 = primCons(_35reg3041, fvs2);
Obj _35reg3043 = primCons(intern("%continuation"), _35reg3042);
__nargs = 2;
__arg1 = _35reg3043;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val3037 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val3037;
pushCont(co, 5, _35clofun3946, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3036 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 6, _35clofun3946, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val3036;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3035 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val3035;
pushCont(co, 7, _35clofun3946, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3034 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 8, _35clofun3946, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val3034;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc2122 = makeNative(4, _35clofun3946, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3017 = primIsCons(closureRef(co, 1));
if (True == _35reg3017) {
Obj _35reg3018 = primCar(closureRef(co, 1));
Obj _35reg3019 = primEQ(intern("continuation"), _35reg3018);
if (True == _35reg3019) {
Obj _35reg3020 = primCdr(closureRef(co, 1));
Obj _35reg3021 = primIsCons(_35reg3020);
if (True == _35reg3021) {
Obj _35reg3022 = primCdr(closureRef(co, 1));
Obj _35reg3023 = primCar(_35reg3022);
Obj val = _35reg3023;
Obj _35reg3024 = primCdr(closureRef(co, 1));
Obj _35reg3025 = primCdr(_35reg3024);
Obj _35reg3026 = primIsCons(_35reg3025);
if (True == _35reg3026) {
Obj _35reg3027 = primCdr(closureRef(co, 1));
Obj _35reg3028 = primCdr(_35reg3027);
Obj _35reg3029 = primCar(_35reg3028);
Obj body = _35reg3029;
Obj _35reg3030 = primCdr(closureRef(co, 1));
Obj _35reg3031 = primCdr(_35reg3030);
Obj _35reg3032 = primCdr(_35reg3031);
Obj _35reg3033 = primEQ(Nil, _35reg3032);
if (True == _35reg3033) {
pushCont(co, 9, _35clofun3946, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2122;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2122;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2122;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2122;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2122;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val3061 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3062 = primCons(_35val3061, Nil);
Obj _35reg3063 = primCons(args, _35reg3062);
Obj _35reg3064 = primCons(intern("lambda"), _35reg3063);
__nargs = 2;
__arg1 = _35reg3064;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35cc2121 = makeNative(10, _35clofun3946, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3044 = primIsCons(closureRef(co, 1));
if (True == _35reg3044) {
Obj _35reg3045 = primCar(closureRef(co, 1));
Obj _35reg3046 = primEQ(intern("lambda"), _35reg3045);
if (True == _35reg3046) {
Obj _35reg3047 = primCdr(closureRef(co, 1));
Obj _35reg3048 = primIsCons(_35reg3047);
if (True == _35reg3048) {
Obj _35reg3049 = primCdr(closureRef(co, 1));
Obj _35reg3050 = primCar(_35reg3049);
Obj args = _35reg3050;
Obj _35reg3051 = primCdr(closureRef(co, 1));
Obj _35reg3052 = primCdr(_35reg3051);
Obj _35reg3053 = primIsCons(_35reg3052);
if (True == _35reg3053) {
Obj _35reg3054 = primCdr(closureRef(co, 1));
Obj _35reg3055 = primCdr(_35reg3054);
Obj _35reg3056 = primCar(_35reg3055);
Obj body = _35reg3056;
Obj _35reg3057 = primCdr(closureRef(co, 1));
Obj _35reg3058 = primCdr(_35reg3057);
Obj _35reg3059 = primCdr(_35reg3058);
Obj _35reg3060 = primEQ(Nil, _35reg3059);
if (True == _35reg3060) {
pushCont(co, 11, _35clofun3946, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#explicit-stack"));
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc2120 = makeNative(12, _35clofun3946, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg3065 = primIsSymbol(var);
if (True == _35reg3065) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2120;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3066 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2119= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3066) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35p2117 = __arg1;
Obj _35p2118 = __arg2;
Obj _35cc2119 = makeNative(13, _35clofun3946, 0, 2, _35p2117, _35p2118);
Obj __ = _35p2117;
Obj x = _35p2118;
pushCont(co, 14, _35clofun3946, 2, x, _35cc2119);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc2129 = makeNative(16, _35clofun3946, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#collect-lambda"));
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc2128 = makeNative(17, _35clofun3946, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg3068 = primIsCons(f_45args);
if (True == _35reg3068) {
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = makeNative(18, _35clofun3946, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3946) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val3119 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3118= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3120 = primCons(_35val3119, fvs);
Obj _35reg3121 = primCons(_35reg3118, _35reg3120);
Obj _35reg3122 = primCons(clo_45or_45cont, _35reg3121);
__nargs = 2;
__arg1 = _35reg3122;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3946) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3945(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2108 = makeNative(18, _35clofun3944, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2884 = primIsCons(closureRef(co, 0));
if (True == _35reg2884) {
Obj _35reg2885 = primCar(closureRef(co, 0));
Obj _35reg2886 = primEQ(intern("do"), _35reg2885);
if (True == _35reg2886) {
Obj _35reg2887 = primCdr(closureRef(co, 0));
Obj _35reg2888 = primIsCons(_35reg2887);
if (True == _35reg2888) {
Obj _35reg2889 = primCdr(closureRef(co, 0));
Obj _35reg2890 = primCar(_35reg2889);
Obj a = _35reg2890;
Obj _35reg2891 = primCdr(closureRef(co, 0));
Obj _35reg2892 = primCdr(_35reg2891);
Obj _35reg2893 = primIsCons(_35reg2892);
if (True == _35reg2893) {
Obj _35reg2894 = primCdr(closureRef(co, 0));
Obj _35reg2895 = primCdr(_35reg2894);
Obj _35reg2896 = primCar(_35reg2895);
Obj b = _35reg2896;
Obj _35reg2897 = primCdr(closureRef(co, 0));
Obj _35reg2898 = primCdr(_35reg2897);
Obj _35reg2899 = primCdr(_35reg2898);
Obj _35reg2900 = primEQ(Nil, _35reg2899);
if (True == _35reg2900) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(20, _35clofun3944, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2108;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2933 = __arg1;
Obj _35val2932= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2934 = primCons(_35val2933, Nil);
Obj _35reg2935 = primCons(_35val2932, _35reg2934);
Obj _35reg2936 = primCons(ra, _35reg2935);
Obj _35reg2937 = primCons(intern("if"), _35reg2936);
__nargs = 2;
__arg1 = _35reg2937;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2932 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 1, _35clofun3945, 2, _35val2932, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj ra = __arg1;
pushCont(co, 2, _35clofun3945, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35cc2107 = makeNative(0, _35clofun3945, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2906 = primIsCons(closureRef(co, 0));
if (True == _35reg2906) {
Obj _35reg2907 = primCar(closureRef(co, 0));
Obj _35reg2908 = primEQ(intern("if"), _35reg2907);
if (True == _35reg2908) {
Obj _35reg2909 = primCdr(closureRef(co, 0));
Obj _35reg2910 = primIsCons(_35reg2909);
if (True == _35reg2910) {
Obj _35reg2911 = primCdr(closureRef(co, 0));
Obj _35reg2912 = primCar(_35reg2911);
Obj a = _35reg2912;
Obj _35reg2913 = primCdr(closureRef(co, 0));
Obj _35reg2914 = primCdr(_35reg2913);
Obj _35reg2915 = primIsCons(_35reg2914);
if (True == _35reg2915) {
Obj _35reg2916 = primCdr(closureRef(co, 0));
Obj _35reg2917 = primCdr(_35reg2916);
Obj _35reg2918 = primCar(_35reg2917);
Obj b = _35reg2918;
Obj _35reg2919 = primCdr(closureRef(co, 0));
Obj _35reg2920 = primCdr(_35reg2919);
Obj _35reg2921 = primCdr(_35reg2920);
Obj _35reg2922 = primIsCons(_35reg2921);
if (True == _35reg2922) {
Obj _35reg2923 = primCdr(closureRef(co, 0));
Obj _35reg2924 = primCdr(_35reg2923);
Obj _35reg2925 = primCdr(_35reg2924);
Obj _35reg2926 = primCar(_35reg2925);
Obj c = _35reg2926;
Obj _35reg2927 = primCdr(closureRef(co, 0));
Obj _35reg2928 = primCdr(_35reg2927);
Obj _35reg2929 = primCdr(_35reg2928);
Obj _35reg2930 = primCdr(_35reg2929);
Obj _35reg2931 = primEQ(Nil, _35reg2930);
if (True == _35reg2931) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = a;
__arg2 = makeNative(3, _35clofun3945, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2107;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2938 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2106= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2938) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc2106 = makeNative(4, _35clofun3945, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 5, _35clofun3945, 2, x, _35cc2106);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2940 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2105= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2940) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2105;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2105;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label8:
{
Obj _35p2103 = __arg1;
Obj _35p2104 = __arg2;
Obj _35cc2105 = makeNative(6, _35clofun3945, 0, 2, _35p2103, _35p2104);
Obj x = _35p2103;
Obj next = _35p2104;
Obj _35reg2939 = primIsSymbol(x);
if (True == _35reg2939) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2105;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 7, _35clofun3945, 3, next, x, _35cc2105);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj hd1 = __arg1;
Obj _35reg2945 = primCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = closureRef(co, 0);
__arg2 = _35reg2945;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2116 = makeNative(9, _35clofun3945, 0, 0);
Obj _35reg2942 = primIsCons(closureRef(co, 0));
if (True == _35reg2942) {
Obj _35reg2943 = primCar(closureRef(co, 0));
Obj hd = _35reg2943;
Obj _35reg2944 = primCdr(closureRef(co, 0));
Obj tl = _35reg2944;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = hd;
__arg2 = makeNative(10, _35clofun3945, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2116;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2957 = __arg1;
Obj _35reg2956= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2958 = primCons(_35val2957, Nil);
Obj _35reg2959 = primCons(_35reg2956, _35reg2958);
Obj _35reg2960 = primCons(intern("continuation"), _35reg2959);
Obj _35reg2961 = primCons(_35reg2960, Nil);
Obj _35reg2962 = primCons(exp, _35reg2961);
Obj _35reg2963 = primCons(intern("call"), _35reg2962);
__nargs = 2;
__arg1 = _35reg2963;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35val2969 = __arg1;
Obj _35reg2968= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2970 = primCons(_35val2969, Nil);
Obj _35reg2971 = primCons(_35reg2968, _35reg2970);
Obj _35reg2972 = primCons(intern("continuation"), _35reg2971);
Obj _35reg2973 = primCons(_35reg2972, Nil);
Obj _35reg2974 = primCons(exp, _35reg2973);
Obj _35reg2975 = primCons(intern("call"), _35reg2974);
__nargs = 2;
__arg1 = _35reg2975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35val2950 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2951 = primEQ(_35val2950, intern("%builtin"));
if (True == _35reg2951) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#wrap-var"));
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2952 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2952) {
Obj _35reg2953 = primCons(exp, Nil);
Obj _35reg2954 = primCons(intern("tailcall"), _35reg2953);
__nargs = 2;
__arg1 = _35reg2954;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2955 = primGenSym(intern("val"));
Obj val = _35reg2955;
Obj _35reg2956 = primCons(val, Nil);
pushCont(co, 12, _35clofun3945, 2, _35reg2956, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2964 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2964) {
Obj _35reg2965 = primCons(exp, Nil);
Obj _35reg2966 = primCons(intern("tailcall"), _35reg2965);
__nargs = 2;
__arg1 = _35reg2966;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2967 = primGenSym(intern("val"));
Obj val = _35reg2967;
Obj _35reg2968 = primCons(val, Nil);
pushCont(co, 13, _35clofun3945, 2, _35reg2968, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label15:
{
Obj _35val2981 = __arg1;
Obj _35reg2980= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2982 = primCons(_35val2981, Nil);
Obj _35reg2983 = primCons(_35reg2980, _35reg2982);
Obj _35reg2984 = primCons(intern("continuation"), _35reg2983);
Obj _35reg2985 = primCons(_35reg2984, Nil);
Obj _35reg2986 = primCons(exp, _35reg2985);
Obj _35reg2987 = primCons(intern("call"), _35reg2986);
__nargs = 2;
__arg1 = _35reg2987;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2949 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2949) {
pushCont(co, 14, _35clofun3945, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("caar"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2976 = primEQ(next, globalRef(intern("cora/lib/toc#id")));
if (True == _35reg2976) {
Obj _35reg2977 = primCons(exp, Nil);
Obj _35reg2978 = primCons(intern("tailcall"), _35reg2977);
__nargs = 2;
__arg1 = _35reg2978;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3945) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2979 = primGenSym(intern("val"));
Obj val = _35reg2979;
Obj _35reg2980 = primCons(val, Nil);
pushCont(co, 15, _35clofun3945, 2, _35reg2980, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label17:
{
Obj _35val2947 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val2947;
Obj _35reg2948 = primCar(exp);
pushCont(co, 16, _35clofun3945, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(intern("pair?"));
__arg1 = _35reg2948;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35p2112 = __arg1;
Obj _35p2113 = __arg2;
Obj _35p2114 = __arg3;
Obj _35cc2115 = makeNative(11, _35clofun3945, 0, 3, _35p2112, _35p2113, _35p2114);
Obj _35reg2946 = primEQ(Nil, _35p2112);
if (True == _35reg2946) {
Obj ls = _35p2113;
Obj next = _35p2114;
pushCont(co, 17, _35clofun3945, 1, next);
__nargs = 2;
__arg0 = globalRef(intern("reverse"));
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2115;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2992 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2993 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2992;
__arg2 = _35reg2993;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3945) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3944(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2760 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
pushCont(co, 20, _35clofun3943, 2, _35val2760, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2101 = makeNative(19, _35clofun3943, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2734 = primIsCons(closureRef(co, 1));
if (True == _35reg2734) {
Obj _35reg2735 = primCar(closureRef(co, 1));
Obj _35reg2736 = primEQ(intern("let"), _35reg2735);
if (True == _35reg2736) {
Obj _35reg2737 = primCdr(closureRef(co, 1));
Obj _35reg2738 = primIsCons(_35reg2737);
if (True == _35reg2738) {
Obj _35reg2739 = primCdr(closureRef(co, 1));
Obj _35reg2740 = primCar(_35reg2739);
Obj a = _35reg2740;
Obj _35reg2741 = primCdr(closureRef(co, 1));
Obj _35reg2742 = primCdr(_35reg2741);
Obj _35reg2743 = primIsCons(_35reg2742);
if (True == _35reg2743) {
Obj _35reg2744 = primCdr(closureRef(co, 1));
Obj _35reg2745 = primCdr(_35reg2744);
Obj _35reg2746 = primCar(_35reg2745);
Obj b = _35reg2746;
Obj _35reg2747 = primCdr(closureRef(co, 1));
Obj _35reg2748 = primCdr(_35reg2747);
Obj _35reg2749 = primCdr(_35reg2748);
Obj _35reg2750 = primIsCons(_35reg2749);
if (True == _35reg2750) {
Obj _35reg2751 = primCdr(closureRef(co, 1));
Obj _35reg2752 = primCdr(_35reg2751);
Obj _35reg2753 = primCdr(_35reg2752);
Obj _35reg2754 = primCar(_35reg2753);
Obj c = _35reg2754;
Obj _35reg2755 = primCdr(closureRef(co, 1));
Obj _35reg2756 = primCdr(_35reg2755);
Obj _35reg2757 = primCdr(_35reg2756);
Obj _35reg2758 = primCdr(_35reg2757);
Obj _35reg2759 = primEQ(Nil, _35reg2758);
if (True == _35reg2759) {
pushCont(co, 0, _35clofun3944, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2792 = __arg1;
Obj _35reg2790= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2793 = primCons(_35reg2790, _35val2792);
Obj _35reg2794 = primCons(intern("%closure"), _35reg2793);
__nargs = 2;
__arg1 = _35reg2794;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35val2791 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2790= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 2, _35clofun3944, 1, _35reg2790);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2791;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2787 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2788 = primCons(_35val2787, Nil);
Obj _35reg2789 = primCons(args, _35reg2788);
Obj _35reg2790 = primCons(intern("lambda"), _35reg2789);
pushCont(co, 3, _35clofun3944, 2, fvs1, _35reg2790);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2786 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2786;
pushCont(co, 4, _35clofun3944, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2100 = makeNative(1, _35clofun3944, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2766 = primIsCons(closureRef(co, 1));
if (True == _35reg2766) {
Obj _35reg2767 = primCar(closureRef(co, 1));
Obj _35reg2768 = primEQ(intern("lambda"), _35reg2767);
if (True == _35reg2768) {
Obj _35reg2769 = primCdr(closureRef(co, 1));
Obj _35reg2770 = primIsCons(_35reg2769);
if (True == _35reg2770) {
Obj _35reg2771 = primCdr(closureRef(co, 1));
Obj _35reg2772 = primCar(_35reg2771);
Obj args = _35reg2772;
Obj _35reg2773 = primCdr(closureRef(co, 1));
Obj _35reg2774 = primCdr(_35reg2773);
Obj _35reg2775 = primIsCons(_35reg2774);
if (True == _35reg2775) {
Obj _35reg2776 = primCdr(closureRef(co, 1));
Obj _35reg2777 = primCdr(_35reg2776);
Obj _35reg2778 = primCar(_35reg2777);
Obj body = _35reg2778;
Obj _35reg2779 = primCdr(closureRef(co, 1));
Obj _35reg2780 = primCdr(_35reg2779);
Obj _35reg2781 = primCdr(_35reg2780);
Obj _35reg2782 = primEQ(Nil, _35reg2781);
if (True == _35reg2782) {
Obj _35reg2783 = primCons(body, Nil);
Obj _35reg2784 = primCons(args, _35reg2783);
Obj _35reg2785 = primCons(intern("lambda"), _35reg2784);
pushCont(co, 5, _35clofun3944, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg2785;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2796 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val2796;
Obj _35reg2797 = primEQ(makeNumber(-1), pos);
if (True == _35reg2797) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2798 = primCons(pos, Nil);
Obj _35reg2799 = primCons(intern("%closure-ref"), _35reg2798);
__nargs = 2;
__arg1 = _35reg2799;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj _35cc2099 = makeNative(6, _35clofun3944, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2795 = primIsSymbol(var);
if (True == _35reg2795) {
pushCont(co, 7, _35clofun3944, 1, var);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val2800 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2098= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2800) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35p2096 = __arg1;
Obj _35p2097 = __arg2;
Obj _35cc2098 = makeNative(8, _35clofun3944, 0, 2, _35p2096, _35p2097);
Obj __ = _35p2096;
Obj x = _35p2097;
pushCont(co, 9, _35clofun3944, 2, x, _35cc2098);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x = __arg1;
Obj _35reg2802 = primCons(x, Nil);
Obj _35reg2803 = primCons(intern("return"), _35reg2802);
__nargs = 2;
__arg1 = _35reg2803;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2111 = makeNative(12, _35clofun3944, 0, 0);
Obj _35reg2805 = primIsCons(closureRef(co, 0));
if (True == _35reg2805) {
Obj _35reg2806 = primCar(closureRef(co, 0));
Obj f = _35reg2806;
Obj _35reg2807 = primCdr(closureRef(co, 0));
Obj args = _35reg2807;
Obj next = closureRef(co, 1);
Obj _35reg2808 = primCons(f, args);
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#tailify-list"));
__arg1 = _35reg2808;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2847 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2848 = primCons(_35val2847, Nil);
Obj _35reg2849 = primCons(args, _35reg2848);
Obj _35reg2850 = primCons(intern("lambda"), _35reg2849);
Obj _35reg2851 = primCons(_35reg2850, frees);
Obj _35reg2852 = primCons(intern("%closure"), _35reg2851);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg2852;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc2110 = makeNative(13, _35clofun3944, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2809 = primIsCons(closureRef(co, 0));
if (True == _35reg2809) {
Obj _35reg2810 = primCar(closureRef(co, 0));
Obj _35reg2811 = primEQ(intern("%closure"), _35reg2810);
if (True == _35reg2811) {
Obj _35reg2812 = primCdr(closureRef(co, 0));
Obj _35reg2813 = primIsCons(_35reg2812);
if (True == _35reg2813) {
Obj _35reg2814 = primCdr(closureRef(co, 0));
Obj _35reg2815 = primCar(_35reg2814);
Obj _35reg2816 = primIsCons(_35reg2815);
if (True == _35reg2816) {
Obj _35reg2817 = primCdr(closureRef(co, 0));
Obj _35reg2818 = primCar(_35reg2817);
Obj _35reg2819 = primCar(_35reg2818);
Obj _35reg2820 = primEQ(intern("lambda"), _35reg2819);
if (True == _35reg2820) {
Obj _35reg2821 = primCdr(closureRef(co, 0));
Obj _35reg2822 = primCar(_35reg2821);
Obj _35reg2823 = primCdr(_35reg2822);
Obj _35reg2824 = primIsCons(_35reg2823);
if (True == _35reg2824) {
Obj _35reg2825 = primCdr(closureRef(co, 0));
Obj _35reg2826 = primCar(_35reg2825);
Obj _35reg2827 = primCdr(_35reg2826);
Obj _35reg2828 = primCar(_35reg2827);
Obj args = _35reg2828;
Obj _35reg2829 = primCdr(closureRef(co, 0));
Obj _35reg2830 = primCar(_35reg2829);
Obj _35reg2831 = primCdr(_35reg2830);
Obj _35reg2832 = primCdr(_35reg2831);
Obj _35reg2833 = primIsCons(_35reg2832);
if (True == _35reg2833) {
Obj _35reg2834 = primCdr(closureRef(co, 0));
Obj _35reg2835 = primCar(_35reg2834);
Obj _35reg2836 = primCdr(_35reg2835);
Obj _35reg2837 = primCdr(_35reg2836);
Obj _35reg2838 = primCar(_35reg2837);
Obj body = _35reg2838;
Obj _35reg2839 = primCdr(closureRef(co, 0));
Obj _35reg2840 = primCar(_35reg2839);
Obj _35reg2841 = primCdr(_35reg2840);
Obj _35reg2842 = primCdr(_35reg2841);
Obj _35reg2843 = primCdr(_35reg2842);
Obj _35reg2844 = primEQ(Nil, _35reg2843);
if (True == _35reg2844) {
Obj _35reg2845 = primCdr(closureRef(co, 0));
Obj _35reg2846 = primCdr(_35reg2845);
Obj frees = _35reg2846;
Obj next = closureRef(co, 1);
pushCont(co, 14, _35clofun3944, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = body;
__arg2 = globalRef(intern("cora/lib/toc#id"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2110;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2879 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2880 = primCons(_35val2879, Nil);
Obj _35reg2881 = primCons(rb, _35reg2880);
Obj _35reg2882 = primCons(closureRef(co, 0), _35reg2881);
Obj _35reg2883 = primCons(intern("let"), _35reg2882);
__nargs = 2;
__arg1 = _35reg2883;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj rb = __arg1;
pushCont(co, 16, _35clofun3944, 1, rb);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc2109 = makeNative(15, _35clofun3944, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2853 = primIsCons(closureRef(co, 0));
if (True == _35reg2853) {
Obj _35reg2854 = primCar(closureRef(co, 0));
Obj _35reg2855 = primEQ(intern("let"), _35reg2854);
if (True == _35reg2855) {
Obj _35reg2856 = primCdr(closureRef(co, 0));
Obj _35reg2857 = primIsCons(_35reg2856);
if (True == _35reg2857) {
Obj _35reg2858 = primCdr(closureRef(co, 0));
Obj _35reg2859 = primCar(_35reg2858);
Obj a = _35reg2859;
Obj _35reg2860 = primCdr(closureRef(co, 0));
Obj _35reg2861 = primCdr(_35reg2860);
Obj _35reg2862 = primIsCons(_35reg2861);
if (True == _35reg2862) {
Obj _35reg2863 = primCdr(closureRef(co, 0));
Obj _35reg2864 = primCdr(_35reg2863);
Obj _35reg2865 = primCar(_35reg2864);
Obj b = _35reg2865;
Obj _35reg2866 = primCdr(closureRef(co, 0));
Obj _35reg2867 = primCdr(_35reg2866);
Obj _35reg2868 = primCdr(_35reg2867);
Obj _35reg2869 = primIsCons(_35reg2868);
if (True == _35reg2869) {
Obj _35reg2870 = primCdr(closureRef(co, 0));
Obj _35reg2871 = primCdr(_35reg2870);
Obj _35reg2872 = primCdr(_35reg2871);
Obj _35reg2873 = primCar(_35reg2872);
Obj c = _35reg2873;
Obj _35reg2874 = primCdr(closureRef(co, 0));
Obj _35reg2875 = primCdr(_35reg2874);
Obj _35reg2876 = primCdr(_35reg2875);
Obj _35reg2877 = primCdr(_35reg2876);
Obj _35reg2878 = primEQ(Nil, _35reg2877);
if (True == _35reg2878) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = b;
__arg2 = makeNative(17, _35clofun3944, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2109;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2902 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2903 = primCons(_35val2902, Nil);
Obj _35reg2904 = primCons(ra, _35reg2903);
Obj _35reg2905 = primCons(intern("do"), _35reg2904);
__nargs = 2;
__arg1 = _35reg2905;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3944) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj ra = __arg1;
Obj _35reg2901 = primIsSymbol(ra);
if (True == _35reg2901) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, _35clofun3944, 1, ra);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#tailify"));
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3944) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3943(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2606 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val2606;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2092 = makeNative(20, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2587 = primIsCons(closureRef(co, 0));
if (True == _35reg2587) {
Obj _35reg2588 = primCar(closureRef(co, 0));
Obj _35reg2589 = primEQ(intern("call"), _35reg2588);
if (True == _35reg2589) {
Obj _35reg2590 = primCdr(closureRef(co, 0));
Obj _35reg2591 = primIsCons(_35reg2590);
if (True == _35reg2591) {
Obj _35reg2592 = primCdr(closureRef(co, 0));
Obj _35reg2593 = primCar(_35reg2592);
Obj exp = _35reg2593;
Obj _35reg2594 = primCdr(closureRef(co, 0));
Obj _35reg2595 = primCdr(_35reg2594);
Obj _35reg2596 = primIsCons(_35reg2595);
if (True == _35reg2596) {
Obj _35reg2597 = primCdr(closureRef(co, 0));
Obj _35reg2598 = primCdr(_35reg2597);
Obj _35reg2599 = primCar(_35reg2598);
Obj cont = _35reg2599;
Obj _35reg2600 = primCdr(closureRef(co, 0));
Obj _35reg2601 = primCdr(_35reg2600);
Obj _35reg2602 = primCdr(_35reg2601);
Obj _35reg2603 = primEQ(Nil, _35reg2602);
if (True == _35reg2603) {
Obj _35reg2604 = primCons(cont, Nil);
Obj _35reg2605 = primCons(exp, _35reg2604);
pushCont(co, 0, _35clofun3943, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg2605;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2092;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc2091 = makeNative(1, _35clofun3943, 0, 1, closureRef(co, 0));
Obj _35reg2607 = primIsCons(closureRef(co, 0));
if (True == _35reg2607) {
Obj _35reg2608 = primCar(closureRef(co, 0));
Obj _35reg2609 = primEQ(intern("return"), _35reg2608);
if (True == _35reg2609) {
Obj _35reg2610 = primCdr(closureRef(co, 0));
Obj _35reg2611 = primIsCons(_35reg2610);
if (True == _35reg2611) {
Obj _35reg2612 = primCdr(closureRef(co, 0));
Obj _35reg2613 = primCar(_35reg2612);
Obj x = _35reg2613;
Obj _35reg2614 = primCdr(closureRef(co, 0));
Obj _35reg2615 = primCdr(_35reg2614);
Obj _35reg2616 = primEQ(Nil, _35reg2615);
if (True == _35reg2616) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2091;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc2090 = makeNative(2, _35clofun3943, 0, 1, closureRef(co, 0));
Obj _35reg2617 = primIsCons(closureRef(co, 0));
if (True == _35reg2617) {
Obj _35reg2618 = primCar(closureRef(co, 0));
Obj _35reg2619 = primEQ(intern("%closure"), _35reg2618);
if (True == _35reg2619) {
Obj _35reg2620 = primCdr(closureRef(co, 0));
Obj _35reg2621 = primIsCons(_35reg2620);
if (True == _35reg2621) {
Obj _35reg2622 = primCdr(closureRef(co, 0));
Obj _35reg2623 = primCar(_35reg2622);
Obj lam = _35reg2623;
Obj _35reg2624 = primCdr(closureRef(co, 0));
Obj _35reg2625 = primCdr(_35reg2624);
Obj more = _35reg2625;
Obj _35reg2626 = primCons(lam, more);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = _35reg2626;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2090;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2656 = __arg1;
Obj _35val2653= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = _35val2653;
__arg2 = _35val2656;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2654 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2653= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2655 = primCons(a, Nil);
pushCont(co, 4, _35clofun3943, 1, _35val2653);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2654;
__arg2 = _35reg2655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2653 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 5, _35clofun3943, 2, a, _35val2653);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc2089 = makeNative(3, _35clofun3943, 0, 1, closureRef(co, 0));
Obj _35reg2627 = primIsCons(closureRef(co, 0));
if (True == _35reg2627) {
Obj _35reg2628 = primCar(closureRef(co, 0));
Obj _35reg2629 = primEQ(intern("let"), _35reg2628);
if (True == _35reg2629) {
Obj _35reg2630 = primCdr(closureRef(co, 0));
Obj _35reg2631 = primIsCons(_35reg2630);
if (True == _35reg2631) {
Obj _35reg2632 = primCdr(closureRef(co, 0));
Obj _35reg2633 = primCar(_35reg2632);
Obj a = _35reg2633;
Obj _35reg2634 = primCdr(closureRef(co, 0));
Obj _35reg2635 = primCdr(_35reg2634);
Obj _35reg2636 = primIsCons(_35reg2635);
if (True == _35reg2636) {
Obj _35reg2637 = primCdr(closureRef(co, 0));
Obj _35reg2638 = primCdr(_35reg2637);
Obj _35reg2639 = primCar(_35reg2638);
Obj b = _35reg2639;
Obj _35reg2640 = primCdr(closureRef(co, 0));
Obj _35reg2641 = primCdr(_35reg2640);
Obj _35reg2642 = primCdr(_35reg2641);
Obj _35reg2643 = primIsCons(_35reg2642);
if (True == _35reg2643) {
Obj _35reg2644 = primCdr(closureRef(co, 0));
Obj _35reg2645 = primCdr(_35reg2644);
Obj _35reg2646 = primCdr(_35reg2645);
Obj _35reg2647 = primCar(_35reg2646);
Obj c = _35reg2647;
Obj _35reg2648 = primCdr(closureRef(co, 0));
Obj _35reg2649 = primCdr(_35reg2648);
Obj _35reg2650 = primCdr(_35reg2649);
Obj _35reg2651 = primCdr(_35reg2650);
Obj _35reg2652 = primEQ(Nil, _35reg2651);
if (True == _35reg2652) {
pushCont(co, 6, _35clofun3943, 2, c, a);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2089;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2676 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val2676;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2088 = makeNative(7, _35clofun3943, 0, 1, closureRef(co, 0));
Obj _35reg2657 = primIsCons(closureRef(co, 0));
if (True == _35reg2657) {
Obj _35reg2658 = primCar(closureRef(co, 0));
Obj _35reg2659 = primEQ(intern("do"), _35reg2658);
if (True == _35reg2659) {
Obj _35reg2660 = primCdr(closureRef(co, 0));
Obj _35reg2661 = primIsCons(_35reg2660);
if (True == _35reg2661) {
Obj _35reg2662 = primCdr(closureRef(co, 0));
Obj _35reg2663 = primCar(_35reg2662);
Obj x = _35reg2663;
Obj _35reg2664 = primCdr(closureRef(co, 0));
Obj _35reg2665 = primCdr(_35reg2664);
Obj _35reg2666 = primIsCons(_35reg2665);
if (True == _35reg2666) {
Obj _35reg2667 = primCdr(closureRef(co, 0));
Obj _35reg2668 = primCdr(_35reg2667);
Obj _35reg2669 = primCar(_35reg2668);
Obj y = _35reg2669;
Obj _35reg2670 = primCdr(closureRef(co, 0));
Obj _35reg2671 = primCdr(_35reg2670);
Obj _35reg2672 = primCdr(_35reg2671);
Obj _35reg2673 = primEQ(Nil, _35reg2672);
if (True == _35reg2673) {
Obj _35reg2674 = primCons(y, Nil);
Obj _35reg2675 = primCons(x, _35reg2674);
pushCont(co, 8, _35clofun3943, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg2675;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2088;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2088;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2088;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2088;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2088;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2706 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val2706;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2087 = makeNative(9, _35clofun3943, 0, 1, closureRef(co, 0));
Obj _35reg2677 = primIsCons(closureRef(co, 0));
if (True == _35reg2677) {
Obj _35reg2678 = primCar(closureRef(co, 0));
Obj _35reg2679 = primEQ(intern("if"), _35reg2678);
if (True == _35reg2679) {
Obj _35reg2680 = primCdr(closureRef(co, 0));
Obj _35reg2681 = primIsCons(_35reg2680);
if (True == _35reg2681) {
Obj _35reg2682 = primCdr(closureRef(co, 0));
Obj _35reg2683 = primCar(_35reg2682);
Obj x = _35reg2683;
Obj _35reg2684 = primCdr(closureRef(co, 0));
Obj _35reg2685 = primCdr(_35reg2684);
Obj _35reg2686 = primIsCons(_35reg2685);
if (True == _35reg2686) {
Obj _35reg2687 = primCdr(closureRef(co, 0));
Obj _35reg2688 = primCdr(_35reg2687);
Obj _35reg2689 = primCar(_35reg2688);
Obj y = _35reg2689;
Obj _35reg2690 = primCdr(closureRef(co, 0));
Obj _35reg2691 = primCdr(_35reg2690);
Obj _35reg2692 = primCdr(_35reg2691);
Obj _35reg2693 = primIsCons(_35reg2692);
if (True == _35reg2693) {
Obj _35reg2694 = primCdr(closureRef(co, 0));
Obj _35reg2695 = primCdr(_35reg2694);
Obj _35reg2696 = primCdr(_35reg2695);
Obj _35reg2697 = primCar(_35reg2696);
Obj z = _35reg2697;
Obj _35reg2698 = primCdr(closureRef(co, 0));
Obj _35reg2699 = primCdr(_35reg2698);
Obj _35reg2700 = primCdr(_35reg2699);
Obj _35reg2701 = primCdr(_35reg2700);
Obj _35reg2702 = primEQ(Nil, _35reg2701);
if (True == _35reg2702) {
Obj _35reg2703 = primCons(z, Nil);
Obj _35reg2704 = primCons(y, _35reg2703);
Obj _35reg2705 = primCons(x, _35reg2704);
pushCont(co, 10, _35clofun3943, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg2705;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2724 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2724;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2086 = makeNative(11, _35clofun3943, 0, 1, closureRef(co, 0));
Obj _35reg2707 = primIsCons(closureRef(co, 0));
if (True == _35reg2707) {
Obj _35reg2708 = primCar(closureRef(co, 0));
Obj _35reg2709 = primEQ(intern("lambda"), _35reg2708);
if (True == _35reg2709) {
Obj _35reg2710 = primCdr(closureRef(co, 0));
Obj _35reg2711 = primIsCons(_35reg2710);
if (True == _35reg2711) {
Obj _35reg2712 = primCdr(closureRef(co, 0));
Obj _35reg2713 = primCar(_35reg2712);
Obj args = _35reg2713;
Obj _35reg2714 = primCdr(closureRef(co, 0));
Obj _35reg2715 = primCdr(_35reg2714);
Obj _35reg2716 = primIsCons(_35reg2715);
if (True == _35reg2716) {
Obj _35reg2717 = primCdr(closureRef(co, 0));
Obj _35reg2718 = primCdr(_35reg2717);
Obj _35reg2719 = primCar(_35reg2718);
Obj body = _35reg2719;
Obj _35reg2720 = primCdr(closureRef(co, 0));
Obj _35reg2721 = primCdr(_35reg2720);
Obj _35reg2722 = primCdr(_35reg2721);
Obj _35reg2723 = primEQ(Nil, _35reg2722);
if (True == _35reg2723) {
pushCont(co, 12, _35clofun3943, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2086;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35cc2085 = makeNative(13, _35clofun3943, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg2725 = primIsSymbol(x);
if (True == _35reg2725) {
Obj _35reg2726 = primCons(x, Nil);
__nargs = 2;
__arg1 = _35reg2726;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2085;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2727 = __arg1;
Obj _35cc2084= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2727) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2084;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p2083 = __arg1;
Obj _35cc2084 = makeNative(14, _35clofun3943, 0, 1, _35p2083);
Obj x = _35p2083;
pushCont(co, 15, _35clofun3943, 1, _35cc2084);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#convert-protect?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2732 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2733 = primCons(f, args);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2732;
__arg2 = _35reg2733;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc2102 = makeNative(17, _35clofun3943, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2729 = primIsCons(closureRef(co, 1));
if (True == _35reg2729) {
Obj _35reg2730 = primCar(closureRef(co, 1));
Obj f = _35reg2730;
Obj _35reg2731 = primCdr(closureRef(co, 1));
Obj args = _35reg2731;
pushCont(co, 18, _35clofun3943, 2, f, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#closure-convert"));
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2102;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3943) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2761 = __arg1;
Obj _35val2760= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2762 = primCons(_35val2761, Nil);
Obj _35reg2763 = primCons(_35val2760, _35reg2762);
Obj _35reg2764 = primCons(a, _35reg2763);
Obj _35reg2765 = primCons(intern("let"), _35reg2764);
__nargs = 2;
__arg1 = _35reg2765;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3943) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3942(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2069 = makeNative(19, _35clofun3941, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2486 = primIsCons(closureRef(co, 0));
if (True == _35reg2486) {
Obj _35reg2487 = primCar(closureRef(co, 0));
Obj x = _35reg2487;
Obj _35reg2488 = primCdr(closureRef(co, 0));
Obj y = _35reg2488;
Obj s2 = closureRef(co, 1);
pushCont(co, 20, _35clofun3941, 3, y, s2, _35cc2069);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35p2066 = __arg1;
Obj _35p2067 = __arg2;
Obj _35cc2068 = makeNative(0, _35clofun3942, 0, 2, _35p2066, _35p2067);
Obj _35reg2490 = primEQ(Nil, _35p2066);
if (True == _35reg2490) {
Obj s2 = _35p2067;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2068;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2495 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2496 = primCons(x, _35val2495);
__nargs = 2;
__arg1 = _35reg2496;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc2075 = makeNative(2, _35clofun3942, 0, 0);
Obj _35reg2492 = primIsCons(closureRef(co, 0));
if (True == _35reg2492) {
Obj _35reg2493 = primCar(closureRef(co, 0));
Obj x = _35reg2493;
Obj _35reg2494 = primCdr(closureRef(co, 0));
Obj y = _35reg2494;
Obj s2 = closureRef(co, 1);
pushCont(co, 3, _35clofun3942, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2075;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2500 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2074= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2500) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc2074 = makeNative(4, _35clofun3942, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2497 = primIsCons(closureRef(co, 0));
if (True == _35reg2497) {
Obj _35reg2498 = primCar(closureRef(co, 0));
Obj x = _35reg2498;
Obj _35reg2499 = primCdr(closureRef(co, 0));
Obj y = _35reg2499;
Obj s2 = closureRef(co, 1);
pushCont(co, 5, _35clofun3942, 3, y, s2, _35cc2074);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2074;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p2071 = __arg1;
Obj _35p2072 = __arg2;
Obj _35cc2073 = makeNative(6, _35clofun3942, 0, 2, _35p2071, _35p2072);
Obj _35reg2501 = primEQ(Nil, _35p2071);
if (True == _35reg2501) {
Obj __ = _35p2072;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2073;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2082 = makeNative(8, _35clofun3942, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35cc2081 = makeNative(9, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2503 = primIsCons(closureRef(co, 0));
if (True == _35reg2503) {
Obj _35reg2504 = primCar(closureRef(co, 0));
Obj _35reg2505 = primEQ(intern("%closure-ref"), _35reg2504);
if (True == _35reg2505) {
Obj _35reg2506 = primCdr(closureRef(co, 0));
Obj _35reg2507 = primIsCons(_35reg2506);
if (True == _35reg2507) {
Obj _35reg2508 = primCdr(closureRef(co, 0));
Obj _35reg2509 = primCar(_35reg2508);
Obj __ = _35reg2509;
Obj _35reg2510 = primCdr(closureRef(co, 0));
Obj _35reg2511 = primCdr(_35reg2510);
Obj _35reg2512 = primEQ(Nil, _35reg2511);
if (True == _35reg2512) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35cc2080 = makeNative(10, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2513 = primIsCons(closureRef(co, 0));
if (True == _35reg2513) {
Obj _35reg2514 = primCar(closureRef(co, 0));
Obj _35reg2515 = primEQ(intern("quote"), _35reg2514);
if (True == _35reg2515) {
Obj _35reg2516 = primCdr(closureRef(co, 0));
Obj _35reg2517 = primIsCons(_35reg2516);
if (True == _35reg2517) {
Obj _35reg2518 = primCdr(closureRef(co, 0));
Obj _35reg2519 = primCar(_35reg2518);
Obj x = _35reg2519;
Obj _35reg2520 = primCdr(closureRef(co, 0));
Obj _35reg2521 = primCdr(_35reg2520);
Obj _35reg2522 = primEQ(Nil, _35reg2521);
if (True == _35reg2522) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc2079 = makeNative(11, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2523 = primIsCons(closureRef(co, 0));
if (True == _35reg2523) {
Obj _35reg2524 = primCar(closureRef(co, 0));
Obj _35reg2525 = primEQ(intern("%builtin"), _35reg2524);
if (True == _35reg2525) {
Obj _35reg2526 = primCdr(closureRef(co, 0));
Obj _35reg2527 = primIsCons(_35reg2526);
if (True == _35reg2527) {
Obj _35reg2528 = primCdr(closureRef(co, 0));
Obj _35reg2529 = primCar(_35reg2528);
Obj op = _35reg2529;
Obj _35reg2530 = primCdr(closureRef(co, 0));
Obj _35reg2531 = primCdr(_35reg2530);
Obj _35reg2532 = primEQ(Nil, _35reg2531);
if (True == _35reg2532) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35cc2078 = makeNative(12, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2533 = primIsCons(closureRef(co, 0));
if (True == _35reg2533) {
Obj _35reg2534 = primCar(closureRef(co, 0));
Obj _35reg2535 = primEQ(intern("%global"), _35reg2534);
if (True == _35reg2535) {
Obj _35reg2536 = primCdr(closureRef(co, 0));
Obj _35reg2537 = primIsCons(_35reg2536);
if (True == _35reg2537) {
Obj _35reg2538 = primCdr(closureRef(co, 0));
Obj _35reg2539 = primCar(_35reg2538);
Obj x = _35reg2539;
Obj _35reg2540 = primCdr(closureRef(co, 0));
Obj _35reg2541 = primCdr(_35reg2540);
Obj _35reg2542 = primEQ(Nil, _35reg2541);
if (True == _35reg2542) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35p2076 = __arg1;
Obj _35cc2077 = makeNative(13, _35clofun3942, 0, 1, _35p2076);
Obj _35reg2543 = primIsCons(_35p2076);
if (True == _35reg2543) {
Obj _35reg2544 = primCar(_35p2076);
Obj _35reg2545 = primEQ(intern("%const"), _35reg2544);
if (True == _35reg2545) {
Obj _35reg2546 = primCdr(_35p2076);
Obj _35reg2547 = primIsCons(_35reg2546);
if (True == _35reg2547) {
Obj _35reg2548 = primCdr(_35p2076);
Obj _35reg2549 = primCar(_35reg2548);
Obj x = _35reg2549;
Obj _35reg2550 = primCdr(_35p2076);
Obj _35reg2551 = primCdr(_35reg2550);
Obj _35reg2552 = primEQ(Nil, _35reg2551);
if (True == _35reg2552) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3942) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2077;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2558 = __arg1;
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = globalRef(intern("cora/lib/toc#union"));
__arg2 = Nil;
__arg3 = _35val2558;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35cc2095 = makeNative(15, _35clofun3942, 0, 0);
Obj _35reg2554 = primIsCons(closureRef(co, 0));
if (True == _35reg2554) {
Obj _35reg2555 = primCar(closureRef(co, 0));
Obj f = _35reg2555;
Obj _35reg2556 = primCdr(closureRef(co, 0));
Obj args = _35reg2556;
Obj _35reg2557 = primCons(f, args);
pushCont(co, 16, _35clofun3942, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = globalRef(intern("cora/lib/toc#free-vars"));
__arg2 = _35reg2557;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val2576 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#diff"));
__arg1 = _35val2576;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc2094 = makeNative(17, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2559 = primIsCons(closureRef(co, 0));
if (True == _35reg2559) {
Obj _35reg2560 = primCar(closureRef(co, 0));
Obj _35reg2561 = primEQ(intern("continuation"), _35reg2560);
if (True == _35reg2561) {
Obj _35reg2562 = primCdr(closureRef(co, 0));
Obj _35reg2563 = primIsCons(_35reg2562);
if (True == _35reg2563) {
Obj _35reg2564 = primCdr(closureRef(co, 0));
Obj _35reg2565 = primCar(_35reg2564);
Obj arg = _35reg2565;
Obj _35reg2566 = primCdr(closureRef(co, 0));
Obj _35reg2567 = primCdr(_35reg2566);
Obj _35reg2568 = primIsCons(_35reg2567);
if (True == _35reg2568) {
Obj _35reg2569 = primCdr(closureRef(co, 0));
Obj _35reg2570 = primCdr(_35reg2569);
Obj _35reg2571 = primCar(_35reg2570);
Obj body = _35reg2571;
Obj _35reg2572 = primCdr(closureRef(co, 0));
Obj _35reg2573 = primCdr(_35reg2572);
Obj _35reg2574 = primCdr(_35reg2573);
Obj _35reg2575 = primEQ(Nil, _35reg2574);
if (True == _35reg2575) {
pushCont(co, 18, _35clofun3942, 1, arg);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2094;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc2093 = makeNative(19, _35clofun3942, 0, 1, closureRef(co, 0));
Obj _35reg2577 = primIsCons(closureRef(co, 0));
if (True == _35reg2577) {
Obj _35reg2578 = primCar(closureRef(co, 0));
Obj _35reg2579 = primEQ(intern("tailcall"), _35reg2578);
if (True == _35reg2579) {
Obj _35reg2580 = primCdr(closureRef(co, 0));
Obj _35reg2581 = primIsCons(_35reg2580);
if (True == _35reg2581) {
Obj _35reg2582 = primCdr(closureRef(co, 0));
Obj _35reg2583 = primCar(_35reg2582);
Obj exp = _35reg2583;
Obj _35reg2584 = primCdr(closureRef(co, 0));
Obj _35reg2585 = primCdr(_35reg2584);
Obj _35reg2586 = primEQ(Nil, _35reg2585);
if (True == _35reg2586) {
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#free-vars"));
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3942) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3941(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2063 = makeNative(18, _35clofun3940, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg2366 = primIsCons(closureRef(co, 1));
if (True == _35reg2366) {
Obj _35reg2367 = primCar(closureRef(co, 1));
Obj _35reg2368 = primEQ(intern("let"), _35reg2367);
if (True == _35reg2368) {
Obj _35reg2369 = primCdr(closureRef(co, 1));
Obj _35reg2370 = primIsCons(_35reg2369);
if (True == _35reg2370) {
Obj _35reg2371 = primCdr(closureRef(co, 1));
Obj _35reg2372 = primCar(_35reg2371);
Obj a = _35reg2372;
Obj _35reg2373 = primCdr(closureRef(co, 1));
Obj _35reg2374 = primCdr(_35reg2373);
Obj _35reg2375 = primIsCons(_35reg2374);
if (True == _35reg2375) {
Obj _35reg2376 = primCdr(closureRef(co, 1));
Obj _35reg2377 = primCdr(_35reg2376);
Obj _35reg2378 = primCar(_35reg2377);
Obj b = _35reg2378;
Obj _35reg2379 = primCdr(closureRef(co, 1));
Obj _35reg2380 = primCdr(_35reg2379);
Obj _35reg2381 = primCdr(_35reg2380);
Obj _35reg2382 = primIsCons(_35reg2381);
if (True == _35reg2382) {
Obj _35reg2383 = primCdr(closureRef(co, 1));
Obj _35reg2384 = primCdr(_35reg2383);
Obj _35reg2385 = primCdr(_35reg2384);
Obj _35reg2386 = primCar(_35reg2385);
Obj c = _35reg2386;
Obj _35reg2387 = primCdr(closureRef(co, 1));
Obj _35reg2388 = primCdr(_35reg2387);
Obj _35reg2389 = primCdr(_35reg2388);
Obj _35reg2390 = primCdr(_35reg2389);
Obj _35reg2391 = primEQ(Nil, _35reg2390);
if (True == _35reg2391) {
pushCont(co, 20, _35clofun3940, 3, env, c, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2417 = __arg1;
Obj _35val2416= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2418 = primCons(_35val2417, Nil);
Obj _35reg2419 = primCons(_35val2416, _35reg2418);
Obj _35reg2420 = primCons(intern("do"), _35reg2419);
__nargs = 2;
__arg1 = _35reg2420;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj _35val2416 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 1, _35clofun3941, 1, _35val2416);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35cc2062 = makeNative(0, _35clofun3941, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg2399 = primIsCons(closureRef(co, 1));
if (True == _35reg2399) {
Obj _35reg2400 = primCar(closureRef(co, 1));
Obj _35reg2401 = primEQ(intern("do"), _35reg2400);
if (True == _35reg2401) {
Obj _35reg2402 = primCdr(closureRef(co, 1));
Obj _35reg2403 = primIsCons(_35reg2402);
if (True == _35reg2403) {
Obj _35reg2404 = primCdr(closureRef(co, 1));
Obj _35reg2405 = primCar(_35reg2404);
Obj x = _35reg2405;
Obj _35reg2406 = primCdr(closureRef(co, 1));
Obj _35reg2407 = primCdr(_35reg2406);
Obj _35reg2408 = primIsCons(_35reg2407);
if (True == _35reg2408) {
Obj _35reg2409 = primCdr(closureRef(co, 1));
Obj _35reg2410 = primCdr(_35reg2409);
Obj _35reg2411 = primCar(_35reg2410);
Obj y = _35reg2411;
Obj _35reg2412 = primCdr(closureRef(co, 1));
Obj _35reg2413 = primCdr(_35reg2412);
Obj _35reg2414 = primCdr(_35reg2413);
Obj _35reg2415 = primEQ(Nil, _35reg2414);
if (True == _35reg2415) {
pushCont(co, 2, _35clofun3941, 2, env, y);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2062;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2426 = __arg1;
Obj _35reg2427 = primCons(intern("if"), _35val2426);
__nargs = 2;
__arg1 = _35reg2427;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35val2425 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
pushCont(co, 4, _35clofun3941, 0);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2425;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2061 = makeNative(3, _35clofun3941, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg2421 = primIsCons(closureRef(co, 1));
if (True == _35reg2421) {
Obj _35reg2422 = primCar(closureRef(co, 1));
Obj _35reg2423 = primEQ(intern("if"), _35reg2422);
if (True == _35reg2423) {
Obj _35reg2424 = primCdr(closureRef(co, 1));
Obj args = _35reg2424;
pushCont(co, 5, _35clofun3941, 1, args);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2061;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2061;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val2446 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2447 = primCons(_35val2446, Nil);
Obj _35reg2448 = primCons(args, _35reg2447);
Obj _35reg2449 = primCons(intern("lambda"), _35reg2448);
__nargs = 2;
__arg1 = _35reg2449;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35val2445 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 7, _35clofun3941, 1, args);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35val2445;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2060 = makeNative(6, _35clofun3941, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg2428 = primIsCons(closureRef(co, 1));
if (True == _35reg2428) {
Obj _35reg2429 = primCar(closureRef(co, 1));
Obj _35reg2430 = primEQ(intern("lambda"), _35reg2429);
if (True == _35reg2430) {
Obj _35reg2431 = primCdr(closureRef(co, 1));
Obj _35reg2432 = primIsCons(_35reg2431);
if (True == _35reg2432) {
Obj _35reg2433 = primCdr(closureRef(co, 1));
Obj _35reg2434 = primCar(_35reg2433);
Obj args = _35reg2434;
Obj _35reg2435 = primCdr(closureRef(co, 1));
Obj _35reg2436 = primCdr(_35reg2435);
Obj _35reg2437 = primIsCons(_35reg2436);
if (True == _35reg2437) {
Obj _35reg2438 = primCdr(closureRef(co, 1));
Obj _35reg2439 = primCdr(_35reg2438);
Obj _35reg2440 = primCar(_35reg2439);
Obj body = _35reg2440;
Obj _35reg2441 = primCdr(closureRef(co, 1));
Obj _35reg2442 = primCdr(_35reg2441);
Obj _35reg2443 = primCdr(_35reg2442);
Obj _35reg2444 = primEQ(Nil, _35reg2443);
if (True == _35reg2444) {
pushCont(co, 8, _35clofun3941, 2, body, args);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2451 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2451) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2452 = primCons(x, Nil);
Obj _35reg2453 = primCons(intern("%global"), _35reg2452);
__nargs = 2;
__arg1 = _35reg2453;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label11:
{
Obj _35cc2059 = makeNative(9, _35clofun3941, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg2450 = primIsSymbol(x);
if (True == _35reg2450) {
pushCont(co, 10, _35clofun3941, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("elem?"));
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2059;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35cc2058 = makeNative(11, _35clofun3941, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj __ = closureRef(co, 0);
Obj _35reg2454 = primIsCons(closureRef(co, 1));
if (True == _35reg2454) {
Obj _35reg2455 = primCar(closureRef(co, 1));
Obj _35reg2456 = primEQ(intern("quote"), _35reg2455);
if (True == _35reg2456) {
Obj _35reg2457 = primCdr(closureRef(co, 1));
Obj _35reg2458 = primIsCons(_35reg2457);
if (True == _35reg2458) {
Obj _35reg2459 = primCdr(closureRef(co, 1));
Obj _35reg2460 = primCar(_35reg2459);
Obj x = _35reg2460;
Obj _35reg2461 = primCdr(closureRef(co, 1));
Obj _35reg2462 = primCdr(_35reg2461);
Obj _35reg2463 = primEQ(Nil, _35reg2462);
if (True == _35reg2463) {
Obj _35reg2464 = primCons(x, Nil);
Obj _35reg2465 = primCons(intern("%const"), _35reg2464);
__nargs = 2;
__arg1 = _35reg2465;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2058;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2475 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2057= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2475) {
if (True == True) {
Obj _35reg2476 = primCons(x, Nil);
Obj _35reg2477 = primCons(intern("%const"), _35reg2476);
__nargs = 2;
__arg1 = _35reg2477;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2478 = primCons(x, Nil);
Obj _35reg2479 = primCons(intern("%const"), _35reg2478);
__nargs = 2;
__arg1 = _35reg2479;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj _35val2472 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2057= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2472) {
if (True == True) {
Obj _35reg2473 = primCons(x, Nil);
Obj _35reg2474 = primCons(intern("%const"), _35reg2473);
__nargs = 2;
__arg1 = _35reg2474;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 13, _35clofun3941, 2, x, _35cc2057);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2466 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2057= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2466) {
if (True == True) {
Obj _35reg2467 = primCons(x, Nil);
Obj _35reg2468 = primCons(intern("%const"), _35reg2467);
__nargs = 2;
__arg1 = _35reg2468;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2469 = primIsString(x);
if (True == _35reg2469) {
if (True == True) {
Obj _35reg2470 = primCons(x, Nil);
Obj _35reg2471 = primCons(intern("%const"), _35reg2470);
__nargs = 2;
__arg1 = _35reg2471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 14, _35clofun3941, 2, x, _35cc2057);
__nargs = 2;
__arg0 = globalRef(intern("boolean?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35p2055 = __arg1;
Obj _35p2056 = __arg2;
Obj _35cc2057 = makeNative(12, _35clofun3941, 0, 2, _35p2055, _35p2056);
Obj __ = _35p2055;
Obj x = _35p2056;
pushCont(co, 15, _35clofun3941, 2, x, _35cc2057);
__nargs = 2;
__arg0 = globalRef(intern("number?"));
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2484 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2485 = primCons(x, _35val2484);
__nargs = 2;
__arg1 = _35reg2485;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3941) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35cc2070 = makeNative(17, _35clofun3941, 0, 0);
Obj _35reg2481 = primIsCons(closureRef(co, 0));
if (True == _35reg2481) {
Obj _35reg2482 = primCar(closureRef(co, 0));
Obj x = _35reg2482;
Obj _35reg2483 = primCdr(closureRef(co, 0));
Obj y = _35reg2483;
Obj s2 = closureRef(co, 1);
pushCont(co, 18, _35clofun3941, 1, x);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2070;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35val2489 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2069= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2489) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#union"));
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2069;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3941) { co->ctx.pc = ps; goto fail; };
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

void _35clofun3940(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2334 = __arg1;
Obj find = _35val2334;
pushCont(co, 20, _35clofun3939, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
pushCont(co, 0, _35clofun3940, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2338 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2338) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("cadr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2337 = __arg1;
Obj find = _35val2337;
pushCont(co, 2, _35clofun3940, 1, find);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
pushCont(co, 3, _35clofun3940, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2054 = makeNative(5, _35clofun3940, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg2340 = primSub(n, makeNumber(1));
Obj _35reg2341 = primGenSym(intern("tmp"));
Obj _35reg2342 = primCons(_35reg2341, res);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg2340;
__arg2 = _35reg2342;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35p2051 = __arg1;
Obj _35p2052 = __arg2;
Obj _35cc2053 = makeNative(6, _35clofun3940, 0, 2, _35p2051, _35p2052);
Obj _35reg2343 = primEQ(makeNumber(0), _35p2051);
if (True == _35reg2343) {
Obj res = _35p2052;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2345 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2345;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35cc2065 = makeNative(8, _35clofun3940, 0, 0);
Obj env = closureRef(co, 0);
Obj ls = closureRef(co, 1);
pushCont(co, 9, _35clofun3940, 1, ls);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2356 = __arg1;
Obj _35reg2354= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2357 = primCons(_35reg2354, _35val2356);
__nargs = 2;
__arg1 = _35reg2357;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35val2355 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2354= co->ctx.stk.stack[co->ctx.stk.base + 1];
pushCont(co, 11, _35clofun3940, 1, _35reg2354);
__nargs = 3;
__arg0 = globalRef(intern("map"));
__arg1 = _35val2355;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2362 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2363 = primCons(_35val2362, Nil);
Obj _35reg2364 = primCons(tmp, _35reg2363);
Obj _35reg2365 = primCons(intern("lambda"), _35reg2364);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
__arg2 = _35reg2365;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2360 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj tmp = _35val2360;
Obj _35reg2361 = primCons(op, args);
pushCont(co, 13, _35clofun3940, 2, tmp, env);
__nargs = 3;
__arg0 = globalRef(intern("append"));
__arg1 = _35reg2361;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2351 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj provided = _35val2351;
Obj _35reg2352 = primEQ(required, provided);
if (True == _35reg2352) {
Obj _35reg2353 = primCons(op, Nil);
Obj _35reg2354 = primCons(intern("%builtin"), _35reg2353);
pushCont(co, 12, _35clofun3940, 2, args, _35reg2354);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2358 = primGT(required, provided);
if (True == _35reg2358) {
Obj _35reg2359 = primSub(required, provided);
pushCont(co, 14, _35clofun3940, 3, op, args, env);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#temp-list"));
__arg1 = _35reg2359;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label16:
{
Obj _35val2350 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj required = _35val2350;
pushCont(co, 15, _35clofun3940, 4, required, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("length"));
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2349 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35cc2064= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2349) {
pushCont(co, 16, _35clofun3940, 3, op, args, env);
__nargs = 2;
__arg0 = globalRef(intern("cora/lib/toc#builtin->args"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc2064 = makeNative(10, _35clofun3940, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj env = closureRef(co, 0);
Obj _35reg2346 = primIsCons(closureRef(co, 1));
if (True == _35reg2346) {
Obj _35reg2347 = primCar(closureRef(co, 1));
Obj op = _35reg2347;
Obj _35reg2348 = primCdr(closureRef(co, 1));
Obj args = _35reg2348;
pushCont(co, 17, _35clofun3940, 4, op, args, env, _35cc2064);
__nargs = 2;
__arg0 = globalRef(intern("builtin?"));
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2064;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2394 = __arg1;
Obj _35val2392= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2395 = primCons(_35val2394, Nil);
Obj _35reg2396 = primCons(_35val2392, _35reg2395);
Obj _35reg2397 = primCons(a, _35reg2396);
Obj _35reg2398 = primCons(intern("let"), _35reg2397);
__nargs = 2;
__arg1 = _35reg2398;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3940) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2392 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2393 = primCons(a, env);
pushCont(co, 19, _35clofun3940, 2, _35val2392, a);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#parse"));
__arg1 = _35reg2393;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3940) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

void _35clofun3939(struct Cora* co){
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
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35cc2035 = makeNative(0, _35clofun3939, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg2222 = primIsCons(closureRef(co, 1));
if (True == _35reg2222) {
Obj _35reg2223 = primCar(closureRef(co, 1));
Obj __ = _35reg2223;
Obj _35reg2224 = primCdr(closureRef(co, 1));
Obj y = _35reg2224;
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2035;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc2034 = makeNative(1, _35clofun3939, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg2225 = primIsCons(closureRef(co, 1));
if (True == _35reg2225) {
Obj _35reg2226 = primCar(closureRef(co, 1));
Obj _35reg2227 = primIsCons(_35reg2226);
if (True == _35reg2227) {
Obj _35reg2228 = primCar(closureRef(co, 1));
Obj _35reg2229 = primCar(_35reg2228);
Obj x = _35reg2229;
Obj _35reg2230 = primCar(closureRef(co, 1));
Obj _35reg2231 = primCdr(_35reg2230);
Obj y = _35reg2231;
Obj _35reg2232 = primCdr(closureRef(co, 1));
Obj __ = _35reg2232;
Obj _35reg2233 = primEQ(var, x);
if (True == _35reg2233) {
Obj _35reg2234 = primCons(x, y);
__nargs = 2;
__arg1 = _35reg2234;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2034;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35p2031 = __arg1;
Obj _35p2032 = __arg2;
Obj _35cc2033 = makeNative(2, _35clofun3939, 0, 2, _35p2031, _35p2032);
Obj var = _35p2031;
Obj _35reg2235 = primEQ(Nil, _35p2032);
if (True == _35reg2235) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2033;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2240 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#foldl"));
__arg1 = f;
__arg2 = _35val2240;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35cc2040 = makeNative(4, _35clofun3939, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg2237 = primIsCons(closureRef(co, 2));
if (True == _35reg2237) {
Obj _35reg2238 = primCar(closureRef(co, 2));
Obj x = _35reg2238;
Obj _35reg2239 = primCdr(closureRef(co, 2));
Obj y = _35reg2239;
pushCont(co, 5, _35clofun3939, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35p2036 = __arg1;
Obj _35p2037 = __arg2;
Obj _35p2038 = __arg3;
Obj _35cc2039 = makeNative(6, _35clofun3939, 0, 3, _35p2036, _35p2037, _35p2038);
Obj f = _35p2036;
Obj acc = _35p2037;
Obj _35reg2241 = primEQ(Nil, _35p2038);
if (True == _35reg2241) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2046 = makeNative(8, _35clofun3939, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg2243 = primIsCons(closureRef(co, 2));
if (True == _35reg2243) {
Obj _35reg2244 = primCar(closureRef(co, 2));
Obj a = _35reg2244;
Obj _35reg2245 = primCdr(closureRef(co, 2));
Obj b = _35reg2245;
Obj _35reg2246 = primAdd(pos, makeNumber(1));
__nargs = 4;
__arg0 = globalRef(intern("cora/lib/toc#pos-in-list0"));
__arg1 = _35reg2246;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2046;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc2045 = makeNative(9, _35clofun3939, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg2247 = primIsCons(closureRef(co, 2));
if (True == _35reg2247) {
Obj _35reg2248 = primCar(closureRef(co, 2));
Obj a = _35reg2248;
Obj _35reg2249 = primCdr(closureRef(co, 2));
Obj b = _35reg2249;
Obj _35reg2250 = primEQ(x, a);
if (True == _35reg2250) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2045;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35p2041 = __arg1;
Obj _35p2042 = __arg2;
Obj _35p2043 = __arg3;
Obj _35cc2044 = makeNative(10, _35clofun3939, 0, 3, _35p2041, _35p2042, _35p2043);
Obj __ = _35p2041;
Obj x = _35p2042;
Obj _35reg2251 = primEQ(Nil, _35p2043);
if (True == _35reg2251) {
__nargs = 2;
__arg1 = makeNumber(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2044;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
__nargs = 2;
__arg0 = globalRef(intern("error"));
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2257 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2258 = primLT(_35val2257, makeNumber(0));
if (True == _35reg2258) {
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#exist-in-env"));
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj _35cc2050 = makeNative(13, _35clofun3939, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg2254 = primIsCons(closureRef(co, 1));
if (True == _35reg2254) {
Obj _35reg2255 = primCar(closureRef(co, 1));
Obj hd = _35reg2255;
Obj _35reg2256 = primCdr(closureRef(co, 1));
Obj tl = _35reg2256;
pushCont(co, 14, _35clofun3939, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#index"));
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35p2047 = __arg1;
Obj _35p2048 = __arg2;
Obj _35cc2049 = makeNative(15, _35clofun3939, 0, 2, _35p2047, _35p2048);
Obj x = _35p2047;
Obj _35reg2259 = primEQ(Nil, _35p2048);
if (True == _35reg2259) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2331 = __arg1;
Obj _35reg2332 = primNot(_35val2331);
__nargs = 2;
__arg1 = _35reg2332;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val2330 = __arg1;
pushCont(co, 17, _35clofun3939, 0);
__nargs = 2;
__arg0 = globalRef(intern("null?"));
__arg1 = _35val2330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x = __arg1;
pushCont(co, 18, _35clofun3939, 0);
__nargs = 3;
__arg0 = globalRef(intern("cora/lib/toc#assq"));
__arg1 = x;
__arg2 = globalRef(intern("cora/lib/toc#*builtin-prims*"));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2335 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2335) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != _35clofun3939) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(intern("caddr"));
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != _35clofun3939) { co->ctx.pc = ps; goto fail; };
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

